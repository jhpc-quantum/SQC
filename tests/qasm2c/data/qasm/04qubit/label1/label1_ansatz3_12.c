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

  sqcRYGate(q, -2.464245989951428, 0);
  sqcRZGate(q, 1.5403853865687547, 0);
  sqcRYGate(q, 2.1268914947243545, 1);
  sqcRZGate(q, -2.3152680045049734, 1);
  sqcRYGate(q, -0.41892461919413204, 2);
  sqcRZGate(q, 2.6748039823209164, 2);
  sqcRYGate(q, -0.7478317390458511, 3);
  sqcRZGate(q, 1.6310345922997627, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.541418240424898, 0);
  sqcRZGate(q, 0.8075844751164434, 0);
  sqcRYGate(q, -1.8047857582245124, 1);
  sqcRZGate(q, 2.5565801189942223, 1);
  sqcRYGate(q, -1.6853428773737529, 2);
  sqcRZGate(q, -1.4948056783179124, 2);
  sqcRYGate(q, 0.6876787148973972, 3);
  sqcRZGate(q, -1.2639217703918595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2948741914560697, 0);
  sqcRZGate(q, 2.863889037326227, 0);
  sqcRYGate(q, -0.23051417090207169, 1);
  sqcRZGate(q, 1.2921307441325096, 1);
  sqcRYGate(q, 1.3400770958306456, 2);
  sqcRZGate(q, 0.9306181116438212, 2);
  sqcRYGate(q, 3.048804128705379, 3);
  sqcRZGate(q, -0.22351294311543235, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7053906925429336, 0);
  sqcRZGate(q, -1.7713384207019323, 0);
  sqcRYGate(q, 2.6967461778553825, 1);
  sqcRZGate(q, -0.1704658044727685, 1);
  sqcRYGate(q, -2.4863566183485664, 2);
  sqcRZGate(q, 0.10812437862129755, 2);
  sqcRYGate(q, -0.3807308741050243, 3);
  sqcRZGate(q, -0.9178493971724325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5562717165287312, 0);
  sqcRZGate(q, -0.47763751854143166, 0);
  sqcRYGate(q, -1.9353615129276165, 1);
  sqcRZGate(q, -1.8648659505674499, 1);
  sqcRYGate(q, -2.3221926151122685, 2);
  sqcRZGate(q, 2.739994939245249, 2);
  sqcRYGate(q, 2.5574287502291133, 3);
  sqcRZGate(q, -1.0875689009723826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9799926654913148, 0);
  sqcRZGate(q, -2.6181447317406317, 0);
  sqcRYGate(q, 0.10422339192561125, 1);
  sqcRZGate(q, 2.174355597664065, 1);
  sqcRYGate(q, -1.2699342047494573, 2);
  sqcRZGate(q, 0.7897832079089087, 2);
  sqcRYGate(q, 1.0784233829245655, 3);
  sqcRZGate(q, 2.5232009160915916, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.660159205086875, 0);
  sqcRZGate(q, -0.9718740779610721, 0);
  sqcRYGate(q, 2.166333868452166, 1);
  sqcRZGate(q, -0.034342038922861924, 1);
  sqcRYGate(q, 1.6270594550106636, 2);
  sqcRZGate(q, 0.06373284456089401, 2);
  sqcRYGate(q, 1.686165951024306, 3);
  sqcRZGate(q, 0.9986949846225034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1609728555096548, 0);
  sqcRZGate(q, 1.183271916577888, 0);
  sqcRYGate(q, -3.047558493546455, 1);
  sqcRZGate(q, -2.8509378003617347, 1);
  sqcRYGate(q, 0.9843220289930539, 2);
  sqcRZGate(q, -0.9872122479379318, 2);
  sqcRYGate(q, -1.202426561485783, 3);
  sqcRZGate(q, -0.9407123861654911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4679583503906457, 0);
  sqcRZGate(q, 1.5945514692761031, 0);
  sqcRYGate(q, 1.3080065274335286, 1);
  sqcRZGate(q, -2.6499983125590605, 1);
  sqcRYGate(q, 1.814810777758776, 2);
  sqcRZGate(q, -1.700393441275378, 2);
  sqcRYGate(q, -2.428657678660571, 3);
  sqcRZGate(q, -1.036244347443815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8400377283077276, 0);
  sqcRZGate(q, 1.3301173713732928, 0);
  sqcRYGate(q, 2.9515675287965637, 1);
  sqcRZGate(q, -2.8375929331621177, 1);
  sqcRYGate(q, 1.1578157600828884, 2);
  sqcRZGate(q, -2.6312741976425293, 2);
  sqcRYGate(q, 0.5870210129801656, 3);
  sqcRZGate(q, 1.0453151936973786, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5986636133420116, 0);
  sqcRZGate(q, -2.647798737448168, 0);
  sqcRYGate(q, -2.4359259600091057, 1);
  sqcRZGate(q, 0.4966290969342362, 1);
  sqcRYGate(q, -1.1592369625326042, 2);
  sqcRZGate(q, -0.4043100306010139, 2);
  sqcRYGate(q, -0.11940433643191727, 3);
  sqcRZGate(q, -0.3474358872040844, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7124901632052305, 0);
  sqcRZGate(q, -1.7820693615796743, 0);
  sqcRYGate(q, -2.0316152325358305, 1);
  sqcRZGate(q, -1.9657792772622402, 1);
  sqcRYGate(q, -0.7390928593885873, 2);
  sqcRZGate(q, -0.6771312388522679, 2);
  sqcRYGate(q, -3.081150902897968, 3);
  sqcRZGate(q, -2.3663393006876414, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3359841512734483, 0);
  sqcRZGate(q, -1.9009453915903212, 0);
  sqcRYGate(q, -1.10408594422645, 1);
  sqcRZGate(q, -1.991728717536926, 1);
  sqcRYGate(q, 0.598297774989052, 2);
  sqcRZGate(q, 2.942278750214219, 2);
  sqcRYGate(q, 0.14350684408394532, 3);
  sqcRZGate(q, 2.9242818056922024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7063185969894548, 0);
  sqcRZGate(q, 1.9504838376834954, 0);
  sqcRYGate(q, -1.9664630571451267, 1);
  sqcRZGate(q, -0.9363015140660336, 1);
  sqcRYGate(q, -1.6597588608649656, 2);
  sqcRZGate(q, 0.4145599101198174, 2);
  sqcRYGate(q, 2.9579232257150103, 3);
  sqcRZGate(q, 1.7397845937386873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6303472570171271, 0);
  sqcRZGate(q, 0.9469795394798916, 0);
  sqcRYGate(q, -0.9137406401581653, 1);
  sqcRZGate(q, 2.983475772744267, 1);
  sqcRYGate(q, 0.6406358194230268, 2);
  sqcRZGate(q, -1.6193458217662546, 2);
  sqcRYGate(q, 2.6856234458348753, 3);
  sqcRZGate(q, -3.0518492662877215, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6399289849063856, 0);
  sqcRZGate(q, -1.4481389238546065, 0);
  sqcRYGate(q, 2.057422656543011, 1);
  sqcRZGate(q, -0.6075999185315064, 1);
  sqcRYGate(q, 3.0777422423055514, 2);
  sqcRZGate(q, 2.7073511439287707, 2);
  sqcRYGate(q, -1.9416466420589638, 3);
  sqcRZGate(q, -1.2873114874999145, 3);

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
