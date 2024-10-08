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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -3.043901239084078, 0);
  sqcRZGate(q, -0.5270623938897243, 0);
  sqcRYGate(q, -0.005807198488513522, 1);
  sqcRZGate(q, -2.4552105728964957, 1);
  sqcRYGate(q, 3.1082658217804755, 2);
  sqcRZGate(q, 2.3831607338575727, 2);
  sqcRYGate(q, -0.7065350057875888, 3);
  sqcRZGate(q, -0.16405742787622657, 3);
  sqcRYGate(q, -0.8257564674922175, 4);
  sqcRZGate(q, 1.8458341691527895, 4);
  sqcRYGate(q, 0.05059553158850427, 5);
  sqcRZGate(q, -1.5284313655289736, 5);
  sqcRYGate(q, -1.8864795156462257, 6);
  sqcRZGate(q, -1.6662918544783156, 6);
  sqcRYGate(q, -1.1724126247525337, 7);
  sqcRZGate(q, 0.3576464889592179, 7);
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
  sqcRYGate(q, -0.05268121690031258, 0);
  sqcRZGate(q, -2.7980087940440264, 0);
  sqcRYGate(q, 1.5710944269586788, 1);
  sqcRZGate(q, 2.90056729974315, 1);
  sqcRYGate(q, 1.584715175326635, 2);
  sqcRZGate(q, 1.7320320826244942, 2);
  sqcRYGate(q, 0.8693366844960871, 3);
  sqcRZGate(q, 0.7028443081472203, 3);
  sqcRYGate(q, 1.3523235610539777, 4);
  sqcRZGate(q, 1.8858943056127782, 4);
  sqcRYGate(q, -2.0152585669407577, 5);
  sqcRZGate(q, -0.16948250186934466, 5);
  sqcRYGate(q, -2.3662630976971495, 6);
  sqcRZGate(q, 2.5698206644404826, 6);
  sqcRYGate(q, -2.618510736786566, 7);
  sqcRZGate(q, 1.7721000733674659, 7);
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
  sqcRYGate(q, 1.572452539705834, 0);
  sqcRZGate(q, -0.8822202730328043, 0);
  sqcRYGate(q, -3.1383681228094362, 1);
  sqcRZGate(q, -0.5611307377304687, 1);
  sqcRYGate(q, 1.481532118173716, 2);
  sqcRZGate(q, 1.0137530337797287, 2);
  sqcRYGate(q, -0.003419427959968857, 3);
  sqcRZGate(q, 0.9560507665968975, 3);
  sqcRYGate(q, 0.015462546120154004, 4);
  sqcRZGate(q, 0.7691098706310172, 4);
  sqcRYGate(q, -1.5635103875742977, 5);
  sqcRZGate(q, -2.6196162165329735, 5);
  sqcRYGate(q, 2.16167322742438, 6);
  sqcRZGate(q, -0.27976498359823565, 6);
  sqcRYGate(q, -0.7766191660202869, 7);
  sqcRZGate(q, 0.0007718377671454206, 7);
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
  sqcRYGate(q, 1.1414387466297669, 0);
  sqcRZGate(q, 3.0959269686350277, 0);
  sqcRYGate(q, 2.5443430664016127, 1);
  sqcRZGate(q, 2.7618508457828463, 1);
  sqcRYGate(q, -0.9151896251098934, 2);
  sqcRZGate(q, 0.9989113165795809, 2);
  sqcRYGate(q, 1.1487158077209787, 3);
  sqcRZGate(q, 1.925318170939068, 3);
  sqcRYGate(q, -1.0812576695627496, 4);
  sqcRZGate(q, -0.021070131480934375, 4);
  sqcRYGate(q, -0.6143142706777431, 5);
  sqcRZGate(q, 1.0196291472425065, 5);
  sqcRYGate(q, -0.5924905800396534, 6);
  sqcRZGate(q, -1.6027540172995394, 6);
  sqcRYGate(q, 0.8280547566721176, 7);
  sqcRZGate(q, -0.004121758827815664, 7);
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
  sqcRYGate(q, -0.7564780534802735, 0);
  sqcRZGate(q, 0.0007829706990982123, 0);
  sqcRYGate(q, 1.5721009085829614, 1);
  sqcRZGate(q, -0.0024871996987523275, 1);
  sqcRYGate(q, -1.6660144697448862, 2);
  sqcRZGate(q, -2.692413826259347, 2);
  sqcRYGate(q, 0.02103963736464376, 3);
  sqcRZGate(q, -1.451217131728799, 3);
  sqcRYGate(q, -1.8625327393647202, 4);
  sqcRZGate(q, 2.4927591911132723, 4);
  sqcRYGate(q, -2.672294665991253, 5);
  sqcRZGate(q, -1.5937021747387157, 5);
  sqcRYGate(q, -0.4991046684801896, 6);
  sqcRZGate(q, -0.020377861942187714, 6);
  sqcRYGate(q, -1.0788908164739566, 7);
  sqcRZGate(q, 0.533169831316455, 7);
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
  sqcRYGate(q, 1.550531326441237, 0);
  sqcRZGate(q, 1.568460285490577, 0);
  sqcRYGate(q, 2.426179245079989, 1);
  sqcRZGate(q, 3.1367501725693163, 1);
  sqcRYGate(q, -0.009377144423045713, 2);
  sqcRZGate(q, -0.36820488937844165, 2);
  sqcRYGate(q, -3.140836828271037, 3);
  sqcRZGate(q, -1.4581469829019174, 3);
  sqcRYGate(q, 3.137617996525628, 4);
  sqcRZGate(q, -0.6375793990569633, 4);
  sqcRYGate(q, -3.116991867406892, 5);
  sqcRZGate(q, 0.09590163408802609, 5);
  sqcRYGate(q, 0.3939126092918935, 6);
  sqcRZGate(q, 3.1363954637487534, 6);
  sqcRYGate(q, -2.401267820749494, 7);
  sqcRZGate(q, 2.3104379328103826, 7);
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
  sqcRYGate(q, -1.5650648011201627, 0);
  sqcRZGate(q, 2.082186465264344, 0);
  sqcRYGate(q, -1.4291285821798823, 1);
  sqcRZGate(q, 3.1185615451205555, 1);
  sqcRYGate(q, -1.5710956886471608, 2);
  sqcRZGate(q, 3.1357703613355734, 2);
  sqcRYGate(q, -0.014863694003477246, 3);
  sqcRZGate(q, 0.41077803205262425, 3);
  sqcRYGate(q, 1.8375061754961228, 4);
  sqcRZGate(q, -0.0010564904725507418, 4);
  sqcRYGate(q, 1.549354484893574, 5);
  sqcRZGate(q, -0.6455051453373795, 5);
  sqcRYGate(q, 2.758801968939152, 6);
  sqcRZGate(q, -2.1182915354689227, 6);
  sqcRYGate(q, 2.504266218315393, 7);
  sqcRZGate(q, 0.23087426930266286, 7);
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
  sqcRYGate(q, -3.129105493714818, 0);
  sqcRZGate(q, 2.2882978324256302, 0);
  sqcRYGate(q, -1.5737423913414053, 1);
  sqcRZGate(q, -2.3184036846045446, 1);
  sqcRYGate(q, -1.5839557359165424, 2);
  sqcRZGate(q, -0.747735900699066, 2);
  sqcRYGate(q, 1.5666838870879973, 3);
  sqcRZGate(q, 0.8315314115807881, 3);
  sqcRYGate(q, 1.6103640551910274, 4);
  sqcRZGate(q, 2.401899096462631, 4);
  sqcRYGate(q, 1.5740362974119257, 5);
  sqcRZGate(q, -2.3198461836825093, 5);
  sqcRYGate(q, -0.2712932685608891, 6);
  sqcRZGate(q, -0.20635297900326408, 6);
  sqcRYGate(q, -1.6598081895908172, 7);
  sqcRZGate(q, 0.8292279643351042, 7);

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
