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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.834590118731442, 0);
  sqcRZGate(q, 2.691750962259131, 0);
  sqcRYGate(q, 1.6893415060115275, 1);
  sqcRZGate(q, -2.098331254623051, 1);
  sqcRYGate(q, 3.1217822884258095, 2);
  sqcRZGate(q, -1.6461538327626464, 2);
  sqcRYGate(q, 3.1411504455827486, 3);
  sqcRZGate(q, -1.5778032660793708, 3);
  sqcRYGate(q, 0.437049766240702, 4);
  sqcRZGate(q, -1.5806094182766188, 4);
  sqcRYGate(q, 1.5725647972027956, 5);
  sqcRZGate(q, 2.6291833235294058, 5);
  sqcRYGate(q, -0.7875427745618087, 6);
  sqcRZGate(q, -3.1378921876383714, 6);
  sqcRYGate(q, -1.5679335006463528, 7);
  sqcRZGate(q, -3.1147312051717013, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6499841378351591, 0);
  sqcRZGate(q, 2.463453285726678, 0);
  sqcRYGate(q, -1.8586866290818778, 1);
  sqcRZGate(q, -2.335877035563763, 1);
  sqcRYGate(q, -2.6206164162330516, 2);
  sqcRZGate(q, 0.09767806347258379, 2);
  sqcRYGate(q, -0.0023264916787626433, 3);
  sqcRZGate(q, -2.6219976696268144, 3);
  sqcRYGate(q, -0.41847334233476424, 4);
  sqcRZGate(q, 0.003966977996576099, 4);
  sqcRYGate(q, -2.514530946699607, 5);
  sqcRZGate(q, 1.742606542194443, 5);
  sqcRYGate(q, 1.572315103461471, 6);
  sqcRZGate(q, -1.606691761967733, 6);
  sqcRYGate(q, 1.661271328586991, 7);
  sqcRZGate(q, 2.4021992016584686, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.2277125693285484, 0);
  sqcRZGate(q, 1.1832412241210672, 0);
  sqcRYGate(q, -3.048021251933516, 1);
  sqcRZGate(q, 2.95375135289677, 1);
  sqcRYGate(q, 2.8733377563178157, 2);
  sqcRZGate(q, -3.1230724473968046, 2);
  sqcRYGate(q, -3.141510673574348, 3);
  sqcRZGate(q, 2.1446258320297384, 3);
  sqcRYGate(q, -2.3236596638975895, 4);
  sqcRZGate(q, 3.14095965138049, 4);
  sqcRYGate(q, 0.002644505684210152, 5);
  sqcRZGate(q, 1.8642416399241084, 5);
  sqcRYGate(q, 1.6551209525241521, 6);
  sqcRZGate(q, -0.8665327519355033, 6);
  sqcRYGate(q, 2.6840058577070116, 7);
  sqcRZGate(q, -2.7638671423946355, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.1288570111041154, 0);
  sqcRZGate(q, -1.1395584588075718, 0);
  sqcRYGate(q, 1.5345462867840407, 1);
  sqcRZGate(q, 0.9076080522997052, 1);
  sqcRYGate(q, 1.5672057511456683, 2);
  sqcRZGate(q, -1.5713121775244783, 2);
  sqcRYGate(q, 1.5709041172982532, 3);
  sqcRZGate(q, -1.5746487594243552, 3);
  sqcRYGate(q, 1.7745209401893423, 4);
  sqcRZGate(q, 2.310091503495889, 4);
  sqcRYGate(q, -1.1881019921776783, 5);
  sqcRZGate(q, -2.820331251288823, 5);
  sqcRYGate(q, -0.006557578513429347, 6);
  sqcRZGate(q, 3.1116046580544303, 6);
  sqcRYGate(q, 0.40608806493783933, 7);
  sqcRZGate(q, 1.4539469105871254, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.027949279675113434, 0);
  sqcRZGate(q, 0.010918670559129831, 0);
  sqcRYGate(q, -1.5709714332022882, 1);
  sqcRZGate(q, 1.5767172096538846, 1);
  sqcRYGate(q, 1.5709638015388911, 2);
  sqcRZGate(q, -1.5706408514493422, 2);
  sqcRYGate(q, -2.893242490338027, 3);
  sqcRZGate(q, -1.8422161354144082, 3);
  sqcRYGate(q, -0.0027293124013203105, 4);
  sqcRZGate(q, -0.7351344553017034, 4);
  sqcRYGate(q, -3.1409913777353284, 5);
  sqcRZGate(q, -1.8184092353097319, 5);
  sqcRYGate(q, 2.4656381665116713, 6);
  sqcRZGate(q, -2.542719929772501, 6);
  sqcRYGate(q, -0.35984121094637134, 7);
  sqcRZGate(q, -2.5217017514520035, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5708051331639705, 0);
  sqcRZGate(q, 1.1981540466793088, 0);
  sqcRYGate(q, 1.4804807082832998, 1);
  sqcRZGate(q, -2.9244341772118614, 1);
  sqcRYGate(q, 1.5714717930543483, 2);
  sqcRZGate(q, -0.0003317889858379368, 2);
  sqcRYGate(q, 0.0006913542038544662, 3);
  sqcRZGate(q, 1.932831555284795, 3);
  sqcRYGate(q, 1.570780658477898, 4);
  sqcRZGate(q, 1.5695211464708887, 4);
  sqcRYGate(q, 3.0421849076464262, 5);
  sqcRZGate(q, 1.56972270048679, 5);
  sqcRYGate(q, -1.5647997022517237, 6);
  sqcRZGate(q, 1.5678749460633554, 6);
  sqcRYGate(q, 2.4330013166013704, 7);
  sqcRZGate(q, 0.3665379011632302, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7610649671180303, 0);
  sqcRZGate(q, 1.858983053447777, 0);
  sqcRYGate(q, 2.376309031236778, 1);
  sqcRZGate(q, 2.8992877217430033, 1);
  sqcRYGate(q, -1.570971050295455, 2);
  sqcRZGate(q, -1.5351721538220564, 2);
  sqcRYGate(q, -0.7559385327817578, 3);
  sqcRZGate(q, -0.817010319600758, 3);
  sqcRYGate(q, 2.3589321182048986, 4);
  sqcRZGate(q, -0.000971139686553567, 4);
  sqcRYGate(q, 3.1413999547307694, 5);
  sqcRZGate(q, -1.2600517189364238, 5);
  sqcRYGate(q, -1.5712194049852553, 6);
  sqcRZGate(q, -0.4642894349635869, 6);
  sqcRYGate(q, -1.5704556425144824, 7);
  sqcRZGate(q, -0.17484749100200145, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.574075500273336, 0);
  sqcRZGate(q, 1.5753650051233459, 0);
  sqcRYGate(q, 1.5757479608042235, 1);
  sqcRZGate(q, -1.5874862804602579, 1);
  sqcRYGate(q, 0.0210295551369164, 2);
  sqcRZGate(q, -1.6122660790690122, 2);
  sqcRYGate(q, 3.141474578137199, 3);
  sqcRZGate(q, 1.4518129209147728, 3);
  sqcRYGate(q, 0.320647019197426, 4);
  sqcRZGate(q, -1.57085585813112, 4);
  sqcRYGate(q, -1.5708088209563558, 5);
  sqcRZGate(q, -1.5724458817339473, 5);
  sqcRYGate(q, 3.1369873085392586, 6);
  sqcRZGate(q, 1.137545725662471, 6);
  sqcRYGate(q, -3.141365497904458, 7);
  sqcRZGate(q, 1.3857866384150377, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.0218423170549418, 0);
  sqcRZGate(q, -1.5700562828651405, 0);
  sqcRYGate(q, 2.728854037039661, 1);
  sqcRZGate(q, 3.1288138615310572, 1);
  sqcRYGate(q, -1.5737695315504334, 2);
  sqcRZGate(q, 1.9163646018859115, 2);
  sqcRYGate(q, 3.138135622080793, 3);
  sqcRZGate(q, -2.509863755214024, 3);
  sqcRYGate(q, -1.5698355094575265, 4);
  sqcRZGate(q, 1.6850973274874261, 4);
  sqcRYGate(q, -2.4378534696048177, 5);
  sqcRZGate(q, -0.3886370153596808, 5);
  sqcRYGate(q, 3.137461226819148, 6);
  sqcRZGate(q, -3.110864992284588, 6);
  sqcRYGate(q, 1.5577704970242376, 7);
  sqcRZGate(q, 0.7457709317824136, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5707365768945654, 0);
  sqcRZGate(q, -0.7410400824769053, 0);
  sqcRYGate(q, 2.9529994950206033, 1);
  sqcRZGate(q, -3.135441941328093, 1);
  sqcRYGate(q, 0.00032006554253826385, 2);
  sqcRZGate(q, -1.9165562614367362, 2);
  sqcRYGate(q, 3.114968820377608, 3);
  sqcRZGate(q, -1.632665102252569, 3);
  sqcRYGate(q, -0.00041531993371268783, 4);
  sqcRZGate(q, -2.1414648130067153, 4);
  sqcRYGate(q, 5.067665513473792e-05, 5);
  sqcRZGate(q, -1.8562452396766203, 5);
  sqcRYGate(q, 0.19935675802891684, 6);
  sqcRZGate(q, 0.00022580432585010273, 6);
  sqcRYGate(q, 1.5708402127027616, 7);
  sqcRZGate(q, 1.570667884733055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.140877734316928, 0);
  sqcRZGate(q, -1.8172664204623497, 0);
  sqcRYGate(q, 1.571318837856981, 1);
  sqcRZGate(q, -2.64526926509499, 1);
  sqcRYGate(q, 1.5692238353489545, 2);
  sqcRZGate(q, 2.0673635400152994, 2);
  sqcRYGate(q, 1.5685693779829883, 3);
  sqcRZGate(q, 0.48704403723720757, 3);
  sqcRYGate(q, -0.0012763463925261225, 4);
  sqcRZGate(q, 0.9439857634761266, 4);
  sqcRYGate(q, 3.141513224801242, 5);
  sqcRZGate(q, 1.3985813371109148, 5);
  sqcRYGate(q, 1.5712638590958337, 6);
  sqcRZGate(q, 2.0692704087319966, 6);
  sqcRYGate(q, -1.5715293087850088, 7);
  sqcRZGate(q, -1.091717452303973, 7);

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
