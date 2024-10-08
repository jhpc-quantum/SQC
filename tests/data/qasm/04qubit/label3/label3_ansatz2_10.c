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

  sqcRYGate(q, 2.703336651060374, 0);
  sqcRZGate(q, -0.07563820646956289, 0);
  sqcRYGate(q, -1.3057605404200472, 1);
  sqcRZGate(q, 2.1459985125358747, 1);
  sqcRYGate(q, -0.21429975459321682, 2);
  sqcRZGate(q, -1.8414258665801533, 2);
  sqcRYGate(q, -2.755765114779106, 3);
  sqcRZGate(q, -0.2692190360434416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3671745376582773, 0);
  sqcRZGate(q, 2.9814012048544054, 0);
  sqcRYGate(q, 0.06953474599405368, 1);
  sqcRZGate(q, -1.123768759198556, 1);
  sqcRYGate(q, 1.7091514276558666, 2);
  sqcRZGate(q, -2.332367274826661, 2);
  sqcRYGate(q, -2.942578242431386, 3);
  sqcRZGate(q, 1.395930148404421, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2440759337076246, 0);
  sqcRZGate(q, -0.10449366692412543, 0);
  sqcRYGate(q, -0.06142213758301551, 1);
  sqcRZGate(q, -0.09760686828103804, 1);
  sqcRYGate(q, -1.6539274012164746, 2);
  sqcRZGate(q, -2.3193265616587375, 2);
  sqcRYGate(q, -2.0586111458278844, 3);
  sqcRZGate(q, -2.330827201512581, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6531129204895345, 0);
  sqcRZGate(q, 1.6132843040285814, 0);
  sqcRYGate(q, 2.243218830155953, 1);
  sqcRZGate(q, 0.3770245865101232, 1);
  sqcRYGate(q, 0.6228520013038547, 2);
  sqcRZGate(q, 1.6653035825084284, 2);
  sqcRYGate(q, -2.0758627706846173, 3);
  sqcRZGate(q, 1.4134182335516883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3025362485608571, 0);
  sqcRZGate(q, 1.3268621700570966, 0);
  sqcRYGate(q, -1.0309740352659622, 1);
  sqcRZGate(q, 1.7800516794113734, 1);
  sqcRYGate(q, 2.0824335588632836, 2);
  sqcRZGate(q, -2.773428663052665, 2);
  sqcRYGate(q, -2.7499609778200553, 3);
  sqcRZGate(q, 2.295927738689837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.048084745930129354, 0);
  sqcRZGate(q, -2.2790574077392995, 0);
  sqcRYGate(q, 2.09190904320304, 1);
  sqcRZGate(q, 0.2799572209612701, 1);
  sqcRYGate(q, -2.2254442220766224, 2);
  sqcRZGate(q, 2.3524843636813313, 2);
  sqcRYGate(q, 2.6930640290599257, 3);
  sqcRZGate(q, 1.4992749587437677, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5679475024988233, 0);
  sqcRZGate(q, -1.346347829305316, 0);
  sqcRYGate(q, 0.4732342525754357, 1);
  sqcRZGate(q, 1.8191713388028234, 1);
  sqcRYGate(q, 0.28087576161881067, 2);
  sqcRZGate(q, 2.8022547556052153, 2);
  sqcRYGate(q, 1.1632392918224286, 3);
  sqcRZGate(q, 1.62189021774416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5705126184032032, 0);
  sqcRZGate(q, -0.8249006556258847, 0);
  sqcRYGate(q, -2.390339290744958, 1);
  sqcRZGate(q, 2.718614423296087, 1);
  sqcRYGate(q, -1.37837310132159, 2);
  sqcRZGate(q, -1.3397609053595163, 2);
  sqcRYGate(q, 0.2678703586353224, 3);
  sqcRZGate(q, 1.519460029815386, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6880457060396632, 0);
  sqcRZGate(q, -2.8549351648229586, 0);
  sqcRYGate(q, 0.9944031160036098, 1);
  sqcRZGate(q, 1.756333387389277, 1);
  sqcRYGate(q, -1.4939649479001584, 2);
  sqcRZGate(q, 0.45704974914138496, 2);
  sqcRYGate(q, -0.503937715420049, 3);
  sqcRZGate(q, -2.9651454222493716, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.3598757214425446, 0);
  sqcRZGate(q, 2.743449675063628, 0);
  sqcRYGate(q, -0.17959759882051876, 1);
  sqcRZGate(q, -2.9174957043006544, 1);
  sqcRYGate(q, 2.055704053065941, 2);
  sqcRZGate(q, -2.7207203842339402, 2);
  sqcRYGate(q, -0.8244823589057821, 3);
  sqcRZGate(q, -1.3961521896922762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7518440013918464, 0);
  sqcRZGate(q, -1.9414347179223976, 0);
  sqcRYGate(q, -1.3137455344768387, 1);
  sqcRZGate(q, 1.1477120007637318, 1);
  sqcRYGate(q, 0.9484745452184811, 2);
  sqcRZGate(q, 3.05668513037689, 2);
  sqcRYGate(q, 1.7702537755177374, 3);
  sqcRZGate(q, 0.6974592224637917, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4308428784415335, 0);
  sqcRZGate(q, -0.6491654943431315, 0);
  sqcRYGate(q, 0.7824056091700387, 1);
  sqcRZGate(q, 0.35315245350991104, 1);
  sqcRYGate(q, 1.087545879808878, 2);
  sqcRZGate(q, -2.7928550277824726, 2);
  sqcRYGate(q, -1.706258121719296, 3);
  sqcRZGate(q, 0.017257796628595508, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.356053325521556, 0);
  sqcRZGate(q, 0.6971463087650243, 0);
  sqcRYGate(q, 1.4928316478875567, 1);
  sqcRZGate(q, 2.5280822243864383, 1);
  sqcRYGate(q, 2.226439293191674, 2);
  sqcRZGate(q, -0.35108958105536137, 2);
  sqcRYGate(q, -2.1885804594785085, 3);
  sqcRZGate(q, -1.6980977181988959, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.522398736958746, 0);
  sqcRZGate(q, -0.8177678733959678, 0);
  sqcRYGate(q, 3.092529533732027, 1);
  sqcRZGate(q, -1.4140603696749228, 1);
  sqcRYGate(q, 0.3564910190422612, 2);
  sqcRZGate(q, -1.3161567275511263, 2);
  sqcRYGate(q, 1.1497726279644678, 3);
  sqcRZGate(q, -1.9765634927613513, 3);

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
