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

  sqcRYGate(q, -2.5038132545312046, 0);
  sqcRYGate(q, -1.2819452490409387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17532259486716734, 0);
  sqcRYGate(q, 0.38593017110911454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.183923080625368, 0);
  sqcRYGate(q, 0.5131918568991723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.34235213330041425, 0);
  sqcRYGate(q, 1.9603084062393075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9775741016861033, 0);
  sqcRYGate(q, 2.199602272253979, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.226644173982937, 0);
  sqcRYGate(q, 2.689657660365162, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0435063070333603, 1);
  sqcRYGate(q, 1.6064165567711985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03899846026725929, 1);
  sqcRYGate(q, -0.405743754047454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4784857689832134, 1);
  sqcRYGate(q, -2.7987212819080636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8080130313483496, 1);
  sqcRYGate(q, 0.5730116201964686, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2960365949950434, 2);
  sqcRYGate(q, 2.2469014221741217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8220421697866245, 2);
  sqcRYGate(q, -0.13114793964630422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4870594582166045, 0);
  sqcRYGate(q, 1.7599547472094095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.86318907188651, 0);
  sqcRYGate(q, -2.7691560230176138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7093039415127715, 0);
  sqcRYGate(q, -2.6414665612414687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4609583881387067, 0);
  sqcRYGate(q, 0.7050917340003418, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0939976478883555, 0);
  sqcRYGate(q, 0.4121998142741636, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1523048750402225, 0);
  sqcRYGate(q, -2.241214609619175, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6370265035894348, 1);
  sqcRYGate(q, 1.1050680363543117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.115528557608605, 1);
  sqcRYGate(q, -0.44080328198216184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04478568546779815, 1);
  sqcRYGate(q, 1.4269593047042255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.13666050726542, 1);
  sqcRYGate(q, -2.7009652764250593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.498776527275616, 2);
  sqcRYGate(q, 0.8973261697646463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7093964397764142, 2);
  sqcRYGate(q, 0.18592727240265675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43804545760232205, 0);
  sqcRYGate(q, -0.6728352737118142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8479391903889155, 0);
  sqcRYGate(q, 2.552248216447063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0304658099368442, 0);
  sqcRYGate(q, -2.353159459544138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5456269936406963, 0);
  sqcRYGate(q, -2.5061342808053864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9674896220831304, 0);
  sqcRYGate(q, 1.4908080414500706, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7497279388067684, 0);
  sqcRYGate(q, 0.5252160836360743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7296667889165284, 1);
  sqcRYGate(q, 0.1711576060614582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.576622862291237, 1);
  sqcRYGate(q, -0.6078307851975984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3636794639383369, 1);
  sqcRYGate(q, 1.4093633806853403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5716801134609293, 1);
  sqcRYGate(q, -1.9342106298609956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.769756364553619, 2);
  sqcRYGate(q, 0.05614388391210045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06614478409009861, 2);
  sqcRYGate(q, -1.195920507698628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7688039827231492, 0);
  sqcRYGate(q, 0.8636595330668313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.176893016279638, 0);
  sqcRYGate(q, 2.56517097652891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.013814898901331562, 0);
  sqcRYGate(q, -1.1757613389682433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.144050292937906, 0);
  sqcRYGate(q, -2.3804830811289674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6062955008864996, 0);
  sqcRYGate(q, -1.6196796401373161, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7672145295330806, 0);
  sqcRYGate(q, -3.0970289684866152, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.47920727388879225, 1);
  sqcRYGate(q, 1.3229642429697859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0590432870402102, 1);
  sqcRYGate(q, 2.1696124793824003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8968123381433357, 1);
  sqcRYGate(q, -1.2166699440164725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7665718815721292, 1);
  sqcRYGate(q, 2.751654128185983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.663006602201727, 2);
  sqcRYGate(q, 2.1719130741680366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8636788748812343, 2);
  sqcRYGate(q, -1.9161874187203893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5649405771617726, 0);
  sqcRYGate(q, 1.5572630012718047, 1);
  sqcRYGate(q, -2.3295800936789037, 2);
  sqcRYGate(q, 2.195753256140854, 3);

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
