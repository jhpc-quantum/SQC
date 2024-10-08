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

  sqcRYGate(q, 2.167790365357191, 0);
  sqcRYGate(q, -0.5697398989297957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18407233750226304, 0);
  sqcRYGate(q, -3.079177279928996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2884835883555903, 2);
  sqcRYGate(q, 1.9203403766787392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7552147749586289, 2);
  sqcRYGate(q, -1.5688937674072145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.288509579044612, 4);
  sqcRYGate(q, -2.0211348369176854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8129470071346719, 4);
  sqcRYGate(q, 0.3498150420836561, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9157572703095935, 6);
  sqcRYGate(q, 1.4676261820722356, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6418363688059125, 6);
  sqcRYGate(q, -2.570635188926206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9956960281912288, 1);
  sqcRYGate(q, 1.7487080735335285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1292104657248319, 1);
  sqcRYGate(q, 2.8646464682514896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8281265494551944, 3);
  sqcRYGate(q, 0.1276894591930308, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9380587718624187, 3);
  sqcRYGate(q, -2.966221141589714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5249131291319418, 5);
  sqcRYGate(q, 1.3712419593441476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2799685942055001, 5);
  sqcRYGate(q, -1.6127974349388066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.028790863514694, 0);
  sqcRYGate(q, -3.0641729272447584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06080824466460788, 0);
  sqcRYGate(q, -1.0463066366725107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0726616756344756, 2);
  sqcRYGate(q, -2.494976753120179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8653035252999914, 2);
  sqcRYGate(q, -1.3948655645529637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1368318344347537, 4);
  sqcRYGate(q, -1.3363676926609849, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.403866879083601, 4);
  sqcRYGate(q, 2.0643140039344656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.569342772985646, 6);
  sqcRYGate(q, 3.031956583171198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2065103490565585, 6);
  sqcRYGate(q, -0.24440015783749658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7892433563327756, 1);
  sqcRYGate(q, 0.3433297993683995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.885672722231653, 1);
  sqcRYGate(q, -2.01188162788851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5792783782754714, 3);
  sqcRYGate(q, 1.305092062260118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9821474200066039, 3);
  sqcRYGate(q, -2.2531491220825908, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4292044657527443, 5);
  sqcRYGate(q, -2.9492064673310234, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.552408470664858, 5);
  sqcRYGate(q, -2.7922763848951955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8351791232354975, 0);
  sqcRYGate(q, -1.7943407655517172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.020633020102635697, 0);
  sqcRYGate(q, 2.044670217481709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9635080228551383, 2);
  sqcRYGate(q, -2.7806836636666223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6559702352883168, 2);
  sqcRYGate(q, -0.6218153306649343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5095787053298966, 4);
  sqcRYGate(q, -2.898750110281237, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43425828871502786, 4);
  sqcRYGate(q, -0.16142077423085865, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0071324361831566, 6);
  sqcRYGate(q, 1.4991386110750495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3735768447815038, 6);
  sqcRYGate(q, 1.0311052002586358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0841377542574633, 1);
  sqcRYGate(q, 2.44830382170967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6039997289628163, 1);
  sqcRYGate(q, 1.5317442137894366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.918084091269348, 3);
  sqcRYGate(q, -0.49346946394421654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07923380554375854, 3);
  sqcRYGate(q, -0.5529621182908521, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5813351149764523, 5);
  sqcRYGate(q, 1.6205245624826268, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.411868774763783, 5);
  sqcRYGate(q, 1.3514470501913405, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3665354405596541, 0);
  sqcRYGate(q, -1.7643080225573566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3059402747530684, 0);
  sqcRYGate(q, 0.90187022257075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0032572817594856, 2);
  sqcRYGate(q, 1.7244014183326435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6531700992655174, 2);
  sqcRYGate(q, -0.7120065470983201, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4212530763986058, 4);
  sqcRYGate(q, 2.7869158746430243, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6633832648195948, 4);
  sqcRYGate(q, 1.9587378006626426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8770252853561393, 6);
  sqcRYGate(q, 1.6165904229375265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8163416648896589, 6);
  sqcRYGate(q, -1.1611145433465202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4298147986697849, 1);
  sqcRYGate(q, -2.4327475681701167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6077646547475206, 1);
  sqcRYGate(q, -2.2270771597470316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9060514499694579, 3);
  sqcRYGate(q, 0.13330911548972946, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2067048861681062, 3);
  sqcRYGate(q, 0.8298208030200707, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1243777199969966, 5);
  sqcRYGate(q, -1.8354236803460826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7387144745745484, 5);
  sqcRYGate(q, -2.613405465498173, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2584101242170203, 0);
  sqcRYGate(q, 1.5424899921930977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.811782414813184, 0);
  sqcRYGate(q, 1.7785382827494933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7532882445314697, 2);
  sqcRYGate(q, -3.0684899723517125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8549341181599255, 2);
  sqcRYGate(q, -0.23981467256344757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9701605961835567, 4);
  sqcRYGate(q, 0.016626804752078325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2690353647113947, 4);
  sqcRYGate(q, -1.6447084695767833, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4372272081179549, 6);
  sqcRYGate(q, 0.07604341354206104, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8796438098407995, 6);
  sqcRYGate(q, 2.656595363010516, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4376009888491108, 1);
  sqcRYGate(q, 0.9032164458980514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.574383142775742, 1);
  sqcRYGate(q, 2.2397483121653905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9700491219215435, 3);
  sqcRYGate(q, 1.6433279816308781, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5102151432004964, 3);
  sqcRYGate(q, -0.920892484528828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.31015054043229195, 5);
  sqcRYGate(q, 0.2814191334407825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.022948120790508, 5);
  sqcRYGate(q, 2.0881028543782536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0136730886022502, 0);
  sqcRYGate(q, -1.7804643447990278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7505347002564693, 0);
  sqcRYGate(q, 2.676268161302647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.68594729377386, 2);
  sqcRYGate(q, -2.305514286870959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.587319481140094, 2);
  sqcRYGate(q, 3.1155449467509464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2228401096753068, 4);
  sqcRYGate(q, -2.228560795433373, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.09198092658462542, 4);
  sqcRYGate(q, -1.705360741695901, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.760636328638041, 6);
  sqcRYGate(q, -3.1323291508254147, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3082749553390416, 6);
  sqcRYGate(q, 2.411262519080213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.11816705082851038, 1);
  sqcRYGate(q, 2.7127697723798687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2855946221483476, 1);
  sqcRYGate(q, 0.5458318873935057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.650436086794674, 3);
  sqcRYGate(q, -0.834567130424043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4279928020760873, 3);
  sqcRYGate(q, 2.6657743596931818, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4964322662893492, 5);
  sqcRYGate(q, 1.6694686111642136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3770195962659977, 5);
  sqcRYGate(q, -2.1499933771985145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.437407255427096, 0);
  sqcRYGate(q, 0.02703473716643323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9475025353281348, 0);
  sqcRYGate(q, 0.11795326101899216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5888083280636137, 2);
  sqcRYGate(q, -2.3407583090347037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8370878141764662, 2);
  sqcRYGate(q, -2.849344739880192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8233123586841358, 4);
  sqcRYGate(q, 0.2006283453825608, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7180653536087216, 4);
  sqcRYGate(q, -1.504984547588419, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.783277076166291, 6);
  sqcRYGate(q, 0.49120126885044346, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5863351691598417, 6);
  sqcRYGate(q, -2.0040671961187595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4446295469950732, 1);
  sqcRYGate(q, -2.880886765172991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3650449378686864, 1);
  sqcRYGate(q, -2.4150246950012852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19839653328907847, 3);
  sqcRYGate(q, 0.7546417577338126, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7719172126113258, 3);
  sqcRYGate(q, -0.16436596990354072, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3901748445027406, 5);
  sqcRYGate(q, -2.8524850606221492, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0423204884510424, 5);
  sqcRYGate(q, -2.612623987595574, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06169761904071258, 0);
  sqcRYGate(q, 2.7860414578299375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5914821436300404, 0);
  sqcRYGate(q, 3.0552777555659456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7107209683075489, 2);
  sqcRYGate(q, 2.758086836800827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7229664794425261, 2);
  sqcRYGate(q, 0.0005688111793018535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6111939995724605, 4);
  sqcRYGate(q, -2.4755575243810948, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7774724727680424, 4);
  sqcRYGate(q, -1.5798481578094616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.818974321149497, 6);
  sqcRYGate(q, 0.36054376397621635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.417262880054903, 6);
  sqcRYGate(q, -2.2226622598548325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.898179899064409, 1);
  sqcRYGate(q, 2.7203168824993145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1908235915674954, 1);
  sqcRYGate(q, 1.255361504364255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3333336955772261, 3);
  sqcRYGate(q, -2.581762148598687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5179587370280354, 3);
  sqcRYGate(q, 2.165933316822535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.38300321828190503, 5);
  sqcRYGate(q, -2.3767105830937054, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.670276095910773, 5);
  sqcRYGate(q, -1.237014401478196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7468558569511954, 0);
  sqcRYGate(q, 2.1106814074113944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.040071131695688, 0);
  sqcRYGate(q, -1.4158646826653758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7499345202740323, 2);
  sqcRYGate(q, -0.618082980625573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.625109498554993, 2);
  sqcRYGate(q, -0.4331788613543903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1393979503683553, 4);
  sqcRYGate(q, 3.035772803768262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.784524429077055, 4);
  sqcRYGate(q, 0.2919294950036723, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4126649817507158, 6);
  sqcRYGate(q, 2.655778021683473, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7975359839496394, 6);
  sqcRYGate(q, 1.6054503107259617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.209066315599709, 1);
  sqcRYGate(q, -1.4218678468498278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9920493062967264, 1);
  sqcRYGate(q, -0.5238590676134901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09344315739511799, 3);
  sqcRYGate(q, -2.4954059617803863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0632093751327698, 3);
  sqcRYGate(q, -2.2538105002615754, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0674408714969221, 5);
  sqcRYGate(q, -1.160169158981029, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2466171036817415, 5);
  sqcRYGate(q, 0.8788773384437911, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8026706792570872, 0);
  sqcRYGate(q, 0.5985788249682554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3337033463659237, 0);
  sqcRYGate(q, 2.8294641714360416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47227298693099984, 2);
  sqcRYGate(q, 0.21570150211616781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.528598545110731, 2);
  sqcRYGate(q, 1.1728606005091518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3515993816617633, 4);
  sqcRYGate(q, -1.1938275822751445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7773621085348361, 4);
  sqcRYGate(q, 0.3623953763857617, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9659792096913558, 6);
  sqcRYGate(q, -0.6463798157781749, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1843070500445085, 6);
  sqcRYGate(q, 2.326536560845285, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1750477862539075, 1);
  sqcRYGate(q, 0.027923763255784755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.849015915558395, 1);
  sqcRYGate(q, 1.466492674215485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9306256420189236, 3);
  sqcRYGate(q, -1.667328897520173, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8986102656092623, 3);
  sqcRYGate(q, -1.377561175653327, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9296073218540742, 5);
  sqcRYGate(q, -0.14051462059005357, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.322088199461609, 5);
  sqcRYGate(q, -0.9960671746533647, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3830383991742756, 0);
  sqcRYGate(q, 0.10140878470333557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6687662685760953, 0);
  sqcRYGate(q, -0.9137497601241282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7226392842717767, 2);
  sqcRYGate(q, -0.5034450726547722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9790150670644014, 2);
  sqcRYGate(q, 0.7185559615936112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6075205934001817, 4);
  sqcRYGate(q, -1.596947913706191, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.808283362232629, 4);
  sqcRYGate(q, 1.5897304866777926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1046386930885523, 6);
  sqcRYGate(q, 0.4096457042638795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5828122534336742, 6);
  sqcRYGate(q, 1.0985982366677867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7725281616476276, 1);
  sqcRYGate(q, 1.5026717550225754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3126501766428245, 1);
  sqcRYGate(q, 3.0669426101297064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2599385070920486, 3);
  sqcRYGate(q, 1.714489002589561, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9566760419498995, 3);
  sqcRYGate(q, -1.5679139341427115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7116039125085414, 5);
  sqcRYGate(q, 0.2345950289291343, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.783564489330721, 5);
  sqcRYGate(q, 1.7283629259140838, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6115593310453549, 0);
  sqcRYGate(q, -0.0074581188580200575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.982353537938036, 0);
  sqcRYGate(q, 0.9319221529697201, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2280461126214259, 2);
  sqcRYGate(q, -1.2138884261347684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4899283519853288, 2);
  sqcRYGate(q, -0.31263560617754643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.576160826482226, 4);
  sqcRYGate(q, -3.059147728035196, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9269971013124058, 4);
  sqcRYGate(q, 2.571063032161863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0899515016855257, 6);
  sqcRYGate(q, 0.5896501403369182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9865962544022153, 6);
  sqcRYGate(q, -1.221304587249283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.500341615500107, 1);
  sqcRYGate(q, 1.0187282931926074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12390302626788596, 1);
  sqcRYGate(q, -1.4109287704914386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2202264825755513, 3);
  sqcRYGate(q, -2.547402524518484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7386004699464954, 3);
  sqcRYGate(q, 1.7501188901243607, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8171075954553153, 5);
  sqcRYGate(q, 2.364981516482699, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1605111502681904, 5);
  sqcRYGate(q, 1.6909442437718358, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7922800158254417, 0);
  sqcRYGate(q, 2.9799385473777815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20628411839110614, 0);
  sqcRYGate(q, -1.1971358347851562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.849439449358477, 2);
  sqcRYGate(q, -0.5609246605397322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9639980942700306, 2);
  sqcRYGate(q, -0.8583400206760166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6188303245430418, 4);
  sqcRYGate(q, 2.5353238429033946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9265477169440404, 4);
  sqcRYGate(q, 2.440207731744581, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9858732879519034, 6);
  sqcRYGate(q, -2.0660824174417414, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.041672882346519, 6);
  sqcRYGate(q, -1.5423064712142338, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3208558566165272, 1);
  sqcRYGate(q, 0.10536718547471711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4359229083828895, 1);
  sqcRYGate(q, -2.532156414013455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.464326513331212, 3);
  sqcRYGate(q, -1.4071831664746293, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0402580737469083, 3);
  sqcRYGate(q, 1.4922086631587979, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.014700333462891, 5);
  sqcRYGate(q, 2.3896155822867864, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0572827842632853, 5);
  sqcRYGate(q, -1.2452052701189305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9259383838744464, 0);
  sqcRYGate(q, -0.5817531557386357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.528146635125003, 0);
  sqcRYGate(q, 0.3366688322560156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2159142142323285, 2);
  sqcRYGate(q, -1.98914570601704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.97031259956279, 2);
  sqcRYGate(q, 0.7447273720949749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.848403253768898, 4);
  sqcRYGate(q, 2.932810484588905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.913973727926666, 4);
  sqcRYGate(q, -0.6066364659423717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8026851616261004, 6);
  sqcRYGate(q, -0.05480196852797408, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4504120337581354, 6);
  sqcRYGate(q, -1.929650965167708, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1723315473939997, 1);
  sqcRYGate(q, 0.7889626957936432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31746590899843996, 1);
  sqcRYGate(q, 2.0586688388213856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4066472567908876, 3);
  sqcRYGate(q, -0.377387215851464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0660945645367255, 3);
  sqcRYGate(q, -1.401902875687353, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13249759839797365, 5);
  sqcRYGate(q, -0.918989837324113, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4694554171491047, 5);
  sqcRYGate(q, 1.1988203410764564, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.667409680449977, 0);
  sqcRYGate(q, -2.3560170882633447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.846503870273103, 0);
  sqcRYGate(q, -1.5297560161308352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0157277089929284, 2);
  sqcRYGate(q, 2.3523431305420437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.95229379938052, 2);
  sqcRYGate(q, 2.5188025634673346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9614059777416792, 4);
  sqcRYGate(q, -1.6068812176344718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2566291270945564, 4);
  sqcRYGate(q, 2.0941260924454257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0753896235577445, 6);
  sqcRYGate(q, 1.9772072162095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.02927079980743, 6);
  sqcRYGate(q, 2.028906066718236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.176955294312566, 1);
  sqcRYGate(q, -0.10902339468376197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1213090688713527, 1);
  sqcRYGate(q, -1.5367609013159818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0638294356471802, 3);
  sqcRYGate(q, 2.964447817777313, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.24013395682030492, 3);
  sqcRYGate(q, 2.332078593382059, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.57327715883397, 5);
  sqcRYGate(q, 0.6008633559036564, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.35969332876628624, 5);
  sqcRYGate(q, -0.9007055465206305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1077953636990104, 0);
  sqcRYGate(q, -1.7759658490603618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0025628612044337, 0);
  sqcRYGate(q, 2.028689393883491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.493401096468408, 2);
  sqcRYGate(q, -2.610988351474502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9195636549319062, 2);
  sqcRYGate(q, -1.3981466154709432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.534763822441501, 4);
  sqcRYGate(q, -1.4422737301610562, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.941399561755396, 4);
  sqcRYGate(q, 3.126160111712423, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5672833264600942, 6);
  sqcRYGate(q, 2.126736260103426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9360877457436203, 6);
  sqcRYGate(q, -0.7916619372656035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8225087338119277, 1);
  sqcRYGate(q, 2.4769418252211812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1065977624824193, 1);
  sqcRYGate(q, -2.173246443891328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.509314330000094, 3);
  sqcRYGate(q, -2.7298932598367904, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5330871607889198, 3);
  sqcRYGate(q, -2.0692824120281736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1794898643593838, 5);
  sqcRYGate(q, 2.8795271753419915, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.643433252119477, 5);
  sqcRYGate(q, 2.2439465755771346, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2291655094687517, 0);
  sqcRYGate(q, 0.32055453011223195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9100519042199693, 0);
  sqcRYGate(q, 1.1854231657853898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.542892219525737, 2);
  sqcRYGate(q, -1.5809260425995169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7915631252495068, 2);
  sqcRYGate(q, 1.7546770000238059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.713825599563032, 4);
  sqcRYGate(q, -1.7076379871415899, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.554327779008179, 4);
  sqcRYGate(q, 1.4194821834539928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9623564572354881, 6);
  sqcRYGate(q, -1.8974917395907076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8223041591809803, 6);
  sqcRYGate(q, 2.250298070387885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4182432740846037, 1);
  sqcRYGate(q, -0.6912038886350867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5218155483942744, 1);
  sqcRYGate(q, 2.198623086138703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5020117997454231, 3);
  sqcRYGate(q, -1.821641615575348, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6957819014262646, 3);
  sqcRYGate(q, 0.503297716410076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5165809374250578, 5);
  sqcRYGate(q, 3.085915179936244, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.17839097016093675, 5);
  sqcRYGate(q, 0.13328965142426075, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9226739551633679, 0);
  sqcRYGate(q, -1.8327777080487948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.811346611005593, 0);
  sqcRYGate(q, 0.5151684233382849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.010329925508887533, 2);
  sqcRYGate(q, 1.7673506281909663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1322629183120354, 2);
  sqcRYGate(q, 2.2833876165671145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.621700225673211, 4);
  sqcRYGate(q, -0.16121000157239468, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2837071804254614, 4);
  sqcRYGate(q, 2.995328734872983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8070033108236387, 6);
  sqcRYGate(q, -1.3558943326067556, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.012486735841714, 6);
  sqcRYGate(q, 0.9549665078928059, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8035312479072743, 1);
  sqcRYGate(q, -1.5417136162854848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1429264574517326, 1);
  sqcRYGate(q, 2.343993353022687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4418098370688501, 3);
  sqcRYGate(q, 2.8865954974486248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.610372275192521, 3);
  sqcRYGate(q, -3.0949855997661033, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1721585624691604, 5);
  sqcRYGate(q, 0.28115052526668716, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6598498325835696, 5);
  sqcRYGate(q, -1.9340865167684447, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7660781646288763, 0);
  sqcRYGate(q, 2.2546922801966653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7780454356469937, 0);
  sqcRYGate(q, 1.6732901115446588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2273236080900953, 2);
  sqcRYGate(q, 1.137618985385389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0491548107474564, 2);
  sqcRYGate(q, -2.0390488071313944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7613867590288892, 4);
  sqcRYGate(q, 1.7371066541115434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7576278655904872, 4);
  sqcRYGate(q, 2.7058932125472483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5321636270061516, 6);
  sqcRYGate(q, -2.878794919396382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6505679999251859, 6);
  sqcRYGate(q, 0.4496828117588123, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9027058262466725, 1);
  sqcRYGate(q, 1.3021181293938298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4788331957903085, 1);
  sqcRYGate(q, -1.4545637948239716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1032746842901133, 3);
  sqcRYGate(q, 1.6204232060789314, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9531730758527424, 3);
  sqcRYGate(q, -2.6048275602967093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.662223082120157, 5);
  sqcRYGate(q, -2.9282917636146752, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4193469048754253, 5);
  sqcRYGate(q, -1.6498611301384212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.39711581705003424, 0);
  sqcRYGate(q, 0.9473710601650608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.637775099716555, 0);
  sqcRYGate(q, 0.6162182021614798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.275943680203657, 2);
  sqcRYGate(q, 2.5716717790609587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9251153110191304, 2);
  sqcRYGate(q, -0.7902938686025998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11271550770137395, 4);
  sqcRYGate(q, 0.007996303199330868, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2454178602389288, 4);
  sqcRYGate(q, 2.280695323193095, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.905794108742337, 6);
  sqcRYGate(q, -2.091917325968379, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3356576664397757, 6);
  sqcRYGate(q, -0.7165339257899683, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0920299665227526, 1);
  sqcRYGate(q, 1.798490276311516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6029475876491852, 1);
  sqcRYGate(q, 2.000277288143467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48426258551248846, 3);
  sqcRYGate(q, 0.992779417743618, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7051896431300997, 3);
  sqcRYGate(q, -0.41013082097603887, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.090909203907632, 5);
  sqcRYGate(q, 1.6421788726943514, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.04882186520601639, 5);
  sqcRYGate(q, -2.926674168773265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9585992151944591, 0);
  sqcRYGate(q, -1.0196684508460727, 1);
  sqcRYGate(q, -1.7874333126580662, 2);
  sqcRYGate(q, 0.38800147407191954, 3);
  sqcRYGate(q, 2.4726839684985977, 4);
  sqcRYGate(q, 0.3682622495743572, 5);
  sqcRYGate(q, 0.3625743777000867, 6);
  sqcRYGate(q, -2.016701577264255, 7);

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
