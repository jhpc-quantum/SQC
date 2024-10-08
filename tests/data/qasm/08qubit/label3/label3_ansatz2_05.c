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

  sqcRYGate(q, -2.9932717763388776, 0);
  sqcRZGate(q, -0.4587868029193203, 0);
  sqcRYGate(q, -1.5226054556841104, 1);
  sqcRZGate(q, -2.908083405642329, 1);
  sqcRYGate(q, -0.021196836023207904, 2);
  sqcRZGate(q, -1.461624454758522, 2);
  sqcRYGate(q, -1.7176470377990345, 3);
  sqcRZGate(q, 2.1393433248455516, 3);
  sqcRYGate(q, 0.012441162853789045, 4);
  sqcRZGate(q, -0.6860658969431449, 4);
  sqcRYGate(q, 3.141592583475348, 5);
  sqcRZGate(q, 2.4730018351140024, 5);
  sqcRYGate(q, 3.1069287141201323, 6);
  sqcRZGate(q, 2.3854981859781446, 6);
  sqcRYGate(q, -7.284141642536151e-08, 7);
  sqcRZGate(q, 2.8492828694402004, 7);
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
  sqcRYGate(q, -0.5372363758957945, 0);
  sqcRZGate(q, -1.120383951628396, 0);
  sqcRYGate(q, -1.391052136537203, 1);
  sqcRZGate(q, 2.613519724997614, 1);
  sqcRYGate(q, -2.1395935283407916, 2);
  sqcRZGate(q, -2.3710147738073926, 2);
  sqcRYGate(q, -0.3208817669656891, 3);
  sqcRZGate(q, -2.475075025243512, 3);
  sqcRYGate(q, 0.4180496801383766, 4);
  sqcRZGate(q, 1.8944610211737247, 4);
  sqcRYGate(q, 3.1415926324138015, 5);
  sqcRZGate(q, -0.44372529995053345, 5);
  sqcRYGate(q, 3.129247738109043, 6);
  sqcRZGate(q, -2.4912611981944335, 6);
  sqcRYGate(q, -3.1415925950044383, 7);
  sqcRZGate(q, 2.1475536301900955, 7);
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
  sqcRYGate(q, -1.7484658968122653, 0);
  sqcRZGate(q, 1.7618390779096385, 0);
  sqcRYGate(q, 0.520073811032641, 1);
  sqcRZGate(q, 1.994434601148829, 1);
  sqcRYGate(q, 1.1242519748750535, 2);
  sqcRZGate(q, 3.088607741091283, 2);
  sqcRYGate(q, 2.570549956643898, 3);
  sqcRZGate(q, 0.7908595370859363, 3);
  sqcRYGate(q, -2.968765386386634, 4);
  sqcRZGate(q, -1.4293110620246348, 4);
  sqcRYGate(q, 3.1415926068020865, 5);
  sqcRZGate(q, -2.914481536109555, 5);
  sqcRYGate(q, 3.1092343388254475, 6);
  sqcRZGate(q, -0.9794820494681139, 6);
  sqcRYGate(q, 3.1415925521623507, 7);
  sqcRZGate(q, 0.1486569887881357, 7);
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
  sqcRYGate(q, -2.530895455585265, 0);
  sqcRZGate(q, -1.15973813422748, 0);
  sqcRYGate(q, 2.80736530836463, 1);
  sqcRZGate(q, 0.8682703889523431, 1);
  sqcRYGate(q, 1.4823425297119384, 2);
  sqcRZGate(q, 2.658973884930902, 2);
  sqcRYGate(q, -1.3341013242766542, 3);
  sqcRZGate(q, -1.3595455529521692, 3);
  sqcRYGate(q, -1.4498183907064393, 4);
  sqcRZGate(q, -0.1632297332718051, 4);
  sqcRYGate(q, 3.1415925729720735, 5);
  sqcRZGate(q, 1.4551983855105097, 5);
  sqcRYGate(q, 1.6524385941164759, 6);
  sqcRZGate(q, 3.0354520380759134, 6);
  sqcRYGate(q, -7.926591649720649e-08, 7);
  sqcRZGate(q, 1.191729653306794, 7);
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
  sqcRYGate(q, -3.114385264701539, 0);
  sqcRZGate(q, 1.2957499394764997, 0);
  sqcRYGate(q, 3.021138753286755, 1);
  sqcRZGate(q, 2.298024975286167, 1);
  sqcRYGate(q, -0.0287966888875566, 2);
  sqcRZGate(q, 2.0222363161935215, 2);
  sqcRYGate(q, 1.4590856057138106, 3);
  sqcRZGate(q, 3.084073831327703, 3);
  sqcRYGate(q, 3.1166351901517415, 4);
  sqcRZGate(q, -2.301757328558537, 4);
  sqcRYGate(q, -1.198235644039869e-08, 5);
  sqcRZGate(q, -0.6130423156762115, 5);
  sqcRYGate(q, 0.40089635083821573, 6);
  sqcRZGate(q, -1.3652423934467057, 6);
  sqcRYGate(q, -3.141592626955205, 7);
  sqcRZGate(q, 1.9188094703108023, 7);
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
  sqcRYGate(q, 3.0432122338379566, 0);
  sqcRZGate(q, -2.3742341515659313, 0);
  sqcRYGate(q, 1.8304549204396565, 1);
  sqcRZGate(q, 1.5562446029885229, 1);
  sqcRYGate(q, 0.12037805438908578, 2);
  sqcRZGate(q, 1.3553036336005393, 2);
  sqcRYGate(q, 1.1473081305786332, 3);
  sqcRZGate(q, 0.067337444226494, 3);
  sqcRYGate(q, 2.979714473352346, 4);
  sqcRZGate(q, -1.0569691355605806, 4);
  sqcRYGate(q, -3.1195972914459527e-07, 5);
  sqcRZGate(q, -0.9613976657360421, 5);
  sqcRYGate(q, 1.7874786807342122, 6);
  sqcRZGate(q, -0.9365989188234787, 6);
  sqcRYGate(q, 1.5707967716212388, 7);
  sqcRZGate(q, -1.2329009360101393e-06, 7);
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
  sqcRYGate(q, 3.141592514846961, 0);
  sqcRZGate(q, -2.4546608873997036, 0);
  sqcRYGate(q, -1.5707967209513685, 1);
  sqcRZGate(q, 2.7213169158605517, 1);
  sqcRYGate(q, -1.5422546795207381e-07, 2);
  sqcRZGate(q, -1.2164973812343742, 2);
  sqcRYGate(q, 1.570796074338482, 3);
  sqcRZGate(q, 0.36962386694412164, 3);
  sqcRYGate(q, 3.1415924023580084, 4);
  sqcRZGate(q, 1.9560445728242624, 4);
  sqcRYGate(q, -1.5707976586742474, 5);
  sqcRZGate(q, -1.570807112221857, 5);
  sqcRYGate(q, -3.1415923769180125, 6);
  sqcRZGate(q, -1.725094009191728, 6);
  sqcRYGate(q, 1.5707957924376212, 7);
  sqcRZGate(q, 0.714540233867945, 7);
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
  sqcRYGate(q, -1.5707964372747307, 0);
  sqcRZGate(q, -2.760136203048876, 0);
  sqcRYGate(q, 3.14159207811448, 1);
  sqcRZGate(q, -0.42027483889717127, 1);
  sqcRYGate(q, -1.5707964488325725, 2);
  sqcRZGate(q, 3.0400298288781387, 2);
  sqcRYGate(q, -1.0091267910183888e-06, 3);
  sqcRZGate(q, 2.7719695820132593, 3);
  sqcRYGate(q, 1.570796513907993, 4);
  sqcRZGate(q, 1.9596155050116053, 4);
  sqcRYGate(q, 3.010655110711995, 5);
  sqcRZGate(q, -1.570806644376597, 5);
  sqcRYGate(q, -1.5707961743586214, 6);
  sqcRZGate(q, 0.11939497326198624, 6);
  sqcRYGate(q, -1.5707962725690399, 7);
  sqcRZGate(q, 2.9534521074463473, 7);
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
  sqcRYGate(q, -1.2282759280415428e-07, 0);
  sqcRZGate(q, -1.5116113477172715, 0);
  sqcRYGate(q, -1.5707958764511238, 1);
  sqcRZGate(q, 0.4406414481030534, 1);
  sqcRYGate(q, -3.141592520137378, 2);
  sqcRZGate(q, 1.9098748909716097, 2);
  sqcRYGate(q, 1.5707958802044406, 3);
  sqcRZGate(q, -2.7009510854971572, 3);
  sqcRYGate(q, 2.8316829769892138e-08, 4);
  sqcRZGate(q, -3.0897703663924982, 4);
  sqcRYGate(q, 1.5707971300081485, 5);
  sqcRZGate(q, 2.0114380513124694, 5);
  sqcRYGate(q, -3.1415924804790367, 6);
  sqcRZGate(q, 2.1308327976704726, 6);
  sqcRYGate(q, -3.1415901242137974, 7);
  sqcRZGate(q, 1.8232971660320265, 7);

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
