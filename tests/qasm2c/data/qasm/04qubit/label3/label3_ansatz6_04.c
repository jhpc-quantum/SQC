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

  sqcRYGate(q, 1.4749363961776025, 0);
  sqcRYGate(q, 3.09332279079242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0163823832599863, 0);
  sqcRYGate(q, -0.8832405590389064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.392081037200236, 1);
  sqcRYGate(q, -2.3362856697587553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0812750257622978, 1);
  sqcRYGate(q, 0.13178182438476546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.796563104865227, 2);
  sqcRYGate(q, 1.5642104300035828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13085715264861644, 2);
  sqcRYGate(q, -0.9456423785208187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7008255603828316, 0);
  sqcRYGate(q, 1.3110823863795238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.406670439354922, 0);
  sqcRYGate(q, 2.9066879018799483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.214186378569151, 1);
  sqcRYGate(q, -0.616205872630812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6128720545410209, 1);
  sqcRYGate(q, -1.9877499867853234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.54823263643258, 2);
  sqcRYGate(q, -0.5736639764329166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.476995064183708, 2);
  sqcRYGate(q, -1.3332166829709937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13885126666358527, 0);
  sqcRYGate(q, 1.5287666232311645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.687801773148747, 0);
  sqcRYGate(q, -0.5205666816825956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9023631724593497, 1);
  sqcRYGate(q, 0.6101360460646378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7728725421842415, 1);
  sqcRYGate(q, -0.7717931505613871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.623479026306287, 2);
  sqcRYGate(q, -1.373638340648128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.90485711300565, 2);
  sqcRYGate(q, -1.821253432903359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8038014217444399, 0);
  sqcRYGate(q, -1.2508739971371208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1399267865044598, 0);
  sqcRYGate(q, 0.3708797428805951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5357293044039575, 1);
  sqcRYGate(q, 1.145724499777467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0568931190290582, 1);
  sqcRYGate(q, -1.554853936996607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6041692655066777, 2);
  sqcRYGate(q, 0.8092133416824031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.282968733954592, 2);
  sqcRYGate(q, 1.673281804773863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.897302537703374, 0);
  sqcRYGate(q, -2.8099113151347574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7956095376121595, 0);
  sqcRYGate(q, -2.4990037247766685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0594100312516996, 1);
  sqcRYGate(q, -2.6568492885550308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6883822710718155, 1);
  sqcRYGate(q, 0.874115583833075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44345442238015226, 2);
  sqcRYGate(q, 1.9024649594198224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40750768824193706, 2);
  sqcRYGate(q, -2.411855657245437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.004258134850383262, 0);
  sqcRYGate(q, 0.8297224628854973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.661707973763742, 0);
  sqcRYGate(q, 0.13735505487825872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.099292344279868, 1);
  sqcRYGate(q, -2.9433238211255968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.40985682037927607, 1);
  sqcRYGate(q, -1.1775097051132808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5827889957644636, 2);
  sqcRYGate(q, -2.171947511369143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1658896105152484, 2);
  sqcRYGate(q, -2.3775246113488784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3458917203343035, 0);
  sqcRYGate(q, -1.927701146423793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.893664501468474, 0);
  sqcRYGate(q, 2.8742948034116105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3426601257284192, 1);
  sqcRYGate(q, -1.2073915425748813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.066735263503734, 1);
  sqcRYGate(q, -0.585040966942073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3109409382854995, 2);
  sqcRYGate(q, -0.8855653196032572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2324557067681674, 2);
  sqcRYGate(q, 1.0367562076653916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.806414129421107, 0);
  sqcRYGate(q, -2.9202189444601916, 1);
  sqcRYGate(q, -2.720591090592893, 2);
  sqcRYGate(q, 2.1959971543273755, 3);

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
