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

  sqcRYGate(q, 2.0633042897281877, 0);
  sqcRYGate(q, -1.473177611692841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8247358981753923, 0);
  sqcRYGate(q, 1.0122168661691617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.613849567250184, 2);
  sqcRYGate(q, 1.7415720970539912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9201340757405232, 2);
  sqcRYGate(q, -1.3016194588033008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.467287242120368, 1);
  sqcRYGate(q, 0.4274678207846236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3200433854307079, 1);
  sqcRYGate(q, 0.7134773848115543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6796248925946784, 0);
  sqcRYGate(q, -1.4267316326786492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.136094929326872, 0);
  sqcRYGate(q, -1.308282285663064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.307412160607955, 2);
  sqcRYGate(q, 0.8855789888739448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.127440665697265, 2);
  sqcRYGate(q, -2.3793889202108063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.980739168404015, 1);
  sqcRYGate(q, 0.9737590754632786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4486214310893181, 1);
  sqcRYGate(q, 3.0401591268675165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6684623286746687, 0);
  sqcRYGate(q, 0.7626248442509037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.408685560137815, 0);
  sqcRYGate(q, -2.910963239205418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9286469493640355, 2);
  sqcRYGate(q, -1.1959392331120022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7736515587674413, 2);
  sqcRYGate(q, 2.580684696318232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2689645352295313, 1);
  sqcRYGate(q, -1.0803659759397852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9398802240150488, 1);
  sqcRYGate(q, -0.12641381005412722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0134447754935247, 0);
  sqcRYGate(q, 2.9813330116231924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.774544818956803, 0);
  sqcRYGate(q, -2.083118991293503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.023025661086689023, 2);
  sqcRYGate(q, 3.0267761458613553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.190335925689781, 2);
  sqcRYGate(q, 2.580017989564694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5926225879436622, 1);
  sqcRYGate(q, -0.5334347670607676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08733398261527725, 1);
  sqcRYGate(q, -2.437998179622953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8370419154757603, 0);
  sqcRYGate(q, -1.5026066546409051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5323448105426225, 0);
  sqcRYGate(q, -2.551490745358457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5267082281790527, 2);
  sqcRYGate(q, -0.24912409828293927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6547222238652015, 2);
  sqcRYGate(q, -0.4040206698988327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7348073483166787, 1);
  sqcRYGate(q, 1.2247748346668994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0419229211422532, 1);
  sqcRYGate(q, -0.4797079566496821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5127490825729302, 0);
  sqcRYGate(q, 3.012786480622958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.386046003224753, 0);
  sqcRYGate(q, 0.277428449453567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.016499109384317, 2);
  sqcRYGate(q, 1.4345619167773629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9661243159980986, 2);
  sqcRYGate(q, -0.18238677006775256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8510799422120293, 1);
  sqcRYGate(q, 2.696205447824171, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5310059855999423, 1);
  sqcRYGate(q, -0.7872487212158132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9075472998853167, 0);
  sqcRYGate(q, 0.07908094447163982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6392283287378717, 0);
  sqcRYGate(q, -2.538029992577757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5029203442697137, 2);
  sqcRYGate(q, -2.5321362337253244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.290204687019205, 2);
  sqcRYGate(q, 1.106652689622213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7304342717692721, 1);
  sqcRYGate(q, -1.2429703051962773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5096393652858677, 1);
  sqcRYGate(q, 3.126639275434055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2193574036847188, 0);
  sqcRYGate(q, 1.203173458126586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7048688413631916, 0);
  sqcRYGate(q, 1.9477251222827894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5606258202503083, 2);
  sqcRYGate(q, -0.4610219001240976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1770004024670015, 2);
  sqcRYGate(q, 2.159254577376795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4805317177656336, 1);
  sqcRYGate(q, -0.2831864544090577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4296222741055928, 1);
  sqcRYGate(q, 0.6881887128698984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03152816354447996, 0);
  sqcRYGate(q, -1.9531291105222586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.459050160663451, 0);
  sqcRYGate(q, -1.6956228617038855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3599592415490545, 2);
  sqcRYGate(q, -0.2917674201551155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9247498364143503, 2);
  sqcRYGate(q, 1.8139864013561517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.070118175246167, 1);
  sqcRYGate(q, -2.1084493034718497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6748599919088676, 1);
  sqcRYGate(q, 1.0005076780792583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4395018161813482, 0);
  sqcRYGate(q, -2.1408499852324487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9150634325060059, 0);
  sqcRYGate(q, 0.723890854354636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9031626028283373, 2);
  sqcRYGate(q, 2.0554313815312115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3870361011605015, 2);
  sqcRYGate(q, -1.288609911794749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24199490936035684, 1);
  sqcRYGate(q, -0.19674108960253722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.204589683261134, 1);
  sqcRYGate(q, -0.0898194580509184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12922872875631328, 0);
  sqcRYGate(q, 2.3071824721471006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.067351193520141, 0);
  sqcRYGate(q, 2.7392195810783058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2429164929332055, 2);
  sqcRYGate(q, -0.2759826014416431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.480306719574555, 2);
  sqcRYGate(q, -2.858088978822017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5415371983551314, 1);
  sqcRYGate(q, -1.6481978400205755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3111030885945898, 1);
  sqcRYGate(q, -2.2807313454013944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10456802327901558, 0);
  sqcRYGate(q, 3.020408509980102, 1);
  sqcRYGate(q, -2.4481839222400845, 2);
  sqcRYGate(q, -0.023375381362986124, 3);

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
