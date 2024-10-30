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

  sqcRYGate(q, -2.497223337551312, 0);
  sqcRZGate(q, 2.4528928240605206, 0);
  sqcRYGate(q, 2.479776541275832, 1);
  sqcRZGate(q, -2.456206535818233, 1);
  sqcRYGate(q, 0.4120344338691151, 2);
  sqcRZGate(q, 2.8921857034179657, 2);
  sqcRYGate(q, 1.476153635157405, 3);
  sqcRZGate(q, -0.27504114067377056, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.154761788071453, 0);
  sqcRZGate(q, 1.4650169795250423, 0);
  sqcRYGate(q, -2.217783583338213, 1);
  sqcRZGate(q, -1.7155760183342155, 1);
  sqcRYGate(q, 0.9293181989692617, 2);
  sqcRZGate(q, -3.1152239285904084, 2);
  sqcRYGate(q, 2.4635222155636893, 3);
  sqcRZGate(q, -0.9994235521409226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1329877523461684, 0);
  sqcRZGate(q, -1.3482330592352378, 0);
  sqcRYGate(q, -1.650393038414915, 1);
  sqcRZGate(q, 2.3273920357979683, 1);
  sqcRYGate(q, -1.6424623446904338, 2);
  sqcRZGate(q, -2.694045154927049, 2);
  sqcRYGate(q, -1.6335389577888306, 3);
  sqcRZGate(q, -1.4823540210288755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7154077697689676, 0);
  sqcRZGate(q, 3.086119639253531, 0);
  sqcRYGate(q, -0.2602437723906592, 1);
  sqcRZGate(q, -0.9502738922124888, 1);
  sqcRYGate(q, -0.1200069624224369, 2);
  sqcRZGate(q, 2.9790863853651315, 2);
  sqcRYGate(q, 0.1329743338610261, 3);
  sqcRZGate(q, 1.4474173791319047, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.682535415918365, 0);
  sqcRZGate(q, 0.9226976446196279, 0);
  sqcRYGate(q, -3.141060705157178, 1);
  sqcRZGate(q, -2.325465165009673, 1);
  sqcRYGate(q, -2.9453419448829883, 2);
  sqcRZGate(q, -1.3013762274869816, 2);
  sqcRYGate(q, 1.2953569526703328, 3);
  sqcRZGate(q, 0.8165995386106624, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0962012852477934, 0);
  sqcRZGate(q, 2.413456680768614, 0);
  sqcRYGate(q, -2.2255350938956697, 1);
  sqcRZGate(q, 2.4835159345960593, 1);
  sqcRYGate(q, -0.8404357095148409, 2);
  sqcRZGate(q, -0.5238315389557399, 2);
  sqcRYGate(q, 1.9456810856354314, 3);
  sqcRZGate(q, -2.3780322947052577, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.845722467304784, 0);
  sqcRZGate(q, -1.0044259434649465, 0);
  sqcRYGate(q, -0.791220628517249, 1);
  sqcRZGate(q, -1.2363600594512025, 1);
  sqcRYGate(q, 0.6088881667614854, 2);
  sqcRZGate(q, 1.0446114404760938, 2);
  sqcRYGate(q, -2.4096789850753946, 3);
  sqcRZGate(q, -1.280179431698975, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1912221335601334, 0);
  sqcRZGate(q, 1.9628328178690995, 0);
  sqcRYGate(q, 0.4357014944973331, 1);
  sqcRZGate(q, 2.727474201236921, 1);
  sqcRYGate(q, 2.6882197140829547, 2);
  sqcRZGate(q, -0.5212208007945944, 2);
  sqcRYGate(q, -1.929993517678521, 3);
  sqcRZGate(q, 2.644749819305918, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6032670655254857, 0);
  sqcRZGate(q, -1.4566987480833786, 0);
  sqcRYGate(q, 0.32589366721683266, 1);
  sqcRZGate(q, -3.090379930081513, 1);
  sqcRYGate(q, -1.342321864347501, 2);
  sqcRZGate(q, 0.05649936319042607, 2);
  sqcRYGate(q, 2.759302904864023, 3);
  sqcRZGate(q, -0.561448929248943, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.04832852596147994, 0);
  sqcRZGate(q, -0.5501734867058614, 0);
  sqcRYGate(q, 2.651438413672548, 1);
  sqcRZGate(q, -1.008959509969177, 1);
  sqcRYGate(q, -0.8425518833127681, 2);
  sqcRZGate(q, 1.7040049262380244, 2);
  sqcRYGate(q, -1.7153078023304873, 3);
  sqcRZGate(q, -1.9646909600109046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8690958617177404, 0);
  sqcRZGate(q, -2.123193403157045, 0);
  sqcRYGate(q, 1.3885976837440135, 1);
  sqcRZGate(q, 1.092764693999245, 1);
  sqcRYGate(q, -0.024089990000992323, 2);
  sqcRZGate(q, 3.068982451424887, 2);
  sqcRYGate(q, 3.139334620911132, 3);
  sqcRZGate(q, -1.5707472277125518, 3);

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
