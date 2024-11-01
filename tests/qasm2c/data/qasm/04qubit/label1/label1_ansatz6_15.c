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

  sqcRYGate(q, -0.6525215816555194, 0);
  sqcRYGate(q, -0.013044441115056957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6968471465096506, 0);
  sqcRYGate(q, -2.273699863503378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8954963968517244, 1);
  sqcRYGate(q, 1.7060323058185989, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3918955937766063, 1);
  sqcRYGate(q, -1.3724540135496512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5079557953627263, 2);
  sqcRYGate(q, 1.833650333013501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4505689716069732, 2);
  sqcRYGate(q, -0.13235158821557036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3064444956480346, 0);
  sqcRYGate(q, -0.37614131187609795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0541191746461367, 0);
  sqcRYGate(q, -2.3576220088805684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8195376801820666, 1);
  sqcRYGate(q, -2.9478511837290196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7656957721300706, 1);
  sqcRYGate(q, -0.9419897611266531, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.365523877448985, 2);
  sqcRYGate(q, 0.6125508129983535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9343148331219766, 2);
  sqcRYGate(q, 1.9155067579954093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4962696303264407, 0);
  sqcRYGate(q, 1.3165738784437304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9733830503435796, 0);
  sqcRYGate(q, -1.3080333101300514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09404776515551827, 1);
  sqcRYGate(q, -2.0034175041486417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.103664501416842, 1);
  sqcRYGate(q, 2.550778409053013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0782143641772017, 2);
  sqcRYGate(q, 2.710588920675154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25281632370096485, 2);
  sqcRYGate(q, 2.2875716335080885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8511050802542446, 0);
  sqcRYGate(q, -2.652583852588803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.833859747033353, 0);
  sqcRYGate(q, -0.6349033520671918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5342009104317899, 1);
  sqcRYGate(q, -1.7090913252032127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.850687755080151, 1);
  sqcRYGate(q, -1.9812114177826137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5005718745490624, 2);
  sqcRYGate(q, 2.7919467084319636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.46053980093704, 2);
  sqcRYGate(q, -2.7266233117429204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6115309861819302, 0);
  sqcRYGate(q, 1.974935321739479, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4151095146997363, 0);
  sqcRYGate(q, 1.0703730006671428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.971435189690499, 1);
  sqcRYGate(q, -0.8257283064777498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9027632458217143, 1);
  sqcRYGate(q, 2.4175412668710665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7218411085164886, 2);
  sqcRYGate(q, 0.00965575353240898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4223100199578393, 2);
  sqcRYGate(q, 2.7100667483845484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6564461447485622, 0);
  sqcRYGate(q, -1.1697845941408083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8905535746596911, 0);
  sqcRYGate(q, -1.7334918571656932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9277048241524493, 1);
  sqcRYGate(q, -0.7931232456277835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7856332220206372, 1);
  sqcRYGate(q, 3.0495951931107252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.986353766828782, 2);
  sqcRYGate(q, -0.9828302204326089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06231866021038357, 2);
  sqcRYGate(q, 0.20596486430980046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1486465862383095, 0);
  sqcRYGate(q, -2.536124895230719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2148022214242786, 0);
  sqcRYGate(q, 0.3172856697799686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.345799275630929, 1);
  sqcRYGate(q, -2.562723308737906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8644572705435054, 1);
  sqcRYGate(q, 2.487053338194626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9256665978096105, 2);
  sqcRYGate(q, 1.0231122384509843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5612605015619807, 2);
  sqcRYGate(q, 1.7083998257591082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.878275403223531, 0);
  sqcRYGate(q, 1.9711594475356566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.052585480618323466, 0);
  sqcRYGate(q, 1.8303127827432806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0713842489157299, 1);
  sqcRYGate(q, 2.332266807765795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5532441989748733, 1);
  sqcRYGate(q, -0.883446575247814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.981380166082661, 2);
  sqcRYGate(q, -2.5742994041140133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0788413119366003, 2);
  sqcRYGate(q, 1.379209255229889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8469531934797239, 0);
  sqcRYGate(q, -1.3270857187026992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6362897662392084, 0);
  sqcRYGate(q, 2.854177497012402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5979971079342754, 1);
  sqcRYGate(q, 0.7052191570922387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.849173118346134, 1);
  sqcRYGate(q, 2.399576240600354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.975338681802766, 2);
  sqcRYGate(q, -0.8490865326720644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4022707763197246, 2);
  sqcRYGate(q, -0.1026006183724253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.193470326634867, 0);
  sqcRYGate(q, 1.2303029705578359, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9840468500910021, 0);
  sqcRYGate(q, -2.445566704684416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9831930852350492, 1);
  sqcRYGate(q, -1.7604366633494117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8118934225327834, 1);
  sqcRYGate(q, 2.431316981730057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2664138917162169, 2);
  sqcRYGate(q, -1.3395287529688922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.963400017708869, 2);
  sqcRYGate(q, 2.4471600314630697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1735123988084952, 0);
  sqcRYGate(q, -0.019543882868765926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6653674569287213, 0);
  sqcRYGate(q, -0.9448847223894349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7442657587168036, 1);
  sqcRYGate(q, 2.448917972075015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.395993773253837, 1);
  sqcRYGate(q, 0.4790824650033336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.244363808974982, 2);
  sqcRYGate(q, 1.6806166206636595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.749538089993132, 2);
  sqcRYGate(q, -2.489401231440438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1366141453309035, 0);
  sqcRYGate(q, 3.0343774382251336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.519775050232371, 0);
  sqcRYGate(q, -1.0645500863671187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.375410400198256, 1);
  sqcRYGate(q, -0.5707392495667545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9343058994926707, 1);
  sqcRYGate(q, 2.944625409588979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6397753633290877, 2);
  sqcRYGate(q, 2.562379345090888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6961246333911246, 2);
  sqcRYGate(q, -0.3012325784054481, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.991608337261801, 0);
  sqcRYGate(q, 2.2724104030469987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0701941817726206, 0);
  sqcRYGate(q, -0.5620244391880221, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2549653131727876, 1);
  sqcRYGate(q, -1.1364079159791522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2475706537188003, 1);
  sqcRYGate(q, 2.096449388236719, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2211759708066534, 2);
  sqcRYGate(q, 1.1744914579885692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6046282325790537, 2);
  sqcRYGate(q, 0.4218560385651602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3230060547121085, 0);
  sqcRYGate(q, 1.6294234195300672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.823467371728349, 0);
  sqcRYGate(q, -1.1427849874618223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.868265723809831, 1);
  sqcRYGate(q, 0.07018336837608305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2886837104932316, 1);
  sqcRYGate(q, -1.445577893110783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8126703993022852, 2);
  sqcRYGate(q, -2.991198515341531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.553912945434462, 2);
  sqcRYGate(q, -1.8631036265208658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43219090654020226, 0);
  sqcRYGate(q, 1.5971758503928113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9241830708404298, 0);
  sqcRYGate(q, 1.9830148784653798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.913947425128113, 1);
  sqcRYGate(q, -2.756097800283563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2159743213920082, 1);
  sqcRYGate(q, 0.014935179815887954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.012704211797569, 2);
  sqcRYGate(q, 1.8014632556160763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.188517734785546, 2);
  sqcRYGate(q, -2.5616463649629626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.723683983232812, 0);
  sqcRYGate(q, -1.65602579385304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7559493009771963, 0);
  sqcRYGate(q, -2.6551804146212055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9581430359359824, 1);
  sqcRYGate(q, -0.7940469744900427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0814247587918597, 1);
  sqcRYGate(q, 2.3219165693924415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9733368384980468, 2);
  sqcRYGate(q, -1.0312366002679145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.281624656762924, 2);
  sqcRYGate(q, -0.16478676593196187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2370791924754805, 0);
  sqcRYGate(q, -1.5250124309808666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3275876962236903, 0);
  sqcRYGate(q, -2.54933718518699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6190757675742793, 1);
  sqcRYGate(q, 0.44863765274354606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17676160642238478, 1);
  sqcRYGate(q, 0.7694400175460894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7407088472322798, 2);
  sqcRYGate(q, 3.118822599291744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.360387771167943, 2);
  sqcRYGate(q, 1.4075838480024498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2968025509873105, 0);
  sqcRYGate(q, 0.7728678504112895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5681876649536926, 0);
  sqcRYGate(q, 0.06285943376560925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5239943795486904, 1);
  sqcRYGate(q, 2.674969463445575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1277997204760757, 1);
  sqcRYGate(q, 2.8787176276214232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.486424624127621, 2);
  sqcRYGate(q, 0.05359475597088776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7172548909788573, 2);
  sqcRYGate(q, -1.8421916770257056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1071935459079694, 0);
  sqcRYGate(q, -2.7743064027903928, 1);
  sqcRYGate(q, -1.440179410081394, 2);
  sqcRYGate(q, 2.3089829600063827, 3);

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
