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

  sqcRYGate(q, -2.451241827297378, 0);
  sqcRYGate(q, -1.225081443031832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2280935654161997, 0);
  sqcRYGate(q, 2.8844513306761717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7853117818314623, 2);
  sqcRYGate(q, 1.7151775554855444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.636114283312859, 2);
  sqcRYGate(q, 0.8328103446346731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2547083815566324, 0);
  sqcRYGate(q, 0.6217038048923929, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0178886902381685, 0);
  sqcRYGate(q, 0.1573012295841405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4425777095368564, 1);
  sqcRYGate(q, -0.4741087006815752, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49216397610050944, 1);
  sqcRYGate(q, 0.7414727947034313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5352853145049963, 0);
  sqcRYGate(q, 1.3474951743604295, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2140425001040551, 0);
  sqcRYGate(q, 2.120647416923891, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2056726598224599, 1);
  sqcRYGate(q, -0.6684575838400955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3612201848941408, 1);
  sqcRYGate(q, 2.2525588505229175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9522554904461784, 0);
  sqcRYGate(q, -0.17893293587429898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5918737330530933, 0);
  sqcRYGate(q, -2.763924537080694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.055757720913605, 2);
  sqcRYGate(q, 1.2459574927517965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8421294895353117, 2);
  sqcRYGate(q, -0.1893753684899844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3332284573673272, 0);
  sqcRYGate(q, 2.237255814401517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.27070368709275316, 0);
  sqcRYGate(q, 1.512679899324314, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2847751487559913, 1);
  sqcRYGate(q, -3.095463348800913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7174829267794678, 1);
  sqcRYGate(q, -1.3137789937695927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.44965852471552087, 0);
  sqcRYGate(q, -0.2609944377571968, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.508356955043655, 0);
  sqcRYGate(q, -0.31381593026793464, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9559225559155746, 1);
  sqcRYGate(q, -2.9819904736776928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2032510513957515, 1);
  sqcRYGate(q, 2.7599357707730943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7963059573056332, 0);
  sqcRYGate(q, 1.0319966619232765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9613459504608795, 0);
  sqcRYGate(q, 3.0750875355026825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.367408109665976, 2);
  sqcRYGate(q, -2.4374301658048205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3481732750864075, 2);
  sqcRYGate(q, 0.15884864823341732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48877029587133247, 0);
  sqcRYGate(q, 0.545786701670596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.007155815161706, 0);
  sqcRYGate(q, -3.081581063943459, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4331808842197118, 1);
  sqcRYGate(q, 2.387490143582303, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.930004585410134, 1);
  sqcRYGate(q, 2.849687462211028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.014838568055226, 0);
  sqcRYGate(q, 2.389893497785675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4120941394428614, 0);
  sqcRYGate(q, 0.29677970955629907, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.109634368399552, 1);
  sqcRYGate(q, 2.9216077311110897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0354861940405797, 1);
  sqcRYGate(q, -3.0704016619312404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6183255843434416, 0);
  sqcRYGate(q, -2.6355777056732927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2646922406709953, 0);
  sqcRYGate(q, -1.0258506037368198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.409401460883407, 2);
  sqcRYGate(q, -1.7233177479963475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.352673494067114, 2);
  sqcRYGate(q, 1.375621757191634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6835471650955617, 0);
  sqcRYGate(q, 1.2428477357931458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9801074781243284, 0);
  sqcRYGate(q, -3.0938168878732917, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5946637600986184, 1);
  sqcRYGate(q, 0.35573866012711264, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.319099878688125, 1);
  sqcRYGate(q, -1.3671059263005998, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3612127300528805, 0);
  sqcRYGate(q, 1.6077970338848515, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.099523437413507, 0);
  sqcRYGate(q, -0.5845438390452634, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.862682722466673, 1);
  sqcRYGate(q, 2.2039767116556126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.412279433233339, 1);
  sqcRYGate(q, -0.408926056386278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0052930602772374, 0);
  sqcRYGate(q, -2.83777797909063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.127571280220861, 0);
  sqcRYGate(q, -1.199864204121648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38090268507704295, 2);
  sqcRYGate(q, -2.0078628628323227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0345058245998793, 2);
  sqcRYGate(q, -0.5276966475767183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0737080912310752, 0);
  sqcRYGate(q, 0.9918021604285859, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6752739382199477, 0);
  sqcRYGate(q, 0.5726637820257637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9754140233482946, 1);
  sqcRYGate(q, 0.5489915828781688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4356225697312346, 1);
  sqcRYGate(q, -2.114237001211938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5967283532094897, 0);
  sqcRYGate(q, -2.7102662362444536, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.512043971355985, 0);
  sqcRYGate(q, -2.1020906980660365, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7132210916764263, 1);
  sqcRYGate(q, -2.296764079291353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4071234258290204, 1);
  sqcRYGate(q, -0.18310793480781926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5659336392393275, 0);
  sqcRYGate(q, 1.619977187671637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5243592177531005, 0);
  sqcRYGate(q, 1.4608822367448644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3242133908234299, 2);
  sqcRYGate(q, 2.392611832666793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5745767852367294, 2);
  sqcRYGate(q, 1.857554708942961, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5671905219261428, 0);
  sqcRYGate(q, -0.3284013835625972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1312768048658413, 0);
  sqcRYGate(q, 2.6374150836943357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7755630421790336, 1);
  sqcRYGate(q, -0.6727296681872552, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8544017597597472, 1);
  sqcRYGate(q, 0.4822011909498869, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.721479315345021, 0);
  sqcRYGate(q, 2.6336224911017023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8227688070968735, 0);
  sqcRYGate(q, -1.2865457188629361, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.401136707050619, 1);
  sqcRYGate(q, -0.037225945008401096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9376436044511025, 1);
  sqcRYGate(q, -2.0035945844473395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9456202418566773, 0);
  sqcRYGate(q, 1.5783165366829093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0768034166957205, 0);
  sqcRYGate(q, -1.6470203218357504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8316402837135168, 2);
  sqcRYGate(q, 1.9406324104440933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22990685596304938, 2);
  sqcRYGate(q, 0.12597239106985825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2361049500151404, 0);
  sqcRYGate(q, 1.9907198129959225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8921908846992894, 0);
  sqcRYGate(q, 2.316014047946238, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7881707555724553, 1);
  sqcRYGate(q, 1.4343829161894561, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9987820886186913, 1);
  sqcRYGate(q, 1.3259610255379473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9297360068034533, 0);
  sqcRYGate(q, 1.1783223370733158, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5154640426049295, 0);
  sqcRYGate(q, -3.016017660712707, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.56149678291532, 1);
  sqcRYGate(q, 3.082464486454081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.365278135767709, 1);
  sqcRYGate(q, -2.711088361232743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.330072468915558, 0);
  sqcRYGate(q, -2.412854819225152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40337971129951544, 0);
  sqcRYGate(q, 2.9935155566618894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.596337322197094, 2);
  sqcRYGate(q, 1.8640780919052755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6463717149340313, 2);
  sqcRYGate(q, -2.273215235398599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.863020811490748, 0);
  sqcRYGate(q, -2.4129597056203274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6038328151190306, 0);
  sqcRYGate(q, 0.7664965703453666, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3760720346458175, 1);
  sqcRYGate(q, 2.4197223871603875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6804201973277113, 1);
  sqcRYGate(q, 2.920417138590195, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.31557945566897316, 0);
  sqcRYGate(q, 2.4490439337402634, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7710872488782398, 0);
  sqcRYGate(q, -2.0160972026554047, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1152599819636326, 1);
  sqcRYGate(q, 0.08933410687066203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.585991148758543, 1);
  sqcRYGate(q, -0.6297606521369968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3132450280865305, 0);
  sqcRYGate(q, 0.23699799524568643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5967597518964398, 0);
  sqcRYGate(q, 1.1825457562371295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7647855998416819, 2);
  sqcRYGate(q, 2.3617160119968887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1005197616296942, 2);
  sqcRYGate(q, 1.1625471831989584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2759273546303858, 0);
  sqcRYGate(q, 1.5451995612281273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6587732683802959, 0);
  sqcRYGate(q, 1.036275020286493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.792930453129502, 1);
  sqcRYGate(q, 0.5429231141223472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.124600367396736, 1);
  sqcRYGate(q, 2.625590781982029, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7217097963583643, 0);
  sqcRYGate(q, -1.9277272946705724, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.20358064537734621, 0);
  sqcRYGate(q, -2.713571651045199, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.29958304833835037, 1);
  sqcRYGate(q, -2.4574926416902536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4439288160336579, 1);
  sqcRYGate(q, -2.4970064845231805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1544984906471782, 0);
  sqcRYGate(q, -1.9166089578618193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7920263709911226, 0);
  sqcRYGate(q, 0.2707201276252827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.399818809467824, 2);
  sqcRYGate(q, -0.09720575858488896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7568134311301975, 2);
  sqcRYGate(q, -2.0494084068010885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2156617324248504, 0);
  sqcRYGate(q, -1.497816654183998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.590951092546554, 0);
  sqcRYGate(q, 1.9395694794136311, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7069638668211757, 1);
  sqcRYGate(q, 1.1663898234713876, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0952703060243603, 1);
  sqcRYGate(q, -1.7079861105054208, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.812278531003779, 0);
  sqcRYGate(q, 1.9831685927614753, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5095535911337592, 0);
  sqcRYGate(q, 3.121058491814346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.797564611072334, 1);
  sqcRYGate(q, -2.3773407236784907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.936286108714947, 1);
  sqcRYGate(q, 1.608574843996287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3592344066635396, 0);
  sqcRYGate(q, 1.7371855517559098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6030484603299118, 0);
  sqcRYGate(q, -0.8079420541128658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0614423418094825, 2);
  sqcRYGate(q, -1.1022425737984376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1113402744471046, 2);
  sqcRYGate(q, 1.3430617443263326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9751562084202607, 0);
  sqcRYGate(q, -0.8909332824170709, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2937000109911958, 0);
  sqcRYGate(q, -0.2116636804443813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5734460117726283, 1);
  sqcRYGate(q, -2.7793320037353224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14911796406693067, 1);
  sqcRYGate(q, -0.32399404164727785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0157485872290213, 0);
  sqcRYGate(q, -0.7027743436105657, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6614781186815866, 0);
  sqcRYGate(q, 1.378694299819144, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1967686284365913, 1);
  sqcRYGate(q, 0.293472538915327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7842597593737084, 1);
  sqcRYGate(q, 1.536695749730838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9481374748143088, 0);
  sqcRYGate(q, -2.3751038673506897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.05918981385943, 0);
  sqcRYGate(q, 2.503074905110703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04497663602266222, 2);
  sqcRYGate(q, 2.5106331057581266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0692283040895054, 2);
  sqcRYGate(q, -1.3274924590213946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8240726544310184, 0);
  sqcRYGate(q, 1.2457091699772072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6443062630705128, 0);
  sqcRYGate(q, 0.9670303701751353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3446356534127437, 1);
  sqcRYGate(q, 1.7346863282898344, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0486981450342636, 1);
  sqcRYGate(q, -1.2185213930091348, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4923668614715176, 0);
  sqcRYGate(q, -2.084432140502281, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6163131532018382, 0);
  sqcRYGate(q, -0.2558661160488098, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9215526300931165, 1);
  sqcRYGate(q, -3.072406664840678, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0224173176472213, 1);
  sqcRYGate(q, 1.568490724407051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2500130021185458, 0);
  sqcRYGate(q, -0.593089767938384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6016449560092552, 0);
  sqcRYGate(q, -1.9275215110995099, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.374082015254903, 2);
  sqcRYGate(q, 2.028631330671532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6142364261827097, 2);
  sqcRYGate(q, -0.3116249808364771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.221325046150894, 0);
  sqcRYGate(q, 1.217499914655451, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8932685376074163, 0);
  sqcRYGate(q, -2.603447101668875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6635891981480264, 1);
  sqcRYGate(q, 1.4379624137571978, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.995735099896217, 1);
  sqcRYGate(q, -1.0593967215293523, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.48052657690445, 0);
  sqcRYGate(q, -2.9179381763374335, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6546425187290517, 0);
  sqcRYGate(q, -0.4348144463033892, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1632499870919744, 1);
  sqcRYGate(q, 2.0586620239661695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0521939263227118, 1);
  sqcRYGate(q, -1.9587145522324345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05754954762226493, 0);
  sqcRYGate(q, -2.445168621368474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30193751848908307, 0);
  sqcRYGate(q, -1.531039620048002, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9135976792303584, 2);
  sqcRYGate(q, -0.7804292998984961, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.314534123261831, 2);
  sqcRYGate(q, 1.6734235672953153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.67693174117328, 0);
  sqcRYGate(q, 1.3707531710901497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4431189402775999, 0);
  sqcRYGate(q, -0.20968511625818378, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1222137331060456, 1);
  sqcRYGate(q, -2.7994889481960072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5144099678866232, 1);
  sqcRYGate(q, 1.7452890503544296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9537735087068162, 0);
  sqcRYGate(q, 1.1733836446808508, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.306726348931485, 0);
  sqcRYGate(q, -0.7580939243665098, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5437413480750233, 1);
  sqcRYGate(q, -1.9813398133406608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7465436944589036, 1);
  sqcRYGate(q, -1.7587938117031394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1736662823765602, 0);
  sqcRYGate(q, 1.8257013811103096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2326240443303966, 0);
  sqcRYGate(q, 0.9983066145857658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9467536979859648, 2);
  sqcRYGate(q, -0.3124147675194058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.896997760049323, 2);
  sqcRYGate(q, 0.6553386433581272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13200579473346075, 0);
  sqcRYGate(q, 0.4358768149647062, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.52835246844913, 0);
  sqcRYGate(q, 2.5308360049760408, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8511106746472374, 1);
  sqcRYGate(q, -2.730281344752756, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0971077629785766, 1);
  sqcRYGate(q, -2.491734598269345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12216945816387847, 0);
  sqcRYGate(q, -1.0814814838452207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.80031227636354, 0);
  sqcRYGate(q, 0.5369183687713193, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5346433482377322, 1);
  sqcRYGate(q, -1.1355320539614455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36259665286019527, 1);
  sqcRYGate(q, -2.9967520207335387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0122243504930832, 0);
  sqcRYGate(q, -0.21221962353525026, 1);
  sqcRYGate(q, 2.359146454989503, 2);
  sqcRYGate(q, -0.5338553385004879, 3);

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
