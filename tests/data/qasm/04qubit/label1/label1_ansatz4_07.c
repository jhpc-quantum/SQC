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

  sqcRYGate(q, -1.3969664286686234, 0);
  sqcRZGate(q, -2.6518285815709697, 0);
  sqcRYGate(q, 2.894593845741447, 1);
  sqcRZGate(q, 0.7817547860125549, 1);
  sqcRYGate(q, -1.0475385504036392, 2);
  sqcRZGate(q, -0.9815505039261437, 2);
  sqcRYGate(q, -0.5818065400207998, 3);
  sqcRZGate(q, 1.1901461971726848, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.08010568866675229, 0);
  sqcRZGate(q, -0.3193554544982548, 0);
  sqcRYGate(q, 2.501693574794789, 1);
  sqcRZGate(q, -2.01947628482589, 1);
  sqcRYGate(q, -1.9763023353602664, 2);
  sqcRZGate(q, 1.58093854157706, 2);
  sqcRYGate(q, -3.117015478306591, 3);
  sqcRZGate(q, -1.8721113438136818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.921300791161003, 0);
  sqcRZGate(q, -1.6474910811052492, 0);
  sqcRYGate(q, -0.48562414706600876, 1);
  sqcRZGate(q, 0.504867018448329, 1);
  sqcRYGate(q, -0.1357702585235554, 2);
  sqcRZGate(q, -2.9953494262544234, 2);
  sqcRYGate(q, 0.19725229808195416, 3);
  sqcRZGate(q, 1.0604055700650206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5351912149517797, 0);
  sqcRZGate(q, 2.9944077404177873, 0);
  sqcRYGate(q, 2.949530442474947, 1);
  sqcRZGate(q, -2.732998389515262, 1);
  sqcRYGate(q, -1.3389543427365085, 2);
  sqcRZGate(q, 0.41697259045870033, 2);
  sqcRYGate(q, -0.9962536388192138, 3);
  sqcRZGate(q, -2.6390990205169667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.21581756460348522, 0);
  sqcRZGate(q, 1.7452880711157404, 0);
  sqcRYGate(q, 0.9042024054448143, 1);
  sqcRZGate(q, 1.6282554370874591, 1);
  sqcRYGate(q, -1.1623402267775431, 2);
  sqcRZGate(q, -2.56876642137888, 2);
  sqcRYGate(q, 0.653187346464092, 3);
  sqcRZGate(q, -2.099314337913837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9636360240317317, 0);
  sqcRZGate(q, -0.07137444242210357, 0);
  sqcRYGate(q, -2.4645887029856435, 1);
  sqcRZGate(q, 1.794807983999128, 1);
  sqcRYGate(q, 0.7632064005689277, 2);
  sqcRZGate(q, -2.9699579589504976, 2);
  sqcRYGate(q, 2.0922401975555642, 3);
  sqcRZGate(q, -2.4081163669825316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6655063967051404, 0);
  sqcRZGate(q, -1.9387290410323414, 0);
  sqcRYGate(q, -0.028376201514990144, 1);
  sqcRZGate(q, -2.2700630285053647, 1);
  sqcRYGate(q, -2.217650499584277, 2);
  sqcRZGate(q, 0.8907627020930964, 2);
  sqcRYGate(q, 0.34929479930148505, 3);
  sqcRZGate(q, -1.7173514955978482, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7888823466758883, 0);
  sqcRZGate(q, 0.11855822383399771, 0);
  sqcRYGate(q, 1.2304091424941885, 1);
  sqcRZGate(q, 1.7272211732305005, 1);
  sqcRYGate(q, 0.6624091759343607, 2);
  sqcRZGate(q, 2.57443783160279, 2);
  sqcRYGate(q, 0.14100249814875276, 3);
  sqcRZGate(q, -0.8935489383766707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4412553219382431, 0);
  sqcRZGate(q, -2.537513947258957, 0);
  sqcRYGate(q, -0.9285282160339083, 1);
  sqcRZGate(q, -1.542575654460876, 1);
  sqcRYGate(q, 2.8756391531923406, 2);
  sqcRZGate(q, -2.041930995031933, 2);
  sqcRYGate(q, 2.9038267017725405, 3);
  sqcRZGate(q, 0.4913255351459298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.608917540697503, 0);
  sqcRZGate(q, 1.9947720019352406, 0);
  sqcRYGate(q, -1.040874052993919, 1);
  sqcRZGate(q, 0.5798333495999478, 1);
  sqcRYGate(q, -0.5074695351423638, 2);
  sqcRZGate(q, 1.0290124211445688, 2);
  sqcRYGate(q, -2.4922186652140246, 3);
  sqcRZGate(q, 0.973782734558652, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8461389915089743, 0);
  sqcRZGate(q, 0.28987709985478055, 0);
  sqcRYGate(q, 1.3113688338275447, 1);
  sqcRZGate(q, 1.2615562698132523, 1);
  sqcRYGate(q, 2.8004793012770595, 2);
  sqcRZGate(q, 1.2941260214187738, 2);
  sqcRYGate(q, 3.088681265745791, 3);
  sqcRZGate(q, 0.4486566023743581, 3);

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
