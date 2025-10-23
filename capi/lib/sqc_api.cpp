/// \file sqc_api.cpp
/// \brief Submit qasm to qauntum scheduler
///
/// Copyright (c) RIKEN, Japan. All rights reserved.
/// 
/// \note
/// - When outputting an error, it does not indicate which API it occurred in.
/// - Write the following two lines for gate functions.
///   - No check if a nonexistent bit number is specified.
///   - Do not check if an operation cannot be added (adding an operation that exceeds the number of MAX_N_GATES).

#undef USE_PYTHON

#ifdef USE_PYTHON
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <iostream>
#include <fstream> 
#include <thread>
#define _use_backend_strings
#include "../include/sqc_api.h"
#include <nlohmann/json.hpp>

#include "sqc_apis.h"
#include "sqc_rpc_client.h"

#define TIMING 1
#ifdef TIMING
  extern "C" double gettimeofday_sec();
#endif

//#include "sqc_rpc_sched_conv_enums.h"


static constexpr char s_default_user[]       = "USER";
static constexpr char s_default_shots[]      = "10";
static constexpr char s_default_server[]     = "ip:port";
static constexpr char s_ibm_request_server[] = "ip:port";
static constexpr char s_qtm_request_server[] = "ip:port";
static constexpr char s_default_priority[] = "0";
static const char *default_usr_conf_dir = "~/.sqc_rpc_sched/";
extern "C"{
const char *sqc_rpc_sched_job_status_to_string(sqc_rpc_sched_job_status_t status);
}

#define USLP_SEC 50000

int charncmp(char *s1, char *s2, int n)
{
  for(int i=0; i<n; i++){
    if(s1[i] != s2[i]) return 1;
  }
  return 0;
}

/*
 * SQCQCRun Wrapper for TKET
 */
int sqcQTMQCRunTket(sqcQC* qcHandle, sqcBackend qc_type, sqcRunOptions options, int *len, char **result)
{
  int res = 0;
  switch (qc_type) {
    case SQC_RPC_SCHED_QC_TYPE_UNKNOWN: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_RQC_REST: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_IBM_REST: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_SLURM_REST: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_QTM_GRPC: {
      sqcOut r;
      res = sqcQCRun(qcHandle, qc_type, options, &r);
      *len = r.n;
      *result = (char *)malloc(sizeof(char)*(*len+1));
      strcpy(*result, r.result);
      free(r.result);
      return res;
    }
    case SQC_RPC_SCHED_QC_TYPE_QTM_SIM_GRPC: {
      sqcOut r;
      res = sqcQCRun(qcHandle, qc_type, options, &r);
      *len = r.n;
      *result = (char *)malloc(sizeof(char)*(*len+1));
      strcpy(*result, r.result);
      free(r.result);
      return res;
    }
    case SQC_RPC_SCHED_QC_TYPE_IBM_DACC: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_DUMMY: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is unknown\n",__func__,qc_type);
      res = SQC_RESULT_INVALID_ARGS;
      break;
    }
    default: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is unknown\n",__func__,qc_type);
      res = SQC_RESULT_INVALID_ARGS;
      break;
    }
  }
  return res; 
}  /* sqcQTMQCRunTket */

