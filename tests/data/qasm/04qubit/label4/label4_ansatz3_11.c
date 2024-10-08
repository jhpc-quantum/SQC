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

  sqcRYGate(q, 2.9664299468205875, 0);
  sqcRZGate(q, -2.715200759746868, 0);
  sqcRYGate(q, -2.6771895730686905, 1);
  sqcRZGate(q, 0.9697581584945539, 1);
  sqcRYGate(q, -2.72296683804675, 2);
  sqcRZGate(q, 2.7885744253688785, 2);
  sqcRYGate(q, -2.0156208366489468, 3);
  sqcRZGate(q, -0.7252423506684087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.897670650864909, 0);
  sqcRZGate(q, -1.0641408570243907, 0);
  sqcRYGate(q, -0.5957295824664841, 1);
  sqcRZGate(q, 0.2080871844760719, 1);
  sqcRYGate(q, -2.3678809854361926, 2);
  sqcRZGate(q, 2.579738009556615, 2);
  sqcRYGate(q, -1.2780208043650694, 3);
  sqcRZGate(q, 0.011070968672975745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.137931999489011, 0);
  sqcRZGate(q, -2.2896646387083224, 0);
  sqcRYGate(q, -1.6926065409397406, 1);
  sqcRZGate(q, 0.6023916432806987, 1);
  sqcRYGate(q, -0.9063944622720692, 2);
  sqcRZGate(q, -2.0346791708614784, 2);
  sqcRYGate(q, -2.1475813212582118, 3);
  sqcRZGate(q, -0.7063034378585752, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.203547549788941, 0);
  sqcRZGate(q, 0.8326607942959897, 0);
  sqcRYGate(q, 1.1615454146151785, 1);
  sqcRZGate(q, -2.34813290910829, 1);
  sqcRYGate(q, 1.921717370547161, 2);
  sqcRZGate(q, 2.209407835866112, 2);
  sqcRYGate(q, -0.4129146596348492, 3);
  sqcRZGate(q, 1.6232649468528744, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8647976846747287, 0);
  sqcRZGate(q, -3.0876511351331763, 0);
  sqcRYGate(q, 0.13035084935652552, 1);
  sqcRZGate(q, -0.7797428792962375, 1);
  sqcRYGate(q, 1.8641916222410941, 2);
  sqcRZGate(q, -3.1014365826666266, 2);
  sqcRYGate(q, -2.2956342211547396, 3);
  sqcRZGate(q, -3.0172561834616443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.381839470497276, 0);
  sqcRZGate(q, 0.4874523080949199, 0);
  sqcRYGate(q, 2.643336477374356, 1);
  sqcRZGate(q, 0.8104878985633848, 1);
  sqcRYGate(q, 0.49084849208207615, 2);
  sqcRZGate(q, -0.8172207418664632, 2);
  sqcRYGate(q, -2.2862415043706306, 3);
  sqcRZGate(q, -1.1372987278479694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9004586081313626, 0);
  sqcRZGate(q, -2.388790146938644, 0);
  sqcRYGate(q, 1.5250254903232803, 1);
  sqcRZGate(q, 2.8545145515489745, 1);
  sqcRYGate(q, -1.5118215055896225, 2);
  sqcRZGate(q, -0.5027929466645592, 2);
  sqcRYGate(q, -2.472899223966052, 3);
  sqcRZGate(q, -0.8117587732877467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.1898763610330704, 0);
  sqcRZGate(q, 1.8095790857906566, 0);
  sqcRYGate(q, 0.7902810499590869, 1);
  sqcRZGate(q, -2.892628465763465, 1);
  sqcRYGate(q, -1.503506993823146, 2);
  sqcRZGate(q, 2.6273937233133817, 2);
  sqcRYGate(q, 0.7849243949785775, 3);
  sqcRZGate(q, -1.3903881758649552, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.119759664864411, 0);
  sqcRZGate(q, 2.1834347666116907, 0);
  sqcRYGate(q, -2.2091451035715766, 1);
  sqcRZGate(q, 1.6147369531457834, 1);
  sqcRYGate(q, -0.6514067105092967, 2);
  sqcRZGate(q, -0.3297281195457354, 2);
  sqcRYGate(q, 1.7762712114462076, 3);
  sqcRZGate(q, -2.4054146672235994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9113785771840743, 0);
  sqcRZGate(q, -1.4394003026835966, 0);
  sqcRYGate(q, 0.43484933658718183, 1);
  sqcRZGate(q, -2.3766796534815082, 1);
  sqcRYGate(q, 1.3839764623999438, 2);
  sqcRZGate(q, 1.6996427205931148, 2);
  sqcRYGate(q, -0.6877344344991867, 3);
  sqcRZGate(q, -1.6103559913081453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2190606604676244, 0);
  sqcRZGate(q, -0.9706675670196693, 0);
  sqcRYGate(q, -1.3668535555586034, 1);
  sqcRZGate(q, 1.60293352509049, 1);
  sqcRYGate(q, 0.5609996565632973, 2);
  sqcRZGate(q, 1.511414118588073, 2);
  sqcRYGate(q, 1.2283066358384842, 3);
  sqcRZGate(q, 2.51636295326898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1453993631908976, 0);
  sqcRZGate(q, -1.3846581832838822, 0);
  sqcRYGate(q, 2.877460622988027, 1);
  sqcRZGate(q, 0.04269230860355933, 1);
  sqcRYGate(q, 2.1039734562755363, 2);
  sqcRZGate(q, 3.0744802326917857, 2);
  sqcRYGate(q, 2.163275884962534, 3);
  sqcRZGate(q, 3.0748112495112947, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6027837080898122, 0);
  sqcRZGate(q, 2.656133685541278, 0);
  sqcRYGate(q, -2.6037850784596994, 1);
  sqcRZGate(q, -1.492062799401289, 1);
  sqcRYGate(q, 0.8981942851347826, 2);
  sqcRZGate(q, 0.48627467913670747, 2);
  sqcRYGate(q, -0.5365793883134176, 3);
  sqcRZGate(q, -2.6947164338913847, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.690320936575684, 0);
  sqcRZGate(q, -1.5783523606602574, 0);
  sqcRYGate(q, 0.3366849891757697, 1);
  sqcRZGate(q, -0.7830614132607829, 1);
  sqcRYGate(q, -0.2539500709376652, 2);
  sqcRZGate(q, -0.7161349665524704, 2);
  sqcRYGate(q, -3.1123117549537023, 3);
  sqcRZGate(q, 2.5938830830103066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6901583796910973, 0);
  sqcRZGate(q, 1.3926423528454315, 0);
  sqcRYGate(q, -2.5825768992302396, 1);
  sqcRZGate(q, 2.7997940937526926, 1);
  sqcRYGate(q, 2.938171646492677, 2);
  sqcRZGate(q, 2.278385348814294, 2);
  sqcRYGate(q, 0.7249455054611162, 3);
  sqcRZGate(q, -2.956255239222961, 3);

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
