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

  sqcRYGate(q, 1.3884167447709963, 0);
  sqcRYGate(q, -1.880080168235523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.728216724905981, 0);
  sqcRYGate(q, 0.6506960468270411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7386901910636066, 2);
  sqcRYGate(q, 1.9390809238196387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1166069569382735, 2);
  sqcRYGate(q, 2.021433691801758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.479688251494642, 0);
  sqcRYGate(q, -3.0597076925572337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16682255593945783, 0);
  sqcRYGate(q, 1.0761564641321353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14291211622165712, 1);
  sqcRYGate(q, 0.29648214511919146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7096339465844874, 1);
  sqcRYGate(q, -1.376352437252363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4377939278827123, 0);
  sqcRYGate(q, 1.4722334116610583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8174623322189634, 0);
  sqcRYGate(q, 1.005915330699385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5392672049961655, 2);
  sqcRYGate(q, -1.329215468222543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.912294416479195, 2);
  sqcRYGate(q, 0.38654840471820684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.585534985088177, 0);
  sqcRYGate(q, -0.8729585920736506, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9274319894562746, 0);
  sqcRYGate(q, 2.9223061366897585, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7740672311763364, 1);
  sqcRYGate(q, 2.030563362922666, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5111659240349056, 1);
  sqcRYGate(q, -1.8063598534167007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5439843853911697, 0);
  sqcRYGate(q, -0.4188942599988576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2139192919364959, 0);
  sqcRYGate(q, 1.2296410537404794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17779904143259895, 2);
  sqcRYGate(q, 2.8268613482585665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.157591451968205, 2);
  sqcRYGate(q, 1.5241380811145104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5969943524117334, 0);
  sqcRYGate(q, -1.456588561428493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4761572433972274, 0);
  sqcRYGate(q, -1.205848415834177, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.123708426011546, 1);
  sqcRYGate(q, 2.9070357319828593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.22405030784975022, 1);
  sqcRYGate(q, 0.5429700666465125, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6223471101126243, 0);
  sqcRYGate(q, 2.7111973222002725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0390270055355613, 0);
  sqcRYGate(q, -0.49118879888748973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8646331986283737, 2);
  sqcRYGate(q, 2.512157974181765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2890870539338062, 2);
  sqcRYGate(q, -1.248648490792747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.39624696275226867, 0);
  sqcRYGate(q, -0.9034854410287428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0095014193358867, 0);
  sqcRYGate(q, -0.03690427235320559, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5960642272494383, 1);
  sqcRYGate(q, 1.974701101716501, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2326653084206125, 1);
  sqcRYGate(q, -0.4690975952998485, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7949068481949886, 0);
  sqcRYGate(q, -0.5564731120676735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.357948741099545, 0);
  sqcRYGate(q, -2.0376946581285464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9527618592504985, 2);
  sqcRYGate(q, 1.3590845542842354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9771717968495057, 2);
  sqcRYGate(q, -0.4317040958870795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9800765242072496, 0);
  sqcRYGate(q, 2.2976979312503003, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.500085691595789, 0);
  sqcRYGate(q, 0.25570961161091965, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9193937553141214, 1);
  sqcRYGate(q, 0.9020740073087057, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7150911864568794, 1);
  sqcRYGate(q, -0.528631614205259, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.511533869864376, 0);
  sqcRYGate(q, 1.0017249225603928, 1);
  sqcRYGate(q, -1.0514369738083882, 2);
  sqcRYGate(q, 0.23268350031063087, 3);

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
