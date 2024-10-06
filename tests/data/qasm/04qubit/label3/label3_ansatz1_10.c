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

  sqcRYGate(q, 1.031954667607647, 0);
  sqcRZGate(q, 2.2680164863396866, 0);
  sqcRYGate(q, 0.06291769941366532, 1);
  sqcRZGate(q, -0.5701876432077047, 1);
  sqcRYGate(q, 0.23598117378304317, 2);
  sqcRZGate(q, 2.6885115221876528, 2);
  sqcRYGate(q, -2.644351168338979, 3);
  sqcRZGate(q, -1.3157861098091113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6673889473292465, 0);
  sqcRZGate(q, 0.5708238791509022, 0);
  sqcRYGate(q, -1.4852757338712046, 1);
  sqcRZGate(q, -1.0403684679384635, 1);
  sqcRYGate(q, 1.6998980227322757, 2);
  sqcRZGate(q, -1.3390797850525291, 2);
  sqcRYGate(q, 0.6191497003537778, 3);
  sqcRZGate(q, 1.1779432011219009, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.46650668136965034, 0);
  sqcRZGate(q, 0.8860501721302247, 0);
  sqcRYGate(q, -1.0355053721977923, 1);
  sqcRZGate(q, -1.816939249332993, 1);
  sqcRYGate(q, -1.6861145917924358, 2);
  sqcRZGate(q, 2.2207819820114634, 2);
  sqcRYGate(q, -2.588783688937834, 3);
  sqcRZGate(q, 0.40353010362098996, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5982567845839224, 0);
  sqcRZGate(q, -2.681923464251992, 0);
  sqcRYGate(q, -1.6846424562705613, 1);
  sqcRZGate(q, 2.1013494186907007, 1);
  sqcRYGate(q, 2.700370773737452, 2);
  sqcRZGate(q, -2.5855764809042006, 2);
  sqcRYGate(q, -0.510089553721743, 3);
  sqcRZGate(q, 0.13264127826460737, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2044917115520632, 0);
  sqcRZGate(q, 2.4885074221156707, 0);
  sqcRYGate(q, -1.59827949231907, 1);
  sqcRZGate(q, -2.6509088712949223, 1);
  sqcRYGate(q, -0.4776202615553773, 2);
  sqcRZGate(q, -0.9838788467606608, 2);
  sqcRYGate(q, 1.5314271918871574, 3);
  sqcRZGate(q, 0.9540994435114722, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.75562659350074, 0);
  sqcRZGate(q, 2.9982947276479712, 0);
  sqcRYGate(q, 0.5493369112505637, 1);
  sqcRZGate(q, -2.799935086636862, 1);
  sqcRYGate(q, 1.6915762337847138, 2);
  sqcRZGate(q, 1.108830634864924, 2);
  sqcRYGate(q, 0.6315306629498458, 3);
  sqcRZGate(q, -1.1708100408500233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8041717598348848, 0);
  sqcRZGate(q, 1.9767437122466287, 0);
  sqcRYGate(q, 1.8593294154666198, 1);
  sqcRZGate(q, -1.1593915705988187, 1);
  sqcRYGate(q, 0.7298865143165569, 2);
  sqcRZGate(q, -0.2687521026446089, 2);
  sqcRYGate(q, -2.389009199794136, 3);
  sqcRZGate(q, -1.2214328030742063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9928864186573559, 0);
  sqcRZGate(q, 2.835631968511039, 0);
  sqcRYGate(q, -0.9349683599056826, 1);
  sqcRZGate(q, 0.49065753235392534, 1);
  sqcRYGate(q, 1.0537254051425173, 2);
  sqcRZGate(q, 0.4740943726356459, 2);
  sqcRYGate(q, 0.03990886020942864, 3);
  sqcRZGate(q, -2.4653727322359638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5925951546148234, 0);
  sqcRZGate(q, -1.028643326476177, 0);
  sqcRYGate(q, 1.281659316698529, 1);
  sqcRZGate(q, -1.22464483528126, 1);
  sqcRYGate(q, -2.617955164297202, 2);
  sqcRZGate(q, 1.0251644569345517, 2);
  sqcRYGate(q, 0.05637073286351591, 3);
  sqcRZGate(q, 2.540766566125275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1926939971785293, 0);
  sqcRZGate(q, 2.107050737027424, 0);
  sqcRYGate(q, 3.1197919554901787, 1);
  sqcRZGate(q, 1.648832125676312, 1);
  sqcRYGate(q, -2.4409859824603672, 2);
  sqcRZGate(q, 0.5262041627297557, 2);
  sqcRYGate(q, 0.1707809698826486, 3);
  sqcRZGate(q, 1.4304048681526826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9827339336624057, 0);
  sqcRZGate(q, -2.262076934126715, 0);
  sqcRYGate(q, -0.47339970400685694, 1);
  sqcRZGate(q, -0.11047030002387742, 1);
  sqcRYGate(q, 2.865537095889849, 2);
  sqcRZGate(q, 1.7001722975910882, 2);
  sqcRYGate(q, 0.3935176311133528, 3);
  sqcRZGate(q, 0.006537525725725857, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.747544138181039, 0);
  sqcRZGate(q, -1.4997292522251011, 0);
  sqcRYGate(q, 2.607228973840046, 1);
  sqcRZGate(q, 0.015636632559518904, 1);
  sqcRYGate(q, -0.14400738505995733, 2);
  sqcRZGate(q, -2.146367495503786, 2);
  sqcRYGate(q, -2.6548789622365114, 3);
  sqcRZGate(q, 0.043584193971628604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3916898212852729, 0);
  sqcRZGate(q, -2.3150508401494982, 0);
  sqcRYGate(q, -2.4673499707879354, 1);
  sqcRZGate(q, 2.6396048338569758, 1);
  sqcRYGate(q, -2.918515224431655, 2);
  sqcRZGate(q, -1.8601628201422822, 2);
  sqcRYGate(q, -1.8810205703358385, 3);
  sqcRZGate(q, 1.275464005836004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3165494116115708, 0);
  sqcRZGate(q, -2.312244610314874, 0);
  sqcRYGate(q, -0.2933079968504826, 1);
  sqcRZGate(q, 1.3020227352066547, 1);
  sqcRYGate(q, -2.298889016336257, 2);
  sqcRZGate(q, -1.284203333058608, 2);
  sqcRYGate(q, 2.0131031784830946, 3);
  sqcRZGate(q, -0.309580146699836, 3);

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