// FROM:app/sqc_rpc_client/status.c, modified
sqc_result_t
rpc_job_status(rpc_session_client_t *session, const char *job_id,
               sqc_rpc_sched_job_status_t *status, sqcOut *output) {
  sqc_result_t ret = SQC_RESULT_ANY_FAILURES;
  sqc_result_t request_result = SQC_RESULT_ANY_FAILURES;
  sqc_result_t code = SQC_RESULT_ANY_FAILURES;
  char *msg = NULL;
  char *result = NULL;


  if (likely(session != NULL && *session != NULL && job_id != NULL && status != NULL)) {
    request_result = rpc_session_client_job_status(session, job_id, &code, &msg, status, &result);

    if (likely(request_result == SQC_RESULT_OK)) {
      sqc_msg_debug(5, "job_status request succeeded\n");
      printf("job_status reply:\n");
      printf("  code    = %lld (%s)\n", (long long) code, sqc_error_get_string(code));
      printf("  message = '%s'\n", msg);
      printf("  status  = %d (%s)\n", (int) *status, sqc_rpc_sched_job_status_to_string(*status));
      if (result != NULL) {
        printf("  result  = '%s'\n", result);
      }
      // TODO (currently only "raw" is supported)
      if (*status == SQC_RPC_SCHED_JOB_STATUS_DONE) {
        int len = strlen(result);
        output->result = (char *)malloc(sizeof(char)*(len+1));
        memcpy(output->result, result, len);
        output->result[len] = 0;
        output->n = len;
      }
      ret = SQC_RESULT_OK;
    } else {
      ret = request_result;
      sqc_msg_error("job_status request failed: %s\n", sqc_error_get_string(ret));
    }
    free(msg);
    free(result);

  } else {
    ret = SQC_RESULT_INVALID_ARGS;
    sqc_msg_error("%s\n", sqc_error_get_string(ret));
  }
  return ret;
}

sqc_result_t
rpc_get_info(rpc_session_client_t *session, sqc_rpc_sched_qc_type_t qc_type, const char *info_type, char **result)
{
  sqc_result_t ret = SQC_RESULT_ANY_FAILURES;
  sqc_result_t request_result = SQC_RESULT_ANY_FAILURES;
  sqc_result_t code = SQC_RESULT_ANY_FAILURES;
  char *msg = NULL;

  if (likely(session != NULL && *session != NULL )){
    request_result = rpc_session_client_get_info(session, info_type, &code, &msg, result);
    // TODO return result
  }

  return ret;
}

sqc_result_t
rpc_submit_job(rpc_session_client_t *session, uint8_t priority, const char *qasm, size_t shots,
               sqc_rpc_sched_qc_type_t qc_type, sqc_rpc_sched_transpiler_t transpiler,
               const char *remark, char **job_id) {
  sqc_result_t ret = SQC_RESULT_ANY_FAILURES;
  sqc_result_t request_result = SQC_RESULT_ANY_FAILURES;
  sqc_result_t code = 0u;
  char *msg = NULL;

  if (likely(session != NULL && *session != NULL && qasm != NULL && remark != NULL &&
             job_id != NULL)) {
    request_result = rpc_session_client_submit_job(session, priority, qasm, shots, qc_type,
                                                   transpiler, remark, &code, &msg, job_id);
    if (likely(request_result == SQC_RESULT_OK)) {
      printf("submit_job reply:\n");
      printf("  code    = %lld (%s)\n", (long long) code, sqc_error_get_string(code));
      printf("  message = '%s'\n", msg);
      if (*job_id != NULL) {
        printf("  job_id  = %s\n", *job_id);
      }
      ret = SQC_RESULT_OK;
      sqc_msg_debug(5, "submit_job request succeeded\n");
    } else {
      ret = request_result;
      sqc_msg_error("submit_job request failed: %s\n", sqc_error_get_string(ret));
    }
    free(msg);

  } else {
    ret = SQC_RESULT_INVALID_ARGS;
    sqc_msg_error("%s\n", sqc_error_get_string(ret));
  }

  return ret;
}

int sqc_set_priority(uint8_t *priority)
{
  // Note: must be modified to your system
  const char *num_nodes = getenv("PJM_NODE");
  if (likely(num_nodes != NULL)) {
    if (atoi(num_nodes) > 1) {
      *priority = 1;
    } else {
      *priority = 0;
    }
  } else {
    *priority = 0;
  }
  return SQC_RESULT_OK;
}

