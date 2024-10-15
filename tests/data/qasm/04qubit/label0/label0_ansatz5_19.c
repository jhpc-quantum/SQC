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

  sqcRYGate(q, -1.4444148624538726, 0);
  sqcRYGate(q, 1.1502525085394693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09734791956580846, 0);
  sqcRYGate(q, 0.18986223346393008, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5655147547074995, 2);
  sqcRYGate(q, 1.2496174638407869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9539512109504091, 2);
  sqcRYGate(q, 2.4060999585254814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0391817263939616, 1);
  sqcRYGate(q, 0.9160411239156245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6332811907101514, 1);
  sqcRYGate(q, -2.7053769697978973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.34537022416721946, 0);
  sqcRYGate(q, 2.3856391187151513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8180946764868066, 0);
  sqcRYGate(q, -2.0493951908761368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9153483836275558, 2);
  sqcRYGate(q, -0.36545732011467746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.295500172000006, 2);
  sqcRYGate(q, 1.6333724943292625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4763922530540106, 1);
  sqcRYGate(q, -0.10409141921056247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.547778405381316, 1);
  sqcRYGate(q, -1.9637329761477593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1778776598456426, 0);
  sqcRYGate(q, 0.8035918326893428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.231131627454313, 0);
  sqcRYGate(q, -1.13147175299126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3936522600106942, 2);
  sqcRYGate(q, -0.021285278033734877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9850671186576192, 2);
  sqcRYGate(q, 0.4424432826104778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7490710290606888, 1);
  sqcRYGate(q, 2.008521489200378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7033757529853446, 1);
  sqcRYGate(q, 0.31126819367805325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7175354762464028, 0);
  sqcRYGate(q, 2.243233458831089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0082056285935943, 0);
  sqcRYGate(q, -2.9770930478597823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01912191789092971, 2);
  sqcRYGate(q, -1.0722714985310642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.340933563791034, 2);
  sqcRYGate(q, -2.9327485411820735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1012175768542036, 1);
  sqcRYGate(q, 2.5427906240889007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5989762103827545, 1);
  sqcRYGate(q, -2.9309021291139157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6021949543867562, 0);
  sqcRYGate(q, -2.2636220323545326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6333208122355352, 0);
  sqcRYGate(q, -0.24997389075774884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0852949815868964, 2);
  sqcRYGate(q, -1.1009827377533359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5864786408751645, 2);
  sqcRYGate(q, 0.3176885127303681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9209976095230092, 1);
  sqcRYGate(q, 0.27737360263205857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8313924979526772, 1);
  sqcRYGate(q, -1.9855745042786168, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2964300314638035, 0);
  sqcRYGate(q, -1.297191408256143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7207781165155662, 0);
  sqcRYGate(q, -2.4481126392817867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5786661844320694, 2);
  sqcRYGate(q, -1.9851083543699732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0446226093089024, 2);
  sqcRYGate(q, 0.7078026884780324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3595008947972023, 1);
  sqcRYGate(q, -2.9885320610730775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8503194652653382, 1);
  sqcRYGate(q, 3.1414016576322945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0045367973947403, 0);
  sqcRYGate(q, -1.9928442349988629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15612665243467116, 0);
  sqcRYGate(q, 1.8883385899161882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6057178394849916, 2);
  sqcRYGate(q, -2.480408889107999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.711145019397906, 2);
  sqcRYGate(q, -1.0805813177067876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09751683120282292, 1);
  sqcRYGate(q, 2.6643894184678403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.020153120913976, 1);
  sqcRYGate(q, -0.5550560255281356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8543028998708384, 0);
  sqcRYGate(q, 2.9434559972889742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8158111206126791, 0);
  sqcRYGate(q, 1.417768791744069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9790009393596382, 2);
  sqcRYGate(q, 2.4462331708494296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3934021142428472, 2);
  sqcRYGate(q, 2.826454661602021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.802004632297284, 1);
  sqcRYGate(q, -2.599022074582883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.974571084402335, 1);
  sqcRYGate(q, 1.9737205227165329, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.384195485870842, 0);
  sqcRYGate(q, 2.606423053647641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.96979406164027, 0);
  sqcRYGate(q, 1.6471924960141626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0292746369683625, 2);
  sqcRYGate(q, -2.5123590419701483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0661434583792113, 2);
  sqcRYGate(q, 2.5736575737514253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3909530306845523, 1);
  sqcRYGate(q, -2.7443785132376277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9904884844731021, 1);
  sqcRYGate(q, 2.2020956244961147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.349360082233522, 0);
  sqcRYGate(q, 0.8815210494488745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8002060731054408, 0);
  sqcRYGate(q, 3.039985846558427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5648381701147875, 2);
  sqcRYGate(q, 1.7595817937380698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9845354546086043, 2);
  sqcRYGate(q, -0.7674767572055146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4134489505636574, 1);
  sqcRYGate(q, 0.9869196752398954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.652070713849095, 1);
  sqcRYGate(q, 0.453173778434051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4560478786459278, 0);
  sqcRYGate(q, -1.3702907138699165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9553875730029384, 0);
  sqcRYGate(q, -2.3637183381246616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8264246953865149, 2);
  sqcRYGate(q, -1.9516829808123615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6502247540053803, 2);
  sqcRYGate(q, -0.8445870423943315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.707560286361841, 1);
  sqcRYGate(q, 1.389920989287963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.707483272453194, 1);
  sqcRYGate(q, -2.7215875620650345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8915408866097616, 0);
  sqcRYGate(q, -1.8433931372562897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1801669875100622, 0);
  sqcRYGate(q, -1.7671124742989086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.861306636181836, 2);
  sqcRYGate(q, 1.8931449064873878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0717900843749883, 2);
  sqcRYGate(q, 1.8786993315277536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15797947705776805, 1);
  sqcRYGate(q, 1.0732507248402554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8572698913723156, 1);
  sqcRYGate(q, 0.8534461112255992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1202417828379447, 0);
  sqcRYGate(q, -2.3314757986768515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6350711361432406, 0);
  sqcRYGate(q, 0.7148136694334069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8166305931624174, 2);
  sqcRYGate(q, -1.9758052029573099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8629843593098485, 2);
  sqcRYGate(q, 0.30722129996077907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.141809910638208, 1);
  sqcRYGate(q, -2.5695743233960346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4132593457288964, 1);
  sqcRYGate(q, -2.7956336237445094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1795190789982515, 0);
  sqcRYGate(q, 1.4923555647065214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48372391849632884, 0);
  sqcRYGate(q, 0.7322262286438228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9047501797326563, 2);
  sqcRYGate(q, 0.8701113138683896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4286678719797257, 2);
  sqcRYGate(q, -2.5834383705447745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.50185802935339, 1);
  sqcRYGate(q, -3.1174412140035734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06437615575327327, 1);
  sqcRYGate(q, 1.7260531059273738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.55430745403061, 0);
  sqcRYGate(q, 0.9779646327100684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.006587932942648257, 0);
  sqcRYGate(q, 3.1347391366356923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6928101146076309, 2);
  sqcRYGate(q, -2.6400469652478957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.737042991593595, 2);
  sqcRYGate(q, 2.9701585375220594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5365034308439132, 1);
  sqcRYGate(q, -2.070848883952965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0479734551383686, 1);
  sqcRYGate(q, -0.013448678235618261, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0733480158954625, 0);
  sqcRYGate(q, -2.6292231069746226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0794394025223613, 0);
  sqcRYGate(q, -2.8078332582987304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5220125665390594, 2);
  sqcRYGate(q, 2.585324443989955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3877596958150926, 2);
  sqcRYGate(q, -0.45901109969357395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21100675903426325, 1);
  sqcRYGate(q, 0.5791349163973871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.024599787442968, 1);
  sqcRYGate(q, 1.8757198088305957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8209167822825824, 0);
  sqcRYGate(q, 1.9242881855253513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1858131969017793, 0);
  sqcRYGate(q, -1.4860396678458834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3074358516514728, 2);
  sqcRYGate(q, -1.0394869260282553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9955000079426415, 2);
  sqcRYGate(q, -2.4507181481354054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1694551400861375, 1);
  sqcRYGate(q, -1.4050026918596996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3234716188044224, 1);
  sqcRYGate(q, 0.09286835100033564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0811601581663464, 0);
  sqcRYGate(q, -0.026243746916707444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8910985070664452, 0);
  sqcRYGate(q, 0.9186598829525874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.868713417106421, 2);
  sqcRYGate(q, -0.22293642274966263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5828687661005625, 2);
  sqcRYGate(q, -1.0119676593403177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.233398725025535, 1);
  sqcRYGate(q, -0.9437387962238013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0524752700252442, 1);
  sqcRYGate(q, 1.4155275630094675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3515752942924619, 0);
  sqcRYGate(q, 2.8614106218679396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12524336615142384, 0);
  sqcRYGate(q, 0.11592564900450064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5361213753678629, 2);
  sqcRYGate(q, 1.6613806276883334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2603347278990968, 2);
  sqcRYGate(q, 1.026354319706563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25751506269625235, 1);
  sqcRYGate(q, -2.361635187276881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0440234150311394, 1);
  sqcRYGate(q, -2.8905815983680756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.911321850762682, 0);
  sqcRYGate(q, 0.9071317975495087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1258667254915573, 0);
  sqcRYGate(q, -2.040093066968393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2874592249909621, 2);
  sqcRYGate(q, -2.2060358024777997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.033323273253475, 2);
  sqcRYGate(q, -0.5747924289068376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.006543264708087193, 1);
  sqcRYGate(q, 2.7667268264477594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.558952245571208, 1);
  sqcRYGate(q, 1.4537727493486294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.028462211290155, 0);
  sqcRYGate(q, 0.3744175102511589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.911025254614629, 0);
  sqcRYGate(q, -0.43743176051547383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21233793155501957, 2);
  sqcRYGate(q, -0.17874469138884513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.976645397296931, 2);
  sqcRYGate(q, -2.512008839092832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5944435649495836, 1);
  sqcRYGate(q, -1.1582422470825477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9242179297105837, 1);
  sqcRYGate(q, 1.2957496966509074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4164310587419497, 0);
  sqcRYGate(q, 2.6824923632301387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5071454957840489, 0);
  sqcRYGate(q, 1.6538064600862814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2732288631041762, 2);
  sqcRYGate(q, -0.0829705965671037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6526878834122849, 2);
  sqcRYGate(q, -0.6981562196089108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.233300363519013, 1);
  sqcRYGate(q, -0.7466957119421958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7265392789125766, 1);
  sqcRYGate(q, 0.5901789974815186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7859186743810661, 0);
  sqcRYGate(q, 0.26443782683336975, 1);
  sqcRYGate(q, -1.6355756207645897, 2);
  sqcRYGate(q, -2.592484876232532, 3);

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
