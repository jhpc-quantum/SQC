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

  sqcRYGate(q, -1.25124449558428, 0);
  sqcRZGate(q, 0.5627149724607666, 0);
  sqcRYGate(q, -0.8397876396095751, 1);
  sqcRZGate(q, 2.0314458294216937, 1);
  sqcRYGate(q, 0.38750350385445215, 2);
  sqcRZGate(q, -0.9178476954069915, 2);
  sqcRYGate(q, 0.49943966194524236, 3);
  sqcRZGate(q, -2.423763724984568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9906572677553859, 0);
  sqcRZGate(q, -2.184629327819173, 0);
  sqcRYGate(q, 1.4189294958271992, 1);
  sqcRZGate(q, 1.0186885669395735, 1);
  sqcRYGate(q, 0.25424536516129415, 2);
  sqcRZGate(q, 3.1053758252840846, 2);
  sqcRYGate(q, 0.6344710476824911, 3);
  sqcRZGate(q, 2.796470889282821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.25928878376579, 0);
  sqcRZGate(q, 0.11440628887726058, 0);
  sqcRYGate(q, 0.47748345055582764, 1);
  sqcRZGate(q, -0.32298196534971435, 1);
  sqcRYGate(q, 0.6846022184501279, 2);
  sqcRZGate(q, 0.8470527444221204, 2);
  sqcRYGate(q, -2.8651393446256694, 3);
  sqcRZGate(q, -1.9580443949810828, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4578516117887315, 0);
  sqcRZGate(q, 1.1663337405382057, 0);
  sqcRYGate(q, -2.538210801105933, 1);
  sqcRZGate(q, 0.906539766329332, 1);
  sqcRYGate(q, -2.5813744523891202, 2);
  sqcRZGate(q, 0.7100378280741632, 2);
  sqcRYGate(q, -3.137090641776919, 3);
  sqcRZGate(q, 0.11005283638497686, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.818874858844297, 0);
  sqcRZGate(q, -0.9835982311312035, 0);
  sqcRYGate(q, 0.7032017692962526, 1);
  sqcRZGate(q, 1.2211366012526588, 1);
  sqcRYGate(q, 1.3736966954679295, 2);
  sqcRZGate(q, 1.3984016557563814, 2);
  sqcRYGate(q, -2.0663196969173194, 3);
  sqcRZGate(q, -1.2181881389735154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.20101319932660555, 0);
  sqcRZGate(q, -0.328254179859322, 0);
  sqcRYGate(q, 3.1358187975156553, 1);
  sqcRZGate(q, -2.1416024209553592, 1);
  sqcRYGate(q, -2.832516753438582, 2);
  sqcRZGate(q, -0.06598192620606333, 2);
  sqcRYGate(q, 2.22329670198973, 3);
  sqcRZGate(q, 3.1103681694416747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.21215568089565, 0);
  sqcRZGate(q, 1.2691310174047692, 0);
  sqcRYGate(q, 3.013521065810343, 1);
  sqcRZGate(q, 0.40102379415715644, 1);
  sqcRYGate(q, 0.4641902595514349, 2);
  sqcRZGate(q, -1.6010725604669265, 2);
  sqcRYGate(q, -2.85509313293883, 3);
  sqcRZGate(q, -0.46342364981130146, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3960509641840181, 0);
  sqcRZGate(q, 1.3361760878023956, 0);
  sqcRYGate(q, 0.9076850478848498, 1);
  sqcRZGate(q, 1.5867166107694883, 1);
  sqcRYGate(q, 3.0471540958017242, 2);
  sqcRZGate(q, 1.9847332674993634, 2);
  sqcRYGate(q, -2.585528057076073, 3);
  sqcRZGate(q, 0.2791720205483689, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9102678846904975, 0);
  sqcRZGate(q, 1.6258704399829202, 0);
  sqcRYGate(q, 2.9747456851867327, 1);
  sqcRZGate(q, -0.8955780282529647, 1);
  sqcRYGate(q, 1.8438281040406466, 2);
  sqcRZGate(q, -1.388302370461342, 2);
  sqcRYGate(q, -0.6211907517978766, 3);
  sqcRZGate(q, -1.478015447470719, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4424740521129076, 0);
  sqcRZGate(q, 3.0990729435558118, 0);
  sqcRYGate(q, 1.1630369230750377, 1);
  sqcRZGate(q, -3.1167387466195966, 1);
  sqcRYGate(q, -0.5054612524534923, 2);
  sqcRZGate(q, -0.18265832011183022, 2);
  sqcRYGate(q, -0.2254592255618328, 3);
  sqcRZGate(q, -0.760960524105448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7288731472089307, 0);
  sqcRZGate(q, -0.48665020981052437, 0);
  sqcRYGate(q, 2.1504888966005433, 1);
  sqcRZGate(q, 0.6282338825251063, 1);
  sqcRYGate(q, 0.6288967537251926, 2);
  sqcRZGate(q, 2.8855542258931126, 2);
  sqcRYGate(q, 0.9087989269718539, 3);
  sqcRZGate(q, 1.9469759358772059, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8842512585950058, 0);
  sqcRZGate(q, 0.029281309926439295, 0);
  sqcRYGate(q, -1.2506516546313036, 1);
  sqcRZGate(q, -2.039657842866931, 1);
  sqcRYGate(q, 0.3868329532337773, 2);
  sqcRZGate(q, 1.1669932243750178, 2);
  sqcRYGate(q, 0.6513903767048986, 3);
  sqcRZGate(q, -1.3605014766098247, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.20777221437947285, 0);
  sqcRZGate(q, 1.746483809338858, 0);
  sqcRYGate(q, -2.8414469685926296, 1);
  sqcRZGate(q, -0.22336513500883817, 1);
  sqcRYGate(q, -2.20484836353037, 2);
  sqcRZGate(q, 0.5530778834405154, 2);
  sqcRYGate(q, -2.5856986469306613, 3);
  sqcRZGate(q, 2.050843072336125, 3);

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
