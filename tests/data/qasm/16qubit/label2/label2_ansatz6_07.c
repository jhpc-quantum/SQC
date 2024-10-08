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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.9235388138250755, 0);
  sqcRYGate(q, -1.9943252417832484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2003576468373298, 0);
  sqcRYGate(q, 0.6348297191880885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3352264438961621, 1);
  sqcRYGate(q, 1.4528588959884736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3140529684607245, 1);
  sqcRYGate(q, 1.879155971293662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0816088556823837, 2);
  sqcRYGate(q, -0.7453952360233663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18952604254237837, 2);
  sqcRYGate(q, 1.2180972862410846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2994961382931374, 3);
  sqcRYGate(q, -2.809931551892824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7588224751817307, 3);
  sqcRYGate(q, -3.1413967004631207, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9165654008080496, 4);
  sqcRYGate(q, 1.569735462678715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.573992999683428, 4);
  sqcRYGate(q, -0.13295221875469032, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5810541502067068, 5);
  sqcRYGate(q, 3.041257280565681, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8139280700085649, 5);
  sqcRYGate(q, -0.0016404088907090721, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2818693073806866, 6);
  sqcRYGate(q, 2.853588702653076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6683649154350078, 6);
  sqcRYGate(q, -0.5041331962438383, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9697935397813867, 7);
  sqcRYGate(q, 1.5236987309284213, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.772707574268359, 7);
  sqcRYGate(q, -0.03303451759005022, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5326248699026381, 8);
  sqcRYGate(q, 1.5959944685436722, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9049249640582042, 8);
  sqcRYGate(q, -3.0568005870105455, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.198288141161328, 9);
  sqcRYGate(q, 1.6364920298609547, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5403665199794077, 9);
  sqcRYGate(q, 0.005890053011962796, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0570209983454766, 10);
  sqcRYGate(q, -2.1113265153778604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.20421110389864783, 10);
  sqcRYGate(q, -2.4260142180469058, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.123153323702426, 11);
  sqcRYGate(q, 1.4904102241818977, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.9943751038882085, 11);
  sqcRYGate(q, -3.1405223633885573, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.759337146328555, 12);
  sqcRYGate(q, 2.396961387640898, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.28376194791558, 12);
  sqcRYGate(q, -1.14093718320757, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.05101047694434457, 13);
  sqcRYGate(q, -3.028069306438037, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.121645074924154, 13);
  sqcRYGate(q, 1.5607186063412346, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9972304407351001, 14);
  sqcRYGate(q, 1.5440513958415094, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.07112649917321079, 14);
  sqcRYGate(q, 3.13500925582064, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7421746416783138, 0);
  sqcRYGate(q, 2.2770393730672813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5450947112780353, 0);
  sqcRYGate(q, 2.006686235400764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2454052401769726, 1);
  sqcRYGate(q, 1.6608945787775788, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8140331407339065, 1);
  sqcRYGate(q, 2.7482569214070196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8467170726049646, 2);
  sqcRYGate(q, 3.116388461417642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.000690000150772363, 2);
  sqcRYGate(q, 0.02355752077912626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12242733326476074, 3);
  sqcRYGate(q, -2.37317649538857, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.288949897103604, 3);
  sqcRYGate(q, 0.0022080625315101794, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.36528480538844027, 4);
  sqcRYGate(q, -0.11935472570757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.000248850770070419, 4);
  sqcRYGate(q, 2.287417316653715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.057084713728869, 5);
  sqcRYGate(q, -2.6720887608415467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1984665980329927, 5);
  sqcRYGate(q, 3.0922324470637674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0684718904418373, 6);
  sqcRYGate(q, -2.2072206217113406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.103270361027393, 6);
  sqcRYGate(q, -1.8791621958529876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.949320088235253, 7);
  sqcRYGate(q, 2.45518163932633, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.357023374582399, 7);
  sqcRYGate(q, 3.0011002833041496, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.915498204424055, 8);
  sqcRYGate(q, -2.723788452178378, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0281045165427756, 8);
  sqcRYGate(q, -0.2594930349815048, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.432206377023784, 9);
  sqcRYGate(q, 0.11646597661228983, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.040228868740105554, 9);
  sqcRYGate(q, 3.119354371672194, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4527876484958053, 10);
  sqcRYGate(q, -0.7054201636121296, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.023294872703135, 10);
  sqcRYGate(q, 0.6363924564351238, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0157412699299795, 11);
  sqcRYGate(q, -0.03628589087686951, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9250603303760823, 11);
  sqcRYGate(q, -0.5624367120006148, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.855548878805096, 12);
  sqcRYGate(q, -1.7925215298332713, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0214318054459954, 12);
  sqcRYGate(q, 3.1143250329898846, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5995842698201471, 13);
  sqcRYGate(q, 0.5458743109090906, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1348342719355147, 13);
  sqcRYGate(q, -1.972328736132885, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.4147918383230866, 14);
  sqcRYGate(q, 0.035716876877809334, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.789905508936714, 14);
  sqcRYGate(q, -0.0126314866599232, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4799131267894587, 0);
  sqcRYGate(q, 2.6131890002023033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4890556081208797, 0);
  sqcRYGate(q, 0.9551134888503513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.248616314884912, 1);
  sqcRYGate(q, -2.6309128294198114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6294340717731421, 1);
  sqcRYGate(q, -2.0279915771599377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.317259629304953, 2);
  sqcRYGate(q, -1.1504077737188487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.87077315307355, 2);
  sqcRYGate(q, -0.5799943457533002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3879944919381109, 3);
  sqcRYGate(q, -1.4472753899238016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.33548434709525443, 3);
  sqcRYGate(q, -3.0594824836427015, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4361817848821632, 4);
  sqcRYGate(q, -2.06147746396415, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.00033757931463629376, 4);
  sqcRYGate(q, -0.005827253598149607, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.08701774217122028, 5);
  sqcRYGate(q, -1.9901014505883081, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8924294495767011, 5);
  sqcRYGate(q, -0.02741517414792138, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7674378538042363, 6);
  sqcRYGate(q, -0.4546399643263861, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.134467187740377, 6);
  sqcRYGate(q, 0.1506884879406369, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8421665044623191, 7);
  sqcRYGate(q, -0.20823396906706226, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.075261362349199, 7);
  sqcRYGate(q, -3.0871205434277424, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9155988387244094, 8);
  sqcRYGate(q, -1.7853066892304579, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3938757384623166, 8);
  sqcRYGate(q, -0.6460316982538946, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3206566482483224, 9);
  sqcRYGate(q, 0.2780564329415185, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4303163505037038, 9);
  sqcRYGate(q, -2.3281342690565197, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.54246499908874, 10);
  sqcRYGate(q, -0.5844638458544553, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1098916915717094, 10);
  sqcRYGate(q, -3.1393363543807675, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3312832669219556, 11);
  sqcRYGate(q, -0.12608529589172957, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9230265157794175, 11);
  sqcRYGate(q, -2.8958213760338944, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0377375411832723, 12);
  sqcRYGate(q, 0.4002180095650223, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2635846938842015, 12);
  sqcRYGate(q, -3.098259574189926, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9414216945053493, 13);
  sqcRYGate(q, -2.675998198367685, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.6457818405384798, 13);
  sqcRYGate(q, 0.9221495420309633, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9687316014676022, 14);
  sqcRYGate(q, 0.9440497542334699, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.074173358003254, 14);
  sqcRYGate(q, 0.006524212698152176, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.7642571870382104, 0);
  sqcRYGate(q, -1.1749189422763155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.40934551802599106, 0);
  sqcRYGate(q, -1.529418830658862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1159506344504149, 1);
  sqcRYGate(q, -2.2715296528310445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.620515571683545, 1);
  sqcRYGate(q, -3.063381827055209, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.564923298644616, 2);
  sqcRYGate(q, 2.77169352422749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19318146423009694, 2);
  sqcRYGate(q, 2.303498700679576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.600423179729706, 3);
  sqcRYGate(q, 0.10134484984026138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.45406776616489086, 3);
  sqcRYGate(q, 2.990171543169788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.277971913919516, 4);
  sqcRYGate(q, 1.1394968727021595, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1276910646666702, 4);
  sqcRYGate(q, 3.116849936615743, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.437050958205481, 5);
  sqcRYGate(q, 0.8561612880416272, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0737122779487773, 5);
  sqcRYGate(q, -0.05583829058204692, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8317085849541237, 6);
  sqcRYGate(q, 1.9307285046814129, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4379927349936557, 6);
  sqcRYGate(q, 0.0010126968062502684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6495117589137847, 7);
  sqcRYGate(q, 3.0476149824735947, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.08523259293207895, 7);
  sqcRYGate(q, -0.49410403595022867, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6019000517843573, 8);
  sqcRYGate(q, 0.5999076864304601, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9431638138225544, 8);
  sqcRYGate(q, -0.5489705501543237, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8227715482490312, 9);
  sqcRYGate(q, -0.6886233587574075, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.20212836869890438, 9);
  sqcRYGate(q, 1.948959667772856, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8950687912246815, 10);
  sqcRYGate(q, 2.2064154473105955, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1403807129907095, 10);
  sqcRYGate(q, 0.004114776874438952, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5756778893250931, 11);
  sqcRYGate(q, -2.9274056032777342, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.2758969692220541, 11);
  sqcRYGate(q, -0.8871653339825223, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0126025772746186, 12);
  sqcRYGate(q, -0.32354904335129575, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.3709206686616886, 12);
  sqcRYGate(q, 1.108756134566164, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.21549158877549204, 13);
  sqcRYGate(q, -0.07503373094980414, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8636374805612177, 13);
  sqcRYGate(q, -0.05708250725694607, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4131764170918713, 14);
  sqcRYGate(q, 1.2910283859923624, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1623502025080183, 14);
  sqcRYGate(q, -2.490995120890916, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4640870158323515, 0);
  sqcRYGate(q, -0.6943945258138361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.902203018751547, 0);
  sqcRYGate(q, 1.3024981513382743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6565225930738525, 1);
  sqcRYGate(q, -0.5115413663579815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5328086928896338, 1);
  sqcRYGate(q, -1.1396423675539868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4633881159098066, 2);
  sqcRYGate(q, 0.5220539384250502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.76481605334217, 2);
  sqcRYGate(q, 2.275063465752189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6295633294853884, 3);
  sqcRYGate(q, -1.7417904877397312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9135706321646548, 3);
  sqcRYGate(q, 1.0470651316854935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0856582098485632, 4);
  sqcRYGate(q, 1.9505880137480505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.624676694074571, 4);
  sqcRYGate(q, 3.1274405201585265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2800260488123163, 5);
  sqcRYGate(q, -1.1487738340059037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1616022611355103, 5);
  sqcRYGate(q, 2.759444627162307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8433240433209007, 6);
  sqcRYGate(q, -0.8162632828738623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9225634385692562, 6);
  sqcRYGate(q, 1.403862069536463, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.802502973734328, 7);
  sqcRYGate(q, 2.670523805946079, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.141080464153666, 7);
  sqcRYGate(q, 3.140047725526038, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7477522040553701, 8);
  sqcRYGate(q, 1.3666726624654197, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6108309718937535, 8);
  sqcRYGate(q, -2.6954892936672046, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.211522354815356, 9);
  sqcRYGate(q, -2.9074110817957166, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.924497199792066, 9);
  sqcRYGate(q, -2.6075318987082174, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.05910282984880322, 10);
  sqcRYGate(q, 0.9149976627453027, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.015781632410516555, 10);
  sqcRYGate(q, -3.135587701126971, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5184647428636335, 11);
  sqcRYGate(q, 1.7296969171042873, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.7456325795847625, 11);
  sqcRYGate(q, 0.712726446322016, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.789109043700971, 12);
  sqcRYGate(q, -1.3026404171279282, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1635515575391793, 12);
  sqcRYGate(q, -2.5802921888109864, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3708248016594284, 13);
  sqcRYGate(q, 2.305292980571021, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.10474377289533693, 13);
  sqcRYGate(q, -0.04115825163054154, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7440717775185863, 14);
  sqcRYGate(q, 1.1839981866308507, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.9106853171506253, 14);
  sqcRYGate(q, 1.5856031435377211, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3850092823558775, 0);
  sqcRYGate(q, 1.5152930873048343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7538528468211014, 0);
  sqcRYGate(q, -2.8857965853521295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.641438815631313, 1);
  sqcRYGate(q, 1.2215741459818943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1778123965415535, 1);
  sqcRYGate(q, -2.9700806664613593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.064741949169666, 2);
  sqcRYGate(q, -1.740550944113843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6500534286437611, 2);
  sqcRYGate(q, 3.014452356758645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1918260513792306, 3);
  sqcRYGate(q, 1.470511827951385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1265618130782102, 3);
  sqcRYGate(q, 1.604146061652334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9432102351040066, 4);
  sqcRYGate(q, -1.9894549224511158, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.74071379114787, 4);
  sqcRYGate(q, -3.1394547278503726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.14556785893005664, 5);
  sqcRYGate(q, -2.366538884404657, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.059832906632612655, 5);
  sqcRYGate(q, 3.136582712225139, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6913729552093857, 6);
  sqcRYGate(q, 0.2701807371113505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9643902537327236, 6);
  sqcRYGate(q, 1.411838746492724, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8061590985006868, 7);
  sqcRYGate(q, 1.6711179030814867, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9715434924900217, 7);
  sqcRYGate(q, -0.20450478606650968, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.20480924230518838, 8);
  sqcRYGate(q, 2.704950586391643, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.507874313553871, 8);
  sqcRYGate(q, -2.963718849238773, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.076078336627642, 9);
  sqcRYGate(q, 2.0784578317423255, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.790495215613909, 9);
  sqcRYGate(q, -2.497830941196671, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9408579616592946, 10);
  sqcRYGate(q, 0.22213855972684193, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0004274985215092559, 10);
  sqcRYGate(q, 0.005768654627767227, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6095624007049721, 11);
  sqcRYGate(q, 2.019747894599389, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.5225040776408898, 11);
  sqcRYGate(q, -2.668018831545997, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.2696318981031043, 12);
  sqcRYGate(q, -1.4848133170475484, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3868627997527705, 12);
  sqcRYGate(q, 2.959722936485493, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.179037624791034, 13);
  sqcRYGate(q, 1.311667445007978, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.924832414303508, 13);
  sqcRYGate(q, 0.00698648282857306, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3732587852216361, 14);
  sqcRYGate(q, 0.9546367132361334, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.056646303171845, 14);
  sqcRYGate(q, -2.8091710258882245, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.69732238382855, 0);
  sqcRYGate(q, 0.9124866655295758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14751287849845854, 0);
  sqcRYGate(q, -2.405975827191816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9501597846137764, 1);
  sqcRYGate(q, 2.1462772927345184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9725968454454317, 1);
  sqcRYGate(q, 0.40080191833829737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3480455086512614, 2);
  sqcRYGate(q, 0.8828661817742622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9430821201929039, 2);
  sqcRYGate(q, -3.0438589325244676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.857018095135009, 3);
  sqcRYGate(q, -0.056989800562459614, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.120587320546406, 3);
  sqcRYGate(q, 2.3427426107823996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6618980808466377, 4);
  sqcRYGate(q, -2.8440901362125266, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2547416886905125, 4);
  sqcRYGate(q, 3.1330430144159807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5756348123468165, 5);
  sqcRYGate(q, 0.6550919910167972, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0915955945873814, 5);
  sqcRYGate(q, -2.8569446038153754, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.904854485347804, 6);
  sqcRYGate(q, 1.823521558594879, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1371983949901834, 6);
  sqcRYGate(q, 3.1396218095989883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.831742965284012, 7);
  sqcRYGate(q, 2.6018520516278834, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.631299836484634, 7);
  sqcRYGate(q, 0.112571348094348, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6658522163815346, 8);
  sqcRYGate(q, -2.8025449462414964, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.03341836744564204, 8);
  sqcRYGate(q, -0.06633846329514409, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.141363959320419, 9);
  sqcRYGate(q, 2.0924008670280845, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1360966501806402, 9);
  sqcRYGate(q, 0.4492743289392948, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6578133650252846, 10);
  sqcRYGate(q, -0.9673231667196935, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1207212293257585, 10);
  sqcRYGate(q, -3.135670848484363, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.014976026980946489, 11);
  sqcRYGate(q, 2.2234557293301673, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4442507342735365, 11);
  sqcRYGate(q, 2.2649972526361477, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.1381990024041055, 12);
  sqcRYGate(q, -1.4892810934063752, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8359535264863953, 12);
  sqcRYGate(q, 0.2783436934587211, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7897877045837622, 13);
  sqcRYGate(q, 0.6804172430294021, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.0157351991790655, 13);
  sqcRYGate(q, -3.0708891767918702, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.17632991895348393, 14);
  sqcRYGate(q, 2.4861684365534424, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0526519371944993, 14);
  sqcRYGate(q, -2.2460489531267305, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.12759840828412283, 0);
  sqcRYGate(q, -0.8914850984329225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5361483811233221, 0);
  sqcRYGate(q, 2.325557668501802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8048028251911923, 1);
  sqcRYGate(q, -1.94086991699099, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0003931975236355356, 1);
  sqcRYGate(q, -0.4341807526930017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7687790765725246, 2);
  sqcRYGate(q, 1.674986907260371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4799493324748179, 2);
  sqcRYGate(q, -0.6024594616034006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.757893490938763, 3);
  sqcRYGate(q, -0.08010820367830897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.001436921677478331, 3);
  sqcRYGate(q, 1.0866766271332597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7648434307016403, 4);
  sqcRYGate(q, 2.0079835300502356, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3544971692674994, 4);
  sqcRYGate(q, 3.107347126003739, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8110894765391787, 5);
  sqcRYGate(q, -0.6885854187129499, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.284962302214528, 5);
  sqcRYGate(q, 0.15271794934069227, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.03380655208809914, 6);
  sqcRYGate(q, 1.3275628358734972, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.020216217494046302, 6);
  sqcRYGate(q, 3.0593835197297015, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4552545513006372, 7);
  sqcRYGate(q, 0.4900000642252138, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3990173808662821, 7);
  sqcRYGate(q, -0.2868623391718792, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8253795958577544, 8);
  sqcRYGate(q, 0.5015700274917574, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.12318511328024208, 8);
  sqcRYGate(q, -0.05639002823869176, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5601363876309469, 9);
  sqcRYGate(q, -0.174563788222919, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.10246107624105161, 9);
  sqcRYGate(q, 2.2857373567562624, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7724514502342874, 10);
  sqcRYGate(q, 3.132290855000686, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.023864037502491445, 10);
  sqcRYGate(q, -3.056466677296428, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.647926508866963, 11);
  sqcRYGate(q, -1.7451262395893994, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.7151225043231397, 11);
  sqcRYGate(q, -0.13422563082208328, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.2739922116662856, 12);
  sqcRYGate(q, 1.450420170127659, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.826660068194277, 12);
  sqcRYGate(q, 2.7375389492208413, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2553326876495474, 13);
  sqcRYGate(q, -1.2878072569062171, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.8815872897698407, 13);
  sqcRYGate(q, -2.974513616873234, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.878469478330322, 14);
  sqcRYGate(q, -2.529589798669822, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2749512792854873, 14);
  sqcRYGate(q, -1.992953950929139, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5710571719494766, 0);
  sqcRYGate(q, 2.1991225033762642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5498511518921108, 0);
  sqcRYGate(q, 2.6027143809316624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.787281554840235, 1);
  sqcRYGate(q, -0.9223082090695194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10681592359731075, 1);
  sqcRYGate(q, 0.18118403587556475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3652704483627103, 2);
  sqcRYGate(q, -2.4498444242761503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0441274128078044, 2);
  sqcRYGate(q, 1.2036558289347126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4894650897090056, 3);
  sqcRYGate(q, -1.5410186225959024, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.30488140315043477, 3);
  sqcRYGate(q, 2.302819600791172, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7272659429646482, 4);
  sqcRYGate(q, 2.8639498819473603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0242364016205436, 4);
  sqcRYGate(q, 3.0902604920244916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.818858335411199, 5);
  sqcRYGate(q, 0.26582197070447466, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0039259486733884685, 5);
  sqcRYGate(q, -3.072980046583959, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9808593292774805, 6);
  sqcRYGate(q, 0.9511304797713224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.305061703452091, 6);
  sqcRYGate(q, 1.8889816655619365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6571960311017953, 7);
  sqcRYGate(q, -2.1923138431460307, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0065692513225004134, 7);
  sqcRYGate(q, -3.121433313564033, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.49940105714985794, 8);
  sqcRYGate(q, -2.514455575941629, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8337865834539837, 8);
  sqcRYGate(q, -2.275709621672103, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5450355942899109, 9);
  sqcRYGate(q, 1.45169798700519, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3322497065966052, 9);
  sqcRYGate(q, -0.09533424188894123, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7025981679774835, 10);
  sqcRYGate(q, -1.1689042914954142, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1004693084835075, 10);
  sqcRYGate(q, 1.132332549875545, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9164763231877437, 11);
  sqcRYGate(q, -1.2629463758831543, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.6815106012371155, 11);
  sqcRYGate(q, -0.023327008111484915, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.528822005013031, 12);
  sqcRYGate(q, -1.834057320463744, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6445880366174594, 12);
  sqcRYGate(q, 0.872370531403929, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.1501024330257934, 13);
  sqcRYGate(q, 3.1226717828818362, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.8217628592967214, 13);
  sqcRYGate(q, -0.036572109398471546, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6501898362506298, 14);
  sqcRYGate(q, -0.059651258726149514, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.658768999646239, 14);
  sqcRYGate(q, 0.6799664656308232, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0239397329513489, 0);
  sqcRYGate(q, -2.3351209646659017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.207632051979236, 0);
  sqcRYGate(q, -2.334063017355953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0782389630748224, 1);
  sqcRYGate(q, -1.6293723980751726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.021930160158604026, 1);
  sqcRYGate(q, -3.048039547570656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.604902128731464, 2);
  sqcRYGate(q, -2.655202102660251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.003253256185764445, 2);
  sqcRYGate(q, 0.7823964377891269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.884287079077989, 3);
  sqcRYGate(q, 2.574118528621623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3152300323066232, 3);
  sqcRYGate(q, 1.8993244663438613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5513335098184515, 4);
  sqcRYGate(q, 3.0646083345892476, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9637518544420436, 4);
  sqcRYGate(q, 1.369378444255354, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9783776498660242, 5);
  sqcRYGate(q, 0.3960981665354204, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.064263169873953, 5);
  sqcRYGate(q, 3.0820172925471208, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0011985923279605, 6);
  sqcRYGate(q, 0.8294996158957931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8380869665804263, 6);
  sqcRYGate(q, 1.5217369821265123, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.96696646116079, 7);
  sqcRYGate(q, 1.869430292751769, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.048341635212104, 7);
  sqcRYGate(q, -3.095448185646641, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5287748767540348, 8);
  sqcRYGate(q, -1.9379932221923566, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0349490666943844, 8);
  sqcRYGate(q, -1.4842992847066263, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1891080942810779, 9);
  sqcRYGate(q, 0.8911414793920516, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.07500091874719235, 9);
  sqcRYGate(q, -0.059397627083524654, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4289656499906322, 10);
  sqcRYGate(q, -1.0354425855689746, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.407564845320974, 10);
  sqcRYGate(q, -1.578594566895652, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5878857461397042, 11);
  sqcRYGate(q, 2.370398386101401, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.097401403899398, 11);
  sqcRYGate(q, 3.0801718170353873, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8194608301426662, 12);
  sqcRYGate(q, -2.0254161978254883, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7370557454365835, 12);
  sqcRYGate(q, -1.861449369438422, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2107181943580487, 13);
  sqcRYGate(q, 1.2670081255846517, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.040582226245532, 13);
  sqcRYGate(q, 3.1171954781491245, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.3285552623867167, 14);
  sqcRYGate(q, -1.5954849228344212, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.346182133845421, 14);
  sqcRYGate(q, -3.0231253778348695, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3233544403651178, 0);
  sqcRYGate(q, -0.6159303632010539, 1);
  sqcRYGate(q, 1.260245102707467, 2);
  sqcRYGate(q, -1.9136585577767562, 3);
  sqcRYGate(q, 0.06045806611896155, 4);
  sqcRYGate(q, 2.473116058614506, 5);
  sqcRYGate(q, 2.054058822495022, 6);
  sqcRYGate(q, 0.9364181188784528, 7);
  sqcRYGate(q, -1.9760650732168008, 8);
  sqcRYGate(q, 0.4854652954184724, 9);
  sqcRYGate(q, -2.3527693736293047, 10);
  sqcRYGate(q, 2.6053588446735163, 11);
  sqcRYGate(q, -0.12084656969433927, 12);
  sqcRYGate(q, 2.7271814443576385, 13);
  sqcRYGate(q, 0.7250028537903823, 14);
  sqcRYGate(q, -1.0947120811361284, 15);

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
