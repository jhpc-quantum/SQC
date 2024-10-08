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

  sqcRYGate(q, 2.3305531598110236, 0);
  sqcRYGate(q, 3.057941319861876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6934619591467434, 0);
  sqcRYGate(q, -0.6916697568902093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.291792539506977, 2);
  sqcRYGate(q, 1.4331428820797616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3579966975498995, 2);
  sqcRYGate(q, 0.6765330590222263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0974971590573017, 0);
  sqcRYGate(q, -1.1537683702651051, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9598153028093769, 0);
  sqcRYGate(q, -1.0633429121674975, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7405055785200565, 1);
  sqcRYGate(q, -1.974836150774465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38854372597461173, 1);
  sqcRYGate(q, 2.286895325035538, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2295357479019599, 0);
  sqcRYGate(q, 1.9865382983336337, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7799793727267348, 0);
  sqcRYGate(q, -2.1474974732000964, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2094440765938117, 1);
  sqcRYGate(q, 2.663424946718304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.910240344094259, 1);
  sqcRYGate(q, -0.1351688893897266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1301121248130173, 0);
  sqcRYGate(q, -2.3449942706596567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4298706995710502, 0);
  sqcRYGate(q, -0.6283179822643364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0194094222697614, 2);
  sqcRYGate(q, -2.726943803745568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.089498422175102, 2);
  sqcRYGate(q, 2.1707387917264227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0823782465354392, 0);
  sqcRYGate(q, 2.3805699167513876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.43572021472569616, 0);
  sqcRYGate(q, -2.8524344416658503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.41809294860211743, 1);
  sqcRYGate(q, 2.3134970349206667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3779496663484326, 1);
  sqcRYGate(q, 3.0070390578936688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.08131080463884242, 0);
  sqcRYGate(q, 0.0971334049197562, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9971237166930988, 0);
  sqcRYGate(q, 2.0426727177686637, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.175003476593864, 1);
  sqcRYGate(q, 0.47949310582488813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.933757067539856, 1);
  sqcRYGate(q, -2.8496466748382145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3287899467360953, 0);
  sqcRYGate(q, -1.6617279966333582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.553220299318097, 0);
  sqcRYGate(q, -2.6784565598053676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2814054044956174, 2);
  sqcRYGate(q, -0.06301817466259724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9035780011310286, 2);
  sqcRYGate(q, -2.0725697880645964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4564941064638095, 0);
  sqcRYGate(q, -2.9349625944826894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.57256026623309, 0);
  sqcRYGate(q, 0.7459794593146345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9376092887384164, 1);
  sqcRYGate(q, -0.3956629493715195, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8298169711200098, 1);
  sqcRYGate(q, 1.05658936184558, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2135349760940377, 0);
  sqcRYGate(q, -2.106915584472554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1714037375975073, 0);
  sqcRYGate(q, -1.4735203231087635, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1346992042431976, 1);
  sqcRYGate(q, 0.9367119969213696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3180501114084904, 1);
  sqcRYGate(q, -2.5217903855728485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5143791631628633, 0);
  sqcRYGate(q, -1.6919376113158382, 1);
  sqcRYGate(q, 2.499877824522309, 2);
  sqcRYGate(q, -2.352098372685392, 3);

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
