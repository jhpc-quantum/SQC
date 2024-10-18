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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.41634039596228317, 0);
  sqcRYGate(q, -2.6462770301499923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1403254849538857, 0);
  sqcRYGate(q, -0.10697381922960503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3489524193516989, 1);
  sqcRYGate(q, 2.7300225340284325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1574029564524961, 1);
  sqcRYGate(q, -2.114770395722167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24360501467096984, 2);
  sqcRYGate(q, 2.5219086709805727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.596650525494082, 2);
  sqcRYGate(q, 1.7137348971512907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1325600143343055, 3);
  sqcRYGate(q, 1.5707835326641792, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04524261537548109, 3);
  sqcRYGate(q, -1.7107288757167929, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5707780220475822, 4);
  sqcRYGate(q, -1.8294586998879958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1415880927003887, 4);
  sqcRYGate(q, 2.715189497045684, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.701672777438843, 5);
  sqcRYGate(q, -2.908768870123124, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.940852264357783, 5);
  sqcRYGate(q, 2.2460503729052164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9758064603916674, 6);
  sqcRYGate(q, 2.9522305148189734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6164783741136397, 6);
  sqcRYGate(q, -1.7062082711554645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7905011035075186, 0);
  sqcRYGate(q, -3.1346932044457576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.033833184380526, 0);
  sqcRYGate(q, -0.6935738091840503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.113973992923785, 1);
  sqcRYGate(q, -3.038760873933443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7706687333104723, 1);
  sqcRYGate(q, 2.4908768645893584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2802202876057542, 2);
  sqcRYGate(q, -1.6922427095488537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3116216498046978, 2);
  sqcRYGate(q, -3.0174894628037863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5395276808149676, 3);
  sqcRYGate(q, -0.47822701373283216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.141591837715053, 3);
  sqcRYGate(q, 1.4223455681098383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.478224417911453, 4);
  sqcRYGate(q, -2.27910956003217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.570798753524807, 4);
  sqcRYGate(q, 1.622241674846826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5708109307002605, 5);
  sqcRYGate(q, 3.040563531841906, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707849696882599, 5);
  sqcRYGate(q, -1.6683550854508296, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707983562175125, 6);
  sqcRYGate(q, 0.7707309147269333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5707972490916848, 6);
  sqcRYGate(q, 1.6153554720180558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3520883466740017, 0);
  sqcRYGate(q, -2.3541908553103763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6643982409001223, 0);
  sqcRYGate(q, -1.4261909159403086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5949095432138636, 1);
  sqcRYGate(q, 1.5707874238213018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.570797206626855, 1);
  sqcRYGate(q, -1.5707968004118262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.102961426226785, 2);
  sqcRYGate(q, -0.2567793392481229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1415910091608454, 2);
  sqcRYGate(q, -3.141592012369043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7537712390911224, 3);
  sqcRYGate(q, -3.141591525607253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5707949349270143, 3);
  sqcRYGate(q, -2.8155306012262275e-07, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5707967367589024, 4);
  sqcRYGate(q, -7.566720115869335e-07, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5707964605470697, 4);
  sqcRYGate(q, -1.5707972136100898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5707942749363133, 5);
  sqcRYGate(q, -1.0257962733018632e-06, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707973547238498, 5);
  sqcRYGate(q, 2.3530278539063176, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707965182381394, 6);
  sqcRYGate(q, -9.529468512070592e-07, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5707962876105288, 6);
  sqcRYGate(q, 1.570797958212542, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8693567637190718, 0);
  sqcRYGate(q, 1.5545044735547549, 1);
  sqcRYGate(q, 3.08667334318248, 2);
  sqcRYGate(q, -0.4560420038436819, 3);
  sqcRYGate(q, -1.5870846260376141, 4);
  sqcRYGate(q, 1.554509463835422, 5);
  sqcRYGate(q, -1.5870849199614279, 6);
  sqcRYGate(q, -1.5870852918320386, 7);

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
