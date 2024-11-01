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

  sqcRYGate(q, 3.085075702531736, 0);
  sqcRZGate(q, 1.323423458871032, 0);
  sqcRYGate(q, 0.7991458366386367, 1);
  sqcRZGate(q, 1.4914756575387162, 1);
  sqcRYGate(q, -2.779460961844147, 2);
  sqcRZGate(q, 0.4635434938989915, 2);
  sqcRYGate(q, 2.8576460082398722, 3);
  sqcRZGate(q, -1.3644768672637264, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3757970895438723, 0);
  sqcRZGate(q, 0.6943160370744933, 0);
  sqcRYGate(q, -1.4180665386214766, 1);
  sqcRZGate(q, 2.8047607186676355, 1);
  sqcRYGate(q, -0.39339310254122406, 2);
  sqcRZGate(q, -1.489939379701302, 2);
  sqcRYGate(q, -0.6711252814152371, 3);
  sqcRZGate(q, -3.134038994945911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5984358291945844, 0);
  sqcRZGate(q, -3.0223898654686385, 0);
  sqcRYGate(q, 2.6928729691705184, 1);
  sqcRZGate(q, 2.219438395656367, 1);
  sqcRYGate(q, 1.9391465131520873, 2);
  sqcRZGate(q, 2.497453732692109, 2);
  sqcRYGate(q, -1.458888146595367, 3);
  sqcRZGate(q, 2.3258953737493226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0659643561801557, 0);
  sqcRZGate(q, -0.11955798062374613, 0);
  sqcRYGate(q, -2.5119614730230952, 1);
  sqcRZGate(q, 1.7995425032291212, 1);
  sqcRYGate(q, -2.6150984868157012, 2);
  sqcRZGate(q, 2.539560483166215, 2);
  sqcRYGate(q, -0.5228850022941085, 3);
  sqcRZGate(q, -1.5603490932478008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.170775377721785, 0);
  sqcRZGate(q, -1.959061149407817, 0);
  sqcRYGate(q, 2.728436956886647, 1);
  sqcRZGate(q, 1.382058442831831, 1);
  sqcRYGate(q, -0.9519413000435533, 2);
  sqcRZGate(q, 1.4886283631024213, 2);
  sqcRYGate(q, 1.8869313066319358, 3);
  sqcRZGate(q, 0.49831234375485006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0340885456134008, 0);
  sqcRZGate(q, 0.9984915964501178, 0);
  sqcRYGate(q, 1.224670881794503, 1);
  sqcRZGate(q, 2.445542721900122, 1);
  sqcRYGate(q, -2.819153674196074, 2);
  sqcRZGate(q, -0.9404387462388123, 2);
  sqcRYGate(q, 3.1020361471535045, 3);
  sqcRZGate(q, 2.1724472769409617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2607739501041382, 0);
  sqcRZGate(q, -0.06585905363139766, 0);
  sqcRYGate(q, 2.391873655653399, 1);
  sqcRZGate(q, -0.9021015136535658, 1);
  sqcRYGate(q, 0.32576636324002894, 2);
  sqcRZGate(q, -2.5189934455336767, 2);
  sqcRYGate(q, -1.5791266378612434, 3);
  sqcRZGate(q, 3.0821928951445448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1205438830254346, 0);
  sqcRZGate(q, -0.5554348313700617, 0);
  sqcRYGate(q, 0.2654370390586509, 1);
  sqcRZGate(q, 0.3624705464946107, 1);
  sqcRYGate(q, -2.7689687347405854, 2);
  sqcRZGate(q, 2.732735790530191, 2);
  sqcRYGate(q, 1.014436415544101, 3);
  sqcRZGate(q, -2.529806894050807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6879036421659117, 0);
  sqcRZGate(q, 1.6197094187036072, 0);
  sqcRYGate(q, 1.387619854321792, 1);
  sqcRZGate(q, 0.6967941088256315, 1);
  sqcRYGate(q, 0.5152907841755046, 2);
  sqcRZGate(q, 0.053533205249854644, 2);
  sqcRYGate(q, 2.452158321316815, 3);
  sqcRZGate(q, 0.44800630797526164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9278781683750177, 0);
  sqcRZGate(q, -2.271229049855849, 0);
  sqcRYGate(q, 1.4458263586069429, 1);
  sqcRZGate(q, 1.525372247421159, 1);
  sqcRYGate(q, -2.3499674748587287, 2);
  sqcRZGate(q, -2.4140014186313006, 2);
  sqcRYGate(q, -0.8840065943396809, 3);
  sqcRZGate(q, 0.3391550136791608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.0032365172429998142, 0);
  sqcRZGate(q, 1.951625238058695, 0);
  sqcRYGate(q, 2.763080536249589, 1);
  sqcRZGate(q, 0.3991956412731296, 1);
  sqcRYGate(q, 0.7763308804267997, 2);
  sqcRZGate(q, -0.9066667673443343, 2);
  sqcRYGate(q, -2.2819510008523642, 3);
  sqcRZGate(q, 1.1840557377142478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.724820399859105, 0);
  sqcRZGate(q, 1.9686009687915464, 0);
  sqcRYGate(q, 3.113476069507642, 1);
  sqcRZGate(q, 2.5608030173190164, 1);
  sqcRYGate(q, -2.5829635433152283, 2);
  sqcRZGate(q, 3.107893351089074, 2);
  sqcRYGate(q, -0.6348785412992877, 3);
  sqcRZGate(q, 1.4098178365091063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5011194238643322, 0);
  sqcRZGate(q, 0.6665178092555619, 0);
  sqcRYGate(q, -1.8708653942390567, 1);
  sqcRZGate(q, -1.5082344446365692, 1);
  sqcRYGate(q, -1.9051932564075538, 2);
  sqcRZGate(q, 1.4536068495515613, 2);
  sqcRYGate(q, -0.11341795930421039, 3);
  sqcRZGate(q, 1.222277455811506, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6319309463349176, 0);
  sqcRZGate(q, -1.5497179758703528, 0);
  sqcRYGate(q, -0.4895569566465718, 1);
  sqcRZGate(q, -0.024064584442696102, 1);
  sqcRYGate(q, -2.577423299025808, 2);
  sqcRZGate(q, -1.0294493844367036, 2);
  sqcRYGate(q, -0.865544379952631, 3);
  sqcRZGate(q, 3.0041821947349012, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.579357437705381, 0);
  sqcRZGate(q, 1.3432248193752523, 0);
  sqcRYGate(q, 0.3066565165456474, 1);
  sqcRZGate(q, -2.180486642990629, 1);
  sqcRYGate(q, -0.42166447833383813, 2);
  sqcRZGate(q, -0.1426843990169159, 2);
  sqcRYGate(q, -0.5753911635539457, 3);
  sqcRZGate(q, 0.5939697108284353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3784585004266683, 0);
  sqcRZGate(q, 2.1452111220171326, 0);
  sqcRYGate(q, -1.4660093753901708, 1);
  sqcRZGate(q, 1.014050622540049, 1);
  sqcRYGate(q, -0.8238602988152273, 2);
  sqcRZGate(q, -1.7599714205786121, 2);
  sqcRYGate(q, 2.6835155668078454, 3);
  sqcRZGate(q, -1.5345507112622798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7267799342745747, 0);
  sqcRZGate(q, 2.9605831138273517, 0);
  sqcRYGate(q, 1.2048716566939275, 1);
  sqcRZGate(q, -0.12615058508686736, 1);
  sqcRYGate(q, -2.5027854769801317, 2);
  sqcRZGate(q, -3.0356905178133986, 2);
  sqcRYGate(q, -1.316361692045196, 3);
  sqcRZGate(q, -0.7795715506976651, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0833165944913867, 0);
  sqcRZGate(q, 2.383985435497376, 0);
  sqcRYGate(q, -0.25306796577041274, 1);
  sqcRZGate(q, -1.0234297975907207, 1);
  sqcRYGate(q, -0.1448180771089298, 2);
  sqcRZGate(q, -0.2510372826091022, 2);
  sqcRYGate(q, 2.604605505455581, 3);
  sqcRZGate(q, 0.3001205239109135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3936282848693446, 0);
  sqcRZGate(q, 1.7513050248614948, 0);
  sqcRYGate(q, 1.304693127637993, 1);
  sqcRZGate(q, -0.44225261183556863, 1);
  sqcRYGate(q, -2.1382354143331983, 2);
  sqcRZGate(q, -0.28693177657924, 2);
  sqcRYGate(q, 2.6549937935040693, 3);
  sqcRZGate(q, -1.8949609081220897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.700014751048747, 0);
  sqcRZGate(q, 1.1712312651184087, 0);
  sqcRYGate(q, 2.764718674507974, 1);
  sqcRZGate(q, 0.3369600563455508, 1);
  sqcRYGate(q, 2.9840104445596864, 2);
  sqcRZGate(q, 1.967828504029553, 2);
  sqcRYGate(q, -1.9406957725794474, 3);
  sqcRZGate(q, 0.286548190465842, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0986008619496275, 0);
  sqcRZGate(q, 0.9339350301576516, 0);
  sqcRYGate(q, -2.437092137648871, 1);
  sqcRZGate(q, -0.14696416239828292, 1);
  sqcRYGate(q, -3.1372841911588645, 2);
  sqcRZGate(q, 0.6048181411224478, 2);
  sqcRYGate(q, -1.0080804755540658, 3);
  sqcRZGate(q, -0.01392566589933697, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6136095153379584, 0);
  sqcRZGate(q, 0.20612199607281936, 0);
  sqcRYGate(q, 2.5376388796768214, 1);
  sqcRZGate(q, -2.2955373380735846, 1);
  sqcRYGate(q, 0.5952160892313725, 2);
  sqcRZGate(q, 1.613565237049066, 2);
  sqcRYGate(q, 0.6821470998289819, 3);
  sqcRZGate(q, -2.4629105043803894, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.051598700690133725, 0);
  sqcRZGate(q, 2.505545513477207, 0);
  sqcRYGate(q, -0.9759404280055755, 1);
  sqcRZGate(q, 1.767621472001215, 1);
  sqcRYGate(q, -0.37858773991977746, 2);
  sqcRZGate(q, 0.8101960063285764, 2);
  sqcRYGate(q, 0.9834292230986725, 3);
  sqcRZGate(q, -1.8585485229116798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.789513918226456, 0);
  sqcRZGate(q, -1.906108842343814, 0);
  sqcRYGate(q, -2.728697138947087, 1);
  sqcRZGate(q, -0.4946052547144016, 1);
  sqcRYGate(q, 0.7590851420717611, 2);
  sqcRZGate(q, 0.5971025965531016, 2);
  sqcRYGate(q, 2.8200759364821675, 3);
  sqcRZGate(q, -1.9146740597681187, 3);

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
