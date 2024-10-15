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

  sqcRYGate(q, -1.7059577291980537, 0);
  sqcRZGate(q, 2.0246478204658063, 0);
  sqcRYGate(q, 2.329313469892422, 1);
  sqcRZGate(q, -2.414814543516995, 1);
  sqcRYGate(q, 1.156266134152661, 2);
  sqcRZGate(q, 2.7099568696074527, 2);
  sqcRYGate(q, -0.4098992177068677, 3);
  sqcRZGate(q, 0.8942621231991987, 3);
  sqcRYGate(q, -0.5916666284223862, 4);
  sqcRZGate(q, 0.5555358952245341, 4);
  sqcRYGate(q, 2.3734790210255445, 5);
  sqcRZGate(q, -1.2198652740842333, 5);
  sqcRYGate(q, 0.07796357184981192, 6);
  sqcRZGate(q, -2.145483836670755, 6);
  sqcRYGate(q, -0.48482715548546457, 7);
  sqcRZGate(q, 2.960505130004424, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6739907139673011, 0);
  sqcRZGate(q, -0.893909581086726, 0);
  sqcRYGate(q, 2.565671436264534, 1);
  sqcRZGate(q, 1.4065206508608679, 1);
  sqcRYGate(q, 2.754583233040706, 2);
  sqcRZGate(q, -0.2760793280326759, 2);
  sqcRYGate(q, 1.2962160185683693, 3);
  sqcRZGate(q, -2.6793836301304195, 3);
  sqcRYGate(q, -0.8105661541283791, 4);
  sqcRZGate(q, -1.80583528076067, 4);
  sqcRYGate(q, -0.09078220420839352, 5);
  sqcRZGate(q, 1.5952190568262061, 5);
  sqcRYGate(q, 1.9103986653957028, 6);
  sqcRZGate(q, -3.061771001066854, 6);
  sqcRYGate(q, -2.66724210749827, 7);
  sqcRZGate(q, -0.9164039974487534, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4443912871339153, 0);
  sqcRZGate(q, -1.1866882112229202, 0);
  sqcRYGate(q, 0.3484523817414642, 1);
  sqcRZGate(q, -0.8261475303447784, 1);
  sqcRYGate(q, 1.3245664659804728, 2);
  sqcRZGate(q, 0.9059836075284542, 2);
  sqcRYGate(q, -0.49601087483906425, 3);
  sqcRZGate(q, 0.3633810641711896, 3);
  sqcRYGate(q, 2.4473723446756948, 4);
  sqcRZGate(q, 2.5705125579212686, 4);
  sqcRYGate(q, 1.5780143041183836, 5);
  sqcRZGate(q, -1.0528311600470408, 5);
  sqcRYGate(q, -1.1372469877249696, 6);
  sqcRZGate(q, -0.5311400469978501, 6);
  sqcRYGate(q, -1.7614352118893732, 7);
  sqcRZGate(q, 0.5801282068877054, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4215462994746071, 0);
  sqcRZGate(q, 2.8798287084448964, 0);
  sqcRYGate(q, 0.7719890858245577, 1);
  sqcRZGate(q, -2.327331771012958, 1);
  sqcRYGate(q, -0.5485701592037371, 2);
  sqcRZGate(q, 0.8423592850273307, 2);
  sqcRYGate(q, 1.7775428593387732, 3);
  sqcRZGate(q, 2.3117253600512977, 3);
  sqcRYGate(q, 2.31487019974617, 4);
  sqcRZGate(q, 0.9846780618317289, 4);
  sqcRYGate(q, 2.942577015977733, 5);
  sqcRZGate(q, 2.1883601601993927, 5);
  sqcRYGate(q, -2.6842485826404965, 6);
  sqcRZGate(q, 0.9675596937354239, 6);
  sqcRYGate(q, -0.25476148269900456, 7);
  sqcRZGate(q, 2.864071582947985, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6130979327046118, 0);
  sqcRZGate(q, -2.403992561661069, 0);
  sqcRYGate(q, -2.1048144549551133, 1);
  sqcRZGate(q, -3.0890757055093174, 1);
  sqcRYGate(q, 0.39932524734451064, 2);
  sqcRZGate(q, -0.8542567950890482, 2);
  sqcRYGate(q, 0.5061501174726217, 3);
  sqcRZGate(q, 1.5405415585048914, 3);
  sqcRYGate(q, 2.6315130097508415, 4);
  sqcRZGate(q, -1.334960462255685, 4);
  sqcRYGate(q, 0.9119202175007662, 5);
  sqcRZGate(q, 2.9475674159440852, 5);
  sqcRYGate(q, -1.4229354989713479, 6);
  sqcRZGate(q, 0.6926508377782277, 6);
  sqcRYGate(q, -2.827073357335305, 7);
  sqcRZGate(q, -0.38067461188285734, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.506940707487119, 0);
  sqcRZGate(q, -2.740677442376337, 0);
  sqcRYGate(q, 1.9568636471271548, 1);
  sqcRZGate(q, 2.9914915190485285, 1);
  sqcRYGate(q, 0.7114882761986209, 2);
  sqcRZGate(q, 1.7490673574399638, 2);
  sqcRYGate(q, 0.6570987177559124, 3);
  sqcRZGate(q, 0.8357306870376257, 3);
  sqcRYGate(q, 0.6143685939008686, 4);
  sqcRZGate(q, 3.1273608833206197, 4);
  sqcRYGate(q, -2.418197777029848, 5);
  sqcRZGate(q, -2.2486411487216604, 5);
  sqcRYGate(q, 2.3699538468741665, 6);
  sqcRZGate(q, 1.070583093047534, 6);
  sqcRYGate(q, -2.641293289342946, 7);
  sqcRZGate(q, 2.8009160604294063, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1478796455598763, 0);
  sqcRZGate(q, -1.8635361099382128, 0);
  sqcRYGate(q, 1.5471002479338816, 1);
  sqcRZGate(q, 2.2246311394358216, 1);
  sqcRYGate(q, 2.986924236850358, 2);
  sqcRZGate(q, -0.21808124415973704, 2);
  sqcRYGate(q, 0.8574739453832767, 3);
  sqcRZGate(q, 0.24005689406453243, 3);
  sqcRYGate(q, -2.297605347772111, 4);
  sqcRZGate(q, -2.823948278769491, 4);
  sqcRYGate(q, 1.2265577098040916, 5);
  sqcRZGate(q, 1.0834403637609213, 5);
  sqcRYGate(q, -2.9196336254980624, 6);
  sqcRZGate(q, -2.8658272742221462, 6);
  sqcRYGate(q, 2.251369922411815, 7);
  sqcRZGate(q, 1.067479423047804, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8291251531088983, 0);
  sqcRZGate(q, 0.30458698989118843, 0);
  sqcRYGate(q, -0.742265499618763, 1);
  sqcRZGate(q, -2.9255354108254217, 1);
  sqcRYGate(q, -1.319244015926705, 2);
  sqcRZGate(q, -1.495785135372546, 2);
  sqcRYGate(q, -2.9133091673224247, 3);
  sqcRZGate(q, 1.2786783088862272, 3);
  sqcRYGate(q, 0.10625745054232727, 4);
  sqcRZGate(q, -2.413332253715386, 4);
  sqcRYGate(q, -1.5609366559582327, 5);
  sqcRZGate(q, -0.7205664983476184, 5);
  sqcRYGate(q, -0.33343798336290165, 6);
  sqcRZGate(q, -2.4617043331954265, 6);
  sqcRYGate(q, -2.7699159941050464, 7);
  sqcRZGate(q, 1.366201640620706, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9049102416071646, 0);
  sqcRZGate(q, 0.45637707562473384, 0);
  sqcRYGate(q, 1.4551597107130463, 1);
  sqcRZGate(q, -0.50072725589673, 1);
  sqcRYGate(q, 0.9920831383442262, 2);
  sqcRZGate(q, -0.1256101612561489, 2);
  sqcRYGate(q, -3.0023869528889833, 3);
  sqcRZGate(q, -2.829910226807539, 3);
  sqcRYGate(q, -2.517709035730358, 4);
  sqcRZGate(q, -2.3586975935731562, 4);
  sqcRYGate(q, -0.20458910273643482, 5);
  sqcRZGate(q, 1.837733918060696, 5);
  sqcRYGate(q, 0.9482850753748887, 6);
  sqcRZGate(q, -2.7823289910968305, 6);
  sqcRYGate(q, 2.3096144208001337, 7);
  sqcRZGate(q, 0.7227652956227321, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.446762726466399, 0);
  sqcRZGate(q, -2.029043212716096, 0);
  sqcRYGate(q, 2.398289075874374, 1);
  sqcRZGate(q, 2.5688604726332103, 1);
  sqcRYGate(q, -1.7036124095377954, 2);
  sqcRZGate(q, -2.6225882985234685, 2);
  sqcRYGate(q, 2.082103773256441, 3);
  sqcRZGate(q, 2.2546519802188945, 3);
  sqcRYGate(q, -3.0351810551776373, 4);
  sqcRZGate(q, -1.5117155006872718, 4);
  sqcRYGate(q, 2.2807535906297316, 5);
  sqcRZGate(q, 0.6493325990979217, 5);
  sqcRYGate(q, 2.0167236524029626, 6);
  sqcRZGate(q, -1.5864102685603907, 6);
  sqcRYGate(q, 2.8043580874032195, 7);
  sqcRZGate(q, -0.3850158747654725, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.05891237113723147, 0);
  sqcRZGate(q, 0.4218915076952113, 0);
  sqcRYGate(q, 1.9469188446272572, 1);
  sqcRZGate(q, 1.4399620269174718, 1);
  sqcRYGate(q, 2.407255600247065, 2);
  sqcRZGate(q, 1.299911359050015, 2);
  sqcRYGate(q, -0.19763601211212692, 3);
  sqcRZGate(q, 1.9222648108054243, 3);
  sqcRYGate(q, 1.8152452164604282, 4);
  sqcRZGate(q, 1.198069593997173, 4);
  sqcRYGate(q, 0.20325757319608675, 5);
  sqcRZGate(q, 1.714151149011598, 5);
  sqcRYGate(q, 2.6912226549749336, 6);
  sqcRZGate(q, -0.006179091224250519, 6);
  sqcRYGate(q, 0.3241360294934454, 7);
  sqcRZGate(q, -1.2716568783245794, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.111222866313807, 0);
  sqcRZGate(q, -2.54581326800665, 0);
  sqcRYGate(q, 2.4881549192777976, 1);
  sqcRZGate(q, 0.4192844051363054, 1);
  sqcRYGate(q, 1.799831435919079, 2);
  sqcRZGate(q, 2.7857340603033762, 2);
  sqcRYGate(q, -1.353327966458708, 3);
  sqcRZGate(q, -1.2208774900525494, 3);
  sqcRYGate(q, -1.3679047818327899, 4);
  sqcRZGate(q, -1.583810243749161, 4);
  sqcRYGate(q, 1.0262719641858753, 5);
  sqcRZGate(q, 2.7656140639912636, 5);
  sqcRYGate(q, -1.6813716903286986, 6);
  sqcRZGate(q, -2.7465053949387603, 6);
  sqcRYGate(q, -2.7141427823747115, 7);
  sqcRZGate(q, -1.7737167222711632, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.11489190543231466, 0);
  sqcRZGate(q, 2.7923317933811926, 0);
  sqcRYGate(q, -2.41612443269061, 1);
  sqcRZGate(q, -0.767328105880649, 1);
  sqcRYGate(q, 2.5093839565104465, 2);
  sqcRZGate(q, 2.780535580098235, 2);
  sqcRYGate(q, -1.0220318017644487, 3);
  sqcRZGate(q, -0.9004389922006952, 3);
  sqcRYGate(q, 1.0706393195813169, 4);
  sqcRZGate(q, 3.0961165453535484, 4);
  sqcRYGate(q, 1.0304013610316218, 5);
  sqcRZGate(q, 0.024660921665532777, 5);
  sqcRYGate(q, 1.1956305914848446, 6);
  sqcRZGate(q, -0.6353553340971629, 6);
  sqcRYGate(q, 2.498760857103271, 7);
  sqcRZGate(q, -2.228130544316249, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4393703592552642, 0);
  sqcRZGate(q, -3.0499710886610223, 0);
  sqcRYGate(q, -2.2597368214667988, 1);
  sqcRZGate(q, 0.800433823633311, 1);
  sqcRYGate(q, -0.5822796670326249, 2);
  sqcRZGate(q, 2.925233050966388, 2);
  sqcRYGate(q, -1.928108623260175, 3);
  sqcRZGate(q, -2.4177022548218, 3);
  sqcRYGate(q, 2.2212927281568193, 4);
  sqcRZGate(q, 0.14773450659905862, 4);
  sqcRYGate(q, -1.3610522761653714, 5);
  sqcRZGate(q, 2.0477472114962065, 5);
  sqcRYGate(q, -1.9614160786963852, 6);
  sqcRZGate(q, 2.4904569226590425, 6);
  sqcRYGate(q, 2.7725005377295635, 7);
  sqcRZGate(q, 1.5675082176849575, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1998766289575986, 0);
  sqcRZGate(q, 0.4299923487450865, 0);
  sqcRYGate(q, 0.505101255166066, 1);
  sqcRZGate(q, -1.7366068536576469, 1);
  sqcRYGate(q, -0.728418648001571, 2);
  sqcRZGate(q, 1.1552054765011037, 2);
  sqcRYGate(q, -0.4357305735511386, 3);
  sqcRZGate(q, 1.2053641256509622, 3);
  sqcRYGate(q, 1.7036964273810165, 4);
  sqcRZGate(q, -1.2161874473537226, 4);
  sqcRYGate(q, -2.468273915562494, 5);
  sqcRZGate(q, 1.7699099947272927, 5);
  sqcRYGate(q, 2.307140836704467, 6);
  sqcRZGate(q, -2.8062353432249014, 6);
  sqcRYGate(q, 1.1479272748098077, 7);
  sqcRZGate(q, 0.5293654993775379, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.74255485442779, 0);
  sqcRZGate(q, 0.46171030998305246, 0);
  sqcRYGate(q, 0.997660490678788, 1);
  sqcRZGate(q, -0.346480948007331, 1);
  sqcRYGate(q, -2.278913217799932, 2);
  sqcRZGate(q, -2.818393629097441, 2);
  sqcRYGate(q, 1.1919272738610998, 3);
  sqcRZGate(q, 0.16613284270240436, 3);
  sqcRYGate(q, -0.499410288223426, 4);
  sqcRZGate(q, 2.2425310720092657, 4);
  sqcRYGate(q, 2.812930541710335, 5);
  sqcRZGate(q, -0.5859171068282655, 5);
  sqcRYGate(q, -2.8965210870887406, 6);
  sqcRZGate(q, -0.048212394709347656, 6);
  sqcRYGate(q, -1.3263547984621704, 7);
  sqcRZGate(q, 0.6728593038446363, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5756698546320118, 0);
  sqcRZGate(q, 1.3897190762599472, 0);
  sqcRYGate(q, 0.6530565535216357, 1);
  sqcRZGate(q, -2.218099733439041, 1);
  sqcRYGate(q, 1.5369863086082436, 2);
  sqcRZGate(q, 0.5092076576836106, 2);
  sqcRYGate(q, -2.2352401097214516, 3);
  sqcRZGate(q, 0.27557940360817756, 3);
  sqcRYGate(q, -1.2625948978477108, 4);
  sqcRZGate(q, -2.787430695152894, 4);
  sqcRYGate(q, -1.216424201512579, 5);
  sqcRZGate(q, -1.9847587850418715, 5);
  sqcRYGate(q, -1.3148912962264745, 6);
  sqcRZGate(q, -2.370886245019561, 6);
  sqcRYGate(q, 1.9152877304653018, 7);
  sqcRZGate(q, -1.6289239595992513, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.963687035796964, 0);
  sqcRZGate(q, 0.11743146682527872, 0);
  sqcRYGate(q, 0.38982952593008274, 1);
  sqcRZGate(q, -0.5451437749233674, 1);
  sqcRYGate(q, 0.5168691449490073, 2);
  sqcRZGate(q, -1.944610479487923, 2);
  sqcRYGate(q, -2.360238151597736, 3);
  sqcRZGate(q, -0.014567546868205454, 3);
  sqcRYGate(q, 2.9508734058708392, 4);
  sqcRZGate(q, -2.7545599885446554, 4);
  sqcRYGate(q, 0.8822422235522275, 5);
  sqcRZGate(q, 1.3731117354092537, 5);
  sqcRYGate(q, 0.6216054641616982, 6);
  sqcRZGate(q, -2.186138516549182, 6);
  sqcRYGate(q, 0.4426406560021889, 7);
  sqcRZGate(q, -0.6324823427887525, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6607907472233376, 0);
  sqcRZGate(q, 1.396721166380103, 0);
  sqcRYGate(q, -2.926850043147444, 1);
  sqcRZGate(q, -2.0737622331614394, 1);
  sqcRYGate(q, 2.2932187460159965, 2);
  sqcRZGate(q, -1.5048336621788332, 2);
  sqcRYGate(q, 3.0574647485915425, 3);
  sqcRZGate(q, 1.4125141401805745, 3);
  sqcRYGate(q, 2.166715860009429, 4);
  sqcRZGate(q, 2.793467493219767, 4);
  sqcRYGate(q, 2.120180668671082, 5);
  sqcRZGate(q, 1.23881097423998, 5);
  sqcRYGate(q, -0.2702203823259074, 6);
  sqcRZGate(q, -0.4341828358669746, 6);
  sqcRYGate(q, 2.0774913358752416, 7);
  sqcRZGate(q, -0.23487791140846964, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.885436435562615, 0);
  sqcRZGate(q, 3.101878163748433, 0);
  sqcRYGate(q, -1.7753927218945553, 1);
  sqcRZGate(q, 1.9111309958741751, 1);
  sqcRYGate(q, 1.3890772908784845, 2);
  sqcRZGate(q, -1.0895207563653575, 2);
  sqcRYGate(q, 2.4034366403094003, 3);
  sqcRZGate(q, -1.4508575551129126, 3);
  sqcRYGate(q, 0.8740892842624826, 4);
  sqcRZGate(q, 0.15340277743584096, 4);
  sqcRYGate(q, 0.9170838459692696, 5);
  sqcRZGate(q, -1.079714627409297, 5);
  sqcRYGate(q, -2.3182634423317925, 6);
  sqcRZGate(q, 2.121291384729349, 6);
  sqcRYGate(q, 2.494085946169941, 7);
  sqcRZGate(q, 0.6798854425741524, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.865533801298651, 0);
  sqcRZGate(q, 1.2700431356525659, 0);
  sqcRYGate(q, -0.7939914084698154, 1);
  sqcRZGate(q, 2.4638053874961576, 1);
  sqcRYGate(q, -2.9947067590690186, 2);
  sqcRZGate(q, -0.12353320487451931, 2);
  sqcRYGate(q, 0.8158664394151324, 3);
  sqcRZGate(q, -2.7297135565397115, 3);
  sqcRYGate(q, 1.2651326292024272, 4);
  sqcRZGate(q, 1.1643616786140996, 4);
  sqcRYGate(q, 2.9140098080765093, 5);
  sqcRZGate(q, -1.7829120659845834, 5);
  sqcRYGate(q, -1.4573327014117945, 6);
  sqcRZGate(q, -2.1080290326873325, 6);
  sqcRYGate(q, -1.9929166081441698, 7);
  sqcRZGate(q, -3.095789979807862, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3844769981255363, 0);
  sqcRZGate(q, 1.4075529438278742, 0);
  sqcRYGate(q, 2.597937622199357, 1);
  sqcRZGate(q, 1.5932703512237263, 1);
  sqcRYGate(q, -2.027593722755645, 2);
  sqcRZGate(q, -2.797680815394912, 2);
  sqcRYGate(q, 2.2730982128963797, 3);
  sqcRZGate(q, 1.4575669115433099, 3);
  sqcRYGate(q, 1.757465058924365, 4);
  sqcRZGate(q, 1.047522403562556, 4);
  sqcRYGate(q, -2.1583015612433387, 5);
  sqcRZGate(q, 0.1067289635431772, 5);
  sqcRYGate(q, 2.690526276840896, 6);
  sqcRZGate(q, 2.1859443459657704, 6);
  sqcRYGate(q, 1.5637782822907509, 7);
  sqcRZGate(q, -3.0742344527065764, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.38440329952929647, 0);
  sqcRZGate(q, 0.9929424354385243, 0);
  sqcRYGate(q, 2.862317448615958, 1);
  sqcRZGate(q, -2.072806390351344, 1);
  sqcRYGate(q, -2.8343864903999703, 2);
  sqcRZGate(q, -1.9572651214111534, 2);
  sqcRYGate(q, 2.029463689140592, 3);
  sqcRZGate(q, 0.9296058318976357, 3);
  sqcRYGate(q, -2.7436707214421756, 4);
  sqcRZGate(q, -1.9727592164054044, 4);
  sqcRYGate(q, -0.3412315013633113, 5);
  sqcRZGate(q, -1.4238201913429487, 5);
  sqcRYGate(q, -2.420366994600341, 6);
  sqcRZGate(q, -0.8885235464832439, 6);
  sqcRYGate(q, -1.8620179431102732, 7);
  sqcRZGate(q, 1.3071363367965976, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5313875630475535, 0);
  sqcRZGate(q, -1.0299268460220379, 0);
  sqcRYGate(q, -1.0214145933124295, 1);
  sqcRZGate(q, 2.391541795171724, 1);
  sqcRYGate(q, 0.9422206727448881, 2);
  sqcRZGate(q, -2.44565108530308, 2);
  sqcRYGate(q, 2.821034686959248, 3);
  sqcRZGate(q, -2.3082639858861325, 3);
  sqcRYGate(q, -1.2392210554913896, 4);
  sqcRZGate(q, 2.5347851874615914, 4);
  sqcRYGate(q, -1.2693069652503652, 5);
  sqcRZGate(q, 1.5498322050619133, 5);
  sqcRYGate(q, 2.139743768753786, 6);
  sqcRZGate(q, -2.6264084659512155, 6);
  sqcRYGate(q, 1.4680096986584248, 7);
  sqcRZGate(q, 1.6160224171744597, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.702853174877438, 0);
  sqcRZGate(q, -1.2067898192652977, 0);
  sqcRYGate(q, -1.4269371037080374, 1);
  sqcRZGate(q, -2.0443160846495183, 1);
  sqcRYGate(q, 2.2690280151310773, 2);
  sqcRZGate(q, 2.314657910663562, 2);
  sqcRYGate(q, -1.8317288283270956, 3);
  sqcRZGate(q, -0.044920359203530345, 3);
  sqcRYGate(q, 2.028418873162895, 4);
  sqcRZGate(q, -2.2030267965181274, 4);
  sqcRYGate(q, 3.005244429358121, 5);
  sqcRZGate(q, 1.3655922072246538, 5);
  sqcRYGate(q, 1.0905063195484868, 6);
  sqcRZGate(q, 1.4554572730413522, 6);
  sqcRYGate(q, -2.3958863215954973, 7);
  sqcRZGate(q, -0.7040709140783906, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4834015599745156, 0);
  sqcRZGate(q, -2.783289676462261, 0);
  sqcRYGate(q, 2.938536528704738, 1);
  sqcRZGate(q, -2.811304061140568, 1);
  sqcRYGate(q, -1.2827338251911584, 2);
  sqcRZGate(q, 2.584033043614942, 2);
  sqcRYGate(q, -1.997765778973486, 3);
  sqcRZGate(q, 2.9903358821404846, 3);
  sqcRYGate(q, -0.38913674536104903, 4);
  sqcRZGate(q, -1.9491949877750436, 4);
  sqcRYGate(q, -2.3713073440045833, 5);
  sqcRZGate(q, 1.3265000131105085, 5);
  sqcRYGate(q, -0.9354189033785898, 6);
  sqcRZGate(q, 1.3277305123248553, 6);
  sqcRYGate(q, -2.012932142927104, 7);
  sqcRZGate(q, 2.902415864948609, 7);

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
