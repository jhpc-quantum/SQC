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

  sqcRYGate(q, 1.2071389697216324, 0);
  sqcRYGate(q, 0.6882416407811514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.514849665572541, 0);
  sqcRYGate(q, 0.6936660765031444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.48079192400195314, 2);
  sqcRYGate(q, -2.3773704514030203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6801196530295086, 2);
  sqcRYGate(q, 1.105531186453474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9403736504481082, 0);
  sqcRYGate(q, -0.43624093562927974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08156406530708994, 0);
  sqcRYGate(q, 2.474542702140556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2857545535769885, 1);
  sqcRYGate(q, -2.6573353879041486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9761189549537135, 1);
  sqcRYGate(q, -1.8521027931849086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.227992699654481, 0);
  sqcRYGate(q, -1.3087652141892983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0970157195087213, 0);
  sqcRYGate(q, -0.7503329244208768, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.04074226346204409, 1);
  sqcRYGate(q, -1.9386965898757076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4956421925020411, 1);
  sqcRYGate(q, -1.6101189405485545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0468969081422346, 0);
  sqcRYGate(q, 1.197802590257938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0034087459619183, 0);
  sqcRYGate(q, 1.6732769035958182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.310448982717829, 2);
  sqcRYGate(q, -2.0022397122883975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.02685646434352, 2);
  sqcRYGate(q, 1.3740893370879181, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5891109214227415, 0);
  sqcRYGate(q, 0.8030326661675335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36320487584799466, 0);
  sqcRYGate(q, -1.3852967748074934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2329005407075986, 1);
  sqcRYGate(q, 1.1473813139535998, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.952909018816367, 1);
  sqcRYGate(q, 2.0749247968783386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.565047256265741, 0);
  sqcRYGate(q, -1.4680986016443645, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2003979249280556, 0);
  sqcRYGate(q, 2.269270601798131, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.04151307150009281, 1);
  sqcRYGate(q, -1.1001283725799926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6554016060821697, 1);
  sqcRYGate(q, 1.358871672456166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5083868667058349, 0);
  sqcRYGate(q, -2.0404776655442367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3704468239288157, 0);
  sqcRYGate(q, 0.4915838835932851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1604590977334102, 2);
  sqcRYGate(q, -1.5704813679575587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03225539275391398, 2);
  sqcRYGate(q, 2.661708920997225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.417196972365045, 0);
  sqcRYGate(q, 3.1069478065470504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3494512847007307, 0);
  sqcRYGate(q, 3.1069775120582963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5378554238511053, 1);
  sqcRYGate(q, -0.33840583233923655, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2839778720439456, 1);
  sqcRYGate(q, 2.2837654919128654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.003485220045607, 0);
  sqcRYGate(q, 0.932796681263997, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.265013558363898, 0);
  sqcRYGate(q, 2.6066344419907677, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.909085097664977, 1);
  sqcRYGate(q, 2.229006238997238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1342404256833722, 1);
  sqcRYGate(q, 0.8695833030062143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6415960114804884, 0);
  sqcRYGate(q, -1.4466575536440835, 1);
  sqcRYGate(q, -0.7915596970872577, 2);
  sqcRYGate(q, -0.8165658708116688, 3);

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
