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

  sqcRYGate(q, 0.37406470434144085, 0);
  sqcRZGate(q, -0.8489579061347923, 0);
  sqcRYGate(q, 3.0982741164709737, 1);
  sqcRZGate(q, -1.3818270745176413, 1);
  sqcRYGate(q, -2.839970702000163, 2);
  sqcRZGate(q, -1.9994314209943704, 2);
  sqcRYGate(q, -0.6502922642227487, 3);
  sqcRZGate(q, 0.602667480113606, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.12090105278955408, 0);
  sqcRZGate(q, -0.1272796182978427, 0);
  sqcRYGate(q, 0.5416522474426859, 1);
  sqcRZGate(q, -0.3638285452877092, 1);
  sqcRYGate(q, -0.16463632122170108, 2);
  sqcRZGate(q, 2.705881243578916, 2);
  sqcRYGate(q, -2.665282895343404, 3);
  sqcRZGate(q, 1.8475931176514793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.390162800976555, 0);
  sqcRZGate(q, -1.0530994624135044, 0);
  sqcRYGate(q, 1.9998738260836193, 1);
  sqcRZGate(q, -2.285747177675121, 1);
  sqcRYGate(q, -1.9719929267658962, 2);
  sqcRZGate(q, 0.027409930861383998, 2);
  sqcRYGate(q, 2.595452057185808, 3);
  sqcRZGate(q, -1.6478396330768783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3169787545115588, 0);
  sqcRZGate(q, -0.28004271645885737, 0);
  sqcRYGate(q, -0.3789012301091299, 1);
  sqcRZGate(q, 1.152537975987697, 1);
  sqcRYGate(q, 0.39698615405415105, 2);
  sqcRZGate(q, 1.9599371720529117, 2);
  sqcRYGate(q, 2.5861186541185854, 3);
  sqcRZGate(q, -1.748339182502149, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.083359378921669, 0);
  sqcRZGate(q, 0.5351616969281571, 0);
  sqcRYGate(q, -0.6000603854162554, 1);
  sqcRZGate(q, -0.06931368368269733, 1);
  sqcRYGate(q, 1.2042831389439028, 2);
  sqcRZGate(q, -2.8854253244895096, 2);
  sqcRYGate(q, -1.029508781079194, 3);
  sqcRZGate(q, -1.1671908372244169, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0510083357767073, 0);
  sqcRZGate(q, 3.041261627290097, 0);
  sqcRYGate(q, 1.2009447852685367, 1);
  sqcRZGate(q, 2.8493231056137622, 1);
  sqcRYGate(q, -1.2751284140108785, 2);
  sqcRZGate(q, 1.0982297490569992, 2);
  sqcRYGate(q, -2.4196661863320994, 3);
  sqcRZGate(q, -1.199469553708023, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.23716935250543184, 0);
  sqcRZGate(q, 2.479388683369775, 0);
  sqcRYGate(q, -0.07533642358838331, 1);
  sqcRZGate(q, -1.4361917877296788, 1);
  sqcRYGate(q, -3.100209139900538, 2);
  sqcRZGate(q, 0.7981537083876469, 2);
  sqcRYGate(q, -1.7747549550729227, 3);
  sqcRZGate(q, 2.216492190692856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.19360620936551107, 0);
  sqcRZGate(q, 1.0629691406784243, 0);
  sqcRYGate(q, 0.527593410267204, 1);
  sqcRZGate(q, -2.1831083824110395, 1);
  sqcRYGate(q, -2.620684369978036, 2);
  sqcRZGate(q, 0.3976386429705086, 2);
  sqcRYGate(q, -2.0534970586160606, 3);
  sqcRZGate(q, 0.6864012771421253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.605496795733387, 0);
  sqcRZGate(q, 0.9987043450790075, 0);
  sqcRYGate(q, -0.10471034316494376, 1);
  sqcRZGate(q, 2.343646345218697, 1);
  sqcRYGate(q, -0.9064076750167605, 2);
  sqcRZGate(q, -0.8628026663961715, 2);
  sqcRYGate(q, -1.347251202092816, 3);
  sqcRZGate(q, 0.9451851477870277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9956490529472103, 0);
  sqcRZGate(q, -0.5082992037143947, 0);
  sqcRYGate(q, 0.5003205847132195, 1);
  sqcRZGate(q, 1.9225207602714889, 1);
  sqcRYGate(q, 1.6610065037786637, 2);
  sqcRZGate(q, -2.395728278286877, 2);
  sqcRYGate(q, 0.46048990760647607, 3);
  sqcRZGate(q, -2.7170247940559156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.990239944382622, 0);
  sqcRZGate(q, 2.328551567422845, 0);
  sqcRYGate(q, -1.7675289444754263, 1);
  sqcRZGate(q, -0.14848349716847767, 1);
  sqcRYGate(q, 1.5565941835840709, 2);
  sqcRZGate(q, -0.7365376450809352, 2);
  sqcRYGate(q, -1.149814829840605, 3);
  sqcRZGate(q, 2.738171505163361, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7100201940937128, 0);
  sqcRZGate(q, 2.9704616518219176, 0);
  sqcRYGate(q, 2.4902519228488633, 1);
  sqcRZGate(q, -2.5102298953546662, 1);
  sqcRYGate(q, -0.8128092642562063, 2);
  sqcRZGate(q, -2.0858246599756605, 2);
  sqcRYGate(q, -2.6229308317755247, 3);
  sqcRZGate(q, 0.11496816073924136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.47599089822458457, 0);
  sqcRZGate(q, -1.1083031406521213, 0);
  sqcRYGate(q, -1.0980948515141558, 1);
  sqcRZGate(q, -2.2074808633761327, 1);
  sqcRYGate(q, -0.7455785936240673, 2);
  sqcRZGate(q, 1.713899978153587, 2);
  sqcRYGate(q, 2.4850978869452844, 3);
  sqcRZGate(q, 1.8106788881078941, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6678877566477255, 0);
  sqcRZGate(q, -2.288510899761781, 0);
  sqcRYGate(q, -2.4553871643457303, 1);
  sqcRZGate(q, 3.0563332883362544, 1);
  sqcRYGate(q, 0.4528323372980756, 2);
  sqcRZGate(q, 0.14070813106973734, 2);
  sqcRYGate(q, 2.6215109179076004, 3);
  sqcRZGate(q, -1.8377184900021188, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9698919244434734, 0);
  sqcRZGate(q, 1.873253847912344, 0);
  sqcRYGate(q, 2.844644077736609, 1);
  sqcRZGate(q, 2.227417816102445, 1);
  sqcRYGate(q, 0.5134454334940541, 2);
  sqcRZGate(q, -1.7354333052431627, 2);
  sqcRYGate(q, -0.03202954265247193, 3);
  sqcRZGate(q, 0.22196583852016794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3002618086896067, 0);
  sqcRZGate(q, 2.7428097596184022, 0);
  sqcRYGate(q, -1.6905138887633553, 1);
  sqcRZGate(q, 2.570660127179172, 1);
  sqcRYGate(q, -1.2449032748136828, 2);
  sqcRZGate(q, 2.1678838133884906, 2);
  sqcRYGate(q, -0.5764500479495732, 3);
  sqcRZGate(q, 0.5104971563335745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.823204968398958, 0);
  sqcRZGate(q, 2.115627431030906, 0);
  sqcRYGate(q, -1.5546171254338423, 1);
  sqcRZGate(q, -1.505747811257554, 1);
  sqcRYGate(q, -2.3502366124382483, 2);
  sqcRZGate(q, 1.8693579202835504, 2);
  sqcRYGate(q, -1.2558762763112536, 3);
  sqcRZGate(q, -0.1960180823274639, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4686102213674594, 0);
  sqcRZGate(q, 1.3125286687748112, 0);
  sqcRYGate(q, -2.1476430056745768, 1);
  sqcRZGate(q, -0.39984841401538534, 1);
  sqcRYGate(q, 2.5279210909087935, 2);
  sqcRZGate(q, -3.117591453695872, 2);
  sqcRYGate(q, 0.05141354182373417, 3);
  sqcRZGate(q, 0.5485455909097505, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.84201439534483, 0);
  sqcRZGate(q, -0.046039945332616745, 0);
  sqcRYGate(q, 0.966538061953415, 1);
  sqcRZGate(q, 3.0569082056782166, 1);
  sqcRYGate(q, -0.45972379924742957, 2);
  sqcRZGate(q, 0.7597621598514639, 2);
  sqcRYGate(q, -0.9449302447788055, 3);
  sqcRZGate(q, 2.957584131633515, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6858691146556906, 0);
  sqcRZGate(q, 0.6004254362252621, 0);
  sqcRYGate(q, 0.825879753528653, 1);
  sqcRZGate(q, 0.8495206823802368, 1);
  sqcRYGate(q, 0.441699422550486, 2);
  sqcRZGate(q, -0.821547483065059, 2);
  sqcRYGate(q, -2.8023245616683887, 3);
  sqcRZGate(q, 0.0791503793271827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4940652727475805, 0);
  sqcRZGate(q, -2.157148241450819, 0);
  sqcRYGate(q, 2.2036927107850293, 1);
  sqcRZGate(q, -2.0280875009170667, 1);
  sqcRYGate(q, 2.037140786817954, 2);
  sqcRZGate(q, -2.429742894201241, 2);
  sqcRYGate(q, 0.4953167977453149, 3);
  sqcRZGate(q, 0.14714665732017984, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8106701477566567, 0);
  sqcRZGate(q, 1.6907420622792542, 0);
  sqcRYGate(q, 2.274135043005747, 1);
  sqcRZGate(q, -1.2692346693975054, 1);
  sqcRYGate(q, 2.7709664665404623, 2);
  sqcRZGate(q, -2.833482232262894, 2);
  sqcRYGate(q, -2.1896455327120554, 3);
  sqcRZGate(q, -0.14057424852588962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6504786097415423, 0);
  sqcRZGate(q, 2.861579777440277, 0);
  sqcRYGate(q, 1.9452612342964803, 1);
  sqcRZGate(q, 2.194973687563136, 1);
  sqcRYGate(q, 0.9008264470206173, 2);
  sqcRZGate(q, -0.7076997038287747, 2);
  sqcRYGate(q, 0.7883738472805137, 3);
  sqcRZGate(q, -2.8167022078903834, 3);

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
