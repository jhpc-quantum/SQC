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

  sqcRYGate(q, -1.5707966410554843, 0);
  sqcRZGate(q, 2.9726928564343678, 0);
  sqcRYGate(q, 0.09012506683326157, 1);
  sqcRZGate(q, 1.5707962889179887, 1);
  sqcRYGate(q, 1.470699055796052, 2);
  sqcRZGate(q, 3.141592210590321, 2);
  sqcRYGate(q, -5.7969209201232236e-08, 3);
  sqcRZGate(q, 2.045910542140982, 3);
  sqcRYGate(q, -3.141592650278118, 4);
  sqcRZGate(q, -2.452538284219537, 4);
  sqcRYGate(q, -8.20857860044e-09, 5);
  sqcRZGate(q, -0.22237794600821204, 5);
  sqcRYGate(q, -0.7476851029050984, 6);
  sqcRZGate(q, -0.9998275459020044, 6);
  sqcRYGate(q, 0.15521166686250432, 7);
  sqcRZGate(q, 2.3586724140791056, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.845586558800269e-06, 0);
  sqcRZGate(q, 1.693665157000452, 0);
  sqcRYGate(q, 1.5707961607712093, 1);
  sqcRZGate(q, -2.5926324822178652, 1);
  sqcRYGate(q, 1.5707996978904628, 2);
  sqcRZGate(q, 1.5707960925935733, 2);
  sqcRYGate(q, -1.5707961725194712, 3);
  sqcRZGate(q, -2.0463788510402585, 3);
  sqcRYGate(q, 1.5707963319305545, 4);
  sqcRZGate(q, -1.1299863651457285, 4);
  sqcRYGate(q, 3.1415925127799005, 5);
  sqcRZGate(q, -0.7080433652375151, 5);
  sqcRYGate(q, -2.1410908194154925, 6);
  sqcRZGate(q, -2.430783013912206, 6);
  sqcRYGate(q, -1.651947695061568, 7);
  sqcRZGate(q, 1.3881561133903249, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415926349522114, 0);
  sqcRZGate(q, 1.4066958137611192, 0);
  sqcRYGate(q, -5.144852046612414e-07, 1);
  sqcRZGate(q, 1.9105542752615596, 1);
  sqcRYGate(q, 2.821774311257076, 2);
  sqcRZGate(q, 1.432078864087523, 2);
  sqcRYGate(q, 3.1415925685386874, 3);
  sqcRZGate(q, -2.046379601276941, 3);
  sqcRYGate(q, 3.141592645183567, 4);
  sqcRZGate(q, -2.7007706914746215, 4);
  sqcRYGate(q, -1.5707969453152426, 5);
  sqcRZGate(q, 3.5485223880286224e-07, 5);
  sqcRYGate(q, -3.1415925191639156, 6);
  sqcRZGate(q, -0.25260406560968995, 6);
  sqcRYGate(q, -1.570796333968266, 7);
  sqcRZGate(q, -1.5708099624534029, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -5.093277453127598e-07, 0);
  sqcRZGate(q, -1.8405118766901998, 0);
  sqcRYGate(q, -4.7654066677686446e-07, 1);
  sqcRZGate(q, -2.4595144387920214, 1);
  sqcRYGate(q, -3.377070736917186e-08, 2);
  sqcRZGate(q, 1.407087235515915, 2);
  sqcRYGate(q, -0.33195630635116796, 3);
  sqcRZGate(q, 2.597843879297175, 3);
  sqcRYGate(q, 3.128566552539634, 4);
  sqcRZGate(q, 0.9894896456220829, 4);
  sqcRYGate(q, 1.5707963074900921, 5);
  sqcRZGate(q, 3.1415926403478935, 5);
  sqcRYGate(q, -0.015947055801180526, 6);
  sqcRZGate(q, -1.5708004682929149, 6);
  sqcRYGate(q, 0.039197082972119594, 7);
  sqcRZGate(q, 1.2908164880182964, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0939290717715267e-07, 0);
  sqcRZGate(q, 0.38778577559108135, 0);
  sqcRYGate(q, -1.5707960537118915, 1);
  sqcRZGate(q, 0.30257990239583504, 1);
  sqcRYGate(q, 3.1415926409259094, 2);
  sqcRZGate(q, -0.3024270102132867, 2);
  sqcRYGate(q, -3.1415926406936725, 3);
  sqcRZGate(q, 2.5702422961090323, 3);
  sqcRYGate(q, -3.1415926070700992, 4);
  sqcRZGate(q, 0.16249969094991143, 4);
  sqcRYGate(q, -1.5707956942466108, 5);
  sqcRZGate(q, 1.5707961023535604, 5);
  sqcRYGate(q, 1.5707961593475939, 6);
  sqcRZGate(q, 1.5707966686457826, 6);
  sqcRYGate(q, 1.65417026226505e-07, 7);
  sqcRZGate(q, 2.3621997434873325, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707966429667666, 0);
  sqcRZGate(q, -0.14320153962033705, 0);
  sqcRYGate(q, -2.565091921009963e-07, 1);
  sqcRZGate(q, -2.0165777986835427, 1);
  sqcRYGate(q, -1.570796013350865, 2);
  sqcRZGate(q, -0.14320154765577445, 2);
  sqcRYGate(q, 3.1415925835870104, 3);
  sqcRZGate(q, 1.3999936473415113, 3);
  sqcRYGate(q, -4.5185389132465883e-07, 4);
  sqcRZGate(q, 2.254572827650161, 4);
  sqcRYGate(q, 1.5707962150206383, 5);
  sqcRZGate(q, -0.14320145134407014, 5);
  sqcRYGate(q, -1.5707960556957228, 6);
  sqcRZGate(q, -1.7139978542344148, 6);
  sqcRYGate(q, -3.1415925121684927, 7);
  sqcRZGate(q, 1.939005029215548, 7);

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
