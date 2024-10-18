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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.898794483015833, 0);
  sqcRZGate(q, -2.9160983807655767, 0);
  sqcRYGate(q, 1.5811368208583616, 1);
  sqcRZGate(q, 3.1374867082851843, 1);
  sqcRYGate(q, 0.2448620874151928, 2);
  sqcRZGate(q, -2.8637527048460836, 2);
  sqcRYGate(q, 0.016621652640993, 3);
  sqcRZGate(q, 2.523163258818868, 3);
  sqcRYGate(q, 3.1405061482957515, 4);
  sqcRZGate(q, -2.5447631466207956, 4);
  sqcRYGate(q, 3.033886394305285, 5);
  sqcRZGate(q, 2.5637861640975714, 5);
  sqcRYGate(q, 1.7076296836591842, 6);
  sqcRZGate(q, -2.3702292070294533, 6);
  sqcRYGate(q, -2.028025090747205, 7);
  sqcRZGate(q, -3.066036154134417, 7);
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
  sqcRYGate(q, -2.960705943092989, 0);
  sqcRZGate(q, 0.038290780739060004, 0);
  sqcRYGate(q, -1.5385728284200049, 1);
  sqcRZGate(q, -0.3111097404103829, 1);
  sqcRYGate(q, -3.0011272292812525, 2);
  sqcRZGate(q, -0.6749473693967064, 2);
  sqcRYGate(q, 0.3086842635346178, 3);
  sqcRZGate(q, 2.358811869416174, 3);
  sqcRYGate(q, 3.137319894369234, 4);
  sqcRZGate(q, -2.8721047181638424, 4);
  sqcRYGate(q, 0.015577941450540145, 5);
  sqcRZGate(q, 0.06541105025192095, 5);
  sqcRYGate(q, -2.6538400862017153, 6);
  sqcRZGate(q, 3.086955049444154, 6);
  sqcRYGate(q, 0.5842273274458138, 7);
  sqcRZGate(q, 0.7361737483487154, 7);
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
  sqcRYGate(q, 0.17753933559904755, 0);
  sqcRZGate(q, 0.5495540917793126, 0);
  sqcRYGate(q, -3.1288229250949677, 1);
  sqcRZGate(q, -0.6561018236126009, 1);
  sqcRYGate(q, -3.103756791280442, 2);
  sqcRZGate(q, 1.3509538285606564, 2);
  sqcRYGate(q, -1.5976730286404388, 3);
  sqcRZGate(q, 1.643347932348905, 3);
  sqcRYGate(q, 1.4687338333106075, 4);
  sqcRZGate(q, -0.7332174156666976, 4);
  sqcRYGate(q, -2.8075373430785517, 5);
  sqcRZGate(q, 2.1337347004084615, 5);
  sqcRYGate(q, -2.747028798374869, 6);
  sqcRZGate(q, 0.8352250604224604, 6);
  sqcRYGate(q, 2.823577210520235, 7);
  sqcRZGate(q, -2.6737597844360717, 7);
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
  sqcRYGate(q, 3.1036631860533626, 0);
  sqcRZGate(q, -0.39355857912499004, 0);
  sqcRYGate(q, -3.038210796018134, 1);
  sqcRZGate(q, 2.772300637607391, 1);
  sqcRYGate(q, -0.01160428575352691, 2);
  sqcRZGate(q, -2.36545591123992, 2);
  sqcRYGate(q, 1.0897482905057068, 3);
  sqcRZGate(q, -0.023449814925045557, 3);
  sqcRYGate(q, -0.0006978755237238586, 4);
  sqcRZGate(q, -0.5563344638822327, 4);
  sqcRYGate(q, 0.001113300670338568, 5);
  sqcRZGate(q, -0.5696594271853063, 5);
  sqcRYGate(q, 1.6566951938497816, 6);
  sqcRZGate(q, -0.636263417576853, 6);
  sqcRYGate(q, -0.6002882720808822, 7);
  sqcRZGate(q, 1.4288881417069126, 7);
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
  sqcRYGate(q, 0.009698047456395464, 0);
  sqcRZGate(q, 1.3988738900836413, 0);
  sqcRYGate(q, 1.5874648002210292, 1);
  sqcRZGate(q, 1.5699963985338774, 1);
  sqcRYGate(q, 2.3627408377173893, 2);
  sqcRZGate(q, 2.867720692507247, 2);
  sqcRYGate(q, -2.1462215944592704, 3);
  sqcRZGate(q, 1.7090584840218808, 3);
  sqcRYGate(q, 0.049391411496370025, 4);
  sqcRZGate(q, -2.3827610818705844, 4);
  sqcRYGate(q, 2.8612347207690934, 5);
  sqcRZGate(q, -1.2523198633984014, 5);
  sqcRYGate(q, 2.2335242450512105, 6);
  sqcRZGate(q, -1.575265573875323, 6);
  sqcRYGate(q, -1.1691374908121805, 7);
  sqcRZGate(q, -1.1719576990349756, 7);
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
  sqcRYGate(q, 3.1384726907925664, 0);
  sqcRZGate(q, 0.6430468311091396, 0);
  sqcRYGate(q, -0.3640634223090838, 1);
  sqcRZGate(q, 1.012941525072284, 1);
  sqcRYGate(q, 0.0036911129642067664, 2);
  sqcRZGate(q, 0.17921066595935378, 2);
  sqcRYGate(q, 3.136647466461274, 3);
  sqcRZGate(q, -1.5363550159492976, 3);
  sqcRYGate(q, -3.1391672574313607, 4);
  sqcRZGate(q, -0.687322879856236, 4);
  sqcRYGate(q, -0.0012466624717318955, 5);
  sqcRZGate(q, 2.7236692732193446, 5);
  sqcRYGate(q, -1.5333579754966644, 6);
  sqcRZGate(q, 1.4855594307007427, 6);
  sqcRYGate(q, -1.621937835853907, 7);
  sqcRZGate(q, 2.752213636568038, 7);
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
  sqcRYGate(q, 1.579806617649564, 0);
  sqcRZGate(q, 3.1351050379777248, 0);
  sqcRYGate(q, 0.023527803209530674, 1);
  sqcRZGate(q, 0.5556770077950182, 1);
  sqcRYGate(q, 2.3698664976461705, 2);
  sqcRZGate(q, -0.06200433247426673, 2);
  sqcRYGate(q, -1.7389856350657833, 3);
  sqcRZGate(q, 1.5819153543323878, 3);
  sqcRYGate(q, -1.4271523594015862, 4);
  sqcRZGate(q, 1.685502305034726, 4);
  sqcRYGate(q, 1.5256337446895971, 5);
  sqcRZGate(q, 6.025620788285834e-05, 5);
  sqcRYGate(q, -1.972353542652653, 6);
  sqcRZGate(q, -0.11380366124062836, 6);
  sqcRYGate(q, 3.133241625927267, 7);
  sqcRZGate(q, -0.38722703658717794, 7);

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
