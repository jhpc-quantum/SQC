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

  sqcRYGate(q, -0.0002530410655259274, 0);
  sqcRZGate(q, 2.6365904287289195, 0);
  sqcRYGate(q, -2.997541305717873, 1);
  sqcRZGate(q, 3.12679237046554, 1);
  sqcRYGate(q, 3.1415609541057963, 2);
  sqcRZGate(q, 0.9255690379522905, 2);
  sqcRYGate(q, 0.5126058507523501, 3);
  sqcRZGate(q, -3.141354635256997, 3);
  sqcRYGate(q, 0.6259603262268412, 4);
  sqcRZGate(q, -3.141577269185994, 4);
  sqcRYGate(q, -1.5640599385356841, 5);
  sqcRZGate(q, -2.4754869171991967, 5);
  sqcRYGate(q, 3.1414954292927493, 6);
  sqcRZGate(q, -3.095605434997809, 6);
  sqcRYGate(q, 1.5707940618961722, 7);
  sqcRZGate(q, -1.570785600754439, 7);
  sqcRYGate(q, -3.1415706075219343, 8);
  sqcRZGate(q, 0.4513451251542788, 8);
  sqcRYGate(q, 0.0023049596970157286, 9);
  sqcRZGate(q, 0.43146053179372496, 9);
  sqcRYGate(q, 1.5940721397741648, 10);
  sqcRZGate(q, 1.6379530289082789, 10);
  sqcRYGate(q, 1.5202051768001088, 11);
  sqcRZGate(q, -2.170307496098109, 11);
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
  sqcRYGate(q, -1.571338782347177, 0);
  sqcRZGate(q, 2.3610675987623355, 0);
  sqcRYGate(q, 1.5684213344508136, 1);
  sqcRZGate(q, -3.141587260871061, 1);
  sqcRYGate(q, -3.1414592926491696, 2);
  sqcRZGate(q, -3.0013482797671474, 2);
  sqcRYGate(q, 3.0515016165140176, 3);
  sqcRZGate(q, 1.5710243656707679, 3);
  sqcRYGate(q, 1.5709957305503015, 4);
  sqcRZGate(q, -1.5707515202886801, 4);
  sqcRYGate(q, -2.837734071192699e-05, 5);
  sqcRZGate(q, 2.4755658777818392, 5);
  sqcRYGate(q, 1.570753049887049, 6);
  sqcRZGate(q, 1.7132134650081872, 6);
  sqcRYGate(q, 1.570877097568811, 7);
  sqcRZGate(q, 1.5708166946428772, 7);
  sqcRYGate(q, 3.141338304572504, 8);
  sqcRZGate(q, 1.3880287626166306, 8);
  sqcRYGate(q, 3.115346870273745, 9);
  sqcRZGate(q, 0.287116058908989, 9);
  sqcRYGate(q, -0.47214622208181833, 10);
  sqcRZGate(q, 2.835200404187833, 10);
  sqcRYGate(q, -2.8970499898540854, 11);
  sqcRZGate(q, -2.7788208382406068, 11);
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
  sqcRYGate(q, -3.1383293052079204, 0);
  sqcRZGate(q, -0.8706697805795944, 0);
  sqcRYGate(q, 1.5684119507543555, 1);
  sqcRZGate(q, -0.6450959459039982, 1);
  sqcRYGate(q, 1.5704032071047216, 2);
  sqcRZGate(q, -3.1415780730335223, 2);
  sqcRYGate(q, 1.570818088591686, 3);
  sqcRZGate(q, -1.5707969880163013, 3);
  sqcRYGate(q, -1.570931981319304, 4);
  sqcRZGate(q, 0.32496741449189775, 4);
  sqcRYGate(q, -1.5709748745861958, 5);
  sqcRZGate(q, -0.8900779067524898, 5);
  sqcRYGate(q, 3.1277862373686083, 6);
  sqcRZGate(q, 1.689814869072511, 6);
  sqcRYGate(q, 1.5710458534599816, 7);
  sqcRZGate(q, 0.8826149174282606, 7);
  sqcRYGate(q, -5.499004691600363e-05, 8);
  sqcRZGate(q, -1.2390000832494072, 8);
  sqcRYGate(q, -0.6291187598470582, 9);
  sqcRZGate(q, 3.141590581637194, 9);
  sqcRYGate(q, -1.377153744108007, 10);
  sqcRZGate(q, -1.5512441608767231, 10);
  sqcRYGate(q, -3.030249859597022, 11);
  sqcRZGate(q, 2.0675425456895358, 11);
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
  sqcRYGate(q, 1.5708780438436527, 0);
  sqcRZGate(q, 1.5709729737284226, 0);
  sqcRYGate(q, 3.1413789826698815, 1);
  sqcRZGate(q, 0.9385410274041471, 1);
  sqcRYGate(q, -1.570779168560203, 2);
  sqcRZGate(q, 2.8800963521511282, 2);
  sqcRYGate(q, -1.5707816691401204, 3);
  sqcRZGate(q, -0.45008154927743677, 3);
  sqcRYGate(q, 0.00018092244936512999, 4);
  sqcRZGate(q, 1.2590142177016983, 4);
  sqcRYGate(q, 0.0008250995079599477, 5);
  sqcRZGate(q, -1.3348638411687448, 5);
  sqcRYGate(q, -3.0368263788417473, 6);
  sqcRZGate(q, -0.07232027863213908, 6);
  sqcRYGate(q, 3.141477869195115, 7);
  sqcRZGate(q, 2.437646405614744, 7);
  sqcRYGate(q, 1.5704817870965453, 8);
  sqcRZGate(q, 3.141405657788404, 8);
  sqcRYGate(q, -1.5708442712097646, 9);
  sqcRZGate(q, 0.00011258358068300113, 9);
  sqcRYGate(q, 1.191082192734244, 10);
  sqcRZGate(q, -2.481363100881288, 10);
  sqcRYGate(q, 2.761737885369906, 11);
  sqcRZGate(q, -9.832184392788433e-05, 11);
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
  sqcRYGate(q, -1.9390207342724584, 0);
  sqcRZGate(q, 3.141508980898647, 0);
  sqcRYGate(q, 1.570793570942758, 1);
  sqcRZGate(q, -0.5340362706520921, 1);
  sqcRYGate(q, 1.5712537548994243, 2);
  sqcRZGate(q, -3.063585164936866, 2);
  sqcRYGate(q, -6.837642318124892e-05, 3);
  sqcRZGate(q, 2.98422538648116, 3);
  sqcRYGate(q, -0.03375056378622166, 4);
  sqcRZGate(q, 0.3364807609045908, 4);
  sqcRYGate(q, -9.732180614463459e-05, 5);
  sqcRZGate(q, -2.608351148896158, 5);
  sqcRYGate(q, 3.1415710306805047, 6);
  sqcRZGate(q, -0.06158631840368642, 6);
  sqcRYGate(q, -3.130153589837048, 7);
  sqcRZGate(q, 2.1032572286673474, 7);
  sqcRYGate(q, -1.9136246191867503, 8);
  sqcRZGate(q, -7.467322587369546e-05, 8);
  sqcRYGate(q, -1.8753816515133233, 9);
  sqcRZGate(q, 0.00017493483771059505, 9);
  sqcRYGate(q, 3.1415574050696713, 10);
  sqcRZGate(q, -2.4813155329630767, 10);
  sqcRYGate(q, -1.5707694009634903, 11);
  sqcRZGate(q, 3.069195117416997, 11);
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
  sqcRYGate(q, 0.9717400158541702, 0);
  sqcRZGate(q, -1.570569935537273, 0);
  sqcRYGate(q, 3.141583575198355, 1);
  sqcRZGate(q, -2.1065360493723126, 1);
  sqcRYGate(q, 3.1414637372717453, 2);
  sqcRZGate(q, -1.4936813675153715, 2);
  sqcRYGate(q, -2.0712665030766656e-05, 3);
  sqcRZGate(q, 0.6073934222787177, 3);
  sqcRYGate(q, -3.1415783112729545, 4);
  sqcRZGate(q, 0.3468342004298499, 4);
  sqcRYGate(q, -1.0998353227265056e-05, 5);
  sqcRZGate(q, -0.9271467394713034, 5);
  sqcRYGate(q, 0.1436440371517449, 6);
  sqcRZGate(q, 1.5481023204935171, 6);
  sqcRYGate(q, -0.0002804475038393761, 7);
  sqcRZGate(q, 1.0224046947085554, 7);
  sqcRYGate(q, -1.5674260881930246, 8);
  sqcRZGate(q, 4.013244144822029e-05, 8);
  sqcRYGate(q, 1.5709865855118612, 9);
  sqcRZGate(q, 3.140678353635088, 9);
  sqcRYGate(q, 2.351314412795695, 10);
  sqcRZGate(q, 1.5706432563937611, 10);
  sqcRYGate(q, 0.0016048853019756748, 11);
  sqcRZGate(q, 0.06607929686231895, 11);
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
  sqcRYGate(q, -1.5707955538052596, 0);
  sqcRZGate(q, 2.7741522749083978, 0);
  sqcRYGate(q, 3.0778870240185654, 1);
  sqcRZGate(q, 0.11238011320041345, 1);
  sqcRYGate(q, 2.956319679098296, 2);
  sqcRZGate(q, -2.147642948881983, 2);
  sqcRYGate(q, 1.5707266101966428, 3);
  sqcRZGate(q, -1.570756891070132, 3);
  sqcRYGate(q, -0.11038667958226715, 4);
  sqcRZGate(q, -2.221184772613128, 4);
  sqcRYGate(q, 3.1414982901059987, 5);
  sqcRZGate(q, 0.5228386839370778, 5);
  sqcRYGate(q, 0.06788988718876432, 6);
  sqcRZGate(q, 1.6062875977494995, 6);
  sqcRYGate(q, -1.5706945408281554, 7);
  sqcRZGate(q, 1.5292238463168464, 7);
  sqcRYGate(q, -1.5707893247765672, 8);
  sqcRZGate(q, 1.5490816271206667, 8);
  sqcRYGate(q, 3.064798386072058, 9);
  sqcRZGate(q, 1.5685781307631033, 9);
  sqcRYGate(q, -1.5726619050252273, 10);
  sqcRZGate(q, 3.1414749744039474, 10);
  sqcRYGate(q, -3.468819879038037e-05, 11);
  sqcRZGate(q, 0.8719553081570915, 11);
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
  sqcRYGate(q, 1.0202223163865476, 0);
  sqcRZGate(q, 2.291486208932583, 0);
  sqcRYGate(q, 3.14158223261516, 1);
  sqcRZGate(q, 3.0652561304224504, 1);
  sqcRYGate(q, -3.770344413567273e-05, 2);
  sqcRZGate(q, -1.8449089117813902, 2);
  sqcRYGate(q, -1.5707579095290223, 3);
  sqcRZGate(q, -0.19068813278809263, 3);
  sqcRYGate(q, 3.1415787507847477, 4);
  sqcRZGate(q, -3.0732828181090524, 4);
  sqcRYGate(q, -1.5707755494043867, 5);
  sqcRZGate(q, -0.19022498857206932, 5);
  sqcRYGate(q, -1.534897137770879, 6);
  sqcRZGate(q, -0.8497408574287134, 6);
  sqcRYGate(q, -3.1415749979857424, 7);
  sqcRZGate(q, 1.3391971259718725, 7);
  sqcRYGate(q, -0.01703245440652079, 8);
  sqcRZGate(q, 2.313761030671542, 8);
  sqcRYGate(q, 1.5707873028642325, 9);
  sqcRZGate(q, -1.7610490197655935, 9);
  sqcRYGate(q, 1.5707967880869869, 10);
  sqcRZGate(q, 0.7215342621444139, 10);
  sqcRYGate(q, 5.402337828996905e-05, 11);
  sqcRZGate(q, -1.0559542798128503, 11);

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
