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

  sqcRYGate(q, 1.033520870456025, 0);
  sqcRZGate(q, 1.049315715656121, 0);
  sqcRYGate(q, 2.370663132326779, 1);
  sqcRZGate(q, 0.8641357441977771, 1);
  sqcRYGate(q, 0.2076177204588774, 2);
  sqcRZGate(q, -2.108710549199177, 2);
  sqcRYGate(q, -1.992643534155672, 3);
  sqcRZGate(q, 1.3695679333378121, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.019975598896188, 0);
  sqcRZGate(q, -0.3599655144020894, 0);
  sqcRYGate(q, 0.3850336865382307, 1);
  sqcRZGate(q, 2.6088412951809343, 1);
  sqcRYGate(q, -2.3827397988316066, 2);
  sqcRZGate(q, -2.5551473672254907, 2);
  sqcRYGate(q, 2.826747744694465, 3);
  sqcRZGate(q, -2.212950088511306, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.588669132018775, 0);
  sqcRZGate(q, -1.803729730344083, 0);
  sqcRYGate(q, -1.5648312364704107, 1);
  sqcRZGate(q, -0.71153249294108, 1);
  sqcRYGate(q, 0.03416207583812169, 2);
  sqcRZGate(q, -1.7202330597147704, 2);
  sqcRYGate(q, -0.8599762066220791, 3);
  sqcRZGate(q, -2.2086306160370093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.285081247013911, 0);
  sqcRZGate(q, 1.3299843036257437, 0);
  sqcRYGate(q, -1.0287103725513873, 1);
  sqcRZGate(q, 1.2201895006595258, 1);
  sqcRYGate(q, -2.562870276980177, 2);
  sqcRZGate(q, -2.3580001778974293, 2);
  sqcRYGate(q, 2.2913569911198386, 3);
  sqcRZGate(q, 2.225820381847554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3955094399971655, 0);
  sqcRZGate(q, 0.854258693463458, 0);
  sqcRYGate(q, -0.0802331316754854, 1);
  sqcRZGate(q, -1.735162079569245, 1);
  sqcRYGate(q, 0.8536211405939599, 2);
  sqcRZGate(q, 1.422798947947251, 2);
  sqcRYGate(q, -2.952280835909663, 3);
  sqcRZGate(q, 1.5533889815651944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4331753062747188, 0);
  sqcRZGate(q, -1.9983113935183567, 0);
  sqcRYGate(q, -2.8726703609598063, 1);
  sqcRZGate(q, 2.7586638179397527, 1);
  sqcRYGate(q, -0.8190816197781235, 2);
  sqcRZGate(q, -0.9154162196553688, 2);
  sqcRYGate(q, 1.9652032231526066, 3);
  sqcRZGate(q, 0.6359854223340154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5028867853134784, 0);
  sqcRZGate(q, -2.5018671569171373, 0);
  sqcRYGate(q, 2.2784076475754143, 1);
  sqcRZGate(q, 0.35716178582046254, 1);
  sqcRYGate(q, -1.7506619123836504, 2);
  sqcRZGate(q, -1.703466139887467, 2);
  sqcRYGate(q, 0.4876827186424153, 3);
  sqcRZGate(q, -2.5329844750297847, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5062566252846938, 0);
  sqcRZGate(q, -3.0102194322062132, 0);
  sqcRYGate(q, -2.421524773938882, 1);
  sqcRZGate(q, -2.7876214605144565, 1);
  sqcRYGate(q, 2.73461574700717, 2);
  sqcRZGate(q, -0.573851149436434, 2);
  sqcRYGate(q, -1.5315656406255436, 3);
  sqcRZGate(q, 1.762626930524621, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5992071626760547, 0);
  sqcRZGate(q, 0.25472720948484184, 0);
  sqcRYGate(q, -1.478167565455945, 1);
  sqcRZGate(q, 2.5179390827770263, 1);
  sqcRYGate(q, 2.7497627711868877, 2);
  sqcRZGate(q, 2.3332459848966254, 2);
  sqcRYGate(q, -2.5926633106950505, 3);
  sqcRZGate(q, 0.7232678746637758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.36964675391888613, 0);
  sqcRZGate(q, -1.9470765373923946, 0);
  sqcRYGate(q, -0.519812280552647, 1);
  sqcRZGate(q, -1.2311830737930078, 1);
  sqcRYGate(q, 2.897233628367061, 2);
  sqcRZGate(q, -3.0728495872464534, 2);
  sqcRYGate(q, -1.7354740609847372, 3);
  sqcRZGate(q, -0.8485079131946967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5123198380659746, 0);
  sqcRZGate(q, 2.5638007938507825, 0);
  sqcRYGate(q, -3.059771595986313, 1);
  sqcRZGate(q, -0.6404772462515408, 1);
  sqcRYGate(q, -2.539406488337636, 2);
  sqcRZGate(q, 2.2450942394801876, 2);
  sqcRYGate(q, -0.7807096166555008, 3);
  sqcRZGate(q, -1.8735578648466849, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5662928669118017, 0);
  sqcRZGate(q, -1.6202433221464878, 0);
  sqcRYGate(q, 1.3659571096239116, 1);
  sqcRZGate(q, -0.6844013642071226, 1);
  sqcRYGate(q, 2.3932133041438237, 2);
  sqcRZGate(q, -0.16250277314259007, 2);
  sqcRYGate(q, 2.7654187439278104, 3);
  sqcRZGate(q, -1.120556848866428, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5335307773139109, 0);
  sqcRZGate(q, 3.039387988264901, 0);
  sqcRYGate(q, -0.8859538649925804, 1);
  sqcRZGate(q, -2.9396127928773406, 1);
  sqcRYGate(q, 2.6962346221910085, 2);
  sqcRZGate(q, -0.22750551080640416, 2);
  sqcRYGate(q, 0.963735017101049, 3);
  sqcRZGate(q, -0.9566410484694915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.184493801490545, 0);
  sqcRZGate(q, -3.0484277071256813, 0);
  sqcRYGate(q, -1.5031600489533021, 1);
  sqcRZGate(q, 2.55161164031628, 1);
  sqcRYGate(q, -2.0331564353407883, 2);
  sqcRZGate(q, 0.5354488451318853, 2);
  sqcRYGate(q, 1.9811369019108256, 3);
  sqcRZGate(q, 1.8002247428603475, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4367883749021764, 0);
  sqcRZGate(q, -2.382611965818024, 0);
  sqcRYGate(q, 1.288084053982569, 1);
  sqcRZGate(q, 3.1334996813337708, 1);
  sqcRYGate(q, 2.132022567822621, 2);
  sqcRZGate(q, -0.35227120987766103, 2);
  sqcRYGate(q, -1.114424476994504, 3);
  sqcRZGate(q, 1.508507296476722, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6231882895266585, 0);
  sqcRZGate(q, -2.651326310355286, 0);
  sqcRYGate(q, -1.6195208333251454, 1);
  sqcRZGate(q, -2.7101376951012637, 1);
  sqcRYGate(q, 2.970017075433575, 2);
  sqcRZGate(q, 3.0348951906267674, 2);
  sqcRYGate(q, 2.224187367465361, 3);
  sqcRZGate(q, -1.2037814194685117, 3);

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
