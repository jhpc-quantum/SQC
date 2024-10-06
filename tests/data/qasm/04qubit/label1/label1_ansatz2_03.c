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

  sqcRYGate(q, 0.5595791687888703, 0);
  sqcRZGate(q, 2.4615996394574102, 0);
  sqcRYGate(q, -1.72407828738167, 1);
  sqcRZGate(q, -2.947197866266942, 1);
  sqcRYGate(q, 1.6909103276108937, 2);
  sqcRZGate(q, -2.532472252693621, 2);
  sqcRYGate(q, -0.5074909487425989, 3);
  sqcRZGate(q, -2.538302779921968, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8640529455724102, 0);
  sqcRZGate(q, 2.229029811796255, 0);
  sqcRYGate(q, -1.9735227035830478, 1);
  sqcRZGate(q, 1.5860231513891168, 1);
  sqcRYGate(q, 2.748105053950743, 2);
  sqcRZGate(q, -1.2094223442971552, 2);
  sqcRYGate(q, 1.3879807612261263, 3);
  sqcRZGate(q, 0.8160994413770005, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7671075157922544, 0);
  sqcRZGate(q, -1.5175366289162069, 0);
  sqcRYGate(q, 2.967744220417021, 1);
  sqcRZGate(q, -0.8689273062316779, 1);
  sqcRYGate(q, 0.03981814470042219, 2);
  sqcRZGate(q, -1.620770215371195, 2);
  sqcRYGate(q, 1.4802988908673589, 3);
  sqcRZGate(q, -2.0475371656864665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7878940118772486, 0);
  sqcRZGate(q, 1.2244453545056433, 0);
  sqcRYGate(q, -3.099406224750543, 1);
  sqcRZGate(q, -1.6921687190360046, 1);
  sqcRYGate(q, 2.9628779878548586, 2);
  sqcRZGate(q, 1.3933695707636238, 2);
  sqcRYGate(q, 1.4801380030746083, 3);
  sqcRZGate(q, 2.393492360426915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.770899579516314, 0);
  sqcRZGate(q, 1.365636169558855, 0);
  sqcRYGate(q, -2.244367037579256, 1);
  sqcRZGate(q, -3.018692067008313, 1);
  sqcRYGate(q, 2.4963929886010114, 2);
  sqcRZGate(q, 0.6547879851912928, 2);
  sqcRYGate(q, -1.1198070402613842, 3);
  sqcRZGate(q, -1.4225643067768323, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0824098334024637, 0);
  sqcRZGate(q, 0.6478202369755444, 0);
  sqcRYGate(q, -2.707622657334151, 1);
  sqcRZGate(q, -2.3257454758695872, 1);
  sqcRYGate(q, 1.8063522566632697, 2);
  sqcRZGate(q, 2.251077521879064, 2);
  sqcRYGate(q, -0.21995029442657543, 3);
  sqcRZGate(q, 0.4261904289592904, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.1998736336861911, 0);
  sqcRZGate(q, 2.49526660987048, 0);
  sqcRYGate(q, 1.8658806572135067, 1);
  sqcRZGate(q, -1.0178631852272575, 1);
  sqcRYGate(q, 0.6221456235695725, 2);
  sqcRZGate(q, -1.7967807641337037, 2);
  sqcRYGate(q, -0.4418590228324928, 3);
  sqcRZGate(q, -0.6802561454915343, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
