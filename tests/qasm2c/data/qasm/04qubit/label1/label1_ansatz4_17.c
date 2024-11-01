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

  sqcRYGate(q, 0.07402925824123674, 0);
  sqcRZGate(q, -0.16775475722554845, 0);
  sqcRYGate(q, 2.27591310150685, 1);
  sqcRZGate(q, -2.785254551129962, 1);
  sqcRYGate(q, 0.56007244148258, 2);
  sqcRZGate(q, -2.072270934400426, 2);
  sqcRYGate(q, -0.5532556866924407, 3);
  sqcRZGate(q, -0.3205122696231175, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4512702889557887, 0);
  sqcRZGate(q, 1.2600839442862664, 0);
  sqcRYGate(q, 0.46742901223178507, 1);
  sqcRZGate(q, -0.7062941728530167, 1);
  sqcRYGate(q, -1.737896058753309, 2);
  sqcRZGate(q, 2.0456418215445065, 2);
  sqcRYGate(q, -0.5300056296483131, 3);
  sqcRZGate(q, -0.31106034248211767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.193468329222039, 0);
  sqcRZGate(q, 2.4036117296878015, 0);
  sqcRYGate(q, 0.02413432682396251, 1);
  sqcRZGate(q, 2.080477021136078, 1);
  sqcRYGate(q, 1.4411000682933608, 2);
  sqcRZGate(q, -0.8201090496161926, 2);
  sqcRYGate(q, -2.230584270404789, 3);
  sqcRZGate(q, -1.7801585796534, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.08209418884034073, 0);
  sqcRZGate(q, -2.5964377110464447, 0);
  sqcRYGate(q, -2.8968209921953894, 1);
  sqcRZGate(q, 1.3726940274261323, 1);
  sqcRYGate(q, -0.740422072679335, 2);
  sqcRZGate(q, -2.342907295654652, 2);
  sqcRYGate(q, 1.984990672530616, 3);
  sqcRZGate(q, 1.110959016411097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3497121497255407, 0);
  sqcRZGate(q, 0.6936078430215218, 0);
  sqcRYGate(q, -1.4661467436111568, 1);
  sqcRZGate(q, 1.539542557639547, 1);
  sqcRYGate(q, 1.1421394311467719, 2);
  sqcRZGate(q, 0.6126563245783601, 2);
  sqcRYGate(q, -0.7220795088649155, 3);
  sqcRZGate(q, 1.172306894218416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4398349151033907, 0);
  sqcRZGate(q, 2.512818837574122, 0);
  sqcRYGate(q, 2.6642681690249805, 1);
  sqcRZGate(q, 1.2046261790994948, 1);
  sqcRYGate(q, -2.594698112338324, 2);
  sqcRZGate(q, 1.6845235562515866, 2);
  sqcRYGate(q, -2.6574944051084435, 3);
  sqcRZGate(q, 0.3846979578158556, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8614437986439194, 0);
  sqcRZGate(q, -2.854694368911184, 0);
  sqcRYGate(q, 0.9152716922811505, 1);
  sqcRZGate(q, 1.9482701668067204, 1);
  sqcRYGate(q, -2.3467228585357836, 2);
  sqcRZGate(q, -0.8217382097690571, 2);
  sqcRYGate(q, -1.977795175834208, 3);
  sqcRZGate(q, 2.6219135322370053, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4038515129540245, 0);
  sqcRZGate(q, -2.0336863861877035, 0);
  sqcRYGate(q, -2.720368710499389, 1);
  sqcRZGate(q, 0.9321349295671814, 1);
  sqcRYGate(q, 0.15410737993590293, 2);
  sqcRZGate(q, -2.5272630768411184, 2);
  sqcRYGate(q, -1.2933586170210902, 3);
  sqcRZGate(q, -2.467171251331349, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9446296551778826, 0);
  sqcRZGate(q, -0.3742851035713563, 0);
  sqcRYGate(q, -1.7240472676584107, 1);
  sqcRZGate(q, 1.7370536174237023, 1);
  sqcRYGate(q, -2.632852922850804, 2);
  sqcRZGate(q, -2.945108469951241, 2);
  sqcRYGate(q, 1.3646555168825802, 3);
  sqcRZGate(q, 1.5713831635994853, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.496987493508607, 0);
  sqcRZGate(q, 0.9979084009679005, 0);
  sqcRYGate(q, 2.9957526779268777, 1);
  sqcRZGate(q, -1.0777476778282393, 1);
  sqcRYGate(q, -2.7803489100362415, 2);
  sqcRZGate(q, 1.6609229020728644, 2);
  sqcRYGate(q, -1.5349230367574789, 3);
  sqcRZGate(q, 1.889603038658441, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8664087964677787, 0);
  sqcRZGate(q, 2.9326094263434435, 0);
  sqcRYGate(q, -2.530840956001815, 1);
  sqcRZGate(q, 0.8066650811549572, 1);
  sqcRYGate(q, -0.30371719006076237, 2);
  sqcRZGate(q, 0.08426588542428082, 2);
  sqcRYGate(q, -0.5596253037519161, 3);
  sqcRZGate(q, -0.8598568222471332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.1452731110600487, 0);
  sqcRZGate(q, -2.8811870313566983, 0);
  sqcRYGate(q, -0.5367153620106703, 1);
  sqcRZGate(q, 1.8324766764189722, 1);
  sqcRYGate(q, -1.0573002415607633, 2);
  sqcRZGate(q, -0.3141241780938412, 2);
  sqcRYGate(q, -2.543326585859852, 3);
  sqcRZGate(q, 0.4550593014060542, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7530743210724635, 0);
  sqcRZGate(q, -0.10202529130086546, 0);
  sqcRYGate(q, -2.2895220075661054, 1);
  sqcRZGate(q, 2.479477602814255, 1);
  sqcRYGate(q, 0.4524696759741093, 2);
  sqcRZGate(q, 2.049679911379479, 2);
  sqcRYGate(q, -1.8519732843525256, 3);
  sqcRZGate(q, -2.99904698003094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1765449971796507, 0);
  sqcRZGate(q, -0.4648941953197667, 0);
  sqcRYGate(q, 2.9872512702826004, 1);
  sqcRZGate(q, 1.0105983383917367, 1);
  sqcRYGate(q, -2.7487864172446073, 2);
  sqcRZGate(q, 2.5436862809535246, 2);
  sqcRYGate(q, -1.3439872191461641, 3);
  sqcRZGate(q, 1.0778389720874992, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6828716480888362, 0);
  sqcRZGate(q, 1.5216234092997427, 0);
  sqcRYGate(q, 1.1235929220927305, 1);
  sqcRZGate(q, -2.7825005156470035, 1);
  sqcRYGate(q, -1.5115534366052996, 2);
  sqcRZGate(q, 0.9638653412159252, 2);
  sqcRYGate(q, 0.20405923489015887, 3);
  sqcRZGate(q, 1.2094034828298357, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7371403169373645, 0);
  sqcRZGate(q, -0.9254086076050577, 0);
  sqcRYGate(q, 0.39927015358496654, 1);
  sqcRZGate(q, -0.3951757713419494, 1);
  sqcRYGate(q, 0.9626830374342847, 2);
  sqcRZGate(q, -1.116880837010842, 2);
  sqcRYGate(q, -1.0765076927759711, 3);
  sqcRZGate(q, 1.6705335255572218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.04316294625753603, 0);
  sqcRZGate(q, -1.4434330729708913, 0);
  sqcRYGate(q, -2.330241796337968, 1);
  sqcRZGate(q, -1.5823928052158802, 1);
  sqcRYGate(q, 0.5702048144365836, 2);
  sqcRZGate(q, -0.6949969558447835, 2);
  sqcRYGate(q, 0.045748548758878016, 3);
  sqcRZGate(q, 0.9076268605224644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.81645706466633, 0);
  sqcRZGate(q, -1.566386323529632, 0);
  sqcRYGate(q, 1.6641295873948199, 1);
  sqcRZGate(q, 0.41148528010222707, 1);
  sqcRYGate(q, -0.35506251121284066, 2);
  sqcRZGate(q, 1.0636902184374426, 2);
  sqcRYGate(q, -2.6822219929621216, 3);
  sqcRZGate(q, -1.0073790585643962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.876186896549901, 0);
  sqcRZGate(q, 1.1340811084617588, 0);
  sqcRYGate(q, -0.1074932945696539, 1);
  sqcRZGate(q, -1.9125080366241924, 1);
  sqcRYGate(q, 1.2914555960668341, 2);
  sqcRZGate(q, 0.5057524133896042, 2);
  sqcRYGate(q, -2.9123062382145255, 3);
  sqcRZGate(q, 2.9453211906866983, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.0749194694790747, 0);
  sqcRZGate(q, 2.6048923697154134, 0);
  sqcRYGate(q, -2.295273705764309, 1);
  sqcRZGate(q, -0.28794726636336826, 1);
  sqcRYGate(q, -0.7775603273933269, 2);
  sqcRZGate(q, 0.7624292333613942, 2);
  sqcRYGate(q, 2.6169727902380027, 3);
  sqcRZGate(q, 1.4853190602874173, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3072434150456856, 0);
  sqcRZGate(q, 2.939348296847496, 0);
  sqcRYGate(q, -2.932977284360105, 1);
  sqcRZGate(q, 2.692506785200851, 1);
  sqcRYGate(q, 0.2350875221613093, 2);
  sqcRZGate(q, 1.3157446297914737, 2);
  sqcRYGate(q, -2.651557705008928, 3);
  sqcRZGate(q, -0.5038839254423095, 3);

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
