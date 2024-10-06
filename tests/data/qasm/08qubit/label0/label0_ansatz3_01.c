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

  sqcRYGate(q, -1.5018959290903406, 0);
  sqcRZGate(q, -1.8380456613377905, 0);
  sqcRYGate(q, -2.795778501068832, 1);
  sqcRZGate(q, 0.3656192988313146, 1);
  sqcRYGate(q, 0.8538941198261744, 2);
  sqcRZGate(q, -1.8429537197438473, 2);
  sqcRYGate(q, -0.254041313310065, 3);
  sqcRZGate(q, 0.16776619981434937, 3);
  sqcRYGate(q, 1.5155258410407964, 4);
  sqcRZGate(q, 3.0743843438035534, 4);
  sqcRYGate(q, -1.3569690058637318, 5);
  sqcRZGate(q, -1.5510396174323198, 5);
  sqcRYGate(q, -1.6119197954028703, 6);
  sqcRZGate(q, -1.5746918117795792, 6);
  sqcRYGate(q, -3.131010423920855, 7);
  sqcRZGate(q, -2.589707707412073, 7);
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
  sqcRYGate(q, 1.4371707059253105, 0);
  sqcRZGate(q, 2.412356129600332, 0);
  sqcRYGate(q, 3.141092132380631, 1);
  sqcRZGate(q, 1.6754515482215142, 1);
  sqcRYGate(q, 3.1180121130189336, 2);
  sqcRZGate(q, 3.007382338063652, 2);
  sqcRYGate(q, 0.00622193665981019, 3);
  sqcRZGate(q, -1.3857194643429704, 3);
  sqcRYGate(q, -3.141292923877895, 4);
  sqcRZGate(q, 0.26685841160116386, 4);
  sqcRYGate(q, -1.5912907060315906, 5);
  sqcRZGate(q, -1.5529427605334618, 5);
  sqcRYGate(q, 1.2599312483015703, 6);
  sqcRZGate(q, -1.3770210599568502, 6);
  sqcRYGate(q, 1.4266699424517217, 7);
  sqcRZGate(q, -1.726353296565704, 7);
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
  sqcRYGate(q, -0.2698195562752678, 0);
  sqcRZGate(q, -0.8313507667072074, 0);
  sqcRYGate(q, -0.004147280922475246, 1);
  sqcRZGate(q, 0.3169986668358042, 1);
  sqcRYGate(q, 0.7840377380924314, 2);
  sqcRZGate(q, 2.9926109288298486, 2);
  sqcRYGate(q, -1.5312682158460529, 3);
  sqcRZGate(q, 2.7616681165065615, 3);
  sqcRYGate(q, 1.6269374040210356, 4);
  sqcRZGate(q, -3.098029928989159, 4);
  sqcRYGate(q, -0.23251279095960078, 5);
  sqcRZGate(q, 0.21309184970307063, 5);
  sqcRYGate(q, -0.047477939411104224, 6);
  sqcRZGate(q, -0.8474921563416116, 6);
  sqcRYGate(q, -2.8845933642430768, 7);
  sqcRZGate(q, -1.7282498913202424, 7);
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
  sqcRYGate(q, -1.5485288031950226, 0);
  sqcRZGate(q, 1.4572994301050217, 0);
  sqcRYGate(q, 0.02534047908341286, 1);
  sqcRZGate(q, -1.7145237930025594, 1);
  sqcRYGate(q, -2.930988949111361, 2);
  sqcRZGate(q, -1.62799470138047, 2);
  sqcRYGate(q, -3.129556505992612, 3);
  sqcRZGate(q, -1.9506989610708159, 3);
  sqcRYGate(q, 0.0022954048315154303, 4);
  sqcRZGate(q, 1.1407093278037213, 4);
  sqcRYGate(q, 0.02614478578379753, 5);
  sqcRZGate(q, 1.41683283163459, 5);
  sqcRYGate(q, 0.0010705591477462306, 6);
  sqcRZGate(q, 2.247254214840266, 6);
  sqcRYGate(q, 1.705992469699174, 7);
  sqcRZGate(q, 1.0774020731880256, 7);
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
  sqcRYGate(q, 1.5707177199133717, 0);
  sqcRZGate(q, 3.1389239344777, 0);
  sqcRYGate(q, 1.5709159844929415, 1);
  sqcRZGate(q, -3.102296483630625, 1);
  sqcRYGate(q, -1.5779639341007916, 2);
  sqcRZGate(q, -0.19170488756280202, 2);
  sqcRYGate(q, 1.5274941894446588, 3);
  sqcRZGate(q, -1.5424393544620387, 3);
  sqcRYGate(q, -1.5727851151153782, 4);
  sqcRZGate(q, -0.002802067635908483, 4);
  sqcRYGate(q, 2.6242023638251606, 5);
  sqcRZGate(q, -1.4967018938498544, 5);
  sqcRYGate(q, 1.0496169594881204, 6);
  sqcRZGate(q, 1.5484878674058455, 6);
  sqcRYGate(q, -1.5167353973680262, 7);
  sqcRZGate(q, 3.109204947575465, 7);

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
