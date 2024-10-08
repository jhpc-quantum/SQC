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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 3.066735209067943, 0);
  sqcRZGate(q, -1.570800650125938, 0);
  sqcRYGate(q, -1.6609904758693772, 1);
  sqcRZGate(q, 2.889632249036822e-07, 1);
  sqcRYGate(q, 3.1415921866460974, 2);
  sqcRZGate(q, 0.9063033828630701, 2);
  sqcRYGate(q, 1.5707966782781897, 3);
  sqcRZGate(q, -0.7032663304935741, 3);
  sqcRYGate(q, 3.1415926478435874, 4);
  sqcRZGate(q, 0.8024914692807242, 4);
  sqcRYGate(q, 0.3275085181175928, 5);
  sqcRZGate(q, 1.5708052018348506, 5);
  sqcRYGate(q, 3.0900535604149177, 6);
  sqcRZGate(q, 3.1415853768962427, 6);
  sqcRYGate(q, 1.2559333428404518, 7);
  sqcRZGate(q, -0.00025627738013871826, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5707962933771076, 0);
  sqcRZGate(q, -3.1415924669210553, 0);
  sqcRYGate(q, 1.5707967980607522, 1);
  sqcRZGate(q, 1.5707033664652146, 1);
  sqcRYGate(q, 1.1079955890879736, 2);
  sqcRZGate(q, -0.0009982899797087441, 2);
  sqcRYGate(q, -2.5824493032899904e-07, 3);
  sqcRZGate(q, 0.7032626263339987, 3);
  sqcRYGate(q, -0.11703298614395319, 4);
  sqcRZGate(q, -1.5708220922050578, 4);
  sqcRYGate(q, -1.5707965890366562, 5);
  sqcRZGate(q, 2.2403154906823652, 5);
  sqcRYGate(q, -3.0617984917261953, 6);
  sqcRZGate(q, 1.9421347420197372, 6);
  sqcRYGate(q, -1.491755311898407, 7);
  sqcRZGate(q, 1.570807661112914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707973876104793, 0);
  sqcRZGate(q, 0.15797711617031318, 0);
  sqcRYGate(q, 3.1311270837796417, 1);
  sqcRZGate(q, 3.141494971141878, 1);
  sqcRYGate(q, 3.140695927971866, 2);
  sqcRZGate(q, -2.2925555912827775, 2);
  sqcRYGate(q, -2.815312476116252, 3);
  sqcRZGate(q, 1.5707969728714177, 3);
  sqcRYGate(q, 0.006069787025142048, 4);
  sqcRZGate(q, -2.9695496056131354, 4);
  sqcRYGate(q, 2.2540030908402287e-07, 5);
  sqcRZGate(q, 2.4720847128143433, 5);
  sqcRYGate(q, 1.3064000370377468e-07, 6);
  sqcRZGate(q, -1.389461549770612, 6);
  sqcRYGate(q, -1.5707981352869282, 7);
  sqcRZGate(q, 1.5707971091198332, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415892433679327, 0);
  sqcRZGate(q, 0.6260551237041735, 0);
  sqcRYGate(q, -1.5708067173350893, 1);
  sqcRZGate(q, -1.1027175676544843, 1);
  sqcRYGate(q, 3.1415894564807383, 2);
  sqcRZGate(q, 1.3181134019210816, 2);
  sqcRYGate(q, 1.570785956279319, 3);
  sqcRZGate(q, -1.102717534763516, 3);
  sqcRYGate(q, 3.141592332748287, 4);
  sqcRZGate(q, 0.6401006691857933, 4);
  sqcRYGate(q, 1.5707967894787895, 5);
  sqcRZGate(q, -2.6735124350975084, 5);
  sqcRYGate(q, 3.1415926174635684, 6);
  sqcRZGate(q, 2.59155141371595, 6);
  sqcRYGate(q, -1.570807004636163, 7);
  sqcRZGate(q, -1.102462811193516, 7);

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