// FROM:app/sqc_rpc_client/submit.c, modified
int u_subcmd_submit(rpc_auth_method auth_method,
                uint8_t priority, const char *qasm, size_t shots,
                sqc_rpc_sched_qc_type_t qc_type, 
                const char *remark, sqcOut *result) {
  int res = 0;
  const char *server = getenv("SQC_RPC_SERVER");
  bool prefer_ipv4 = false;
  const char *conf_dir = default_usr_conf_dir;
  sqc_rpc_sched_transpiler_t transpiler = SQC_RPC_SCHED_RQC_TRANSPILER_NONE;
  bool wait_completion = true;
  uint32_t sleep_interval = 1u;
  int create_result = SQC_RESULT_ANY_FAILURES;
  int submit_result = SQC_RESULT_ANY_FAILURES;
  int status_result = SQC_RESULT_ANY_FAILURES;
  rpc_session_client_t session = NULL;

#ifdef TIMING
  double et1, et2, et3;
#endif
#ifdef TIMING
    et1 = gettimeofday_sec();
#endif
  char *job_id = NULL;
  sqc_rpc_sched_job_status_t job_status = SQC_RPC_SCHED_JOB_STATUS_UNKNOWN;
  sqc_set_priority(&priority);

  if (likely(server != NULL && conf_dir != NULL && qasm != NULL && remark != NULL)) {
    create_result = rpc_session_client_create_from_conf_dir(&session, server, prefer_ipv4,
                                                            auth_method, conf_dir);
#ifdef TIMING
    et2 = gettimeofday_sec();
#endif
    if (likely(create_result == SQC_RESULT_OK)) {
      submit_result = rpc_submit_job(&session, priority, qasm, shots, qc_type, transpiler, remark,
                                     &job_id);
#ifdef TIMING
    et3 = gettimeofday_sec();
#endif
      if (likely(submit_result == SQC_RESULT_OK)) {
#ifdef TIMING
         sqc_msg_debug(5, "TIMING:rpc_session_client_create %f\n",et2-et1);
         sqc_msg_debug(5, "TIMING:rpc_submit_job            %f\n",et3-et2);
#endif
        if (wait_completion == true) {
          printf("\n");

          for (;;) {
            sleep(sleep_interval);
            status_result = rpc_job_status(&session, job_id, &job_status, result);
            if (likely(status_result == SQC_RESULT_OK)) {
              if (job_status == SQC_RPC_SCHED_JOB_STATUS_DONE ||
                  job_status == SQC_RPC_SCHED_JOB_STATUS_CANCELLED) {
                res = SQC_RESULT_OK;
                break;
              } else if (job_status == SQC_RPC_SCHED_JOB_STATUS_CREATED ||
                         job_status == SQC_RPC_SCHED_JOB_STATUS_QUEUED ||
                         job_status == SQC_RPC_SCHED_JOB_STATUS_RUNNING) {
                printf("\n");
              } else {
                res = SQC_RESULT_INVALID_STATE;
                break;
              }
            } else {
              res = status_result;
              break;
            }
          }

        } else {
          res = SQC_RESULT_OK;
        }
      } else {
        res = submit_result;
      }

    } else {
      res = create_result;
    }
    rpc_session_client_destroy(&session);
  } else {
    res = SQC_RESULT_INVALID_ARGS;
    sqc_msg_error("%s\n", sqc_error_get_string(res));
  }

  return res;
}

