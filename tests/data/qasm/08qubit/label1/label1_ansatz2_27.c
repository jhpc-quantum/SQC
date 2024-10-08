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

  sqcRYGate(q, 1.485669574362051, 0);
  sqcRZGate(q, 1.4815454804030868, 0);
  sqcRYGate(q, -2.2940393871420963, 1);
  sqcRZGate(q, -2.9950532183680285, 1);
  sqcRYGate(q, -2.4071801027973923, 2);
  sqcRZGate(q, 0.941046484614704, 2);
  sqcRYGate(q, -0.7472149046921899, 3);
  sqcRZGate(q, 2.8584551979596577, 3);
  sqcRYGate(q, -2.4025841223193027, 4);
  sqcRZGate(q, 1.5364694067636906, 4);
  sqcRYGate(q, 1.8293560203317045, 5);
  sqcRZGate(q, -0.4581456785967318, 5);
  sqcRYGate(q, 2.5263021832370955, 6);
  sqcRZGate(q, -3.0806799387842503, 6);
  sqcRYGate(q, -0.7341243092452645, 7);
  sqcRZGate(q, -1.33647032615463, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.2150344482493383, 0);
  sqcRZGate(q, -0.16376315558980478, 0);
  sqcRYGate(q, -2.278852019886806, 1);
  sqcRZGate(q, 0.23352893232524402, 1);
  sqcRYGate(q, 0.48353205666764054, 2);
  sqcRZGate(q, 3.0875394972954724, 2);
  sqcRYGate(q, 0.6734012905382718, 3);
  sqcRZGate(q, 2.4823004566370095, 3);
  sqcRYGate(q, -1.5899338070201239, 4);
  sqcRZGate(q, -3.125435663411154, 4);
  sqcRYGate(q, -1.2254052253710963, 5);
  sqcRZGate(q, -2.1566163818639144, 5);
  sqcRYGate(q, -1.7458441486504566, 6);
  sqcRZGate(q, 1.8195537258123187, 6);
  sqcRYGate(q, -2.515449574709079, 7);
  sqcRZGate(q, -0.49042544476773925, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.07535451705486, 0);
  sqcRZGate(q, -2.7400042855018967, 0);
  sqcRYGate(q, 2.8368660913521455, 1);
  sqcRZGate(q, 0.7822390083622901, 1);
  sqcRYGate(q, -3.0929255003685694, 2);
  sqcRZGate(q, -0.35518912781639855, 2);
  sqcRYGate(q, 0.28584300278046487, 3);
  sqcRZGate(q, 1.512842382119623, 3);
  sqcRYGate(q, 1.4724800398341151, 4);
  sqcRZGate(q, -2.8450157490507015, 4);
  sqcRYGate(q, 1.7938444338563562, 5);
  sqcRZGate(q, 2.9452942499996677, 5);
  sqcRYGate(q, 2.772690266784484, 6);
  sqcRZGate(q, -1.5272278234925556, 6);
  sqcRYGate(q, 2.3106878818928505, 7);
  sqcRZGate(q, 0.5137846785308904, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.29880357186793205, 0);
  sqcRZGate(q, -0.0767365677903884, 0);
  sqcRYGate(q, 2.7818145473665465, 1);
  sqcRZGate(q, -2.9802529985999118, 1);
  sqcRYGate(q, 1.2631666972506261, 2);
  sqcRZGate(q, -1.4950674377359763, 2);
  sqcRYGate(q, 1.978705938973577, 3);
  sqcRZGate(q, -2.373970147945892, 3);
  sqcRYGate(q, -1.8912089903679326, 4);
  sqcRZGate(q, 1.2973190915367265, 4);
  sqcRYGate(q, -3.086000896589905, 5);
  sqcRZGate(q, -2.5120760231439867, 5);
  sqcRYGate(q, -0.5209642112181685, 6);
  sqcRZGate(q, 3.0586333619081443, 6);
  sqcRYGate(q, -1.7769381805744255, 7);
  sqcRZGate(q, 0.9607417472841577, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9170787303963757, 0);
  sqcRZGate(q, -2.7677387574866343, 0);
  sqcRYGate(q, -0.6403308618580228, 1);
  sqcRZGate(q, 1.5356491323190855, 1);
  sqcRYGate(q, -1.0818864326492017, 2);
  sqcRZGate(q, -0.4040790536778927, 2);
  sqcRYGate(q, -0.24940543884421815, 3);
  sqcRZGate(q, -2.1115024056643135, 3);
  sqcRYGate(q, 1.270599257768123, 4);
  sqcRZGate(q, 1.0680190763917554, 4);
  sqcRYGate(q, -1.5376292112134538, 5);
  sqcRZGate(q, -1.9420423685811814, 5);
  sqcRYGate(q, 0.9625231550942975, 6);
  sqcRZGate(q, 2.368906478823233, 6);
  sqcRYGate(q, -2.310714560209325, 7);
  sqcRZGate(q, 1.2132429526343962, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.3695134058578802, 0);
  sqcRZGate(q, -2.838602440878779, 0);
  sqcRYGate(q, 1.7183445881374215, 1);
  sqcRZGate(q, -1.6896461035934398, 1);
  sqcRYGate(q, -2.016746073675229, 2);
  sqcRZGate(q, 2.686848780951352, 2);
  sqcRYGate(q, 0.11156834784202818, 3);
  sqcRZGate(q, 0.48012006040376415, 3);
  sqcRYGate(q, 0.4820578041338049, 4);
  sqcRZGate(q, -3.0564118314868143, 4);
  sqcRYGate(q, 2.2398337919044207, 5);
  sqcRZGate(q, 1.0427310195678803, 5);
  sqcRYGate(q, 0.7732600092688933, 6);
  sqcRZGate(q, -0.8095801501107865, 6);
  sqcRYGate(q, 1.5708560453787408, 7);
  sqcRZGate(q, 2.3805522871463136, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.126952306594102, 0);
  sqcRZGate(q, -0.699917802724185, 0);
  sqcRYGate(q, 2.7224030181273755, 1);
  sqcRZGate(q, 1.4522086359245883, 1);
  sqcRYGate(q, 0.6042728932396964, 2);
  sqcRZGate(q, -2.209621115492948, 2);
  sqcRYGate(q, 2.8333651129017032, 3);
  sqcRZGate(q, -0.11771991202133567, 3);
  sqcRYGate(q, -1.758551899563133, 4);
  sqcRZGate(q, 0.9658557056510163, 4);
  sqcRYGate(q, -2.379433241138881, 5);
  sqcRZGate(q, -0.09247400549867855, 5);
  sqcRYGate(q, 0.31255094679564893, 6);
  sqcRZGate(q, 0.9356326413997298, 6);
  sqcRYGate(q, -1.7531874677168495, 7);
  sqcRZGate(q, -1.2756186354968513, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.819470402386334, 0);
  sqcRZGate(q, -2.3482990608711405, 0);
  sqcRYGate(q, -1.3575651470022594, 1);
  sqcRZGate(q, 0.38213079477744744, 1);
  sqcRYGate(q, 1.198740417666989, 2);
  sqcRZGate(q, -0.8009094177843847, 2);
  sqcRYGate(q, -1.4146313611131145, 3);
  sqcRZGate(q, -2.2852229045091947, 3);
  sqcRYGate(q, -1.5472561631300739, 4);
  sqcRZGate(q, 1.704289589126529, 4);
  sqcRYGate(q, 1.6480021678466494, 5);
  sqcRZGate(q, 0.7798050608208412, 5);
  sqcRYGate(q, -3.0367245073479894, 6);
  sqcRZGate(q, 0.627745681009013, 6);
  sqcRYGate(q, -2.27979283104534, 7);
  sqcRZGate(q, 0.5406989963943681, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.45033084495937814, 0);
  sqcRZGate(q, -0.341316210182492, 0);
  sqcRYGate(q, 2.88441176557907, 1);
  sqcRZGate(q, 0.8482976018175199, 1);
  sqcRYGate(q, 2.1682185913331944, 2);
  sqcRZGate(q, -1.5957146625123402, 2);
  sqcRYGate(q, 1.8256660774340538, 3);
  sqcRZGate(q, 2.6693569638231605, 3);
  sqcRYGate(q, 0.5113133562428291, 4);
  sqcRZGate(q, 0.24799295191697904, 4);
  sqcRYGate(q, 0.8760560672963144, 5);
  sqcRZGate(q, -0.5739505431957929, 5);
  sqcRYGate(q, 1.2072598805108832, 6);
  sqcRZGate(q, 2.35241509717805, 6);
  sqcRYGate(q, 1.6313205634753247, 7);
  sqcRZGate(q, 0.6327124938946608, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.0970123416937017, 0);
  sqcRZGate(q, 2.873624091496101, 0);
  sqcRYGate(q, 1.3419864681451792, 1);
  sqcRZGate(q, -0.029679641287711344, 1);
  sqcRYGate(q, 1.713565514461604, 2);
  sqcRZGate(q, -2.7228307214543257, 2);
  sqcRYGate(q, 0.4882469399114992, 3);
  sqcRZGate(q, -1.7601557694126144, 3);
  sqcRYGate(q, -1.8449205986594526, 4);
  sqcRZGate(q, 2.170740294367797, 4);
  sqcRYGate(q, -1.078895683976286, 5);
  sqcRZGate(q, 0.7779082706779739, 5);
  sqcRYGate(q, -3.001897001349845, 6);
  sqcRZGate(q, -0.4526418161797346, 6);
  sqcRYGate(q, -2.5274375354674574, 7);
  sqcRZGate(q, -0.5320573713640683, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5454847299079024, 0);
  sqcRZGate(q, -1.0948615125507999, 0);
  sqcRYGate(q, -2.0778555792478626, 1);
  sqcRZGate(q, -3.111518260084949, 1);
  sqcRYGate(q, 0.5182266833024831, 2);
  sqcRZGate(q, -1.5957377229471064, 2);
  sqcRYGate(q, -2.374986121193154, 3);
  sqcRZGate(q, 0.3626548045627995, 3);
  sqcRYGate(q, 2.923152646429207, 4);
  sqcRZGate(q, 0.3251637021660212, 4);
  sqcRYGate(q, 0.42090290410199604, 5);
  sqcRZGate(q, 0.5509563283232444, 5);
  sqcRYGate(q, 0.5782277948647412, 6);
  sqcRZGate(q, 1.0224682941180498, 6);
  sqcRYGate(q, -1.4625924984363505, 7);
  sqcRZGate(q, 1.5575138370376025, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.253120351626265, 0);
  sqcRZGate(q, -0.9167915413812711, 0);
  sqcRYGate(q, -0.9611510152606355, 1);
  sqcRZGate(q, 2.1787898526942846, 1);
  sqcRYGate(q, -1.6607269643191698, 2);
  sqcRZGate(q, -1.9089597870157997, 2);
  sqcRYGate(q, 1.8848751168261098, 3);
  sqcRZGate(q, 1.1174175290776995, 3);
  sqcRYGate(q, 0.5669905142076983, 4);
  sqcRZGate(q, -1.958975350948566, 4);
  sqcRYGate(q, -0.3897433979260665, 5);
  sqcRZGate(q, 2.3382474143927015, 5);
  sqcRYGate(q, -1.7397217223833528, 6);
  sqcRZGate(q, 2.7873092352344693, 6);
  sqcRYGate(q, -1.4122846282308454, 7);
  sqcRZGate(q, -2.9698621102961735, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.36694783860603475, 0);
  sqcRZGate(q, -0.055252856587679824, 0);
  sqcRYGate(q, 1.9621709651992256, 1);
  sqcRZGate(q, -0.4225767422301214, 1);
  sqcRYGate(q, 1.9941705689502944, 2);
  sqcRZGate(q, -1.6953317452082088, 2);
  sqcRYGate(q, -0.11856492080756187, 3);
  sqcRZGate(q, 2.0485788432793925, 3);
  sqcRYGate(q, -0.6722934001947651, 4);
  sqcRZGate(q, -0.800638836616173, 4);
  sqcRYGate(q, -1.7985269355264153, 5);
  sqcRZGate(q, -2.4579587129162643, 5);
  sqcRYGate(q, -0.33086442288417267, 6);
  sqcRZGate(q, 1.8552738037120633, 6);
  sqcRYGate(q, -2.204583447199739, 7);
  sqcRZGate(q, -1.035211643877638, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7159403970430356, 0);
  sqcRZGate(q, 0.07844953807536445, 0);
  sqcRYGate(q, -0.5866111494698307, 1);
  sqcRZGate(q, -1.2829478246237387, 1);
  sqcRYGate(q, -2.0424098048925146, 2);
  sqcRZGate(q, -1.171726608722704, 2);
  sqcRYGate(q, 1.5336664583480424, 3);
  sqcRZGate(q, 1.6537287254861546, 3);
  sqcRYGate(q, -2.5407334259085324, 4);
  sqcRZGate(q, 2.4196912840932017, 4);
  sqcRYGate(q, -2.610023355486311, 5);
  sqcRZGate(q, -1.6613803069144666, 5);
  sqcRYGate(q, 2.9964593012420218, 6);
  sqcRZGate(q, 2.6346441551016846, 6);
  sqcRYGate(q, -1.1830970938687502, 7);
  sqcRZGate(q, 2.5388361875258934, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.34861026101907583, 0);
  sqcRZGate(q, 2.2012321096868246, 0);
  sqcRYGate(q, -2.765543883775525, 1);
  sqcRZGate(q, -2.5195219155877804, 1);
  sqcRYGate(q, 2.996322793766669, 2);
  sqcRZGate(q, -0.5183467475664747, 2);
  sqcRYGate(q, 0.418285517162147, 3);
  sqcRZGate(q, 2.570676784051183, 3);
  sqcRYGate(q, 1.519698751527267, 4);
  sqcRZGate(q, 0.9524844596355457, 4);
  sqcRYGate(q, 2.8207732155249197, 5);
  sqcRZGate(q, -2.644443416889103, 5);
  sqcRYGate(q, 0.9841421984914184, 6);
  sqcRZGate(q, 2.2181778353159807, 6);
  sqcRYGate(q, -3.0973235465848936, 7);
  sqcRZGate(q, -2.446440597031396, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.4350095219899268, 0);
  sqcRZGate(q, -3.096014115971668, 0);
  sqcRYGate(q, -1.376581649527974, 1);
  sqcRZGate(q, -3.105741632988987, 1);
  sqcRYGate(q, 0.28064809958835735, 2);
  sqcRZGate(q, -1.869061472274324, 2);
  sqcRYGate(q, 1.4573946957426882, 3);
  sqcRZGate(q, 3.0797626301972554, 3);
  sqcRYGate(q, 1.1358549204787587, 4);
  sqcRZGate(q, -2.4325205100149745, 4);
  sqcRYGate(q, -2.340023713823513, 5);
  sqcRZGate(q, 0.8496161638696383, 5);
  sqcRYGate(q, -3.0864455497846457, 6);
  sqcRZGate(q, -0.5196396994479837, 6);
  sqcRYGate(q, -1.3361617942611401, 7);
  sqcRZGate(q, 1.0073512361201449, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.8759067631825737, 0);
  sqcRZGate(q, 1.6043070353541813, 0);
  sqcRYGate(q, -0.9691895985600727, 1);
  sqcRZGate(q, 2.299310517392751, 1);
  sqcRYGate(q, -1.93570338799168, 2);
  sqcRZGate(q, -3.1113689130692097, 2);
  sqcRYGate(q, -1.7847470474506675, 3);
  sqcRZGate(q, 0.06869932263406059, 3);
  sqcRYGate(q, 2.2652455460164216, 4);
  sqcRZGate(q, 0.1410025646309529, 4);
  sqcRYGate(q, 2.344280086960026, 5);
  sqcRZGate(q, -0.6563624285907874, 5);
  sqcRYGate(q, 2.0908518387019477, 6);
  sqcRZGate(q, 3.048426909367436, 6);
  sqcRYGate(q, -0.36363929777912896, 7);
  sqcRZGate(q, -0.10474432500830044, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.2548026114575563, 0);
  sqcRZGate(q, -0.0871257087914954, 0);
  sqcRYGate(q, 1.884859641953632, 1);
  sqcRZGate(q, -0.36578631664467964, 1);
  sqcRYGate(q, 1.0607157980656692, 2);
  sqcRZGate(q, 1.7698697098156309, 2);
  sqcRYGate(q, -0.9678254544994909, 3);
  sqcRZGate(q, -1.0466121261246621, 3);
  sqcRYGate(q, -2.5554692240405843, 4);
  sqcRZGate(q, -1.831174381764166, 4);
  sqcRYGate(q, -1.431968657943012, 5);
  sqcRZGate(q, 0.4803146642805265, 5);
  sqcRYGate(q, -2.0711549020198943, 6);
  sqcRZGate(q, 1.4824556377762619, 6);
  sqcRYGate(q, -2.7134580236194816, 7);
  sqcRZGate(q, -1.579468496621439, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.9685816187505685, 0);
  sqcRZGate(q, -0.5565291549654328, 0);
  sqcRYGate(q, 0.5648429432962603, 1);
  sqcRZGate(q, -2.093801140147857, 1);
  sqcRYGate(q, 1.0429428221716188, 2);
  sqcRZGate(q, 1.9115117092401641, 2);
  sqcRYGate(q, 2.2397465009074837, 3);
  sqcRZGate(q, 1.1823752672642, 3);
  sqcRYGate(q, 2.649128353659465, 4);
  sqcRZGate(q, -1.5592527315720148, 4);
  sqcRYGate(q, 1.1473944520788946, 5);
  sqcRZGate(q, -1.3050230401547835, 5);
  sqcRYGate(q, -0.02065613607322646, 6);
  sqcRZGate(q, 0.3523994634093892, 6);
  sqcRYGate(q, 1.6556736900167264, 7);
  sqcRZGate(q, -0.7387561479153852, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.2404989360451184, 0);
  sqcRZGate(q, -1.8930285745788353, 0);
  sqcRYGate(q, 0.6506390714783697, 1);
  sqcRZGate(q, 1.5561669072182527, 1);
  sqcRYGate(q, 2.8024551245246863, 2);
  sqcRZGate(q, -1.7904275652086508, 2);
  sqcRYGate(q, -0.5111885661565397, 3);
  sqcRZGate(q, -0.819854841965726, 3);
  sqcRYGate(q, 2.8217766653282705, 4);
  sqcRZGate(q, -0.7299840647151287, 4);
  sqcRYGate(q, -1.8533012281238783, 5);
  sqcRZGate(q, 1.9727483081139465, 5);
  sqcRYGate(q, 1.5342894644296212, 6);
  sqcRZGate(q, 1.751458149969114, 6);
  sqcRYGate(q, 1.589783443164106, 7);
  sqcRZGate(q, 3.085591589654133, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.974647271551118, 0);
  sqcRZGate(q, -1.2749542156901372, 0);
  sqcRYGate(q, 1.4131423993216492, 1);
  sqcRZGate(q, -1.1558004673922446, 1);
  sqcRYGate(q, 0.4536429688029044, 2);
  sqcRZGate(q, -1.2681165180899807, 2);
  sqcRYGate(q, 2.4232520963696977, 3);
  sqcRZGate(q, 2.0584797287113377, 3);
  sqcRYGate(q, -0.26249563245201113, 4);
  sqcRZGate(q, 0.9054831124606716, 4);
  sqcRYGate(q, -3.091909363986758, 5);
  sqcRZGate(q, -1.9629249223113003, 5);
  sqcRYGate(q, -1.603995619837641, 6);
  sqcRZGate(q, 0.3383141639333891, 6);
  sqcRYGate(q, -1.8850517337237596, 7);
  sqcRZGate(q, -2.8655169732964714, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.2214729180561044, 0);
  sqcRZGate(q, -1.8317012143907894, 0);
  sqcRYGate(q, -2.9802363234716913, 1);
  sqcRZGate(q, -1.7867201387093548, 1);
  sqcRYGate(q, 2.130522830944061, 2);
  sqcRZGate(q, -1.9119742913112088, 2);
  sqcRYGate(q, 1.2677898459315227, 3);
  sqcRZGate(q, -1.2898888553411885, 3);
  sqcRYGate(q, 2.7096504400282715, 4);
  sqcRZGate(q, 0.5195515976235661, 4);
  sqcRYGate(q, 1.1854060480282573, 5);
  sqcRZGate(q, -1.7948553295184584, 5);
  sqcRYGate(q, -0.602750139455715, 6);
  sqcRZGate(q, -0.5723858237832271, 6);
  sqcRYGate(q, -0.7043549948292318, 7);
  sqcRZGate(q, -2.769152620133204, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.082963976825526, 0);
  sqcRZGate(q, -3.0588369477468276, 0);
  sqcRYGate(q, 0.2532005666849839, 1);
  sqcRZGate(q, -2.3472750995752554, 1);
  sqcRYGate(q, -1.7303645263267908, 2);
  sqcRZGate(q, -2.343381008602013, 2);
  sqcRYGate(q, 0.9150196601182419, 3);
  sqcRZGate(q, 0.3696738024894408, 3);
  sqcRYGate(q, -1.4587678164690845, 4);
  sqcRZGate(q, -2.352831300453779, 4);
  sqcRYGate(q, 0.44152752842259435, 5);
  sqcRZGate(q, -0.614460596352086, 5);
  sqcRYGate(q, -1.8587448296254716, 6);
  sqcRZGate(q, 0.7973868347805887, 6);
  sqcRYGate(q, -2.4615212429577054, 7);
  sqcRZGate(q, 2.8723259619272214, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.7309059476486266, 0);
  sqcRZGate(q, -0.88405029600455, 0);
  sqcRYGate(q, -1.3882885029712173, 1);
  sqcRZGate(q, -3.0252322831875125, 1);
  sqcRYGate(q, 1.4998364827473845, 2);
  sqcRZGate(q, 1.4464869863609229, 2);
  sqcRYGate(q, 2.0880558173970054, 3);
  sqcRZGate(q, -1.5177485866501508, 3);
  sqcRYGate(q, -1.5164032668108982, 4);
  sqcRZGate(q, -1.8769143389351666, 4);
  sqcRYGate(q, -1.393563715049052, 5);
  sqcRZGate(q, -3.045712619628566, 5);
  sqcRYGate(q, 1.0859669538501213, 6);
  sqcRZGate(q, -2.003905877236356, 6);
  sqcRYGate(q, 2.1663309472224768, 7);
  sqcRZGate(q, 0.9690428674250233, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.2172364317817044, 0);
  sqcRZGate(q, -1.3774992943135924, 0);
  sqcRYGate(q, 0.3871086931518067, 1);
  sqcRZGate(q, -0.2839571599874846, 1);
  sqcRYGate(q, -0.6024150213526864, 2);
  sqcRZGate(q, 0.48343493454025926, 2);
  sqcRYGate(q, 0.5407564848248835, 3);
  sqcRZGate(q, 1.8270937761196167, 3);
  sqcRYGate(q, -1.9698701696215999, 4);
  sqcRZGate(q, 2.9063203505210904, 4);
  sqcRYGate(q, 2.610254693619316, 5);
  sqcRZGate(q, -1.8396302916824698, 5);
  sqcRYGate(q, -0.5644791163514762, 6);
  sqcRZGate(q, 0.29204274306374844, 6);
  sqcRYGate(q, 1.2524877482284005, 7);
  sqcRZGate(q, -2.3551308955590766, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6451255552813286, 0);
  sqcRZGate(q, -2.7480240577764246, 0);
  sqcRYGate(q, 3.0068053541556603, 1);
  sqcRZGate(q, -2.5823395250573427, 1);
  sqcRYGate(q, 2.607536197488014, 2);
  sqcRZGate(q, 1.9636917349931085, 2);
  sqcRYGate(q, -1.4940216969772289, 3);
  sqcRZGate(q, 2.182005079166146, 3);
  sqcRYGate(q, 1.9812157351644928, 4);
  sqcRZGate(q, 1.8122764995914586, 4);
  sqcRYGate(q, -1.424830166704263, 5);
  sqcRZGate(q, 0.7950724815971759, 5);
  sqcRYGate(q, 1.6194690190654508, 6);
  sqcRZGate(q, 0.6792788984864039, 6);
  sqcRYGate(q, 0.821742548898146, 7);
  sqcRZGate(q, 2.81376327956378, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6069088791216295, 0);
  sqcRZGate(q, 3.0187832831788564, 0);
  sqcRYGate(q, 1.1772153305281439, 1);
  sqcRZGate(q, -3.1121341535328777, 1);
  sqcRYGate(q, 0.11523638641350242, 2);
  sqcRZGate(q, -1.3534204487991266, 2);
  sqcRYGate(q, -0.33073441458132535, 3);
  sqcRZGate(q, 2.6287804509753063, 3);
  sqcRYGate(q, 0.5360196521653259, 4);
  sqcRZGate(q, 2.7717253958401256, 4);
  sqcRYGate(q, 1.1660775301365385, 5);
  sqcRZGate(q, 2.5940738921901896, 5);
  sqcRYGate(q, 3.065531143643718, 6);
  sqcRZGate(q, 2.5432210916779923, 6);
  sqcRYGate(q, 0.605432951433237, 7);
  sqcRZGate(q, -1.416236415392207, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.133478306525709, 0);
  sqcRZGate(q, 0.4636734642935532, 0);
  sqcRYGate(q, -1.5926094721400743, 1);
  sqcRZGate(q, -0.8932165409770153, 1);
  sqcRYGate(q, 0.15428528951633336, 2);
  sqcRZGate(q, -1.521052492299538, 2);
  sqcRYGate(q, -0.19464594218635847, 3);
  sqcRZGate(q, 2.635912164594462, 3);
  sqcRYGate(q, -0.36722043022492407, 4);
  sqcRZGate(q, 2.3279531924284975, 4);
  sqcRYGate(q, -1.3064048925579768, 5);
  sqcRZGate(q, -0.13897473454301318, 5);
  sqcRYGate(q, 1.9736932696842555, 6);
  sqcRZGate(q, -0.4904905161045106, 6);
  sqcRYGate(q, -1.0679647329058737, 7);
  sqcRZGate(q, 0.9580335217927484, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.2555501787761679, 0);
  sqcRZGate(q, 0.27244599995245, 0);
  sqcRYGate(q, 1.789549479296219, 1);
  sqcRZGate(q, -1.3260792325895483, 1);
  sqcRYGate(q, -2.796210317390993, 2);
  sqcRZGate(q, -2.505259252293934, 2);
  sqcRYGate(q, -0.4359989697864407, 3);
  sqcRZGate(q, -2.1221127667949284, 3);
  sqcRYGate(q, -2.187397858221739, 4);
  sqcRZGate(q, 1.0158287274609539, 4);
  sqcRYGate(q, -0.23011001602508496, 5);
  sqcRZGate(q, -1.8203024500820444, 5);
  sqcRYGate(q, -3.016292631210759, 6);
  sqcRZGate(q, 0.48575092043938195, 6);
  sqcRYGate(q, 0.9333985715918126, 7);
  sqcRZGate(q, 0.5606690648671164, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.065803059667029, 0);
  sqcRZGate(q, 1.3468264140467419, 0);
  sqcRYGate(q, -1.2882324309534703, 1);
  sqcRZGate(q, -2.487133227782388, 1);
  sqcRYGate(q, -0.3763106954598865, 2);
  sqcRZGate(q, 1.6433680137756623, 2);
  sqcRYGate(q, -2.1556372644755304, 3);
  sqcRZGate(q, 2.5022111180867257, 3);
  sqcRYGate(q, 2.8962282647800115, 4);
  sqcRZGate(q, -2.2926231146407634, 4);
  sqcRYGate(q, -1.970779423567037, 5);
  sqcRZGate(q, 2.804109675284298, 5);
  sqcRYGate(q, 2.576983356415387, 6);
  sqcRZGate(q, 1.8820337176762587, 6);
  sqcRYGate(q, 2.8367066493969593, 7);
  sqcRZGate(q, -2.4163172274115103, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.46388228069884824, 0);
  sqcRZGate(q, -2.7599204615623085, 0);
  sqcRYGate(q, -2.08576471926918, 1);
  sqcRZGate(q, 2.2401783289481783, 1);
  sqcRYGate(q, 1.5545431706248476, 2);
  sqcRZGate(q, -1.7425900455383756, 2);
  sqcRYGate(q, 2.1938750562581886, 3);
  sqcRZGate(q, -0.15568561474105685, 3);
  sqcRYGate(q, -0.07162892226014606, 4);
  sqcRZGate(q, -1.1364227338524415, 4);
  sqcRYGate(q, 2.182795062116619, 5);
  sqcRZGate(q, -0.7039476889522367, 5);
  sqcRYGate(q, -0.6000617785318036, 6);
  sqcRZGate(q, 0.4274900118531795, 6);
  sqcRYGate(q, 1.0956549113164042, 7);
  sqcRZGate(q, -2.3473091210537493, 7);

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
