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

  sqcRYGate(q, 1.2931682640724298, 0);
  sqcRZGate(q, -1.6054632392893238, 0);
  sqcRYGate(q, -3.1101753665908025, 1);
  sqcRZGate(q, 1.3793355272900354, 1);
  sqcRYGate(q, 0.1903306900494962, 2);
  sqcRZGate(q, -0.44788443084857393, 2);
  sqcRYGate(q, 0.7464330906862959, 3);
  sqcRZGate(q, 0.6480268872360746, 3);
  sqcRYGate(q, 1.3732158769346123, 4);
  sqcRZGate(q, 0.481177176632774, 4);
  sqcRYGate(q, -1.943717514519844, 5);
  sqcRZGate(q, 0.0827182052571187, 5);
  sqcRYGate(q, 0.017034313445307703, 6);
  sqcRZGate(q, 1.5019004116913819, 6);
  sqcRYGate(q, -1.6811071828424358, 7);
  sqcRZGate(q, 3.0365265823442265, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.03476499817737988, 0);
  sqcRZGate(q, 1.4861853704139316, 0);
  sqcRYGate(q, -0.0006920338916467372, 1);
  sqcRZGate(q, 2.2454244049212484, 1);
  sqcRYGate(q, -2.7319974615864697, 2);
  sqcRZGate(q, -2.7899460978735746, 2);
  sqcRYGate(q, -0.6142454590826343, 3);
  sqcRZGate(q, 2.9991227155810964, 3);
  sqcRYGate(q, -0.18344381572628435, 4);
  sqcRZGate(q, 2.9689607036819727, 4);
  sqcRYGate(q, -2.0297728515855686, 5);
  sqcRZGate(q, -0.7769266740735555, 5);
  sqcRYGate(q, -1.9656583323070136, 6);
  sqcRZGate(q, -2.4915408364682086, 6);
  sqcRYGate(q, -2.9979138101621503, 7);
  sqcRZGate(q, -1.6122990939493584, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4531285407206602, 0);
  sqcRZGate(q, 0.9740978919407537, 0);
  sqcRYGate(q, -1.4404710877420674, 1);
  sqcRZGate(q, -0.9177969970836541, 1);
  sqcRYGate(q, -1.7897603818144274, 2);
  sqcRZGate(q, 0.03507728438051583, 2);
  sqcRYGate(q, 1.0250974080059831, 3);
  sqcRZGate(q, 0.8352648786971847, 3);
  sqcRYGate(q, 0.4234558716364951, 4);
  sqcRZGate(q, 1.2036688367629074, 4);
  sqcRYGate(q, -0.004879767558963799, 5);
  sqcRZGate(q, -2.4325755843326404, 5);
  sqcRYGate(q, 3.115451221256923, 6);
  sqcRZGate(q, -0.981201162422672, 6);
  sqcRYGate(q, -1.5610631289415746, 7);
  sqcRZGate(q, -1.3867784657647813, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8946090553110273, 0);
  sqcRZGate(q, -2.3626471901730066, 0);
  sqcRYGate(q, -3.140473337727111, 1);
  sqcRZGate(q, 0.37162510323111336, 1);
  sqcRYGate(q, 3.089359788132488, 2);
  sqcRZGate(q, -0.020418621330763997, 2);
  sqcRYGate(q, 1.639862088871063, 3);
  sqcRZGate(q, -0.1870814705034987, 3);
  sqcRYGate(q, -0.02849915025177558, 4);
  sqcRZGate(q, 2.249989104393123, 4);
  sqcRYGate(q, 2.2028029575272114, 5);
  sqcRZGate(q, -1.5625490840751786, 5);
  sqcRYGate(q, -1.9702669132527602, 6);
  sqcRZGate(q, -0.06239993509218337, 6);
  sqcRYGate(q, -2.925073329793096, 7);
  sqcRZGate(q, -2.0364274706311747, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.41574135144426033, 0);
  sqcRZGate(q, -1.709423869679025, 0);
  sqcRYGate(q, -0.8533058524509176, 1);
  sqcRZGate(q, -0.010867221151934281, 1);
  sqcRYGate(q, -1.5231110513925383, 2);
  sqcRZGate(q, -3.095728900173044, 2);
  sqcRYGate(q, -0.06068247564450414, 3);
  sqcRZGate(q, -2.8802678479789137, 3);
  sqcRYGate(q, 3.0897303581210234, 4);
  sqcRZGate(q, -2.9431906247083943, 4);
  sqcRYGate(q, -0.24761654926414778, 5);
  sqcRZGate(q, -2.7878803259557934, 5);
  sqcRYGate(q, -1.803561282122752, 6);
  sqcRZGate(q, 1.367320370971324, 6);
  sqcRYGate(q, 3.0778576958127712, 7);
  sqcRZGate(q, 1.2853111483298783, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.48388449034936737, 0);
  sqcRZGate(q, -0.1364905880967697, 0);
  sqcRYGate(q, 1.5499158180153678, 1);
  sqcRZGate(q, 0.41016163901410696, 1);
  sqcRYGate(q, -0.015118196379514342, 2);
  sqcRZGate(q, -0.08777148931272372, 2);
  sqcRYGate(q, 1.6242389816137255, 3);
  sqcRZGate(q, -1.8855260095773907, 3);
  sqcRYGate(q, -3.0234163819985027, 4);
  sqcRZGate(q, -2.8100661183083, 4);
  sqcRYGate(q, 0.03467632713232694, 5);
  sqcRZGate(q, -0.5466900587067085, 5);
  sqcRYGate(q, 3.0525248537402483, 6);
  sqcRZGate(q, -0.15521478258957536, 6);
  sqcRYGate(q, -0.279664971492676, 7);
  sqcRZGate(q, 1.2668960585773552, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5700681228996671, 0);
  sqcRZGate(q, -3.140408026099815, 0);
  sqcRYGate(q, 3.1373422122803034, 1);
  sqcRZGate(q, -1.1682750461978375, 1);
  sqcRYGate(q, 0.17960256027498714, 2);
  sqcRZGate(q, -1.5177183742658311, 2);
  sqcRYGate(q, 0.014323913508846561, 3);
  sqcRZGate(q, -0.2063424583254783, 3);
  sqcRYGate(q, -3.077481378269342, 4);
  sqcRZGate(q, -1.2420716754431975, 4);
  sqcRYGate(q, -0.19199545719328626, 5);
  sqcRZGate(q, 1.7228363562350146, 5);
  sqcRYGate(q, -1.4069011911682594, 6);
  sqcRZGate(q, 1.833895016307552, 6);
  sqcRYGate(q, -1.6725084414118225, 7);
  sqcRZGate(q, 1.427539503710828, 7);

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
