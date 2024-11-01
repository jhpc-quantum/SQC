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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -3.0986092339196447, 0);
  sqcRZGate(q, -0.3148879343166544, 0);
  sqcRYGate(q, -1.3587508871775553, 1);
  sqcRZGate(q, -0.6348714439455918, 1);
  sqcRYGate(q, 0.613410545405866, 2);
  sqcRZGate(q, -1.0608980775910726, 2);
  sqcRYGate(q, 0.009520836715106645, 3);
  sqcRZGate(q, -2.224314803444746, 3);
  sqcRYGate(q, 2.539096773522221, 4);
  sqcRZGate(q, -2.9507554056983842, 4);
  sqcRYGate(q, 0.3492433287371477, 5);
  sqcRZGate(q, -1.554409163891479, 5);
  sqcRYGate(q, 0.7200004904989672, 6);
  sqcRZGate(q, -2.1380726313648557, 6);
  sqcRYGate(q, -2.666344864317458, 7);
  sqcRZGate(q, 1.9900045413630214, 7);
  sqcRYGate(q, -0.0004493786065919992, 8);
  sqcRZGate(q, 0.7867943036436535, 8);
  sqcRYGate(q, -0.004217508828816528, 9);
  sqcRZGate(q, 2.5861664239100506, 9);
  sqcRYGate(q, 2.2950691491377286, 10);
  sqcRZGate(q, 2.6601574028416364, 10);
  sqcRYGate(q, 1.3277868342283587, 11);
  sqcRZGate(q, -0.7633101612043776, 11);
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
  sqcRYGate(q, -3.1246353011670034, 0);
  sqcRZGate(q, -2.5546743709111426, 0);
  sqcRYGate(q, -1.5525589706040197, 1);
  sqcRZGate(q, -1.5832255571305884, 1);
  sqcRYGate(q, 0.6682922193972526, 2);
  sqcRZGate(q, 0.038987625855160246, 2);
  sqcRYGate(q, -0.6595810089427611, 3);
  sqcRZGate(q, -1.5237227487272413, 3);
  sqcRYGate(q, -0.2505433527395617, 4);
  sqcRZGate(q, 2.427100304314644, 4);
  sqcRYGate(q, 0.24474568791103923, 5);
  sqcRZGate(q, -3.0836291950354364, 5);
  sqcRYGate(q, -1.2630906736302654, 6);
  sqcRZGate(q, -0.8782781192351751, 6);
  sqcRYGate(q, -2.590029870503198, 7);
  sqcRZGate(q, -0.06585014122140541, 7);
  sqcRYGate(q, 0.0015311447439612489, 8);
  sqcRZGate(q, -1.2501062784861867, 8);
  sqcRYGate(q, 0.001680866412943516, 9);
  sqcRZGate(q, 0.6618992963047929, 9);
  sqcRYGate(q, 1.2564831952600422, 10);
  sqcRZGate(q, 1.2431684451196316, 10);
  sqcRYGate(q, -1.006014988120064, 11);
  sqcRZGate(q, 2.327310450561667, 11);
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
  sqcRYGate(q, 0.001329080736397259, 0);
  sqcRZGate(q, 0.04686486222236441, 0);
  sqcRYGate(q, 2.2866054349814178, 1);
  sqcRZGate(q, -0.3343084502819354, 1);
  sqcRYGate(q, -0.17247833392849932, 2);
  sqcRZGate(q, 2.574042298321191, 2);
  sqcRYGate(q, 0.05448835379257666, 3);
  sqcRZGate(q, -1.1623902448543395, 3);
  sqcRYGate(q, -0.7112725852210543, 4);
  sqcRZGate(q, -0.9275576401195904, 4);
  sqcRYGate(q, 0.469559151112572, 5);
  sqcRZGate(q, -1.5186859886251025, 5);
  sqcRYGate(q, -1.7920166919000975, 6);
  sqcRZGate(q, 0.011098893223161205, 6);
  sqcRYGate(q, -1.916927956155185, 7);
  sqcRZGate(q, -2.803736105030207, 7);
  sqcRYGate(q, 3.137747347480923, 8);
  sqcRZGate(q, -2.115154339415371, 8);
  sqcRYGate(q, 5.212799437853558e-05, 9);
  sqcRZGate(q, 1.5207921738218406, 9);
  sqcRYGate(q, 2.970988755587546, 10);
  sqcRZGate(q, -1.142393526880868, 10);
  sqcRYGate(q, 0.7486164909583901, 11);
  sqcRZGate(q, -1.0687156372040791, 11);
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
  sqcRYGate(q, -0.023956783124307712, 0);
  sqcRZGate(q, 0.8072094565895407, 0);
  sqcRYGate(q, -0.6888128770139746, 1);
  sqcRZGate(q, 1.0521352024458797, 1);
  sqcRYGate(q, 2.537310247516494, 2);
  sqcRZGate(q, -1.7160287284724127, 2);
  sqcRYGate(q, 3.0992099161460187, 3);
  sqcRZGate(q, -0.3287826198349233, 3);
  sqcRYGate(q, 1.2892599887212928, 4);
  sqcRZGate(q, -2.9629447621922202, 4);
  sqcRYGate(q, -3.1244584921640453, 5);
  sqcRZGate(q, -2.110234583725051, 5);
  sqcRYGate(q, -2.9858525832126546, 6);
  sqcRZGate(q, -0.07556984752230722, 6);
  sqcRYGate(q, 0.26995995903666437, 7);
  sqcRZGate(q, 2.869619259775293, 7);
  sqcRYGate(q, 3.131047454430325, 8);
  sqcRZGate(q, 1.8835454113386296, 8);
  sqcRYGate(q, -0.000862868786629889, 9);
  sqcRZGate(q, 2.4011153067031903, 9);
  sqcRYGate(q, -2.4087261933853354, 10);
  sqcRZGate(q, -0.8366633214858927, 10);
  sqcRYGate(q, -1.9976793539269622, 11);
  sqcRZGate(q, 1.2114822287826028, 11);
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
  sqcRYGate(q, 0.00969964668733033, 0);
  sqcRZGate(q, 0.003276585391779996, 0);
  sqcRYGate(q, -1.1333377089264218, 1);
  sqcRZGate(q, -0.6719192109892091, 1);
  sqcRYGate(q, -1.8182312308979858, 2);
  sqcRZGate(q, -3.037738046344346, 2);
  sqcRYGate(q, 3.1245832432799814, 3);
  sqcRZGate(q, -0.21378680411682718, 3);
  sqcRYGate(q, 1.3650600507262214, 4);
  sqcRZGate(q, -0.8210708598418524, 4);
  sqcRYGate(q, 1.3961434539323814, 5);
  sqcRZGate(q, -1.208536174259823, 5);
  sqcRYGate(q, -0.21326589717443584, 6);
  sqcRZGate(q, -0.4435197787535854, 6);
  sqcRYGate(q, -1.3613086825855207, 7);
  sqcRZGate(q, -0.28097756561928566, 7);
  sqcRYGate(q, -1.5729073285495945, 8);
  sqcRZGate(q, 3.0208167228678837, 8);
  sqcRYGate(q, 0.00046937184469353355, 9);
  sqcRZGate(q, 0.27682000932285794, 9);
  sqcRYGate(q, 2.591872954326166, 10);
  sqcRZGate(q, 2.1243964379114897, 10);
  sqcRYGate(q, -0.179609686785267, 11);
  sqcRZGate(q, -0.9380245300961985, 11);
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
  sqcRYGate(q, 3.139652698048381, 0);
  sqcRZGate(q, -0.02864540347294131, 0);
  sqcRYGate(q, -1.336756091146716, 1);
  sqcRZGate(q, -0.9769964601254584, 1);
  sqcRYGate(q, -2.460235839013696, 2);
  sqcRZGate(q, -1.7421068908181898, 2);
  sqcRYGate(q, 2.1883177920113894, 3);
  sqcRZGate(q, -1.5743914797096417, 3);
  sqcRYGate(q, 1.9085833173483184, 4);
  sqcRZGate(q, -2.0071584696289593, 4);
  sqcRYGate(q, 2.7549779179620266, 5);
  sqcRZGate(q, -0.6602065713626856, 5);
  sqcRYGate(q, 0.0016460342852673976, 6);
  sqcRZGate(q, -0.875949773556612, 6);
  sqcRYGate(q, 2.915138516256848, 7);
  sqcRZGate(q, 2.2264403919652187, 7);
  sqcRYGate(q, -3.1356332357641628, 8);
  sqcRZGate(q, 2.075353579514363, 8);
  sqcRYGate(q, 2.6208702449901224, 9);
  sqcRZGate(q, -0.7782099215927873, 9);
  sqcRYGate(q, -0.00021921080298259454, 10);
  sqcRZGate(q, -1.2431782907493814, 10);
  sqcRYGate(q, 1.8100833172732311, 11);
  sqcRZGate(q, 2.599929712373531, 11);
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
  sqcRYGate(q, 3.1321258437554382, 0);
  sqcRZGate(q, 2.1111524975401386, 0);
  sqcRYGate(q, 0.015432755618411065, 1);
  sqcRZGate(q, -0.7122428416607641, 1);
  sqcRYGate(q, 2.014313370505078, 2);
  sqcRZGate(q, -1.8548889757415061, 2);
  sqcRYGate(q, 1.1901776937487796, 3);
  sqcRZGate(q, -1.0417028793438234, 3);
  sqcRYGate(q, 2.5822822665042486, 4);
  sqcRZGate(q, 0.015158724023404345, 4);
  sqcRYGate(q, -2.3030739160351064, 5);
  sqcRZGate(q, 0.8312363462690143, 5);
  sqcRYGate(q, 3.0482093933657888, 6);
  sqcRZGate(q, 0.19956164108478341, 6);
  sqcRYGate(q, -3.0500157896937057, 7);
  sqcRZGate(q, 1.6070964881898044, 7);
  sqcRYGate(q, 2.9927668718656766, 8);
  sqcRZGate(q, 1.848443110142543, 8);
  sqcRYGate(q, 3.120392472405578, 9);
  sqcRZGate(q, 0.8106204616458874, 9);
  sqcRYGate(q, 0.9471923316958764, 10);
  sqcRZGate(q, 2.086359833206381, 10);
  sqcRYGate(q, -1.3700354368460435, 11);
  sqcRZGate(q, 1.6749839579315555, 11);
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
  sqcRYGate(q, 3.0120644449182254, 0);
  sqcRZGate(q, -0.16216840499568938, 0);
  sqcRYGate(q, 0.0026688274751644264, 1);
  sqcRZGate(q, -2.3740798798718683, 1);
  sqcRYGate(q, 1.011395923979327, 2);
  sqcRZGate(q, 2.1501047157696576, 2);
  sqcRYGate(q, 1.7842935429201676, 3);
  sqcRZGate(q, -0.47104955503334495, 3);
  sqcRYGate(q, -1.8986326502042752, 4);
  sqcRZGate(q, -1.240706220583899, 4);
  sqcRYGate(q, -1.5297826441848468, 5);
  sqcRZGate(q, -0.36590213928378024, 5);
  sqcRYGate(q, -0.01324679761243086, 6);
  sqcRZGate(q, 1.6930967957621466, 6);
  sqcRYGate(q, -0.17315330365276704, 7);
  sqcRZGate(q, -1.7497174978125605, 7);
  sqcRYGate(q, 0.00567435856585625, 8);
  sqcRZGate(q, -2.7986373364400814, 8);
  sqcRYGate(q, -3.1144041305402186, 9);
  sqcRZGate(q, -0.6400901100291568, 9);
  sqcRYGate(q, 3.138700447382882, 10);
  sqcRZGate(q, -0.8671120952485021, 10);
  sqcRYGate(q, -1.196436223486814, 11);
  sqcRZGate(q, -1.8713746148209114, 11);
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
  sqcRYGate(q, -0.8758151152526944, 0);
  sqcRZGate(q, 0.21521464596253098, 0);
  sqcRYGate(q, -3.076635239959191, 1);
  sqcRZGate(q, -0.010105433675914929, 1);
  sqcRYGate(q, 3.113816250719978, 2);
  sqcRZGate(q, -1.0556547531073028, 2);
  sqcRYGate(q, 2.4421912609889294, 3);
  sqcRZGate(q, -0.07965945145891416, 3);
  sqcRYGate(q, 0.03300959580500074, 4);
  sqcRZGate(q, -1.719741035486922, 4);
  sqcRYGate(q, 0.6401027057676736, 5);
  sqcRZGate(q, 0.24674151017457735, 5);
  sqcRYGate(q, -3.118157318164417, 6);
  sqcRZGate(q, 1.4560743289827265, 6);
  sqcRYGate(q, 3.078706642736488, 7);
  sqcRZGate(q, 0.49480236257613125, 7);
  sqcRYGate(q, -1.484587831367815, 8);
  sqcRZGate(q, -2.504032060279867, 8);
  sqcRYGate(q, -1.2020934790253195, 9);
  sqcRZGate(q, -2.6864567016552434, 9);
  sqcRYGate(q, 2.0463434913628045, 10);
  sqcRZGate(q, 1.8357043025850868, 10);
  sqcRYGate(q, 1.3725065093509092, 11);
  sqcRZGate(q, -0.28608806367231243, 11);
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
  sqcRYGate(q, -3.0123220277679006, 0);
  sqcRZGate(q, 0.21734373580030675, 0);
  sqcRYGate(q, 3.1144503008958577, 1);
  sqcRZGate(q, 0.8702550470436899, 1);
  sqcRYGate(q, 0.005804468981811767, 2);
  sqcRZGate(q, -0.9962677514433677, 2);
  sqcRYGate(q, -0.7813955948472886, 3);
  sqcRZGate(q, 2.982810575515739, 3);
  sqcRYGate(q, 1.625430308618923, 4);
  sqcRZGate(q, -0.6798825541575462, 4);
  sqcRYGate(q, -1.853356530756765, 5);
  sqcRZGate(q, 2.848375939039372, 5);
  sqcRYGate(q, 1.4532121541605765, 6);
  sqcRZGate(q, 2.4348180786815896, 6);
  sqcRYGate(q, -3.1360173939190092, 7);
  sqcRZGate(q, 0.6484195323965167, 7);
  sqcRYGate(q, -0.005743532020186999, 8);
  sqcRZGate(q, -0.7222148666854595, 8);
  sqcRYGate(q, -3.140161361746698, 9);
  sqcRZGate(q, -0.34823557091111734, 9);
  sqcRYGate(q, 3.0719412368847423, 10);
  sqcRZGate(q, 1.6686632250977163, 10);
  sqcRYGate(q, -1.2919076459634313, 11);
  sqcRZGate(q, 0.022242433824864516, 11);
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
  sqcRYGate(q, 2.270069692918284, 0);
  sqcRZGate(q, -1.670802177323829, 0);
  sqcRYGate(q, -3.100249255423503, 1);
  sqcRZGate(q, 2.427751077339039, 1);
  sqcRYGate(q, 1.3738634217734882, 2);
  sqcRZGate(q, -1.5605799857813083, 2);
  sqcRYGate(q, 0.7975356100583832, 3);
  sqcRZGate(q, -2.3545923553959276, 3);
  sqcRYGate(q, -3.117686547266847, 4);
  sqcRZGate(q, 1.7759822992847663, 4);
  sqcRYGate(q, 0.43413614080641116, 5);
  sqcRZGate(q, 0.6808000678677422, 5);
  sqcRYGate(q, 0.0006667122146435389, 6);
  sqcRZGate(q, 0.7193666459565261, 6);
  sqcRYGate(q, 1.248579100305495, 7);
  sqcRZGate(q, -2.2024457326265647, 7);
  sqcRYGate(q, 3.129768863884333, 8);
  sqcRZGate(q, -1.949942123581402, 8);
  sqcRYGate(q, -0.6609236789114226, 9);
  sqcRZGate(q, 1.3663815765356369, 9);
  sqcRYGate(q, -2.7647065397687376, 10);
  sqcRZGate(q, -0.22361118118911616, 10);
  sqcRYGate(q, -1.966426891854945, 11);
  sqcRZGate(q, 1.577241150152673, 11);
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
  sqcRYGate(q, -0.01289278605049615, 0);
  sqcRZGate(q, 1.0790299550403437, 0);
  sqcRYGate(q, -1.6903461887221989, 1);
  sqcRZGate(q, -0.8342874407903494, 1);
  sqcRYGate(q, 1.0790225679288568, 2);
  sqcRZGate(q, -0.645901134803462, 2);
  sqcRYGate(q, -1.6422266504213061, 3);
  sqcRZGate(q, 3.0483111343043565, 3);
  sqcRYGate(q, 0.9231995565912987, 4);
  sqcRZGate(q, 0.4217140963411463, 4);
  sqcRYGate(q, -2.6028739220776904, 5);
  sqcRZGate(q, 2.045852347507929, 5);
  sqcRYGate(q, 1.4638794475350616, 6);
  sqcRZGate(q, -1.8162234967648683, 6);
  sqcRYGate(q, -3.1409943964510707, 7);
  sqcRZGate(q, -0.36152234204516903, 7);
  sqcRYGate(q, 0.014920510181131582, 8);
  sqcRZGate(q, 1.7821316672973166, 8);
  sqcRYGate(q, -2.790483097129822, 9);
  sqcRZGate(q, -2.293127742597922, 9);
  sqcRYGate(q, 2.1073585910631305, 10);
  sqcRZGate(q, -0.4905309620275835, 10);
  sqcRYGate(q, 2.4496175319667692, 11);
  sqcRZGate(q, 3.1348327276523666, 11);
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
  sqcRYGate(q, 0.25734628869718124, 0);
  sqcRZGate(q, 1.9897148697805296, 0);
  sqcRYGate(q, -0.09755490738709356, 1);
  sqcRZGate(q, -2.3074816014446644, 1);
  sqcRYGate(q, 0.1843997247840329, 2);
  sqcRZGate(q, -1.9442998441007238, 2);
  sqcRYGate(q, 3.0986746067046873, 3);
  sqcRZGate(q, 1.4604829904398307, 3);
  sqcRYGate(q, 1.599948813029247, 4);
  sqcRZGate(q, -1.9284401957028656, 4);
  sqcRYGate(q, 0.050567567807772384, 5);
  sqcRZGate(q, 2.979100989906086, 5);
  sqcRYGate(q, -0.21171097568025515, 6);
  sqcRZGate(q, -2.716869072023826, 6);
  sqcRYGate(q, 2.8350998002870047, 7);
  sqcRZGate(q, 0.1551509424075879, 7);
  sqcRYGate(q, 2.2762023535043676, 8);
  sqcRZGate(q, 1.0538050774938177, 8);
  sqcRYGate(q, 0.3577439819835222, 9);
  sqcRZGate(q, -2.7537905050728666, 9);
  sqcRYGate(q, -0.3106759318027482, 10);
  sqcRZGate(q, -0.030680628953575588, 10);
  sqcRYGate(q, -1.4257780407461995, 11);
  sqcRZGate(q, -0.22822508926155027, 11);
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
  sqcRYGate(q, -0.014703541166963183, 0);
  sqcRZGate(q, 0.7796957699032774, 0);
  sqcRYGate(q, 0.17024305712173327, 1);
  sqcRZGate(q, 2.0718862444767154, 1);
  sqcRYGate(q, -0.26349357727589506, 2);
  sqcRZGate(q, 0.5764359022184617, 2);
  sqcRYGate(q, 2.064503051130057, 3);
  sqcRZGate(q, -2.1946447758217182, 3);
  sqcRYGate(q, 1.814391087852247, 4);
  sqcRZGate(q, -1.2806364886107777, 4);
  sqcRYGate(q, 0.0025750839013857748, 5);
  sqcRZGate(q, 2.712935163682515, 5);
  sqcRYGate(q, 0.00012109173836795407, 6);
  sqcRZGate(q, 0.31502157711324963, 6);
  sqcRYGate(q, 3.140585976950328, 7);
  sqcRZGate(q, 1.6739084277171274, 7);
  sqcRYGate(q, -0.013929233900370252, 8);
  sqcRZGate(q, -2.897660027150385, 8);
  sqcRYGate(q, -0.08571263365374993, 9);
  sqcRZGate(q, 1.3740460981035572, 9);
  sqcRYGate(q, -1.5036911665273802, 10);
  sqcRZGate(q, 1.4272381122633666, 10);
  sqcRYGate(q, 2.2861719977896766, 11);
  sqcRZGate(q, -1.2102489903717772, 11);
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
  sqcRYGate(q, 0.44625494124314, 0);
  sqcRZGate(q, -0.7140973812078261, 0);
  sqcRYGate(q, 0.17197806764691226, 1);
  sqcRZGate(q, -1.8179511336949838, 1);
  sqcRYGate(q, 1.7881426084363785, 2);
  sqcRZGate(q, -2.6737196303135633, 2);
  sqcRYGate(q, -0.12932016369630175, 3);
  sqcRZGate(q, -0.39575839928520473, 3);
  sqcRYGate(q, -1.2845175198804977, 4);
  sqcRZGate(q, 0.7127477993012752, 4);
  sqcRYGate(q, 1.8032026206513843, 5);
  sqcRZGate(q, 0.48176638089289603, 5);
  sqcRYGate(q, 2.896361526409018, 6);
  sqcRZGate(q, 0.4475389458744271, 6);
  sqcRYGate(q, 1.6862720870942143, 7);
  sqcRZGate(q, 2.756927214571084, 7);
  sqcRYGate(q, -1.7793467608147548, 8);
  sqcRZGate(q, 2.71891754491411, 8);
  sqcRYGate(q, -2.6798960260235196, 9);
  sqcRZGate(q, -0.47894502218437085, 9);
  sqcRYGate(q, 1.9522523758608314, 10);
  sqcRZGate(q, -2.899435905051768, 10);
  sqcRYGate(q, -1.397881493175917, 11);
  sqcRZGate(q, -0.5684124529188738, 11);
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
  sqcRYGate(q, 3.1273381019457362, 0);
  sqcRZGate(q, 0.958947279393384, 0);
  sqcRYGate(q, 1.5076879533244245, 1);
  sqcRZGate(q, 1.0562435679251303, 1);
  sqcRYGate(q, -1.5005985318339226, 2);
  sqcRZGate(q, -0.32549513153056325, 2);
  sqcRYGate(q, -3.0520212240532842, 3);
  sqcRZGate(q, -2.71285679401245, 3);
  sqcRYGate(q, -1.331845853681738, 4);
  sqcRZGate(q, -1.6211163351257707, 4);
  sqcRYGate(q, 3.104818708068885, 5);
  sqcRZGate(q, -1.764444405016973, 5);
  sqcRYGate(q, -3.1412741528215027, 6);
  sqcRZGate(q, -1.9838034816189376, 6);
  sqcRYGate(q, -3.140722519569066, 7);
  sqcRZGate(q, -2.2014243010442884, 7);
  sqcRYGate(q, 3.1153303292782604, 8);
  sqcRZGate(q, -2.64020291309937, 8);
  sqcRYGate(q, 0.053342385644385336, 9);
  sqcRZGate(q, -2.2377245510222084, 9);
  sqcRYGate(q, 0.9648793355305543, 10);
  sqcRZGate(q, -0.6897393745490864, 10);
  sqcRYGate(q, -1.9262192251613426, 11);
  sqcRZGate(q, 1.836191039278975, 11);
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
  sqcRYGate(q, -3.1275551537242707, 0);
  sqcRZGate(q, 2.0082851757474263, 0);
  sqcRYGate(q, -1.4923577302968012, 1);
  sqcRZGate(q, 1.4887519248682328, 1);
  sqcRYGate(q, -1.815825468216509, 2);
  sqcRZGate(q, -2.002944486707834, 2);
  sqcRYGate(q, -1.3916418973576812, 3);
  sqcRZGate(q, 0.0041123664867619425, 3);
  sqcRYGate(q, -0.2063768990784956, 4);
  sqcRZGate(q, 2.320401733311565, 4);
  sqcRYGate(q, -2.3568576790265245, 5);
  sqcRZGate(q, 0.07751153770681576, 5);
  sqcRYGate(q, 1.5958379842481751, 6);
  sqcRZGate(q, 0.4124483118434921, 6);
  sqcRYGate(q, 1.8393653460432784, 7);
  sqcRZGate(q, 2.2981465693983854, 7);
  sqcRYGate(q, 3.1123623850257016, 8);
  sqcRZGate(q, 1.1764888125323862, 8);
  sqcRYGate(q, 2.0493497262156497, 9);
  sqcRZGate(q, -1.1686282624891922, 9);
  sqcRYGate(q, -1.0307073865023282, 10);
  sqcRZGate(q, 1.0304266949018448, 10);
  sqcRYGate(q, 1.9329089141902216, 11);
  sqcRZGate(q, 0.5750293445696687, 11);
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
  sqcRYGate(q, -3.1272015971983813, 0);
  sqcRZGate(q, -0.7913436346632599, 0);
  sqcRYGate(q, 1.6901221448702177, 1);
  sqcRZGate(q, 0.9457159803096734, 1);
  sqcRYGate(q, 1.5572707128503434, 2);
  sqcRZGate(q, -2.3489816069577714, 2);
  sqcRYGate(q, 0.015534902426825795, 3);
  sqcRZGate(q, 2.884600827107623, 3);
  sqcRYGate(q, -2.8944137448665628, 4);
  sqcRZGate(q, 1.679079653080754, 4);
  sqcRYGate(q, -0.0006293424770667917, 5);
  sqcRZGate(q, -0.45079437001593226, 5);
  sqcRYGate(q, -0.004302094138788152, 6);
  sqcRZGate(q, 2.760171096013644, 6);
  sqcRYGate(q, 3.140275714591693, 7);
  sqcRZGate(q, -1.2397932942880043, 7);
  sqcRYGate(q, 0.004729367933694401, 8);
  sqcRZGate(q, -2.445551216373282, 8);
  sqcRYGate(q, 1.844826737934875, 9);
  sqcRZGate(q, -2.2341321903101763, 9);
  sqcRYGate(q, 1.5405044918950876, 10);
  sqcRZGate(q, 0.634716070392682, 10);
  sqcRYGate(q, 0.6967518599794743, 11);
  sqcRZGate(q, 2.9308728277620255, 11);
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
  sqcRYGate(q, -0.03663051018617569, 0);
  sqcRZGate(q, -3.056053456978182, 0);
  sqcRYGate(q, -1.7504318789918714, 1);
  sqcRZGate(q, 0.07815919682689489, 1);
  sqcRYGate(q, -0.6595070408131942, 2);
  sqcRZGate(q, 1.5141086278469413, 2);
  sqcRYGate(q, 2.147526164247013, 3);
  sqcRZGate(q, 1.0393137211988144, 3);
  sqcRYGate(q, 0.5203665095716801, 4);
  sqcRZGate(q, -2.837817594943037, 4);
  sqcRYGate(q, 1.35813626601015, 5);
  sqcRZGate(q, -3.0952579217151626, 5);
  sqcRYGate(q, -1.1783243571348636, 6);
  sqcRZGate(q, 2.924219874602645, 6);
  sqcRYGate(q, -0.04730347013671546, 7);
  sqcRZGate(q, -2.902570341191903, 7);
  sqcRYGate(q, -1.916783648820774, 8);
  sqcRZGate(q, 0.21398947602966525, 8);
  sqcRYGate(q, 2.7726507006869068, 9);
  sqcRZGate(q, -2.3231576568203685, 9);
  sqcRYGate(q, 0.8243079888590064, 10);
  sqcRZGate(q, 2.9839824979553007, 10);
  sqcRYGate(q, -2.2659436307531973, 11);
  sqcRZGate(q, 0.07580264293197113, 11);
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
  sqcRYGate(q, 0.02203736345808502, 0);
  sqcRZGate(q, 2.105510837085265, 0);
  sqcRYGate(q, -0.5077901439347832, 1);
  sqcRZGate(q, 1.7049422545896504, 1);
  sqcRYGate(q, -1.1340077992337574, 2);
  sqcRZGate(q, 2.528020785778472, 2);
  sqcRYGate(q, 3.0973149207053594, 3);
  sqcRZGate(q, 1.067149215150847, 3);
  sqcRYGate(q, -2.9852868887128037, 4);
  sqcRZGate(q, -2.605286238225551, 4);
  sqcRYGate(q, 3.124023690292952, 5);
  sqcRZGate(q, 0.5199429425666037, 5);
  sqcRYGate(q, 3.0964804254541947, 6);
  sqcRZGate(q, 0.792927484148354, 6);
  sqcRYGate(q, -0.001012821439907542, 7);
  sqcRZGate(q, 2.1676012835490264, 7);
  sqcRYGate(q, -0.003288330331393156, 8);
  sqcRZGate(q, 2.5196881711854138, 8);
  sqcRYGate(q, 0.555314859177541, 9);
  sqcRZGate(q, -1.2504867726847895, 9);
  sqcRYGate(q, 2.1823731388882015, 10);
  sqcRZGate(q, 3.041669667974452, 10);
  sqcRYGate(q, -2.3289816726457673, 11);
  sqcRZGate(q, -1.8567253940694357, 11);
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
  sqcRYGate(q, -1.9145453572860043, 0);
  sqcRZGate(q, 1.8236542458395604, 0);
  sqcRYGate(q, 0.8138662554659232, 1);
  sqcRZGate(q, 0.9369907766357359, 1);
  sqcRYGate(q, 1.5863882880178988, 2);
  sqcRZGate(q, 0.7021857721017835, 2);
  sqcRYGate(q, 1.8093929444164243, 3);
  sqcRZGate(q, 1.815101757230761, 3);
  sqcRYGate(q, 0.9772909946913435, 4);
  sqcRZGate(q, -1.8608831395053893, 4);
  sqcRYGate(q, 2.0212705118218346, 5);
  sqcRZGate(q, 2.610081363748314, 5);
  sqcRYGate(q, -2.504585690729489, 6);
  sqcRZGate(q, 2.236795936610874, 6);
  sqcRYGate(q, -2.2222493680742446, 7);
  sqcRZGate(q, -0.4694857023757253, 7);
  sqcRYGate(q, -0.1959254535280337, 8);
  sqcRZGate(q, -0.3628310279603468, 8);
  sqcRYGate(q, 0.8966931002173218, 9);
  sqcRZGate(q, 1.6235876419150772, 9);
  sqcRYGate(q, 1.6058742971273166, 10);
  sqcRZGate(q, 0.88684302694441, 10);
  sqcRYGate(q, 1.672143889777069, 11);
  sqcRZGate(q, 2.7261198158152236, 11);
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
  sqcRYGate(q, -1.2189663951881557, 0);
  sqcRZGate(q, -1.371306806953955, 0);
  sqcRYGate(q, -1.2475492670913972, 1);
  sqcRZGate(q, -0.03786264145594083, 1);
  sqcRYGate(q, 2.828052646018446, 2);
  sqcRZGate(q, 3.0255536800584184, 2);
  sqcRYGate(q, 3.1190606970459984, 3);
  sqcRZGate(q, 0.20030275679406273, 3);
  sqcRYGate(q, 3.0740573210637008, 4);
  sqcRZGate(q, -0.13407466912999524, 4);
  sqcRYGate(q, 2.975327318158726, 5);
  sqcRZGate(q, -2.929004324154708, 5);
  sqcRYGate(q, 2.140380612101576, 6);
  sqcRZGate(q, 2.1766327618947647, 6);
  sqcRYGate(q, -0.0014892044351464406, 7);
  sqcRZGate(q, 2.7751484500418835, 7);
  sqcRYGate(q, 3.132158289768725, 8);
  sqcRZGate(q, 2.1517502245250633, 8);
  sqcRYGate(q, 0.40841176320586065, 9);
  sqcRZGate(q, 1.6938833289796216, 9);
  sqcRYGate(q, 2.114363474339828, 10);
  sqcRZGate(q, 3.0847144826755803, 10);
  sqcRYGate(q, 1.3592100631758195, 11);
  sqcRZGate(q, 1.569029638127489, 11);
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
  sqcRYGate(q, 2.6215643538432736, 0);
  sqcRZGate(q, -1.7987082952426467, 0);
  sqcRYGate(q, -1.5167781363013824, 1);
  sqcRZGate(q, 3.1273920302593274, 1);
  sqcRYGate(q, 0.42644265143965665, 2);
  sqcRZGate(q, 0.11242188467381276, 2);
  sqcRYGate(q, -3.1198572630906707, 3);
  sqcRZGate(q, -0.7622609577412119, 3);
  sqcRYGate(q, 3.119109386845009, 4);
  sqcRZGate(q, 1.1406982726127077, 4);
  sqcRYGate(q, -2.828432998491175, 5);
  sqcRZGate(q, 0.25138717607552064, 5);
  sqcRYGate(q, -0.055952418417277355, 6);
  sqcRZGate(q, 0.9219794070949827, 6);
  sqcRYGate(q, 0.004737456058243295, 7);
  sqcRZGate(q, -1.604630241054835, 7);
  sqcRYGate(q, -0.003866102594955123, 8);
  sqcRZGate(q, -1.0818658765385858, 8);
  sqcRYGate(q, 1.2369886991957681, 9);
  sqcRZGate(q, -1.5136838322255466, 9);
  sqcRYGate(q, -1.6562112294898617, 10);
  sqcRZGate(q, -3.0364880275960444, 10);
  sqcRYGate(q, -1.9815151671752476, 11);
  sqcRZGate(q, 0.5321313824454723, 11);
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
  sqcRYGate(q, 1.641514054398102, 0);
  sqcRZGate(q, 1.522397705446365, 0);
  sqcRYGate(q, -1.1400498060342155, 1);
  sqcRZGate(q, 1.539582289804125, 1);
  sqcRYGate(q, -2.836624440462925, 2);
  sqcRZGate(q, -0.5228538651893222, 2);
  sqcRYGate(q, 3.11533195430671, 3);
  sqcRZGate(q, 2.4540184171959663, 3);
  sqcRYGate(q, 3.1321545149095233, 4);
  sqcRZGate(q, 1.0823712835728412, 4);
  sqcRYGate(q, -0.16296749480308548, 5);
  sqcRZGate(q, 0.06375256588097596, 5);
  sqcRYGate(q, 0.9987840189186281, 6);
  sqcRZGate(q, -1.435746470573977, 6);
  sqcRYGate(q, 3.141470661960244, 7);
  sqcRZGate(q, 2.2706977345825106, 7);
  sqcRYGate(q, 0.0017086559262757815, 8);
  sqcRZGate(q, -1.6335876337796398, 8);
  sqcRYGate(q, -2.962836475914859, 9);
  sqcRZGate(q, 1.2719445385273536, 9);
  sqcRYGate(q, 1.1044838960739896, 10);
  sqcRZGate(q, 2.762343742003524, 10);
  sqcRYGate(q, -1.3898082277157238, 11);
  sqcRZGate(q, -0.14524491206196968, 11);
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
  sqcRYGate(q, 1.5691078263082225, 0);
  sqcRZGate(q, -0.2636338747483503, 0);
  sqcRYGate(q, 1.4995070356303117, 1);
  sqcRZGate(q, -0.36889926433317227, 1);
  sqcRYGate(q, 0.003219719232708325, 2);
  sqcRZGate(q, -0.4600666048235853, 2);
  sqcRYGate(q, -1.550589552532634, 3);
  sqcRZGate(q, -0.759817389466253, 3);
  sqcRYGate(q, -1.504069545718728, 4);
  sqcRZGate(q, -1.2155279188502417, 4);
  sqcRYGate(q, -0.8709730800856219, 5);
  sqcRZGate(q, -2.2178369423935846, 5);
  sqcRYGate(q, -1.644362472243734, 6);
  sqcRZGate(q, -1.5580169571253335, 6);
  sqcRYGate(q, -1.5441642651241525, 7);
  sqcRZGate(q, -0.821840145057426, 7);
  sqcRYGate(q, 1.3850544598131407, 8);
  sqcRZGate(q, 1.0992426473249506, 8);
  sqcRYGate(q, -1.7608080304505518, 9);
  sqcRZGate(q, 2.2261747367683373, 9);
  sqcRYGate(q, 2.591946606926353, 10);
  sqcRZGate(q, 2.817566889877629, 10);
  sqcRYGate(q, 2.324667718758029, 11);
  sqcRZGate(q, -1.3100611383706762, 11);

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
