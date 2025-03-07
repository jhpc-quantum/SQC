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

  sqcRYGate(q, -0.1951523197967956, 0);
  sqcRYGate(q, 2.719708333860698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5230555038269803, 0);
  sqcRYGate(q, 2.1711528366919888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.458764104376247, 2);
  sqcRYGate(q, -1.841249433955526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2339768074923, 2);
  sqcRYGate(q, 1.3580631170073119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.742171399419293, 4);
  sqcRYGate(q, 2.0670311289724475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.848395150980867, 4);
  sqcRYGate(q, 0.3093493282395135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6062225159056496, 6);
  sqcRYGate(q, 1.1029688512853701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.528286474259996, 6);
  sqcRYGate(q, 1.8285015760350714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7009563072499243, 8);
  sqcRYGate(q, -1.5834577657718913, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8745021807229816, 8);
  sqcRYGate(q, -0.7473417029318759, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.26128953767061, 10);
  sqcRYGate(q, -1.2872519702083878, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2976809325829715, 10);
  sqcRYGate(q, -1.692482790089928, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6838463460345299, 1);
  sqcRYGate(q, -1.3476041425072331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0026822185882302563, 1);
  sqcRYGate(q, -0.5093482475524498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1351656126587275, 3);
  sqcRYGate(q, -1.6580184342299948, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.572001154315772, 3);
  sqcRYGate(q, 2.642452741936899, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9046277372099212, 5);
  sqcRYGate(q, 1.943285026008153, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.702023267411671, 5);
  sqcRYGate(q, -1.2432644491649407, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03938259998071203, 7);
  sqcRYGate(q, -0.8523702660073909, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.520670758644093, 7);
  sqcRYGate(q, 0.7284103854214191, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4523818484208153, 9);
  sqcRYGate(q, -1.559887749930036, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4595265950788194, 9);
  sqcRYGate(q, -1.2944866875551375, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6854004814861536, 0);
  sqcRYGate(q, 0.5802510170043829, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0956771155749956, 0);
  sqcRYGate(q, -2.9449514062747393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.02062388676456184, 2);
  sqcRYGate(q, 1.4488032963345243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.994952351676352, 2);
  sqcRYGate(q, 0.0009103276205826917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3354644242253886, 4);
  sqcRYGate(q, -1.570781667892316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5649357235915984, 4);
  sqcRYGate(q, 1.6465742057645738, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7169913315915615, 6);
  sqcRYGate(q, 1.521710912829995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5528064242716848, 6);
  sqcRYGate(q, 1.5658784768311902, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2763569735701665, 8);
  sqcRYGate(q, -0.04327079617762981, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5618587832445678, 8);
  sqcRYGate(q, 0.005508745911664156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.072614452354277, 10);
  sqcRYGate(q, -1.4187242541913108, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8834758130420838, 10);
  sqcRYGate(q, 1.6236484981577144, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.677439712789967, 1);
  sqcRYGate(q, -3.024474387696535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1210542496402462, 1);
  sqcRYGate(q, 1.3365708191336365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4704884006271612, 3);
  sqcRYGate(q, -1.4987498989955246, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4668298164305211, 3);
  sqcRYGate(q, 1.6336905049155517, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5508168615179958, 5);
  sqcRYGate(q, -1.576325596345578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0928290854272413, 5);
  sqcRYGate(q, 2.146736923823524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.984740977651415, 7);
  sqcRYGate(q, -0.29133256617796677, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5970058452714315, 7);
  sqcRYGate(q, -3.1395607568609707, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.56001527332206, 9);
  sqcRYGate(q, 2.055838396311609, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.134822905132987, 9);
  sqcRYGate(q, 2.8660732651602143, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.144221828177127, 0);
  sqcRYGate(q, 0.19677462518578728, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0003855401696332, 0);
  sqcRYGate(q, 1.8170582291841262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5712184414796184, 2);
  sqcRYGate(q, -1.4120927275374597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0005025593325295434, 2);
  sqcRYGate(q, -1.5718470608205388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5812667624018715, 4);
  sqcRYGate(q, -1.5688089904737925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.568495601657354, 4);
  sqcRYGate(q, -2.5821857121779277, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5705183786743477, 6);
  sqcRYGate(q, 2.168624597228077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.570798851415252, 6);
  sqcRYGate(q, 1.6016654067388023, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5711982517405851, 8);
  sqcRYGate(q, 1.5661059403114175, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5773086934043563, 8);
  sqcRYGate(q, 1.5720467467761692, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.591174401040126, 10);
  sqcRYGate(q, 2.381047063040726, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7137874029095164, 10);
  sqcRYGate(q, -1.5878960667618325, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8974064018141235, 1);
  sqcRYGate(q, -1.5712053736260172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.589221619223314, 1);
  sqcRYGate(q, -1.5721331679072046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4228165807574156, 3);
  sqcRYGate(q, 1.5719466528161892, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5607630912451738, 3);
  sqcRYGate(q, -1.5700520180160515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04780544461014813, 5);
  sqcRYGate(q, 1.5709224023980441, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6633336224804156, 5);
  sqcRYGate(q, 1.4094890595731935e-05, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5712197279296394, 7);
  sqcRYGate(q, -1.571606221015636, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5705970197192656, 7);
  sqcRYGate(q, 1.5717999265465172, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.953654176093287, 9);
  sqcRYGate(q, -1.6150973982680288, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.559509128165469, 9);
  sqcRYGate(q, -0.0003949924721524667, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.240426774924872, 0);
  sqcRYGate(q, -1.5706694042007574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.569992972249059, 0);
  sqcRYGate(q, 3.140034180522592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4219128540632466, 2);
  sqcRYGate(q, 1.5706050053089204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6140456607287502, 2);
  sqcRYGate(q, 1.5719105585369082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5711086997190584, 4);
  sqcRYGate(q, -0.046846640485473934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6082426851948979, 4);
  sqcRYGate(q, 1.5699577536906966, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5707030084560785, 6);
  sqcRYGate(q, -1.5188308708285776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.074540085640687, 6);
  sqcRYGate(q, 1.5693484728024032, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5745968256482366, 8);
  sqcRYGate(q, -2.9481521268608666, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5977239912558452, 8);
  sqcRYGate(q, 1.5705766077058267, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5894107280857686, 10);
  sqcRYGate(q, -2.1783093613106304, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0518980767253088, 10);
  sqcRYGate(q, 3.1414083250617466, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0587216576076504, 1);
  sqcRYGate(q, 0.2941775164665745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1415726300891205, 1);
  sqcRYGate(q, -0.000788074783853298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.677952510882896, 3);
  sqcRYGate(q, 1.5878132326255985, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5710983254610984, 3);
  sqcRYGate(q, 3.141303174426167, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5703403454879303, 5);
  sqcRYGate(q, 1.5695014651540475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11303543517707484, 5);
  sqcRYGate(q, 1.5713404512514826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4969193008143344, 7);
  sqcRYGate(q, -1.57084339178693, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5578356595244276, 7);
  sqcRYGate(q, 0.013650187457837071, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.570561477503672, 9);
  sqcRYGate(q, 2.551319120094887, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.552557342806998, 9);
  sqcRYGate(q, 1.5708105112800874, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.934075842070694, 0);
  sqcRYGate(q, -1.255270822025379, 1);
  sqcRYGate(q, 1.8650155719570574, 2);
  sqcRYGate(q, 1.4635875725679943, 3);
  sqcRYGate(q, 9.539023085203269e-06, 4);
  sqcRYGate(q, -1.5705361489407519, 5);
  sqcRYGate(q, -3.1403063491848187, 6);
  sqcRYGate(q, -1.5934048954585778, 7);
  sqcRYGate(q, -3.1415538145008486, 8);
  sqcRYGate(q, 1.5919270094811655, 9);
  sqcRYGate(q, 0.0002271759165548559, 10);
  sqcRYGate(q, -2.7095480690083362, 11);

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
