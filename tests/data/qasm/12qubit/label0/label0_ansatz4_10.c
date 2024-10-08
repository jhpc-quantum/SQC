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

  sqcRYGate(q, 1.34277743195259, 0);
  sqcRZGate(q, 0.6591302258339701, 0);
  sqcRYGate(q, -2.75226662921268, 1);
  sqcRZGate(q, 2.878915643114741, 1);
  sqcRYGate(q, 3.1408593606295994, 2);
  sqcRZGate(q, -2.3694394222322868, 2);
  sqcRYGate(q, -3.1412297726291496, 3);
  sqcRZGate(q, 2.8498762203011325, 3);
  sqcRYGate(q, -1.5663202339901883, 4);
  sqcRZGate(q, -0.002462579118180486, 4);
  sqcRYGate(q, 1.5794694933643416, 5);
  sqcRZGate(q, 2.6115081601217986, 5);
  sqcRYGate(q, -0.14606514359124384, 6);
  sqcRZGate(q, 0.5335856291953506, 6);
  sqcRYGate(q, -0.009155383422532637, 7);
  sqcRZGate(q, 0.6119666780258363, 7);
  sqcRYGate(q, 3.138555926348149, 8);
  sqcRZGate(q, 2.828731305204765, 8);
  sqcRYGate(q, -0.0004564733298711777, 9);
  sqcRZGate(q, -2.686943336972557, 9);
  sqcRYGate(q, -2.6429347962504224, 10);
  sqcRZGate(q, -0.12137815939262588, 10);
  sqcRYGate(q, -0.25635686065562335, 11);
  sqcRZGate(q, 2.170160489734396, 11);
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
  sqcRYGate(q, -1.0676816105276703, 0);
  sqcRZGate(q, 2.3904656300295577, 0);
  sqcRYGate(q, 1.662736135020439, 1);
  sqcRZGate(q, -1.5457472268083656, 1);
  sqcRYGate(q, 3.0658866247534964, 2);
  sqcRZGate(q, -1.6168870023169988, 2);
  sqcRYGate(q, -3.129238542516014, 3);
  sqcRZGate(q, -2.8927895892352806, 3);
  sqcRYGate(q, 1.3122645937150281, 4);
  sqcRZGate(q, -1.3699741555387173, 4);
  sqcRYGate(q, -3.1181298353751137, 5);
  sqcRZGate(q, 1.754731104253684, 5);
  sqcRYGate(q, -1.1995698783958866, 6);
  sqcRZGate(q, -1.3724286593061512, 6);
  sqcRYGate(q, -1.615231897626512, 7);
  sqcRZGate(q, 0.7354673115396961, 7);
  sqcRYGate(q, 0.0022461752270980092, 8);
  sqcRZGate(q, 1.00912878493041, 8);
  sqcRYGate(q, -3.1412346083132188, 9);
  sqcRZGate(q, -1.8638730232529168, 9);
  sqcRYGate(q, 2.0834555025045223, 10);
  sqcRZGate(q, -1.676711345626247, 10);
  sqcRYGate(q, -2.9273259867510317, 11);
  sqcRZGate(q, 2.091006964447674, 11);
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
  sqcRYGate(q, -1.8520689546636095, 0);
  sqcRZGate(q, 0.49690867043695164, 0);
  sqcRYGate(q, -0.03637448387148625, 1);
  sqcRZGate(q, -0.06785886110203966, 1);
  sqcRYGate(q, 0.0002493246894292205, 2);
  sqcRZGate(q, 0.32998132793181756, 2);
  sqcRYGate(q, 0.008538636373292236, 3);
  sqcRZGate(q, -0.9929295249823366, 3);
  sqcRYGate(q, -0.008029954747638535, 4);
  sqcRZGate(q, 2.825678369679716, 4);
  sqcRYGate(q, 3.1382818196914575, 5);
  sqcRZGate(q, -0.2634825038215709, 5);
  sqcRYGate(q, 1.1302115303402525, 6);
  sqcRZGate(q, -0.14439935215962318, 6);
  sqcRYGate(q, 0.3833561679922284, 7);
  sqcRZGate(q, 0.5245319710193616, 7);
  sqcRYGate(q, 0.04866169643627964, 8);
  sqcRZGate(q, -1.7265234579176951, 8);
  sqcRYGate(q, 0.0002528606820905645, 9);
  sqcRZGate(q, 1.821096736985724, 9);
  sqcRYGate(q, 0.9650804927224331, 10);
  sqcRZGate(q, 1.626506938163912, 10);
  sqcRYGate(q, 1.6855148911056803, 11);
  sqcRZGate(q, -0.05430174512087226, 11);
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
  sqcRYGate(q, 2.746083562987736, 0);
  sqcRZGate(q, -2.684252731009825, 0);
  sqcRYGate(q, -1.3190426083098288, 1);
  sqcRZGate(q, 1.418851906616947, 1);
  sqcRYGate(q, 1.9162228267957093, 2);
  sqcRZGate(q, -2.8351468141577936, 2);
  sqcRYGate(q, -1.8324053444118078, 3);
  sqcRZGate(q, -0.988671867215334, 3);
  sqcRYGate(q, 3.139498217700956, 4);
  sqcRZGate(q, -2.8084371587929158, 4);
  sqcRYGate(q, -0.002108710034134103, 5);
  sqcRZGate(q, 1.1707033961709783, 5);
  sqcRYGate(q, 1.5042213989383102, 6);
  sqcRZGate(q, 2.9003352994119727, 6);
  sqcRYGate(q, -1.765809217001896, 7);
  sqcRZGate(q, 3.1065939937542444, 7);
  sqcRYGate(q, 0.00028822001365897093, 8);
  sqcRZGate(q, 1.4035574055355566, 8);
  sqcRYGate(q, 0.0021397522819723842, 9);
  sqcRZGate(q, -1.343953442956801, 9);
  sqcRYGate(q, -1.8685151541712903, 10);
  sqcRZGate(q, 1.6799731088138792, 10);
  sqcRYGate(q, 1.4872427048699504, 11);
  sqcRZGate(q, 2.5891327533384363, 11);
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
  sqcRYGate(q, -2.658786010036756, 0);
  sqcRZGate(q, 0.5907918826977028, 0);
  sqcRYGate(q, 3.0339685750521492, 1);
  sqcRZGate(q, -3.0178025621934665, 1);
  sqcRYGate(q, 1.5507507366541313, 2);
  sqcRZGate(q, 1.5663561978140872, 2);
  sqcRYGate(q, -1.5669608757104918, 3);
  sqcRZGate(q, -1.5667448494020189, 3);
  sqcRYGate(q, -0.1420095784814882, 4);
  sqcRZGate(q, -1.6664069231295224, 4);
  sqcRYGate(q, 0.2719677881965964, 5);
  sqcRZGate(q, -0.7833490992589232, 5);
  sqcRYGate(q, -1.0614693961398398, 6);
  sqcRZGate(q, -1.7475010899175771, 6);
  sqcRYGate(q, 1.6491952410022999, 7);
  sqcRZGate(q, 0.8972982598332772, 7);
  sqcRYGate(q, -1.5465748610940233, 8);
  sqcRZGate(q, 3.1413062668318723, 8);
  sqcRYGate(q, 1.565653570275649, 9);
  sqcRZGate(q, -3.1315811678428607, 9);
  sqcRYGate(q, 1.9575374533722902, 10);
  sqcRZGate(q, 1.6819375664931666, 10);
  sqcRYGate(q, -3.119680328217053, 11);
  sqcRZGate(q, 2.643785705338462, 11);
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
  sqcRYGate(q, 0.025016628153517573, 0);
  sqcRZGate(q, -0.583917780506952, 0);
  sqcRYGate(q, 0.011588734698107742, 1);
  sqcRZGate(q, -0.054250119217677195, 1);
  sqcRYGate(q, 1.1976944634753233, 2);
  sqcRZGate(q, -1.2067192807342149, 2);
  sqcRYGate(q, -2.177571930987743, 3);
  sqcRZGate(q, -0.600521321439575, 3);
  sqcRYGate(q, 0.0006025661912673609, 4);
  sqcRZGate(q, -2.9392451355876306, 4);
  sqcRYGate(q, 3.141400205037237, 5);
  sqcRZGate(q, 2.287242865173667, 5);
  sqcRYGate(q, 0.0002775218167094806, 6);
  sqcRZGate(q, -2.251315466602528, 6);
  sqcRYGate(q, 3.1412841150661106, 7);
  sqcRZGate(q, 0.47284599256892995, 7);
  sqcRYGate(q, 2.3732296511112096, 8);
  sqcRZGate(q, -1.5420325301234366, 8);
  sqcRYGate(q, 2.37349437621946, 9);
  sqcRZGate(q, 1.705077943605751, 9);
  sqcRYGate(q, -2.9087095515007357, 10);
  sqcRZGate(q, 0.12687611589718711, 10);
  sqcRYGate(q, 2.9638694998359467, 11);
  sqcRZGate(q, 0.1385032897758557, 11);
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
  sqcRYGate(q, -2.3249645155579817, 0);
  sqcRZGate(q, -3.016366423655315, 0);
  sqcRYGate(q, -1.271909393694961, 1);
  sqcRZGate(q, -0.43534186195222624, 1);
  sqcRYGate(q, 2.5933546721193634, 2);
  sqcRZGate(q, 1.9919713520954927, 2);
  sqcRYGate(q, -0.9685665712092622, 3);
  sqcRZGate(q, 0.39640028757123513, 3);
  sqcRYGate(q, -0.08035849771287155, 4);
  sqcRZGate(q, -2.5066647636016253, 4);
  sqcRYGate(q, -2.8233969744266902, 5);
  sqcRZGate(q, -1.9309410435988434, 5);
  sqcRYGate(q, 1.6228325738823088, 6);
  sqcRZGate(q, 1.059993487195955, 6);
  sqcRYGate(q, 2.346685748186696, 7);
  sqcRZGate(q, 0.2618066413732168, 7);
  sqcRYGate(q, 1.4825710217177317, 8);
  sqcRZGate(q, -1.3491117491573639, 8);
  sqcRYGate(q, 3.103381244948866, 9);
  sqcRZGate(q, -1.4503321010270787, 9);
  sqcRYGate(q, -1.8136694010912129, 10);
  sqcRZGate(q, -1.4923150041127489, 10);
  sqcRYGate(q, -0.4796778448618717, 11);
  sqcRZGate(q, 2.9032706062971183, 11);
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
  sqcRYGate(q, -3.1325097719644996, 0);
  sqcRZGate(q, 1.885783656737617, 0);
  sqcRYGate(q, -3.129004682306816, 1);
  sqcRZGate(q, 0.6899958031625879, 1);
  sqcRYGate(q, -1.448682267977827, 2);
  sqcRZGate(q, 1.9276370868353851, 2);
  sqcRYGate(q, -1.6490048375037842, 3);
  sqcRZGate(q, -2.757210580302443, 3);
  sqcRYGate(q, -0.00030501008038876556, 4);
  sqcRZGate(q, 0.3008781252749628, 4);
  sqcRYGate(q, -0.005194400500413189, 5);
  sqcRZGate(q, -0.2465653300807696, 5);
  sqcRYGate(q, -9.651867338700272e-05, 6);
  sqcRZGate(q, 0.4475899074508205, 6);
  sqcRYGate(q, 5.1376391048823264e-05, 7);
  sqcRZGate(q, 2.686723447062933, 7);
  sqcRYGate(q, -1.5733081277863477, 8);
  sqcRZGate(q, -1.5703221455587677, 8);
  sqcRYGate(q, 1.573411520000666, 9);
  sqcRZGate(q, 1.5787773823815963, 9);
  sqcRYGate(q, 2.4965682293074933, 10);
  sqcRZGate(q, -2.6600762756178455, 10);
  sqcRYGate(q, -1.6135301339770634, 11);
  sqcRZGate(q, -0.5811470075575894, 11);
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
  sqcRYGate(q, -0.1668980161946445, 0);
  sqcRZGate(q, 1.2241771931355974, 0);
  sqcRYGate(q, -3.0330943803966455, 1);
  sqcRZGate(q, 0.050099596364504784, 1);
  sqcRYGate(q, 0.37999697341690813, 2);
  sqcRZGate(q, 0.8753859513688917, 2);
  sqcRYGate(q, -0.7591407158009966, 3);
  sqcRZGate(q, -1.3284441008678896, 3);
  sqcRYGate(q, 1.5177217386743624, 4);
  sqcRZGate(q, 0.20911946064968845, 4);
  sqcRYGate(q, 1.606787351783429, 5);
  sqcRZGate(q, -1.43865634983252, 5);
  sqcRYGate(q, -1.663199552292325, 6);
  sqcRZGate(q, -0.6780068838352573, 6);
  sqcRYGate(q, 3.12422437409, 7);
  sqcRZGate(q, 0.0112276319411176, 7);
  sqcRYGate(q, 1.7355002771011474, 8);
  sqcRZGate(q, 1.5724846667969414, 8);
  sqcRYGate(q, -0.08835080818810592, 9);
  sqcRZGate(q, -1.5794435346730498, 9);
  sqcRYGate(q, -0.08980616555462806, 10);
  sqcRZGate(q, 0.23653070799430972, 10);
  sqcRYGate(q, -2.986445855400436, 11);
  sqcRZGate(q, -1.706581111432887, 11);
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
  sqcRYGate(q, 0.0025514357728031304, 0);
  sqcRZGate(q, -0.6896420213519905, 0);
  sqcRYGate(q, -0.010167650795124494, 1);
  sqcRZGate(q, -0.49060369573598983, 1);
  sqcRYGate(q, -3.1374593320455, 2);
  sqcRZGate(q, 2.7604123642341194, 2);
  sqcRYGate(q, -3.141417396759275, 3);
  sqcRZGate(q, -0.7119652793628255, 3);
  sqcRYGate(q, -0.002334636405374013, 4);
  sqcRZGate(q, 3.10394214288207, 4);
  sqcRYGate(q, 3.1151588359782196, 5);
  sqcRZGate(q, -3.1248557240581154, 5);
  sqcRYGate(q, 1.5709099073938997, 6);
  sqcRZGate(q, -0.00010289441774603619, 6);
  sqcRYGate(q, 1.5708524589113306, 7);
  sqcRZGate(q, -3.14153872375383, 7);
  sqcRYGate(q, 1.5753266265376702, 8);
  sqcRZGate(q, 1.5550673556289059, 8);
  sqcRYGate(q, 1.5674961353704635, 9);
  sqcRZGate(q, 1.9031703151388664, 9);
  sqcRYGate(q, 3.039790152400792, 10);
  sqcRZGate(q, -1.7335903696400525, 10);
  sqcRYGate(q, -2.3275851169635895, 11);
  sqcRZGate(q, -2.7323147245030532, 11);
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
  sqcRYGate(q, 0.23724723330205766, 0);
  sqcRZGate(q, -2.2762470410897624, 0);
  sqcRYGate(q, -1.692275627900778, 1);
  sqcRZGate(q, -2.595943200433697, 1);
  sqcRYGate(q, 1.5007464765985485, 2);
  sqcRZGate(q, 1.0890323506676758, 2);
  sqcRYGate(q, -1.6199753004608404, 3);
  sqcRZGate(q, -1.4882176873431332, 3);
  sqcRYGate(q, 3.14117160794039, 4);
  sqcRZGate(q, 1.7308949921506624, 4);
  sqcRYGate(q, -3.1413235960255474, 5);
  sqcRZGate(q, -0.05262994693200796, 5);
  sqcRYGate(q, 1.5708530026388523, 6);
  sqcRZGate(q, -1.1188818122245054, 6);
  sqcRYGate(q, -1.5709145505101496, 7);
  sqcRZGate(q, -2.111577815674018, 7);
  sqcRYGate(q, -0.0012262325672715486, 8);
  sqcRZGate(q, -0.648615723924248, 8);
  sqcRYGate(q, -3.140042016416054, 9);
  sqcRZGate(q, 0.32665755644431194, 9);
  sqcRYGate(q, -2.9642328586697633, 10);
  sqcRZGate(q, -1.4143572193878444, 10);
  sqcRYGate(q, -2.8960433363325953, 11);
  sqcRZGate(q, -2.148778574554135, 11);
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
  sqcRYGate(q, -1.75831103711111, 0);
  sqcRZGate(q, -0.0025356453359676465, 0);
  sqcRYGate(q, 1.5633444698972712, 1);
  sqcRZGate(q, -0.12601808717247764, 1);
  sqcRYGate(q, -0.04403201631844079, 2);
  sqcRZGate(q, -1.0092237823663606, 2);
  sqcRYGate(q, 0.24571744245499968, 3);
  sqcRZGate(q, 1.5874948703108633, 3);
  sqcRYGate(q, -1.5649352604056403, 4);
  sqcRZGate(q, -1.1501244957303207, 4);
  sqcRYGate(q, 1.570408932419129, 5);
  sqcRZGate(q, -2.3414553641494473, 5);
  sqcRYGate(q, -2.286036686985215, 6);
  sqcRZGate(q, 0.5091104051600199, 6);
  sqcRYGate(q, -2.360315479962732, 7);
  sqcRZGate(q, 0.9483712047152755, 7);
  sqcRYGate(q, 0.00022861087438140086, 8);
  sqcRZGate(q, 2.8692038305113203, 8);
  sqcRYGate(q, -1.5914035456808868, 9);
  sqcRZGate(q, 1.8814685847029793, 9);
  sqcRYGate(q, 1.8219359033376221, 10);
  sqcRZGate(q, -2.8524050980006934, 10);
  sqcRYGate(q, -1.1427729901704256, 11);
  sqcRZGate(q, -0.9073767849457813, 11);
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
  sqcRYGate(q, 1.5060396799493805, 0);
  sqcRZGate(q, -1.7587893775064112, 0);
  sqcRYGate(q, -1.5667799439024301, 1);
  sqcRZGate(q, -0.3718524215159892, 1);
  sqcRYGate(q, 1.5717200065609063, 2);
  sqcRZGate(q, -3.130782523918493, 2);
  sqcRYGate(q, -1.5742919669539626, 3);
  sqcRZGate(q, -6.756750211067697e-05, 3);
  sqcRYGate(q, 0.0005114755575093, 4);
  sqcRZGate(q, -0.4689472855791993, 4);
  sqcRYGate(q, -3.1400689322422966, 5);
  sqcRZGate(q, 2.4006203951217606, 5);
  sqcRYGate(q, -8.495138777853128e-05, 6);
  sqcRZGate(q, -1.0421078702047168, 6);
  sqcRYGate(q, 3.1407022529132944, 7);
  sqcRZGate(q, 1.4065972350583558, 7);
  sqcRYGate(q, 3.141140617878969, 8);
  sqcRZGate(q, -2.4220315058521438, 8);
  sqcRYGate(q, -0.00010756594463234848, 9);
  sqcRZGate(q, -0.6043585621302985, 9);
  sqcRYGate(q, 1.5700085471986878, 10);
  sqcRZGate(q, -1.5694921673222364, 10);
  sqcRYGate(q, 1.5709967131839164, 11);
  sqcRZGate(q, 1.5720478200617614, 11);
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
  sqcRYGate(q, -3.0637121445309647, 0);
  sqcRZGate(q, -1.7571896937875295, 0);
  sqcRYGate(q, 0.01706120784609677, 1);
  sqcRZGate(q, -1.2165868724505753, 1);
  sqcRYGate(q, 1.5547775383797386, 2);
  sqcRZGate(q, -1.5724883389686184, 2);
  sqcRYGate(q, 1.6154312122695496, 3);
  sqcRZGate(q, 1.5731685197841765, 3);
  sqcRYGate(q, 1.5785960080326151, 4);
  sqcRZGate(q, -3.1362123995670435, 4);
  sqcRYGate(q, -1.571993800907751, 5);
  sqcRZGate(q, -0.0076374229542449865, 5);
  sqcRYGate(q, -2.16369728032263, 6);
  sqcRZGate(q, 0.6787113523371688, 6);
  sqcRYGate(q, -1.6297472488429783, 7);
  sqcRZGate(q, -0.0013258104480301002, 7);
  sqcRYGate(q, -3.098857813114602, 8);
  sqcRZGate(q, 1.6790848035637005, 8);
  sqcRYGate(q, -1.5738418057805115, 9);
  sqcRZGate(q, -3.1216381173234504, 9);
  sqcRYGate(q, 0.9566402798849438, 10);
  sqcRZGate(q, -1.5656684783174315, 10);
  sqcRYGate(q, 0.9774063239855605, 11);
  sqcRZGate(q, 1.5697607895843841, 11);

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
