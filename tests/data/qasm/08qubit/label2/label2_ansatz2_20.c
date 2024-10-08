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

  sqcRYGate(q, 0.8406928277074099, 0);
  sqcRZGate(q, 2.0492400089378306, 0);
  sqcRYGate(q, 1.058663098629894, 1);
  sqcRZGate(q, 2.0152432189575107, 1);
  sqcRYGate(q, -1.090946907469264, 2);
  sqcRZGate(q, 2.354626263941886, 2);
  sqcRYGate(q, 1.2557607576107608, 3);
  sqcRZGate(q, 2.174564906989448, 3);
  sqcRYGate(q, -2.0866104555194163, 4);
  sqcRZGate(q, -1.5530850377054721, 4);
  sqcRYGate(q, 2.8442558950176804, 5);
  sqcRZGate(q, -0.7299582651021943, 5);
  sqcRYGate(q, 0.15825466481923822, 6);
  sqcRZGate(q, 3.044516591642091, 6);
  sqcRYGate(q, 1.0306012078799507, 7);
  sqcRZGate(q, 1.8248419789136774, 7);
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
  sqcRYGate(q, -1.6652437469062804, 0);
  sqcRZGate(q, -1.8078130984689027, 0);
  sqcRYGate(q, 1.8759323073817695, 1);
  sqcRZGate(q, -1.9211545308224416, 1);
  sqcRYGate(q, 0.4645970162264435, 2);
  sqcRZGate(q, 2.4789382038689927, 2);
  sqcRYGate(q, 1.018919006237729, 3);
  sqcRZGate(q, 2.3499245781393987, 3);
  sqcRYGate(q, 1.1608249914525206, 4);
  sqcRZGate(q, 0.9548862293786129, 4);
  sqcRYGate(q, -1.647940679472173, 5);
  sqcRZGate(q, 1.2972551016344231, 5);
  sqcRYGate(q, 3.0056998169735647, 6);
  sqcRZGate(q, -2.203806509853099, 6);
  sqcRYGate(q, -0.09046678465619616, 7);
  sqcRZGate(q, -3.0313962986717997, 7);
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
  sqcRYGate(q, 1.6494259877645483, 0);
  sqcRZGate(q, -0.7919678076973871, 0);
  sqcRYGate(q, -2.4372314225954894, 1);
  sqcRZGate(q, 3.016600401761905, 1);
  sqcRYGate(q, 0.4450004063956829, 2);
  sqcRZGate(q, -1.98977332607285, 2);
  sqcRYGate(q, 0.32080745239672126, 3);
  sqcRZGate(q, -2.430843297430273, 3);
  sqcRYGate(q, 0.4107097700976896, 4);
  sqcRZGate(q, -0.9465335839461043, 4);
  sqcRYGate(q, -1.832820745920865, 5);
  sqcRZGate(q, 2.4313193526647425, 5);
  sqcRYGate(q, -0.22639869238287746, 6);
  sqcRZGate(q, -0.16784436271328163, 6);
  sqcRYGate(q, -2.089886208347611, 7);
  sqcRZGate(q, 1.0444341675880313, 7);
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
  sqcRYGate(q, -2.389248794835217, 0);
  sqcRZGate(q, -0.9444209350382232, 0);
  sqcRYGate(q, -1.463367838283729, 1);
  sqcRZGate(q, -0.40668264617962974, 1);
  sqcRYGate(q, -1.9073785001315302, 2);
  sqcRZGate(q, 2.1080907559876456, 2);
  sqcRYGate(q, -1.120614749069816, 3);
  sqcRZGate(q, 0.9324892599511133, 3);
  sqcRYGate(q, 1.7204621017461903, 4);
  sqcRZGate(q, -2.676704962831633, 4);
  sqcRYGate(q, -2.5419264735733766, 5);
  sqcRZGate(q, -0.5669360480242728, 5);
  sqcRYGate(q, -3.0124635905922355, 6);
  sqcRZGate(q, -2.72139614224405, 6);
  sqcRYGate(q, 0.5585441799609052, 7);
  sqcRZGate(q, -0.547382945468446, 7);
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
  sqcRYGate(q, -0.7126193221983979, 0);
  sqcRZGate(q, 2.9933301722220698, 0);
  sqcRYGate(q, -1.3933969866475684, 1);
  sqcRZGate(q, 2.3628862518834994, 1);
  sqcRYGate(q, -1.5018233096910312, 2);
  sqcRZGate(q, 1.1781325058022976, 2);
  sqcRYGate(q, 2.52500711091118, 3);
  sqcRZGate(q, 2.220428921425591, 3);
  sqcRYGate(q, -1.1548966238387157, 4);
  sqcRZGate(q, -0.9233121742511181, 4);
  sqcRYGate(q, 0.803216481880268, 5);
  sqcRZGate(q, -2.824656984267777, 5);
  sqcRYGate(q, -2.824490104515994, 6);
  sqcRZGate(q, -1.2971457858547455, 6);
  sqcRYGate(q, 1.378265792660967, 7);
  sqcRZGate(q, -0.11397313311154722, 7);
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
  sqcRYGate(q, 0.5404817461774973, 0);
  sqcRZGate(q, 2.114079727939962, 0);
  sqcRYGate(q, 0.7935200954188257, 1);
  sqcRZGate(q, 0.41342514283721327, 1);
  sqcRYGate(q, 1.8969613522898028, 2);
  sqcRZGate(q, -0.16262499434183572, 2);
  sqcRYGate(q, -2.3161440558745836, 3);
  sqcRZGate(q, -2.7240682153201248, 3);
  sqcRYGate(q, 1.6966089086207046, 4);
  sqcRZGate(q, -2.783117104723099, 4);
  sqcRYGate(q, -0.5308207079479876, 5);
  sqcRZGate(q, -1.106762788515578, 5);
  sqcRYGate(q, -1.4804350595364895, 6);
  sqcRZGate(q, -2.6985745699529216, 6);
  sqcRYGate(q, -0.9685462861015486, 7);
  sqcRZGate(q, -2.313625112323877, 7);
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
  sqcRYGate(q, 0.6285867588833725, 0);
  sqcRZGate(q, -0.2291749175269029, 0);
  sqcRYGate(q, 2.0431365784730326, 1);
  sqcRZGate(q, 0.8709802805390272, 1);
  sqcRYGate(q, -1.8172953227992652, 2);
  sqcRZGate(q, 2.0319245831783594, 2);
  sqcRYGate(q, 1.1408457758318893, 3);
  sqcRZGate(q, 2.53518743864383, 3);
  sqcRYGate(q, 1.321275045526586, 4);
  sqcRZGate(q, 0.11323060998104582, 4);
  sqcRYGate(q, 0.6287825711084525, 5);
  sqcRZGate(q, 3.0637449140625934, 5);
  sqcRYGate(q, 0.5003224068483245, 6);
  sqcRZGate(q, 1.350219430007514, 6);
  sqcRYGate(q, -2.5892984203571814, 7);
  sqcRZGate(q, 1.3222561248819626, 7);
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
  sqcRYGate(q, -2.6828573789248544, 0);
  sqcRZGate(q, -0.419967422296544, 0);
  sqcRYGate(q, 1.6320350437566056, 1);
  sqcRZGate(q, 2.7552118574740962, 1);
  sqcRYGate(q, 0.26597763321751183, 2);
  sqcRZGate(q, 2.983381507313991, 2);
  sqcRYGate(q, 2.9697556806777534, 3);
  sqcRZGate(q, -2.69417214088474, 3);
  sqcRYGate(q, 1.7113327708021346, 4);
  sqcRZGate(q, 1.0019689439003656, 4);
  sqcRYGate(q, 0.2782698834065281, 5);
  sqcRZGate(q, -0.5368249572378196, 5);
  sqcRYGate(q, 1.3977342228615797, 6);
  sqcRZGate(q, 1.3857651857201807, 6);
  sqcRYGate(q, -1.8861310304913161, 7);
  sqcRZGate(q, -2.67509268096906, 7);
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
  sqcRYGate(q, -2.5719764229139734, 0);
  sqcRZGate(q, -0.10021920317680877, 0);
  sqcRYGate(q, 2.1868640531158876, 1);
  sqcRZGate(q, -2.8505053008423413, 1);
  sqcRYGate(q, -0.5624913131055133, 2);
  sqcRZGate(q, 0.730832335328806, 2);
  sqcRYGate(q, 1.2373707785349186, 3);
  sqcRZGate(q, 0.207268915546976, 3);
  sqcRYGate(q, -2.799572143898669, 4);
  sqcRZGate(q, 2.6664108159709343, 4);
  sqcRYGate(q, 2.6599190220448947, 5);
  sqcRZGate(q, -0.5363866836724086, 5);
  sqcRYGate(q, 0.47321204349217094, 6);
  sqcRZGate(q, -2.2225297240425927, 6);
  sqcRYGate(q, -1.0440663141225381, 7);
  sqcRZGate(q, 2.7897196639570248, 7);
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
  sqcRYGate(q, -2.849049583421349, 0);
  sqcRZGate(q, 0.7108493243109182, 0);
  sqcRYGate(q, 2.3742369656901667, 1);
  sqcRZGate(q, -2.4063170978961477, 1);
  sqcRYGate(q, 3.0429085480518085, 2);
  sqcRZGate(q, 1.4097646922479203, 2);
  sqcRYGate(q, -0.8441375695119276, 3);
  sqcRZGate(q, -1.939158604575523, 3);
  sqcRYGate(q, -2.9965321508482026, 4);
  sqcRZGate(q, -0.9912663935690674, 4);
  sqcRYGate(q, 2.377825432735469, 5);
  sqcRZGate(q, 0.3643681971833814, 5);
  sqcRYGate(q, 0.48619283564045457, 6);
  sqcRZGate(q, 2.5541579539039376, 6);
  sqcRYGate(q, -1.3593483800827393, 7);
  sqcRZGate(q, 2.729819628746274, 7);
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
  sqcRYGate(q, 1.7488207109328966, 0);
  sqcRZGate(q, 0.4580904040834458, 0);
  sqcRYGate(q, 2.2174461085221857, 1);
  sqcRZGate(q, 1.9511467363372268, 1);
  sqcRYGate(q, 0.9164020636689232, 2);
  sqcRZGate(q, 0.6680183339379058, 2);
  sqcRYGate(q, -0.0490561248005648, 3);
  sqcRZGate(q, -1.4023890051212538, 3);
  sqcRYGate(q, 1.337382990876061, 4);
  sqcRZGate(q, 1.475883963512783, 4);
  sqcRYGate(q, -1.6174509277838551, 5);
  sqcRZGate(q, -2.3245357260743145, 5);
  sqcRYGate(q, -2.136521393491231, 6);
  sqcRZGate(q, -2.4998859653679206, 6);
  sqcRYGate(q, -1.9210336111223496, 7);
  sqcRZGate(q, -1.3724501489347734, 7);
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
  sqcRYGate(q, -1.5212095728839599, 0);
  sqcRZGate(q, 0.2385394151868441, 0);
  sqcRYGate(q, -1.4475692339005075, 1);
  sqcRZGate(q, -2.9476240397497846, 1);
  sqcRYGate(q, 0.938484171086964, 2);
  sqcRZGate(q, 1.7423630073191685, 2);
  sqcRYGate(q, 1.4319527552833566, 3);
  sqcRZGate(q, 0.3231012309541643, 3);
  sqcRYGate(q, -0.9154241043798245, 4);
  sqcRZGate(q, 1.4737956506162997, 4);
  sqcRYGate(q, -2.012603696385079, 5);
  sqcRZGate(q, -2.174996695704956, 5);
  sqcRYGate(q, 3.103445418188294, 6);
  sqcRZGate(q, -3.038766380261537, 6);
  sqcRYGate(q, 2.8481200133802544, 7);
  sqcRZGate(q, -0.5602505861104883, 7);
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
  sqcRYGate(q, 2.783963515801781, 0);
  sqcRZGate(q, 3.087469172696852, 0);
  sqcRYGate(q, 0.3490431937148297, 1);
  sqcRZGate(q, 3.0821341051723943, 1);
  sqcRYGate(q, -1.4440362254610577, 2);
  sqcRZGate(q, -1.9929635019838097, 2);
  sqcRYGate(q, 1.5769575779342864, 3);
  sqcRZGate(q, -0.6848505794582973, 3);
  sqcRYGate(q, 2.401996970216671, 4);
  sqcRZGate(q, 1.0629099260309192, 4);
  sqcRYGate(q, 0.749428170154762, 5);
  sqcRZGate(q, -0.4942921281973555, 5);
  sqcRYGate(q, 1.0222431476771439, 6);
  sqcRZGate(q, -1.3954314256608074, 6);
  sqcRYGate(q, 2.2986277164659907, 7);
  sqcRZGate(q, -1.5446389784696706, 7);
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
  sqcRYGate(q, -1.6647304705043997, 0);
  sqcRZGate(q, 2.3419110435041914, 0);
  sqcRYGate(q, 0.5637215915165643, 1);
  sqcRZGate(q, 2.089208048529433, 1);
  sqcRYGate(q, -1.4755659110500616, 2);
  sqcRZGate(q, -2.1202976680609504, 2);
  sqcRYGate(q, 1.5072540759396074, 3);
  sqcRZGate(q, -2.4140953099809064, 3);
  sqcRYGate(q, -0.5737264964189546, 4);
  sqcRZGate(q, -2.3913155612671617, 4);
  sqcRYGate(q, 0.3922361128933973, 5);
  sqcRZGate(q, 1.0053406833007814, 5);
  sqcRYGate(q, 1.646411470867208, 6);
  sqcRZGate(q, 3.0640443411925733, 6);
  sqcRYGate(q, 2.0662919003155538, 7);
  sqcRZGate(q, 0.6251840048946109, 7);
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
  sqcRYGate(q, 2.269042906393545, 0);
  sqcRZGate(q, 0.06592668679019376, 0);
  sqcRYGate(q, 0.11097553744683233, 1);
  sqcRZGate(q, -1.044783854062529, 1);
  sqcRYGate(q, 1.4054070454143837, 2);
  sqcRZGate(q, -0.09297705630104858, 2);
  sqcRYGate(q, 1.9634737354185139, 3);
  sqcRZGate(q, -0.1164859595704515, 3);
  sqcRYGate(q, -2.7914788126614263, 4);
  sqcRZGate(q, -1.0398274027814356, 4);
  sqcRYGate(q, 2.5980130036630036, 5);
  sqcRZGate(q, -3.0344979566908488, 5);
  sqcRYGate(q, 2.0578625489243563, 6);
  sqcRZGate(q, -0.9297502780031532, 6);
  sqcRYGate(q, -2.959991215398101, 7);
  sqcRZGate(q, -0.035052256359403344, 7);
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
  sqcRYGate(q, 1.3769904785773768, 0);
  sqcRZGate(q, 2.2538959166532284, 0);
  sqcRYGate(q, 0.3041788584554119, 1);
  sqcRZGate(q, -1.2894670597474158, 1);
  sqcRYGate(q, -1.7164495806890319, 2);
  sqcRZGate(q, 2.139909118207476, 2);
  sqcRYGate(q, 2.515565278998817, 3);
  sqcRZGate(q, -2.314505850866368, 3);
  sqcRYGate(q, -1.9990810133431676, 4);
  sqcRZGate(q, 0.7255018083849848, 4);
  sqcRYGate(q, 3.070550543387164, 5);
  sqcRZGate(q, -0.3101270607306894, 5);
  sqcRYGate(q, 0.9695164117161259, 6);
  sqcRZGate(q, -0.6857529545519842, 6);
  sqcRYGate(q, -1.9473566398141946, 7);
  sqcRZGate(q, -0.6827852895834191, 7);
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
  sqcRYGate(q, -1.0613393099718706, 0);
  sqcRZGate(q, 0.24112424083163264, 0);
  sqcRYGate(q, -2.1934041731126053, 1);
  sqcRZGate(q, -1.1771680978544155, 1);
  sqcRYGate(q, 2.559945155112892, 2);
  sqcRZGate(q, -1.8548315425691517, 2);
  sqcRYGate(q, -0.3257810433719392, 3);
  sqcRZGate(q, 1.2837044924279537, 3);
  sqcRYGate(q, 2.9876793352202, 4);
  sqcRZGate(q, -1.2281812718668952, 4);
  sqcRYGate(q, -1.5215818740684066, 5);
  sqcRZGate(q, -2.4186145135135395, 5);
  sqcRYGate(q, -0.237623405072187, 6);
  sqcRZGate(q, 0.20485179610843932, 6);
  sqcRYGate(q, -2.255026771023628, 7);
  sqcRZGate(q, -1.115893618286744, 7);
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
  sqcRYGate(q, 2.258725126962621, 0);
  sqcRZGate(q, -0.09000358877725011, 0);
  sqcRYGate(q, 2.264044706700549, 1);
  sqcRZGate(q, 0.9919908416711313, 1);
  sqcRYGate(q, -2.583608870287035, 2);
  sqcRZGate(q, 0.6072638366166228, 2);
  sqcRYGate(q, -0.5392976047557342, 3);
  sqcRZGate(q, 1.1970201472946966, 3);
  sqcRYGate(q, -2.293452828590824, 4);
  sqcRZGate(q, -1.473925101074337, 4);
  sqcRYGate(q, -2.6133235763335367, 5);
  sqcRZGate(q, -1.0934365784430577, 5);
  sqcRYGate(q, 1.6325701253692115, 6);
  sqcRZGate(q, 1.7254592153291561, 6);
  sqcRYGate(q, -2.6681196568734395, 7);
  sqcRZGate(q, 2.385350640777516, 7);
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
  sqcRYGate(q, 0.8162124226861865, 0);
  sqcRZGate(q, 0.27589493511143504, 0);
  sqcRYGate(q, 2.9170384235403817, 1);
  sqcRZGate(q, 2.6761834255629746, 1);
  sqcRYGate(q, 1.6642193946718649, 2);
  sqcRZGate(q, 1.3527041975267422, 2);
  sqcRYGate(q, 0.9406689209359076, 3);
  sqcRZGate(q, -1.3058565061608354, 3);
  sqcRYGate(q, 1.42711550259407, 4);
  sqcRZGate(q, 0.7362731842022058, 4);
  sqcRYGate(q, -3.0268066514633607, 5);
  sqcRZGate(q, -1.8818328796292356, 5);
  sqcRYGate(q, 0.7536837316346192, 6);
  sqcRZGate(q, -0.7563647843583223, 6);
  sqcRYGate(q, 1.5281772196487013, 7);
  sqcRZGate(q, 1.0559924864232282, 7);
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
  sqcRYGate(q, -1.4779988435298428, 0);
  sqcRZGate(q, 1.6809167844169808, 0);
  sqcRYGate(q, 2.273893994021898, 1);
  sqcRZGate(q, 2.3257344332383187, 1);
  sqcRYGate(q, -2.3863767893113037, 2);
  sqcRZGate(q, 2.826757192119738, 2);
  sqcRYGate(q, -0.7079954113924274, 3);
  sqcRZGate(q, 2.66402936584453, 3);
  sqcRYGate(q, 0.3579984871964754, 4);
  sqcRZGate(q, 3.0682067242229913, 4);
  sqcRYGate(q, 1.5575327028140036, 5);
  sqcRZGate(q, -3.1186410686889916, 5);
  sqcRYGate(q, 2.781966922335834, 6);
  sqcRZGate(q, 0.6431221811778772, 6);
  sqcRYGate(q, 0.4528016270378424, 7);
  sqcRZGate(q, 1.0393564049245123, 7);
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
  sqcRYGate(q, 2.69991554472647, 0);
  sqcRZGate(q, 0.43784817583557345, 0);
  sqcRYGate(q, -2.281320878164379, 1);
  sqcRZGate(q, 0.6729249725209945, 1);
  sqcRYGate(q, -1.5719556283394176, 2);
  sqcRZGate(q, 2.7994996874408784, 2);
  sqcRYGate(q, -2.707043021787, 3);
  sqcRZGate(q, -1.009986849378281, 3);
  sqcRYGate(q, 0.752168346389916, 4);
  sqcRZGate(q, 1.23119518515664, 4);
  sqcRYGate(q, -2.6654958338665447, 5);
  sqcRZGate(q, -1.6946306735706589, 5);
  sqcRYGate(q, 1.4841437329076408, 6);
  sqcRZGate(q, -1.991061330103772, 6);
  sqcRYGate(q, 0.05986544832665302, 7);
  sqcRZGate(q, 0.8805334918120956, 7);
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
  sqcRYGate(q, 2.4562570828274786, 0);
  sqcRZGate(q, 2.3827557661331316, 0);
  sqcRYGate(q, 2.060281925462043, 1);
  sqcRZGate(q, -1.9625410289836054, 1);
  sqcRYGate(q, -3.020690985604099, 2);
  sqcRZGate(q, 0.3838224157597922, 2);
  sqcRYGate(q, 0.22689641446607486, 3);
  sqcRZGate(q, -1.772121750857951, 3);
  sqcRYGate(q, -1.5885304233056285, 4);
  sqcRZGate(q, -1.8171494470082825, 4);
  sqcRYGate(q, -1.1363060838623324, 5);
  sqcRZGate(q, -3.0267633618336425, 5);
  sqcRYGate(q, -0.34648485757046626, 6);
  sqcRZGate(q, 1.14935523485655, 6);
  sqcRYGate(q, -2.51339277168986, 7);
  sqcRZGate(q, 1.1097579024139905, 7);
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
  sqcRYGate(q, 2.457940185880968, 0);
  sqcRZGate(q, -2.096108531350879, 0);
  sqcRYGate(q, -1.5082586904609425, 1);
  sqcRZGate(q, -1.1293111548526218, 1);
  sqcRYGate(q, -0.9965943318520436, 2);
  sqcRZGate(q, 1.8429692271644293, 2);
  sqcRYGate(q, 1.0680700054617596, 3);
  sqcRZGate(q, 2.8951394261549974, 3);
  sqcRYGate(q, 0.9712363794015737, 4);
  sqcRZGate(q, -0.953924373940741, 4);
  sqcRYGate(q, 1.1202017926495467, 5);
  sqcRZGate(q, 0.8989146556586279, 5);
  sqcRYGate(q, 2.096844532053737, 6);
  sqcRZGate(q, 1.068800543439002, 6);
  sqcRYGate(q, -2.0595613604577734, 7);
  sqcRZGate(q, -2.7452735278280866, 7);
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
  sqcRYGate(q, -0.882083135403672, 0);
  sqcRZGate(q, 0.37006241199742984, 0);
  sqcRYGate(q, -1.6703662525423417, 1);
  sqcRZGate(q, 2.697711100184974, 1);
  sqcRYGate(q, -2.161803007013833, 2);
  sqcRZGate(q, 1.0993484171836743, 2);
  sqcRYGate(q, -1.585783887184065, 3);
  sqcRZGate(q, 1.5965190607887587, 3);
  sqcRYGate(q, 2.7989691495607674, 4);
  sqcRZGate(q, -0.9437477374706951, 4);
  sqcRYGate(q, 1.4011669724003237, 5);
  sqcRZGate(q, 1.4425367699902871, 5);
  sqcRYGate(q, -1.4698741765932235, 6);
  sqcRZGate(q, -1.2792427020002208, 6);
  sqcRYGate(q, 3.0847761104272915, 7);
  sqcRZGate(q, 2.652225485526115, 7);

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
