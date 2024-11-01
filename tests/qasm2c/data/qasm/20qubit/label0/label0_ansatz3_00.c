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

  sqcRYGate(q, 3.070315401874793e-05, 0);
  sqcRZGate(q, -1.634163127849943, 0);
  sqcRYGate(q, 1.5735950962606684, 1);
  sqcRZGate(q, -1.5683566084718608, 1);
  sqcRYGate(q, -1.4662964169673938, 2);
  sqcRZGate(q, 0.0003165604150945356, 2);
  sqcRYGate(q, 2.9332370170856024, 3);
  sqcRZGate(q, -1.4145359174999348, 3);
  sqcRYGate(q, -0.007648714776054888, 4);
  sqcRZGate(q, -1.5914440197341941, 4);
  sqcRYGate(q, -2.736781699937563, 5);
  sqcRZGate(q, -1.5712649241011443, 5);
  sqcRYGate(q, 1.363721356821807, 6);
  sqcRZGate(q, -0.0038389958941450596, 6);
  sqcRYGate(q, 2.942419532613769, 7);
  sqcRZGate(q, 0.003535128753912712, 7);
  sqcRYGate(q, 3.1400231448980698, 8);
  sqcRZGate(q, 3.1382371208471005, 8);
  sqcRYGate(q, -2.5461328566621617, 9);
  sqcRZGate(q, 0.00023622907870768156, 9);
  sqcRYGate(q, -1.4891254780856036, 10);
  sqcRZGate(q, -1.5716190668106664, 10);
  sqcRYGate(q, 1.5305713983135913, 11);
  sqcRZGate(q, 0.0005570949440944307, 11);
  sqcRYGate(q, -2.9312113088234426, 12);
  sqcRZGate(q, 1.6000089701648303, 12);
  sqcRYGate(q, -0.011156930183908514, 13);
  sqcRZGate(q, -3.1072164647181517, 13);
  sqcRYGate(q, -1.5806908252051242, 14);
  sqcRZGate(q, 1.3948857982662979, 14);
  sqcRYGate(q, 1.5707037482426163, 15);
  sqcRZGate(q, 0.9630714112123523, 15);
  sqcRYGate(q, 2.475044406711616, 16);
  sqcRZGate(q, 1.589740055093132, 16);
  sqcRYGate(q, 3.125462895872229, 17);
  sqcRZGate(q, -1.573931685162452, 17);
  sqcRYGate(q, 0.19663056188288675, 18);
  sqcRZGate(q, 3.1401464423507655, 18);
  sqcRYGate(q, -2.8342166773742257, 19);
  sqcRZGate(q, 0.006891657119280303, 19);
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
  sqcRYGate(q, -1.3395634043873237, 0);
  sqcRZGate(q, -1.571047206348729, 0);
  sqcRYGate(q, 0.15697827006225307, 1);
  sqcRZGate(q, 1.354506680946725, 1);
  sqcRYGate(q, 1.8724029024481972, 2);
  sqcRZGate(q, -1.0361510212362415, 2);
  sqcRYGate(q, -2.0888447358587228, 3);
  sqcRZGate(q, 3.1321490857007244, 3);
  sqcRYGate(q, 1.5700267636346243, 4);
  sqcRZGate(q, 1.12020052041124, 4);
  sqcRYGate(q, -1.5704524344191935, 5);
  sqcRZGate(q, 1.6323452180016131, 5);
  sqcRYGate(q, 2.1447575347192647, 6);
  sqcRZGate(q, -1.5703226579290033, 6);
  sqcRYGate(q, -3.1326201380703713, 7);
  sqcRZGate(q, 1.4496194801249906, 7);
  sqcRYGate(q, 3.1159428409236294, 8);
  sqcRZGate(q, 1.5842553518819864, 8);
  sqcRYGate(q, -2.062499634077623, 9);
  sqcRZGate(q, -3.14110331978308, 9);
  sqcRYGate(q, -1.5715065917088928, 10);
  sqcRZGate(q, 1.6497144817183056, 10);
  sqcRYGate(q, -0.36725219972680717, 11);
  sqcRZGate(q, -1.3973647370282452, 11);
  sqcRYGate(q, 3.138912779499988, 12);
  sqcRZGate(q, -1.522416834053736, 12);
  sqcRYGate(q, 1.5708109402586121, 13);
  sqcRZGate(q, -0.016298103521213244, 13);
  sqcRYGate(q, 2.814314765335523, 14);
  sqcRZGate(q, -1.6452459463421, 14);
  sqcRYGate(q, 0.14972159734072843, 15);
  sqcRZGate(q, -0.43445562908083524, 15);
  sqcRYGate(q, 3.0654294251224194, 16);
  sqcRZGate(q, -1.5507044739745384, 16);
  sqcRYGate(q, -2.5565323060051903, 17);
  sqcRZGate(q, -1.576722025939228, 17);
  sqcRYGate(q, -0.3122583284494487, 18);
  sqcRZGate(q, -0.0033799079573757496, 18);
  sqcRYGate(q, -1.1096285262226118, 19);
  sqcRZGate(q, -1.572959293198183, 19);
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
  sqcRYGate(q, -1.570738990036313, 0);
  sqcRZGate(q, -2.7404501526510274, 0);
  sqcRYGate(q, 1.6488432112112072e-05, 1);
  sqcRZGate(q, -2.927368825824879, 1);
  sqcRYGate(q, -0.00019768626386186983, 2);
  sqcRZGate(q, 1.037531468115203, 2);
  sqcRYGate(q, -3.126425547233625, 3);
  sqcRZGate(q, 3.131300241386306, 3);
  sqcRYGate(q, 2.6864845674993547, 4);
  sqcRZGate(q, 2.8585487183913667, 4);
  sqcRYGate(q, -2.8841965671618075, 5);
  sqcRZGate(q, -3.0967412590553534, 5);
  sqcRYGate(q, 3.128560168159085, 6);
  sqcRZGate(q, 1.5793993142081808, 6);
  sqcRYGate(q, 0.0017223059680575514, 7);
  sqcRZGate(q, 1.6884562249805557, 7);
  sqcRYGate(q, 2.939220649689886, 8);
  sqcRZGate(q, -3.1368949667951145, 8);
  sqcRYGate(q, 0.6356084158631009, 9);
  sqcRZGate(q, 0.009467531129755903, 9);
  sqcRYGate(q, -1.5746244873141082, 10);
  sqcRZGate(q, 1.5753162508578447, 10);
  sqcRYGate(q, -3.1414715422660375, 11);
  sqcRZGate(q, 0.9336390584916279, 11);
  sqcRYGate(q, -2.941461623890761, 12);
  sqcRZGate(q, -1.5650447568656736, 12);
  sqcRYGate(q, -3.1256374963974305, 13);
  sqcRZGate(q, 1.5524837101691293, 13);
  sqcRYGate(q, -1.5760166856142062, 14);
  sqcRZGate(q, -1.5496639783631092, 14);
  sqcRYGate(q, 3.1410682088457893, 15);
  sqcRZGate(q, 2.7222082399463394, 15);
  sqcRYGate(q, -0.41372844898747824, 16);
  sqcRZGate(q, 1.5707922902777174, 16);
  sqcRYGate(q, -0.0046275581218067074, 17);
  sqcRZGate(q, -1.5651554883831775, 17);
  sqcRYGate(q, 0.09611426217303073, 18);
  sqcRZGate(q, 0.004493166058688658, 18);
  sqcRYGate(q, 1.5706335447796633, 19);
  sqcRZGate(q, -0.4127592625738615, 19);
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
  sqcRYGate(q, -3.1407160232778293, 0);
  sqcRZGate(q, -1.1691263669289618, 0);
  sqcRYGate(q, 1.5710525261644728, 1);
  sqcRZGate(q, -1.5682927215965339, 1);
  sqcRYGate(q, -1.5721996204230857, 2);
  sqcRZGate(q, -3.141174654702377, 2);
  sqcRYGate(q, -0.5300068741712567, 3);
  sqcRZGate(q, -3.140760958237773, 3);
  sqcRYGate(q, 1.5712681855675412, 4);
  sqcRZGate(q, -1.5700854900683683, 4);
  sqcRYGate(q, 1.568446641437986, 5);
  sqcRZGate(q, -1.57086170133034, 5);
  sqcRYGate(q, -1.2514148783192836, 6);
  sqcRZGate(q, 0.0007516508225608044, 6);
  sqcRYGate(q, 1.541050687755508, 7);
  sqcRZGate(q, -3.1413704406403933, 7);
  sqcRYGate(q, -1.4785704259455987, 8);
  sqcRZGate(q, 3.1411470652090174, 8);
  sqcRYGate(q, 2.6585345091575463, 9);
  sqcRZGate(q, -3.132837865037135, 9);
  sqcRYGate(q, -1.6597227593126151, 10);
  sqcRZGate(q, 3.141268335492998, 10);
  sqcRYGate(q, 0.018438440899817915, 11);
  sqcRZGate(q, -0.7601014321959554, 11);
  sqcRYGate(q, -1.5679034734538977, 12);
  sqcRZGate(q, 3.1415592855848034, 12);
  sqcRYGate(q, -1.5645808916650177, 13);
  sqcRZGate(q, 1.5707823708486877, 13);
  sqcRYGate(q, 1.5736486628001325, 14);
  sqcRZGate(q, 0.0003290899270984582, 14);
  sqcRYGate(q, 0.0020808457765681965, 15);
  sqcRZGate(q, -1.9456567977300894, 15);
  sqcRYGate(q, -1.5720346235819624, 16);
  sqcRZGate(q, -0.3229070955262374, 16);
  sqcRYGate(q, -1.5704046824583413, 17);
  sqcRZGate(q, -0.4914410013948398, 17);
  sqcRYGate(q, -1.5706594236829359, 18);
  sqcRZGate(q, 0.39970641798392076, 18);
  sqcRYGate(q, -3.141373095253593, 19);
  sqcRZGate(q, -2.0491805203604887, 19);

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
