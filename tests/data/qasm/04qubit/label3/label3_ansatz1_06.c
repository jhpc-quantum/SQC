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

  sqcRYGate(q, -1.6079107126826888, 0);
  sqcRZGate(q, -1.4680841927736787, 0);
  sqcRYGate(q, -1.7150407042927933, 1);
  sqcRZGate(q, -1.7514699825484121, 1);
  sqcRYGate(q, 1.1591214927892777, 2);
  sqcRZGate(q, -0.19434217418772892, 2);
  sqcRYGate(q, -1.6312967154969087, 3);
  sqcRZGate(q, 2.913200850682019, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4645298836818674, 0);
  sqcRZGate(q, -2.75315086807455, 0);
  sqcRYGate(q, -1.159572618986946, 1);
  sqcRZGate(q, -0.13844649579122856, 1);
  sqcRYGate(q, 1.5020483233647255, 2);
  sqcRZGate(q, -2.5840508427966564, 2);
  sqcRYGate(q, -0.7030006341851213, 3);
  sqcRZGate(q, -1.77378840328277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.347337714379258, 0);
  sqcRZGate(q, -2.406900082640104, 0);
  sqcRYGate(q, 0.7075666742703994, 1);
  sqcRZGate(q, 2.8364869717956775, 1);
  sqcRYGate(q, -0.9154675087878178, 2);
  sqcRZGate(q, 2.028384052571048, 2);
  sqcRYGate(q, 1.6065732955768546, 3);
  sqcRZGate(q, 2.752169267677436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8837429980921505, 0);
  sqcRZGate(q, -2.7766419674874823, 0);
  sqcRYGate(q, 2.6847513085167467, 1);
  sqcRZGate(q, 1.46040416448586, 1);
  sqcRYGate(q, 2.898236639676856, 2);
  sqcRZGate(q, -1.8866267248596653, 2);
  sqcRYGate(q, 2.324884383260604, 3);
  sqcRZGate(q, 1.3969156884207239, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.641266503765216, 0);
  sqcRZGate(q, -2.234088118947896, 0);
  sqcRYGate(q, -0.9852655940584247, 1);
  sqcRZGate(q, 0.08428944712333132, 1);
  sqcRYGate(q, 1.5311705640127484, 2);
  sqcRZGate(q, 2.6892781774422687, 2);
  sqcRYGate(q, -1.4024719850237526, 3);
  sqcRZGate(q, -0.3955600399369148, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.110062042540255, 0);
  sqcRZGate(q, 3.0949585488150304, 0);
  sqcRYGate(q, -2.6586263179946683, 1);
  sqcRZGate(q, -1.514348044467094, 1);
  sqcRYGate(q, -2.5637653141303076, 2);
  sqcRZGate(q, 2.168539672246091, 2);
  sqcRYGate(q, 1.0390143421477092, 3);
  sqcRZGate(q, 2.43723829642674, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9568109845396777, 0);
  sqcRZGate(q, -2.400955511250135, 0);
  sqcRYGate(q, 0.5431193121459875, 1);
  sqcRZGate(q, -0.7105483376643384, 1);
  sqcRYGate(q, 0.05973674635818593, 2);
  sqcRZGate(q, 0.6666418544609068, 2);
  sqcRYGate(q, -0.16032709796191746, 3);
  sqcRZGate(q, -0.8257199840919751, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7744136662665174, 0);
  sqcRZGate(q, -1.5599188748008557, 0);
  sqcRYGate(q, 0.11571279500846998, 1);
  sqcRZGate(q, -1.7391513732505015, 1);
  sqcRYGate(q, -0.05404085924359148, 2);
  sqcRZGate(q, -0.6336431332601435, 2);
  sqcRYGate(q, 0.4001254662672151, 3);
  sqcRZGate(q, 2.776120859404271, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7964822359815003, 0);
  sqcRZGate(q, 0.9483415482788233, 0);
  sqcRYGate(q, -0.04235458451949518, 1);
  sqcRZGate(q, 0.48260378206574117, 1);
  sqcRYGate(q, -0.47217269687671504, 2);
  sqcRZGate(q, -1.9144324590210626, 2);
  sqcRYGate(q, -0.6918509801046984, 3);
  sqcRZGate(q, 0.026000813325814498, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5756954811903092, 0);
  sqcRZGate(q, 0.9993505012972945, 0);
  sqcRYGate(q, 0.5936401574557802, 1);
  sqcRZGate(q, 0.7521223520507759, 1);
  sqcRYGate(q, 0.2777630728868159, 2);
  sqcRZGate(q, -2.7688217116978326, 2);
  sqcRYGate(q, -0.42499718339751646, 3);
  sqcRZGate(q, -0.44111858820745464, 3);

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
