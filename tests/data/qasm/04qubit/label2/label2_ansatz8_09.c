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

  sqcRYGate(q, 0.6084473479289109, 0);
  sqcRYGate(q, -3.130147310652485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.140457687457881, 0);
  sqcRYGate(q, -2.187034549512793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21185237795326547, 2);
  sqcRYGate(q, -2.0102363770618608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2842890128701177, 2);
  sqcRYGate(q, -3.06879296351063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7823893656857166, 0);
  sqcRYGate(q, 1.3655460030785949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6238647200746619, 0);
  sqcRYGate(q, -0.44793190719544373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05766491128857359, 1);
  sqcRYGate(q, 0.6978488803308531, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21481704950902714, 1);
  sqcRYGate(q, -1.5198413445561139, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3929633330128386, 0);
  sqcRYGate(q, 1.9997150138561548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9640310479522061, 0);
  sqcRYGate(q, -2.9229516907754522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.502840036362274, 2);
  sqcRYGate(q, 1.4729986381773834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8606041622322295, 2);
  sqcRYGate(q, 0.8238872619638533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.538448957521818, 0);
  sqcRYGate(q, 0.6110317585448326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.331827883353645, 0);
  sqcRYGate(q, 1.8358635917349657, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.569592524334364, 1);
  sqcRYGate(q, 1.4379341918739117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2202091264261083, 1);
  sqcRYGate(q, 0.038321595887775395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4861944004227965, 0);
  sqcRYGate(q, -0.4023442134496296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0463482728260525, 0);
  sqcRYGate(q, 2.003737934434702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9384428250915615, 2);
  sqcRYGate(q, 1.7211184799820145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.330654550037748, 2);
  sqcRYGate(q, -2.4801301177944346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0057602077551033, 0);
  sqcRYGate(q, 0.5242745216742593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.923685279649344, 0);
  sqcRYGate(q, -1.5994383225109816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.02150016571402613, 1);
  sqcRYGate(q, -0.3413934070155115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.281770189364198, 1);
  sqcRYGate(q, -0.7323655671226952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.149650332292392, 0);
  sqcRYGate(q, -2.857272403820093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5694705149527555, 0);
  sqcRYGate(q, -2.294798914004762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1009925465476114, 2);
  sqcRYGate(q, -1.2846017338769964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6611043908363126, 2);
  sqcRYGate(q, -0.9122394998652447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1009169751538428, 0);
  sqcRYGate(q, -0.34287752469734384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.554600315465789, 0);
  sqcRYGate(q, 3.0404194983572053, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.037458828823498, 1);
  sqcRYGate(q, 0.6559378861073543, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2440639675034353, 1);
  sqcRYGate(q, 0.5381449694113163, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5505568010619539, 0);
  sqcRYGate(q, 1.8898550941676977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1575702494696416, 0);
  sqcRYGate(q, 0.2766637410434941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9106540280642752, 2);
  sqcRYGate(q, -1.2964823427446142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9546411043775258, 2);
  sqcRYGate(q, -0.6009273616495194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4603012065728125, 0);
  sqcRYGate(q, -0.9175165227819293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.160892211454902, 0);
  sqcRYGate(q, 2.612860894199785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6253203724926406, 1);
  sqcRYGate(q, -1.3192065913600963, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4648364345664648, 1);
  sqcRYGate(q, 1.8463008949693085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7887499147132955, 0);
  sqcRYGate(q, 2.9822617850339164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3618594283726795, 0);
  sqcRYGate(q, -2.819402141945501, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6357851038393254, 2);
  sqcRYGate(q, -1.4580472619800489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2198182906532624, 2);
  sqcRYGate(q, 0.1400649784049417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4951416490737577, 0);
  sqcRYGate(q, 0.07991806170039871, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.339074696389801, 0);
  sqcRYGate(q, -1.5693369530168706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07539627690632322, 1);
  sqcRYGate(q, 3.089546014302602, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.280322992979544, 1);
  sqcRYGate(q, -0.962136336968535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4964953170343005, 0);
  sqcRYGate(q, -0.21793099212121625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6019536451692007, 0);
  sqcRYGate(q, -0.10158697371834703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3967144040926645, 2);
  sqcRYGate(q, 0.20821908760117455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3777915882121146, 2);
  sqcRYGate(q, -1.051894914595737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0163799755775185, 0);
  sqcRYGate(q, -1.1685663027209996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0558698004361051, 0);
  sqcRYGate(q, -0.13184508873730955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2374364090669387, 1);
  sqcRYGate(q, 1.044180626250857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.09446521466595378, 1);
  sqcRYGate(q, 0.3246088421559863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.945109364174562, 0);
  sqcRYGate(q, 1.0619978475838412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.950548176518063, 0);
  sqcRYGate(q, -2.282787745227748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3828610994805359, 2);
  sqcRYGate(q, -1.6986041497571118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5995936935504003, 2);
  sqcRYGate(q, 3.0932182135641226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5827730646243836, 0);
  sqcRYGate(q, -2.442628181730919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3615982220375062, 0);
  sqcRYGate(q, 0.9665710021174236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9108501382966583, 1);
  sqcRYGate(q, 2.648970234177664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6869222487374916, 1);
  sqcRYGate(q, -2.58308342757754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9348337582819255, 0);
  sqcRYGate(q, 2.1162878476492826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9073665441292817, 0);
  sqcRYGate(q, 0.4160187012463421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.27590449953855, 2);
  sqcRYGate(q, -2.6792401186205117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18668002958559277, 2);
  sqcRYGate(q, 0.4796099362498447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.118107874230743, 0);
  sqcRYGate(q, -2.5920532830349416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.676812371139641, 0);
  sqcRYGate(q, 2.483979482919216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.62501991868496, 1);
  sqcRYGate(q, 3.0920833403822647, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3661929852208976, 1);
  sqcRYGate(q, 2.793229223800893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5667273168290343, 0);
  sqcRYGate(q, 2.2566423454548614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9821185000376398, 0);
  sqcRYGate(q, -1.9301045597818076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.107346168058054, 2);
  sqcRYGate(q, 2.1091390012258726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23652843034287496, 2);
  sqcRYGate(q, -2.389150547638681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.704820721444336, 0);
  sqcRYGate(q, -2.865004055769614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9340868704136192, 0);
  sqcRYGate(q, -2.995302772676114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.48481793696099196, 1);
  sqcRYGate(q, -0.9859187734554856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8940342703780337, 1);
  sqcRYGate(q, -0.4753166520347465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5131123683191516, 0);
  sqcRYGate(q, -0.13112054323088088, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38103067981247046, 0);
  sqcRYGate(q, 1.6781531438420412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47219770393657334, 2);
  sqcRYGate(q, -1.4522164864985223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0187190170338365, 2);
  sqcRYGate(q, 1.6786089818932988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28936031598135636, 0);
  sqcRYGate(q, 3.053000486109166, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.065144282305177, 0);
  sqcRYGate(q, 0.26379756437574203, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4305044374705531, 1);
  sqcRYGate(q, 0.6268506372590918, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4433816171759561, 1);
  sqcRYGate(q, -3.0751751974431953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7277145625452457, 0);
  sqcRYGate(q, 2.7133734535163136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5391694279384636, 0);
  sqcRYGate(q, -3.078968119690515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.775283667210308, 2);
  sqcRYGate(q, -2.609678246571344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.382910458775504, 2);
  sqcRYGate(q, 1.2535624672565728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7079377638680084, 0);
  sqcRYGate(q, -0.8162234526842579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9238102559101242, 0);
  sqcRYGate(q, -0.3300251500336442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9770843325910414, 1);
  sqcRYGate(q, -0.9669356254033074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7895923226479304, 1);
  sqcRYGate(q, -0.0047194225223307525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6409186125181696, 0);
  sqcRYGate(q, -2.525576346965016, 1);
  sqcRYGate(q, -2.8889254173933576, 2);
  sqcRYGate(q, -1.481799753631589, 3);

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
