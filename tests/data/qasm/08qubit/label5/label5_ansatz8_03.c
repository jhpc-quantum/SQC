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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.6803714709052349, 0);
  sqcRYGate(q, 1.3419040714203136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.618093335504226, 0);
  sqcRYGate(q, -1.0763068641570266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.250266265842863, 2);
  sqcRYGate(q, -0.8632316470237518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3476540941889197, 2);
  sqcRYGate(q, -2.2397895715475835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6110217531273596, 4);
  sqcRYGate(q, -2.9116345211181964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3879323485436756, 4);
  sqcRYGate(q, -0.4706192549917869, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.630449638661224, 6);
  sqcRYGate(q, 0.05059314746967535, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9930698333735375, 6);
  sqcRYGate(q, 3.119476666078188, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.564931442176599, 0);
  sqcRYGate(q, 1.503375391297718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0274242823946427, 0);
  sqcRYGate(q, -1.6616676837659528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9967471912116013, 2);
  sqcRYGate(q, 0.39964636429536904, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.369072243325377, 2);
  sqcRYGate(q, 2.8998719982211347, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1072531846607037, 4);
  sqcRYGate(q, -0.020836235296151206, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4455565587850235, 4);
  sqcRYGate(q, 1.2532301536608037, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.22915288918535792, 1);
  sqcRYGate(q, -0.3171383405856369, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9803042360883367, 1);
  sqcRYGate(q, -1.5892449393610488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.215338349812494, 3);
  sqcRYGate(q, 1.4608481576944312, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.500409071785897, 3);
  sqcRYGate(q, 2.928053372917929, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3977964639598457, 5);
  sqcRYGate(q, -2.14056115957331, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6635823803658016, 5);
  sqcRYGate(q, 1.2445901098054417, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7417378906210685, 0);
  sqcRYGate(q, -1.9856598926266558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1478635210198647, 0);
  sqcRYGate(q, 1.3982328504931205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.426373958477856, 2);
  sqcRYGate(q, -2.357743249000843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8366909866260457, 2);
  sqcRYGate(q, -1.3491459323102701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1444756680247135, 4);
  sqcRYGate(q, -2.563231216218602, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9351553706706124, 4);
  sqcRYGate(q, -0.4761701378522863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3325101011288458, 6);
  sqcRYGate(q, -1.849078764072912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2512698049625113, 6);
  sqcRYGate(q, 0.507331691627555, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8962740061141675, 0);
  sqcRYGate(q, 0.8838910912124733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8144019329395876, 0);
  sqcRYGate(q, -2.146167509976797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2876017871787784, 2);
  sqcRYGate(q, 1.8074824454016234, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.6135644082374023, 2);
  sqcRYGate(q, 3.0520664321234547, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7277533461230843, 4);
  sqcRYGate(q, -2.9827219270190537, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4826441573127214, 4);
  sqcRYGate(q, 0.7189494490928892, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.919155587842241, 1);
  sqcRYGate(q, -0.7208531642384406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.46914272339168317, 1);
  sqcRYGate(q, 1.0931306535574974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0905951537566199, 3);
  sqcRYGate(q, -0.4259815560006137, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8641576820702568, 3);
  sqcRYGate(q, -2.5308311047822243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8203836212529327, 5);
  sqcRYGate(q, 1.3215091820774847, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.21919205369430994, 5);
  sqcRYGate(q, 2.0771870921295656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7524578161793785, 0);
  sqcRYGate(q, -2.5344633616989993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0346082331394213, 0);
  sqcRYGate(q, -0.9587471880226834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1562493771294338, 2);
  sqcRYGate(q, -1.0977237796135022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5497729866966523, 2);
  sqcRYGate(q, 2.1178265647028924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.467781742654334, 4);
  sqcRYGate(q, 1.2309776045199712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.07431481856257509, 4);
  sqcRYGate(q, 2.1795197243168465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.15548565451874952, 6);
  sqcRYGate(q, -2.9919736478235626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.484113027621676, 6);
  sqcRYGate(q, -2.743301200870462, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5414687862592684, 0);
  sqcRYGate(q, -1.3504282775492573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.96106675111522, 0);
  sqcRYGate(q, 2.6289574107811746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.27598914661544094, 2);
  sqcRYGate(q, -2.0811321154971534, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.6380407705187703, 2);
  sqcRYGate(q, 2.4333172672423338, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6127352587230024, 4);
  sqcRYGate(q, -0.2842484221542606, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.36090314572746, 4);
  sqcRYGate(q, 0.4231579999363082, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.28540901853500333, 1);
  sqcRYGate(q, 1.0466023748257918, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14265663436819676, 1);
  sqcRYGate(q, -0.6313352191276875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.31373041714452066, 3);
  sqcRYGate(q, 1.1079815038019414, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5903805165013358, 3);
  sqcRYGate(q, 0.4133269747391246, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.029408040152649, 5);
  sqcRYGate(q, -1.6528026531111006, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5740709035807728, 5);
  sqcRYGate(q, 2.154262913561184, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6810849113659554, 0);
  sqcRYGate(q, -2.39288564243878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18352531862080185, 0);
  sqcRYGate(q, 2.5427103926464945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7875835731950156, 2);
  sqcRYGate(q, -2.7318562608063472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.956389280321414, 2);
  sqcRYGate(q, 0.316571930510886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.870641029781567, 4);
  sqcRYGate(q, -2.9339972954543483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2842104806682961, 4);
  sqcRYGate(q, -2.3703610379014233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6838395146162806, 6);
  sqcRYGate(q, 0.3857200026637937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.086520830255052, 6);
  sqcRYGate(q, 0.7845280649072592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.820495076364306, 0);
  sqcRYGate(q, -1.9849678321980169, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8446111514463848, 0);
  sqcRYGate(q, -1.3682106374479135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0717170949619286, 2);
  sqcRYGate(q, -2.338633850508132, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.05475761048830239, 2);
  sqcRYGate(q, -1.367929089822619, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3953727579879978, 4);
  sqcRYGate(q, -2.7701835918629185, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6699699362988825, 4);
  sqcRYGate(q, 2.9026119831637085, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.109221484850555, 1);
  sqcRYGate(q, -2.644240601176509, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.110420041480504, 1);
  sqcRYGate(q, -0.5511218174874131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2482115459713548, 3);
  sqcRYGate(q, 0.26977079659418896, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4747789004722929, 3);
  sqcRYGate(q, 2.0530425772734455, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0314554356944026, 5);
  sqcRYGate(q, 2.644948229315014, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6375340002986487, 5);
  sqcRYGate(q, -1.3776669602342189, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2745788363145825, 0);
  sqcRYGate(q, 0.5733851974576663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.512906409565662, 0);
  sqcRYGate(q, 2.5705333047977836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4125057898583666, 2);
  sqcRYGate(q, 2.2284699127141567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6682839687780915, 2);
  sqcRYGate(q, -2.558622938721962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9073011894161739, 4);
  sqcRYGate(q, 2.1647235063308066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5308712341638632, 4);
  sqcRYGate(q, -2.3749266458196336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9637367853508527, 6);
  sqcRYGate(q, 0.19902719798361357, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2183953487939028, 6);
  sqcRYGate(q, 1.427076940977182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8894938840759914, 0);
  sqcRYGate(q, -2.0824390260276555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4178027434872718, 0);
  sqcRYGate(q, 2.0982775159201745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.417981874513004, 2);
  sqcRYGate(q, -1.3880674318266681, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.578508654303721, 2);
  sqcRYGate(q, 0.2856650228911982, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.503391626048198, 4);
  sqcRYGate(q, -0.14141847473617683, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.3598679234752469, 4);
  sqcRYGate(q, -1.2768989560173665, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5139399515488674, 1);
  sqcRYGate(q, 2.6397760946855917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.48271345903279, 1);
  sqcRYGate(q, 0.6450325662076032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4404017041781536, 3);
  sqcRYGate(q, -1.5430534087202252, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.466588434667812, 3);
  sqcRYGate(q, -1.8788278788461525, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.135877536424428, 5);
  sqcRYGate(q, 0.9367538606491652, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8405064750081115, 5);
  sqcRYGate(q, 0.6078108707237719, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8420466161262024, 0);
  sqcRYGate(q, -0.916666709649224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.248160244327871, 0);
  sqcRYGate(q, -2.4480486428529127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.007609953564289, 2);
  sqcRYGate(q, -2.425974304121008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5187880817945936, 2);
  sqcRYGate(q, -1.263752026466434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.245943074093514, 4);
  sqcRYGate(q, 0.03227119205385964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.853999849621374, 4);
  sqcRYGate(q, 1.711406865470577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9300219526173983, 6);
  sqcRYGate(q, -0.21909811451257521, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7360373892933981, 6);
  sqcRYGate(q, -2.760321990675721, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.640206703393588, 0);
  sqcRYGate(q, 2.677771380412075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3246736522454519, 0);
  sqcRYGate(q, -1.9877630316100665, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7571431345232602, 2);
  sqcRYGate(q, -0.26756271597292625, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3933926559881, 2);
  sqcRYGate(q, -0.260429557555641, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5216647022058414, 4);
  sqcRYGate(q, 1.3393348230968707, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.451914289582713, 4);
  sqcRYGate(q, 2.262633240205755, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0606270558500548, 1);
  sqcRYGate(q, -0.9811589744842139, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0840045011419193, 1);
  sqcRYGate(q, -0.3783468798541182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2414492716795182, 3);
  sqcRYGate(q, -1.6965207709926649, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.47433168700069667, 3);
  sqcRYGate(q, 2.4390334511617517, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.937636860711112, 5);
  sqcRYGate(q, -1.3098966430378258, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2121941623814854, 5);
  sqcRYGate(q, 2.103532320376437, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.088255302682332, 0);
  sqcRYGate(q, 1.4725969616413517, 1);
  sqcRYGate(q, -3.0686394033292856, 2);
  sqcRYGate(q, 0.7700843301621321, 3);
  sqcRYGate(q, 3.0705226805986117, 4);
  sqcRYGate(q, 1.9688845386097835, 5);
  sqcRYGate(q, 1.8677354978346834, 6);
  sqcRYGate(q, -1.2445046293715591, 7);

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
