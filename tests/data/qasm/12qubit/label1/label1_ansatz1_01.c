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

  sqcRYGate(q, 0.8336375954048665, 0);
  sqcRZGate(q, -0.15480617726717735, 0);
  sqcRYGate(q, -2.8684716982241394, 1);
  sqcRZGate(q, -2.9514508060066174, 1);
  sqcRYGate(q, -1.1162209069730347, 2);
  sqcRZGate(q, -3.1107733642939417, 2);
  sqcRYGate(q, 2.010428531134888, 3);
  sqcRZGate(q, -0.8002405071666585, 3);
  sqcRYGate(q, 0.4644869738336813, 4);
  sqcRZGate(q, -2.8319039253690175, 4);
  sqcRYGate(q, 1.6175212405283013, 5);
  sqcRZGate(q, 0.17481447280118623, 5);
  sqcRYGate(q, 1.5896876680680667, 6);
  sqcRZGate(q, -3.016299351165943, 6);
  sqcRYGate(q, 1.6846519320664881, 7);
  sqcRZGate(q, -0.007662343365654247, 7);
  sqcRYGate(q, -1.2795684694607425, 8);
  sqcRZGate(q, -0.17581421449854379, 8);
  sqcRYGate(q, 1.5844770252123324, 9);
  sqcRZGate(q, 1.9033940623865144, 9);
  sqcRYGate(q, 0.34454949120364553, 10);
  sqcRZGate(q, -1.696704667816043, 10);
  sqcRYGate(q, -1.1569006487202151, 11);
  sqcRZGate(q, -2.976520319977348, 11);
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
  sqcRYGate(q, -1.8128823816671846, 0);
  sqcRZGate(q, -1.7200062705181889, 0);
  sqcRYGate(q, 1.95795850837235, 1);
  sqcRZGate(q, 1.2339370156728677, 1);
  sqcRYGate(q, 0.21363864435815397, 2);
  sqcRZGate(q, 2.522604254193417, 2);
  sqcRYGate(q, -2.8584071256311434, 3);
  sqcRZGate(q, -0.1047108791445342, 3);
  sqcRYGate(q, 1.706239370560233, 4);
  sqcRZGate(q, -0.09990139867918142, 4);
  sqcRYGate(q, -2.915542905301824, 5);
  sqcRZGate(q, -3.118222692219024, 5);
  sqcRYGate(q, 0.015949245037299796, 6);
  sqcRZGate(q, 1.2610963569062443, 6);
  sqcRYGate(q, -2.477115910954807, 7);
  sqcRZGate(q, -0.01997271164744046, 7);
  sqcRYGate(q, 1.7115839356607812, 8);
  sqcRZGate(q, -0.005077704028033557, 8);
  sqcRYGate(q, 0.35664141431759955, 9);
  sqcRZGate(q, -1.8027581075028882, 9);
  sqcRYGate(q, -0.13722320087985548, 10);
  sqcRZGate(q, -0.03767928333363368, 10);
  sqcRYGate(q, 0.584669649542454, 11);
  sqcRZGate(q, 2.9595158465648153, 11);
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
  sqcRYGate(q, 3.0834806817628624, 0);
  sqcRZGate(q, -1.0749608183512025, 0);
  sqcRYGate(q, 0.9026333142378382, 1);
  sqcRZGate(q, 0.329142327434933, 1);
  sqcRYGate(q, -1.538887838774796, 2);
  sqcRZGate(q, 1.7038240138554324, 2);
  sqcRYGate(q, 1.2420960416503952, 3);
  sqcRZGate(q, -1.3013522972852076, 3);
  sqcRYGate(q, -1.2973865163991622, 4);
  sqcRZGate(q, 3.1359778262810014, 4);
  sqcRYGate(q, 0.7906045002993328, 5);
  sqcRZGate(q, 0.033805772761222486, 5);
  sqcRYGate(q, -1.3119907445191572, 6);
  sqcRZGate(q, 3.0512656753763303, 6);
  sqcRYGate(q, 2.8059118200161817, 7);
  sqcRZGate(q, -0.025381831969703228, 7);
  sqcRYGate(q, -1.3279882674756127, 8);
  sqcRZGate(q, 0.009915273505702869, 8);
  sqcRYGate(q, -1.6093428241756305, 9);
  sqcRZGate(q, -0.005714164976428324, 9);
  sqcRYGate(q, 1.5923872911705224, 10);
  sqcRZGate(q, 2.913704828350908, 10);
  sqcRYGate(q, 1.3468039250090929, 11);
  sqcRZGate(q, -1.5179759248783204, 11);
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
  sqcRYGate(q, 2.546008358164727, 0);
  sqcRZGate(q, -2.734168777036157, 0);
  sqcRYGate(q, -2.9536431928856017, 1);
  sqcRZGate(q, -1.63839387614928, 1);
  sqcRYGate(q, 2.901131013688307, 2);
  sqcRZGate(q, 1.5612508387897277, 2);
  sqcRYGate(q, -2.9746186586684864, 3);
  sqcRZGate(q, 1.3830422296522427, 3);
  sqcRYGate(q, -1.0851247669140793, 4);
  sqcRZGate(q, 1.7461491045743418, 4);
  sqcRYGate(q, 0.24739568496999012, 5);
  sqcRZGate(q, -1.4335170082591766, 5);
  sqcRYGate(q, 0.1626140499999609, 6);
  sqcRZGate(q, 1.528479718359972, 6);
  sqcRYGate(q, 2.4725937705108896, 7);
  sqcRZGate(q, -1.5926454538796486, 7);
  sqcRYGate(q, 1.575164140354162, 8);
  sqcRZGate(q, 1.5672153223203025, 8);
  sqcRYGate(q, 2.888969036642685, 9);
  sqcRZGate(q, -1.5813098031201258, 9);
  sqcRYGate(q, -1.5802175171678394, 10);
  sqcRZGate(q, 1.5749397434909937, 10);
  sqcRYGate(q, -2.6369651028032077, 11);
  sqcRZGate(q, 0.10481720790305595, 11);
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
  sqcRYGate(q, -0.0054823828612036545, 0);
  sqcRZGate(q, -3.0742834668893817, 0);
  sqcRYGate(q, -1.2915499350611845, 1);
  sqcRZGate(q, 1.2796568608880687, 1);
  sqcRYGate(q, 1.6550592346431208, 2);
  sqcRZGate(q, -1.8511648231460467, 2);
  sqcRYGate(q, -1.4555229261935738, 3);
  sqcRZGate(q, -0.2025706854680277, 3);
  sqcRYGate(q, -1.6793047797354017, 4);
  sqcRZGate(q, 2.7827030258975425, 4);
  sqcRYGate(q, -1.641064791682589, 5);
  sqcRZGate(q, -0.6728368637393829, 5);
  sqcRYGate(q, 1.7345240842709053, 6);
  sqcRZGate(q, 0.8603757965879927, 6);
  sqcRYGate(q, -1.7081015958435024, 7);
  sqcRZGate(q, -1.9654347670240533, 7);
  sqcRYGate(q, -1.5831786360289137, 8);
  sqcRZGate(q, -0.3825144766782613, 8);
  sqcRYGate(q, -1.5754993826241908, 9);
  sqcRZGate(q, -1.9540616969364955, 9);
  sqcRYGate(q, 1.6319003474778473, 10);
  sqcRZGate(q, -1.9136206837487073, 10);
  sqcRYGate(q, 0.04400065864930269, 11);
  sqcRZGate(q, -2.038504781646158, 11);

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
