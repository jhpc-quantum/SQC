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

  sqcRYGate(q, -2.0446734806216362, 0);
  sqcRYGate(q, 1.1537149098616704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.704867223149914, 0);
  sqcRYGate(q, -0.8958374436325612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1125255131084204, 2);
  sqcRYGate(q, -2.0820246286242154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.756299792904401, 2);
  sqcRYGate(q, 1.4675567482430203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1813525985816105, 4);
  sqcRYGate(q, -0.6914716646634993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7605441885285185, 4);
  sqcRYGate(q, 0.041947869975054085, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2658797942720112, 6);
  sqcRYGate(q, -0.7941055251026814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5199538893081102, 6);
  sqcRYGate(q, -1.7178572550963649, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5175385938094834, 1);
  sqcRYGate(q, 2.9013642497961163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3258837533063437, 1);
  sqcRYGate(q, -2.8501073754015667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.988927735844626, 3);
  sqcRYGate(q, -1.0944584053044824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3392266513219127, 3);
  sqcRYGate(q, 2.498009181699239, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5015693808521586, 5);
  sqcRYGate(q, -2.350258012518289, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.924955401982313, 5);
  sqcRYGate(q, 0.662940986639982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7986058172758117, 0);
  sqcRYGate(q, -2.824113867031675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0419791441800452, 0);
  sqcRYGate(q, 1.9881955712843773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6811820606986537, 2);
  sqcRYGate(q, -0.6342983413825241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5692037737241415, 2);
  sqcRYGate(q, -0.8244044188243987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6699675524553266, 4);
  sqcRYGate(q, 1.2473553862067615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4045898046201444, 4);
  sqcRYGate(q, 2.040142353608358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9527816382713667, 6);
  sqcRYGate(q, -1.075755440534116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8430108540840922, 6);
  sqcRYGate(q, -1.1122618184255693, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3322890208754954, 1);
  sqcRYGate(q, -2.3179677289237492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14300959306439373, 1);
  sqcRYGate(q, -1.1289344400889743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4310771825535034, 3);
  sqcRYGate(q, 1.8483622843553267, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.64311852381595, 3);
  sqcRYGate(q, -2.709192769280594, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5549722776331683, 5);
  sqcRYGate(q, 2.6508874128147757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.802475583768458, 5);
  sqcRYGate(q, 0.9519869550754539, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0137044740268957, 0);
  sqcRYGate(q, -0.9550660191398928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0588336563262153, 0);
  sqcRYGate(q, 1.7925025828761951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5191051893208408, 2);
  sqcRYGate(q, -0.15819923130831093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.304916057020745, 2);
  sqcRYGate(q, -2.4317079245575184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11485879659979621, 4);
  sqcRYGate(q, 2.413833979630524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.321900142427852, 4);
  sqcRYGate(q, 2.544910642343754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8620572178639615, 6);
  sqcRYGate(q, -2.075267686432227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6996210900863442, 6);
  sqcRYGate(q, 0.08266563656846845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8028415059044187, 1);
  sqcRYGate(q, 2.847132302540149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.574384176436929, 1);
  sqcRYGate(q, 2.3271893681204645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7458177971307149, 3);
  sqcRYGate(q, 1.3256790417110031, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7329187743622448, 3);
  sqcRYGate(q, 2.1058592085329315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16277246551427285, 5);
  sqcRYGate(q, -0.9202713137434556, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.524232829447381, 5);
  sqcRYGate(q, -1.989306909911532, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.530425117088087, 0);
  sqcRYGate(q, 0.6211419610009401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2745157958054776, 0);
  sqcRYGate(q, 1.8665280738039618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9935166182404833, 2);
  sqcRYGate(q, 1.9157591685939535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9684059426021658, 2);
  sqcRYGate(q, -0.6844207529072631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6520638679231532, 4);
  sqcRYGate(q, 1.0671240308672043, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6921715625553713, 4);
  sqcRYGate(q, -2.1359535108478234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.063036765025883, 6);
  sqcRYGate(q, -2.39309151180113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6224642957359343, 6);
  sqcRYGate(q, 2.3827592515130047, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2530241912888888, 1);
  sqcRYGate(q, -1.1267712400849668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6845864988705708, 1);
  sqcRYGate(q, 0.8073038981818907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.313531617247622, 3);
  sqcRYGate(q, -1.1775721154416077, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.334561523200044, 3);
  sqcRYGate(q, 2.841077186774099, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.45473621012599585, 5);
  sqcRYGate(q, -0.36650668625415506, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0873870166986894, 5);
  sqcRYGate(q, -2.8735299134221814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6582693595919402, 0);
  sqcRYGate(q, -1.9033546146273235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.036877005611469116, 0);
  sqcRYGate(q, 0.7634868932312687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9152953384713918, 2);
  sqcRYGate(q, -1.3692745202164507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1121455865163243, 2);
  sqcRYGate(q, 2.984800904357531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6676916542654485, 4);
  sqcRYGate(q, -1.0095164356962218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2241728855557747, 4);
  sqcRYGate(q, 0.7351349501188179, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0752183567032434, 6);
  sqcRYGate(q, -3.0018615383923075, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.542905738328757, 6);
  sqcRYGate(q, 0.483469560051084, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5205091469603706, 1);
  sqcRYGate(q, 1.9518499587864193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04267142637864917, 1);
  sqcRYGate(q, 1.537427843242705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36899233412285337, 3);
  sqcRYGate(q, 2.6591909431224403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6502235785621817, 3);
  sqcRYGate(q, 2.9698104867231145, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.19346354892651266, 5);
  sqcRYGate(q, -1.4644982835466005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.23886621313329037, 5);
  sqcRYGate(q, 0.8925834294183995, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8297661387056245, 0);
  sqcRYGate(q, -1.885807283663428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0287558725789743, 0);
  sqcRYGate(q, 0.3465081529632412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5064573424722196, 2);
  sqcRYGate(q, 1.4922480929023978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5006034252586913, 2);
  sqcRYGate(q, -2.0359280000711486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6325970944831614, 4);
  sqcRYGate(q, -1.8949304084008372, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.794432216878985, 4);
  sqcRYGate(q, -0.48953598685880184, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3535082434501602, 6);
  sqcRYGate(q, -2.3222001123402585, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5924596239285642, 6);
  sqcRYGate(q, -0.2588564563191695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.900205928024564, 1);
  sqcRYGate(q, -0.23370609278504964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.42517462771413683, 1);
  sqcRYGate(q, -1.440506856034806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5664855524802785, 3);
  sqcRYGate(q, -0.0038253684705109375, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2506747182696696, 3);
  sqcRYGate(q, 0.34541274466231986, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1128219102964554, 5);
  sqcRYGate(q, -0.7046348213707949, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4214677419201256, 5);
  sqcRYGate(q, -2.1784975171875693, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.037003470679088046, 0);
  sqcRYGate(q, 1.6563168246430136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.965466405984774, 0);
  sqcRYGate(q, -0.8668208017216186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6067446587951046, 2);
  sqcRYGate(q, -2.571434030618998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1354908014179255, 2);
  sqcRYGate(q, 1.8388605051758746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6264912955748114, 4);
  sqcRYGate(q, 1.5920175750091037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5867300495559107, 4);
  sqcRYGate(q, -1.0767137300204395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8199357884214136, 6);
  sqcRYGate(q, -0.5078742104469361, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7565876186730964, 6);
  sqcRYGate(q, -3.014540613371143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3780860613933006, 1);
  sqcRYGate(q, 2.0443758782006745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3094218991687403, 1);
  sqcRYGate(q, -1.3490682144825588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05031680954011897, 3);
  sqcRYGate(q, -3.098116750081417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3327899163393669, 3);
  sqcRYGate(q, -2.8664428113487896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9506776296657764, 5);
  sqcRYGate(q, 2.9711430381479107, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0463235874102934, 5);
  sqcRYGate(q, 2.6563554218560688, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.345261003212696, 0);
  sqcRYGate(q, -2.8592354450766133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3078769443635523, 0);
  sqcRYGate(q, -2.372180511065803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.574200694389801, 2);
  sqcRYGate(q, 2.5100306295029684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7903359289917004, 2);
  sqcRYGate(q, 2.3383138926319313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21773163429030812, 4);
  sqcRYGate(q, 1.5439076471384539, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2273707795946589, 4);
  sqcRYGate(q, 1.2918545056277644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.622638008576128, 6);
  sqcRYGate(q, -0.33472812532883844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2744968311194835, 6);
  sqcRYGate(q, 1.4022667114543426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2222527862077222, 1);
  sqcRYGate(q, -2.335422277865746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2975285556391696, 1);
  sqcRYGate(q, 2.1647003032033423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.984402404079372, 3);
  sqcRYGate(q, -2.2688836205516134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.452930543228062, 3);
  sqcRYGate(q, -2.120359701138586, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7886178373782657, 5);
  sqcRYGate(q, -0.42295984140864373, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1950168520933335, 5);
  sqcRYGate(q, -1.3774298472388509, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.337961625057848, 0);
  sqcRYGate(q, 0.7058694126333469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5620589556360593, 0);
  sqcRYGate(q, 2.6019533782178907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1286674488004218, 2);
  sqcRYGate(q, -2.6603145735647318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0821813458187437, 2);
  sqcRYGate(q, -0.7549363586732606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7931564779313129, 4);
  sqcRYGate(q, -2.6176715068144194, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.140988891784278, 4);
  sqcRYGate(q, -0.42105468512673566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.311664005495535, 6);
  sqcRYGate(q, 0.8164063743233405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9465683675619605, 6);
  sqcRYGate(q, 2.88333765851872, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8507487010045267, 1);
  sqcRYGate(q, -3.1202011236043927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9490773923026197, 1);
  sqcRYGate(q, -2.078404136868814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.050346516493402, 3);
  sqcRYGate(q, 2.861990755350918, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.505808123530655, 3);
  sqcRYGate(q, -2.5263319992501394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8497052071228115, 5);
  sqcRYGate(q, 0.3485621780516448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7099839827545642, 5);
  sqcRYGate(q, 1.9980212476945411, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7727991821199796, 0);
  sqcRYGate(q, -0.8058672020885324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.888790072518243, 0);
  sqcRYGate(q, 1.395170292187692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0453873001167802, 2);
  sqcRYGate(q, -1.0887135462481936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4284159569913064, 2);
  sqcRYGate(q, -0.737216051652716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4295682592940944, 4);
  sqcRYGate(q, 1.0581855004310197, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.032824660375635695, 4);
  sqcRYGate(q, -1.6131370568901626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.031947203756618275, 6);
  sqcRYGate(q, -2.2856083951133046, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25265916188337917, 6);
  sqcRYGate(q, -1.2493779666195932, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.143191398986688, 1);
  sqcRYGate(q, -0.661268580434851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3743740979047103, 1);
  sqcRYGate(q, 0.8591901655834442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.533694389735561, 3);
  sqcRYGate(q, -0.3661924060913009, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.96573161099512, 3);
  sqcRYGate(q, -1.1499687878266567, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7728406290528262, 5);
  sqcRYGate(q, 2.186257708854612, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8029976785827113, 5);
  sqcRYGate(q, -1.892126019068974, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1282011175549824, 0);
  sqcRYGate(q, -0.8789836458169112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6503838762697374, 0);
  sqcRYGate(q, 1.2834788246079516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6277666794377251, 2);
  sqcRYGate(q, 1.1837003543362012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2437825164349547, 2);
  sqcRYGate(q, 1.5138810016023037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.638329287922907, 4);
  sqcRYGate(q, -3.1227329145543754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5208044609542517, 4);
  sqcRYGate(q, -2.7236574047515685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7639359849609394, 6);
  sqcRYGate(q, -0.055007381781073235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1947710743486936, 6);
  sqcRYGate(q, -0.6037851988011452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.273084939890043, 1);
  sqcRYGate(q, -2.8649314022757992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1230688051995164, 1);
  sqcRYGate(q, 0.23745765383543596, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.689777002296444, 3);
  sqcRYGate(q, -0.918220913492884, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7289843147474728, 3);
  sqcRYGate(q, 1.6279837329424565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5173566175561867, 5);
  sqcRYGate(q, -3.0045723121062164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8645086702623646, 5);
  sqcRYGate(q, 0.7404569801183865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5792014858253896, 0);
  sqcRYGate(q, 0.14232343659542313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12556720240113606, 0);
  sqcRYGate(q, 2.1302054242083917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9996578401512313, 2);
  sqcRYGate(q, 2.386200270258105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.267780049808716, 2);
  sqcRYGate(q, -1.1114831441389195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5004739917790533, 4);
  sqcRYGate(q, -2.1658797646537047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.33306194910931364, 4);
  sqcRYGate(q, -1.2971239625190805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.888033880914619, 6);
  sqcRYGate(q, -1.762046385598939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.564428670980335, 6);
  sqcRYGate(q, 1.3385664327586593, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1596090117006383, 1);
  sqcRYGate(q, -0.4921584158138517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.117001772510115, 1);
  sqcRYGate(q, -0.9246866379255314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8310022133371886, 3);
  sqcRYGate(q, 1.3898689074530832, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7698424566470994, 3);
  sqcRYGate(q, -2.0132181470545314, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7298604942431259, 5);
  sqcRYGate(q, -0.5125141523054211, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6063357851058924, 5);
  sqcRYGate(q, 2.6508502677985404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7376625633706988, 0);
  sqcRYGate(q, -0.12871959755081275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.03495951399057484, 0);
  sqcRYGate(q, -1.2471279547518597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3362402691842554, 2);
  sqcRYGate(q, -1.419190488591138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4139298673508818, 2);
  sqcRYGate(q, -0.38759356320309113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.679487078988395, 4);
  sqcRYGate(q, 2.118631328984045, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2777165530773518, 4);
  sqcRYGate(q, -2.7191257782443694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1464663201051888, 6);
  sqcRYGate(q, -1.2160152362487295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.113004043695928, 6);
  sqcRYGate(q, 0.04259058953058445, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4219928765050164, 1);
  sqcRYGate(q, -2.1800416061574834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.752404831990623, 1);
  sqcRYGate(q, -2.2400104447422162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7879051119653663, 3);
  sqcRYGate(q, -1.801935517184857, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9573557925371297, 3);
  sqcRYGate(q, -2.033544178820901, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1548804062603795, 5);
  sqcRYGate(q, 1.322360084250711, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12669906946399045, 5);
  sqcRYGate(q, -2.220366290412052, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5658691273226666, 0);
  sqcRYGate(q, -2.2834670898379006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12894455910888766, 0);
  sqcRYGate(q, 1.753080172290912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.875675657184526, 2);
  sqcRYGate(q, 0.33221406472548537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18676332819671015, 2);
  sqcRYGate(q, 2.8676376206182006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.128917618138815, 4);
  sqcRYGate(q, 1.6764275731174738, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2864063305381066, 4);
  sqcRYGate(q, 0.6330429775244737, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8340890629837814, 6);
  sqcRYGate(q, 1.1996537816084527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.335520739024534, 6);
  sqcRYGate(q, 0.9365910385341871, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4362287715841646, 1);
  sqcRYGate(q, 1.5964706470887462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9153529160106981, 1);
  sqcRYGate(q, 0.8619318760654684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4594904301584366, 3);
  sqcRYGate(q, -1.72978505778782, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.41170412635122067, 3);
  sqcRYGate(q, -1.7339969220337823, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4210761621382002, 5);
  sqcRYGate(q, -2.3971741129873387, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0610480062565022, 5);
  sqcRYGate(q, -3.0387972426681293, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.153845698875075, 0);
  sqcRYGate(q, 0.32908707944792237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.718336747444238, 0);
  sqcRYGate(q, -2.1179108705924987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2584007642773738, 2);
  sqcRYGate(q, -0.08618220922971354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1380296036477566, 2);
  sqcRYGate(q, 3.0994982547468672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6532830472697446, 4);
  sqcRYGate(q, 0.26751837465901573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8019471550395547, 4);
  sqcRYGate(q, -2.216772892914326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.059688807299815815, 6);
  sqcRYGate(q, -2.161039892121955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.672930518536644, 6);
  sqcRYGate(q, -2.0580260242748887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.369942434941742, 1);
  sqcRYGate(q, -1.0814499071323984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.930913848109293, 1);
  sqcRYGate(q, -2.031470384940106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2493743949094878, 3);
  sqcRYGate(q, -1.4457906250367547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7338522312838887, 3);
  sqcRYGate(q, -1.11838504643164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14074317762548583, 5);
  sqcRYGate(q, 0.8548097788948151, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6496336395679848, 5);
  sqcRYGate(q, 1.9045089287435726, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.098730405702126, 0);
  sqcRYGate(q, -0.9941081111544517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6193156819350332, 0);
  sqcRYGate(q, 0.32480390318204405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5026482394480754, 2);
  sqcRYGate(q, -1.1280630905632199, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2623822495037467, 2);
  sqcRYGate(q, -0.7302158129301644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05193281887876643, 4);
  sqcRYGate(q, -0.3136792567240249, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.32158728309163, 4);
  sqcRYGate(q, 1.2862871122274315, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.31638427515701617, 6);
  sqcRYGate(q, -2.1056426364246996, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3705195641559103, 6);
  sqcRYGate(q, 2.9895929413557845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.761062922327682, 1);
  sqcRYGate(q, -1.3815551031815823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.323853698782212, 1);
  sqcRYGate(q, -1.6627481164342877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.622402187215053, 3);
  sqcRYGate(q, -0.10725303692435101, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.474137448271919, 3);
  sqcRYGate(q, 1.1320348152211919, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0026529720756292004, 5);
  sqcRYGate(q, 2.70228328183958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2893320902938548, 5);
  sqcRYGate(q, 0.20273809072083007, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.58299611370944, 0);
  sqcRYGate(q, -2.046569825859988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7743341175047207, 0);
  sqcRYGate(q, -1.2487465600586551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2632256873435983, 2);
  sqcRYGate(q, 1.0476061024635897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6961550905101834, 2);
  sqcRYGate(q, 1.2461436507935515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.003385803734063, 4);
  sqcRYGate(q, 1.6153316168718475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.221008832260934, 4);
  sqcRYGate(q, -1.780194769100718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4393176024368026, 6);
  sqcRYGate(q, 0.3973158922151585, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.243664541725596, 6);
  sqcRYGate(q, -1.092762817910864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3450280753827941, 1);
  sqcRYGate(q, 1.679822255975223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9010648042458484, 1);
  sqcRYGate(q, -0.9426895887455009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5409746153361883, 3);
  sqcRYGate(q, -3.022485844214243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4094750633155098, 3);
  sqcRYGate(q, 2.2463035243973857, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0803481315295222, 5);
  sqcRYGate(q, -0.7795874582343573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.19122392947116662, 5);
  sqcRYGate(q, -0.5290840655109292, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0736614161895526, 0);
  sqcRYGate(q, 0.6819967825302607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8585551224283213, 0);
  sqcRYGate(q, -2.531372080765427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.978959055435765, 2);
  sqcRYGate(q, -0.02705831841563554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.38011746488441744, 2);
  sqcRYGate(q, 2.6831064051683104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3473239751111519, 4);
  sqcRYGate(q, -1.196381150260585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.645793645223641, 4);
  sqcRYGate(q, -0.6212000758484527, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.383952672048265, 6);
  sqcRYGate(q, -2.5146190304605325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0392354728627744, 6);
  sqcRYGate(q, 0.8337751064970388, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20834602811549668, 1);
  sqcRYGate(q, 1.1733038632515107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.97176013870288, 1);
  sqcRYGate(q, -1.141510455418072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5221807343123461, 3);
  sqcRYGate(q, 1.2971943224509594, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5584635755293759, 3);
  sqcRYGate(q, 2.8996980883871983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6975359419782086, 5);
  sqcRYGate(q, -2.3066607896706905, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1758822478281044, 5);
  sqcRYGate(q, 2.6578639288157566, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2096513196673166, 0);
  sqcRYGate(q, 1.361500959869491, 1);
  sqcRYGate(q, 0.6233024263672399, 2);
  sqcRYGate(q, -1.0116814405106664, 3);
  sqcRYGate(q, -0.8338677183945234, 4);
  sqcRYGate(q, 1.0891819540153722, 5);
  sqcRYGate(q, 2.333699173352188, 6);
  sqcRYGate(q, 1.2783633952202762, 7);

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
