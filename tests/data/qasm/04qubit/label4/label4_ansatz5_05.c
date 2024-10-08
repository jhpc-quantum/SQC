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

  sqcRYGate(q, 1.2301110427148565, 0);
  sqcRYGate(q, 1.9067671941330344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5392875409283802, 0);
  sqcRYGate(q, -2.2481336628888187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7922486543632814, 2);
  sqcRYGate(q, -0.9248932043027333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9909401045843262, 2);
  sqcRYGate(q, -2.0617778802247164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09130740955121172, 1);
  sqcRYGate(q, -3.0138612553816966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4567198102878705, 1);
  sqcRYGate(q, -0.8822755530755869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4287380231693345, 0);
  sqcRYGate(q, 2.5613592178738793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7378092976194921, 0);
  sqcRYGate(q, 0.18185904987839674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9904535040264983, 2);
  sqcRYGate(q, -2.2902887355833093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7320085643666152, 2);
  sqcRYGate(q, 2.377342210999305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8920962820779137, 1);
  sqcRYGate(q, 1.155853866875506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6302933371411386, 1);
  sqcRYGate(q, -2.262624692760775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2101683029066854, 0);
  sqcRYGate(q, -1.6608165359466758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.713031716626876, 0);
  sqcRYGate(q, 2.693750350454175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.519567955529715, 2);
  sqcRYGate(q, 1.448619402348739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.395835263880506, 2);
  sqcRYGate(q, -1.7162475428575659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4838570002693778, 1);
  sqcRYGate(q, -1.8253922721115194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3979166920943502, 1);
  sqcRYGate(q, 0.8768277962832229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.029779900851307283, 0);
  sqcRYGate(q, -0.5360540417401642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.867211699576371, 0);
  sqcRYGate(q, 2.794669292844158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7654015849773117, 2);
  sqcRYGate(q, 2.058015094273564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9477507390789577, 2);
  sqcRYGate(q, 0.8413630406852016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.596101185200125, 1);
  sqcRYGate(q, -2.179071480096777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3799806829641996, 1);
  sqcRYGate(q, 1.5845496862578363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2592094745187765, 0);
  sqcRYGate(q, 2.5921202098633866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.109405652853021, 0);
  sqcRYGate(q, 0.0357535006866092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6178450649671386, 2);
  sqcRYGate(q, 1.392228020868151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37167987866961827, 2);
  sqcRYGate(q, -0.4905945569986674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.669750920371189, 1);
  sqcRYGate(q, -1.8548996516124445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15442076526414183, 1);
  sqcRYGate(q, 0.7553118272464943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.556256783630875, 0);
  sqcRYGate(q, -2.6346299652996352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1595413374004426, 0);
  sqcRYGate(q, -1.8082418423543816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7949967985543724, 2);
  sqcRYGate(q, 1.7903089302892363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16562875007815325, 2);
  sqcRYGate(q, 1.2089556165811395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29083756145558315, 1);
  sqcRYGate(q, -2.5693830586763973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.149722490563299, 1);
  sqcRYGate(q, -2.333771896199868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2896648944614926, 0);
  sqcRYGate(q, -2.8298348282308465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5495290889170832, 0);
  sqcRYGate(q, 0.9247795253593005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1375036934804896, 2);
  sqcRYGate(q, 1.4887245357761145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03968298418549594, 2);
  sqcRYGate(q, -1.7392448854407032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3393872307773576, 1);
  sqcRYGate(q, 3.124291590834486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18800253758107144, 1);
  sqcRYGate(q, -1.9640454026532854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7727580382990968, 0);
  sqcRYGate(q, -2.5943897113382692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1879180684767117, 0);
  sqcRYGate(q, -1.205951394951211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9077331801998714, 2);
  sqcRYGate(q, 1.5927104523200366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.110642794519145, 2);
  sqcRYGate(q, -2.469514987586611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8272830802040625, 1);
  sqcRYGate(q, -2.269083821475732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6792722772255697, 1);
  sqcRYGate(q, 2.830893620481643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4219352537584893, 0);
  sqcRYGate(q, -2.9588833074776337, 1);
  sqcRYGate(q, -1.2639267984941496, 2);
  sqcRYGate(q, -0.5833327230136867, 3);

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
