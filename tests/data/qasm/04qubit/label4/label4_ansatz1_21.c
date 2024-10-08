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

  sqcRYGate(q, -1.579648396846094, 0);
  sqcRZGate(q, -0.29359102630594874, 0);
  sqcRYGate(q, -1.0450412456679932, 1);
  sqcRZGate(q, 0.2980559380079033, 1);
  sqcRYGate(q, 0.712736787317828, 2);
  sqcRZGate(q, -0.745177130643448, 2);
  sqcRYGate(q, 1.893717916597172, 3);
  sqcRZGate(q, -1.1121332591723732, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6834092304291449, 0);
  sqcRZGate(q, -2.387377104387928, 0);
  sqcRYGate(q, -0.6770402551555541, 1);
  sqcRZGate(q, -0.09452424932785153, 1);
  sqcRYGate(q, 2.3103272015211163, 2);
  sqcRZGate(q, -1.1941619991095334, 2);
  sqcRYGate(q, -0.5237149887958283, 3);
  sqcRZGate(q, -1.351608544661331, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0235244643433714, 0);
  sqcRZGate(q, 2.044671524193694, 0);
  sqcRYGate(q, -2.1416782662932157, 1);
  sqcRZGate(q, -0.10701014147884075, 1);
  sqcRYGate(q, -1.1891156884732916, 2);
  sqcRZGate(q, 1.4677388860473262, 2);
  sqcRYGate(q, -2.784334365342259, 3);
  sqcRZGate(q, 0.8906092840044091, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.920696859839781, 0);
  sqcRZGate(q, -2.951131907968757, 0);
  sqcRYGate(q, -1.2445032241633829, 1);
  sqcRZGate(q, 2.578785529667395, 1);
  sqcRYGate(q, -0.8780188477419233, 2);
  sqcRZGate(q, 0.15422241336236822, 2);
  sqcRYGate(q, 2.690481076691403, 3);
  sqcRZGate(q, -2.520058235881957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.030131628554415, 0);
  sqcRZGate(q, -1.0922337676623313, 0);
  sqcRYGate(q, -1.1229627576733512, 1);
  sqcRZGate(q, -1.6050100452071092, 1);
  sqcRYGate(q, -0.6745585278254967, 2);
  sqcRZGate(q, 2.8011423875922667, 2);
  sqcRYGate(q, 1.7049222538652504, 3);
  sqcRZGate(q, -2.851411704673676, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7620314672365427, 0);
  sqcRZGate(q, -0.08310575266404825, 0);
  sqcRYGate(q, 1.859201356648187, 1);
  sqcRZGate(q, -0.6786038574794709, 1);
  sqcRYGate(q, -0.6956757502267451, 2);
  sqcRZGate(q, 2.5050810541243855, 2);
  sqcRYGate(q, 2.0795387251197237, 3);
  sqcRZGate(q, -2.7703122774870588, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4827500477771904, 0);
  sqcRZGate(q, -0.735760618529972, 0);
  sqcRYGate(q, -0.011938821631879447, 1);
  sqcRZGate(q, -0.9930260584812612, 1);
  sqcRYGate(q, 1.0749558019096856, 2);
  sqcRZGate(q, 2.49501114388921, 2);
  sqcRYGate(q, -0.5592831343439413, 3);
  sqcRZGate(q, -0.5456539907378897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.006702706069463994, 0);
  sqcRZGate(q, -0.2336808156721064, 0);
  sqcRYGate(q, 1.3112038229625664, 1);
  sqcRZGate(q, -1.2915330085758505, 1);
  sqcRYGate(q, 2.1742584106532945, 2);
  sqcRZGate(q, 0.05221974479670826, 2);
  sqcRYGate(q, -0.402939220847167, 3);
  sqcRZGate(q, 3.1138969210314102, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.128263788232735, 0);
  sqcRZGate(q, 0.3447934344625655, 0);
  sqcRYGate(q, -0.5420776820562455, 1);
  sqcRZGate(q, 0.6252101651532103, 1);
  sqcRYGate(q, 2.1218617604417145, 2);
  sqcRZGate(q, 0.21392503884112557, 2);
  sqcRYGate(q, 0.7755946573803278, 3);
  sqcRZGate(q, 0.10002297429992195, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1438931727566002, 0);
  sqcRZGate(q, -0.43742324576047564, 0);
  sqcRYGate(q, 2.270996863070637, 1);
  sqcRZGate(q, 1.650313686828964, 1);
  sqcRYGate(q, 2.4105607018088766, 2);
  sqcRZGate(q, 1.3621094223882466, 2);
  sqcRYGate(q, 2.8912197808597746, 3);
  sqcRZGate(q, 1.0229589603118248, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.248282726060056, 0);
  sqcRZGate(q, -0.11904987792300885, 0);
  sqcRYGate(q, -0.45386885672856997, 1);
  sqcRZGate(q, -0.0683219599224616, 1);
  sqcRYGate(q, 0.6299222361317957, 2);
  sqcRZGate(q, -2.174407915240078, 2);
  sqcRYGate(q, 1.739614919531629, 3);
  sqcRZGate(q, -0.3648117130205266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7120801348635252, 0);
  sqcRZGate(q, 2.4391824918847376, 0);
  sqcRYGate(q, 3.005647541147441, 1);
  sqcRZGate(q, -2.002494902920848, 1);
  sqcRYGate(q, -1.5014350270551422, 2);
  sqcRZGate(q, -1.1985286746739297, 2);
  sqcRYGate(q, -1.4674045987934257, 3);
  sqcRZGate(q, -0.02082982893078889, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3794607554719924, 0);
  sqcRZGate(q, 0.40078181709043204, 0);
  sqcRYGate(q, -2.637124062421785, 1);
  sqcRZGate(q, 2.7315596665409996, 1);
  sqcRYGate(q, 2.8841573840785664, 2);
  sqcRZGate(q, -1.5084268015135307, 2);
  sqcRYGate(q, 2.6215598553887194, 3);
  sqcRZGate(q, 0.345174991372609, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.467944056175254, 0);
  sqcRZGate(q, -0.9062056029586119, 0);
  sqcRYGate(q, -1.1152396077887294, 1);
  sqcRZGate(q, -1.7147446845500491, 1);
  sqcRYGate(q, -1.0329138014690669, 2);
  sqcRZGate(q, -0.2627534180264988, 2);
  sqcRYGate(q, 2.166991101306534, 3);
  sqcRZGate(q, 3.1017572093662014, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0910816457152652, 0);
  sqcRZGate(q, 0.8725119500183842, 0);
  sqcRYGate(q, 0.06216437889072778, 1);
  sqcRZGate(q, 2.459157611126771, 1);
  sqcRYGate(q, -2.6152728829649, 2);
  sqcRZGate(q, 3.0685895427310235, 2);
  sqcRYGate(q, 1.7065193296158938, 3);
  sqcRZGate(q, 2.4722067496872198, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9938559261546698, 0);
  sqcRZGate(q, 1.9623959004190572, 0);
  sqcRYGate(q, 3.062780393533219, 1);
  sqcRZGate(q, 2.0791653671239683, 1);
  sqcRYGate(q, -0.6493817381357969, 2);
  sqcRZGate(q, -1.6864200654036328, 2);
  sqcRYGate(q, -2.851634019832132, 3);
  sqcRZGate(q, 2.908258140502898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.31995724723252117, 0);
  sqcRZGate(q, -0.6413136043651013, 0);
  sqcRYGate(q, 1.5312994779139686, 1);
  sqcRZGate(q, -0.4814670443359246, 1);
  sqcRYGate(q, -2.1114606150982125, 2);
  sqcRZGate(q, 1.374050761683442, 2);
  sqcRYGate(q, 1.176131567115019, 3);
  sqcRZGate(q, 2.758822714306864, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2171094511085823, 0);
  sqcRZGate(q, -1.030437253138456, 0);
  sqcRYGate(q, -2.5196667374493185, 1);
  sqcRZGate(q, -0.8574161295037737, 1);
  sqcRYGate(q, -3.029162483135455, 2);
  sqcRZGate(q, -0.639686075838214, 2);
  sqcRYGate(q, 1.8443721822599564, 3);
  sqcRZGate(q, 2.837703359322427, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7673772862840131, 0);
  sqcRZGate(q, -0.4173024009144477, 0);
  sqcRYGate(q, -3.0529174683560774, 1);
  sqcRZGate(q, -0.24713277584074267, 1);
  sqcRYGate(q, -0.024341038464076092, 2);
  sqcRZGate(q, -1.720255463944114, 2);
  sqcRYGate(q, 1.3231010052807326, 3);
  sqcRZGate(q, -1.8000660668841721, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7140470876343104, 0);
  sqcRZGate(q, 0.18933182426709302, 0);
  sqcRYGate(q, -0.9318670143736218, 1);
  sqcRZGate(q, 2.092242541996586, 1);
  sqcRYGate(q, -1.7872233061813265, 2);
  sqcRZGate(q, 2.708756851192284, 2);
  sqcRYGate(q, 0.14570238072241654, 3);
  sqcRZGate(q, -0.007689798019208405, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2347942539728534, 0);
  sqcRZGate(q, 0.5916018838285491, 0);
  sqcRYGate(q, 0.868714182753345, 1);
  sqcRZGate(q, 2.5297208698587026, 1);
  sqcRYGate(q, 0.39798403951987554, 2);
  sqcRZGate(q, -0.6595918816562694, 2);
  sqcRYGate(q, 1.9093982883605964, 3);
  sqcRZGate(q, -0.05288097734458625, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3241513893981436, 0);
  sqcRZGate(q, -0.9656485620488251, 0);
  sqcRYGate(q, -1.4289254603299737, 1);
  sqcRZGate(q, 2.723928491768999, 1);
  sqcRYGate(q, 3.017943917332203, 2);
  sqcRZGate(q, -1.3121806096914748, 2);
  sqcRYGate(q, 1.0704928283756905, 3);
  sqcRZGate(q, -1.5663185734102507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.10634086386847431, 0);
  sqcRZGate(q, -0.0549015778962178, 0);
  sqcRYGate(q, -2.991570656431029, 1);
  sqcRZGate(q, 2.8393171195223776, 1);
  sqcRYGate(q, -1.7027318908241718, 2);
  sqcRZGate(q, -0.3296159834880368, 2);
  sqcRYGate(q, -0.3765141274588746, 3);
  sqcRZGate(q, 2.641952617068595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5781267028315806, 0);
  sqcRZGate(q, 0.4115669454515825, 0);
  sqcRYGate(q, -0.29558412993316535, 1);
  sqcRZGate(q, 2.263490939868203, 1);
  sqcRYGate(q, 1.3397310260705022, 2);
  sqcRZGate(q, 1.1004213628913755, 2);
  sqcRYGate(q, 1.518463618601971, 3);
  sqcRZGate(q, -2.2507234607849087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1068869008359425, 0);
  sqcRZGate(q, 2.754774369395933, 0);
  sqcRYGate(q, 2.519286626324433, 1);
  sqcRZGate(q, -2.5887707649130425, 1);
  sqcRYGate(q, -1.8979301753997517, 2);
  sqcRZGate(q, -0.7420565749901811, 2);
  sqcRYGate(q, 2.271584289146512, 3);
  sqcRZGate(q, -1.908818655434318, 3);

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
