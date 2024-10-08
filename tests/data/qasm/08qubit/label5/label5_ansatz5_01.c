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

  sqcRYGate(q, 2.0121038806257676, 0);
  sqcRYGate(q, 2.8197786407964256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29208730584440024, 0);
  sqcRYGate(q, 2.305774568852971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0485565112871837, 2);
  sqcRYGate(q, -0.20918641003688523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29197679201128673, 2);
  sqcRYGate(q, 0.3409648999545636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29804741130644674, 4);
  sqcRYGate(q, 0.8286027309002328, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7912147662711937, 4);
  sqcRYGate(q, 2.31554497211424, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.40900823745111836, 6);
  sqcRYGate(q, -0.3340058279292077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.884999893056949, 6);
  sqcRYGate(q, 2.7999266210952185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1050821650084077, 1);
  sqcRYGate(q, -0.9963271932114068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3393417769930616, 1);
  sqcRYGate(q, -1.5594203049406987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4031727016486384, 3);
  sqcRYGate(q, 0.002576499434824248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.446933292788107, 3);
  sqcRYGate(q, 1.4427003834282113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.270967153813097, 5);
  sqcRYGate(q, 3.0908370080467877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.23161314736365, 5);
  sqcRYGate(q, 0.8725140509023563, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3189350454460775, 0);
  sqcRYGate(q, 2.1581901594662454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.013208723445132, 0);
  sqcRYGate(q, 1.75884319961433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1574664021892893, 2);
  sqcRYGate(q, -1.5879398599378267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.417139904881161, 2);
  sqcRYGate(q, -1.3207538995559656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.557312480553465, 4);
  sqcRYGate(q, -1.6313679091555817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.04084921813505603, 4);
  sqcRYGate(q, -2.0458380478721856, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.30115718275416375, 6);
  sqcRYGate(q, -2.218499164685672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2974377530545675, 6);
  sqcRYGate(q, -2.963346679316452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5349098593051358, 1);
  sqcRYGate(q, -1.541742825539108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.063052038245114, 1);
  sqcRYGate(q, 1.223280963641943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5671603661480322, 3);
  sqcRYGate(q, -1.3252349360931561, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.014282904441748734, 3);
  sqcRYGate(q, 1.7760204363052214, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9051506779720957, 5);
  sqcRYGate(q, 2.4513203600970783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9343884730587959, 5);
  sqcRYGate(q, 3.131704743730027, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4198348561027156, 0);
  sqcRYGate(q, 3.086079288499962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7881668478382515, 0);
  sqcRYGate(q, -0.02665973489750212, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.91273998464745, 2);
  sqcRYGate(q, 0.08541139432339334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.002787155645490813, 2);
  sqcRYGate(q, -3.0301253930138166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8220812892737144, 4);
  sqcRYGate(q, 0.8386350435574812, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4396543736312557, 4);
  sqcRYGate(q, -1.240624564838094, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6942385933293602, 6);
  sqcRYGate(q, 0.7409706907428468, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.602218739552744, 6);
  sqcRYGate(q, 1.442264402244259, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7218302606423592, 1);
  sqcRYGate(q, -0.545403355699908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1028786298811735, 1);
  sqcRYGate(q, -2.3322012253231414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6813753796351598, 3);
  sqcRYGate(q, -1.5690001320330076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8429045368220953, 3);
  sqcRYGate(q, 0.001326223201427053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.131082547654868, 5);
  sqcRYGate(q, 0.3098665209539347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1273865467419433, 5);
  sqcRYGate(q, -3.0932441886305075, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.746998284958141, 0);
  sqcRYGate(q, -3.085564858346821, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4270909409839396, 0);
  sqcRYGate(q, 1.5927168663263984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.269716093606707, 2);
  sqcRYGate(q, 2.9475629564860237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0321468261318567, 2);
  sqcRYGate(q, -1.4749984781827266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1838092129059996, 4);
  sqcRYGate(q, -3.119798100760644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.596018883731193, 4);
  sqcRYGate(q, 0.013407524754135218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2471997620967403, 6);
  sqcRYGate(q, 1.8254862882565421, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07604885918605506, 6);
  sqcRYGate(q, 1.5666835329234967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.320662766140699, 1);
  sqcRYGate(q, 1.601415952237133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5692778088927061, 1);
  sqcRYGate(q, -0.5834914559876809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2947780559619164, 3);
  sqcRYGate(q, 1.1820170047385874, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1388749124805964, 3);
  sqcRYGate(q, 0.007643441459979057, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5537071377590561, 5);
  sqcRYGate(q, -3.018466510168803, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9617786659697645, 5);
  sqcRYGate(q, -0.14758216858008663, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.785646698337557, 0);
  sqcRYGate(q, 1.5677418914436836, 1);
  sqcRYGate(q, 3.1382122426039922, 2);
  sqcRYGate(q, 1.8459617054634962, 3);
  sqcRYGate(q, -0.0028567455089021365, 4);
  sqcRYGate(q, -1.5661699462938803, 5);
  sqcRYGate(q, -3.0440597667126985, 6);
  sqcRYGate(q, 2.8063509354991973, 7);

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
