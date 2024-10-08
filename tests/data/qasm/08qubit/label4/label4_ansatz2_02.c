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

  sqcRYGate(q, -2.6054868647063985, 0);
  sqcRZGate(q, -2.98537961929377, 0);
  sqcRYGate(q, -3.2094116440030354e-07, 1);
  sqcRZGate(q, 1.9887446163343412, 1);
  sqcRYGate(q, 4.7957833260170446e-08, 2);
  sqcRZGate(q, -1.0228010727215295, 2);
  sqcRYGate(q, -0.09782694929212798, 3);
  sqcRZGate(q, -9.2993493005951e-06, 3);
  sqcRYGate(q, -1.5707971838574246, 4);
  sqcRZGate(q, -3.1415896074282568, 4);
  sqcRYGate(q, -1.6427716311643445, 5);
  sqcRZGate(q, -3.1415911635069973, 5);
  sqcRYGate(q, -3.365189029366238e-06, 6);
  sqcRZGate(q, 1.14980363987588, 6);
  sqcRYGate(q, 1.5707955895074157, 7);
  sqcRZGate(q, 2.2301477117147135, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1415904582852403, 0);
  sqcRZGate(q, 1.727005676357558, 0);
  sqcRYGate(q, 1.570787064441397, 1);
  sqcRZGate(q, -2.920943241946361e-06, 1);
  sqcRYGate(q, 3.9920427870792767e-07, 2);
  sqcRZGate(q, -0.36904042266754106, 2);
  sqcRYGate(q, -1.5707818849546271, 3);
  sqcRZGate(q, 1.5707843622429785, 3);
  sqcRYGate(q, 2.804033195628546, 4);
  sqcRZGate(q, 1.8088744376138237, 4);
  sqcRYGate(q, -1.5707780081222813, 5);
  sqcRZGate(q, -0.28027349536119606, 5);
  sqcRYGate(q, 3.14159164428184, 6);
  sqcRZGate(q, 1.5807206774628346, 6);
  sqcRYGate(q, 2.6213188350117367, 7);
  sqcRZGate(q, 3.0712131607768276, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707940652590764, 0);
  sqcRZGate(q, -3.141592011861322, 0);
  sqcRYGate(q, -1.5707592406703217, 1);
  sqcRZGate(q, 1.1669684547990817, 1);
  sqcRYGate(q, -1.5707954461911688, 2);
  sqcRZGate(q, 0.0919245146235932, 2);
  sqcRYGate(q, -1.570795638136281, 3);
  sqcRZGate(q, -1.5749028023958234, 3);
  sqcRYGate(q, -3.1415825542104026, 4);
  sqcRZGate(q, -3.091825761263531, 4);
  sqcRYGate(q, 1.2346138795749084e-06, 5);
  sqcRZGate(q, 0.4409225542998331, 5);
  sqcRYGate(q, -5.44621359019485e-07, 6);
  sqcRZGate(q, 1.0175983550268557, 6);
  sqcRYGate(q, -5.384659080015063e-06, 7);
  sqcRZGate(q, 1.1870387414059307, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5707989240390523, 0);
  sqcRZGate(q, 4.417897283559569e-06, 0);
  sqcRYGate(q, 3.1415924074691226, 1);
  sqcRZGate(q, 2.7377570378028895, 1);
  sqcRYGate(q, -3.14159062460217, 2);
  sqcRZGate(q, -3.049667293344797, 2);
  sqcRYGate(q, -3.1415920787109406, 3);
  sqcRZGate(q, 1.5667577244785926, 3);
  sqcRYGate(q, -1.5707996347600974, 4);
  sqcRZGate(q, -1.5707817755090234, 4);
  sqcRYGate(q, -1.5131923103593003e-05, 5);
  sqcRZGate(q, -1.7314359379155093, 5);
  sqcRYGate(q, -1.5707961092955367, 6);
  sqcRZGate(q, 0.6914630336762073, 6);
  sqcRYGate(q, 3.1415905596535394, 7);
  sqcRZGate(q, 0.38767130316623355, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5707934280277247, 0);
  sqcRZGate(q, 0.607746022473478, 0);
  sqcRYGate(q, 1.4944004401074968, 1);
  sqcRZGate(q, -1.169319773248936e-06, 1);
  sqcRYGate(q, 1.5707943607406607, 2);
  sqcRZGate(q, -0.8777724182161537, 2);
  sqcRYGate(q, -0.14079543914675074, 3);
  sqcRZGate(q, 3.14156160932526, 3);
  sqcRYGate(q, -0.6141744137896552, 4);
  sqcRZGate(q, 3.1415919363581994, 4);
  sqcRYGate(q, 3.0582838954519067, 5);
  sqcRZGate(q, 7.104487080411559e-06, 5);
  sqcRYGate(q, 1.5707966928414576, 6);
  sqcRZGate(q, 1.5707963567409704, 6);
  sqcRYGate(q, 0.08037257087430313, 7);
  sqcRZGate(q, 3.141502275421159, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.8747208586921147e-06, 0);
  sqcRZGate(q, 2.8178779498773894, 0);
  sqcRYGate(q, -1.5707970150473314, 1);
  sqcRZGate(q, -1.4426300460764263, 1);
  sqcRYGate(q, -3.1415904497019835, 2);
  sqcRZGate(q, -0.5937424555963509, 2);
  sqcRYGate(q, -1.570805606350531, 3);
  sqcRZGate(q, -1.4426357502741274, 3);
  sqcRYGate(q, 1.5707947152654773, 4);
  sqcRZGate(q, -2.8575585583224705, 4);
  sqcRYGate(q, -1.5707966411723264, 5);
  sqcRZGate(q, 1.6989729162220586, 5);
  sqcRYGate(q, 1.5707971349283998, 6);
  sqcRZGate(q, 1.8548283506490284, 6);
  sqcRYGate(q, -1.5708034121353964, 7);
  sqcRZGate(q, 0.1281794209461653, 7);

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
