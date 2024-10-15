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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.3397024354651939, 0);
  sqcRYGate(q, -1.7011221385533197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.689862817274204, 0);
  sqcRYGate(q, 1.0215356005682223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.388465242628376, 2);
  sqcRYGate(q, 2.8707199419009313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3401294641399497, 2);
  sqcRYGate(q, 1.3914816167040058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.844497591409466, 1);
  sqcRYGate(q, -1.5757733805687197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19957951087799658, 1);
  sqcRYGate(q, -2.033621645276927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.580458851585317, 0);
  sqcRYGate(q, -0.6647889889302405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8732642086530722, 0);
  sqcRYGate(q, -2.659557415117602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6778779389025416, 2);
  sqcRYGate(q, 0.5942304846964035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6573535423319727, 2);
  sqcRYGate(q, 1.838223056618049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.569801859872027, 1);
  sqcRYGate(q, -1.7155370314474836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.596085491736611, 1);
  sqcRYGate(q, 2.21729116351575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.552069478427871, 0);
  sqcRYGate(q, -0.003343846818062879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5775700147246371, 0);
  sqcRYGate(q, 0.018157715240005427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09703344773798082, 2);
  sqcRYGate(q, -2.0348717412280624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7145953213745795, 2);
  sqcRYGate(q, 0.01684331368383596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0198250043171635, 1);
  sqcRYGate(q, -0.10347238650305923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0307256502906847, 1);
  sqcRYGate(q, 0.5661990192772786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3828197922162193, 0);
  sqcRYGate(q, 1.9959125013633185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.34122669394397676, 0);
  sqcRYGate(q, -1.6854192733499067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2355334148102568, 2);
  sqcRYGate(q, -0.520329042974903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6146228192951656, 2);
  sqcRYGate(q, -2.1307433237964624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.274055626490043, 1);
  sqcRYGate(q, 2.7549913167454148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2778384486470373, 1);
  sqcRYGate(q, -1.330543197683821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.875764353191542, 0);
  sqcRYGate(q, -1.7377196956345509, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5869881849561334, 0);
  sqcRYGate(q, 1.6139365847752898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6890026961398128, 2);
  sqcRYGate(q, 1.1544994309134662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7555096559422229, 2);
  sqcRYGate(q, 1.5206562034112396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4278172769545834, 1);
  sqcRYGate(q, -1.9721579371527893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5737001018415557, 1);
  sqcRYGate(q, 0.9552750437421755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2963602845240705, 0);
  sqcRYGate(q, -2.651328099235681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22923129620213561, 0);
  sqcRYGate(q, -0.7137468740225223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1213973522046183, 2);
  sqcRYGate(q, -1.4058831337573645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.365946417586744, 2);
  sqcRYGate(q, 0.022998153969700195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2615362206174312, 1);
  sqcRYGate(q, 0.7867858518256288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9505760192121426, 1);
  sqcRYGate(q, -1.243068351980095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6823939938711137, 0);
  sqcRYGate(q, 2.7138407732992076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.222250774229523, 0);
  sqcRYGate(q, 2.894397909935859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5648029754085375, 2);
  sqcRYGate(q, -2.3369220735906726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8417995940585324, 2);
  sqcRYGate(q, 1.2665299841657918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4832881477218871, 1);
  sqcRYGate(q, 0.7962392618440047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5494242313581529, 1);
  sqcRYGate(q, 1.7648075483140735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1750467979088504, 0);
  sqcRYGate(q, 0.19437497221422217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9704700341940065, 0);
  sqcRYGate(q, -3.0782229877847147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9912022887226266, 2);
  sqcRYGate(q, 1.9481330014328782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7584494548352239, 2);
  sqcRYGate(q, 0.2672841051982429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7588150137752692, 1);
  sqcRYGate(q, 1.7348466472195931, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.579466322425822, 1);
  sqcRYGate(q, -0.3215985384906324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6715854040508056, 0);
  sqcRYGate(q, -0.24620211592551342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0456645976574936, 0);
  sqcRYGate(q, 2.152653972694962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1792656064154405, 2);
  sqcRYGate(q, -1.9858382041569707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5412769155941257, 2);
  sqcRYGate(q, 1.557660586282805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5814723359428733, 1);
  sqcRYGate(q, 1.3659512292973108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.757517241293934, 1);
  sqcRYGate(q, -0.8689500750542877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6667912267237551, 0);
  sqcRYGate(q, -2.6984109443128927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5252329376952238, 0);
  sqcRYGate(q, 0.1693773218745278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.061476339069975294, 2);
  sqcRYGate(q, 1.352313497277442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.801282375457722, 2);
  sqcRYGate(q, -2.141519987460636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4748692311771796, 1);
  sqcRYGate(q, -0.4084033497303543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.324939642611458, 1);
  sqcRYGate(q, 2.007968557674654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.198752517041309, 0);
  sqcRYGate(q, -1.1073636531359865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.12716756679115, 0);
  sqcRYGate(q, 2.4418654233531223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1145716702587327, 2);
  sqcRYGate(q, -2.405500401771924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4569814214814203, 2);
  sqcRYGate(q, 0.4751715308953145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8330170527013103, 1);
  sqcRYGate(q, -2.219510114470924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4461206711828238, 1);
  sqcRYGate(q, 0.7986271403330932, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26878526328664426, 0);
  sqcRYGate(q, 1.020769012154255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3065917657588093, 0);
  sqcRYGate(q, 0.8835272609445557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13029094157184318, 2);
  sqcRYGate(q, 2.9940376069772925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1763120637019986, 2);
  sqcRYGate(q, -0.809794408571805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2774017648158864, 1);
  sqcRYGate(q, 0.22183050229558976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5275099427075478, 1);
  sqcRYGate(q, -2.6052210023489555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6670632908650806, 0);
  sqcRYGate(q, 3.0871148874193493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1682965712107505, 0);
  sqcRYGate(q, 0.6889755587723174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9810435332282568, 2);
  sqcRYGate(q, -2.3683671032237728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.256597064578286, 2);
  sqcRYGate(q, -1.5585022515481208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2955286010781315, 1);
  sqcRYGate(q, 2.673200738662107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17471629768594524, 1);
  sqcRYGate(q, -1.4378557119513637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.012356028983981, 0);
  sqcRYGate(q, -0.7942607926525831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.990880347305636, 0);
  sqcRYGate(q, -2.48408235886441, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.113314551059873, 2);
  sqcRYGate(q, 2.335466534986309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.111815000774547, 2);
  sqcRYGate(q, 0.4551569259351639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0498907470471759, 1);
  sqcRYGate(q, -2.627297816043538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0528318761274607, 1);
  sqcRYGate(q, 0.3562330608614727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9702568279192154, 0);
  sqcRYGate(q, 1.632186180035519, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.49340734418732, 0);
  sqcRYGate(q, -1.7288717914225042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4296469484651673, 2);
  sqcRYGate(q, 2.7959154656826257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5279550193270235, 2);
  sqcRYGate(q, 2.122031434570885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2625147889372998, 1);
  sqcRYGate(q, -1.5052286667296213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.453069186515794, 1);
  sqcRYGate(q, 2.534574233843743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17329225955143546, 0);
  sqcRYGate(q, -0.08699970985652859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0384548984709605, 0);
  sqcRYGate(q, -0.26322870063077364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18402951453913916, 2);
  sqcRYGate(q, 1.2101187303987617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.088474721770666, 2);
  sqcRYGate(q, 2.871447080245874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.239669481768047, 1);
  sqcRYGate(q, -0.575797657854988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9756033463039078, 1);
  sqcRYGate(q, 1.125332324136476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6296066534867946, 0);
  sqcRYGate(q, -0.6543264407769626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3007187789455834, 0);
  sqcRYGate(q, -1.831607293227064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.40305125446514073, 2);
  sqcRYGate(q, 1.1501411823569585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5215936508049972, 2);
  sqcRYGate(q, -0.2835625771366308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4551923519034843, 1);
  sqcRYGate(q, -1.9251482119620045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.023240533346021, 1);
  sqcRYGate(q, -1.3283292537273226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1270029253548284, 0);
  sqcRYGate(q, 1.5484965852273536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5666629737901899, 0);
  sqcRYGate(q, 1.2614243433438324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4709189819227628, 2);
  sqcRYGate(q, -0.796777967150987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4252844606475863, 2);
  sqcRYGate(q, 0.9176878497152776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5594931905381193, 1);
  sqcRYGate(q, -1.274809968284125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8885220888613685, 1);
  sqcRYGate(q, -3.098447166830384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6407051182018035, 0);
  sqcRYGate(q, 0.803169782117567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.765250397800046, 0);
  sqcRYGate(q, -3.0046382038165573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.087526664281192, 2);
  sqcRYGate(q, -2.006122903193897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.761489030614926, 2);
  sqcRYGate(q, -1.1791056950650534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.863520012586809, 1);
  sqcRYGate(q, 3.024599774318839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4706555123097331, 1);
  sqcRYGate(q, -2.6070171124125023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5479286474669305, 0);
  sqcRYGate(q, 1.4823897600255758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.954221764798186, 0);
  sqcRYGate(q, 2.770632133230658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5354325444254826, 2);
  sqcRYGate(q, -2.3639415483163337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.538500226688469, 2);
  sqcRYGate(q, -2.311865669759828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8897425679809166, 1);
  sqcRYGate(q, 0.17980311728121112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4493902943005841, 1);
  sqcRYGate(q, -1.0458740526012704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.101238772394846, 0);
  sqcRYGate(q, 2.555239420241544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.064650505400488, 0);
  sqcRYGate(q, 2.808679638293349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0994456708408586, 2);
  sqcRYGate(q, 1.3080624335685178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.070989009039537, 2);
  sqcRYGate(q, 1.4137081424147806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.36185684904602, 1);
  sqcRYGate(q, 1.24377303623241, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4041059539143508, 1);
  sqcRYGate(q, -1.7744493998804758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0962830452396597, 0);
  sqcRYGate(q, -1.3445889512324154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17723156321990974, 0);
  sqcRYGate(q, -0.47953346841754296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.617873446324941, 2);
  sqcRYGate(q, 1.2467530716523338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4532378500202716, 2);
  sqcRYGate(q, 2.773881560614639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.450697571110233, 1);
  sqcRYGate(q, -0.8211302493609342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0918726232823954, 1);
  sqcRYGate(q, -0.38171639401902924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0856661742650813, 0);
  sqcRYGate(q, -1.1685542049764777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7496453877886308, 0);
  sqcRYGate(q, -0.951268879583357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0548880967676988, 2);
  sqcRYGate(q, -2.6273406505318158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2969060648167146, 2);
  sqcRYGate(q, 1.8152894636893022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9070457818198756, 1);
  sqcRYGate(q, -2.4053074441702793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0746849647986085, 1);
  sqcRYGate(q, 0.07497543099412413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.112347817366382, 0);
  sqcRYGate(q, -0.7340147122289553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1250479784184186, 0);
  sqcRYGate(q, 0.677993365592869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.89816025226275, 2);
  sqcRYGate(q, -2.9171925883746894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1498695109887445, 2);
  sqcRYGate(q, -3.0424358690825017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9873817730292007, 1);
  sqcRYGate(q, -2.0993966830186452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.957356907997366, 1);
  sqcRYGate(q, 0.6109994260731004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9644626678640101, 0);
  sqcRYGate(q, 0.5135220464097251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6037345307031741, 0);
  sqcRYGate(q, -1.916506366696642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8189758892416563, 2);
  sqcRYGate(q, 0.13316235469054227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6119148509002095, 2);
  sqcRYGate(q, 0.8491623626078886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.560151451152692, 1);
  sqcRYGate(q, -0.4001063222530874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2546546563701793, 1);
  sqcRYGate(q, -0.5192279021834061, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9270489306511411, 0);
  sqcRYGate(q, -3.0872224719234445, 1);
  sqcRYGate(q, -2.166395594432176, 2);
  sqcRYGate(q, 2.694687272050957, 3);

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
