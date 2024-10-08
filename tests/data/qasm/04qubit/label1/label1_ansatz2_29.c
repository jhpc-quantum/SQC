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

  sqcRYGate(q, 1.4211514985297642, 0);
  sqcRZGate(q, 0.27056091118368103, 0);
  sqcRYGate(q, 0.7400489681665383, 1);
  sqcRZGate(q, 3.046992604554608, 1);
  sqcRYGate(q, -1.9804541822730497, 2);
  sqcRZGate(q, -2.8010657740352625, 2);
  sqcRYGate(q, 2.809977098844016, 3);
  sqcRZGate(q, -1.6742238783312955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4863498341586832, 0);
  sqcRZGate(q, 1.9232022939434164, 0);
  sqcRYGate(q, 3.0910199197143426, 1);
  sqcRZGate(q, -1.8415181206212545, 1);
  sqcRYGate(q, -0.2824620294398317, 2);
  sqcRZGate(q, 2.644163434482248, 2);
  sqcRYGate(q, -0.6513097252638929, 3);
  sqcRZGate(q, 0.8548681177865338, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7720758471464024, 0);
  sqcRZGate(q, 2.1446055863506492, 0);
  sqcRYGate(q, -1.0884194457220284, 1);
  sqcRZGate(q, 0.3371932659994083, 1);
  sqcRYGate(q, 2.3155476957568024, 2);
  sqcRZGate(q, -0.6905271669981579, 2);
  sqcRYGate(q, 0.7724423888926513, 3);
  sqcRZGate(q, -2.0757680172841617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.406866194090971, 0);
  sqcRZGate(q, 2.2753041326406143, 0);
  sqcRYGate(q, -2.5724989388657207, 1);
  sqcRZGate(q, 1.589817084157288, 1);
  sqcRYGate(q, 0.8658955055150654, 2);
  sqcRZGate(q, -0.19810359724843818, 2);
  sqcRYGate(q, 0.08635596784526682, 3);
  sqcRZGate(q, 1.036934332688381, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.053424458171792935, 0);
  sqcRZGate(q, 3.0153165077126354, 0);
  sqcRYGate(q, -3.114494407555385, 1);
  sqcRZGate(q, -2.7232500670200266, 1);
  sqcRYGate(q, -2.097413474757681, 2);
  sqcRZGate(q, -1.7100596430982187, 2);
  sqcRYGate(q, -2.4215119426731175, 3);
  sqcRZGate(q, -0.2449370955121472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0635994470479417, 0);
  sqcRZGate(q, 2.00338503050172, 0);
  sqcRYGate(q, -2.6954257816639084, 1);
  sqcRZGate(q, 0.9545684911567712, 1);
  sqcRYGate(q, 2.708097993464997, 2);
  sqcRZGate(q, 0.36350360334573756, 2);
  sqcRYGate(q, -1.7279468948203542, 3);
  sqcRZGate(q, 2.094058297004917, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.833241554967352, 0);
  sqcRZGate(q, 0.6818920785805241, 0);
  sqcRYGate(q, -1.7216671020406107, 1);
  sqcRZGate(q, 0.593991608764874, 1);
  sqcRYGate(q, 2.6011021470144993, 2);
  sqcRZGate(q, -1.1942070954117385, 2);
  sqcRYGate(q, 1.2598876142883964, 3);
  sqcRZGate(q, 0.45139044860000416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.1528858395826881, 0);
  sqcRZGate(q, -1.1638444975211713, 0);
  sqcRYGate(q, -1.979479519475122, 1);
  sqcRZGate(q, -2.036420698675937, 1);
  sqcRYGate(q, -1.7306197658506273, 2);
  sqcRZGate(q, -1.6177404093780963, 2);
  sqcRYGate(q, -2.0264130176608806, 3);
  sqcRZGate(q, 2.1106775029515097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0401032796441543, 0);
  sqcRZGate(q, -1.8488421334090932, 0);
  sqcRYGate(q, 1.960226519349344, 1);
  sqcRZGate(q, -1.7610842952287218, 1);
  sqcRYGate(q, -0.350251292061162, 2);
  sqcRZGate(q, 2.0490088440426923, 2);
  sqcRYGate(q, -1.205234739526193, 3);
  sqcRZGate(q, 2.894788127269115, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5434493892148682, 0);
  sqcRZGate(q, -2.116737565546778, 0);
  sqcRYGate(q, -0.517677442594677, 1);
  sqcRZGate(q, 1.2070701604248852, 1);
  sqcRYGate(q, 1.9580977690392454, 2);
  sqcRZGate(q, -2.4121573380972667, 2);
  sqcRYGate(q, -2.5782703483338847, 3);
  sqcRZGate(q, 1.316262404955376, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2539895417026674, 0);
  sqcRZGate(q, 1.208478575826761, 0);
  sqcRYGate(q, 1.0872027953518197, 1);
  sqcRZGate(q, 2.348007570283002, 1);
  sqcRYGate(q, -1.2048635266762844, 2);
  sqcRZGate(q, -2.9599357944540245, 2);
  sqcRYGate(q, -1.1150186439742267, 3);
  sqcRZGate(q, -0.8713477958307054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.5777157952503296, 0);
  sqcRZGate(q, 2.88521515953334, 0);
  sqcRYGate(q, 2.2943872197513255, 1);
  sqcRZGate(q, 0.7739416579447068, 1);
  sqcRYGate(q, 2.1407058999487933, 2);
  sqcRZGate(q, 2.8568701807664216, 2);
  sqcRYGate(q, 1.2956128248589045, 3);
  sqcRZGate(q, 1.382712744714592, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.28590549562098566, 0);
  sqcRZGate(q, 1.6945914264755562, 0);
  sqcRYGate(q, 0.003789126024120584, 1);
  sqcRZGate(q, 0.46241955784154604, 1);
  sqcRYGate(q, -2.6755537921238988, 2);
  sqcRZGate(q, 0.09057338749853001, 2);
  sqcRYGate(q, -0.5206404078930786, 3);
  sqcRZGate(q, 0.6662932458174013, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.24838352891760884, 0);
  sqcRZGate(q, -2.186699958755473, 0);
  sqcRYGate(q, 0.19551899295882968, 1);
  sqcRZGate(q, 1.1600049254937113, 1);
  sqcRYGate(q, -1.2317488972837753, 2);
  sqcRZGate(q, 2.123332565301287, 2);
  sqcRYGate(q, -2.8634263871766725, 3);
  sqcRZGate(q, 3.0720920619907757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.263253555511681, 0);
  sqcRZGate(q, 2.010852117662379, 0);
  sqcRYGate(q, -0.02204388410121094, 1);
  sqcRZGate(q, -2.034118771345935, 1);
  sqcRYGate(q, -0.8886434871109968, 2);
  sqcRZGate(q, -0.8317906729388926, 2);
  sqcRYGate(q, 0.07966455319634246, 3);
  sqcRZGate(q, -2.8816170431602477, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3109522703664087, 0);
  sqcRZGate(q, 0.8927906055793992, 0);
  sqcRYGate(q, 2.8093833626034104, 1);
  sqcRZGate(q, 0.37519828480554346, 1);
  sqcRYGate(q, 0.41836325564251986, 2);
  sqcRZGate(q, 1.3736762023697795, 2);
  sqcRYGate(q, 0.7361554069545577, 3);
  sqcRZGate(q, 2.974098108238784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5932440728400444, 0);
  sqcRZGate(q, 0.9416394792584619, 0);
  sqcRYGate(q, -2.3191770299643832, 1);
  sqcRZGate(q, -2.372387276868523, 1);
  sqcRYGate(q, -0.18392997394151767, 2);
  sqcRZGate(q, 1.4922420215981271, 2);
  sqcRYGate(q, 1.2131326345906712, 3);
  sqcRZGate(q, -1.1915912626692933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.044558279812877, 0);
  sqcRZGate(q, -0.7992049014334867, 0);
  sqcRYGate(q, -2.112830750695056, 1);
  sqcRZGate(q, -2.999953704652461, 1);
  sqcRYGate(q, -0.5411190997694445, 2);
  sqcRZGate(q, -2.0589164382806855, 2);
  sqcRYGate(q, -2.255512985298203, 3);
  sqcRZGate(q, 1.1638474112583619, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.755354971082137, 0);
  sqcRZGate(q, -0.65589236570663, 0);
  sqcRYGate(q, -2.1851568752598345, 1);
  sqcRZGate(q, -2.4837833225567363, 1);
  sqcRYGate(q, -0.8691739820547211, 2);
  sqcRZGate(q, -0.7063178321693445, 2);
  sqcRYGate(q, -0.0497665710286288, 3);
  sqcRZGate(q, 2.1837167132814583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8709503463431005, 0);
  sqcRZGate(q, -0.2113372880099087, 0);
  sqcRYGate(q, -3.0059138570101784, 1);
  sqcRZGate(q, -2.337185138416615, 1);
  sqcRYGate(q, 0.465205075047721, 2);
  sqcRZGate(q, 2.2653137637884746, 2);
  sqcRYGate(q, 2.275726333198224, 3);
  sqcRZGate(q, -1.9401065359246026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7536269980844852, 0);
  sqcRZGate(q, -1.7209268762700485, 0);
  sqcRYGate(q, 0.6193454792344475, 1);
  sqcRZGate(q, 2.9805750350023468, 1);
  sqcRYGate(q, -0.9751240327426816, 2);
  sqcRZGate(q, -1.0352195446401014, 2);
  sqcRYGate(q, -1.5566455137489088, 3);
  sqcRZGate(q, 1.5406754104828106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9478566686748064, 0);
  sqcRZGate(q, 2.2762210448345686, 0);
  sqcRYGate(q, 2.6734183542747543, 1);
  sqcRZGate(q, -2.4898402969147027, 1);
  sqcRYGate(q, -1.4881332722078753, 2);
  sqcRZGate(q, -1.941849232522367, 2);
  sqcRYGate(q, 1.033744508952271, 3);
  sqcRZGate(q, -1.036164017675633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6944796612909476, 0);
  sqcRZGate(q, 3.0961421379301064, 0);
  sqcRYGate(q, -1.0033545721524586, 1);
  sqcRZGate(q, -0.8965527327820717, 1);
  sqcRYGate(q, 0.832630710341304, 2);
  sqcRZGate(q, 1.4853458536942092, 2);
  sqcRYGate(q, 1.1887708694242929, 3);
  sqcRZGate(q, 0.1133624220842981, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.892359595140612, 0);
  sqcRZGate(q, 2.0761577454866513, 0);
  sqcRYGate(q, -2.223318643005743, 1);
  sqcRZGate(q, -0.557581350290642, 1);
  sqcRYGate(q, -0.5691061213415525, 2);
  sqcRZGate(q, -0.5624555656917113, 2);
  sqcRYGate(q, 2.531712115564981, 3);
  sqcRZGate(q, -2.3341233112554702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6804315679286271, 0);
  sqcRZGate(q, -1.7842248208190865, 0);
  sqcRYGate(q, -1.4212609874432685, 1);
  sqcRZGate(q, 1.1173886234194996, 1);
  sqcRYGate(q, -3.0798881810913032, 2);
  sqcRZGate(q, 1.9365818457383666, 2);
  sqcRYGate(q, -0.6377417821666391, 3);
  sqcRZGate(q, -0.08022006921074976, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.327417634913063, 0);
  sqcRZGate(q, -2.8249298657819284, 0);
  sqcRYGate(q, 2.003476645336384, 1);
  sqcRZGate(q, 2.452245993766628, 1);
  sqcRYGate(q, 1.2233052373659428, 2);
  sqcRZGate(q, -0.2922406185807911, 2);
  sqcRYGate(q, 2.1862949727128593, 3);
  sqcRZGate(q, -2.307160587789269, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.788865107005921, 0);
  sqcRZGate(q, 0.07254638565617633, 0);
  sqcRYGate(q, -0.6458555608943434, 1);
  sqcRZGate(q, -0.5722975290527089, 1);
  sqcRYGate(q, -1.8335715505888235, 2);
  sqcRZGate(q, -1.8167663598266577, 2);
  sqcRYGate(q, 0.44380158581860374, 3);
  sqcRZGate(q, -1.3551005445982494, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0186725962382677, 0);
  sqcRZGate(q, -0.41513904991139233, 0);
  sqcRYGate(q, -0.601460611782941, 1);
  sqcRZGate(q, 2.054516029368462, 1);
  sqcRYGate(q, 0.10569861809250901, 2);
  sqcRZGate(q, 1.631115113240097, 2);
  sqcRYGate(q, 1.195064806605908, 3);
  sqcRZGate(q, -1.7787801361610036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.895445266771013, 0);
  sqcRZGate(q, 1.3566467872808827, 0);
  sqcRYGate(q, -3.0658448444787485, 1);
  sqcRZGate(q, -1.91616652348794, 1);
  sqcRYGate(q, 3.0672236742211494, 2);
  sqcRZGate(q, -1.5471678248502703, 2);
  sqcRYGate(q, -1.8312242721718055, 3);
  sqcRZGate(q, -1.948331409773953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.762106733286031, 0);
  sqcRZGate(q, -2.4229692808061953, 0);
  sqcRYGate(q, -2.9510134120457225, 1);
  sqcRZGate(q, 1.0406542778657921, 1);
  sqcRYGate(q, -3.0558675123486134, 2);
  sqcRZGate(q, -1.1752591672617676, 2);
  sqcRYGate(q, 0.5584380090688628, 3);
  sqcRZGate(q, 1.2972416230500619, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.162285833676665, 0);
  sqcRZGate(q, 2.066975446618123, 0);
  sqcRYGate(q, -2.97518470823688, 1);
  sqcRZGate(q, 2.780666911326527, 1);
  sqcRYGate(q, -1.6713591080920294, 2);
  sqcRZGate(q, 2.120459133521205, 2);
  sqcRYGate(q, -1.2260168976501307, 3);
  sqcRZGate(q, 1.957553894369195, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1237022563111065, 0);
  sqcRZGate(q, 2.6984008807121462, 0);
  sqcRYGate(q, 1.662077712729097, 1);
  sqcRZGate(q, -3.0095897927969384, 1);
  sqcRYGate(q, 0.3326467458332947, 2);
  sqcRZGate(q, 0.07972712742204989, 2);
  sqcRYGate(q, 2.0305974818927033, 3);
  sqcRZGate(q, -1.1938070436320216, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2308441008525395, 0);
  sqcRZGate(q, 2.4071581799462796, 0);
  sqcRYGate(q, 3.107990670040143, 1);
  sqcRZGate(q, 1.3167433303555918, 1);
  sqcRYGate(q, -2.8988059232757086, 2);
  sqcRZGate(q, -2.7671841067965897, 2);
  sqcRYGate(q, 1.811892966984673, 3);
  sqcRZGate(q, -0.5400388420560763, 3);

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
