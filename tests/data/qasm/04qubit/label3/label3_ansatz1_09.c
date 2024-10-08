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

  sqcRYGate(q, 1.3635331332583025, 0);
  sqcRZGate(q, 0.7344662735865881, 0);
  sqcRYGate(q, -1.4062383071130755, 1);
  sqcRZGate(q, -1.2666698345379395, 1);
  sqcRYGate(q, 0.05035899860371451, 2);
  sqcRZGate(q, -1.237530103955875, 2);
  sqcRYGate(q, -2.4026635496351685, 3);
  sqcRZGate(q, -2.8174413248907664, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.926649414974848, 0);
  sqcRZGate(q, -1.022676413866873, 0);
  sqcRYGate(q, -2.9520191374110425, 1);
  sqcRZGate(q, 3.0787984799747883, 1);
  sqcRYGate(q, -1.9739615205516332, 2);
  sqcRZGate(q, -2.0059234292651587, 2);
  sqcRYGate(q, -0.6681233939999331, 3);
  sqcRZGate(q, -1.5894888974516004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.35747025254496645, 0);
  sqcRZGate(q, 1.752212114822257, 0);
  sqcRYGate(q, -0.7699351582648462, 1);
  sqcRZGate(q, 2.129743374827785, 1);
  sqcRYGate(q, -1.7212562959050102, 2);
  sqcRZGate(q, 0.6294584216067253, 2);
  sqcRYGate(q, -1.638566788766708, 3);
  sqcRZGate(q, -1.5739838836274185, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9648095365408427, 0);
  sqcRZGate(q, 1.670396551274369, 0);
  sqcRYGate(q, -2.480553913540718, 1);
  sqcRZGate(q, 3.0177460626005943, 1);
  sqcRYGate(q, 2.8778762576014416, 2);
  sqcRZGate(q, 0.7306337140191315, 2);
  sqcRYGate(q, 0.32415888107509794, 3);
  sqcRZGate(q, -2.80880514181941, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.275883905176121, 0);
  sqcRZGate(q, -0.8118640416617366, 0);
  sqcRYGate(q, -0.3173073987380768, 1);
  sqcRZGate(q, 1.4372266852989601, 1);
  sqcRYGate(q, -0.6675250851021107, 2);
  sqcRZGate(q, 0.07006375949316195, 2);
  sqcRYGate(q, -0.17997722036485028, 3);
  sqcRZGate(q, -2.0625013459220667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9905188300036505, 0);
  sqcRZGate(q, -0.1884770404049712, 0);
  sqcRYGate(q, 0.7897369885835146, 1);
  sqcRZGate(q, 1.0627644572461394, 1);
  sqcRYGate(q, -1.7204685128972461, 2);
  sqcRZGate(q, 2.093904731282633, 2);
  sqcRYGate(q, 0.09340927394654372, 3);
  sqcRZGate(q, 2.36184176919541, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3907794289169124, 0);
  sqcRZGate(q, -1.7367580703972836, 0);
  sqcRYGate(q, -0.7918580974268892, 1);
  sqcRZGate(q, -3.0166435603451567, 1);
  sqcRYGate(q, 1.2124404684121965, 2);
  sqcRZGate(q, -0.24939467955329778, 2);
  sqcRYGate(q, -2.9261053000811854, 3);
  sqcRZGate(q, 0.8461823347211243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.679017268833431, 0);
  sqcRZGate(q, 1.9315668474728964, 0);
  sqcRYGate(q, 2.322407978589854, 1);
  sqcRZGate(q, -1.7433731089675968, 1);
  sqcRYGate(q, 2.462446417673475, 2);
  sqcRZGate(q, 2.3884574698646848, 2);
  sqcRYGate(q, 2.4650620898460143, 3);
  sqcRZGate(q, 1.4264147254866228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5693911126145266, 0);
  sqcRZGate(q, 3.101326076656692, 0);
  sqcRYGate(q, 0.7144168779132709, 1);
  sqcRZGate(q, -1.6394925975297383, 1);
  sqcRYGate(q, 0.7973018887945553, 2);
  sqcRZGate(q, -0.46205661653962815, 2);
  sqcRYGate(q, -0.19400164998247982, 3);
  sqcRZGate(q, -0.7174917351949013, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3589965764066863, 0);
  sqcRZGate(q, 1.475337516328814, 0);
  sqcRYGate(q, -1.4088236149525633, 1);
  sqcRZGate(q, -1.49296303024781, 1);
  sqcRYGate(q, -2.8486344453023276, 2);
  sqcRZGate(q, -0.688770935353831, 2);
  sqcRYGate(q, -2.1411730806929286, 3);
  sqcRZGate(q, -2.4077241401423644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.38377735441578237, 0);
  sqcRZGate(q, 1.3123526838874597, 0);
  sqcRYGate(q, 0.670149422977156, 1);
  sqcRZGate(q, -1.9041317668496949, 1);
  sqcRYGate(q, -2.3207899443058713, 2);
  sqcRZGate(q, 0.012582724622182793, 2);
  sqcRYGate(q, -1.5811321183079676, 3);
  sqcRZGate(q, -0.828022205336354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8188396397624849, 0);
  sqcRZGate(q, 0.04833957095383213, 0);
  sqcRYGate(q, -2.2697142305147997, 1);
  sqcRZGate(q, -2.92013691340648, 1);
  sqcRYGate(q, 1.8334520117858988, 2);
  sqcRZGate(q, -2.4400495829166946, 2);
  sqcRYGate(q, 2.7983143435641455, 3);
  sqcRZGate(q, -2.5351090980478843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5683582913484484, 0);
  sqcRZGate(q, 2.557653562654551, 0);
  sqcRYGate(q, -0.1258540764610233, 1);
  sqcRZGate(q, -2.881724565714493, 1);
  sqcRYGate(q, 2.0895470563538607, 2);
  sqcRZGate(q, -2.329160109587095, 2);
  sqcRYGate(q, -1.60308105028611, 3);
  sqcRZGate(q, -0.6200218787377095, 3);

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
