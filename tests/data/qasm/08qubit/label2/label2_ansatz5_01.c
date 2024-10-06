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

  sqcRYGate(q, 0.10022610801595189, 0);
  sqcRYGate(q, -1.9326407404056256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9974941644828466, 0);
  sqcRYGate(q, -3.0135244796798877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.320990864945613, 2);
  sqcRYGate(q, 1.2349607073703446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6498429886768288, 2);
  sqcRYGate(q, -2.0021436941797957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4183778094626536, 4);
  sqcRYGate(q, 0.18837943357645873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.748530264311502, 4);
  sqcRYGate(q, -0.24148256640236918, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.012566892735435457, 6);
  sqcRYGate(q, -1.1015118473333922, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1188046595579841, 6);
  sqcRYGate(q, 0.7084650900368298, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5786186991261255, 1);
  sqcRYGate(q, 2.2451260998155584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0011520880276335817, 1);
  sqcRYGate(q, 0.006614812378589135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.253374390080969, 3);
  sqcRYGate(q, 2.7075796849132323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.897088597875892, 3);
  sqcRYGate(q, 2.950385665353638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6640457538217057, 5);
  sqcRYGate(q, 2.902084274809285, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2254691828249697, 5);
  sqcRYGate(q, 0.015630068937630526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02262432450777396, 0);
  sqcRYGate(q, 1.1602777549145298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.008729453928907558, 0);
  sqcRYGate(q, 0.10029751320470648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.297992121131775, 2);
  sqcRYGate(q, 1.8491133998175393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1710347702813224, 2);
  sqcRYGate(q, -2.10435113936489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6568869987570496, 4);
  sqcRYGate(q, 0.4552029145569515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.005907344752649436, 4);
  sqcRYGate(q, -1.8386665992601623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7085574027370325, 6);
  sqcRYGate(q, -0.466007160857119, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6061083883694759, 6);
  sqcRYGate(q, 2.0777976493129042, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.26798126054869525, 1);
  sqcRYGate(q, 2.907208084683335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5025582766618266, 1);
  sqcRYGate(q, 1.585335198131662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8704518855446046, 3);
  sqcRYGate(q, -1.846518968295177, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13748674708331493, 3);
  sqcRYGate(q, -1.4670100284007812, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.323892169668864, 5);
  sqcRYGate(q, -2.2967533816604115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7059394642127783, 5);
  sqcRYGate(q, 0.0980385312893519, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01722475453067318, 0);
  sqcRYGate(q, -3.059854805250017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3481222304041682, 0);
  sqcRYGate(q, 0.11249650475968576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1076206397293826, 2);
  sqcRYGate(q, -1.6026103685025346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.006575962805014121, 2);
  sqcRYGate(q, 1.6422462097715584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15147037050707754, 4);
  sqcRYGate(q, -3.099573806312326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.013959654106170246, 4);
  sqcRYGate(q, -0.037721556702701164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6389875475279725, 6);
  sqcRYGate(q, 0.4075011350913352, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4360965863429886, 6);
  sqcRYGate(q, -1.848489601513905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4520533080610205, 1);
  sqcRYGate(q, -2.3451743605484925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0408649717350604, 1);
  sqcRYGate(q, 1.5668639965589506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2754550556386378, 3);
  sqcRYGate(q, -1.4921784452692641, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.017263674768889646, 3);
  sqcRYGate(q, 3.140618788821903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3023870099129022, 5);
  sqcRYGate(q, 0.43262798779008516, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.380447453564762, 5);
  sqcRYGate(q, 0.09224357882329048, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6587510806125696, 0);
  sqcRYGate(q, 1.5535738851046847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.300766206840969, 0);
  sqcRYGate(q, 1.106822663093471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4610906250522575, 2);
  sqcRYGate(q, -0.30891627649758124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.009836439229277794, 2);
  sqcRYGate(q, 1.513854456616266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7197414803727935, 4);
  sqcRYGate(q, -1.1792442921621484, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1213831499791023, 4);
  sqcRYGate(q, -0.021214933561906665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2871415991654553, 6);
  sqcRYGate(q, 1.286391216789215, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19158101952925893, 6);
  sqcRYGate(q, -1.7413982078549992, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8640834622950755, 1);
  sqcRYGate(q, 1.5910092491762793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1330801431783541, 1);
  sqcRYGate(q, -3.112971117725875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.296188252562308, 3);
  sqcRYGate(q, -0.509003425679186, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.026611246193679928, 3);
  sqcRYGate(q, 0.007412192479830575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.881704675314417, 5);
  sqcRYGate(q, 0.11469908478302404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4736608504497832, 5);
  sqcRYGate(q, 3.0182407653589975, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2829666400527088, 0);
  sqcRYGate(q, 0.02265707870834266, 1);
  sqcRYGate(q, -2.0428257922077226, 2);
  sqcRYGate(q, 0.16961588550339105, 3);
  sqcRYGate(q, -1.4874341042869819, 4);
  sqcRYGate(q, 1.019485326155933, 5);
  sqcRYGate(q, -3.09687815104067, 6);
  sqcRYGate(q, -1.417481386281974, 7);

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
