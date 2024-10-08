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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.7116265403599406, 0);
  sqcRYGate(q, -3.1159468823293976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3326200842791167, 0);
  sqcRYGate(q, -0.16002728726683113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1012542292361447, 1);
  sqcRYGate(q, 0.6900293770924607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.630032152732129, 1);
  sqcRYGate(q, -1.8658617781523374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4255033867335367, 2);
  sqcRYGate(q, -2.488677922606425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18973167124267998, 2);
  sqcRYGate(q, -1.5805970833718321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6344793391518274, 3);
  sqcRYGate(q, 3.1270907475384577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.675590239343121, 3);
  sqcRYGate(q, -2.629575062523919, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6164482402801017, 4);
  sqcRYGate(q, 0.006061580636264274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5974487438518847, 4);
  sqcRYGate(q, -1.3435700609040566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.136635811218104, 5);
  sqcRYGate(q, -2.0762443942560536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.235043720498905, 5);
  sqcRYGate(q, -1.572463195998836, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.733532009257565, 6);
  sqcRYGate(q, -3.1306322539061933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.883579301537508, 6);
  sqcRYGate(q, 0.673850913191969, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.144149980943281, 7);
  sqcRYGate(q, 0.5488425125142353, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7486861861943607, 7);
  sqcRYGate(q, 1.5897529586292523, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.042362279808287, 8);
  sqcRYGate(q, 0.019022986262735155, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5843830099619383, 8);
  sqcRYGate(q, 2.9828261492604295, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.224505413905435, 9);
  sqcRYGate(q, -2.0858630885691523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.618054137585431, 9);
  sqcRYGate(q, -1.586442348112799, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.574887492523687, 10);
  sqcRYGate(q, -2.2928020052439004, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1865537654717755, 10);
  sqcRYGate(q, -0.13318537310144585, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6727597770416427, 11);
  sqcRYGate(q, 3.133866495912856, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.475041823568455, 11);
  sqcRYGate(q, -1.5854727475404378, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0186530367818816, 12);
  sqcRYGate(q, 0.641191357367467, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9832854271604754, 12);
  sqcRYGate(q, 2.473354632119465, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6048233999075263, 13);
  sqcRYGate(q, -0.7014534108988052, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3431566040696288, 13);
  sqcRYGate(q, 3.119496786560251, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7927060740288265, 14);
  sqcRYGate(q, 1.5701890196424104, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0256432875412693, 14);
  sqcRYGate(q, -0.2811175722504764, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6505046623909372, 0);
  sqcRYGate(q, -0.564324097790764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4790630683297958, 0);
  sqcRYGate(q, 0.23338006379825224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3051694181778366, 1);
  sqcRYGate(q, -0.23205575462417283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8087015617896798, 1);
  sqcRYGate(q, -1.8968132089009635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1346020055224406, 2);
  sqcRYGate(q, 2.4627787427094905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1414778818673237, 2);
  sqcRYGate(q, 3.1185025823305867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9062034384711469, 3);
  sqcRYGate(q, 1.5599435019276537, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7852251958231173, 3);
  sqcRYGate(q, -3.0429063229722573, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.714288005187969, 4);
  sqcRYGate(q, -1.570947654041672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.478080382972335, 4);
  sqcRYGate(q, -0.0021944519094345694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.375206186163786, 5);
  sqcRYGate(q, 1.558512586317863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9521497494109177, 5);
  sqcRYGate(q, 3.1412498030130194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5537882192611618, 6);
  sqcRYGate(q, 1.567884838284746, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7380661944881841, 6);
  sqcRYGate(q, 0.9382595749696954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.175398435576703, 7);
  sqcRYGate(q, 1.1699605186116273, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6226516146324954, 7);
  sqcRYGate(q, 0.023483625647648054, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4517540731210898, 8);
  sqcRYGate(q, -1.5702033254071757, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3369662189093798, 8);
  sqcRYGate(q, -1.5754614204268622, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4614168654967779, 9);
  sqcRYGate(q, 1.573640348327034, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.19213438222993773, 9);
  sqcRYGate(q, 1.404084112348778, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4620318281764293, 10);
  sqcRYGate(q, -1.572340664974143, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.963002985572012, 10);
  sqcRYGate(q, -1.573701924523268, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7711137935985306, 11);
  sqcRYGate(q, 1.552947120994827, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0037398682532062, 11);
  sqcRYGate(q, -0.5798900073210377, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.39213759835665396, 12);
  sqcRYGate(q, -1.133538156734243, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6608754543494904, 12);
  sqcRYGate(q, 0.20872509588738647, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8281393549499527, 13);
  sqcRYGate(q, -1.5850014705384918, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.3601116745262765, 13);
  sqcRYGate(q, 0.08879425136526464, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5950985315171107, 14);
  sqcRYGate(q, 1.8599141692889916, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.218735761271078, 14);
  sqcRYGate(q, -0.28857947290014163, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.848241754079841, 0);
  sqcRYGate(q, 2.680004351064229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6116137952398288, 0);
  sqcRYGate(q, -2.9081472048877113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.019043742868002, 1);
  sqcRYGate(q, 0.10130890624066298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.595007940877613, 1);
  sqcRYGate(q, 1.9682940065035759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.325471528777296, 2);
  sqcRYGate(q, -0.4901236211502784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6653256740401745, 2);
  sqcRYGate(q, -1.5784881324028257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5160528859684346, 3);
  sqcRYGate(q, -0.6007712819110012, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5722024194990167, 3);
  sqcRYGate(q, -0.0007693994597621766, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7499817300141725, 4);
  sqcRYGate(q, 0.7649645759413346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5496599856895759, 4);
  sqcRYGate(q, 3.1395461935011597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5035803151453155, 5);
  sqcRYGate(q, 1.5687748534700168, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5739827337442485, 5);
  sqcRYGate(q, 3.1414062534424674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3565597835188585, 6);
  sqcRYGate(q, -1.166483667578044, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5217608990159793, 6);
  sqcRYGate(q, -0.9333505350180362, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1329472299807115, 7);
  sqcRYGate(q, -1.5760430739058418, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5734042116040943, 7);
  sqcRYGate(q, -3.1403613315580277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5757686463775913, 8);
  sqcRYGate(q, -1.5876844707868398, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5456230936225124, 8);
  sqcRYGate(q, -1.5863922721239785, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9063146925315815, 9);
  sqcRYGate(q, 1.5705349403938031, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5833779363180036, 9);
  sqcRYGate(q, -0.0004470423135071063, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.750146048688537, 10);
  sqcRYGate(q, -1.723255186261377, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5578397649220226, 10);
  sqcRYGate(q, -1.5677131592820917, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7043430113681766, 11);
  sqcRYGate(q, -2.642982905465992, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.568676812162777, 11);
  sqcRYGate(q, 0.001131299019836813, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5707747558716076, 12);
  sqcRYGate(q, 0.3132971968621341, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7286394657347697, 12);
  sqcRYGate(q, -1.67730229499691, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5618759978990768, 13);
  sqcRYGate(q, -3.087752803657825, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5710516341015701, 13);
  sqcRYGate(q, 1.568226230355405, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.123520065893277, 14);
  sqcRYGate(q, 1.1240585376837504, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.0010557368756664198, 14);
  sqcRYGate(q, -2.8222729152359842, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.07332304575516613, 0);
  sqcRYGate(q, 2.975031678896523, 1);
  sqcRYGate(q, -1.571645876003076, 2);
  sqcRYGate(q, 1.5186095886800182, 3);
  sqcRYGate(q, 1.745294229409826, 4);
  sqcRYGate(q, 1.702053673024289, 5);
  sqcRYGate(q, 1.6996843405951496, 6);
  sqcRYGate(q, 1.1273209070255883, 7);
  sqcRYGate(q, -1.5831823951141606, 8);
  sqcRYGate(q, -2.336758492584998, 9);
  sqcRYGate(q, 1.5708955840056984, 10);
  sqcRYGate(q, 1.7159045675173257, 11);
  sqcRYGate(q, -1.5751686442510069, 12);
  sqcRYGate(q, 1.7794704068822655, 13);
  sqcRYGate(q, 3.133135549807509, 14);
  sqcRYGate(q, 0.8845851590049669, 15);

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
