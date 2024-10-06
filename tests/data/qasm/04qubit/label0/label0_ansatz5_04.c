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

  sqcRYGate(q, -1.264434066288053, 0);
  sqcRYGate(q, -2.3785798099635516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2654849611889597, 0);
  sqcRYGate(q, 0.6106651737757601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4539118716695474, 2);
  sqcRYGate(q, 1.8074422921781261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.439789159766063, 2);
  sqcRYGate(q, -1.1075960769331041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7209138556045114, 1);
  sqcRYGate(q, 2.5562721229351912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.56446517488397, 1);
  sqcRYGate(q, -0.5762940433385495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.204784406148972, 0);
  sqcRYGate(q, -1.505675456080934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.074889327777131, 0);
  sqcRYGate(q, 2.4332477200788003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4304110975648126, 2);
  sqcRYGate(q, -2.5190717923719297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0938010213826317, 2);
  sqcRYGate(q, -1.949506265781369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9903035352697214, 1);
  sqcRYGate(q, 1.3286215815025386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.031480279205363726, 1);
  sqcRYGate(q, 3.0466350560056514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6581221487709192, 0);
  sqcRYGate(q, 1.5461847436822316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5456349692391473, 0);
  sqcRYGate(q, -0.8501255655582993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1715279126126696, 2);
  sqcRYGate(q, 1.2767837828847637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.676993268519103, 2);
  sqcRYGate(q, 1.4850899440964378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1089361444114703, 1);
  sqcRYGate(q, -0.8323427747023349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1199018346406193, 1);
  sqcRYGate(q, 1.2765532373700346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2810939274846387, 0);
  sqcRYGate(q, 1.0385378922548814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1450271990680694, 0);
  sqcRYGate(q, -1.18909885025045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1127357613694455, 2);
  sqcRYGate(q, -0.3083996201232298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3248516981828526, 2);
  sqcRYGate(q, -1.3645303560623976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.282951359895886, 1);
  sqcRYGate(q, 0.9213684137997538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.879252178000571, 1);
  sqcRYGate(q, -0.13157155791647046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8267578129416846, 0);
  sqcRYGate(q, 1.8383357593039602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.954099730834657, 0);
  sqcRYGate(q, -3.0977326809351085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4723153985287287, 2);
  sqcRYGate(q, -0.1680945784270751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08954822553549402, 2);
  sqcRYGate(q, -2.215178440589723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.089992401403724, 1);
  sqcRYGate(q, 0.025085866386613805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.27106675907745803, 1);
  sqcRYGate(q, 0.654266513091851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13852414651338574, 0);
  sqcRYGate(q, -2.287399973473589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.88694397442014, 0);
  sqcRYGate(q, -1.5755333025653595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0496490418483013, 2);
  sqcRYGate(q, 0.12549586231156695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.08875790248236, 2);
  sqcRYGate(q, 2.3343060029560596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2433553853076904, 1);
  sqcRYGate(q, 0.3866932684935227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6987114573797166, 1);
  sqcRYGate(q, -0.7912351394470498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8064602169152936, 0);
  sqcRYGate(q, 1.7252907154228652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.110840303229712, 0);
  sqcRYGate(q, -2.88601725919098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39198506921434967, 2);
  sqcRYGate(q, -0.27970502315107465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.139549324004876, 2);
  sqcRYGate(q, -3.0661089694033032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2641646812366423, 1);
  sqcRYGate(q, -2.9315658184843176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0741218784120887, 1);
  sqcRYGate(q, -0.3957782763665887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.805051789189002, 0);
  sqcRYGate(q, 0.29967973417582566, 1);
  sqcRYGate(q, -2.122891518319725, 2);
  sqcRYGate(q, -0.41052281407442504, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
