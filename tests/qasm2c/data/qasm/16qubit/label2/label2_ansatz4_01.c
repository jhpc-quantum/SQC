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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.7163682957073423, 0);
  sqcRZGate(q, -2.554698891028341, 0);
  sqcRYGate(q, 1.5683747507748904, 1);
  sqcRZGate(q, 1.5617134047278585, 1);
  sqcRYGate(q, -3.1415840388818705, 2);
  sqcRZGate(q, 0.3129821182117561, 2);
  sqcRYGate(q, -0.0020602661551683, 3);
  sqcRZGate(q, 0.2113866060858095, 3);
  sqcRYGate(q, -1.4542135395447053, 4);
  sqcRZGate(q, -1.5748184124712985, 4);
  sqcRYGate(q, 1.3952200101563415, 5);
  sqcRZGate(q, 1.5777996642158891, 5);
  sqcRYGate(q, -3.106143379369963, 6);
  sqcRZGate(q, 0.006779311002934385, 6);
  sqcRYGate(q, -3.140089385703091, 7);
  sqcRZGate(q, 1.6825078379991238, 7);
  sqcRYGate(q, -3.141239965340526, 8);
  sqcRZGate(q, -3.012192730407106, 8);
  sqcRYGate(q, -2.9525912020306376e-05, 9);
  sqcRZGate(q, 0.8166574831265878, 9);
  sqcRYGate(q, -1.5707499260145834, 10);
  sqcRZGate(q, 1.7881102864043625, 10);
  sqcRYGate(q, -1.619917464164454, 11);
  sqcRZGate(q, 2.3562894487916988, 11);
  sqcRYGate(q, 1.6401791989713252, 12);
  sqcRZGate(q, -1.5711355797751927, 12);
  sqcRYGate(q, 1.5706357067031271, 13);
  sqcRZGate(q, 1.6011288510270962, 13);
  sqcRYGate(q, -1.5708492169197477, 14);
  sqcRZGate(q, 3.138371123508533, 14);
  sqcRYGate(q, 3.1381044203118305, 15);
  sqcRZGate(q, 3.0094753307270623, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 3.1129658899988737, 0);
  sqcRZGate(q, -0.9557333125632079, 0);
  sqcRYGate(q, 1.8828625990514685, 1);
  sqcRZGate(q, 3.1201040763920322, 1);
  sqcRYGate(q, 0.0007178729816637432, 2);
  sqcRZGate(q, 0.4817939164557563, 2);
  sqcRYGate(q, 0.3254825436710558, 3);
  sqcRZGate(q, -1.5321722985502042, 3);
  sqcRYGate(q, 1.5779563605414855, 4);
  sqcRZGate(q, 2.596052528298728, 4);
  sqcRYGate(q, 1.5669713497816877, 5);
  sqcRZGate(q, -1.258239732490992, 5);
  sqcRYGate(q, 0.13647421988867692, 6);
  sqcRZGate(q, -1.5711386023967533, 6);
  sqcRYGate(q, -1.4968664696480267e-05, 7);
  sqcRZGate(q, 0.11981179436637265, 7);
  sqcRYGate(q, -1.5707890188691138, 8);
  sqcRZGate(q, -1.363740129519444, 8);
  sqcRYGate(q, 1.6202543171182784, 9);
  sqcRZGate(q, 1.570221037789354, 9);
  sqcRYGate(q, 3.1391526249015924, 10);
  sqcRZGate(q, -0.7245826963790812, 10);
  sqcRYGate(q, 0.00034995228823397895, 11);
  sqcRZGate(q, 2.88003065664784, 11);
  sqcRYGate(q, -1.5711674909208577, 12);
  sqcRZGate(q, 0.7966873288505634, 12);
  sqcRYGate(q, -1.5360219950013467, 13);
  sqcRZGate(q, 0.7938417747249433, 13);
  sqcRYGate(q, 1.5983786017370307, 14);
  sqcRZGate(q, -1.6174389013650987, 14);
  sqcRYGate(q, -0.00016161085817145704, 15);
  sqcRZGate(q, 1.6365434762016513, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -0.14567793553125916, 0);
  sqcRZGate(q, -1.89455097378546, 0);
  sqcRYGate(q, 1.52606028110057, 1);
  sqcRZGate(q, -0.05788359692696421, 1);
  sqcRYGate(q, 3.1415587544994485, 2);
  sqcRZGate(q, -2.649959176542191, 2);
  sqcRYGate(q, -0.04705143112297794, 3);
  sqcRZGate(q, -1.6254598210238624, 3);
  sqcRYGate(q, -2.378770296003213, 4);
  sqcRZGate(q, -2.3160847566591434, 4);
  sqcRYGate(q, 2.3941200156127547, 5);
  sqcRZGate(q, 1.8699730188735424, 5);
  sqcRYGate(q, 1.5640142079799233, 6);
  sqcRZGate(q, 1.1322616179754858e-05, 6);
  sqcRYGate(q, -1.6197143032807615, 7);
  sqcRZGate(q, -3.1408428602271434, 7);
  sqcRYGate(q, -4.480669935981673e-05, 8);
  sqcRZGate(q, 0.8768788678743071, 8);
  sqcRYGate(q, -0.04847040451527995, 9);
  sqcRZGate(q, -3.1410144250351433, 9);
  sqcRYGate(q, -3.141536737784909, 10);
  sqcRZGate(q, -0.9422600699252973, 10);
  sqcRYGate(q, -2.209911184244384e-05, 11);
  sqcRZGate(q, 2.614451669443711, 11);
  sqcRYGate(q, -1.570792938868724, 12);
  sqcRZGate(q, -3.140864739400276, 12);
  sqcRYGate(q, -1.5694499277480922, 13);
  sqcRZGate(q, 3.0555827687689385, 13);
  sqcRYGate(q, 1.5673893511596866, 14);
  sqcRZGate(q, -0.8666381386790175, 14);
  sqcRYGate(q, -3.141023921559722, 15);
  sqcRZGate(q, -1.77881383223703, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.628829958237083, 0);
  sqcRZGate(q, 0.8599858065793211, 0);
  sqcRYGate(q, 1.5578924329375523, 1);
  sqcRZGate(q, 0.7132056444978184, 1);
  sqcRYGate(q, 1.570792637602671, 2);
  sqcRZGate(q, -1.073991866789127, 2);
  sqcRYGate(q, -1.574789832857726, 3);
  sqcRZGate(q, -2.4398491709582624, 3);
  sqcRYGate(q, -0.0009122792840858458, 4);
  sqcRZGate(q, -1.4667714199163795, 4);
  sqcRYGate(q, 3.1406639067261954, 5);
  sqcRZGate(q, -1.6169864256764157, 5);
  sqcRYGate(q, -1.566194558676398, 6);
  sqcRZGate(q, -1.620219398251084, 6);
  sqcRYGate(q, -1.575354245522104, 7);
  sqcRZGate(q, 1.6972539953179568, 7);
  sqcRYGate(q, -3.141563313430235, 8);
  sqcRZGate(q, -0.4961763842172502, 8);
  sqcRYGate(q, 1.5707821245514353, 9);
  sqcRZGate(q, -1.5710377820370787, 9);
  sqcRYGate(q, 1.5675902326934876, 10);
  sqcRZGate(q, -2.7009767790241144, 10);
  sqcRYGate(q, 1.5711577800825975, 11);
  sqcRZGate(q, -0.1415114493729872, 11);
  sqcRYGate(q, -1.560937945983726, 12);
  sqcRZGate(q, 1.6092840126833023, 12);
  sqcRYGate(q, 0.009862813226402593, 13);
  sqcRZGate(q, 2.5096464974417514, 13);
  sqcRYGate(q, -3.1415624529747, 14);
  sqcRZGate(q, 1.2411043625620222, 14);
  sqcRYGate(q, -1.5701934922467187, 15);
  sqcRZGate(q, -0.0018958954190747476, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.7728415141080323, 0);
  sqcRZGate(q, 2.6339424462828993, 0);
  sqcRYGate(q, 1.3687822956860831, 1);
  sqcRZGate(q, 2.633923346494307, 1);
  sqcRYGate(q, -0.43248797316762244, 2);
  sqcRZGate(q, -2.535866788937434, 2);
  sqcRYGate(q, -1.3704296337577562, 3);
  sqcRZGate(q, -0.5081785140554986, 3);
  sqcRYGate(q, 1.7623016747636928, 4);
  sqcRZGate(q, -0.5091067990991159, 4);
  sqcRYGate(q, 1.7622062690593792, 5);
  sqcRZGate(q, -0.5091332348984594, 5);
  sqcRYGate(q, -2.9964256635548026, 6);
  sqcRZGate(q, -0.5620638263809372, 6);
  sqcRYGate(q, -1.4257041574798897, 7);
  sqcRZGate(q, -0.5119654314852694, 7);
  sqcRYGate(q, 3.13313409569753, 8);
  sqcRZGate(q, 1.0569246850088356, 8);
  sqcRYGate(q, -1.5688764924758978, 9);
  sqcRZGate(q, -2.0753778269612817, 9);
  sqcRYGate(q, -4.743672508489282e-05, 10);
  sqcRZGate(q, -0.9444835036454187, 10);
  sqcRYGate(q, -0.0003514443095440356, 11);
  sqcRZGate(q, -1.9331734009761905, 11);
  sqcRYGate(q, -3.140856433284237, 12);
  sqcRZGate(q, 1.4376092223716055, 12);
  sqcRYGate(q, -3.141354164480265, 13);
  sqcRZGate(q, 2.2507770994727956, 13);
  sqcRYGate(q, 3.1397452090250217, 14);
  sqcRZGate(q, -2.7800441207463416, 14);
  sqcRYGate(q, -1.5715098816292867, 15);
  sqcRZGate(q, -1.774001938076351, 15);

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
