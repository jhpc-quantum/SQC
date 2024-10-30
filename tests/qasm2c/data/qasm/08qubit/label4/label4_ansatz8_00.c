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

  sqcRYGate(q, -1.1346118630317497, 0);
  sqcRYGate(q, 0.4896938799460727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6915771941187554, 0);
  sqcRYGate(q, -3.1047522891103547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17584387304459081, 2);
  sqcRYGate(q, 1.1561183718490144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0276052108841043, 2);
  sqcRYGate(q, 2.571606934997686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0594263643875665, 4);
  sqcRYGate(q, 1.8822990415817507, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5119610367370938, 4);
  sqcRYGate(q, -1.2780550517172653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5925019268001126, 6);
  sqcRYGate(q, 2.539342569021427, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10610821602936849, 6);
  sqcRYGate(q, 0.09341851538834886, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7143723876052057, 0);
  sqcRYGate(q, 2.3506245133959403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2158140767734498, 0);
  sqcRYGate(q, -2.683719746317623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5286043245351337, 2);
  sqcRYGate(q, 1.8852206152478699, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.570307330268248, 2);
  sqcRYGate(q, 2.7385170623198962, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5594876847030088, 4);
  sqcRYGate(q, 0.6835234990880837, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0010945976430160372, 4);
  sqcRYGate(q, 3.0941655617091866, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.817463704711682, 1);
  sqcRYGate(q, 2.161130727774153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7364164978617004, 1);
  sqcRYGate(q, -0.0002097417641335915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7517740149917209, 3);
  sqcRYGate(q, 0.9576298720651054, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.00017458691936640507, 3);
  sqcRYGate(q, 3.1415225835689027, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.102930496978252, 5);
  sqcRYGate(q, 1.3374410966790031, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8300459745377564, 5);
  sqcRYGate(q, -1.285381516040221, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5425674895484482, 0);
  sqcRYGate(q, -2.30762160665613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2156858695762214, 0);
  sqcRYGate(q, 1.5885422820645072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9503464113365292, 2);
  sqcRYGate(q, -0.7517355839276855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9500734280067111, 2);
  sqcRYGate(q, 1.5708668513299826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5611031043037524, 4);
  sqcRYGate(q, 0.7225554847586375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5704535191175415, 4);
  sqcRYGate(q, 1.5707120196595445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.327104939420531, 6);
  sqcRYGate(q, -0.27269470064825824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.117183771632302, 6);
  sqcRYGate(q, -1.5173692298715349, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.022696636937302728, 0);
  sqcRYGate(q, -1.5709699366253969, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.031905099362253, 0);
  sqcRYGate(q, 3.1412436085950572, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.603969498330745, 2);
  sqcRYGate(q, -1.578463072810389, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5708027390440136, 2);
  sqcRYGate(q, 7.776601283016049e-05, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5709037540704724, 4);
  sqcRYGate(q, -2.259172913474277, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5706863850950574, 4);
  sqcRYGate(q, 1.8578584448628188, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.006138787664962564, 1);
  sqcRYGate(q, -0.0001253499076935337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5709343771220887, 1);
  sqcRYGate(q, 1.5710543299751984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7166251847926546, 3);
  sqcRYGate(q, -0.007248701036318473, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1413582332983276, 3);
  sqcRYGate(q, -2.9087971069908654, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.698611818127521, 5);
  sqcRYGate(q, -1.9405390899728967, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.140923677772604, 5);
  sqcRYGate(q, 0.0012236684056017063, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.56864353225807, 0);
  sqcRYGate(q, -1.2049415174193367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.031578662635857, 0);
  sqcRYGate(q, 1.5705659513785415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.108543825002685, 2);
  sqcRYGate(q, -0.03663611923443845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0004690956393273993, 2);
  sqcRYGate(q, -1.5709578040083656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5708876515534032, 4);
  sqcRYGate(q, 2.692343154318533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5708673669477962, 4);
  sqcRYGate(q, 1.5710847524595084, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1415351142487054, 6);
  sqcRYGate(q, -0.6268820681978399, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0001728058142358435, 6);
  sqcRYGate(q, -1.5707695060549198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9296012543026904, 0);
  sqcRYGate(q, -1.5642698365070111, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.25708533795013416, 0);
  sqcRYGate(q, 1.6111796941946828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5696481419936994, 2);
  sqcRYGate(q, 3.1310211189834813, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.00014430675085117618, 2);
  sqcRYGate(q, 3.094651864820748, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5812985375583635, 4);
  sqcRYGate(q, 1.5266194142222913, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5706953641954415, 4);
  sqcRYGate(q, 3.0396964717028085, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.211990229113682, 1);
  sqcRYGate(q, -1.6187314193475215, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5706603283600264, 1);
  sqcRYGate(q, -1.8910004031614218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5708970366063726, 3);
  sqcRYGate(q, 3.141567227267087, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.570815097381142, 3);
  sqcRYGate(q, -0.44247743118556254, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5708108583704004, 5);
  sqcRYGate(q, 1.7938921563283325, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.570799511959328, 5);
  sqcRYGate(q, 1.7535842118365181, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.571135456695228, 0);
  sqcRYGate(q, 1.5705600902044803, 1);
  sqcRYGate(q, -1.565441845810087, 2);
  sqcRYGate(q, -1.57082201971342, 3);
  sqcRYGate(q, 1.5707310345754542, 4);
  sqcRYGate(q, 1.5707926854562166, 5);
  sqcRYGate(q, -1.5703735285353089, 6);
  sqcRYGate(q, 1.5707874494939054, 7);

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
