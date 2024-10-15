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

  sqcRYGate(q, -3.1415355546038612, 0);
  sqcRZGate(q, 1.7946871848826973, 0);
  sqcRYGate(q, 1.5701637370730672, 1);
  sqcRZGate(q, 2.749710267429118, 1);
  sqcRYGate(q, 1.5707818015680943, 2);
  sqcRZGate(q, 1.5708489025430108, 2);
  sqcRYGate(q, 1.6019790859890326, 3);
  sqcRZGate(q, -0.00018770632259084384, 3);
  sqcRYGate(q, 2.9151507516150272, 4);
  sqcRZGate(q, 2.772362098479034, 4);
  sqcRYGate(q, 3.1415586462684284, 5);
  sqcRZGate(q, 0.051960240330979686, 5);
  sqcRYGate(q, -2.963194826666777, 6);
  sqcRZGate(q, 3.0998409675299707, 6);
  sqcRYGate(q, -1.517841028737872, 7);
  sqcRZGate(q, 1.571859060992642, 7);
  sqcRYGate(q, -0.2840135215591095, 8);
  sqcRZGate(q, 3.121725137889343, 8);
  sqcRYGate(q, 1.606724883782734, 9);
  sqcRZGate(q, -3.1354707394052648, 9);
  sqcRYGate(q, 0.01441863297996182, 10);
  sqcRZGate(q, -1.521371855284574, 10);
  sqcRYGate(q, -3.140336388001407, 11);
  sqcRZGate(q, -1.8334009137168241, 11);
  sqcRYGate(q, 0.20068098452306146, 12);
  sqcRZGate(q, 2.4090092546883137, 12);
  sqcRYGate(q, 1.6797771482829766, 13);
  sqcRZGate(q, 3.1414092996301473, 13);
  sqcRYGate(q, 1.5628840176029113, 14);
  sqcRZGate(q, -1.5700568468007283, 14);
  sqcRYGate(q, -0.00020273861236752566, 15);
  sqcRZGate(q, -2.8751479067516823, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.9372168233630522, 0);
  sqcRZGate(q, -1.56966932162518, 0);
  sqcRYGate(q, -3.141591577296333, 1);
  sqcRZGate(q, -0.39188042327049993, 1);
  sqcRYGate(q, -1.6503784940157689, 2);
  sqcRZGate(q, -1.5703323398151106, 2);
  sqcRYGate(q, 0.2637496779898836, 3);
  sqcRZGate(q, 1.8548818444392023, 3);
  sqcRYGate(q, 1.5707752919692668, 4);
  sqcRZGate(q, 0.010931283917040346, 4);
  sqcRYGate(q, 5.377774860093609e-06, 5);
  sqcRZGate(q, -1.1738964911997363, 5);
  sqcRYGate(q, -3.1382877554198956, 6);
  sqcRZGate(q, -2.118457454117334, 6);
  sqcRYGate(q, -1.5637822582463383, 7);
  sqcRZGate(q, 0.5536801538776148, 7);
  sqcRYGate(q, -0.01142298444661926, 8);
  sqcRZGate(q, -1.8772400487407044, 8);
  sqcRYGate(q, 0.9838797811549174, 9);
  sqcRZGate(q, 0.004331034564426392, 9);
  sqcRYGate(q, -1.5730931349149875, 10);
  sqcRZGate(q, 2.13046751516155, 10);
  sqcRYGate(q, 1.5709708153091677, 11);
  sqcRZGate(q, -1.3339152939870358, 11);
  sqcRYGate(q, 2.5988715598389684, 12);
  sqcRZGate(q, 0.24397392908510349, 12);
  sqcRYGate(q, 1.2280183581608553, 13);
  sqcRZGate(q, -0.1850233340921594, 13);
  sqcRYGate(q, 0.8357306601694585, 14);
  sqcRZGate(q, -0.3925731823365002, 14);
  sqcRYGate(q, -1.7459429103397643, 15);
  sqcRZGate(q, 1.4157713919214372, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.08151176500184043, 0);
  sqcRZGate(q, 1.5705374048645826, 0);
  sqcRYGate(q, 1.5714673118437033, 1);
  sqcRZGate(q, 3.1407793394650447, 1);
  sqcRYGate(q, -3.115476243375629, 2);
  sqcRZGate(q, -1.5702777089720994, 2);
  sqcRYGate(q, 1.679254173284418, 3);
  sqcRZGate(q, 2.7867011759821008, 3);
  sqcRYGate(q, 3.1210681023523508, 4);
  sqcRZGate(q, 1.582238568809536, 4);
  sqcRYGate(q, 2.938139198103822, 5);
  sqcRZGate(q, -1.5707279544732178, 5);
  sqcRYGate(q, -3.1057582692284313e-06, 6);
  sqcRZGate(q, 0.5074357145671085, 6);
  sqcRYGate(q, -1.5712892165959822, 7);
  sqcRZGate(q, -1.569001727140395, 7);
  sqcRYGate(q, -0.001861508720643115, 8);
  sqcRZGate(q, -1.2425792278695988, 8);
  sqcRYGate(q, 0.016795891840550855, 9);
  sqcRZGate(q, 1.6097332949718117, 9);
  sqcRYGate(q, -0.32252873947790434, 10);
  sqcRZGate(q, -0.5034977757269123, 10);
  sqcRYGate(q, -0.20842545119149491, 11);
  sqcRZGate(q, 3.132213131378806, 11);
  sqcRYGate(q, 3.141370259796544, 12);
  sqcRZGate(q, -2.899883790362305, 12);
  sqcRYGate(q, 0.00024103340930547998, 13);
  sqcRZGate(q, -2.9560418712143246, 13);
  sqcRYGate(q, -3.1407805370531565, 14);
  sqcRZGate(q, -1.962356646966935, 14);
  sqcRYGate(q, -1.575603584930061, 15);
  sqcRZGate(q, 3.13989091020445, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5709060178901115, 0);
  sqcRZGate(q, 9.075569256111748e-07, 0);
  sqcRYGate(q, -1.5708271484093943, 1);
  sqcRZGate(q, 1.9873011236626326e-06, 1);
  sqcRYGate(q, -1.5716838681959897, 2);
  sqcRZGate(q, -1.5707965247158928, 2);
  sqcRYGate(q, -1.5709930982750926, 3);
  sqcRZGate(q, 4.570390147229376e-06, 3);
  sqcRYGate(q, 1.5707308864317848, 4);
  sqcRZGate(q, 1.5708143006780269, 4);
  sqcRYGate(q, 1.5717291565087619, 5);
  sqcRZGate(q, -3.141588229490294, 5);
  sqcRYGate(q, -1.5635842343435717, 6);
  sqcRZGate(q, -0.0012115476779223644, 6);
  sqcRYGate(q, -1.5709321889595271, 7);
  sqcRZGate(q, -3.1415827629177424, 7);
  sqcRYGate(q, 1.5664034288857183, 8);
  sqcRZGate(q, 3.1413775102591783, 8);
  sqcRYGate(q, -0.0651438082299425, 9);
  sqcRZGate(q, 3.100388126411213, 9);
  sqcRYGate(q, -1.567935298278358, 10);
  sqcRZGate(q, 1.5737169046455435, 10);
  sqcRYGate(q, -1.5727983644601036, 11);
  sqcRZGate(q, -1.5705827123042495, 11);
  sqcRYGate(q, -1.049972127118445, 12);
  sqcRZGate(q, 0.001101150970733045, 12);
  sqcRYGate(q, 1.5689685021345234, 13);
  sqcRZGate(q, 0.0011073149264552598, 13);
  sqcRYGate(q, -1.5710999695735475, 14);
  sqcRZGate(q, 1.5758845541933622, 14);
  sqcRYGate(q, -0.7156900232126685, 15);
  sqcRZGate(q, -1.5681951520270256, 15);

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
