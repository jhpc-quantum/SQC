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

  sqcRYGate(q, 1.8395872518037661, 0);
  sqcRZGate(q, -0.013038508988649482, 0);
  sqcRYGate(q, -0.8396933889352294, 1);
  sqcRZGate(q, -0.02570571924220122, 1);
  sqcRYGate(q, 2.801886237190536, 2);
  sqcRZGate(q, 3.1401542320543276, 2);
  sqcRYGate(q, 2.0575878791509963, 3);
  sqcRZGate(q, -0.001499300600901421, 3);
  sqcRYGate(q, 1.5491733655922424, 4);
  sqcRZGate(q, 0.004395212117748115, 4);
  sqcRYGate(q, 1.5706533847958637, 5);
  sqcRZGate(q, -0.46213482944038636, 5);
  sqcRYGate(q, -1.5705799370955356, 6);
  sqcRZGate(q, 0.03911033487686295, 6);
  sqcRYGate(q, -3.137549010504262, 7);
  sqcRZGate(q, -0.03078414648863389, 7);
  sqcRYGate(q, 0.31455862084354713, 8);
  sqcRZGate(q, -1.6610813715802224, 8);
  sqcRYGate(q, -1.673785241688874, 9);
  sqcRZGate(q, -0.0173602763506161, 9);
  sqcRYGate(q, 1.5432018647455967, 10);
  sqcRZGate(q, 1.6338895478521238, 10);
  sqcRYGate(q, 3.086507078947197, 11);
  sqcRZGate(q, 1.1520114199155902, 11);
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
  sqcRYGate(q, -1.8645886304450765, 0);
  sqcRZGate(q, 0.6188477828364121, 0);
  sqcRYGate(q, 1.7199887243428562, 1);
  sqcRZGate(q, -1.5933909777320485, 1);
  sqcRYGate(q, 0.3903434142183295, 2);
  sqcRZGate(q, 3.1041396306495797, 2);
  sqcRYGate(q, -1.269970552213243, 3);
  sqcRZGate(q, 0.004836995483640333, 3);
  sqcRYGate(q, 1.5708780779993832, 4);
  sqcRZGate(q, 3.1208322280397853, 4);
  sqcRYGate(q, 0.9251855064880611, 5);
  sqcRZGate(q, 3.1160415988627315, 5);
  sqcRYGate(q, 1.4936798124794493, 6);
  sqcRZGate(q, -2.0116403819528275, 6);
  sqcRYGate(q, 1.5709124539982293, 7);
  sqcRZGate(q, 3.0862301733977966, 7);
  sqcRYGate(q, 3.1411133949559704, 8);
  sqcRZGate(q, -0.0922489402275663, 8);
  sqcRYGate(q, 1.5695303532407894, 9);
  sqcRZGate(q, 0.8335066975021765, 9);
  sqcRYGate(q, 0.4523908093487937, 10);
  sqcRZGate(q, 3.1076142449579893, 10);
  sqcRYGate(q, 2.600398627528474, 11);
  sqcRZGate(q, 1.3555694882117424, 11);
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
  sqcRYGate(q, 0.6509163139179055, 0);
  sqcRZGate(q, -1.6447089482492379, 0);
  sqcRYGate(q, 1.505118448056437, 1);
  sqcRZGate(q, -2.9183771918850794, 1);
  sqcRYGate(q, 2.814988897392245, 2);
  sqcRZGate(q, -1.5487570389845702, 2);
  sqcRYGate(q, -1.5708579342663256, 3);
  sqcRZGate(q, -1.5561152012354695, 3);
  sqcRYGate(q, 2.7970889266706687, 4);
  sqcRZGate(q, -1.5883930378506452, 4);
  sqcRYGate(q, 2.247189179756663, 5);
  sqcRZGate(q, 1.5549214016976434, 5);
  sqcRYGate(q, -1.568452265488961, 6);
  sqcRZGate(q, 0.5817188354627856, 6);
  sqcRYGate(q, -1.5765582010404138, 7);
  sqcRZGate(q, -1.5472219522052273, 7);
  sqcRYGate(q, -1.5710567431217415, 8);
  sqcRZGate(q, 0.012000918597683706, 8);
  sqcRYGate(q, -0.17097703113668314, 9);
  sqcRZGate(q, -2.397435617010538, 9);
  sqcRYGate(q, -3.0095241838500875, 10);
  sqcRZGate(q, 0.06609580151714098, 10);
  sqcRYGate(q, 2.8752847890732993, 11);
  sqcRZGate(q, 2.0902786205726196, 11);
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
  sqcRYGate(q, 1.5473963126521573, 0);
  sqcRZGate(q, 0.8652351661869715, 0);
  sqcRYGate(q, 1.5905656324337452, 1);
  sqcRZGate(q, 0.09103583784966875, 1);
  sqcRYGate(q, 1.5693943652604663, 2);
  sqcRZGate(q, -1.5462637250330147, 2);
  sqcRYGate(q, -1.57526871997731, 3);
  sqcRZGate(q, 3.0172407971418513, 3);
  sqcRYGate(q, -1.5879612628674156, 4);
  sqcRZGate(q, -0.5855406410742727, 4);
  sqcRYGate(q, 1.573307253625403, 5);
  sqcRZGate(q, 3.140350983865467, 5);
  sqcRYGate(q, 3.1392636442600006, 6);
  sqcRZGate(q, 0.9385628588716406, 6);
  sqcRYGate(q, -2.8891954910391835, 7);
  sqcRZGate(q, -2.7386852831483397, 7);
  sqcRYGate(q, 2.939487517016758, 8);
  sqcRZGate(q, 1.5713165121824375, 8);
  sqcRYGate(q, 1.570759127432594, 9);
  sqcRZGate(q, 1.358142162009321, 9);
  sqcRYGate(q, -0.47566574240680115, 10);
  sqcRZGate(q, -0.5860379528371327, 10);
  sqcRYGate(q, 0.4876702394100948, 11);
  sqcRZGate(q, 2.886908691849264, 11);
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
  sqcRYGate(q, 1.5355564975435518, 0);
  sqcRZGate(q, 1.5893674836790073, 0);
  sqcRYGate(q, -3.134832901843568, 1);
  sqcRZGate(q, 2.710315692533673, 1);
  sqcRYGate(q, 0.23612008732818637, 2);
  sqcRZGate(q, -0.2792735956286543, 2);
  sqcRYGate(q, 0.05360136876469543, 3);
  sqcRZGate(q, -1.797451118612104, 3);
  sqcRYGate(q, -1.5621382812529951, 4);
  sqcRZGate(q, -0.9118864409491326, 4);
  sqcRYGate(q, 2.3215843296635144, 5);
  sqcRZGate(q, -1.6637258235494095, 5);
  sqcRYGate(q, 1.5733163878204586, 6);
  sqcRZGate(q, -1.578525125314962, 6);
  sqcRYGate(q, 0.0012257536030869742, 7);
  sqcRZGate(q, -0.4023163848133908, 7);
  sqcRYGate(q, 1.5725912340101926, 8);
  sqcRZGate(q, -1.6912675371441876, 8);
  sqcRYGate(q, 3.132576677998108, 9);
  sqcRZGate(q, 2.9517296071092627, 9);
  sqcRYGate(q, -0.00011015927129639442, 10);
  sqcRZGate(q, 2.4436955332424266, 10);
  sqcRYGate(q, -1.4998709663651921, 11);
  sqcRZGate(q, -1.250556123774295, 11);
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
  sqcRYGate(q, 1.707089436510808, 0);
  sqcRZGate(q, 3.1403222896965626, 0);
  sqcRYGate(q, -0.35067730779796663, 1);
  sqcRZGate(q, 0.5207088762422443, 1);
  sqcRYGate(q, -3.1363101967888682, 2);
  sqcRZGate(q, -1.8272362803573179, 2);
  sqcRYGate(q, 1.5705993688863582, 3);
  sqcRZGate(q, 1.601038379328724, 3);
  sqcRYGate(q, 2.340060197751935, 4);
  sqcRZGate(q, 2.0961350878103833, 4);
  sqcRYGate(q, -0.14858001132213797, 5);
  sqcRZGate(q, -1.4791570247254902, 5);
  sqcRYGate(q, -1.609813910332016, 6);
  sqcRZGate(q, -3.121188473464091, 6);
  sqcRYGate(q, -2.987719086323101, 7);
  sqcRZGate(q, 0.003519433953864466, 7);
  sqcRYGate(q, -3.1411526472936635, 8);
  sqcRZGate(q, 2.6804254355230124, 8);
  sqcRYGate(q, 1.5708418067932741, 9);
  sqcRZGate(q, 3.0915981393431093, 9);
  sqcRYGate(q, -3.1391397666708327, 10);
  sqcRZGate(q, -1.1634792773410323, 10);
  sqcRYGate(q, -1.4794343052714733, 11);
  sqcRZGate(q, 0.8335816221998726, 11);
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
  sqcRYGate(q, 2.4239676652669355, 0);
  sqcRZGate(q, -1.9476216092480936, 0);
  sqcRYGate(q, -1.5704954997266976, 1);
  sqcRZGate(q, 1.7936164340726277, 1);
  sqcRYGate(q, -1.5616778258104143, 2);
  sqcRZGate(q, -0.5532876735402201, 2);
  sqcRYGate(q, 0.1261493437197716, 3);
  sqcRZGate(q, -1.674157018368678, 3);
  sqcRYGate(q, -3.0543460460315193, 4);
  sqcRZGate(q, -1.7531816200663712, 4);
  sqcRYGate(q, 0.006745376869291043, 5);
  sqcRZGate(q, 3.13828647403935, 5);
  sqcRYGate(q, 0.3619020140624478, 6);
  sqcRZGate(q, -1.588851981354251, 6);
  sqcRYGate(q, -1.5655635555339915, 7);
  sqcRZGate(q, 1.6353662906950595, 7);
  sqcRYGate(q, 3.141549226010317, 8);
  sqcRZGate(q, 2.7978215939357853, 8);
  sqcRYGate(q, 0.009207280971676113, 9);
  sqcRZGate(q, -1.5209512952972482, 9);
  sqcRYGate(q, 1.570837196648628, 10);
  sqcRZGate(q, -0.49123852455216765, 10);
  sqcRYGate(q, 2.1092258435799245, 11);
  sqcRZGate(q, -3.057740500443947, 11);
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
  sqcRYGate(q, 1.581448077767658, 0);
  sqcRZGate(q, 1.7473316984673062, 0);
  sqcRYGate(q, 1.5720527210631543, 1);
  sqcRZGate(q, 1.7933181295509009, 1);
  sqcRYGate(q, 3.116248066009938, 2);
  sqcRZGate(q, 2.60492605668811, 2);
  sqcRYGate(q, 3.1355469616236373, 3);
  sqcRZGate(q, 1.1333336343957345, 3);
  sqcRYGate(q, -0.5123018485102104, 4);
  sqcRZGate(q, 1.5607858751119397, 4);
  sqcRYGate(q, 1.5834844937095829, 5);
  sqcRZGate(q, -0.07159027111151375, 5);
  sqcRYGate(q, 1.5598040815001593, 6);
  sqcRZGate(q, 0.003033204920786791, 6);
  sqcRYGate(q, -1.3661923994488532, 7);
  sqcRZGate(q, -0.9884861141596207, 7);
  sqcRYGate(q, 1.5325843470561658, 8);
  sqcRZGate(q, 1.8757754645062026, 8);
  sqcRYGate(q, 1.5715225999827371, 9);
  sqcRZGate(q, -1.6329720397661653, 9);
  sqcRYGate(q, 1.4805394648084702, 10);
  sqcRZGate(q, -1.5227431006633665, 10);
  sqcRYGate(q, 1.0951540497731895, 11);
  sqcRZGate(q, -3.132763319813947, 11);
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
  sqcRYGate(q, 0.014511536072155273, 0);
  sqcRZGate(q, 0.9475355142222567, 0);
  sqcRYGate(q, -0.020669436492798097, 1);
  sqcRZGate(q, -0.1881636553035317, 1);
  sqcRYGate(q, -0.8982068917334597, 2);
  sqcRZGate(q, -3.068503781520119, 2);
  sqcRYGate(q, 3.0329167721929586, 3);
  sqcRZGate(q, -2.0493650962737027, 3);
  sqcRYGate(q, -0.05890368997612417, 4);
  sqcRZGate(q, 3.09656581363651, 4);
  sqcRYGate(q, 3.131412539178123, 5);
  sqcRZGate(q, 0.06160407418027258, 5);
  sqcRYGate(q, 0.1747290298147829, 6);
  sqcRZGate(q, 0.07744501736508536, 6);
  sqcRYGate(q, -0.0010959031851438539, 7);
  sqcRZGate(q, 0.840228910729816, 7);
  sqcRYGate(q, -3.1412541398440954, 8);
  sqcRZGate(q, -1.2661757394810582, 8);
  sqcRYGate(q, -0.2673705821542427, 9);
  sqcRZGate(q, -2.6325205195581725, 9);
  sqcRYGate(q, -1.5707577625761553, 10);
  sqcRZGate(q, 1.569849732581288, 10);
  sqcRYGate(q, -2.97826226418324, 11);
  sqcRZGate(q, 0.0069664583007593706, 11);
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
  sqcRYGate(q, -3.1323470506915574, 0);
  sqcRZGate(q, -0.779168633420989, 0);
  sqcRYGate(q, -0.34807725289167, 1);
  sqcRZGate(q, 0.7049179342555227, 1);
  sqcRYGate(q, 3.0704909398142615, 2);
  sqcRZGate(q, 0.8120554913230396, 2);
  sqcRYGate(q, 3.1409021799936094, 3);
  sqcRZGate(q, -2.939645719008606, 3);
  sqcRYGate(q, 2.048599016686974, 4);
  sqcRZGate(q, 2.9422614536561333, 4);
  sqcRYGate(q, -1.5734822916948703, 5);
  sqcRZGate(q, -2.8321100213338055, 5);
  sqcRYGate(q, 0.025015228905423292, 6);
  sqcRZGate(q, -0.3492362429599387, 6);
  sqcRYGate(q, -1.3848667190220072, 7);
  sqcRZGate(q, 2.3521957753429947, 7);
  sqcRYGate(q, -1.6507045980678656, 8);
  sqcRZGate(q, 2.214839771946168, 8);
  sqcRYGate(q, 3.1393006668450725, 9);
  sqcRZGate(q, 0.8197347076961681, 9);
  sqcRYGate(q, 1.5697605595102306, 10);
  sqcRZGate(q, -0.889790776986433, 10);
  sqcRYGate(q, 1.5707685545386258, 11);
  sqcRZGate(q, -0.32044607002537945, 11);
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
  sqcRYGate(q, -1.8778358816696414, 0);
  sqcRZGate(q, 0.0008348607186697931, 0);
  sqcRYGate(q, -2.694995120481292, 1);
  sqcRZGate(q, -2.2901217732201786, 1);
  sqcRYGate(q, 2.645638479629098, 2);
  sqcRZGate(q, -0.8838594100202108, 2);
  sqcRYGate(q, 1.874458009742124, 3);
  sqcRZGate(q, -1.3965084174482012, 3);
  sqcRYGate(q, 1.190469635607136, 4);
  sqcRZGate(q, 1.658760551266969, 4);
  sqcRYGate(q, -1.8587762850740894, 5);
  sqcRZGate(q, 1.7262902984798458, 5);
  sqcRYGate(q, -1.2369745844222857, 6);
  sqcRZGate(q, -1.4517330898088818, 6);
  sqcRYGate(q, 2.723406673716732, 7);
  sqcRZGate(q, 0.8990484148181129, 7);
  sqcRYGate(q, 0.44348688876097686, 8);
  sqcRZGate(q, -2.124393406023908, 8);
  sqcRYGate(q, 1.2843272570308262, 9);
  sqcRZGate(q, 0.04520742421276987, 9);
  sqcRYGate(q, -0.45653671434238685, 10);
  sqcRZGate(q, 0.97820699224265, 10);
  sqcRYGate(q, 1.8997189149149643, 11);
  sqcRZGate(q, -2.9634253709068137, 11);

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
