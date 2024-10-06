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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.361320639058698, 0);
  sqcRZGate(q, -1.910731199133342, 0);
  sqcRYGate(q, 2.2948597129865083, 1);
  sqcRZGate(q, -1.9646218381111495, 1);
  sqcRYGate(q, 1.1542561593883391, 2);
  sqcRZGate(q, -0.3258369992921183, 2);
  sqcRYGate(q, 1.374025978914639, 3);
  sqcRZGate(q, 1.057355174797286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.33354375470562303, 0);
  sqcRZGate(q, 1.464529668468832, 0);
  sqcRYGate(q, 2.895400029790684, 1);
  sqcRZGate(q, 3.080139614465912, 1);
  sqcRYGate(q, -1.1473156402461777, 2);
  sqcRZGate(q, 0.20634042322017332, 2);
  sqcRYGate(q, -0.27208918245712094, 3);
  sqcRZGate(q, -0.9280753897122453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.41268973945904247, 0);
  sqcRZGate(q, 1.4748437009821405, 0);
  sqcRYGate(q, 2.1814947545810672, 1);
  sqcRZGate(q, -1.4366195871992264, 1);
  sqcRYGate(q, -1.086286894568656, 2);
  sqcRZGate(q, 1.8848778716236485, 2);
  sqcRYGate(q, -1.3744384492985076, 3);
  sqcRZGate(q, -2.4836598487203574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5721974831938338, 0);
  sqcRZGate(q, -2.8446821287272703, 0);
  sqcRYGate(q, -3.1075256273914498, 1);
  sqcRZGate(q, -0.23141686732871045, 1);
  sqcRYGate(q, 2.8939640912833005, 2);
  sqcRZGate(q, -0.33250558418683435, 2);
  sqcRYGate(q, 0.6133967124457174, 3);
  sqcRZGate(q, -2.5513920602163944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7761600420123466, 0);
  sqcRZGate(q, 0.9436233958931443, 0);
  sqcRYGate(q, 0.544405783902735, 1);
  sqcRZGate(q, 1.6966841852568653, 1);
  sqcRYGate(q, -2.2553776674987374, 2);
  sqcRZGate(q, 2.1707760184452707, 2);
  sqcRYGate(q, -2.0414626915638303, 3);
  sqcRZGate(q, -1.3835033375543893, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.22080530022551859, 0);
  sqcRZGate(q, 3.113732545813646, 0);
  sqcRYGate(q, 1.6873692153663626, 1);
  sqcRZGate(q, -2.957425571023977, 1);
  sqcRYGate(q, -2.3590332433497316, 2);
  sqcRZGate(q, -3.1214888042019524, 2);
  sqcRYGate(q, 1.7499740033549938, 3);
  sqcRZGate(q, 1.139072453710422, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0059098127750097, 0);
  sqcRZGate(q, -2.6951125306858157, 0);
  sqcRYGate(q, 0.08731663698488819, 1);
  sqcRZGate(q, -0.7711743426097937, 1);
  sqcRYGate(q, -1.165243708278175, 2);
  sqcRZGate(q, 1.362534278151126, 2);
  sqcRYGate(q, 2.30004327747336, 3);
  sqcRZGate(q, -0.6399740760450366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4349208367554525, 0);
  sqcRZGate(q, 2.8416357468548505, 0);
  sqcRYGate(q, -1.1195733553998632, 1);
  sqcRZGate(q, 2.5760320106305215, 1);
  sqcRYGate(q, -3.119413300438174, 2);
  sqcRZGate(q, 0.29056723192803485, 2);
  sqcRYGate(q, -1.2438263652167416, 3);
  sqcRZGate(q, 0.9633475117678593, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0918915460218814, 0);
  sqcRZGate(q, 2.865760500857361, 0);
  sqcRYGate(q, 0.04694002263475739, 1);
  sqcRZGate(q, -2.667031611982799, 1);
  sqcRYGate(q, -2.0425494227642735, 2);
  sqcRZGate(q, 2.4017575966067533, 2);
  sqcRYGate(q, 2.9269380347265224, 3);
  sqcRZGate(q, -1.986635020405908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5949243578895438, 0);
  sqcRZGate(q, 2.8938304349971284, 0);
  sqcRYGate(q, -1.6535467963293558, 1);
  sqcRZGate(q, -1.3249665253596565, 1);
  sqcRYGate(q, -0.4748788885908723, 2);
  sqcRZGate(q, -1.1807809130618487, 2);
  sqcRYGate(q, 2.998716128868784, 3);
  sqcRZGate(q, -2.8107040852803706, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.77791176013049, 0);
  sqcRZGate(q, 1.6036205575327944, 0);
  sqcRYGate(q, 1.609422633913444, 1);
  sqcRZGate(q, 2.3801906654810456, 1);
  sqcRYGate(q, 0.6971505509212256, 2);
  sqcRZGate(q, -2.6787688166562424, 2);
  sqcRYGate(q, -1.5433231500715159, 3);
  sqcRZGate(q, 1.391172939798837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5034284756822358, 0);
  sqcRZGate(q, -2.2824828914189492, 0);
  sqcRYGate(q, 1.1616718694101689, 1);
  sqcRZGate(q, 0.3334194360817164, 1);
  sqcRYGate(q, -1.9102473560181963, 2);
  sqcRZGate(q, 1.0191991201910031, 2);
  sqcRYGate(q, 0.14661047713359068, 3);
  sqcRZGate(q, -1.9610392839773239, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7742464520528136, 0);
  sqcRZGate(q, 1.0802801089857066, 0);
  sqcRYGate(q, -2.1978151784782893, 1);
  sqcRZGate(q, -2.653744598646596, 1);
  sqcRYGate(q, -0.456420625354184, 2);
  sqcRZGate(q, 1.6956844398334463, 2);
  sqcRYGate(q, 0.49464420723716973, 3);
  sqcRZGate(q, -2.096768353921288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2368793480238134, 0);
  sqcRZGate(q, 2.74012274813305, 0);
  sqcRYGate(q, 0.9008366690829374, 1);
  sqcRZGate(q, -1.1784540680514466, 1);
  sqcRYGate(q, 2.8071990134652385, 2);
  sqcRZGate(q, 0.4319365447546649, 2);
  sqcRYGate(q, -0.4211596078505983, 3);
  sqcRZGate(q, 2.4624601979538885, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7452357665315503, 0);
  sqcRZGate(q, -1.67330153281865, 0);
  sqcRYGate(q, 0.5862819687555172, 1);
  sqcRZGate(q, 0.30704822226122985, 1);
  sqcRYGate(q, -2.3190637080360776, 2);
  sqcRZGate(q, -0.8328308712903613, 2);
  sqcRYGate(q, 0.5446979180253182, 3);
  sqcRZGate(q, -2.2949991628665534, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.52905625216935, 0);
  sqcRZGate(q, 0.4047077166052073, 0);
  sqcRYGate(q, 2.535528007450305, 1);
  sqcRZGate(q, 2.2255029491645173, 1);
  sqcRYGate(q, 2.727698537160718, 2);
  sqcRZGate(q, -0.08384643210458785, 2);
  sqcRYGate(q, 2.922526918113889, 3);
  sqcRZGate(q, 2.0380874819615116, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3989116231786252, 0);
  sqcRZGate(q, -3.007669207193972, 0);
  sqcRYGate(q, 2.8604578880532188, 1);
  sqcRZGate(q, 2.218434504220646, 1);
  sqcRYGate(q, 0.9317355843908657, 2);
  sqcRZGate(q, -0.5691952603311264, 2);
  sqcRYGate(q, 2.0750293533570288, 3);
  sqcRZGate(q, 0.38371685845613346, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
