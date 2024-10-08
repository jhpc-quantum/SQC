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

  sqcRYGate(q, 0.8772783787045277, 0);
  sqcRYGate(q, -0.9884635834664408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16452540123233128, 0);
  sqcRYGate(q, 3.003960809235294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7966754591056233, 1);
  sqcRYGate(q, -2.2807010014612636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.456189907505662, 1);
  sqcRYGate(q, -0.49657546748834136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.613871530506409, 2);
  sqcRYGate(q, 2.245789834926758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3922459681033654, 2);
  sqcRYGate(q, 1.1029478639684847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1092469268462204, 0);
  sqcRYGate(q, -0.8486780624005646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7697354367631445, 0);
  sqcRYGate(q, 3.0528642787204148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.643887783665931, 1);
  sqcRYGate(q, 0.19728083200386237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.422166566852794, 1);
  sqcRYGate(q, -1.636028901971355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6990097397359052, 2);
  sqcRYGate(q, -2.8019747825482866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5314958155911126, 2);
  sqcRYGate(q, -1.274741745792111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7611005497710934, 0);
  sqcRYGate(q, -2.63792061052558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8430182462961405, 0);
  sqcRYGate(q, -2.111407587592153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9459571797218267, 1);
  sqcRYGate(q, -1.7933404088006029, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.653574648604566, 1);
  sqcRYGate(q, -1.0365929452147071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6619516229750746, 2);
  sqcRYGate(q, 0.7580946643105151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1354765587952409, 2);
  sqcRYGate(q, -0.9605504715428639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.088845483302937, 0);
  sqcRYGate(q, -1.989811796197412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8721838723821835, 0);
  sqcRYGate(q, -1.5022254926553171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9693919301239193, 1);
  sqcRYGate(q, -1.9593251821786004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8661170910763083, 1);
  sqcRYGate(q, -1.3590979800731358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8622129643612022, 2);
  sqcRYGate(q, -0.0419871780748684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23017641119816723, 2);
  sqcRYGate(q, -2.455727686531927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5298209897231292, 0);
  sqcRYGate(q, 1.4929719006791098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0342165784041881, 0);
  sqcRYGate(q, -0.7137301722670505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.664735905827659, 1);
  sqcRYGate(q, -0.5353887034590159, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0821981499534346, 1);
  sqcRYGate(q, 1.483425839356009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9751128034508348, 2);
  sqcRYGate(q, 0.4238086647230821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7302147065506577, 2);
  sqcRYGate(q, 2.869772929148164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2881732672467239, 0);
  sqcRYGate(q, -0.9618098054021375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6475691897135778, 0);
  sqcRYGate(q, 2.519077043274155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0675316266044557, 1);
  sqcRYGate(q, -0.796288481424332, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.061764234170752, 1);
  sqcRYGate(q, 1.5765585134389077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5572792529746958, 2);
  sqcRYGate(q, 0.7268414263455192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07254552895170718, 2);
  sqcRYGate(q, -0.3507689307934947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.422335975175226, 0);
  sqcRYGate(q, 0.6075619107092389, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1990965764625736, 0);
  sqcRYGate(q, 0.025678079795127928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5969886024672446, 1);
  sqcRYGate(q, 1.3451349331108817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2725204592807602, 1);
  sqcRYGate(q, -2.0483680837972553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.590486504969095, 2);
  sqcRYGate(q, -1.8210303347897254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5294821915394162, 2);
  sqcRYGate(q, -2.8111091414643714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8569003179981003, 0);
  sqcRYGate(q, -1.9501148208295813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2929273074176795, 0);
  sqcRYGate(q, 0.1680422978285917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1856066307251876, 1);
  sqcRYGate(q, -0.5541770975563994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3715129367205026, 1);
  sqcRYGate(q, -2.9958116743623875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2314506969943535, 2);
  sqcRYGate(q, 2.419345389935395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6108433110288467, 2);
  sqcRYGate(q, 2.27133353808054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9384871448778042, 0);
  sqcRYGate(q, -0.6272847094437095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0818596236015896, 0);
  sqcRYGate(q, -2.059865398724733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.255001262749688, 1);
  sqcRYGate(q, -2.3561043503802064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9854648555388268, 1);
  sqcRYGate(q, 2.2173684915171186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8888349240981621, 2);
  sqcRYGate(q, -3.1278205442005413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.909275465940933, 2);
  sqcRYGate(q, 0.20811281049805372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7291217301933575, 0);
  sqcRYGate(q, -2.2791047149028136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1613347393983786, 0);
  sqcRYGate(q, 2.960496278576344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.935549527563239, 1);
  sqcRYGate(q, 2.081062472231009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5443541873087838, 1);
  sqcRYGate(q, 0.08053959437034892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8616796043304644, 2);
  sqcRYGate(q, 2.731512976271616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05879612881451024, 2);
  sqcRYGate(q, 1.121859990674746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48638172584710304, 0);
  sqcRYGate(q, 0.9050018752586055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3806164783662584, 0);
  sqcRYGate(q, 2.9873384337997426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9113104428343997, 1);
  sqcRYGate(q, 2.2225940259060875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1877128658185345, 1);
  sqcRYGate(q, -0.2978930627790178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.862340732514437, 2);
  sqcRYGate(q, -2.7900086953912173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8921615507930127, 2);
  sqcRYGate(q, 1.986223257742453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3432122782197898, 0);
  sqcRYGate(q, 1.513758099786685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.619983088194977, 0);
  sqcRYGate(q, -2.9697275665168426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.714347701695846, 1);
  sqcRYGate(q, -0.10608871235230488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.36151873289528, 1);
  sqcRYGate(q, 0.3419606969686218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3975760186297603, 2);
  sqcRYGate(q, 0.3343994985440748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0174542596515495, 2);
  sqcRYGate(q, -0.5409916150981013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.145432232739199, 0);
  sqcRYGate(q, 3.0138333054715893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8816755227008828, 0);
  sqcRYGate(q, -1.268448974169515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0372158882979567, 1);
  sqcRYGate(q, -2.9377855453325696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1343544599925015, 1);
  sqcRYGate(q, -3.0980583294799646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.037245576474203, 2);
  sqcRYGate(q, -1.7861000554750497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8484494040744281, 2);
  sqcRYGate(q, 2.502495800245428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.379613157937758, 0);
  sqcRYGate(q, -1.2160035792988584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4642462701903405, 0);
  sqcRYGate(q, -1.7084243881606707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6054862142022315, 1);
  sqcRYGate(q, 0.6902147443442823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.412241956061275, 1);
  sqcRYGate(q, 2.4064878969481693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4300866309804369, 2);
  sqcRYGate(q, -1.8613559939212783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4251074917355209, 2);
  sqcRYGate(q, -0.6746750239870262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4628886742782274, 0);
  sqcRYGate(q, 1.453337586498471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.633615637103351, 0);
  sqcRYGate(q, -1.5955392399502628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8988637535473414, 1);
  sqcRYGate(q, -2.929193785388095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2969200462583865, 1);
  sqcRYGate(q, 1.0838339657672371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.32693547964458386, 2);
  sqcRYGate(q, -1.4825643684302718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2865486996318554, 2);
  sqcRYGate(q, 1.5110496351218583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5917164037577045, 0);
  sqcRYGate(q, 2.398482308094575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5351529815556015, 0);
  sqcRYGate(q, 2.7799774428439967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4964827720520122, 1);
  sqcRYGate(q, 2.554585524213292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8793492660454545, 1);
  sqcRYGate(q, 1.8858897811670428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9431288850390245, 2);
  sqcRYGate(q, -2.949756910085914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7392462805912403, 2);
  sqcRYGate(q, -2.917586735790327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.114553547009988, 0);
  sqcRYGate(q, 0.7223869382211243, 1);
  sqcRYGate(q, -0.5350548046210211, 2);
  sqcRYGate(q, 1.8114002918396614, 3);

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
