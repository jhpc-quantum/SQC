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

  sqcRYGate(q, 2.104924310961392, 0);
  sqcRZGate(q, 0.42723818526705293, 0);
  sqcRYGate(q, -1.9164132210219005, 1);
  sqcRZGate(q, -1.273084931135284, 1);
  sqcRYGate(q, 0.4638290772225169, 2);
  sqcRZGate(q, 1.981629648267238, 2);
  sqcRYGate(q, -0.32712721850774074, 3);
  sqcRZGate(q, -2.6814738562923655, 3);
  sqcRYGate(q, -2.120989421996243, 4);
  sqcRZGate(q, -0.9944479934949255, 4);
  sqcRYGate(q, 1.2172987318422077, 5);
  sqcRZGate(q, -2.7051576862016735, 5);
  sqcRYGate(q, -1.3112912114900845, 6);
  sqcRZGate(q, 1.3619760459487529, 6);
  sqcRYGate(q, -1.184511197874594, 7);
  sqcRZGate(q, -1.950991594849838, 7);
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
  sqcRYGate(q, 1.0179073406354375, 0);
  sqcRZGate(q, 1.796021801310197, 0);
  sqcRYGate(q, -0.07191394618664315, 1);
  sqcRZGate(q, -2.7074344378413433, 1);
  sqcRYGate(q, 2.8515134806668936, 2);
  sqcRZGate(q, -0.938808294456544, 2);
  sqcRYGate(q, -2.7294650515061543, 3);
  sqcRZGate(q, -1.8503261908280084, 3);
  sqcRYGate(q, 0.648562406878013, 4);
  sqcRZGate(q, 2.0818243304054755, 4);
  sqcRYGate(q, -1.5844928367505031, 5);
  sqcRZGate(q, -1.8049103564814284, 5);
  sqcRYGate(q, 0.14903971268877125, 6);
  sqcRZGate(q, -1.8284229507577576, 6);
  sqcRYGate(q, 0.5060300561939625, 7);
  sqcRZGate(q, 1.1283168040196234, 7);
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
  sqcRYGate(q, -2.0313007422210543, 0);
  sqcRZGate(q, 2.318289776105527, 0);
  sqcRYGate(q, 2.0985060673951668, 1);
  sqcRZGate(q, -1.1141439996347895, 1);
  sqcRYGate(q, -3.1350447892768964, 2);
  sqcRZGate(q, 3.032701604177094, 2);
  sqcRYGate(q, 1.1544015900464502, 3);
  sqcRZGate(q, -2.277474745382741, 3);
  sqcRYGate(q, 1.6451399485738238, 4);
  sqcRZGate(q, -2.299528006197968, 4);
  sqcRYGate(q, -0.9147800522872297, 5);
  sqcRZGate(q, -1.9006289510442702, 5);
  sqcRYGate(q, -2.722098936756011, 6);
  sqcRZGate(q, -2.7202160371388024, 6);
  sqcRYGate(q, 0.5785436316501991, 7);
  sqcRZGate(q, 2.646747651662988, 7);
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
  sqcRYGate(q, -1.4678154434996737, 0);
  sqcRZGate(q, -2.06347883818109, 0);
  sqcRYGate(q, -2.545384904600438, 1);
  sqcRZGate(q, -1.0604651992728913, 1);
  sqcRYGate(q, 0.8390838310207137, 2);
  sqcRZGate(q, 1.4340709065878912, 2);
  sqcRYGate(q, 0.22684811342606714, 3);
  sqcRZGate(q, 2.520054162914078, 3);
  sqcRYGate(q, -0.6460686040165533, 4);
  sqcRZGate(q, 0.3279362792990687, 4);
  sqcRYGate(q, 1.8305689333832929, 5);
  sqcRZGate(q, -0.09257740437179775, 5);
  sqcRYGate(q, -0.6965193325816648, 6);
  sqcRZGate(q, 1.0100688240136575, 6);
  sqcRYGate(q, -1.9539360616763712, 7);
  sqcRZGate(q, -1.1217813564560395, 7);
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
  sqcRYGate(q, -2.9985255106731277, 0);
  sqcRZGate(q, 2.3506467642413984, 0);
  sqcRYGate(q, -0.3660722715460807, 1);
  sqcRZGate(q, 2.272349496421417, 1);
  sqcRYGate(q, 2.8605016883069903, 2);
  sqcRZGate(q, 0.7454523790418565, 2);
  sqcRYGate(q, -2.6189512874407495, 3);
  sqcRZGate(q, 1.9142937184218454, 3);
  sqcRYGate(q, -1.6904511155845694, 4);
  sqcRZGate(q, -1.4826730871945952, 4);
  sqcRYGate(q, 2.4989377578534797, 5);
  sqcRZGate(q, 0.5476412598471114, 5);
  sqcRYGate(q, -1.8629084873051474, 6);
  sqcRZGate(q, -0.4030395100098527, 6);
  sqcRYGate(q, -2.9164375556487716, 7);
  sqcRZGate(q, 0.9350648913321808, 7);
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
  sqcRYGate(q, -2.0198118941898437, 0);
  sqcRZGate(q, 1.07147518263847, 0);
  sqcRYGate(q, 2.6874997464814387, 1);
  sqcRZGate(q, -1.8576421448877682, 1);
  sqcRYGate(q, 2.2763445724044615, 2);
  sqcRZGate(q, 2.205374378027586, 2);
  sqcRYGate(q, 2.786915830010848, 3);
  sqcRZGate(q, -1.9127156572109885, 3);
  sqcRYGate(q, 1.1612255389686847, 4);
  sqcRZGate(q, -1.5112174360382413, 4);
  sqcRYGate(q, -2.017718285755779, 5);
  sqcRZGate(q, 1.4437448166991915, 5);
  sqcRYGate(q, 0.45037051514421483, 6);
  sqcRZGate(q, -0.40590097795846225, 6);
  sqcRYGate(q, 2.196251157965092, 7);
  sqcRZGate(q, 0.48622214226358385, 7);
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
  sqcRYGate(q, 0.9361711049489637, 0);
  sqcRZGate(q, -2.180170904766112, 0);
  sqcRYGate(q, -2.4320469036917265, 1);
  sqcRZGate(q, -0.7692501631102219, 1);
  sqcRYGate(q, 2.0068620259919254, 2);
  sqcRZGate(q, 2.141200945411677, 2);
  sqcRYGate(q, -2.597713350650429, 3);
  sqcRZGate(q, -0.2931371256075082, 3);
  sqcRYGate(q, -1.464874520451702, 4);
  sqcRZGate(q, -0.25021338079744787, 4);
  sqcRYGate(q, 0.3337341028361399, 5);
  sqcRZGate(q, -0.7277189999079176, 5);
  sqcRYGate(q, 2.6626682671559525, 6);
  sqcRZGate(q, -1.9771057982300162, 6);
  sqcRYGate(q, 2.520566533465901, 7);
  sqcRZGate(q, 1.818610093151838, 7);
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
  sqcRYGate(q, -2.646524008108574, 0);
  sqcRZGate(q, -1.8783396442469997, 0);
  sqcRYGate(q, 2.77908829931158, 1);
  sqcRZGate(q, -1.5027518091960808, 1);
  sqcRYGate(q, -0.31972654194627154, 2);
  sqcRZGate(q, 0.7579713791528659, 2);
  sqcRYGate(q, 3.1073595205692772, 3);
  sqcRZGate(q, -0.12765515224556268, 3);
  sqcRYGate(q, -0.20177245215205955, 4);
  sqcRZGate(q, 2.0264950952417644, 4);
  sqcRYGate(q, 1.1091736698937098, 5);
  sqcRZGate(q, -1.934565729902272, 5);
  sqcRYGate(q, -1.164897340501776, 6);
  sqcRZGate(q, 2.0484517058052987, 6);
  sqcRYGate(q, 2.4139875027392645, 7);
  sqcRZGate(q, -2.961410739316244, 7);
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
  sqcRYGate(q, -1.376430384815182, 0);
  sqcRZGate(q, 2.6989843762811234, 0);
  sqcRYGate(q, 3.009433031034522, 1);
  sqcRZGate(q, -0.28876641311522544, 1);
  sqcRYGate(q, -1.0970315519837346, 2);
  sqcRZGate(q, -1.8295028317370656, 2);
  sqcRYGate(q, -1.6379571039815826, 3);
  sqcRZGate(q, -1.7064310484693264, 3);
  sqcRYGate(q, -2.5973158448131306, 4);
  sqcRZGate(q, -2.5551568713022337, 4);
  sqcRYGate(q, 2.218121476906415, 5);
  sqcRZGate(q, -1.7988736832668382, 5);
  sqcRYGate(q, -0.2972833536714978, 6);
  sqcRZGate(q, -2.876994565708204, 6);
  sqcRYGate(q, 1.6700100268349205, 7);
  sqcRZGate(q, 0.7047436260484954, 7);
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
  sqcRYGate(q, -1.9194015570326295, 0);
  sqcRZGate(q, 2.91975512042634, 0);
  sqcRYGate(q, 0.29543593656836115, 1);
  sqcRZGate(q, -1.3433689454354178, 1);
  sqcRYGate(q, 0.4304064910379246, 2);
  sqcRZGate(q, 2.499800336042073, 2);
  sqcRYGate(q, 2.4472483650720696, 3);
  sqcRZGate(q, -2.3286195022079874, 3);
  sqcRYGate(q, -1.9677945680541307, 4);
  sqcRZGate(q, -2.937552355130887, 4);
  sqcRYGate(q, -1.0271348595480043, 5);
  sqcRZGate(q, -2.6818586297743767, 5);
  sqcRYGate(q, -2.1345389917781628, 6);
  sqcRZGate(q, -0.08972916316013889, 6);
  sqcRYGate(q, 1.9459737983093606, 7);
  sqcRZGate(q, 2.5752049794636744, 7);
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
  sqcRYGate(q, 1.747998047980061, 0);
  sqcRZGate(q, 1.4617190448053488, 0);
  sqcRYGate(q, 2.9409088269577084, 1);
  sqcRZGate(q, -1.081898090238616, 1);
  sqcRYGate(q, -2.8252796925545396, 2);
  sqcRZGate(q, -2.532132977723688, 2);
  sqcRYGate(q, 2.8567660219465747, 3);
  sqcRZGate(q, -2.865442400077821, 3);
  sqcRYGate(q, -3.1216487710389687, 4);
  sqcRZGate(q, 2.8445469712618334, 4);
  sqcRYGate(q, -2.030794530754399, 5);
  sqcRZGate(q, 0.43542582995708873, 5);
  sqcRYGate(q, 0.9310323802046906, 6);
  sqcRZGate(q, -2.309374789190521, 6);
  sqcRYGate(q, 2.344740454103817, 7);
  sqcRZGate(q, -3.096151911776641, 7);
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
  sqcRYGate(q, 1.5680801351878957, 0);
  sqcRZGate(q, -1.8060843849839794, 0);
  sqcRYGate(q, -1.9458073364306432, 1);
  sqcRZGate(q, 1.3614168067048107, 1);
  sqcRYGate(q, -2.065589174579368, 2);
  sqcRZGate(q, -2.0946130097564053, 2);
  sqcRYGate(q, -1.5090515414353736, 3);
  sqcRZGate(q, 0.25333674630992586, 3);
  sqcRYGate(q, -0.5114782238079236, 4);
  sqcRZGate(q, 0.7684254877105035, 4);
  sqcRYGate(q, -2.614591046280003, 5);
  sqcRZGate(q, 0.2996645604438921, 5);
  sqcRYGate(q, 1.4355775910502646, 6);
  sqcRZGate(q, 1.5079712778095495, 6);
  sqcRYGate(q, -1.6489314031143572, 7);
  sqcRZGate(q, 0.48847564712392133, 7);
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
  sqcRYGate(q, -0.06550340344584792, 0);
  sqcRZGate(q, 3.0653951816154295, 0);
  sqcRYGate(q, 2.2361188256061206, 1);
  sqcRZGate(q, 2.001549518578403, 1);
  sqcRYGate(q, 1.7507127551659165, 2);
  sqcRZGate(q, 1.4809880448477706, 2);
  sqcRYGate(q, -0.8673749467437797, 3);
  sqcRZGate(q, 0.41313366242079674, 3);
  sqcRYGate(q, 0.5946471545414812, 4);
  sqcRZGate(q, 0.026087852559251768, 4);
  sqcRYGate(q, -0.7745465729313402, 5);
  sqcRZGate(q, 1.1716458225220814, 5);
  sqcRYGate(q, 1.297312013813638, 6);
  sqcRZGate(q, 0.8747731098221502, 6);
  sqcRYGate(q, 1.4094282447148248, 7);
  sqcRZGate(q, -0.9855962722735442, 7);
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
  sqcRYGate(q, 0.07252273082101812, 0);
  sqcRZGate(q, -2.0436461371285453, 0);
  sqcRYGate(q, 1.186183652128645, 1);
  sqcRZGate(q, -2.3930611626550946, 1);
  sqcRYGate(q, -2.2650173614513753, 2);
  sqcRZGate(q, 2.8124933766110196, 2);
  sqcRYGate(q, 1.714569667322017, 3);
  sqcRZGate(q, -1.829477393835741, 3);
  sqcRYGate(q, 2.008416780861742, 4);
  sqcRZGate(q, -0.1499417566535861, 4);
  sqcRYGate(q, 0.1874590942129508, 5);
  sqcRZGate(q, 1.9176601041756833, 5);
  sqcRYGate(q, 1.8620759108459755, 6);
  sqcRZGate(q, -3.0769704333883, 6);
  sqcRYGate(q, -2.063202137457855, 7);
  sqcRZGate(q, 1.379262568416383, 7);
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
  sqcRYGate(q, 2.999281049760642, 0);
  sqcRZGate(q, -0.9381939433994719, 0);
  sqcRYGate(q, 1.5361113118011223, 1);
  sqcRZGate(q, 1.8266365283273984, 1);
  sqcRYGate(q, 0.4803182897269042, 2);
  sqcRZGate(q, -1.7664524932223458, 2);
  sqcRYGate(q, 2.7357625406675288, 3);
  sqcRZGate(q, 1.1893287386732239, 3);
  sqcRYGate(q, 0.19432525668623946, 4);
  sqcRZGate(q, 2.995141308898205, 4);
  sqcRYGate(q, -1.9550922978254544, 5);
  sqcRZGate(q, 0.9683059463932068, 5);
  sqcRYGate(q, -2.3019528894162766, 6);
  sqcRZGate(q, 0.677176156608647, 6);
  sqcRYGate(q, 0.8653859627400964, 7);
  sqcRZGate(q, 1.079189879812466, 7);
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
  sqcRYGate(q, 2.916442951303348, 0);
  sqcRZGate(q, 0.7048379915741015, 0);
  sqcRYGate(q, -1.0151419660487493, 1);
  sqcRZGate(q, 2.249843995552352, 1);
  sqcRYGate(q, 1.0747956303933057, 2);
  sqcRZGate(q, -0.5331006477112892, 2);
  sqcRYGate(q, 2.7507889342959846, 3);
  sqcRZGate(q, 1.805104415083499, 3);
  sqcRYGate(q, -1.5261039556082183, 4);
  sqcRZGate(q, 1.0635354367164238, 4);
  sqcRYGate(q, 0.19158348850957965, 5);
  sqcRZGate(q, 0.8289949507574566, 5);
  sqcRYGate(q, 1.9576855023726392, 6);
  sqcRZGate(q, -1.3070922822068276, 6);
  sqcRYGate(q, 0.8991600346928772, 7);
  sqcRZGate(q, -2.159199199744048, 7);
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
  sqcRYGate(q, 0.8248549851014761, 0);
  sqcRZGate(q, 1.8097983955002732, 0);
  sqcRYGate(q, -1.695904388362739, 1);
  sqcRZGate(q, 0.35661620007656847, 1);
  sqcRYGate(q, 0.9720226301468791, 2);
  sqcRZGate(q, -2.692443963187002, 2);
  sqcRYGate(q, 1.5500180251923341, 3);
  sqcRZGate(q, 2.513266266208769, 3);
  sqcRYGate(q, -0.2111781641505592, 4);
  sqcRZGate(q, -1.1544120786572671, 4);
  sqcRYGate(q, 0.2877091276982675, 5);
  sqcRZGate(q, 0.632766083567283, 5);
  sqcRYGate(q, 0.8954288326620122, 6);
  sqcRZGate(q, 1.7086809157799152, 6);
  sqcRYGate(q, 0.8723697486924964, 7);
  sqcRZGate(q, 0.48432287863010026, 7);
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
  sqcRYGate(q, 1.0127178044542662, 0);
  sqcRZGate(q, -1.7945763842404752, 0);
  sqcRYGate(q, 0.12394452964008272, 1);
  sqcRZGate(q, 1.1981405062961903, 1);
  sqcRYGate(q, 2.5571380904629826, 2);
  sqcRZGate(q, -2.261030411188276, 2);
  sqcRYGate(q, -2.4052254662836714, 3);
  sqcRZGate(q, -0.34109566740698044, 3);
  sqcRYGate(q, 1.2942806088349537, 4);
  sqcRZGate(q, -1.744145120719009, 4);
  sqcRYGate(q, -0.33059961022155115, 5);
  sqcRZGate(q, -2.2269152302532262, 5);
  sqcRYGate(q, -2.4237160966154137, 6);
  sqcRZGate(q, -0.8421099532205958, 6);
  sqcRYGate(q, -2.535154791380402, 7);
  sqcRZGate(q, 2.136349285762761, 7);
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
  sqcRYGate(q, -0.8683581751880602, 0);
  sqcRZGate(q, -1.661041350425091, 0);
  sqcRYGate(q, -2.9535760813383347, 1);
  sqcRZGate(q, 0.8004912335073084, 1);
  sqcRYGate(q, -3.088032056999854, 2);
  sqcRZGate(q, -2.7669849677171583, 2);
  sqcRYGate(q, 0.38099243847131437, 3);
  sqcRZGate(q, -1.3950518936291552, 3);
  sqcRYGate(q, -0.2015119053264621, 4);
  sqcRZGate(q, -2.909019100493698, 4);
  sqcRYGate(q, -2.0216078912679363, 5);
  sqcRZGate(q, -2.4014906589092044, 5);
  sqcRYGate(q, -0.3569802613639306, 6);
  sqcRZGate(q, 0.3240107368816949, 6);
  sqcRYGate(q, -1.5354997680712845, 7);
  sqcRZGate(q, 1.9121047081623281, 7);
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
  sqcRYGate(q, 1.8868976618011795, 0);
  sqcRZGate(q, -1.5147698020896192, 0);
  sqcRYGate(q, 2.81446264270759, 1);
  sqcRZGate(q, 0.5101960054227709, 1);
  sqcRYGate(q, 2.019566397174466, 2);
  sqcRZGate(q, 0.11715676172974822, 2);
  sqcRYGate(q, -1.6402185830748983, 3);
  sqcRZGate(q, -0.8289381141329866, 3);
  sqcRYGate(q, -1.5927629232201832, 4);
  sqcRZGate(q, -2.7193478145247814, 4);
  sqcRYGate(q, 1.2141308701729012, 5);
  sqcRZGate(q, 2.66975060063364, 5);
  sqcRYGate(q, 1.8190568976760284, 6);
  sqcRZGate(q, -0.9251100029448791, 6);
  sqcRYGate(q, 1.0389619162672963, 7);
  sqcRZGate(q, -1.9520528315592323, 7);

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
