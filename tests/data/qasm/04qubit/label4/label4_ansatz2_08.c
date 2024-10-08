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

  sqcRYGate(q, 1.788438649948965, 0);
  sqcRZGate(q, -0.0983760637708298, 0);
  sqcRYGate(q, 1.0396257883682036, 1);
  sqcRZGate(q, -2.1999895592235967, 1);
  sqcRYGate(q, 1.9104910215795385, 2);
  sqcRZGate(q, -1.6136003095387297, 2);
  sqcRYGate(q, 1.2549450078391056, 3);
  sqcRZGate(q, 2.2379962382393472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8611325838815436, 0);
  sqcRZGate(q, 0.8322626004809033, 0);
  sqcRYGate(q, -2.3993608421365957, 1);
  sqcRZGate(q, -1.8594712961622442, 1);
  sqcRYGate(q, 2.798233972448097, 2);
  sqcRZGate(q, 2.0707568337988915, 2);
  sqcRYGate(q, 0.30240338678236833, 3);
  sqcRZGate(q, -3.0324707924361802, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.30908289044196, 0);
  sqcRZGate(q, -2.222997682454919, 0);
  sqcRYGate(q, 2.685541563510492, 1);
  sqcRZGate(q, 1.6768810981215498, 1);
  sqcRYGate(q, 0.3504101835780227, 2);
  sqcRZGate(q, 1.8291271403092924, 2);
  sqcRYGate(q, 2.5120794273919382, 3);
  sqcRZGate(q, -0.7425492096234665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9746576385809789, 0);
  sqcRZGate(q, -1.2558011879130726, 0);
  sqcRYGate(q, -0.938469051207159, 1);
  sqcRZGate(q, 1.3676251110888202, 1);
  sqcRYGate(q, -2.9047882728261514, 2);
  sqcRZGate(q, -0.9807666514357667, 2);
  sqcRYGate(q, 0.05447012281133379, 3);
  sqcRZGate(q, -0.16945358277510378, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.330003700891998, 0);
  sqcRZGate(q, -2.741137741359638, 0);
  sqcRYGate(q, 0.29601415630776984, 1);
  sqcRZGate(q, -0.5177142820348252, 1);
  sqcRYGate(q, 1.2055917691519724, 2);
  sqcRZGate(q, -0.639736144029854, 2);
  sqcRYGate(q, -2.492001769042842, 3);
  sqcRZGate(q, 1.6103850379784408, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0110934250306949, 0);
  sqcRZGate(q, 0.8504615730483165, 0);
  sqcRYGate(q, -1.9855405306695078, 1);
  sqcRZGate(q, 1.7642162994562005, 1);
  sqcRYGate(q, -2.0006217925356085, 2);
  sqcRZGate(q, -2.4404913092050537, 2);
  sqcRYGate(q, -2.65163973647556, 3);
  sqcRZGate(q, 2.4302912695581798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.057717126229230864, 0);
  sqcRZGate(q, 3.102878701741009, 0);
  sqcRYGate(q, 1.2544954922090739, 1);
  sqcRZGate(q, -1.1145745899725685, 1);
  sqcRYGate(q, -2.9857426958010227, 2);
  sqcRZGate(q, 1.3043263684138466, 2);
  sqcRYGate(q, -0.42381620952616417, 3);
  sqcRZGate(q, 0.8559192540574143, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3693321685196747, 0);
  sqcRZGate(q, 1.8737296274950284, 0);
  sqcRYGate(q, 2.0293721720273705, 1);
  sqcRZGate(q, -1.4117422064539955, 1);
  sqcRYGate(q, 0.8426520784862207, 2);
  sqcRZGate(q, -1.8554497061301092, 2);
  sqcRYGate(q, 0.5859780860928755, 3);
  sqcRZGate(q, -0.164930108188301, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.693858876716675, 0);
  sqcRZGate(q, 2.943655747143759, 0);
  sqcRYGate(q, -1.469949917466403, 1);
  sqcRZGate(q, 1.6417321202237198, 1);
  sqcRYGate(q, 0.14679222944426418, 2);
  sqcRZGate(q, -0.5436338951653107, 2);
  sqcRYGate(q, 0.28156424182086237, 3);
  sqcRZGate(q, -1.936730176745729, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4412346042703303, 0);
  sqcRZGate(q, 1.9120212765859632, 0);
  sqcRYGate(q, 0.17255191815806978, 1);
  sqcRZGate(q, -0.045208139754786984, 1);
  sqcRYGate(q, 1.9172446783995545, 2);
  sqcRZGate(q, 0.9629276425064823, 2);
  sqcRYGate(q, -3.049365812910895, 3);
  sqcRZGate(q, -2.712684135990205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5244276067833902, 0);
  sqcRZGate(q, 1.401563192381572, 0);
  sqcRYGate(q, -2.21398738866324, 1);
  sqcRZGate(q, -1.0359587953680975, 1);
  sqcRYGate(q, 2.401721888299237, 2);
  sqcRZGate(q, -2.958025100464562, 2);
  sqcRYGate(q, -1.464497588095461, 3);
  sqcRZGate(q, -0.21741142998878726, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1356849132782099, 0);
  sqcRZGate(q, 2.066740949609005, 0);
  sqcRYGate(q, 0.9117633842187381, 1);
  sqcRZGate(q, -2.2740702976816163, 1);
  sqcRYGate(q, -0.2381644253965314, 2);
  sqcRZGate(q, -2.5796609817534284, 2);
  sqcRYGate(q, -0.5550630681206614, 3);
  sqcRZGate(q, -1.2012802652317704, 3);

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
