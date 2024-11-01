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

  sqcRYGate(q, 0.7125650498036377, 0);
  sqcRZGate(q, 3.1229562188815363, 0);
  sqcRYGate(q, -0.19972643609597185, 1);
  sqcRZGate(q, 2.4590693752464907, 1);
  sqcRYGate(q, 2.704520354910311, 2);
  sqcRZGate(q, -2.2885336695676948, 2);
  sqcRYGate(q, 1.4707035402963413, 3);
  sqcRZGate(q, 1.8562933880892551, 3);
  sqcRYGate(q, -1.2486188095991437, 4);
  sqcRZGate(q, -2.6279820146613333, 4);
  sqcRYGate(q, -1.400618345897635, 5);
  sqcRZGate(q, 1.9624670667535418, 5);
  sqcRYGate(q, 1.0543958212920692, 6);
  sqcRZGate(q, -1.7741720809153114, 6);
  sqcRYGate(q, 2.7661010258561536, 7);
  sqcRZGate(q, -0.16519915241921182, 7);
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
  sqcRYGate(q, 2.9901615729900692, 0);
  sqcRZGate(q, -2.128858605265112, 0);
  sqcRYGate(q, -1.7628182454086172, 1);
  sqcRZGate(q, -0.7907047372780145, 1);
  sqcRYGate(q, -0.6567460979901518, 2);
  sqcRZGate(q, -0.9588841438395154, 2);
  sqcRYGate(q, 2.7956250782481575, 3);
  sqcRZGate(q, -0.22094386266067723, 3);
  sqcRYGate(q, 2.2884462837699826, 4);
  sqcRZGate(q, 0.2719094096706771, 4);
  sqcRYGate(q, -0.7984973703390152, 5);
  sqcRZGate(q, -2.8933532037718264, 5);
  sqcRYGate(q, 0.9991441299141774, 6);
  sqcRZGate(q, 2.657123994844838, 6);
  sqcRYGate(q, -1.5397985593106487, 7);
  sqcRZGate(q, -1.1584509115961232, 7);
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
  sqcRYGate(q, -1.3800089279883134, 0);
  sqcRZGate(q, -2.463409815018528, 0);
  sqcRYGate(q, 2.888753994572731, 1);
  sqcRZGate(q, 1.824923574108532, 1);
  sqcRYGate(q, 0.057238827142439774, 2);
  sqcRZGate(q, 2.9811377712434743, 2);
  sqcRYGate(q, 1.2552875136298152, 3);
  sqcRZGate(q, -0.8277265099251131, 3);
  sqcRYGate(q, 0.33693474316978994, 4);
  sqcRZGate(q, 0.7047575327590456, 4);
  sqcRYGate(q, -1.5148940847577155, 5);
  sqcRZGate(q, 0.22902640031580643, 5);
  sqcRYGate(q, -2.7514530097953886, 6);
  sqcRZGate(q, 1.3094261247718268, 6);
  sqcRYGate(q, -0.9574988648025836, 7);
  sqcRZGate(q, 2.7025329441663954, 7);
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
  sqcRYGate(q, -2.2876804799771633, 0);
  sqcRZGate(q, 1.9137954841266656, 0);
  sqcRYGate(q, -2.4220362147227497, 1);
  sqcRZGate(q, 0.2447748859856844, 1);
  sqcRYGate(q, 0.0799105155127471, 2);
  sqcRZGate(q, 1.0886826593897052, 2);
  sqcRYGate(q, -0.4789078023231317, 3);
  sqcRZGate(q, 1.2337419796104472, 3);
  sqcRYGate(q, 0.5592097241551064, 4);
  sqcRZGate(q, 1.5614839770680942, 4);
  sqcRYGate(q, 1.119462952379463, 5);
  sqcRZGate(q, -1.0236172588927266, 5);
  sqcRYGate(q, -1.0585412047486158, 6);
  sqcRZGate(q, -2.003584764206745, 6);
  sqcRYGate(q, 0.8476690121801443, 7);
  sqcRZGate(q, -2.4499174434182467, 7);
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
  sqcRYGate(q, -1.6022084812301207, 0);
  sqcRZGate(q, -0.9617184111961649, 0);
  sqcRYGate(q, -0.688502135697635, 1);
  sqcRZGate(q, 1.1698233343297177, 1);
  sqcRYGate(q, 2.246903787372723, 2);
  sqcRZGate(q, -1.8271450667955487, 2);
  sqcRYGate(q, 3.094317910819494, 3);
  sqcRZGate(q, 1.3000753689221511, 3);
  sqcRYGate(q, 1.5783738884222647, 4);
  sqcRZGate(q, -2.2200352258536182, 4);
  sqcRYGate(q, -1.1894413837909423, 5);
  sqcRZGate(q, -1.4304538347767692, 5);
  sqcRYGate(q, 0.3426722240044477, 6);
  sqcRZGate(q, 1.3945289543917427, 6);
  sqcRYGate(q, -2.184555692121209, 7);
  sqcRZGate(q, -3.037099359575725, 7);
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
  sqcRYGate(q, 2.312954461113323, 0);
  sqcRZGate(q, -2.3093434261570716, 0);
  sqcRYGate(q, 2.1174778422208465, 1);
  sqcRZGate(q, -0.7102451118737769, 1);
  sqcRYGate(q, 0.9834165960840302, 2);
  sqcRZGate(q, 2.6610556357861084, 2);
  sqcRYGate(q, -1.34768196902208, 3);
  sqcRZGate(q, -2.7633121418948634, 3);
  sqcRYGate(q, 2.1448533322486902, 4);
  sqcRZGate(q, 0.015959709316520992, 4);
  sqcRYGate(q, 0.8308644769778296, 5);
  sqcRZGate(q, -1.9068662106403986, 5);
  sqcRYGate(q, 0.685960543858565, 6);
  sqcRZGate(q, 3.073043688668059, 6);
  sqcRYGate(q, -2.0517599652733005, 7);
  sqcRZGate(q, 0.5655702914236248, 7);
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
  sqcRYGate(q, -1.4659814715614878, 0);
  sqcRZGate(q, 0.3966669993410364, 0);
  sqcRYGate(q, -1.8293994418516784, 1);
  sqcRZGate(q, 0.10024037532236374, 1);
  sqcRYGate(q, 0.1512189977758993, 2);
  sqcRZGate(q, -1.2497759161317097, 2);
  sqcRYGate(q, 2.0261645454610457, 3);
  sqcRZGate(q, 0.7792521297639889, 3);
  sqcRYGate(q, 0.9925330112348926, 4);
  sqcRZGate(q, 2.0913949324729035, 4);
  sqcRYGate(q, -2.910712601337546, 5);
  sqcRZGate(q, 1.1121346442904525, 5);
  sqcRYGate(q, -2.4838711401441786, 6);
  sqcRZGate(q, 0.9737506376032895, 6);
  sqcRYGate(q, 2.739626550489237, 7);
  sqcRZGate(q, 3.006429711559917, 7);
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
  sqcRYGate(q, -1.1206169892544908, 0);
  sqcRZGate(q, 2.5367704995637532, 0);
  sqcRYGate(q, 1.5702112875717527, 1);
  sqcRZGate(q, -1.1315904181527343, 1);
  sqcRYGate(q, 1.2448620337551546, 2);
  sqcRZGate(q, 2.95423304239709, 2);
  sqcRYGate(q, -0.7528497196971271, 3);
  sqcRZGate(q, 1.1656274404835798, 3);
  sqcRYGate(q, 2.373479862447826, 4);
  sqcRZGate(q, -2.6139071935974125, 4);
  sqcRYGate(q, 0.9290526554577836, 5);
  sqcRZGate(q, 2.953295885527568, 5);
  sqcRYGate(q, 0.5990220597281908, 6);
  sqcRZGate(q, -2.793233282607622, 6);
  sqcRYGate(q, -1.0707418159083726, 7);
  sqcRZGate(q, 2.533668844124889, 7);
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
  sqcRYGate(q, -1.60958791967367, 0);
  sqcRZGate(q, 0.10101101838980203, 0);
  sqcRYGate(q, -3.009796138591245, 1);
  sqcRZGate(q, 0.9176055340787306, 1);
  sqcRYGate(q, -0.8279953086735832, 2);
  sqcRZGate(q, -1.433900017144322, 2);
  sqcRYGate(q, -0.8247659580165166, 3);
  sqcRZGate(q, -1.708311740413147, 3);
  sqcRYGate(q, 2.2748872915855403, 4);
  sqcRZGate(q, -2.5298078258451175, 4);
  sqcRYGate(q, -2.902520671836624, 5);
  sqcRZGate(q, -0.693991053820819, 5);
  sqcRYGate(q, 0.41272958269732823, 6);
  sqcRZGate(q, -2.3025086846562983, 6);
  sqcRYGate(q, -2.678441088416291, 7);
  sqcRZGate(q, 0.36331385088032153, 7);
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
  sqcRYGate(q, -2.476138593349886, 0);
  sqcRZGate(q, -0.4312503246337913, 0);
  sqcRYGate(q, -0.23153474217047887, 1);
  sqcRZGate(q, 3.0830214211884517, 1);
  sqcRYGate(q, -0.7584429488046205, 2);
  sqcRZGate(q, -1.514251309073942, 2);
  sqcRYGate(q, -1.6513928102653048, 3);
  sqcRZGate(q, -0.03825921292860659, 3);
  sqcRYGate(q, 0.9689442056272988, 4);
  sqcRZGate(q, 2.132921652501135, 4);
  sqcRYGate(q, 2.7166530181167055, 5);
  sqcRZGate(q, -0.5067300199791998, 5);
  sqcRYGate(q, -1.1654991817803946, 6);
  sqcRZGate(q, 2.8914470010800266, 6);
  sqcRYGate(q, -2.5582832652408216, 7);
  sqcRZGate(q, 2.2288996459838453, 7);
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
  sqcRYGate(q, -2.1796965106729234, 0);
  sqcRZGate(q, -2.422926822208026, 0);
  sqcRYGate(q, 2.16699606891377, 1);
  sqcRZGate(q, 1.094113427925305, 1);
  sqcRYGate(q, 1.2173527563655213, 2);
  sqcRZGate(q, -1.5098722279464951, 2);
  sqcRYGate(q, 2.172571790708461, 3);
  sqcRZGate(q, 1.0194567364033649, 3);
  sqcRYGate(q, -1.9745746795034185, 4);
  sqcRZGate(q, -1.4059919318592335, 4);
  sqcRYGate(q, -0.035171048950731525, 5);
  sqcRZGate(q, 2.44300294349812, 5);
  sqcRYGate(q, -1.1026170660920627, 6);
  sqcRZGate(q, -0.679624667914334, 6);
  sqcRYGate(q, 1.6679114428205266, 7);
  sqcRZGate(q, 2.414512636189665, 7);
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
  sqcRYGate(q, 2.0507869871225664, 0);
  sqcRZGate(q, -1.526004131969943, 0);
  sqcRYGate(q, -1.0159357881471687, 1);
  sqcRZGate(q, 0.1309861807847632, 1);
  sqcRYGate(q, -0.9884473250443153, 2);
  sqcRZGate(q, 0.3275564624709979, 2);
  sqcRYGate(q, 2.759718602069367, 3);
  sqcRZGate(q, -0.8444761834356517, 3);
  sqcRYGate(q, 0.28231563676715066, 4);
  sqcRZGate(q, 2.26594169619264, 4);
  sqcRYGate(q, 2.4350017328933853, 5);
  sqcRZGate(q, 2.781096882813888, 5);
  sqcRYGate(q, 2.037134164232312, 6);
  sqcRZGate(q, -2.5599986082348347, 6);
  sqcRYGate(q, -1.235020626050824, 7);
  sqcRZGate(q, -2.330203055666894, 7);
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
  sqcRYGate(q, 0.6983576659239609, 0);
  sqcRZGate(q, -3.0372247300122353, 0);
  sqcRYGate(q, 2.6402835963180658, 1);
  sqcRZGate(q, -2.887494229312409, 1);
  sqcRYGate(q, 2.0079546830163686, 2);
  sqcRZGate(q, -2.2263742233824715, 2);
  sqcRYGate(q, 1.5783504458998507, 3);
  sqcRZGate(q, -0.9459748313824194, 3);
  sqcRYGate(q, -1.0238410366692179, 4);
  sqcRZGate(q, 1.5794787734830544, 4);
  sqcRYGate(q, 1.4470384596257062, 5);
  sqcRZGate(q, 0.46702359664578624, 5);
  sqcRYGate(q, -1.1945868151092205, 6);
  sqcRZGate(q, 0.7407141208745514, 6);
  sqcRYGate(q, 0.36690146220848163, 7);
  sqcRZGate(q, -1.7794151537025427, 7);
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
  sqcRYGate(q, 2.501486044470829, 0);
  sqcRZGate(q, 0.37359923632127884, 0);
  sqcRYGate(q, 2.777773129700365, 1);
  sqcRZGate(q, -2.4508812533465347, 1);
  sqcRYGate(q, 1.195423141863677, 2);
  sqcRZGate(q, 0.5587327228040246, 2);
  sqcRYGate(q, -1.091213343423778, 3);
  sqcRZGate(q, 3.1160952035087743, 3);
  sqcRYGate(q, -1.3818542852222357, 4);
  sqcRZGate(q, -2.210164016730729, 4);
  sqcRYGate(q, 1.642154293225758, 5);
  sqcRZGate(q, -0.9599205267015808, 5);
  sqcRYGate(q, 3.1362995531770217, 6);
  sqcRZGate(q, -0.22432660720262199, 6);
  sqcRYGate(q, -2.450851146338036, 7);
  sqcRZGate(q, 3.138556766957673, 7);
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
  sqcRYGate(q, 0.8201034599151613, 0);
  sqcRZGate(q, -0.41800904884361545, 0);
  sqcRYGate(q, -1.3297825292007441, 1);
  sqcRZGate(q, 1.6761281119848082, 1);
  sqcRYGate(q, -1.744120575850765, 2);
  sqcRZGate(q, -0.8422924474829595, 2);
  sqcRYGate(q, 1.0658274570516055, 3);
  sqcRZGate(q, -0.5544115196888376, 3);
  sqcRYGate(q, -2.5443439057964445, 4);
  sqcRZGate(q, 0.10403536781965178, 4);
  sqcRYGate(q, 1.1023845899921214, 5);
  sqcRZGate(q, 0.26603753489126714, 5);
  sqcRYGate(q, 0.8939587730707581, 6);
  sqcRZGate(q, -1.3642316828718164, 6);
  sqcRYGate(q, -2.817341670816277, 7);
  sqcRZGate(q, -1.7328017949416514, 7);
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
  sqcRYGate(q, -0.312512584051957, 0);
  sqcRZGate(q, 2.674841931979563, 0);
  sqcRYGate(q, -1.0077821453309195, 1);
  sqcRZGate(q, -0.30849648437058463, 1);
  sqcRYGate(q, 0.847921936123664, 2);
  sqcRZGate(q, 0.5363612049456599, 2);
  sqcRYGate(q, -2.9292543539726483, 3);
  sqcRZGate(q, 0.624015055368647, 3);
  sqcRYGate(q, 1.992604234379451, 4);
  sqcRZGate(q, 0.30813711076688455, 4);
  sqcRYGate(q, -2.010882266898686, 5);
  sqcRZGate(q, -0.8993984460612516, 5);
  sqcRYGate(q, -2.1908596351485796, 6);
  sqcRZGate(q, -0.2939713921627725, 6);
  sqcRYGate(q, -1.169578877782773, 7);
  sqcRZGate(q, -0.6515937743537178, 7);
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
  sqcRYGate(q, 1.4974722440561457, 0);
  sqcRZGate(q, -0.31265965260848366, 0);
  sqcRYGate(q, -2.7949571121091186, 1);
  sqcRZGate(q, -3.0575612679222237, 1);
  sqcRYGate(q, 2.1842297965473225, 2);
  sqcRZGate(q, 2.2159741539343534, 2);
  sqcRYGate(q, -2.2062807398712065, 3);
  sqcRZGate(q, 2.450686973232782, 3);
  sqcRYGate(q, -0.6256459500975887, 4);
  sqcRZGate(q, -0.1752573273293363, 4);
  sqcRYGate(q, -0.7830175375448496, 5);
  sqcRZGate(q, -2.5476871666991205, 5);
  sqcRYGate(q, -3.018478997974917, 6);
  sqcRZGate(q, 2.11008640506146, 6);
  sqcRYGate(q, -0.8311759140698857, 7);
  sqcRZGate(q, -2.1353564385224733, 7);
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
  sqcRYGate(q, -1.7712530936219646, 0);
  sqcRZGate(q, 0.4347832069287359, 0);
  sqcRYGate(q, 1.5679652762146885, 1);
  sqcRZGate(q, -1.2398414811304732, 1);
  sqcRYGate(q, 1.0242708815417125, 2);
  sqcRZGate(q, -0.5757093457454886, 2);
  sqcRYGate(q, -1.6434884669906293, 3);
  sqcRZGate(q, 1.2716821690389803, 3);
  sqcRYGate(q, 2.414147102573789, 4);
  sqcRZGate(q, -3.0142751784080595, 4);
  sqcRYGate(q, -2.5183047979493858, 5);
  sqcRZGate(q, -1.101384871730347, 5);
  sqcRYGate(q, 0.04106156937277758, 6);
  sqcRZGate(q, 1.6286629146066338, 6);
  sqcRYGate(q, -1.8917584056619399, 7);
  sqcRZGate(q, -0.6923545367390923, 7);
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
  sqcRYGate(q, 1.7433771914097298, 0);
  sqcRZGate(q, -2.3652351602596022, 0);
  sqcRYGate(q, -1.5594961128195783, 1);
  sqcRZGate(q, -2.296661720755349, 1);
  sqcRYGate(q, -0.08150886953787317, 2);
  sqcRZGate(q, -2.0966465045729183, 2);
  sqcRYGate(q, -0.23711955824684286, 3);
  sqcRZGate(q, -0.9749575649535043, 3);
  sqcRYGate(q, 2.547056053120573, 4);
  sqcRZGate(q, -1.3823706168391299, 4);
  sqcRYGate(q, -0.4193722383353027, 5);
  sqcRZGate(q, 2.4272003085308427, 5);
  sqcRYGate(q, 0.7605627259159224, 6);
  sqcRZGate(q, 2.6227378330657114, 6);
  sqcRYGate(q, -1.0502277832440168, 7);
  sqcRZGate(q, 1.8023818852536673, 7);
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
  sqcRYGate(q, -2.3825227967688622, 0);
  sqcRZGate(q, 2.7119269029094197, 0);
  sqcRYGate(q, 0.6296660433583021, 1);
  sqcRZGate(q, 0.33431061964210707, 1);
  sqcRYGate(q, 1.5633093684818826, 2);
  sqcRZGate(q, 1.2161293596811176, 2);
  sqcRYGate(q, 2.194386109666313, 3);
  sqcRZGate(q, -2.5480090232438326, 3);
  sqcRYGate(q, 1.064021967365898, 4);
  sqcRZGate(q, -1.1863307720643634, 4);
  sqcRYGate(q, 2.6933395711897243, 5);
  sqcRZGate(q, -0.8283648297885629, 5);
  sqcRYGate(q, -0.6413073086153034, 6);
  sqcRZGate(q, 1.8620150972850549, 6);
  sqcRYGate(q, 1.16847400715423, 7);
  sqcRZGate(q, -0.6322785586570124, 7);
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
  sqcRYGate(q, 2.7504788078414473, 0);
  sqcRZGate(q, -2.065339810470082, 0);
  sqcRYGate(q, 1.3059045941557716, 1);
  sqcRZGate(q, -1.6929920771179072, 1);
  sqcRYGate(q, 0.5970593844355161, 2);
  sqcRZGate(q, 1.1966831834310907, 2);
  sqcRYGate(q, -0.5433362729826863, 3);
  sqcRZGate(q, -1.6599594203466443, 3);
  sqcRYGate(q, -0.9536579591081306, 4);
  sqcRZGate(q, 1.1729022119393104, 4);
  sqcRYGate(q, -2.6477711836029165, 5);
  sqcRZGate(q, 0.18891124005811924, 5);
  sqcRYGate(q, 1.2078189353659372, 6);
  sqcRZGate(q, 2.0470567547612846, 6);
  sqcRYGate(q, -1.9730617209132273, 7);
  sqcRZGate(q, 1.8700776829174313, 7);
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
  sqcRYGate(q, -2.3136492783103297, 0);
  sqcRZGate(q, 2.640316850397746, 0);
  sqcRYGate(q, 1.9904301803395252, 1);
  sqcRZGate(q, 1.950866867241933, 1);
  sqcRYGate(q, 3.094261594960931, 2);
  sqcRZGate(q, -2.9471985644340353, 2);
  sqcRYGate(q, 1.3880213992903023, 3);
  sqcRZGate(q, -3.1013964318614478, 3);
  sqcRYGate(q, -1.512071604689032, 4);
  sqcRZGate(q, -2.880642804866575, 4);
  sqcRYGate(q, 0.970572778118037, 5);
  sqcRZGate(q, -2.2328164424057806, 5);
  sqcRYGate(q, -0.5275404328676414, 6);
  sqcRZGate(q, -0.9290474074065477, 6);
  sqcRYGate(q, 2.189528810538924, 7);
  sqcRZGate(q, -0.8387846238801375, 7);
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
  sqcRYGate(q, 3.002198186809732, 0);
  sqcRZGate(q, -2.6626361629462387, 0);
  sqcRYGate(q, 1.6150859159151962, 1);
  sqcRZGate(q, -0.6868768557870242, 1);
  sqcRYGate(q, -1.6602027939493846, 2);
  sqcRZGate(q, -2.05011053662228, 2);
  sqcRYGate(q, -0.4345216129909435, 3);
  sqcRZGate(q, -2.1685983875713046, 3);
  sqcRYGate(q, -1.3786288394433206, 4);
  sqcRZGate(q, 0.7395564796571565, 4);
  sqcRYGate(q, 2.2175985569131704, 5);
  sqcRZGate(q, -2.2773791133418952, 5);
  sqcRYGate(q, -0.6473452840276238, 6);
  sqcRZGate(q, 0.5911358333008607, 6);
  sqcRYGate(q, 1.2645459680018651, 7);
  sqcRZGate(q, -2.6887932569601585, 7);
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
  sqcRYGate(q, -2.825815674647879, 0);
  sqcRZGate(q, -1.847386401172523, 0);
  sqcRYGate(q, -2.9231829483724523, 1);
  sqcRZGate(q, 2.427243584132528, 1);
  sqcRYGate(q, -0.3201972886029081, 2);
  sqcRZGate(q, -1.1667940821615321, 2);
  sqcRYGate(q, -1.2164790080702348, 3);
  sqcRZGate(q, -2.576882586753944, 3);
  sqcRYGate(q, 0.9971237132907627, 4);
  sqcRZGate(q, 2.748269618739578, 4);
  sqcRYGate(q, 0.6986527917245215, 5);
  sqcRZGate(q, -2.431107331184419, 5);
  sqcRYGate(q, 1.0141361254441312, 6);
  sqcRZGate(q, 0.6349748855898867, 6);
  sqcRYGate(q, -0.9554256390477172, 7);
  sqcRZGate(q, 1.7319883736239705, 7);
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
  sqcRYGate(q, -1.2417002329097215, 0);
  sqcRZGate(q, -2.0480616973174275, 0);
  sqcRYGate(q, -0.859215200957837, 1);
  sqcRZGate(q, 0.6158340239336858, 1);
  sqcRYGate(q, -1.468307183886302, 2);
  sqcRZGate(q, -1.2747572961814806, 2);
  sqcRYGate(q, 1.3508370704876682, 3);
  sqcRZGate(q, -1.5805434941214562, 3);
  sqcRYGate(q, 1.2390093235721509, 4);
  sqcRZGate(q, 0.3029835255066348, 4);
  sqcRYGate(q, 2.1027846911171615, 5);
  sqcRZGate(q, 0.4691170712865311, 5);
  sqcRYGate(q, -2.7562700897252657, 6);
  sqcRZGate(q, -2.6034271945941336, 6);
  sqcRYGate(q, -1.5347364823740997, 7);
  sqcRZGate(q, 2.634418866480568, 7);
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
  sqcRYGate(q, -0.7282825135324709, 0);
  sqcRZGate(q, 3.1047655226157653, 0);
  sqcRYGate(q, -2.9767031580294447, 1);
  sqcRZGate(q, -1.2246778684432926, 1);
  sqcRYGate(q, 1.097025502222598, 2);
  sqcRZGate(q, 1.0662490402683957, 2);
  sqcRYGate(q, -2.409137206543163, 3);
  sqcRZGate(q, 0.42415443834363664, 3);
  sqcRYGate(q, -1.4506510362825358, 4);
  sqcRZGate(q, 1.0845716652584771, 4);
  sqcRYGate(q, 0.9872535484399064, 5);
  sqcRZGate(q, -1.6781127292334794, 5);
  sqcRYGate(q, -0.2628048131879419, 6);
  sqcRZGate(q, 0.38280498115430167, 6);
  sqcRYGate(q, 1.206419525851253, 7);
  sqcRZGate(q, -0.7839842796736525, 7);
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
  sqcRYGate(q, -0.1454690831182115, 0);
  sqcRZGate(q, 1.6033838485813312, 0);
  sqcRYGate(q, -1.9431304088378527, 1);
  sqcRZGate(q, -0.3196986663629212, 1);
  sqcRYGate(q, -1.700517159238963, 2);
  sqcRZGate(q, 0.26864473870297706, 2);
  sqcRYGate(q, -1.367739883683234, 3);
  sqcRZGate(q, 0.31201721878523614, 3);
  sqcRYGate(q, 2.03205193516757, 4);
  sqcRZGate(q, -2.5195079876850075, 4);
  sqcRYGate(q, 1.648766493818222, 5);
  sqcRZGate(q, -0.703751923473386, 5);
  sqcRYGate(q, 0.17452197201285888, 6);
  sqcRZGate(q, 1.6571163346849582, 6);
  sqcRYGate(q, -2.4542766653053114, 7);
  sqcRZGate(q, 0.814706124012702, 7);
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
  sqcRYGate(q, -3.030142068791987, 0);
  sqcRZGate(q, 0.3051089259375557, 0);
  sqcRYGate(q, 2.81974913469165, 1);
  sqcRZGate(q, 0.6658057438079287, 1);
  sqcRYGate(q, 0.9078287123186406, 2);
  sqcRZGate(q, -2.3114629819572263, 2);
  sqcRYGate(q, 1.5665631557406476, 3);
  sqcRZGate(q, 3.010775870665661, 3);
  sqcRYGate(q, 2.5605532365682424, 4);
  sqcRZGate(q, 2.1826387418428967, 4);
  sqcRYGate(q, -0.30728466412762057, 5);
  sqcRZGate(q, 3.038896418694399, 5);
  sqcRYGate(q, -0.27610898500921166, 6);
  sqcRZGate(q, 3.0582079597957237, 6);
  sqcRYGate(q, 2.5163057636597266, 7);
  sqcRZGate(q, -0.7321122530651563, 7);
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
  sqcRYGate(q, -0.3061597673278565, 0);
  sqcRZGate(q, -2.323511941180451, 0);
  sqcRYGate(q, 0.42380206526311776, 1);
  sqcRZGate(q, -1.6124125787881107, 1);
  sqcRYGate(q, 1.3553506138713596, 2);
  sqcRZGate(q, 2.7651848542732425, 2);
  sqcRYGate(q, 0.5292304188148853, 3);
  sqcRZGate(q, -0.8011598824838996, 3);
  sqcRYGate(q, -0.35283408328465776, 4);
  sqcRZGate(q, 1.4747102195208353, 4);
  sqcRYGate(q, -0.28466937413192756, 5);
  sqcRZGate(q, 1.350836361448506, 5);
  sqcRYGate(q, 0.5104627829256907, 6);
  sqcRZGate(q, -0.08628553369136996, 6);
  sqcRYGate(q, -0.6360639046922056, 7);
  sqcRZGate(q, 2.413963462528421, 7);
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
  sqcRYGate(q, -1.4063834350123798, 0);
  sqcRZGate(q, -1.311235147475384, 0);
  sqcRYGate(q, 2.5943841076619645, 1);
  sqcRZGate(q, -3.0940881378567884, 1);
  sqcRYGate(q, -1.8998971541995304, 2);
  sqcRZGate(q, -0.34417215657279243, 2);
  sqcRYGate(q, -1.7306910163416482, 3);
  sqcRZGate(q, -1.471488186110477, 3);
  sqcRYGate(q, 1.7223639347625816, 4);
  sqcRZGate(q, 2.057473356727086, 4);
  sqcRYGate(q, 0.6023994672767644, 5);
  sqcRZGate(q, -2.6011757867210172, 5);
  sqcRYGate(q, -0.765995730244156, 6);
  sqcRZGate(q, 0.3917549819389859, 6);
  sqcRYGate(q, 0.7741421305335172, 7);
  sqcRZGate(q, 1.6038515387185432, 7);
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
  sqcRYGate(q, -2.7698120599142535, 0);
  sqcRZGate(q, -1.5583298433614123, 0);
  sqcRYGate(q, 1.7213731501130791, 1);
  sqcRZGate(q, -2.8405019675360337, 1);
  sqcRYGate(q, 0.8336883107981768, 2);
  sqcRZGate(q, 2.260032638555937, 2);
  sqcRYGate(q, -0.24478154204255198, 3);
  sqcRZGate(q, 2.735868125020978, 3);
  sqcRYGate(q, -2.1831774878337415, 4);
  sqcRZGate(q, 2.0527647054868847, 4);
  sqcRYGate(q, 1.6616501241216353, 5);
  sqcRZGate(q, 1.8632773354067385, 5);
  sqcRYGate(q, 0.2907703832778741, 6);
  sqcRZGate(q, -1.8435676041829734, 6);
  sqcRYGate(q, -2.2027475550927376, 7);
  sqcRZGate(q, 2.1642651543067695, 7);
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
  sqcRYGate(q, 2.887860158470084, 0);
  sqcRZGate(q, 1.5053309847337266, 0);
  sqcRYGate(q, 3.0998337399252325, 1);
  sqcRZGate(q, 2.6975160229563664, 1);
  sqcRYGate(q, 2.501529075029241, 2);
  sqcRZGate(q, -0.08767712293343166, 2);
  sqcRYGate(q, -2.002211919509936, 3);
  sqcRZGate(q, -0.42054254081907755, 3);
  sqcRYGate(q, -1.4977517119888413, 4);
  sqcRZGate(q, 1.2666929459450644, 4);
  sqcRYGate(q, -1.002732423085656, 5);
  sqcRZGate(q, 3.0876228658555616, 5);
  sqcRYGate(q, 0.6425696248529178, 6);
  sqcRZGate(q, -2.720558666597765, 6);
  sqcRYGate(q, 0.6215572754574161, 7);
  sqcRZGate(q, 0.3710321725055126, 7);
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
  sqcRYGate(q, -0.4650426728170505, 0);
  sqcRZGate(q, 2.0721548282026943, 0);
  sqcRYGate(q, -1.615253643218467, 1);
  sqcRZGate(q, -2.7249894087077444, 1);
  sqcRYGate(q, -0.2998371933888958, 2);
  sqcRZGate(q, 0.8547915299213428, 2);
  sqcRYGate(q, -2.370583017110124, 3);
  sqcRZGate(q, 2.988067130746163, 3);
  sqcRYGate(q, -1.6550972271809519, 4);
  sqcRZGate(q, 0.6941960067343169, 4);
  sqcRYGate(q, -2.3647212232036594, 5);
  sqcRZGate(q, 0.19510862775582188, 5);
  sqcRYGate(q, -2.0643154446859273, 6);
  sqcRZGate(q, -2.6035411751146267, 6);
  sqcRYGate(q, 2.0922404207523044, 7);
  sqcRZGate(q, -1.5591110214642656, 7);

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
