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

  sqcRYGate(q, 1.0991727474629123, 0);
  sqcRZGate(q, 1.300553683142004, 0);
  sqcRYGate(q, -1.7977103367729859, 1);
  sqcRZGate(q, 1.754025828927937, 1);
  sqcRYGate(q, -0.3629338175066809, 2);
  sqcRZGate(q, 2.904027623883801, 2);
  sqcRYGate(q, -0.19058278096590703, 3);
  sqcRZGate(q, -1.3491656562318788, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0186458911917686, 0);
  sqcRZGate(q, -2.732407281725123, 0);
  sqcRYGate(q, 0.39241090274079465, 1);
  sqcRZGate(q, -2.353378960550915, 1);
  sqcRYGate(q, 2.6698692423539523, 2);
  sqcRZGate(q, -2.050218294977892, 2);
  sqcRYGate(q, -0.6061219147288436, 3);
  sqcRZGate(q, -0.8613520635300853, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7397812585261871, 0);
  sqcRZGate(q, 2.0611718361188744, 0);
  sqcRYGate(q, -2.471294899788747, 1);
  sqcRZGate(q, -0.675278959633914, 1);
  sqcRYGate(q, 2.2996506747749543, 2);
  sqcRZGate(q, 1.0000666088582364, 2);
  sqcRYGate(q, -1.3357833618090145, 3);
  sqcRZGate(q, -3.109511254029098, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0311707014127585, 0);
  sqcRZGate(q, -2.8285162801028627, 0);
  sqcRYGate(q, -1.8303836037066963, 1);
  sqcRZGate(q, -1.9058668405291241, 1);
  sqcRYGate(q, -1.1419071460438497, 2);
  sqcRZGate(q, -2.516831139591194, 2);
  sqcRYGate(q, -2.0554516890484082, 3);
  sqcRZGate(q, -2.347118148125276, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5753956328159266, 0);
  sqcRZGate(q, -0.033891579001988255, 0);
  sqcRYGate(q, -0.3998865712727679, 1);
  sqcRZGate(q, 0.3627208090901952, 1);
  sqcRYGate(q, -3.0200867709010737, 2);
  sqcRZGate(q, -2.850631422235838, 2);
  sqcRYGate(q, 0.39598850892521653, 3);
  sqcRZGate(q, 2.54344739713785, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5568435742877424, 0);
  sqcRZGate(q, -0.09478808823359053, 0);
  sqcRYGate(q, 2.802950969503192, 1);
  sqcRZGate(q, -0.3427103942179491, 1);
  sqcRYGate(q, -1.6665216259767173, 2);
  sqcRZGate(q, 1.332730427188828, 2);
  sqcRYGate(q, -2.47849442358992, 3);
  sqcRZGate(q, -2.8314547138619357, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9505203250761051, 0);
  sqcRZGate(q, -0.23473334446052355, 0);
  sqcRYGate(q, -0.8964589816035611, 1);
  sqcRZGate(q, 2.6673707522988344, 1);
  sqcRYGate(q, -0.8909404074556743, 2);
  sqcRZGate(q, -0.45222553732838683, 2);
  sqcRYGate(q, -1.72631324080897, 3);
  sqcRZGate(q, 0.44794185681649523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8722416146370207, 0);
  sqcRZGate(q, 1.8570763949718982, 0);
  sqcRYGate(q, 0.2955261114421798, 1);
  sqcRZGate(q, -1.395984605198008, 1);
  sqcRYGate(q, -3.078154156473857, 2);
  sqcRZGate(q, 1.8445964229745522, 2);
  sqcRYGate(q, -0.6966755594801617, 3);
  sqcRZGate(q, 1.462404232232136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7995548290472592, 0);
  sqcRZGate(q, -2.809403608427146, 0);
  sqcRYGate(q, -0.5755163861747356, 1);
  sqcRZGate(q, 2.192687699014847, 1);
  sqcRYGate(q, -2.9400703467818494, 2);
  sqcRZGate(q, -1.083288583986545, 2);
  sqcRYGate(q, 0.22824012925753576, 3);
  sqcRZGate(q, -1.9755126795783762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.111157662469876, 0);
  sqcRZGate(q, -0.8047155716031485, 0);
  sqcRYGate(q, -2.3413380916756963, 1);
  sqcRZGate(q, -0.22507147005041706, 1);
  sqcRYGate(q, -0.8217946954144821, 2);
  sqcRZGate(q, -1.103422621347252, 2);
  sqcRYGate(q, -1.946488409824351, 3);
  sqcRZGate(q, -1.5875181259316562, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9198240072059635, 0);
  sqcRZGate(q, -2.4522019204885646, 0);
  sqcRYGate(q, 1.5873578074188313, 1);
  sqcRZGate(q, 1.3923716028131743, 1);
  sqcRYGate(q, 0.24895378242520305, 2);
  sqcRZGate(q, -0.8089257164145227, 2);
  sqcRYGate(q, -0.9489717699241781, 3);
  sqcRZGate(q, -2.8543369091750135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5483931409285612, 0);
  sqcRZGate(q, 1.0708784677339764, 0);
  sqcRYGate(q, -2.696326626330722, 1);
  sqcRZGate(q, -0.9585436586290107, 1);
  sqcRYGate(q, -2.5859875601522204, 2);
  sqcRZGate(q, -1.3283872217089403, 2);
  sqcRYGate(q, -0.5951656313119571, 3);
  sqcRZGate(q, 1.3436313250884075, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.027507666144507507, 0);
  sqcRZGate(q, -2.8290282876237907, 0);
  sqcRYGate(q, 0.13980934576068904, 1);
  sqcRZGate(q, -0.47235471631631315, 1);
  sqcRYGate(q, 0.24988338680075553, 2);
  sqcRZGate(q, 1.930374741783743, 2);
  sqcRYGate(q, 2.137612405575199, 3);
  sqcRZGate(q, -2.304992905174709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0748476658406312, 0);
  sqcRZGate(q, -0.4894421822892161, 0);
  sqcRYGate(q, 2.0816008821992282, 1);
  sqcRZGate(q, 2.3395732394628723, 1);
  sqcRYGate(q, -0.7807248563077298, 2);
  sqcRZGate(q, -1.0361426039888384, 2);
  sqcRYGate(q, 1.9856447283307335, 3);
  sqcRZGate(q, -1.7786645568543762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.049009213249179, 0);
  sqcRZGate(q, -0.341772200991394, 0);
  sqcRYGate(q, -2.940623754497832, 1);
  sqcRZGate(q, -2.770563480833141, 1);
  sqcRYGate(q, -0.1326395915043603, 2);
  sqcRZGate(q, 1.6789244400761332, 2);
  sqcRYGate(q, -2.555173172479266, 3);
  sqcRZGate(q, -1.8613572868592971, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.31658249445102093, 0);
  sqcRZGate(q, -1.8255855418897662, 0);
  sqcRYGate(q, -1.5865913880794331, 1);
  sqcRZGate(q, -2.128260641449815, 1);
  sqcRYGate(q, -0.44138925115975064, 2);
  sqcRZGate(q, -0.28343932434750896, 2);
  sqcRYGate(q, -2.9623883833560836, 3);
  sqcRZGate(q, -2.115800365436912, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6964173813944727, 0);
  sqcRZGate(q, 1.4805318150743458, 0);
  sqcRYGate(q, 1.9223780770100625, 1);
  sqcRZGate(q, -2.114559027515881, 1);
  sqcRYGate(q, 0.7542286032379714, 2);
  sqcRZGate(q, -1.4531696115360653, 2);
  sqcRYGate(q, -1.310647686858749, 3);
  sqcRZGate(q, -1.5703314803913082, 3);

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
