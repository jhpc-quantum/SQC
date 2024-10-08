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

  sqcRYGate(q, 2.0617461475396737, 0);
  sqcRYGate(q, 0.05406062704164949, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6540735235712013, 0);
  sqcRYGate(q, 1.8482874326968888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2595974889845689, 2);
  sqcRYGate(q, -1.0205888827099416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.459965361011194, 2);
  sqcRYGate(q, 2.389405489212672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.075954611899495, 4);
  sqcRYGate(q, -1.0492523017751145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.502180098940987, 4);
  sqcRYGate(q, 2.0581547545916674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6434064373700148, 6);
  sqcRYGate(q, -2.238367958695619, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6589731897760274, 6);
  sqcRYGate(q, -1.078288173472136, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.316718111541655, 8);
  sqcRYGate(q, -1.6632685099621511, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.397457036627048, 8);
  sqcRYGate(q, -0.09458157329162109, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9256182990924295, 10);
  sqcRYGate(q, -2.727397626711105, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.34540368233011737, 10);
  sqcRYGate(q, -0.3025784011499466, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.21367906762784034, 0);
  sqcRYGate(q, -1.633934691234273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2320894714124755, 0);
  sqcRYGate(q, 2.0293885863087073, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3822514545671032, 2);
  sqcRYGate(q, -0.3275518411833165, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.043119937520899, 2);
  sqcRYGate(q, -0.6735974237690058, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.382024334622839, 4);
  sqcRYGate(q, 1.5107281507813406, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.83485898021032, 4);
  sqcRYGate(q, -0.3812124401047539, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.05184406814172546, 6);
  sqcRYGate(q, -0.028158856738790317, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.7505343493239199, 6);
  sqcRYGate(q, 3.132929930427846, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.133671765365902, 8);
  sqcRYGate(q, -2.699084247781541, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.111739818428355, 8);
  sqcRYGate(q, 1.7847846592204513, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.07041643280300869, 1);
  sqcRYGate(q, -1.7666113567219723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5527509167986189, 1);
  sqcRYGate(q, 2.3060761874799476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.32600390305408666, 3);
  sqcRYGate(q, 0.20011062346448283, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.76193684409398, 3);
  sqcRYGate(q, 0.5641516265744544, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.039027276541556, 5);
  sqcRYGate(q, -1.2140853459412257, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5121710148679881, 5);
  sqcRYGate(q, 0.5932081412279233, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1258305837869966, 7);
  sqcRYGate(q, 3.082231879497682, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.9347022856268228, 7);
  sqcRYGate(q, 3.136804389855393, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.5596338700370262, 9);
  sqcRYGate(q, -2.5496962527086575, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.8206375104491355, 9);
  sqcRYGate(q, 2.226127705036332, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.025197022208556817, 0);
  sqcRYGate(q, -1.1516153135195983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8531229880507931, 0);
  sqcRYGate(q, 0.9800654435224513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.339148862025253, 2);
  sqcRYGate(q, 2.310912226637248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.386810302410547, 2);
  sqcRYGate(q, -2.129614560916796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.443883177301555, 4);
  sqcRYGate(q, 2.5594406347338707, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.009722595016857, 4);
  sqcRYGate(q, -1.7730858745506237, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5570880420343052, 6);
  sqcRYGate(q, 2.7392920149610087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.181571084936988, 6);
  sqcRYGate(q, -2.086494321414661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5662339453587046, 8);
  sqcRYGate(q, -1.8068338911923227, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5817434745221395, 8);
  sqcRYGate(q, -0.0825959662109188, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3238354131326564, 10);
  sqcRYGate(q, 1.1904009849747434, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4346023926843916, 10);
  sqcRYGate(q, -2.4110914720047063, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8026567068537607, 0);
  sqcRYGate(q, -0.45304665355158313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8007780764579804, 0);
  sqcRYGate(q, 2.8000084499418794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7849357018678087, 2);
  sqcRYGate(q, -1.1484847918379895, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.24698457642298433, 2);
  sqcRYGate(q, 2.8801831099131325, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4999342753576706, 4);
  sqcRYGate(q, -1.6653567751151153, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5320186358282264, 4);
  sqcRYGate(q, 1.94351594179878, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6243928132762915, 6);
  sqcRYGate(q, -2.62941214077049, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1169495758662347, 6);
  sqcRYGate(q, -3.141439862567495, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.7142447913452776, 8);
  sqcRYGate(q, 1.4014749263877317, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.9839961835047484, 8);
  sqcRYGate(q, 2.5637339545197295, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.600864059168246, 1);
  sqcRYGate(q, -1.3072788405824565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5365942306660727, 1);
  sqcRYGate(q, -2.735574779127157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4098164080674653, 3);
  sqcRYGate(q, 0.3600695290597704, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3074198421396344, 3);
  sqcRYGate(q, 0.3477453523043854, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4676917978136645, 5);
  sqcRYGate(q, 2.3946258207382165, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9408189178755704, 5);
  sqcRYGate(q, -0.6452682228503516, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5353674418875434, 7);
  sqcRYGate(q, -0.17468859217442992, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.0545917339734805, 7);
  sqcRYGate(q, -1.9329152132062308, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.9145879556553655, 9);
  sqcRYGate(q, -2.145757520451254, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.9208115214606867, 9);
  sqcRYGate(q, 1.6285307660694106, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.5047171739881424, 0);
  sqcRYGate(q, -1.349818663764893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.202834156043562, 0);
  sqcRYGate(q, 1.9250129592346141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9810925845815, 2);
  sqcRYGate(q, -2.5461662810961743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8367329511908193, 2);
  sqcRYGate(q, 3.094121256131352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0237603959434605, 4);
  sqcRYGate(q, -2.4145137999395914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3509774212983592, 4);
  sqcRYGate(q, 2.3243687875735604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.125203426561793, 6);
  sqcRYGate(q, -1.2753981108691255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.027052111705747173, 6);
  sqcRYGate(q, -3.140821133279211, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.676042921563444, 8);
  sqcRYGate(q, -1.5167065198970777, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9370474552556876, 8);
  sqcRYGate(q, 1.422678655087739, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8229084115451889, 10);
  sqcRYGate(q, -1.411017910319606, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.650878728272601, 10);
  sqcRYGate(q, -2.872480327814007, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7389518940110285, 0);
  sqcRYGate(q, -0.8806596302918139, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8229002073811034, 0);
  sqcRYGate(q, 1.8670129536427154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.757387169129571, 2);
  sqcRYGate(q, 2.062957085498253, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.187994515667806, 2);
  sqcRYGate(q, -2.7008644961093013, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.096766892511206, 4);
  sqcRYGate(q, 2.437167593226954, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8257563144470152, 4);
  sqcRYGate(q, -2.216166607664359, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.179388445504454, 6);
  sqcRYGate(q, -1.3234847398077365, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0015827319549890362, 6);
  sqcRYGate(q, -3.1315434951779593, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.058018117012124, 8);
  sqcRYGate(q, -2.3196606665082045, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1375500673883345, 8);
  sqcRYGate(q, -0.2844969069269228, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.0724530668812902, 1);
  sqcRYGate(q, 0.9774879522324477, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.29061468822871195, 1);
  sqcRYGate(q, -1.7960744238804551, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.935112807253361, 3);
  sqcRYGate(q, 0.5300179597577559, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.010449463483986, 3);
  sqcRYGate(q, 0.2280051395722129, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5867770894406492, 5);
  sqcRYGate(q, -0.3344389302373061, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.586466626943543, 5);
  sqcRYGate(q, 0.008660047941996927, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8935564431522172, 7);
  sqcRYGate(q, 3.069088751752005, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.7180757591718994, 7);
  sqcRYGate(q, -1.5121892867134843, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.3755697014373744, 9);
  sqcRYGate(q, -1.590937090784195, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5007768867006783, 9);
  sqcRYGate(q, 1.3397990331813165, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.8147591478623035, 0);
  sqcRYGate(q, -1.2386176017383255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02705935288489414, 0);
  sqcRYGate(q, 2.5802136530932054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4886101199130986, 2);
  sqcRYGate(q, 1.0387440884997021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.828641915309485, 2);
  sqcRYGate(q, -0.825650873235281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.48040442115696, 4);
  sqcRYGate(q, -0.01685565920030463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.09079771872016, 4);
  sqcRYGate(q, -1.2450111227369334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0024660862581127, 6);
  sqcRYGate(q, -3.001373109622652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0012108201513366852, 6);
  sqcRYGate(q, 0.0016206924687214297, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0172091706307447, 8);
  sqcRYGate(q, 0.010138304304725843, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.014007465452821, 8);
  sqcRYGate(q, 2.143434076566369, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.862301236603226, 10);
  sqcRYGate(q, -2.9482824825338874, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9363387460687242, 10);
  sqcRYGate(q, 2.362098859437721, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.547097305341809, 0);
  sqcRYGate(q, -0.21120302394327606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4370015127062168, 0);
  sqcRYGate(q, 2.471470224030304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4839165953485112, 2);
  sqcRYGate(q, 0.12074090632773427, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.20845952909161358, 2);
  sqcRYGate(q, 2.0675676112634975, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4594517196121677, 4);
  sqcRYGate(q, 3.0563358183243072, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4134175917399276, 4);
  sqcRYGate(q, 1.0724829476893134, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8164194976847536, 6);
  sqcRYGate(q, -0.025071185307487635, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.139609884282158, 6);
  sqcRYGate(q, 0.37372165976458316, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9593484317780732, 8);
  sqcRYGate(q, -1.7995570117629043, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.4694720137072377, 8);
  sqcRYGate(q, 2.1145304194752477, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5528284356261413, 1);
  sqcRYGate(q, -3.0178640821551332, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1204575392960558, 1);
  sqcRYGate(q, 1.9854366870402569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10919254631139809, 3);
  sqcRYGate(q, 0.4124088666275032, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.20958658901639193, 3);
  sqcRYGate(q, 0.5233860558235701, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9732628941841246, 5);
  sqcRYGate(q, 0.9128035950837176, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1299483940989465, 5);
  sqcRYGate(q, 0.01550467714633541, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1086977532516613, 7);
  sqcRYGate(q, 1.8269155030700295, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.3927628459425465, 7);
  sqcRYGate(q, -2.3372232886211117, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.20023322182396724, 9);
  sqcRYGate(q, 2.7831514543851203, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.8059889088543086, 9);
  sqcRYGate(q, 0.2728126083420097, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.2759876453343928, 0);
  sqcRYGate(q, 2.8812579009396897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6331156622798758, 0);
  sqcRYGate(q, 0.16113030157651043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8180711428776726, 2);
  sqcRYGate(q, -2.1027196213268313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3969042765456288, 2);
  sqcRYGate(q, -0.40693459329607135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7642481440928175, 4);
  sqcRYGate(q, 1.29227368537434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.04873284455302265, 4);
  sqcRYGate(q, 1.6189911690896523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5489917941984288, 6);
  sqcRYGate(q, 2.4995401468319796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1406233373815184, 6);
  sqcRYGate(q, 1.5749591008164265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8427740252732359, 8);
  sqcRYGate(q, -1.8388729047887367, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1877013287424782, 8);
  sqcRYGate(q, -0.24421966420529703, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.20605120722891, 10);
  sqcRYGate(q, 0.5588566077031425, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9354834609793112, 10);
  sqcRYGate(q, -1.4465591909047224, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7153679578277369, 0);
  sqcRYGate(q, -1.6319129349506174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.304637489806221, 0);
  sqcRYGate(q, -1.8300106937217138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4341998513227405, 2);
  sqcRYGate(q, -2.4852361024643352, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.732221380786022, 2);
  sqcRYGate(q, -1.3572153073054558, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.791052623307589, 4);
  sqcRYGate(q, -2.9455425099810326, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.125626522112365, 4);
  sqcRYGate(q, 0.01364751344865172, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.664201393434181, 6);
  sqcRYGate(q, -2.4677818414784434, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5784552866011516, 6);
  sqcRYGate(q, -3.13537436305858, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3598129882270387, 8);
  sqcRYGate(q, -2.556720747528529, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.9794620414409456, 8);
  sqcRYGate(q, 2.790282016682677, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.2817190407998793, 1);
  sqcRYGate(q, -2.459095295817464, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7116991537731954, 1);
  sqcRYGate(q, 0.9816400938742023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3831099466489627, 3);
  sqcRYGate(q, -2.0850581111700093, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0315845727342086, 3);
  sqcRYGate(q, 0.33579164453788124, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0010826248140876, 5);
  sqcRYGate(q, 1.7401286615384892, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1388624470582807, 5);
  sqcRYGate(q, 2.3972896338246032, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.207475169808635, 7);
  sqcRYGate(q, -0.6955979536780877, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.7259289950363794, 7);
  sqcRYGate(q, -3.1337597391656016, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.8964542994799505, 9);
  sqcRYGate(q, 2.5572856118651424, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.2614187723573605, 9);
  sqcRYGate(q, 2.0536812504944653, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0385846963945684, 0);
  sqcRYGate(q, 0.7723005783294515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.652601673241658, 0);
  sqcRYGate(q, -0.7414544895522521, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07498398299178897, 2);
  sqcRYGate(q, -2.349952269182867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3487990899116515, 2);
  sqcRYGate(q, -1.90247688825192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9349166379060745, 4);
  sqcRYGate(q, -0.17191957228646992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08307209136936715, 4);
  sqcRYGate(q, 0.07176306807084032, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.44431063211597005, 6);
  sqcRYGate(q, -2.745956073280626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.010939781557013611, 6);
  sqcRYGate(q, 3.123352601734497, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6892558284925299, 8);
  sqcRYGate(q, -1.812574301572433, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0479422383169843, 8);
  sqcRYGate(q, -1.9664934247622339, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8660142652815583, 10);
  sqcRYGate(q, -0.4573670999452334, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1144999668913804, 10);
  sqcRYGate(q, -1.6912410595630538, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4499478778928103, 0);
  sqcRYGate(q, -3.0845413165444673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7138121131324056, 0);
  sqcRYGate(q, -0.8899606124891353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9467727711489555, 2);
  sqcRYGate(q, 1.885916878007369, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.16244627198607198, 2);
  sqcRYGate(q, -0.16802028642159073, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.171003740393046, 4);
  sqcRYGate(q, -2.9919663379793864, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.99564456597806, 4);
  sqcRYGate(q, 0.0009432348965379158, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5337395093280062, 6);
  sqcRYGate(q, 0.7063989773214133, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.17919448853220404, 6);
  sqcRYGate(q, 3.141472485002768, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.039261563179199, 8);
  sqcRYGate(q, -1.4547208507194567, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.028118711726544, 8);
  sqcRYGate(q, -2.329369578136602, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.2872667274111338, 1);
  sqcRYGate(q, -1.3271437927609453, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.30266722036434585, 1);
  sqcRYGate(q, -0.44619153571339976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3652293594634761, 3);
  sqcRYGate(q, 1.7291969783626957, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.1503482240545928, 3);
  sqcRYGate(q, -0.005561640414391653, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8772350011748298, 5);
  sqcRYGate(q, -2.334501289695023, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.135210032489363, 5);
  sqcRYGate(q, -2.842759354363552, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.45144297264590366, 7);
  sqcRYGate(q, -0.7304706440330136, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0360641629138363, 7);
  sqcRYGate(q, 3.1402517520238655, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.6617477721543877, 9);
  sqcRYGate(q, -2.219968001306012, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.415291780549671, 9);
  sqcRYGate(q, 1.61918010183584, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.5162105801314447, 0);
  sqcRYGate(q, -1.0007133510656487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22931081553736554, 0);
  sqcRYGate(q, -0.3543742745474423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7702646196731626, 2);
  sqcRYGate(q, 2.4351120079479114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3837880253951966, 2);
  sqcRYGate(q, 0.5305843693424599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8517588541101215, 4);
  sqcRYGate(q, 0.821283944465308, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.010674229493706, 4);
  sqcRYGate(q, 0.05601068580000506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.021027838854636, 6);
  sqcRYGate(q, 2.0046427657777093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1319457073951167, 6);
  sqcRYGate(q, -1.5701139170582905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4389550586344244, 8);
  sqcRYGate(q, -2.7833697218788784, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1134131894484305, 8);
  sqcRYGate(q, -2.209683374119413, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.42116107343854486, 10);
  sqcRYGate(q, 1.8476372783232167, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3182206879222784, 10);
  sqcRYGate(q, -1.4615982463149884, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.655254373755672, 0);
  sqcRYGate(q, -2.7205346896989577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4242072441684517, 0);
  sqcRYGate(q, 1.0680854313965462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0244807476082345, 2);
  sqcRYGate(q, 3.02407471139581, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8239282937920427, 2);
  sqcRYGate(q, -0.8238349179320288, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.260093532352994, 4);
  sqcRYGate(q, -2.6079586581584784, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.34515538759518705, 4);
  sqcRYGate(q, -3.1277865223662857, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0952884232104116, 6);
  sqcRYGate(q, -2.7249458463415643, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.0010234530370807349, 6);
  sqcRYGate(q, 2.925084204920212, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.7955160864418622, 8);
  sqcRYGate(q, -1.1496654961347297, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.0214172181517274, 8);
  sqcRYGate(q, -1.9135901577192176, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.9615760162583182, 1);
  sqcRYGate(q, -0.4775110379142037, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7556763169140326, 1);
  sqcRYGate(q, 1.3997039548610282, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.585367704324361, 3);
  sqcRYGate(q, -0.4832652642346576, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.056986398827837625, 3);
  sqcRYGate(q, -3.126685714417232, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9276830814879197, 5);
  sqcRYGate(q, 1.710984197139714, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9799318589161256, 5);
  sqcRYGate(q, -2.407983582058992, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5974324636976853, 7);
  sqcRYGate(q, 1.0053804136031248, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.124478101818425, 7);
  sqcRYGate(q, 2.5412166059406625, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.0535286121422391, 9);
  sqcRYGate(q, 1.0236775900728459, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.3396441132675387, 9);
  sqcRYGate(q, 3.1250871118317574, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.9104854056494225, 0);
  sqcRYGate(q, -2.097235805965089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.386561797191381, 0);
  sqcRYGate(q, 0.5013268884110305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6252641078736776, 2);
  sqcRYGate(q, -0.8546106727993061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7818280745334459, 2);
  sqcRYGate(q, 2.230657385864915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1850198919644976, 4);
  sqcRYGate(q, -1.9377670625914405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.141286000089069, 4);
  sqcRYGate(q, -0.001027623235423706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.007898604945071474, 6);
  sqcRYGate(q, -1.3590154947155786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.00038701809424868117, 6);
  sqcRYGate(q, -1.562623409787271, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9064313062664562, 8);
  sqcRYGate(q, -0.05789971310271569, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0008081692649113107, 8);
  sqcRYGate(q, 1.1198879203689138, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.013011822743455, 10);
  sqcRYGate(q, -1.8473411113069778, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0191083977567965, 10);
  sqcRYGate(q, 1.9321480513305955, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6237928826502553, 0);
  sqcRYGate(q, 1.4026739001486455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3656182021528809, 0);
  sqcRYGate(q, 1.759527481133053, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2651184037485015, 2);
  sqcRYGate(q, 1.0600188749074484, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.14328470367266732, 2);
  sqcRYGate(q, 3.0425824588101835, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.622589833099483, 4);
  sqcRYGate(q, -2.6913787323689595, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.034584645306126593, 4);
  sqcRYGate(q, 3.1346675258665533, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6801374274912644, 6);
  sqcRYGate(q, -2.9158882461876336, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5730167854224146, 6);
  sqcRYGate(q, -3.047136836062452, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5736763091445989, 8);
  sqcRYGate(q, -1.5432252380712912, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5707011121302186, 8);
  sqcRYGate(q, 1.6894698854763432, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.450863482683691, 1);
  sqcRYGate(q, -0.9889764978450506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8114097265370042, 1);
  sqcRYGate(q, 1.8564355370061512, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8380787133055911, 3);
  sqcRYGate(q, -0.0030222746073144237, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.020931967111073035, 3);
  sqcRYGate(q, 0.006474140063245315, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7268015024220702, 5);
  sqcRYGate(q, -1.7824261384173439, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5643070350383121, 5);
  sqcRYGate(q, -1.5226180689721032, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.816378774398319, 7);
  sqcRYGate(q, -0.3995271336071369, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5836628882100443, 7);
  sqcRYGate(q, 3.122543827263269, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5258608011839114, 9);
  sqcRYGate(q, 1.1771011124417714, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6525437872916866, 9);
  sqcRYGate(q, -1.489182135759422, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.34986698898367313, 0);
  sqcRYGate(q, 2.4548595000356066, 1);
  sqcRYGate(q, -2.080584361443772, 2);
  sqcRYGate(q, 2.853782231182996, 3);
  sqcRYGate(q, -1.2926674127766964, 4);
  sqcRYGate(q, -1.5773485651537005, 5);
  sqcRYGate(q, -1.5827836709202943, 6);
  sqcRYGate(q, 1.3246567409955607, 7);
  sqcRYGate(q, -1.572837363957098, 8);
  sqcRYGate(q, 1.5676897083651395, 9);
  sqcRYGate(q, 1.5703835255789107, 10);
  sqcRYGate(q, 0.01949387085703247, 11);

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
