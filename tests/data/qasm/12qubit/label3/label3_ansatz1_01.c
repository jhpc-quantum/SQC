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

  sqcRYGate(q, 1.1948269111537257, 0);
  sqcRZGate(q, 1.8996873407672865e-08, 0);
  sqcRYGate(q, -1.5707964337690985, 1);
  sqcRZGate(q, 0.13759431022161464, 1);
  sqcRYGate(q, 1.5707922146080646, 2);
  sqcRZGate(q, 1.3812610276237394, 2);
  sqcRYGate(q, 1.5045046964804012, 3);
  sqcRZGate(q, 1.570795596441748, 3);
  sqcRYGate(q, -1.5707954944114726, 4);
  sqcRZGate(q, -4.7761344269688426e-05, 4);
  sqcRYGate(q, -1.5707929436485266, 5);
  sqcRZGate(q, 1.570733422385265, 5);
  sqcRYGate(q, 1.570920535671033, 6);
  sqcRZGate(q, 7.154983123314196e-06, 6);
  sqcRYGate(q, 2.030308817363414, 7);
  sqcRZGate(q, -3.141591934120547, 7);
  sqcRYGate(q, -2.5625890158786433, 8);
  sqcRZGate(q, -9.058690741848495e-08, 8);
  sqcRYGate(q, -1.5707992247181795, 9);
  sqcRZGate(q, -1.5708001951002883, 9);
  sqcRYGate(q, -1.5707966960823743, 10);
  sqcRZGate(q, -2.486624595541649, 10);
  sqcRYGate(q, -2.7420234770105107, 11);
  sqcRZGate(q, 1.5707953346127546, 11);
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
  sqcRYGate(q, 1.5707971059392207, 0);
  sqcRZGate(q, -1.4378585437840057, 0);
  sqcRYGate(q, -2.9390598199087283, 1);
  sqcRZGate(q, 1.679788358085265, 1);
  sqcRYGate(q, 2.0150315069395943, 2);
  sqcRZGate(q, 0.3727697801529652, 2);
  sqcRYGate(q, -1.5707960625929207, 3);
  sqcRZGate(q, -3.141591680587367, 3);
  sqcRYGate(q, 1.5703238391442493, 4);
  sqcRZGate(q, 4.428302363591601e-08, 4);
  sqcRYGate(q, 3.1345824611579416, 5);
  sqcRZGate(q, 3.1415273865117244, 5);
  sqcRYGate(q, -0.0396684997807224, 6);
  sqcRZGate(q, 3.141585431265584, 6);
  sqcRYGate(q, 1.5708534531199227, 7);
  sqcRZGate(q, -3.1415925485740717, 7);
  sqcRYGate(q, -1.5707968715837748, 8);
  sqcRZGate(q, -1.570799357507891, 8);
  sqcRYGate(q, 1.1145460469020256, 9);
  sqcRZGate(q, 3.141570583767847, 9);
  sqcRYGate(q, 1.5707920690261323, 10);
  sqcRZGate(q, 1.5707999045776013, 10);
  sqcRYGate(q, -2.2753624438832896, 11);
  sqcRZGate(q, 1.4002097927950166, 11);
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
  sqcRYGate(q, 1.6015826156527735, 0);
  sqcRZGate(q, 0.3271894916524864, 0);
  sqcRYGate(q, -2.1310647667730676, 1);
  sqcRZGate(q, 1.6896567230479969, 1);
  sqcRYGate(q, 1.5708366738700932, 2);
  sqcRZGate(q, -1.464129711685619, 2);
  sqcRYGate(q, -0.16407301215217007, 3);
  sqcRZGate(q, 3.1415867133874, 3);
  sqcRYGate(q, 1.385940465085394, 4);
  sqcRZGate(q, -4.660476325779725e-08, 4);
  sqcRYGate(q, 2.9660373173996084, 5);
  sqcRZGate(q, 3.1415895742430617, 5);
  sqcRYGate(q, 1.1069548354280716, 6);
  sqcRZGate(q, 1.5707965163375979, 6);
  sqcRYGate(q, -1.5707969812686127, 7);
  sqcRZGate(q, -2.8545781229665375, 7);
  sqcRYGate(q, -0.15829444201597842, 8);
  sqcRZGate(q, -1.5707915472284626, 8);
  sqcRYGate(q, 1.6703914355061766, 9);
  sqcRZGate(q, -1.5707984942503388, 9);
  sqcRYGate(q, 1.5707985829006867, 10);
  sqcRZGate(q, -4.263832635409415e-06, 10);
  sqcRYGate(q, 3.141591997734937, 11);
  sqcRZGate(q, -3.0307318325169175, 11);
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
  sqcRYGate(q, -1.5707954977367589, 0);
  sqcRZGate(q, 0.9188390492014772, 0);
  sqcRYGate(q, -1.5706552511146032, 1);
  sqcRZGate(q, -1.570795952033044, 1);
  sqcRYGate(q, 0.00017077839209900247, 2);
  sqcRZGate(q, -0.10670558575307723, 2);
  sqcRYGate(q, 1.5708007671593769, 3);
  sqcRZGate(q, -1.570787153447145, 3);
  sqcRYGate(q, 1.5703232113836085, 4);
  sqcRZGate(q, -1.57085725715892, 4);
  sqcRYGate(q, 2.648338275396514, 5);
  sqcRZGate(q, -1.5707872467464545, 5);
  sqcRYGate(q, 2.6590178084863125, 6);
  sqcRZGate(q, -1.5707981774761464, 6);
  sqcRYGate(q, 1.570663727306835, 7);
  sqcRZGate(q, 3.1415274121518593, 7);
  sqcRYGate(q, 0.5310917914471034, 8);
  sqcRZGate(q, -1.570833913582222, 8);
  sqcRYGate(q, 1.5707954850152825, 9);
  sqcRZGate(q, -1.2344933235652887e-05, 9);
  sqcRYGate(q, 0.2646874631737779, 10);
  sqcRZGate(q, -0.11349236667591889, 10);
  sqcRYGate(q, -2.996085348705435e-06, 11);
  sqcRZGate(q, -2.9199883691713056, 11);
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
  sqcRYGate(q, -3.1415913771173436, 0);
  sqcRZGate(q, 0.7987495197248958, 0);
  sqcRYGate(q, -1.5708047997581573, 1);
  sqcRZGate(q, 1.4507017529306638, 1);
  sqcRYGate(q, -1.5707950980642806, 2);
  sqcRZGate(q, 1.450707008839079, 2);
  sqcRYGate(q, 1.570776713262297, 3);
  sqcRZGate(q, -0.12001445095604418, 3);
  sqcRYGate(q, 1.5707971479445348, 4);
  sqcRZGate(q, 1.450707082564997, 4);
  sqcRYGate(q, 1.5707675704953372, 5);
  sqcRZGate(q, -0.12009472293321632, 5);
  sqcRYGate(q, 1.5707641526016956, 6);
  sqcRZGate(q, -0.12008957952590077, 6);
  sqcRYGate(q, -1.5707862183653416, 7);
  sqcRZGate(q, -1.6908904906407103, 7);
  sqcRYGate(q, -1.5708002539789634, 8);
  sqcRZGate(q, -1.6908854662883204, 8);
  sqcRYGate(q, 1.570819510401835, 9);
  sqcRZGate(q, 3.0214989248713793, 9);
  sqcRYGate(q, 3.141551807154255, 10);
  sqcRZGate(q, -0.23358629641624873, 10);
  sqcRYGate(q, -3.1415677214910507, 11);
  sqcRZGate(q, -2.7586348749911775, 11);

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
