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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.8055150913110986, 0);
  sqcRZGate(q, -3.1393232131782267, 0);
  sqcRYGate(q, -0.04412781845314483, 1);
  sqcRZGate(q, 3.138473614959466, 1);
  sqcRYGate(q, -1.5771634167844566, 2);
  sqcRZGate(q, 0.000136213765888904, 2);
  sqcRYGate(q, -8.238250360534526e-05, 3);
  sqcRZGate(q, -1.803148816067266, 3);
  sqcRYGate(q, 0.6113521992352852, 4);
  sqcRZGate(q, -3.140762321686572, 4);
  sqcRYGate(q, 3.0837274021436087, 5);
  sqcRZGate(q, 0.0006638316754955509, 5);
  sqcRYGate(q, -3.013544416336963, 6);
  sqcRZGate(q, 0.000612381116516862, 6);
  sqcRYGate(q, -0.019984310903880698, 7);
  sqcRZGate(q, 0.0010618921294689445, 7);
  sqcRYGate(q, 3.141497793275886, 8);
  sqcRZGate(q, 2.7385451345696046, 8);
  sqcRYGate(q, -3.1331876841610127, 9);
  sqcRZGate(q, -0.0071202031017829626, 9);
  sqcRYGate(q, -3.1141459769626443, 10);
  sqcRZGate(q, -3.1410328404941574, 10);
  sqcRYGate(q, -0.003294502674076802, 11);
  sqcRZGate(q, -0.03739291104846236, 11);
  sqcRYGate(q, -2.7543384089631392e-08, 12);
  sqcRZGate(q, -1.1720721848125786, 12);
  sqcRYGate(q, -3.139082221796187, 13);
  sqcRZGate(q, -0.005934944319953672, 13);
  sqcRYGate(q, 0.003064076165396834, 14);
  sqcRZGate(q, 3.117649583673922, 14);
  sqcRYGate(q, 0.002205426024297855, 15);
  sqcRZGate(q, 0.08364338151621778, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 3.0910718779072246, 0);
  sqcRZGate(q, -1.5682472962135634, 0);
  sqcRYGate(q, -0.004126053936645846, 1);
  sqcRZGate(q, 1.5737957580701405, 1);
  sqcRYGate(q, 1.462601564331399, 2);
  sqcRZGate(q, -1.570278272292576, 2);
  sqcRYGate(q, -0.006060867155911499, 3);
  sqcRZGate(q, 3.134687630190742, 3);
  sqcRYGate(q, 0.180443928581359, 4);
  sqcRZGate(q, -1.573319882295308, 4);
  sqcRYGate(q, 3.1172836086544873, 5);
  sqcRZGate(q, -1.5701603921184883, 5);
  sqcRYGate(q, 2.450364710947614, 6);
  sqcRZGate(q, -1.569701332855187, 6);
  sqcRYGate(q, -3.1123756464974877, 7);
  sqcRZGate(q, -1.5701560601394378, 7);
  sqcRYGate(q, -1.5708150950626711, 8);
  sqcRZGate(q, -0.03294683249394392, 8);
  sqcRYGate(q, -0.10155329614201936, 9);
  sqcRZGate(q, -1.5706169237143481, 9);
  sqcRYGate(q, 0.6547992662326108, 10);
  sqcRZGate(q, 1.569315231719167, 10);
  sqcRYGate(q, 0.04876323517546677, 11);
  sqcRZGate(q, -1.5562834846203213, 11);
  sqcRYGate(q, -5.740170698457772e-08, 12);
  sqcRZGate(q, 3.0249756776681704, 12);
  sqcRYGate(q, 3.1345036913142716, 13);
  sqcRZGate(q, 1.793982329081457, 13);
  sqcRYGate(q, -0.18601609725239343, 14);
  sqcRZGate(q, 1.5733862655540447, 14);
  sqcRYGate(q, 3.1265387401069953, 15);
  sqcRZGate(q, -2.7852887633972863, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -3.030491373892679, 0);
  sqcRZGate(q, -1.602469197116525, 0);
  sqcRYGate(q, -2.2620340781431194, 1);
  sqcRZGate(q, 1.58931752614787, 1);
  sqcRYGate(q, -3.038051141006631, 2);
  sqcRZGate(q, 1.5625349805367277, 2);
  sqcRYGate(q, 1.5706927247183613, 3);
  sqcRZGate(q, -3.1311419516300356, 3);
  sqcRYGate(q, -0.018803739025119448, 4);
  sqcRZGate(q, -1.5708057319004578, 4);
  sqcRYGate(q, -0.5806138630474201, 5);
  sqcRZGate(q, 1.5547283950130153, 5);
  sqcRYGate(q, -0.03793353433318845, 6);
  sqcRZGate(q, -1.5716199546790337, 6);
  sqcRYGate(q, 3.0096204978648124, 7);
  sqcRZGate(q, 1.5720273188196519, 7);
  sqcRYGate(q, 1.5707335735605796, 8);
  sqcRZGate(q, 3.1412906604665243, 8);
  sqcRYGate(q, 0.03048682869668351, 9);
  sqcRZGate(q, 1.5709226310025008, 9);
  sqcRYGate(q, -0.0195746310417384, 10);
  sqcRZGate(q, 1.5724015276329188, 10);
  sqcRYGate(q, 3.1361290296565634, 11);
  sqcRZGate(q, 1.5847447223359343, 11);
  sqcRYGate(q, 2.4038371725811113e-08, 12);
  sqcRZGate(q, -1.1340135741924753, 12);
  sqcRYGate(q, -3.1412717975940456, 13);
  sqcRZGate(q, 1.7940320920184023, 13);
  sqcRYGate(q, -3.1350179344660094, 14);
  sqcRZGate(q, -1.5680869096322505, 14);
  sqcRYGate(q, -3.141547837328825, 15);
  sqcRZGate(q, -2.784773582514026, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -0.0073253835057593975, 0);
  sqcRZGate(q, -3.1089071555649963, 0);
  sqcRYGate(q, 0.007827771368597247, 1);
  sqcRZGate(q, 3.1072799402389557, 1);
  sqcRYGate(q, -3.1306727365689775, 2);
  sqcRZGate(q, -0.008963925958280819, 2);
  sqcRYGate(q, 1.5710442431308822, 3);
  sqcRZGate(q, 1.5789519543779933, 3);
  sqcRYGate(q, -3.12598030975339, 4);
  sqcRZGate(q, -0.0021535170860201196, 4);
  sqcRYGate(q, 3.132288426575562, 5);
  sqcRZGate(q, -0.019846277339188485, 5);
  sqcRYGate(q, 3.099479884673898, 6);
  sqcRZGate(q, -3.141378015393883, 6);
  sqcRYGate(q, -0.03256913784439116, 7);
  sqcRZGate(q, 3.140192219886118, 7);
  sqcRYGate(q, -3.076044947472311, 8);
  sqcRZGate(q, 3.1413167579267642, 8);
  sqcRYGate(q, 0.13443314031479142, 9);
  sqcRZGate(q, 0.0002986171778891816, 9);
  sqcRYGate(q, 0.07219764005243585, 10);
  sqcRZGate(q, 3.1414566354573776, 10);
  sqcRYGate(q, 2.565475881770658, 11);
  sqcRZGate(q, -0.051753635378333614, 11);
  sqcRYGate(q, -3.14159256479959, 12);
  sqcRZGate(q, -0.2188308340607771, 12);
  sqcRYGate(q, -1.5893907702021608, 13);
  sqcRZGate(q, -3.141531762762777, 13);
  sqcRYGate(q, 0.04814010176299721, 14);
  sqcRZGate(q, 3.1414646807373483, 14);
  sqcRYGate(q, -0.8317222955158359, 15);
  sqcRZGate(q, 3.141089686764194, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -3.114753758044148, 0);
  sqcRZGate(q, -2.351446715374313, 0);
  sqcRYGate(q, -3.136772322523965, 1);
  sqcRZGate(q, 0.7938033990970964, 1);
  sqcRYGate(q, 3.1032023821484804, 2);
  sqcRZGate(q, -0.2223936948625719, 2);
  sqcRYGate(q, 0.01021975775284469, 3);
  sqcRZGate(q, -0.3305156071392439, 3);
  sqcRYGate(q, -0.041927489430860235, 4);
  sqcRZGate(q, -1.2892073173670973, 4);
  sqcRYGate(q, 0.012309317008607934, 5);
  sqcRZGate(q, 1.4575870684966974, 5);
  sqcRYGate(q, 0.15943217561488737, 6);
  sqcRZGate(q, 2.132887503966783, 6);
  sqcRYGate(q, 3.1272306171274247, 7);
  sqcRZGate(q, 1.1495700517353875, 7);
  sqcRYGate(q, 0.361619933753885, 8);
  sqcRZGate(q, -1.1463451451666273, 8);
  sqcRYGate(q, -0.01730562174769959, 9);
  sqcRZGate(q, -1.1791835751214181, 9);
  sqcRYGate(q, -0.6505993345574386, 10);
  sqcRZGate(q, -2.1538080032847935, 10);
  sqcRYGate(q, -0.0011131965858677262, 11);
  sqcRZGate(q, 2.6635915615376238, 11);
  sqcRYGate(q, 1.570796461828273, 12);
  sqcRZGate(q, -5.928850654868256e-08, 12);
  sqcRYGate(q, -1.4940345269554314, 13);
  sqcRZGate(q, 0.10257835459791666, 13);
  sqcRYGate(q, 2.1081775427846496, 14);
  sqcRZGate(q, -1.8787003699749703, 14);
  sqcRYGate(q, 0.1044252411008027, 15);
  sqcRZGate(q, -0.09506954940541235, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 5.828570515120646e-08, 0);
  sqcRZGate(q, -1.567255272181073, 0);
  sqcRYGate(q, 1.0932134807817087e-08, 1);
  sqcRZGate(q, -1.5873591213979772, 1);
  sqcRYGate(q, 3.1415925616557585, 2);
  sqcRZGate(q, 2.14153750113939, 2);
  sqcRYGate(q, 3.390839786732158e-08, 3);
  sqcRZGate(q, -0.4554002497875079, 3);
  sqcRYGate(q, 2.9171626092505676e-07, 4);
  sqcRZGate(q, 0.5118275700116328, 4);
  sqcRYGate(q, 3.141592612732072, 5);
  sqcRZGate(q, -2.465550320253297, 5);
  sqcRYGate(q, -3.141592407863582, 6);
  sqcRZGate(q, 1.3556640715369053, 6);
  sqcRYGate(q, 2.9777183005264354e-07, 7);
  sqcRZGate(q, 1.2141387237568377, 7);
  sqcRYGate(q, -5.2510500836433494e-08, 8);
  sqcRZGate(q, -2.7724499356454433, 8);
  sqcRYGate(q, 3.1415925041389734, 9);
  sqcRZGate(q, -1.955770598866927, 9);
  sqcRYGate(q, -3.141592643176624, 10);
  sqcRZGate(q, 0.21059861175430158, 10);
  sqcRYGate(q, -3.1415925403147114, 11);
  sqcRZGate(q, -1.3066619690446513, 11);
  sqcRYGate(q, 1.5707964217693045, 12);
  sqcRZGate(q, 2.3644229182033154, 12);
  sqcRYGate(q, -3.1415923402187906, 13);
  sqcRZGate(q, -0.6743272789774304, 13);
  sqcRYGate(q, -3.7627858282657984e-08, 14);
  sqcRZGate(q, 1.1015283037856491, 14);
  sqcRYGate(q, -3.141592395183789, 15);
  sqcRZGate(q, -0.872480242405021, 15);

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
