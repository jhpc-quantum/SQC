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

  sqcRYGate(q, 2.5163799375779496, 0);
  sqcRYGate(q, 2.5326651129608804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.12588282466972, 0);
  sqcRYGate(q, 2.102740168116329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5036021426528436, 1);
  sqcRYGate(q, 0.04191177436137661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1244728606477428, 1);
  sqcRYGate(q, 2.8961124529492484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.960151127196271, 2);
  sqcRYGate(q, 1.71663856601614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3293219746293397, 2);
  sqcRYGate(q, -0.8210773855879369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7274825873828035, 0);
  sqcRYGate(q, -0.16800566431590624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.326506730730128, 0);
  sqcRYGate(q, 0.17022901006682378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.410640068941438, 1);
  sqcRYGate(q, -1.71063264533199, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5667518971229064, 1);
  sqcRYGate(q, -2.3116981794856106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.187000146936834, 2);
  sqcRYGate(q, 1.5354436126893125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.39810391469100015, 2);
  sqcRYGate(q, 1.6776135437546584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0462567500459974, 0);
  sqcRYGate(q, 2.7486114643479493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.067390669580874, 0);
  sqcRYGate(q, -2.1164574862622016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.174142284415249, 1);
  sqcRYGate(q, 2.452829814827846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.38495799671597375, 1);
  sqcRYGate(q, -1.1620875978082417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6511607433151072, 2);
  sqcRYGate(q, -0.7002383808382096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3602071224866892, 2);
  sqcRYGate(q, 0.30657667043609954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.882940884112472, 0);
  sqcRYGate(q, 2.0430412719637463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4081126908907784, 0);
  sqcRYGate(q, -0.2388673254865502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1458262373384418, 1);
  sqcRYGate(q, -0.6941939056147106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0021625789692177, 1);
  sqcRYGate(q, 0.5928027769400958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.946233353652763, 2);
  sqcRYGate(q, -1.5045111478597137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5663906341051291, 2);
  sqcRYGate(q, -1.0162540883972433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8731678840655603, 0);
  sqcRYGate(q, -0.3522309463647373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6149711567705662, 0);
  sqcRYGate(q, 2.18564027332528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4927394455148468, 1);
  sqcRYGate(q, -1.6494137096827775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7672965984189464, 1);
  sqcRYGate(q, 2.3239910442309824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.884330970970054, 2);
  sqcRYGate(q, 1.7564367409598742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20574616482312802, 2);
  sqcRYGate(q, -1.3614409611266334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7101875197083156, 0);
  sqcRYGate(q, 0.39935329214391224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15741655178606795, 0);
  sqcRYGate(q, -2.0051300459146413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06572321350352135, 1);
  sqcRYGate(q, 0.7369111989596877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18823225177738867, 1);
  sqcRYGate(q, -2.063527351558762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.51581808288379, 2);
  sqcRYGate(q, 3.0295570612586284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3763502044917475, 2);
  sqcRYGate(q, 3.0788905837311646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1099436402103686, 0);
  sqcRYGate(q, -1.3666186616754485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.022981899685722, 0);
  sqcRYGate(q, -1.079604000551943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24579480853074337, 1);
  sqcRYGate(q, -2.5027302172043706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1774241573838442, 1);
  sqcRYGate(q, -2.7627905030398767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46569697704973806, 2);
  sqcRYGate(q, -2.7816897491050168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4622834456943385, 2);
  sqcRYGate(q, -1.5276386520139948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6519029674433048, 0);
  sqcRYGate(q, -0.8280346949187596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2486255150178085, 0);
  sqcRYGate(q, -1.8017949071317254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8767360106054527, 1);
  sqcRYGate(q, 0.3519974834615462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8204617000274991, 1);
  sqcRYGate(q, -0.3179541438553047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9462062071957086, 2);
  sqcRYGate(q, -2.248289500475642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0721344450847394, 2);
  sqcRYGate(q, -2.0535943055632178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8542350175302083, 0);
  sqcRYGate(q, -0.9618969241493689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.280495963878926, 0);
  sqcRYGate(q, 2.2593979375648257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7996535531291669, 1);
  sqcRYGate(q, -0.40679601744226346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2299353676886264, 1);
  sqcRYGate(q, -1.4218001361222958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2259486001608595, 2);
  sqcRYGate(q, 2.8613091201855516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41952791435962045, 2);
  sqcRYGate(q, 2.930471018415733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.826154329439744, 0);
  sqcRYGate(q, 2.6783611910522813, 1);
  sqcRYGate(q, -1.562163097596905, 2);
  sqcRYGate(q, 0.0747808401488263, 3);

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
