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

  sqcRYGate(q, -1.0442593932999147, 0);
  sqcRZGate(q, 1.0046380785671882, 0);
  sqcRYGate(q, -2.543817585421408, 1);
  sqcRZGate(q, 2.88191833465177, 1);
  sqcRYGate(q, -0.14197169079100913, 2);
  sqcRZGate(q, -1.3262559278142678, 2);
  sqcRYGate(q, 2.215582730956707, 3);
  sqcRZGate(q, -0.5078764984665206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.998427477348825, 0);
  sqcRZGate(q, 0.11331781683614454, 0);
  sqcRYGate(q, -2.801471580867454, 1);
  sqcRZGate(q, 1.4023933685082435, 1);
  sqcRYGate(q, -0.8606555111147393, 2);
  sqcRZGate(q, -0.8478283304364187, 2);
  sqcRYGate(q, -1.5365690204047002, 3);
  sqcRZGate(q, 1.431516548744276, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4101427281802028, 0);
  sqcRZGate(q, 2.9408818872633202, 0);
  sqcRYGate(q, -1.7109465381111753, 1);
  sqcRZGate(q, 1.8185279846895435, 1);
  sqcRYGate(q, -2.9674712307421625, 2);
  sqcRZGate(q, 0.32888259099908473, 2);
  sqcRYGate(q, 1.7714192063895897, 3);
  sqcRZGate(q, 0.3194122640001917, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0709906026045397, 0);
  sqcRZGate(q, -2.513146216365992, 0);
  sqcRYGate(q, -1.2815170496498614, 1);
  sqcRZGate(q, 1.110974346663064, 1);
  sqcRYGate(q, 1.1952987629461171, 2);
  sqcRZGate(q, 1.3600510382950246, 2);
  sqcRYGate(q, -2.3285251903751623, 3);
  sqcRZGate(q, -2.449732070059366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6350325775962627, 0);
  sqcRZGate(q, 2.2241917651534666, 0);
  sqcRYGate(q, -0.22082159133553514, 1);
  sqcRZGate(q, -2.751820991993182, 1);
  sqcRYGate(q, 2.180802330166191, 2);
  sqcRZGate(q, 2.582310372339029, 2);
  sqcRYGate(q, -2.241971465538076, 3);
  sqcRZGate(q, -1.935079916267754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3002821778800195, 0);
  sqcRZGate(q, 0.6929938167628693, 0);
  sqcRYGate(q, 1.983910779953699, 1);
  sqcRZGate(q, 2.0221420856737, 1);
  sqcRYGate(q, -2.4301095584980126, 2);
  sqcRZGate(q, -3.0741899902675374, 2);
  sqcRYGate(q, -2.464210009064626, 3);
  sqcRZGate(q, -2.527218671674908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8414716794284491, 0);
  sqcRZGate(q, -0.8801207541116192, 0);
  sqcRYGate(q, 1.5369434969087714, 1);
  sqcRZGate(q, -1.4832896334429266, 1);
  sqcRYGate(q, 3.124810816535151, 2);
  sqcRZGate(q, -0.026370120605317033, 2);
  sqcRYGate(q, -2.244742015340136, 3);
  sqcRZGate(q, 0.12689834225071372, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2642900688131267, 0);
  sqcRZGate(q, -0.5273393060306542, 0);
  sqcRYGate(q, 0.0307404603858686, 1);
  sqcRZGate(q, 1.6371931946019234, 1);
  sqcRYGate(q, -0.7476333912597575, 2);
  sqcRZGate(q, -1.8053144754543853, 2);
  sqcRYGate(q, 2.892184696803589, 3);
  sqcRZGate(q, -0.17245868858986188, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5743036728633626, 0);
  sqcRZGate(q, -0.17446176187369225, 0);
  sqcRYGate(q, 2.576304847923459, 1);
  sqcRZGate(q, 1.8603538344045099, 1);
  sqcRYGate(q, 1.7350743123833028, 2);
  sqcRZGate(q, 2.1482229880703514, 2);
  sqcRYGate(q, 0.051903799377715124, 3);
  sqcRZGate(q, 2.595382312962032, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8067932918325895, 0);
  sqcRZGate(q, -1.7751152377102848, 0);
  sqcRYGate(q, -0.4498681328270493, 1);
  sqcRZGate(q, -2.2543411491944205, 1);
  sqcRYGate(q, -0.5849740867709644, 2);
  sqcRZGate(q, -2.42760111170565, 2);
  sqcRYGate(q, -2.3941981581888774, 3);
  sqcRZGate(q, 1.8718358969242694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.095777997340035, 0);
  sqcRZGate(q, 1.9745493830753116, 0);
  sqcRYGate(q, -2.5500869932715315, 1);
  sqcRZGate(q, -2.86005726300065, 1);
  sqcRYGate(q, -0.737890488151102, 2);
  sqcRZGate(q, -2.5651999572262847, 2);
  sqcRYGate(q, 2.080716716421147, 3);
  sqcRZGate(q, 0.895209136303504, 3);

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
