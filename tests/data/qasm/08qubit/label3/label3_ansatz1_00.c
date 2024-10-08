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

  sqcRYGate(q, 1.6074255323254842, 0);
  sqcRZGate(q, 1.570796383154315, 0);
  sqcRYGate(q, -1.666193466807649, 1);
  sqcRZGate(q, 1.5708034012897247, 1);
  sqcRYGate(q, -1.0130758711797614, 2);
  sqcRZGate(q, 3.1415915218000623, 2);
  sqcRYGate(q, -0.7399831029851116, 3);
  sqcRZGate(q, -3.1415919325844084, 3);
  sqcRYGate(q, 2.470685119729587, 4);
  sqcRZGate(q, -3.1415920183063974, 4);
  sqcRYGate(q, -1.5707968238997418, 5);
  sqcRZGate(q, -0.06504775048497058, 5);
  sqcRYGate(q, 1.5707963538823604, 6);
  sqcRZGate(q, 0.34966550253101314, 6);
  sqcRYGate(q, -1.7244922490867272, 7);
  sqcRZGate(q, -1.5707956088803228, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707892719628747, 0);
  sqcRZGate(q, -1.59772612039387, 0);
  sqcRYGate(q, 1.5707961408774889, 1);
  sqcRZGate(q, 0.9160520558058821, 1);
  sqcRYGate(q, 1.7173423733337483, 2);
  sqcRZGate(q, -1.5707971227227504, 2);
  sqcRYGate(q, -1.0197149057546682, 3);
  sqcRZGate(q, 1.5707980544884883, 3);
  sqcRYGate(q, 1.570795983024529, 4);
  sqcRZGate(q, 1.4171903283180967, 4);
  sqcRYGate(q, 1.4524247466464315, 5);
  sqcRZGate(q, -1.4241510456036457, 5);
  sqcRYGate(q, 2.0701712540501505, 6);
  sqcRZGate(q, 0.6168028247598346, 6);
  sqcRYGate(q, 3.0085873369375955, 7);
  sqcRZGate(q, 1.5707967555007496, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6091282148074244, 0);
  sqcRZGate(q, -2.583692749717752, 0);
  sqcRYGate(q, 2.067640343260899, 1);
  sqcRZGate(q, 1.5099419516804202, 1);
  sqcRYGate(q, -2.604933233035941, 2);
  sqcRZGate(q, 3.141590485451309, 2);
  sqcRYGate(q, 0.15384639588265436, 3);
  sqcRZGate(q, -2.38800711382936e-06, 3);
  sqcRYGate(q, 2.904163787493649, 4);
  sqcRZGate(q, 2.120006961014547, 4);
  sqcRYGate(q, -0.7858422982469211, 5);
  sqcRZGate(q, -1.2661125989963553, 5);
  sqcRYGate(q, -1.5707961919985352, 6);
  sqcRZGate(q, 1.5707962034093577, 6);
  sqcRYGate(q, 1.6254987809614299, 7);
  sqcRZGate(q, -1.5707955638069535, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1415909071496686, 0);
  sqcRZGate(q, 2.411847506337301, 0);
  sqcRYGate(q, -9.773392680253435e-07, 1);
  sqcRZGate(q, 0.6278927288843108, 1);
  sqcRYGate(q, -1.5707955612382103, 2);
  sqcRZGate(q, -2.8679920222391178, 2);
  sqcRYGate(q, 1.5707955858560094, 3);
  sqcRZGate(q, -0.09180862237005451, 3);
  sqcRYGate(q, 4.427057813671809e-07, 4);
  sqcRZGate(q, -1.9639526800137599, 4);
  sqcRYGate(q, -6.409680361782648e-07, 5);
  sqcRZGate(q, -2.331005671274103, 5);
  sqcRYGate(q, -1.5707965324164967, 6);
  sqcRZGate(q, 0.35314703042326534, 6);
  sqcRYGate(q, 1.5707968333749576, 7);
  sqcRZGate(q, 2.4886609682550387, 7);

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
