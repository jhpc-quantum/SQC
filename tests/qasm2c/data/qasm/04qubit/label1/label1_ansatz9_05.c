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

  sqcRYGate(q, -2.8860030088007886, 0);
  sqcRYGate(q, -0.791821541848206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.388155798936961, 0);
  sqcRYGate(q, -0.5148472305734861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4763040273614003, 2);
  sqcRYGate(q, -0.4309493673093918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.019582972789334, 2);
  sqcRYGate(q, 1.059692722512411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.274058166233575, 0);
  sqcRYGate(q, 1.2544405338815494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.874392853624662, 0);
  sqcRYGate(q, -2.460783868515791, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.928587728782353, 1);
  sqcRYGate(q, -0.9072441440081844, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1734756083506708, 1);
  sqcRYGate(q, -0.6339142549574976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4162364173464381, 0);
  sqcRYGate(q, 1.899007547240763, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.386405700815958, 0);
  sqcRYGate(q, -2.453789643333703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2124066419688582, 1);
  sqcRYGate(q, -1.6162779531922322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7266351090903918, 1);
  sqcRYGate(q, -1.5349735215350568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.090620413218394, 0);
  sqcRYGate(q, 1.0369165467695385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.836817318201483, 0);
  sqcRYGate(q, -3.0203562404243525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.445469623096936, 2);
  sqcRYGate(q, -2.7432208647719167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5577100403020593, 2);
  sqcRYGate(q, 1.1847437763366582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.278564080569951, 0);
  sqcRYGate(q, -3.1093727136836598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.780528354316106, 0);
  sqcRYGate(q, 0.6126870473320833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4918341082807478, 1);
  sqcRYGate(q, -0.5178344147342191, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7964492004951573, 1);
  sqcRYGate(q, -0.28792276409989626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9919221508463565, 0);
  sqcRYGate(q, -1.7157366796902354, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9546446316131407, 0);
  sqcRYGate(q, -1.7207054273981415, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6968861863100292, 1);
  sqcRYGate(q, -0.4892414923161014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.924648513852179, 1);
  sqcRYGate(q, -2.4114813403551425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1818093870568873, 0);
  sqcRYGate(q, -1.8360895612314412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6696200740477379, 0);
  sqcRYGate(q, -2.0358837695895176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6757411596389957, 2);
  sqcRYGate(q, 2.573696475519837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3958261066275064, 2);
  sqcRYGate(q, 2.8341308087858175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6702921474678956, 0);
  sqcRYGate(q, 1.8025624860337062, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3224860504525973, 0);
  sqcRYGate(q, -1.1853443370454508, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5316062571504672, 1);
  sqcRYGate(q, 0.40253381979543157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0018180093437516, 1);
  sqcRYGate(q, 1.9697787639066888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8197558248672232, 0);
  sqcRYGate(q, 0.9506448487904915, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6105712604056082, 0);
  sqcRYGate(q, 2.9800720084437144, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5838863433388405, 1);
  sqcRYGate(q, -1.9409054018465268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.121046921764923, 1);
  sqcRYGate(q, 3.1229551200728216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8301038127572324, 0);
  sqcRYGate(q, -1.462559107296861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.749683503429853, 0);
  sqcRYGate(q, -0.8177450971462514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8911770079840444, 2);
  sqcRYGate(q, 2.949764912768798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.976473219640889, 2);
  sqcRYGate(q, -1.749916932101346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0738379799376496, 0);
  sqcRYGate(q, 2.584323847203906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.387336866945711, 0);
  sqcRYGate(q, 0.44068804794647054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3027063368753096, 1);
  sqcRYGate(q, 0.024850356873991505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.24599263150403072, 1);
  sqcRYGate(q, 1.6122332449466674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2817550775377189, 0);
  sqcRYGate(q, 2.4316070521728, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5240161483463355, 0);
  sqcRYGate(q, 1.104856940860536, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3746439648062845, 1);
  sqcRYGate(q, 0.4221882702908104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.541828547384195, 1);
  sqcRYGate(q, -3.083241993105727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14479160289901555, 0);
  sqcRYGate(q, -2.9513967968820474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.721572789676306, 0);
  sqcRYGate(q, -1.6050574564294133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8512581300454745, 2);
  sqcRYGate(q, 1.116290933124075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9450454513345738, 2);
  sqcRYGate(q, -0.12934455290901314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.249089973101008, 0);
  sqcRYGate(q, -2.617588359997736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9696851116237406, 0);
  sqcRYGate(q, 0.8675423727475503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4963613463318943, 1);
  sqcRYGate(q, -1.3271102732290547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.31700887191090127, 1);
  sqcRYGate(q, 1.680671882935032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.18147927925359808, 0);
  sqcRYGate(q, -0.23285888736365387, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9565947350103956, 0);
  sqcRYGate(q, -2.2458236098440754, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8314880054239149, 1);
  sqcRYGate(q, 1.7666278551792622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1154466391111653, 1);
  sqcRYGate(q, -2.31762659017842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.953340799614214, 0);
  sqcRYGate(q, -1.923849912395438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46381149151015855, 0);
  sqcRYGate(q, 0.48682235790881734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24068418616995046, 2);
  sqcRYGate(q, -2.6684936660369445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14834399955652272, 2);
  sqcRYGate(q, 0.3736821659090523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.396758669183648, 0);
  sqcRYGate(q, 2.9430584671288824, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.019189010209461, 0);
  sqcRYGate(q, -2.6364332708764064, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9334880226591173, 1);
  sqcRYGate(q, 0.14939827700059807, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3657695483906123, 1);
  sqcRYGate(q, -2.4335518133050043, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.669987312266329, 0);
  sqcRYGate(q, 1.4394403688821824, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1012498996228033, 0);
  sqcRYGate(q, 1.7001745873126888, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4238070695636278, 1);
  sqcRYGate(q, -2.838488188803686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7202161432129577, 1);
  sqcRYGate(q, -1.9050765859564276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6019876485629643, 0);
  sqcRYGate(q, 0.07490552138919478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8822736253675503, 0);
  sqcRYGate(q, 2.1488426200673523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4881496386080286, 2);
  sqcRYGate(q, -2.972238982002863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0227859578361564, 2);
  sqcRYGate(q, -2.6741095712322496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0536512658928752, 0);
  sqcRYGate(q, -1.4288929228041172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11035230262229755, 0);
  sqcRYGate(q, -2.1306379250404026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.91742114490822, 1);
  sqcRYGate(q, 0.3901531991367801, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9063191349419003, 1);
  sqcRYGate(q, -1.9521573088859792, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2608729942858021, 0);
  sqcRYGate(q, 0.10923116222866577, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.376567950954107, 0);
  sqcRYGate(q, 1.1074595652655292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.34313130437040584, 1);
  sqcRYGate(q, 2.5825895107501027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6302404953588274, 1);
  sqcRYGate(q, -0.9780419505193008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7645459748679784, 0);
  sqcRYGate(q, -2.888803981088167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1016318211926595, 0);
  sqcRYGate(q, -1.664760771829431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.949057967984216, 2);
  sqcRYGate(q, -2.1189015636492825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9930452571925166, 2);
  sqcRYGate(q, 0.573393222025463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.73006595411125, 0);
  sqcRYGate(q, 2.211310528480273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9055213794942159, 0);
  sqcRYGate(q, 1.0969568297413588, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.19327453207519987, 1);
  sqcRYGate(q, 1.0662220830686537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.170557208025982, 1);
  sqcRYGate(q, 0.7660892440430952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.069696893715604, 0);
  sqcRYGate(q, -0.20151758367955516, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9446106837916332, 0);
  sqcRYGate(q, 1.765002236098778, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9656240319433214, 1);
  sqcRYGate(q, 0.9933911463759264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3159024640609025, 1);
  sqcRYGate(q, 0.37248301213331114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6439700999407008, 0);
  sqcRYGate(q, -0.7945800493908051, 1);
  sqcRYGate(q, 1.1432554518789422, 2);
  sqcRYGate(q, 1.976823742343818, 3);

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
