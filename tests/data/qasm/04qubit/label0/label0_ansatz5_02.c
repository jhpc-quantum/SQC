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

  sqcRYGate(q, -0.5917860171481744, 0);
  sqcRYGate(q, 0.044897400316961815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.170911650023774, 0);
  sqcRYGate(q, 1.6083494344106264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21145122181773066, 2);
  sqcRYGate(q, -1.7375910770392515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2507046699218136, 2);
  sqcRYGate(q, 1.134992098933863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8419671120581964, 1);
  sqcRYGate(q, -0.999690084600727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.628313030380582, 1);
  sqcRYGate(q, 1.9405964717901096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2903210221478574, 0);
  sqcRYGate(q, -2.1368272101132066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15973339223185706, 0);
  sqcRYGate(q, -1.292708249125691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.168615692142895, 2);
  sqcRYGate(q, -0.3151336556239501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1078853575526577, 2);
  sqcRYGate(q, -1.5807935214881965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7861906287635896, 1);
  sqcRYGate(q, -1.8466246007818907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6046550100385186, 1);
  sqcRYGate(q, 2.6933916343702586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9031549354244723, 0);
  sqcRYGate(q, 2.8750626989180197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9987939523175338, 0);
  sqcRYGate(q, -0.6557590826453135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.403460340837545, 2);
  sqcRYGate(q, -0.46651289626152426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4730774438544048, 2);
  sqcRYGate(q, -2.6327854172707212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15120531209623367, 1);
  sqcRYGate(q, 2.0977411526858543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4995589577872894, 1);
  sqcRYGate(q, 1.7537724217007904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.003452253758972, 0);
  sqcRYGate(q, 2.335625365515669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20620245001750848, 0);
  sqcRYGate(q, -0.5060135045455253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8802382659423795, 2);
  sqcRYGate(q, -1.9853905690795894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.116590721272348, 2);
  sqcRYGate(q, -2.4623914456474787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.921324271022926, 1);
  sqcRYGate(q, 0.20888385000315646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7867001186947091, 1);
  sqcRYGate(q, -1.813170841848338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.067425230299057, 0);
  sqcRYGate(q, -1.5725857939826784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.535892630554663, 0);
  sqcRYGate(q, -0.9471789394694747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5831868265404117, 2);
  sqcRYGate(q, -0.7454506897506272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.994920549490721, 2);
  sqcRYGate(q, -0.5214889303776182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8335940378142102, 1);
  sqcRYGate(q, 2.2508887736437755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3358900719359377, 1);
  sqcRYGate(q, 0.5593331522637729, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7671588784616032, 0);
  sqcRYGate(q, 0.8535205383267592, 1);
  sqcRYGate(q, 2.742154901436934, 2);
  sqcRYGate(q, 0.4736862103112376, 3);

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
