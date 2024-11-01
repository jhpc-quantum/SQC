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

  sqcRYGate(q, -1.4034180757943566, 0);
  sqcRYGate(q, 1.5810911644468397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3941042535415438, 0);
  sqcRYGate(q, -2.308623386600404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6717366460795842, 2);
  sqcRYGate(q, 2.87938954015203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9262546582290265, 2);
  sqcRYGate(q, -1.9816663795311524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1430924608000614, 4);
  sqcRYGate(q, -0.44890311967965424, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5641412987126557, 4);
  sqcRYGate(q, 1.211269616765998, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2838309106192591, 6);
  sqcRYGate(q, 0.8978359752325671, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8105063060161731, 6);
  sqcRYGate(q, -3.0522388677385477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8519452775202581, 0);
  sqcRYGate(q, 1.0703507474452776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6329903620626522, 0);
  sqcRYGate(q, -2.9724460617968664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6234692380073392, 2);
  sqcRYGate(q, 0.5367479310011385, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.987754743541678, 2);
  sqcRYGate(q, 0.2989231579691553, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.034494361027062, 4);
  sqcRYGate(q, -2.3198317553413608, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.3479502149022089, 4);
  sqcRYGate(q, 0.2787898050301143, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7362422101531161, 1);
  sqcRYGate(q, -0.4432754411015906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.00022909802360526754, 1);
  sqcRYGate(q, -2.6764342539813617, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3873283401007193, 3);
  sqcRYGate(q, -1.240058094948722, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0225283029380927, 3);
  sqcRYGate(q, -0.05592111196485498, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6032316785702445, 5);
  sqcRYGate(q, 1.6427259159541414, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.04300160411313, 5);
  sqcRYGate(q, -1.7368622697281388, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.399134874717618, 0);
  sqcRYGate(q, -0.3794277713366801, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5995034085378634, 0);
  sqcRYGate(q, -0.580200987712364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5430704029723774, 1);
  sqcRYGate(q, 0.8781188919670208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.00019913177935659832, 1);
  sqcRYGate(q, -0.00016120568563149362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7463590953652117, 2);
  sqcRYGate(q, 3.1252322483349864, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.9359320423339734, 2);
  sqcRYGate(q, 0.6143498666851572, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.0801789251258578, 3);
  sqcRYGate(q, 1.178799452750043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.869839034983992, 3);
  sqcRYGate(q, 1.291086092573992, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8684003370057933, 4);
  sqcRYGate(q, -0.10621449362329294, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1389834988467635, 4);
  sqcRYGate(q, 3.0412058430454287, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.7525401031768912, 5);
  sqcRYGate(q, 2.238962832762347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9557678395959188, 5);
  sqcRYGate(q, -1.8205724847107527, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6218889771827123, 0);
  sqcRYGate(q, 1.4333118960347315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1414728474094296, 0);
  sqcRYGate(q, -3.1414560750145664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7625688919093725, 2);
  sqcRYGate(q, 1.5120311507697002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.842914830127942, 2);
  sqcRYGate(q, 0.11117168509665319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4435633177299914, 4);
  sqcRYGate(q, -1.2684592741925482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7258102658787261, 4);
  sqcRYGate(q, 0.937180020910521, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9688879923056787, 6);
  sqcRYGate(q, -0.15201275217213617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.289259751415505, 6);
  sqcRYGate(q, 1.1522952743808617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5474199142394198, 0);
  sqcRYGate(q, -2.3785006098590844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5257064771278346, 0);
  sqcRYGate(q, -0.9964418557845098, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.29790048859691315, 2);
  sqcRYGate(q, -0.8236749292515962, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8696793063710953, 2);
  sqcRYGate(q, -1.2262566530186843, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8391574424954857, 4);
  sqcRYGate(q, -0.6523554910127354, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4385275941038556, 4);
  sqcRYGate(q, -1.7136826598323998, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.736803696167911, 1);
  sqcRYGate(q, 1.083769947454549, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.571362682527993, 1);
  sqcRYGate(q, 1.5707473722551468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5705345357866323, 3);
  sqcRYGate(q, -0.9032802498009458, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5705946990708315, 3);
  sqcRYGate(q, -1.5707671648291843, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -7.357136875363324e-05, 5);
  sqcRYGate(q, 1.203955861351595, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5710977873424055, 5);
  sqcRYGate(q, -1.9721052169373476, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.135362160760167, 0);
  sqcRYGate(q, 0.65258133461803, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9188360800006048, 0);
  sqcRYGate(q, -1.119831643200059, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.571396259773568, 1);
  sqcRYGate(q, 2.396057711042468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5851541922485018, 1);
  sqcRYGate(q, 1.5702505653885632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01979077479775688, 2);
  sqcRYGate(q, 0.00047604234474718515, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.16645606912359412, 2);
  sqcRYGate(q, 3.1415693676922256, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.967801659933, 3);
  sqcRYGate(q, 1.441263009638529, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7815285983747056, 3);
  sqcRYGate(q, 2.1892619447571215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1442390161610345, 4);
  sqcRYGate(q, -3.1402175417069538, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.110267127322223, 4);
  sqcRYGate(q, 1.5709136973970221, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.571272723220095, 5);
  sqcRYGate(q, -2.379547070268947, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5708660983143623, 5);
  sqcRYGate(q, -1.5589373465303353, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2009849514253195, 0);
  sqcRYGate(q, 2.738161317402866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29370697889125363, 0);
  sqcRYGate(q, -2.8672297115814356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5833217552529186, 2);
  sqcRYGate(q, 0.7091390656978788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.320232292419501, 2);
  sqcRYGate(q, 2.3782132866088164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.616701704765545e-06, 4);
  sqcRYGate(q, -2.6063678489271593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0001213278509681235, 4);
  sqcRYGate(q, 1.5706684582631192, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.570802352567446, 6);
  sqcRYGate(q, -3.1402389260287995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.360451885503995, 6);
  sqcRYGate(q, -1.5707075588573525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0694703567845, 0);
  sqcRYGate(q, 0.4394505054370959, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3485744079278958, 0);
  sqcRYGate(q, 0.4679735851914719, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6596655828355806, 2);
  sqcRYGate(q, -1.3332962821858416, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5538846717722197, 2);
  sqcRYGate(q, 3.07364449239206, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7030189256291077, 4);
  sqcRYGate(q, -0.665874430226804, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9390788000337079, 4);
  sqcRYGate(q, 0.9022301919514305, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6746340284447685, 1);
  sqcRYGate(q, -0.5221859913993541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7787110841659781, 1);
  sqcRYGate(q, 1.993149607609371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4093547258844943, 3);
  sqcRYGate(q, -2.105995353424941, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3937354224314351, 3);
  sqcRYGate(q, -3.1415495450450694, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5702682913022104, 5);
  sqcRYGate(q, 1.5702743503674812, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5358759724280098, 5);
  sqcRYGate(q, -1.5711782627344926, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.113799883517334, 0);
  sqcRYGate(q, 2.395335026280832, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6975700819372386, 0);
  sqcRYGate(q, -2.8783702004420477, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4928329145717782, 1);
  sqcRYGate(q, -0.4316395777782248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4943794963166797, 1);
  sqcRYGate(q, 2.417992211613572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.835367523066485, 2);
  sqcRYGate(q, -2.322013894240067, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.0356484576582825, 2);
  sqcRYGate(q, -3.0706912479631305, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.9168682045912134, 3);
  sqcRYGate(q, -0.00774849099824415, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4853053571214008, 3);
  sqcRYGate(q, 1.8568372468510157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13844644576982557, 4);
  sqcRYGate(q, 1.349315967139761, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1413755408948543, 4);
  sqcRYGate(q, -3.1415542414761504, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1095541712142714, 5);
  sqcRYGate(q, -2.5320530613698815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8157595885364464, 5);
  sqcRYGate(q, -3.0965704476323586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.771333254963793, 0);
  sqcRYGate(q, 1.486635257368496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5305136200008977, 0);
  sqcRYGate(q, -0.2831861253593484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3274942761832307, 2);
  sqcRYGate(q, 2.9598683870412645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1531421883561315, 2);
  sqcRYGate(q, 1.2887889277706748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9104265045588995, 4);
  sqcRYGate(q, 2.1052443011909094, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0428333615725274, 4);
  sqcRYGate(q, -1.6657905254403298, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20369351258025767, 6);
  sqcRYGate(q, -0.32933926492278626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.76089166989936, 6);
  sqcRYGate(q, -1.5709380988084003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8319748971934847, 0);
  sqcRYGate(q, -0.5318790363257371, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8846513654106334, 0);
  sqcRYGate(q, -1.3434738780547295, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.597131457229331, 2);
  sqcRYGate(q, -2.9076644813170804, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.050128637346086066, 2);
  sqcRYGate(q, -0.009773082834364927, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3600258721290393, 4);
  sqcRYGate(q, -0.9085615914939554, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1414641589523606, 4);
  sqcRYGate(q, 0.0001837288304546746, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9869284372267006, 1);
  sqcRYGate(q, 1.618573470990099, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6622011365267744, 1);
  sqcRYGate(q, -0.10621228160484751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0537274213659615, 3);
  sqcRYGate(q, 2.654031287288476, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.83384698593136, 3);
  sqcRYGate(q, -3.140855915433155, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.904109669299314, 5);
  sqcRYGate(q, -2.065368003393825, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5524684685415373, 5);
  sqcRYGate(q, -3.139989723171449, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.120457053278871, 0);
  sqcRYGate(q, 1.0723721116448321, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9936968144477714, 0);
  sqcRYGate(q, 1.5700476778082075, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.058065467348065, 1);
  sqcRYGate(q, -2.4849926021513045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0122782796335654, 1);
  sqcRYGate(q, 0.949701615837153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0878935916656303, 2);
  sqcRYGate(q, -0.17611043761780554, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.1411806400670113, 2);
  sqcRYGate(q, -1.0662220781449392, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.3468377649015815, 3);
  sqcRYGate(q, 2.9661794547193097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9072950898827087, 3);
  sqcRYGate(q, -2.235042291710916, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4398372514786075, 4);
  sqcRYGate(q, 0.6659351119287716, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.04956507019043634, 4);
  sqcRYGate(q, -2.152382921169413, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.2925470706019304, 5);
  sqcRYGate(q, -0.7410753422864689, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5611299816166089, 5);
  sqcRYGate(q, 0.4378822513637833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1345650849374636, 0);
  sqcRYGate(q, 1.856010310712814, 1);
  sqcRYGate(q, 1.3747561583360692, 2);
  sqcRYGate(q, -0.9339225477043698, 3);
  sqcRYGate(q, -0.8700458541856516, 4);
  sqcRYGate(q, 3.1068588564488775, 5);
  sqcRYGate(q, -3.1289260540783426, 6);
  sqcRYGate(q, -1.5851413914640349, 7);

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
