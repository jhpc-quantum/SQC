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

  sqcRYGate(q, 1.8226997411014865, 0);
  sqcRYGate(q, 1.5086768649480409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.008313704684698, 0);
  sqcRYGate(q, -1.73508134203266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8561362320337969, 2);
  sqcRYGate(q, 1.9618745564364424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12647517901766214, 2);
  sqcRYGate(q, 0.14362438552840295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.237337147805328, 0);
  sqcRYGate(q, 1.9243403873078113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8289516329926516, 0);
  sqcRYGate(q, 2.303743264730374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.792850817095516, 1);
  sqcRYGate(q, 1.4510355698305903, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.082658887358231, 1);
  sqcRYGate(q, 1.4199261509738665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9950530898033223, 0);
  sqcRYGate(q, 1.1357394513421415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5431820433947223, 0);
  sqcRYGate(q, 3.0891078190057075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.382847625759848, 2);
  sqcRYGate(q, 2.991160802851716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.334144057063508, 2);
  sqcRYGate(q, -2.7758643974567705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2195921169904924, 0);
  sqcRYGate(q, -2.2054630855331823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6622822122195426, 0);
  sqcRYGate(q, 2.804751229695109, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7476411318717484, 1);
  sqcRYGate(q, 1.8239230272886129, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6645079184328385, 1);
  sqcRYGate(q, -2.3054088691243844, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9886168398707786, 0);
  sqcRYGate(q, -2.5444741722389357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9291926580590648, 0);
  sqcRYGate(q, 0.846199807088644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5979600496510269, 2);
  sqcRYGate(q, 2.3396700842050233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5957586591469155, 2);
  sqcRYGate(q, 2.8070746796712123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5551144874253315, 0);
  sqcRYGate(q, 2.210521845702349, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8386965316811956, 0);
  sqcRYGate(q, -2.311838507172755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1252669311057146, 1);
  sqcRYGate(q, 0.20783500860731063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.907233878053876, 1);
  sqcRYGate(q, -0.5497797199151554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3379327719036008, 0);
  sqcRYGate(q, 0.32097881236188286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49806466823551876, 0);
  sqcRYGate(q, 1.206271044068269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6335913574332227, 2);
  sqcRYGate(q, 2.2639862795268852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.074394037555732, 2);
  sqcRYGate(q, 0.9652954378271055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1248083888126894, 0);
  sqcRYGate(q, 1.3308099625835759, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5537611243929268, 0);
  sqcRYGate(q, 0.9040230869240367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8676497170183665, 1);
  sqcRYGate(q, 0.6667266850036047, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.116389873266474, 1);
  sqcRYGate(q, 2.410773545671239, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7023396838542224, 0);
  sqcRYGate(q, -2.0419841827552965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.345877125851851, 0);
  sqcRYGate(q, -2.739170310725139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2755986622575032, 2);
  sqcRYGate(q, -2.2261497900355764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.331729650527904, 2);
  sqcRYGate(q, -2.3961825215139263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2655928788149495, 0);
  sqcRYGate(q, -1.8905997476888885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5752004294554434, 0);
  sqcRYGate(q, 0.43568291191269637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3813951925813244, 1);
  sqcRYGate(q, -0.14078809787178198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.49805986950217385, 1);
  sqcRYGate(q, -1.9331124695839552, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1088018545817544, 0);
  sqcRYGate(q, -1.3789672792377816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7562754074379203, 0);
  sqcRYGate(q, 2.07591548687408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7335533472489209, 2);
  sqcRYGate(q, 1.1674490646493725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.278568065227666, 2);
  sqcRYGate(q, -2.0251171330808635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6778295027451335, 0);
  sqcRYGate(q, 2.2516262798863607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5684768510442244, 0);
  sqcRYGate(q, 3.141544824394132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0473760816184448, 1);
  sqcRYGate(q, -2.3759440212530185, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.978641304363989, 1);
  sqcRYGate(q, 1.3260139904422257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4924120116023654, 0);
  sqcRYGate(q, 1.6693848769349011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.381786221875432, 0);
  sqcRYGate(q, -0.6710862630462318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8436652450942415, 2);
  sqcRYGate(q, -1.0533031600673315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.032196346340843, 2);
  sqcRYGate(q, 1.1432633280384463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.058216154724571, 0);
  sqcRYGate(q, -0.8984815326105061, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.06561398923212813, 0);
  sqcRYGate(q, -0.10267444331176619, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.580628543172254, 1);
  sqcRYGate(q, -2.8249034769553094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21851287175880785, 1);
  sqcRYGate(q, -0.5124048798551257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0835382569653866, 0);
  sqcRYGate(q, -0.7161467729503245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7707925580130746, 0);
  sqcRYGate(q, 1.4439245916593348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1206847134028886, 2);
  sqcRYGate(q, 0.17571980124993836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7164726030295006, 2);
  sqcRYGate(q, 1.3460595979946204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2169465178874015, 0);
  sqcRYGate(q, -2.5625697421960156, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0172025194612275, 0);
  sqcRYGate(q, 2.331438611306258, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10999013319137506, 1);
  sqcRYGate(q, 2.6744708541220445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0440882902303992, 1);
  sqcRYGate(q, -1.2712989468953426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3860217851890693, 0);
  sqcRYGate(q, 1.1111093788884352, 1);
  sqcRYGate(q, -0.47199578625873084, 2);
  sqcRYGate(q, 1.1566374102163175, 3);

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
