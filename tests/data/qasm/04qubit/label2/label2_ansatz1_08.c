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

  sqcRYGate(q, -1.7288577186384249, 0);
  sqcRZGate(q, -2.312727959120859, 0);
  sqcRYGate(q, 0.9252924352124039, 1);
  sqcRZGate(q, -0.25575351280347336, 1);
  sqcRYGate(q, -1.780304085470063, 2);
  sqcRZGate(q, -0.8746655396623104, 2);
  sqcRYGate(q, 2.504866559650968, 3);
  sqcRZGate(q, 1.4532655584688503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9130420930110095, 0);
  sqcRZGate(q, -0.08677977147764009, 0);
  sqcRYGate(q, 1.0239773934381544, 1);
  sqcRZGate(q, 0.6569704578533333, 1);
  sqcRYGate(q, -0.4314617216095443, 2);
  sqcRZGate(q, -0.25947653085002637, 2);
  sqcRYGate(q, -0.16681769681841044, 3);
  sqcRZGate(q, -0.5071451821906638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.270632369848197, 0);
  sqcRZGate(q, 2.8830724629962465, 0);
  sqcRYGate(q, 1.8842260709591656, 1);
  sqcRZGate(q, 0.7861537154291274, 1);
  sqcRYGate(q, 1.015437784925032, 2);
  sqcRZGate(q, -1.857583594219595, 2);
  sqcRYGate(q, -0.5111011738081216, 3);
  sqcRZGate(q, 1.0752670392245753, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5700224950848138, 0);
  sqcRZGate(q, -2.5582572556493948, 0);
  sqcRYGate(q, -2.5770522526453736, 1);
  sqcRZGate(q, -2.3276306834619978, 1);
  sqcRYGate(q, 3.064096079472041, 2);
  sqcRZGate(q, 2.986346915524287, 2);
  sqcRYGate(q, -1.317032914676366, 3);
  sqcRZGate(q, 2.803402175057347, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.340159797310581, 0);
  sqcRZGate(q, 2.859641794205387, 0);
  sqcRYGate(q, -1.7077891151601259, 1);
  sqcRZGate(q, -1.40281570035045, 1);
  sqcRYGate(q, -2.768827495587551, 2);
  sqcRZGate(q, 1.4898119356185577, 2);
  sqcRYGate(q, -2.66286234203738, 3);
  sqcRZGate(q, 2.672605438721348, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4705001020679775, 0);
  sqcRZGate(q, -1.6896994417021656, 0);
  sqcRYGate(q, -0.7021551274347368, 1);
  sqcRZGate(q, -0.3327737394305087, 1);
  sqcRYGate(q, -1.4628076263316514, 2);
  sqcRZGate(q, -1.9647518013487153, 2);
  sqcRYGate(q, 0.8941748015955432, 3);
  sqcRZGate(q, 1.9651966311959015, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9278524091643069, 0);
  sqcRZGate(q, 1.8771948736478585, 0);
  sqcRYGate(q, 2.7280131417582854, 1);
  sqcRZGate(q, -1.9680515644114482, 1);
  sqcRYGate(q, -3.095647085840535, 2);
  sqcRZGate(q, -2.3851109792521417, 2);
  sqcRYGate(q, 1.2818006065346503, 3);
  sqcRZGate(q, 0.18644555370046062, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5038821061551157, 0);
  sqcRZGate(q, -1.8207077564136327, 0);
  sqcRYGate(q, -2.1783527964639706, 1);
  sqcRZGate(q, -2.715595087408893, 1);
  sqcRYGate(q, -1.3414934550958943, 2);
  sqcRZGate(q, -2.4454447471341676, 2);
  sqcRYGate(q, 2.322304076591437, 3);
  sqcRZGate(q, -2.023485428034551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5059308331494089, 0);
  sqcRZGate(q, -2.901974453974781, 0);
  sqcRYGate(q, 2.8262054924640854, 1);
  sqcRZGate(q, -0.4649864851523899, 1);
  sqcRYGate(q, -2.9568869908547417, 2);
  sqcRZGate(q, 0.7869464246982507, 2);
  sqcRYGate(q, -2.896627008105886, 3);
  sqcRZGate(q, 2.2743042892310488, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4196680329060278, 0);
  sqcRZGate(q, -2.3933229528426265, 0);
  sqcRYGate(q, -1.8601219420383108, 1);
  sqcRZGate(q, 2.2187019171157907, 1);
  sqcRYGate(q, 1.189407150860566, 2);
  sqcRZGate(q, 0.624995760872054, 2);
  sqcRYGate(q, 2.199376871144, 3);
  sqcRZGate(q, 0.46624472248140697, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.541843497376953, 0);
  sqcRZGate(q, 0.8300206019240987, 0);
  sqcRYGate(q, 0.11172860151772213, 1);
  sqcRZGate(q, 0.08410785903919483, 1);
  sqcRYGate(q, 1.2224088801551642, 2);
  sqcRZGate(q, 2.564926764265506, 2);
  sqcRYGate(q, -1.0456618115298386, 3);
  sqcRZGate(q, -2.5822988174222417, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8907474769500379, 0);
  sqcRZGate(q, -2.8489879445200303, 0);
  sqcRYGate(q, 1.4054784835632104, 1);
  sqcRZGate(q, 0.8774421131872466, 1);
  sqcRYGate(q, 0.83834778218292, 2);
  sqcRZGate(q, 1.7791843173035016, 2);
  sqcRYGate(q, -1.6165922691922585, 3);
  sqcRZGate(q, -1.4494743524657858, 3);

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
