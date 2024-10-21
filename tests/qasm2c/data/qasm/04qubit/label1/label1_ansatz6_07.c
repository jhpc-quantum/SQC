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

  sqcRYGate(q, -1.2779976019986692, 0);
  sqcRYGate(q, 0.49902410186249124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6531815475785354, 0);
  sqcRYGate(q, 0.13716668013011368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8057119202801112, 1);
  sqcRYGate(q, 1.9177157787903383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8890111346110832, 1);
  sqcRYGate(q, -2.1197219186024876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9628930702534246, 2);
  sqcRYGate(q, -0.7966017296456864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.018446614098588, 2);
  sqcRYGate(q, -0.6624626371766261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9712704710073115, 0);
  sqcRYGate(q, -1.2348078380538754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4650385307336296, 0);
  sqcRYGate(q, 1.1281811650406528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2118590109685075, 1);
  sqcRYGate(q, -2.316840605191934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.033244308018796, 1);
  sqcRYGate(q, -3.0358816068463974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3328752497695455, 2);
  sqcRYGate(q, 2.3986004894144424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3843861988359512, 2);
  sqcRYGate(q, -0.8210513063255079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3727765344978034, 0);
  sqcRYGate(q, -1.9155916632692191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8131361154747355, 0);
  sqcRYGate(q, -0.37322295232825936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1583515199346273, 1);
  sqcRYGate(q, 1.8210169030921213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.140824468656021, 1);
  sqcRYGate(q, 1.7622109849617917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3822229076043462, 2);
  sqcRYGate(q, -1.3027675904808147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.337531120415793, 2);
  sqcRYGate(q, -0.6462794688660503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7293491538735969, 0);
  sqcRYGate(q, -2.0238468788710797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1526133230856008, 0);
  sqcRYGate(q, -1.4571835282321337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1046795437874812, 1);
  sqcRYGate(q, -1.5162353319787014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1872239737957355, 1);
  sqcRYGate(q, 1.4666638416597602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5482134597186796, 2);
  sqcRYGate(q, 0.13208660690886512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0399256557017695, 2);
  sqcRYGate(q, -1.9030669755134282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.687504357933887, 0);
  sqcRYGate(q, -1.3388331361427248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.115093923783333, 0);
  sqcRYGate(q, 2.089543754347691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10399896089972671, 1);
  sqcRYGate(q, 1.0358715979049982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.31380501430747, 1);
  sqcRYGate(q, 0.0009291207154149979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8173568316488529, 2);
  sqcRYGate(q, 0.36537958062358794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5488021770232595, 2);
  sqcRYGate(q, 0.7609537192557047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3617118839521272, 0);
  sqcRYGate(q, 3.089688858359139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.060231231821481046, 0);
  sqcRYGate(q, 0.858693312838908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7574280964694315, 1);
  sqcRYGate(q, 1.8192369857233648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8565781561761536, 1);
  sqcRYGate(q, -1.0968183308270432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6352071842033866, 2);
  sqcRYGate(q, -1.9385583918158478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41140092649838933, 2);
  sqcRYGate(q, -2.6567756811752115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2444370843487, 0);
  sqcRYGate(q, 0.08051333114085502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.129913560247738, 0);
  sqcRYGate(q, 0.1690092601061263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.425997660422097, 1);
  sqcRYGate(q, -0.8066344325891901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.569838662745784, 1);
  sqcRYGate(q, 2.49974249612166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.740133912257053, 2);
  sqcRYGate(q, 1.524967868471349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6866307897968548, 2);
  sqcRYGate(q, 0.6216657855827151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5590923353440433, 0);
  sqcRYGate(q, -0.004699274414512011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9981737828111001, 0);
  sqcRYGate(q, -2.0090437035113067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3128959003027463, 1);
  sqcRYGate(q, -1.8826476722988792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9863421321596468, 1);
  sqcRYGate(q, 1.005683024429812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.879280167778938, 2);
  sqcRYGate(q, 2.0689798396675476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5382643729993823, 2);
  sqcRYGate(q, -2.3887692961184865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6791804191334943, 0);
  sqcRYGate(q, 0.6677674451847091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2299143664077103, 0);
  sqcRYGate(q, -2.1709632295389536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.12836535059651, 1);
  sqcRYGate(q, -1.7744170330881002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.261072131956642, 1);
  sqcRYGate(q, -1.2898518855570074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7256401457524095, 2);
  sqcRYGate(q, -1.1502635778024368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5470241942785847, 2);
  sqcRYGate(q, -2.704196355131476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.852982703453791, 0);
  sqcRYGate(q, -0.15454992430775874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9021036829295994, 0);
  sqcRYGate(q, 1.9516974841133372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.26802552506779503, 1);
  sqcRYGate(q, 1.0820370769580416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.75584313067581, 1);
  sqcRYGate(q, 1.741720077792687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.471524230644589, 2);
  sqcRYGate(q, -2.508065808646777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.398630375879421, 2);
  sqcRYGate(q, -0.6761974707892586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5949530300186554, 0);
  sqcRYGate(q, -1.4217102056373965, 1);
  sqcRYGate(q, 2.0903571074515845, 2);
  sqcRYGate(q, 0.2856010006482936, 3);

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
