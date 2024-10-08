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

  sqcRYGate(q, -1.327330869046853, 0);
  sqcRZGate(q, 1.4762162494514897, 0);
  sqcRYGate(q, -1.4987954340502565, 1);
  sqcRZGate(q, 2.5504579211633787, 1);
  sqcRYGate(q, 1.8297910338599, 2);
  sqcRZGate(q, -1.4610809002636085, 2);
  sqcRYGate(q, -2.837308808966322, 3);
  sqcRZGate(q, -2.8964733480614444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7990496980763933, 0);
  sqcRZGate(q, -0.6026396436460333, 0);
  sqcRYGate(q, -0.8121469120150451, 1);
  sqcRZGate(q, -3.1258359815450927, 1);
  sqcRYGate(q, -0.1931497294944737, 2);
  sqcRZGate(q, -0.045950772672054725, 2);
  sqcRYGate(q, -2.012319793318592, 3);
  sqcRZGate(q, -0.1884471326232653, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.09464734580118402, 0);
  sqcRZGate(q, 2.421789891159219, 0);
  sqcRYGate(q, 2.9906738175749834, 1);
  sqcRZGate(q, 1.982044766606605, 1);
  sqcRYGate(q, -0.1802811632577619, 2);
  sqcRZGate(q, 0.6772591954893855, 2);
  sqcRYGate(q, 1.7500810425046112, 3);
  sqcRZGate(q, 0.9689303774078417, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0195240418148086, 0);
  sqcRZGate(q, -0.5229788872607315, 0);
  sqcRYGate(q, -0.4310558524518452, 1);
  sqcRZGate(q, 0.966837964708704, 1);
  sqcRYGate(q, -1.731564892380061, 2);
  sqcRZGate(q, -0.6002054021619992, 2);
  sqcRYGate(q, 1.8748910912610608, 3);
  sqcRZGate(q, 3.116939176260278, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.573035731425888, 0);
  sqcRZGate(q, 2.88805133581947, 0);
  sqcRYGate(q, 2.4893068370880895, 1);
  sqcRZGate(q, -0.42596433616836293, 1);
  sqcRYGate(q, -0.6030507240279749, 2);
  sqcRZGate(q, -3.051526728711141, 2);
  sqcRYGate(q, 2.2853494127537046, 3);
  sqcRZGate(q, 2.5819054018045975, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2949324224914753, 0);
  sqcRZGate(q, -2.2531528129173553, 0);
  sqcRYGate(q, -1.8588595149193665, 1);
  sqcRZGate(q, -0.49272720029972833, 1);
  sqcRYGate(q, 2.2767528148559406, 2);
  sqcRZGate(q, 1.0321724497270193, 2);
  sqcRYGate(q, -1.632027957351017, 3);
  sqcRZGate(q, 1.0629735343568356, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8592921830647824, 0);
  sqcRZGate(q, 0.1854437456691581, 0);
  sqcRYGate(q, -2.4405390958363253, 1);
  sqcRZGate(q, 2.3966114433832413, 1);
  sqcRYGate(q, -2.910411180467238, 2);
  sqcRZGate(q, 2.592225305004029, 2);
  sqcRYGate(q, -1.989696500190774, 3);
  sqcRZGate(q, 3.002828818836063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.587676010842581, 0);
  sqcRZGate(q, 1.0037416248636513, 0);
  sqcRYGate(q, -1.5547716382750956, 1);
  sqcRZGate(q, 2.081164970509774, 1);
  sqcRYGate(q, -1.3176456200165376, 2);
  sqcRZGate(q, 1.4515347258174298, 2);
  sqcRYGate(q, 2.8518321025898885, 3);
  sqcRZGate(q, -1.6462149313828613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4506887127571959, 0);
  sqcRZGate(q, 0.9435060513259473, 0);
  sqcRYGate(q, 0.6193742270709266, 1);
  sqcRZGate(q, -0.9624959142435117, 1);
  sqcRYGate(q, -1.2178330406930087, 2);
  sqcRZGate(q, 3.094101822508504, 2);
  sqcRYGate(q, -0.58848795319589, 3);
  sqcRZGate(q, -0.6053268496531993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5034376811981724, 0);
  sqcRZGate(q, -0.9956051612175535, 0);
  sqcRYGate(q, -2.840198546678636, 1);
  sqcRZGate(q, 0.3340386526619638, 1);
  sqcRYGate(q, -0.5668150319513069, 2);
  sqcRZGate(q, -3.0070837531735837, 2);
  sqcRYGate(q, -1.7604079880126398, 3);
  sqcRZGate(q, -1.2626973395231715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2622687035900739, 0);
  sqcRZGate(q, -2.892294426387985, 0);
  sqcRYGate(q, 0.24782203571584738, 1);
  sqcRZGate(q, 0.2091733478460519, 1);
  sqcRYGate(q, 2.393366333441233, 2);
  sqcRZGate(q, 1.7365771557010194, 2);
  sqcRYGate(q, 1.966645316736897, 3);
  sqcRZGate(q, -2.011255499137122, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.915846970331277, 0);
  sqcRZGate(q, 0.7125987094470445, 0);
  sqcRYGate(q, -2.0399774488817233, 1);
  sqcRZGate(q, -2.6237587866583123, 1);
  sqcRYGate(q, 0.4876247339814119, 2);
  sqcRZGate(q, 0.5161258524176167, 2);
  sqcRYGate(q, -1.556863044906767, 3);
  sqcRZGate(q, 0.0228382209207811, 3);

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
