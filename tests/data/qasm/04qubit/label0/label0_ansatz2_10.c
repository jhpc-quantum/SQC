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

  sqcRYGate(q, -1.4313583657664424, 0);
  sqcRZGate(q, -1.7576456194700611, 0);
  sqcRYGate(q, -0.36377359400449016, 1);
  sqcRZGate(q, 1.1775038517695045, 1);
  sqcRYGate(q, -2.9708738265526016, 2);
  sqcRZGate(q, -1.2601870868671823, 2);
  sqcRYGate(q, 0.12292408914605968, 3);
  sqcRZGate(q, -0.43339568037632265, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.797422819037267, 0);
  sqcRZGate(q, 1.5826312740591577, 0);
  sqcRYGate(q, -2.3721839226389356, 1);
  sqcRZGate(q, 2.0295999262789834, 1);
  sqcRYGate(q, -2.5505101000390997, 2);
  sqcRZGate(q, -0.9320752499636038, 2);
  sqcRYGate(q, -1.4677917283275592, 3);
  sqcRZGate(q, 2.7064543163868557, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5609354515355651, 0);
  sqcRZGate(q, -2.9259162081686143, 0);
  sqcRYGate(q, 0.802592511529447, 1);
  sqcRZGate(q, -1.065641695248394, 1);
  sqcRYGate(q, -1.5793550085296668, 2);
  sqcRZGate(q, 0.22834464877251315, 2);
  sqcRYGate(q, -2.131978114326779, 3);
  sqcRZGate(q, -1.0866476079372611, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.517374796127633, 0);
  sqcRZGate(q, -1.2141733297703272, 0);
  sqcRYGate(q, -2.9553089079144996, 1);
  sqcRZGate(q, 1.7792861454061344, 1);
  sqcRYGate(q, 0.6706214849174416, 2);
  sqcRZGate(q, 0.11480788332595325, 2);
  sqcRYGate(q, 0.791968167437048, 3);
  sqcRZGate(q, 0.8655103619747964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.4918718223155263, 0);
  sqcRZGate(q, -0.2744582617384697, 0);
  sqcRYGate(q, -2.5181211383900775, 1);
  sqcRZGate(q, 1.1311452963093103, 1);
  sqcRYGate(q, -1.487583714052783, 2);
  sqcRZGate(q, -1.3421442294771344, 2);
  sqcRYGate(q, 2.169783626899322, 3);
  sqcRZGate(q, 0.235079562601135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.310519596962619, 0);
  sqcRZGate(q, 0.6847248209617899, 0);
  sqcRYGate(q, -1.892468669925702, 1);
  sqcRZGate(q, 2.1588818418084506, 1);
  sqcRYGate(q, 2.3058194212870657, 2);
  sqcRZGate(q, 0.9311013507794738, 2);
  sqcRYGate(q, -0.36590338673693756, 3);
  sqcRZGate(q, 2.1341981118884252, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6094502580545336, 0);
  sqcRZGate(q, -2.308034766052915, 0);
  sqcRYGate(q, 0.7610732480528548, 1);
  sqcRZGate(q, -2.011668933158573, 1);
  sqcRYGate(q, 2.120154599307261, 2);
  sqcRZGate(q, -2.5809131513639034, 2);
  sqcRYGate(q, -0.23410340459709922, 3);
  sqcRZGate(q, -0.37022700457276253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.17103181710566506, 0);
  sqcRZGate(q, 2.9547538913454923, 0);
  sqcRYGate(q, -1.2057977492824845, 1);
  sqcRZGate(q, 2.5754230158652565, 1);
  sqcRYGate(q, -1.9860112259257514, 2);
  sqcRZGate(q, -2.5531960514982948, 2);
  sqcRYGate(q, -2.20477164797495, 3);
  sqcRZGate(q, -2.7596503871496667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0222487695274904, 0);
  sqcRZGate(q, -0.7973539259192867, 0);
  sqcRYGate(q, -2.649306500846873, 1);
  sqcRZGate(q, -0.35800696756852085, 1);
  sqcRYGate(q, 2.1559592232656866, 2);
  sqcRZGate(q, 1.9267425847507056, 2);
  sqcRYGate(q, -0.7110361562815548, 3);
  sqcRZGate(q, -1.8076371917303888, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0910574188715723, 0);
  sqcRZGate(q, 2.44054000643386, 0);
  sqcRYGate(q, 1.8006192303921429, 1);
  sqcRZGate(q, 0.4278888500653881, 1);
  sqcRYGate(q, -1.0409576752323575, 2);
  sqcRZGate(q, -1.8229970655368763, 2);
  sqcRYGate(q, 2.5676871551453497, 3);
  sqcRZGate(q, 2.466566620642866, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.5166234037972224, 0);
  sqcRZGate(q, -0.6748379549456759, 0);
  sqcRYGate(q, 2.0446019333352976, 1);
  sqcRZGate(q, 3.0994932560455233, 1);
  sqcRYGate(q, -0.15501010249720706, 2);
  sqcRZGate(q, -1.118492628301432, 2);
  sqcRYGate(q, -1.3890577608527508, 3);
  sqcRZGate(q, 1.0757716836788855, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8830278325165271, 0);
  sqcRZGate(q, -2.482418896115923, 0);
  sqcRYGate(q, 0.6687179420414875, 1);
  sqcRZGate(q, 0.869325210910437, 1);
  sqcRYGate(q, 0.8883904678328057, 2);
  sqcRZGate(q, 2.9153645327355315, 2);
  sqcRYGate(q, -0.8451403568687059, 3);
  sqcRZGate(q, 1.6429107715868156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.012961128359557, 0);
  sqcRZGate(q, -1.1576592315194545, 0);
  sqcRYGate(q, -1.053245455484535, 1);
  sqcRZGate(q, 3.073430706278808, 1);
  sqcRYGate(q, 2.2586892585318754, 2);
  sqcRZGate(q, 1.726790509235853, 2);
  sqcRYGate(q, -1.5078792345219494, 3);
  sqcRZGate(q, 1.7994759341025361, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.1764085336067718, 0);
  sqcRZGate(q, -1.358989265872477, 0);
  sqcRYGate(q, 0.8215376685421849, 1);
  sqcRZGate(q, -2.3276723584623498, 1);
  sqcRYGate(q, -0.7775141340221385, 2);
  sqcRZGate(q, 0.8865805996987548, 2);
  sqcRYGate(q, -2.2861255905139193, 3);
  sqcRZGate(q, 0.17118255812326136, 3);

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
