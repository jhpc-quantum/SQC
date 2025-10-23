/// \file sqc_out.h
/// \brief API related to execution results
///
/// Copyright (c) RIKEN, Japan. All rights reserved.

#ifdef __cplusplus
extern "C"{
#endif

typedef enum{
  SQC_OUT_RAW,
  SQC_OUT_HIST,
  SQC_OUT_ALL_BIN,
  SQC_OUT_ALL_CHAR,
  SQC_N_OUTKIND,
} sqcOutputKind;

typedef enum{
  SQC_IN_QASM,
  SQC_IN_QIR,
  SQC_N_INKIND,
} sqcInputKind;

typedef struct sqc_out{
  sqcOutputKind format;
  int           n;         // strlen for RAW & nshots for CHAR/BIN/HIST
  int           nqubits;
  char          *result;   // RAW result[]  ALL_BIN [n*nqubits/8]
  char          **result2; // ALL_CHAR result2[nshots][qubits]
  char          **index;   // HIST
  int           *count;    // HIST
}sqcOut;

void sqcFreeOut      (sqcOut *, sqcOutputKind);
void sqcPrintQCResult(FILE *, sqcOut *, sqcOutputKind);

#ifdef __cplusplus
}
#endif
