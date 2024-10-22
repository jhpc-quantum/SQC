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

  sqcRYGate(q, 0.24147554992595377, 0);
  sqcRZGate(q, -0.2806360003295866, 0);
  sqcRYGate(q, 2.668028356621488, 1);
  sqcRZGate(q, -0.5679769494327225, 1);
  sqcRYGate(q, 2.955179133537611, 2);
  sqcRZGate(q, -2.8594480763922565, 2);
  sqcRYGate(q, 1.6509614392950784, 3);
  sqcRZGate(q, 2.7151608074548137, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.48726726244462126, 0);
  sqcRZGate(q, 1.744466086040974, 0);
  sqcRYGate(q, 1.0642440197464742, 1);
  sqcRZGate(q, 2.1798708095351067, 1);
  sqcRYGate(q, -1.8060990296559203, 2);
  sqcRZGate(q, -0.47893238613049194, 2);
  sqcRYGate(q, 0.8680857262176556, 3);
  sqcRZGate(q, -1.3692156731618415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3136939552584945, 0);
  sqcRZGate(q, -2.192607623432866, 0);
  sqcRYGate(q, 2.6232710513387336, 1);
  sqcRZGate(q, -2.469289285953109, 1);
  sqcRYGate(q, 2.125078693109457, 2);
  sqcRZGate(q, 1.6415756047804058, 2);
  sqcRYGate(q, 2.945557717187339, 3);
  sqcRZGate(q, -2.0220900889556717, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8589757894200778, 0);
  sqcRZGate(q, -0.6915172541899115, 0);
  sqcRYGate(q, -1.4202960099772737, 1);
  sqcRZGate(q, 0.013274482196906412, 1);
  sqcRYGate(q, -1.2754985038424067, 2);
  sqcRZGate(q, 1.4666714784473762, 2);
  sqcRYGate(q, -2.1777385283444897, 3);
  sqcRZGate(q, 1.6364650491373212, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0101602918417, 0);
  sqcRZGate(q, -2.013121152691793, 0);
  sqcRYGate(q, 1.2803988029337463, 1);
  sqcRZGate(q, -2.6535223806533437, 1);
  sqcRYGate(q, -0.5318830477251741, 2);
  sqcRZGate(q, 2.644401390585058, 2);
  sqcRYGate(q, 3.0318899158277115, 3);
  sqcRZGate(q, -0.5006945807193989, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.452521623726976, 0);
  sqcRZGate(q, 2.081030554203213, 0);
  sqcRYGate(q, -1.3202143484415423, 1);
  sqcRZGate(q, -1.556016337316799, 1);
  sqcRYGate(q, 1.4719738947442504, 2);
  sqcRZGate(q, -2.3971742235660236, 2);
  sqcRYGate(q, -2.8934162252247697, 3);
  sqcRZGate(q, -0.49729278143719735, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.587217833862013, 0);
  sqcRZGate(q, 2.910379700809049, 0);
  sqcRYGate(q, -0.07420986158028509, 1);
  sqcRZGate(q, -2.690162717275459, 1);
  sqcRYGate(q, -0.054441960518818895, 2);
  sqcRZGate(q, 0.7419417994649775, 2);
  sqcRYGate(q, -1.0084592547070619, 3);
  sqcRZGate(q, -2.0045549031585908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.499212167439669, 0);
  sqcRZGate(q, 1.7224828205601406, 0);
  sqcRYGate(q, -1.1020176926179528, 1);
  sqcRZGate(q, 0.38435261075507465, 1);
  sqcRYGate(q, -2.0386464316656294, 2);
  sqcRZGate(q, -1.5664758274852648, 2);
  sqcRYGate(q, -1.5785470399125607, 3);
  sqcRZGate(q, -0.618313126523522, 3);

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
