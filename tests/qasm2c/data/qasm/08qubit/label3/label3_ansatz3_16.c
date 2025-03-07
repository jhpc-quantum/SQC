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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.6848643527716671, 0);
  sqcRZGate(q, -1.7251102647831305, 0);
  sqcRYGate(q, 0.9977940629711703, 1);
  sqcRZGate(q, -1.2867050178552724, 1);
  sqcRYGate(q, -0.4590714888347769, 2);
  sqcRZGate(q, 0.08252891155078235, 2);
  sqcRYGate(q, -3.1413298747017033, 3);
  sqcRZGate(q, 2.8648893581908355, 3);
  sqcRYGate(q, -0.8026479500607102, 4);
  sqcRZGate(q, 0.13210432398347544, 4);
  sqcRYGate(q, 3.138665258127755, 5);
  sqcRZGate(q, -2.4445789065805252, 5);
  sqcRYGate(q, 3.043455310910325, 6);
  sqcRZGate(q, 0.28077276714787924, 6);
  sqcRYGate(q, 3.039116130713887, 7);
  sqcRZGate(q, 0.17547228772734158, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.6357432951567177, 0);
  sqcRZGate(q, 1.7608694922909323, 0);
  sqcRYGate(q, 2.48863078339703, 1);
  sqcRZGate(q, 0.4671475347682187, 1);
  sqcRYGate(q, -0.7677953597078888, 2);
  sqcRZGate(q, 2.416183767648929, 2);
  sqcRYGate(q, 0.0005406415664042327, 3);
  sqcRZGate(q, -1.5060890368918787, 3);
  sqcRYGate(q, 0.3750661057109458, 4);
  sqcRZGate(q, 2.681411959279129, 4);
  sqcRYGate(q, 3.1366765395150535, 5);
  sqcRZGate(q, -2.4552686843268736, 5);
  sqcRYGate(q, -1.227379108920828, 6);
  sqcRZGate(q, 1.646330107000571, 6);
  sqcRYGate(q, 1.5225565109679682, 7);
  sqcRZGate(q, 1.8542141984452405, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.5635307830775567, 0);
  sqcRZGate(q, -1.0220225100396014, 0);
  sqcRYGate(q, -0.9802817890200419, 1);
  sqcRZGate(q, 3.0531090653484405, 1);
  sqcRYGate(q, 2.007869062525025, 2);
  sqcRZGate(q, -0.2761267753192335, 2);
  sqcRYGate(q, 0.001027188424003874, 3);
  sqcRZGate(q, -1.3550497884677826, 3);
  sqcRYGate(q, -2.410366639608709, 4);
  sqcRZGate(q, -0.04556683063494127, 4);
  sqcRYGate(q, -0.006419286975059001, 5);
  sqcRZGate(q, 2.2282595301577697, 5);
  sqcRYGate(q, -1.7462868220863612, 6);
  sqcRZGate(q, -1.27664583078551, 6);
  sqcRYGate(q, -1.564329956473129, 7);
  sqcRZGate(q, -1.5775818211951547, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.1619288095456497, 0);
  sqcRZGate(q, 2.619924878751369, 0);
  sqcRYGate(q, 3.018165632181038, 1);
  sqcRZGate(q, -0.5084785082475074, 1);
  sqcRYGate(q, 0.15040220238781984, 2);
  sqcRZGate(q, -1.1801347928729076, 2);
  sqcRYGate(q, 3.1410654841114964, 3);
  sqcRZGate(q, 1.0669467396608696, 3);
  sqcRYGate(q, 3.0117869607994785, 4);
  sqcRZGate(q, 0.08782878555066465, 4);
  sqcRYGate(q, -3.139887759986877, 5);
  sqcRZGate(q, -0.9599511099166097, 5);
  sqcRYGate(q, 2.5518457392796905, 6);
  sqcRZGate(q, -2.878879307460059, 6);
  sqcRYGate(q, 1.7366305711946524, 7);
  sqcRZGate(q, -2.5229715949002007, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9358380696206547, 0);
  sqcRZGate(q, -1.2075397695661705, 0);
  sqcRYGate(q, 0.8505328138759758, 1);
  sqcRZGate(q, 2.6866196976125876, 1);
  sqcRYGate(q, 0.17479808498609548, 2);
  sqcRZGate(q, 2.9062773797733925, 2);
  sqcRYGate(q, -3.140545926067813, 3);
  sqcRZGate(q, 1.20253026710184, 3);
  sqcRYGate(q, -1.088614928121876, 4);
  sqcRZGate(q, 0.21612575981301416, 4);
  sqcRYGate(q, 1.5702646672039144, 5);
  sqcRZGate(q, 2.0343917946844607, 5);
  sqcRYGate(q, 2.913967430636814, 6);
  sqcRZGate(q, -0.24752422669498395, 6);
  sqcRYGate(q, -0.749037647991883, 7);
  sqcRZGate(q, -0.5965802345919664, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.3179314277202327, 0);
  sqcRZGate(q, 2.3834433605360297, 0);
  sqcRYGate(q, 1.6384888504469683, 1);
  sqcRZGate(q, 1.0770661097158845, 1);
  sqcRYGate(q, 0.08603798810549268, 2);
  sqcRZGate(q, 1.5968000749258053, 2);
  sqcRYGate(q, 3.1414889886122817, 3);
  sqcRZGate(q, -1.9001353611833445, 3);
  sqcRYGate(q, 1.568651226531879, 4);
  sqcRZGate(q, -3.0665337316195327, 4);
  sqcRYGate(q, 0.005872392685440708, 5);
  sqcRZGate(q, 2.1705857887657767, 5);
  sqcRYGate(q, -0.7459226579227218, 6);
  sqcRZGate(q, 0.09950213293233379, 6);
  sqcRYGate(q, -1.5756699065773463, 7);
  sqcRZGate(q, 3.0621120747711474, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7600717398153947, 0);
  sqcRZGate(q, 0.7992995681033142, 0);
  sqcRYGate(q, 1.9350661797934687, 1);
  sqcRZGate(q, 1.6678201847426488, 1);
  sqcRYGate(q, -0.002619039444279103, 2);
  sqcRZGate(q, -2.7204399027961097, 2);
  sqcRYGate(q, 2.135416732416212, 3);
  sqcRZGate(q, 2.872954576222183, 3);
  sqcRYGate(q, -1.729454585526411, 4);
  sqcRZGate(q, -1.5487755259513816, 4);
  sqcRYGate(q, 0.00043062065234611424, 5);
  sqcRZGate(q, -0.18561522671169775, 5);
  sqcRYGate(q, 1.5581698088437541, 6);
  sqcRZGate(q, 2.9651023927682187, 6);
  sqcRYGate(q, 2.520384145579334, 7);
  sqcRZGate(q, -1.6116685520705207, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.07439596256004895, 0);
  sqcRZGate(q, -0.6903807706226099, 0);
  sqcRYGate(q, 0.004032100534901994, 1);
  sqcRZGate(q, 2.966123917544075, 1);
  sqcRYGate(q, -3.138923415843977, 2);
  sqcRZGate(q, -1.0604019389200392, 2);
  sqcRYGate(q, -3.141469278956628, 3);
  sqcRZGate(q, 0.7981434323831291, 3);
  sqcRYGate(q, -1.3047102553923073, 4);
  sqcRZGate(q, -1.4922843271734143, 4);
  sqcRYGate(q, -3.1415160222141294, 5);
  sqcRZGate(q, -0.6950170774652676, 5);
  sqcRYGate(q, -2.1944764551076807, 6);
  sqcRZGate(q, 1.40332513517059, 6);
  sqcRYGate(q, 1.5944661146526427, 7);
  sqcRZGate(q, -1.5567339331993764, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.142573060507639, 0);
  sqcRZGate(q, 0.16623289213476042, 0);
  sqcRYGate(q, -1.212135558495068, 1);
  sqcRZGate(q, -0.6978287830078251, 1);
  sqcRYGate(q, 1.5711202847902344, 2);
  sqcRZGate(q, 2.8096129443480646, 2);
  sqcRYGate(q, 0.9222714819968132, 3);
  sqcRZGate(q, 1.389180630994378, 3);
  sqcRYGate(q, -2.0879980080216898, 4);
  sqcRZGate(q, -2.856114542261656, 4);
  sqcRYGate(q, 1.4717836929250376, 5);
  sqcRZGate(q, 3.1387802639526097, 5);
  sqcRYGate(q, 0.09397298715216933, 6);
  sqcRZGate(q, -2.8618977054666206, 6);
  sqcRYGate(q, 2.3414163163772574, 7);
  sqcRZGate(q, -2.2049121297659102, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5714007123505875, 0);
  sqcRZGate(q, -1.5525815273483208, 0);
  sqcRYGate(q, -0.7616238744751982, 1);
  sqcRZGate(q, -0.090486763145451, 1);
  sqcRYGate(q, -3.1414228368742974, 2);
  sqcRZGate(q, 2.8020016882646637, 2);
  sqcRYGate(q, 3.138368455275711, 3);
  sqcRZGate(q, 1.1711622418089072, 3);
  sqcRYGate(q, 3.125297964482791, 4);
  sqcRZGate(q, 1.7652059695784768, 4);
  sqcRYGate(q, 1.5710888502010218, 5);
  sqcRZGate(q, 3.134985747203746, 5);
  sqcRYGate(q, -3.0716572797514177, 6);
  sqcRZGate(q, -3.00522833976709, 6);
  sqcRYGate(q, 0.08979878967251942, 7);
  sqcRZGate(q, -1.2365438475990997, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5475489400219842, 0);
  sqcRZGate(q, 1.5590132228112432, 0);
  sqcRYGate(q, -0.012478428679970998, 1);
  sqcRZGate(q, -3.045649684064063, 1);
  sqcRYGate(q, -0.7483531333456838, 2);
  sqcRZGate(q, -2.604154663667686, 2);
  sqcRYGate(q, -0.0009747766865496481, 3);
  sqcRZGate(q, 2.4361433353542434, 3);
  sqcRYGate(q, 1.5708175500009274, 4);
  sqcRZGate(q, 2.1672387399705633, 4);
  sqcRYGate(q, 2.6292715057674156, 5);
  sqcRZGate(q, 3.1036358276908973, 5);
  sqcRYGate(q, 3.1160059168111385, 6);
  sqcRZGate(q, 1.5484086696573094, 6);
  sqcRYGate(q, -0.004193964316321261, 7);
  sqcRZGate(q, 0.5112625162958319, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.068818370369552, 0);
  sqcRZGate(q, 2.9583021848962487, 0);
  sqcRYGate(q, -1.5923497213401208, 1);
  sqcRZGate(q, 1.8727474772091137, 1);
  sqcRYGate(q, -0.0038649460991413425, 2);
  sqcRZGate(q, 2.227813544769524, 2);
  sqcRYGate(q, -3.125234053954936, 3);
  sqcRZGate(q, -0.18017428385659517, 3);
  sqcRYGate(q, -3.1396965865927666, 4);
  sqcRZGate(q, -0.0022825390934256605, 4);
  sqcRYGate(q, 0.08061978361228009, 5);
  sqcRZGate(q, 1.606813149254192, 5);
  sqcRYGate(q, -1.573055978638285, 6);
  sqcRZGate(q, -3.1415275894573074, 6);
  sqcRYGate(q, -0.04947984122680614, 7);
  sqcRZGate(q, -0.22054706279981284, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.7226789623592265, 0);
  sqcRZGate(q, -0.05585583032730047, 0);
  sqcRYGate(q, 0.004029530823678488, 1);
  sqcRZGate(q, -1.8718098586505159, 1);
  sqcRYGate(q, 0.018611422247403198, 2);
  sqcRZGate(q, 2.2687687173034146, 2);
  sqcRYGate(q, 1.5696476239739692, 3);
  sqcRZGate(q, 1.5769553893060961, 3);
  sqcRYGate(q, 3.13664334468881, 4);
  sqcRZGate(q, 2.5470072557233654, 4);
  sqcRYGate(q, 1.5562388203612851, 5);
  sqcRZGate(q, 1.5984341229919075, 5);
  sqcRYGate(q, -2.605492944457374, 6);
  sqcRZGate(q, 0.09018264129637334, 6);
  sqcRYGate(q, -1.5267668678709392, 7);
  sqcRZGate(q, -2.7021247686612995, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.0750360682187017, 0);
  sqcRZGate(q, -2.3731981424328086, 0);
  sqcRYGate(q, 1.5693332245950327, 1);
  sqcRZGate(q, 2.8261955882355014, 1);
  sqcRYGate(q, 3.141173010829087, 2);
  sqcRZGate(q, 1.9149517010109713, 2);
  sqcRYGate(q, -3.0998178980063402, 3);
  sqcRZGate(q, 1.5767893501704273, 3);
  sqcRYGate(q, 3.038679720776326, 4);
  sqcRZGate(q, -0.10034949696947562, 4);
  sqcRYGate(q, -2.1208168448708315e-05, 5);
  sqcRZGate(q, 1.1268898181203995, 5);
  sqcRYGate(q, -1.5353196896916863, 6);
  sqcRZGate(q, -1.417130462930035, 6);
  sqcRYGate(q, -1.5701747364881662, 7);
  sqcRZGate(q, 3.13940521435646, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.4845997075767308, 0);
  sqcRZGate(q, -1.2418659567731822, 0);
  sqcRYGate(q, -2.850794117891811, 1);
  sqcRZGate(q, 1.7616601646549332, 1);
  sqcRYGate(q, 0.4113906989551337, 2);
  sqcRZGate(q, -0.625351902215229, 2);
  sqcRYGate(q, -1.5481661014665642, 3);
  sqcRZGate(q, 1.7324652595017729, 3);
  sqcRYGate(q, 3.10547055456519, 4);
  sqcRZGate(q, 0.2774413685798835, 4);
  sqcRYGate(q, -1.5076968081815765, 5);
  sqcRZGate(q, 1.9722992303337914, 5);
  sqcRYGate(q, -1.669742470462963, 6);
  sqcRZGate(q, -3.1250062850125793, 6);
  sqcRYGate(q, -2.6321027962941326, 7);
  sqcRZGate(q, 0.003909374426821101, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1309321391980625, 0);
  sqcRZGate(q, -2.0609690708486745, 0);
  sqcRYGate(q, -3.132002487602699, 1);
  sqcRZGate(q, 1.6827770147758354, 1);
  sqcRYGate(q, 1.6921323608925523, 2);
  sqcRZGate(q, -2.168988983847023, 2);
  sqcRYGate(q, -0.0004978914838759437, 3);
  sqcRZGate(q, 3.088934152023952, 3);
  sqcRYGate(q, 0.004746801810896706, 4);
  sqcRZGate(q, 1.0327301023582747, 4);
  sqcRYGate(q, 0.00580979699526295, 5);
  sqcRZGate(q, 3.0953387392506255, 5);
  sqcRYGate(q, -3.0347218902759012, 6);
  sqcRZGate(q, 1.5695672113327133, 6);
  sqcRYGate(q, -0.12259790674768423, 7);
  sqcRZGate(q, 0.0027930236431670257, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.140706599573547, 0);
  sqcRZGate(q, -1.4163721997650995, 0);
  sqcRYGate(q, 1.8505099625929526, 1);
  sqcRZGate(q, -1.590067915802062, 1);
  sqcRYGate(q, -0.000535337496204491, 2);
  sqcRZGate(q, 0.536778591431502, 2);
  sqcRYGate(q, -3.137227862218685, 3);
  sqcRZGate(q, 1.6802514376400755, 3);
  sqcRYGate(q, 3.126843275033104, 4);
  sqcRZGate(q, 0.9221609573720739, 4);
  sqcRYGate(q, 2.922566068893041, 5);
  sqcRZGate(q, 0.1880892268591125, 5);
  sqcRYGate(q, -1.4226061148479514, 6);
  sqcRZGate(q, -2.434486934048849, 6);
  sqcRYGate(q, -2.6367583465813746, 7);
  sqcRZGate(q, -0.5658809952840314, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.0013945114193909887, 0);
  sqcRZGate(q, -2.566564092668818, 0);
  sqcRYGate(q, -1.570315384708123, 1);
  sqcRZGate(q, -0.02383936945635733, 1);
  sqcRYGate(q, -0.9793443260121528, 2);
  sqcRZGate(q, 1.8754061282469983, 2);
  sqcRYGate(q, 1.5578536947757007, 3);
  sqcRZGate(q, 2.3972323625236327, 3);
  sqcRYGate(q, -0.8952614845769854, 4);
  sqcRZGate(q, 0.6514464117017428, 4);
  sqcRYGate(q, 0.5876821869952035, 5);
  sqcRZGate(q, -2.1954683554668613, 5);
  sqcRYGate(q, 1.0461099819953903, 6);
  sqcRZGate(q, -0.21847502365049554, 6);
  sqcRYGate(q, 3.1221378143800287, 7);
  sqcRZGate(q, -2.2018333215290795, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.0511786196544413, 0);
  sqcRZGate(q, 0.061278936009006024, 0);
  sqcRYGate(q, 1.6039834487338824, 1);
  sqcRZGate(q, 3.139255212701079, 1);
  sqcRYGate(q, -5.968760870531353e-05, 2);
  sqcRZGate(q, 0.03960223772355808, 2);
  sqcRYGate(q, 3.1414545722476594, 3);
  sqcRZGate(q, 2.400607003575307, 3);
  sqcRYGate(q, -3.1411380820843915, 4);
  sqcRZGate(q, 0.6343228951272731, 4);
  sqcRYGate(q, -3.141367324513692, 5);
  sqcRZGate(q, 2.3530051615874, 5);
  sqcRYGate(q, 0.008354708501348895, 6);
  sqcRZGate(q, 2.448744713473447, 6);
  sqcRYGate(q, -0.00011240385075432589, 7);
  sqcRZGate(q, -2.8771653550677674, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.0325984729469762, 0);
  sqcRZGate(q, 2.2755323483071908, 0);
  sqcRYGate(q, -1.6021113288141402, 1);
  sqcRZGate(q, 2.3588962778914317, 1);
  sqcRYGate(q, 0.014768314561146322, 2);
  sqcRZGate(q, -0.9884010291195775, 2);
  sqcRYGate(q, 1.933275951205573, 3);
  sqcRZGate(q, 2.360060321553051, 3);
  sqcRYGate(q, -0.9264543346104661, 4);
  sqcRZGate(q, 1.878905143568941, 4);
  sqcRYGate(q, 1.6464742869250129, 5);
  sqcRZGate(q, 2.943269523066255, 5);
  sqcRYGate(q, 0.7559918110689792, 6);
  sqcRZGate(q, 1.5254296169640147, 6);
  sqcRYGate(q, -3.1218446804139717, 7);
  sqcRZGate(q, -0.5799586361317625, 7);

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
