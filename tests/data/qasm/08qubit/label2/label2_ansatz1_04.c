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

  sqcRYGate(q, 2.0815433692867478, 0);
  sqcRZGate(q, 0.6133278005023208, 0);
  sqcRYGate(q, -3.1415260953875612, 1);
  sqcRZGate(q, 2.0243379122056355, 1);
  sqcRYGate(q, -3.1295179721614823, 2);
  sqcRZGate(q, 2.3541408078206945, 2);
  sqcRYGate(q, -1.5290016721159492, 3);
  sqcRZGate(q, 2.16899496891624, 3);
  sqcRYGate(q, 0.8723685131530701, 4);
  sqcRZGate(q, 0.09398885669703992, 4);
  sqcRYGate(q, 3.045383890993464, 5);
  sqcRZGate(q, -3.0653113310480955, 5);
  sqcRYGate(q, 2.6164455591158577, 6);
  sqcRZGate(q, 3.1002478095545416, 6);
  sqcRYGate(q, 2.964433128451804, 7);
  sqcRZGate(q, 1.425803085549357, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2765015391918917, 0);
  sqcRZGate(q, -1.063174959131737, 0);
  sqcRYGate(q, -0.00019538373928984498, 1);
  sqcRZGate(q, -3.029197055055393, 1);
  sqcRYGate(q, 0.23477414369217264, 2);
  sqcRZGate(q, 3.1407536989075666, 2);
  sqcRYGate(q, -0.11322250196674055, 3);
  sqcRZGate(q, 0.07783257699488821, 3);
  sqcRYGate(q, 1.6199798131444432, 4);
  sqcRZGate(q, -2.3676262664794283, 4);
  sqcRYGate(q, -1.6626626468928665, 5);
  sqcRZGate(q, 2.0872915642256773, 5);
  sqcRYGate(q, -0.01362700534558053, 6);
  sqcRZGate(q, 0.9226196110440954, 6);
  sqcRYGate(q, 0.12968791508174413, 7);
  sqcRZGate(q, 1.1858414475163368, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9847032528513604, 0);
  sqcRZGate(q, -0.5559087629799458, 0);
  sqcRYGate(q, -2.0712523474849354, 1);
  sqcRZGate(q, -1.628457564693969, 1);
  sqcRYGate(q, -1.5790549839592078, 2);
  sqcRZGate(q, -0.7027525123800604, 2);
  sqcRYGate(q, 1.2663647349678981, 3);
  sqcRZGate(q, 0.7564664110572226, 3);
  sqcRYGate(q, 3.139419777429755, 4);
  sqcRZGate(q, -1.5813525073435575, 4);
  sqcRYGate(q, 3.041333406381231, 5);
  sqcRZGate(q, 2.0893162707735122, 5);
  sqcRYGate(q, 3.1415340203216697, 6);
  sqcRZGate(q, -3.097900923272199, 6);
  sqcRYGate(q, 0.16469676488983467, 7);
  sqcRZGate(q, -3.127303962187088, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1408024428260055, 0);
  sqcRZGate(q, 0.33971122652349917, 0);
  sqcRYGate(q, 3.1400658238711574, 1);
  sqcRZGate(q, 1.5131501911766343, 1);
  sqcRYGate(q, 0.05027263825533179, 2);
  sqcRZGate(q, 2.9548325955316206, 2);
  sqcRYGate(q, -2.4010225149217423, 3);
  sqcRZGate(q, 1.3535474084201402, 3);
  sqcRYGate(q, 3.138944421250973, 4);
  sqcRZGate(q, 2.6861833703846796, 4);
  sqcRYGate(q, -1.4306984211533222, 5);
  sqcRZGate(q, 3.0658772490397865, 5);
  sqcRYGate(q, -0.0027047622230123507, 6);
  sqcRZGate(q, -2.282426501387393, 6);
  sqcRYGate(q, 3.0970748160379817, 7);
  sqcRZGate(q, 1.6703147012053456, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4949925314169572, 0);
  sqcRZGate(q, 2.9137305754927154, 0);
  sqcRYGate(q, 2.020940236586556, 1);
  sqcRZGate(q, -0.001802533211694528, 1);
  sqcRYGate(q, 0.0020426531010730997, 2);
  sqcRZGate(q, 0.19527553558139313, 2);
  sqcRYGate(q, 1.7336441254841537, 3);
  sqcRZGate(q, 1.5815139304078167, 3);
  sqcRYGate(q, -0.0026852126752760753, 4);
  sqcRZGate(q, 1.6040844454307548, 4);
  sqcRYGate(q, 1.5267763866930562, 5);
  sqcRZGate(q, 2.9874899575083558, 5);
  sqcRYGate(q, -0.5008142030787311, 6);
  sqcRZGate(q, 3.13689098986212, 6);
  sqcRYGate(q, -1.1502587644249092, 7);
  sqcRZGate(q, 2.7867838444436126, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3733582172830046, 0);
  sqcRZGate(q, 0.002832079700142548, 0);
  sqcRYGate(q, -1.570664964368894, 1);
  sqcRZGate(q, 1.5700943540687027, 1);
  sqcRYGate(q, -1.7154343410795485, 2);
  sqcRZGate(q, -2.0811043181299382, 2);
  sqcRYGate(q, 3.1366716312204, 3);
  sqcRZGate(q, -1.5623737407046163, 3);
  sqcRYGate(q, -0.011081247915734274, 4);
  sqcRZGate(q, 2.703160858512763, 4);
  sqcRYGate(q, -1.1979560578375377, 5);
  sqcRZGate(q, -0.622995052254213, 5);
  sqcRYGate(q, -1.5708280914365647, 6);
  sqcRZGate(q, 1.0621358871397053, 6);
  sqcRYGate(q, 0.8577657331016182, 7);
  sqcRZGate(q, -0.005209043366156684, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5706072215412226, 0);
  sqcRZGate(q, 2.915056288732822, 0);
  sqcRYGate(q, -1.5684130056748053, 1);
  sqcRZGate(q, -1.6233244337079589, 1);
  sqcRYGate(q, 0.00014531733302268818, 2);
  sqcRZGate(q, -2.849718469365476, 2);
  sqcRYGate(q, 0.714021653306406, 3);
  sqcRZGate(q, 1.4778140017724126, 3);
  sqcRYGate(q, 0.0065918464447995125, 4);
  sqcRZGate(q, 1.4344085395793773, 4);
  sqcRYGate(q, 0.006961627925073707, 5);
  sqcRZGate(q, -1.7018391168026794, 5);
  sqcRYGate(q, 0.057533771200299455, 6);
  sqcRZGate(q, 0.14283708942304685, 6);
  sqcRYGate(q, -1.5707960201168958, 7);
  sqcRZGate(q, -1.6140639451064087, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.913001110936491, 0);
  sqcRZGate(q, -1.4826028518268106, 0);
  sqcRYGate(q, 1.3479213677367643, 1);
  sqcRZGate(q, 1.8921021538763618, 1);
  sqcRYGate(q, 1.6243880338910435, 2);
  sqcRZGate(q, -2.8176995024313345, 2);
  sqcRYGate(q, -1.5549918459805392, 3);
  sqcRZGate(q, -2.1424155029465237, 3);
  sqcRYGate(q, 1.430177691930803, 4);
  sqcRZGate(q, 2.7402990288239137, 4);
  sqcRYGate(q, 2.0755381554697596, 5);
  sqcRZGate(q, -0.2551708579438392, 5);
  sqcRYGate(q, 2.5961452397292333, 6);
  sqcRZGate(q, 2.4649956916456723, 6);
  sqcRYGate(q, 0.505535014724491, 7);
  sqcRZGate(q, -0.20260437135858594, 7);

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
