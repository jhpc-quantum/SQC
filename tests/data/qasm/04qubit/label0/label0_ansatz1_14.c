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

  sqcRYGate(q, 1.5600831498599463, 0);
  sqcRZGate(q, -2.426038647598849, 0);
  sqcRYGate(q, -0.46453283244890287, 1);
  sqcRZGate(q, 2.284657415881259, 1);
  sqcRYGate(q, 0.7605744333666742, 2);
  sqcRZGate(q, -0.3756064863146369, 2);
  sqcRYGate(q, -0.6039841727112595, 3);
  sqcRZGate(q, -2.4951705897125787, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7843742460594028, 0);
  sqcRZGate(q, -1.1971911399549764, 0);
  sqcRYGate(q, -2.393355901525662, 1);
  sqcRZGate(q, 2.3112322321945946, 1);
  sqcRYGate(q, -1.6642799562399775, 2);
  sqcRZGate(q, -0.1821806770795042, 2);
  sqcRYGate(q, 2.43500586734168, 3);
  sqcRZGate(q, 2.684702863667766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.834274854719661, 0);
  sqcRZGate(q, -1.205530944127486, 0);
  sqcRYGate(q, 1.6109393463802326, 1);
  sqcRZGate(q, 0.3997756541193262, 1);
  sqcRYGate(q, 0.009298398216148928, 2);
  sqcRZGate(q, 0.557117852722353, 2);
  sqcRYGate(q, 0.6560462171929385, 3);
  sqcRZGate(q, 1.260299828553398, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9250376121059398, 0);
  sqcRZGate(q, 1.8828390504507224, 0);
  sqcRYGate(q, -2.6086098520130716, 1);
  sqcRZGate(q, 2.7008864119667555, 1);
  sqcRYGate(q, 0.4351304638234952, 2);
  sqcRZGate(q, 2.200875116691738, 2);
  sqcRYGate(q, -1.8919425693317624, 3);
  sqcRZGate(q, -1.5853423521956391, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9859703434222383, 0);
  sqcRZGate(q, -0.3554671596742205, 0);
  sqcRYGate(q, -2.5536872129145642, 1);
  sqcRZGate(q, -0.9202994247941946, 1);
  sqcRYGate(q, -2.282313582039831, 2);
  sqcRZGate(q, -1.481476133322791, 2);
  sqcRYGate(q, 2.7985571647020993, 3);
  sqcRZGate(q, 1.7284891231968438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.39599797549961174, 0);
  sqcRZGate(q, 0.18335297824619268, 0);
  sqcRYGate(q, -3.0625742105543226, 1);
  sqcRZGate(q, 1.9188521751774736, 1);
  sqcRYGate(q, 3.061592627957324, 2);
  sqcRZGate(q, 0.8275940109217625, 2);
  sqcRYGate(q, -0.755056851159277, 3);
  sqcRZGate(q, -1.5472717699819754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.042806693409265, 0);
  sqcRZGate(q, -1.04438119707678, 0);
  sqcRYGate(q, 0.4400764196202607, 1);
  sqcRZGate(q, 1.8508204133223218, 1);
  sqcRYGate(q, 1.4109189465929237, 2);
  sqcRZGate(q, 2.2386576848683815, 2);
  sqcRYGate(q, 0.9152541816478904, 3);
  sqcRZGate(q, -3.1360395576824738, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6452450213579414, 0);
  sqcRZGate(q, -0.7708846269029185, 0);
  sqcRYGate(q, -1.8273173080724567, 1);
  sqcRZGate(q, 1.958426098510821, 1);
  sqcRYGate(q, 0.840773969708974, 2);
  sqcRZGate(q, -1.8712354108714067, 2);
  sqcRYGate(q, 0.9524511545357391, 3);
  sqcRZGate(q, 1.7697415651306976, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9856560463785392, 0);
  sqcRZGate(q, -0.6787066807080055, 0);
  sqcRYGate(q, -0.2563244760595103, 1);
  sqcRZGate(q, -1.1188234977061828, 1);
  sqcRYGate(q, -3.078978238458705, 2);
  sqcRZGate(q, -2.9127691728917138, 2);
  sqcRYGate(q, 0.8927513353543919, 3);
  sqcRZGate(q, -0.3639345624216254, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9317120978989994, 0);
  sqcRZGate(q, 0.3416477761140096, 0);
  sqcRYGate(q, 0.2727830772289854, 1);
  sqcRZGate(q, -0.6819571180337203, 1);
  sqcRYGate(q, -3.0249087664265444, 2);
  sqcRZGate(q, -0.9489495061044596, 2);
  sqcRYGate(q, -1.37312386310757, 3);
  sqcRZGate(q, 0.89617425599043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.229829789007292, 0);
  sqcRZGate(q, -1.2724378673085357, 0);
  sqcRYGate(q, -2.8535809471687186, 1);
  sqcRZGate(q, 0.013661498063935795, 1);
  sqcRYGate(q, -1.2727854638171143, 2);
  sqcRZGate(q, 0.7094988560786204, 2);
  sqcRYGate(q, 1.3870225518907398, 3);
  sqcRZGate(q, 0.9186720881299671, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2571152740834952, 0);
  sqcRZGate(q, 2.961360514794087, 0);
  sqcRYGate(q, -2.19963812638927, 1);
  sqcRZGate(q, -1.5762818188063539, 1);
  sqcRYGate(q, 1.802745619896812, 2);
  sqcRZGate(q, 1.3506292356471303, 2);
  sqcRYGate(q, -1.2282779771934933, 3);
  sqcRZGate(q, -2.8907765077319394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8626998010238757, 0);
  sqcRZGate(q, -1.3072523397588485, 0);
  sqcRYGate(q, -2.367288963487134, 1);
  sqcRZGate(q, 1.9466434182347148, 1);
  sqcRYGate(q, 2.3911457064999557, 2);
  sqcRZGate(q, -2.694278734236811, 2);
  sqcRYGate(q, -2.237302313917649, 3);
  sqcRZGate(q, -3.136326997646239, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.566528251346065, 0);
  sqcRZGate(q, 2.598827089640774, 0);
  sqcRYGate(q, 1.4847225652716427, 1);
  sqcRZGate(q, -0.0924996082858698, 1);
  sqcRYGate(q, 1.3418127697285116, 2);
  sqcRZGate(q, -1.1008926209797325, 2);
  sqcRYGate(q, -2.252839395437, 3);
  sqcRZGate(q, -1.3315931839294617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.380986287891447, 0);
  sqcRZGate(q, 0.06114197494792815, 0);
  sqcRYGate(q, 1.7295523052494515, 1);
  sqcRZGate(q, 2.0780656624813907, 1);
  sqcRYGate(q, 2.197935892488192, 2);
  sqcRZGate(q, -1.5717264668734359, 2);
  sqcRYGate(q, -0.6699072960770804, 3);
  sqcRZGate(q, -0.030981216742937533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.40336763860684716, 0);
  sqcRZGate(q, 0.7291593150314679, 0);
  sqcRYGate(q, 1.3024167244337472, 1);
  sqcRZGate(q, 2.309633945003158, 1);
  sqcRYGate(q, 2.2883937919895403, 2);
  sqcRZGate(q, -2.7626862210871574, 2);
  sqcRYGate(q, -2.1094771058357216, 3);
  sqcRZGate(q, -2.7694469824464796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2353965984049093, 0);
  sqcRZGate(q, 0.13623140160103553, 0);
  sqcRYGate(q, 0.757762258433833, 1);
  sqcRZGate(q, 0.48017676776337476, 1);
  sqcRYGate(q, 1.823108365321259, 2);
  sqcRZGate(q, 1.8383587778937285, 2);
  sqcRYGate(q, 1.924555377679585, 3);
  sqcRZGate(q, 0.3502192615667914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5828233014355462, 0);
  sqcRZGate(q, -2.6357995987729077, 0);
  sqcRYGate(q, 0.696459282801654, 1);
  sqcRZGate(q, -0.21134828487527577, 1);
  sqcRYGate(q, 2.5018482266315143, 2);
  sqcRZGate(q, -0.4635840415092751, 2);
  sqcRYGate(q, 2.4875785054946924, 3);
  sqcRZGate(q, 1.619796722496482, 3);

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
