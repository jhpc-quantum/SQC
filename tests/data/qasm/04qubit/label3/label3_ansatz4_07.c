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

  sqcRYGate(q, -2.530207964859731, 0);
  sqcRZGate(q, 0.4522683535461552, 0);
  sqcRYGate(q, -0.9179418402455518, 1);
  sqcRZGate(q, -1.5608283320997298, 1);
  sqcRYGate(q, 2.5951476677084147, 2);
  sqcRZGate(q, -0.5582370669480252, 2);
  sqcRYGate(q, 2.0087286752119717, 3);
  sqcRZGate(q, -1.0395829288211647, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9677348065097952, 0);
  sqcRZGate(q, -1.7815235313428976, 0);
  sqcRYGate(q, -1.3364879110782155, 1);
  sqcRZGate(q, -2.54061166931519, 1);
  sqcRYGate(q, 0.6083991785912811, 2);
  sqcRZGate(q, -2.8151677113308615, 2);
  sqcRYGate(q, 1.7429687738620587, 3);
  sqcRZGate(q, 2.17394801488577, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3485840613120246, 0);
  sqcRZGate(q, 1.3717291078147456, 0);
  sqcRYGate(q, -1.6955559076726354, 1);
  sqcRZGate(q, 2.687179701823939, 1);
  sqcRYGate(q, -2.1363698576446657, 2);
  sqcRZGate(q, -2.7657992131985782, 2);
  sqcRYGate(q, -0.7499551154937157, 3);
  sqcRZGate(q, -2.7697771574989125, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.039780845357454, 0);
  sqcRZGate(q, -1.4974911834086742, 0);
  sqcRYGate(q, -3.1175467224885387, 1);
  sqcRZGate(q, -2.052556725025238, 1);
  sqcRYGate(q, 1.5754187314005756, 2);
  sqcRZGate(q, -1.4412664557174137, 2);
  sqcRYGate(q, 0.6633235988714161, 3);
  sqcRZGate(q, -1.3815289624054916, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1580709653785581, 0);
  sqcRZGate(q, -2.370483936069135, 0);
  sqcRYGate(q, 3.0787492633898355, 1);
  sqcRZGate(q, 2.7768270872340617, 1);
  sqcRYGate(q, 1.2810813845726097, 2);
  sqcRZGate(q, 0.47170131497437434, 2);
  sqcRYGate(q, 2.416506459157383, 3);
  sqcRZGate(q, -0.017369164070873747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0289037813194253, 0);
  sqcRZGate(q, 0.4621478506793739, 0);
  sqcRYGate(q, -2.2911165049937288, 1);
  sqcRZGate(q, 1.6408696580999418, 1);
  sqcRYGate(q, 1.5979288203689899, 2);
  sqcRZGate(q, 2.894239744500333, 2);
  sqcRYGate(q, 1.9764940107486106, 3);
  sqcRZGate(q, -1.277012537427234, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8704743034686713, 0);
  sqcRZGate(q, 1.0683742843953272, 0);
  sqcRYGate(q, -2.2857019828958247, 1);
  sqcRZGate(q, -0.37632325399344424, 1);
  sqcRYGate(q, -2.959759015535387, 2);
  sqcRZGate(q, -2.322221606952789, 2);
  sqcRYGate(q, 0.18569304685014248, 3);
  sqcRZGate(q, -0.9923462661982115, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2471209913038652, 0);
  sqcRZGate(q, 0.5174208643468843, 0);
  sqcRYGate(q, 2.8385825698469462, 1);
  sqcRZGate(q, 1.896320901324068, 1);
  sqcRYGate(q, -2.2416465845282234, 2);
  sqcRZGate(q, 2.551362582546171, 2);
  sqcRYGate(q, -2.6122655502751475, 3);
  sqcRZGate(q, 2.0532206065192007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7302406390500505, 0);
  sqcRZGate(q, -1.9774166755499503, 0);
  sqcRYGate(q, 2.492314542114089, 1);
  sqcRZGate(q, 2.672019385052508, 1);
  sqcRYGate(q, -0.014370802408214796, 2);
  sqcRZGate(q, -1.8971967727460277, 2);
  sqcRYGate(q, -1.448787861799035, 3);
  sqcRZGate(q, -1.470453005926595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6317685434389917, 0);
  sqcRZGate(q, 2.0404097618256802, 0);
  sqcRYGate(q, 1.6813717812815023, 1);
  sqcRZGate(q, 2.209697343684798, 1);
  sqcRYGate(q, -0.9221228637909331, 2);
  sqcRZGate(q, -0.6136116690510889, 2);
  sqcRYGate(q, -0.4889257083182816, 3);
  sqcRZGate(q, 2.437833295906003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7744984418259708, 0);
  sqcRZGate(q, 1.9514513896895114, 0);
  sqcRYGate(q, 0.3060131785303462, 1);
  sqcRZGate(q, 2.24619028500123, 1);
  sqcRYGate(q, 0.7515432725859466, 2);
  sqcRZGate(q, 3.111267863666564, 2);
  sqcRYGate(q, -2.5588475612906443, 3);
  sqcRZGate(q, 0.5366570510274736, 3);

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
