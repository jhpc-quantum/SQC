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

  sqcRYGate(q, -1.0838207906073896, 0);
  sqcRYGate(q, -0.6988397380523806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2435193025089042, 0);
  sqcRYGate(q, 2.1147482897819003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.77788511556635, 2);
  sqcRYGate(q, 0.5830127651890509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7313293761621122, 2);
  sqcRYGate(q, -1.6378691184963836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08505036161870151, 1);
  sqcRYGate(q, 1.120051709969997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.117544445396698, 1);
  sqcRYGate(q, 0.06143765959593246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.164501892215471, 0);
  sqcRYGate(q, -1.982738672266427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9269262655326959, 0);
  sqcRYGate(q, -0.042205493523362676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19389342117784222, 2);
  sqcRYGate(q, 1.1675752140266962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.736470688952041, 2);
  sqcRYGate(q, -0.7987753583445653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7412193033091711, 1);
  sqcRYGate(q, -1.4255166799981076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5816767840203445, 1);
  sqcRYGate(q, 0.24105273345849287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3697449754054678, 0);
  sqcRYGate(q, 0.7410170826092628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6135197437582867, 0);
  sqcRYGate(q, 1.1335509732940312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2031914758871345, 2);
  sqcRYGate(q, 1.4266270807759536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.642753787330274, 2);
  sqcRYGate(q, 0.9431302493060745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1020234092780192, 1);
  sqcRYGate(q, -0.34162179703723267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.33883622217337, 1);
  sqcRYGate(q, 2.897483300941075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9098220812780385, 0);
  sqcRYGate(q, 2.1906239191455494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7345697225411145, 0);
  sqcRYGate(q, 1.5501697219272037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6955907249706816, 2);
  sqcRYGate(q, -3.061448180856572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0544162536231636, 2);
  sqcRYGate(q, -3.133487903925828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3651374162305143, 1);
  sqcRYGate(q, -2.4680188746684766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8881323541816233, 1);
  sqcRYGate(q, -0.9553547230026924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.319871210980164, 0);
  sqcRYGate(q, 0.6575299302286093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8599452009244026, 0);
  sqcRYGate(q, -0.567786383848545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08651176331866052, 2);
  sqcRYGate(q, -2.6613693304764277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2632839551235095, 2);
  sqcRYGate(q, 3.0495221284830567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1284312434608756, 1);
  sqcRYGate(q, 1.0649048921301665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.074194615998085, 1);
  sqcRYGate(q, 2.141847315648281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4286659535471518, 0);
  sqcRYGate(q, 1.4340989774793254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.051008926679888, 0);
  sqcRYGate(q, -1.9129072146126447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9902309193325367, 2);
  sqcRYGate(q, -1.3307371215677888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1876376771321544, 2);
  sqcRYGate(q, -1.4199148802914576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07653237189735601, 1);
  sqcRYGate(q, -2.301809083645893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2823228235053765, 1);
  sqcRYGate(q, 0.7067674448809007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0643367805563777, 0);
  sqcRYGate(q, 0.1914408941470007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6604213033663884, 0);
  sqcRYGate(q, 1.097722704890404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9194802858201165, 2);
  sqcRYGate(q, 0.7315655048169603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33560033395597344, 2);
  sqcRYGate(q, 1.3637425319983296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0121058845730087, 1);
  sqcRYGate(q, -2.0475524970784944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5233921485780222, 1);
  sqcRYGate(q, 3.1267288065339423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9577462259967708, 0);
  sqcRYGate(q, -1.5860972801890036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4746714363553037, 0);
  sqcRYGate(q, -0.5628242315480154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7886515514980621, 2);
  sqcRYGate(q, 0.23379182149588829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0592308295250685, 2);
  sqcRYGate(q, 1.170597419445981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9913659277121467, 1);
  sqcRYGate(q, -0.384366993206128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9881271831272453, 1);
  sqcRYGate(q, 0.6534123423255803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3812757480279032, 0);
  sqcRYGate(q, 1.2136360833574833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0766612892452017, 0);
  sqcRYGate(q, 0.4551942364693584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22924153065938468, 2);
  sqcRYGate(q, 1.8506561176557215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3165613301703385, 2);
  sqcRYGate(q, -1.2854479469859796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8420629687896415, 1);
  sqcRYGate(q, -2.538485117397626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.71592544644405, 1);
  sqcRYGate(q, 3.0020637330670015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8542686401136486, 0);
  sqcRYGate(q, -2.9483199699855236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3483803315610543, 0);
  sqcRYGate(q, 2.0242137246370904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3618400837374036, 2);
  sqcRYGate(q, 1.3863507081479085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4322532931246044, 2);
  sqcRYGate(q, 1.4661402711636038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05135348973836962, 1);
  sqcRYGate(q, 1.8244058028191668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4944965884029515, 1);
  sqcRYGate(q, 1.8313661972047468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6518594753784794, 0);
  sqcRYGate(q, 0.11955553328696222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7528520506036008, 0);
  sqcRYGate(q, -0.517452594153829, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.451408372202228, 2);
  sqcRYGate(q, -2.1431306787580375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0508294701391887, 2);
  sqcRYGate(q, 0.050098541391700564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5121688778354763, 1);
  sqcRYGate(q, -1.09052881068618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9421567943028142, 1);
  sqcRYGate(q, -2.9806742935725494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0263479542255878, 0);
  sqcRYGate(q, 1.4378597691908037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0397917203329134, 0);
  sqcRYGate(q, 0.05128426731654123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6968852608676706, 2);
  sqcRYGate(q, -0.9493786332213165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41198451902072675, 2);
  sqcRYGate(q, 0.5633707644599321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0132253353796474, 1);
  sqcRYGate(q, -0.6839871345151387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3289197076601513, 1);
  sqcRYGate(q, 2.637336041030328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8187403328435463, 0);
  sqcRYGate(q, -2.973616536060458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08903404472881604, 0);
  sqcRYGate(q, 2.031658865704326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17863538850621108, 2);
  sqcRYGate(q, -1.7557922272334074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8771804545919313, 2);
  sqcRYGate(q, -1.6305694396450265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30401602278213957, 1);
  sqcRYGate(q, 0.6190247400119273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.511829865062583, 1);
  sqcRYGate(q, -1.8130211715112747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3090595801407963, 0);
  sqcRYGate(q, -1.5592390200559274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7911440763341275, 0);
  sqcRYGate(q, -0.9539486760837939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6272033009192226, 2);
  sqcRYGate(q, -0.9624582508734338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4131459307735357, 2);
  sqcRYGate(q, 2.793888670558298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7865011275969875, 1);
  sqcRYGate(q, 1.5612187699097586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8813184833713876, 1);
  sqcRYGate(q, 0.8262553558750175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8196400520514193, 0);
  sqcRYGate(q, 0.4265534893726281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2721824020457815, 0);
  sqcRYGate(q, -1.70593996792664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9171817371136632, 2);
  sqcRYGate(q, -2.8981387041106843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.081310732560728, 2);
  sqcRYGate(q, -0.29234069239254634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6917486854492694, 1);
  sqcRYGate(q, -0.7108712309358651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5102889574863482, 1);
  sqcRYGate(q, 0.9374099859203976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.663984683113036, 0);
  sqcRYGate(q, -1.1188393683768108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1363357288361247, 0);
  sqcRYGate(q, 1.543172085527531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6939555741505012, 2);
  sqcRYGate(q, 0.4057852072331949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5458683129828894, 2);
  sqcRYGate(q, -0.23957089410838872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.040007156380363895, 1);
  sqcRYGate(q, -0.6668791203645323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6468733278799026, 1);
  sqcRYGate(q, -2.579931939984785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3501314104764929, 0);
  sqcRYGate(q, -0.42149922429811415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2729614075333284, 0);
  sqcRYGate(q, 2.5756475471300395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6354737997504883, 2);
  sqcRYGate(q, 1.6896132882492416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1667821633223852, 2);
  sqcRYGate(q, -2.154911034552046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.990781258370168, 1);
  sqcRYGate(q, -2.225402078586515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8913319944809807, 1);
  sqcRYGate(q, 1.246491961347819, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1876474540094346, 0);
  sqcRYGate(q, -2.4346372388264106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.289595500253475, 0);
  sqcRYGate(q, -1.0781747839532239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.802975954437045, 2);
  sqcRYGate(q, 2.0208444110383716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2894048040531154, 2);
  sqcRYGate(q, -2.9420551556860786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8250052163161862, 1);
  sqcRYGate(q, 0.5496245006012561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9106747421652477, 1);
  sqcRYGate(q, 0.19419477920590378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4637026083651186, 0);
  sqcRYGate(q, -0.7475733771770853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4801524991045234, 0);
  sqcRYGate(q, -2.142948021062825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9043431620038963, 2);
  sqcRYGate(q, -2.632677617510516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.652144680214611, 2);
  sqcRYGate(q, -1.8434155414820839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.618183172692297, 1);
  sqcRYGate(q, 0.07343226529425627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.449852568838089, 1);
  sqcRYGate(q, 1.1749838461490028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.450733317340961, 0);
  sqcRYGate(q, 0.8304149981345299, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1217123131525382, 0);
  sqcRYGate(q, 2.6251940189081107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.027325434817980998, 2);
  sqcRYGate(q, -1.23590006652433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.10148115522776, 2);
  sqcRYGate(q, 0.30615785133686513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4456965134842106, 1);
  sqcRYGate(q, -1.5174807230932326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.463134833917895, 1);
  sqcRYGate(q, -0.34394199230649564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3281247127082798, 0);
  sqcRYGate(q, 2.6177359951828887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6484247695985405, 0);
  sqcRYGate(q, 1.0191669814679056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.470769804998754, 2);
  sqcRYGate(q, -1.8345516101330368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7384059798279723, 2);
  sqcRYGate(q, -2.2846001814134524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9743866125787699, 1);
  sqcRYGate(q, -0.6433024393002542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6058837548011755, 1);
  sqcRYGate(q, -1.7699449763358703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8146797718532109, 0);
  sqcRYGate(q, 2.8169975442617265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8310147201322824, 0);
  sqcRYGate(q, 2.6412994095985813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.385600064018334, 2);
  sqcRYGate(q, -0.6560988137872619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.775315102000833, 2);
  sqcRYGate(q, -1.7112575977175806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.131546280730455, 1);
  sqcRYGate(q, 1.8602105452496152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5732324540073799, 1);
  sqcRYGate(q, -2.125142366198154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5541649710697412, 0);
  sqcRYGate(q, -1.7128116542495677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9232189057418685, 0);
  sqcRYGate(q, -1.2948985599662703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6448713254460392, 2);
  sqcRYGate(q, -2.662693550543373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8073133649854594, 2);
  sqcRYGate(q, 0.12675504962175754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1247478764688, 1);
  sqcRYGate(q, 1.9516823031636523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.444543915489515, 1);
  sqcRYGate(q, 1.7397424447837049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2569845441783123, 0);
  sqcRYGate(q, -1.9516159215901503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1744227968017853, 0);
  sqcRYGate(q, 1.7132071330801764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0020279371778678, 2);
  sqcRYGate(q, -0.27405313915074087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9758051670674305, 2);
  sqcRYGate(q, 3.037709432849666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.445512793699196, 1);
  sqcRYGate(q, 0.5651214269517837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3800481365357062, 1);
  sqcRYGate(q, -0.5292397148413656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0917110937093817, 0);
  sqcRYGate(q, -2.492386608480729, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5123437147164642, 0);
  sqcRYGate(q, 1.7650813927601983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9081344763320292, 2);
  sqcRYGate(q, 1.3287358158123872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3460910940548958, 2);
  sqcRYGate(q, -0.2698663463947865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7330928088888835, 1);
  sqcRYGate(q, 1.4279992613156207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.507749471101486, 1);
  sqcRYGate(q, 0.8161238744619809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.796586427045706, 0);
  sqcRYGate(q, 2.642112599036965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6844326092581035, 0);
  sqcRYGate(q, -2.295242304544974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4196445538444908, 2);
  sqcRYGate(q, -0.09833943816769361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1053774933363103, 2);
  sqcRYGate(q, -1.4818807370179325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1711044677155273, 1);
  sqcRYGate(q, 1.0255193487943477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0751268231947373, 1);
  sqcRYGate(q, -0.2874336848593034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.789915644020895, 0);
  sqcRYGate(q, -1.701328370734218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3414795464543974, 0);
  sqcRYGate(q, 2.8804568150614376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6451301363764697, 2);
  sqcRYGate(q, -2.4052520080560558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4188877203105559, 2);
  sqcRYGate(q, -2.265636249280946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7599071571119104, 1);
  sqcRYGate(q, -2.4361508796987814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.895757491881237, 1);
  sqcRYGate(q, -2.946482725522704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8924639694311125, 0);
  sqcRYGate(q, 2.522695235766727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.807821239620845, 0);
  sqcRYGate(q, 0.28413060491267406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9888651656451914, 2);
  sqcRYGate(q, 1.1282653645825231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.168037106510134, 2);
  sqcRYGate(q, -1.271396486422018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4300377065050786, 1);
  sqcRYGate(q, -2.661537926329089, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24442193307659882, 1);
  sqcRYGate(q, -2.98076214574554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6381542414239725, 0);
  sqcRYGate(q, 1.2118946254616987, 1);
  sqcRYGate(q, -1.2630311312458815, 2);
  sqcRYGate(q, -0.7807942304550454, 3);

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
