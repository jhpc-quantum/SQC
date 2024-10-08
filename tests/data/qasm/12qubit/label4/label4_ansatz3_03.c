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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.7095522401864387, 0);
  sqcRZGate(q, -1.6253227113839783, 0);
  sqcRYGate(q, 3.1415906560366826, 1);
  sqcRZGate(q, 1.8551606583705418, 1);
  sqcRYGate(q, 3.1415844639830675, 2);
  sqcRZGate(q, -1.5581002078496393, 2);
  sqcRYGate(q, 1.0059978800028324, 3);
  sqcRZGate(q, 1.5707957728520512, 3);
  sqcRYGate(q, -1.5708195659028854, 4);
  sqcRZGate(q, -0.8862686698889107, 4);
  sqcRYGate(q, -1.5707942175158953, 5);
  sqcRZGate(q, 1.5070197699567185, 5);
  sqcRYGate(q, -2.49081031585667, 6);
  sqcRZGate(q, -1.5827909982577282, 6);
  sqcRYGate(q, -3.1415903980669864, 7);
  sqcRZGate(q, -2.3397748612972022, 7);
  sqcRYGate(q, -1.570777830070598, 8);
  sqcRZGate(q, -3.1415854049065195, 8);
  sqcRYGate(q, 1.3478887303049626e-06, 9);
  sqcRZGate(q, 2.138463860217881, 9);
  sqcRYGate(q, 3.1415920151324075, 10);
  sqcRZGate(q, -3.0290338100436087, 10);
  sqcRYGate(q, -0.6437372368753822, 11);
  sqcRZGate(q, -0.17372182004361725, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.9427902639456152, 0);
  sqcRZGate(q, -0.14901637543838933, 0);
  sqcRYGate(q, 1.570796944812198, 1);
  sqcRZGate(q, 0.039428010451757305, 1);
  sqcRYGate(q, -1.0936214295931279e-05, 2);
  sqcRZGate(q, -1.5845345346229625, 2);
  sqcRYGate(q, -1.5522462081204589, 3);
  sqcRZGate(q, -1.5707958680227474, 3);
  sqcRYGate(q, -3.2588403735545057e-06, 4);
  sqcRZGate(q, -0.6845379972452248, 4);
  sqcRYGate(q, 3.1415917382123033, 5);
  sqcRZGate(q, 1.5290600646285328, 5);
  sqcRYGate(q, 1.570796216128137, 6);
  sqcRZGate(q, 0.9979557989405847, 6);
  sqcRYGate(q, -1.5707967670091278, 7);
  sqcRZGate(q, 1.060839256351188, 7);
  sqcRYGate(q, -1.570784628492376, 8);
  sqcRZGate(q, -1.5827901502135937, 8);
  sqcRYGate(q, 3.1415917169415053, 9);
  sqcRZGate(q, -1.7368539805351066, 9);
  sqcRYGate(q, 1.5708014227720828, 10);
  sqcRZGate(q, -0.45870651416233965, 10);
  sqcRYGate(q, 0.9343226773968212, 11);
  sqcRZGate(q, 1.6747267018545486, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.3858181076874418, 0);
  sqcRZGate(q, -1.5707960894681694, 0);
  sqcRYGate(q, -3.1899023777981483e-07, 1);
  sqcRZGate(q, 1.3460267012026446, 1);
  sqcRYGate(q, 1.570796665616001, 2);
  sqcRZGate(q, -0.6902486299947963, 2);
  sqcRYGate(q, 1.5707966376570301, 3);
  sqcRZGate(q, -3.140029680080403, 3);
  sqcRYGate(q, 2.437159709186798, 4);
  sqcRZGate(q, 2.8014812962757363, 4);
  sqcRYGate(q, -3.1163275636691674, 5);
  sqcRZGate(q, 0.007922268882993857, 5);
  sqcRYGate(q, 8.380217426662284e-07, 6);
  sqcRZGate(q, 1.3951150181483776, 6);
  sqcRYGate(q, 1.4866275252196694e-07, 7);
  sqcRZGate(q, 0.6805971499438509, 7);
  sqcRYGate(q, -1.5707955835648626, 8);
  sqcRZGate(q, 2.1302485352659137, 8);
  sqcRYGate(q, -1.5707974889269078, 9);
  sqcRZGate(q, -2.636304670180303, 9);
  sqcRYGate(q, 1.570791042648648, 10);
  sqcRZGate(q, -3.1415908676678455, 10);
  sqcRYGate(q, 2.682895082961835, 11);
  sqcRZGate(q, 1.5707996467762175, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5707956386866109, 0);
  sqcRZGate(q, -1.649336886108913, 0);
  sqcRYGate(q, 3.129838568806637, 1);
  sqcRZGate(q, 0.7489462360547319, 1);
  sqcRYGate(q, -2.491107110520033, 2);
  sqcRZGate(q, 0.016757297851519602, 2);
  sqcRYGate(q, 2.8506625978936135, 3);
  sqcRZGate(q, 0.5660884298954165, 3);
  sqcRYGate(q, 3.1415905262412758, 4);
  sqcRZGate(q, -1.9108951793119093, 4);
  sqcRYGate(q, -3.1415892643400714, 5);
  sqcRZGate(q, -1.5629587325981353, 5);
  sqcRYGate(q, -1.5707902712997095, 6);
  sqcRZGate(q, 1.5707942840999536, 6);
  sqcRYGate(q, -1.5691277045115495, 7);
  sqcRZGate(q, 2.654359609738036, 7);
  sqcRYGate(q, -1.4127542335984344e-07, 8);
  sqcRZGate(q, 0.0814457784941025, 8);
  sqcRYGate(q, 3.0626784841558674e-07, 9);
  sqcRZGate(q, 2.491342784024943, 9);
  sqcRYGate(q, 1.5708016975562646, 10);
  sqcRZGate(q, -3.141592267122663, 10);
  sqcRYGate(q, 2.1054864682351107, 11);
  sqcRZGate(q, -1.5707985649805059, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.570796861892112, 0);
  sqcRZGate(q, 1.5118715761281438, 0);
  sqcRYGate(q, -1.570798515396759, 1);
  sqcRZGate(q, -1.5909806613146076, 1);
  sqcRYGate(q, 3.141589232862902, 2);
  sqcRZGate(q, 0.3107981110775128, 2);
  sqcRYGate(q, -2.3058978371182093e-07, 3);
  sqcRZGate(q, -1.27507050358964, 3);
  sqcRYGate(q, 1.5707928835786036, 4);
  sqcRZGate(q, -1.5707508701889799, 4);
  sqcRYGate(q, -1.5707945577658897, 5);
  sqcRZGate(q, 0.26183302340575154, 5);
  sqcRYGate(q, -1.570798673650343, 6);
  sqcRZGate(q, -0.6142888580448268, 6);
  sqcRYGate(q, -1.5707951021476347, 7);
  sqcRZGate(q, -0.24614918076621703, 7);
  sqcRYGate(q, 7.366494219063213e-06, 8);
  sqcRZGate(q, 2.5296635362037296, 8);
  sqcRYGate(q, 1.910633931068162e-06, 9);
  sqcRZGate(q, -1.0107927817369857, 9);
  sqcRYGate(q, 1.570793706660875, 10);
  sqcRZGate(q, 2.4609888704877014, 10);
  sqcRYGate(q, 1.9141285015624199, 11);
  sqcRZGate(q, 1.570797506849354, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.054551243899146e-05, 0);
  sqcRZGate(q, 1.629716520229029, 0);
  sqcRYGate(q, -3.141591930740987, 1);
  sqcRZGate(q, 1.5506041558294106, 1);
  sqcRYGate(q, -1.5708009180733724, 2);
  sqcRZGate(q, -2.6765174666828235, 2);
  sqcRYGate(q, -1.5195507613611328, 3);
  sqcRZGate(q, 2.694862980707489, 3);
  sqcRYGate(q, -0.2659808697371915, 4);
  sqcRZGate(q, 1.7806028636123268, 4);
  sqcRYGate(q, -0.001060115150376184, 5);
  sqcRZGate(q, -1.1864967912976898, 5);
  sqcRYGate(q, -3.2311373221460826e-07, 6);
  sqcRZGate(q, 0.6142900766562036, 6);
  sqcRYGate(q, 8.541797355166826e-08, 7);
  sqcRZGate(q, -2.895445738224844, 7);
  sqcRYGate(q, 3.141557059790678, 8);
  sqcRZGate(q, 2.6157216745884146, 8);
  sqcRYGate(q, 2.591276791747999, 9);
  sqcRZGate(q, -1.7845451834906472, 9);
  sqcRYGate(q, 6.259337553981429e-06, 10);
  sqcRZGate(q, -1.2335174287050292, 10);
  sqcRYGate(q, -1.5707993462884788, 11);
  sqcRZGate(q, -1.707961636767644, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5707977684056686, 0);
  sqcRZGate(q, -2.7826316809267015, 0);
  sqcRYGate(q, -1.570795615119421, 1);
  sqcRZGate(q, 0.6389856403954411, 1);
  sqcRYGate(q, 1.8730559465148169e-06, 2);
  sqcRZGate(q, 1.4646666525521417, 2);
  sqcRYGate(q, -3.1415922340814144, 3);
  sqcRZGate(q, 1.7683262448652917, 3);
  sqcRYGate(q, 3.141591840518252, 4);
  sqcRZGate(q, -1.0019926414516824, 4);
  sqcRYGate(q, 1.0535536459455817e-06, 5);
  sqcRZGate(q, -3.120871676093057, 5);
  sqcRYGate(q, -1.5707998563957117, 6);
  sqcRZGate(q, 0.35896382532023213, 6);
  sqcRYGate(q, 1.5707955309118902, 7);
  sqcRZGate(q, 2.673125712991517, 7);
  sqcRYGate(q, -3.141590076852472, 8);
  sqcRZGate(q, -0.19587546368239084, 8);
  sqcRYGate(q, -3.1415921215345994, 9);
  sqcRZGate(q, -2.253014906627544, 9);
  sqcRYGate(q, 2.1054905066794145, 10);
  sqcRZGate(q, 0.3589794710279926, 10);
  sqcRYGate(q, -2.6895088370374135e-06, 11);
  sqcRZGate(q, 1.6562245634855621, 11);

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
