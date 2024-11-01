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

  sqcRYGate(q, 0.3779414038816278, 0);
  sqcRZGate(q, 2.475444420144056, 0);
  sqcRYGate(q, 2.242976640266689, 1);
  sqcRZGate(q, -1.499972096320294, 1);
  sqcRYGate(q, -1.1251170484790087, 2);
  sqcRZGate(q, 0.402219748565447, 2);
  sqcRYGate(q, 1.4412069456431411, 3);
  sqcRZGate(q, -0.5632642750825625, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7823646640486324, 0);
  sqcRZGate(q, -0.14362256733363524, 0);
  sqcRYGate(q, 3.052110030773567, 1);
  sqcRZGate(q, 1.5591331124262002, 1);
  sqcRYGate(q, 2.302146322875236, 2);
  sqcRZGate(q, 0.5945712349777033, 2);
  sqcRYGate(q, -1.2912644351548268, 3);
  sqcRZGate(q, 1.4656196955868142, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5637927190473109, 0);
  sqcRZGate(q, 0.18546299950710224, 0);
  sqcRYGate(q, 1.903085331597404, 1);
  sqcRZGate(q, -0.12618760325862563, 1);
  sqcRYGate(q, -0.4301420529703545, 2);
  sqcRZGate(q, 0.9768889679792326, 2);
  sqcRYGate(q, -1.143171723280985, 3);
  sqcRZGate(q, -0.4835051933739258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6936461893028228, 0);
  sqcRZGate(q, -1.6236361220583744, 0);
  sqcRYGate(q, 2.493192667472113, 1);
  sqcRZGate(q, 3.104459921264473, 1);
  sqcRYGate(q, -3.06699386429942, 2);
  sqcRZGate(q, 0.7627434237071934, 2);
  sqcRYGate(q, 2.6264690130218202, 3);
  sqcRZGate(q, -1.3543870668938616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7137100922146538, 0);
  sqcRZGate(q, -1.3366468585674791, 0);
  sqcRYGate(q, 0.8083914081985748, 1);
  sqcRZGate(q, 1.9182006726778766, 1);
  sqcRYGate(q, -0.5860649290149791, 2);
  sqcRZGate(q, 0.27475020482334234, 2);
  sqcRYGate(q, -2.9388267763143046, 3);
  sqcRZGate(q, -2.610105693861153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3779341956699413, 0);
  sqcRZGate(q, -0.45013871483106543, 0);
  sqcRYGate(q, -1.9897725094700318, 1);
  sqcRZGate(q, -1.97505542695921, 1);
  sqcRYGate(q, 1.960377274463617, 2);
  sqcRZGate(q, 0.38044749751066315, 2);
  sqcRYGate(q, -2.5434927084792545, 3);
  sqcRZGate(q, 0.3657620152335586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3403577551001076, 0);
  sqcRZGate(q, 2.5317685496055184, 0);
  sqcRYGate(q, -2.7601562753816884, 1);
  sqcRZGate(q, 0.010119558803376949, 1);
  sqcRYGate(q, 0.215071644397815, 2);
  sqcRZGate(q, -3.0418789566511033, 2);
  sqcRYGate(q, -0.2843016154125383, 3);
  sqcRZGate(q, 0.10500229191728168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3920687837929755, 0);
  sqcRZGate(q, -1.6231458238091283, 0);
  sqcRYGate(q, 0.13124109968859476, 1);
  sqcRZGate(q, 1.3415986695565696, 1);
  sqcRYGate(q, 1.5627838582731106, 2);
  sqcRZGate(q, -1.0281607696816897, 2);
  sqcRYGate(q, 2.7655892980845436, 3);
  sqcRZGate(q, -1.465892926259225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7150821807941883, 0);
  sqcRZGate(q, -2.852971303122529, 0);
  sqcRYGate(q, 3.0041958713051096, 1);
  sqcRZGate(q, 2.976885083049146, 1);
  sqcRYGate(q, 1.6689740431524918, 2);
  sqcRZGate(q, -0.6022930064445333, 2);
  sqcRYGate(q, 0.7383223908949491, 3);
  sqcRZGate(q, -2.937632964147487, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9820049202772329, 0);
  sqcRZGate(q, -2.560234973009451, 0);
  sqcRYGate(q, 1.8368573936605355, 1);
  sqcRZGate(q, 2.363803016701449, 1);
  sqcRYGate(q, 0.08870807231668998, 2);
  sqcRZGate(q, 1.5858909170815956, 2);
  sqcRYGate(q, -0.8564600512003884, 3);
  sqcRZGate(q, 1.0370230369880744, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.259104617837628, 0);
  sqcRZGate(q, 2.523165787610438, 0);
  sqcRYGate(q, 3.08589889236751, 1);
  sqcRZGate(q, -0.15432896248289008, 1);
  sqcRYGate(q, 2.461626788027758, 2);
  sqcRZGate(q, 0.44713638531972333, 2);
  sqcRYGate(q, -0.20558208998066171, 3);
  sqcRZGate(q, -0.08622744364814583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8530550477163112, 0);
  sqcRZGate(q, 0.7709845827465145, 0);
  sqcRYGate(q, 2.1085990071182286, 1);
  sqcRZGate(q, 0.23716591624175634, 1);
  sqcRYGate(q, -2.452704318513635, 2);
  sqcRZGate(q, -2.083945353757044, 2);
  sqcRYGate(q, 3.138207131535231, 3);
  sqcRZGate(q, 2.1856444903216063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7891066102519169, 0);
  sqcRZGate(q, -2.064027424348843, 0);
  sqcRYGate(q, 1.503617024482228, 1);
  sqcRZGate(q, -1.7227676976268087, 1);
  sqcRYGate(q, 2.228593446410042, 2);
  sqcRZGate(q, -1.150317438405578, 2);
  sqcRYGate(q, 3.031062920638526, 3);
  sqcRZGate(q, 0.668509162163497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2726932806273552, 0);
  sqcRZGate(q, -2.160093137399932, 0);
  sqcRYGate(q, -2.094670491841767, 1);
  sqcRZGate(q, 1.7825746839049996, 1);
  sqcRYGate(q, -1.5294477630483183, 2);
  sqcRZGate(q, -2.198225802898083, 2);
  sqcRYGate(q, 1.0378031777087606, 3);
  sqcRZGate(q, -0.8758145958747732, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3015663920572047, 0);
  sqcRZGate(q, 0.035627154425470486, 0);
  sqcRYGate(q, 1.097094154785828, 1);
  sqcRZGate(q, 2.8740709773722912, 1);
  sqcRYGate(q, -1.8384559065800463, 2);
  sqcRZGate(q, -1.7023760119303768, 2);
  sqcRYGate(q, -2.7065266112960664, 3);
  sqcRZGate(q, 1.425486944395533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5350491265665136, 0);
  sqcRZGate(q, -1.3428758746422598, 0);
  sqcRYGate(q, 1.0979617002417255, 1);
  sqcRZGate(q, -1.5372279220087215, 1);
  sqcRYGate(q, -1.816861616313669, 2);
  sqcRZGate(q, -0.9990084639539605, 2);
  sqcRYGate(q, -3.013234597395824, 3);
  sqcRZGate(q, 0.5741064303799644, 3);

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
