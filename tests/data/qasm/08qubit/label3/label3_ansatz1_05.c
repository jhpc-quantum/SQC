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

  sqcRYGate(q, 1.1362424769020782, 0);
  sqcRZGate(q, -3.287415927806295e-05, 0);
  sqcRYGate(q, -1.5707575499408932, 1);
  sqcRZGate(q, 2.8413603738958226, 1);
  sqcRYGate(q, -1.570673642596275, 2);
  sqcRZGate(q, -3.101257244880353, 2);
  sqcRYGate(q, 0.06145831017476677, 3);
  sqcRZGate(q, -3.1387929970996726, 3);
  sqcRYGate(q, -2.7346977975008113, 4);
  sqcRZGate(q, 1.5160336746817167, 4);
  sqcRYGate(q, 1.5585267840594574, 5);
  sqcRZGate(q, 1.222345370315038, 5);
  sqcRYGate(q, 1.569893867709772, 6);
  sqcRZGate(q, -1.6795214521673527, 6);
  sqcRYGate(q, 2.1475270332338163, 7);
  sqcRZGate(q, 3.1413966342475375, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707910535470297, 0);
  sqcRZGate(q, -2.725677232477625, 0);
  sqcRYGate(q, 3.0469312765980296, 1);
  sqcRZGate(q, 1.5685453902355047, 1);
  sqcRYGate(q, 1.6441374507550917, 2);
  sqcRZGate(q, 2.4665134279311394, 2);
  sqcRYGate(q, 1.5707717991452608, 3);
  sqcRZGate(q, 0.7377106793423343, 3);
  sqcRYGate(q, -0.05196234816098056, 4);
  sqcRZGate(q, 1.6386914763919513, 4);
  sqcRYGate(q, 1.646653882229578, 5);
  sqcRZGate(q, -1.7514006507118332, 5);
  sqcRYGate(q, 1.865273855082231, 6);
  sqcRZGate(q, 0.13864033837294798, 6);
  sqcRYGate(q, 1.5721904937455298, 7);
  sqcRZGate(q, -1.4739112365725004, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1682188111176783, 0);
  sqcRZGate(q, -1.058237313287315, 0);
  sqcRYGate(q, 1.5775859122934088, 1);
  sqcRZGate(q, -0.15995664529501688, 1);
  sqcRYGate(q, 1.5158598730076043, 2);
  sqcRZGate(q, -2.6507542447833075, 2);
  sqcRYGate(q, 1.4786389121357697, 3);
  sqcRZGate(q, 1.5881204911560862, 3);
  sqcRYGate(q, 1.571637372907925, 4);
  sqcRZGate(q, 0.022093610719538997, 4);
  sqcRYGate(q, -1.5713243021441199, 5);
  sqcRZGate(q, 3.1308651245812356, 5);
  sqcRYGate(q, -2.4600913583131283, 6);
  sqcRZGate(q, 0.3019327567440915, 6);
  sqcRYGate(q, 1.6780319654656062, 7);
  sqcRZGate(q, -0.23774071737907487, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0005611356570481129, 0);
  sqcRZGate(q, -0.5946089487400688, 0);
  sqcRYGate(q, -2.295128927532961, 1);
  sqcRZGate(q, -0.47411529375397254, 1);
  sqcRYGate(q, 1.562427695377024, 2);
  sqcRZGate(q, -0.1002330463647505, 2);
  sqcRYGate(q, 0.27959355634676447, 3);
  sqcRZGate(q, -1.5725082319490227, 3);
  sqcRYGate(q, 0.32908697188307284, 4);
  sqcRZGate(q, -1.5707638528274297, 4);
  sqcRYGate(q, 1.5706182417283383, 5);
  sqcRZGate(q, 0.9839571119370092, 5);
  sqcRYGate(q, -1.5556969595954409, 6);
  sqcRZGate(q, 1.553541543118714, 6);
  sqcRYGate(q, 1.5755786930431233, 7);
  sqcRZGate(q, 1.6032294192705454, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1063434640412813, 0);
  sqcRZGate(q, 0.09909476910050774, 0);
  sqcRYGate(q, -3.0979895925069005, 1);
  sqcRZGate(q, 1.2601266503126674, 1);
  sqcRYGate(q, -2.984848009204097, 2);
  sqcRZGate(q, -0.0992489496911058, 2);
  sqcRYGate(q, -1.6013453938691973, 3);
  sqcRZGate(q, 0.0003817346910773452, 3);
  sqcRYGate(q, -1.568246404336816, 4);
  sqcRZGate(q, -1.441893974002558, 4);
  sqcRYGate(q, 3.1400475092132787, 5);
  sqcRZGate(q, 2.8713392283545645, 5);
  sqcRYGate(q, 1.6461179696702806, 6);
  sqcRZGate(q, -2.854580009178726, 6);
  sqcRYGate(q, 2.9986994175170176, 7);
  sqcRZGate(q, 3.0690631074620605, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.141129828003803, 0);
  sqcRZGate(q, 1.57242911915928, 0);
  sqcRYGate(q, -1.387731284602763, 1);
  sqcRZGate(q, -2.3394507588258477, 1);
  sqcRYGate(q, 1.672490994415524, 2);
  sqcRZGate(q, -1.5723689981706954, 2);
  sqcRYGate(q, -2.937170231298244, 3);
  sqcRZGate(q, -0.6826018356885123, 3);
  sqcRYGate(q, -1.573137171806681, 4);
  sqcRZGate(q, -1.2041090143715572, 4);
  sqcRYGate(q, -0.015175188072458212, 5);
  sqcRZGate(q, -1.886679619809614, 5);
  sqcRYGate(q, -0.005155514289723939, 6);
  sqcRZGate(q, -0.5034281952718125, 6);
  sqcRYGate(q, -2.974524831838701, 7);
  sqcRZGate(q, 3.066997694068232, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.32095481122475533, 0);
  sqcRZGate(q, -2.773210759735687, 0);
  sqcRYGate(q, 1.571383130050619, 1);
  sqcRZGate(q, 1.5729164699089841, 1);
  sqcRYGate(q, 1.5319224166045669, 2);
  sqcRZGate(q, -3.1122527717363333, 2);
  sqcRYGate(q, 0.008390494195152254, 3);
  sqcRZGate(q, 0.6815092316940188, 3);
  sqcRYGate(q, -0.003775958180710859, 4);
  sqcRZGate(q, 1.1999554206973677, 4);
  sqcRYGate(q, 1.571268723742704, 5);
  sqcRZGate(q, 0.16055875494160554, 5);
  sqcRYGate(q, -0.07828902305209162, 6);
  sqcRZGate(q, 1.7863169620538684, 6);
  sqcRYGate(q, -2.9032720318574117, 7);
  sqcRZGate(q, 0.020953416356908505, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.21474616998666e-05, 0);
  sqcRZGate(q, -1.5301972300417983, 0);
  sqcRYGate(q, -1.5700206674699475, 1);
  sqcRZGate(q, -2.085257677770653, 1);
  sqcRYGate(q, 3.123805943362124, 2);
  sqcRZGate(q, 1.196961337116532, 2);
  sqcRYGate(q, -0.04817529862093206, 3);
  sqcRZGate(q, -1.933186134616247, 3);
  sqcRYGate(q, 0.042421790569629365, 4);
  sqcRZGate(q, -1.2076632663547582, 4);
  sqcRYGate(q, -0.0043139177679822885, 5);
  sqcRZGate(q, 1.0090538735562307, 5);
  sqcRYGate(q, -1.5707330763189675, 6);
  sqcRZGate(q, -1.20419380507342, 6);
  sqcRYGate(q, 1.7366545974586538, 7);
  sqcRZGate(q, -0.7090413359334542, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2379856869460992, 0);
  sqcRZGate(q, 1.5484537443959783, 0);
  sqcRYGate(q, 1.5325490938979323, 1);
  sqcRZGate(q, -2.3009623025367536, 1);
  sqcRYGate(q, -1.904321243372265, 2);
  sqcRZGate(q, 1.5630999285984342, 2);
  sqcRYGate(q, -1.1917275432459924, 3);
  sqcRZGate(q, 0.1441239934195151, 3);
  sqcRYGate(q, 1.9701111250824825, 4);
  sqcRZGate(q, 0.12277685363022398, 4);
  sqcRYGate(q, 1.9057471439698546, 5);
  sqcRZGate(q, -1.5739228806708871, 5);
  sqcRYGate(q, -1.948337870626419, 6);
  sqcRZGate(q, -3.0003409124300493, 6);
  sqcRYGate(q, -2.624128237990956, 7);
  sqcRZGate(q, -0.661290623436895, 7);

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
