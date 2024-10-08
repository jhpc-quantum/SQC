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
  sqcInitialize();

  sqcQC* q;
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.4539986358897374, 0);
  sqcRZGate(q, -0.20626130872079199, 0);
  sqcRYGate(q, -2.615414717778242, 1);
  sqcRZGate(q, 2.179511122881407, 1);
  sqcRYGate(q, 0.6646632348766719, 2);
  sqcRZGate(q, -2.9653571315579312, 2);
  sqcRYGate(q, 2.3971263354599914, 3);
  sqcRZGate(q, -3.0376639568178496, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3061831568165392, 0);
  sqcRZGate(q, -1.6805528125684353, 0);
  sqcRYGate(q, -0.04507161437192164, 1);
  sqcRZGate(q, -1.9124481739607235, 1);
  sqcRYGate(q, -2.0342672872290883, 2);
  sqcRZGate(q, 0.7256537252893827, 2);
  sqcRYGate(q, 0.8429187189043796, 3);
  sqcRZGate(q, -1.6331659339097169, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9906951716374575, 0);
  sqcRZGate(q, 0.5357124682030933, 0);
  sqcRYGate(q, 2.6921232050705886, 1);
  sqcRZGate(q, 1.1203520671886988, 1);
  sqcRYGate(q, 0.8178260427627945, 2);
  sqcRZGate(q, 2.892699908714179, 2);
  sqcRYGate(q, 0.31010355803039413, 3);
  sqcRZGate(q, -0.8480499981205654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8379619858047747, 0);
  sqcRZGate(q, 3.1336231321094563, 0);
  sqcRYGate(q, -1.3093901251806512, 1);
  sqcRZGate(q, -1.4056056510852613, 1);
  sqcRYGate(q, 3.0933158349600482, 2);
  sqcRZGate(q, -2.18483292474092, 2);
  sqcRYGate(q, -2.6974222329577087, 3);
  sqcRZGate(q, 0.5288448671887056, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2696386070466223, 0);
  sqcRZGate(q, 2.8161757151483555, 0);
  sqcRYGate(q, -1.1994374371891539, 1);
  sqcRZGate(q, 0.9825308205620713, 1);
  sqcRYGate(q, -0.3049379068636984, 2);
  sqcRZGate(q, 0.9175920209434104, 2);
  sqcRYGate(q, -1.6918168271857095, 3);
  sqcRZGate(q, 0.4936269005663547, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6160351974509988, 0);
  sqcRZGate(q, -0.17307740077973494, 0);
  sqcRYGate(q, 0.6259993879178705, 1);
  sqcRZGate(q, 2.128795585182975, 1);
  sqcRYGate(q, 2.688437811325933, 2);
  sqcRZGate(q, 1.4589134624841904, 2);
  sqcRYGate(q, -2.9699865771330916, 3);
  sqcRZGate(q, 0.4759771690581402, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.136392003767962, 0);
  sqcRZGate(q, -0.9544765731441087, 0);
  sqcRYGate(q, 2.2774877543183667, 1);
  sqcRZGate(q, 2.5335209038806497, 1);
  sqcRYGate(q, 2.0074495988002106, 2);
  sqcRZGate(q, -1.2900665721941005, 2);
  sqcRYGate(q, 2.4991815977209773, 3);
  sqcRZGate(q, 1.241950268570911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1791475461266578, 0);
  sqcRZGate(q, 3.136804653823047, 0);
  sqcRYGate(q, 0.3379067664852471, 1);
  sqcRZGate(q, -2.8679129284135976, 1);
  sqcRYGate(q, -1.0533561546581227, 2);
  sqcRZGate(q, 2.6396581838880393, 2);
  sqcRYGate(q, -3.012823425460967, 3);
  sqcRZGate(q, -2.850153635329989, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6533149260252165, 0);
  sqcRZGate(q, 1.6814212623993967, 0);
  sqcRYGate(q, -1.476966373446884, 1);
  sqcRZGate(q, -1.4377701593504577, 1);
  sqcRYGate(q, -0.5312843977436439, 2);
  sqcRZGate(q, 0.8594614923611203, 2);
  sqcRYGate(q, -2.1288540537026277, 3);
  sqcRZGate(q, 0.7579485755930185, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1778713984693443, 0);
  sqcRZGate(q, 2.981867522490972, 0);
  sqcRYGate(q, -0.2051584481865395, 1);
  sqcRZGate(q, -2.2043868350941986, 1);
  sqcRYGate(q, -0.6853976203222674, 2);
  sqcRZGate(q, 2.870921656806501, 2);
  sqcRYGate(q, -2.5207449172976775, 3);
  sqcRZGate(q, -1.4561622968440826, 3);

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
