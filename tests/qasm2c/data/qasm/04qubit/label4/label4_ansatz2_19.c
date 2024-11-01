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

  sqcRYGate(q, 2.438065119870516, 0);
  sqcRZGate(q, 1.129902382432034, 0);
  sqcRYGate(q, 2.3719175335159943, 1);
  sqcRZGate(q, -1.945076417606911, 1);
  sqcRYGate(q, 2.3728162975660885, 2);
  sqcRZGate(q, 2.787980055633914, 2);
  sqcRYGate(q, -0.9425652511810868, 3);
  sqcRZGate(q, -0.6216943526079574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.29411771694028027, 0);
  sqcRZGate(q, -2.8366801732290057, 0);
  sqcRYGate(q, 0.44695259803106424, 1);
  sqcRZGate(q, 2.9904118380969353, 1);
  sqcRYGate(q, 0.7315115709460785, 2);
  sqcRZGate(q, -0.8063718133253216, 2);
  sqcRYGate(q, 0.7426968110281901, 3);
  sqcRZGate(q, 1.1238931845035647, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.588649027936615, 0);
  sqcRZGate(q, 0.3612459168088238, 0);
  sqcRYGate(q, -1.9158799822768973, 1);
  sqcRZGate(q, 1.1156849995952967, 1);
  sqcRYGate(q, -0.4036774983122032, 2);
  sqcRZGate(q, -1.819698195988697, 2);
  sqcRYGate(q, 3.1230999261288135, 3);
  sqcRZGate(q, -1.881128810122801, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2500268096582943, 0);
  sqcRZGate(q, -0.38229091710102736, 0);
  sqcRYGate(q, -2.947802334647024, 1);
  sqcRZGate(q, 3.1183371257496524, 1);
  sqcRYGate(q, 0.5495395976754792, 2);
  sqcRZGate(q, 2.5954272041881103, 2);
  sqcRYGate(q, 1.8820861590108435, 3);
  sqcRZGate(q, 0.7009531719646022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.77283937807031, 0);
  sqcRZGate(q, 1.88021958056894, 0);
  sqcRYGate(q, -2.301836283769645, 1);
  sqcRZGate(q, -2.8171959458619256, 1);
  sqcRYGate(q, -2.677893581448029, 2);
  sqcRZGate(q, -0.24048226043197296, 2);
  sqcRYGate(q, 2.759311407681914, 3);
  sqcRZGate(q, -0.21161056369092787, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5639053379270068, 0);
  sqcRZGate(q, -0.09418807272406403, 0);
  sqcRYGate(q, 0.9950981987613456, 1);
  sqcRZGate(q, -0.916143921388655, 1);
  sqcRYGate(q, 2.200262916073358, 2);
  sqcRZGate(q, 2.6719824565419987, 2);
  sqcRYGate(q, 1.9523716694055775, 3);
  sqcRZGate(q, -1.8988896306506415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.2883104771687304, 0);
  sqcRZGate(q, 0.9871560247266205, 0);
  sqcRYGate(q, -2.061539106949578, 1);
  sqcRZGate(q, -2.612694336462473, 1);
  sqcRYGate(q, 0.2564462505742432, 2);
  sqcRZGate(q, -0.5200717011347696, 2);
  sqcRYGate(q, -0.2866984702515207, 3);
  sqcRZGate(q, -2.3942608766961944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.012029842380527, 0);
  sqcRZGate(q, 0.424031788356574, 0);
  sqcRYGate(q, 0.05674771578595851, 1);
  sqcRZGate(q, -1.6369323976066399, 1);
  sqcRYGate(q, -3.0959317872942247, 2);
  sqcRZGate(q, -1.2782602498154123, 2);
  sqcRYGate(q, 2.6500078901358686, 3);
  sqcRZGate(q, 1.3742030345495435, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7773974545876865, 0);
  sqcRZGate(q, 0.11238658754309316, 0);
  sqcRYGate(q, 1.949079124787422, 1);
  sqcRZGate(q, -1.5878350449763132, 1);
  sqcRYGate(q, -0.33933954931358645, 2);
  sqcRZGate(q, -1.6444910248058706, 2);
  sqcRYGate(q, 0.604169251660725, 3);
  sqcRZGate(q, 2.272975335145354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0094758871280978, 0);
  sqcRZGate(q, 0.7956081272557222, 0);
  sqcRYGate(q, -2.547165776647171, 1);
  sqcRZGate(q, 2.357720076578803, 1);
  sqcRYGate(q, 0.7441765427764953, 2);
  sqcRZGate(q, -2.473123310681318, 2);
  sqcRYGate(q, 2.514756821925311, 3);
  sqcRZGate(q, 1.8720563725889026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.4972751678453049, 0);
  sqcRZGate(q, 2.276171946459676, 0);
  sqcRYGate(q, 3.1297614582416573, 1);
  sqcRZGate(q, -0.17670957463853795, 1);
  sqcRYGate(q, -1.457994546429127, 2);
  sqcRZGate(q, -1.6981562704235122, 2);
  sqcRYGate(q, 1.003658260255938, 3);
  sqcRZGate(q, -1.9535914417068796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.016886043350974766, 0);
  sqcRZGate(q, -1.3663262835605403, 0);
  sqcRYGate(q, -0.35572488080876824, 1);
  sqcRZGate(q, -1.8850939897729282, 1);
  sqcRYGate(q, -0.23847757162012273, 2);
  sqcRZGate(q, -1.4619946792569367, 2);
  sqcRYGate(q, 0.23606288890065666, 3);
  sqcRZGate(q, -0.9627307434298498, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9476576430995193, 0);
  sqcRZGate(q, 3.0720240083282393, 0);
  sqcRYGate(q, 2.47939414118622, 1);
  sqcRZGate(q, 1.7208314217397607, 1);
  sqcRYGate(q, -0.34002907770414037, 2);
  sqcRZGate(q, -0.17805761574529558, 2);
  sqcRYGate(q, -2.3611643812247065, 3);
  sqcRZGate(q, 1.501899638316082, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5063681578237003, 0);
  sqcRZGate(q, -2.0772516681558715, 0);
  sqcRYGate(q, -1.0643839317984032, 1);
  sqcRZGate(q, 0.2745916263022776, 1);
  sqcRYGate(q, -2.5496659249764777, 2);
  sqcRZGate(q, 2.1737285555108556, 2);
  sqcRYGate(q, -2.0737174497704642, 3);
  sqcRZGate(q, -1.5784671484897537, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.4050161965109722, 0);
  sqcRZGate(q, 2.7235272312972008, 0);
  sqcRYGate(q, -0.4791961623604353, 1);
  sqcRZGate(q, -1.8301585048323508, 1);
  sqcRYGate(q, 2.2545522193384193, 2);
  sqcRZGate(q, 0.6578307045243622, 2);
  sqcRYGate(q, 1.2913250022264282, 3);
  sqcRZGate(q, 2.0967859300431364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2148946933025933, 0);
  sqcRZGate(q, -1.1519872850744501, 0);
  sqcRYGate(q, -2.844053556181586, 1);
  sqcRZGate(q, 0.5642373558201822, 1);
  sqcRYGate(q, -0.08985619518208607, 2);
  sqcRZGate(q, -2.881019347365691, 2);
  sqcRYGate(q, -1.8877402198774345, 3);
  sqcRZGate(q, -0.6117497239861408, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.30711982943398297, 0);
  sqcRZGate(q, 2.8720823729663483, 0);
  sqcRYGate(q, 1.8500780648481596, 1);
  sqcRZGate(q, -0.7260253858420027, 1);
  sqcRYGate(q, 1.8417167275885458, 2);
  sqcRZGate(q, -1.0063326483652784, 2);
  sqcRYGate(q, 3.0755040548386825, 3);
  sqcRZGate(q, 1.1920223005235373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.22306867012897552, 0);
  sqcRZGate(q, -2.770932565974459, 0);
  sqcRYGate(q, -1.7884048037233937, 1);
  sqcRZGate(q, 2.639258830583652, 1);
  sqcRYGate(q, 1.7762521237144564, 2);
  sqcRZGate(q, -1.8799659092507826, 2);
  sqcRYGate(q, -2.3391086763403144, 3);
  sqcRZGate(q, -1.2851347123463635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.735303817907192, 0);
  sqcRZGate(q, -2.9863704624089515, 0);
  sqcRYGate(q, 1.7508193639062457, 1);
  sqcRZGate(q, 1.4327513249391748, 1);
  sqcRYGate(q, -1.7947008130685638, 2);
  sqcRZGate(q, -2.8882408377342523, 2);
  sqcRYGate(q, 0.02173544579592157, 3);
  sqcRZGate(q, 2.061510045055606, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3526551260541728, 0);
  sqcRZGate(q, 0.041547816320739166, 0);
  sqcRYGate(q, -1.0271466821016266, 1);
  sqcRZGate(q, -2.7066460245121613, 1);
  sqcRYGate(q, 1.6932384108252625, 2);
  sqcRZGate(q, -0.28924816010285215, 2);
  sqcRYGate(q, -1.3726314622470308, 3);
  sqcRZGate(q, -0.3917119179006665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9712655197278024, 0);
  sqcRZGate(q, 2.0950423955034143, 0);
  sqcRYGate(q, 1.3355331758248532, 1);
  sqcRZGate(q, 2.615546631548806, 1);
  sqcRYGate(q, 2.3578532215735293, 2);
  sqcRZGate(q, 1.1818845924676147, 2);
  sqcRYGate(q, 2.5856817974091606, 3);
  sqcRZGate(q, -0.9932417980391928, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4757796896104556, 0);
  sqcRZGate(q, -1.426348486013148, 0);
  sqcRYGate(q, 0.590098090938687, 1);
  sqcRZGate(q, -1.350514265323497, 1);
  sqcRYGate(q, -1.1536378054975067, 2);
  sqcRZGate(q, 2.990821146512164, 2);
  sqcRYGate(q, -2.0893912438985773, 3);
  sqcRZGate(q, -1.354685945094741, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.2784987267835628, 0);
  sqcRZGate(q, 1.6688342583585245, 0);
  sqcRYGate(q, 0.9588006270328346, 1);
  sqcRZGate(q, 2.2921507147552367, 1);
  sqcRYGate(q, -0.6207178000145825, 2);
  sqcRZGate(q, 1.1876558708548741, 2);
  sqcRYGate(q, 0.8108948309947105, 3);
  sqcRZGate(q, 1.7595859608694033, 3);

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
