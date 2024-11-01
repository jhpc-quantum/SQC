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

  sqcRYGate(q, 3.14117303486197, 0);
  sqcRZGate(q, -1.0466525438535834, 0);
  sqcRYGate(q, -1.5684629414852589, 1);
  sqcRZGate(q, -0.8974787409029208, 1);
  sqcRYGate(q, 0.5040791144644169, 2);
  sqcRZGate(q, 1.5708603153991358, 2);
  sqcRYGate(q, 1.5698847950763852, 3);
  sqcRZGate(q, 0.6130370049238696, 3);
  sqcRYGate(q, 1.5713024905041904, 4);
  sqcRZGate(q, 1.5704656681649398, 4);
  sqcRYGate(q, 1.5699207946678282, 5);
  sqcRZGate(q, -1.4356153331672201, 5);
  sqcRYGate(q, -0.6861988889306652, 6);
  sqcRZGate(q, -2.639976536498847, 6);
  sqcRYGate(q, 1.4176528562084614, 7);
  sqcRZGate(q, -0.0009365395745852823, 7);
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
  sqcRYGate(q, -0.00023739453358739837, 0);
  sqcRZGate(q, -1.9306355218291786, 0);
  sqcRYGate(q, -2.4107714858003906, 1);
  sqcRZGate(q, -1.0327320222494247, 1);
  sqcRYGate(q, 0.7909051062452326, 2);
  sqcRZGate(q, -3.1413505400126565, 2);
  sqcRYGate(q, 1.570067092992936, 3);
  sqcRZGate(q, -1.5656735043933425, 3);
  sqcRYGate(q, 1.9085213321302064, 4);
  sqcRZGate(q, 1.3427894666496072, 4);
  sqcRYGate(q, -2.6128446559056764, 5);
  sqcRZGate(q, -0.5008239435187832, 5);
  sqcRYGate(q, -0.0012112219364232965, 6);
  sqcRZGate(q, 2.6393438463350782, 6);
  sqcRYGate(q, 1.5708236835477818, 7);
  sqcRZGate(q, 2.4330425787929535, 7);
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
  sqcRYGate(q, -0.0006126804102988754, 0);
  sqcRZGate(q, 2.420754365080503, 0);
  sqcRYGate(q, 1.568166997104277, 1);
  sqcRZGate(q, -0.5200174483597725, 1);
  sqcRYGate(q, 2.904939707331019, 2);
  sqcRZGate(q, 0.00047706049598653707, 2);
  sqcRYGate(q, 2.3199847215426663, 3);
  sqcRZGate(q, 0.004141991253351065, 3);
  sqcRYGate(q, -0.0005090072039545362, 4);
  sqcRZGate(q, -1.3419083940971042, 4);
  sqcRYGate(q, 0.0006654067077898063, 5);
  sqcRZGate(q, 1.423474764259906, 5);
  sqcRYGate(q, 1.5714701492266192, 6);
  sqcRZGate(q, -3.0093657832182674, 6);
  sqcRYGate(q, -1.5080657896276861, 7);
  sqcRZGate(q, -0.9659227636174065, 7);
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
  sqcRYGate(q, 0.0035739070573455843, 0);
  sqcRZGate(q, -0.6221143290504891, 0);
  sqcRYGate(q, -0.6233048937575774, 1);
  sqcRZGate(q, -2.800801079700303, 1);
  sqcRYGate(q, 2.0411969622486126, 2);
  sqcRZGate(q, -1.5709334737537057, 2);
  sqcRYGate(q, 2.1136697476957047, 3);
  sqcRZGate(q, 3.137770482043154, 3);
  sqcRYGate(q, 1.5704636988894478, 4);
  sqcRZGate(q, 1.123589078227119, 4);
  sqcRYGate(q, -0.10934778273989254, 5);
  sqcRZGate(q, -1.4965719765641046, 5);
  sqcRYGate(q, -0.004183786765815434, 6);
  sqcRZGate(q, 2.8578933829811133, 6);
  sqcRYGate(q, 1.904411241450861, 7);
  sqcRZGate(q, 1.4280655851442672, 7);
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
  sqcRYGate(q, 1.5706986695921117, 0);
  sqcRZGate(q, 1.3182521417900679, 0);
  sqcRYGate(q, 0.0022212964759376766, 1);
  sqcRZGate(q, -0.12645888823840767, 1);
  sqcRYGate(q, 0.6728118296455188, 2);
  sqcRZGate(q, -1.5712771123527816, 2);
  sqcRYGate(q, -0.5554603944937195, 3);
  sqcRZGate(q, -3.1341243727114523, 3);
  sqcRYGate(q, -3.141373195665229, 4);
  sqcRZGate(q, -2.4448566120774284, 4);
  sqcRYGate(q, 2.6982909410068814, 5);
  sqcRZGate(q, 1.6361753198133098, 5);
  sqcRYGate(q, 2.548846427844962, 6);
  sqcRZGate(q, 2.7939532206952506, 6);
  sqcRYGate(q, -1.1673169584615048, 7);
  sqcRZGate(q, 1.5499117154793813, 7);
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
  sqcRYGate(q, 3.1098880122978247, 0);
  sqcRZGate(q, 2.89015017229272, 0);
  sqcRYGate(q, 0.000367662368489663, 1);
  sqcRZGate(q, -0.6504850651175343, 1);
  sqcRYGate(q, -1.57090590237805, 2);
  sqcRZGate(q, 2.8155570324475945, 2);
  sqcRYGate(q, -1.6000521314689131, 3);
  sqcRZGate(q, 1.5725793671509263, 3);
  sqcRYGate(q, 3.1411613515374834, 4);
  sqcRZGate(q, 2.3961244617673474, 4);
  sqcRYGate(q, -2.522913133120912, 5);
  sqcRZGate(q, 1.4927109363525943, 5);
  sqcRYGate(q, -0.0037516344408858866, 6);
  sqcRZGate(q, -2.476139633517399, 6);
  sqcRYGate(q, 1.796384054533869, 7);
  sqcRZGate(q, 1.3051106108012824, 7);
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
  sqcRYGate(q, 1.5693671734902073, 0);
  sqcRZGate(q, -2.2947951163771276, 0);
  sqcRYGate(q, -0.00011285627655764486, 1);
  sqcRZGate(q, -2.3634027047814326, 1);
  sqcRYGate(q, 3.1415801853567156, 2);
  sqcRZGate(q, -1.8941608911653907, 2);
  sqcRYGate(q, -1.5709627987899468, 3);
  sqcRZGate(q, -1.2106270605362623, 3);
  sqcRYGate(q, -0.000890164445251713, 4);
  sqcRZGate(q, -1.2534776117394875, 4);
  sqcRYGate(q, -0.658741747797233, 5);
  sqcRZGate(q, -1.8460614086168867, 5);
  sqcRYGate(q, 0.4494715955453587, 6);
  sqcRZGate(q, -2.3607387582466877, 6);
  sqcRYGate(q, -1.4958298476006195, 7);
  sqcRZGate(q, -3.12270947711559, 7);
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
  sqcRYGate(q, -1.6400383244014005, 0);
  sqcRZGate(q, 0.7369156649554265, 0);
  sqcRYGate(q, -3.141133857291054, 1);
  sqcRZGate(q, -2.8867452519016332, 1);
  sqcRYGate(q, 1.58461695802179, 2);
  sqcRZGate(q, 0.5432287731344514, 2);
  sqcRYGate(q, 3.141174822084794, 3);
  sqcRZGate(q, -2.619086325655778, 3);
  sqcRYGate(q, -1.5710289134683109, 4);
  sqcRZGate(q, 1.5738864961620824, 4);
  sqcRYGate(q, 1.5703542700493704, 5);
  sqcRZGate(q, 1.9697457104499883, 5);
  sqcRYGate(q, -1.5732622641574674, 6);
  sqcRZGate(q, -1.5691709356049974, 6);
  sqcRYGate(q, -2.546640293447681, 7);
  sqcRZGate(q, -0.9546056998827313, 7);
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
  sqcRYGate(q, -3.1408228425765556, 0);
  sqcRZGate(q, 2.4741567624436254, 0);
  sqcRYGate(q, 1.569873046342936, 1);
  sqcRZGate(q, 2.203093572450576, 1);
  sqcRYGate(q, 0.00027259610868635495, 2);
  sqcRZGate(q, -0.16586758158301773, 2);
  sqcRYGate(q, -0.001889847127623936, 3);
  sqcRZGate(q, 2.51785138738181, 3);
  sqcRYGate(q, 2.96051790638934, 4);
  sqcRZGate(q, 1.5740877212056354, 4);
  sqcRYGate(q, -0.00023875355854935997, 5);
  sqcRZGate(q, 3.0793345052344883, 5);
  sqcRYGate(q, -1.5705682590174177, 6);
  sqcRZGate(q, -3.139803927913843, 6);
  sqcRYGate(q, 1.5683118235057805, 7);
  sqcRZGate(q, -1.569203136637873, 7);
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
  sqcRYGate(q, -1.5698188646735374, 0);
  sqcRZGate(q, -1.569516614142577, 0);
  sqcRYGate(q, -3.141376569119675, 1);
  sqcRZGate(q, -0.938656602787213, 1);
  sqcRYGate(q, 3.1298012731173595, 2);
  sqcRZGate(q, 0.37668064400523704, 2);
  sqcRYGate(q, -3.141270239943559, 3);
  sqcRZGate(q, -0.4558528030347819, 3);
  sqcRYGate(q, 1.5714076931041918, 4);
  sqcRZGate(q, 1.7326671165700338, 4);
  sqcRYGate(q, -3.1395268554852804, 5);
  sqcRZGate(q, 3.0579082742503902, 5);
  sqcRYGate(q, 1.572663885465843, 6);
  sqcRZGate(q, -2.9275284849823, 6);
  sqcRYGate(q, 1.2527153618298632, 7);
  sqcRZGate(q, 0.0027941708974168478, 7);
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
  sqcRYGate(q, -1.5710288335015203, 0);
  sqcRZGate(q, 0.00047032809716451846, 0);
  sqcRYGate(q, -1.2323418895741072, 1);
  sqcRZGate(q, 0.31010384595456225, 1);
  sqcRYGate(q, -1.5708030117337706, 2);
  sqcRZGate(q, 3.1402761392982725, 2);
  sqcRYGate(q, 0.0024238439480264162, 3);
  sqcRZGate(q, -1.5767680965825512, 3);
  sqcRYGate(q, 3.140729464700197, 4);
  sqcRZGate(q, -2.9803867449657373, 4);
  sqcRYGate(q, 0.0022179879145781136, 5);
  sqcRZGate(q, -2.7218446864362518, 5);
  sqcRYGate(q, -3.1412155357766296, 6);
  sqcRZGate(q, 0.11747903679203578, 6);
  sqcRYGate(q, 1.5703598275608153, 7);
  sqcRZGate(q, 1.825840769756996, 7);
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
  sqcRYGate(q, 1.5706037493338147, 0);
  sqcRZGate(q, 1.698566567675826, 0);
  sqcRYGate(q, 2.1492258347561384, 1);
  sqcRZGate(q, 0.5275418522427358, 1);
  sqcRYGate(q, -1.5691210500306658, 2);
  sqcRZGate(q, -3.1385960859531243, 2);
  sqcRYGate(q, -1.5697785536333824, 3);
  sqcRZGate(q, -0.17732189828443712, 3);
  sqcRYGate(q, 1.5711312465038068, 4);
  sqcRZGate(q, 0.00024052024362652223, 4);
  sqcRYGate(q, 0.6099257548582185, 5);
  sqcRZGate(q, 1.5715541090524479, 5);
  sqcRYGate(q, -0.03097902798996177, 6);
  sqcRZGate(q, -1.3101525688344484, 6);
  sqcRYGate(q, 0.915199556219821, 7);
  sqcRZGate(q, -1.9741745238170172, 7);
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
  sqcRYGate(q, -0.007912772272518964, 0);
  sqcRZGate(q, -2.061671254183777, 0);
  sqcRYGate(q, -1.5706649817891574, 1);
  sqcRZGate(q, -1.5694758154032196, 1);
  sqcRYGate(q, -2.7549235369611873, 2);
  sqcRZGate(q, 2.5959398474955364, 2);
  sqcRYGate(q, -3.1409269912121744, 3);
  sqcRZGate(q, -1.7492219492642385, 3);
  sqcRYGate(q, -0.554248449459048, 4);
  sqcRZGate(q, -1.5710952115059609, 4);
  sqcRYGate(q, 1.569964562269658, 5);
  sqcRZGate(q, 1.6095200517296018, 5);
  sqcRYGate(q, -1.8465652299681782e-05, 6);
  sqcRZGate(q, 1.406416573579996, 6);
  sqcRYGate(q, 1.5739589415187405, 7);
  sqcRZGate(q, 1.5733932427804493, 7);
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
  sqcRYGate(q, -3.140924349967684, 0);
  sqcRZGate(q, 2.780156484266136, 0);
  sqcRYGate(q, -1.572032217152702, 1);
  sqcRZGate(q, -0.9226259095699629, 1);
  sqcRYGate(q, 0.002130510514421605, 2);
  sqcRZGate(q, -2.68305911381889, 2);
  sqcRYGate(q, -1.273497706738714, 3);
  sqcRZGate(q, -0.7970693595186047, 3);
  sqcRYGate(q, 1.5706083633257637, 4);
  sqcRZGate(q, -0.014503438481059838, 4);
  sqcRYGate(q, 2.9663370325133855, 5);
  sqcRZGate(q, -1.5345580328588677, 5);
  sqcRYGate(q, -1.56759142840673, 6);
  sqcRZGate(q, 2.4522441113936706, 6);
  sqcRYGate(q, -0.39179510621766894, 7);
  sqcRZGate(q, 0.00043288395479557096, 7);
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
  sqcRYGate(q, 1.5701295599058458, 0);
  sqcRZGate(q, -1.8034782315342062, 0);
  sqcRYGate(q, -1.5702317565962423, 1);
  sqcRZGate(q, -2.990519133285424, 1);
  sqcRYGate(q, -3.141384924741453, 2);
  sqcRZGate(q, 3.052331897690129, 2);
  sqcRYGate(q, -0.0002766586777134969, 3);
  sqcRZGate(q, 0.798201364957448, 3);
  sqcRYGate(q, 0.04508965213887083, 4);
  sqcRZGate(q, -0.5845554303953958, 4);
  sqcRYGate(q, 1.5722658899171345, 5);
  sqcRZGate(q, -1.5708232352413283, 5);
  sqcRYGate(q, 3.141447013888344, 6);
  sqcRZGate(q, 1.4043260809958211, 6);
  sqcRYGate(q, 1.5698623847962418, 7);
  sqcRZGate(q, 1.5588859937822972, 7);
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
  sqcRYGate(q, 3.141322077407102, 0);
  sqcRZGate(q, -2.0927451878623495, 0);
  sqcRYGate(q, 1.5695110638542793, 1);
  sqcRZGate(q, -1.906819936045978, 1);
  sqcRYGate(q, 1.5713831367197642, 2);
  sqcRZGate(q, -1.859311485794529, 2);
  sqcRYGate(q, 1.5714218044566246, 3);
  sqcRZGate(q, -1.9049675280986371, 3);
  sqcRYGate(q, 3.140340127704755, 4);
  sqcRZGate(q, -2.45808092284625, 4);
  sqcRYGate(q, 1.5686799552895414, 5);
  sqcRZGate(q, 2.8050939263748425, 5);
  sqcRYGate(q, -0.0005587920373432899, 6);
  sqcRZGate(q, -2.381691149775089, 6);
  sqcRYGate(q, 1.5714682336050445, 7);
  sqcRZGate(q, -1.9050118240562597, 7);

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
