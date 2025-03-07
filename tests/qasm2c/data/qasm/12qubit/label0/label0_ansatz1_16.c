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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.496191201682226, 0);
  sqcRZGate(q, 2.139349815213567, 0);
  sqcRYGate(q, 3.1032358334219126, 1);
  sqcRZGate(q, -3.008597004936967, 1);
  sqcRYGate(q, -3.140638480261895, 2);
  sqcRZGate(q, 1.3345159221433116, 2);
  sqcRYGate(q, -2.0160714020388597, 3);
  sqcRZGate(q, -0.6659303818002301, 3);
  sqcRYGate(q, 0.5941035331179407, 4);
  sqcRZGate(q, 0.5339864575148967, 4);
  sqcRYGate(q, 6.965824096205608e-06, 5);
  sqcRZGate(q, 0.7547271975510416, 5);
  sqcRYGate(q, 3.1227462977891287, 6);
  sqcRZGate(q, 0.019480547728907286, 6);
  sqcRYGate(q, 2.364377394835547, 7);
  sqcRZGate(q, 1.6470077943905899, 7);
  sqcRYGate(q, -2.9103977598902153, 8);
  sqcRZGate(q, 2.209857296096788, 8);
  sqcRYGate(q, 3.0985331575984922, 9);
  sqcRZGate(q, -0.6234639985831714, 9);
  sqcRYGate(q, 3.0654066127652966, 10);
  sqcRZGate(q, 2.9318946528420176, 10);
  sqcRYGate(q, -0.8285159097195383, 11);
  sqcRZGate(q, -2.0440660984177086, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.723519897001207, 0);
  sqcRZGate(q, 1.965290629337449, 0);
  sqcRYGate(q, -0.4068023194676181, 1);
  sqcRZGate(q, 1.4777146287085214, 1);
  sqcRYGate(q, -3.1412645463044546, 2);
  sqcRZGate(q, 0.5773301812051307, 2);
  sqcRYGate(q, 1.177213899629634, 3);
  sqcRZGate(q, -2.705158341846704, 3);
  sqcRYGate(q, 2.790014870924667, 4);
  sqcRZGate(q, 1.547009607338084, 4);
  sqcRYGate(q, 3.1396301240464517, 5);
  sqcRZGate(q, 2.567286207510387, 5);
  sqcRYGate(q, -0.7554932446965952, 6);
  sqcRZGate(q, 1.858464410431325, 6);
  sqcRYGate(q, 0.10511333479413543, 7);
  sqcRZGate(q, -2.0406062586456786, 7);
  sqcRYGate(q, 1.446416055678684, 8);
  sqcRZGate(q, 2.9489105986085757, 8);
  sqcRYGate(q, 0.5405763037718281, 9);
  sqcRZGate(q, -1.8884901784332924, 9);
  sqcRYGate(q, -2.7550531583421765, 10);
  sqcRZGate(q, 1.1663596510988015, 10);
  sqcRYGate(q, -1.997295301837549, 11);
  sqcRZGate(q, -0.681290490719152, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.3075278152036502, 0);
  sqcRZGate(q, -2.5406433640004438, 0);
  sqcRYGate(q, -1.9944494535769497, 1);
  sqcRZGate(q, 1.7073450921072792, 1);
  sqcRYGate(q, 0.9860925977761523, 2);
  sqcRZGate(q, -2.6466415982569123, 2);
  sqcRYGate(q, 0.45947623270728943, 3);
  sqcRZGate(q, -0.4908687966354836, 3);
  sqcRYGate(q, 0.16453851373801953, 4);
  sqcRZGate(q, 2.187289456722578, 4);
  sqcRYGate(q, -0.0014023764021424158, 5);
  sqcRZGate(q, 2.108151158582435, 5);
  sqcRYGate(q, 1.1445997823422307, 6);
  sqcRZGate(q, -0.946090000551676, 6);
  sqcRYGate(q, 0.8143887811924417, 7);
  sqcRZGate(q, 0.15753201179658302, 7);
  sqcRYGate(q, 1.7541002090802156, 8);
  sqcRZGate(q, -0.012502016572881906, 8);
  sqcRYGate(q, 0.00017208234087195964, 9);
  sqcRZGate(q, 0.1599362846292993, 9);
  sqcRYGate(q, 2.609189469699315, 10);
  sqcRZGate(q, 1.44677248048342, 10);
  sqcRYGate(q, 3.009173608392223, 11);
  sqcRZGate(q, -2.5064161608718867, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7411035437334306, 0);
  sqcRZGate(q, 2.2442826022188935, 0);
  sqcRYGate(q, -1.4583605777535242, 1);
  sqcRZGate(q, -0.06405178646818932, 1);
  sqcRYGate(q, 3.140629397275635, 2);
  sqcRZGate(q, -1.748979292472998, 2);
  sqcRYGate(q, -0.12205376589502087, 3);
  sqcRZGate(q, 3.1233764303439933, 3);
  sqcRYGate(q, -1.0449980835180142, 4);
  sqcRZGate(q, 2.7625759348040764, 4);
  sqcRYGate(q, 0.9699205840460404, 5);
  sqcRZGate(q, 2.365906576997, 5);
  sqcRYGate(q, -0.30921650961484937, 6);
  sqcRZGate(q, -0.45293168749729956, 6);
  sqcRYGate(q, -0.07487785308312238, 7);
  sqcRZGate(q, -0.20516468936224208, 7);
  sqcRYGate(q, -0.7781557286997689, 8);
  sqcRZGate(q, -0.35580148058213046, 8);
  sqcRYGate(q, -3.1407850973912956, 9);
  sqcRZGate(q, 1.4049649001258677, 9);
  sqcRYGate(q, -2.7079449192592757, 10);
  sqcRZGate(q, -1.1954609182070648, 10);
  sqcRYGate(q, 2.349202744019243, 11);
  sqcRZGate(q, 0.709774991123633, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.892377751506657, 0);
  sqcRZGate(q, -0.08239759714475241, 0);
  sqcRYGate(q, -0.7436779122003054, 1);
  sqcRZGate(q, -0.6363627165820401, 1);
  sqcRYGate(q, -3.135629779914416, 2);
  sqcRZGate(q, -0.05770972909243821, 2);
  sqcRYGate(q, 2.2392854311214174, 3);
  sqcRZGate(q, 1.9720236978403938, 3);
  sqcRYGate(q, 3.1268136053430795, 4);
  sqcRZGate(q, 0.903015200572676, 4);
  sqcRYGate(q, 3.1235362307276975, 5);
  sqcRZGate(q, 2.0729202823461614, 5);
  sqcRYGate(q, -0.03559535343280107, 6);
  sqcRZGate(q, -1.8465473182108543, 6);
  sqcRYGate(q, -0.9714311393705938, 7);
  sqcRZGate(q, 2.200101447314187, 7);
  sqcRYGate(q, -0.30835050831825406, 8);
  sqcRZGate(q, -1.8370528999250468, 8);
  sqcRYGate(q, 3.1360406057177603, 9);
  sqcRZGate(q, -0.675941080262412, 9);
  sqcRYGate(q, 2.080904475725748, 10);
  sqcRZGate(q, 0.7645261225430994, 10);
  sqcRYGate(q, 1.063370893267793, 11);
  sqcRZGate(q, -2.9781738671022038, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.3553370504112627, 0);
  sqcRZGate(q, 0.2848007995671429, 0);
  sqcRYGate(q, -2.583715586801343, 1);
  sqcRZGate(q, 0.7443331377525312, 1);
  sqcRYGate(q, -3.135656232507263, 2);
  sqcRZGate(q, 0.6674928597255372, 2);
  sqcRYGate(q, 2.8914994176877773, 3);
  sqcRZGate(q, 2.7989106833566324, 3);
  sqcRYGate(q, -2.7479077209838256, 4);
  sqcRZGate(q, 1.0074571297199988, 4);
  sqcRYGate(q, 2.2136066290159526, 5);
  sqcRZGate(q, -0.8445593873003733, 5);
  sqcRYGate(q, -2.821033170709091, 6);
  sqcRZGate(q, 2.1069199399889005, 6);
  sqcRYGate(q, -1.265084602554856, 7);
  sqcRZGate(q, -0.09413882975942746, 7);
  sqcRYGate(q, -1.2494765363460738, 8);
  sqcRZGate(q, -1.0077399388347, 8);
  sqcRYGate(q, 0.001100120824993524, 9);
  sqcRZGate(q, 0.8063215257417391, 9);
  sqcRYGate(q, -2.9897922716157947, 10);
  sqcRZGate(q, -1.5540687951014838, 10);
  sqcRYGate(q, -0.6676821654191678, 11);
  sqcRZGate(q, 1.7109318427544187, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.635247003532218, 0);
  sqcRZGate(q, -2.705948629877572, 0);
  sqcRYGate(q, -2.9231405210436665, 1);
  sqcRZGate(q, 2.7255507513421318, 1);
  sqcRYGate(q, -0.03698299551072627, 2);
  sqcRZGate(q, 1.4596594920609434, 2);
  sqcRYGate(q, 0.3876421271097046, 3);
  sqcRZGate(q, -0.03703088028341562, 3);
  sqcRYGate(q, -3.1381186270947543, 4);
  sqcRZGate(q, 2.6418346728368824, 4);
  sqcRYGate(q, -0.29096785600060837, 5);
  sqcRZGate(q, -0.5469766162509461, 5);
  sqcRYGate(q, 3.141143065775525, 6);
  sqcRZGate(q, 1.2699963993789192, 6);
  sqcRYGate(q, -0.10011548547169635, 7);
  sqcRZGate(q, -2.4395489655751876, 7);
  sqcRYGate(q, 2.242963459139271, 8);
  sqcRZGate(q, -0.5887779770383448, 8);
  sqcRYGate(q, 1.0436297375072983, 9);
  sqcRZGate(q, -2.3042023306142094, 9);
  sqcRYGate(q, 1.214188757309918, 10);
  sqcRZGate(q, 3.089617631059713, 10);
  sqcRYGate(q, 2.7838144391924993, 11);
  sqcRZGate(q, -3.0960708403228607, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3062767755012845, 0);
  sqcRZGate(q, 1.4737161916674915, 0);
  sqcRYGate(q, -2.4314114488399325, 1);
  sqcRZGate(q, -1.8373478842820605, 1);
  sqcRYGate(q, -0.1349095939957392, 2);
  sqcRZGate(q, -2.01211156112843, 2);
  sqcRYGate(q, 0.3498565283271462, 3);
  sqcRZGate(q, -1.4198235584872538, 3);
  sqcRYGate(q, 1.670286311783201, 4);
  sqcRZGate(q, -1.7736767411343681, 4);
  sqcRYGate(q, 0.7242175673760143, 5);
  sqcRZGate(q, 0.7593191448411432, 5);
  sqcRYGate(q, -3.0656330486206658, 6);
  sqcRZGate(q, 2.399374555133995, 6);
  sqcRYGate(q, 2.1837514522245094, 7);
  sqcRZGate(q, -2.848562906668102, 7);
  sqcRYGate(q, 0.23875299074941392, 8);
  sqcRZGate(q, -0.1314890487228162, 8);
  sqcRYGate(q, 3.1400719077490225, 9);
  sqcRZGate(q, -1.5427996856579416, 9);
  sqcRYGate(q, 3.13237863823702, 10);
  sqcRZGate(q, 1.9535531959257684, 10);
  sqcRYGate(q, 1.108803122879341, 11);
  sqcRZGate(q, -1.8680130446678556, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0692230061619816, 0);
  sqcRZGate(q, 3.0639763426891986, 0);
  sqcRYGate(q, -0.14815894030502186, 1);
  sqcRZGate(q, -2.7872090785446284, 1);
  sqcRYGate(q, 0.781423965446888, 2);
  sqcRZGate(q, 0.5770008229137966, 2);
  sqcRYGate(q, -1.9300046569970224, 3);
  sqcRZGate(q, 2.89820718714869, 3);
  sqcRYGate(q, -2.55461316258512, 4);
  sqcRZGate(q, -0.09204628430358396, 4);
  sqcRYGate(q, -2.9985590915135, 5);
  sqcRZGate(q, 1.278684610118754, 5);
  sqcRYGate(q, -0.007366453921086393, 6);
  sqcRZGate(q, -1.6680186109002522, 6);
  sqcRYGate(q, 0.10670598095474235, 7);
  sqcRZGate(q, -1.7556275309732294, 7);
  sqcRYGate(q, 1.4368218337168341, 8);
  sqcRZGate(q, -0.7689460944692447, 8);
  sqcRYGate(q, 1.2773480037844143, 9);
  sqcRZGate(q, -1.160204086432062, 9);
  sqcRYGate(q, -1.1525254598864665, 10);
  sqcRZGate(q, -0.09780047856795304, 10);
  sqcRYGate(q, 0.8675798391886085, 11);
  sqcRZGate(q, 2.3125086656545695, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.554022214371594, 0);
  sqcRZGate(q, -0.9025188275352704, 0);
  sqcRYGate(q, -1.9127451269370725, 1);
  sqcRZGate(q, 1.0482321790807871, 1);
  sqcRYGate(q, -0.009273605636881399, 2);
  sqcRZGate(q, 1.058581973296464, 2);
  sqcRYGate(q, -1.891335709696868, 3);
  sqcRZGate(q, 3.0452157808536024, 3);
  sqcRYGate(q, -0.25277308909804663, 4);
  sqcRZGate(q, -0.36759844795006635, 4);
  sqcRYGate(q, 0.2361980882779323, 5);
  sqcRZGate(q, 0.5079275723291308, 5);
  sqcRYGate(q, 2.4839000455549853, 6);
  sqcRZGate(q, 0.3992149539513395, 6);
  sqcRYGate(q, 2.2520794091998555, 7);
  sqcRZGate(q, 0.4787591859494409, 7);
  sqcRYGate(q, 1.8140796717834649, 8);
  sqcRZGate(q, -2.39782878472635, 8);
  sqcRYGate(q, 1.4928755083759986, 9);
  sqcRZGate(q, -1.9327811865568432, 9);
  sqcRYGate(q, -0.9381067674932034, 10);
  sqcRZGate(q, 0.2713470792560946, 10);
  sqcRYGate(q, 0.5117358044678492, 11);
  sqcRZGate(q, -1.7092561910383912, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.025804455984459906, 0);
  sqcRZGate(q, 1.2275255373889338, 0);
  sqcRYGate(q, 2.380125840345407, 1);
  sqcRZGate(q, 2.8018012262331227, 1);
  sqcRYGate(q, 0.939787168539544, 2);
  sqcRZGate(q, 3.0151849413923757, 2);
  sqcRYGate(q, 1.718393962159538, 3);
  sqcRZGate(q, 0.6468498968004267, 3);
  sqcRYGate(q, -0.0021608928260290483, 4);
  sqcRZGate(q, -0.3467929099185727, 4);
  sqcRYGate(q, -3.116730321999937, 5);
  sqcRZGate(q, -3.077997786012777, 5);
  sqcRYGate(q, -3.0817261387450112, 6);
  sqcRZGate(q, -2.0900673885148717, 6);
  sqcRYGate(q, -0.004098667629510041, 7);
  sqcRZGate(q, 0.86803178256893, 7);
  sqcRYGate(q, 0.033627815606114275, 8);
  sqcRZGate(q, 0.8877213553365264, 8);
  sqcRYGate(q, -2.116322406886984, 9);
  sqcRZGate(q, 0.6142410916503094, 9);
  sqcRYGate(q, -3.1180702650540186, 10);
  sqcRZGate(q, -1.8539689159797836, 10);
  sqcRYGate(q, -0.00213749279465425, 11);
  sqcRZGate(q, -2.634832778741296, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.10213567121584965, 0);
  sqcRZGate(q, -1.7164272810278494, 0);
  sqcRYGate(q, -2.6716405107170873, 1);
  sqcRZGate(q, 0.5666457466997086, 1);
  sqcRYGate(q, -0.9501528341390449, 2);
  sqcRZGate(q, -2.069358804089907, 2);
  sqcRYGate(q, 3.0159342521032166, 3);
  sqcRZGate(q, -0.7004610578244939, 3);
  sqcRYGate(q, 3.061305009448187, 4);
  sqcRZGate(q, -0.829398334915827, 4);
  sqcRYGate(q, -0.899183305117413, 5);
  sqcRZGate(q, 0.5613293753054024, 5);
  sqcRYGate(q, 0.2677814707100997, 6);
  sqcRZGate(q, -0.11983603383715498, 6);
  sqcRYGate(q, 2.409905875439969, 7);
  sqcRZGate(q, -2.747038576026618, 7);
  sqcRYGate(q, 0.7872946709337252, 8);
  sqcRZGate(q, 2.4730307806426626, 8);
  sqcRYGate(q, -1.2949916426231431, 9);
  sqcRZGate(q, -3.0778055473679053, 9);
  sqcRYGate(q, -0.19524662608783525, 10);
  sqcRZGate(q, 3.0232608378007506, 10);
  sqcRYGate(q, -0.9113381492176079, 11);
  sqcRZGate(q, 1.9979052725736357, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.9478727337898869, 0);
  sqcRZGate(q, 2.2570230105839837, 0);
  sqcRYGate(q, -0.5624278909349902, 1);
  sqcRZGate(q, 1.3069814491818557, 1);
  sqcRYGate(q, -1.3322083863280758, 2);
  sqcRZGate(q, 3.0651054589287314, 2);
  sqcRYGate(q, 3.131207169670356, 3);
  sqcRZGate(q, 0.036681924786365436, 3);
  sqcRYGate(q, -1.1829050342737197, 4);
  sqcRZGate(q, 0.012921797413406821, 4);
  sqcRYGate(q, 3.1405616728961316, 5);
  sqcRZGate(q, -2.0524267618295253, 5);
  sqcRYGate(q, 3.1304807480697283, 6);
  sqcRZGate(q, -2.725817314911332, 6);
  sqcRYGate(q, 2.8905814449702807, 7);
  sqcRZGate(q, 0.14022062045249734, 7);
  sqcRYGate(q, -0.08625543720263718, 8);
  sqcRZGate(q, -0.36252362222733414, 8);
  sqcRYGate(q, 2.479657673560996, 9);
  sqcRZGate(q, 3.125064423545024, 9);
  sqcRYGate(q, 2.186909972112273, 10);
  sqcRZGate(q, 0.41955809905117475, 10);
  sqcRYGate(q, -3.1352762827899125, 11);
  sqcRZGate(q, 0.472994139013785, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.14445898300943671, 0);
  sqcRZGate(q, 1.70225402680313, 0);
  sqcRYGate(q, -0.002508519881886606, 1);
  sqcRZGate(q, -2.085902083067895, 1);
  sqcRYGate(q, 0.015819078260130404, 2);
  sqcRZGate(q, 1.0305775888011557, 2);
  sqcRYGate(q, -3.1384684266559084, 3);
  sqcRZGate(q, 0.41506707303157103, 3);
  sqcRYGate(q, 2.4170547868200423, 4);
  sqcRZGate(q, -0.0007545117832092885, 4);
  sqcRYGate(q, -3.135685983021745, 5);
  sqcRZGate(q, -1.3161110930532542, 5);
  sqcRYGate(q, -3.066741538161731, 6);
  sqcRZGate(q, 1.08566767235024, 6);
  sqcRYGate(q, -2.039623722858591, 7);
  sqcRZGate(q, -3.115455561317613, 7);
  sqcRYGate(q, -2.673225405841279, 8);
  sqcRZGate(q, -1.2934888051164573, 8);
  sqcRYGate(q, 1.6940519780948646, 9);
  sqcRZGate(q, 1.9124348824583401, 9);
  sqcRYGate(q, -2.5549892986391063, 10);
  sqcRZGate(q, 1.029628085633762, 10);
  sqcRYGate(q, 0.00813348092683075, 11);
  sqcRZGate(q, -0.5960063683591539, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7852005527516477, 0);
  sqcRZGate(q, -3.1035531892433883, 0);
  sqcRYGate(q, -2.9146516785213827, 1);
  sqcRZGate(q, -1.1928541483682413, 1);
  sqcRYGate(q, -2.028961263425033, 2);
  sqcRZGate(q, -1.1769389232072638, 2);
  sqcRYGate(q, -0.1813985284988613, 3);
  sqcRZGate(q, 3.0555904679366725, 3);
  sqcRYGate(q, 1.17809471626832, 4);
  sqcRZGate(q, -0.7851628903442044, 4);
  sqcRYGate(q, -3.1270358386566257, 5);
  sqcRZGate(q, -0.8133828048742062, 5);
  sqcRYGate(q, 3.1365103095662445, 6);
  sqcRZGate(q, -3.111991829696098, 6);
  sqcRYGate(q, -0.3557000802239989, 7);
  sqcRZGate(q, 0.19971448322254307, 7);
  sqcRYGate(q, 0.0462925585409506, 8);
  sqcRZGate(q, -0.7684353584434509, 8);
  sqcRYGate(q, -2.9965239613995003, 9);
  sqcRZGate(q, -2.365249551484545, 9);
  sqcRYGate(q, 2.390749484310573, 10);
  sqcRZGate(q, -1.4729416444122212, 10);
  sqcRYGate(q, -2.321903356586457, 11);
  sqcRZGate(q, -0.8300297537873567, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.016995331714146, 0);
  sqcRZGate(q, -1.8352539121478664, 0);
  sqcRYGate(q, -0.39102544161652225, 1);
  sqcRZGate(q, 1.6828128284193191, 1);
  sqcRYGate(q, 2.0549762544908337, 2);
  sqcRZGate(q, 2.0943634042616845, 2);
  sqcRYGate(q, -2.0844775330019107, 3);
  sqcRZGate(q, 0.24396327342332216, 3);
  sqcRYGate(q, -0.33562333231834884, 4);
  sqcRZGate(q, 2.8629985911008977, 4);
  sqcRYGate(q, 0.006772201066150869, 5);
  sqcRZGate(q, 1.843096573472744, 5);
  sqcRYGate(q, 0.063807993307341, 6);
  sqcRZGate(q, -1.4729374080399003, 6);
  sqcRYGate(q, 1.2147419330856626, 7);
  sqcRZGate(q, -1.9899544758909435, 7);
  sqcRYGate(q, 0.7895759238853395, 8);
  sqcRZGate(q, -1.0548000111279672, 8);
  sqcRYGate(q, 1.9107247729255237, 9);
  sqcRZGate(q, -0.11354110449282226, 9);
  sqcRYGate(q, 0.006657488291422099, 10);
  sqcRZGate(q, 2.6054033314817855, 10);
  sqcRYGate(q, 3.133149326410034, 11);
  sqcRZGate(q, -1.071515487842827, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.1255312964449526, 0);
  sqcRZGate(q, -2.0415420710701637, 0);
  sqcRYGate(q, 1.016503164480481, 1);
  sqcRZGate(q, -2.878292428387137, 1);
  sqcRYGate(q, -3.0784976750584248, 2);
  sqcRZGate(q, -1.6973875008993167, 2);
  sqcRYGate(q, 3.105932312246481, 3);
  sqcRZGate(q, -0.34488757741096876, 3);
  sqcRYGate(q, -0.0034999017591729226, 4);
  sqcRZGate(q, 0.29192317382454736, 4);
  sqcRYGate(q, 3.123841934635078, 5);
  sqcRZGate(q, -0.6521032026065106, 5);
  sqcRYGate(q, -0.032409027241095345, 6);
  sqcRZGate(q, -0.15554013519193746, 6);
  sqcRYGate(q, -0.11198982281827899, 7);
  sqcRZGate(q, 2.911626442588801, 7);
  sqcRYGate(q, -2.5318259636329383, 8);
  sqcRZGate(q, 0.07948250182444776, 8);
  sqcRYGate(q, -0.12852086650864317, 9);
  sqcRZGate(q, 1.0158603962065067, 9);
  sqcRYGate(q, 0.3298788299134676, 10);
  sqcRZGate(q, -1.9584442347703963, 10);
  sqcRYGate(q, 2.4668651333693488, 11);
  sqcRZGate(q, 2.7593390591467024, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.016588351726278157, 0);
  sqcRZGate(q, -2.111035782555354, 0);
  sqcRYGate(q, 3.094295992350365, 1);
  sqcRZGate(q, -2.2921586334594544, 1);
  sqcRYGate(q, 0.3026089320763035, 2);
  sqcRZGate(q, 1.688493888421859, 2);
  sqcRYGate(q, -0.05298947304676802, 3);
  sqcRZGate(q, -0.671207730815488, 3);
  sqcRYGate(q, -1.3787470361135494, 4);
  sqcRZGate(q, -1.8231425562557615, 4);
  sqcRYGate(q, -2.5433225984077263, 5);
  sqcRZGate(q, 2.6722241163797684, 5);
  sqcRYGate(q, 2.8904737294615845, 6);
  sqcRZGate(q, -0.21839725869722496, 6);
  sqcRYGate(q, -2.479589555938704, 7);
  sqcRZGate(q, 1.4468546141206684, 7);
  sqcRYGate(q, -3.136563273842817, 8);
  sqcRZGate(q, -2.7613278983204603, 8);
  sqcRYGate(q, 0.10000808833368069, 9);
  sqcRZGate(q, -2.702971225658193, 9);
  sqcRYGate(q, -1.6645376638681815, 10);
  sqcRZGate(q, -2.3743335604440903, 10);
  sqcRYGate(q, 1.3500077295642665, 11);
  sqcRZGate(q, 0.9697937495950056, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.8337429802238154, 0);
  sqcRZGate(q, 1.0173344692108808, 0);
  sqcRYGate(q, 2.17722264690572, 1);
  sqcRZGate(q, -1.061919298967445, 1);
  sqcRYGate(q, -3.0639759059910787, 2);
  sqcRZGate(q, 1.982921706195559, 2);
  sqcRYGate(q, 0.006679294227391885, 3);
  sqcRZGate(q, -1.4508628019904455, 3);
  sqcRYGate(q, 3.135874562041948, 4);
  sqcRZGate(q, 1.4335826053482796, 4);
  sqcRYGate(q, 0.01707827116514249, 5);
  sqcRZGate(q, 1.8236578716087049, 5);
  sqcRYGate(q, -0.01733733526249015, 6);
  sqcRZGate(q, -2.9468529769808685, 6);
  sqcRYGate(q, -2.9601447534571466, 7);
  sqcRZGate(q, 0.5929391836626481, 7);
  sqcRYGate(q, -0.373009530172534, 8);
  sqcRZGate(q, -1.5112192716246673, 8);
  sqcRYGate(q, -3.0948473238565555, 9);
  sqcRZGate(q, -2.3332716166254315, 9);
  sqcRYGate(q, -0.018656562717730054, 10);
  sqcRZGate(q, 2.288719195417238, 10);
  sqcRYGate(q, 2.4365564637933286, 11);
  sqcRZGate(q, 0.1962924038220173, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5066445096019656, 0);
  sqcRZGate(q, 0.01564193691672333, 0);
  sqcRYGate(q, -3.0481364475813844, 1);
  sqcRZGate(q, 2.0620504043360146, 1);
  sqcRYGate(q, 1.349701963544228, 2);
  sqcRZGate(q, -0.8933000293421213, 2);
  sqcRYGate(q, 2.232739883265663, 3);
  sqcRZGate(q, -1.0518458652153848, 3);
  sqcRYGate(q, -1.0501798560037825, 4);
  sqcRZGate(q, 1.0240401335035099, 4);
  sqcRYGate(q, 2.990762170284262, 5);
  sqcRZGate(q, -3.1326997931146563, 5);
  sqcRYGate(q, 0.10114269756729666, 6);
  sqcRZGate(q, 1.5449084846813441, 6);
  sqcRYGate(q, -1.0414040241311908, 7);
  sqcRZGate(q, 1.2261140031147881, 7);
  sqcRYGate(q, 2.2518523593201936, 8);
  sqcRZGate(q, 0.2236450744581776, 8);
  sqcRYGate(q, -1.58271071959394, 9);
  sqcRZGate(q, -2.862975865793959, 9);
  sqcRYGate(q, 0.3960553959464095, 10);
  sqcRZGate(q, -1.4802452506588033, 10);
  sqcRYGate(q, 0.23879917532989464, 11);
  sqcRZGate(q, 0.8377484523763075, 11);

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
