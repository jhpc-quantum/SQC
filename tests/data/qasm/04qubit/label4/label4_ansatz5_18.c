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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.6365957479449067, 0);
  sqcRYGate(q, -3.010249258002137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38905099948980926, 0);
  sqcRYGate(q, 2.08116817069053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8901705409174235, 2);
  sqcRYGate(q, -2.4057410367462655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1716598760187316, 2);
  sqcRYGate(q, -0.32253743990065903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5528477790187507, 1);
  sqcRYGate(q, -2.9085213646749954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4771866327678742, 1);
  sqcRYGate(q, 1.0000974508757077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3995848710422947, 0);
  sqcRYGate(q, -0.753629914394792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0190615551151216, 0);
  sqcRYGate(q, 2.3836557200688775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2521796272980668, 2);
  sqcRYGate(q, 0.12097992011408643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5759840153910442, 2);
  sqcRYGate(q, 0.36208725819972365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0795996963818806, 1);
  sqcRYGate(q, -1.4667735642590356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4121646754888477, 1);
  sqcRYGate(q, 0.18029157000051158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.831452755969659, 0);
  sqcRYGate(q, 0.32549076177649183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6480155342935598, 0);
  sqcRYGate(q, -2.54982649910457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1360329716292643, 2);
  sqcRYGate(q, 1.4060771955475957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.380722103982686, 2);
  sqcRYGate(q, 1.7737852016674367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.40327605642335, 1);
  sqcRYGate(q, -1.4979764089276904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3943480424650596, 1);
  sqcRYGate(q, -0.4920526079432666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1274743635337963, 0);
  sqcRYGate(q, 0.13454358707471278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.516185909873238, 0);
  sqcRYGate(q, -1.3283624695552163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23935218797795269, 2);
  sqcRYGate(q, -1.9575053075432398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.744173509953353, 2);
  sqcRYGate(q, -2.5967165771862155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.082925685907091, 1);
  sqcRYGate(q, -2.9838520866458134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6314084465104817, 1);
  sqcRYGate(q, -2.2835748511661227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09945343661685348, 0);
  sqcRYGate(q, 1.7423778814463335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7073862891338867, 0);
  sqcRYGate(q, 0.9261423546712939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.998659206710596, 2);
  sqcRYGate(q, -2.545813313697079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.377363317210672, 2);
  sqcRYGate(q, -2.2328250336591413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9182687379948549, 1);
  sqcRYGate(q, 0.715142142831929, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.120385389954894, 1);
  sqcRYGate(q, 1.4006243785865984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5856706515983943, 0);
  sqcRYGate(q, -1.0143576445554006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3493946220985903, 0);
  sqcRYGate(q, 0.6965407024147918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4258661044448262, 2);
  sqcRYGate(q, -2.686631557251581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2198125672159397, 2);
  sqcRYGate(q, 1.4405654908644703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2861526245222334, 1);
  sqcRYGate(q, -1.2813131624434366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08622863925622504, 1);
  sqcRYGate(q, 1.1939108299491474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6449795529217357, 0);
  sqcRYGate(q, -3.1110201182241783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5128138684684833, 0);
  sqcRYGate(q, -0.5523505012110227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.944441407056408, 2);
  sqcRYGate(q, 1.4705964129368136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.007881939646749991, 2);
  sqcRYGate(q, 0.5616870861883648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.397553602293248, 1);
  sqcRYGate(q, -0.3596412084170796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1444326743249436, 1);
  sqcRYGate(q, -0.46084918501050254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4123875849836028, 0);
  sqcRYGate(q, -1.5583299472711944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02896880395902077, 0);
  sqcRYGate(q, 2.6874355638459435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1871209073884206, 2);
  sqcRYGate(q, -2.0046811827096565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6666169769463632, 2);
  sqcRYGate(q, 2.0566867535981626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07604428423599854, 1);
  sqcRYGate(q, -3.000905760846071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7064188174658925, 1);
  sqcRYGate(q, 0.04929136817174839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0557958225604271, 0);
  sqcRYGate(q, 1.6148596690640264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9861393608878348, 0);
  sqcRYGate(q, -2.8108372592703503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5851421219942035, 2);
  sqcRYGate(q, -2.6181053651003845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.531008042790151, 2);
  sqcRYGate(q, 2.7181503214346203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8946307175891856, 1);
  sqcRYGate(q, -2.1337891757988974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8568520224832614, 1);
  sqcRYGate(q, 0.6688732859572789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05455328291057704, 0);
  sqcRYGate(q, -2.2847761865879144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.150067636591558, 0);
  sqcRYGate(q, 2.352310335321933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9553962379929368, 2);
  sqcRYGate(q, 1.1088791781182648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4616416713504066, 2);
  sqcRYGate(q, 1.3488296532377158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9316069178650386, 1);
  sqcRYGate(q, 0.1991566361647745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2952331923068565, 1);
  sqcRYGate(q, 2.900669321746912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25248644736266407, 0);
  sqcRYGate(q, 0.34769641032946763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1619681793944374, 0);
  sqcRYGate(q, 0.6854235431867007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8351244944873812, 2);
  sqcRYGate(q, -2.3371109946892017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.054743367312117, 2);
  sqcRYGate(q, -0.5923177649583743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9331618003100717, 1);
  sqcRYGate(q, -0.8889059884954778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7768111526794598, 1);
  sqcRYGate(q, 1.5696821797431846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2411326587762286, 0);
  sqcRYGate(q, -0.32097372073552943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.940440382051618, 0);
  sqcRYGate(q, 1.7143435723150935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4790725333760095, 2);
  sqcRYGate(q, -1.3761096123955863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.885089988452262, 2);
  sqcRYGate(q, -2.996691822102338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0901434907545395, 1);
  sqcRYGate(q, 0.4644224637829737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5866932240305596, 1);
  sqcRYGate(q, 0.8064798934138221, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.672307813400017, 0);
  sqcRYGate(q, -0.3125784538221774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7621120703204252, 0);
  sqcRYGate(q, 0.961095249478137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7479393897901334, 2);
  sqcRYGate(q, 0.10037558432212046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9058592777608947, 2);
  sqcRYGate(q, 0.4930001346897472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0768229076842895, 1);
  sqcRYGate(q, -1.712241335155802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8062535684491614, 1);
  sqcRYGate(q, -1.4559409147656837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07030512904776136, 0);
  sqcRYGate(q, -0.08272231403050778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.900001367628635, 0);
  sqcRYGate(q, -1.8091035050301316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.676342721022321, 2);
  sqcRYGate(q, -1.0657934775559248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3507045705765477, 2);
  sqcRYGate(q, 2.7036590761918475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9812242929013755, 1);
  sqcRYGate(q, -1.9344596828289407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7956686818257179, 1);
  sqcRYGate(q, -1.0544474100772645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9508346318660661, 0);
  sqcRYGate(q, -2.7578663448621628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.290779446965658, 0);
  sqcRYGate(q, -0.3430878630678218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.052391096544344, 2);
  sqcRYGate(q, 2.6845224644779844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1967609049831918, 2);
  sqcRYGate(q, 0.7656248455120833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19103382118385484, 1);
  sqcRYGate(q, -2.1818562636262486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.230312143200253, 1);
  sqcRYGate(q, 2.042557285245838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.616478592769399, 0);
  sqcRYGate(q, 2.599311890480251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35582232902051686, 0);
  sqcRYGate(q, 2.321228989629458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0916797003140535, 2);
  sqcRYGate(q, -2.954063796176852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9107170284007938, 2);
  sqcRYGate(q, -1.9454816498526109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6952761283631521, 1);
  sqcRYGate(q, 2.441088032029082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5135126345823867, 1);
  sqcRYGate(q, 1.7501419182712823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08809727090069863, 0);
  sqcRYGate(q, -0.6258977269185843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0558181242048557, 0);
  sqcRYGate(q, 1.2569071289110163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6788615236499884, 2);
  sqcRYGate(q, -0.3151946587319765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9552739763869798, 2);
  sqcRYGate(q, 0.204478603100946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06545648978039154, 1);
  sqcRYGate(q, -0.4773837100660794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.399821840067684, 1);
  sqcRYGate(q, 2.3506671939019874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3328333809527972, 0);
  sqcRYGate(q, 2.5798979656692964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.317450834481382, 0);
  sqcRYGate(q, -1.0623866839017007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7911938676578929, 2);
  sqcRYGate(q, -1.5047283333811228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6071708998193928, 2);
  sqcRYGate(q, 1.3557110056108703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4744795887380366, 1);
  sqcRYGate(q, 0.5412930707753536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6018978042464234, 1);
  sqcRYGate(q, 1.7675936645524595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8344625039426017, 0);
  sqcRYGate(q, 0.3409605437421819, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5819240899054923, 0);
  sqcRYGate(q, 1.281678667554928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8354953861801989, 2);
  sqcRYGate(q, 1.3812267248610546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7607442446903243, 2);
  sqcRYGate(q, -2.9098031742700634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6573402047410415, 1);
  sqcRYGate(q, -0.6951162221192001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5845542467922762, 1);
  sqcRYGate(q, -1.0976380647447161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5370269521883966, 0);
  sqcRYGate(q, -2.2458584479301384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0636593027693633, 0);
  sqcRYGate(q, 1.8996310485233492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.122567561411915, 2);
  sqcRYGate(q, -2.3572129587730073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.197068535333063, 2);
  sqcRYGate(q, 2.2757164591220502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8634556614757658, 1);
  sqcRYGate(q, -2.1043880039487357, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.400430503422694, 1);
  sqcRYGate(q, -3.0132865156211297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1319753069288936, 0);
  sqcRYGate(q, -2.700218262930205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5154189560767435, 0);
  sqcRYGate(q, 0.7906659428201586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7757442816155766, 2);
  sqcRYGate(q, -1.3180894932902094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1976506625283028, 2);
  sqcRYGate(q, 2.063165437638392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6949738867199156, 1);
  sqcRYGate(q, 2.0840631237939142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.497352625823807, 1);
  sqcRYGate(q, -0.7681964429461243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5691538534204241, 0);
  sqcRYGate(q, 3.0732928111780287, 1);
  sqcRYGate(q, -0.6955352380828095, 2);
  sqcRYGate(q, 2.222854822562031, 3);

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
