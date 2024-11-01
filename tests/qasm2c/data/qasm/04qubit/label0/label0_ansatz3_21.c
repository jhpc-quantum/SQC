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
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.44093291263829026, 0);
  sqcRZGate(q, -2.8061480721941874, 0);
  sqcRYGate(q, -0.7771061368925789, 1);
  sqcRZGate(q, -3.0669437687376226, 1);
  sqcRYGate(q, -2.177609555370428, 2);
  sqcRZGate(q, 2.2455128983817563, 2);
  sqcRYGate(q, 1.7759574071001187, 3);
  sqcRZGate(q, 2.0049917501156687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9683685494041168, 0);
  sqcRZGate(q, -1.6720133502671946, 0);
  sqcRYGate(q, -0.2627774234389548, 1);
  sqcRZGate(q, 1.9253863347878406, 1);
  sqcRYGate(q, 2.494725373553479, 2);
  sqcRZGate(q, 3.0447853771019315, 2);
  sqcRYGate(q, -1.34558594274798, 3);
  sqcRZGate(q, -0.44612323944743615, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6499884443025565, 0);
  sqcRZGate(q, -1.076082318902549, 0);
  sqcRYGate(q, -0.1424057862093123, 1);
  sqcRZGate(q, 0.11045198449911618, 1);
  sqcRYGate(q, 1.2516924495378412, 2);
  sqcRZGate(q, -2.9174287051662713, 2);
  sqcRYGate(q, 2.8954747295945182, 3);
  sqcRZGate(q, 0.05023698164801083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6960489643507417, 0);
  sqcRZGate(q, -2.6788673181278106, 0);
  sqcRYGate(q, -2.503774976923339, 1);
  sqcRZGate(q, 2.1768875414563964, 1);
  sqcRYGate(q, -0.1874499118837965, 2);
  sqcRZGate(q, -2.024494381422115, 2);
  sqcRYGate(q, -1.4118325390447588, 3);
  sqcRZGate(q, 1.8425724628675788, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7778938995115707, 0);
  sqcRZGate(q, -2.300734723462968, 0);
  sqcRYGate(q, -2.925155563340816, 1);
  sqcRZGate(q, -1.0714592658947495, 1);
  sqcRYGate(q, 0.2429353047583895, 2);
  sqcRZGate(q, 2.2132537499577376, 2);
  sqcRYGate(q, -2.5791880283892286, 3);
  sqcRZGate(q, 1.8291225267540347, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6327348460748468, 0);
  sqcRZGate(q, -1.4717143426746817, 0);
  sqcRYGate(q, -2.869818239048815, 1);
  sqcRZGate(q, 2.886796802674167, 1);
  sqcRYGate(q, 1.0266814824781862, 2);
  sqcRZGate(q, -0.4052500421534489, 2);
  sqcRYGate(q, -1.959627693816792, 3);
  sqcRZGate(q, -1.558056036238664, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7527125959302594, 0);
  sqcRZGate(q, 2.2410444326518286, 0);
  sqcRYGate(q, 1.7011869571505611, 1);
  sqcRZGate(q, 0.546962747839908, 1);
  sqcRYGate(q, -2.602569661739019, 2);
  sqcRZGate(q, -2.022897533241532, 2);
  sqcRYGate(q, 0.4571681850553855, 3);
  sqcRZGate(q, 3.1369932975434085, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.3536349053486134, 0);
  sqcRZGate(q, -0.4204366213379185, 0);
  sqcRYGate(q, -2.959924430031307, 1);
  sqcRZGate(q, 2.3319863197556647, 1);
  sqcRYGate(q, -2.1946056143601584, 2);
  sqcRZGate(q, -1.395785426198782, 2);
  sqcRYGate(q, -2.509473193836715, 3);
  sqcRZGate(q, -2.3175655791068794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.969123878897454, 0);
  sqcRZGate(q, -1.6424274271966712, 0);
  sqcRYGate(q, 0.012193679711818627, 1);
  sqcRZGate(q, -1.2773556975806994, 1);
  sqcRYGate(q, 0.8163867708751402, 2);
  sqcRZGate(q, -2.5779454106961808, 2);
  sqcRYGate(q, -1.108182666921342, 3);
  sqcRZGate(q, -1.7839554504273398, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.31147295501607036, 0);
  sqcRZGate(q, -1.5956522209223083, 0);
  sqcRYGate(q, -0.1749682301374615, 1);
  sqcRZGate(q, 1.7480243368373662, 1);
  sqcRYGate(q, -2.0855348424077906, 2);
  sqcRZGate(q, -2.3888308045720197, 2);
  sqcRYGate(q, -1.9302834055545872, 3);
  sqcRZGate(q, -0.7761271741262604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6071164252252048, 0);
  sqcRZGate(q, 1.9580276751955488, 0);
  sqcRYGate(q, -1.21324264670685, 1);
  sqcRZGate(q, -2.2848210396505144, 1);
  sqcRYGate(q, -1.9834402416991734, 2);
  sqcRZGate(q, 2.470689943748646, 2);
  sqcRYGate(q, -1.4359532919941898, 3);
  sqcRZGate(q, 1.2272009748514643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6510916614555275, 0);
  sqcRZGate(q, 0.0955968881593393, 0);
  sqcRYGate(q, -1.5042212254724063, 1);
  sqcRZGate(q, 2.8480762531846344, 1);
  sqcRYGate(q, -0.8466831809752462, 2);
  sqcRZGate(q, -2.22050406002591, 2);
  sqcRYGate(q, 1.8240373911094712, 3);
  sqcRZGate(q, -0.4909512117012182, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.254934200581137, 0);
  sqcRZGate(q, 0.2518989449914919, 0);
  sqcRYGate(q, 2.7733969267159533, 1);
  sqcRZGate(q, -0.5801956647576398, 1);
  sqcRYGate(q, -2.9033102909972257, 2);
  sqcRZGate(q, 2.178210548501207, 2);
  sqcRYGate(q, -2.5006197022491037, 3);
  sqcRZGate(q, 1.199579215341232, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0441006185669677, 0);
  sqcRZGate(q, 0.27717712309529485, 0);
  sqcRYGate(q, -1.6118195185695727, 1);
  sqcRZGate(q, 1.965513615797934, 1);
  sqcRYGate(q, -1.5831486692774606, 2);
  sqcRZGate(q, -1.1303240399777934, 2);
  sqcRYGate(q, 0.6700331258409465, 3);
  sqcRZGate(q, -2.9005894909281076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5988551108790823, 0);
  sqcRZGate(q, -2.894998666918998, 0);
  sqcRYGate(q, 1.2257225016897024, 1);
  sqcRZGate(q, 0.35644533752799573, 1);
  sqcRYGate(q, 1.2278685126582627, 2);
  sqcRZGate(q, -2.300613681705339, 2);
  sqcRYGate(q, -2.5133826570270505, 3);
  sqcRZGate(q, 0.6362056091554109, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.925346138876034, 0);
  sqcRZGate(q, -1.9700731989319755, 0);
  sqcRYGate(q, -1.7333835746783914, 1);
  sqcRZGate(q, -0.2977820409634031, 1);
  sqcRYGate(q, -1.3689522495394524, 2);
  sqcRZGate(q, -2.7925138078302143, 2);
  sqcRYGate(q, -0.5542520710731091, 3);
  sqcRZGate(q, -0.5768320804664615, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.70033355176819, 0);
  sqcRZGate(q, -0.037967273051598305, 0);
  sqcRYGate(q, -2.2171336556965597, 1);
  sqcRZGate(q, -0.03979548713186897, 1);
  sqcRYGate(q, 2.2190409836450775, 2);
  sqcRZGate(q, -1.1647947312433289, 2);
  sqcRYGate(q, -1.9289843072705883, 3);
  sqcRZGate(q, -2.6529886826948617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7576218779146044, 0);
  sqcRZGate(q, 2.0140581561386046, 0);
  sqcRYGate(q, 1.9000369963734094, 1);
  sqcRZGate(q, -1.9260202663650627, 1);
  sqcRYGate(q, 0.7968099131070745, 2);
  sqcRZGate(q, 2.0723673014862216, 2);
  sqcRYGate(q, 2.141796686065687, 3);
  sqcRZGate(q, -0.8863845117389147, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.887938954083322, 0);
  sqcRZGate(q, -0.6381212835445105, 0);
  sqcRYGate(q, 2.092692138147665, 1);
  sqcRZGate(q, -2.1439403731657403, 1);
  sqcRYGate(q, -2.9793348072972403, 2);
  sqcRZGate(q, 1.2840180614658128, 2);
  sqcRYGate(q, 1.1528869770692118, 3);
  sqcRZGate(q, 2.8976411531730566, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4991921681834857, 0);
  sqcRZGate(q, -0.12138620819372448, 0);
  sqcRYGate(q, -3.1377099857848614, 1);
  sqcRZGate(q, 1.112425343425433, 1);
  sqcRYGate(q, -1.6514019818316124, 2);
  sqcRZGate(q, -2.810564611002347, 2);
  sqcRYGate(q, 1.845409959335137, 3);
  sqcRZGate(q, 1.2240117703954576, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.762310939588719, 0);
  sqcRZGate(q, -2.2172500244463356, 0);
  sqcRYGate(q, 1.1815091501924917, 1);
  sqcRZGate(q, -2.8817040410231662, 1);
  sqcRYGate(q, 3.0125480008355994, 2);
  sqcRZGate(q, -0.7402196400949212, 2);
  sqcRYGate(q, -2.6917317707575057, 3);
  sqcRZGate(q, -1.3764616558754046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9864838569176073, 0);
  sqcRZGate(q, -2.5120965243292748, 0);
  sqcRYGate(q, 2.8740200442793196, 1);
  sqcRZGate(q, -0.7433818943602191, 1);
  sqcRYGate(q, -1.1999424825655847, 2);
  sqcRZGate(q, -2.8928053892750927, 2);
  sqcRYGate(q, -1.7301226142316617, 3);
  sqcRZGate(q, 0.44582902899921867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8298714350052163, 0);
  sqcRZGate(q, -2.8072517434404687, 0);
  sqcRYGate(q, -1.7038201355855478, 1);
  sqcRZGate(q, 2.645580901002543, 1);
  sqcRYGate(q, 1.6743914188924, 2);
  sqcRZGate(q, 2.5527041951580673, 2);
  sqcRYGate(q, -2.974217643112726, 3);
  sqcRZGate(q, 2.09642211297367, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1199402045156734, 0);
  sqcRZGate(q, -0.5898946410995878, 0);
  sqcRYGate(q, -0.661567060069852, 1);
  sqcRZGate(q, -1.603903858252336, 1);
  sqcRYGate(q, 0.2904496437567673, 2);
  sqcRZGate(q, 0.8732191016796094, 2);
  sqcRYGate(q, -0.16642884963038215, 3);
  sqcRZGate(q, 0.6306430966758284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.820773176435866, 0);
  sqcRZGate(q, -2.5362690536862065, 0);
  sqcRYGate(q, 3.0229209869997997, 1);
  sqcRZGate(q, -3.104940443661972, 1);
  sqcRYGate(q, 0.046623148170119144, 2);
  sqcRZGate(q, 1.370082479408874, 2);
  sqcRYGate(q, -2.3590279034642188, 3);
  sqcRZGate(q, -1.8056449563050663, 3);

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
