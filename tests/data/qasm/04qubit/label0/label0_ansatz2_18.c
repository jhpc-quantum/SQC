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

  sqcRYGate(q, 2.85048430528303, 0);
  sqcRZGate(q, -2.5625731891678107, 0);
  sqcRYGate(q, 2.5366251508700337, 1);
  sqcRZGate(q, 0.9226712592857967, 1);
  sqcRYGate(q, 2.027951437412224, 2);
  sqcRZGate(q, -2.8365747360658378, 2);
  sqcRYGate(q, -2.6841743252668264, 3);
  sqcRZGate(q, 3.0638492639004316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.1618954146786315, 0);
  sqcRZGate(q, 1.6324902947536, 0);
  sqcRYGate(q, -2.639239022668965, 1);
  sqcRZGate(q, 1.1528934157495014, 1);
  sqcRYGate(q, 2.8022700954007713, 2);
  sqcRZGate(q, 1.6440297623673361, 2);
  sqcRYGate(q, 0.0011561851581059482, 3);
  sqcRZGate(q, -0.8969921753181468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9890603853477674, 0);
  sqcRZGate(q, 3.0088741521736635, 0);
  sqcRYGate(q, 3.0088279398120785, 1);
  sqcRZGate(q, -1.8769430363713422, 1);
  sqcRYGate(q, -1.7244501973771167, 2);
  sqcRZGate(q, -2.7291292682581374, 2);
  sqcRYGate(q, 0.5903186030224956, 3);
  sqcRZGate(q, -1.9925026328229998, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6371205496446617, 0);
  sqcRZGate(q, 1.6598102806019417, 0);
  sqcRYGate(q, -1.3865570248757362, 1);
  sqcRZGate(q, -0.5722061065596957, 1);
  sqcRYGate(q, -0.20650968113330403, 2);
  sqcRZGate(q, -0.5227017567493286, 2);
  sqcRYGate(q, -0.5505673038128345, 3);
  sqcRZGate(q, -2.0326977965786694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.19194746519257355, 0);
  sqcRZGate(q, 2.240737675943493, 0);
  sqcRYGate(q, 1.5818137261151328, 1);
  sqcRZGate(q, 2.6483454255891603, 1);
  sqcRYGate(q, 0.6689324934320506, 2);
  sqcRZGate(q, 1.26252849051277, 2);
  sqcRYGate(q, -2.700985508996829, 3);
  sqcRZGate(q, -1.4797201193113076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.23477272253174547, 0);
  sqcRZGate(q, -1.1506330576792516, 0);
  sqcRYGate(q, -2.479522111226296, 1);
  sqcRZGate(q, 0.07297165314952547, 1);
  sqcRYGate(q, 2.885553435356647, 2);
  sqcRZGate(q, -1.6125363326826623, 2);
  sqcRYGate(q, 2.867109273749859, 3);
  sqcRZGate(q, -0.06332712256423532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4482175155003407, 0);
  sqcRZGate(q, -3.0969674137949057, 0);
  sqcRYGate(q, -1.680465783540293, 1);
  sqcRZGate(q, -2.4088961554234594, 1);
  sqcRYGate(q, 3.0862167651683974, 2);
  sqcRZGate(q, 1.5535114120186535, 2);
  sqcRYGate(q, -2.582075861420911, 3);
  sqcRZGate(q, 1.9791987093831953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5331759289634783, 0);
  sqcRZGate(q, -2.7138938028279926, 0);
  sqcRYGate(q, -1.2630648960996629, 1);
  sqcRZGate(q, 1.3129494177401642, 1);
  sqcRYGate(q, -3.0245579831377007, 2);
  sqcRZGate(q, 0.15331173178020582, 2);
  sqcRYGate(q, -0.7931223316618227, 3);
  sqcRZGate(q, -2.4955219858239377, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4394834798557652, 0);
  sqcRZGate(q, -2.1122145965390957, 0);
  sqcRYGate(q, 1.0475494873566733, 1);
  sqcRZGate(q, 1.751275320089107, 1);
  sqcRYGate(q, -2.75531012433335, 2);
  sqcRZGate(q, -1.0679228404155388, 2);
  sqcRYGate(q, 3.0422845156277654, 3);
  sqcRZGate(q, 2.520717143776344, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0295384569746355, 0);
  sqcRZGate(q, 2.44889444765164, 0);
  sqcRYGate(q, 0.4277461425303821, 1);
  sqcRZGate(q, 2.6045592490159506, 1);
  sqcRYGate(q, -0.46366751836019926, 2);
  sqcRZGate(q, 1.6083647265417618, 2);
  sqcRYGate(q, -0.33584727392877944, 3);
  sqcRZGate(q, 1.3822249714217287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0810832336228513, 0);
  sqcRZGate(q, -2.5372110935585233, 0);
  sqcRYGate(q, -2.198418509471227, 1);
  sqcRZGate(q, -2.6556328339343542, 1);
  sqcRYGate(q, 2.3504113430763547, 2);
  sqcRZGate(q, 1.3600081179950476, 2);
  sqcRYGate(q, -1.0836338690647593, 3);
  sqcRZGate(q, 2.2402306492966746, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6860811754927708, 0);
  sqcRZGate(q, 0.14195208708986232, 0);
  sqcRYGate(q, -0.18687481944713635, 1);
  sqcRZGate(q, 2.223546121691715, 1);
  sqcRYGate(q, -1.2767302786256591, 2);
  sqcRZGate(q, 0.33015599508879845, 2);
  sqcRYGate(q, -0.6462544230831861, 3);
  sqcRZGate(q, 1.7693251010058233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.10128364027244176, 0);
  sqcRZGate(q, 0.0898022935042991, 0);
  sqcRYGate(q, -0.4580038096285254, 1);
  sqcRZGate(q, 1.0626630573741478, 1);
  sqcRYGate(q, -2.5866071229754235, 2);
  sqcRZGate(q, -0.4271323891258343, 2);
  sqcRYGate(q, -2.935774042519724, 3);
  sqcRZGate(q, -1.4547794661528224, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.394442534753041, 0);
  sqcRZGate(q, -2.8351166946444453, 0);
  sqcRYGate(q, -1.3365447558246952, 1);
  sqcRZGate(q, -2.0507275201195476, 1);
  sqcRYGate(q, -0.5198094868905647, 2);
  sqcRZGate(q, -0.35390115865905725, 2);
  sqcRYGate(q, -0.32129859418201207, 3);
  sqcRZGate(q, -1.607254116537847, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0512603236243216, 0);
  sqcRZGate(q, -0.11392327376302072, 0);
  sqcRYGate(q, -1.4784562841132831, 1);
  sqcRZGate(q, 0.9652338869760824, 1);
  sqcRYGate(q, -1.718526236349339, 2);
  sqcRZGate(q, -0.7382528092914473, 2);
  sqcRYGate(q, 0.28816600127762726, 3);
  sqcRZGate(q, 1.2571400947170783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8660012605195497, 0);
  sqcRZGate(q, -2.1365952818364575, 0);
  sqcRYGate(q, -2.896235866624217, 1);
  sqcRZGate(q, 2.6053643078967714, 1);
  sqcRYGate(q, -0.4257564962157389, 2);
  sqcRZGate(q, 0.3163348160382382, 2);
  sqcRYGate(q, 0.3229817090176655, 3);
  sqcRZGate(q, -1.6747694443999857, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.24245455061817037, 0);
  sqcRZGate(q, -3.0108304602335623, 0);
  sqcRYGate(q, -1.1568833871050215, 1);
  sqcRZGate(q, 0.7438239079237974, 1);
  sqcRYGate(q, -0.39682363165364076, 2);
  sqcRZGate(q, -1.2981541969490873, 2);
  sqcRYGate(q, -2.2881846689808047, 3);
  sqcRZGate(q, 2.78322088736865, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.382338320838748, 0);
  sqcRZGate(q, -1.4779788564999754, 0);
  sqcRYGate(q, 1.57467452414949, 1);
  sqcRZGate(q, -0.15363341205306114, 1);
  sqcRYGate(q, 3.072979530549892, 2);
  sqcRZGate(q, 1.644449350714976, 2);
  sqcRYGate(q, -3.105950927744326, 3);
  sqcRZGate(q, -1.088399350926217, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6559650253809898, 0);
  sqcRZGate(q, -0.0005942222569283603, 0);
  sqcRYGate(q, 2.652390153348691, 1);
  sqcRZGate(q, 1.2278921545470016, 1);
  sqcRYGate(q, -2.9869505520292523, 2);
  sqcRZGate(q, 0.5301570614964036, 2);
  sqcRYGate(q, 0.35092240778410133, 3);
  sqcRZGate(q, 0.058013433659842004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.3446149133469261, 0);
  sqcRZGate(q, -0.6440829753019628, 0);
  sqcRYGate(q, -2.0962083643625045, 1);
  sqcRZGate(q, -0.8506961090472354, 1);
  sqcRYGate(q, 1.0023607886999792, 2);
  sqcRZGate(q, 1.1446863190218535, 2);
  sqcRYGate(q, 1.6685108680243843, 3);
  sqcRZGate(q, -1.3324443811491138, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7667177446431994, 0);
  sqcRZGate(q, 1.1955945122327452, 0);
  sqcRYGate(q, -0.01687074322628579, 1);
  sqcRZGate(q, -0.43267807710957573, 1);
  sqcRYGate(q, 3.0744028160926358, 2);
  sqcRZGate(q, 1.2581732358984845, 2);
  sqcRYGate(q, 0.2646625696587468, 3);
  sqcRZGate(q, -2.3594706133343313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6287448799136377, 0);
  sqcRZGate(q, 1.161406075183402, 0);
  sqcRYGate(q, -1.3277777050512265, 1);
  sqcRZGate(q, -1.014298664603479, 1);
  sqcRYGate(q, 0.5672532946929072, 2);
  sqcRZGate(q, -2.2372064631548296, 2);
  sqcRYGate(q, 2.962194169715899, 3);
  sqcRZGate(q, 2.8630923486786655, 3);

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
