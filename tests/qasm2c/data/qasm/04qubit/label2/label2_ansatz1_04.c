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

  sqcRYGate(q, -2.9737444378977864, 0);
  sqcRZGate(q, 0.49135589704531846, 0);
  sqcRYGate(q, 0.7109381031087603, 1);
  sqcRZGate(q, 1.64577671070299, 1);
  sqcRYGate(q, 2.61338696973302, 2);
  sqcRZGate(q, 0.21432630745227055, 2);
  sqcRYGate(q, -1.4132274326560061, 3);
  sqcRZGate(q, 2.557165957466856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.066485623712276, 0);
  sqcRZGate(q, 0.7714944319435388, 0);
  sqcRYGate(q, 2.489669981644142, 1);
  sqcRZGate(q, -1.6214525430089415, 1);
  sqcRYGate(q, -0.3209047625773609, 2);
  sqcRZGate(q, -0.10769272966109815, 2);
  sqcRYGate(q, -2.2201888056870986, 3);
  sqcRZGate(q, -2.5742153514048076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.357340469869014, 0);
  sqcRZGate(q, -2.2189080441830296, 0);
  sqcRYGate(q, -2.724232501611859, 1);
  sqcRZGate(q, -1.720687003024242, 1);
  sqcRYGate(q, -2.3559454255920946, 2);
  sqcRZGate(q, -3.0742889858219886, 2);
  sqcRYGate(q, 2.601945191305196, 3);
  sqcRZGate(q, 1.4243906590742443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1032809153437073, 0);
  sqcRZGate(q, -0.5419603221853259, 0);
  sqcRYGate(q, -1.6203139552107968, 1);
  sqcRZGate(q, -0.6035856131381069, 1);
  sqcRYGate(q, 1.3294340031380925, 2);
  sqcRZGate(q, 0.24733130774860257, 2);
  sqcRYGate(q, -2.440199089107707, 3);
  sqcRZGate(q, 0.7816363633994117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3928423970805226, 0);
  sqcRZGate(q, 2.196267065006195, 0);
  sqcRYGate(q, -2.9777783396612096, 1);
  sqcRZGate(q, 3.0751317735900643, 1);
  sqcRYGate(q, -0.8579568443338133, 2);
  sqcRZGate(q, 2.98515667522648, 2);
  sqcRYGate(q, -1.4384438271898434, 3);
  sqcRZGate(q, -2.7732512389428914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7183809318529915, 0);
  sqcRZGate(q, 2.2968457469985637, 0);
  sqcRYGate(q, -0.2708497283647331, 1);
  sqcRZGate(q, 2.6772406335347663, 1);
  sqcRYGate(q, 2.806709302581549, 2);
  sqcRZGate(q, 0.6975569415772905, 2);
  sqcRYGate(q, -0.1109533040677837, 3);
  sqcRZGate(q, 1.9827789699514895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0556621353169344, 0);
  sqcRZGate(q, -1.1527160258564837, 0);
  sqcRYGate(q, 1.526032371653642, 1);
  sqcRZGate(q, 2.007505915853102, 1);
  sqcRYGate(q, -2.8596584310393895, 2);
  sqcRZGate(q, 0.15587536803738664, 2);
  sqcRYGate(q, -0.167874741270467, 3);
  sqcRZGate(q, 0.5299778116065822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6813959179703241, 0);
  sqcRZGate(q, -1.3638870461176518, 0);
  sqcRYGate(q, -2.1165395796365947, 1);
  sqcRZGate(q, -2.753408303238419, 1);
  sqcRYGate(q, -0.3820733765771258, 2);
  sqcRZGate(q, 2.33382088794796, 2);
  sqcRYGate(q, -1.4684873957400688, 3);
  sqcRZGate(q, 0.6344630544092169, 3);

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
