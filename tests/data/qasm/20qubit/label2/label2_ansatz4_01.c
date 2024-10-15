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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.5568255279768148, 0);
  sqcRZGate(q, -1.570357791785634, 0);
  sqcRYGate(q, 0.00021898083878833175, 1);
  sqcRZGate(q, -2.4641998737782735, 1);
  sqcRYGate(q, 1.5707874349611188, 2);
  sqcRZGate(q, -1.9545167735946134, 2);
  sqcRYGate(q, -1.5708166451783545, 3);
  sqcRZGate(q, 3.0934091286946983, 3);
  sqcRYGate(q, -1.5712198050490294, 4);
  sqcRZGate(q, 3.1275096286584825, 4);
  sqcRYGate(q, -1.619053425198773, 5);
  sqcRZGate(q, 1.1985810123627643, 5);
  sqcRYGate(q, 3.1390422920767205, 6);
  sqcRZGate(q, -1.5226554295862336, 6);
  sqcRYGate(q, -4.714938004113379e-05, 7);
  sqcRZGate(q, 2.489553616313363, 7);
  sqcRYGate(q, 1.5727733152547394, 8);
  sqcRZGate(q, -0.7920429935544835, 8);
  sqcRYGate(q, -1.6403661791913322, 9);
  sqcRZGate(q, 1.664648797813833, 9);
  sqcRYGate(q, -0.00025954435369701656, 10);
  sqcRZGate(q, 1.1726288180654327, 10);
  sqcRYGate(q, 3.141561226969865, 11);
  sqcRZGate(q, -0.007210732905970297, 11);
  sqcRYGate(q, 1.6233148951260228, 12);
  sqcRZGate(q, 2.5082360041632223, 12);
  sqcRYGate(q, -1.508460679660038, 13);
  sqcRZGate(q, 0.2418897003216103, 13);
  sqcRYGate(q, -0.0004298915918248269, 14);
  sqcRZGate(q, 1.0343933483355912, 14);
  sqcRYGate(q, -0.0010990320796968687, 15);
  sqcRZGate(q, -1.7800178997584437, 15);
  sqcRYGate(q, 3.1351625128540617, 16);
  sqcRZGate(q, 2.8165092744725198, 16);
  sqcRYGate(q, -1.8076829452017265, 17);
  sqcRZGate(q, -2.8273543599019906, 17);
  sqcRYGate(q, 0.07804381368168212, 18);
  sqcRZGate(q, -0.8661612527466548, 18);
  sqcRYGate(q, 2.0374189584119824, 19);
  sqcRZGate(q, -1.728810862799543, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5709424954279132, 0);
  sqcRZGate(q, -1.5688149492184595, 0);
  sqcRYGate(q, -3.094286035906212, 1);
  sqcRZGate(q, 1.571621321493916, 1);
  sqcRYGate(q, -3.088697737231089, 2);
  sqcRZGate(q, -1.9109246930503399, 2);
  sqcRYGate(q, 0.01917136560500765, 3);
  sqcRZGate(q, 0.041529887402454654, 3);
  sqcRYGate(q, -0.04582099061475834, 4);
  sqcRZGate(q, 3.0314141480470456, 4);
  sqcRYGate(q, -0.0425671547386024, 5);
  sqcRZGate(q, 1.0012030881356355, 5);
  sqcRYGate(q, 1.5645623705982934, 6);
  sqcRZGate(q, -0.05762406515969069, 6);
  sqcRYGate(q, 2.7188937328289593, 7);
  sqcRZGate(q, -1.9288688077166087, 7);
  sqcRYGate(q, 1.6365968768274088, 8);
  sqcRZGate(q, 0.9785150884172165, 8);
  sqcRYGate(q, -0.7958342754384633, 9);
  sqcRZGate(q, -0.4439611247536765, 9);
  sqcRYGate(q, 2.858267751708388, 10);
  sqcRZGate(q, 0.28780901139377324, 10);
  sqcRYGate(q, 1.5930639853419826, 11);
  sqcRZGate(q, -2.5980623008673853, 11);
  sqcRYGate(q, 0.381826569614657, 12);
  sqcRZGate(q, -2.2103821135451964, 12);
  sqcRYGate(q, -1.8445158637256034, 13);
  sqcRZGate(q, 2.881976346159701, 13);
  sqcRYGate(q, 1.572442240321812, 14);
  sqcRZGate(q, 2.316380454280042, 14);
  sqcRYGate(q, 1.5706313325118553, 15);
  sqcRZGate(q, 0.5427027543179452, 15);
  sqcRYGate(q, -0.0009156897484006805, 16);
  sqcRZGate(q, 1.9397086374364871, 16);
  sqcRYGate(q, -0.5905499140124455, 17);
  sqcRZGate(q, 1.2914674964338815, 17);
  sqcRYGate(q, 1.6235759046359166, 18);
  sqcRZGate(q, 3.047698199841324, 18);
  sqcRYGate(q, 1.5028977338988794, 19);
  sqcRZGate(q, -0.43913797184696796, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.6151876852534524, 0);
  sqcRZGate(q, 0.011087144908955794, 0);
  sqcRYGate(q, 1.269666302336626, 1);
  sqcRZGate(q, 0.1751062838287236, 1);
  sqcRYGate(q, -1.5641154394347847, 2);
  sqcRZGate(q, -0.5333210415850914, 2);
  sqcRYGate(q, -1.6149640350897634, 3);
  sqcRZGate(q, -0.8551530341259354, 3);
  sqcRYGate(q, -3.095686252614778, 4);
  sqcRZGate(q, -1.6815485939603496, 4);
  sqcRYGate(q, -4.946309486196759e-05, 5);
  sqcRZGate(q, 1.5866677505516407, 5);
  sqcRYGate(q, -3.093761490750166, 6);
  sqcRZGate(q, -1.6281077366206875, 6);
  sqcRYGate(q, -0.0011047328007412816, 7);
  sqcRZGate(q, 3.0785149362252566, 7);
  sqcRYGate(q, 3.0562628394058913, 8);
  sqcRZGate(q, -0.6061167003391227, 8);
  sqcRYGate(q, -0.06930261397135862, 9);
  sqcRZGate(q, 0.3919704739926156, 9);
  sqcRYGate(q, 1.569999835114904, 10);
  sqcRZGate(q, -0.0037414526512038714, 10);
  sqcRYGate(q, 3.1309463731261826, 11);
  sqcRZGate(q, -2.597747785706901, 11);
  sqcRYGate(q, -2.1150745467414565, 12);
  sqcRZGate(q, -0.013641862791375914, 12);
  sqcRYGate(q, 1.0248908651074482, 13);
  sqcRZGate(q, 3.1281895256612007, 13);
  sqcRYGate(q, 3.1006928643129, 14);
  sqcRZGate(q, 0.642112426561804, 14);
  sqcRYGate(q, 0.012945706927398604, 15);
  sqcRZGate(q, 3.0290438286421013, 15);
  sqcRYGate(q, -1.5708460643451323, 16);
  sqcRZGate(q, 0.0014992785994595516, 16);
  sqcRYGate(q, -1.5686853558820824, 17);
  sqcRZGate(q, -9.122860900490082e-06, 17);
  sqcRYGate(q, -1.5347122194403775, 18);
  sqcRZGate(q, 1.12780551919119, 18);
  sqcRYGate(q, 1.4743255804334983, 19);
  sqcRZGate(q, 1.504874348534238, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5580212000241178, 0);
  sqcRZGate(q, -2.950205268230088, 0);
  sqcRYGate(q, 2.8362249075044184, 1);
  sqcRZGate(q, 0.1598331555176202, 1);
  sqcRYGate(q, 0.006796169529773683, 2);
  sqcRZGate(q, 0.17320746738837825, 2);
  sqcRYGate(q, 0.006286455522882097, 3);
  sqcRZGate(q, -2.9119827455265157, 3);
  sqcRYGate(q, 2.4975982582654868, 4);
  sqcRZGate(q, 2.315341776061497, 4);
  sqcRYGate(q, -1.563006221825774, 5);
  sqcRZGate(q, -1.4768382100196087, 5);
  sqcRYGate(q, 0.657627890227368, 6);
  sqcRZGate(q, -0.3700715954841104, 6);
  sqcRYGate(q, -1.7522057550274655, 7);
  sqcRZGate(q, 0.27141801953798433, 7);
  sqcRYGate(q, -1.5737012805056496, 8);
  sqcRZGate(q, -0.7059983943027291, 8);
  sqcRYGate(q, 1.5737347926561416, 9);
  sqcRZGate(q, 0.7714459967398912, 9);
  sqcRYGate(q, 2.936787018074987, 10);
  sqcRZGate(q, -2.4604339845883914, 10);
  sqcRYGate(q, -1.5019046236624325, 11);
  sqcRZGate(q, 1.877004611488916, 11);
  sqcRYGate(q, 1.5679636703490702, 12);
  sqcRZGate(q, 2.21267066778924, 12);
  sqcRYGate(q, 1.5737563306167226, 13);
  sqcRZGate(q, -0.9409263989323575, 13);
  sqcRYGate(q, -0.0009051637509662679, 14);
  sqcRZGate(q, 1.7527869829176388, 14);
  sqcRYGate(q, -0.00028592747757372194, 15);
  sqcRZGate(q, -1.1333265367550283, 15);
  sqcRYGate(q, -1.5707780375605482, 16);
  sqcRZGate(q, 0.08437035735828396, 16);
  sqcRYGate(q, -1.5723349718545157, 17);
  sqcRZGate(q, -1.3834877039609808, 17);
  sqcRYGate(q, -3.1407805207621258, 18);
  sqcRZGate(q, -1.8905166388649333, 18);
  sqcRYGate(q, 1.5725801044442482, 19);
  sqcRZGate(q, -0.6236591056696082, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.0420916607767019, 0);
  sqcRZGate(q, 1.7482221720501112, 0);
  sqcRYGate(q, -1.5718977644409236, 1);
  sqcRZGate(q, -1.2023840591128947, 1);
  sqcRYGate(q, -0.0009649812016667246, 2);
  sqcRZGate(q, -0.8453008764492996, 2);
  sqcRYGate(q, 3.1406337115851497, 3);
  sqcRZGate(q, -0.259855619703119, 3);
  sqcRYGate(q, -0.004012852106383334, 4);
  sqcRZGate(q, -0.6906308707595085, 4);
  sqcRYGate(q, -3.1208575099535603, 5);
  sqcRZGate(q, 1.707471228751312, 5);
  sqcRYGate(q, 3.018443500485119, 6);
  sqcRZGate(q, 1.2352829177926674, 6);
  sqcRYGate(q, -1.615958345926765, 7);
  sqcRZGate(q, 0.02443261197677593, 7);
  sqcRYGate(q, -3.140052240144424, 8);
  sqcRZGate(q, -0.6733802845592498, 8);
  sqcRYGate(q, 0.00020705575454159266, 9);
  sqcRZGate(q, -0.73890317147625, 9);
  sqcRYGate(q, 0.011489479203608042, 10);
  sqcRZGate(q, -0.6146155799878841, 10);
  sqcRYGate(q, -3.0651398080649295, 11);
  sqcRZGate(q, 1.9468915213696194, 11);
  sqcRYGate(q, -0.0022580019511106997, 12);
  sqcRZGate(q, 1.0000502659343788, 12);
  sqcRYGate(q, -3.138593377102744, 13);
  sqcRZGate(q, 2.271818063038438, 13);
  sqcRYGate(q, -1.4764933795539656, 14);
  sqcRZGate(q, -3.0739789282095824, 14);
  sqcRYGate(q, 0.12200227308803767, 15);
  sqcRZGate(q, -2.367854370957119, 15);
  sqcRYGate(q, -2.1352761090339936, 16);
  sqcRZGate(q, -1.7378523271641972, 16);
  sqcRYGate(q, -0.582179973933477, 17);
  sqcRZGate(q, -1.9589206669326051, 17);
  sqcRYGate(q, -0.9856448377803637, 18);
  sqcRZGate(q, 1.385630595832379, 18);
  sqcRYGate(q, 1.898825743567893, 19);
  sqcRZGate(q, -0.412139290504606, 19);

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
