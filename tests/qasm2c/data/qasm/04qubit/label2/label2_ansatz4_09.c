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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.5461036903373198, 0);
  sqcRZGate(q, 3.0449892388524167, 0);
  sqcRYGate(q, 1.4982160177487607, 1);
  sqcRZGate(q, -1.425794843573045, 1);
  sqcRYGate(q, 0.8310459055147558, 2);
  sqcRZGate(q, -2.491104763253852, 2);
  sqcRYGate(q, -1.739562264551054, 3);
  sqcRZGate(q, 2.805423912438869, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5365226639725035, 0);
  sqcRZGate(q, -1.8908925749788894, 0);
  sqcRYGate(q, 0.885359575606338, 1);
  sqcRZGate(q, -2.5585742892268075, 1);
  sqcRYGate(q, -2.0226497268621944, 2);
  sqcRZGate(q, 1.8902135135376996, 2);
  sqcRYGate(q, 0.9982896026412219, 3);
  sqcRZGate(q, -1.9222810581143173, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.535175836720251, 0);
  sqcRZGate(q, -0.32557863915049445, 0);
  sqcRYGate(q, 0.5680320700460451, 1);
  sqcRZGate(q, 2.662873903561432, 1);
  sqcRYGate(q, -0.41922325436515345, 2);
  sqcRZGate(q, 1.3683455777271352, 2);
  sqcRYGate(q, -3.057453758621259, 3);
  sqcRZGate(q, -2.5587063884700516, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.71210922233559, 0);
  sqcRZGate(q, -1.2932910307110657, 0);
  sqcRYGate(q, 2.7586011369590855, 1);
  sqcRZGate(q, -0.2320735477221794, 1);
  sqcRYGate(q, -2.6990577186269182, 2);
  sqcRZGate(q, -2.871610734023086, 2);
  sqcRYGate(q, 0.7645279361483537, 3);
  sqcRZGate(q, 2.1415031541541287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1275268243108112, 0);
  sqcRZGate(q, -1.6664815519862402, 0);
  sqcRYGate(q, 0.46464147961357366, 1);
  sqcRZGate(q, -2.3861300526775957, 1);
  sqcRYGate(q, 3.0678580397017563, 2);
  sqcRZGate(q, 0.7627168171444456, 2);
  sqcRYGate(q, -0.25743648535496, 3);
  sqcRZGate(q, -0.6902249163473799, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.26523379830188265, 0);
  sqcRZGate(q, 0.22600953777735577, 0);
  sqcRYGate(q, 1.3712298946525339, 1);
  sqcRZGate(q, -2.6215174717940544, 1);
  sqcRYGate(q, 1.3623790883729747, 2);
  sqcRZGate(q, -0.5914481408504829, 2);
  sqcRYGate(q, -0.5223084903890272, 3);
  sqcRZGate(q, -3.0695292784495436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9579202821476285, 0);
  sqcRZGate(q, -2.8162937723036388, 0);
  sqcRYGate(q, 1.1586691601384036, 1);
  sqcRZGate(q, -1.659314824434469, 1);
  sqcRYGate(q, -2.563744215222968, 2);
  sqcRZGate(q, 2.8977133021739774, 2);
  sqcRYGate(q, 3.072266397575885, 3);
  sqcRZGate(q, -2.4022863643987495, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5092393612403368, 0);
  sqcRZGate(q, -1.840107208613662, 0);
  sqcRYGate(q, 0.732994591040616, 1);
  sqcRZGate(q, 0.8820329938347958, 1);
  sqcRYGate(q, 3.127427457336015, 2);
  sqcRZGate(q, 1.4615171442519899, 2);
  sqcRYGate(q, -0.9619755603584119, 3);
  sqcRZGate(q, 0.6127584766378066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7950328853743707, 0);
  sqcRZGate(q, -3.1122823880817396, 0);
  sqcRYGate(q, -2.096644512619779, 1);
  sqcRZGate(q, -1.112199756628094, 1);
  sqcRYGate(q, -1.3042416691788423, 2);
  sqcRZGate(q, -1.8247384531547803, 2);
  sqcRYGate(q, 1.3073217522457714, 3);
  sqcRZGate(q, -2.151428215707949, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1638168763102303, 0);
  sqcRZGate(q, 2.5999280021226316, 0);
  sqcRYGate(q, 1.1371602050777163, 1);
  sqcRZGate(q, 3.117558481807898, 1);
  sqcRYGate(q, -2.982103261177542, 2);
  sqcRZGate(q, -2.4551340440971474, 2);
  sqcRYGate(q, -1.4604705028691098, 3);
  sqcRZGate(q, -0.1797619605694607, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3756667204146438, 0);
  sqcRZGate(q, -2.37550354254655, 0);
  sqcRYGate(q, -1.387586792720266, 1);
  sqcRZGate(q, -1.4535547302372462, 1);
  sqcRYGate(q, 1.9800587290065907, 2);
  sqcRZGate(q, 0.098472644785069, 2);
  sqcRYGate(q, -2.691771058709928, 3);
  sqcRZGate(q, -2.4242140841908113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7834675308078048, 0);
  sqcRZGate(q, 0.3206421337645659, 0);
  sqcRYGate(q, -2.829785999155967, 1);
  sqcRZGate(q, -1.2184366302422331, 1);
  sqcRYGate(q, -1.7901052964240227, 2);
  sqcRZGate(q, -1.515688699628856, 2);
  sqcRYGate(q, 2.2781554677831637, 3);
  sqcRZGate(q, 1.0109975749252076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.96563348879029, 0);
  sqcRZGate(q, -2.3137296032500183, 0);
  sqcRYGate(q, 0.09628947369370032, 1);
  sqcRZGate(q, -2.4492528658459283, 1);
  sqcRYGate(q, -0.15073115994670866, 2);
  sqcRZGate(q, 1.0020038952659787, 2);
  sqcRYGate(q, 2.1394068021211696, 3);
  sqcRZGate(q, 1.825432355576255, 3);

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
