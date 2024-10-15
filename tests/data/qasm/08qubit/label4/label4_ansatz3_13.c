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

  sqcRYGate(q, 1.57081763867295, 0);
  sqcRZGate(q, -1.3218664845697354, 0);
  sqcRYGate(q, 1.568795301945106, 1);
  sqcRZGate(q, -1.9808892900444761, 1);
  sqcRYGate(q, 3.140896126787933, 2);
  sqcRZGate(q, -2.5398906867890503, 2);
  sqcRYGate(q, -1.5709381124481308, 3);
  sqcRZGate(q, 3.140240085232091, 3);
  sqcRYGate(q, -0.00024593406101511116, 4);
  sqcRZGate(q, 0.27339900569230124, 4);
  sqcRYGate(q, -0.9238952346684144, 5);
  sqcRZGate(q, -1.5749609579555381, 5);
  sqcRYGate(q, 1.568894381730673, 6);
  sqcRZGate(q, 2.905157197328525, 6);
  sqcRYGate(q, -1.567791728823833, 7);
  sqcRZGate(q, 2.5954936607069516, 7);
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
  sqcRYGate(q, 1.5351018243288763, 0);
  sqcRZGate(q, -1.090669769634835, 0);
  sqcRYGate(q, 1.57435239557884, 1);
  sqcRZGate(q, 1.563084835276909, 1);
  sqcRYGate(q, 0.00019416516886929902, 2);
  sqcRZGate(q, -0.24462435485817263, 2);
  sqcRYGate(q, 1.570909014280379, 3);
  sqcRZGate(q, 0.7554158188064432, 3);
  sqcRYGate(q, -1.3678771348326544, 4);
  sqcRZGate(q, -1.872950417065935, 4);
  sqcRYGate(q, 0.7486966654182232, 5);
  sqcRZGate(q, -1.2266217098531305, 5);
  sqcRYGate(q, 0.8734772395549522, 6);
  sqcRZGate(q, 2.1328523412519926, 6);
  sqcRYGate(q, 1.0478446178778702, 7);
  sqcRZGate(q, 1.7114602987134877, 7);
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
  sqcRYGate(q, -0.0004296297469299492, 0);
  sqcRZGate(q, -1.8346073011629231, 0);
  sqcRYGate(q, 1.3466548382186474, 1);
  sqcRZGate(q, -3.1210686746336447, 1);
  sqcRYGate(q, 3.1415493631908995, 2);
  sqcRZGate(q, 0.007616236500132357, 2);
  sqcRYGate(q, -0.21684550349626877, 3);
  sqcRZGate(q, -2.2555224216114675, 3);
  sqcRYGate(q, -3.141035002643413, 4);
  sqcRZGate(q, -3.0923293389856266, 4);
  sqcRYGate(q, 0.0003653326776321848, 5);
  sqcRZGate(q, -0.33861573849809473, 5);
  sqcRYGate(q, 3.1414179300505594, 6);
  sqcRZGate(q, 1.7782024866391295, 6);
  sqcRYGate(q, -1.5762674878108842, 7);
  sqcRZGate(q, -2.045489087365897, 7);
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
  sqcRYGate(q, 2.2254930851002515, 0);
  sqcRZGate(q, -3.022338817113737, 0);
  sqcRYGate(q, 2.2500278924946464, 1);
  sqcRZGate(q, -1.558498192996906, 1);
  sqcRYGate(q, -3.141430540667296, 2);
  sqcRZGate(q, 0.26314195630131554, 2);
  sqcRYGate(q, -0.0009061954394100624, 3);
  sqcRZGate(q, 2.565592227196939, 3);
  sqcRYGate(q, -0.5387567580266578, 4);
  sqcRZGate(q, 0.6746687232634816, 4);
  sqcRYGate(q, 2.421970198539428, 5);
  sqcRZGate(q, 0.646292063792179, 5);
  sqcRYGate(q, 1.5719535751155886, 6);
  sqcRZGate(q, -1.280309071569119, 6);
  sqcRYGate(q, 0.001926693381123279, 7);
  sqcRZGate(q, -1.0933417104041498, 7);
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
  sqcRYGate(q, 3.1403928192779462, 0);
  sqcRZGate(q, 1.912072719387483, 0);
  sqcRYGate(q, 1.5842445671316623, 1);
  sqcRZGate(q, -0.5823142534986854, 1);
  sqcRYGate(q, -1.5709557168372001, 2);
  sqcRZGate(q, -2.2970571840957987, 2);
  sqcRYGate(q, 1.5838514959219383, 3);
  sqcRZGate(q, 0.31109492010926215, 3);
  sqcRYGate(q, -3.141320554455642, 4);
  sqcRZGate(q, -2.0984701051349637, 4);
  sqcRYGate(q, -0.0003463445570979218, 5);
  sqcRZGate(q, 2.4901322459366044, 5);
  sqcRYGate(q, 7.263114397737525e-05, 6);
  sqcRZGate(q, -0.2998188725316595, 6);
  sqcRYGate(q, 2.1358988816972104, 7);
  sqcRZGate(q, -2.3593259193650695, 7);
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
  sqcRYGate(q, 2.0525490261928216, 0);
  sqcRZGate(q, 2.671767502693843, 0);
  sqcRYGate(q, -1.5708045349170066, 1);
  sqcRZGate(q, -2.0970850115207047, 1);
  sqcRYGate(q, 1.570789729816503, 2);
  sqcRZGate(q, 1.638888150176774, 2);
  sqcRYGate(q, 0.0005588028648652863, 3);
  sqcRZGate(q, 0.537257215064498, 3);
  sqcRYGate(q, -0.7265997643819784, 4);
  sqcRZGate(q, 1.5971108451343747, 4);
  sqcRYGate(q, -0.22595142342638366, 5);
  sqcRZGate(q, -2.135796651984416, 5);
  sqcRYGate(q, -1.5673528950349371, 6);
  sqcRZGate(q, -0.9680631973616493, 6);
  sqcRYGate(q, -0.08148245807098325, 7);
  sqcRZGate(q, -0.668773899884653, 7);
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
  sqcRYGate(q, -0.001309109369009201, 0);
  sqcRZGate(q, 2.871601592449626, 0);
  sqcRYGate(q, 0.0006050905141297136, 1);
  sqcRZGate(q, -1.7755886140340627, 1);
  sqcRYGate(q, 3.141199973719381, 2);
  sqcRZGate(q, -1.4566416029138436, 2);
  sqcRYGate(q, -1.5707771994902264, 3);
  sqcRZGate(q, -0.21485167627792287, 3);
  sqcRYGate(q, 1.5687445124837538, 4);
  sqcRZGate(q, 2.434670344798559, 4);
  sqcRYGate(q, 8.387035055772168e-05, 5);
  sqcRZGate(q, 0.19856374616917263, 5);
  sqcRYGate(q, 0.00030308525362749317, 6);
  sqcRZGate(q, -0.6344061710343635, 6);
  sqcRYGate(q, -3.1130117800299413, 7);
  sqcRZGate(q, -1.2851541264589854, 7);
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
  sqcRYGate(q, 1.0559129338503581, 0);
  sqcRZGate(q, -2.2714087666356004, 0);
  sqcRYGate(q, 1.4504133442289184, 1);
  sqcRZGate(q, 2.395324824536442, 1);
  sqcRYGate(q, -1.9883768394352048, 2);
  sqcRZGate(q, -0.25120002876595265, 2);
  sqcRYGate(q, -1.7771392812125404, 3);
  sqcRZGate(q, -1.0266643354927423, 3);
  sqcRYGate(q, 3.115185837770209, 4);
  sqcRZGate(q, -0.6555671921437272, 4);
  sqcRYGate(q, 0.0018892876404276323, 5);
  sqcRZGate(q, -0.09819919433392979, 5);
  sqcRYGate(q, 1.9508223103643791, 6);
  sqcRZGate(q, -0.09043690254095971, 6);
  sqcRYGate(q, -1.9141145039527891, 7);
  sqcRZGate(q, -1.6824236471883633, 7);
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
  sqcRYGate(q, -0.0069313577420715335, 0);
  sqcRZGate(q, -1.702893882701683, 0);
  sqcRYGate(q, 3.141071439615978, 1);
  sqcRZGate(q, 1.0664508762047937, 1);
  sqcRYGate(q, -0.0009244859076431742, 2);
  sqcRZGate(q, -2.8902796513226425, 2);
  sqcRYGate(q, 3.1415687795422462, 3);
  sqcRZGate(q, -0.21053501035912614, 3);
  sqcRYGate(q, 3.1153873932342346, 4);
  sqcRZGate(q, 1.4477306492956739, 4);
  sqcRYGate(q, 3.1408212421669934, 5);
  sqcRZGate(q, -0.41553482796413244, 5);
  sqcRYGate(q, -0.00045371479133038406, 6);
  sqcRZGate(q, -1.4849738679226718, 6);
  sqcRYGate(q, 0.25186695857465935, 7);
  sqcRZGate(q, 2.410595631468786, 7);
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
  sqcRYGate(q, -1.4363636483128248, 0);
  sqcRZGate(q, 1.53476680671963, 0);
  sqcRYGate(q, 1.2394899736203486, 1);
  sqcRZGate(q, -1.5403083438725205, 1);
  sqcRYGate(q, -1.990649977634951, 2);
  sqcRZGate(q, -0.04608268875702427, 2);
  sqcRYGate(q, -2.844671296394286, 3);
  sqcRZGate(q, 0.32817043152007264, 3);
  sqcRYGate(q, -3.124251637866759, 4);
  sqcRZGate(q, -1.568229172349829, 4);
  sqcRYGate(q, 3.1405583575168587, 5);
  sqcRZGate(q, -1.5687424375290417, 5);
  sqcRYGate(q, -0.557460755203872, 6);
  sqcRZGate(q, 1.6229105064423648, 6);
  sqcRYGate(q, 2.594606542041976, 7);
  sqcRZGate(q, 2.4201913945343865, 7);
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
  sqcRYGate(q, -0.0005465444645113199, 0);
  sqcRZGate(q, 0.5718923509519689, 0);
  sqcRYGate(q, -0.05861168688627405, 1);
  sqcRZGate(q, 0.007046427973606949, 1);
  sqcRYGate(q, 1.5722181780334523, 2);
  sqcRZGate(q, -2.0813741248898925, 2);
  sqcRYGate(q, 0.0008397241710388245, 3);
  sqcRZGate(q, 0.7617632963616359, 3);
  sqcRYGate(q, -0.002964030217738769, 4);
  sqcRZGate(q, -0.15018608273444567, 4);
  sqcRYGate(q, 3.141400484190431, 5);
  sqcRZGate(q, -1.620140320971979, 5);
  sqcRYGate(q, 0.0005974148080287733, 6);
  sqcRZGate(q, -0.7454778806218512, 6);
  sqcRYGate(q, -2.8604520885602867, 7);
  sqcRZGate(q, -2.359924599236885, 7);
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
  sqcRYGate(q, 0.00013716950532138839, 0);
  sqcRZGate(q, 1.7262416598221078, 0);
  sqcRYGate(q, 1.8376664563263134, 1);
  sqcRZGate(q, 1.9947647691796913, 1);
  sqcRYGate(q, 9.361966457177573e-05, 2);
  sqcRZGate(q, -2.4474364594341798, 2);
  sqcRYGate(q, 3.937814966710012e-05, 3);
  sqcRZGate(q, 1.275076936347192, 3);
  sqcRYGate(q, -1.5346943072234154, 4);
  sqcRZGate(q, -3.130144254602251, 4);
  sqcRYGate(q, 1.5716310878663053, 5);
  sqcRZGate(q, -3.1410402445160663, 5);
  sqcRYGate(q, 1.5761421424610322, 6);
  sqcRZGate(q, -3.0803922470200558, 6);
  sqcRYGate(q, 2.9919574097911634, 7);
  sqcRZGate(q, -1.3087322003839326, 7);
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
  sqcRYGate(q, 0.0006925557206161059, 0);
  sqcRZGate(q, -0.65125880182707, 0);
  sqcRYGate(q, 1.5461511918114308, 1);
  sqcRZGate(q, 2.640374422103283, 1);
  sqcRYGate(q, -3.141224727800191, 2);
  sqcRZGate(q, -1.3870253204797744, 2);
  sqcRYGate(q, -1.5708417964127361, 3);
  sqcRZGate(q, 0.22597921467668514, 3);
  sqcRYGate(q, 8.468481554047003e-05, 4);
  sqcRZGate(q, -0.6491152522755801, 4);
  sqcRYGate(q, -0.023765493759049242, 5);
  sqcRZGate(q, 0.5404447189171107, 5);
  sqcRYGate(q, -0.0001138781107306465, 6);
  sqcRZGate(q, 2.8929757029500562, 6);
  sqcRYGate(q, -3.1412565893807862, 7);
  sqcRZGate(q, 2.6339934818455997, 7);
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
  sqcRYGate(q, 2.8630817655170488e-05, 0);
  sqcRZGate(q, -0.38091220366277884, 0);
  sqcRYGate(q, -3.1411663900267626, 1);
  sqcRZGate(q, 2.281980215994564, 1);
  sqcRYGate(q, -1.5707189034585982, 2);
  sqcRZGate(q, -2.3394164185690105, 2);
  sqcRYGate(q, -1.5699651238504906, 3);
  sqcRZGate(q, 2.533695467232336, 3);
  sqcRYGate(q, -0.044681006914508714, 4);
  sqcRZGate(q, -2.515586354922561, 4);
  sqcRYGate(q, -0.00024586257219612464, 5);
  sqcRZGate(q, 2.5999373909149925, 5);
  sqcRYGate(q, -0.9123972330370865, 6);
  sqcRZGate(q, -0.731454560292652, 6);
  sqcRYGate(q, -1.6614817880758332, 7);
  sqcRZGate(q, 1.9006882994298124, 7);
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
  sqcRYGate(q, -0.2802855371368494, 0);
  sqcRZGate(q, 3.0874813575175444, 0);
  sqcRYGate(q, -0.00017460374063738013, 1);
  sqcRZGate(q, 2.51910932659906, 1);
  sqcRYGate(q, 3.1413595154698672, 2);
  sqcRZGate(q, 2.946561276925627, 2);
  sqcRYGate(q, -0.2306868217770912, 3);
  sqcRZGate(q, -2.62810508538066, 3);
  sqcRYGate(q, -0.13460793206032998, 4);
  sqcRZGate(q, 0.011360053343269312, 4);
  sqcRYGate(q, -1.5711744320146077, 5);
  sqcRZGate(q, 2.6650170543805043, 5);
  sqcRYGate(q, -1.5707914564154433, 6);
  sqcRZGate(q, 2.306882716571701, 6);
  sqcRYGate(q, 1.8258298151689827, 7);
  sqcRZGate(q, 2.7392766389194785, 7);
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
  sqcRYGate(q, -3.1415575721865223, 0);
  sqcRZGate(q, 1.5273931958625422, 0);
  sqcRYGate(q, -3.141275556574525, 1);
  sqcRZGate(q, -2.550141617600079, 1);
  sqcRYGate(q, 5.701866551621748e-05, 2);
  sqcRZGate(q, -2.923928608973129, 2);
  sqcRYGate(q, 3.1395648849802353, 3);
  sqcRZGate(q, 1.4886319586474004, 3);
  sqcRYGate(q, 0.5400184469717972, 4);
  sqcRZGate(q, -0.00025338556404224603, 4);
  sqcRYGate(q, -3.1415335877764483, 5);
  sqcRZGate(q, -2.692848869202007, 5);
  sqcRYGate(q, -3.17765442758855e-05, 6);
  sqcRZGate(q, -2.3068856399902566, 6);
  sqcRYGate(q, -3.1414649296873844, 7);
  sqcRZGate(q, 2.7395652252753795, 7);
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
  sqcRYGate(q, -1.5738511938713309, 0);
  sqcRZGate(q, -2.696736757431757, 0);
  sqcRYGate(q, 3.138789769617673e-05, 1);
  sqcRZGate(q, -2.0201332610991276, 1);
  sqcRYGate(q, 0.0012212111641871047, 2);
  sqcRZGate(q, 3.07417620407052, 2);
  sqcRYGate(q, 1.4398218653729602, 3);
  sqcRZGate(q, 2.453364012610785, 3);
  sqcRYGate(q, -1.705445390793165, 4);
  sqcRZGate(q, 0.7254987102535345, 4);
  sqcRYGate(q, 0.0003538153326342843, 5);
  sqcRZGate(q, 1.714436787064753, 5);
  sqcRYGate(q, -1.5708251128110922, 6);
  sqcRZGate(q, 0.7216876043863643, 6);
  sqcRYGate(q, -1.3157221121173923, 7);
  sqcRZGate(q, 2.239293141560223, 7);

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
