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

  sqcRYGate(q, 3.1090019674486276, 0);
  sqcRZGate(q, 0.5344694433448653, 0);
  sqcRYGate(q, 2.4259412361449213, 1);
  sqcRZGate(q, -2.3044237047239116, 1);
  sqcRYGate(q, 0.9084298992346794, 2);
  sqcRZGate(q, -1.2629444840891304, 2);
  sqcRYGate(q, 2.0224239842045852, 3);
  sqcRZGate(q, 1.1440662523447092, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.632319131080038, 0);
  sqcRZGate(q, -0.9936584116603308, 0);
  sqcRYGate(q, -0.8480787035087429, 1);
  sqcRZGate(q, -2.0144345106818076, 1);
  sqcRYGate(q, -0.6455950924569709, 2);
  sqcRZGate(q, 1.5083655673053045, 2);
  sqcRYGate(q, -0.5263474944325459, 3);
  sqcRZGate(q, -2.0625037285909302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.388361660829038, 0);
  sqcRZGate(q, -1.3736623234105805, 0);
  sqcRYGate(q, 2.6660841957738346, 1);
  sqcRZGate(q, -2.901190006923219, 1);
  sqcRYGate(q, -2.9985856896450067, 2);
  sqcRZGate(q, 0.11312107725990586, 2);
  sqcRYGate(q, -2.4954228893018295, 3);
  sqcRZGate(q, 1.055103034871018, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2716232918405135, 0);
  sqcRZGate(q, -0.6636073853088884, 0);
  sqcRYGate(q, -0.13093352134311342, 1);
  sqcRZGate(q, 1.1491465390687432, 1);
  sqcRYGate(q, -2.7276162040808853, 2);
  sqcRZGate(q, -1.274646980484742, 2);
  sqcRYGate(q, 1.626520840138766, 3);
  sqcRZGate(q, -2.2880325166215676, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8826658123506839, 0);
  sqcRZGate(q, -2.4887826536961732, 0);
  sqcRYGate(q, -2.665213807649406, 1);
  sqcRZGate(q, -2.8111603662238984, 1);
  sqcRYGate(q, -1.3441507837324405, 2);
  sqcRZGate(q, 2.1608793110701443, 2);
  sqcRYGate(q, -1.0193291054597748, 3);
  sqcRZGate(q, 2.36065029314838, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.976671207924017, 0);
  sqcRZGate(q, -1.3991327511966587, 0);
  sqcRYGate(q, 0.22819377674909092, 1);
  sqcRZGate(q, 2.272807407443774, 1);
  sqcRYGate(q, 0.3907210780107025, 2);
  sqcRZGate(q, 2.3830880016676277, 2);
  sqcRYGate(q, 2.034595561202788, 3);
  sqcRZGate(q, -2.1704317734465133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.26151176946858, 0);
  sqcRZGate(q, 1.0094259156947631, 0);
  sqcRYGate(q, 2.2210210528976546, 1);
  sqcRZGate(q, -0.6345395764746042, 1);
  sqcRYGate(q, 0.4873443469439236, 2);
  sqcRZGate(q, 0.9453454313706379, 2);
  sqcRYGate(q, -1.8161812471942138, 3);
  sqcRZGate(q, 1.42778945556199, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.1924891678200212, 0);
  sqcRZGate(q, 0.26498498372458346, 0);
  sqcRYGate(q, 0.500324125030876, 1);
  sqcRZGate(q, 2.0004441084510107, 1);
  sqcRYGate(q, -0.7456395202959227, 2);
  sqcRZGate(q, -2.0077045054281006, 2);
  sqcRYGate(q, -2.228374504258124, 3);
  sqcRZGate(q, -0.9114765926816643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9778610136525687, 0);
  sqcRZGate(q, 1.1864929902117707, 0);
  sqcRYGate(q, 1.4881034697458813, 1);
  sqcRZGate(q, -0.5956774876097146, 1);
  sqcRYGate(q, -1.4671887995834523, 2);
  sqcRZGate(q, 1.3679736326360374, 2);
  sqcRYGate(q, 2.4868242094483177, 3);
  sqcRZGate(q, -2.9005939811834494, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.5315978533140178, 0);
  sqcRZGate(q, -0.8929688765970817, 0);
  sqcRYGate(q, -0.4401160984016584, 1);
  sqcRZGate(q, -0.3519348509491697, 1);
  sqcRYGate(q, 2.7607014883373395, 2);
  sqcRZGate(q, -0.24615248647050844, 2);
  sqcRYGate(q, 1.005926164350897, 3);
  sqcRZGate(q, 1.15629587235294, 3);

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
