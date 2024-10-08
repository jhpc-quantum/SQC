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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.16555530764160029, 0);
  sqcRZGate(q, -2.615907008722712, 0);
  sqcRYGate(q, -1.9584643700763857, 1);
  sqcRZGate(q, -2.704860352904008, 1);
  sqcRYGate(q, -0.016840865953828638, 2);
  sqcRZGate(q, -2.3319368783795955, 2);
  sqcRYGate(q, -0.8309425593963556, 3);
  sqcRZGate(q, -3.048885520116169, 3);
  sqcRYGate(q, 0.15169124824248637, 4);
  sqcRZGate(q, 1.0110904980694695, 4);
  sqcRYGate(q, 2.6871731925085065, 5);
  sqcRZGate(q, -1.7931964443096342, 5);
  sqcRYGate(q, 1.578252267275107, 6);
  sqcRZGate(q, 0.31324405535742217, 6);
  sqcRYGate(q, -1.5712011486105517, 7);
  sqcRZGate(q, -0.565139008182884, 7);
  sqcRYGate(q, 0.17663770364970505, 8);
  sqcRZGate(q, 0.7005808510430868, 8);
  sqcRYGate(q, 0.23268122120257545, 9);
  sqcRZGate(q, 0.11312036227186884, 9);
  sqcRYGate(q, 1.7134722777085651, 10);
  sqcRZGate(q, -2.3157303049233993, 10);
  sqcRYGate(q, -1.6165644680737796, 11);
  sqcRZGate(q, -0.18868715559884908, 11);
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
  sqcRYGate(q, -1.9721151159615669, 0);
  sqcRZGate(q, 0.4978925125985024, 0);
  sqcRYGate(q, -2.7990009107504035, 1);
  sqcRZGate(q, -2.8201681975520265, 1);
  sqcRYGate(q, 3.104480185071105, 2);
  sqcRZGate(q, -0.06968005992263127, 2);
  sqcRYGate(q, -0.7648075277901301, 3);
  sqcRZGate(q, -1.061605266242341, 3);
  sqcRYGate(q, 1.7295691769034802, 4);
  sqcRZGate(q, -0.20881772054126027, 4);
  sqcRYGate(q, -1.416853899986827, 5);
  sqcRZGate(q, 1.1671242180376482, 5);
  sqcRYGate(q, -1.612317382473116, 6);
  sqcRZGate(q, -0.9161669739940665, 6);
  sqcRYGate(q, 1.2619987215175854, 7);
  sqcRZGate(q, 2.7680199360090776, 7);
  sqcRYGate(q, 3.140785204280593, 8);
  sqcRZGate(q, -2.454675195259929, 8);
  sqcRYGate(q, -1.5383445830431253, 9);
  sqcRZGate(q, 0.8442508783579596, 9);
  sqcRYGate(q, 1.7766393708298145, 10);
  sqcRZGate(q, 1.6468933953126221, 10);
  sqcRYGate(q, 1.991535049129002, 11);
  sqcRZGate(q, 2.897461019282057, 11);
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
  sqcRYGate(q, -0.47625274054207445, 0);
  sqcRZGate(q, 2.9772215328097205, 0);
  sqcRYGate(q, -1.9870938333741797, 1);
  sqcRZGate(q, -2.356197456685092, 1);
  sqcRYGate(q, -1.3881861395024346, 2);
  sqcRZGate(q, -2.8483734500002678, 2);
  sqcRYGate(q, -0.5467621364111652, 3);
  sqcRZGate(q, 1.7323655141612833, 3);
  sqcRYGate(q, 1.7098471192241078, 4);
  sqcRZGate(q, -2.2399429667882993, 4);
  sqcRYGate(q, 3.139648876843199, 5);
  sqcRZGate(q, 2.7396542806652575, 5);
  sqcRYGate(q, 3.14028558852882, 6);
  sqcRZGate(q, 0.013927251279257646, 6);
  sqcRYGate(q, 1.5765271648434895, 7);
  sqcRZGate(q, 3.118480759490148, 7);
  sqcRYGate(q, -1.5710231741795022, 8);
  sqcRZGate(q, -0.22479729519228056, 8);
  sqcRYGate(q, -2.411520932107123, 9);
  sqcRZGate(q, 1.7258536756360545, 9);
  sqcRYGate(q, -0.42438253266803994, 10);
  sqcRZGate(q, -1.4839295569555944, 10);
  sqcRYGate(q, -2.95867196120671, 11);
  sqcRZGate(q, 0.48299040064008647, 11);
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
  sqcRYGate(q, -1.4815323775959788, 0);
  sqcRZGate(q, -1.0256873578168788, 0);
  sqcRYGate(q, 1.4750057004722903, 1);
  sqcRZGate(q, 2.9062868572421, 1);
  sqcRYGate(q, 1.7433723762255573, 2);
  sqcRZGate(q, 3.0411602008607574, 2);
  sqcRYGate(q, 3.0533175781850095, 3);
  sqcRZGate(q, -2.9537028022862564, 3);
  sqcRYGate(q, -0.137956701708815, 4);
  sqcRZGate(q, 2.1272641168551027, 4);
  sqcRYGate(q, -2.244500356503213, 5);
  sqcRZGate(q, 2.7120101809930612, 5);
  sqcRYGate(q, 1.570828698226733, 6);
  sqcRZGate(q, -3.1183127855117245, 6);
  sqcRYGate(q, -1.5682395693079902, 7);
  sqcRZGate(q, 2.7573321812640064, 7);
  sqcRYGate(q, 1.6790619007242409, 8);
  sqcRZGate(q, -3.105284455381751, 8);
  sqcRYGate(q, -1.6641604027668102, 9);
  sqcRZGate(q, -3.000269389937764, 9);
  sqcRYGate(q, 0.9782800942906826, 10);
  sqcRZGate(q, 2.483212129987267, 10);
  sqcRYGate(q, 0.877275539316457, 11);
  sqcRZGate(q, -1.573865251915413, 11);
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
  sqcRYGate(q, 2.332477670608836, 0);
  sqcRZGate(q, -0.8806115990309361, 0);
  sqcRYGate(q, 1.167044811992226, 1);
  sqcRZGate(q, -1.9566630814452446, 1);
  sqcRYGate(q, -0.5089629855381999, 2);
  sqcRZGate(q, -2.5978580950127617, 2);
  sqcRYGate(q, 3.0520842082306534, 3);
  sqcRZGate(q, -2.419089200963853, 3);
  sqcRYGate(q, 0.5630307236908467, 4);
  sqcRZGate(q, 1.8202173239268042, 4);
  sqcRYGate(q, 3.0615386587274216, 5);
  sqcRZGate(q, 0.82711160742591, 5);
  sqcRYGate(q, -0.39885633888234384, 6);
  sqcRZGate(q, -1.60409337879326, 6);
  sqcRYGate(q, -2.0595599016554136, 7);
  sqcRZGate(q, 0.5194357030287655, 7);
  sqcRYGate(q, 2.3648771173313006, 8);
  sqcRZGate(q, -1.817425051282478, 8);
  sqcRYGate(q, 1.7107265923967474, 9);
  sqcRZGate(q, 0.019317205850840614, 9);
  sqcRYGate(q, 3.1125897020454634, 10);
  sqcRZGate(q, 2.632220624597084, 10);
  sqcRYGate(q, -0.000373458013370076, 11);
  sqcRZGate(q, -2.9428178571204406, 11);
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
  sqcRYGate(q, -0.9811168723071183, 0);
  sqcRZGate(q, -0.7909940395092194, 0);
  sqcRYGate(q, 1.477936339024967, 1);
  sqcRZGate(q, -0.8807420181839484, 1);
  sqcRYGate(q, 0.9251310273212736, 2);
  sqcRZGate(q, -0.7380824203209944, 2);
  sqcRYGate(q, -3.120012528005936, 3);
  sqcRZGate(q, -2.1915817812556666, 3);
  sqcRYGate(q, -0.09243481363138262, 4);
  sqcRZGate(q, 1.6455296767766208, 4);
  sqcRYGate(q, 3.010962311125603, 5);
  sqcRZGate(q, -2.2627409045051587, 5);
  sqcRYGate(q, 2.987717949232929, 6);
  sqcRZGate(q, 0.9337289947888926, 6);
  sqcRYGate(q, -3.1411361102698216, 7);
  sqcRZGate(q, -2.3136957449518265, 7);
  sqcRYGate(q, 0.8749389933340841, 8);
  sqcRZGate(q, 1.7585524548466358, 8);
  sqcRYGate(q, -2.7087228735043465, 9);
  sqcRZGate(q, 2.727248748031205, 9);
  sqcRYGate(q, 0.9651452536147817, 10);
  sqcRZGate(q, -2.398967773945856, 10);
  sqcRYGate(q, -1.5283069484648881, 11);
  sqcRZGate(q, -0.3439752055369961, 11);
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
  sqcRYGate(q, 1.7087021892941472, 0);
  sqcRZGate(q, 1.9478099360950418, 0);
  sqcRYGate(q, 2.2614620504809286, 1);
  sqcRZGate(q, 1.9212393953920088, 1);
  sqcRYGate(q, -2.371935349595006, 2);
  sqcRZGate(q, -3.095394825205743, 2);
  sqcRYGate(q, -2.9901681631128856, 3);
  sqcRZGate(q, 0.2963049914629717, 3);
  sqcRYGate(q, 0.8063141302813541, 4);
  sqcRZGate(q, -0.12039008628141512, 4);
  sqcRYGate(q, 0.10684304458738697, 5);
  sqcRZGate(q, 3.1298499255671994, 5);
  sqcRYGate(q, 3.107814196772516, 6);
  sqcRZGate(q, -2.168989827504386, 6);
  sqcRYGate(q, 1.7530245800829116, 7);
  sqcRZGate(q, 1.5797066788857022, 7);
  sqcRYGate(q, 1.3728609735523756, 8);
  sqcRZGate(q, -3.0355914187488566, 8);
  sqcRYGate(q, 0.2647948302451702, 9);
  sqcRZGate(q, 0.11804991513570441, 9);
  sqcRYGate(q, 0.4107088445469893, 10);
  sqcRZGate(q, 2.713904077259674, 10);
  sqcRYGate(q, 0.002603280699019933, 11);
  sqcRZGate(q, -2.9708387576031474, 11);
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
  sqcRYGate(q, -0.7767912562644004, 0);
  sqcRZGate(q, 2.7144490364560525, 0);
  sqcRYGate(q, 1.5822176622075466, 1);
  sqcRZGate(q, -0.06387272383983054, 1);
  sqcRYGate(q, -2.8509818579896344, 2);
  sqcRZGate(q, -0.9588900647533662, 2);
  sqcRYGate(q, -0.4125479248305411, 3);
  sqcRZGate(q, -1.6980678170994477, 3);
  sqcRYGate(q, -1.5136324612851348, 4);
  sqcRZGate(q, -2.246407824867772, 4);
  sqcRYGate(q, -0.21585929828280867, 5);
  sqcRZGate(q, 0.4924552891772889, 5);
  sqcRYGate(q, -3.039625045189106, 6);
  sqcRZGate(q, 1.5995825472397152, 6);
  sqcRYGate(q, 3.138673234320064, 7);
  sqcRZGate(q, 0.7323761083611666, 7);
  sqcRYGate(q, 0.45882665573315506, 8);
  sqcRZGate(q, -0.4114701229961417, 8);
  sqcRYGate(q, -1.256309550376245, 9);
  sqcRZGate(q, 1.453214168637203, 9);
  sqcRYGate(q, -2.193446101857522, 10);
  sqcRZGate(q, 2.764760959189248, 10);
  sqcRYGate(q, 2.7120745720265385, 11);
  sqcRZGate(q, 0.18684069478988236, 11);
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
  sqcRYGate(q, -0.3740847667176874, 0);
  sqcRZGate(q, 0.14775596850368522, 0);
  sqcRYGate(q, 1.7845315810477413, 1);
  sqcRZGate(q, -1.7201188272105388, 1);
  sqcRYGate(q, 1.6071440106764652, 2);
  sqcRZGate(q, 1.8457641373723737, 2);
  sqcRYGate(q, 3.1347383706176566, 3);
  sqcRZGate(q, 0.11837316261677783, 3);
  sqcRYGate(q, 0.0011364246816518919, 4);
  sqcRZGate(q, -1.8182253719245542, 4);
  sqcRYGate(q, 1.5929819505661191, 5);
  sqcRZGate(q, -2.8047630735157068, 5);
  sqcRYGate(q, 2.779541310214162, 6);
  sqcRZGate(q, 0.04866933386830715, 6);
  sqcRYGate(q, -2.9401460336046816, 7);
  sqcRZGate(q, 2.016981603103261, 7);
  sqcRYGate(q, 2.493564642929367, 8);
  sqcRZGate(q, 2.7667850024236476, 8);
  sqcRYGate(q, 1.9142974281514782, 9);
  sqcRZGate(q, -1.912872132675206, 9);
  sqcRYGate(q, -1.226167503216267, 10);
  sqcRZGate(q, -0.8915385720708109, 10);
  sqcRYGate(q, 3.138444560537632, 11);
  sqcRZGate(q, -3.1232205320263278, 11);
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
  sqcRYGate(q, -1.77803174552159, 0);
  sqcRZGate(q, -2.9590405980636594, 0);
  sqcRYGate(q, -1.3375787822896825, 1);
  sqcRZGate(q, 1.1875428308349365, 1);
  sqcRYGate(q, -0.81767867763108, 2);
  sqcRZGate(q, -2.3390469123978845, 2);
  sqcRYGate(q, 0.05249807414102481, 3);
  sqcRZGate(q, -2.8520937225823997, 3);
  sqcRYGate(q, -1.0142167531826516, 4);
  sqcRZGate(q, 0.2215385750969373, 4);
  sqcRYGate(q, -2.378876212253591, 5);
  sqcRZGate(q, 1.8152115363509602, 5);
  sqcRYGate(q, 0.0511747295603282, 6);
  sqcRZGate(q, -1.636939887139509, 6);
  sqcRYGate(q, -0.0023376416732778793, 7);
  sqcRZGate(q, -0.8006989760883494, 7);
  sqcRYGate(q, -0.8538747441419904, 8);
  sqcRZGate(q, 1.2645882350788655, 8);
  sqcRYGate(q, 0.7199960028169432, 9);
  sqcRZGate(q, 0.9492762977158262, 9);
  sqcRYGate(q, 1.4540894502427202, 10);
  sqcRZGate(q, -0.2777168583769525, 10);
  sqcRYGate(q, -0.8881783999709852, 11);
  sqcRZGate(q, 1.8658426474576384, 11);
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
  sqcRYGate(q, -3.0796608553779707, 0);
  sqcRZGate(q, -2.7682056198318765, 0);
  sqcRYGate(q, 0.05450082194554273, 1);
  sqcRZGate(q, 0.3983019937930898, 1);
  sqcRYGate(q, -2.363839415998781, 2);
  sqcRZGate(q, -2.995122583586511, 2);
  sqcRYGate(q, -3.140493400814331, 3);
  sqcRZGate(q, -2.2795498590127385, 3);
  sqcRYGate(q, -0.023191580755682804, 4);
  sqcRZGate(q, 1.582496019050664, 4);
  sqcRYGate(q, -1.591755900573332, 5);
  sqcRZGate(q, -0.06782755446438406, 5);
  sqcRYGate(q, -1.5621729567200875, 6);
  sqcRZGate(q, -1.2842225588465983, 6);
  sqcRYGate(q, -2.6867659930579046, 7);
  sqcRZGate(q, -2.5988252745132163, 7);
  sqcRYGate(q, -0.30641480260046094, 8);
  sqcRZGate(q, -1.2362201287077264, 8);
  sqcRYGate(q, -0.5881820499624917, 9);
  sqcRZGate(q, -0.14794216517376685, 9);
  sqcRYGate(q, -1.3362420773576513, 10);
  sqcRZGate(q, 1.6385460830257081, 10);
  sqcRYGate(q, 1.7974813099238105, 11);
  sqcRZGate(q, 0.5777683904812889, 11);
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
  sqcRYGate(q, 1.6268191379799495, 0);
  sqcRZGate(q, -0.8581346067331038, 0);
  sqcRYGate(q, 1.0259975272990063, 1);
  sqcRZGate(q, 2.952961462008065, 1);
  sqcRYGate(q, -0.9819295687670513, 2);
  sqcRZGate(q, -2.256720066852465, 2);
  sqcRYGate(q, -3.1325683146844048, 3);
  sqcRZGate(q, 0.9356827228878121, 3);
  sqcRYGate(q, -1.5853767577071325, 4);
  sqcRZGate(q, 1.5806318818118272, 4);
  sqcRYGate(q, -1.5672816214927394, 5);
  sqcRZGate(q, -2.1713762745491545, 5);
  sqcRYGate(q, 0.05999755913449365, 6);
  sqcRZGate(q, -1.8708754068839504, 6);
  sqcRYGate(q, 1.4397552466938908, 7);
  sqcRZGate(q, -1.2564346505699215, 7);
  sqcRYGate(q, -3.008430930752101, 8);
  sqcRZGate(q, -1.6321888218251486, 8);
  sqcRYGate(q, 0.45017268157720025, 9);
  sqcRZGate(q, 1.9142090766233926, 9);
  sqcRYGate(q, 3.140371009373996, 10);
  sqcRZGate(q, -0.7361342965249065, 10);
  sqcRYGate(q, -0.0011653688791988495, 11);
  sqcRZGate(q, -0.5792539328874565, 11);
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
  sqcRYGate(q, -1.0980249551851982, 0);
  sqcRZGate(q, 0.10444269250092475, 0);
  sqcRYGate(q, 1.8965876603309377, 1);
  sqcRZGate(q, -2.967047840500884, 1);
  sqcRYGate(q, 1.9162932190364872, 2);
  sqcRZGate(q, -3.1048082926213234, 2);
  sqcRYGate(q, -3.072979742263231, 3);
  sqcRZGate(q, 1.7648079112963728, 3);
  sqcRYGate(q, 1.5700257812059748, 4);
  sqcRZGate(q, 0.12582224973361633, 4);
  sqcRYGate(q, -0.8655952380904571, 5);
  sqcRZGate(q, -1.048769432655078, 5);
  sqcRYGate(q, -3.1169890378194536, 6);
  sqcRZGate(q, 1.8107911731310853, 6);
  sqcRYGate(q, -0.4265778588542961, 7);
  sqcRZGate(q, 1.8660559877229341, 7);
  sqcRYGate(q, 0.5953280686866806, 8);
  sqcRZGate(q, -0.05365416597943488, 8);
  sqcRYGate(q, -2.4306499278556926, 9);
  sqcRZGate(q, 2.8123707253375465, 9);
  sqcRYGate(q, 1.4939907539399262, 10);
  sqcRZGate(q, -2.642170989340959, 10);
  sqcRYGate(q, 1.798289909910321, 11);
  sqcRZGate(q, -2.353571331701122, 11);
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
  sqcRYGate(q, 1.087868917848667, 0);
  sqcRZGate(q, -0.7023633568954084, 0);
  sqcRYGate(q, -2.4136742872845507, 1);
  sqcRZGate(q, -0.6237786242973091, 1);
  sqcRYGate(q, -2.9238920900986374, 2);
  sqcRZGate(q, -2.9946105197668302, 2);
  sqcRYGate(q, -1.3064169031491213, 3);
  sqcRZGate(q, -2.9043199601915, 3);
  sqcRYGate(q, -3.122195024141828, 4);
  sqcRZGate(q, 2.8296382114216967, 4);
  sqcRYGate(q, -1.9597887316094176, 5);
  sqcRZGate(q, 0.0335973995150347, 5);
  sqcRYGate(q, 0.059622484607562136, 6);
  sqcRZGate(q, 0.47297793885361555, 6);
  sqcRYGate(q, -0.589930725609886, 7);
  sqcRZGate(q, 2.9771675823032124, 7);
  sqcRYGate(q, -1.3605549725536377, 8);
  sqcRZGate(q, 3.0553458510206584, 8);
  sqcRYGate(q, -0.4935462178317087, 9);
  sqcRZGate(q, 2.2789843782629906, 9);
  sqcRYGate(q, -1.6219420679990637, 10);
  sqcRZGate(q, 2.1525076932899316, 10);
  sqcRYGate(q, -0.17949407830267994, 11);
  sqcRZGate(q, -1.1927068429587886, 11);
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
  sqcRYGate(q, 2.380987121250723, 0);
  sqcRZGate(q, -2.094110337847174, 0);
  sqcRYGate(q, -0.32686077464007257, 1);
  sqcRZGate(q, -1.426518782018084, 1);
  sqcRYGate(q, -1.1199456885655072, 2);
  sqcRZGate(q, 0.08814530825188249, 2);
  sqcRYGate(q, -2.945582788763554, 3);
  sqcRZGate(q, 2.4183472399770998, 3);
  sqcRYGate(q, 3.1389445439060553, 4);
  sqcRZGate(q, -2.7522291434707657, 4);
  sqcRYGate(q, -1.0443913163830636, 5);
  sqcRZGate(q, -0.11228238473052388, 5);
  sqcRYGate(q, 0.0030810678495347874, 6);
  sqcRZGate(q, 2.6031695858680526, 6);
  sqcRYGate(q, 1.9586197623696595, 7);
  sqcRZGate(q, -2.863850154140174, 7);
  sqcRYGate(q, 0.7140083673646225, 8);
  sqcRZGate(q, -0.779315267462961, 8);
  sqcRYGate(q, 2.3744970903248404, 9);
  sqcRZGate(q, -1.7079464436727751, 9);
  sqcRYGate(q, -0.5725704636560653, 10);
  sqcRZGate(q, -1.4132076258191837, 10);
  sqcRYGate(q, -0.002632570007326862, 11);
  sqcRZGate(q, -0.5333584657857653, 11);
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
  sqcRYGate(q, 3.1265968656107477, 0);
  sqcRZGate(q, -1.6696930021591116, 0);
  sqcRYGate(q, 3.1203856333937945, 1);
  sqcRZGate(q, 1.1021705532229493, 1);
  sqcRYGate(q, -0.15561747533579418, 2);
  sqcRZGate(q, -0.0657453287621257, 2);
  sqcRYGate(q, -2.311694676918417, 3);
  sqcRZGate(q, 0.8104909777765268, 3);
  sqcRYGate(q, 3.1309967569643686, 4);
  sqcRZGate(q, 2.029637492468114, 4);
  sqcRYGate(q, 1.1937857039726127, 5);
  sqcRZGate(q, -0.9838518906968414, 5);
  sqcRYGate(q, -2.3680009651998315, 6);
  sqcRZGate(q, 2.7223821937960486, 6);
  sqcRYGate(q, -0.9380456067826799, 7);
  sqcRZGate(q, 2.362208642396739, 7);
  sqcRYGate(q, 1.706461180332406, 8);
  sqcRZGate(q, -0.6865355661987245, 8);
  sqcRYGate(q, -2.3483450020656322, 9);
  sqcRZGate(q, -1.8925037642248927, 9);
  sqcRYGate(q, -2.272667576549626, 10);
  sqcRZGate(q, -1.3637514585054777, 10);
  sqcRYGate(q, -2.2285380729537327, 11);
  sqcRZGate(q, -2.001643798595859, 11);
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
  sqcRYGate(q, -3.065120668576207, 0);
  sqcRZGate(q, -2.255856933833596, 0);
  sqcRYGate(q, -0.1514252524900856, 1);
  sqcRZGate(q, 2.8219209201240214, 1);
  sqcRYGate(q, -0.617875806551929, 2);
  sqcRZGate(q, 1.5740653356457521, 2);
  sqcRYGate(q, 1.5401638396343071, 3);
  sqcRZGate(q, -0.6080747277626118, 3);
  sqcRYGate(q, 0.3545935075970279, 4);
  sqcRZGate(q, -3.0537842835169338, 4);
  sqcRYGate(q, 1.6034513949289366, 5);
  sqcRZGate(q, 0.6739320240107922, 5);
  sqcRYGate(q, -3.1125480530076444, 6);
  sqcRZGate(q, 0.4390244962666257, 6);
  sqcRYGate(q, -0.24482362493350693, 7);
  sqcRZGate(q, -2.132010579653208, 7);
  sqcRYGate(q, 2.4944235584547454, 8);
  sqcRZGate(q, 1.9453615591683808, 8);
  sqcRYGate(q, -2.7161532475312544, 9);
  sqcRZGate(q, -2.3000860513128183, 9);
  sqcRYGate(q, -2.4344816435510226, 10);
  sqcRZGate(q, 2.484783784312924, 10);
  sqcRYGate(q, 3.1415519962655547, 11);
  sqcRZGate(q, 2.8629664143023343, 11);
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
  sqcRYGate(q, 2.407276378943867, 0);
  sqcRZGate(q, 2.0964802734352554, 0);
  sqcRYGate(q, 3.138966846874823, 1);
  sqcRZGate(q, 2.6723382955409156, 1);
  sqcRYGate(q, 1.3050141074862822, 2);
  sqcRZGate(q, 2.3673565538404726, 2);
  sqcRYGate(q, -3.0794155984433047, 3);
  sqcRZGate(q, -1.2871199633339678, 3);
  sqcRYGate(q, -3.0787793837609496, 4);
  sqcRZGate(q, -3.1079057476236236, 4);
  sqcRYGate(q, -3.1346621291868613, 5);
  sqcRZGate(q, 1.1601851943682835, 5);
  sqcRYGate(q, -1.7305503333918164, 6);
  sqcRZGate(q, -2.1451187003852183, 6);
  sqcRYGate(q, 0.3725284504932862, 7);
  sqcRZGate(q, -2.3959010301411316, 7);
  sqcRYGate(q, -2.5032394632303756, 8);
  sqcRZGate(q, -0.803693352399292, 8);
  sqcRYGate(q, -2.482016560421321, 9);
  sqcRZGate(q, -1.7505598572261318, 9);
  sqcRYGate(q, 2.3270486511425634, 10);
  sqcRZGate(q, -0.6691837384469972, 10);
  sqcRYGate(q, -2.419911267352756, 11);
  sqcRZGate(q, 0.6503307681457011, 11);
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
  sqcRYGate(q, -2.8692100785548504, 0);
  sqcRZGate(q, 0.8382400680087172, 0);
  sqcRYGate(q, -2.9667520194153534, 1);
  sqcRZGate(q, 1.58536332400759, 1);
  sqcRYGate(q, 0.0023629978738739068, 2);
  sqcRZGate(q, 3.0568330571628937, 2);
  sqcRYGate(q, 3.1213241637324947, 3);
  sqcRZGate(q, -0.4258667087336926, 3);
  sqcRYGate(q, 2.785260255472391, 4);
  sqcRZGate(q, -1.1129904710715737, 4);
  sqcRYGate(q, -3.044910005324585, 5);
  sqcRZGate(q, 0.28421648997913884, 5);
  sqcRYGate(q, -0.07854983738125931, 6);
  sqcRZGate(q, -2.295273369175062, 6);
  sqcRYGate(q, -0.11114568154185771, 7);
  sqcRZGate(q, -1.6402165595809832, 7);
  sqcRYGate(q, 0.9693285179571881, 8);
  sqcRZGate(q, 1.444040307860647, 8);
  sqcRYGate(q, -1.3900737295667804, 9);
  sqcRZGate(q, 0.5930802194071279, 9);
  sqcRYGate(q, 0.8066216548940803, 10);
  sqcRZGate(q, 1.7290251709479687, 10);
  sqcRYGate(q, -0.0005010232735869884, 11);
  sqcRZGate(q, -1.6573995984111116, 11);
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
  sqcRYGate(q, -0.9260404333654124, 0);
  sqcRZGate(q, -2.472398872662651, 0);
  sqcRYGate(q, 1.5325937985441278, 1);
  sqcRZGate(q, 1.3343638081056284, 1);
  sqcRYGate(q, -3.040657870266296, 2);
  sqcRZGate(q, 2.290173122652662, 2);
  sqcRYGate(q, -2.719084336639834, 3);
  sqcRZGate(q, 0.45615296438528663, 3);
  sqcRYGate(q, -1.5529701878522113, 4);
  sqcRZGate(q, -2.379651409857382, 4);
  sqcRYGate(q, 3.0735669407524604, 5);
  sqcRZGate(q, -1.7740317389875004, 5);
  sqcRYGate(q, 0.6423954547303189, 6);
  sqcRZGate(q, -0.3447029702449358, 6);
  sqcRYGate(q, 0.2159876572083667, 7);
  sqcRZGate(q, -0.9096331801809923, 7);
  sqcRYGate(q, 1.0433676748455474, 8);
  sqcRZGate(q, -2.7435305757519752, 8);
  sqcRYGate(q, 2.78017968231343, 9);
  sqcRZGate(q, -2.0781853507463923, 9);
  sqcRYGate(q, -0.6558580524725511, 10);
  sqcRZGate(q, -2.5733676916787136, 10);
  sqcRYGate(q, 1.5741461498067157, 11);
  sqcRZGate(q, 2.283999069640588, 11);
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
  sqcRYGate(q, 1.7720999924991692, 0);
  sqcRZGate(q, -0.06886782941977819, 0);
  sqcRYGate(q, -0.012833391791584603, 1);
  sqcRZGate(q, 2.6570710356649565, 1);
  sqcRYGate(q, -2.0101587715996456, 2);
  sqcRZGate(q, -0.6373765133117066, 2);
  sqcRYGate(q, -0.0006286584079888519, 3);
  sqcRZGate(q, 3.0717579660663406, 3);
  sqcRYGate(q, -0.00012671242787121173, 4);
  sqcRZGate(q, 2.9845152872521874, 4);
  sqcRYGate(q, 1.5759074446225918, 5);
  sqcRZGate(q, 1.516906534097874, 5);
  sqcRYGate(q, 1.2227780706765286, 6);
  sqcRZGate(q, -1.4046107962325114, 6);
  sqcRYGate(q, -0.24052552520394865, 7);
  sqcRZGate(q, -2.334341304227815, 7);
  sqcRYGate(q, -0.7368762712332684, 8);
  sqcRZGate(q, -1.860639983681182, 8);
  sqcRYGate(q, 1.2859612985891067, 9);
  sqcRZGate(q, 1.8738093179221238, 9);
  sqcRYGate(q, 0.3587680108843001, 10);
  sqcRZGate(q, 0.08562820118927929, 10);
  sqcRYGate(q, -0.8851808527380545, 11);
  sqcRZGate(q, -0.0030431313109558584, 11);
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
  sqcRYGate(q, -2.4494534626155007, 0);
  sqcRZGate(q, 1.4099806340818533, 0);
  sqcRYGate(q, 3.141513603284867, 1);
  sqcRZGate(q, 2.4680592513300943, 1);
  sqcRYGate(q, 3.0444719727316776, 2);
  sqcRZGate(q, -0.6788913108369508, 2);
  sqcRYGate(q, -2.668854100478821, 3);
  sqcRZGate(q, 0.16609914765393174, 3);
  sqcRYGate(q, -1.4146279308084972, 4);
  sqcRZGate(q, -2.630059519357936, 4);
  sqcRYGate(q, 1.8379210364546545, 5);
  sqcRZGate(q, 2.639645486782546, 5);
  sqcRYGate(q, -3.1349290284475986, 6);
  sqcRZGate(q, 1.7226267047654766, 6);
  sqcRYGate(q, 3.1318567426667747, 7);
  sqcRZGate(q, 0.4490911774961441, 7);
  sqcRYGate(q, 1.0393835971788894, 8);
  sqcRZGate(q, 0.7857036390267415, 8);
  sqcRYGate(q, 1.5934319599156859, 9);
  sqcRZGate(q, 1.0355998860101634, 9);
  sqcRYGate(q, -3.1406760390218245, 10);
  sqcRZGate(q, 0.07447229852038183, 10);
  sqcRYGate(q, -2.52179538051751, 11);
  sqcRZGate(q, 3.1377827509746283, 11);
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
  sqcRYGate(q, -2.082734876503496, 0);
  sqcRZGate(q, 2.5866113395672174, 0);
  sqcRYGate(q, 2.664350139982389, 1);
  sqcRZGate(q, -1.4465269483272274, 1);
  sqcRYGate(q, 2.0538189745377595, 2);
  sqcRZGate(q, 1.849361989232568, 2);
  sqcRYGate(q, 3.1385526543585507, 3);
  sqcRZGate(q, -1.2863730004364902, 3);
  sqcRYGate(q, -3.138017911113574, 4);
  sqcRZGate(q, -0.9698414653269117, 4);
  sqcRYGate(q, 3.094688218855891, 5);
  sqcRZGate(q, 2.9594428095517302, 5);
  sqcRYGate(q, -1.683824066701022, 6);
  sqcRZGate(q, -1.3265481417660665, 6);
  sqcRYGate(q, -1.5534180492458658, 7);
  sqcRZGate(q, -0.560375160305837, 7);
  sqcRYGate(q, 2.2732479367213876, 8);
  sqcRZGate(q, 0.7284999722289751, 8);
  sqcRYGate(q, -0.19604620472564616, 9);
  sqcRZGate(q, -0.3094122819950771, 9);
  sqcRYGate(q, 0.9559538129006062, 10);
  sqcRZGate(q, 0.6564140728328975, 10);
  sqcRYGate(q, 0.8849689759902344, 11);
  sqcRZGate(q, -0.7106433658528968, 11);
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
  sqcRYGate(q, 3.1015541728947893, 0);
  sqcRZGate(q, -0.6820834170272776, 0);
  sqcRYGate(q, -1.969243819675829, 1);
  sqcRZGate(q, 0.1964080046609307, 1);
  sqcRYGate(q, 3.0699652539337308, 2);
  sqcRZGate(q, -0.2471225572917063, 2);
  sqcRYGate(q, -3.052944700487972, 3);
  sqcRZGate(q, -3.1301610976144256, 3);
  sqcRYGate(q, 1.0410721990074254, 4);
  sqcRZGate(q, 0.5626873150323174, 4);
  sqcRYGate(q, 1.9593657350342295, 5);
  sqcRZGate(q, -1.4578336609548332, 5);
  sqcRYGate(q, 3.1375297281452412, 6);
  sqcRZGate(q, -1.3270102434618023, 6);
  sqcRYGate(q, 3.1307320261615206, 7);
  sqcRZGate(q, -0.1863217685433014, 7);
  sqcRYGate(q, -0.15802293014382404, 8);
  sqcRZGate(q, -2.4835801885279465, 8);
  sqcRYGate(q, -1.3611347263383902, 9);
  sqcRZGate(q, 2.689626597093818, 9);
  sqcRYGate(q, -1.210233753869058, 10);
  sqcRZGate(q, -1.796450471555942, 10);
  sqcRYGate(q, -0.708227708962314, 11);
  sqcRZGate(q, -1.52382931226448, 11);
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
  sqcRYGate(q, -3.120152693565349, 0);
  sqcRZGate(q, 0.9899972252434743, 0);
  sqcRYGate(q, 1.5185042923938084, 1);
  sqcRZGate(q, -0.44928819881104776, 1);
  sqcRYGate(q, 3.1272182004608085, 2);
  sqcRZGate(q, -0.5319756256276856, 2);
  sqcRYGate(q, 1.5707954437628824, 3);
  sqcRZGate(q, -2.7936894070294307, 3);
  sqcRYGate(q, -3.139043270433684, 4);
  sqcRZGate(q, -0.42343814834372484, 4);
  sqcRYGate(q, 1.575993455796351, 5);
  sqcRZGate(q, -0.032545625404291734, 5);
  sqcRYGate(q, 2.797581355433192, 6);
  sqcRZGate(q, -2.7287537830546174, 6);
  sqcRYGate(q, -1.5286204721630174, 7);
  sqcRZGate(q, -1.1482505640601055, 7);
  sqcRYGate(q, -0.45259279658260837, 8);
  sqcRZGate(q, 1.349496805733284, 8);
  sqcRYGate(q, 2.2894512045937128, 9);
  sqcRZGate(q, 2.8525415893181663, 9);
  sqcRYGate(q, 1.407830362180299, 10);
  sqcRZGate(q, -0.7473966382702936, 10);
  sqcRYGate(q, 0.0029836411496511335, 11);
  sqcRZGate(q, 1.4951874421110078, 11);
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
  sqcRYGate(q, -3.088533730284465, 0);
  sqcRZGate(q, -0.6468468376203962, 0);
  sqcRYGate(q, -2.9011442790392366, 1);
  sqcRZGate(q, 1.0385085407275287, 1);
  sqcRYGate(q, -1.5718753958730833, 2);
  sqcRZGate(q, -0.1735504635002593, 2);
  sqcRYGate(q, -1.5874731888322025, 3);
  sqcRZGate(q, -0.3674823632095574, 3);
  sqcRYGate(q, 1.3762418210728722, 4);
  sqcRZGate(q, -2.9111130704034056, 4);
  sqcRYGate(q, 0.3680771251114052, 5);
  sqcRZGate(q, 2.530956743278243, 5);
  sqcRYGate(q, 3.1212665472392342, 6);
  sqcRZGate(q, 0.4077588597966608, 6);
  sqcRYGate(q, 0.022108091896211768, 7);
  sqcRZGate(q, 3.074857624965699, 7);
  sqcRYGate(q, 0.1673702929791712, 8);
  sqcRZGate(q, 1.897248827696151, 8);
  sqcRYGate(q, 1.4122568258656842, 9);
  sqcRZGate(q, 0.7610584910606155, 9);
  sqcRYGate(q, -0.8713769622468113, 10);
  sqcRZGate(q, 0.709042593635453, 10);
  sqcRYGate(q, -1.657673456724349, 11);
  sqcRZGate(q, 0.2166597349315378, 11);
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
  sqcRYGate(q, -0.023382077704049542, 0);
  sqcRZGate(q, -1.8596638167522057, 0);
  sqcRYGate(q, 1.5721207042567067, 1);
  sqcRZGate(q, -0.7801247086923109, 1);
  sqcRYGate(q, 0.005433365638780607, 2);
  sqcRZGate(q, 1.0589881524778697, 2);
  sqcRYGate(q, -0.0008638759106625404, 3);
  sqcRZGate(q, -0.3957338716925834, 3);
  sqcRYGate(q, 3.1403181100781863, 4);
  sqcRZGate(q, -2.4325040122617376, 4);
  sqcRYGate(q, -0.002126588471160318, 5);
  sqcRZGate(q, -1.7834220048317206, 5);
  sqcRYGate(q, -2.185798240701757, 6);
  sqcRZGate(q, -0.2577701055036581, 6);
  sqcRYGate(q, -0.3222361441595821, 7);
  sqcRZGate(q, 2.6961762055190053, 7);
  sqcRYGate(q, 2.864906564521175, 8);
  sqcRZGate(q, -1.9743358824586101, 8);
  sqcRYGate(q, -1.1717954648781868, 9);
  sqcRZGate(q, 0.07077933677322877, 9);
  sqcRYGate(q, -1.5602441899153356, 10);
  sqcRZGate(q, -2.4832778047562654, 10);
  sqcRYGate(q, 0.00012681547797654957, 11);
  sqcRZGate(q, -0.7851960945199927, 11);
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
  sqcRYGate(q, -0.8052116572648156, 0);
  sqcRZGate(q, -2.77121585813257, 0);
  sqcRYGate(q, 1.5917117537610947, 1);
  sqcRZGate(q, 1.914521915022033, 1);
  sqcRYGate(q, -2.0394212739049578, 2);
  sqcRZGate(q, 2.442720724734454, 2);
  sqcRYGate(q, 2.3638639135523456, 3);
  sqcRZGate(q, 1.6075667312021855, 3);
  sqcRYGate(q, 2.6938828386474327, 4);
  sqcRZGate(q, -3.097355246084405, 4);
  sqcRYGate(q, -2.20730394060014, 5);
  sqcRZGate(q, -1.6234565845773656, 5);
  sqcRYGate(q, -2.9656347916409933, 6);
  sqcRZGate(q, 1.5733924867256945, 6);
  sqcRYGate(q, -1.4561468201838468, 7);
  sqcRZGate(q, 1.922097040117813, 7);
  sqcRYGate(q, 0.9202980374126986, 8);
  sqcRZGate(q, 1.2629395932502385, 8);
  sqcRYGate(q, -2.49097631588258, 9);
  sqcRZGate(q, 1.4392196166879683, 9);
  sqcRYGate(q, -1.0544438631161022, 10);
  sqcRZGate(q, 3.061075913894622, 10);
  sqcRYGate(q, -2.3572026772685093, 11);
  sqcRZGate(q, 1.4074881774879255, 11);

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
