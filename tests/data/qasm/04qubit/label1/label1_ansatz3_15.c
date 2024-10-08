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

  sqcRYGate(q, -2.118103809289316, 0);
  sqcRZGate(q, 3.1277178976499296, 0);
  sqcRYGate(q, -0.7159541127917343, 1);
  sqcRZGate(q, 1.716507907094803, 1);
  sqcRYGate(q, -2.3840483913624277, 2);
  sqcRZGate(q, -1.0326157834882712, 2);
  sqcRYGate(q, 1.3049456998309223, 3);
  sqcRZGate(q, -1.3398698587350168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6789452815254489, 0);
  sqcRZGate(q, -1.7619957009449825, 0);
  sqcRYGate(q, -2.3287883341468962, 1);
  sqcRZGate(q, 1.6802885956143592, 1);
  sqcRYGate(q, -0.928664441598958, 2);
  sqcRZGate(q, 2.1140363560030946, 2);
  sqcRYGate(q, 1.2773039810791094, 3);
  sqcRZGate(q, -1.17519042626407, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8949361210667375, 0);
  sqcRZGate(q, -0.04770134815469084, 0);
  sqcRYGate(q, -1.967446892750396, 1);
  sqcRZGate(q, -2.8053814295950996, 1);
  sqcRYGate(q, -1.653722356585752, 2);
  sqcRZGate(q, 2.1935810676669725, 2);
  sqcRYGate(q, 0.029360247694608432, 3);
  sqcRZGate(q, 1.2690086278974562, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8144681067578368, 0);
  sqcRZGate(q, -0.2294043502304813, 0);
  sqcRYGate(q, 2.9344433846591773, 1);
  sqcRZGate(q, -0.10684574229284392, 1);
  sqcRYGate(q, 0.48142615356816637, 2);
  sqcRZGate(q, -0.11311382748607168, 2);
  sqcRYGate(q, -1.5515056179778801, 3);
  sqcRZGate(q, -0.05424167803203276, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9872741473516813, 0);
  sqcRZGate(q, 1.7814249704465037, 0);
  sqcRYGate(q, 0.8020008320171016, 1);
  sqcRZGate(q, 3.036311942232062, 1);
  sqcRYGate(q, -0.4205134232133076, 2);
  sqcRZGate(q, -1.6701167709651514, 2);
  sqcRYGate(q, 1.7980187125185703, 3);
  sqcRZGate(q, 1.0788387528830312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4704315978133237, 0);
  sqcRZGate(q, 0.42990239285861137, 0);
  sqcRYGate(q, 2.1462399850738123, 1);
  sqcRZGate(q, -2.5483143172019065, 1);
  sqcRYGate(q, -1.3683215977755365, 2);
  sqcRZGate(q, -2.7426089765247097, 2);
  sqcRYGate(q, 1.066960107736838, 3);
  sqcRZGate(q, 1.5903032146295324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.134212090488532, 0);
  sqcRZGate(q, -2.5630287170403454, 0);
  sqcRYGate(q, 2.261147705914925, 1);
  sqcRZGate(q, 2.749639778647019, 1);
  sqcRYGate(q, 0.17934531344733085, 2);
  sqcRZGate(q, -2.6726640222108893, 2);
  sqcRYGate(q, 1.5592274767291785, 3);
  sqcRZGate(q, -0.6058074878447588, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.09648849058945519, 0);
  sqcRZGate(q, -3.139905487391386, 0);
  sqcRYGate(q, -1.1564010269257823, 1);
  sqcRZGate(q, 2.488148870150163, 1);
  sqcRYGate(q, -0.7528049812518829, 2);
  sqcRZGate(q, 2.7831135943761742, 2);
  sqcRYGate(q, 1.1784449759165667, 3);
  sqcRZGate(q, -0.3173778298457974, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1552333526141694, 0);
  sqcRZGate(q, 1.0006291438285242, 0);
  sqcRYGate(q, 2.2884758160314265, 1);
  sqcRZGate(q, 0.7387594067104759, 1);
  sqcRYGate(q, 0.12403616019859243, 2);
  sqcRZGate(q, -1.4505713792584332, 2);
  sqcRYGate(q, -1.6215456116497897, 3);
  sqcRZGate(q, -0.5595077997498281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2527349550522304, 0);
  sqcRZGate(q, 0.5529680775141229, 0);
  sqcRYGate(q, 0.5247377424614298, 1);
  sqcRZGate(q, 1.6993353984266468, 1);
  sqcRYGate(q, 1.0852451164995205, 2);
  sqcRZGate(q, 0.2970454724123073, 2);
  sqcRYGate(q, 0.4156198965424149, 3);
  sqcRZGate(q, -0.10938694347302745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.721027091870899, 0);
  sqcRZGate(q, 1.7015915062773317, 0);
  sqcRYGate(q, -0.7792699901701212, 1);
  sqcRZGate(q, -0.14268156961183553, 1);
  sqcRYGate(q, 0.5098390336809124, 2);
  sqcRZGate(q, 2.3419309732342626, 2);
  sqcRYGate(q, -1.0874630856719156, 3);
  sqcRZGate(q, 1.5181393962071648, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.063022415571594, 0);
  sqcRZGate(q, -0.3227373530706945, 0);
  sqcRYGate(q, 0.2810278068007907, 1);
  sqcRZGate(q, 2.850341150643901, 1);
  sqcRYGate(q, 1.536970141440002, 2);
  sqcRZGate(q, 0.9729860408180327, 2);
  sqcRYGate(q, -2.2825441401911917, 3);
  sqcRZGate(q, -1.8475437030051332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3307663586582312, 0);
  sqcRZGate(q, -3.1284975811522653, 0);
  sqcRYGate(q, -1.9581030361769287, 1);
  sqcRZGate(q, -1.7037981534005973, 1);
  sqcRYGate(q, -0.5994524237049105, 2);
  sqcRZGate(q, -1.3170440032451929, 2);
  sqcRYGate(q, 1.4821845231154167, 3);
  sqcRZGate(q, 0.3557900538456602, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.26849952813692, 0);
  sqcRZGate(q, -1.5848049412528065, 0);
  sqcRYGate(q, 1.2232892061793488, 1);
  sqcRZGate(q, 0.14790056078574576, 1);
  sqcRYGate(q, -2.907644452277808, 2);
  sqcRZGate(q, -1.325533775901283, 2);
  sqcRYGate(q, 1.149433222792382, 3);
  sqcRZGate(q, 3.0899871495348785, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4125820648153651, 0);
  sqcRZGate(q, 2.671232979377359, 0);
  sqcRYGate(q, 2.2205640960406683, 1);
  sqcRZGate(q, 0.03299199553944116, 1);
  sqcRYGate(q, 1.7128209771687413, 2);
  sqcRZGate(q, -3.0119284314680614, 2);
  sqcRYGate(q, 1.942803146156719, 3);
  sqcRZGate(q, -0.2584513289079654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0402295879105923, 0);
  sqcRZGate(q, 0.5193229009003799, 0);
  sqcRYGate(q, 0.13619759139551668, 1);
  sqcRZGate(q, -0.07941550899074394, 1);
  sqcRYGate(q, -1.4676586428303038, 2);
  sqcRZGate(q, -1.426174767204794, 2);
  sqcRYGate(q, 0.05224816517711339, 3);
  sqcRZGate(q, -0.06913554485974167, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5884789749078952, 0);
  sqcRZGate(q, -3.0206537360612584, 0);
  sqcRYGate(q, -0.3287404849758313, 1);
  sqcRZGate(q, -2.1354383609445104, 1);
  sqcRYGate(q, -0.99540243832877, 2);
  sqcRZGate(q, -2.3741569840862207, 2);
  sqcRYGate(q, -0.506989425679592, 3);
  sqcRZGate(q, 1.0230741134195336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0614959927443066, 0);
  sqcRZGate(q, -1.7096047948295023, 0);
  sqcRYGate(q, -2.418150149353743, 1);
  sqcRZGate(q, -2.579233843459495, 1);
  sqcRYGate(q, -1.4488584682541954, 2);
  sqcRZGate(q, -1.964769618508846, 2);
  sqcRYGate(q, -1.2600050526968003, 3);
  sqcRZGate(q, 1.6408870418900872, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6831667316044403, 0);
  sqcRZGate(q, 1.0247227350724346, 0);
  sqcRYGate(q, -1.0473976344705365, 1);
  sqcRZGate(q, -2.554236883573879, 1);
  sqcRYGate(q, 2.328212555920085, 2);
  sqcRZGate(q, 0.44906368107768435, 2);
  sqcRYGate(q, -0.06356981415898733, 3);
  sqcRZGate(q, 1.0721932783391197, 3);

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
