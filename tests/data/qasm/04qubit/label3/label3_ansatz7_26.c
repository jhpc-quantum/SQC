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

  sqcRYGate(q, -2.6415131618752774, 0);
  sqcRYGate(q, -1.4920866581931311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5265858611756362, 0);
  sqcRYGate(q, -0.025719749279316417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0338567527008315, 0);
  sqcRYGate(q, 2.0448603999192168, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6662287351800233, 0);
  sqcRYGate(q, -1.2910956251303167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17577430487625811, 0);
  sqcRYGate(q, 2.7959820127705726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.603038228021197, 0);
  sqcRYGate(q, 2.3552086341226883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4190335812196224, 1);
  sqcRYGate(q, -1.2793251591551815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7534241589980075, 1);
  sqcRYGate(q, -2.3605018467268635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9025927084444895, 1);
  sqcRYGate(q, -2.8775410363825014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8027687647973574, 1);
  sqcRYGate(q, -2.3190629721086777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2791952372447577, 2);
  sqcRYGate(q, -1.6767705884151873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03312432294622741, 2);
  sqcRYGate(q, -0.022414313627476323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.568139672550732, 0);
  sqcRYGate(q, 2.708793565813478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.140102450954957, 0);
  sqcRYGate(q, 0.9783642716166768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13607049596018408, 0);
  sqcRYGate(q, 2.4482734863753084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9218595701463603, 0);
  sqcRYGate(q, 1.57012476887492, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9399950136530006, 0);
  sqcRYGate(q, -2.4772622581174017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.596045560181053, 0);
  sqcRYGate(q, 0.00987670177946942, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.017049236573043, 1);
  sqcRYGate(q, 0.5062134611369081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.531796077339095, 1);
  sqcRYGate(q, 1.83035166721094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5805896464153459, 1);
  sqcRYGate(q, 1.708582517127427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0254852453682124, 1);
  sqcRYGate(q, -2.2187385639951835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.085604792248498, 2);
  sqcRYGate(q, 1.857357640816194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2285503424507258, 2);
  sqcRYGate(q, -1.8122930762155927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.410282836812184, 0);
  sqcRYGate(q, -1.2452345145128463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0999008688228715, 0);
  sqcRYGate(q, -0.5022271963732198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1383017868685983, 0);
  sqcRYGate(q, 2.647507968609154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.282936694005087, 0);
  sqcRYGate(q, 0.021737588176755297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8133149281841074, 0);
  sqcRYGate(q, 1.8395331350145865, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0158429760874987, 0);
  sqcRYGate(q, -3.110222066086273, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.69430864801398, 1);
  sqcRYGate(q, 2.9825352183311575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3416161591732348, 1);
  sqcRYGate(q, 1.58836967177262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1540594652030425, 1);
  sqcRYGate(q, -0.999675275519778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9245019253728537, 1);
  sqcRYGate(q, 0.45209193758086313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.750390753493356, 2);
  sqcRYGate(q, 1.561860884088414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.033804331621562156, 2);
  sqcRYGate(q, 2.432156066753287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9062832621874359, 0);
  sqcRYGate(q, 1.6027674697909409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1955262058241471, 0);
  sqcRYGate(q, 1.4046605728589148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9552736245962523, 0);
  sqcRYGate(q, -0.4004279435854716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40928981631469, 0);
  sqcRYGate(q, -1.1606032838549243, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5623116927291996, 0);
  sqcRYGate(q, -1.0534484542314908, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6094903561864868, 0);
  sqcRYGate(q, -0.45022834778136145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1313928043981663, 1);
  sqcRYGate(q, -1.3283588795714845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9082763647547472, 1);
  sqcRYGate(q, -2.507689433002161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.416090500532038, 1);
  sqcRYGate(q, -1.4820281463973703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06462591634448671, 1);
  sqcRYGate(q, -1.757043774719117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.22220212641758796, 2);
  sqcRYGate(q, 1.6894976922866745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.329685708915174, 2);
  sqcRYGate(q, 1.9770607376822613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.340121378443719, 0);
  sqcRYGate(q, -2.9598589197822953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.702985454204294, 0);
  sqcRYGate(q, 2.50374453426589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6973091552003647, 0);
  sqcRYGate(q, -0.9917269885549436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2448868893385305, 0);
  sqcRYGate(q, 2.078983715491784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.45675803481356486, 0);
  sqcRYGate(q, 0.4959902670342914, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9631276937963394, 0);
  sqcRYGate(q, 1.7480882199979986, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.26349893907414934, 1);
  sqcRYGate(q, 1.8521481964661535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5274460740146107, 1);
  sqcRYGate(q, 2.4902914328223154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6276671315813741, 1);
  sqcRYGate(q, 1.986930891877705, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8331223819965268, 1);
  sqcRYGate(q, -3.0995637232419333, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1550439048469139, 2);
  sqcRYGate(q, 0.00017812195031982131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.23785947426959, 2);
  sqcRYGate(q, 1.7048042082972465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.415061676670176, 0);
  sqcRYGate(q, -0.3364939027375131, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5231775786699666, 0);
  sqcRYGate(q, -2.348422342215299, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.745830186066169, 0);
  sqcRYGate(q, -2.427622668017151, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2359425347165116, 0);
  sqcRYGate(q, 2.3336740576246644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9318399624132514, 0);
  sqcRYGate(q, -2.452322725875816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.47489280543978574, 0);
  sqcRYGate(q, 2.693768796232306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.630440328551767, 1);
  sqcRYGate(q, 2.6968452060956563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4468096294205344, 1);
  sqcRYGate(q, 2.061531559731437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.29801868961626354, 1);
  sqcRYGate(q, -2.486608005143835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.023439331217551, 1);
  sqcRYGate(q, -1.9597456021790036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2044832722879688, 2);
  sqcRYGate(q, -0.6347600735158059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0159976069610615, 2);
  sqcRYGate(q, 0.5143443890606259, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0816206356976985, 0);
  sqcRYGate(q, -2.53773320405272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3656650398456802, 0);
  sqcRYGate(q, 2.193900627907828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6551448513385474, 0);
  sqcRYGate(q, -2.203729514499977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.670853464020428, 0);
  sqcRYGate(q, 0.8943950669466645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1021405804445843, 0);
  sqcRYGate(q, -1.3247981838007992, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.208153295753231, 0);
  sqcRYGate(q, -1.0816494465329791, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0896154294033416, 1);
  sqcRYGate(q, -3.0324030523625867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.40761678276367747, 1);
  sqcRYGate(q, 0.583000508693801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.194168752259153, 1);
  sqcRYGate(q, -1.8100765339531928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6157511307117844, 1);
  sqcRYGate(q, -2.4765455069242734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6626988976930286, 2);
  sqcRYGate(q, -3.1410148949675847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9072735841589541, 2);
  sqcRYGate(q, -0.86512079096785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2400352411505207, 0);
  sqcRYGate(q, -3.1071171946743448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0515188992151607, 0);
  sqcRYGate(q, 1.7390302037082257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12781178727026798, 0);
  sqcRYGate(q, -3.1399954785023794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9257827381191963, 0);
  sqcRYGate(q, 0.3533936333768297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.064536268860525, 0);
  sqcRYGate(q, -2.737024013461828, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7522326504661032, 0);
  sqcRYGate(q, 0.6019363062225945, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.28585323049174516, 1);
  sqcRYGate(q, -1.7723570925081757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1920293588189148, 1);
  sqcRYGate(q, 1.5131825175347906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3673708178915938, 1);
  sqcRYGate(q, 1.2787856536914055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9708272572984067, 1);
  sqcRYGate(q, 2.3118472403895214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1666791908382796, 2);
  sqcRYGate(q, 0.538841336350079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8233821213836228, 2);
  sqcRYGate(q, -0.011827775454408496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6685128435794088, 0);
  sqcRYGate(q, -1.1640168153177626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4621601332376493, 0);
  sqcRYGate(q, 2.7295078422208165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0973643755397173, 0);
  sqcRYGate(q, 2.1228555907984332, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.37913239525736314, 0);
  sqcRYGate(q, 0.6113949212098913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4036705398649856, 0);
  sqcRYGate(q, 0.5289752054423444, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4935110700418197, 0);
  sqcRYGate(q, -0.7474738041538971, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.05043447128265302, 1);
  sqcRYGate(q, 0.7332251614101241, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35327861139936356, 1);
  sqcRYGate(q, 0.06588320172921536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5683994944962762, 1);
  sqcRYGate(q, 2.1814474563707726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.240416166724664, 1);
  sqcRYGate(q, 1.4921399269091467, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.676923555511238, 2);
  sqcRYGate(q, 0.4033548446045865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2950833683843495, 2);
  sqcRYGate(q, -1.5899447272680778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1086716786927493, 0);
  sqcRYGate(q, 1.9924370919585224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8774352938187961, 0);
  sqcRYGate(q, -2.0352153636928296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6613385110543757, 0);
  sqcRYGate(q, 1.0507037154501486, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9054123532586367, 0);
  sqcRYGate(q, -2.057142444521131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.383250007938101, 0);
  sqcRYGate(q, -1.6976931151148587, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.38142628170433146, 0);
  sqcRYGate(q, -0.1694902896854238, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9198872786893997, 1);
  sqcRYGate(q, 2.868723976482845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.920728528016471, 1);
  sqcRYGate(q, 0.7104109361587647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5438670826891319, 1);
  sqcRYGate(q, 0.6305255677256048, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.40633458402516176, 1);
  sqcRYGate(q, -1.0074240884276455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0398716397003174, 2);
  sqcRYGate(q, -2.062400606711461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14154198278855334, 2);
  sqcRYGate(q, 2.4722853229638475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40318017668484807, 0);
  sqcRYGate(q, -1.4171105586261543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28575620785622213, 0);
  sqcRYGate(q, -2.5037216499602444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6132195824536577, 0);
  sqcRYGate(q, -2.3228914321113967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9374482092234797, 0);
  sqcRYGate(q, -1.3995728899286144, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.974230669374304, 0);
  sqcRYGate(q, -2.5868572839958364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.520669140043852, 0);
  sqcRYGate(q, -0.2990207935334892, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8427819797903788, 1);
  sqcRYGate(q, 2.4053666207365234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.788058391933909, 1);
  sqcRYGate(q, -2.5519043659625615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8674432580516296, 1);
  sqcRYGate(q, -1.5954855881732755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2101905525542668, 1);
  sqcRYGate(q, 0.5375917885470942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.86005772313458, 2);
  sqcRYGate(q, -0.6760642866399573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5735925587970776, 2);
  sqcRYGate(q, -2.8801592433179395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7554806029128383, 0);
  sqcRYGate(q, 2.556629705576996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10318680046708995, 0);
  sqcRYGate(q, 0.9454593553048429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1190941784044357, 0);
  sqcRYGate(q, -2.2324799863909037, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3909741031541643, 0);
  sqcRYGate(q, 0.10800220004150517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1543927082242342, 0);
  sqcRYGate(q, -0.40154678862587784, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.855942379619645, 0);
  sqcRYGate(q, 1.3583962929444102, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.728285932037709, 1);
  sqcRYGate(q, 2.9153247727817058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.13953761631764, 1);
  sqcRYGate(q, 0.9869224833114378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2991478557841067, 1);
  sqcRYGate(q, 0.8350038533175379, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.064058326261862, 1);
  sqcRYGate(q, 2.9666076130660706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4636376392763397, 2);
  sqcRYGate(q, 0.7582004536887893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23631895413461054, 2);
  sqcRYGate(q, -2.6850500316897628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.319870297236327, 0);
  sqcRYGate(q, 3.079511160288315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.027700423529194218, 0);
  sqcRYGate(q, -2.291837093438378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8085209422020365, 0);
  sqcRYGate(q, -2.657244078588347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8834678589034795, 0);
  sqcRYGate(q, -1.0446339462760963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0637889285488773, 0);
  sqcRYGate(q, 2.21281291074892, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5934873893199824, 0);
  sqcRYGate(q, -1.9916675052164794, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2530516117192207, 1);
  sqcRYGate(q, -1.8524049701857317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8193638428079658, 1);
  sqcRYGate(q, 2.8150243677493028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9013607140181623, 1);
  sqcRYGate(q, 0.38054848829451104, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8684683703419349, 1);
  sqcRYGate(q, -2.111620601804466, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7782988175140133, 2);
  sqcRYGate(q, 1.0125513327772584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5288878839325526, 2);
  sqcRYGate(q, 0.06684163904003972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1102073708016604, 0);
  sqcRYGate(q, -1.5792806033186606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2060262622476867, 0);
  sqcRYGate(q, 1.9854006346258135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.181060696619772, 0);
  sqcRYGate(q, 2.9957295662261227, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.450616182465157, 0);
  sqcRYGate(q, -1.4455656645253143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.558583966646517, 0);
  sqcRYGate(q, 2.495469531636009, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9287851826353624, 0);
  sqcRYGate(q, 3.0173978340788827, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4849308314477271, 1);
  sqcRYGate(q, -0.7314582419936908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.28506097682770637, 1);
  sqcRYGate(q, -0.8431884815159467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7811160289025585, 1);
  sqcRYGate(q, 2.275931996912847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9503252832167004, 1);
  sqcRYGate(q, 2.6164862532821296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8261941064358973, 2);
  sqcRYGate(q, -3.061533266127089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1580812090629657, 2);
  sqcRYGate(q, 1.9465712506595851, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4847449026479848, 0);
  sqcRYGate(q, -0.3203958372160818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2202235707110414, 0);
  sqcRYGate(q, -2.0878922096138006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23573683222543004, 0);
  sqcRYGate(q, -2.6318210396647457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3620790290800002, 0);
  sqcRYGate(q, 1.787137426251751, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1282573108602334, 0);
  sqcRYGate(q, -0.12600590515327792, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0392544000845696, 0);
  sqcRYGate(q, -2.541785112259919, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6250715327515702, 1);
  sqcRYGate(q, -0.0439130019350209, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6185974327291144, 1);
  sqcRYGate(q, 2.3076102650216845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8648778603518004, 1);
  sqcRYGate(q, 0.19030006448096873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3793830257630693, 1);
  sqcRYGate(q, -0.8786443842729758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.09889995097537, 2);
  sqcRYGate(q, -2.649332300270291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7495275238347316, 2);
  sqcRYGate(q, -1.1179634400411738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.118763140998765, 0);
  sqcRYGate(q, 3.0372336008329275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.795058038169573, 0);
  sqcRYGate(q, 2.627047025061674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9901273831551443, 0);
  sqcRYGate(q, 3.1051316638234496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12501175967276149, 0);
  sqcRYGate(q, 2.4069724279879505, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.496758288643233, 0);
  sqcRYGate(q, -2.016170942106336, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4727443236647168, 0);
  sqcRYGate(q, -1.048672069565674, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1789979614080197, 1);
  sqcRYGate(q, -1.888607925746524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41834711242974176, 1);
  sqcRYGate(q, 0.26743883338173535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48822586677319874, 1);
  sqcRYGate(q, -2.67716364030566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.35382103485522, 1);
  sqcRYGate(q, 2.0860323553635434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5870815410149683, 2);
  sqcRYGate(q, -2.850198804294073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1119075913633694, 2);
  sqcRYGate(q, 3.023318837216781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.314367595832458, 0);
  sqcRYGate(q, 0.1632447755834781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.809274794950942, 0);
  sqcRYGate(q, -1.4356032973602417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.172431166368205, 0);
  sqcRYGate(q, 2.022684505101374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8398808211501719, 0);
  sqcRYGate(q, 2.871289203057182, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7642496270911288, 0);
  sqcRYGate(q, 1.5238613084908312, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2663958150360077, 0);
  sqcRYGate(q, 2.7913856015523426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.674149100667993, 1);
  sqcRYGate(q, -1.814673159556341, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6081776333314313, 1);
  sqcRYGate(q, 1.174615880518463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.541482264202482, 1);
  sqcRYGate(q, 0.9217187294143505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.926526489628266, 1);
  sqcRYGate(q, 2.350007468212262, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.903148199546959, 2);
  sqcRYGate(q, 1.0230700974055402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.666342911458314, 2);
  sqcRYGate(q, 2.9462664274632813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7115998045547833, 0);
  sqcRYGate(q, 1.6537534318330354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.891451539744969, 0);
  sqcRYGate(q, 0.5908676016987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.763072555391364, 0);
  sqcRYGate(q, -0.24703226095142133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9886596509303818, 0);
  sqcRYGate(q, 2.7958348861646036, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.19082051089791974, 0);
  sqcRYGate(q, -1.749727024386842, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.02501783900347349, 0);
  sqcRYGate(q, -0.9556814832213905, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2680530987631158, 1);
  sqcRYGate(q, -0.8861966241814049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3331210215492915, 1);
  sqcRYGate(q, -2.631670131771304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8359094382087138, 1);
  sqcRYGate(q, 0.23577946655038673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0107396924098735, 1);
  sqcRYGate(q, 0.33272516483649356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.640285204971249, 2);
  sqcRYGate(q, 0.337123050828559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.245270042108074, 2);
  sqcRYGate(q, -1.3037635260917504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1064245915919555, 0);
  sqcRYGate(q, 2.778547754296701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.116286629035064, 0);
  sqcRYGate(q, -2.4003707141549, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3689168231653266, 0);
  sqcRYGate(q, 2.246247168661124, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1215092260084685, 0);
  sqcRYGate(q, 0.04296331439881662, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4403895125021515, 0);
  sqcRYGate(q, 2.5614520657955118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8401375804971494, 0);
  sqcRYGate(q, 1.3831255617150973, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.550952120044434, 1);
  sqcRYGate(q, 1.9768002754929386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0422808544777964, 1);
  sqcRYGate(q, 2.606028884145448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9020779116000865, 1);
  sqcRYGate(q, 2.729105065734265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.695265667987215, 1);
  sqcRYGate(q, -2.320792377052511, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0781502782019627, 2);
  sqcRYGate(q, -2.9744732392372955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0510120064944823, 2);
  sqcRYGate(q, -0.3468613713893598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7524981280842686, 0);
  sqcRYGate(q, -0.5441965955861576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2907008045196333, 0);
  sqcRYGate(q, 1.2093386512319364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0463192940315533, 0);
  sqcRYGate(q, 3.124913697461683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1733592278357845, 0);
  sqcRYGate(q, 1.3378718956117748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3328397158278316, 0);
  sqcRYGate(q, -1.0128536601913032, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0759284904049418, 0);
  sqcRYGate(q, -0.30368501449487084, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3891735682143178, 1);
  sqcRYGate(q, -1.8973928170860725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.728479132131922, 1);
  sqcRYGate(q, -1.826485698392148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2067643780215516, 1);
  sqcRYGate(q, 2.994314792354455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.887263645362683, 1);
  sqcRYGate(q, -1.7608179842249463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.36661595613951614, 2);
  sqcRYGate(q, -1.6016895923274186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3573104113017177, 2);
  sqcRYGate(q, -0.12920833894882794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2147478036505222, 0);
  sqcRYGate(q, -1.0683177157601493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.895223343169919, 0);
  sqcRYGate(q, 1.2357957454277084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.234631492798079, 0);
  sqcRYGate(q, -2.830791333070998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1197360930563143, 0);
  sqcRYGate(q, -2.955367085704875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2665638309945244, 0);
  sqcRYGate(q, -2.251894583108622, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1580800569985001, 0);
  sqcRYGate(q, -0.6054241490796174, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.26887890001859727, 1);
  sqcRYGate(q, 2.4850069531070083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.856259565311042, 1);
  sqcRYGate(q, -0.6689718254292635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1631164197756514, 1);
  sqcRYGate(q, 0.22031831071143684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.946585914537179, 1);
  sqcRYGate(q, 0.60847916331548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5965913285345144, 2);
  sqcRYGate(q, -1.1289651745767664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.084891359412448, 2);
  sqcRYGate(q, 1.7292198567565442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.479253984800131, 0);
  sqcRYGate(q, 1.1063682659845684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3583116160289084, 0);
  sqcRYGate(q, -0.15731802347499446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0480136306743773, 0);
  sqcRYGate(q, 1.362367869120072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4264269671144219, 0);
  sqcRYGate(q, 1.829494004476766, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5367337651002431, 0);
  sqcRYGate(q, -1.5889136854651689, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6032803759181147, 0);
  sqcRYGate(q, -0.10861538394559211, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.717930017432398, 1);
  sqcRYGate(q, -1.252361675287231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6188861086456834, 1);
  sqcRYGate(q, 0.9498131384175341, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1490843624822353, 1);
  sqcRYGate(q, 0.7901874244083137, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3027434815909314, 1);
  sqcRYGate(q, 2.809882564337465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1564361616624617, 2);
  sqcRYGate(q, 1.5915804082561822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7108242148777029, 2);
  sqcRYGate(q, 2.913227790995391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9345076672275398, 0);
  sqcRYGate(q, -1.4664985427715307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7560267003225993, 0);
  sqcRYGate(q, -1.6338833070311325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.748200078238091, 0);
  sqcRYGate(q, -0.5052836755152006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.15028612807273767, 0);
  sqcRYGate(q, 1.8850916878015793, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.641755503153581, 0);
  sqcRYGate(q, -2.1680298117349173, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.589699385871282, 0);
  sqcRYGate(q, 3.0813292743312704, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6767177115780165, 1);
  sqcRYGate(q, -0.12452339839350092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.777348519742613, 1);
  sqcRYGate(q, 2.615697024402897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.127386903015634, 1);
  sqcRYGate(q, -2.7249899692089885, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.063963006234829, 1);
  sqcRYGate(q, 1.3738467636982614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1146502765967674, 2);
  sqcRYGate(q, 0.2482465202456368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7108245307372556, 2);
  sqcRYGate(q, 2.049045086973308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.541754507201188, 0);
  sqcRYGate(q, 2.22909320057656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.969790722454502, 0);
  sqcRYGate(q, -0.24375359304544283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.546589896428067, 0);
  sqcRYGate(q, -2.568863155472049, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.40413203246439744, 0);
  sqcRYGate(q, 3.1290835728677195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1257557293504963, 0);
  sqcRYGate(q, 2.043459995493689, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8924290096887526, 0);
  sqcRYGate(q, 2.2246163704111837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2369120371489323, 1);
  sqcRYGate(q, -0.6643849566878635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.511903059690425, 1);
  sqcRYGate(q, 1.6521521725430068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.718336618741203, 1);
  sqcRYGate(q, 1.8675570980840863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8408849536532728, 1);
  sqcRYGate(q, 0.8776765559288409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5520527541822053, 2);
  sqcRYGate(q, 2.434110760519326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.178563596060292, 2);
  sqcRYGate(q, -0.7333590506961327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05836006661760621, 0);
  sqcRYGate(q, 1.8874389583546494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4524875750951436, 0);
  sqcRYGate(q, 2.796647142420809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41599389601155595, 0);
  sqcRYGate(q, 1.0415405337045263, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.36563260093841427, 0);
  sqcRYGate(q, 2.9306245471216226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6746908341581548, 0);
  sqcRYGate(q, 0.14327602247290905, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0026685350992536887, 0);
  sqcRYGate(q, -2.5080245531989807, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.601641966307012, 1);
  sqcRYGate(q, -3.0704054225079638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3622919352297345, 1);
  sqcRYGate(q, -1.259933105414599, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.34935300347400394, 1);
  sqcRYGate(q, 2.6631170788753096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.37686723277947504, 1);
  sqcRYGate(q, 2.2936986896365097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9304528978973732, 2);
  sqcRYGate(q, -1.7679789610233962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4997511792928124, 2);
  sqcRYGate(q, -2.0085943594648468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.349226758662556, 0);
  sqcRYGate(q, -2.04997357610225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3622568927466225, 0);
  sqcRYGate(q, -0.8766828112780312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.873061289376475, 0);
  sqcRYGate(q, -1.8092692866818123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2046785421672193, 0);
  sqcRYGate(q, 2.5980047196727054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4621033096033775, 0);
  sqcRYGate(q, -1.1796446794474476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0502260581377383, 0);
  sqcRYGate(q, 1.0482865063752518, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06765677970190896, 1);
  sqcRYGate(q, -2.721460807822456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36900538191784105, 1);
  sqcRYGate(q, 0.7416158228193866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5920608976978117, 1);
  sqcRYGate(q, -1.7257108213572723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0736819235252213, 1);
  sqcRYGate(q, 0.7205469733184682, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29980616488966966, 2);
  sqcRYGate(q, 1.4452928868245853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4331598326657837, 2);
  sqcRYGate(q, 2.968504183229766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7758213969389798, 0);
  sqcRYGate(q, -2.4634896435962133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.076934227637241, 0);
  sqcRYGate(q, -2.1574806334479737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5330991092190038, 0);
  sqcRYGate(q, -2.894584474016707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8796167646015941, 0);
  sqcRYGate(q, -0.5936187456511306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2646851769688183, 0);
  sqcRYGate(q, -2.349501704671133, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.029874986380711996, 0);
  sqcRYGate(q, 2.590221814882017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8604561265645164, 1);
  sqcRYGate(q, 2.1689257548017133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7589986260335233, 1);
  sqcRYGate(q, -0.07346541762305847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3867219427087578, 1);
  sqcRYGate(q, -0.2259402181526955, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2956454997777858, 1);
  sqcRYGate(q, 1.7832066832079674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7151363016992729, 2);
  sqcRYGate(q, -1.2684721401643477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35383078464896184, 2);
  sqcRYGate(q, -1.568518354291291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.266510325080869, 0);
  sqcRYGate(q, 1.7943626694309553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22127882690701295, 0);
  sqcRYGate(q, -1.3276137483579822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17789150677238474, 0);
  sqcRYGate(q, 1.5381834748151846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6413910265876802, 0);
  sqcRYGate(q, 0.1519829007532909, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2940809657250723, 0);
  sqcRYGate(q, -2.4535663176849147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7709553394800146, 0);
  sqcRYGate(q, -0.9712690642349546, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0910856339512156, 1);
  sqcRYGate(q, -1.469583699283998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7489098369988259, 1);
  sqcRYGate(q, 2.3429650020286403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.370426010414946, 1);
  sqcRYGate(q, 2.915804206313401, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.32162851948660764, 1);
  sqcRYGate(q, 2.711023323006349, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.756282663642511, 2);
  sqcRYGate(q, 0.0695656757207681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0304788661687225, 2);
  sqcRYGate(q, 1.3646719408422594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.056290541684409, 0);
  sqcRYGate(q, 1.8596701309448065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7549392198398233, 0);
  sqcRYGate(q, -1.258868563484749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3033191639048125, 0);
  sqcRYGate(q, -1.2202283902665432, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1904760273845536, 0);
  sqcRYGate(q, -2.3980253625331454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4148549956221284, 0);
  sqcRYGate(q, -1.1126690918537978, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.203246051466579, 0);
  sqcRYGate(q, 0.11328109537399503, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.939525873194025, 1);
  sqcRYGate(q, 1.491227480285355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2036192034267863, 1);
  sqcRYGate(q, 2.0998823932464434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07645373005523699, 1);
  sqcRYGate(q, -3.12737547849565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0999385736404415, 1);
  sqcRYGate(q, -2.8619772345377736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7619120457837854, 2);
  sqcRYGate(q, 2.677330455207647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0055810451842575, 2);
  sqcRYGate(q, -1.67642858654209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5051475038764357, 0);
  sqcRYGate(q, -1.070779382095318, 1);
  sqcRYGate(q, 1.2251550066180643, 2);
  sqcRYGate(q, -1.1166285216409073, 3);

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
