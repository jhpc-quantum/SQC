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

  sqcRYGate(q, 0.23978133102760693, 0);
  sqcRZGate(q, -1.9944957913280659, 0);
  sqcRYGate(q, 1.8171298808988263, 1);
  sqcRZGate(q, -1.2322617747564317, 1);
  sqcRYGate(q, 0.05389492564245518, 2);
  sqcRZGate(q, 2.10203932077956, 2);
  sqcRYGate(q, 1.3585327600234898, 3);
  sqcRZGate(q, -0.9596275525423976, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.413034313892372, 0);
  sqcRZGate(q, -1.4091148885460911, 0);
  sqcRYGate(q, 1.474312188837283, 1);
  sqcRZGate(q, -1.877341493717374, 1);
  sqcRYGate(q, -1.5966854776699497, 2);
  sqcRZGate(q, 1.398935632502254, 2);
  sqcRYGate(q, -3.130463883964734, 3);
  sqcRZGate(q, -2.0177460148940725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8572384992661589, 0);
  sqcRZGate(q, -3.0370154062360393, 0);
  sqcRYGate(q, 1.0332406121138789, 1);
  sqcRZGate(q, 2.120166274018436, 1);
  sqcRYGate(q, 1.954276939452794, 2);
  sqcRZGate(q, -2.1609299710509484, 2);
  sqcRYGate(q, -2.7154547877439112, 3);
  sqcRZGate(q, -0.6614703164978915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0006849185550948, 0);
  sqcRZGate(q, 0.09259880245042454, 0);
  sqcRYGate(q, -1.405169239330076, 1);
  sqcRZGate(q, 1.4308896651226273, 1);
  sqcRYGate(q, -0.46706289992196476, 2);
  sqcRZGate(q, 2.7117405380647632, 2);
  sqcRYGate(q, -0.013198328234418355, 3);
  sqcRZGate(q, -0.8150134505985721, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9707481651131986, 0);
  sqcRZGate(q, 2.475274739391667, 0);
  sqcRYGate(q, 3.0218017377713657, 1);
  sqcRZGate(q, -1.3329583276423866, 1);
  sqcRYGate(q, 1.9947367968010137, 2);
  sqcRZGate(q, 2.126535574472229, 2);
  sqcRYGate(q, -0.2112338341094544, 3);
  sqcRZGate(q, 3.1149921514132006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26301488928595335, 0);
  sqcRZGate(q, -0.18854330595219085, 0);
  sqcRYGate(q, -1.8947486552899142, 1);
  sqcRZGate(q, 2.4300113377765316, 1);
  sqcRYGate(q, -3.1167554215771207, 2);
  sqcRZGate(q, 1.2213332421266216, 2);
  sqcRYGate(q, 2.093138069815417, 3);
  sqcRZGate(q, -1.8613255697359694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1133155297794723, 0);
  sqcRZGate(q, 0.6046349375421469, 0);
  sqcRYGate(q, -1.4755922620843511, 1);
  sqcRZGate(q, 1.255487872735701, 1);
  sqcRYGate(q, -0.4811553862165494, 2);
  sqcRZGate(q, 2.5905700964701994, 2);
  sqcRYGate(q, -0.6588911329590452, 3);
  sqcRZGate(q, 1.3913926280065594, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.001682484833632, 0);
  sqcRZGate(q, -0.6577068976316233, 0);
  sqcRYGate(q, -2.105442576568847, 1);
  sqcRZGate(q, 2.0815881607670406, 1);
  sqcRYGate(q, -2.911654094672168, 2);
  sqcRZGate(q, 2.093626423022683, 2);
  sqcRYGate(q, 2.6183433216630747, 3);
  sqcRZGate(q, 2.914637709977136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0102853814328863, 0);
  sqcRZGate(q, -3.1139982543598563, 0);
  sqcRYGate(q, 2.1647458358257143, 1);
  sqcRZGate(q, 0.8893625336892136, 1);
  sqcRYGate(q, 2.2303731911056843, 2);
  sqcRZGate(q, -0.7470768745630609, 2);
  sqcRYGate(q, -0.483592312370436, 3);
  sqcRZGate(q, 0.37681616538164775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6600436911651184, 0);
  sqcRZGate(q, 2.8301344207518833, 0);
  sqcRYGate(q, 1.9908610104750508, 1);
  sqcRZGate(q, 1.649658497268295, 1);
  sqcRYGate(q, 2.3695957204402793, 2);
  sqcRZGate(q, -2.0175890682519713, 2);
  sqcRYGate(q, 0.6731957172085619, 3);
  sqcRZGate(q, 1.1666559848543185, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5869743076158285, 0);
  sqcRZGate(q, -0.10623000938625182, 0);
  sqcRYGate(q, -0.07147509520565312, 1);
  sqcRZGate(q, -2.531873091890822, 1);
  sqcRYGate(q, 2.935934523300162, 2);
  sqcRZGate(q, 2.7480956954673537, 2);
  sqcRYGate(q, 1.0921009087277023, 3);
  sqcRZGate(q, -2.4996570163363008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5220472875354325, 0);
  sqcRZGate(q, -0.411197423162316, 0);
  sqcRYGate(q, -0.7292374350702351, 1);
  sqcRZGate(q, -2.443312906731461, 1);
  sqcRYGate(q, 3.019884383001268, 2);
  sqcRZGate(q, -2.3514598909705615, 2);
  sqcRYGate(q, -1.6407461500789133, 3);
  sqcRZGate(q, 0.19346281600374152, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7692204368534403, 0);
  sqcRZGate(q, 2.7422424268608694, 0);
  sqcRYGate(q, 0.13930089516794847, 1);
  sqcRZGate(q, 3.083017553637472, 1);
  sqcRYGate(q, 2.145738471526454, 2);
  sqcRZGate(q, -1.8730616137102052, 2);
  sqcRYGate(q, 2.3745387229337966, 3);
  sqcRZGate(q, 1.6295777601153194, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6483633455957656, 0);
  sqcRZGate(q, -0.7894294000884114, 0);
  sqcRYGate(q, -2.9834741241299927, 1);
  sqcRZGate(q, 1.1405195092048466, 1);
  sqcRYGate(q, -1.6927534544075753, 2);
  sqcRZGate(q, 0.28328778362174667, 2);
  sqcRYGate(q, -1.62569892049186, 3);
  sqcRZGate(q, 3.035314451934364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7905644533652274, 0);
  sqcRZGate(q, -2.2651168860311257, 0);
  sqcRYGate(q, 1.3667039562340704, 1);
  sqcRZGate(q, 2.493941330560167, 1);
  sqcRYGate(q, 1.777382589248039, 2);
  sqcRZGate(q, -2.0238229653289617, 2);
  sqcRYGate(q, 0.8364994985519286, 3);
  sqcRZGate(q, -0.36623963515819025, 3);

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