int sqcQCRun(sqcQC* qcHandle, sqcBackend qc_type, sqcRunOptions opt, sqcOut *result)
{
  int res = 0;

  std::string qasm_str;
  if(qcHandle->qasm == NULL && opt.inFormat != SQC_IN_QIR){
    int len = (qcHandle->ngates)*32;
    qcHandle->qasm = (char *)malloc(sizeof(char)*len);
    len = sqcConvQASMtoMemory(qcHandle, qc_type, qcHandle->qasm, (size_t)len);
    if(len<=0){
      printf("Buffer is short (%s:%d)\n",__FILE__,__LINE__);
      sqcDestroyQuantumCircuit(qcHandle);
      exit(1);
    }
    qasm_str = std::string(qcHandle->qasm);
  }else if(qcHandle->qasm == NULL && opt.inFormat == SQC_IN_QIR){
   // In case of QIR, the input strings must be sepcified in char *
  }else{
    qasm_str = std::string(qcHandle->qasm);
  }

  // TODO: transpiler will be specfied by options
  switch (qc_type) {
    case SQC_RPC_SCHED_QC_TYPE_UNKNOWN: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_RQC_REST: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_IBM_REST: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_SLURM_REST: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is not supported yet\n",__func__,qc_type);
      res = SQC_RESULT_UNSUPPORTED;
      break;
    }
    case SQC_RPC_SCHED_QC_TYPE_QTM_GRPC: {
     res = u_subcmd_submit((rpc_auth_method)opt.auth_method, opt.priority, qasm_str.c_str(), opt.nshots, qc_type, "test", result);
      return res;
    }
    case SQC_RPC_SCHED_QC_TYPE_QTM_SIM_GRPC: {
     res = u_subcmd_submit((rpc_auth_method)opt.auth_method, opt.priority, qasm_str.c_str(), opt.nshots, qc_type, "test", result);
     return res;
    }
    case SQC_RPC_SCHED_QC_TYPE_IBM_DACC: {
     res = u_subcmd_submit((rpc_auth_method)opt.auth_method, opt.priority, qasm_str.c_str(), opt.nshots, qc_type, "test", result);
     return res;
    }
    case SQC_RPC_SCHED_QC_TYPE_DUMMY: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is unknown\n",__func__,qc_type);
      res = SQC_RESULT_INVALID_ARGS;
      break;
    }
    default: {
      fprintf(stderr,"ERROR(%s):qc_type = %d is unknown\n",__func__,qc_type);
      res = SQC_RESULT_INVALID_ARGS;
      break;
    }
  }

  return res;
} /* sqcQCRun */

int sqcIbmdTranspileInfo(sqcQC* qcHandle, sqcBackend backend)
{
  int res = 0;
  const char *server = getenv("SQC_RPC_SERVER");
  bool prefer_ipv4 = false;
  const char *conf_dir = default_usr_conf_dir;
  rpc_auth_method auth_method = RPC_AUTH_METHOD_JWT; // TODO: must be variable
  bool wait_completion = true;
  uint32_t sleep_interval = 1u;
  int create_result = SQC_RESULT_ANY_FAILURES;
  int submit_result = SQC_RESULT_ANY_FAILURES;
  int status_result = SQC_RESULT_ANY_FAILURES;
  rpc_session_client_t session = NULL;
  char *job_id = NULL;
  sqc_rpc_sched_job_status_t job_status = SQC_RPC_SCHED_JOB_STATUS_UNKNOWN;

  if (likely(server != NULL && conf_dir != NULL && backend == SQC_RPC_SCHED_QC_TYPE_IBM_DACC)) {
    create_result = rpc_session_client_create_from_conf_dir(&session, server, prefer_ipv4,
                                                            auth_method, conf_dir);
    if (likely(create_result == SQC_RESULT_OK)) {
      submit_result = rpc_get_info(&session, backend, 
                                   "backend_config_json", &(qcHandle->backend_config_json));
      submit_result = rpc_get_info(&session, backend, 
                                   "backend_props_json", &(qcHandle->backend_props_json));
    } else {
      res = SQC_RESULT_INVALID_ARGS;
      sqc_msg_error("%s\n", sqc_error_get_string(res));
    }
  } else {
    res = SQC_RESULT_INVALID_ARGS;
    sqc_msg_error("%s\n", sqc_error_get_string(res));
  }
  return SQC_RESULT_OK;
} /* sqcIbmdTranspileInfo */
