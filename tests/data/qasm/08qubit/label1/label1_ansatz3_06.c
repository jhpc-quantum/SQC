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

  sqcRYGate(q, 3.137774402327505, 0);
  sqcRZGate(q, 1.4228671779245854, 0);
  sqcRYGate(q, -2.7743676900822773, 1);
  sqcRZGate(q, -0.22643049294684292, 1);
  sqcRYGate(q, -3.1315677796242642, 2);
  sqcRZGate(q, 0.3255713312225401, 2);
  sqcRYGate(q, 1.5716687300459506, 3);
  sqcRZGate(q, -1.5822112245804243, 3);
  sqcRYGate(q, 3.1174394030311037, 4);
  sqcRZGate(q, -3.076656113587193, 4);
  sqcRYGate(q, 1.5704710703630613, 5);
  sqcRZGate(q, -1.1207553278391293, 5);
  sqcRYGate(q, 1.7777335988798333, 6);
  sqcRZGate(q, -1.4033761024271272, 6);
  sqcRYGate(q, -2.7003401355089505, 7);
  sqcRZGate(q, -1.3716851433137434, 7);
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
  sqcRYGate(q, 1.3605046069812141, 0);
  sqcRZGate(q, -0.8483874149728049, 0);
  sqcRYGate(q, 8.275511257497945e-05, 1);
  sqcRZGate(q, -2.8969660765827148, 1);
  sqcRYGate(q, -1.56670064812151, 2);
  sqcRZGate(q, 1.800743581883041, 2);
  sqcRYGate(q, -2.7104399205729903, 3);
  sqcRZGate(q, -3.470870199695497e-05, 3);
  sqcRYGate(q, -1.5684290418181686, 4);
  sqcRZGate(q, 2.4281230674529217, 4);
  sqcRYGate(q, 1.5645508889010342, 5);
  sqcRZGate(q, 3.133997648855776, 5);
  sqcRYGate(q, -0.1165466176406964, 6);
  sqcRZGate(q, 0.917937373707109, 6);
  sqcRYGate(q, -2.8367649660105045, 7);
  sqcRZGate(q, -0.8657407483682338, 7);
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
  sqcRYGate(q, -0.3951686433429691, 0);
  sqcRZGate(q, 2.61007235200743, 0);
  sqcRYGate(q, 1.2423430550973844, 1);
  sqcRZGate(q, -0.03416787846181786, 1);
  sqcRYGate(q, -3.1415218377935554, 2);
  sqcRZGate(q, 3.075989501128281, 2);
  sqcRYGate(q, 1.5653020790504562, 3);
  sqcRZGate(q, -1.6461378616474667, 3);
  sqcRYGate(q, 3.140835671167907, 4);
  sqcRZGate(q, 0.6002447614471027, 4);
  sqcRYGate(q, -0.4750661264731546, 5);
  sqcRZGate(q, 0.011750107544492827, 5);
  sqcRYGate(q, 1.0493890602438118, 6);
  sqcRZGate(q, -2.7508971172581345, 6);
  sqcRYGate(q, 0.003287175467202807, 7);
  sqcRZGate(q, 2.436489154337583, 7);
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
  sqcRYGate(q, -0.01589283476388711, 0);
  sqcRZGate(q, -2.649992963177246, 0);
  sqcRYGate(q, 0.0009146868758387328, 1);
  sqcRZGate(q, -3.124259987994233, 1);
  sqcRYGate(q, -3.138181013120693, 2);
  sqcRZGate(q, -1.057141850118641, 2);
  sqcRYGate(q, -2.6777810333388867, 3);
  sqcRZGate(q, -1.7821083447271384, 3);
  sqcRYGate(q, 0.026961087263029652, 4);
  sqcRZGate(q, 2.8558910736035514, 4);
  sqcRYGate(q, -0.4800360014916023, 5);
  sqcRZGate(q, -1.5794986952011327, 5);
  sqcRYGate(q, -0.051892353896279164, 6);
  sqcRZGate(q, -0.3808379584295878, 6);
  sqcRYGate(q, 0.07657850714586001, 7);
  sqcRZGate(q, -1.199503480013723, 7);
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
  sqcRYGate(q, 2.4812399487916967, 0);
  sqcRZGate(q, -0.8978703588166423, 0);
  sqcRYGate(q, -1.2388382097263015, 1);
  sqcRZGate(q, -0.032144871515660665, 1);
  sqcRYGate(q, 5.037993169310084e-07, 2);
  sqcRZGate(q, 1.5371089674865965, 2);
  sqcRYGate(q, -1.5713719950526208, 3);
  sqcRZGate(q, -1.5742746390313267, 3);
  sqcRYGate(q, 0.0005148496534941316, 4);
  sqcRZGate(q, -0.9264375512260934, 4);
  sqcRYGate(q, -1.5722618258046799, 5);
  sqcRZGate(q, 1.6060371879595907, 5);
  sqcRYGate(q, 1.0378123231874703, 6);
  sqcRZGate(q, 0.011056257226003119, 6);
  sqcRYGate(q, 3.137832333961465, 7);
  sqcRZGate(q, -1.367050701166294, 7);
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
  sqcRYGate(q, -1.697120215168602, 0);
  sqcRZGate(q, -2.077133114533583, 0);
  sqcRYGate(q, 0.0020122035905131216, 1);
  sqcRZGate(q, 0.030511605865559118, 1);
  sqcRYGate(q, 3.103920473606734, 2);
  sqcRZGate(q, -3.1376632157423994, 2);
  sqcRYGate(q, -0.6682422503222423, 3);
  sqcRZGate(q, -3.100079862872179, 3);
  sqcRYGate(q, 1.570655164385396, 4);
  sqcRZGate(q, -1.4525221426284096, 4);
  sqcRYGate(q, -0.846935687943813, 5);
  sqcRZGate(q, -0.4308750162211229, 5);
  sqcRYGate(q, -0.2558764144551562, 6);
  sqcRZGate(q, 2.032094920364898, 6);
  sqcRYGate(q, 1.5703614901138694, 7);
  sqcRZGate(q, 1.567540043224296, 7);
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
  sqcRYGate(q, 0.3322983145300199, 0);
  sqcRZGate(q, -1.025585218000701, 0);
  sqcRYGate(q, -2.864293248619258, 1);
  sqcRZGate(q, -0.0005613766044808443, 1);
  sqcRYGate(q, -0.8355363982288733, 2);
  sqcRZGate(q, -2.4067072309147175, 2);
  sqcRYGate(q, -3.0404389608886735, 3);
  sqcRZGate(q, -3.0990016239740386, 3);
  sqcRYGate(q, -0.008612007051254977, 4);
  sqcRZGate(q, -0.11893324437200013, 4);
  sqcRYGate(q, -3.1411959454497196, 5);
  sqcRZGate(q, 3.105170314182708, 5);
  sqcRYGate(q, -2.617181284745746, 6);
  sqcRZGate(q, 1.5794434062409803, 6);
  sqcRYGate(q, -2.1944712564028057, 7);
  sqcRZGate(q, -1.5775250796589204, 7);
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
  sqcRYGate(q, -2.3707481988867793, 0);
  sqcRZGate(q, -1.5740793107933104, 0);
  sqcRYGate(q, -1.5684022667394784, 1);
  sqcRZGate(q, -0.0039950884946069465, 1);
  sqcRYGate(q, 1.532840463203759, 2);
  sqcRZGate(q, 3.1150056493722724, 2);
  sqcRYGate(q, -1.4692562022264175, 3);
  sqcRZGate(q, 1.5846497255093435, 3);
  sqcRYGate(q, 1.0410074873863304, 4);
  sqcRZGate(q, 0.5812466036005746, 4);
  sqcRYGate(q, -1.5207267073049409, 5);
  sqcRZGate(q, -1.6838143080212948, 5);
  sqcRYGate(q, -0.13843302745288585, 6);
  sqcRZGate(q, -1.0349087762191473, 6);
  sqcRYGate(q, 1.5698312444339697, 7);
  sqcRZGate(q, 1.5965620795051052, 7);
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
  sqcRYGate(q, -1.5702801702486617, 0);
  sqcRZGate(q, -1.5710202710094658, 0);
  sqcRYGate(q, 0.1491602586199125, 1);
  sqcRZGate(q, 1.5774574769092142, 1);
  sqcRYGate(q, -3.0542322965400386, 2);
  sqcRZGate(q, 1.2080788226879253, 2);
  sqcRYGate(q, 0.0049914188890012095, 3);
  sqcRZGate(q, 3.1272426463333156, 3);
  sqcRYGate(q, -0.0009728469332854249, 4);
  sqcRZGate(q, -2.151310867246738, 4);
  sqcRYGate(q, -1.5722149639303715, 5);
  sqcRZGate(q, -2.936437093898239, 5);
  sqcRYGate(q, 3.1413036431463826, 6);
  sqcRZGate(q, 0.8514185206289672, 6);
  sqcRYGate(q, -1.5679872297202295, 7);
  sqcRZGate(q, -3.1377937108065668, 7);
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
  sqcRYGate(q, 1.5695091580159541, 0);
  sqcRZGate(q, 1.286061717127077, 0);
  sqcRYGate(q, 1.5703795590453604, 1);
  sqcRZGate(q, -0.285467061528141, 1);
  sqcRYGate(q, 3.1400023948532985, 2);
  sqcRZGate(q, 0.9067443735392089, 2);
  sqcRYGate(q, -1.5697841299600896, 3);
  sqcRZGate(q, -0.28660221681275644, 3);
  sqcRYGate(q, -1.5726558491236071, 4);
  sqcRZGate(q, -1.8595881745534406, 4);
  sqcRYGate(q, 0.00014386515735154148, 5);
  sqcRZGate(q, -0.47726027763235773, 5);
  sqcRYGate(q, -3.140921279178213, 6);
  sqcRZGate(q, 1.5874300777638775, 6);
  sqcRYGate(q, 1.5722912736303878, 7);
  sqcRZGate(q, -0.28429434263442843, 7);

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
