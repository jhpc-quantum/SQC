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

  sqcRYGate(q, 2.9479687667895145, 0);
  sqcRYGate(q, -1.0877126800696029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5568412977548198, 0);
  sqcRYGate(q, 1.5391126752414654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5461461942575313, 2);
  sqcRYGate(q, -2.8829163161011113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6894445398096023, 2);
  sqcRYGate(q, -2.7522955291922546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07614312092955622, 4);
  sqcRYGate(q, 2.2140223293468404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.597278133250848, 4);
  sqcRYGate(q, 1.4504070126872106, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4430075929979052, 6);
  sqcRYGate(q, 3.1377526776642464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1371183630824238, 6);
  sqcRYGate(q, -2.3325460348112808, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5752984893385529, 0);
  sqcRYGate(q, -0.40163885635849716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4446576860949829, 0);
  sqcRYGate(q, -0.48710366587801196, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.597701656185122, 2);
  sqcRYGate(q, 0.02619384955912718, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8913471143490544, 2);
  sqcRYGate(q, -2.2003548402315705, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7540124510603556, 4);
  sqcRYGate(q, -2.5879709439925547, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6639337825430456, 4);
  sqcRYGate(q, 2.7662362237265756, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1945352498982669, 1);
  sqcRYGate(q, 0.36534123538437735, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.974297210861395, 1);
  sqcRYGate(q, -2.0881685399819356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.70302179511963, 3);
  sqcRYGate(q, -0.9892761738441403, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3046568852500964, 3);
  sqcRYGate(q, 0.9196947147965516, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.744599717012474, 5);
  sqcRYGate(q, -1.1200208672718643, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.563699740032306, 5);
  sqcRYGate(q, 2.178799328247142, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0558558595974623, 0);
  sqcRYGate(q, -2.156630783330087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9511515712980005, 0);
  sqcRYGate(q, -1.1368232087297283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5022046752857212, 2);
  sqcRYGate(q, 1.7301950075820016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4786489081682115, 2);
  sqcRYGate(q, 2.2193349630779706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1752574342982633, 4);
  sqcRYGate(q, -0.5845129502478994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6493786952895517, 4);
  sqcRYGate(q, 2.4075308501034987, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9612762990411771, 6);
  sqcRYGate(q, -2.1114362022583695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7446952732131924, 6);
  sqcRYGate(q, -3.0854309675047755, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0741899284045653, 0);
  sqcRYGate(q, -1.4280216025157948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42611387483538543, 0);
  sqcRYGate(q, -1.6473039221538972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.527402539508869, 2);
  sqcRYGate(q, -0.39768670543510193, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6749011769121642, 2);
  sqcRYGate(q, 1.1906147646841028, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.762000131803371, 4);
  sqcRYGate(q, 2.2683824419752767, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8714856024853956, 4);
  sqcRYGate(q, -0.36469075848789767, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2394469275642793, 1);
  sqcRYGate(q, -1.044237360764912, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3604634417983096, 1);
  sqcRYGate(q, 1.5385086889212767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1338839397992846, 3);
  sqcRYGate(q, -2.9328908439193, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.27720521238661366, 3);
  sqcRYGate(q, -2.0804846029197543, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6391480795111235, 5);
  sqcRYGate(q, 2.0982605728778747, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7058127028881538, 5);
  sqcRYGate(q, -0.22809034919578952, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5056158016631267, 0);
  sqcRYGate(q, 0.11324228457173854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5163895702929633, 0);
  sqcRYGate(q, -2.3714463429804975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.056700920443969335, 2);
  sqcRYGate(q, 2.3490934167377655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.342820303654382, 2);
  sqcRYGate(q, 2.302993322553499, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47822511650642324, 4);
  sqcRYGate(q, 2.7539795859679397, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.235968404662115, 4);
  sqcRYGate(q, 2.9926050413777845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0848881759121345, 6);
  sqcRYGate(q, 0.9875597458089435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3948577670458633, 6);
  sqcRYGate(q, -1.6937431420839828, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6154279794442044, 0);
  sqcRYGate(q, -2.9349390942134232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18231026248993193, 0);
  sqcRYGate(q, -0.2787170374006527, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2743335239997364, 2);
  sqcRYGate(q, 2.2710724851960418, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6350877285977634, 2);
  sqcRYGate(q, -0.5991991811889585, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9874431256994947, 4);
  sqcRYGate(q, 0.11003765916692078, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.330409883774493, 4);
  sqcRYGate(q, 0.7392943934697591, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.549213990245332, 1);
  sqcRYGate(q, 1.3572246572390991, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3693945978479753, 1);
  sqcRYGate(q, 0.7363219994106559, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6555503212657277, 3);
  sqcRYGate(q, 1.9696215833800537, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0653622794919766, 3);
  sqcRYGate(q, -1.4881111465887065, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1291711675309735, 5);
  sqcRYGate(q, -2.7789968956371873, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7722036265019403, 5);
  sqcRYGate(q, 2.3599987656167647, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1211739258367113, 0);
  sqcRYGate(q, 0.8822904917241416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8420206827089536, 0);
  sqcRYGate(q, 0.21157216315750466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4082854259456108, 2);
  sqcRYGate(q, -2.094052175462135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8665369649546997, 2);
  sqcRYGate(q, 2.1673522598875063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.568433873118153, 4);
  sqcRYGate(q, 0.7214722388301668, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6625688486504944, 4);
  sqcRYGate(q, 0.42901730458634557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4179759059576695, 6);
  sqcRYGate(q, 1.9337950357871059, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8495884846453308, 6);
  sqcRYGate(q, 0.6119042999764985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.431265996942453, 0);
  sqcRYGate(q, -2.4505493626488595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5259445054401773, 0);
  sqcRYGate(q, -0.5303098941949936, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.351950395004861, 2);
  sqcRYGate(q, 3.0732350194360443, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6173521481117894, 2);
  sqcRYGate(q, 1.5962223265691522, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.1150752515713016, 4);
  sqcRYGate(q, -1.9091658300871794, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2939637135137927, 4);
  sqcRYGate(q, -2.600094770456652, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9729219866929881, 1);
  sqcRYGate(q, -1.266929224539588, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3197923262078707, 1);
  sqcRYGate(q, 2.37577245804557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16045441697570784, 3);
  sqcRYGate(q, 2.100147594685844, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.474783662387333, 3);
  sqcRYGate(q, 2.0325718343121553, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7551716956929613, 5);
  sqcRYGate(q, -2.0242004157464497, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6823353835632743, 5);
  sqcRYGate(q, 0.7258112389847738, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.20341386483103285, 0);
  sqcRYGate(q, 1.4720716091446495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.529488820658772, 0);
  sqcRYGate(q, -0.5630202951844692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3304527956246892, 2);
  sqcRYGate(q, -1.812430523473129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1152762393008233, 2);
  sqcRYGate(q, -2.338977583916037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14655200163302418, 4);
  sqcRYGate(q, 2.9763295101044838, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9720747960111407, 4);
  sqcRYGate(q, 0.26514457131724534, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3289695303125995, 6);
  sqcRYGate(q, 1.9400479340882777, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2135025437069273, 6);
  sqcRYGate(q, -1.7815069979815377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.023110520722648, 0);
  sqcRYGate(q, 1.4325203837357494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6680016298528275, 0);
  sqcRYGate(q, -1.9010074546433353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9838739002117514, 2);
  sqcRYGate(q, 1.7063116041100703, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.898399700904168, 2);
  sqcRYGate(q, 0.3083895236425569, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2200295264431236, 4);
  sqcRYGate(q, -1.6171203010263362, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0815839049517937, 4);
  sqcRYGate(q, -2.5915706101480174, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.140155833528809, 1);
  sqcRYGate(q, -2.5031323040649403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7959452521579107, 1);
  sqcRYGate(q, -1.7796365182577716, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.011775532793137, 3);
  sqcRYGate(q, 1.0358614001155844, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.906999275230157, 3);
  sqcRYGate(q, 0.3320497005527905, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9281614864490608, 5);
  sqcRYGate(q, 2.1180076174358566, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1733665526775554, 5);
  sqcRYGate(q, 0.027230833446547413, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1856826946471186, 0);
  sqcRYGate(q, -2.1677291201607853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.887121662040674, 0);
  sqcRYGate(q, -1.6967411355830488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2628729174327347, 2);
  sqcRYGate(q, 0.3189011273516793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6765539429458804, 2);
  sqcRYGate(q, -0.13859574066994504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3307879476327127, 4);
  sqcRYGate(q, 2.7871931246307717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1421815065513865, 4);
  sqcRYGate(q, -1.2694196861972347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.048361396472567, 6);
  sqcRYGate(q, -0.5497137095825773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8242479209432487, 6);
  sqcRYGate(q, -0.3944031637032595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7144883750410236, 0);
  sqcRYGate(q, -2.840309282919403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.366996326865353, 0);
  sqcRYGate(q, -2.465119256514122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.102476348455798, 2);
  sqcRYGate(q, 1.3620350064191686, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.835732058496195, 2);
  sqcRYGate(q, 1.7649355650382823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4381420664239415, 4);
  sqcRYGate(q, -1.3829265418605954, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0923402538010887, 4);
  sqcRYGate(q, -2.801199768037029, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.171755722453958, 1);
  sqcRYGate(q, -1.6634329193731123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4929841869124043, 1);
  sqcRYGate(q, -2.4199658539126263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5710539759297983, 3);
  sqcRYGate(q, -2.2388722146575226, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.971537963992468, 3);
  sqcRYGate(q, 2.3813984173042755, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8978675550888653, 5);
  sqcRYGate(q, -0.729391631589464, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.533027263465863, 5);
  sqcRYGate(q, 0.005561055018171889, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5268825576137122, 0);
  sqcRYGate(q, -2.1179931932236196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0303514478615563, 0);
  sqcRYGate(q, -1.3838145203994443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3003730711249273, 2);
  sqcRYGate(q, -0.783582415280633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9887095368818275, 2);
  sqcRYGate(q, -0.7049129432895525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2153206708195023, 4);
  sqcRYGate(q, -0.27222297006339047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.221297354613843, 4);
  sqcRYGate(q, -2.563436372381232, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0406521644767945, 6);
  sqcRYGate(q, -0.9616715181702151, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3827634195032212, 6);
  sqcRYGate(q, -1.927372987058587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9171282790377056, 0);
  sqcRYGate(q, -1.4890328839987887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1656995223297488, 0);
  sqcRYGate(q, 1.2586821922536373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9864605834227078, 2);
  sqcRYGate(q, 1.6179250386880648, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8755514052180482, 2);
  sqcRYGate(q, 0.3564195773507879, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5505988922946626, 4);
  sqcRYGate(q, -1.2958341814289502, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1684444960730003, 4);
  sqcRYGate(q, 1.6398057546003317, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.098120254644949, 1);
  sqcRYGate(q, -1.5120018028487303, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9496079749905229, 1);
  sqcRYGate(q, 1.8700958799417902, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.91846751435031, 3);
  sqcRYGate(q, -1.647924347520964, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4975052393996444, 3);
  sqcRYGate(q, -2.210586364346101, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.22652523319801343, 5);
  sqcRYGate(q, -0.33950710273628165, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0858692821924474, 5);
  sqcRYGate(q, -0.5111442859927632, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.186424646475354, 0);
  sqcRYGate(q, -0.5905331393010504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7385708470047112, 0);
  sqcRYGate(q, -0.10361745768313518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6249209432018068, 2);
  sqcRYGate(q, 1.2846560634152047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.779176970082487, 2);
  sqcRYGate(q, 0.7577461575800619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.941439498435499, 4);
  sqcRYGate(q, 3.124610712014597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1950655409906945, 4);
  sqcRYGate(q, 0.06948850421984896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.19582814538513194, 6);
  sqcRYGate(q, 0.25868011275573455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6833510027238452, 6);
  sqcRYGate(q, -1.2014426034076604, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4442980162215209, 0);
  sqcRYGate(q, 1.8248797627668396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0347822368359, 0);
  sqcRYGate(q, 1.5133188223734733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6199022680747968, 2);
  sqcRYGate(q, 2.068757037256563, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4590391174349704, 2);
  sqcRYGate(q, -0.7580932020397101, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.254555486978699, 4);
  sqcRYGate(q, -1.0580650891538017, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.04967026186999296, 4);
  sqcRYGate(q, -0.6982709269340637, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0913532678236875, 1);
  sqcRYGate(q, -2.501842781909205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1769006428394766, 1);
  sqcRYGate(q, -2.551470479098871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8102380633735065, 3);
  sqcRYGate(q, 0.7990035886614019, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6523463556815061, 3);
  sqcRYGate(q, -2.743747000562944, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4847055206976902, 5);
  sqcRYGate(q, -0.602471895237965, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1158321879853077, 5);
  sqcRYGate(q, -1.7914772484827082, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9023081560096005, 0);
  sqcRYGate(q, 0.7914098991166248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.886693139005513, 0);
  sqcRYGate(q, -2.826565855675391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.997571985743178, 2);
  sqcRYGate(q, 0.3145303462677645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4281733751147376, 2);
  sqcRYGate(q, 0.3283391269557531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4211119886692151, 4);
  sqcRYGate(q, -2.308142897160293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5265654016906602, 4);
  sqcRYGate(q, 0.7925606722789915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.992136456939483, 6);
  sqcRYGate(q, -2.4574403316059543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19059781892020342, 6);
  sqcRYGate(q, 2.5039039331055486, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6073886498288681, 0);
  sqcRYGate(q, 0.9837689159521058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7780724257230993, 0);
  sqcRYGate(q, -3.060771133028622, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3590087265612216, 2);
  sqcRYGate(q, 2.056658428502014, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9747070096187054, 2);
  sqcRYGate(q, -0.22434027147628333, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1790590966999557, 4);
  sqcRYGate(q, -0.6028015137280831, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.18148643435179, 4);
  sqcRYGate(q, -1.110138681894713, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5223985886181544, 1);
  sqcRYGate(q, -0.7235607132294894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.32412065125010603, 1);
  sqcRYGate(q, 0.5374175403250296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4855952392122642, 3);
  sqcRYGate(q, 0.3485121865240593, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8096214110012356, 3);
  sqcRYGate(q, 0.5030656777990491, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4104511463696357, 5);
  sqcRYGate(q, 2.100421915164128, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6038514871440703, 5);
  sqcRYGate(q, -0.5941808777205233, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.815088106121821, 0);
  sqcRYGate(q, 0.05783769760943137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6204207848683216, 0);
  sqcRYGate(q, 0.016773198655821844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9279116557181892, 2);
  sqcRYGate(q, -0.8611616002150057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.462377201078212, 2);
  sqcRYGate(q, -0.5495774535425575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.12918588311275, 4);
  sqcRYGate(q, 2.4304857769638426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.940939616893261, 4);
  sqcRYGate(q, 0.444781061491218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5704366896173436, 6);
  sqcRYGate(q, -2.5437562920544012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2894316523946303, 6);
  sqcRYGate(q, -1.1787329667926167, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6794816691785233, 0);
  sqcRYGate(q, 1.405847472254619, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.980480351026561, 0);
  sqcRYGate(q, 0.4154202596066306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6762548357512932, 2);
  sqcRYGate(q, 1.6740255215055928, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9409524233934015, 2);
  sqcRYGate(q, 1.4933125107866176, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7449668063301425, 4);
  sqcRYGate(q, 0.22320775090636316, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.303724419506188, 4);
  sqcRYGate(q, 0.3474958032073445, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.17198831222821284, 1);
  sqcRYGate(q, -3.0866975239397596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4035156714124257, 1);
  sqcRYGate(q, -1.0950283451003462, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4866963540573113, 3);
  sqcRYGate(q, -1.6773484029322434, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7460655909693172, 3);
  sqcRYGate(q, 2.9403582774258337, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.113078499881789, 5);
  sqcRYGate(q, 0.14528735278519067, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.01819645205267294, 5);
  sqcRYGate(q, 2.09378848977161, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4112970826333218, 0);
  sqcRYGate(q, -0.49091401932554385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6021438093147937, 0);
  sqcRYGate(q, -0.4742950373057395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.637473003342909, 2);
  sqcRYGate(q, 1.5267975017339268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7391881913875333, 2);
  sqcRYGate(q, -0.5525625254783422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1377439883942997, 4);
  sqcRYGate(q, 0.4122308986741734, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1735194043916066, 4);
  sqcRYGate(q, 2.323841630125601, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7209712421652537, 6);
  sqcRYGate(q, 1.2753423704242715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3112207603187347, 6);
  sqcRYGate(q, 0.10193504006926772, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1001895176111531, 0);
  sqcRYGate(q, 1.7246375576871706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.582862963906903, 0);
  sqcRYGate(q, 3.1011104223463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.019413935066854, 2);
  sqcRYGate(q, 1.995073242079271, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5199770270947712, 2);
  sqcRYGate(q, -1.6378645543372505, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.45141445452723705, 4);
  sqcRYGate(q, -0.7174413456600105, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.983619083019326, 4);
  sqcRYGate(q, -2.9105018549808572, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.444398652713109, 1);
  sqcRYGate(q, 1.732505687144622, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.393345489240895, 1);
  sqcRYGate(q, 2.9766148943741553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4075950871290566, 3);
  sqcRYGate(q, 2.609305521049837, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3583917336562272, 3);
  sqcRYGate(q, -0.49136298335941575, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.49925821485453, 5);
  sqcRYGate(q, 2.272248438737571, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5962008806519243, 5);
  sqcRYGate(q, -2.3847629926567646, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0869740780408286, 0);
  sqcRYGate(q, 0.0972989793868635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.230254508485638, 0);
  sqcRYGate(q, 0.5905908856457155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.219754776222193, 2);
  sqcRYGate(q, -1.8086564828935225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2039815271547893, 2);
  sqcRYGate(q, -0.5467162977779525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.721140725278306, 4);
  sqcRYGate(q, 2.187641426819951, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2794679711527346, 4);
  sqcRYGate(q, 0.5214692142983797, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0062688171369017455, 6);
  sqcRYGate(q, 0.17568671333336813, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2500718197500921, 6);
  sqcRYGate(q, -0.8377669184581723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.002715947060384, 0);
  sqcRYGate(q, 1.0926810155243416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8800146991524764, 0);
  sqcRYGate(q, 1.1008791748016882, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9690799737178162, 2);
  sqcRYGate(q, -0.5875786773714289, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0291015123712426, 2);
  sqcRYGate(q, -1.4195948735385002, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2652542975055492, 4);
  sqcRYGate(q, 2.124912458424438, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9604862161385188, 4);
  sqcRYGate(q, -2.5177861001637183, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7787402938402508, 1);
  sqcRYGate(q, 3.0646842938625745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.27127308909098935, 1);
  sqcRYGate(q, -2.2766425334741074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8475746416535563, 3);
  sqcRYGate(q, 0.9353616859507573, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.19895400463258206, 3);
  sqcRYGate(q, 0.742548074443885, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.769546782071892, 5);
  sqcRYGate(q, -2.245124948121477, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6027483638668292, 5);
  sqcRYGate(q, -1.671095746789212, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8724498001517986, 0);
  sqcRYGate(q, -0.5169990826628212, 1);
  sqcRYGate(q, -0.17054352060104702, 2);
  sqcRYGate(q, 2.451154887711914, 3);
  sqcRYGate(q, -2.0209889041422677, 4);
  sqcRYGate(q, -1.5564558845683836, 5);
  sqcRYGate(q, -3.081606996288977, 6);
  sqcRYGate(q, 2.420380223742448, 7);

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
