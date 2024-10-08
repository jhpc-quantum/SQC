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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 3.1262172183459, 0);
  sqcRZGate(q, 0.8924954000022209, 0);
  sqcRYGate(q, -0.017385723282878907, 1);
  sqcRZGate(q, 0.3400209936099089, 1);
  sqcRYGate(q, 1.1668887292923424, 2);
  sqcRZGate(q, 1.202609358916382, 2);
  sqcRYGate(q, -1.6513205875413455, 3);
  sqcRZGate(q, 2.004189127262652, 3);
  sqcRYGate(q, 1.5554909107116792, 4);
  sqcRZGate(q, -1.3851893929368035, 4);
  sqcRYGate(q, 1.549660226882132, 5);
  sqcRZGate(q, -1.779526624165137, 5);
  sqcRYGate(q, 1.570061274442517, 6);
  sqcRZGate(q, 1.5231888118356292, 6);
  sqcRYGate(q, 1.5582558784447231, 7);
  sqcRZGate(q, -1.5718953696424673, 7);
  sqcRYGate(q, 1.624956901864785, 8);
  sqcRZGate(q, -1.0781624776912386, 8);
  sqcRYGate(q, -1.5620683293491653, 9);
  sqcRZGate(q, 0.500760151094103, 9);
  sqcRYGate(q, 3.0882853962734957, 10);
  sqcRZGate(q, -0.5848294799161282, 10);
  sqcRYGate(q, 0.0069675350474557056, 11);
  sqcRZGate(q, -1.0648912371483636, 11);
  sqcRYGate(q, -1.5717171655856008, 12);
  sqcRZGate(q, 1.5607078415740059, 12);
  sqcRYGate(q, 0.00033364908462374393, 13);
  sqcRZGate(q, 2.967934968984757, 13);
  sqcRYGate(q, -0.0003617263913779923, 14);
  sqcRZGate(q, 0.15863294381909065, 14);
  sqcRYGate(q, 0.0008821548802622595, 15);
  sqcRZGate(q, 1.768942338483095, 15);
  sqcRYGate(q, -3.1303683395693205, 16);
  sqcRZGate(q, 0.16808298339483407, 16);
  sqcRYGate(q, 3.1394688600858496, 17);
  sqcRZGate(q, -2.8981277694659173, 17);
  sqcRYGate(q, 1.5228358987725263, 18);
  sqcRZGate(q, -2.953028825994468, 18);
  sqcRYGate(q, 1.5742051694508874, 19);
  sqcRZGate(q, 1.56379706213355, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6011007981624905, 0);
  sqcRZGate(q, -1.6115368664266567, 0);
  sqcRYGate(q, 1.5755333027805296, 1);
  sqcRZGate(q, 3.068151275837553, 1);
  sqcRYGate(q, -2.0119987969879753, 2);
  sqcRZGate(q, 0.3180419993309803, 2);
  sqcRYGate(q, -0.7750982109096974, 3);
  sqcRZGate(q, -2.119729294173399, 3);
  sqcRYGate(q, -0.031242313074554443, 4);
  sqcRZGate(q, 1.802394921941083, 4);
  sqcRYGate(q, 3.106092767947503, 5);
  sqcRZGate(q, 3.042287465481495, 5);
  sqcRYGate(q, 1.6088398987171058, 6);
  sqcRZGate(q, -2.46636226714565, 6);
  sqcRYGate(q, 1.571737814647645, 7);
  sqcRZGate(q, -2.46523629915925, 7);
  sqcRYGate(q, 0.0036815990444114296, 8);
  sqcRZGate(q, -0.48524710967370277, 8);
  sqcRYGate(q, 0.005146684717671791, 9);
  sqcRZGate(q, 1.0701804589839137, 9);
  sqcRYGate(q, -3.1415890304316902, 10);
  sqcRZGate(q, -1.24269175085887, 10);
  sqcRYGate(q, -5.321786427301256e-06, 11);
  sqcRZGate(q, 2.4499478103013366, 11);
  sqcRYGate(q, -0.09227659432192453, 12);
  sqcRZGate(q, -3.0501692606130417, 12);
  sqcRYGate(q, 1.5715272425231275, 13);
  sqcRZGate(q, 2.065812214010486, 13);
  sqcRYGate(q, 3.0122183142285945, 14);
  sqcRZGate(q, 2.9812212324537235, 14);
  sqcRYGate(q, -1.567488589985943, 15);
  sqcRZGate(q, -1.626427163609385, 15);
  sqcRYGate(q, 1.573768805202957, 16);
  sqcRZGate(q, 0.07255934856294743, 16);
  sqcRYGate(q, -1.570533434102719, 17);
  sqcRZGate(q, 0.006041357361998834, 17);
  sqcRYGate(q, -0.09936248856148483, 18);
  sqcRZGate(q, -0.31758626068817547, 18);
  sqcRYGate(q, 1.3963025714759671, 19);
  sqcRZGate(q, -0.09824806318057598, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.6109813785920464, 0);
  sqcRZGate(q, -0.35137710446047166, 0);
  sqcRYGate(q, 0.2514385340489224, 1);
  sqcRZGate(q, 0.11772311183503098, 1);
  sqcRYGate(q, 1.5528181200523168, 2);
  sqcRZGate(q, 2.33800692964566, 2);
  sqcRYGate(q, 1.5889375367516638, 3);
  sqcRZGate(q, -1.9007502415981443, 3);
  sqcRYGate(q, -3.137168080763835, 4);
  sqcRZGate(q, -2.5876273488366754, 4);
  sqcRYGate(q, 3.1403359676818967, 5);
  sqcRZGate(q, -1.436646300394602, 5);
  sqcRYGate(q, 1.5631726034410258, 6);
  sqcRZGate(q, -2.0683996537111016, 6);
  sqcRYGate(q, -1.5706179699469143, 7);
  sqcRZGate(q, -1.787382391247137, 7);
  sqcRYGate(q, -1.1263626682469665, 8);
  sqcRZGate(q, 1.7199922965362235, 8);
  sqcRYGate(q, -0.4409152987634002, 9);
  sqcRZGate(q, 2.4651466370703745, 9);
  sqcRYGate(q, -2.813364879738141, 10);
  sqcRZGate(q, 2.8867005162166124, 10);
  sqcRYGate(q, -1.1472561120093692, 11);
  sqcRZGate(q, -1.7973560875278938, 11);
  sqcRYGate(q, 1.526826622826928e-05, 12);
  sqcRZGate(q, 2.8949755915391635, 12);
  sqcRYGate(q, -0.001011281840509847, 13);
  sqcRZGate(q, -1.7228822190343092, 13);
  sqcRYGate(q, -0.0020812581250598356, 14);
  sqcRZGate(q, 1.3514130550589922, 14);
  sqcRYGate(q, -3.110460848306425, 15);
  sqcRZGate(q, -1.6253016334718016, 15);
  sqcRYGate(q, 0.0005030292120684621, 16);
  sqcRZGate(q, -2.7313690471265586, 16);
  sqcRYGate(q, 0.0005442122119993014, 17);
  sqcRZGate(q, 3.1138535181285762, 17);
  sqcRYGate(q, 3.096948538750133, 18);
  sqcRZGate(q, -2.38621486037838, 18);
  sqcRYGate(q, 1.531493361122857, 19);
  sqcRZGate(q, -0.7376630372248291, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.3055765159475228, 0);
  sqcRZGate(q, -0.9927257829486604, 0);
  sqcRYGate(q, -2.6929948216219626, 1);
  sqcRZGate(q, -3.12920035496379, 1);
  sqcRYGate(q, 0.06730769137606174, 2);
  sqcRZGate(q, 2.334866655952599, 2);
  sqcRYGate(q, -3.118731495131654, 3);
  sqcRZGate(q, -0.30644788939337403, 3);
  sqcRYGate(q, 2.4694381023042715, 4);
  sqcRZGate(q, 2.132204520747674, 4);
  sqcRYGate(q, 0.7179133500133785, 5);
  sqcRZGate(q, -1.4829218520553535, 5);
  sqcRYGate(q, -1.2938139782359874, 6);
  sqcRZGate(q, -2.5855086658505977, 6);
  sqcRYGate(q, -0.9863202947830997, 7);
  sqcRZGate(q, 2.675822623301158, 7);
  sqcRYGate(q, 0.0022149271193313627, 8);
  sqcRZGate(q, 1.1023592430617863, 8);
  sqcRYGate(q, -0.004459328556864611, 9);
  sqcRZGate(q, -2.766157875235217, 9);
  sqcRYGate(q, -3.140701377193689, 10);
  sqcRZGate(q, -1.1107928287085285, 10);
  sqcRYGate(q, -6.303418825768251e-05, 11);
  sqcRZGate(q, -2.905963104341074, 11);
  sqcRYGate(q, 0.00010209154727503646, 12);
  sqcRZGate(q, -1.4542345570339252, 12);
  sqcRYGate(q, 3.1394495369490723, 13);
  sqcRZGate(q, -2.7887411295804845, 13);
  sqcRYGate(q, -1.5229899784428218, 14);
  sqcRZGate(q, 2.1091946148513685, 14);
  sqcRYGate(q, -1.575635448541442, 15);
  sqcRZGate(q, -1.5286745224718095, 15);
  sqcRYGate(q, 0.44475978413005485, 16);
  sqcRZGate(q, -1.8910839709278133, 16);
  sqcRYGate(q, -1.5439967422184155, 17);
  sqcRZGate(q, 2.8976121268507042, 17);
  sqcRYGate(q, -1.193984157656277, 18);
  sqcRZGate(q, -2.1574860036057126, 18);
  sqcRYGate(q, 0.5737950330175643, 19);
  sqcRZGate(q, -0.0313172979034988, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.637704998843362, 0);
  sqcRZGate(q, -0.011694596245764933, 0);
  sqcRYGate(q, -0.5870189363472642, 1);
  sqcRZGate(q, -1.2703830153709952, 1);
  sqcRYGate(q, 2.612783602555181, 2);
  sqcRZGate(q, 0.6386807026908397, 2);
  sqcRYGate(q, -2.642975636896912, 3);
  sqcRZGate(q, 1.5754689927652556, 3);
  sqcRYGate(q, 0.0027876824969128577, 4);
  sqcRZGate(q, 2.593133019685448, 4);
  sqcRYGate(q, -3.1365889141371768, 5);
  sqcRZGate(q, 0.15637235723806622, 5);
  sqcRYGate(q, 3.118882961841262, 6);
  sqcRZGate(q, -0.39869466790110947, 6);
  sqcRYGate(q, 0.03808790744603385, 7);
  sqcRZGate(q, 1.0203835783391264, 7);
  sqcRYGate(q, 3.018871789203499, 8);
  sqcRZGate(q, -0.3167679808126893, 8);
  sqcRYGate(q, 3.1346313066303497, 9);
  sqcRZGate(q, -0.302487115936648, 9);
  sqcRYGate(q, -1.7904107728945764, 10);
  sqcRZGate(q, 2.0746352811405546, 10);
  sqcRYGate(q, 1.552081686726165, 11);
  sqcRZGate(q, -1.1536446366430002, 11);
  sqcRYGate(q, 3.1034318694724883, 12);
  sqcRZGate(q, -1.6485706934944804, 12);
  sqcRYGate(q, -0.03962827699749429, 13);
  sqcRZGate(q, -0.010093721976419253, 13);
  sqcRYGate(q, 3.1414182113475144, 14);
  sqcRZGate(q, 0.7089940531495414, 14);
  sqcRYGate(q, -3.0923131805165993, 15);
  sqcRZGate(q, 0.0039211065012203505, 15);
  sqcRYGate(q, -0.1472874207875412, 16);
  sqcRZGate(q, 1.4169028080001462, 16);
  sqcRYGate(q, -2.9894046740241498, 17);
  sqcRZGate(q, -0.28012215169868093, 17);
  sqcRYGate(q, 2.342209997403943, 18);
  sqcRZGate(q, 0.10221226549646899, 18);
  sqcRYGate(q, 0.771997452345318, 19);
  sqcRZGate(q, -3.035777158670272, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.4318699094663368, 0);
  sqcRZGate(q, -2.895825258174543, 0);
  sqcRYGate(q, -0.340210151356752, 1);
  sqcRZGate(q, -1.9003551019267537, 1);
  sqcRYGate(q, 3.1006112284385763, 2);
  sqcRZGate(q, 2.240711089777961, 2);
  sqcRYGate(q, -2.379314041560414, 3);
  sqcRZGate(q, 2.603074206528408, 3);
  sqcRYGate(q, -0.6314516341702703, 4);
  sqcRZGate(q, 2.0228813260335743, 4);
  sqcRYGate(q, 1.0323108706283488, 5);
  sqcRZGate(q, 1.1039811535890403, 5);
  sqcRYGate(q, 2.623694881501132, 6);
  sqcRZGate(q, 3.1302252682203227, 6);
  sqcRYGate(q, -2.5521341663390014, 7);
  sqcRZGate(q, 1.6498054780725868, 7);
  sqcRYGate(q, 1.5689163292234163, 8);
  sqcRZGate(q, -1.3499741595998047, 8);
  sqcRYGate(q, -1.5724592156530977, 9);
  sqcRZGate(q, -1.8905417292815683, 9);
  sqcRYGate(q, -3.1414591872437168, 10);
  sqcRZGate(q, -0.7446966865258942, 10);
  sqcRYGate(q, 3.1408694756847986, 11);
  sqcRZGate(q, -0.9077861960216618, 11);
  sqcRYGate(q, -3.0180949529466985, 12);
  sqcRZGate(q, 3.113878554981362, 12);
  sqcRYGate(q, 1.5724348135150885, 13);
  sqcRZGate(q, -1.6938136902267837, 13);
  sqcRYGate(q, -0.00812684298063937, 14);
  sqcRZGate(q, -1.6667687043859556, 14);
  sqcRYGate(q, 1.573077447584389, 15);
  sqcRZGate(q, 3.140211825354434, 15);
  sqcRYGate(q, 1.188801602665852, 16);
  sqcRZGate(q, -0.23370696836899094, 16);
  sqcRYGate(q, -3.1405264638678303, 17);
  sqcRZGate(q, 0.1337929184088112, 17);
  sqcRYGate(q, -3.1316891267946705, 18);
  sqcRZGate(q, 0.7468000444912876, 18);
  sqcRYGate(q, 3.1124943663587787, 19);
  sqcRZGate(q, 2.543349802390695, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.105965091136335, 0);
  sqcRZGate(q, 0.27904239928336455, 0);
  sqcRYGate(q, 1.6202927568677379, 1);
  sqcRZGate(q, 1.2454503745893688, 1);
  sqcRYGate(q, -3.1373255988621356, 2);
  sqcRZGate(q, -3.1006870832170077, 2);
  sqcRYGate(q, -0.0037196313904926145, 3);
  sqcRZGate(q, -2.6031175106411215, 3);
  sqcRYGate(q, 0.05367208086321096, 4);
  sqcRZGate(q, -0.33271736877646596, 4);
  sqcRYGate(q, -3.1025103366141207, 5);
  sqcRZGate(q, -0.388587951803669, 5);
  sqcRYGate(q, 3.1312213055294875, 6);
  sqcRZGate(q, -1.1550243523217685, 6);
  sqcRYGate(q, -3.0873679123255395, 7);
  sqcRZGate(q, 0.14449757189695497, 7);
  sqcRYGate(q, -3.141487073545881, 8);
  sqcRZGate(q, 0.16202386180093423, 8);
  sqcRYGate(q, -0.002806028414646804, 9);
  sqcRZGate(q, 0.3069592082668482, 9);
  sqcRYGate(q, 3.1412632339603754, 10);
  sqcRZGate(q, -3.066007678474807, 10);
  sqcRYGate(q, 3.397945617322762e-05, 11);
  sqcRZGate(q, -1.3933239694884776, 11);
  sqcRYGate(q, 1.525989678143454, 12);
  sqcRZGate(q, -2.2774409054823015, 12);
  sqcRYGate(q, 1.5707690608287326, 13);
  sqcRZGate(q, 0.006952987607737882, 13);
  sqcRYGate(q, 2.50645244709675, 14);
  sqcRZGate(q, -1.7660220508318973, 14);
  sqcRYGate(q, -0.6549004561402358, 15);
  sqcRZGate(q, -3.064581727574918, 15);
  sqcRYGate(q, 3.136191067272989, 16);
  sqcRZGate(q, 1.3727660911784236, 16);
  sqcRYGate(q, -0.0018853592660783237, 17);
  sqcRZGate(q, -1.4475088624539265, 17);
  sqcRYGate(q, -1.3375283604988084, 18);
  sqcRZGate(q, 2.2204246286680975, 18);
  sqcRYGate(q, -1.7984004538657477, 19);
  sqcRZGate(q, -0.845411592964512, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.9926400538279122, 0);
  sqcRZGate(q, 1.2177329651252762, 0);
  sqcRYGate(q, 2.8299058317940338, 1);
  sqcRZGate(q, 1.4536623828657218, 1);
  sqcRYGate(q, -1.5732389660779802, 2);
  sqcRZGate(q, 1.2797001729493571, 2);
  sqcRYGate(q, 1.547879389416911, 3);
  sqcRZGate(q, -1.290319555832373, 3);
  sqcRYGate(q, 1.562550135468489, 4);
  sqcRZGate(q, -0.28201517266913406, 4);
  sqcRYGate(q, -1.5881188273138767, 5);
  sqcRZGate(q, -1.0662126099942792, 5);
  sqcRYGate(q, -0.0766267834204457, 6);
  sqcRZGate(q, -2.1381411605484306, 6);
  sqcRYGate(q, 3.057760219889303, 7);
  sqcRZGate(q, -1.5718432948661267, 7);
  sqcRYGate(q, 3.1113004513431997, 8);
  sqcRZGate(q, 1.5117459899769263, 8);
  sqcRYGate(q, -1.6658135032603685, 9);
  sqcRZGate(q, -1.5699345066161319, 9);
  sqcRYGate(q, 2.0610380140039704, 10);
  sqcRZGate(q, -1.5665088799200781, 10);
  sqcRYGate(q, -2.1216694654606645, 11);
  sqcRZGate(q, 2.942134629812484, 11);
  sqcRYGate(q, -3.126437710803691, 12);
  sqcRZGate(q, -1.0740953301538203, 12);
  sqcRYGate(q, 1.5849121027630204, 13);
  sqcRZGate(q, -1.3749704736899728, 13);
  sqcRYGate(q, -1.568121966059297, 14);
  sqcRZGate(q, -1.4533784741954605, 14);
  sqcRYGate(q, -1.683974356134178, 15);
  sqcRZGate(q, -1.7886364493613442, 15);
  sqcRYGate(q, 1.524294404914663, 16);
  sqcRZGate(q, -2.735274539841346, 16);
  sqcRYGate(q, 2.990619532422384, 17);
  sqcRZGate(q, 1.1321444009014066, 17);
  sqcRYGate(q, -0.364592253828965, 18);
  sqcRZGate(q, 2.3726413294960196, 18);
  sqcRYGate(q, -0.3927230709158867, 19);
  sqcRZGate(q, -0.8680174494013909, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.644533795738086, 0);
  sqcRZGate(q, -1.5396846740063754, 0);
  sqcRYGate(q, -2.1694232257370087, 1);
  sqcRZGate(q, 1.5069401315842201, 1);
  sqcRYGate(q, -0.9003079743226188, 2);
  sqcRZGate(q, 1.0709875755447715, 2);
  sqcRYGate(q, -2.0442758252544513, 3);
  sqcRZGate(q, 2.3399145673885804, 3);
  sqcRYGate(q, 0.016570072889483534, 4);
  sqcRZGate(q, 3.058819379319756, 4);
  sqcRYGate(q, -0.018987655907192647, 5);
  sqcRZGate(q, 1.366535959421065, 5);
  sqcRYGate(q, -0.035057571209664115, 6);
  sqcRZGate(q, 0.05159523921957399, 6);
  sqcRYGate(q, -0.06805095359221092, 7);
  sqcRZGate(q, 0.03185925572191663, 7);
  sqcRYGate(q, -1.570142211455904, 8);
  sqcRZGate(q, 0.1672167347463587, 8);
  sqcRYGate(q, 1.5715467066410687, 9);
  sqcRZGate(q, 1.5928818104388722, 9);
  sqcRYGate(q, -1.5667910797053983, 10);
  sqcRZGate(q, -1.4468919741374293, 10);
  sqcRYGate(q, -1.5700181386946819, 11);
  sqcRZGate(q, 1.5674469450284858, 11);
  sqcRYGate(q, -7.566437529860082e-06, 12);
  sqcRZGate(q, -2.761173836913507, 12);
  sqcRYGate(q, -3.1415809008774143, 13);
  sqcRZGate(q, 1.8567672899076286, 13);
  sqcRYGate(q, -3.094121768826384, 14);
  sqcRZGate(q, 1.630393199028629, 14);
  sqcRYGate(q, 0.0036192806696487565, 15);
  sqcRZGate(q, 0.23884073047320534, 15);
  sqcRYGate(q, -0.0002671218569840761, 16);
  sqcRZGate(q, 2.9767880173731593, 16);
  sqcRYGate(q, -5.1140449030276545e-05, 17);
  sqcRZGate(q, 2.7806521296948614, 17);
  sqcRYGate(q, -1.5191454758179326, 18);
  sqcRZGate(q, -2.036754102244471, 18);
  sqcRYGate(q, -1.6260751901019566, 19);
  sqcRZGate(q, -2.969051855953752, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.9705417458772803, 0);
  sqcRZGate(q, 1.1039822589056876, 0);
  sqcRYGate(q, -0.15293002453872884, 1);
  sqcRZGate(q, -1.2055889031764702, 1);
  sqcRYGate(q, 2.6076106477726837, 2);
  sqcRZGate(q, 2.8706530415518436, 2);
  sqcRYGate(q, -0.7898767626830816, 3);
  sqcRZGate(q, 1.9116633923509465, 3);
  sqcRYGate(q, 0.011476101217267446, 4);
  sqcRZGate(q, 1.1648381977356903, 4);
  sqcRYGate(q, -0.028610151870389622, 5);
  sqcRZGate(q, 1.5516009862047406, 5);
  sqcRYGate(q, -0.0034328013983984107, 6);
  sqcRZGate(q, -0.1429090049116235, 6);
  sqcRYGate(q, 0.0022142738071853074, 7);
  sqcRZGate(q, 1.0219717326397042, 7);
  sqcRYGate(q, 0.0005539190940568872, 8);
  sqcRZGate(q, -2.25321917477543, 8);
  sqcRYGate(q, -0.051724460292650584, 9);
  sqcRZGate(q, 1.3471612977635896, 9);
  sqcRYGate(q, 3.137308298740076, 10);
  sqcRZGate(q, -1.4632863701256626, 10);
  sqcRYGate(q, 1.571721848566658, 11);
  sqcRZGate(q, 1.59221481877631, 11);
  sqcRYGate(q, 0.020418671005463646, 12);
  sqcRZGate(q, -1.5533735343340724, 12);
  sqcRYGate(q, 3.141370551932999, 13);
  sqcRZGate(q, -1.4751739968448359, 13);
  sqcRYGate(q, -1.6005882120535622, 14);
  sqcRZGate(q, 1.7245498336666292, 14);
  sqcRYGate(q, -1.6460296237621979, 15);
  sqcRZGate(q, 0.1141159240065616, 15);
  sqcRYGate(q, 0.09323316507284171, 16);
  sqcRZGate(q, -2.035580996340758, 16);
  sqcRYGate(q, -1.6531354328504424, 17);
  sqcRZGate(q, -2.1508416239973283, 17);
  sqcRYGate(q, -1.1089268744749257, 18);
  sqcRZGate(q, -2.8958519972552352, 18);
  sqcRYGate(q, 1.80902449556587, 19);
  sqcRZGate(q, 2.6410000217958447, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.4813573004089338, 0);
  sqcRZGate(q, -1.979509870201536, 0);
  sqcRYGate(q, 1.4680583605299518, 1);
  sqcRZGate(q, 1.3478505523568267, 1);
  sqcRYGate(q, 1.5340875924137878, 2);
  sqcRZGate(q, -1.6043177100553745, 2);
  sqcRYGate(q, 1.7401284708803757, 3);
  sqcRZGate(q, -0.39695035710805365, 3);
  sqcRYGate(q, 0.19404935335019444, 4);
  sqcRZGate(q, -2.2194756298198888, 4);
  sqcRYGate(q, -0.39889902208274647, 5);
  sqcRZGate(q, -2.2308467681077095, 5);
  sqcRYGate(q, -3.124405776484811, 6);
  sqcRZGate(q, -0.3048542764799631, 6);
  sqcRYGate(q, -3.137066692249585, 7);
  sqcRZGate(q, -0.6054641195301133, 7);
  sqcRYGate(q, -0.007402197661361074, 8);
  sqcRZGate(q, 2.10176105136957, 8);
  sqcRYGate(q, -3.13312147960364, 9);
  sqcRZGate(q, 2.9259997893275305, 9);
  sqcRYGate(q, -1.5613296709102533, 10);
  sqcRZGate(q, 0.27236901976380246, 10);
  sqcRYGate(q, 1.5112654240570684, 11);
  sqcRZGate(q, -2.1221824015828954, 11);
  sqcRYGate(q, -1.5689495882377251, 12);
  sqcRZGate(q, -1.574945413302598, 12);
  sqcRYGate(q, -1.5811622770045979, 13);
  sqcRZGate(q, -0.004206867570492712, 13);
  sqcRYGate(q, -1.5741020245187254, 14);
  sqcRZGate(q, 1.5703047348368449, 14);
  sqcRYGate(q, -1.5783122011592476, 15);
  sqcRZGate(q, -2.3276363637044652, 15);
  sqcRYGate(q, 0.000461035968634782, 16);
  sqcRZGate(q, -2.9261630273284314, 16);
  sqcRYGate(q, 0.0008270735220141199, 17);
  sqcRZGate(q, -0.08234992318409161, 17);
  sqcRYGate(q, -1.3887060603642893, 18);
  sqcRZGate(q, -1.7747875713573416, 18);
  sqcRYGate(q, 0.3306864703297938, 19);
  sqcRZGate(q, 2.3279506123685025, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.2285765711776073, 0);
  sqcRZGate(q, 0.8857010851591207, 0);
  sqcRYGate(q, -2.265141216038457, 1);
  sqcRZGate(q, 3.00153958999861, 1);
  sqcRYGate(q, 0.0014720813902284746, 2);
  sqcRZGate(q, -0.025021766388271603, 2);
  sqcRYGate(q, 0.017632492308961464, 3);
  sqcRZGate(q, -0.9932426569849726, 3);
  sqcRYGate(q, 3.1407247616752887, 4);
  sqcRZGate(q, -0.39621036910931706, 4);
  sqcRYGate(q, 3.1414288086774302, 5);
  sqcRZGate(q, -2.9860577638274632, 5);
  sqcRYGate(q, 0.001583817260802256, 6);
  sqcRZGate(q, 0.3062688287212856, 6);
  sqcRYGate(q, -3.1412907319613073, 7);
  sqcRZGate(q, 2.8247124924470848, 7);
  sqcRYGate(q, -1.563232119844872, 8);
  sqcRZGate(q, -3.0534513872365556, 8);
  sqcRYGate(q, 1.5673757626961504, 9);
  sqcRZGate(q, -2.9447468297180515, 9);
  sqcRYGate(q, 3.14111369192636, 10);
  sqcRZGate(q, 1.7476155870314969, 10);
  sqcRYGate(q, 0.0005101708028023566, 11);
  sqcRZGate(q, 1.3223433614209557, 11);
  sqcRYGate(q, -1.5553440256319888, 12);
  sqcRZGate(q, -0.9441807099454551, 12);
  sqcRYGate(q, 1.5693116443498045, 13);
  sqcRZGate(q, -1.4446361130236198, 13);
  sqcRYGate(q, 1.5711982545128311, 14);
  sqcRZGate(q, 0.7709772765479972, 14);
  sqcRYGate(q, -0.00040394557449225955, 15);
  sqcRZGate(q, 0.6740244537284438, 15);
  sqcRYGate(q, 0.0024001510246628778, 16);
  sqcRZGate(q, -1.670115358750607, 16);
  sqcRYGate(q, -3.1386337403946665, 17);
  sqcRZGate(q, -2.2878481166106717, 17);
  sqcRYGate(q, 2.126850542153672, 18);
  sqcRZGate(q, -0.03390958692270225, 18);
  sqcRYGate(q, 2.5363139786744213, 19);
  sqcRZGate(q, -1.9756730353338658, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.0699933644158033, 0);
  sqcRZGate(q, 2.697106696268198, 0);
  sqcRYGate(q, -0.5879484187698623, 1);
  sqcRZGate(q, -2.2397890559393185, 1);
  sqcRYGate(q, 2.975578054007599, 2);
  sqcRZGate(q, -0.38099934240396216, 2);
  sqcRYGate(q, -0.4298796689319939, 3);
  sqcRZGate(q, 0.9890744856549327, 3);
  sqcRYGate(q, 1.102851175212951, 4);
  sqcRZGate(q, -1.0747650778056652, 4);
  sqcRYGate(q, 1.5483700573833052, 5);
  sqcRZGate(q, 2.0255048940543388, 5);
  sqcRYGate(q, 0.036845386157139046, 6);
  sqcRZGate(q, -0.9831900390180531, 6);
  sqcRYGate(q, -0.014651260585371037, 7);
  sqcRZGate(q, -2.2286290887061, 7);
  sqcRYGate(q, 1.5625715107130014, 8);
  sqcRZGate(q, -2.4217178524275185, 8);
  sqcRYGate(q, 3.1330050475454585, 9);
  sqcRZGate(q, 2.4666973518125013, 9);
  sqcRYGate(q, 0.003851346970525278, 10);
  sqcRZGate(q, 2.3766637024829382, 10);
  sqcRYGate(q, -3.140828947424351, 11);
  sqcRZGate(q, -1.4601589703472664, 11);
  sqcRYGate(q, -0.0005898385873690515, 12);
  sqcRZGate(q, 1.6562215006367236, 12);
  sqcRYGate(q, 0.0019549593477917867, 13);
  sqcRZGate(q, -0.9939240191514366, 13);
  sqcRYGate(q, 3.141540076711733, 14);
  sqcRZGate(q, -0.09394975113177174, 14);
  sqcRYGate(q, 3.140241477727245, 15);
  sqcRZGate(q, 2.201064250297649, 15);
  sqcRYGate(q, -2.4548178634442657, 16);
  sqcRZGate(q, 2.1567726037009614, 16);
  sqcRYGate(q, -1.5278251158996785, 17);
  sqcRZGate(q, -0.9059826527675964, 17);
  sqcRYGate(q, 2.8583455901319916, 18);
  sqcRZGate(q, -2.1483693005447217, 18);
  sqcRYGate(q, -0.3803514875690279, 19);
  sqcRZGate(q, -0.25395562469213484, 19);

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
