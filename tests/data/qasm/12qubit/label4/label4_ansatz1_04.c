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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.1413225742971296, 0);
  sqcRZGate(q, 1.9802607836525095, 0);
  sqcRYGate(q, 1.5421196559484651, 1);
  sqcRZGate(q, -1.6754148000061013, 1);
  sqcRYGate(q, -3.122401742171442, 2);
  sqcRZGate(q, -0.8186946020324735, 2);
  sqcRYGate(q, -1.5401839739585117, 3);
  sqcRZGate(q, -1.6283184036169587, 3);
  sqcRYGate(q, -0.0002573211138612308, 4);
  sqcRZGate(q, 1.867212662542337, 4);
  sqcRYGate(q, -1.6590055293848867, 5);
  sqcRZGate(q, 1.5323643344061602, 5);
  sqcRYGate(q, -0.0006536713251197313, 6);
  sqcRZGate(q, -1.6612580981955936, 6);
  sqcRYGate(q, -1.5712307007409017, 7);
  sqcRZGate(q, -1.5709239645576716, 7);
  sqcRYGate(q, 1.675451565488504, 8);
  sqcRZGate(q, 1.8899504886058631, 8);
  sqcRYGate(q, 1.5706607519178366, 9);
  sqcRZGate(q, 2.7613218959806805, 9);
  sqcRYGate(q, -3.1413339159754767, 10);
  sqcRZGate(q, 2.1538619559759127, 10);
  sqcRYGate(q, -0.3903115716601624, 11);
  sqcRZGate(q, -0.2169846453168254, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.3431260133344254, 0);
  sqcRZGate(q, 0.5904997596577547, 0);
  sqcRYGate(q, 2.8437357236327543, 1);
  sqcRZGate(q, -0.10809323504356302, 1);
  sqcRYGate(q, -1.568425857441479, 2);
  sqcRZGate(q, 2.958349235213892, 2);
  sqcRYGate(q, 2.651188271805433, 3);
  sqcRZGate(q, 3.0762887152157816, 3);
  sqcRYGate(q, 1.8525097136545157, 4);
  sqcRZGate(q, 0.00018468290783556023, 4);
  sqcRYGate(q, -1.9807238784168497, 5);
  sqcRZGate(q, -1.6538920479307926, 5);
  sqcRYGate(q, 1.8779118056610002, 6);
  sqcRZGate(q, -0.00032444696640835595, 6);
  sqcRYGate(q, -1.48839094864351, 7);
  sqcRZGate(q, 1.5708358191502168, 7);
  sqcRYGate(q, -1.5708238044894909, 8);
  sqcRZGate(q, -9.689472832707936e-05, 8);
  sqcRYGate(q, -0.11650849602056024, 9);
  sqcRZGate(q, 1.9497042255459949, 9);
  sqcRYGate(q, 1.5708417785613493, 10);
  sqcRZGate(q, -1.1073065859336433, 10);
  sqcRYGate(q, -2.2218422474646022, 11);
  sqcRZGate(q, -0.08484001467202695, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.010851480444130217, 0);
  sqcRZGate(q, 2.457857210934351, 0);
  sqcRYGate(q, -1.5819669208907925, 1);
  sqcRZGate(q, 0.8150820793263165, 1);
  sqcRYGate(q, 3.1409282611071303, 2);
  sqcRZGate(q, -0.1884179207490351, 2);
  sqcRYGate(q, 0.07617395518375503, 3);
  sqcRZGate(q, 0.00015432700219886186, 3);
  sqcRYGate(q, -1.489322026831053, 4);
  sqcRZGate(q, -1.5711424275434294, 4);
  sqcRYGate(q, -4.942186959233652e-06, 5);
  sqcRZGate(q, -1.032550849891006, 5);
  sqcRYGate(q, -1.57028898117857, 6);
  sqcRZGate(q, -0.0014014841869034458, 6);
  sqcRYGate(q, 2.6607596889556873, 7);
  sqcRZGate(q, 1.570854883745635, 7);
  sqcRYGate(q, -1.560658064074092, 8);
  sqcRZGate(q, -0.613797506929645, 8);
  sqcRYGate(q, -2.6823471556931, 9);
  sqcRZGate(q, 1.6431546026575323, 9);
  sqcRYGate(q, -0.0021465117260230926, 10);
  sqcRZGate(q, -1.2396174391039887, 10);
  sqcRYGate(q, 1.57083583207445, 11);
  sqcRZGate(q, 0.7944135308940982, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9301074586376887, 0);
  sqcRZGate(q, -0.6431587736352605, 0);
  sqcRYGate(q, -3.139972626297686, 1);
  sqcRZGate(q, -1.1406678471131473, 1);
  sqcRYGate(q, -1.5699457122586369, 2);
  sqcRZGate(q, 1.5716734282935567, 2);
  sqcRYGate(q, -1.5699688228113564, 3);
  sqcRZGate(q, -0.00023310122555209031, 3);
  sqcRYGate(q, -1.571382675489371, 4);
  sqcRZGate(q, 1.2881783599461682, 4);
  sqcRYGate(q, -8.181454409950106e-06, 5);
  sqcRZGate(q, -0.5526315095988298, 5);
  sqcRYGate(q, -1.2132023277803876, 6);
  sqcRZGate(q, -3.140767366213164, 6);
  sqcRYGate(q, 1.5713404299213638, 7);
  sqcRZGate(q, 1.0271965590092746, 7);
  sqcRYGate(q, 3.1415874213813706, 8);
  sqcRZGate(q, -2.1842116486692422, 8);
  sqcRYGate(q, 1.5521569636152373, 9);
  sqcRZGate(q, 0.2571589000046294, 9);
  sqcRYGate(q, 1.3594835991842014, 10);
  sqcRZGate(q, 7.59799220812648e-06, 10);
  sqcRYGate(q, -1.3802745199754842, 11);
  sqcRZGate(q, -0.19584230740583142, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.014156605577291259, 0);
  sqcRZGate(q, 2.1218267225477447, 0);
  sqcRYGate(q, 0.004870430985633334, 1);
  sqcRZGate(q, -2.7567554527826212, 1);
  sqcRYGate(q, 1.5707612434824407, 2);
  sqcRZGate(q, 0.9965009065964417, 2);
  sqcRYGate(q, 2.842266061077876, 3);
  sqcRZGate(q, -0.00024674372918287446, 3);
  sqcRYGate(q, 1.9577181514024335, 4);
  sqcRZGate(q, 2.184137461928612, 4);
  sqcRYGate(q, -3.1006369491212897, 5);
  sqcRZGate(q, -0.001257848871051167, 5);
  sqcRYGate(q, 1.571954710553672, 6);
  sqcRZGate(q, -1.5713240301259077, 6);
  sqcRYGate(q, -3.140836588919014, 7);
  sqcRZGate(q, -0.3897587289440088, 7);
  sqcRYGate(q, 1.5698017322432793, 8);
  sqcRZGate(q, -2.831267164268424, 8);
  sqcRYGate(q, 0.8422039988195998, 9);
  sqcRZGate(q, 0.00031151560583880247, 9);
  sqcRYGate(q, -1.5704322435694185, 10);
  sqcRZGate(q, -1.5709500204298994, 10);
  sqcRYGate(q, 1.570726386248902, 11);
  sqcRZGate(q, -1.6323855282228434, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5912477288776579, 0);
  sqcRZGate(q, -2.9187377408169453, 0);
  sqcRYGate(q, 1.5723755142393463, 1);
  sqcRZGate(q, 0.6475990950489452, 1);
  sqcRYGate(q, 0.7972878562988464, 2);
  sqcRZGate(q, -0.1574030714553942, 2);
  sqcRYGate(q, 1.5729203503378768, 3);
  sqcRZGate(q, 2.1185675395395966, 3);
  sqcRYGate(q, 3.1412581753296975, 4);
  sqcRZGate(q, -0.9572675129370322, 4);
  sqcRYGate(q, -1.57265527642124, 5);
  sqcRZGate(q, 0.00013259484990512234, 5);
  sqcRYGate(q, 1.673591868959868, 6);
  sqcRZGate(q, -1.9973931569769308, 6);
  sqcRYGate(q, -0.7354394380005933, 7);
  sqcRZGate(q, 3.1160144898010484, 7);
  sqcRYGate(q, -1.6409506297238607, 8);
  sqcRZGate(q, -2.872579711132964, 8);
  sqcRYGate(q, -1.57083654801382, 9);
  sqcRZGate(q, -1.2278905225899472, 9);
  sqcRYGate(q, 1.5710536071910408, 10);
  sqcRZGate(q, 1.5710310096405733, 10);
  sqcRYGate(q, 0.00014421272672127117, 11);
  sqcRZGate(q, -1.5092587799577677, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.31550251781034544, 0);
  sqcRZGate(q, 0.7492181589840515, 0);
  sqcRYGate(q, -3.1405011798771825, 1);
  sqcRZGate(q, 1.475209123202683, 1);
  sqcRYGate(q, -0.00044989832015249914, 2);
  sqcRZGate(q, 0.5821147008134604, 2);
  sqcRYGate(q, -0.00016431304746715653, 3);
  sqcRZGate(q, -0.5479305690008118, 3);
  sqcRYGate(q, 0.28815259304624036, 4);
  sqcRZGate(q, -1.9693806340483242, 4);
  sqcRYGate(q, -0.37680591447163697, 5);
  sqcRZGate(q, 1.570796483057535, 5);
  sqcRYGate(q, -0.0004975463542835617, 6);
  sqcRZGate(q, -2.8462774599035887, 6);
  sqcRYGate(q, -0.007685993880392595, 7);
  sqcRZGate(q, -1.659011317704948, 7);
  sqcRYGate(q, 3.1401004481243167, 8);
  sqcRZGate(q, 2.0568705171445334, 8);
  sqcRYGate(q, 3.14148973368134, 9);
  sqcRZGate(q, -1.2278977667750735, 9);
  sqcRYGate(q, 1.5709288124657184, 10);
  sqcRZGate(q, 0.3491434168991221, 10);
  sqcRYGate(q, 1.5706456997982636, 11);
  sqcRZGate(q, 0.0007058779789902918, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1414834385496864, 0);
  sqcRZGate(q, -0.2884420595725681, 0);
  sqcRYGate(q, -0.0019513279587272175, 1);
  sqcRZGate(q, -1.1866771996665868, 1);
  sqcRYGate(q, 2.3213446405406213, 2);
  sqcRZGate(q, -2.309938527601795, 2);
  sqcRYGate(q, 1.5708052263030974, 3);
  sqcRZGate(q, -0.3612688109490003, 3);
  sqcRYGate(q, 3.141194408099018, 4);
  sqcRZGate(q, -3.0080320252966923, 4);
  sqcRYGate(q, 1.570782403108157, 5);
  sqcRZGate(q, 2.7823864996729286, 5);
  sqcRYGate(q, -1.5853315936915642, 6);
  sqcRZGate(q, -2.4995553670479334, 6);
  sqcRYGate(q, -1.673168441922246, 7);
  sqcRZGate(q, 0.36848658665961587, 7);
  sqcRYGate(q, -0.3182070570550337, 8);
  sqcRZGate(q, 1.8756000479435972, 8);
  sqcRYGate(q, 1.570887754787141, 9);
  sqcRZGate(q, 1.2095734746815816, 9);
  sqcRYGate(q, -3.141568564598248, 10);
  sqcRZGate(q, -0.6894802179865716, 10);
  sqcRYGate(q, -1.5711124591754868, 11);
  sqcRZGate(q, -1.9319235215910429, 11);

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
