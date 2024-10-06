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

  sqcRYGate(q, -0.4036522475335413, 0);
  sqcRYGate(q, 2.7275997692390113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3876200031890322, 0);
  sqcRYGate(q, 2.303564871920569, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1907176790336154, 1);
  sqcRYGate(q, -0.4021525809457805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8456853562982367, 1);
  sqcRYGate(q, 1.7567001128546538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.309275319038552, 2);
  sqcRYGate(q, -1.4113111324299545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0617094409743275, 2);
  sqcRYGate(q, 0.1308329733988023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3309202045999893, 0);
  sqcRYGate(q, 0.24576869520355785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37871609870452544, 0);
  sqcRYGate(q, -0.8242312174264099, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9955475039516051, 1);
  sqcRYGate(q, -2.169509430067876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9378386571667163, 1);
  sqcRYGate(q, -2.402896884207347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6466161441835354, 2);
  sqcRYGate(q, -1.6156868369049286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36005453030719053, 2);
  sqcRYGate(q, 2.905254324187833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.75685048910126, 0);
  sqcRYGate(q, -2.710784673273511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.584244580155974, 0);
  sqcRYGate(q, 0.5088166900988966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.995590758117656, 1);
  sqcRYGate(q, -0.9953243526701654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.668163457815819, 1);
  sqcRYGate(q, 2.345106679751287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48350990567912816, 2);
  sqcRYGate(q, -1.7953150786415293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4329041638427606, 2);
  sqcRYGate(q, 0.7522538257177035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9878776936783273, 0);
  sqcRYGate(q, -2.4769338364098155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5458219183455397, 0);
  sqcRYGate(q, 1.1776020753193817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.21575358896456, 1);
  sqcRYGate(q, -1.2455323746995184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0753341448618077, 1);
  sqcRYGate(q, -2.125922248591861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.007063574448479, 2);
  sqcRYGate(q, -2.0907852344138167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.663939275903992, 2);
  sqcRYGate(q, 2.4497725146005247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.154159939685353, 0);
  sqcRYGate(q, -2.362211032005657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42236507605689066, 0);
  sqcRYGate(q, -3.0952818307799848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4322631295449109, 1);
  sqcRYGate(q, -1.9335026475149546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.119718291244073, 1);
  sqcRYGate(q, -0.12745155676871178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3412292914418291, 2);
  sqcRYGate(q, 2.7977569938317104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.074957375162518, 2);
  sqcRYGate(q, -2.287759064255614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9104048019495448, 0);
  sqcRYGate(q, 2.0062468532033284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8217835322177305, 0);
  sqcRYGate(q, -1.5531287931358848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16818712211827072, 1);
  sqcRYGate(q, -3.1379016410683316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2727638531075351, 1);
  sqcRYGate(q, 2.6464779093474635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2575236784291013, 2);
  sqcRYGate(q, -0.2250090593842229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8258841015186382, 2);
  sqcRYGate(q, 2.099441356860667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20073763389873514, 0);
  sqcRYGate(q, -2.0339540012895014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1850115435185213, 0);
  sqcRYGate(q, 1.6377530215817604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.842871160663429, 1);
  sqcRYGate(q, -2.7253955063463318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2212585765049693, 1);
  sqcRYGate(q, -3.098580279872669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.542843151058757, 2);
  sqcRYGate(q, 2.879892016750854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8302346638246316, 2);
  sqcRYGate(q, 0.7336422687065784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9748064457942296, 0);
  sqcRYGate(q, 0.006587444552076408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18177802200632698, 0);
  sqcRYGate(q, -0.613425298078881, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1422798175155293, 1);
  sqcRYGate(q, -0.6788354950236491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5387667035569588, 1);
  sqcRYGate(q, -1.9787139142315953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5447353818702068, 2);
  sqcRYGate(q, -1.0014446938443529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.004332836381254, 2);
  sqcRYGate(q, -2.2675874945622594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6673660246321029, 0);
  sqcRYGate(q, -0.7863383470659382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29178767066938754, 0);
  sqcRYGate(q, 1.967772703715629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8161862526568138, 1);
  sqcRYGate(q, -1.115489047204722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.048469469776208, 1);
  sqcRYGate(q, 0.16032401784167852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1308423302680124, 2);
  sqcRYGate(q, -2.1702381086448295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4808562443749262, 2);
  sqcRYGate(q, 1.3515711522170974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0781366128465917, 0);
  sqcRYGate(q, 1.9841216689800025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8286948765939461, 0);
  sqcRYGate(q, -1.2880833109489753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.05293465302875, 1);
  sqcRYGate(q, 3.085744582267002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.890152832251558, 1);
  sqcRYGate(q, 2.0776642280247346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1354012500575275, 2);
  sqcRYGate(q, -1.0573900582878046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2461658210069988, 2);
  sqcRYGate(q, -2.5699684055405476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5811506558762876, 0);
  sqcRYGate(q, -1.520776761156673, 1);
  sqcRYGate(q, 2.88491998897854, 2);
  sqcRYGate(q, 1.1990500686286474, 3);

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
