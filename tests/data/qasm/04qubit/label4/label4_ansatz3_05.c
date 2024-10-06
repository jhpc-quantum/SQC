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

  sqcRYGate(q, 1.7194787785585457, 0);
  sqcRZGate(q, 1.2462517522805883, 0);
  sqcRYGate(q, -0.2602247760658575, 1);
  sqcRZGate(q, -1.350519776248715, 1);
  sqcRYGate(q, 1.3227976067064728, 2);
  sqcRZGate(q, 1.8687812624421785, 2);
  sqcRYGate(q, 0.9205027203654552, 3);
  sqcRZGate(q, 0.49523958205940627, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5604219722372211, 0);
  sqcRZGate(q, 2.610130441004448, 0);
  sqcRYGate(q, 1.0603266934685114, 1);
  sqcRZGate(q, 0.6768405637097908, 1);
  sqcRYGate(q, -0.9802195897152028, 2);
  sqcRZGate(q, -1.739433566975292, 2);
  sqcRYGate(q, 2.966056020417209, 3);
  sqcRZGate(q, -2.0190323304979225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0101664918416997, 0);
  sqcRZGate(q, -0.9418892550005173, 0);
  sqcRYGate(q, -1.0563946346714825, 1);
  sqcRZGate(q, -0.34206307179790585, 1);
  sqcRYGate(q, -0.018881821919425168, 2);
  sqcRZGate(q, 0.37949222510500824, 2);
  sqcRYGate(q, 1.8431836303615123, 3);
  sqcRZGate(q, -1.7342295438608983, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.18875598009189, 0);
  sqcRZGate(q, -2.670907841106856, 0);
  sqcRYGate(q, -1.421404980661758, 1);
  sqcRZGate(q, 1.1404564587786699, 1);
  sqcRYGate(q, 1.2309729323277538, 2);
  sqcRZGate(q, 2.6257148930346292, 2);
  sqcRYGate(q, -1.473968982226769, 3);
  sqcRZGate(q, -1.4559314934287504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2951171419917884, 0);
  sqcRZGate(q, -3.1197490698760584, 0);
  sqcRYGate(q, 0.9484268959526632, 1);
  sqcRZGate(q, -0.6888504214222684, 1);
  sqcRYGate(q, 2.5378033815401113, 2);
  sqcRZGate(q, -0.4213510884223966, 2);
  sqcRYGate(q, 0.40604146110546235, 3);
  sqcRZGate(q, -2.5807731088871817, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.94687390517899, 0);
  sqcRZGate(q, 0.5928736457758399, 0);
  sqcRYGate(q, 1.5653159542186736, 1);
  sqcRZGate(q, 2.194380573833288, 1);
  sqcRYGate(q, -1.430966464397186, 2);
  sqcRZGate(q, -1.6996049847274266, 2);
  sqcRYGate(q, -1.2226692392633947, 3);
  sqcRZGate(q, -0.6423705762565171, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6181109959436597, 0);
  sqcRZGate(q, -1.2129496816377978, 0);
  sqcRYGate(q, -2.46899439813114, 1);
  sqcRZGate(q, -1.7096076798772122, 1);
  sqcRYGate(q, -2.907302788902851, 2);
  sqcRZGate(q, 2.819997413129467, 2);
  sqcRYGate(q, -1.2388333651325962, 3);
  sqcRZGate(q, -1.0456789111726952, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.812440181575341, 0);
  sqcRZGate(q, -2.5540922060623825, 0);
  sqcRYGate(q, -1.4978702539069761, 1);
  sqcRZGate(q, -2.4594051915607293, 1);
  sqcRYGate(q, -1.8654218493832628, 2);
  sqcRZGate(q, -3.1294092657102173, 2);
  sqcRYGate(q, -2.8051141829391377, 3);
  sqcRZGate(q, -2.3468415485891616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.011230884833408, 0);
  sqcRZGate(q, 2.778955023819008, 0);
  sqcRYGate(q, -2.490267232018686, 1);
  sqcRZGate(q, -2.386595312817376, 1);
  sqcRYGate(q, 3.0894755333086468, 2);
  sqcRZGate(q, -1.6370171167263834, 2);
  sqcRYGate(q, 1.4671266309440707, 3);
  sqcRZGate(q, 0.1745221415618827, 3);

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
