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

  sqcRYGate(q, 2.845297079010021, 0);
  sqcRYGate(q, 0.6095005041346917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2413476414514806, 0);
  sqcRYGate(q, -0.6418537622889982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46724470631023246, 2);
  sqcRYGate(q, 1.4387370048368817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1417729858119388, 2);
  sqcRYGate(q, -0.5107817835880404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5311549798974262, 4);
  sqcRYGate(q, -2.6500589793906544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.899454763790148, 4);
  sqcRYGate(q, -0.17280757836885385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.433400919366324, 6);
  sqcRYGate(q, -1.9718281369041162, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.14713075122100164, 6);
  sqcRYGate(q, 1.5214592176931605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8334162075280416, 0);
  sqcRYGate(q, 2.867139508161489, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4600634398759467, 0);
  sqcRYGate(q, 0.992904808887606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4619380669173019, 2);
  sqcRYGate(q, 2.1584969356262262, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5230306689712625, 2);
  sqcRYGate(q, -3.0489757769244012, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7869709743382041, 4);
  sqcRYGate(q, 1.6436989408995706, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.06491170556669709, 4);
  sqcRYGate(q, 0.21525050625492093, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6997011098706656, 1);
  sqcRYGate(q, -0.7161891088060813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.303258730490228, 1);
  sqcRYGate(q, -2.67851911900194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6531664954945169, 3);
  sqcRYGate(q, -0.07231373711085264, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9933745821883035, 3);
  sqcRYGate(q, 3.061212867768556, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2408511262624753, 5);
  sqcRYGate(q, 2.3307415799476576, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1095398180398606, 5);
  sqcRYGate(q, 0.29185927021635205, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2269510810422932, 0);
  sqcRYGate(q, -1.1526361999080796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9755931788696985, 0);
  sqcRYGate(q, 2.0289422756673856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.465360516356112, 2);
  sqcRYGate(q, 0.8379278606474884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.072174338929304, 2);
  sqcRYGate(q, 2.2217648321158574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1283266283697913, 4);
  sqcRYGate(q, -1.5411243734874673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2441371815592404, 4);
  sqcRYGate(q, -2.218279396686923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.685270306468827, 6);
  sqcRYGate(q, 0.7004857561311255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.47276426329003374, 6);
  sqcRYGate(q, 1.3397916361940627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.659035185784421, 0);
  sqcRYGate(q, -3.1083056292741618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0702489390601018, 0);
  sqcRYGate(q, -2.0617079210857683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4437856269412044, 2);
  sqcRYGate(q, -0.6685425358583892, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.20497477081145674, 2);
  sqcRYGate(q, 3.0999732460072353, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.764911776632684, 4);
  sqcRYGate(q, 1.343828658178336, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1346952022658536, 4);
  sqcRYGate(q, -0.002384026581553921, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8626466334523561, 1);
  sqcRYGate(q, 2.0998260571217173, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9928240833653765, 1);
  sqcRYGate(q, 2.787794950852654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.898987168825703, 3);
  sqcRYGate(q, 3.027097729527675, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.112979537462578, 3);
  sqcRYGate(q, 0.15529053440928442, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.24485584817222, 5);
  sqcRYGate(q, -2.1065948181264913, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2638915954875767, 5);
  sqcRYGate(q, 0.40260935182287444, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3848679985805983, 0);
  sqcRYGate(q, 0.009860541221978858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.301610183202845, 0);
  sqcRYGate(q, 2.004899352004297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.373345210139002, 2);
  sqcRYGate(q, -1.6376537897131755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7860123527971271, 2);
  sqcRYGate(q, 0.5838135568548565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3386241065146578, 4);
  sqcRYGate(q, -1.4106018154141537, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.135881557108362, 4);
  sqcRYGate(q, -0.5980946354608765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7613432116660714, 6);
  sqcRYGate(q, 2.873503315375159, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0060757437456274, 6);
  sqcRYGate(q, -1.3404014754015892, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4277400740628163, 0);
  sqcRYGate(q, -2.2759266338500366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.100714553011706, 0);
  sqcRYGate(q, 0.02219935376230386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0315397127022283, 2);
  sqcRYGate(q, -1.7645540563847515, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9343677088328897, 2);
  sqcRYGate(q, 0.06940521879153216, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.308243880803793, 4);
  sqcRYGate(q, -3.1214724093258317, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1243935309686384, 4);
  sqcRYGate(q, -0.08439752616424384, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.48674826299733187, 1);
  sqcRYGate(q, 1.751628976353273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.11192431551417314, 1);
  sqcRYGate(q, -2.863353724102614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9497861445384137, 3);
  sqcRYGate(q, 0.7289823636618684, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.121224837398856, 3);
  sqcRYGate(q, 0.09267715257791398, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3228880680397976, 5);
  sqcRYGate(q, -2.4738315966092363, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9447987356245338, 5);
  sqcRYGate(q, 0.0905206092723656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.134878831349914, 0);
  sqcRYGate(q, 1.6230873448974512, 1);
  sqcRYGate(q, -1.0223729282507288, 2);
  sqcRYGate(q, 2.3850960001771924, 3);
  sqcRYGate(q, 1.014447309214587, 4);
  sqcRYGate(q, 0.07177996207404592, 5);
  sqcRYGate(q, -2.7031017274408273, 6);
  sqcRYGate(q, -2.6996113498196928, 7);

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
