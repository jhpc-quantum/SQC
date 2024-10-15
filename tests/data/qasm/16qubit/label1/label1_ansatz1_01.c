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

  sqcRYGate(q, 3.0087311115345274, 0);
  sqcRZGate(q, 1.4074156500050297, 0);
  sqcRYGate(q, 0.8146833042815542, 1);
  sqcRZGate(q, -2.9151898584636844, 1);
  sqcRYGate(q, -0.6506085156828987, 2);
  sqcRZGate(q, -0.36559450771570007, 2);
  sqcRYGate(q, -1.948225860900701, 3);
  sqcRZGate(q, 0.100894940736186, 3);
  sqcRYGate(q, 1.265458160427626, 4);
  sqcRZGate(q, -2.639208166768026, 4);
  sqcRYGate(q, 2.3838776861340394, 5);
  sqcRZGate(q, -0.32368767249134134, 5);
  sqcRYGate(q, -0.4037366962478357, 6);
  sqcRZGate(q, -3.0750213034983136, 6);
  sqcRYGate(q, -0.9625183624885448, 7);
  sqcRZGate(q, 0.16781844196393703, 7);
  sqcRYGate(q, 2.1791189021068895, 8);
  sqcRZGate(q, -2.9737849658520537, 8);
  sqcRYGate(q, -2.7378717945854083, 9);
  sqcRZGate(q, 0.0666402933588104, 9);
  sqcRYGate(q, -2.383870627721521, 10);
  sqcRZGate(q, 0.3236992703686888, 10);
  sqcRYGate(q, -1.8761888078305475, 11);
  sqcRZGate(q, 0.5024302216062945, 11);
  sqcRYGate(q, 1.1932791739057924, 12);
  sqcRZGate(q, 0.10093035528519895, 12);
  sqcRYGate(q, -2.4909570785334343, 13);
  sqcRZGate(q, -0.36557580490573255, 13);
  sqcRYGate(q, 0.8146137380905776, 14);
  sqcRZGate(q, 2.915145012853752, 14);
  sqcRYGate(q, 0.13288092252031358, 15);
  sqcRZGate(q, 1.407312445100116, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.903540932788042, 0);
  sqcRZGate(q, 0.9169123794905671, 0);
  sqcRYGate(q, -2.3643751715424366, 1);
  sqcRZGate(q, -2.986252820100589, 1);
  sqcRYGate(q, -0.4355425128219495, 2);
  sqcRZGate(q, -0.2818397278944387, 2);
  sqcRYGate(q, -2.5919519555300927, 3);
  sqcRZGate(q, 2.582231753858603, 3);
  sqcRYGate(q, 2.796815906293038, 4);
  sqcRZGate(q, 0.28316775841242997, 4);
  sqcRYGate(q, -2.7834727364246135, 5);
  sqcRZGate(q, 0.4010230257050762, 5);
  sqcRYGate(q, -0.6258870387304771, 6);
  sqcRZGate(q, 2.3654166627754463, 6);
  sqcRYGate(q, -2.374233065037928, 7);
  sqcRZGate(q, -0.06275108059086862, 7);
  sqcRYGate(q, 2.3742296272416037, 8);
  sqcRZGate(q, -0.0627634410913038, 8);
  sqcRYGate(q, -2.5156910677405473, 9);
  sqcRZGate(q, 0.7762517849498698, 9);
  sqcRYGate(q, 2.7834533725608384, 10);
  sqcRZGate(q, 2.740610668572193, 10);
  sqcRYGate(q, -0.3447772244392651, 11);
  sqcRZGate(q, -0.2831372660450707, 11);
  sqcRYGate(q, 0.5496671678065996, 12);
  sqcRZGate(q, 0.5592818187491579, 12);
  sqcRYGate(q, 2.706018513156896, 13);
  sqcRZGate(q, -2.8597159003158534, 13);
  sqcRYGate(q, 0.7772367168982796, 14);
  sqcRZGate(q, -2.9862712155950537, 14);
  sqcRYGate(q, -1.237981758654711, 15);
  sqcRZGate(q, -0.9168119338708003, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.7181975659953244, 0);
  sqcRZGate(q, 1.5079687376596658, 0);
  sqcRYGate(q, 0.6459831938181598, 1);
  sqcRZGate(q, -0.19214632149218813, 1);
  sqcRYGate(q, 1.2961274352923, 2);
  sqcRZGate(q, 1.8565455765896328, 2);
  sqcRYGate(q, -1.5560673644077028, 3);
  sqcRZGate(q, 0.4949480007347322, 3);
  sqcRYGate(q, 0.7574186896615833, 4);
  sqcRZGate(q, -2.770923582395917, 4);
  sqcRYGate(q, 2.065275311324288, 5);
  sqcRZGate(q, 2.5127564935134004, 5);
  sqcRYGate(q, 0.4802095845374303, 6);
  sqcRZGate(q, -0.10834710809906964, 6);
  sqcRYGate(q, 2.465443313190148, 7);
  sqcRZGate(q, -3.0011134494265517, 7);
  sqcRYGate(q, 2.46546193364857, 8);
  sqcRZGate(q, -3.001114942069926, 8);
  sqcRYGate(q, -0.4801948955005022, 9);
  sqcRZGate(q, 0.10829726399770649, 9);
  sqcRYGate(q, -1.0762895423576575, 10);
  sqcRZGate(q, 2.5126096766373136, 10);
  sqcRYGate(q, 0.7573666954082823, 11);
  sqcRZGate(q, -0.37068180583834826, 11);
  sqcRYGate(q, 1.556022479154481, 12);
  sqcRZGate(q, 2.646579065449269, 12);
  sqcRYGate(q, -1.8454701931621154, 13);
  sqcRZGate(q, -1.2850989489430864, 13);
  sqcRYGate(q, -2.4956027815795103, 14);
  sqcRZGate(q, -2.9494256537064993, 14);
  sqcRYGate(q, -0.42335183162069423, 15);
  sqcRZGate(q, 1.5078994821754872, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.9708445522575906, 0);
  sqcRZGate(q, -0.6243523640340781, 0);
  sqcRYGate(q, 1.925651156259386, 1);
  sqcRZGate(q, 1.492461408194845, 1);
  sqcRYGate(q, 0.13295105369895738, 2);
  sqcRZGate(q, -0.5091413047675317, 2);
  sqcRYGate(q, -0.23035234859332357, 3);
  sqcRZGate(q, -1.6102553535910387, 3);
  sqcRYGate(q, 2.688397177923988, 4);
  sqcRZGate(q, 1.6235779924154528, 4);
  sqcRYGate(q, -0.28821833377680317, 5);
  sqcRZGate(q, -1.720682986114837, 5);
  sqcRYGate(q, -0.2915074682316492, 6);
  sqcRZGate(q, -1.7389863502197098, 6);
  sqcRYGate(q, -1.2106845321396975, 7);
  sqcRZGate(q, -1.6410849097527085, 7);
  sqcRYGate(q, -1.930942491470418, 8);
  sqcRZGate(q, -1.5005053833945814, 8);
  sqcRYGate(q, -2.850092560353519, 9);
  sqcRZGate(q, 1.402545913236269, 9);
  sqcRYGate(q, -0.28822458923619454, 10);
  sqcRZGate(q, -1.720558496211897, 10);
  sqcRYGate(q, 2.6884021553874216, 11);
  sqcRZGate(q, -1.6235454659901654, 11);
  sqcRYGate(q, 0.23035638555491644, 12);
  sqcRZGate(q, -1.5312117007438246, 12);
  sqcRYGate(q, -0.13294430467786267, 13);
  sqcRZGate(q, -0.5091113740935976, 13);
  sqcRYGate(q, 1.2159177834238235, 14);
  sqcRZGate(q, -1.6491095315491566, 14);
  sqcRYGate(q, 1.9709179349787456, 15);
  sqcRZGate(q, -0.6245122385313202, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0667101812566915, 0);
  sqcRZGate(q, -2.459558313543719, 0);
  sqcRYGate(q, 1.622387805415002, 1);
  sqcRZGate(q, -0.1619387766584049, 1);
  sqcRYGate(q, -2.006553778443707, 2);
  sqcRZGate(q, -0.3569777079674745, 2);
  sqcRYGate(q, -2.591512156760747, 3);
  sqcRZGate(q, 2.8263769467672133, 3);
  sqcRYGate(q, 1.6211757845576062, 4);
  sqcRZGate(q, 2.2912968867618893, 4);
  sqcRYGate(q, -1.1099084105707944, 5);
  sqcRZGate(q, 0.7220238382157397, 5);
  sqcRYGate(q, -2.3457482872859385, 6);
  sqcRZGate(q, 0.03630911217371424, 6);
  sqcRYGate(q, -2.124245025928559, 7);
  sqcRZGate(q, 3.01206926427939, 7);
  sqcRYGate(q, 2.1242608892618673, 8);
  sqcRZGate(q, 3.0472775942125927, 8);
  sqcRYGate(q, -0.7958405205430363, 9);
  sqcRZGate(q, -0.26013560699511434, 9);
  sqcRYGate(q, -2.031672903091541, 10);
  sqcRZGate(q, -0.9458686060037538, 10);
  sqcRYGate(q, -1.621212783196128, 11);
  sqcRZGate(q, -2.5151412616378344, 11);
  sqcRYGate(q, 2.5914738341884114, 12);
  sqcRZGate(q, -3.0501427162531134, 12);
  sqcRYGate(q, 1.1350395406914053, 13);
  sqcRZGate(q, -3.0084332603035606, 13);
  sqcRYGate(q, -1.519205046084518, 14);
  sqcRZGate(q, 3.079589858070321, 14);
  sqcRYGate(q, 0.07486964374427707, 15);
  sqcRZGate(q, 2.2358011539418654, 15);

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
