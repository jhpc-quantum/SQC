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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.5707962524460544, 0);
  sqcRZGate(q, 4.1681267954615574e-07, 0);
  sqcRYGate(q, -3.066172641077611, 1);
  sqcRZGate(q, -0.2818344223436622, 1);
  sqcRYGate(q, 0.2820604141687389, 2);
  sqcRZGate(q, 3.1415194805216227, 2);
  sqcRYGate(q, 4.206586862647779e-07, 3);
  sqcRZGate(q, 1.3479525178052665, 3);
  sqcRYGate(q, 1.5707958000749982, 4);
  sqcRZGate(q, -1.5707971952282849, 4);
  sqcRYGate(q, -2.5885706475479164, 5);
  sqcRZGate(q, 1.570716704302801, 5);
  sqcRYGate(q, -3.101566501422193, 6);
  sqcRZGate(q, -1.570851870098239, 6);
  sqcRYGate(q, 1.5707965117631488, 7);
  sqcRZGate(q, -6.649178216670638e-07, 7);
  sqcRYGate(q, -0.046184838867035616, 8);
  sqcRZGate(q, -1.555788992453199e-05, 8);
  sqcRYGate(q, -2.8018694653613183, 9);
  sqcRZGate(q, -1.570808153549109, 9);
  sqcRYGate(q, 1.5707930713637492, 10);
  sqcRZGate(q, -3.14159255691319, 10);
  sqcRYGate(q, 3.0166170215549633, 11);
  sqcRZGate(q, 3.0570320864935656, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5707967030201564, 0);
  sqcRZGate(q, -2.5565186290672464, 0);
  sqcRYGate(q, -1.0597967925463081e-07, 1);
  sqcRZGate(q, 1.8526881882346204, 1);
  sqcRYGate(q, 0.5499339430443289, 2);
  sqcRZGate(q, 3.1415118026443567, 2);
  sqcRYGate(q, 1.5707963786609218, 3);
  sqcRZGate(q, 1.5707960356834683, 3);
  sqcRYGate(q, -1.5707985405503067, 4);
  sqcRZGate(q, -1.5707961098032912, 4);
  sqcRYGate(q, 3.0654774194182655, 5);
  sqcRZGate(q, -3.141577333648477, 5);
  sqcRYGate(q, -2.803369292180528, 6);
  sqcRZGate(q, -6.985565754526478e-05, 6);
  sqcRYGate(q, -1.5707958152316777, 7);
  sqcRZGate(q, 1.5707932374302487, 7);
  sqcRYGate(q, 1.570797212648099, 8);
  sqcRZGate(q, 1.564929110060258, 8);
  sqcRYGate(q, -1.5707962866165814, 9);
  sqcRZGate(q, 0.10957118853544756, 9);
  sqcRYGate(q, -1.5707921239687275, 10);
  sqcRZGate(q, 3.1415704110682854, 10);
  sqcRYGate(q, -3.1415915355804738, 11);
  sqcRZGate(q, 1.4862616426997075, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.21612716902564e-07, 0);
  sqcRZGate(q, -2.183621179045282, 0);
  sqcRYGate(q, 0.9013702800397089, 1);
  sqcRZGate(q, 0.9988245926867316, 1);
  sqcRYGate(q, 0.022004703520866364, 2);
  sqcRZGate(q, 1.782063703245274, 2);
  sqcRYGate(q, 1.570796384669495, 3);
  sqcRZGate(q, -1.5707958577826735, 3);
  sqcRYGate(q, -1.5707961549145093, 4);
  sqcRZGate(q, 1.881689003180827, 4);
  sqcRYGate(q, -2.948565278836414, 5);
  sqcRZGate(q, 1.115420481293052, 5);
  sqcRYGate(q, 0.1906752302465786, 6);
  sqcRZGate(q, 2.844851802597051, 6);
  sqcRYGate(q, 0.16611520560700124, 7);
  sqcRZGate(q, -0.9899391937211853, 7);
  sqcRYGate(q, -3.141592375413362, 8);
  sqcRZGate(q, 1.5649293646479476, 8);
  sqcRYGate(q, 3.1415925873497086, 9);
  sqcRZGate(q, -3.0320219288697694, 9);
  sqcRYGate(q, 2.3515801258478453, 10);
  sqcRZGate(q, 2.954045325626753, 10);
  sqcRYGate(q, -0.43328183127621855, 11);
  sqcRZGate(q, -1.6962347853350705, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.6025285739034894e-07, 0);
  sqcRZGate(q, -1.220568307582959, 0);
  sqcRYGate(q, 3.141592015152739, 1);
  sqcRZGate(q, 1.321356432660129, 1);
  sqcRYGate(q, 8.53087776420125e-07, 2);
  sqcRZGate(q, -1.4594338138485892, 2);
  sqcRYGate(q, -1.570795616218808, 3);
  sqcRZGate(q, -2.8190613814235506, 3);
  sqcRYGate(q, 5.131686036108363e-07, 4);
  sqcRZGate(q, -3.129936935473742, 4);
  sqcRYGate(q, -3.1415921795701314, 5);
  sqcRZGate(q, -1.703640934872535, 5);
  sqcRYGate(q, -5.492102259182649e-07, 6);
  sqcRZGate(q, 2.1901549974391576, 6);
  sqcRYGate(q, -1.0007533184364092e-06, 7);
  sqcRZGate(q, 1.3125707289235473, 7);
  sqcRYGate(q, -1.5707965481342783, 8);
  sqcRZGate(q, -1.2481786119624023, 8);
  sqcRYGate(q, 1.5707961160524953, 9);
  sqcRZGate(q, -2.818971771429112, 9);
  sqcRYGate(q, -3.1415920977754226, 10);
  sqcRZGate(q, -1.4357273069554148, 10);
  sqcRYGate(q, 3.141592134458382, 11);
  sqcRZGate(q, 1.7679788652106403, 11);

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
