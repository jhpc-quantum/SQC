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

  sqcRYGate(q, 3.034152259347269, 0);
  sqcRYGate(q, 2.4126563883600136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0538992711052, 0);
  sqcRYGate(q, -0.12056213891619905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8557919126148232, 1);
  sqcRYGate(q, 1.5673431466996892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0367398563182117, 1);
  sqcRYGate(q, -2.4288826933426573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5248934044477274, 2);
  sqcRYGate(q, -0.6587769861528114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8464758754527866, 2);
  sqcRYGate(q, -0.8476281653156769, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7927792171886584, 0);
  sqcRYGate(q, 2.957790530492147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1488074945779883, 0);
  sqcRYGate(q, -2.909891033138575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7890980275868313, 1);
  sqcRYGate(q, -1.1928279898351102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1455423698796507, 1);
  sqcRYGate(q, -1.8326864512052277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7889397009590349, 2);
  sqcRYGate(q, -2.498139586403777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9639369071747997, 2);
  sqcRYGate(q, -1.5372218965827067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9320592194944592, 0);
  sqcRYGate(q, 0.08379271958636893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.182910904275511, 0);
  sqcRYGate(q, -2.035425791882365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.619223831496867, 1);
  sqcRYGate(q, 0.1846217932325347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7633942618387337, 1);
  sqcRYGate(q, 2.584471798756162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3864323475415405, 2);
  sqcRYGate(q, -1.3935095748249688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.863767113113096, 2);
  sqcRYGate(q, 1.8147675321883443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5669135446305926, 0);
  sqcRYGate(q, -2.2971284076173553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5012452146270545, 0);
  sqcRYGate(q, 0.541364421662941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6057457996802132, 1);
  sqcRYGate(q, 2.378518723110712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09548044762511054, 1);
  sqcRYGate(q, -2.6041946141260026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9307523939639935, 2);
  sqcRYGate(q, -1.6401108300622367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.299568751735358, 2);
  sqcRYGate(q, -1.3183063088735152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.974653804464247, 0);
  sqcRYGate(q, 2.6633116120941787, 1);
  sqcRYGate(q, 0.6423357892341315, 2);
  sqcRYGate(q, -0.9357615661242311, 3);

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
