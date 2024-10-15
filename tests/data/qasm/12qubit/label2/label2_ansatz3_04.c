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

  sqcRYGate(q, -1.5707498670873523, 0);
  sqcRZGate(q, -1.33617173074358, 0);
  sqcRYGate(q, -1.5707704629002128, 1);
  sqcRZGate(q, 1.0981019052757772, 1);
  sqcRYGate(q, -0.000702258323110495, 2);
  sqcRZGate(q, 0.63886859347346, 2);
  sqcRYGate(q, -3.1413881192397985, 3);
  sqcRZGate(q, 0.7803804196972585, 3);
  sqcRYGate(q, 0.0029802871274693388, 4);
  sqcRZGate(q, 0.3311146764796442, 4);
  sqcRYGate(q, 1.5708115431394214, 5);
  sqcRZGate(q, -2.1079367540784664, 5);
  sqcRYGate(q, 3.0154921535531347, 6);
  sqcRZGate(q, 0.13693257107449713, 6);
  sqcRYGate(q, 1.502100699504564, 7);
  sqcRZGate(q, -1.5240373159601015, 7);
  sqcRYGate(q, -6.454676571488165e-05, 8);
  sqcRZGate(q, 0.8469472226128092, 8);
  sqcRYGate(q, -0.5601503778547254, 9);
  sqcRZGate(q, 3.0596923642965317, 9);
  sqcRYGate(q, -1.5171136568063284, 10);
  sqcRZGate(q, -1.2465170936056051, 10);
  sqcRYGate(q, -2.415280020147512, 11);
  sqcRZGate(q, -0.10701310728856116, 11);
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
  sqcRYGate(q, 0.7082057274909692, 0);
  sqcRZGate(q, 1.1191867190059648, 0);
  sqcRYGate(q, -1.690980765773233, 1);
  sqcRZGate(q, -1.6987681023388435, 1);
  sqcRYGate(q, 1.5687618967814232, 2);
  sqcRZGate(q, -0.7738354730551099, 2);
  sqcRYGate(q, -1.5708470138380308, 3);
  sqcRZGate(q, -2.8530682283959807, 3);
  sqcRYGate(q, -0.00011360433010842996, 4);
  sqcRZGate(q, -0.0733085870515735, 4);
  sqcRYGate(q, -0.004945198216759989, 5);
  sqcRZGate(q, 2.1082204435104748, 5);
  sqcRYGate(q, -1.5185926925966584, 6);
  sqcRZGate(q, -2.9001636772685075, 6);
  sqcRYGate(q, 5.373726323565364e-05, 7);
  sqcRZGate(q, 0.7279506007818242, 7);
  sqcRYGate(q, 0.00017327250818184565, 8);
  sqcRZGate(q, -2.5034067794547745, 8);
  sqcRYGate(q, 3.14016173415524, 9);
  sqcRZGate(q, -0.08073804787235647, 9);
  sqcRYGate(q, 1.8337285142187572, 10);
  sqcRZGate(q, -2.9026151497989616, 10);
  sqcRYGate(q, -0.0007839801754441211, 11);
  sqcRZGate(q, -0.9355453086316983, 11);
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
  sqcRYGate(q, 3.139472135808419, 0);
  sqcRZGate(q, 1.210651640691944, 0);
  sqcRYGate(q, 1.570780799736558, 1);
  sqcRZGate(q, 0.0932606863185832, 1);
  sqcRYGate(q, 0.00012639330964535486, 2);
  sqcRZGate(q, -2.36262005578566, 2);
  sqcRYGate(q, 1.1148784300356443e-05, 3);
  sqcRZGate(q, 2.067242952113973, 3);
  sqcRYGate(q, -1.569418961188884, 4);
  sqcRZGate(q, -2.739477392659969, 4);
  sqcRYGate(q, 1.5711467834287403, 5);
  sqcRZGate(q, 0.7172057238143852, 5);
  sqcRYGate(q, 1.6810848303689836, 6);
  sqcRZGate(q, 0.2553630779980893, 6);
  sqcRYGate(q, 0.33566186348109983, 7);
  sqcRZGate(q, -1.7033441238622657, 7);
  sqcRYGate(q, -3.139729564133684, 8);
  sqcRZGate(q, 1.3058590517329072, 8);
  sqcRYGate(q, 2.580824079693736, 9);
  sqcRZGate(q, -0.5403118341796941, 9);
  sqcRYGate(q, -1.2150554604549324, 10);
  sqcRZGate(q, 2.399348293385767, 10);
  sqcRYGate(q, -2.1242616474182787, 11);
  sqcRZGate(q, 3.0772860733545895, 11);
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
  sqcRYGate(q, -1.5709603766800733, 0);
  sqcRZGate(q, -2.6645509074313516, 0);
  sqcRYGate(q, -1.565549603347463, 1);
  sqcRZGate(q, 1.2672661064072657, 1);
  sqcRYGate(q, 1.567844522353771, 2);
  sqcRZGate(q, -2.6955197988688635, 2);
  sqcRYGate(q, -3.141578754306366, 3);
  sqcRZGate(q, -0.06457730995746756, 3);
  sqcRYGate(q, -1.570351121082796, 4);
  sqcRZGate(q, 1.6168302545589224, 4);
  sqcRYGate(q, 1.5933028211636113, 5);
  sqcRZGate(q, -1.9275153756331571, 5);
  sqcRYGate(q, -0.002250098188354603, 6);
  sqcRZGate(q, -0.710487324143533, 6);
  sqcRYGate(q, 0.00019429050686440926, 7);
  sqcRZGate(q, -1.8815875369814032, 7);
  sqcRYGate(q, 1.5176928867042043, 8);
  sqcRZGate(q, -1.666271460610295, 8);
  sqcRYGate(q, 2.1103334109525074, 9);
  sqcRZGate(q, -0.7044518999155018, 9);
  sqcRYGate(q, 2.8073801971800116, 10);
  sqcRZGate(q, 1.14267163487715, 10);
  sqcRYGate(q, 2.79306085832825, 11);
  sqcRZGate(q, -0.15056816901162448, 11);
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
  sqcRYGate(q, -0.00010589236675404575, 0);
  sqcRZGate(q, 1.405606520928396, 0);
  sqcRYGate(q, -1.2429954235492262, 1);
  sqcRZGate(q, -1.2130073779145913, 1);
  sqcRYGate(q, -1.5475929685863064, 2);
  sqcRZGate(q, -1.5321132944932705, 2);
  sqcRYGate(q, 3.14156864636335, 3);
  sqcRZGate(q, 1.9423368968525008, 3);
  sqcRYGate(q, -1.613603803146838, 4);
  sqcRZGate(q, 3.0867957987809373, 4);
  sqcRYGate(q, -0.010436117980614057, 5);
  sqcRZGate(q, 0.3566370770095264, 5);
  sqcRYGate(q, 3.1415867786510407, 6);
  sqcRZGate(q, 0.14559962431559104, 6);
  sqcRYGate(q, -3.141576786243477, 7);
  sqcRZGate(q, 2.0866010129446595, 7);
  sqcRYGate(q, 0.001760932299933837, 8);
  sqcRZGate(q, 2.8305886123881283, 8);
  sqcRYGate(q, -0.009779668454540591, 9);
  sqcRZGate(q, -1.121160606657007, 9);
  sqcRYGate(q, -1.5822828544582428, 10);
  sqcRZGate(q, -1.9587784486790705, 10);
  sqcRYGate(q, 1.7035577403000393, 11);
  sqcRZGate(q, -2.5047330181653553, 11);
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
  sqcRYGate(q, 1.5224659001686653, 0);
  sqcRZGate(q, 1.5727932045618385, 0);
  sqcRYGate(q, -1.4019721989599254, 1);
  sqcRZGate(q, -1.8518145191933908, 1);
  sqcRYGate(q, 1.5707259414704415, 2);
  sqcRZGate(q, -1.8970044517180558, 2);
  sqcRYGate(q, 3.509117657042042e-05, 3);
  sqcRZGate(q, -1.9816072279744095, 3);
  sqcRYGate(q, 2.017114795112808, 4);
  sqcRZGate(q, -0.02220050654137585, 4);
  sqcRYGate(q, 1.5719471170500983, 5);
  sqcRZGate(q, 1.0843130207130764, 5);
  sqcRYGate(q, -3.1413998867420396, 6);
  sqcRZGate(q, -1.9889632168754998, 6);
  sqcRYGate(q, 3.1413856147242414, 7);
  sqcRZGate(q, 3.038549030036032, 7);
  sqcRYGate(q, 0.007990588203788285, 8);
  sqcRZGate(q, -1.3474944557848358, 8);
  sqcRYGate(q, -0.8413697017230382, 9);
  sqcRZGate(q, 0.2968536203490024, 9);
  sqcRYGate(q, 0.03884590955087063, 10);
  sqcRZGate(q, -1.5278381999620316, 10);
  sqcRYGate(q, -1.5477027581939404, 11);
  sqcRZGate(q, -1.3020056506487885, 11);
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
  sqcRYGate(q, 1.5742859858913274, 0);
  sqcRZGate(q, 1.1907170062659649, 0);
  sqcRYGate(q, -1.5242536594175995, 1);
  sqcRZGate(q, -3.079141460938727, 1);
  sqcRYGate(q, -3.141411307946636, 2);
  sqcRZGate(q, -0.4649035016792038, 2);
  sqcRYGate(q, -3.141501214503158, 3);
  sqcRZGate(q, 1.6053430343540427, 3);
  sqcRYGate(q, 1.5707869832434183, 4);
  sqcRZGate(q, 1.0116696014623858, 4);
  sqcRYGate(q, 1.580483439506842, 5);
  sqcRZGate(q, -3.0927006605379637, 5);
  sqcRYGate(q, -3.141438752102508, 6);
  sqcRZGate(q, -1.9928349522127764, 6);
  sqcRYGate(q, -3.1412131047535157, 7);
  sqcRZGate(q, 0.6618599367645449, 7);
  sqcRYGate(q, 3.1410482398876125, 8);
  sqcRZGate(q, 1.6389420783699218, 8);
  sqcRYGate(q, -3.1066611443849554, 9);
  sqcRZGate(q, -0.865608031286414, 9);
  sqcRYGate(q, 1.7619153196012318, 10);
  sqcRZGate(q, -0.1163806148302804, 10);
  sqcRYGate(q, -2.3027573143360995, 11);
  sqcRZGate(q, -1.8279183227629812, 11);
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
  sqcRYGate(q, 2.975089839106962, 0);
  sqcRZGate(q, -2.589224279580249, 0);
  sqcRYGate(q, -1.7247167599464444, 1);
  sqcRZGate(q, -2.2041226948066077, 1);
  sqcRYGate(q, -1.5924075264491115, 2);
  sqcRZGate(q, 2.512887167347605, 2);
  sqcRYGate(q, -1.4357435143291093, 3);
  sqcRZGate(q, 0.9450970600900929, 3);
  sqcRYGate(q, 3.0490659727675924, 4);
  sqcRZGate(q, -2.7357576038976186, 4);
  sqcRYGate(q, 1.6502328085956535, 5);
  sqcRZGate(q, 0.9668413163804832, 5);
  sqcRYGate(q, 3.1046558940588134, 6);
  sqcRZGate(q, 2.3661778788592747, 6);
  sqcRYGate(q, -0.03657004576708541, 7);
  sqcRZGate(q, 2.3871228683007555, 7);
  sqcRYGate(q, -1.6559024948317977, 8);
  sqcRZGate(q, 0.12672774114969126, 8);
  sqcRYGate(q, -0.11783956456300526, 9);
  sqcRZGate(q, 0.9438010500877844, 9);
  sqcRYGate(q, -1.453928322537178, 10);
  sqcRZGate(q, -1.1853297610195328, 10);
  sqcRYGate(q, -3.112418500576619, 11);
  sqcRZGate(q, 2.8631621408139463, 11);

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
