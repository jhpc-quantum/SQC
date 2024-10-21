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

  sqcRYGate(q, 0.5252847894553154, 0);
  sqcRZGate(q, 2.0306490468210954, 0);
  sqcRYGate(q, -2.4735942338931447, 1);
  sqcRZGate(q, -1.3206651118632058, 1);
  sqcRYGate(q, -1.077900457712946, 2);
  sqcRZGate(q, -2.821292947698923, 2);
  sqcRYGate(q, 0.49467041096054853, 3);
  sqcRZGate(q, 1.4890756460289527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.14961677486192526, 0);
  sqcRZGate(q, -3.076934385603535, 0);
  sqcRYGate(q, 1.9662155757605762, 1);
  sqcRZGate(q, 1.4628763978264214, 1);
  sqcRYGate(q, -0.9718613390451492, 2);
  sqcRZGate(q, 1.9681256775052725, 2);
  sqcRYGate(q, 0.31106664643031223, 3);
  sqcRZGate(q, -2.26433618341236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6576644797924147, 0);
  sqcRZGate(q, 0.6033445337331925, 0);
  sqcRYGate(q, -1.3532513106165287, 1);
  sqcRZGate(q, -1.1686981810613464, 1);
  sqcRYGate(q, 0.27393331024608114, 2);
  sqcRZGate(q, -2.8472010987948666, 2);
  sqcRYGate(q, 1.1151885264031656, 3);
  sqcRZGate(q, 0.2762091584579805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.371132435516915, 0);
  sqcRZGate(q, 2.975110713878966, 0);
  sqcRYGate(q, -2.3926560420084537, 1);
  sqcRZGate(q, 0.48584425422241173, 1);
  sqcRYGate(q, 2.708063222890412, 2);
  sqcRZGate(q, -0.7133057765778856, 2);
  sqcRYGate(q, 1.5606453314245683, 3);
  sqcRZGate(q, 0.8878155956564817, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.010153205386286, 0);
  sqcRZGate(q, 0.1691180969720456, 0);
  sqcRYGate(q, -0.04195961437913438, 1);
  sqcRZGate(q, -0.2304858430031206, 1);
  sqcRYGate(q, -1.1891542337708976, 2);
  sqcRZGate(q, 2.9338323647731674, 2);
  sqcRYGate(q, -1.0759417335503896, 3);
  sqcRZGate(q, -1.256497682092605, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3876394745121803, 0);
  sqcRZGate(q, 1.8058399375767697, 0);
  sqcRYGate(q, 0.19202066509650137, 1);
  sqcRZGate(q, -1.2549292197393092, 1);
  sqcRYGate(q, 1.844340123807763, 2);
  sqcRZGate(q, 1.7842868979727993, 2);
  sqcRYGate(q, 2.4382683831072023, 3);
  sqcRZGate(q, 2.526752294586038, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0658747590662863, 0);
  sqcRZGate(q, -0.45073750932959467, 0);
  sqcRYGate(q, 1.5771185803486008, 1);
  sqcRZGate(q, -1.74625999785306, 1);
  sqcRYGate(q, 2.3315374304893046, 2);
  sqcRZGate(q, 2.419673961337557, 2);
  sqcRYGate(q, -0.612509915907756, 3);
  sqcRZGate(q, -0.3910329827525204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8707949853630489, 0);
  sqcRZGate(q, -3.085195687232321, 0);
  sqcRYGate(q, 1.4015323536779338, 1);
  sqcRZGate(q, -1.7329847805396952, 1);
  sqcRYGate(q, -0.24524779459938723, 2);
  sqcRZGate(q, -1.5810115204605513, 2);
  sqcRYGate(q, -1.186077692666409, 3);
  sqcRZGate(q, 0.7376012002311657, 3);

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
