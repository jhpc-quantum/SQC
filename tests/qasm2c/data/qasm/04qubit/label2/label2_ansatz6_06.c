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

  sqcRYGate(q, 0.28770745138301007, 0);
  sqcRYGate(q, -0.4226214854817272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6549503142200983, 0);
  sqcRYGate(q, 2.6670830831186843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1943369085422038, 1);
  sqcRYGate(q, -2.819001445921999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2934506427292118, 1);
  sqcRYGate(q, 0.7394019819153366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.056232839390648, 2);
  sqcRYGate(q, 0.42284557118884886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.033582119134391346, 2);
  sqcRYGate(q, -1.0575642770228109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.559653155105095, 0);
  sqcRYGate(q, -3.1265779680977137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3638987323246567, 0);
  sqcRYGate(q, 2.236162248245332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9007290114142839, 1);
  sqcRYGate(q, 1.131732493568508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.20785680827554, 1);
  sqcRYGate(q, -0.6039829810105779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2686857709251087, 2);
  sqcRYGate(q, 2.7657037398591826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.90074857069148, 2);
  sqcRYGate(q, -0.7385737074676926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8235822580477663, 0);
  sqcRYGate(q, -0.44763331220232533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07039611407174425, 0);
  sqcRYGate(q, 2.0440297646866075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1674857957873366, 1);
  sqcRYGate(q, -2.5575097887135763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3386171915481038, 1);
  sqcRYGate(q, 3.0823665616507094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2853542237600157, 2);
  sqcRYGate(q, -0.7570195468701159, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3555422942694766, 2);
  sqcRYGate(q, 1.2667192271577257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.029408072102792997, 0);
  sqcRYGate(q, 1.0657181072832485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1823516640140825, 0);
  sqcRYGate(q, -3.0640573698422884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.290323760740611, 1);
  sqcRYGate(q, -0.3262356026560757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.280679461519151, 1);
  sqcRYGate(q, 1.1101451426797286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7987274937717803, 2);
  sqcRYGate(q, -0.7398246159787925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8359935381856283, 2);
  sqcRYGate(q, 3.0352230659362753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5776314672469862, 0);
  sqcRYGate(q, 1.5131836337898266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.360692755674365, 0);
  sqcRYGate(q, -2.441947678563595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10018669742221474, 1);
  sqcRYGate(q, 2.477370775280452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5474596129329243, 1);
  sqcRYGate(q, -0.16522784044297706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9495706140679756, 2);
  sqcRYGate(q, -0.4312261211164498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8901346270259083, 2);
  sqcRYGate(q, -1.485201712038065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8370808529914995, 0);
  sqcRYGate(q, -3.1258831040634574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6225858497629266, 0);
  sqcRYGate(q, 0.9259047464225024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.817360450958392, 1);
  sqcRYGate(q, 0.48686344829341255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7793960589530561, 1);
  sqcRYGate(q, -0.3417285812125277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25950495681598085, 2);
  sqcRYGate(q, 0.061184363909073766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8990530031307626, 2);
  sqcRYGate(q, -0.35923810188382793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.895697228079574, 0);
  sqcRYGate(q, 0.04610944403203553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5219707302106666, 0);
  sqcRYGate(q, -2.9333089514325925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9515906374500935, 1);
  sqcRYGate(q, 0.6962103620263216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5216862584286406, 1);
  sqcRYGate(q, -2.384475232987709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1079573736305637, 2);
  sqcRYGate(q, 2.9566670043966368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.706433079108456, 2);
  sqcRYGate(q, -1.6065549708308493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05928950526926435, 0);
  sqcRYGate(q, -2.253771111669232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4713477785145379, 0);
  sqcRYGate(q, 0.04965159584256185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9593950470764003, 1);
  sqcRYGate(q, -2.0172716274345426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8695217689763117, 1);
  sqcRYGate(q, -0.5706346945242587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.022516644570736766, 2);
  sqcRYGate(q, 2.51460872592361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.248200592792155, 2);
  sqcRYGate(q, 2.0534825680565465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2943988470641674, 0);
  sqcRYGate(q, 2.4457256150504154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5549585391342882, 0);
  sqcRYGate(q, -1.2307373340214542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.822462571609012, 1);
  sqcRYGate(q, 1.8564448699369402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5420031843671074, 1);
  sqcRYGate(q, 2.2170770281772536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1489585521568726, 2);
  sqcRYGate(q, 2.3298803079697974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0497385995323336, 2);
  sqcRYGate(q, -2.7031314458102873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5040346445783129, 0);
  sqcRYGate(q, 1.370482313764737, 1);
  sqcRYGate(q, 0.10067876353709693, 2);
  sqcRYGate(q, -1.847052724601343, 3);

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
