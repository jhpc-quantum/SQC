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

  sqcRYGate(q, -3.124951315918962, 0);
  sqcRYGate(q, 3.029507799266789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.431773431460846, 0);
  sqcRYGate(q, -2.1864029464097703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.153590906603993, 1);
  sqcRYGate(q, -1.9274083777973579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9737712156369165, 1);
  sqcRYGate(q, -2.92092858936227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.900524026651157, 2);
  sqcRYGate(q, -1.610631733404903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9947926802974356, 2);
  sqcRYGate(q, -3.1113631586519257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6174126988974313, 3);
  sqcRYGate(q, -0.09870324430125643, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4693517175095765, 3);
  sqcRYGate(q, -2.109328504704496, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7952708295802549, 4);
  sqcRYGate(q, -1.3750829241234976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5336789779354739, 4);
  sqcRYGate(q, -2.749444405067064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.673102504817297, 5);
  sqcRYGate(q, 1.588368878229124, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.123052984526845, 5);
  sqcRYGate(q, -3.14120407116409, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.687305744331594, 6);
  sqcRYGate(q, -0.2400407381315161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6013287062846904, 6);
  sqcRYGate(q, 1.896955685794796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.37530271554895356, 0);
  sqcRYGate(q, -1.9409041820924882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6299823149533648, 0);
  sqcRYGate(q, -0.8845279419253624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.587714363519748, 1);
  sqcRYGate(q, 0.9753985987605098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.461730161164022, 1);
  sqcRYGate(q, -1.6937352627486018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6700544755938194, 2);
  sqcRYGate(q, 2.245640547952349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1252987463456736, 2);
  sqcRYGate(q, -0.04460867429958526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7169356661471618, 3);
  sqcRYGate(q, 0.4495975669193779, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5889635679806007, 3);
  sqcRYGate(q, -0.4978339815507181, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6997528359286356, 4);
  sqcRYGate(q, 2.2271985029868695, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.549766178937737, 4);
  sqcRYGate(q, 0.39799269870062215, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5962550211305313, 5);
  sqcRYGate(q, -0.7824402357130202, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0031613851585650106, 5);
  sqcRYGate(q, -3.141186837686995, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1271980355926612, 6);
  sqcRYGate(q, 1.2576134812071393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.105322225796404, 6);
  sqcRYGate(q, 2.604719120111151, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.581859039129334, 0);
  sqcRYGate(q, -3.0851329961271348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2938781490291382, 0);
  sqcRYGate(q, -1.6136156305060623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.520827548759411, 1);
  sqcRYGate(q, -0.3557446487114069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6547044337225914, 1);
  sqcRYGate(q, -1.067659649942654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.114497310354803, 2);
  sqcRYGate(q, 2.1122427613227073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07099556612781567, 2);
  sqcRYGate(q, 1.4312765648438615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8789809682756586, 3);
  sqcRYGate(q, 0.2598890040377891, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1700069158855397, 3);
  sqcRYGate(q, 0.007659313769157627, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0636120282131937, 4);
  sqcRYGate(q, 2.8390573330579874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8156080243841335, 4);
  sqcRYGate(q, -2.2052335324506878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0068744734938866, 5);
  sqcRYGate(q, -0.19653558020572728, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2577992319028509, 5);
  sqcRYGate(q, 2.5223687219810413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2418178999632534, 6);
  sqcRYGate(q, 1.7643604170628304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2064112540253653, 6);
  sqcRYGate(q, -0.5482614545252966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4547361105839385, 0);
  sqcRYGate(q, 0.5951110228363441, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6270076093658643, 0);
  sqcRYGate(q, 1.6030699900363379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7767024494981722, 1);
  sqcRYGate(q, 2.968690333428703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6553485872001751, 1);
  sqcRYGate(q, 0.8407329913234544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5048907848605649, 2);
  sqcRYGate(q, 1.8184468099319702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0920280519991286, 2);
  sqcRYGate(q, 0.09453665871646423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9247431518998832, 3);
  sqcRYGate(q, -0.2546721661352532, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4950420903996227, 3);
  sqcRYGate(q, -0.004930912166302371, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7352661703442636, 4);
  sqcRYGate(q, 3.118729114395878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.455812140045856, 4);
  sqcRYGate(q, -1.5301560357734387, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9792323821569665, 5);
  sqcRYGate(q, -1.997570107241847, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.006457323175821372, 5);
  sqcRYGate(q, -0.0023824373111160924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9354720207124538, 6);
  sqcRYGate(q, -1.7796754055804336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8506381968937362, 6);
  sqcRYGate(q, -0.6287096035677694, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.26670236156505744, 0);
  sqcRYGate(q, 3.12232668579722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0044782458603354, 0);
  sqcRYGate(q, -0.9254408181727656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.542111709958207, 1);
  sqcRYGate(q, -0.481362211112014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5626465752777812, 1);
  sqcRYGate(q, 0.016792011097702036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1948126060408093, 2);
  sqcRYGate(q, -0.019562094042374703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.306578083770214, 2);
  sqcRYGate(q, 0.955264819640356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7711144195331507, 3);
  sqcRYGate(q, -0.10265056828062313, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.06004762149163945, 3);
  sqcRYGate(q, -3.1415610578485498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.10772293054401239, 4);
  sqcRYGate(q, 2.1086282854962346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.629977082262885, 4);
  sqcRYGate(q, -1.5441374367226661, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4246880722478439, 5);
  sqcRYGate(q, -1.027437466703839, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.781582682428863, 5);
  sqcRYGate(q, -0.8785766623905156, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2149770501340642, 6);
  sqcRYGate(q, 0.040841278831686215, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4418357424537511, 6);
  sqcRYGate(q, -0.8325278462478412, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6647185599272945, 0);
  sqcRYGate(q, 0.8090264268949738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.094282180379656, 0);
  sqcRYGate(q, -1.693195984402339, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.43547206337764, 1);
  sqcRYGate(q, 2.521901948006351, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4031292662612467, 1);
  sqcRYGate(q, -0.6103093296512567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0812393148753277, 2);
  sqcRYGate(q, -1.9405510430238888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04719988961013798, 2);
  sqcRYGate(q, 1.4613618619332227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7685600198913334, 3);
  sqcRYGate(q, 0.5669783586963384, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0763112389617775, 3);
  sqcRYGate(q, 1.8406043389821494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2153465383111797, 4);
  sqcRYGate(q, -2.638630705633264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.00045068601665692714, 4);
  sqcRYGate(q, 1.1272588233529135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.30647562748277174, 5);
  sqcRYGate(q, 0.37728833780123955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6876536518230028, 5);
  sqcRYGate(q, 0.014078544187401398, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1063298713460443, 6);
  sqcRYGate(q, 1.613063976364847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.29623801408754746, 6);
  sqcRYGate(q, 0.06188483215092813, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8106492027565544, 0);
  sqcRYGate(q, -3.1236813855060976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.781453216489535, 0);
  sqcRYGate(q, -3.054072170788279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2366321773077456, 1);
  sqcRYGate(q, -1.1714351952411377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.96430166902406, 1);
  sqcRYGate(q, -0.7244633350772816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48071907396486147, 2);
  sqcRYGate(q, -1.1211164033976873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9646415435879505, 2);
  sqcRYGate(q, -1.609742106771326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2939358173328688, 3);
  sqcRYGate(q, 1.5733879156669712, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.029176319235659, 3);
  sqcRYGate(q, 0.00016487763184613868, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.992317185879906, 4);
  sqcRYGate(q, 0.7022688444668512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17215512761012522, 4);
  sqcRYGate(q, -1.009593280667497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.891927260310481, 5);
  sqcRYGate(q, -1.4427019043309741, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9851536176378667, 5);
  sqcRYGate(q, 0.0005319833475596968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5599769241863317, 6);
  sqcRYGate(q, -1.101946983820844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4380692912898931, 6);
  sqcRYGate(q, 2.122808259102512, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5308796567873841, 0);
  sqcRYGate(q, -1.0084846998313397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.316037010804399, 0);
  sqcRYGate(q, -2.175772835713773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4091580345750034, 1);
  sqcRYGate(q, 1.076558434141786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6441366467254115, 1);
  sqcRYGate(q, 0.235128619919881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.182584725774639, 2);
  sqcRYGate(q, -2.4184140266946472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.49598671374295633, 2);
  sqcRYGate(q, -2.3280328762578346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.549089967609229, 3);
  sqcRYGate(q, -0.9177672611560856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.00040758048755584747, 3);
  sqcRYGate(q, 3.1415023074304096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8370640879274767, 4);
  sqcRYGate(q, 1.2488785239196896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6663666674922437, 4);
  sqcRYGate(q, -1.4286775022880098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7395829582499216, 5);
  sqcRYGate(q, 2.3881593791571376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.069001564461813, 5);
  sqcRYGate(q, -0.03469251198306014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.040694614545022, 6);
  sqcRYGate(q, 1.4260852576649086, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.918657803232672, 6);
  sqcRYGate(q, 2.2177786931610135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8556460275213098, 0);
  sqcRYGate(q, 2.1184804604251424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04688086015460158, 0);
  sqcRYGate(q, 2.274951199243392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.33180170663176, 1);
  sqcRYGate(q, -3.0220835754015227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1183189253082677, 1);
  sqcRYGate(q, -0.5796342670417838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.44658360396299557, 2);
  sqcRYGate(q, 1.1316894607872543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6320137766061795, 2);
  sqcRYGate(q, 3.125138438593662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.768418414883749, 3);
  sqcRYGate(q, 0.15931416146388422, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1406976954418724, 3);
  sqcRYGate(q, 0.0002505847477312523, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2591225700412631, 4);
  sqcRYGate(q, 2.315409880679327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4771965758819299, 4);
  sqcRYGate(q, 1.4790019328257802, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.23025172264779492, 5);
  sqcRYGate(q, 0.6298019018646555, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0416774190654277, 5);
  sqcRYGate(q, -2.6530629978168667, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0721939450154263, 6);
  sqcRYGate(q, 2.3906167753225795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3338150281986927, 6);
  sqcRYGate(q, 2.5167893605597027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2743845147486383, 0);
  sqcRYGate(q, 2.707680720658256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10678847946935655, 0);
  sqcRYGate(q, -0.7757833395322671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.31038302298417, 1);
  sqcRYGate(q, 1.8277471871543032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30592043386794193, 1);
  sqcRYGate(q, 1.4809255233662448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3605983051119215, 2);
  sqcRYGate(q, 3.123893631763242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.038085651357985244, 2);
  sqcRYGate(q, -0.0035846554559366695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.010073958684484, 3);
  sqcRYGate(q, -0.5197543640910816, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.140919180319645, 3);
  sqcRYGate(q, 0.001272638649669311, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.43793680204370483, 4);
  sqcRYGate(q, -1.897404002042021, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6580322387531936, 4);
  sqcRYGate(q, -2.4049107598272017, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4875451816093821, 5);
  sqcRYGate(q, 0.536558267168318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6807268220321419, 5);
  sqcRYGate(q, -0.002975012069360794, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1233912704949627, 6);
  sqcRYGate(q, -1.4189747330805507, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05273539734246668, 6);
  sqcRYGate(q, -0.5405899322062004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.49207042617394775, 0);
  sqcRYGate(q, -1.4337382576779119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7134209858715366, 0);
  sqcRYGate(q, -0.5296017376899789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.845202788149746, 1);
  sqcRYGate(q, -2.966442775305088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15893503293865, 1);
  sqcRYGate(q, 0.5833769190247752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.252510331660357, 2);
  sqcRYGate(q, 1.6238906361581351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42268381986451153, 2);
  sqcRYGate(q, 0.38768088528986405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5458248555232137, 3);
  sqcRYGate(q, 0.4673561665376935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1401822489306292, 3);
  sqcRYGate(q, -3.141270029058361, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9631814746049585, 4);
  sqcRYGate(q, -0.6905545313806414, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.72312120840858, 4);
  sqcRYGate(q, 1.0369510813513807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.132840309164651, 5);
  sqcRYGate(q, 3.1172333593262116, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5747450330819771, 5);
  sqcRYGate(q, -3.1357585629165547, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0647357859836273, 6);
  sqcRYGate(q, -0.5182838227179118, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.129271847801972, 6);
  sqcRYGate(q, 2.5333958810910238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4621043131222306, 0);
  sqcRYGate(q, -0.1989260104148176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1344442219482662, 0);
  sqcRYGate(q, -1.5226396510594027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.528480348314766, 1);
  sqcRYGate(q, -2.2106024327766987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.068240253685023, 1);
  sqcRYGate(q, -3.0161333955050447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2818626330410683, 2);
  sqcRYGate(q, -2.3784731680447067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.052343021316317, 2);
  sqcRYGate(q, -2.909967290666488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2496409990266573, 3);
  sqcRYGate(q, -2.558613157212516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.00013004210153955142, 3);
  sqcRYGate(q, -3.1414240790536803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.853647312534927, 4);
  sqcRYGate(q, -1.8029889305120559, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5721115069678389, 4);
  sqcRYGate(q, 2.166506549592901, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.22651803016535776, 5);
  sqcRYGate(q, 2.403768323479683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9924346983282486, 5);
  sqcRYGate(q, 3.0881319742057394, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.694512509071017, 6);
  sqcRYGate(q, -0.33718911363554765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8290138833313785, 6);
  sqcRYGate(q, 0.5691962000696439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5839632476571548, 0);
  sqcRYGate(q, -1.3475236207303036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4102283649628369, 0);
  sqcRYGate(q, -1.1518980188378238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7382579679073884, 1);
  sqcRYGate(q, -3.1248335602903237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5391662050187085, 1);
  sqcRYGate(q, 0.7782400930632569, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3292857772675293, 2);
  sqcRYGate(q, -2.3027084790496075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.23010197906863, 2);
  sqcRYGate(q, -0.26156420703809774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1729897074866997, 3);
  sqcRYGate(q, -3.0819024773996593, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1415115443076074, 3);
  sqcRYGate(q, 0.0016039248827798727, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5305080612608553, 4);
  sqcRYGate(q, -2.191210808693213, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8796294338363646, 4);
  sqcRYGate(q, -0.8779743138726452, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.813353628056086, 5);
  sqcRYGate(q, -0.2743342542923548, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.667483434859868, 5);
  sqcRYGate(q, -1.3282088674473507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.02623105787915936, 6);
  sqcRYGate(q, -1.125302289414483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06204769122165905, 6);
  sqcRYGate(q, 1.9897878161471887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8081185420261843, 0);
  sqcRYGate(q, 0.2524969686612763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.008336653965064222, 0);
  sqcRYGate(q, -3.0838324406929685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8325357809524547, 1);
  sqcRYGate(q, -2.106678019043381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1412301041555826, 1);
  sqcRYGate(q, -1.5864842386353342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.623504722186332, 2);
  sqcRYGate(q, -2.6968584938557187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.902976071473548, 2);
  sqcRYGate(q, -0.17101456101009074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16112196697262957, 3);
  sqcRYGate(q, 1.7212138009212428, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1414341091756284, 3);
  sqcRYGate(q, 0.39665414220709044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16013553448904627, 4);
  sqcRYGate(q, -1.1841934282979218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8755659906689317, 4);
  sqcRYGate(q, -0.0021447152250966576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.426480744851255, 5);
  sqcRYGate(q, -0.22657671172111282, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9718578543897873, 5);
  sqcRYGate(q, -0.8223697551612856, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4476078456296797, 6);
  sqcRYGate(q, 0.5079973701878931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1955026525074812, 6);
  sqcRYGate(q, -0.8763545878925703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.35229464565258295, 0);
  sqcRYGate(q, 2.391452426301487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37097242188576823, 0);
  sqcRYGate(q, -0.9569319044092758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1076369968033184, 1);
  sqcRYGate(q, 0.26151111208557465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.708221061820174, 1);
  sqcRYGate(q, 3.0851080028469067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7228800587185003, 2);
  sqcRYGate(q, -1.118668247357716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.01068931626615053, 2);
  sqcRYGate(q, 0.1552296320530102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1693674171916824, 3);
  sqcRYGate(q, 0.349647077785438, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1321223666543654, 3);
  sqcRYGate(q, 2.736095528387743, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.458308156726469, 4);
  sqcRYGate(q, -2.2284791962143897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.571708996709808, 4);
  sqcRYGate(q, 0.11046991197664102, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3936050315133787, 5);
  sqcRYGate(q, 2.996008648451824, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5682088369448864, 5);
  sqcRYGate(q, 0.22575541380473388, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3550641569120216, 6);
  sqcRYGate(q, -3.019148169601176, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.233073269905784, 6);
  sqcRYGate(q, -2.1760567988204023, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7678045410975214, 0);
  sqcRYGate(q, -2.383702417481639, 1);
  sqcRYGate(q, 0.03965465208665393, 2);
  sqcRYGate(q, 3.098156146055396, 3);
  sqcRYGate(q, -0.6856899849617086, 4);
  sqcRYGate(q, -2.1021095209596288, 5);
  sqcRYGate(q, 0.7137258556974926, 6);
  sqcRYGate(q, -1.0849153190862273, 7);

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
