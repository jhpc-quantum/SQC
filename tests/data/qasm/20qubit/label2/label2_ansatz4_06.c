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

  sqcRYGate(q, 0.017358111395185116, 0);
  sqcRZGate(q, -2.2599048820381924, 0);
  sqcRYGate(q, 0.016984169181403056, 1);
  sqcRZGate(q, -1.0457924725032877, 1);
  sqcRYGate(q, 1.5229256022667625, 2);
  sqcRZGate(q, 3.1032619843942792, 2);
  sqcRYGate(q, -1.5669982276429455, 3);
  sqcRZGate(q, -2.350436851611973, 3);
  sqcRYGate(q, -2.7938861838272544e-05, 4);
  sqcRZGate(q, -2.6299726203644624, 4);
  sqcRYGate(q, -3.1415805128009002, 5);
  sqcRZGate(q, 2.9906588840006862, 5);
  sqcRYGate(q, -3.140612957626418, 6);
  sqcRZGate(q, -1.9836722469845594, 6);
  sqcRYGate(q, 3.094954150560976, 7);
  sqcRZGate(q, -3.1166281583150344, 7);
  sqcRYGate(q, -1.546294710215661, 8);
  sqcRZGate(q, 3.138720225934207, 8);
  sqcRYGate(q, -1.5680687709640546, 9);
  sqcRZGate(q, 3.1412618656369298, 9);
  sqcRYGate(q, 3.141391029966009, 10);
  sqcRZGate(q, 0.574452054388395, 10);
  sqcRYGate(q, -0.00032537999544195916, 11);
  sqcRZGate(q, -1.1670981744533793, 11);
  sqcRYGate(q, -3.141288954727871, 12);
  sqcRZGate(q, 0.2980741775783704, 12);
  sqcRYGate(q, -3.1338164722686916, 13);
  sqcRZGate(q, 0.0273531113910126, 13);
  sqcRYGate(q, -1.5707419718639832, 14);
  sqcRZGate(q, 2.719789236309868, 14);
  sqcRYGate(q, 1.5707584855633254, 15);
  sqcRZGate(q, 2.9833688777629273, 15);
  sqcRYGate(q, 3.1409614581143623, 16);
  sqcRZGate(q, -0.7557016686059732, 16);
  sqcRYGate(q, 0.014008412796170242, 17);
  sqcRZGate(q, 1.6050835047663483, 17);
  sqcRYGate(q, -3.1394765344137947, 18);
  sqcRZGate(q, 0.6067458594521489, 18);
  sqcRYGate(q, 0.00021473562587140776, 19);
  sqcRZGate(q, 2.646670258579353, 19);
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
  sqcRYGate(q, 3.1377180818247496, 0);
  sqcRZGate(q, -2.0449010997276504, 0);
  sqcRYGate(q, -2.4242093653035024, 1);
  sqcRZGate(q, -0.06050739408074347, 1);
  sqcRYGate(q, 1.5724037946357798, 2);
  sqcRZGate(q, -0.7948074048072201, 2);
  sqcRYGate(q, -3.1298022200473814, 3);
  sqcRZGate(q, 0.7183955953410169, 3);
  sqcRYGate(q, -3.0943307468054493, 4);
  sqcRZGate(q, -0.4388845438744083, 4);
  sqcRYGate(q, 3.1414430626898002, 5);
  sqcRZGate(q, -1.1582574448439966, 5);
  sqcRYGate(q, -1.5830298183750706, 6);
  sqcRZGate(q, -1.276147663695304, 6);
  sqcRYGate(q, -0.6974873778002557, 7);
  sqcRZGate(q, -0.006664471309594688, 7);
  sqcRYGate(q, 0.11450554594994546, 8);
  sqcRZGate(q, 1.8028850255759217, 8);
  sqcRYGate(q, 1.4624332954469828, 9);
  sqcRZGate(q, 1.0301117265761532, 9);
  sqcRYGate(q, 2.7606288832599635, 10);
  sqcRZGate(q, -2.2245143593646457, 10);
  sqcRYGate(q, -1.9968992215656183, 11);
  sqcRZGate(q, 1.9081495474704784, 11);
  sqcRYGate(q, -1.5695922003502858, 12);
  sqcRZGate(q, -1.5247963249786318, 12);
  sqcRYGate(q, 1.7270110784927102, 13);
  sqcRZGate(q, 2.057430757215638, 13);
  sqcRYGate(q, 0.3630594432619851, 14);
  sqcRZGate(q, -2.7571542823829245, 14);
  sqcRYGate(q, 1.9443430293598898, 15);
  sqcRZGate(q, 0.023815098564891106, 15);
  sqcRYGate(q, 1.5689574963644546, 16);
  sqcRZGate(q, -2.48397648929761, 16);
  sqcRYGate(q, -1.5747960119335902, 17);
  sqcRZGate(q, 1.5335121088008725, 17);
  sqcRYGate(q, 0.005943699714447526, 18);
  sqcRZGate(q, -1.1585492941581395, 18);
  sqcRYGate(q, -0.00033581379048966756, 19);
  sqcRZGate(q, -0.48859068439176306, 19);
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
  sqcRYGate(q, 1.5677648964426596, 0);
  sqcRZGate(q, 3.0981858373152993, 0);
  sqcRYGate(q, 2.3314001128024304, 1);
  sqcRZGate(q, -2.005625545431777, 1);
  sqcRYGate(q, 3.1363979836079694, 2);
  sqcRZGate(q, -1.1562490537629517, 2);
  sqcRYGate(q, 0.004408380083577901, 3);
  sqcRZGate(q, 0.2645751684825868, 3);
  sqcRYGate(q, 0.001735173516074028, 4);
  sqcRZGate(q, 1.2826798164413655, 4);
  sqcRYGate(q, 3.0776173160826716, 5);
  sqcRZGate(q, 0.8339521013239735, 5);
  sqcRYGate(q, 0.008560643683241055, 6);
  sqcRZGate(q, -1.5043713408637716, 6);
  sqcRYGate(q, -1.5717060092426396, 7);
  sqcRZGate(q, -1.6171874814260103, 7);
  sqcRYGate(q, 3.1400551589258874, 8);
  sqcRZGate(q, 0.9504455798211726, 8);
  sqcRYGate(q, 0.0018052701319446708, 9);
  sqcRZGate(q, 1.238325785845578, 9);
  sqcRYGate(q, -0.0006588730565528778, 10);
  sqcRZGate(q, -0.1133912572566896, 10);
  sqcRYGate(q, -0.011148973924998806, 11);
  sqcRZGate(q, 2.2618460812991072, 11);
  sqcRYGate(q, 3.1399829356114184, 12);
  sqcRZGate(q, 0.040972337037096906, 12);
  sqcRYGate(q, 0.010266763888625796, 13);
  sqcRZGate(q, 2.824354806865507, 13);
  sqcRYGate(q, -1.3900064719464809, 14);
  sqcRZGate(q, 1.4143385498277308, 14);
  sqcRYGate(q, 1.8116624659782403, 15);
  sqcRZGate(q, -1.7255324382630977, 15);
  sqcRYGate(q, 2.185644412505122, 16);
  sqcRZGate(q, -3.0519698805105087, 16);
  sqcRYGate(q, -0.9459621660331765, 17);
  sqcRZGate(q, -2.228455164102602, 17);
  sqcRYGate(q, 1.5714746104804656, 18);
  sqcRZGate(q, -3.0125162383184354, 18);
  sqcRYGate(q, 1.569139426297968, 19);
  sqcRZGate(q, 1.4981502704959309, 19);
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
  sqcRYGate(q, 1.583730242693215, 0);
  sqcRZGate(q, 2.8123683127783403, 0);
  sqcRYGate(q, -0.03817824246202268, 1);
  sqcRZGate(q, -0.8321156697647247, 1);
  sqcRYGate(q, 2.998088780169105, 2);
  sqcRZGate(q, -1.0284605733958394, 2);
  sqcRYGate(q, -1.7040797898276336, 3);
  sqcRZGate(q, -1.6021247111340688, 3);
  sqcRYGate(q, -3.13251942594895, 4);
  sqcRZGate(q, 0.9533620736717326, 4);
  sqcRYGate(q, -1.5793686593584653, 5);
  sqcRZGate(q, -1.8100853417855687, 5);
  sqcRYGate(q, 0.13523731976990444, 6);
  sqcRZGate(q, 1.8648817744316872, 6);
  sqcRYGate(q, 1.5267805624932853, 7);
  sqcRZGate(q, 1.0215277954063682, 7);
  sqcRYGate(q, -1.0463051999352029, 8);
  sqcRZGate(q, -0.5933473275558305, 8);
  sqcRYGate(q, 1.3832370198758899, 9);
  sqcRZGate(q, 2.389838869735553, 9);
  sqcRYGate(q, 1.2984017288197807, 10);
  sqcRZGate(q, 2.8772354771787367, 10);
  sqcRYGate(q, 2.398230752904816, 11);
  sqcRZGate(q, 2.9450710586595186, 11);
  sqcRYGate(q, -0.7278965039806751, 12);
  sqcRZGate(q, 1.5661347420592688, 12);
  sqcRYGate(q, 0.7403003090409784, 13);
  sqcRZGate(q, -1.8027389603521504, 13);
  sqcRYGate(q, 1.5455842734933032, 14);
  sqcRZGate(q, 3.073716574292998, 14);
  sqcRYGate(q, 1.5633444515399262, 15);
  sqcRZGate(q, -0.022370034801762403, 15);
  sqcRYGate(q, 1.5687374111630672, 16);
  sqcRZGate(q, 0.22027423573821636, 16);
  sqcRYGate(q, -1.5749029814550284, 17);
  sqcRZGate(q, -0.1412102020430872, 17);
  sqcRYGate(q, -0.051057965760120005, 18);
  sqcRZGate(q, 0.25463845949380204, 18);
  sqcRYGate(q, 1.5264801687253167, 19);
  sqcRZGate(q, -1.520342315521586, 19);
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
  sqcRYGate(q, 1.5155613252859537, 0);
  sqcRZGate(q, 2.6225325869599447, 0);
  sqcRYGate(q, 1.6308165530080228, 1);
  sqcRZGate(q, 2.5271804130928945, 1);
  sqcRYGate(q, 0.05107390307504467, 2);
  sqcRZGate(q, 1.7457531034821088, 2);
  sqcRYGate(q, 2.969790430634533, 3);
  sqcRZGate(q, 2.2728189839590653, 3);
  sqcRYGate(q, -3.1382632858885073, 4);
  sqcRZGate(q, 0.8849241667897798, 4);
  sqcRYGate(q, -3.1414113969130106, 5);
  sqcRZGate(q, 3.128140537766008, 5);
  sqcRYGate(q, -0.00014233407781816257, 6);
  sqcRZGate(q, -3.0074309287603893, 6);
  sqcRYGate(q, 0.0034063585994354995, 7);
  sqcRZGate(q, -1.9206728453569568, 7);
  sqcRYGate(q, -2.9860143298096116, 8);
  sqcRZGate(q, 1.3026977362745198, 8);
  sqcRYGate(q, 0.10404589927646933, 9);
  sqcRZGate(q, 2.9413040581721743, 9);
  sqcRYGate(q, -3.0399334372328757, 10);
  sqcRZGate(q, 0.005662985421998279, 10);
  sqcRYGate(q, -2.913102394902427, 11);
  sqcRZGate(q, -1.120316189705009, 11);
  sqcRYGate(q, 1.578351819661239, 12);
  sqcRZGate(q, 0.3769680684268444, 12);
  sqcRYGate(q, -1.5639979641322639, 13);
  sqcRZGate(q, 2.0816016689667975, 13);
  sqcRYGate(q, 1.5795064431106944, 14);
  sqcRZGate(q, -1.3690476034549441, 14);
  sqcRYGate(q, -1.5574432794391067, 15);
  sqcRZGate(q, 1.7588016226098746, 15);
  sqcRYGate(q, -3.1267012933483183, 16);
  sqcRZGate(q, -1.388155453985193, 16);
  sqcRYGate(q, -3.1159470106594003, 17);
  sqcRZGate(q, -1.7059905743587898, 17);
  sqcRYGate(q, 0.000981782573964196, 18);
  sqcRZGate(q, -1.8013923942441838, 18);
  sqcRYGate(q, -1.57291601326976, 19);
  sqcRZGate(q, 1.5196158823923387, 19);
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
  sqcRYGate(q, 0.11472958955831736, 0);
  sqcRZGate(q, -2.153375704549827, 0);
  sqcRYGate(q, -0.1154871730020903, 1);
  sqcRZGate(q, 2.4104763980273543, 1);
  sqcRYGate(q, 0.03842798186443819, 2);
  sqcRZGate(q, 2.0942001030405013, 2);
  sqcRYGate(q, -2.824934409634711, 3);
  sqcRZGate(q, 2.28789273492627, 3);
  sqcRYGate(q, 1.5619795919172752, 4);
  sqcRZGate(q, -1.9722262622976174, 4);
  sqcRYGate(q, 3.1352712409568078, 5);
  sqcRZGate(q, 2.527947250227319, 5);
  sqcRYGate(q, -1.6141044889431946, 6);
  sqcRZGate(q, -0.11417238278778559, 6);
  sqcRYGate(q, 0.7902219708236702, 7);
  sqcRZGate(q, 1.9717945223990085, 7);
  sqcRYGate(q, -2.7900111075110163, 8);
  sqcRZGate(q, -0.8521827769584671, 8);
  sqcRYGate(q, 0.36654741071993513, 9);
  sqcRZGate(q, -1.8616688645834323, 9);
  sqcRYGate(q, 1.57041240869375, 10);
  sqcRZGate(q, 1.5912319051579455, 10);
  sqcRYGate(q, -1.583250182599235, 11);
  sqcRZGate(q, -0.18947801278220577, 11);
  sqcRYGate(q, 3.0904513833873795, 12);
  sqcRZGate(q, 1.8902430690879353, 12);
  sqcRYGate(q, 3.1405832492979457, 13);
  sqcRZGate(q, -2.4199511239590286, 13);
  sqcRYGate(q, 0.37803925207037903, 14);
  sqcRZGate(q, -1.770873791421991, 14);
  sqcRYGate(q, 0.36791563326337334, 15);
  sqcRZGate(q, 0.5815913424247569, 15);
  sqcRYGate(q, -1.5923275491914008, 16);
  sqcRZGate(q, -2.197350891948348, 16);
  sqcRYGate(q, 1.6026861978555897, 17);
  sqcRZGate(q, 2.4730339268923194, 17);
  sqcRYGate(q, 0.005486498558682138, 18);
  sqcRZGate(q, -0.7824304233151523, 18);
  sqcRYGate(q, 1.5730946442179805, 19);
  sqcRZGate(q, 1.7596947006643218, 19);
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
  sqcRYGate(q, 1.0081299746513857, 0);
  sqcRZGate(q, -0.49889869591198555, 0);
  sqcRYGate(q, -1.0922905767599893, 1);
  sqcRZGate(q, 0.9839481840521014, 1);
  sqcRYGate(q, 0.00043055426727586934, 2);
  sqcRZGate(q, -0.23061391543713206, 2);
  sqcRYGate(q, 1.5698846547002925, 3);
  sqcRZGate(q, -1.8969376527716766, 3);
  sqcRYGate(q, -3.1282414257359927, 4);
  sqcRZGate(q, 1.3260662538605903, 4);
  sqcRYGate(q, 0.004110962353155223, 5);
  sqcRZGate(q, -2.2075341930455, 5);
  sqcRYGate(q, 3.1104136207102377, 6);
  sqcRZGate(q, 2.9518239301749807, 6);
  sqcRYGate(q, 0.016787551774307907, 7);
  sqcRZGate(q, -0.827364711494254, 7);
  sqcRYGate(q, -1.5815034603321032, 8);
  sqcRZGate(q, 1.6169580647670585, 8);
  sqcRYGate(q, 1.5287076455602753, 9);
  sqcRZGate(q, 1.4941563441328178, 9);
  sqcRYGate(q, 0.3374519809407896, 10);
  sqcRZGate(q, 2.876697720682555, 10);
  sqcRYGate(q, 0.000694022570853825, 11);
  sqcRZGate(q, 1.0237641374091042, 11);
  sqcRYGate(q, -0.1531761816873578, 12);
  sqcRZGate(q, -1.666221441611046, 12);
  sqcRYGate(q, -1.3467046977958814, 13);
  sqcRZGate(q, 1.1818011628389569, 13);
  sqcRYGate(q, 0.7375937952649014, 14);
  sqcRZGate(q, 2.8898772627005513, 14);
  sqcRYGate(q, -0.0416598411369673, 15);
  sqcRZGate(q, -0.7921725434374421, 15);
  sqcRYGate(q, -1.5350459668572443, 16);
  sqcRZGate(q, -3.0612150811304275, 16);
  sqcRYGate(q, -1.6091241221845536, 17);
  sqcRZGate(q, -0.4372937941257688, 17);
  sqcRYGate(q, 1.421757154496973, 18);
  sqcRZGate(q, 1.4017064074994778, 18);
  sqcRYGate(q, 2.509816120345527, 19);
  sqcRZGate(q, -2.7928177594804082, 19);
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
  sqcRYGate(q, 0.0009802477542628241, 0);
  sqcRZGate(q, 1.5320258383143628, 0);
  sqcRYGate(q, 3.1415049272575017, 1);
  sqcRZGate(q, -1.1446922653276213, 1);
  sqcRYGate(q, 0.00036760422471954023, 2);
  sqcRZGate(q, 1.3723927859703449, 2);
  sqcRYGate(q, 0.002094065373833054, 3);
  sqcRZGate(q, -1.5862735218562478, 3);
  sqcRYGate(q, 3.061379308265453, 4);
  sqcRZGate(q, 1.2758279413915705, 4);
  sqcRYGate(q, -1.5579996714342101, 5);
  sqcRZGate(q, -2.4909118531902426, 5);
  sqcRYGate(q, -0.018718422382190347, 6);
  sqcRZGate(q, 0.02315778575345505, 6);
  sqcRYGate(q, -0.020269402116131374, 7);
  sqcRZGate(q, 0.542255484524027, 7);
  sqcRYGate(q, 2.6294000685123287, 8);
  sqcRZGate(q, 2.542275298866916, 8);
  sqcRYGate(q, 2.7321768248523695, 9);
  sqcRZGate(q, 2.803825175500176, 9);
  sqcRYGate(q, 0.001312837184771709, 10);
  sqcRZGate(q, 0.23092683581297296, 10);
  sqcRYGate(q, 0.049954719912990164, 11);
  sqcRZGate(q, 3.135963625273294, 11);
  sqcRYGate(q, 0.007237529363408768, 12);
  sqcRZGate(q, -1.4147342665175882, 12);
  sqcRYGate(q, -0.013664715750016931, 13);
  sqcRZGate(q, -1.9667449221522055, 13);
  sqcRYGate(q, 0.0006100048951273461, 14);
  sqcRZGate(q, -2.8770769588727076, 14);
  sqcRYGate(q, -3.139198642270692, 15);
  sqcRZGate(q, 2.1361668367789934, 15);
  sqcRYGate(q, -3.137940305884082, 16);
  sqcRZGate(q, 0.07504640003357614, 16);
  sqcRYGate(q, 3.1363778687092503, 17);
  sqcRZGate(q, -0.019630794962738563, 17);
  sqcRYGate(q, 3.1415508659641787, 18);
  sqcRZGate(q, -2.114736675720762, 18);
  sqcRYGate(q, 1.499601216957661, 19);
  sqcRZGate(q, 0.8595512836808901, 19);
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
  sqcRYGate(q, -1.6399280906098284, 0);
  sqcRZGate(q, -1.274217996011819, 0);
  sqcRYGate(q, 0.011175973999727695, 1);
  sqcRZGate(q, 1.9139735058322325, 1);
  sqcRYGate(q, 1.5850979081409762, 2);
  sqcRZGate(q, 0.4464393273598901, 2);
  sqcRYGate(q, -3.1413781128394116, 3);
  sqcRZGate(q, -1.9084084188590325, 3);
  sqcRYGate(q, 3.140724418068239, 4);
  sqcRZGate(q, -0.4561863079078345, 4);
  sqcRYGate(q, -3.1386083937796725, 5);
  sqcRZGate(q, -2.494034964609405, 5);
  sqcRYGate(q, 2.355102393383967, 6);
  sqcRZGate(q, 1.5634936026757948, 6);
  sqcRYGate(q, 0.7764485616757915, 7);
  sqcRZGate(q, 1.5645574347270097, 7);
  sqcRYGate(q, -3.1231804104463463, 8);
  sqcRZGate(q, 2.542452263628847, 8);
  sqcRYGate(q, 0.007743218895854831, 9);
  sqcRZGate(q, -2.832241879180071, 9);
  sqcRYGate(q, 1.7203518123939856, 10);
  sqcRZGate(q, 0.0013682283757789904, 10);
  sqcRYGate(q, 1.5626920919020597, 11);
  sqcRZGate(q, -0.7941607078588455, 11);
  sqcRYGate(q, -1.4294928993634084, 12);
  sqcRZGate(q, 1.365764032482427, 12);
  sqcRYGate(q, 0.3145963801097196, 13);
  sqcRZGate(q, 0.12179821028510851, 13);
  sqcRYGate(q, -2.4125016679006746, 14);
  sqcRZGate(q, -0.2755747871098366, 14);
  sqcRYGate(q, -0.030206528224886273, 15);
  sqcRZGate(q, 2.689686948228866, 15);
  sqcRYGate(q, -0.0410577474550399, 16);
  sqcRZGate(q, -3.06813829720151, 16);
  sqcRYGate(q, 0.004166544760308475, 17);
  sqcRZGate(q, 2.552546962403214, 17);
  sqcRYGate(q, -0.016340480408962854, 18);
  sqcRZGate(q, -1.3358717414632073, 18);
  sqcRYGate(q, 3.1181881182607096, 19);
  sqcRZGate(q, 0.8629768449283342, 19);
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
  sqcRYGate(q, 0.005726889282756101, 0);
  sqcRZGate(q, 1.6054865107182827, 0);
  sqcRYGate(q, -0.004154109079316202, 1);
  sqcRZGate(q, -1.629003442082885, 1);
  sqcRYGate(q, 3.1370891482331817, 2);
  sqcRZGate(q, -1.534296387251958, 2);
  sqcRYGate(q, -1.571855505304463, 3);
  sqcRZGate(q, -0.4140391972736843, 3);
  sqcRYGate(q, -1.5736758098956674, 4);
  sqcRZGate(q, -2.004223020596486, 4);
  sqcRYGate(q, -1.5737175746971734, 5);
  sqcRZGate(q, -1.9877696554799027, 5);
  sqcRYGate(q, -2.3695857491085857, 6);
  sqcRZGate(q, -2.0683128454914983, 6);
  sqcRYGate(q, 2.360865608541173, 7);
  sqcRZGate(q, 1.0735928151856795, 7);
  sqcRYGate(q, -1.5629184065588932, 8);
  sqcRZGate(q, 2.6296223207969818, 8);
  sqcRYGate(q, 1.563514790671797, 9);
  sqcRZGate(q, -0.5123751722976104, 9);
  sqcRYGate(q, -1.5813855344640997, 10);
  sqcRZGate(q, -0.5103312267416449, 10);
  sqcRYGate(q, -3.122830058942453, 11);
  sqcRZGate(q, 1.8375562912216246, 11);
  sqcRYGate(q, -0.029193435880515928, 12);
  sqcRZGate(q, -1.8991796739111655, 12);
  sqcRYGate(q, 0.031179358031167975, 13);
  sqcRZGate(q, 1.686900149864141, 13);
  sqcRYGate(q, -1.548220934100925, 14);
  sqcRZGate(q, 1.0422784516747035, 14);
  sqcRYGate(q, -1.5479610660432437, 15);
  sqcRZGate(q, 1.0411244500849257, 15);
  sqcRYGate(q, -1.5920763338058253, 16);
  sqcRZGate(q, -2.1004657912490785, 16);
  sqcRYGate(q, -1.5496800908087371, 17);
  sqcRZGate(q, 1.0383864636815705, 17);
  sqcRYGate(q, 0.1946581028430554, 18);
  sqcRZGate(q, -0.41440948966493435, 18);
  sqcRYGate(q, -1.6899004116416751, 19);
  sqcRZGate(q, 2.7268776890369213, 19);

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
