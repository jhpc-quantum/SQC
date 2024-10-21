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

  sqcRYGate(q, 1.945625418497685, 0);
  sqcRZGate(q, 0.7078331642211393, 0);
  sqcRYGate(q, -2.4122367026797504, 1);
  sqcRZGate(q, 1.6008168636474531, 1);
  sqcRYGate(q, 0.8407695680184153, 2);
  sqcRZGate(q, 1.5523033113421816, 2);
  sqcRYGate(q, 2.8377386588920803, 3);
  sqcRZGate(q, -0.199542073220961, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.908362000445229, 0);
  sqcRZGate(q, -0.06113165665816476, 0);
  sqcRYGate(q, -1.6049003879476997, 1);
  sqcRZGate(q, -2.46102260470222, 1);
  sqcRYGate(q, 1.9658878044564523, 2);
  sqcRZGate(q, 0.8284048929174316, 2);
  sqcRYGate(q, 2.2177127733329227, 3);
  sqcRZGate(q, -2.400445463742441, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8101139613632933, 0);
  sqcRZGate(q, 1.5958944411757934, 0);
  sqcRYGate(q, -2.861161958365298, 1);
  sqcRZGate(q, -0.6047446107161056, 1);
  sqcRYGate(q, -2.0928801717350156, 2);
  sqcRZGate(q, 0.5767580272928956, 2);
  sqcRYGate(q, 2.9131049531176947, 3);
  sqcRZGate(q, -3.0396865790308922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8645406348593265, 0);
  sqcRZGate(q, -1.2961009936461654, 0);
  sqcRYGate(q, -1.72704160087289, 1);
  sqcRZGate(q, -3.047524831066722, 1);
  sqcRYGate(q, -3.1130431487407875, 2);
  sqcRZGate(q, 0.3930664807202966, 2);
  sqcRYGate(q, -2.0138177012191445, 3);
  sqcRZGate(q, 0.1304377357091786, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2772025069707773, 0);
  sqcRZGate(q, -0.747623837737298, 0);
  sqcRYGate(q, 2.7657978514625823, 1);
  sqcRZGate(q, -2.128043731713198, 1);
  sqcRYGate(q, -0.15578453591261798, 2);
  sqcRZGate(q, 0.7383229075793363, 2);
  sqcRYGate(q, -2.389456724095694, 3);
  sqcRZGate(q, 3.0887544449185302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.12902264600904179, 0);
  sqcRZGate(q, 1.5899853473395922, 0);
  sqcRYGate(q, -0.13220619177750326, 1);
  sqcRZGate(q, -3.089242307817487, 1);
  sqcRYGate(q, 0.24042103923487837, 2);
  sqcRZGate(q, -1.9971318209828315, 2);
  sqcRYGate(q, 3.138411499064952, 3);
  sqcRZGate(q, 2.61789025400422, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4812264341553911, 0);
  sqcRZGate(q, 1.9328442523536804, 0);
  sqcRYGate(q, -0.6482299388086359, 1);
  sqcRZGate(q, -0.916420101767409, 1);
  sqcRYGate(q, -0.9232610518589573, 2);
  sqcRZGate(q, -1.5832149149330157, 2);
  sqcRYGate(q, 2.8505966266586897, 3);
  sqcRZGate(q, 1.2515671151627095, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.078185671334463, 0);
  sqcRZGate(q, 2.998284074257632, 0);
  sqcRYGate(q, 1.7520640229310895, 1);
  sqcRZGate(q, -1.760127273366013, 1);
  sqcRYGate(q, 1.534062226963285, 2);
  sqcRZGate(q, 1.4549937935528625, 2);
  sqcRYGate(q, -1.1819045772767667, 3);
  sqcRZGate(q, 1.5841584677083826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.976961222827241, 0);
  sqcRZGate(q, -0.5949490402409561, 0);
  sqcRYGate(q, -0.8774171836738127, 1);
  sqcRZGate(q, -0.705590469532345, 1);
  sqcRYGate(q, 0.6397454048447875, 2);
  sqcRZGate(q, 2.2138156914528455, 2);
  sqcRYGate(q, -2.0553598529117867, 3);
  sqcRZGate(q, 0.5219157529815934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.441733852934264, 0);
  sqcRZGate(q, 2.392753414521439, 0);
  sqcRYGate(q, -2.195579707807923, 1);
  sqcRZGate(q, -0.5589454727311959, 1);
  sqcRYGate(q, -2.6716872537860032, 2);
  sqcRZGate(q, 2.629800387002824, 2);
  sqcRYGate(q, -3.080866957630818, 3);
  sqcRZGate(q, 1.078631954857551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8973944093776706, 0);
  sqcRZGate(q, 2.8695852920103433, 0);
  sqcRYGate(q, 0.009410897142470705, 1);
  sqcRZGate(q, -2.4946986912336735, 1);
  sqcRYGate(q, -0.5293018884109983, 2);
  sqcRZGate(q, 1.4305469255054901, 2);
  sqcRYGate(q, 1.7558030965176512, 3);
  sqcRZGate(q, -2.975842881574189, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2017202605136212, 0);
  sqcRZGate(q, 3.0109697495265535, 0);
  sqcRYGate(q, -2.5828604400894, 1);
  sqcRZGate(q, -0.921637772869221, 1);
  sqcRYGate(q, -0.5413736674407152, 2);
  sqcRZGate(q, 1.2493859534985745, 2);
  sqcRYGate(q, 1.7712744189895115, 3);
  sqcRZGate(q, -1.4111765421369125, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.288164119966104, 0);
  sqcRZGate(q, 0.13657636402308082, 0);
  sqcRYGate(q, 2.9301515626595274, 1);
  sqcRZGate(q, -0.39915586113266954, 1);
  sqcRYGate(q, -1.2085192355735908, 2);
  sqcRZGate(q, 0.9972149491026228, 2);
  sqcRYGate(q, -0.3884264218661295, 3);
  sqcRZGate(q, -0.9345589461596423, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.13703680465871937, 0);
  sqcRZGate(q, -0.010651365201854723, 0);
  sqcRYGate(q, 0.10983751485349112, 1);
  sqcRZGate(q, -2.448151408442845, 1);
  sqcRYGate(q, 1.2591965003095034, 2);
  sqcRZGate(q, -2.0943152644073635, 2);
  sqcRYGate(q, 0.48154074118439755, 3);
  sqcRZGate(q, 2.829099212630849, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3560390793589694, 0);
  sqcRZGate(q, -1.6955611739547698, 0);
  sqcRYGate(q, 1.6804073481013098, 1);
  sqcRZGate(q, -0.7347496268433842, 1);
  sqcRYGate(q, -1.0782084523001045, 2);
  sqcRZGate(q, 2.019199378975019, 2);
  sqcRYGate(q, 2.0877943724010546, 3);
  sqcRZGate(q, -1.079330987651259, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.911483893210894, 0);
  sqcRZGate(q, 2.467622831633546, 0);
  sqcRYGate(q, -2.1621202759061537, 1);
  sqcRZGate(q, -0.04789582787158391, 1);
  sqcRYGate(q, 1.163591964236371, 2);
  sqcRZGate(q, 3.119781469791949, 2);
  sqcRYGate(q, -2.202975263995871, 3);
  sqcRZGate(q, -1.1419164975126987, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.43367727792755767, 0);
  sqcRZGate(q, -1.3465622543744358, 0);
  sqcRYGate(q, 1.8131988464846716, 1);
  sqcRZGate(q, -1.6488474660449564, 1);
  sqcRYGate(q, 2.283256317270568, 2);
  sqcRZGate(q, 1.4152398090028575, 2);
  sqcRYGate(q, 2.7898335411566606, 3);
  sqcRZGate(q, 2.4632013798627495, 3);

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
