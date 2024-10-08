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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.5683949068739436, 0);
  sqcRZGate(q, -1.5707963842786348, 0);
  sqcRYGate(q, 1.5704654808664316, 1);
  sqcRZGate(q, 1.5707967506914506, 1);
  sqcRYGate(q, 0.0021197249388017567, 2);
  sqcRZGate(q, -0.08842890843715079, 2);
  sqcRYGate(q, 0.0012955932116724966, 3);
  sqcRZGate(q, -0.07210904598423085, 3);
  sqcRYGate(q, -3.042475092026477, 4);
  sqcRZGate(q, -4.1957446557798575e-06, 4);
  sqcRYGate(q, 3.1415926134687386, 5);
  sqcRZGate(q, 0.014723061413037627, 5);
  sqcRYGate(q, -1.5707961626721132, 6);
  sqcRZGate(q, 0.24810574851706768, 6);
  sqcRYGate(q, 1.5707962910676854, 7);
  sqcRZGate(q, 3.1414786587574124, 7);
  sqcRYGate(q, 1.570796339893159, 8);
  sqcRZGate(q, 1.9231748457322242, 8);
  sqcRYGate(q, 1.5707963129999492, 9);
  sqcRZGate(q, -3.1415926176668694, 9);
  sqcRYGate(q, 1.5707965896792393, 10);
  sqcRZGate(q, 2.8052170118892046, 10);
  sqcRYGate(q, -1.5707965323190198, 11);
  sqcRZGate(q, 0.26939650318967373, 11);
  sqcRYGate(q, 1.5707963062072432, 12);
  sqcRZGate(q, 3.0903722456242333, 12);
  sqcRYGate(q, -1.5707962438514758, 13);
  sqcRZGate(q, 1.9857371303411082, 13);
  sqcRYGate(q, -1.570796307524862, 14);
  sqcRZGate(q, -3.141592592991531, 14);
  sqcRYGate(q, -1.5707963290681837, 15);
  sqcRZGate(q, 8.658751937673514e-09, 15);
  sqcRYGate(q, -1.5707963465668808, 16);
  sqcRZGate(q, -3.1415926266263803, 16);
  sqcRYGate(q, -1.5707963065363435, 17);
  sqcRZGate(q, -3.1415926035152086, 17);
  sqcRYGate(q, -1.5707963358377164, 18);
  sqcRZGate(q, 1.1055970960202677, 18);
  sqcRYGate(q, 1.5707962913807272, 19);
  sqcRZGate(q, 2.8131425485267783, 19);
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
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
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
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
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
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
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
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
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
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 1.570779119822511, 0);
  sqcRZGate(q, -1.1934838274336068, 0);
  sqcRYGate(q, -1.5707997339518645, 1);
  sqcRZGate(q, -0.9304023646171187, 1);
  sqcRYGate(q, 3.1152856977005703, 2);
  sqcRZGate(q, 3.1414745465067253, 2);
  sqcRYGate(q, -0.042217194866987384, 3);
  sqcRZGate(q, 4.548661555503486e-05, 3);
  sqcRYGate(q, -1.5709057537604072, 4);
  sqcRZGate(q, 3.1293248244143914, 4);
  sqcRYGate(q, 1.5707963787472394, 5);
  sqcRZGate(q, -4.729077100669142e-06, 5);
  sqcRYGate(q, 3.1414933585617635, 6);
  sqcRZGate(q, 1.8189025235906353, 6);
  sqcRYGate(q, -3.108975855245236, 7);
  sqcRZGate(q, 2.319850258835051, 7);
  sqcRYGate(q, 3.6913367658650235e-09, 8);
  sqcRZGate(q, 2.7892109760946733, 8);
  sqcRYGate(q, -1.6649109713743666, 9);
  sqcRZGate(q, -1.5707973329724547, 9);
  sqcRYGate(q, -2.3913533375718998e-08, 10);
  sqcRZGate(q, 1.9071718119556744, 10);
  sqcRYGate(q, 3.1415919035890045, 11);
  sqcRZGate(q, 1.8401925055397073, 11);
  sqcRYGate(q, -3.1415848739130627, 12);
  sqcRZGate(q, -1.6220191061125144, 12);
  sqcRYGate(q, -3.1415926179619773, 13);
  sqcRZGate(q, -2.7658425294196096, 13);
  sqcRYGate(q, -2.501380725115731, 14);
  sqcRZGate(q, 1.4361032708296868, 14);
  sqcRYGate(q, -0.8277378369847516, 15);
  sqcRZGate(q, 1.5711181083240495, 15);
  sqcRYGate(q, 1.9578089441605604, 16);
  sqcRZGate(q, 1.1692594358440884, 16);
  sqcRYGate(q, -1.5574666279202645, 17);
  sqcRZGate(q, -1.5710682952161554, 17);
  sqcRYGate(q, 3.1415926411467963, 18);
  sqcRZGate(q, -0.46519811286590773, 18);
  sqcRYGate(q, 2.006841376120304e-07, 19);
  sqcRZGate(q, -3.055146070272817, 19);
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
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
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
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
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
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
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
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
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
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, -3.141592569747027, 0);
  sqcRZGate(q, 0.3728131235446339, 0);
  sqcRYGate(q, 3.1415926367888547, 1);
  sqcRZGate(q, -2.864686702325729, 1);
  sqcRYGate(q, -1.5707871414470986, 2);
  sqcRZGate(q, -3.09072294505586, 2);
  sqcRYGate(q, -1.5708156819401782, 3);
  sqcRZGate(q, -3.0602388978697337, 3);
  sqcRYGate(q, 0.001083738598639383, 4);
  sqcRZGate(q, -1.4434397922939055, 4);
  sqcRYGate(q, 1.5697205911062715, 5);
  sqcRZGate(q, 1.570796349845141, 5);
  sqcRYGate(q, -0.893682568084575, 6);
  sqcRZGate(q, -1.5707965993240849, 6);
  sqcRYGate(q, -8.697231519990643e-08, 7);
  sqcRZGate(q, -2.3199641757002607, 7);
  sqcRYGate(q, 2.5327984772117036, 8);
  sqcRZGate(q, 2.906476661515344, 8);
  sqcRYGate(q, 0.8459057885554109, 9);
  sqcRZGate(q, -2.060560151227584, 9);
  sqcRYGate(q, -2.395605477350226, 10);
  sqcRZGate(q, -0.799469161888922, 10);
  sqcRYGate(q, 0.28188509793033045, 11);
  sqcRZGate(q, 1.1145722588253648, 11);
  sqcRYGate(q, 2.5422058422587313, 12);
  sqcRZGate(q, -1.5707985380731913, 12);
  sqcRYGate(q, -1.5514876490913222e-05, 13);
  sqcRZGate(q, -1.1922368400384427, 13);
  sqcRYGate(q, -1.7166030885640282e-05, 14);
  sqcRZGate(q, 1.6364024407959594, 14);
  sqcRYGate(q, 3.1177501750258574, 15);
  sqcRZGate(q, 1.880254737902245, 15);
  sqcRYGate(q, 8.563173017783754e-06, 16);
  sqcRZGate(q, 0.538552380159396, 16);
  sqcRYGate(q, 0.023033891375683565, 17);
  sqcRZGate(q, 2.1001272269887084, 17);
  sqcRYGate(q, -0.721910608597609, 18);
  sqcRZGate(q, -2.1200356002313985, 18);
  sqcRYGate(q, -3.141592463794214, 19);
  sqcRZGate(q, -0.24200280254009945, 19);
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
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
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
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
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
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
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
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
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
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, -1.570796464959572, 0);
  sqcRZGate(q, -0.6569969186754334, 0);
  sqcRYGate(q, -1.5707963001273217, 1);
  sqcRZGate(q, 3.0370225408759888, 1);
  sqcRYGate(q, -2.128825805421914, 2);
  sqcRZGate(q, -2.2250407804273147, 2);
  sqcRYGate(q, 2.5820471881600544, 3);
  sqcRZGate(q, -0.4064070364261061, 3);
  sqcRYGate(q, 9.578320968373077e-06, 4);
  sqcRZGate(q, 2.9965225353987033, 4);
  sqcRYGate(q, -1.5707868160929053, 5);
  sqcRZGate(q, -1.570797616273086, 5);
  sqcRYGate(q, 1.7120471885186015, 6);
  sqcRZGate(q, -1.5708329215542218, 6);
  sqcRYGate(q, -1.7861087196918677, 7);
  sqcRZGate(q, 1.5708276987506329, 7);
  sqcRYGate(q, -3.1415926483614403, 8);
  sqcRZGate(q, 2.906590947482475, 8);
  sqcRYGate(q, -1.1141014066851085e-07, 9);
  sqcRZGate(q, -1.4141795420971977, 9);
  sqcRYGate(q, 3.141592587304656, 10);
  sqcRZGate(q, 1.2770346861302526, 10);
  sqcRYGate(q, -4.5421349049546197e-07, 11);
  sqcRZGate(q, -2.498137457473739, 11);
  sqcRYGate(q, -1.2458116230324328, 12);
  sqcRZGate(q, -0.13456809555311725, 12);
  sqcRYGate(q, -2.766364715128381e-09, 13);
  sqcRZGate(q, 2.1787626402851332, 13);
  sqcRYGate(q, 3.1415919599197863, 14);
  sqcRZGate(q, 0.2912078984550259, 14);
  sqcRYGate(q, 4.5605328491404856e-07, 15);
  sqcRZGate(q, 1.557497838961842, 15);
  sqcRYGate(q, 3.1415926210481766, 16);
  sqcRZGate(q, 0.7863495589093006, 16);
  sqcRYGate(q, -3.141592578580266, 17);
  sqcRZGate(q, -2.9638207758918664, 17);
  sqcRYGate(q, 3.141592559519202, 18);
  sqcRZGate(q, 1.5499192336086152, 18);
  sqcRYGate(q, -2.742545708571296, 19);
  sqcRZGate(q, 0.3625875765961015, 19);
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
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
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
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
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
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
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
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
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
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 2.9714094131541215, 0);
  sqcRZGate(q, 1.7043706680804611, 0);
  sqcRYGate(q, -1.436283839119711, 1);
  sqcRZGate(q, -0.7731744032612335, 1);
  sqcRYGate(q, 3.559063885383296e-06, 2);
  sqcRZGate(q, 3.0449985392994225, 2);
  sqcRYGate(q, -3.141589379527074, 3);
  sqcRZGate(q, -2.823984257029845, 3);
  sqcRYGate(q, 3.141591355763083, 4);
  sqcRZGate(q, -0.8073239297845278, 4);
  sqcRYGate(q, 1.5707960507185292, 5);
  sqcRZGate(q, 0.7934540444617042, 5);
  sqcRYGate(q, 0.9404018734566015, 6);
  sqcRZGate(q, 2.364290855748216, 6);
  sqcRYGate(q, -1.833196709133931, 7);
  sqcRZGate(q, 2.364278257416324, 7);
  sqcRYGate(q, 0.3079224968664791, 8);
  sqcRZGate(q, -0.7774271154432654, 8);
  sqcRYGate(q, -3.1414873510825827, 9);
  sqcRZGate(q, -1.1104691018970954, 9);
  sqcRYGate(q, -4.453256758907287e-05, 10);
  sqcRZGate(q, 0.2877689577180755, 10);
  sqcRYGate(q, 4.066248059597655e-05, 11);
  sqcRZGate(q, -2.5353470563411427, 11);
  sqcRYGate(q, -3.1415469468296098, 12);
  sqcRZGate(q, -2.4826835297611467, 12);
  sqcRYGate(q, 5.725049264260207e-05, 13);
  sqcRZGate(q, -1.7246541249080485, 13);
  sqcRYGate(q, -3.141537667089824, 14);
  sqcRZGate(q, -1.9878199766445714, 14);
  sqcRYGate(q, 0.00017971811742700794, 15);
  sqcRZGate(q, -1.0731566276031348, 15);
  sqcRYGate(q, -3.141503445176327, 16);
  sqcRZGate(q, 3.013608727395831, 16);
  sqcRYGate(q, -3.1415360423705376, 17);
  sqcRZGate(q, -2.699401266123577, 17);
  sqcRYGate(q, -0.00010187929242237465, 18);
  sqcRZGate(q, 1.8359135190428209, 18);
  sqcRYGate(q, 5.565361704462646e-05, 19);
  sqcRZGate(q, -2.710700890983079, 19);

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
