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

  sqcRYGate(q, -2.5899583871010554, 0);
  sqcRYGate(q, 0.5058829033799199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01824800735510922, 0);
  sqcRYGate(q, 2.7473948005181676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.673433138861114, 0);
  sqcRYGate(q, 1.2335653443342383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2306579313931918, 0);
  sqcRYGate(q, 0.8748911075441004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.544669170320442, 0);
  sqcRYGate(q, -1.3577219830311344, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7856993795082143, 0);
  sqcRYGate(q, -0.2852231306464432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8201800295515116, 1);
  sqcRYGate(q, 0.7570334519191809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1231969541004654, 1);
  sqcRYGate(q, 2.8284094180369577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3958588851720588, 1);
  sqcRYGate(q, -2.2054797610892463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0612570501683545, 1);
  sqcRYGate(q, -1.764750436864096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0125482020371024, 2);
  sqcRYGate(q, -0.9887478280328672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3172295311578308, 2);
  sqcRYGate(q, 0.19114188692102424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.896652359424004, 0);
  sqcRYGate(q, -1.5959234954822072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2598920246809743, 0);
  sqcRYGate(q, -0.36111062963416535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0718220517524384, 0);
  sqcRYGate(q, -2.3037706375965255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.37931801202221127, 0);
  sqcRYGate(q, 1.6317139722011897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7699430570105332, 0);
  sqcRYGate(q, -2.317423025065675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.891213720181848, 0);
  sqcRYGate(q, 1.8983639410207758, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9063526651346088, 1);
  sqcRYGate(q, -0.7002926133364591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2651767283911608, 1);
  sqcRYGate(q, -1.3232253512778502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2364996870148532, 1);
  sqcRYGate(q, -1.2751847016978148, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.769745842301547, 1);
  sqcRYGate(q, -3.1132519277449244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8136726114851048, 2);
  sqcRYGate(q, -1.1299220444840277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5067453132193713, 2);
  sqcRYGate(q, -2.4974260330417355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.165202450400861, 0);
  sqcRYGate(q, 0.4851108696178691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1205880546681977, 0);
  sqcRYGate(q, 2.635183436880239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1250698932109247, 0);
  sqcRYGate(q, 1.3311124798322365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.529761846163884, 0);
  sqcRYGate(q, -1.0030816848390298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7652670158925029, 0);
  sqcRYGate(q, 2.0794422451314194, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0731905770120047, 0);
  sqcRYGate(q, -1.4792954346294147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5282518788343302, 1);
  sqcRYGate(q, 0.4520624328330971, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.639196283639376, 1);
  sqcRYGate(q, 0.43891548392448154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.005162869699199, 1);
  sqcRYGate(q, -2.388363542384063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0742496667179604, 1);
  sqcRYGate(q, 2.326648175983367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.337938192574928, 2);
  sqcRYGate(q, -2.1206253738116194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.007459528665689, 2);
  sqcRYGate(q, 1.9732505303403758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2249271077137658, 0);
  sqcRYGate(q, 3.1407150893176077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7371317508414186, 0);
  sqcRYGate(q, 0.059032270944535455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6827531261278676, 0);
  sqcRYGate(q, 0.23478124654460863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.123219316394408, 0);
  sqcRYGate(q, -0.5121339937769117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0194405631351566, 0);
  sqcRYGate(q, 2.946006012760492, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1464941963290345, 0);
  sqcRYGate(q, -2.995751803835601, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0338547603963957, 1);
  sqcRYGate(q, -2.071556972680173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0914401285466586, 1);
  sqcRYGate(q, -2.6755636221063104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08665463121909783, 1);
  sqcRYGate(q, -0.3435435784457308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5400156229598094, 1);
  sqcRYGate(q, 1.2526151179633054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7652737284236384, 2);
  sqcRYGate(q, 0.8543353871337436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5721591070736964, 2);
  sqcRYGate(q, -3.0560037241810147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8024085873797382, 0);
  sqcRYGate(q, -1.7302194395773172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28330654542719325, 0);
  sqcRYGate(q, 1.5323297021104532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.380848220842084, 0);
  sqcRYGate(q, 2.039671255483615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9593653391785357, 0);
  sqcRYGate(q, -0.683559823785572, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18917964450498814, 0);
  sqcRYGate(q, 0.13667129949022375, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5755881272708083, 0);
  sqcRYGate(q, 0.9263057597846885, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4468520460684022, 1);
  sqcRYGate(q, -1.47745838520712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.641220476147029, 1);
  sqcRYGate(q, 0.4221614874655297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2208644853411208, 1);
  sqcRYGate(q, 1.1491556202699593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2567497570837898, 1);
  sqcRYGate(q, 1.978071601154448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9490811510058776, 2);
  sqcRYGate(q, 2.469072439406073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.851344108818896, 2);
  sqcRYGate(q, -2.29019301302242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.005032978537246, 0);
  sqcRYGate(q, -2.23731391490777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6458152514150842, 0);
  sqcRYGate(q, -0.7919615791849743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.352529033875725, 0);
  sqcRYGate(q, -1.0472209209294663, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5218470405078326, 0);
  sqcRYGate(q, -2.112474697352611, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.108451381741173, 0);
  sqcRYGate(q, 1.5276309325042332, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7223717634271263, 0);
  sqcRYGate(q, -0.9784020275954319, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1395863151274366, 1);
  sqcRYGate(q, 2.053534953701621, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6238217572789255, 1);
  sqcRYGate(q, -2.112418249503835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2856332716902044, 1);
  sqcRYGate(q, -1.7961828166098694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2695751968398405, 1);
  sqcRYGate(q, 1.4364702388185342, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.654221487756001, 2);
  sqcRYGate(q, 1.9174424194061228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.775014790700852, 2);
  sqcRYGate(q, 2.976277947553058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9931935016408515, 0);
  sqcRYGate(q, 1.360984527568609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3622815950921972, 0);
  sqcRYGate(q, 2.5268907054697785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6849973517062296, 0);
  sqcRYGate(q, 1.947867824787565, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.355294547232582, 0);
  sqcRYGate(q, -1.0927102708476981, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3164744231828456, 0);
  sqcRYGate(q, 2.415307998744136, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6294024252191339, 0);
  sqcRYGate(q, 2.1551663545261506, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0099741596199197, 1);
  sqcRYGate(q, 2.0058913126492843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1342532073058567, 1);
  sqcRYGate(q, 0.2773507516547662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3796386848196045, 1);
  sqcRYGate(q, -2.777438437754946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.96976419249346, 1);
  sqcRYGate(q, 1.653355428948402, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5031433523475877, 2);
  sqcRYGate(q, 2.7282569683930435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19861304241670777, 2);
  sqcRYGate(q, 2.4013863776367543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25734330577834896, 0);
  sqcRYGate(q, 2.5891113103264525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09855766183891562, 0);
  sqcRYGate(q, 2.1808758635558836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4301469917297558, 0);
  sqcRYGate(q, 0.21882959337461824, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.112218838545938, 0);
  sqcRYGate(q, 2.4717164341017956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.309063949345558, 0);
  sqcRYGate(q, 0.688624267289176, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.691438413115057, 0);
  sqcRYGate(q, -2.0512304294627564, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.815682921709272, 1);
  sqcRYGate(q, -2.8572367068709705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6871713563241526, 1);
  sqcRYGate(q, 0.1343042387466422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6689564735824927, 1);
  sqcRYGate(q, 2.6723437212754426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05524596770053864, 1);
  sqcRYGate(q, 0.011571993124653483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9733784793862821, 2);
  sqcRYGate(q, -0.997471916185007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2505981699496855, 2);
  sqcRYGate(q, 1.7212138844916849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3742671583899555, 0);
  sqcRYGate(q, -1.7905254242997692, 1);
  sqcRYGate(q, -1.30003758607947, 2);
  sqcRYGate(q, 0.6332681465165563, 3);

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
