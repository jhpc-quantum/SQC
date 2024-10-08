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

  sqcRYGate(q, -2.8383574040740918, 0);
  sqcRZGate(q, -2.1814286435727723, 0);
  sqcRYGate(q, 1.5730395683188978, 1);
  sqcRZGate(q, 2.3685260095347602, 1);
  sqcRYGate(q, 0.32108766473652456, 2);
  sqcRZGate(q, -3.1401517036017106, 2);
  sqcRYGate(q, 1.5696180051020698, 3);
  sqcRZGate(q, 1.6173078559943301, 3);
  sqcRYGate(q, 0.03961592897293383, 4);
  sqcRZGate(q, 1.5718298905984256, 4);
  sqcRYGate(q, -3.1256751366984457, 5);
  sqcRZGate(q, -1.5798743285052996, 5);
  sqcRYGate(q, -2.4830188562490636, 6);
  sqcRZGate(q, 0.00045092245711320084, 6);
  sqcRYGate(q, -0.3811511436176646, 7);
  sqcRZGate(q, 3.141441953059257, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0013064189801488268, 0);
  sqcRZGate(q, -0.9578177578132073, 0);
  sqcRYGate(q, -2.8621936592934443, 1);
  sqcRZGate(q, 1.5078422660466686, 1);
  sqcRYGate(q, -3.0913999461293193, 2);
  sqcRZGate(q, -3.131681919700763, 2);
  sqcRYGate(q, -0.8222203643310673, 3);
  sqcRZGate(q, 2.9589536768499523, 3);
  sqcRYGate(q, -2.759604441197619, 4);
  sqcRZGate(q, -1.5667903798474556, 4);
  sqcRYGate(q, 2.271061653927949, 5);
  sqcRZGate(q, 1.5724685629787336, 5);
  sqcRYGate(q, 0.6545025066655956, 6);
  sqcRZGate(q, 0.0029603584262671845, 6);
  sqcRYGate(q, 2.842663943252921, 7);
  sqcRZGate(q, 3.138236470440398, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.17759548239996015, 0);
  sqcRZGate(q, -1.5714250462478452, 0);
  sqcRYGate(q, 1.5730570381916484, 1);
  sqcRZGate(q, 3.1397196580139015, 1);
  sqcRYGate(q, 3.129589351633323, 2);
  sqcRZGate(q, -1.564318299444989, 2);
  sqcRYGate(q, -1.5727630687440461, 3);
  sqcRZGate(q, -3.141012150646373, 3);
  sqcRYGate(q, -3.114866113807399, 4);
  sqcRZGate(q, -1.566881265047169, 4);
  sqcRYGate(q, -0.27517681788476234, 5);
  sqcRZGate(q, -1.5742610736118368, 5);
  sqcRYGate(q, -2.8466413903399763, 6);
  sqcRZGate(q, 1.5707803218986918, 6);
  sqcRYGate(q, -3.038507192950973, 7);
  sqcRZGate(q, 1.5708690429695387, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.570915839129686, 0);
  sqcRZGate(q, 0.02930963980086757, 0);
  sqcRYGate(q, 1.5704147358222462, 1);
  sqcRZGate(q, -0.0064876404655631595, 1);
  sqcRYGate(q, -1.5707330885869253, 2);
  sqcRZGate(q, -0.02245485354690366, 2);
  sqcRYGate(q, 1.5705515993057761, 3);
  sqcRZGate(q, 1.3316671467351382, 3);
  sqcRYGate(q, 1.5702256948407785, 4);
  sqcRZGate(q, -2.935751438697068, 4);
  sqcRYGate(q, -1.570761327768466, 5);
  sqcRZGate(q, -0.8457977642090464, 5);
  sqcRYGate(q, -1.5706670103016935, 6);
  sqcRZGate(q, 0.19447947135113988, 6);
  sqcRYGate(q, 1.5707996490594236, 7);
  sqcRZGate(q, 3.130033144167956, 7);

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
