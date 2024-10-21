#include "sqc_api.h"
#include <stdlib.h>
#include <string.h>

#if defined(FAKE_PROVIDER) 
#define KIND (Fake20QV1)
#ifndef OPT_LEVEL
sqcFakeProviderOption opt = {0};
#else
sqcFakeProviderOption opt = {OPT_LEVEL};
#endif
#elif defined(IBM_PROVIDER)
#fatal /* Not Implemented */
#else /* other */
#fatal 
#endif

int main(int argc, char *argv[])
{
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.9141051329108063, 0);
  sqcRZGate(q, -0.3275297983097762, 0);
  sqcRYGate(q, 0.7603605855332635, 1);
  sqcRZGate(q, 0.8163378050124113, 1);
  sqcRYGate(q, 2.5944492229309453, 2);
  sqcRZGate(q, 1.135411355323681, 2);
  sqcRYGate(q, 1.2657035610534955, 3);
  sqcRZGate(q, -1.1056254420495484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0983385020408383, 0);
  sqcRZGate(q, 2.732231841017286, 0);
  sqcRYGate(q, 0.4133165687625828, 1);
  sqcRZGate(q, -1.0622454979865756, 1);
  sqcRYGate(q, -2.9606552596093247, 2);
  sqcRZGate(q, 0.2657594418058755, 2);
  sqcRYGate(q, 0.7472209013494329, 3);
  sqcRZGate(q, 1.914044490928646, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5612864449924437, 0);
  sqcRZGate(q, 2.106259396208615, 0);
  sqcRYGate(q, -2.0722135729298783, 1);
  sqcRZGate(q, 1.065478232523959, 1);
  sqcRYGate(q, 0.41029841502833553, 2);
  sqcRZGate(q, 2.0343862185816253, 2);
  sqcRYGate(q, -2.363611361137737, 3);
  sqcRZGate(q, 1.1068629653511055, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6524507783569937, 0);
  sqcRZGate(q, 0.03974233575471383, 0);
  sqcRYGate(q, 2.3932369183189612, 1);
  sqcRZGate(q, 0.20952586589640965, 1);
  sqcRYGate(q, -2.4577960164094543, 2);
  sqcRZGate(q, 0.5653003594296069, 2);
  sqcRYGate(q, 0.16728445510540965, 3);
  sqcRZGate(q, 3.058760400619522, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.646187967275738, 0);
  sqcRZGate(q, -2.3547138277788706, 0);
  sqcRYGate(q, 2.769505301433922, 1);
  sqcRZGate(q, -2.314404428698046, 1);
  sqcRYGate(q, -0.9930923670223565, 2);
  sqcRZGate(q, 0.6456386524663554, 2);
  sqcRYGate(q, -1.619527812867083, 3);
  sqcRZGate(q, 2.892729322633029, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9567957058169609, 0);
  sqcRZGate(q, 2.008717502094784, 0);
  sqcRYGate(q, 0.3269950703984844, 1);
  sqcRZGate(q, -1.4986762319514515, 1);
  sqcRYGate(q, -0.7259160975138474, 2);
  sqcRZGate(q, 0.6930557590044684, 2);
  sqcRYGate(q, 0.443943594345539, 3);
  sqcRZGate(q, 3.0457872821519008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.067877401213588, 0);
  sqcRZGate(q, -1.410112158439527, 0);
  sqcRYGate(q, 0.059014397069483415, 1);
  sqcRZGate(q, 2.5444924147002097, 1);
  sqcRYGate(q, -0.6183878363454832, 2);
  sqcRZGate(q, -1.4858820524398328, 2);
  sqcRYGate(q, 0.8245093754993938, 3);
  sqcRZGate(q, 1.6896391539490379, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9357884650911137, 0);
  sqcRZGate(q, 2.994554908057513, 0);
  sqcRYGate(q, -2.8931398142793237, 1);
  sqcRZGate(q, 0.8451995585279654, 1);
  sqcRYGate(q, -0.10070003887169678, 2);
  sqcRZGate(q, 0.20766716172027966, 2);
  sqcRYGate(q, 1.714215582974975, 3);
  sqcRZGate(q, 1.062744186102261, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6469204419094992, 0);
  sqcRZGate(q, -2.5838223144268953, 0);
  sqcRYGate(q, -2.545591394376294, 1);
  sqcRZGate(q, -1.6079861105969715, 1);
  sqcRYGate(q, 1.703378771266392, 2);
  sqcRZGate(q, 2.18273067763184, 2);
  sqcRYGate(q, 0.9362619731215722, 3);
  sqcRZGate(q, 1.6614176595797499, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.14776232236363107, 0);
  sqcRZGate(q, 2.489469578723134, 0);
  sqcRYGate(q, 0.48441999963244076, 1);
  sqcRZGate(q, 2.6085210142517368, 1);
  sqcRYGate(q, 0.9477982586043675, 2);
  sqcRZGate(q, -2.3922197612534495, 2);
  sqcRYGate(q, -2.7100946734017155, 3);
  sqcRZGate(q, -0.24878002945633523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.823352454823596, 0);
  sqcRZGate(q, -0.41700410045561837, 0);
  sqcRYGate(q, -1.5045284209349898, 1);
  sqcRZGate(q, 1.2599241380539237, 1);
  sqcRYGate(q, -1.5244088115366878, 2);
  sqcRZGate(q, 2.979609173833518, 2);
  sqcRYGate(q, -2.044136868768488, 3);
  sqcRZGate(q, -2.265101391591739, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9335340824804924, 0);
  sqcRZGate(q, 0.4115419705392336, 0);
  sqcRYGate(q, 0.7797339266500327, 1);
  sqcRZGate(q, -1.466601124995734, 1);
  sqcRYGate(q, -1.8542859207859637, 2);
  sqcRZGate(q, 0.7222683929618805, 2);
  sqcRYGate(q, 2.2304503607282093, 3);
  sqcRZGate(q, -1.9129872136199326, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
