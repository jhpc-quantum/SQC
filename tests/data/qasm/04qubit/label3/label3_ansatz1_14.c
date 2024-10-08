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

  sqcRYGate(q, 1.1113855650713198, 0);
  sqcRZGate(q, 2.6904959551569254, 0);
  sqcRYGate(q, 1.5119326037947296, 1);
  sqcRZGate(q, 1.9674909922785355, 1);
  sqcRYGate(q, -3.133131038229705, 2);
  sqcRZGate(q, -1.4066320888080777, 2);
  sqcRYGate(q, 2.95668646013973, 3);
  sqcRZGate(q, 1.2641805644801436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2759343931316243, 0);
  sqcRZGate(q, -1.195785973576085, 0);
  sqcRYGate(q, 0.238843018812906, 1);
  sqcRZGate(q, -2.9929593881534102, 1);
  sqcRYGate(q, -2.856913087561142, 2);
  sqcRZGate(q, 1.2080005477245779, 2);
  sqcRYGate(q, -1.7939437104716245, 3);
  sqcRZGate(q, -0.3907555392771958, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3729561682628335, 0);
  sqcRZGate(q, -1.7271344189341606, 0);
  sqcRYGate(q, -0.5722535084726076, 1);
  sqcRZGate(q, 0.372392710105463, 1);
  sqcRYGate(q, 0.8931058162909444, 2);
  sqcRZGate(q, 0.2367519890792126, 2);
  sqcRYGate(q, 2.9044106032097434, 3);
  sqcRZGate(q, 0.26355071561188287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.006231981512036233, 0);
  sqcRZGate(q, 1.9608392673385047, 0);
  sqcRYGate(q, -1.9856796631262703, 1);
  sqcRZGate(q, -1.6566659502088514, 1);
  sqcRYGate(q, 1.4760578444516443, 2);
  sqcRZGate(q, -2.2252583715754692, 2);
  sqcRYGate(q, 2.1039075187257272, 3);
  sqcRZGate(q, -1.236449851432111, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9893453254213633, 0);
  sqcRZGate(q, -0.227455320225735, 0);
  sqcRYGate(q, 1.1598878817784726, 1);
  sqcRZGate(q, 3.0169254971811257, 1);
  sqcRYGate(q, 0.8900988739859258, 2);
  sqcRZGate(q, -0.9323720422993711, 2);
  sqcRYGate(q, 2.388582009338537, 3);
  sqcRZGate(q, 1.5189322953161675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0782044714406, 0);
  sqcRZGate(q, 2.406483338419258, 0);
  sqcRYGate(q, -2.34033433561981, 1);
  sqcRZGate(q, 2.338536566841724, 1);
  sqcRYGate(q, 0.24173258402955522, 2);
  sqcRZGate(q, 1.0513684651991912, 2);
  sqcRYGate(q, 0.7935330294455101, 3);
  sqcRZGate(q, -2.8568684204772277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.042647985267634, 0);
  sqcRZGate(q, -0.8714722866272407, 0);
  sqcRYGate(q, -0.9965812698241507, 1);
  sqcRZGate(q, -2.863516302035842, 1);
  sqcRYGate(q, 0.9511839046421942, 2);
  sqcRZGate(q, 0.23832447251860064, 2);
  sqcRYGate(q, -0.42448015032210407, 3);
  sqcRZGate(q, 0.006104977105388574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8094392347031507, 0);
  sqcRZGate(q, 2.1671957630083996, 0);
  sqcRYGate(q, 2.944812816055, 1);
  sqcRZGate(q, 1.685367521915736, 1);
  sqcRYGate(q, -1.337175916331037, 2);
  sqcRZGate(q, -2.546306229739659, 2);
  sqcRYGate(q, 1.0488356225043372, 3);
  sqcRZGate(q, -2.1250235697567574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.765232533632088, 0);
  sqcRZGate(q, -0.1263143897173098, 0);
  sqcRYGate(q, 1.523636834693365, 1);
  sqcRZGate(q, -1.9541570628612335, 1);
  sqcRYGate(q, 1.6050740815929296, 2);
  sqcRZGate(q, -1.2801088988652911, 2);
  sqcRYGate(q, 2.470519754616039, 3);
  sqcRZGate(q, 1.9701624430288485, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.981462969091448, 0);
  sqcRZGate(q, -0.16014544669473343, 0);
  sqcRYGate(q, 1.213464055838367, 1);
  sqcRZGate(q, -2.7324033016524094, 1);
  sqcRYGate(q, 2.2125587819587063, 2);
  sqcRZGate(q, -0.08019819902372834, 2);
  sqcRYGate(q, -2.418422291424024, 3);
  sqcRZGate(q, -0.4889784327348057, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.40399179988479705, 0);
  sqcRZGate(q, 1.4360437638310133, 0);
  sqcRYGate(q, -1.9023781645211428, 1);
  sqcRZGate(q, 1.4686946640059322, 1);
  sqcRYGate(q, 2.6685949959553117, 2);
  sqcRZGate(q, 0.7814001112170895, 2);
  sqcRYGate(q, 2.287847551221653, 3);
  sqcRZGate(q, 1.7455577923544983, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5044025612393095, 0);
  sqcRZGate(q, -2.9590855166567254, 0);
  sqcRYGate(q, -2.141228196885648, 1);
  sqcRZGate(q, 2.375801437027517, 1);
  sqcRYGate(q, 0.6471599005905393, 2);
  sqcRZGate(q, 2.460889339623533, 2);
  sqcRYGate(q, -2.6354452520641916, 3);
  sqcRZGate(q, 0.6220317981130975, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1225103599051138, 0);
  sqcRZGate(q, -1.025975702414665, 0);
  sqcRYGate(q, 2.9593366690221385, 1);
  sqcRZGate(q, -0.04414339940022582, 1);
  sqcRYGate(q, -2.609133341480524, 2);
  sqcRZGate(q, -0.10448165429546208, 2);
  sqcRYGate(q, 2.401852580394008, 3);
  sqcRZGate(q, 1.8418443026714204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.11526437314308335, 0);
  sqcRZGate(q, 2.936047979577378, 0);
  sqcRYGate(q, -0.732876049629361, 1);
  sqcRZGate(q, 1.273044189980237, 1);
  sqcRYGate(q, 1.632187571281431, 2);
  sqcRZGate(q, -2.188436969500712, 2);
  sqcRYGate(q, 2.548719768369982, 3);
  sqcRZGate(q, -2.4396102468389342, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.17620823448874, 0);
  sqcRZGate(q, -1.5345547301531552, 0);
  sqcRYGate(q, 1.273142751330463, 1);
  sqcRZGate(q, -1.624193006796765, 1);
  sqcRYGate(q, -2.3762014537577807, 2);
  sqcRZGate(q, 0.48263836166909346, 2);
  sqcRYGate(q, -2.6703347724662603, 3);
  sqcRZGate(q, -3.0075009975133207, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.28814315401882, 0);
  sqcRZGate(q, -0.19993004828497532, 0);
  sqcRYGate(q, -1.2545938779327424, 1);
  sqcRZGate(q, 0.26299406553539395, 1);
  sqcRYGate(q, -1.0715636533196713, 2);
  sqcRZGate(q, -2.775954906124582, 2);
  sqcRYGate(q, 2.777734949669801, 3);
  sqcRZGate(q, -1.8807299665921076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5880766000689511, 0);
  sqcRZGate(q, 0.18854079280785996, 0);
  sqcRYGate(q, -2.6261848130377707, 1);
  sqcRZGate(q, 0.0596720899179104, 1);
  sqcRYGate(q, 2.7463756951986626, 2);
  sqcRZGate(q, 1.3372353014187945, 2);
  sqcRYGate(q, -2.093571470445222, 3);
  sqcRZGate(q, -0.0839386222909466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0669710965782622, 0);
  sqcRZGate(q, 2.0432137033323015, 0);
  sqcRYGate(q, 3.042094636515671, 1);
  sqcRZGate(q, -2.359443299441891, 1);
  sqcRYGate(q, 2.6801333911727463, 2);
  sqcRZGate(q, -1.9122217815625797, 2);
  sqcRYGate(q, 1.452373945979284, 3);
  sqcRZGate(q, 0.16531182175683967, 3);

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
