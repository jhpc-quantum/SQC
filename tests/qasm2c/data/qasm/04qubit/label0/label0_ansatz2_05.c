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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.9175366640178559, 0);
  sqcRZGate(q, 0.07956130911475154, 0);
  sqcRYGate(q, -0.1405622956845107, 1);
  sqcRZGate(q, 0.9650306874737709, 1);
  sqcRYGate(q, -2.531718905944004, 2);
  sqcRZGate(q, -0.5289115222689901, 2);
  sqcRYGate(q, 2.7385793282941058, 3);
  sqcRZGate(q, -1.4757666692301523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0131282774909707, 0);
  sqcRZGate(q, -2.86951368659917, 0);
  sqcRYGate(q, -1.3740672347399614, 1);
  sqcRZGate(q, -2.049251658892725, 1);
  sqcRYGate(q, -0.14132005708265186, 2);
  sqcRZGate(q, -0.5289260228709874, 2);
  sqcRYGate(q, -0.551000820975377, 3);
  sqcRZGate(q, -2.0051266851595635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.31207044353368435, 0);
  sqcRZGate(q, 0.6718414014096656, 0);
  sqcRYGate(q, -1.1732873974314761, 1);
  sqcRZGate(q, 0.7854718650744824, 1);
  sqcRYGate(q, -2.694919737897253, 2);
  sqcRZGate(q, -0.17068045711132296, 2);
  sqcRYGate(q, 0.4090522926056057, 3);
  sqcRZGate(q, 0.3708447441318275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.435926545931204, 0);
  sqcRZGate(q, -2.172291285116681, 0);
  sqcRYGate(q, -1.954511979440868, 1);
  sqcRZGate(q, 2.9652172594564297, 1);
  sqcRYGate(q, 0.5443990596794152, 2);
  sqcRZGate(q, 1.1283342124691202, 2);
  sqcRYGate(q, 1.1368157421834546, 3);
  sqcRZGate(q, -1.8746605232940539, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.2169027095259256, 0);
  sqcRZGate(q, 2.9942953474234892, 0);
  sqcRYGate(q, -1.6429924639708715, 1);
  sqcRZGate(q, 0.7937239580804513, 1);
  sqcRYGate(q, -0.4796827359489474, 2);
  sqcRZGate(q, -0.8701382993556556, 2);
  sqcRYGate(q, -1.222694539025622, 3);
  sqcRZGate(q, 2.4117093125633433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.328675567168559, 0);
  sqcRZGate(q, -1.7414766868035012, 0);
  sqcRYGate(q, 1.5445427797329279, 1);
  sqcRZGate(q, -0.20473672406931254, 1);
  sqcRYGate(q, -3.1104054851935588, 2);
  sqcRZGate(q, 1.3645391091614212, 2);
  sqcRYGate(q, 2.4944274729461027, 3);
  sqcRZGate(q, -1.0878220650883281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9209213828663002, 0);
  sqcRZGate(q, -0.663201806672113, 0);
  sqcRYGate(q, 2.796584918789889, 1);
  sqcRZGate(q, 1.583316759508591, 1);
  sqcRYGate(q, -2.9742364563316888, 2);
  sqcRZGate(q, 1.1210466770033358, 2);
  sqcRYGate(q, 0.8096331967752839, 3);
  sqcRZGate(q, 0.43593738969934226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.299798388484942, 0);
  sqcRZGate(q, -1.307208063921287, 0);
  sqcRYGate(q, -2.6332812205061766, 1);
  sqcRZGate(q, -0.3338311713564739, 1);
  sqcRYGate(q, 1.3731355500986862, 2);
  sqcRZGate(q, 1.3428512947740314, 2);
  sqcRYGate(q, 2.2766908315139274, 3);
  sqcRZGate(q, -1.5484416629211992, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.216209180032907, 0);
  sqcRZGate(q, 0.49278492606242585, 0);
  sqcRYGate(q, -1.241900484458239, 1);
  sqcRZGate(q, 0.03671761331961853, 1);
  sqcRYGate(q, -2.7385244574590035, 2);
  sqcRZGate(q, 1.1112501913996522, 2);
  sqcRYGate(q, 1.1836299259168739, 3);
  sqcRZGate(q, -2.8576007006930713, 3);

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
