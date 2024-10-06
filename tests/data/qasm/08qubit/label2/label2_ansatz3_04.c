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

  sqcRYGate(q, 3.1406061757755483, 0);
  sqcRZGate(q, 3.118188177787933, 0);
  sqcRYGate(q, -0.297693732428812, 1);
  sqcRZGate(q, -0.07926125778312519, 1);
  sqcRYGate(q, 2.762992433640672, 2);
  sqcRZGate(q, 0.06262345156569687, 2);
  sqcRYGate(q, -3.141053282787332, 3);
  sqcRZGate(q, -1.5139885865011786, 3);
  sqcRYGate(q, -0.06961594160259743, 4);
  sqcRZGate(q, 0.46017074504811273, 4);
  sqcRYGate(q, 0.057160591064775446, 5);
  sqcRZGate(q, 2.321589984006421, 5);
  sqcRYGate(q, 1.3249707329173814, 6);
  sqcRZGate(q, -2.592083646124131, 6);
  sqcRYGate(q, -2.5464961223631493, 7);
  sqcRZGate(q, -2.913704254009134, 7);
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
  sqcRYGate(q, -1.5826029085761544, 0);
  sqcRZGate(q, 2.694441617557929, 0);
  sqcRYGate(q, 2.436955409669119, 1);
  sqcRZGate(q, -0.0407116097661113, 1);
  sqcRYGate(q, -1.1934159127281823, 2);
  sqcRZGate(q, -1.2405805329445494, 2);
  sqcRYGate(q, 0.10953578767938144, 3);
  sqcRZGate(q, -2.088639658774906, 3);
  sqcRYGate(q, -1.6112960045178115, 4);
  sqcRZGate(q, 1.5398509852309061, 4);
  sqcRYGate(q, 0.03338374088374696, 5);
  sqcRZGate(q, -1.2927250382073563, 5);
  sqcRYGate(q, 2.066897362222692, 6);
  sqcRZGate(q, 1.8086300334552452, 6);
  sqcRYGate(q, 0.08703503501265697, 7);
  sqcRZGate(q, 2.7713667805583704, 7);
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
  sqcRYGate(q, 3.141188831072259, 0);
  sqcRZGate(q, -2.789748761009809, 0);
  sqcRYGate(q, -1.5918716541385338, 1);
  sqcRZGate(q, -0.19978374092346715, 1);
  sqcRYGate(q, -2.1853250556583035e-05, 2);
  sqcRZGate(q, -3.1196605357854796, 2);
  sqcRYGate(q, 3.1415072460238616, 3);
  sqcRZGate(q, 1.0674647288018522, 3);
  sqcRYGate(q, 1.5683292598666156, 4);
  sqcRZGate(q, -3.097936042980941, 4);
  sqcRYGate(q, 2.714241164092152, 5);
  sqcRZGate(q, 2.5739861932351245, 5);
  sqcRYGate(q, -3.132264528644476, 6);
  sqcRZGate(q, -0.8009207709824232, 6);
  sqcRYGate(q, 0.07562523313129431, 7);
  sqcRZGate(q, -2.099218193341945, 7);
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
  sqcRYGate(q, -0.10577996689067248, 0);
  sqcRZGate(q, 0.14585828404410964, 0);
  sqcRYGate(q, -0.959859146543015, 1);
  sqcRZGate(q, 0.1508217126610869, 1);
  sqcRYGate(q, -3.1410838333385716, 2);
  sqcRZGate(q, -0.7425113051767358, 2);
  sqcRYGate(q, -1.2955123805934736, 3);
  sqcRZGate(q, 0.2565632077276598, 3);
  sqcRYGate(q, 2.5703701218888457, 4);
  sqcRZGate(q, -1.5240395051737705, 4);
  sqcRYGate(q, 1.5844459252546335, 5);
  sqcRZGate(q, 0.001987592505584779, 5);
  sqcRYGate(q, -0.0018545096525318192, 6);
  sqcRZGate(q, -0.7262078811198904, 6);
  sqcRYGate(q, -0.0008912320587013411, 7);
  sqcRZGate(q, 1.1507216165379166, 7);
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
  sqcRYGate(q, 0.00030689791895888163, 0);
  sqcRZGate(q, -0.9382449605401089, 0);
  sqcRYGate(q, -0.13692811594869617, 1);
  sqcRZGate(q, -0.8193135997944605, 1);
  sqcRYGate(q, -3.141474560528685, 2);
  sqcRZGate(q, 0.4557080716879823, 2);
  sqcRYGate(q, -4.4795353410620464e-05, 3);
  sqcRZGate(q, -0.732976375769167, 3);
  sqcRYGate(q, -1.5706608646250884, 4);
  sqcRZGate(q, -0.03744963759112174, 4);
  sqcRYGate(q, -2.103328008536692, 5);
  sqcRZGate(q, 3.057077438508358, 5);
  sqcRYGate(q, -0.07375840129997703, 6);
  sqcRZGate(q, 0.37528742121244846, 6);
  sqcRYGate(q, -1.500253146267024, 7);
  sqcRZGate(q, 3.138272329544788, 7);
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
  sqcRYGate(q, -2.4562120368313773, 0);
  sqcRZGate(q, -2.1705137948643527, 0);
  sqcRYGate(q, -0.5516845590300637, 1);
  sqcRZGate(q, 2.41578120183074, 1);
  sqcRYGate(q, 1.5711047750211147, 2);
  sqcRZGate(q, 1.9240984272616517, 2);
  sqcRYGate(q, -0.8328705716050527, 3);
  sqcRZGate(q, 0.2758623983199424, 3);
  sqcRYGate(q, -1.5354007551409088, 4);
  sqcRZGate(q, -1.5703024770780987, 4);
  sqcRYGate(q, -0.0005804552478778646, 5);
  sqcRZGate(q, 0.04292840262209066, 5);
  sqcRYGate(q, -0.04713565551020152, 6);
  sqcRZGate(q, 2.8553883910033084, 6);
  sqcRYGate(q, -2.2019088863910454, 7);
  sqcRZGate(q, -0.003266355347187222, 7);
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
  sqcRYGate(q, -1.515985408090192, 0);
  sqcRZGate(q, -0.4289925994096751, 0);
  sqcRYGate(q, -3.0980968937944895, 1);
  sqcRZGate(q, 1.81344892073262, 1);
  sqcRYGate(q, -0.002043855685730002, 2);
  sqcRZGate(q, 2.766347583545177, 2);
  sqcRYGate(q, -3.141513414769764, 3);
  sqcRZGate(q, 2.2922830536836707, 3);
  sqcRYGate(q, 1.5717679245514882, 4);
  sqcRZGate(q, -1.2913822227549525, 4);
  sqcRYGate(q, -0.009010160456778493, 5);
  sqcRZGate(q, 1.5686242803628863, 5);
  sqcRYGate(q, -1.5715081635150991, 6);
  sqcRZGate(q, 2.0747993083576035, 6);
  sqcRYGate(q, 1.6470249661685514, 7);
  sqcRZGate(q, -3.0804844543330745, 7);
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
  sqcRYGate(q, -3.1219759912871248, 0);
  sqcRZGate(q, -3.0218016839691226, 0);
  sqcRYGate(q, -1.580629937362314, 1);
  sqcRZGate(q, -1.0198756406502159, 1);
  sqcRYGate(q, -1.013507551795846, 2);
  sqcRZGate(q, 0.5512020411551052, 2);
  sqcRYGate(q, 0.3231834485938109, 3);
  sqcRZGate(q, -0.269340618167412, 3);
  sqcRYGate(q, -1.5971309170246615, 4);
  sqcRZGate(q, -1.0001391940121873, 4);
  sqcRYGate(q, 0.7079763281216422, 5);
  sqcRZGate(q, 0.6037139070148356, 5);
  sqcRYGate(q, 3.0718189459365552, 6);
  sqcRZGate(q, -2.0641306717985186, 6);
  sqcRYGate(q, -1.604185540937885, 7);
  sqcRZGate(q, -0.9951887192470849, 7);

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
