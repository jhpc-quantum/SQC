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

  sqcRYGate(q, 1.2917930204414976, 0);
  sqcRZGate(q, -3.141591053345454, 0);
  sqcRYGate(q, 3.1415924254197263, 1);
  sqcRZGate(q, -2.840647292735404, 1);
  sqcRYGate(q, 1.8120883114023114, 2);
  sqcRZGate(q, -1.57108104963884, 2);
  sqcRYGate(q, -2.998939229686224, 3);
  sqcRZGate(q, -1.6843403553679078e-05, 3);
  sqcRYGate(q, -1.1956681174391249e-07, 4);
  sqcRZGate(q, 2.102727712308946, 4);
  sqcRYGate(q, -4.043575684953282e-06, 5);
  sqcRZGate(q, 1.3703420245797904, 5);
  sqcRYGate(q, -1.5708031764770856, 6);
  sqcRZGate(q, -1.664239792761852, 6);
  sqcRYGate(q, 1.5430452411349251, 7);
  sqcRZGate(q, -1.5704905015950288, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5708005594075873, 0);
  sqcRZGate(q, -1.3826986010938995, 0);
  sqcRYGate(q, 1.570796621126469, 1);
  sqcRZGate(q, -1.3214993873521292, 1);
  sqcRYGate(q, -0.2848747726001074, 2);
  sqcRZGate(q, -1.249629594429176, 2);
  sqcRYGate(q, 1.570799205736087, 3);
  sqcRZGate(q, -2.9222197741734885, 3);
  sqcRYGate(q, -3.1415925503868127, 4);
  sqcRZGate(q, -2.691689801766828, 4);
  sqcRYGate(q, -4.777919500043026e-07, 5);
  sqcRZGate(q, -1.585785547728561, 5);
  sqcRYGate(q, -1.5708257384733066, 6);
  sqcRZGate(q, 1.9974929549824818, 6);
  sqcRYGate(q, 0.8497321508564051, 7);
  sqcRZGate(q, 1.5703337338779304, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -8.551225294191184e-06, 0);
  sqcRZGate(q, -2.07110737024146, 0);
  sqcRYGate(q, 1.1764681788761777e-06, 1);
  sqcRZGate(q, -0.24929588809914002, 1);
  sqcRYGate(q, 3.141590775735501, 2);
  sqcRZGate(q, -1.2499077758629156, 2);
  sqcRYGate(q, 1.5707969456352253, 3);
  sqcRZGate(q, -0.922199522391888, 3);
  sqcRYGate(q, -3.1415904099943974, 4);
  sqcRZGate(q, 2.2831271648917424, 4);
  sqcRYGate(q, -1.5707964732469222, 5);
  sqcRZGate(q, -0.9575405109362096, 5);
  sqcRYGate(q, -3.141591475994554, 6);
  sqcRZGate(q, 1.9970986925197802, 6);
  sqcRYGate(q, 1.5707964402802945, 7);
  sqcRZGate(q, 1.5707918622124648, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 5.754009174019359e-06, 0);
  sqcRZGate(q, 2.693470972999178, 0);
  sqcRYGate(q, -1.570807119808813, 1);
  sqcRZGate(q, 1.5707941297623353, 1);
  sqcRYGate(q, 2.8482899727665876, 2);
  sqcRZGate(q, -1.5707979455679777, 2);
  sqcRYGate(q, -6.719050239745172e-06, 3);
  sqcRZGate(q, 0.9221882556418786, 3);
  sqcRYGate(q, 3.1415924972828693, 4);
  sqcRZGate(q, 0.6560985768385992, 4);
  sqcRYGate(q, 1.570797167076476, 5);
  sqcRZGate(q, -2.459214120125429, 5);
  sqcRYGate(q, 1.5708003991860306, 6);
  sqcRZGate(q, 1.491055486872561, 6);
  sqcRYGate(q, -0.8120781587409853, 7);
  sqcRZGate(q, 1.5707935182199775, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1634955604888337, 0);
  sqcRZGate(q, 1.6809499801077106, 0);
  sqcRYGate(q, 2.8785443985670884, 1);
  sqcRZGate(q, 1.0598972575322962, 1);
  sqcRYGate(q, -1.5708108444212394, 2);
  sqcRZGate(q, 1.4624490822128267, 2);
  sqcRYGate(q, -0.1646622189128198, 3);
  sqcRZGate(q, -1.5707839422261223, 3);
  sqcRYGate(q, 3.1415925268324645, 4);
  sqcRZGate(q, 1.3160424798556445, 4);
  sqcRYGate(q, 3.141591943305206, 5);
  sqcRZGate(q, -2.4592142300039765, 5);
  sqcRYGate(q, -0.7761988666098958, 6);
  sqcRZGate(q, 3.0327445691716632, 6);
  sqcRYGate(q, 1.57078983407657, 7);
  sqcRZGate(q, 3.1415917866230956, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.369926059841987e-07, 0);
  sqcRZGate(q, -1.6916761808915766, 0);
  sqcRYGate(q, -3.141591503080093, 1);
  sqcRZGate(q, -2.0816920535204524, 1);
  sqcRYGate(q, 0.36339097062530806, 2);
  sqcRZGate(q, -1.7596303138743987, 2);
  sqcRYGate(q, 1.5707932266878242, 3);
  sqcRZGate(q, -1.5707976663522627, 3);
  sqcRYGate(q, -2.1015867896750215e-07, 4);
  sqcRZGate(q, 0.14927773598686578, 4);
  sqcRYGate(q, 1.5707974405430534, 5);
  sqcRZGate(q, -0.19717284936237348, 5);
  sqcRYGate(q, -7.53198618141937e-07, 6);
  sqcRZGate(q, 0.2299671145598978, 6);
  sqcRYGate(q, -1.5707945904480145, 7);
  sqcRZGate(q, -1.9070292633826353, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7061387241632456, 0);
  sqcRZGate(q, -2.2118868437567, 0);
  sqcRYGate(q, -1.2440849438725508, 1);
  sqcRZGate(q, 3.1415906094384054, 1);
  sqcRYGate(q, 1.5708092549914625, 2);
  sqcRZGate(q, 1.5707641061093789, 2);
  sqcRYGate(q, -1.9415111959359104, 3);
  sqcRZGate(q, 3.1415924688504875, 3);
  sqcRYGate(q, 1.5707965399455972, 4);
  sqcRZGate(q, 3.0837451624382566, 4);
  sqcRYGate(q, 1.570796062486151, 5);
  sqcRZGate(q, 1.570795119299971, 5);
  sqcRYGate(q, -1.945262334314381, 6);
  sqcRZGate(q, 1.1996532584295074, 6);
  sqcRYGate(q, -1.5707933096884479, 7);
  sqcRZGate(q, 1.5707942003545936, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707959657361614, 0);
  sqcRZGate(q, 0.7825510715778099, 0);
  sqcRYGate(q, 1.5707962582868384, 1);
  sqcRZGate(q, -2.3378424165760006, 1);
  sqcRYGate(q, -1.570795866453216, 2);
  sqcRZGate(q, 2.3533468527406822, 2);
  sqcRYGate(q, -1.5707971426116982, 3);
  sqcRZGate(q, 2.3745464831005556, 3);
  sqcRYGate(q, 3.476899967935765e-06, 4);
  sqcRZGate(q, 2.4111973170491297, 4);
  sqcRYGate(q, -1.5707974219075966, 5);
  sqcRZGate(q, -0.76704587917642, 5);
  sqcRYGate(q, 1.570796170868097, 6);
  sqcRZGate(q, -2.359039352020049, 6);
  sqcRYGate(q, 1.5707953188348507, 7);
  sqcRZGate(q, -2.337841881993815, 7);

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
