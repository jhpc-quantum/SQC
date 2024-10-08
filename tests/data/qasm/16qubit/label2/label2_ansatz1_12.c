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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.04732200873152337, 0);
  sqcRZGate(q, -0.8246381475714119, 0);
  sqcRYGate(q, -0.0726062494593549, 1);
  sqcRZGate(q, 2.6960287948710637, 1);
  sqcRYGate(q, -3.063210522572372, 2);
  sqcRZGate(q, -2.3869642810542993, 2);
  sqcRYGate(q, 3.1403919511132172, 3);
  sqcRZGate(q, -1.6290758578272515, 3);
  sqcRYGate(q, -3.1049146423301837, 4);
  sqcRZGate(q, 0.12554830662591865, 4);
  sqcRYGate(q, -1.5198751190721554e-05, 5);
  sqcRZGate(q, -2.050497595608894, 5);
  sqcRYGate(q, -1.4513601837317605, 6);
  sqcRZGate(q, -0.484337498546001, 6);
  sqcRYGate(q, -0.06105742571590511, 7);
  sqcRZGate(q, 0.0017078181267024158, 7);
  sqcRYGate(q, 0.11045214259020943, 8);
  sqcRZGate(q, -2.8635062925167243, 8);
  sqcRYGate(q, 1.2219091648554155, 9);
  sqcRZGate(q, 1.4694699411745011, 9);
  sqcRYGate(q, -1.3659061526862906, 10);
  sqcRZGate(q, -2.370011295919098, 10);
  sqcRYGate(q, 3.1395764417948437, 11);
  sqcRZGate(q, 0.22937478525445165, 11);
  sqcRYGate(q, 0.026734902438023234, 12);
  sqcRZGate(q, -2.7004894253039717, 12);
  sqcRYGate(q, 0.044446137904098196, 13);
  sqcRZGate(q, -2.7800930597090585, 13);
  sqcRYGate(q, -0.26454769069619305, 14);
  sqcRZGate(q, 0.6529883219879506, 14);
  sqcRYGate(q, 1.0784557719769916, 15);
  sqcRZGate(q, 3.0679542283320247, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9378237017046095, 0);
  sqcRZGate(q, 2.451267519414133, 0);
  sqcRYGate(q, -3.126572532259593, 1);
  sqcRZGate(q, 0.5202762986691472, 1);
  sqcRYGate(q, 1.4372459430632878, 2);
  sqcRZGate(q, 2.4052574956354014, 2);
  sqcRYGate(q, -0.5681893655218078, 3);
  sqcRZGate(q, 2.313133898021625, 3);
  sqcRYGate(q, -2.728369516159609, 4);
  sqcRZGate(q, 3.1290589789773935, 4);
  sqcRYGate(q, 1.5707311715805359, 5);
  sqcRZGate(q, -1.8252205001072408, 5);
  sqcRYGate(q, -0.13502922328490863, 6);
  sqcRZGate(q, -2.8765663077356023, 6);
  sqcRYGate(q, -3.134337600911279, 7);
  sqcRZGate(q, -2.8171585470317515, 7);
  sqcRYGate(q, -2.2460136874754237, 8);
  sqcRZGate(q, 0.032136580367672814, 8);
  sqcRYGate(q, -3.0433677605495535, 9);
  sqcRZGate(q, -1.4686190319269734, 9);
  sqcRYGate(q, -2.1584553294346236, 10);
  sqcRZGate(q, 3.0439587905945116, 10);
  sqcRYGate(q, 3.13483803109808, 11);
  sqcRZGate(q, 2.0093333012101664, 11);
  sqcRYGate(q, 3.108074651105244, 12);
  sqcRZGate(q, 2.8285639087590653, 12);
  sqcRYGate(q, 0.8947524681634764, 13);
  sqcRZGate(q, 1.5491350443910274, 13);
  sqcRYGate(q, -2.398944848670038, 14);
  sqcRZGate(q, -1.2429358203293146, 14);
  sqcRYGate(q, -2.1221933499286108, 15);
  sqcRZGate(q, -2.3284014499292076, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4098752472994107, 0);
  sqcRZGate(q, 2.075234197727702, 0);
  sqcRYGate(q, -0.5614730650690131, 1);
  sqcRZGate(q, -2.2890160196445803, 1);
  sqcRYGate(q, -3.1413498452478636, 2);
  sqcRZGate(q, -0.5398285891801281, 2);
  sqcRYGate(q, -3.1414848722114086, 3);
  sqcRZGate(q, 2.3109747905371134, 3);
  sqcRYGate(q, 1.5707477395956848, 4);
  sqcRZGate(q, -1.6553056794317893, 4);
  sqcRYGate(q, -2.752473618563653, 5);
  sqcRZGate(q, -2.594971627081854, 5);
  sqcRYGate(q, 0.13894057640808652, 6);
  sqcRZGate(q, 3.048441713917459, 6);
  sqcRYGate(q, 1.6059924785349544, 7);
  sqcRZGate(q, 0.7896086426765435, 7);
  sqcRYGate(q, -0.504780733477556, 8);
  sqcRZGate(q, -2.9221788641782065, 8);
  sqcRYGate(q, 0.24033687870793405, 9);
  sqcRZGate(q, -3.0714052345781675, 9);
  sqcRYGate(q, -0.2440439582479445, 10);
  sqcRZGate(q, -1.2027473999595515, 10);
  sqcRYGate(q, -0.012117359507595897, 11);
  sqcRZGate(q, -0.9118633891989399, 11);
  sqcRYGate(q, 0.017447964918985034, 12);
  sqcRZGate(q, -1.8633771890154158, 12);
  sqcRYGate(q, 2.777270733797957, 13);
  sqcRZGate(q, -1.0634377964832282, 13);
  sqcRYGate(q, 0.40940387058095135, 14);
  sqcRZGate(q, 3.1172230357670734, 14);
  sqcRYGate(q, -1.5645695503746646, 15);
  sqcRZGate(q, -1.7647096792316637, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.816552684402244, 0);
  sqcRZGate(q, -1.718124292069609, 0);
  sqcRYGate(q, -0.8549059278857651, 1);
  sqcRZGate(q, 1.9701832687936016, 1);
  sqcRYGate(q, 1.4052586994993927, 2);
  sqcRZGate(q, 2.43521956427506, 2);
  sqcRYGate(q, 1.5707491527516253, 3);
  sqcRZGate(q, 1.7508972403938543, 3);
  sqcRYGate(q, 2.797158529433172, 4);
  sqcRZGate(q, 1.2160918174686215, 4);
  sqcRYGate(q, 0.7127082537580209, 5);
  sqcRZGate(q, -0.0998531724226948, 5);
  sqcRYGate(q, -0.001365110480651575, 6);
  sqcRZGate(q, -2.7163216346825347, 6);
  sqcRYGate(q, 0.611762395157978, 7);
  sqcRZGate(q, 3.0994392768212102, 7);
  sqcRYGate(q, 1.5251065395828414, 8);
  sqcRZGate(q, 1.9884721366615032, 8);
  sqcRYGate(q, 0.15775205244416934, 9);
  sqcRZGate(q, -0.8349003814782029, 9);
  sqcRYGate(q, -0.7314863918904498, 10);
  sqcRZGate(q, -1.7772223025126683, 10);
  sqcRYGate(q, 0.029477275939894118, 11);
  sqcRZGate(q, 2.366978097879136, 11);
  sqcRYGate(q, 0.008876201594199884, 12);
  sqcRZGate(q, -0.2809972848897534, 12);
  sqcRYGate(q, -2.5436222455018886, 13);
  sqcRZGate(q, 2.733693258864302, 13);
  sqcRYGate(q, 0.6216738563032083, 14);
  sqcRZGate(q, -1.910157129364532, 14);
  sqcRYGate(q, -2.8390469036322283, 15);
  sqcRZGate(q, -1.491062940970504, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.1378532845022042, 0);
  sqcRZGate(q, 0.534196287354014, 0);
  sqcRYGate(q, 2.1511001970906305, 1);
  sqcRZGate(q, -0.8218460549437276, 1);
  sqcRYGate(q, 1.5413693743811068, 2);
  sqcRZGate(q, -0.1470804843458735, 2);
  sqcRYGate(q, 3.1330588990181885, 3);
  sqcRZGate(q, -0.3838380807166377, 3);
  sqcRYGate(q, 2.205914599212943, 4);
  sqcRZGate(q, -2.417908681069885, 4);
  sqcRYGate(q, -0.15929159440857357, 5);
  sqcRZGate(q, 0.6462619133222952, 5);
  sqcRYGate(q, -3.1414007191630806, 6);
  sqcRZGate(q, 1.8353761577561376, 6);
  sqcRYGate(q, 3.0508749622045035, 7);
  sqcRZGate(q, -0.04571569956827186, 7);
  sqcRYGate(q, -0.013130564566002352, 8);
  sqcRZGate(q, 1.7435948044395833, 8);
  sqcRYGate(q, -1.6578245960614084, 9);
  sqcRZGate(q, -2.3378451749728124, 9);
  sqcRYGate(q, 2.009096138474847, 10);
  sqcRZGate(q, -1.452285135164574, 10);
  sqcRYGate(q, 3.1071889111296778, 11);
  sqcRZGate(q, -0.5228868673471226, 11);
  sqcRYGate(q, -0.5276537485730914, 12);
  sqcRZGate(q, 0.5649154184770393, 12);
  sqcRYGate(q, 0.27742337073144085, 13);
  sqcRZGate(q, -1.6036116358664767, 13);
  sqcRYGate(q, 1.5689746415633836, 14);
  sqcRZGate(q, 1.6950361958456117, 14);
  sqcRYGate(q, 2.775393442063313, 15);
  sqcRZGate(q, -2.129559134252145, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.06292931120597078, 0);
  sqcRZGate(q, -3.1387678772209617, 0);
  sqcRYGate(q, 1.5207442109638531, 1);
  sqcRZGate(q, -3.01669243189031, 1);
  sqcRYGate(q, -2.6604604090323054, 2);
  sqcRZGate(q, 2.9033761886608582, 2);
  sqcRYGate(q, 0.0033711237392699545, 3);
  sqcRZGate(q, 1.127345927117859, 3);
  sqcRYGate(q, 0.44482500446713935, 4);
  sqcRZGate(q, -1.5312049195886297, 4);
  sqcRYGate(q, -3.047808310804535, 5);
  sqcRZGate(q, 3.0382438428560903, 5);
  sqcRYGate(q, 0.00042870606813681677, 6);
  sqcRZGate(q, 0.359053299121051, 6);
  sqcRYGate(q, -0.6212697996216727, 7);
  sqcRZGate(q, 1.6700629988765954, 7);
  sqcRYGate(q, -3.1230894918793553, 8);
  sqcRZGate(q, -2.827426802210276, 8);
  sqcRYGate(q, 3.140828307492414, 9);
  sqcRZGate(q, 2.4597577126921966, 9);
  sqcRYGate(q, 0.05898463283075905, 10);
  sqcRZGate(q, -2.0759116724369444, 10);
  sqcRYGate(q, -3.140516121298387, 11);
  sqcRZGate(q, 3.071180693843656, 11);
  sqcRYGate(q, 0.027314186094202567, 12);
  sqcRZGate(q, 2.612674540971488, 12);
  sqcRYGate(q, -0.008413527484765204, 13);
  sqcRZGate(q, -2.618131521416613, 13);
  sqcRYGate(q, -2.597540210589739, 14);
  sqcRZGate(q, 0.018674756191304095, 14);
  sqcRYGate(q, 1.2501959116117698, 15);
  sqcRZGate(q, 1.5449070342701887, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.9962068446355248, 0);
  sqcRZGate(q, -1.5484496679573727, 0);
  sqcRYGate(q, -2.126093615477685, 1);
  sqcRZGate(q, -0.6915779694876649, 1);
  sqcRYGate(q, 2.6680864255388346, 2);
  sqcRZGate(q, -0.09363077878121107, 2);
  sqcRYGate(q, 3.1414548945796676, 3);
  sqcRZGate(q, -0.8285954541868952, 3);
  sqcRYGate(q, -0.32924931986929007, 4);
  sqcRZGate(q, -2.69666635016029, 4);
  sqcRYGate(q, -3.0465936260276636, 5);
  sqcRZGate(q, 1.9617259238016824, 5);
  sqcRYGate(q, -0.01574148310529999, 6);
  sqcRZGate(q, -2.1440968003388843, 6);
  sqcRYGate(q, -2.022222618908708, 7);
  sqcRZGate(q, -0.9888855155579589, 7);
  sqcRYGate(q, -2.127980073272511, 8);
  sqcRZGate(q, 0.5592265005961803, 8);
  sqcRYGate(q, 2.2344901641606443, 9);
  sqcRZGate(q, -2.6755167054705624, 9);
  sqcRYGate(q, -0.10430884785544058, 10);
  sqcRZGate(q, -0.9768020452615377, 10);
  sqcRYGate(q, 3.1412542638105387, 11);
  sqcRZGate(q, -0.16283828889815677, 11);
  sqcRYGate(q, -2.641481566240749, 12);
  sqcRZGate(q, -0.4171110175352126, 12);
  sqcRYGate(q, 1.9377937957031133, 13);
  sqcRZGate(q, -1.8631450426730645, 13);
  sqcRYGate(q, -2.7792116308391095, 14);
  sqcRZGate(q, -1.2256258568184943, 14);
  sqcRYGate(q, -2.519793707079428, 15);
  sqcRZGate(q, -0.06195843894567767, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.7717689561549346, 0);
  sqcRZGate(q, 3.0807436710115397, 0);
  sqcRYGate(q, 0.0017335752387070968, 1);
  sqcRZGate(q, 1.1745678888343845, 1);
  sqcRYGate(q, -1.2163647609434303, 2);
  sqcRZGate(q, 2.595124720090482, 2);
  sqcRYGate(q, -3.1211696098816724, 3);
  sqcRZGate(q, -2.3359886397663363, 3);
  sqcRYGate(q, -1.2800483305597028, 4);
  sqcRZGate(q, -1.9553158769281669, 4);
  sqcRYGate(q, 2.2526743389931685, 5);
  sqcRZGate(q, -0.3452166555938562, 5);
  sqcRYGate(q, 0.010162463149060233, 6);
  sqcRZGate(q, 2.1879153403152434, 6);
  sqcRYGate(q, -0.5346544868599202, 7);
  sqcRZGate(q, -2.4354734070068047, 7);
  sqcRYGate(q, -1.1144031254569977, 8);
  sqcRZGate(q, 2.223203368819597, 8);
  sqcRYGate(q, -3.1235884954244684, 9);
  sqcRZGate(q, 0.009762205482347854, 9);
  sqcRYGate(q, -1.5335106006629664, 10);
  sqcRZGate(q, -1.8270110825459094, 10);
  sqcRYGate(q, 3.1179875294697728, 11);
  sqcRZGate(q, -1.0461133667742193, 11);
  sqcRYGate(q, 0.017945533315200296, 12);
  sqcRZGate(q, -1.5247765277564644, 12);
  sqcRYGate(q, -0.4972279982506001, 13);
  sqcRZGate(q, -0.9558838710194939, 13);
  sqcRYGate(q, 1.0490900669808314, 14);
  sqcRZGate(q, -0.5099756864129309, 14);
  sqcRYGate(q, 0.3284995431522581, 15);
  sqcRZGate(q, -0.004424187742967785, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.742871213772295, 0);
  sqcRZGate(q, 0.025357547531007718, 0);
  sqcRYGate(q, -1.5229330575039077, 1);
  sqcRZGate(q, 1.9525016889368114, 1);
  sqcRYGate(q, 3.0811374249918195, 2);
  sqcRZGate(q, -0.08005905011709585, 2);
  sqcRYGate(q, 0.018367577248200855, 3);
  sqcRZGate(q, -2.6201844957159017, 3);
  sqcRYGate(q, 2.910204023919876, 4);
  sqcRZGate(q, -1.8798147606479958, 4);
  sqcRYGate(q, 0.021800926282246138, 5);
  sqcRZGate(q, 0.04249948507127065, 5);
  sqcRYGate(q, 3.1369750159955796, 6);
  sqcRZGate(q, -0.8959024167046218, 6);
  sqcRYGate(q, 0.16820962923989313, 7);
  sqcRZGate(q, 2.215772526028002, 7);
  sqcRYGate(q, -0.6129876165236103, 8);
  sqcRZGate(q, 2.704395646734541, 8);
  sqcRYGate(q, 1.897452173584637, 9);
  sqcRZGate(q, -1.4029179724113656, 9);
  sqcRYGate(q, -0.3582410913753725, 10);
  sqcRZGate(q, -2.5090087880556284, 10);
  sqcRYGate(q, 1.5800189585641053, 11);
  sqcRZGate(q, -2.16887155920422, 11);
  sqcRYGate(q, 2.3491540888761437, 12);
  sqcRZGate(q, -3.0147381796065678, 12);
  sqcRYGate(q, 0.47243869483484957, 13);
  sqcRZGate(q, -1.58799044276938, 13);
  sqcRYGate(q, 0.5790560638092781, 14);
  sqcRZGate(q, -0.9991791684197764, 14);
  sqcRYGate(q, 0.47530176123236245, 15);
  sqcRZGate(q, 2.6792173015551666, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.8695167042246172, 0);
  sqcRZGate(q, -0.20340215992029975, 0);
  sqcRYGate(q, 2.9077550256191285, 1);
  sqcRZGate(q, 0.8723022798809364, 1);
  sqcRYGate(q, -2.980079923518397, 2);
  sqcRZGate(q, -2.5128741332590487, 2);
  sqcRYGate(q, -3.1332456454844855, 3);
  sqcRZGate(q, 1.6929454608338137, 3);
  sqcRYGate(q, -1.529571659587571, 4);
  sqcRZGate(q, 2.7014537835054306, 4);
  sqcRYGate(q, -2.719549833044005, 5);
  sqcRZGate(q, -1.0187076031402615, 5);
  sqcRYGate(q, 0.00888735103876186, 6);
  sqcRZGate(q, -1.1928082239347297, 6);
  sqcRYGate(q, -3.091800198439527, 7);
  sqcRZGate(q, -0.9162208512476019, 7);
  sqcRYGate(q, -0.18003339182985378, 8);
  sqcRZGate(q, 3.0903285691540403, 8);
  sqcRYGate(q, -2.9338520340670935, 9);
  sqcRZGate(q, 1.7506572581843811, 9);
  sqcRYGate(q, -0.2747464612919721, 10);
  sqcRZGate(q, -2.336981294836254, 10);
  sqcRYGate(q, 3.1406691707096117, 11);
  sqcRZGate(q, -2.095245423728607, 11);
  sqcRYGate(q, 3.1330827376590196, 12);
  sqcRZGate(q, -3.083224331295905, 12);
  sqcRYGate(q, 0.06791396588772687, 13);
  sqcRZGate(q, 1.2966380610398338, 13);
  sqcRYGate(q, -2.021152681633767, 14);
  sqcRZGate(q, -0.8310330717841593, 14);
  sqcRYGate(q, -1.6608324595754649, 15);
  sqcRZGate(q, -1.1637180677402874, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.7502388896626009, 0);
  sqcRZGate(q, -2.082705031006312, 0);
  sqcRYGate(q, 1.0107096942806395, 1);
  sqcRZGate(q, 1.7805532740167938, 1);
  sqcRYGate(q, -0.0014250172139131931, 2);
  sqcRZGate(q, -0.4767535321242127, 2);
  sqcRYGate(q, 3.1272014863108457, 3);
  sqcRZGate(q, -1.8174095186854515, 3);
  sqcRYGate(q, 1.82602265403737, 4);
  sqcRZGate(q, 0.521977228529365, 4);
  sqcRYGate(q, 0.09881921424723165, 5);
  sqcRZGate(q, -1.1013928708170129, 5);
  sqcRYGate(q, 3.1352203437419415, 6);
  sqcRZGate(q, 1.6116771285912912, 6);
  sqcRYGate(q, 1.6813777862676762, 7);
  sqcRZGate(q, -1.5025650473154766, 7);
  sqcRYGate(q, -0.15444562184115185, 8);
  sqcRZGate(q, 0.2055772845422954, 8);
  sqcRYGate(q, 2.983772157342943, 9);
  sqcRZGate(q, 0.246662547665272, 9);
  sqcRYGate(q, -3.113192127691505, 10);
  sqcRZGate(q, 0.5888309222627494, 10);
  sqcRYGate(q, -3.131768929716846, 11);
  sqcRZGate(q, -2.6891163111831267, 11);
  sqcRYGate(q, 2.3047834240215783, 12);
  sqcRZGate(q, -2.85301512521876, 12);
  sqcRYGate(q, 0.18487031059348946, 13);
  sqcRZGate(q, 1.9787327952900715, 13);
  sqcRYGate(q, 2.502095012149648, 14);
  sqcRZGate(q, -3.1000139603043424, 14);
  sqcRYGate(q, 0.10688654417743002, 15);
  sqcRZGate(q, -0.3666828467978796, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.592029830462547, 0);
  sqcRZGate(q, -2.6861492154290625, 0);
  sqcRYGate(q, -2.588935241845722, 1);
  sqcRZGate(q, 2.8282755903400694, 1);
  sqcRYGate(q, 1.038177087721932, 2);
  sqcRZGate(q, -2.903325387325921, 2);
  sqcRYGate(q, 0.06114431549030975, 3);
  sqcRZGate(q, 1.0599277284629876, 3);
  sqcRYGate(q, 2.8973389848166886, 4);
  sqcRZGate(q, 2.4200391105027372, 4);
  sqcRYGate(q, -2.5854233261726574, 5);
  sqcRZGate(q, -0.2627261158213523, 5);
  sqcRYGate(q, -1.821214002788599, 6);
  sqcRZGate(q, -1.8525511688169871, 6);
  sqcRYGate(q, -2.3646629721723107, 7);
  sqcRZGate(q, 2.828312829438207, 7);
  sqcRYGate(q, 1.3736236804878565, 8);
  sqcRZGate(q, 2.738181844196466, 8);
  sqcRYGate(q, -2.154652668464312, 9);
  sqcRZGate(q, 0.3811373892751125, 9);
  sqcRYGate(q, -2.976110816490006, 10);
  sqcRZGate(q, 2.259667103640232, 10);
  sqcRYGate(q, 1.620336715972718, 11);
  sqcRZGate(q, 1.2941740436338813, 11);
  sqcRYGate(q, 1.5626919418294678, 12);
  sqcRZGate(q, -1.5007608207073697, 12);
  sqcRYGate(q, 2.244335193534088, 13);
  sqcRZGate(q, 2.075024457488007, 13);
  sqcRYGate(q, -1.452517114691793, 14);
  sqcRZGate(q, -2.433158888221602, 14);
  sqcRYGate(q, 2.6728183409494326, 15);
  sqcRZGate(q, -2.2290097411521623, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0262175593724776, 0);
  sqcRZGate(q, 0.909933043412842, 0);
  sqcRYGate(q, -3.09202858255341, 1);
  sqcRZGate(q, -2.571002952571539, 1);
  sqcRYGate(q, -0.00168428447251312, 2);
  sqcRZGate(q, -0.7018503719327258, 2);
  sqcRYGate(q, 3.105866901392699, 3);
  sqcRZGate(q, 1.6228917675403602, 3);
  sqcRYGate(q, 0.2862736928191909, 4);
  sqcRZGate(q, -1.2452372494907344, 4);
  sqcRYGate(q, 2.8770113592382183, 5);
  sqcRZGate(q, 1.6971534734561278, 5);
  sqcRYGate(q, 0.16909652303039, 6);
  sqcRZGate(q, 2.921341686244013, 6);
  sqcRYGate(q, -0.0042806275364384305, 7);
  sqcRZGate(q, -0.7229460308058933, 7);
  sqcRYGate(q, 1.5946189400763455, 8);
  sqcRZGate(q, 0.027726697812322953, 8);
  sqcRYGate(q, 0.05444429296867703, 9);
  sqcRZGate(q, -3.0853074038108605, 9);
  sqcRYGate(q, 3.1140191920698728, 10);
  sqcRZGate(q, 1.7698736059284617, 10);
  sqcRYGate(q, 3.101353615755841, 11);
  sqcRZGate(q, 0.5009037914817683, 11);
  sqcRYGate(q, -0.047986218837776456, 12);
  sqcRZGate(q, 2.1588288284963313, 12);
  sqcRYGate(q, -1.5709319445974743, 13);
  sqcRZGate(q, -0.27211364568220214, 13);
  sqcRYGate(q, 1.9592599342004848, 14);
  sqcRZGate(q, -1.9635068251068732, 14);
  sqcRYGate(q, 0.419896404356976, 15);
  sqcRZGate(q, 1.1427671365940695, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.148850616895868, 0);
  sqcRZGate(q, 1.967103114380535, 0);
  sqcRYGate(q, -2.769751308097546, 1);
  sqcRZGate(q, 0.4352550304583245, 1);
  sqcRYGate(q, -1.7557107025048209, 2);
  sqcRZGate(q, -2.131641144708577, 2);
  sqcRYGate(q, -0.04174109126034653, 3);
  sqcRZGate(q, -2.472601837128902, 3);
  sqcRYGate(q, -0.18537051057633033, 4);
  sqcRZGate(q, -3.091188982332868, 4);
  sqcRYGate(q, -3.1104437488499608, 5);
  sqcRZGate(q, 1.6722932243188702, 5);
  sqcRYGate(q, 0.18222155264226342, 6);
  sqcRZGate(q, 0.22688005869258543, 6);
  sqcRYGate(q, -3.1401675814655685, 7);
  sqcRZGate(q, -0.022581585804663185, 7);
  sqcRYGate(q, 1.0609777733439971, 8);
  sqcRZGate(q, -0.021975370698141813, 8);
  sqcRYGate(q, -3.001217637755608, 9);
  sqcRZGate(q, 1.9658825221018628, 9);
  sqcRYGate(q, 0.9901557245905765, 10);
  sqcRZGate(q, -1.999979859883203, 10);
  sqcRYGate(q, 1.4255756322130244, 11);
  sqcRZGate(q, -1.6783193834227803, 11);
  sqcRYGate(q, 1.625061277583896, 12);
  sqcRZGate(q, -2.533848736562651, 12);
  sqcRYGate(q, -1.5368404650713716, 13);
  sqcRZGate(q, -2.07959811062258, 13);
  sqcRYGate(q, 1.5702229253261786, 14);
  sqcRZGate(q, 0.3524491927711989, 14);
  sqcRYGate(q, -0.7651394722905147, 15);
  sqcRZGate(q, 2.896514769418287, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.5686976231109107, 0);
  sqcRZGate(q, 1.1635433629274257, 0);
  sqcRYGate(q, -2.9478770225615447, 1);
  sqcRZGate(q, -2.3980611447737368, 1);
  sqcRYGate(q, -0.011634830013249164, 2);
  sqcRZGate(q, 1.9161654973178237, 2);
  sqcRYGate(q, -3.091180256143171, 3);
  sqcRZGate(q, 2.917012774633119, 3);
  sqcRYGate(q, -2.6453278568933576, 4);
  sqcRZGate(q, -3.098230318930092, 4);
  sqcRYGate(q, -2.8605655848871843, 5);
  sqcRZGate(q, 2.8005515567304093, 5);
  sqcRYGate(q, 0.17574679462095322, 6);
  sqcRZGate(q, -0.11951902261866544, 6);
  sqcRYGate(q, -0.007303123521207765, 7);
  sqcRZGate(q, 2.254836442884797, 7);
  sqcRYGate(q, -1.575198992907636, 8);
  sqcRZGate(q, 1.7861955989427614, 8);
  sqcRYGate(q, -0.03932758578508118, 9);
  sqcRZGate(q, 2.574594678461109, 9);
  sqcRYGate(q, 3.1283026491676877, 10);
  sqcRZGate(q, -0.7480830670581451, 10);
  sqcRYGate(q, 0.009479592084657436, 11);
  sqcRZGate(q, 3.0065713677191184, 11);
  sqcRYGate(q, 0.015291497812148336, 12);
  sqcRZGate(q, 2.781426160447098, 12);
  sqcRYGate(q, -0.00611723677113952, 13);
  sqcRZGate(q, 2.1718936547519414, 13);
  sqcRYGate(q, 0.05461082856963136, 14);
  sqcRZGate(q, -0.05848667787541859, 14);
  sqcRYGate(q, 1.5709144310122887, 15);
  sqcRZGate(q, -2.89081991971687, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.2344076488736269, 0);
  sqcRZGate(q, -1.6092301987185433, 0);
  sqcRYGate(q, -1.5297013460002151, 1);
  sqcRZGate(q, 1.2734049857222605, 1);
  sqcRYGate(q, -1.6600656330307118, 2);
  sqcRZGate(q, -0.8067766665454253, 2);
  sqcRYGate(q, 1.544466895249325, 3);
  sqcRZGate(q, 2.5196931097649053, 3);
  sqcRYGate(q, 3.0564753371196836, 4);
  sqcRZGate(q, 0.9627367884022258, 4);
  sqcRYGate(q, -0.05035114284628772, 5);
  sqcRZGate(q, 1.1160572623822833, 5);
  sqcRYGate(q, 0.47641399261610246, 6);
  sqcRZGate(q, -1.8595833742584567, 6);
  sqcRYGate(q, -0.4949963630628851, 7);
  sqcRZGate(q, 2.0840842317876573, 7);
  sqcRYGate(q, 1.655751927374393, 8);
  sqcRZGate(q, 0.43577316805887895, 8);
  sqcRYGate(q, 2.1023870019887267, 9);
  sqcRZGate(q, -2.6825431476861885, 9);
  sqcRYGate(q, -2.711788704192075, 10);
  sqcRZGate(q, -1.437931183750071, 10);
  sqcRYGate(q, 1.3164035148220803, 11);
  sqcRZGate(q, -0.8008970078585295, 11);
  sqcRYGate(q, 2.145781178332677, 12);
  sqcRZGate(q, -0.10171339737483719, 12);
  sqcRYGate(q, 1.048831085629381, 13);
  sqcRZGate(q, 2.590566584227973, 13);
  sqcRYGate(q, 0.45667687732516793, 14);
  sqcRZGate(q, 2.3306889639418267, 14);
  sqcRYGate(q, -2.598690886763242, 15);
  sqcRZGate(q, -0.32872936950511666, 15);

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
