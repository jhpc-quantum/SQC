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

  sqcRYGate(q, 2.9256386519626236, 0);
  sqcRZGate(q, 2.3273115539494023, 0);
  sqcRYGate(q, -0.6488661700314733, 1);
  sqcRZGate(q, 0.6068205770682757, 1);
  sqcRYGate(q, 2.1279528546414044, 2);
  sqcRZGate(q, -2.1090090976580056, 2);
  sqcRYGate(q, -1.1980526891460626, 3);
  sqcRZGate(q, 2.3787224296319045, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.067240314901192, 0);
  sqcRZGate(q, -1.209804606345715, 0);
  sqcRYGate(q, -2.972099663566949, 1);
  sqcRZGate(q, 1.3918911002989427, 1);
  sqcRYGate(q, -0.1862306217705214, 2);
  sqcRZGate(q, 2.7795380615604355, 2);
  sqcRYGate(q, 2.6499451259329225, 3);
  sqcRZGate(q, -1.4716011224896683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7664090834269766, 0);
  sqcRZGate(q, 1.2917470584260276, 0);
  sqcRYGate(q, -2.110536056675308, 1);
  sqcRZGate(q, 1.9500161323067342, 1);
  sqcRYGate(q, 1.6694838941237835, 2);
  sqcRZGate(q, 0.5931005853810243, 2);
  sqcRYGate(q, -1.3446938219855022, 3);
  sqcRZGate(q, 1.7624861035439139, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.877997657056788, 0);
  sqcRZGate(q, -0.8656449502616508, 0);
  sqcRYGate(q, -0.5103391788875022, 1);
  sqcRZGate(q, -0.08986549540503742, 1);
  sqcRYGate(q, 0.06497722303908537, 2);
  sqcRZGate(q, -1.7696102159013656, 2);
  sqcRYGate(q, -2.676230284895056, 3);
  sqcRZGate(q, 3.0799973389662556, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.187664954686676, 0);
  sqcRZGate(q, -1.2342051586044231, 0);
  sqcRYGate(q, -2.8686288743640174, 1);
  sqcRZGate(q, -3.1415820901124762, 1);
  sqcRYGate(q, 2.430746785430058, 2);
  sqcRZGate(q, 2.429730840229465, 2);
  sqcRYGate(q, -2.4249807396777308, 3);
  sqcRZGate(q, -2.820734160955562, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3892718501852288, 0);
  sqcRZGate(q, -2.5161460133849225, 0);
  sqcRYGate(q, 2.123121247570265, 1);
  sqcRZGate(q, -0.12272316811346151, 1);
  sqcRYGate(q, -2.1738291647887014, 2);
  sqcRZGate(q, 0.19043773850310552, 2);
  sqcRYGate(q, -2.1195607469848534, 3);
  sqcRZGate(q, -2.717165515624088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0154738454685663, 0);
  sqcRZGate(q, 0.2383096861449038, 0);
  sqcRYGate(q, -0.26513397684659057, 1);
  sqcRZGate(q, -2.6989314893366103, 1);
  sqcRYGate(q, 2.7259152278063046, 2);
  sqcRZGate(q, 0.3626694262416992, 2);
  sqcRYGate(q, -3.126358090112151, 3);
  sqcRZGate(q, -0.2891846428687615, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5857693524711731, 0);
  sqcRZGate(q, -0.35445047180739575, 0);
  sqcRYGate(q, -0.256237612388464, 1);
  sqcRZGate(q, 3.1172233704911076, 1);
  sqcRYGate(q, 1.2562353621626283, 2);
  sqcRZGate(q, -2.4552328311973506, 2);
  sqcRYGate(q, 2.7005463756453993, 3);
  sqcRZGate(q, -1.1167592796290433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8772544770953958, 0);
  sqcRZGate(q, 1.8908781811585147, 0);
  sqcRYGate(q, 1.603209193628265, 1);
  sqcRZGate(q, -2.2793226685634984, 1);
  sqcRYGate(q, 0.8274771724098663, 2);
  sqcRZGate(q, -2.9586253971685146, 2);
  sqcRYGate(q, -2.234298490221745, 3);
  sqcRZGate(q, -1.5069848164184698, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.136924970105758, 0);
  sqcRZGate(q, -0.10519767699708549, 0);
  sqcRYGate(q, 0.4333500640647043, 1);
  sqcRZGate(q, 0.13504939095792934, 1);
  sqcRYGate(q, -1.7945139378728152, 2);
  sqcRZGate(q, -0.17749065103484254, 2);
  sqcRYGate(q, 1.1122095807786883, 3);
  sqcRZGate(q, 1.142732357902142, 3);

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
