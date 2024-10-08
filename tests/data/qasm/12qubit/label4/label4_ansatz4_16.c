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

  sqcRYGate(q, 1.5654429831965568, 0);
  sqcRZGate(q, 0.07531040526140154, 0);
  sqcRYGate(q, 1.6622471670002863, 1);
  sqcRZGate(q, -1.5185296996598348, 1);
  sqcRYGate(q, 2.6998059756785984, 2);
  sqcRZGate(q, -0.35128615713277256, 2);
  sqcRYGate(q, 3.0431139286255977, 3);
  sqcRZGate(q, -0.8460066965482219, 3);
  sqcRYGate(q, 1.5396773768971634, 4);
  sqcRZGate(q, 1.5750500342036753, 4);
  sqcRYGate(q, 1.5656052472420665, 5);
  sqcRZGate(q, 1.5902929584032273, 5);
  sqcRYGate(q, -0.0012149773698186166, 6);
  sqcRZGate(q, -1.6795493961238073, 6);
  sqcRYGate(q, 2.7193517114550243, 7);
  sqcRZGate(q, 0.1371900875565437, 7);
  sqcRYGate(q, 0.9635404267994154, 8);
  sqcRZGate(q, -2.520726693733197, 8);
  sqcRYGate(q, 3.1070429232996832, 9);
  sqcRZGate(q, 2.8438693910340516, 9);
  sqcRYGate(q, -1.7017672223817177, 10);
  sqcRZGate(q, 1.574617255519624, 10);
  sqcRYGate(q, -1.5553899899076153, 11);
  sqcRZGate(q, -1.5936762169255374, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.1594014499257685, 0);
  sqcRZGate(q, 3.0741628078448353, 0);
  sqcRYGate(q, 1.6072158672468257, 1);
  sqcRZGate(q, -0.8688451722264695, 1);
  sqcRYGate(q, -3.1233587099889344, 2);
  sqcRZGate(q, 0.8146932784823575, 2);
  sqcRYGate(q, -0.046911967618767036, 3);
  sqcRZGate(q, -0.21659881237883366, 3);
  sqcRYGate(q, 1.5638435225326655, 4);
  sqcRZGate(q, -2.934604686150626, 4);
  sqcRYGate(q, 1.5725367996674238, 5);
  sqcRZGate(q, -2.2494186108664156, 5);
  sqcRYGate(q, 1.5815965799610394, 6);
  sqcRZGate(q, -1.1470923914293458, 6);
  sqcRYGate(q, -3.093983489146285, 7);
  sqcRZGate(q, -2.936845995217156, 7);
  sqcRYGate(q, 2.848285767345555, 8);
  sqcRZGate(q, 0.6497978546171682, 8);
  sqcRYGate(q, 2.112760096234215, 9);
  sqcRZGate(q, 0.12704700585203899, 9);
  sqcRYGate(q, 1.5957826296560296, 10);
  sqcRZGate(q, 2.989331532626355, 10);
  sqcRYGate(q, 1.582010463386528, 11);
  sqcRZGate(q, -1.3145783904854333, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.21660216786381434, 0);
  sqcRZGate(q, 1.7094732045156853, 0);
  sqcRYGate(q, -1.5150696822981087, 1);
  sqcRZGate(q, 1.7357827149162908, 1);
  sqcRYGate(q, -1.939447913451111, 2);
  sqcRZGate(q, 0.3488937403043939, 2);
  sqcRYGate(q, 1.581813183579749, 3);
  sqcRZGate(q, -0.006081917254978743, 3);
  sqcRYGate(q, -2.9043384836138313, 4);
  sqcRZGate(q, -0.3828667691315344, 4);
  sqcRYGate(q, 2.9364954906383693, 5);
  sqcRZGate(q, -0.3913959313467172, 5);
  sqcRYGate(q, 0.07570499176419254, 6);
  sqcRZGate(q, -0.26280449987157883, 6);
  sqcRYGate(q, -3.133759900782817, 7);
  sqcRZGate(q, 0.42549229507681036, 7);
  sqcRYGate(q, -1.5529095556997012, 8);
  sqcRZGate(q, -0.00016018639709614035, 8);
  sqcRYGate(q, 3.084867304163291, 9);
  sqcRZGate(q, 1.4031757779332725, 9);
  sqcRYGate(q, -0.09398269480569145, 10);
  sqcRZGate(q, 0.517277063734582, 10);
  sqcRYGate(q, -0.08287453186143878, 11);
  sqcRZGate(q, 0.7943295554891492, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.9487777590132699, 0);
  sqcRZGate(q, -1.9611044591466518, 0);
  sqcRYGate(q, 2.481950243761496, 1);
  sqcRZGate(q, 0.6976348478295087, 1);
  sqcRYGate(q, -2.296913218228228, 2);
  sqcRZGate(q, -2.875141430256116, 2);
  sqcRYGate(q, -0.7847954794518275, 3);
  sqcRZGate(q, -0.010813041982197668, 3);
  sqcRYGate(q, -0.001082261119998762, 4);
  sqcRZGate(q, 2.0668557268274252, 4);
  sqcRYGate(q, -3.141551053011382, 5);
  sqcRZGate(q, -1.6672276373375814, 5);
  sqcRYGate(q, -0.0627320819939054, 6);
  sqcRZGate(q, -0.06288959294584995, 6);
  sqcRYGate(q, -1.3504925149925262, 7);
  sqcRZGate(q, -0.5976516319102956, 7);
  sqcRYGate(q, -1.660563890018298, 8);
  sqcRZGate(q, 2.9666290964233726, 8);
  sqcRYGate(q, -0.006366018448358598, 9);
  sqcRZGate(q, -3.129432679292799, 9);
  sqcRYGate(q, 0.004076878342915042, 10);
  sqcRZGate(q, 0.09548156993699622, 10);
  sqcRYGate(q, 3.0697944013120866, 11);
  sqcRZGate(q, 1.8485115231438762, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.0193441029619574, 0);
  sqcRZGate(q, -2.8250438839315035, 0);
  sqcRYGate(q, 1.523827539464088, 1);
  sqcRZGate(q, 0.13525168923934405, 1);
  sqcRYGate(q, -1.8227965064875726, 2);
  sqcRZGate(q, -0.9504787215387626, 2);
  sqcRYGate(q, -1.4677437124278085, 3);
  sqcRZGate(q, 2.4446875174576967, 3);
  sqcRYGate(q, 3.0470262087171793, 4);
  sqcRZGate(q, -1.3281037372196043, 4);
  sqcRYGate(q, -0.3343253784855637, 5);
  sqcRZGate(q, 1.8292054204164856, 5);
  sqcRYGate(q, 3.137976167778801, 6);
  sqcRZGate(q, -1.1876381349452467, 6);
  sqcRYGate(q, -0.0006488284216735504, 7);
  sqcRZGate(q, -0.5131671303434446, 7);
  sqcRYGate(q, -0.048376970803642116, 8);
  sqcRZGate(q, 1.7452036095885974, 8);
  sqcRYGate(q, 3.138459673109146, 9);
  sqcRZGate(q, 3.1072539820602683, 9);
  sqcRYGate(q, 1.551436074915033, 10);
  sqcRZGate(q, 0.4282977157055712, 10);
  sqcRYGate(q, -1.5443835984317316, 11);
  sqcRZGate(q, 1.6248463699348843, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3158620825901117, 0);
  sqcRZGate(q, -2.9988905107846837, 0);
  sqcRYGate(q, -1.5671723117949123, 1);
  sqcRZGate(q, 2.47315850949319, 1);
  sqcRYGate(q, -1.828958301143477, 2);
  sqcRZGate(q, -0.20479415342350205, 2);
  sqcRYGate(q, 1.2795425363725856, 3);
  sqcRZGate(q, 0.37806384325006537, 3);
  sqcRYGate(q, -1.5742459164938154, 4);
  sqcRZGate(q, 1.4607253014857984, 4);
  sqcRYGate(q, 0.0005575420931673847, 5);
  sqcRZGate(q, -0.4990031557492132, 5);
  sqcRYGate(q, 1.6478683717959326, 6);
  sqcRZGate(q, 1.5913517262666868, 6);
  sqcRYGate(q, 0.4846104384090279, 7);
  sqcRZGate(q, 0.5679850884904116, 7);
  sqcRYGate(q, -1.5717857318140478, 8);
  sqcRZGate(q, -0.4959979610681504, 8);
  sqcRYGate(q, -0.002664949357055962, 9);
  sqcRZGate(q, -2.821451196149616, 9);
  sqcRYGate(q, -0.9089580163442921, 10);
  sqcRZGate(q, -1.2507085671459404, 10);
  sqcRYGate(q, -1.404920556050719, 11);
  sqcRZGate(q, 2.350726481951504, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.137615368508617, 0);
  sqcRZGate(q, -2.5165012329727308, 0);
  sqcRYGate(q, 0.032492255785024154, 1);
  sqcRZGate(q, 0.7522178463300627, 1);
  sqcRYGate(q, 3.1318244934664903, 2);
  sqcRZGate(q, 1.2702890439157901, 2);
  sqcRYGate(q, -3.1314325429994865, 3);
  sqcRZGate(q, 1.6355867159904485, 3);
  sqcRYGate(q, 3.141270821572602, 4);
  sqcRZGate(q, 2.9912939977837314, 4);
  sqcRYGate(q, 0.0017753668881056025, 5);
  sqcRZGate(q, 2.040190703016493, 5);
  sqcRYGate(q, -1.9962585312056038, 6);
  sqcRZGate(q, 1.586290825089459, 6);
  sqcRYGate(q, -3.135677156384354, 7);
  sqcRZGate(q, -0.49433370059766973, 7);
  sqcRYGate(q, 3.1414670537552563, 8);
  sqcRZGate(q, -2.796891167794257, 8);
  sqcRYGate(q, 0.002424735278944601, 9);
  sqcRZGate(q, -1.2163204685457734, 9);
  sqcRYGate(q, -1.502538634086231, 10);
  sqcRZGate(q, 1.6998359476656582, 10);
  sqcRYGate(q, 3.0458191503381262, 11);
  sqcRZGate(q, -2.328245538580238, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.422473643359947, 0);
  sqcRZGate(q, 0.017030616676241724, 0);
  sqcRYGate(q, -2.940378567690013, 1);
  sqcRZGate(q, 0.18795179170684495, 1);
  sqcRYGate(q, -1.1939339479067206, 2);
  sqcRZGate(q, 1.837274754895124, 2);
  sqcRYGate(q, -0.7799345519854148, 3);
  sqcRZGate(q, -1.1630003983859798, 3);
  sqcRYGate(q, 3.141350785675174, 4);
  sqcRZGate(q, 1.6589192290087114, 4);
  sqcRYGate(q, -0.08827384788537396, 5);
  sqcRZGate(q, 0.7372139412313422, 5);
  sqcRYGate(q, 1.7130714109328027, 6);
  sqcRZGate(q, -1.6928447619619078, 6);
  sqcRYGate(q, 1.5699343568790756, 7);
  sqcRZGate(q, -1.576927830952532, 7);
  sqcRYGate(q, -0.010945319748364213, 8);
  sqcRZGate(q, 1.7926437763974317, 8);
  sqcRYGate(q, 0.01158838628914882, 9);
  sqcRZGate(q, 0.5307218002750965, 9);
  sqcRYGate(q, -1.610645307395383, 10);
  sqcRZGate(q, -0.9707929775061385, 10);
  sqcRYGate(q, 3.0306243736703204, 11);
  sqcRZGate(q, 3.0115448555209414, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.7175922546855038, 0);
  sqcRZGate(q, -0.2761453409142059, 0);
  sqcRYGate(q, 1.5498412843818818, 1);
  sqcRZGate(q, -1.620825559966489, 1);
  sqcRYGate(q, 1.5840416987569814, 2);
  sqcRZGate(q, -0.007050297692861029, 2);
  sqcRYGate(q, -1.5627801264061327, 3);
  sqcRZGate(q, -3.1352459861959283, 3);
  sqcRYGate(q, -0.0059546973732587105, 4);
  sqcRZGate(q, 2.9777794652486076, 4);
  sqcRYGate(q, 0.00098734854538146, 5);
  sqcRZGate(q, 3.01507729903191, 5);
  sqcRYGate(q, 0.00026840346751999533, 6);
  sqcRZGate(q, 0.863573845257915, 6);
  sqcRYGate(q, 1.997370049677983, 7);
  sqcRZGate(q, 0.14501072249996305, 7);
  sqcRYGate(q, 1.5592336813840482, 8);
  sqcRZGate(q, -0.025077227544599727, 8);
  sqcRYGate(q, 1.6034410045500358, 9);
  sqcRZGate(q, 1.4191222274351594, 9);
  sqcRYGate(q, 1.8515356938195646, 10);
  sqcRZGate(q, 1.9451321622415385, 10);
  sqcRYGate(q, 1.750395601040231, 11);
  sqcRZGate(q, 0.8475250295086543, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.094341325937108, 0);
  sqcRZGate(q, 1.0751375198074973, 0);
  sqcRYGate(q, -1.1800723003299862, 1);
  sqcRZGate(q, 2.9902383219670554, 1);
  sqcRYGate(q, 1.564847731082917, 2);
  sqcRZGate(q, 0.9729462310787812, 2);
  sqcRYGate(q, -1.5649653641316263, 3);
  sqcRZGate(q, -0.31094983986571645, 3);
  sqcRYGate(q, -1.5758391940889478, 4);
  sqcRZGate(q, 2.6358803945244476, 4);
  sqcRYGate(q, 0.021998163629457376, 5);
  sqcRZGate(q, -0.39815080577544476, 5);
  sqcRYGate(q, -1.5967263737954633, 6);
  sqcRZGate(q, -0.005600414050796588, 6);
  sqcRYGate(q, -1.572821726540724, 7);
  sqcRZGate(q, -3.1396948959499924, 7);
  sqcRYGate(q, -0.8562441711931505, 8);
  sqcRZGate(q, -3.1213832127818333, 8);
  sqcRYGate(q, 2.533316839440576, 9);
  sqcRZGate(q, -2.643372886794126, 9);
  sqcRYGate(q, 1.482118885480607, 10);
  sqcRZGate(q, -1.5409470575165347, 10);
  sqcRYGate(q, -1.4639466735753535, 11);
  sqcRZGate(q, -1.6995309084158423, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.343638786931983, 0);
  sqcRZGate(q, 0.9295149415110439, 0);
  sqcRYGate(q, -2.7182768790735876, 1);
  sqcRZGate(q, -0.24283358498625504, 1);
  sqcRYGate(q, 0.001637961114862918, 2);
  sqcRZGate(q, -1.8743013409199252, 2);
  sqcRYGate(q, 3.133947810276047, 3);
  sqcRZGate(q, -2.2442823941833203, 3);
  sqcRYGate(q, 3.1346590142196735, 4);
  sqcRZGate(q, -0.7926151341339843, 4);
  sqcRYGate(q, 3.116388768366604, 5);
  sqcRZGate(q, 1.954887910914167, 5);
  sqcRYGate(q, 1.5728058210145746, 6);
  sqcRZGate(q, -0.015634250475014367, 6);
  sqcRYGate(q, -1.5775367628607457, 7);
  sqcRZGate(q, 1.5480764995237388, 7);
  sqcRYGate(q, 0.007767063778886401, 8);
  sqcRZGate(q, 0.7706548125097507, 8);
  sqcRYGate(q, 3.1371820500540553, 9);
  sqcRZGate(q, -1.378738133671133, 9);
  sqcRYGate(q, 3.0584657053613755, 10);
  sqcRZGate(q, 0.010080451067693683, 10);
  sqcRYGate(q, -1.4718874417585062, 11);
  sqcRZGate(q, 3.1269530727126837, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.620740108703343, 0);
  sqcRZGate(q, 1.4391746111761163, 0);
  sqcRYGate(q, 1.7073745460056928, 1);
  sqcRZGate(q, 1.287156199291009, 1);
  sqcRYGate(q, 1.5736219884675693, 2);
  sqcRZGate(q, 0.001469040438700553, 2);
  sqcRYGate(q, 1.5739300553878512, 3);
  sqcRZGate(q, 1.2218922942966635, 3);
  sqcRYGate(q, -0.0009066297223926808, 4);
  sqcRZGate(q, -2.8376323503782377, 4);
  sqcRYGate(q, 1.5765299558041008, 5);
  sqcRZGate(q, 0.6870163789250194, 5);
  sqcRYGate(q, -0.010921456947285968, 6);
  sqcRZGate(q, 2.7187034260386835, 6);
  sqcRYGate(q, 2.676837623262827, 7);
  sqcRZGate(q, -1.2251193027519358, 7);
  sqcRYGate(q, -3.076679694250991, 8);
  sqcRZGate(q, -1.722560589802784, 8);
  sqcRYGate(q, -0.03846063843517378, 9);
  sqcRZGate(q, 0.4144016019426138, 9);
  sqcRYGate(q, 1.5427846455424286, 10);
  sqcRZGate(q, 0.4860449596156471, 10);
  sqcRYGate(q, 1.9154198597713128, 11);
  sqcRZGate(q, 0.09084032205089976, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0174410795034223, 0);
  sqcRZGate(q, 0.27016139748195833, 0);
  sqcRYGate(q, 1.9357604191080036, 1);
  sqcRZGate(q, -1.4688736072344468, 1);
  sqcRYGate(q, 1.5674541348818862, 2);
  sqcRZGate(q, -0.8989373776233769, 2);
  sqcRYGate(q, -3.1404349265983207, 3);
  sqcRZGate(q, 0.7515235643963474, 3);
  sqcRYGate(q, 0.4517383700040378, 4);
  sqcRZGate(q, -3.1376912346138033, 4);
  sqcRYGate(q, -3.13985542715039, 5);
  sqcRZGate(q, 2.2642654691306277, 5);
  sqcRYGate(q, 3.1281197164536936, 6);
  sqcRZGate(q, -2.012517564190876, 6);
  sqcRYGate(q, -0.008336818592263057, 7);
  sqcRZGate(q, -1.9547926833222995, 7);
  sqcRYGate(q, 0.005210303298903264, 8);
  sqcRZGate(q, -0.3622714159965063, 8);
  sqcRYGate(q, -1.5730500196120314, 9);
  sqcRZGate(q, -0.27453432674318545, 9);
  sqcRYGate(q, -0.03488709682087077, 10);
  sqcRZGate(q, -0.3766792119174909, 10);
  sqcRYGate(q, 1.419047610029484, 11);
  sqcRZGate(q, 1.8927189538425382, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5286152484801316, 0);
  sqcRZGate(q, -3.1191603581369827, 0);
  sqcRYGate(q, -1.6068936240147655, 1);
  sqcRZGate(q, -0.006167541467210732, 1);
  sqcRYGate(q, -3.13524321386053, 2);
  sqcRZGate(q, -2.465556384328779, 2);
  sqcRYGate(q, 3.13889484357538, 3);
  sqcRZGate(q, 2.6708438626282343, 3);
  sqcRYGate(q, -1.5721124785531018, 4);
  sqcRZGate(q, -1.5530786302093462, 4);
  sqcRYGate(q, -1.5894438266346844, 5);
  sqcRZGate(q, 1.5701325246457873, 5);
  sqcRYGate(q, 1.5705900570261937, 6);
  sqcRZGate(q, -1.568310482606671, 6);
  sqcRYGate(q, -1.5715007976415225, 7);
  sqcRZGate(q, 1.57209652905307, 7);
  sqcRYGate(q, -3.1409773631749087, 8);
  sqcRZGate(q, 1.6598290391400372, 8);
  sqcRYGate(q, -0.011393205001794141, 9);
  sqcRZGate(q, 0.527601990859118, 9);
  sqcRYGate(q, 1.581284581088168, 10);
  sqcRZGate(q, -3.1350116669240813, 10);
  sqcRYGate(q, 3.1343718548501296, 11);
  sqcRZGate(q, -2.7817305162890245, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5926784746514369, 0);
  sqcRZGate(q, -2.849798999936145, 0);
  sqcRYGate(q, 1.56643620120159, 1);
  sqcRZGate(q, -1.2865678184771607, 1);
  sqcRYGate(q, 1.5546870525005567, 2);
  sqcRZGate(q, -1.2299951997492753, 2);
  sqcRYGate(q, -1.5946445840971286, 3);
  sqcRZGate(q, -2.892004345877789, 3);
  sqcRYGate(q, 1.5713783018705199, 4);
  sqcRZGate(q, -1.0889209338147197, 4);
  sqcRYGate(q, -1.570038879811805, 5);
  sqcRZGate(q, 0.4369784625679997, 5);
  sqcRYGate(q, -1.5669233154820286, 6);
  sqcRZGate(q, 0.8015056460749284, 6);
  sqcRYGate(q, -1.5250883137051432, 7);
  sqcRZGate(q, -0.0014889965984163922, 7);
  sqcRYGate(q, 0.557514021613076, 8);
  sqcRZGate(q, -0.011518337084242878, 8);
  sqcRYGate(q, -3.0910720129551374, 9);
  sqcRZGate(q, -1.9756070568478405, 9);
  sqcRYGate(q, 1.4687278036203484, 10);
  sqcRZGate(q, -0.06898999191633966, 10);
  sqcRYGate(q, -1.5656062650335114, 11);
  sqcRZGate(q, 1.56735657654448, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5713718930604683, 0);
  sqcRZGate(q, 0.0667487686126592, 0);
  sqcRYGate(q, -1.5702631808007692, 1);
  sqcRZGate(q, 1.6954754476183302, 1);
  sqcRYGate(q, -3.1351896018359775, 2);
  sqcRZGate(q, -2.8533211398459346, 2);
  sqcRYGate(q, -1.5793960729182537, 3);
  sqcRZGate(q, 0.0005415114140934207, 3);
  sqcRYGate(q, 3.1393088298329603, 4);
  sqcRZGate(q, 0.4769378423719308, 4);
  sqcRYGate(q, -0.0010223514557603508, 5);
  sqcRZGate(q, 1.7686713389322586, 5);
  sqcRYGate(q, -0.0014191642862100575, 6);
  sqcRZGate(q, -1.334492597248186, 6);
  sqcRYGate(q, -0.4512854831722969, 7);
  sqcRZGate(q, -0.6260073150762047, 7);
  sqcRYGate(q, -1.5289396606846433, 8);
  sqcRZGate(q, -3.1137141361002247, 8);
  sqcRYGate(q, 0.010119347043685873, 9);
  sqcRZGate(q, 0.6544351810230359, 9);
  sqcRYGate(q, 0.07777740370722394, 10);
  sqcRZGate(q, 2.2899333758496163, 10);
  sqcRYGate(q, -1.6319676108968837, 11);
  sqcRZGate(q, 1.5697353048689529, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.9840777636535485, 0);
  sqcRZGate(q, -1.5347749872301835, 0);
  sqcRYGate(q, 2.8801386105717537, 1);
  sqcRZGate(q, -1.4391026654818377, 1);
  sqcRYGate(q, -1.5654050804023893, 2);
  sqcRZGate(q, -1.5048622074302358, 2);
  sqcRYGate(q, 1.5714337586179186, 3);
  sqcRZGate(q, 1.2599903459622483, 3);
  sqcRYGate(q, 0.0001549298951865328, 4);
  sqcRZGate(q, -1.2658306405057704, 4);
  sqcRYGate(q, -3.139097830416952, 5);
  sqcRZGate(q, 0.6622842225132068, 5);
  sqcRYGate(q, 3.141177372175601, 6);
  sqcRZGate(q, 1.9962147507959562, 6);
  sqcRYGate(q, -3.131931641320732, 7);
  sqcRZGate(q, -2.251494194893864, 7);
  sqcRYGate(q, -1.557718286093146, 8);
  sqcRZGate(q, 0.12376768165013809, 8);
  sqcRYGate(q, -1.5682228059380163, 9);
  sqcRZGate(q, -2.1132135308345115, 9);
  sqcRYGate(q, 3.136256888780989, 10);
  sqcRZGate(q, 2.2214803662078753, 10);
  sqcRYGate(q, 1.570529586589547, 11);
  sqcRZGate(q, 1.5694920735401878, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.567027486856526, 0);
  sqcRZGate(q, -1.5644201480578728, 0);
  sqcRYGate(q, -1.3730962391166215, 1);
  sqcRZGate(q, 1.6000693272245987, 1);
  sqcRYGate(q, 0.2589720120913708, 2);
  sqcRZGate(q, -1.6499485157679752, 2);
  sqcRYGate(q, 3.139628358697887, 3);
  sqcRZGate(q, 1.5901629695813329, 3);
  sqcRYGate(q, 0.0037565667333172566, 4);
  sqcRZGate(q, -2.1096085173400785, 4);
  sqcRYGate(q, -3.1326244247981547, 5);
  sqcRZGate(q, -1.7050814191259955, 5);
  sqcRYGate(q, 0.0015462973752269347, 6);
  sqcRZGate(q, -0.6547553814684752, 6);
  sqcRYGate(q, 0.046611784838243686, 7);
  sqcRZGate(q, 2.088501286007701, 7);
  sqcRYGate(q, -1.5989990678320327, 8);
  sqcRZGate(q, -1.5639300048790457, 8);
  sqcRYGate(q, 0.000262043357131516, 9);
  sqcRZGate(q, 2.377747172514697, 9);
  sqcRYGate(q, -0.9790931332995019, 10);
  sqcRZGate(q, 1.5727925102644287, 10);
  sqcRYGate(q, 1.5347955131776816, 11);
  sqcRZGate(q, 0.006656895920255756, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3223181339674024, 0);
  sqcRZGate(q, 3.132292219671878, 0);
  sqcRYGate(q, 0.1574590795189282, 1);
  sqcRZGate(q, 1.5438261735870507, 1);
  sqcRYGate(q, 2.75861056398212, 2);
  sqcRZGate(q, 3.1349494876066513, 2);
  sqcRYGate(q, 0.002489626143363566, 3);
  sqcRZGate(q, -0.4399088566543812, 3);
  sqcRYGate(q, -0.001022216045441606, 4);
  sqcRZGate(q, -1.7804051595331178, 4);
  sqcRYGate(q, 3.1398204709039823, 5);
  sqcRZGate(q, -0.1587191918939359, 5);
  sqcRYGate(q, -0.005596893512475212, 6);
  sqcRZGate(q, 2.8462258792358153, 6);
  sqcRYGate(q, 3.1363519767932764, 7);
  sqcRZGate(q, -2.6773979370033403, 7);
  sqcRYGate(q, 1.5019446416991247, 8);
  sqcRZGate(q, 0.004841726524845491, 8);
  sqcRYGate(q, 3.1300434099161003, 9);
  sqcRZGate(q, 0.6780967798650304, 9);
  sqcRYGate(q, -1.5664286908402643, 10);
  sqcRZGate(q, 0.7396831086375011, 10);
  sqcRYGate(q, -1.5693807592524898, 11);
  sqcRZGate(q, 3.131213765235197, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6076663902764068, 0);
  sqcRZGate(q, 1.5961601929900537, 0);
  sqcRYGate(q, -1.5942160832933392, 1);
  sqcRZGate(q, -1.3532871558736996, 1);
  sqcRYGate(q, -1.7438895061157016, 2);
  sqcRZGate(q, -1.5069510983744427, 2);
  sqcRYGate(q, 3.1411181975955733, 3);
  sqcRZGate(q, 1.6506814599629946, 3);
  sqcRYGate(q, -0.0009453445479655361, 4);
  sqcRZGate(q, 0.44540086468898066, 4);
  sqcRYGate(q, -1.5701796479543493, 5);
  sqcRZGate(q, -1.374619581448285, 5);
  sqcRYGate(q, 1.5345943568079115, 6);
  sqcRZGate(q, 1.5887550897796539, 6);
  sqcRYGate(q, 1.5775712720695898, 7);
  sqcRZGate(q, -2.916090183302858, 7);
  sqcRYGate(q, 1.5725235344541293, 8);
  sqcRZGate(q, -1.6670069962485439, 8);
  sqcRYGate(q, 3.14048740098836, 9);
  sqcRZGate(q, 0.9614927287607149, 9);
  sqcRYGate(q, 0.005674371146388246, 10);
  sqcRZGate(q, -0.8200576776677311, 10);
  sqcRYGate(q, 1.55968367650593, 11);
  sqcRZGate(q, -1.5510134348230387, 11);

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
