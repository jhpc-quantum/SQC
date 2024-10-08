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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.570116228520743, 0);
  sqcRZGate(q, 1.571861122051273, 0);
  sqcRYGate(q, -1.5655382903236061, 1);
  sqcRZGate(q, 1.5756755083598937, 1);
  sqcRYGate(q, 0.38881022747367044, 2);
  sqcRZGate(q, -1.553436777013106, 2);
  sqcRYGate(q, -0.3980570412955622, 3);
  sqcRZGate(q, 1.5537696463373916, 3);
  sqcRYGate(q, 1.56354869934983, 4);
  sqcRZGate(q, 0.67330451991183, 4);
  sqcRYGate(q, -1.5644762520348336, 5);
  sqcRZGate(q, -0.6320499785393802, 5);
  sqcRYGate(q, 0.0005856437066240616, 6);
  sqcRZGate(q, -0.9977236357103925, 6);
  sqcRYGate(q, -0.0015711605605028822, 7);
  sqcRZGate(q, 1.635551164563146, 7);
  sqcRYGate(q, -0.12988905333470058, 8);
  sqcRZGate(q, -0.05695326939354087, 8);
  sqcRYGate(q, -3.1360428492350048, 9);
  sqcRZGate(q, -0.5579342689948588, 9);
  sqcRYGate(q, 1.590414945834123, 10);
  sqcRZGate(q, 3.1299269763593807, 10);
  sqcRYGate(q, -3.113238553732729, 11);
  sqcRZGate(q, 0.9567162733277845, 11);
  sqcRYGate(q, -0.22771855681929165, 12);
  sqcRZGate(q, -0.9124901215633928, 12);
  sqcRYGate(q, 1.601651825732237, 13);
  sqcRZGate(q, -0.019823016158361458, 13);
  sqcRYGate(q, -2.5039307646786746, 14);
  sqcRZGate(q, 1.6443406096371878, 14);
  sqcRYGate(q, 1.5762005130115513, 15);
  sqcRZGate(q, -0.03848020570306892, 15);
  sqcRYGate(q, -0.92432557097748, 16);
  sqcRZGate(q, -2.9326785633998917, 16);
  sqcRYGate(q, -3.0591286917021168, 17);
  sqcRZGate(q, -2.931090631224593, 17);
  sqcRYGate(q, -0.8601651925761322, 18);
  sqcRZGate(q, 0.04726618765808066, 18);
  sqcRYGate(q, 1.5779397548655356, 19);
  sqcRZGate(q, 1.8305579073361817, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.525408703827534, 0);
  sqcRZGate(q, 0.034378728260696434, 0);
  sqcRYGate(q, 1.8904347117023388, 1);
  sqcRZGate(q, 0.1955180498166751, 1);
  sqcRYGate(q, -1.5685123309201003, 2);
  sqcRZGate(q, 2.8424418208133324, 2);
  sqcRYGate(q, 1.5715826721010986, 3);
  sqcRZGate(q, 0.8050574507560659, 3);
  sqcRYGate(q, -1.7597174011032926, 4);
  sqcRZGate(q, 1.4504149030201532, 4);
  sqcRYGate(q, -1.3367452897795302, 5);
  sqcRZGate(q, 1.4128244587387035, 5);
  sqcRYGate(q, -0.00220276070323866, 6);
  sqcRZGate(q, 0.23580172775723052, 6);
  sqcRYGate(q, -0.0003951799909339007, 7);
  sqcRZGate(q, -0.27674069329394957, 7);
  sqcRYGate(q, -1.577489965357506, 8);
  sqcRZGate(q, -1.1872131436082916, 8);
  sqcRYGate(q, 1.5593418929197274, 9);
  sqcRZGate(q, -2.738081165047957, 9);
  sqcRYGate(q, 1.552763616204074, 10);
  sqcRZGate(q, -0.07341478056151617, 10);
  sqcRYGate(q, -2.7788515414729322, 11);
  sqcRZGate(q, 0.8591585235702761, 11);
  sqcRYGate(q, -0.05025560635691294, 12);
  sqcRZGate(q, -0.750101856351548, 12);
  sqcRYGate(q, 2.805676039413764, 13);
  sqcRZGate(q, -0.0004249071979325336, 13);
  sqcRYGate(q, 3.119003116418999, 14);
  sqcRZGate(q, 1.6014643682534038, 14);
  sqcRYGate(q, 0.04040882807848333, 15);
  sqcRZGate(q, 0.1321502430777333, 15);
  sqcRYGate(q, 1.8107634353521433, 16);
  sqcRZGate(q, -0.416646000798342, 16);
  sqcRYGate(q, 1.438944181734482, 17);
  sqcRZGate(q, 0.471820686615418, 17);
  sqcRYGate(q, -2.3789503344852485, 18);
  sqcRZGate(q, 1.222601582907397, 18);
  sqcRYGate(q, 0.6824427306356774, 19);
  sqcRZGate(q, -0.5577932560651018, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.3018142798478829, 0);
  sqcRZGate(q, 0.05954677256298527, 0);
  sqcRYGate(q, 2.8395416513155993, 1);
  sqcRZGate(q, 0.17896588942597447, 1);
  sqcRYGate(q, 0.041886472891444086, 2);
  sqcRZGate(q, 1.9501241673435008, 2);
  sqcRYGate(q, 0.03493107165906384, 3);
  sqcRZGate(q, -2.341398803369164, 3);
  sqcRYGate(q, -1.5623234420579513, 4);
  sqcRZGate(q, 2.3925847924504717, 4);
  sqcRYGate(q, -1.558130654713795, 5);
  sqcRZGate(q, 0.8490256448851509, 5);
  sqcRYGate(q, 0.2863795588903848, 6);
  sqcRZGate(q, -0.10395933570934196, 6);
  sqcRYGate(q, -0.31778564717699265, 7);
  sqcRZGate(q, 0.10492925039977476, 7);
  sqcRYGate(q, 0.04255354989130973, 8);
  sqcRZGate(q, 1.1899875394755588, 8);
  sqcRYGate(q, -3.111518215666946, 9);
  sqcRZGate(q, -2.7750377939675537, 9);
  sqcRYGate(q, 0.4425287647682694, 10);
  sqcRZGate(q, 1.518237977933917, 10);
  sqcRYGate(q, 2.7897815331797386, 11);
  sqcRZGate(q, 1.5012649458941598, 11);
  sqcRYGate(q, 1.578719925972159, 12);
  sqcRZGate(q, 3.1266879766572293, 12);
  sqcRYGate(q, 1.581056602127478, 13);
  sqcRZGate(q, 2.9219626169699735, 13);
  sqcRYGate(q, 1.6595192490827522, 14);
  sqcRZGate(q, -0.4209990816051938, 14);
  sqcRYGate(q, -0.19435657726228153, 15);
  sqcRZGate(q, 2.5373870634305757, 15);
  sqcRYGate(q, -3.0984254467056234, 16);
  sqcRZGate(q, -0.8943371881252432, 16);
  sqcRYGate(q, 3.131597700967029, 17);
  sqcRZGate(q, -1.0331468206853849, 17);
  sqcRYGate(q, -1.1653013885289498, 18);
  sqcRZGate(q, -0.7010228062878185, 18);
  sqcRYGate(q, 1.6210141433646177, 19);
  sqcRZGate(q, 0.024150847331680936, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.5645808876157412, 0);
  sqcRZGate(q, 1.5247301202448034, 0);
  sqcRYGate(q, 1.246336881968706, 1);
  sqcRZGate(q, -1.252329108538147, 1);
  sqcRYGate(q, -1.5703049121587278, 2);
  sqcRZGate(q, -3.1297199957357913, 2);
  sqcRYGate(q, -1.5720639177921472, 3);
  sqcRZGate(q, -3.1199098221454626, 3);
  sqcRYGate(q, 3.108233739562544, 4);
  sqcRZGate(q, -2.5462192131180004, 4);
  sqcRYGate(q, 0.019322662220766063, 5);
  sqcRZGate(q, -1.552856710664249, 5);
  sqcRYGate(q, 2.762266189241557, 6);
  sqcRZGate(q, -0.012453848133536559, 6);
  sqcRYGate(q, 0.39901229517560594, 7);
  sqcRZGate(q, -0.029452798518994964, 7);
  sqcRYGate(q, 1.5634423578952232, 8);
  sqcRZGate(q, 3.0421342389047012, 8);
  sqcRYGate(q, -1.5878118105664356, 9);
  sqcRZGate(q, 0.07705601989636054, 9);
  sqcRYGate(q, -0.21078998111193492, 10);
  sqcRZGate(q, -1.4186846532558146, 10);
  sqcRYGate(q, 3.1275637600658532, 11);
  sqcRZGate(q, 1.5800662713660438, 11);
  sqcRYGate(q, -2.782911802928071, 12);
  sqcRZGate(q, 1.4310142717133203, 12);
  sqcRYGate(q, 3.127668817225989, 13);
  sqcRZGate(q, 1.9797842649064636, 13);
  sqcRYGate(q, 0.0025260656739538724, 14);
  sqcRZGate(q, 1.6613613489779093, 14);
  sqcRYGate(q, -3.095572044815975, 15);
  sqcRZGate(q, 1.1626336710663834, 15);
  sqcRYGate(q, 0.3392033762339244, 16);
  sqcRZGate(q, 2.3892186866557097, 16);
  sqcRYGate(q, -1.3894120945141362, 17);
  sqcRZGate(q, 0.3939750466923586, 17);
  sqcRYGate(q, 2.9793051430167026, 18);
  sqcRZGate(q, -0.5692409744443336, 18);
  sqcRYGate(q, 1.3346212929892511, 19);
  sqcRZGate(q, 2.905406863046305, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.07796841096009623, 0);
  sqcRZGate(q, -1.5920576692229915, 0);
  sqcRYGate(q, -3.1085505871320582, 1);
  sqcRZGate(q, -1.6528008459460999, 1);
  sqcRYGate(q, 1.488823374445723, 2);
  sqcRZGate(q, 1.5211692813713755, 2);
  sqcRYGate(q, 1.5414907455498028, 3);
  sqcRZGate(q, 1.1372788564318645, 3);
  sqcRYGate(q, 0.09026464727712066, 4);
  sqcRZGate(q, -1.3585472573208788, 4);
  sqcRYGate(q, 3.1011055672418406, 5);
  sqcRZGate(q, 2.037348062990267, 5);
  sqcRYGate(q, -1.6673044458109487, 6);
  sqcRZGate(q, 1.6357938703982018, 6);
  sqcRYGate(q, -1.5958465429372621, 7);
  sqcRZGate(q, 1.2022768413728073, 7);
  sqcRYGate(q, 1.461393241964321, 8);
  sqcRZGate(q, 1.7080460376100952, 8);
  sqcRYGate(q, 1.6085204741294659, 9);
  sqcRZGate(q, -1.8889967345981962, 9);
  sqcRYGate(q, 1.687288149539446, 10);
  sqcRZGate(q, -1.3825735406487065, 10);
  sqcRYGate(q, -1.6174914946470178, 11);
  sqcRZGate(q, 1.30589993250215, 11);
  sqcRYGate(q, -1.70615471304622, 12);
  sqcRZGate(q, 0.1903387267205101, 12);
  sqcRYGate(q, 1.5208459457044199, 13);
  sqcRZGate(q, 1.3980570664979226, 13);
  sqcRYGate(q, -1.6973114625741748, 14);
  sqcRZGate(q, 0.15806710198732077, 14);
  sqcRYGate(q, 2.183197087873501, 15);
  sqcRZGate(q, -0.04808600419155517, 15);
  sqcRYGate(q, -1.9489115005510866, 16);
  sqcRZGate(q, 2.1341886359130253, 16);
  sqcRYGate(q, -1.4957653573783496, 17);
  sqcRZGate(q, -1.6670204388861514, 17);
  sqcRYGate(q, -0.22081266596706595, 18);
  sqcRZGate(q, -3.110973439751722, 18);
  sqcRYGate(q, -2.775253566398201, 19);
  sqcRZGate(q, -0.23308374429449935, 19);

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
