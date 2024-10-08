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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.6032072812075406, 0);
  sqcRYGate(q, 0.1620775296174939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6715994044231217, 0);
  sqcRYGate(q, 0.45367384966939106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8152074632945703, 1);
  sqcRYGate(q, -0.9493511237511357, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6548119590252687, 1);
  sqcRYGate(q, 1.6342348621183707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.405236849189943, 2);
  sqcRYGate(q, -0.712369871679844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22419398499103316, 2);
  sqcRYGate(q, -2.197588260541611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6417263244217004, 3);
  sqcRYGate(q, -2.1340585394152063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13875298517605206, 3);
  sqcRYGate(q, -1.3448740752180424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4146799595703645, 4);
  sqcRYGate(q, -1.5911637121548656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7491241893298675, 4);
  sqcRYGate(q, 1.5838556616006505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.415474865188469, 5);
  sqcRYGate(q, -0.018387321915794095, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0430420480483447, 5);
  sqcRYGate(q, -0.23626318531382554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.847411365158411, 6);
  sqcRYGate(q, -0.020699342452140876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5693640396763378, 6);
  sqcRYGate(q, -3.129801854101943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6361741545134274, 0);
  sqcRYGate(q, 1.499596507830855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.126953978910274, 0);
  sqcRYGate(q, -0.48339362003491093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3839007853145101, 1);
  sqcRYGate(q, 2.718869618700502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2732904074048622, 1);
  sqcRYGate(q, 1.1898790948476297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6771751734161209, 2);
  sqcRYGate(q, 2.318292977120592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8206690507747574, 2);
  sqcRYGate(q, 2.043681837981109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3941366754514326, 3);
  sqcRYGate(q, 3.121241627483334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5717219469462407, 3);
  sqcRYGate(q, -1.5897842657033274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0717239845352395, 4);
  sqcRYGate(q, 3.0733311449936336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.554991481875831, 4);
  sqcRYGate(q, 1.6459681935441655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5677320051539017, 5);
  sqcRYGate(q, 2.3397397668743207, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6510535777771195, 5);
  sqcRYGate(q, -0.9161870767904308, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5827364363143719, 6);
  sqcRYGate(q, -1.0139910519700044, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.019331361482448434, 6);
  sqcRYGate(q, 1.6003137109256624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6567257709933321, 0);
  sqcRYGate(q, -2.363482908163366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5048476100970423, 0);
  sqcRYGate(q, 2.2140501774919183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.076913174124096, 1);
  sqcRYGate(q, -1.5818772621078354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11536962563093667, 1);
  sqcRYGate(q, 1.4745808509194225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5228994670204931, 2);
  sqcRYGate(q, -1.5962633939213435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5498830493686322, 2);
  sqcRYGate(q, -3.070114152047213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3691474572516326, 3);
  sqcRYGate(q, -1.5832764811092008, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2598622453096775, 3);
  sqcRYGate(q, -0.020751048496596702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.019611939229783108, 4);
  sqcRYGate(q, -1.5738157105040789, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6371505745389305, 4);
  sqcRYGate(q, -1.6291841175553319, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1223711636594356, 5);
  sqcRYGate(q, -1.5636844862112307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4914440184207869, 5);
  sqcRYGate(q, 0.25113359721744904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6758383036087048, 6);
  sqcRYGate(q, 1.3397160589585217, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.761458393777506, 6);
  sqcRYGate(q, 0.017529653220975085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2912522876326293, 0);
  sqcRYGate(q, 0.06174633013916875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0115056741403414, 0);
  sqcRYGate(q, -2.446960221260345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38259505173362335, 1);
  sqcRYGate(q, -0.5625536880614508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.64541363125781, 1);
  sqcRYGate(q, -0.02738783731889444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0941456957562807, 2);
  sqcRYGate(q, 1.496672216426681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.131079980651367, 2);
  sqcRYGate(q, -0.6386909217375536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0297983587805444, 3);
  sqcRYGate(q, 1.8097245890270452, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5064401794851434, 3);
  sqcRYGate(q, 2.085009072503947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7444254419680503, 4);
  sqcRYGate(q, 0.2965214619692178, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.560490995420765, 4);
  sqcRYGate(q, -2.915988251297507, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08011442292349358, 5);
  sqcRYGate(q, 0.6038556110586146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.007159322657473766, 5);
  sqcRYGate(q, -0.6298625922630771, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.127684569009768, 6);
  sqcRYGate(q, 0.8771400800580893, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.018020730274287, 6);
  sqcRYGate(q, -1.5089565050690537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.272576608129433, 0);
  sqcRYGate(q, -2.8015542674403946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1414035442499837, 0);
  sqcRYGate(q, 1.9322813829705305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.374147723837763, 1);
  sqcRYGate(q, 1.892790981256077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2404237529601664, 1);
  sqcRYGate(q, 1.0530122205343961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4125822573072897, 2);
  sqcRYGate(q, 2.7208032438254577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.004747654058921945, 2);
  sqcRYGate(q, 3.1401013567539806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.827756453925445, 3);
  sqcRYGate(q, 2.9018753645377804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5084764847601295, 3);
  sqcRYGate(q, -2.0583859342732636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03339039951994722, 4);
  sqcRYGate(q, 1.2808916033438251, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6086289271805856, 4);
  sqcRYGate(q, 1.5726087237734876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5710523925379163, 5);
  sqcRYGate(q, 0.08148421188523879, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01247396226849948, 5);
  sqcRYGate(q, -3.038201415595676, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.27122681073961985, 6);
  sqcRYGate(q, 1.1750430755680537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9173420381441244, 6);
  sqcRYGate(q, 2.3899648711027055, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9015122344762445, 0);
  sqcRYGate(q, 2.0538421959638553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.130427998934363, 0);
  sqcRYGate(q, -0.13117904624106838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24104973509098546, 1);
  sqcRYGate(q, 0.02564201683008438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.098618238330942, 1);
  sqcRYGate(q, -2.7893537935977064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1631464640284364, 2);
  sqcRYGate(q, 1.3468850997113613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5703456577988553, 2);
  sqcRYGate(q, -1.5748671130696157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.009610984899353525, 3);
  sqcRYGate(q, 0.030949590443672292, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5662226355046422, 3);
  sqcRYGate(q, 2.874937348237538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1401442719744455, 4);
  sqcRYGate(q, 0.27042769385483467, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.004461972421903746, 4);
  sqcRYGate(q, 1.5663822758469401, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7107179750877952, 5);
  sqcRYGate(q, 0.5798769873818207, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1315284747235945, 5);
  sqcRYGate(q, 0.0054826438460970905, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.13363313737857507, 6);
  sqcRYGate(q, -1.5481450081101846, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.969950878156041, 6);
  sqcRYGate(q, -0.9317090828951463, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7632871799579704, 0);
  sqcRYGate(q, -2.0477245857372983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5685457897852144, 0);
  sqcRYGate(q, -3.03674150217685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7530982386268277, 1);
  sqcRYGate(q, 0.48157745568009713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5757070486437685, 1);
  sqcRYGate(q, 0.0014160127482891385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5727778670907386, 2);
  sqcRYGate(q, 1.5626096381939147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5410027229961605, 2);
  sqcRYGate(q, 1.565209205830354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3262329855725268, 3);
  sqcRYGate(q, -1.6577899372105307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6386880566679434, 3);
  sqcRYGate(q, 0.004148711034656082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3456496429522522, 4);
  sqcRYGate(q, 0.9097623725850463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5869689340013924, 4);
  sqcRYGate(q, -3.1394063258126796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0014309962943458274, 5);
  sqcRYGate(q, -2.6620212090122553, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.568855789734779, 5);
  sqcRYGate(q, -1.5819632457300212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.139209038830963, 6);
  sqcRYGate(q, 2.312118273569701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5711218547541863, 6);
  sqcRYGate(q, -1.583014971511947, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0161186794499475, 0);
  sqcRYGate(q, -1.1917346575787893, 1);
  sqcRYGate(q, -0.023789959480280915, 2);
  sqcRYGate(q, -1.2423885106688335, 3);
  sqcRYGate(q, -0.3493929431585854, 4);
  sqcRYGate(q, 1.5663808209648016, 5);
  sqcRYGate(q, -1.561970708083197, 6);
  sqcRYGate(q, -3.1392568110882006, 7);

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
