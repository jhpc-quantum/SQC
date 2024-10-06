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

  sqcRYGate(q, 1.5707817107699817, 0);
  sqcRZGate(q, -1.5829914346752274, 0);
  sqcRYGate(q, -0.4317452176462543, 1);
  sqcRZGate(q, -0.8892035424430463, 1);
  sqcRYGate(q, 1.5707926201875857, 2);
  sqcRZGate(q, -0.06166804701707118, 2);
  sqcRYGate(q, -2.7047023324125354, 3);
  sqcRZGate(q, 1.570808575307482, 3);
  sqcRYGate(q, 1.5708171897759842, 4);
  sqcRZGate(q, -0.01997548719774243, 4);
  sqcRYGate(q, 1.5707935350084379, 5);
  sqcRZGate(q, 2.130874290088881, 5);
  sqcRYGate(q, 3.1413877058101582, 6);
  sqcRZGate(q, 1.6961093826733395, 6);
  sqcRYGate(q, 2.379644969423721, 7);
  sqcRZGate(q, 1.3140728304912148, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.681642566515233, 0);
  sqcRZGate(q, -1.5614362663209977, 0);
  sqcRYGate(q, -1.5710932180217165, 1);
  sqcRZGate(q, 3.137272726010774, 1);
  sqcRYGate(q, -1.5708003797765064, 2);
  sqcRZGate(q, -1.2318083683737768e-05, 2);
  sqcRYGate(q, -1.5707978173569082, 3);
  sqcRZGate(q, -1.570795954582053, 3);
  sqcRYGate(q, 1.5708326683158926, 4);
  sqcRZGate(q, 3.140581530018807, 4);
  sqcRYGate(q, 3.11802695577513, 5);
  sqcRZGate(q, -2.005484919501791, 5);
  sqcRYGate(q, 2.7579492527406453, 6);
  sqcRZGate(q, -0.9732875045248962, 6);
  sqcRYGate(q, 2.6115618340560722, 7);
  sqcRZGate(q, 0.05791335292789412, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7801144023742101, 0);
  sqcRZGate(q, -1.61499365040045e-05, 0);
  sqcRYGate(q, -3.097113071775456, 1);
  sqcRZGate(q, 3.1372689327983108, 1);
  sqcRYGate(q, -1.5707903797953948, 2);
  sqcRZGate(q, 1.5708091737022807, 2);
  sqcRYGate(q, 1.5708046497378503, 3);
  sqcRZGate(q, -0.1338518760601338, 3);
  sqcRYGate(q, -0.018508204558127284, 4);
  sqcRZGate(q, 2.2130836899510493, 4);
  sqcRYGate(q, -3.1415567690637225, 5);
  sqcRZGate(q, -1.3228292212614141, 5);
  sqcRYGate(q, 1.4957122245117072, 6);
  sqcRZGate(q, 0.000719420206218402, 6);
  sqcRYGate(q, -1.3699960234933994, 7);
  sqcRZGate(q, 0.8007979284637983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5630713357649597, 0);
  sqcRZGate(q, 1.570791336497601, 0);
  sqcRYGate(q, 1.5707979610566918, 1);
  sqcRZGate(q, 1.5707928412203642, 1);
  sqcRYGate(q, 1.5707945220060051, 2);
  sqcRZGate(q, -3.1191206300503747, 2);
  sqcRYGate(q, -1.806511964108637e-05, 3);
  sqcRZGate(q, 2.95021424291272, 3);
  sqcRYGate(q, 1.492928995360545, 4);
  sqcRZGate(q, -2.96680935841407, 4);
  sqcRYGate(q, 1.570797402285167, 5);
  sqcRZGate(q, 2.5170229956000543, 5);
  sqcRYGate(q, -1.8319927471977813, 6);
  sqcRZGate(q, 1.5710155879374241, 6);
  sqcRYGate(q, 1.122028522169357, 7);
  sqcRZGate(q, -1.363282512548905, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.570789381814467, 0);
  sqcRZGate(q, -3.1415904238828047, 0);
  sqcRYGate(q, -1.5707939704704301, 1);
  sqcRZGate(q, 2.6352778876098246, 1);
  sqcRYGate(q, 1.6564370584749328, 2);
  sqcRZGate(q, 0.25694188686926195, 2);
  sqcRYGate(q, -3.1415904992939008, 3);
  sqcRZGate(q, 2.5954412768310764, 3);
  sqcRYGate(q, -3.141587168404869, 4);
  sqcRZGate(q, 1.803583028564503, 4);
  sqcRYGate(q, 9.383726631284617e-07, 5);
  sqcRZGate(q, 1.149968387467725, 5);
  sqcRYGate(q, 1.57080234196642, 6);
  sqcRZGate(q, 2.6149071477021835e-06, 6);
  sqcRYGate(q, 2.776867441156483, 7);
  sqcRZGate(q, -1.3492163743102177, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.570793662032501, 0);
  sqcRZGate(q, -1.227977131794322, 0);
  sqcRYGate(q, -2.48421960113987e-05, 1);
  sqcRZGate(q, 0.9754326752933329, 1);
  sqcRYGate(q, -3.0530657653074456, 2);
  sqcRZGate(q, 2.1695980281601592, 2);
  sqcRYGate(q, 2.035579862269543e-05, 3);
  sqcRZGate(q, 2.2606266340069796, 3);
  sqcRYGate(q, 2.2098179323450093, 4);
  sqcRZGate(q, -1.1309137628226056, 4);
  sqcRYGate(q, -2.0456961392826933e-05, 5);
  sqcRZGate(q, 2.2837551806578977, 5);
  sqcRYGate(q, -2.0463369976394112, 6);
  sqcRZGate(q, -2.8113255650965447, 6);
  sqcRYGate(q, 1.570794768982388, 7);
  sqcRZGate(q, 2.80915843821836, 7);

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
