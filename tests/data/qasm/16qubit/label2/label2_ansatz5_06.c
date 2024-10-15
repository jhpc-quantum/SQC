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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.1851404125350351, 0);
  sqcRYGate(q, -2.1395573341915997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9003158178456792, 0);
  sqcRYGate(q, -0.21212718488235466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.012639706366315728, 2);
  sqcRYGate(q, -2.7477286104143346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8837409422897746, 2);
  sqcRYGate(q, -1.8428794690785972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.593017811586102, 4);
  sqcRYGate(q, -0.06713465502624594, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0550625526372985, 4);
  sqcRYGate(q, 2.975506436023548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.014332587618289757, 6);
  sqcRYGate(q, 2.0848459396261747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0229447996151735, 6);
  sqcRYGate(q, 2.030681760635143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.11674910415637, 8);
  sqcRYGate(q, -0.07147725157898499, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5679146321504736, 8);
  sqcRYGate(q, 1.4766342250134201, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8968428312975467, 10);
  sqcRYGate(q, -2.9769932556778786, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8110758211512217, 10);
  sqcRYGate(q, 1.2585225998109457, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2450576726856433, 12);
  sqcRYGate(q, -2.323155232909483, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.11018225981435315, 12);
  sqcRYGate(q, 0.09302481649065175, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.09536616818293306, 14);
  sqcRYGate(q, 1.9280137587734476, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.6271602270159096, 14);
  sqcRYGate(q, -0.44243045403813874, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.093479999567109, 1);
  sqcRYGate(q, -2.861482688303929, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.507954655943462, 1);
  sqcRYGate(q, -1.4182953165480177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6480947373353247, 3);
  sqcRYGate(q, -1.0314855283431532, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5637098964585814, 3);
  sqcRYGate(q, -0.011990398651757616, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2001635725749802, 5);
  sqcRYGate(q, -1.7264041377270074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.980346463477673, 5);
  sqcRYGate(q, 1.814941710641512, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14245959873849223, 7);
  sqcRYGate(q, 2.7468282402771558, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.2402675125906841, 7);
  sqcRYGate(q, 0.03121101205318683, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9155869132756036, 9);
  sqcRYGate(q, 2.9297442876692874, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.24386134098985393, 9);
  sqcRYGate(q, -0.16608442978275542, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8979173906461109, 11);
  sqcRYGate(q, 1.3315433363395903, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1021675547406704, 11);
  sqcRYGate(q, -0.07090947536734332, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6353217047896595, 13);
  sqcRYGate(q, -2.135389366560429, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.2288581690477205, 13);
  sqcRYGate(q, -1.257751983497273, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2587974281134744, 0);
  sqcRYGate(q, -0.1722643785175677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.813983590035687, 0);
  sqcRYGate(q, -2.566168080194615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2442555652360605, 2);
  sqcRYGate(q, -2.600182476951309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.01500382436812742, 2);
  sqcRYGate(q, -3.107843519237021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5497748102323028, 4);
  sqcRYGate(q, -1.12303878718585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.005503584371021977, 4);
  sqcRYGate(q, 0.34833487125925633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7327551370742342, 6);
  sqcRYGate(q, -1.7232303599660475, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.647733994605743, 6);
  sqcRYGate(q, -0.8065513045505517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5729934333682376, 8);
  sqcRYGate(q, -3.1289987714699468, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2833382911247478, 8);
  sqcRYGate(q, -0.6101338002331594, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2964583573630026, 10);
  sqcRYGate(q, -2.1689372423470568, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1083299532621496, 10);
  sqcRYGate(q, -0.5283996654687142, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6581804646305645, 12);
  sqcRYGate(q, -2.905113661950841, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.4703026591746653, 12);
  sqcRYGate(q, 0.6783616884308971, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.1224961515182697, 14);
  sqcRYGate(q, -3.055100303560828, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.795167224393558, 14);
  sqcRYGate(q, -0.4090970512543146, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2383977403118411, 1);
  sqcRYGate(q, -0.4675777593143566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5268613920212495, 1);
  sqcRYGate(q, -2.3139872088037676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.650570449470543, 3);
  sqcRYGate(q, 1.737427843238283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.119235271603021, 3);
  sqcRYGate(q, -0.009539696311176016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6049134315896474, 5);
  sqcRYGate(q, -2.8650861160693255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.048421664935014874, 5);
  sqcRYGate(q, -2.725068170039383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6919109017701909, 7);
  sqcRYGate(q, -0.8465567369769209, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.16737022442358587, 7);
  sqcRYGate(q, 3.117804742364046, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1283182734478325, 9);
  sqcRYGate(q, 1.307558771235415, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.14055133754807336, 9);
  sqcRYGate(q, -3.1114930372129437, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.137212647431582, 11);
  sqcRYGate(q, 2.871112491224243, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6070863689472796, 11);
  sqcRYGate(q, 0.06626530461640165, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.4134488982805045, 13);
  sqcRYGate(q, 1.6395619803881507, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3778600681691353, 13);
  sqcRYGate(q, -0.023066778334424498, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.5986981629407113, 0);
  sqcRYGate(q, 0.15438491259079257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2798694458764057, 0);
  sqcRYGate(q, 0.29013080735401875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.292951031994391, 2);
  sqcRYGate(q, 0.9279927239978312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8645668319740425, 2);
  sqcRYGate(q, -0.09463347834137892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8289377331772136, 4);
  sqcRYGate(q, -0.8620638259309329, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.22970755927786, 4);
  sqcRYGate(q, 2.5739186819493503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.580772623119403, 6);
  sqcRYGate(q, 2.1128023653710652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2152364449811954, 6);
  sqcRYGate(q, -0.9098975596401981, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1403588637947695, 8);
  sqcRYGate(q, 2.4118947577837773, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3835036051760543, 8);
  sqcRYGate(q, -0.5889657976628833, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5911675798484843, 10);
  sqcRYGate(q, 1.0197831065219296, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0709495406912746, 10);
  sqcRYGate(q, -0.021012276574922842, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2840348078496526, 12);
  sqcRYGate(q, -0.05182972345850062, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7572357470375382, 12);
  sqcRYGate(q, -0.5299652005185616, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3616805268088727, 14);
  sqcRYGate(q, 2.6726220726882493, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7557296185789868, 14);
  sqcRYGate(q, 0.5478305598024669, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8318207148594421, 1);
  sqcRYGate(q, 2.623843631686367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04248479384870649, 1);
  sqcRYGate(q, 3.02688461117873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4475237614625662, 3);
  sqcRYGate(q, -1.4661722282627103, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.020039699700585164, 3);
  sqcRYGate(q, 1.0094787429565253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1461267933538455, 5);
  sqcRYGate(q, -0.3851862577692229, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0116991390568377, 5);
  sqcRYGate(q, 2.8329910251433224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.255037802014927, 7);
  sqcRYGate(q, 3.0397887138443176, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.171084775930723, 7);
  sqcRYGate(q, -1.921662009736182, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4884611912837507, 9);
  sqcRYGate(q, 0.23925936605744266, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.003349536573133527, 9);
  sqcRYGate(q, -3.1012092550961374, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2189656947788565, 11);
  sqcRYGate(q, 2.1700416961308187, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7087299160272131, 11);
  sqcRYGate(q, 3.0888045468550502, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6393211987427048, 13);
  sqcRYGate(q, -1.0302753074180417, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.05321926123570276, 13);
  sqcRYGate(q, -0.08743123657220765, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.4255779883420245, 0);
  sqcRYGate(q, 2.3875496482893954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.382970490173813, 0);
  sqcRYGate(q, 1.247796084298976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5804591612598733, 2);
  sqcRYGate(q, -0.15783754818441745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3651329528074832, 2);
  sqcRYGate(q, -2.7523129787006346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0483830780496968, 4);
  sqcRYGate(q, -2.1031657391631224, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9735692372601914, 4);
  sqcRYGate(q, 3.1300299964240383, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7445208131469387, 6);
  sqcRYGate(q, -1.7713299203404569, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.31551254171953946, 6);
  sqcRYGate(q, -0.12111058752661119, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.40451031945347965, 8);
  sqcRYGate(q, -0.19249818257760243, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.039888553805105254, 8);
  sqcRYGate(q, -1.2933992480243852, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0139893266250524, 10);
  sqcRYGate(q, 3.0343280424677714, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2232995772017494, 10);
  sqcRYGate(q, 0.6618478138141618, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.853716629354434, 12);
  sqcRYGate(q, 2.3704182035717096, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.4388431173958566, 12);
  sqcRYGate(q, 0.04447375978253909, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.149585635109867, 14);
  sqcRYGate(q, -0.6033895381238146, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.08243061668457538, 14);
  sqcRYGate(q, 0.9439073729976566, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2064060969481414, 1);
  sqcRYGate(q, 2.4863731571249073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.968502373395618, 1);
  sqcRYGate(q, 0.1369313978318898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6960865260093794, 3);
  sqcRYGate(q, -2.026374083493307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1358202498499734, 3);
  sqcRYGate(q, 0.1515976079520973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8356464751583306, 5);
  sqcRYGate(q, 2.833206894037761, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.019131110662566442, 5);
  sqcRYGate(q, -0.015477610539272211, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2827709393184438, 7);
  sqcRYGate(q, -0.10551340692215572, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.23435189017757724, 7);
  sqcRYGate(q, 1.2359329262386494, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.169097726509466, 9);
  sqcRYGate(q, -0.7887231306535947, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.944500921659993, 9);
  sqcRYGate(q, -0.005081213128518946, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.43808502889922174, 11);
  sqcRYGate(q, 0.24919918432374114, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.052747116759291224, 11);
  sqcRYGate(q, -0.04798473878779656, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.795870942008619, 13);
  sqcRYGate(q, -1.8771967999768897, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8221052633641284, 13);
  sqcRYGate(q, -0.018667998963922905, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3919770917166536, 0);
  sqcRYGate(q, 0.0012971871898841414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5899825192269592, 0);
  sqcRYGate(q, -2.0477653467913655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.915453954583062, 2);
  sqcRYGate(q, -1.7180274654786387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5050657861297614, 2);
  sqcRYGate(q, 1.4894609148891576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2678090898307259, 4);
  sqcRYGate(q, 0.6717273788554401, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4717188591597541, 4);
  sqcRYGate(q, -1.830313452003009, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5639862086247147, 6);
  sqcRYGate(q, 1.3876744925388342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10637314215408723, 6);
  sqcRYGate(q, -2.8408277713933057, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.944572382474914, 8);
  sqcRYGate(q, -3.036313103823625, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.139603369534256, 8);
  sqcRYGate(q, 1.3357838925633583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8697009888602427, 10);
  sqcRYGate(q, -2.1981005332046246, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.25290603097896286, 10);
  sqcRYGate(q, 0.43919470786589887, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.025557649626762213, 12);
  sqcRYGate(q, 1.517539668289312, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7641572474902372, 12);
  sqcRYGate(q, -1.0192498939545087, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.8534980285743881, 14);
  sqcRYGate(q, -2.8965562997449457, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0085199237262517, 14);
  sqcRYGate(q, -0.09103003476444606, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9318126110137068, 1);
  sqcRYGate(q, -1.1870541397041432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8161225705334688, 1);
  sqcRYGate(q, 1.8185280352685853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37439512120854723, 3);
  sqcRYGate(q, -2.1944285936400325, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.007530703055003961, 3);
  sqcRYGate(q, -3.0493632088560925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9388364793956834, 5);
  sqcRYGate(q, 0.8575801304180375, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12059467251096379, 5);
  sqcRYGate(q, 0.010458800388122934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4200806819932576, 7);
  sqcRYGate(q, -3.0488022722849624, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.27719215979089107, 7);
  sqcRYGate(q, -2.617385106546454, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5874057442891625, 9);
  sqcRYGate(q, -1.9683587556624413, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.922106238159778, 9);
  sqcRYGate(q, -0.00025718376396492205, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5774536502007415, 11);
  sqcRYGate(q, -1.7078995637606462, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.141166300040403, 11);
  sqcRYGate(q, -0.03900278083008575, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.8578762179223054, 13);
  sqcRYGate(q, 2.253682518991128, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.8398900209671267, 13);
  sqcRYGate(q, 0.06827685839067676, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9694279459636652, 0);
  sqcRYGate(q, -1.2511672191034662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46883126157867927, 0);
  sqcRYGate(q, 1.9515363634362868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.680968293134886, 2);
  sqcRYGate(q, -1.5986647043466196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9001087210653143, 2);
  sqcRYGate(q, -0.003492677550739719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.671148271487473, 4);
  sqcRYGate(q, -2.4503417292287053, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.944163044354393, 4);
  sqcRYGate(q, -1.5368224625459859, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2394983699768658, 6);
  sqcRYGate(q, 2.1704031372782175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0808694921506743, 6);
  sqcRYGate(q, 3.124313743064644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.542133977660026, 8);
  sqcRYGate(q, 1.8572408146015293, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2098559645873204, 8);
  sqcRYGate(q, 2.8252250468257176, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7462007322167246, 10);
  sqcRYGate(q, -2.2214196774091777, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9418528525923939, 10);
  sqcRYGate(q, 2.2505420006691947, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.224502614934889, 12);
  sqcRYGate(q, -2.7625554943023607, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.07196136119317967, 12);
  sqcRYGate(q, 0.1306760953833912, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.387351466629854, 14);
  sqcRYGate(q, 1.3676248976272234, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.07583807185952234, 14);
  sqcRYGate(q, 0.7484638494895721, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.96036142157284, 1);
  sqcRYGate(q, -2.7111739652535953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32674297906845773, 1);
  sqcRYGate(q, -1.5423942238668369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8800467864457104, 3);
  sqcRYGate(q, -2.3963532421589613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.250840910327852, 3);
  sqcRYGate(q, 0.11315871394638834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.710711084067106, 5);
  sqcRYGate(q, 0.13344947282461472, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.031514017504671976, 5);
  sqcRYGate(q, 3.1366412093397655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.419111022562209, 7);
  sqcRYGate(q, -0.8020936312455964, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1363111850432412, 7);
  sqcRYGate(q, 2.642508505123322, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0315373438461286, 9);
  sqcRYGate(q, 0.98691685381089, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.056699609867334716, 9);
  sqcRYGate(q, -0.022412350191401174, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3780605128935468, 11);
  sqcRYGate(q, -1.2629236844952547, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.857774150280009, 11);
  sqcRYGate(q, 2.275363517501778, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5852767541478605, 13);
  sqcRYGate(q, 2.8799690040847077, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8793495216858096, 13);
  sqcRYGate(q, -0.08748511032795707, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4122951451770147, 0);
  sqcRYGate(q, 2.5199830154574183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2461615672261814, 0);
  sqcRYGate(q, -2.4362373717069405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.272965599646316, 2);
  sqcRYGate(q, 1.066297668527521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1413359837277426, 2);
  sqcRYGate(q, -0.18772000946302658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.569476284817418, 4);
  sqcRYGate(q, -0.8431440124528775, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1200135191364238, 4);
  sqcRYGate(q, 2.4675362360193116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5910010025693264, 6);
  sqcRYGate(q, -1.374544686674458, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.108346608442271, 6);
  sqcRYGate(q, 2.82129581892415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1208302361852356, 8);
  sqcRYGate(q, 0.29469884287643083, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.858128761291564, 8);
  sqcRYGate(q, 1.657108467551633, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.983839689028935, 10);
  sqcRYGate(q, -0.6443413238621203, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.002743772026017055, 10);
  sqcRYGate(q, 3.1308229705639072, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4882493815983642, 12);
  sqcRYGate(q, 1.650237989131427, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4151342791464847, 12);
  sqcRYGate(q, 3.0913418954427194, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.2793060853817761, 14);
  sqcRYGate(q, -0.4102138527286545, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6972194883108592, 14);
  sqcRYGate(q, -0.6875267609963788, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5268184258403998, 1);
  sqcRYGate(q, -1.7686788219012985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4407983263704107, 1);
  sqcRYGate(q, -0.18521962523314436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.734613613063443, 3);
  sqcRYGate(q, 1.5579778235416257, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1729212777602287, 3);
  sqcRYGate(q, 1.5506877550390552, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1327081813352577, 5);
  sqcRYGate(q, 0.9957045336785236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9952226187866433, 5);
  sqcRYGate(q, -0.06613519730410289, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.51201147906502, 7);
  sqcRYGate(q, -0.5287464607140047, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.045001992799687, 7);
  sqcRYGate(q, 1.5361832792799397, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.096028380352923, 9);
  sqcRYGate(q, -2.902653281184454, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2818621048669, 9);
  sqcRYGate(q, -3.1084387375839153, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.358391259736039, 11);
  sqcRYGate(q, -1.7252858310020702, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9592581582407628, 11);
  sqcRYGate(q, 2.672067421905789, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.5000179836924086, 13);
  sqcRYGate(q, 0.8815605434893763, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.107443779643313, 13);
  sqcRYGate(q, 0.010884548387086745, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3074901596566835, 0);
  sqcRYGate(q, 2.8713240249188052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42278357141144857, 0);
  sqcRYGate(q, 2.065729683062463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.569971356771104, 2);
  sqcRYGate(q, 2.64434036484999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.125292933602033, 2);
  sqcRYGate(q, 3.1211278108881064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6667752490203998, 4);
  sqcRYGate(q, 0.060532336803603044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.08206891527646376, 4);
  sqcRYGate(q, -3.1403569140040317, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1697969555236645, 6);
  sqcRYGate(q, -2.2623833463318794, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.127338257407085, 6);
  sqcRYGate(q, -1.4473608063553818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5147690447290874, 8);
  sqcRYGate(q, -0.39637466751884265, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.03288178679015186, 8);
  sqcRYGate(q, -2.508650219855189, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6006255908441123, 10);
  sqcRYGate(q, -1.8302762913782256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0021775890298867976, 10);
  sqcRYGate(q, -3.1388714452041455, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6558626379641816, 12);
  sqcRYGate(q, 2.252265913607091, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.14263994709657088, 12);
  sqcRYGate(q, -0.07556143894489244, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.028061008000717, 14);
  sqcRYGate(q, 0.1437213773285964, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5631791666993697, 14);
  sqcRYGate(q, -2.722187468583209, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7308785709236498, 1);
  sqcRYGate(q, 1.4252803939498389, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43197903673021837, 1);
  sqcRYGate(q, 0.39919388635795267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6900932093642917, 3);
  sqcRYGate(q, 3.049891342322029, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.109486169905438, 3);
  sqcRYGate(q, -1.4874673279866597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0508194339378876, 5);
  sqcRYGate(q, -2.791671760236334, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0566047969789114, 5);
  sqcRYGate(q, 3.072293292207773, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0592707961145308, 7);
  sqcRYGate(q, -0.14673332660808547, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3280186763762236, 7);
  sqcRYGate(q, -3.0938585949440105, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.241476830142953, 9);
  sqcRYGate(q, 2.465126566904036, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2605419081767266, 9);
  sqcRYGate(q, -3.096448220466464, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8713223527951799, 11);
  sqcRYGate(q, -0.15565355736466202, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.20661025371502983, 11);
  sqcRYGate(q, 0.4413121593240499, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.20927294167694185, 13);
  sqcRYGate(q, -1.870181094743459, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.05073024489311671, 13);
  sqcRYGate(q, 3.0507971764310278, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7097935309865244, 0);
  sqcRYGate(q, -1.8311446464399481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1353905773151949, 0);
  sqcRYGate(q, 2.802845291116507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2658683931016477, 2);
  sqcRYGate(q, -2.138681879707891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8111833507991745, 2);
  sqcRYGate(q, -1.5042271939818777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.160213347242594, 4);
  sqcRYGate(q, -0.10959623242513614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.133802435211502, 4);
  sqcRYGate(q, 3.08397223457016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3108346791322854, 6);
  sqcRYGate(q, -1.595356023731238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.761388114810849, 6);
  sqcRYGate(q, 0.830556666114114, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0228941603188364, 8);
  sqcRYGate(q, 2.1013361806192563, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0311552931370045, 8);
  sqcRYGate(q, 1.9461974348140536, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0151938599638903, 10);
  sqcRYGate(q, 0.021685948936294754, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1377773273626337, 10);
  sqcRYGate(q, 0.13982428652507473, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1379750497569132, 12);
  sqcRYGate(q, 0.49576118021804305, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.10179991796093034, 12);
  sqcRYGate(q, -3.0133287359749987, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4297334999721398, 14);
  sqcRYGate(q, 0.23005909027974436, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3364648260142267, 14);
  sqcRYGate(q, -2.497735699676555, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.48877216025891407, 1);
  sqcRYGate(q, -1.889130014835543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03987327608750024, 1);
  sqcRYGate(q, 0.08576635897934126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.44718311021575374, 3);
  sqcRYGate(q, 0.09230044192912025, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.005676095660254326, 3);
  sqcRYGate(q, -3.095579535669052, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7334392716350706, 5);
  sqcRYGate(q, 1.8717506182444668, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.10489929087241645, 5);
  sqcRYGate(q, -0.05282011498360096, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4801865967644339, 7);
  sqcRYGate(q, -0.12082856447260255, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0146926356335473, 7);
  sqcRYGate(q, 0.021614041052055555, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1821446804723914, 9);
  sqcRYGate(q, -1.1002734994745884, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0313405527790715, 9);
  sqcRYGate(q, 0.009151392549018455, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9440586346743398, 11);
  sqcRYGate(q, 2.0113926008578575, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8961950223707237, 11);
  sqcRYGate(q, 3.0453066474867376, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.4834064089260588, 13);
  sqcRYGate(q, -2.7157315492312986, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1376166336881597, 13);
  sqcRYGate(q, -3.0764068807722995, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.0259658120114876, 0);
  sqcRYGate(q, -1.308329112257275, 1);
  sqcRYGate(q, -3.125163080216845, 2);
  sqcRYGate(q, -0.6147005998036796, 3);
  sqcRYGate(q, -1.4097061795945935, 4);
  sqcRYGate(q, 1.0937326228246003, 5);
  sqcRYGate(q, -1.5022857259309443, 6);
  sqcRYGate(q, 0.17096784246511998, 7);
  sqcRYGate(q, 1.5030519329938148, 8);
  sqcRYGate(q, -1.6970822376605115, 9);
  sqcRYGate(q, -0.46681403575279246, 10);
  sqcRYGate(q, -1.0558114160325338, 11);
  sqcRYGate(q, 3.0418142173966367, 12);
  sqcRYGate(q, -0.6023557304471009, 13);
  sqcRYGate(q, -0.8181036312066801, 14);
  sqcRYGate(q, -2.549086438632491, 15);

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
