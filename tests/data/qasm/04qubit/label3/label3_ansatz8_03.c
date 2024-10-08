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

  sqcRYGate(q, -0.05374070249175311, 0);
  sqcRYGate(q, 0.913497843308802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4837779787344014, 0);
  sqcRYGate(q, 2.075869631062086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.423244372801339, 2);
  sqcRYGate(q, 2.6928447557376085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5025023181149422, 2);
  sqcRYGate(q, -0.634936300681928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.720416526565762, 0);
  sqcRYGate(q, -2.021751308730564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0696123839487326, 0);
  sqcRYGate(q, 3.0951585892597704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6186649817749326, 1);
  sqcRYGate(q, -2.2707943668212787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4542533516203262, 1);
  sqcRYGate(q, 2.0423681433540635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3986309013971943, 0);
  sqcRYGate(q, -1.5896885533296792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7594108329020629, 0);
  sqcRYGate(q, -0.45614731827771937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7751942098471973, 2);
  sqcRYGate(q, 2.226275477660188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3916854223093464, 2);
  sqcRYGate(q, -0.22473965163626453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9855001743874927, 0);
  sqcRYGate(q, 0.5897597937895735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.385900096425128, 0);
  sqcRYGate(q, 2.7457936662986424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7876388651516097, 1);
  sqcRYGate(q, 1.8779015071934504, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.081604445507303, 1);
  sqcRYGate(q, 0.37609860884656154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.516685654246766, 0);
  sqcRYGate(q, -0.8526320885693911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4365171057895906, 0);
  sqcRYGate(q, -1.6121421024438218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5404465432804857, 2);
  sqcRYGate(q, 2.084070172232204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43480206415139655, 2);
  sqcRYGate(q, 1.2914422404159096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1420767024414955, 0);
  sqcRYGate(q, 1.0453941127114685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10331082056087347, 0);
  sqcRYGate(q, -2.769071236138958, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.07710392591631, 1);
  sqcRYGate(q, 0.9542727283480783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.145956425049852, 1);
  sqcRYGate(q, -0.26013346330924164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5170032772125355, 0);
  sqcRYGate(q, -2.4481063448467455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.857205489448767, 0);
  sqcRYGate(q, 1.0139960546822406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2511027224018283, 2);
  sqcRYGate(q, 2.9810997857199832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3750420504758418, 2);
  sqcRYGate(q, 0.9345897615985849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5143747264988816, 0);
  sqcRYGate(q, 0.3174776998301388, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7941076847040085, 0);
  sqcRYGate(q, -0.349820491223543, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.000300663621724, 1);
  sqcRYGate(q, 2.1795858814162847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3746307185439157, 1);
  sqcRYGate(q, -2.8643110760486823, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9232848282429926, 0);
  sqcRYGate(q, 2.067430380371257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7644185294191477, 0);
  sqcRYGate(q, 0.4529022397167512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6217737479508854, 2);
  sqcRYGate(q, -0.8093590454638706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0200908704200016, 2);
  sqcRYGate(q, 0.6393042822370515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7977907388684542, 0);
  sqcRYGate(q, 1.1860219579821623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.858903151809801, 0);
  sqcRYGate(q, -0.5747246430126838, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9488202836216604, 1);
  sqcRYGate(q, 0.19701760203615934, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.683678399546346, 1);
  sqcRYGate(q, 0.38712197560277684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7452772569031796, 0);
  sqcRYGate(q, -2.7910867964453687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5890658901159194, 0);
  sqcRYGate(q, 1.877188692574855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9801554154298877, 2);
  sqcRYGate(q, -0.021064895513995208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8699142966430264, 2);
  sqcRYGate(q, -0.5977590490495626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.085354513393918, 0);
  sqcRYGate(q, 2.7906842885164265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6895251692628959, 0);
  sqcRYGate(q, -0.38463537676864407, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.243656859776727, 1);
  sqcRYGate(q, -0.36953528572553784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.367879732922301, 1);
  sqcRYGate(q, 2.600193515121269, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.42096261648206745, 0);
  sqcRYGate(q, -0.07358347592313158, 1);
  sqcRYGate(q, 2.5897909423491043, 2);
  sqcRYGate(q, 2.579956323380812, 3);

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
