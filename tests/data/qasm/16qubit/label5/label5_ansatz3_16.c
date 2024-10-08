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

  sqcRYGate(q, 1.6424482129390954, 0);
  sqcRZGate(q, 1.8549652091047986, 0);
  sqcRYGate(q, 1.5824305497384232, 1);
  sqcRZGate(q, 2.270424495650623, 1);
  sqcRYGate(q, -2.523430111666733, 2);
  sqcRZGate(q, -0.41506334886029106, 2);
  sqcRYGate(q, 0.4427599646577175, 3);
  sqcRZGate(q, 1.1180850965538867, 3);
  sqcRYGate(q, -2.2742318580870506, 4);
  sqcRZGate(q, 1.8478800189525306, 4);
  sqcRYGate(q, 2.0989186987527244, 5);
  sqcRZGate(q, 1.9053022746410546, 5);
  sqcRYGate(q, 0.11611251974247608, 6);
  sqcRZGate(q, -0.11927105149603802, 6);
  sqcRYGate(q, 3.140756072671268, 7);
  sqcRZGate(q, 2.270299123299516, 7);
  sqcRYGate(q, -3.138007948354912, 8);
  sqcRZGate(q, -2.568668854175299, 8);
  sqcRYGate(q, -0.1238231571515049, 9);
  sqcRZGate(q, -3.1065603381728257, 9);
  sqcRYGate(q, 1.5735051167736636, 10);
  sqcRZGate(q, 0.28051311874797324, 10);
  sqcRYGate(q, -1.5739455208607813, 11);
  sqcRZGate(q, 1.1651975221358113, 11);
  sqcRYGate(q, -0.002826849927991759, 12);
  sqcRZGate(q, 2.7904363443105655, 12);
  sqcRYGate(q, -0.05993945092219821, 13);
  sqcRZGate(q, -1.5965883114906594, 13);
  sqcRYGate(q, 3.0966417623981974, 14);
  sqcRZGate(q, -0.033832121922709915, 14);
  sqcRYGate(q, -3.112826095590472, 15);
  sqcRZGate(q, -1.5395824647436536, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.6621095598429765, 0);
  sqcRZGate(q, 2.3526445116874393, 0);
  sqcRYGate(q, 0.24247932334447064, 1);
  sqcRZGate(q, 1.1144322414812329, 1);
  sqcRYGate(q, -2.287573732158503, 2);
  sqcRZGate(q, 1.13937544642784, 2);
  sqcRYGate(q, -1.457313347460123, 3);
  sqcRZGate(q, 1.9481905541990603, 3);
  sqcRYGate(q, -2.2933017384131653, 4);
  sqcRZGate(q, 1.917206517266476, 4);
  sqcRYGate(q, 1.468293398614863, 5);
  sqcRZGate(q, 0.5579565107739233, 5);
  sqcRYGate(q, 3.114475185203785, 6);
  sqcRZGate(q, 0.16690632420117474, 6);
  sqcRYGate(q, 0.00021486537083788957, 7);
  sqcRZGate(q, -0.33937370734679634, 7);
  sqcRYGate(q, 0.07975228380954569, 8);
  sqcRZGate(q, 0.04519270374977236, 8);
  sqcRYGate(q, 1.494918605754723, 9);
  sqcRZGate(q, 2.59360300607776, 9);
  sqcRYGate(q, -1.6202115263130739, 10);
  sqcRZGate(q, 2.9488803589141863, 10);
  sqcRYGate(q, 1.846503523860724, 11);
  sqcRZGate(q, -0.22069519648579047, 11);
  sqcRYGate(q, -1.5740942046872188, 12);
  sqcRZGate(q, 2.598083279033825, 12);
  sqcRYGate(q, -2.879107278094072, 13);
  sqcRZGate(q, 1.5752643874469827, 13);
  sqcRYGate(q, 3.097811957272333, 14);
  sqcRZGate(q, 2.0889909335824806, 14);
  sqcRYGate(q, 2.308533263852725, 15);
  sqcRZGate(q, 0.7699902150647229, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.512360212357595, 0);
  sqcRZGate(q, 2.203228957279509, 0);
  sqcRYGate(q, 0.337955787606262, 1);
  sqcRZGate(q, 0.9122003137006356, 1);
  sqcRYGate(q, 3.0120091496329136, 2);
  sqcRZGate(q, 0.2716321984901231, 2);
  sqcRYGate(q, 1.14028604691489, 3);
  sqcRZGate(q, 2.6425086312884174, 3);
  sqcRYGate(q, 0.9491388930584721, 4);
  sqcRZGate(q, 1.845478692162344, 4);
  sqcRYGate(q, -1.3173407533296224, 5);
  sqcRZGate(q, 2.8383339714124713, 5);
  sqcRYGate(q, 0.44895808215139077, 6);
  sqcRZGate(q, 2.952783738617432, 6);
  sqcRYGate(q, 3.082997263813406, 7);
  sqcRZGate(q, -1.7432475902644757, 7);
  sqcRYGate(q, -3.0544026764172774, 8);
  sqcRZGate(q, 1.2356979052762411, 8);
  sqcRYGate(q, -0.03410631346938005, 9);
  sqcRZGate(q, -2.761239921378147, 9);
  sqcRYGate(q, 1.5670088385950207, 10);
  sqcRZGate(q, -0.880531548076053, 10);
  sqcRYGate(q, 0.0032062015847991784, 11);
  sqcRZGate(q, -1.8294380553607876, 11);
  sqcRYGate(q, 2.7577263075449685, 12);
  sqcRZGate(q, -2.2079213972198923, 12);
  sqcRYGate(q, 0.00046387309954187345, 13);
  sqcRZGate(q, 0.6968866802817917, 13);
  sqcRYGate(q, 1.5709805672033488, 14);
  sqcRZGate(q, -0.39705779218177256, 14);
  sqcRYGate(q, 3.0829491405574427, 15);
  sqcRZGate(q, 0.9366168179364117, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.4202346571769495, 0);
  sqcRZGate(q, 0.7039916101049835, 0);
  sqcRYGate(q, -2.207633397678667, 1);
  sqcRZGate(q, 1.3238607290580457, 1);
  sqcRYGate(q, -1.785771988609642, 2);
  sqcRZGate(q, 1.3561867710491233, 2);
  sqcRYGate(q, 1.7768223099194094, 3);
  sqcRZGate(q, 1.4494916437127878, 3);
  sqcRYGate(q, 0.09265578381172403, 4);
  sqcRZGate(q, 1.7487658716119867, 4);
  sqcRYGate(q, -0.8052847523440746, 5);
  sqcRZGate(q, -1.100910988500913, 5);
  sqcRYGate(q, -0.09471838774151564, 6);
  sqcRZGate(q, 2.9972386441942658, 6);
  sqcRYGate(q, 0.0005843273973353546, 7);
  sqcRZGate(q, 2.957107349622842, 7);
  sqcRYGate(q, 0.00036027041175662363, 8);
  sqcRZGate(q, 1.338519828892637, 8);
  sqcRYGate(q, -3.062664495357953, 9);
  sqcRZGate(q, 0.8420596305925425, 9);
  sqcRYGate(q, 0.4776932314040504, 10);
  sqcRZGate(q, -3.0975216799351144, 10);
  sqcRYGate(q, 1.7703294454983514, 11);
  sqcRZGate(q, -1.786589829904396, 11);
  sqcRYGate(q, 1.572512334764462, 12);
  sqcRZGate(q, 3.0726349432631372, 12);
  sqcRYGate(q, 3.1330821058770333, 13);
  sqcRZGate(q, 2.519533908877614, 13);
  sqcRYGate(q, 1.6258640851463897, 14);
  sqcRZGate(q, -1.7810718521072972, 14);
  sqcRYGate(q, 1.5331969102509164, 15);
  sqcRZGate(q, -0.7000479095210892, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.731975228283867, 0);
  sqcRZGate(q, 1.7290952550127732, 0);
  sqcRYGate(q, -1.4152374615306085, 1);
  sqcRZGate(q, 0.37802912911959213, 1);
  sqcRYGate(q, -1.057475850627684, 2);
  sqcRZGate(q, -2.6850833746935265, 2);
  sqcRYGate(q, -1.9022934476344426, 3);
  sqcRZGate(q, 2.8801564954663563, 3);
  sqcRYGate(q, -1.996800481522917, 4);
  sqcRZGate(q, 2.673634827165159, 4);
  sqcRYGate(q, 2.4267070075469714, 5);
  sqcRZGate(q, -1.5120093381169761, 5);
  sqcRYGate(q, -0.3776957665292477, 6);
  sqcRZGate(q, 0.9870291487713129, 6);
  sqcRYGate(q, -0.09600377290503116, 7);
  sqcRZGate(q, -0.42278422712476965, 7);
  sqcRYGate(q, -0.27250313138075205, 8);
  sqcRZGate(q, -0.9675997797932939, 8);
  sqcRYGate(q, 3.1283400378076753, 9);
  sqcRZGate(q, -0.6885120019799206, 9);
  sqcRYGate(q, 1.1541560591034874, 10);
  sqcRZGate(q, -2.2275334031665395, 10);
  sqcRYGate(q, 3.141516846013871, 11);
  sqcRZGate(q, 2.7248678349976654, 11);
  sqcRYGate(q, -3.0640470551538916, 12);
  sqcRZGate(q, 0.38605548112231775, 12);
  sqcRYGate(q, 0.022856824342843755, 13);
  sqcRZGate(q, -1.4397948287377829, 13);
  sqcRYGate(q, -0.09193433777959825, 14);
  sqcRZGate(q, 1.7528230110502478, 14);
  sqcRYGate(q, -3.1351772822141655, 15);
  sqcRZGate(q, -2.7970742730477873, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.9656460640239346, 0);
  sqcRZGate(q, 0.742205357814731, 0);
  sqcRYGate(q, -1.9731455565918887, 1);
  sqcRZGate(q, -3.020558607104968, 1);
  sqcRYGate(q, -1.873836217299683, 2);
  sqcRZGate(q, 2.304835074356387, 2);
  sqcRYGate(q, 0.037569242118808965, 3);
  sqcRZGate(q, 1.8794152064758753, 3);
  sqcRYGate(q, 0.3078690503243855, 4);
  sqcRZGate(q, -0.06475211515359765, 4);
  sqcRYGate(q, -1.9013674893016963, 5);
  sqcRZGate(q, 2.858690429060278, 5);
  sqcRYGate(q, -3.109973984231662, 6);
  sqcRZGate(q, 2.9827465766060923, 6);
  sqcRYGate(q, 0.0014873006443477778, 7);
  sqcRZGate(q, 2.578933844821055, 7);
  sqcRYGate(q, -0.0004596672991832307, 8);
  sqcRZGate(q, 1.613500196379771, 8);
  sqcRYGate(q, -0.007685695451481145, 9);
  sqcRZGate(q, -3.0274965816269535, 9);
  sqcRYGate(q, -3.129203731847205, 10);
  sqcRZGate(q, 0.9535814211413093, 10);
  sqcRYGate(q, 3.066947812926448, 11);
  sqcRZGate(q, -0.5523483534704985, 11);
  sqcRYGate(q, -3.140768928255418, 12);
  sqcRZGate(q, 2.353482503935303, 12);
  sqcRYGate(q, -1.6513527641089678, 13);
  sqcRZGate(q, 0.5224402690827193, 13);
  sqcRYGate(q, -1.7116094147675884, 14);
  sqcRZGate(q, 2.9185100305025955, 14);
  sqcRYGate(q, -0.08978714294403378, 15);
  sqcRZGate(q, 0.9754610136869565, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.611393847249463, 0);
  sqcRZGate(q, 2.776535219622654, 0);
  sqcRYGate(q, -1.6668677742050688, 1);
  sqcRZGate(q, -2.8569859543384157, 1);
  sqcRYGate(q, 2.167080225932934, 2);
  sqcRZGate(q, -0.26501803876092767, 2);
  sqcRYGate(q, -0.8251060775111249, 3);
  sqcRZGate(q, 0.7072058972981768, 3);
  sqcRYGate(q, -0.7494685140319176, 4);
  sqcRZGate(q, 1.7349851320221168, 4);
  sqcRYGate(q, -2.188144352135614, 5);
  sqcRZGate(q, 1.6914636798515614, 5);
  sqcRYGate(q, 0.03061132726817828, 6);
  sqcRZGate(q, -2.981033412230487, 6);
  sqcRYGate(q, 3.103056893710754, 7);
  sqcRZGate(q, 0.6819325219294042, 7);
  sqcRYGate(q, -1.4576366523262794, 8);
  sqcRZGate(q, -2.0054695847761526, 8);
  sqcRYGate(q, -0.4664654400131844, 9);
  sqcRZGate(q, 1.589701249818703, 9);
  sqcRYGate(q, 1.1571780487850756, 10);
  sqcRZGate(q, 0.031095486745520998, 10);
  sqcRYGate(q, -3.1405088101043086, 11);
  sqcRZGate(q, 0.8554399785964497, 11);
  sqcRYGate(q, -3.1415635415341483, 12);
  sqcRZGate(q, 2.242704724969798, 12);
  sqcRYGate(q, 3.04952897059934, 13);
  sqcRZGate(q, -0.8317635647364456, 13);
  sqcRYGate(q, -1.5881592719267026, 14);
  sqcRZGate(q, 0.7574097756603919, 14);
  sqcRYGate(q, -2.169401593429647, 15);
  sqcRZGate(q, -0.8534665778280575, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.0954168893466891, 0);
  sqcRZGate(q, -0.23502886553514202, 0);
  sqcRYGate(q, -2.393359796323696, 1);
  sqcRZGate(q, 1.1196052870811526, 1);
  sqcRYGate(q, -2.8465717149028387, 2);
  sqcRZGate(q, 1.4841682818378095, 2);
  sqcRYGate(q, 2.71604837234637, 3);
  sqcRZGate(q, -2.6191599791503397, 3);
  sqcRYGate(q, -2.9165536787198802, 4);
  sqcRZGate(q, 1.294847705017374, 4);
  sqcRYGate(q, 1.0234546381533072, 5);
  sqcRZGate(q, 2.851445478230423, 5);
  sqcRYGate(q, 0.008257912472544862, 6);
  sqcRZGate(q, 0.5227457186014396, 6);
  sqcRYGate(q, -3.139446829165422, 7);
  sqcRZGate(q, 0.5038230594852635, 7);
  sqcRYGate(q, 3.1411225200258834, 8);
  sqcRZGate(q, 0.11515421295649643, 8);
  sqcRYGate(q, -1.597259627047908, 9);
  sqcRZGate(q, 1.8014617483881414, 9);
  sqcRYGate(q, 2.710026046952195, 10);
  sqcRZGate(q, 1.0967924583564983, 10);
  sqcRYGate(q, 0.09268009957621715, 11);
  sqcRZGate(q, 2.117055803672092, 11);
  sqcRYGate(q, 2.2652430718209278, 12);
  sqcRZGate(q, 2.4200550512678545, 12);
  sqcRYGate(q, -0.5791331080823754, 13);
  sqcRZGate(q, -2.3749902744593516, 13);
  sqcRYGate(q, -0.8790532142880894, 14);
  sqcRZGate(q, 2.2449520110202177, 14);
  sqcRYGate(q, 0.000804360104157631, 15);
  sqcRZGate(q, -2.2954120349121006, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.3321098096102466, 0);
  sqcRZGate(q, -1.991231235023029, 0);
  sqcRYGate(q, -1.6713278416157502, 1);
  sqcRZGate(q, -1.2529106820446119, 1);
  sqcRYGate(q, -3.08118652969796, 2);
  sqcRZGate(q, -1.5570872666982167, 2);
  sqcRYGate(q, 1.382892594605012, 3);
  sqcRZGate(q, -0.03566109393676964, 3);
  sqcRYGate(q, 1.9063871773677983, 4);
  sqcRZGate(q, 3.001391028167821, 4);
  sqcRYGate(q, 0.9241695842393653, 5);
  sqcRZGate(q, -3.1197922905725775, 5);
  sqcRYGate(q, -1.3764887783512112, 6);
  sqcRZGate(q, 1.7002722342426342, 6);
  sqcRYGate(q, -0.48244178445568714, 7);
  sqcRZGate(q, -1.860115578549603, 7);
  sqcRYGate(q, 3.140903678681526, 8);
  sqcRZGate(q, 0.5477914920667324, 8);
  sqcRYGate(q, -3.141367006804473, 9);
  sqcRZGate(q, 0.2063821769112715, 9);
  sqcRYGate(q, 0.09398929339187667, 10);
  sqcRZGate(q, 2.751228462580379, 10);
  sqcRYGate(q, -3.0933601886998088, 11);
  sqcRZGate(q, 1.8019168914394565, 11);
  sqcRYGate(q, 0.0032897398026538647, 12);
  sqcRZGate(q, -2.3889414866250176, 12);
  sqcRYGate(q, -3.0835090434060786, 13);
  sqcRZGate(q, 1.3964818103421346, 13);
  sqcRYGate(q, -0.004509919043563405, 14);
  sqcRZGate(q, -0.9740717602185384, 14);
  sqcRYGate(q, 2.2301851388767258, 15);
  sqcRZGate(q, -3.1057061916610182, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.879039064072163, 0);
  sqcRZGate(q, 0.46035477786717505, 0);
  sqcRYGate(q, 1.302669359975589, 1);
  sqcRZGate(q, -0.4939406694187562, 1);
  sqcRYGate(q, -2.334798511172158, 2);
  sqcRZGate(q, -1.4256830704826573, 2);
  sqcRYGate(q, 2.964164325724231, 3);
  sqcRZGate(q, -0.1983145773350576, 3);
  sqcRYGate(q, -3.034201972187409, 4);
  sqcRZGate(q, 2.9251057132590907, 4);
  sqcRYGate(q, -3.1284998313461365, 5);
  sqcRZGate(q, -1.3304436046364971, 5);
  sqcRYGate(q, -2.140600255109119, 6);
  sqcRZGate(q, 0.05279537159167802, 6);
  sqcRYGate(q, -3.139732642090885, 7);
  sqcRZGate(q, -2.011252888176888, 7);
  sqcRYGate(q, 3.71057195373628e-05, 8);
  sqcRZGate(q, 2.9595385982109383, 8);
  sqcRYGate(q, 1.5751108606933215, 9);
  sqcRZGate(q, 3.1152638000493873, 9);
  sqcRYGate(q, 2.0321306028721957, 10);
  sqcRZGate(q, 2.7582390984716083, 10);
  sqcRYGate(q, -1.9685086642789154, 11);
  sqcRZGate(q, 2.039850341528293, 11);
  sqcRYGate(q, 1.5664451378696844, 12);
  sqcRZGate(q, -2.147794872069402, 12);
  sqcRYGate(q, -1.9730154253143277, 13);
  sqcRZGate(q, 1.0118298515764117, 13);
  sqcRYGate(q, 2.2110459407474203, 14);
  sqcRZGate(q, -2.307036366688828, 14);
  sqcRYGate(q, 1.4998790663519121, 15);
  sqcRZGate(q, 2.8267385057283496, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.3457335386630045, 0);
  sqcRZGate(q, -1.2200811040949846, 0);
  sqcRYGate(q, 0.6387197504238138, 1);
  sqcRZGate(q, 0.23617646340048992, 1);
  sqcRYGate(q, 0.8944150765672418, 2);
  sqcRZGate(q, -0.21282862584390116, 2);
  sqcRYGate(q, 0.44967308274095813, 3);
  sqcRZGate(q, 0.8117170179998077, 3);
  sqcRYGate(q, 3.1393531794217275, 4);
  sqcRZGate(q, 2.646690612519762, 4);
  sqcRYGate(q, 0.339269756230232, 5);
  sqcRZGate(q, -1.5840613753769188, 5);
  sqcRYGate(q, 0.5861676920230239, 6);
  sqcRZGate(q, -1.5055284360889774, 6);
  sqcRYGate(q, 3.135324150553344, 7);
  sqcRZGate(q, -0.6285246797402095, 7);
  sqcRYGate(q, 0.1983377844476964, 8);
  sqcRZGate(q, -1.2890306597462349, 8);
  sqcRYGate(q, -1.547548483589357, 9);
  sqcRZGate(q, 2.1191728806724575, 9);
  sqcRYGate(q, 1.5981994794797076, 10);
  sqcRZGate(q, 1.618568303805624, 10);
  sqcRYGate(q, -0.00170524201385458, 11);
  sqcRZGate(q, -2.7284327419119765, 11);
  sqcRYGate(q, 6.2351391016513e-05, 12);
  sqcRZGate(q, 2.4179901646096384, 12);
  sqcRYGate(q, 0.00018739918580923387, 13);
  sqcRZGate(q, 0.13498401496052367, 13);
  sqcRYGate(q, -3.1386485723489423, 14);
  sqcRZGate(q, -0.7298732316175434, 14);
  sqcRYGate(q, 3.121805458089449, 15);
  sqcRZGate(q, 0.27784448472265844, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.0916247093219742, 0);
  sqcRZGate(q, -1.1985986077707798, 0);
  sqcRYGate(q, 1.8698188400569322, 1);
  sqcRZGate(q, -0.4150618219292334, 1);
  sqcRYGate(q, -0.6032127604459893, 2);
  sqcRZGate(q, -3.129654828096598, 2);
  sqcRYGate(q, -1.7648748351398247, 3);
  sqcRZGate(q, 0.23711537900312862, 3);
  sqcRYGate(q, 3.0770095035747103, 4);
  sqcRZGate(q, 1.0288706165389794, 4);
  sqcRYGate(q, -3.131004075055349, 5);
  sqcRZGate(q, -1.2316700113721024, 5);
  sqcRYGate(q, -1.8570041573274616, 6);
  sqcRZGate(q, -3.049573022222421, 6);
  sqcRYGate(q, -3.1396696583491344, 7);
  sqcRZGate(q, -2.923127177917814, 7);
  sqcRYGate(q, 0.003445061985640763, 8);
  sqcRZGate(q, 1.290205534451725, 8);
  sqcRYGate(q, -3.1401312250527145, 9);
  sqcRZGate(q, 2.5333321009423355, 9);
  sqcRYGate(q, -1.9785999329131796, 10);
  sqcRZGate(q, 0.5261316675247131, 10);
  sqcRYGate(q, -1.5685763850682664, 11);
  sqcRZGate(q, -2.1304975550260705, 11);
  sqcRYGate(q, 0.0994768584678502, 12);
  sqcRZGate(q, 1.5471377471592926, 12);
  sqcRYGate(q, 3.0006922725039544, 13);
  sqcRZGate(q, 1.3205063553601273, 13);
  sqcRYGate(q, 0.8091298504901896, 14);
  sqcRZGate(q, -2.1650849906237415, 14);
  sqcRYGate(q, 0.08283744288604494, 15);
  sqcRZGate(q, 2.460622782586117, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.9332434591977034, 0);
  sqcRZGate(q, 1.59547754116515, 0);
  sqcRYGate(q, 2.165783245014617, 1);
  sqcRZGate(q, -2.0696858294152376, 1);
  sqcRYGate(q, 1.1606285245473549, 2);
  sqcRZGate(q, 2.2524796705118515, 2);
  sqcRYGate(q, -0.5781462628794883, 3);
  sqcRZGate(q, 3.089624109717008, 3);
  sqcRYGate(q, 0.0040877330506470045, 4);
  sqcRZGate(q, -2.291663108633972, 4);
  sqcRYGate(q, 0.32610492985839806, 5);
  sqcRZGate(q, 3.090495689657048, 5);
  sqcRYGate(q, 3.1159950404261276, 6);
  sqcRZGate(q, -0.4946808598845447, 6);
  sqcRYGate(q, -3.139291278850352, 7);
  sqcRZGate(q, 1.2483865362368487, 7);
  sqcRYGate(q, 0.17170526838685699, 8);
  sqcRZGate(q, -1.569405803538682, 8);
  sqcRYGate(q, -1.5991591672225278, 9);
  sqcRZGate(q, -1.7023739602836496, 9);
  sqcRYGate(q, 3.1413330040100527, 10);
  sqcRZGate(q, 0.2260980706821425, 10);
  sqcRYGate(q, -3.1414484196117174, 11);
  sqcRZGate(q, -2.130995604722118, 11);
  sqcRYGate(q, 3.1404659671407296, 12);
  sqcRZGate(q, 1.7236347130242142, 12);
  sqcRYGate(q, 0.198999904910103, 13);
  sqcRZGate(q, -3.1410418127547284, 13);
  sqcRYGate(q, 3.125703933985834, 14);
  sqcRZGate(q, -0.028584175123849503, 14);
  sqcRYGate(q, -1.3805601128107978, 15);
  sqcRZGate(q, -1.5866094904657047, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.6385740148493877, 0);
  sqcRZGate(q, -1.1084275452247827, 0);
  sqcRYGate(q, -1.3811294695922576, 1);
  sqcRZGate(q, 2.469757705929554, 1);
  sqcRYGate(q, -0.1741629472600703, 2);
  sqcRZGate(q, 2.8248846197074307, 2);
  sqcRYGate(q, 1.498338550221109, 3);
  sqcRZGate(q, 2.199472418649525, 3);
  sqcRYGate(q, 3.132699358636458, 4);
  sqcRZGate(q, 2.152340590519679, 4);
  sqcRYGate(q, 0.0018863444288456648, 5);
  sqcRZGate(q, 0.3613273319232322, 5);
  sqcRYGate(q, -1.590842895896892, 6);
  sqcRZGate(q, -1.6201007150794238, 6);
  sqcRYGate(q, -3.1410947343593634, 7);
  sqcRZGate(q, -0.7837313662257562, 7);
  sqcRYGate(q, -1.568337188639096, 8);
  sqcRZGate(q, 1.5702423876571954, 8);
  sqcRYGate(q, -3.141519188842001, 9);
  sqcRZGate(q, 0.3412632644835485, 9);
  sqcRYGate(q, -1.0264887226310462, 10);
  sqcRZGate(q, -3.0644742137078578, 10);
  sqcRYGate(q, 1.550790414936572, 11);
  sqcRZGate(q, -0.8880110754141433, 11);
  sqcRYGate(q, -1.757029941804814, 12);
  sqcRZGate(q, -0.30202234368046116, 12);
  sqcRYGate(q, -0.3478624533371692, 13);
  sqcRZGate(q, -0.16183862359095047, 13);
  sqcRYGate(q, 0.9999849475065377, 14);
  sqcRZGate(q, -2.8608074438212165, 14);
  sqcRYGate(q, -1.5674837856184987, 15);
  sqcRZGate(q, -3.1405639988766927, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.7223148000145945, 0);
  sqcRZGate(q, -2.315147705903951, 0);
  sqcRYGate(q, 1.199875106428074, 1);
  sqcRZGate(q, 2.8639635200113864, 1);
  sqcRYGate(q, 3.0086952565877665, 2);
  sqcRZGate(q, -2.637956459819409, 2);
  sqcRYGate(q, 2.5978188611441104, 3);
  sqcRZGate(q, -2.7779700538343257, 3);
  sqcRYGate(q, -0.5265658499357991, 4);
  sqcRZGate(q, -2.3776447607103828, 4);
  sqcRYGate(q, -0.32036261355771334, 5);
  sqcRZGate(q, 2.1289559368248225, 5);
  sqcRYGate(q, 3.1362675915678526, 6);
  sqcRZGate(q, 1.2480488554518834, 6);
  sqcRYGate(q, -3.1291363495180247, 7);
  sqcRZGate(q, 0.2338781153901658, 7);
  sqcRYGate(q, 2.296806673451335, 8);
  sqcRZGate(q, -3.1412924256534716, 8);
  sqcRYGate(q, 3.139126221189791, 9);
  sqcRZGate(q, -1.351377057667654, 9);
  sqcRYGate(q, 2.7590107690045538, 10);
  sqcRZGate(q, 0.0012065397746237087, 10);
  sqcRYGate(q, 3.1400709954155244, 11);
  sqcRZGate(q, 2.426401798559283, 11);
  sqcRYGate(q, -3.1400638872078024, 12);
  sqcRZGate(q, 1.3097740154262412, 12);
  sqcRYGate(q, -1.5725331695537639, 13);
  sqcRZGate(q, -2.034756199066532, 13);
  sqcRYGate(q, 3.1372811259524584, 14);
  sqcRZGate(q, 0.23338046640916144, 14);
  sqcRYGate(q, 1.522245069747122, 15);
  sqcRZGate(q, -2.5938203144817726, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.013438182349992, 0);
  sqcRZGate(q, 0.7969063849363707, 0);
  sqcRYGate(q, -1.3177941518328111, 1);
  sqcRZGate(q, 0.33536517136231747, 1);
  sqcRYGate(q, -0.006942901758591928, 2);
  sqcRZGate(q, 1.1391528972728757, 2);
  sqcRYGate(q, -1.2252004092794797, 3);
  sqcRZGate(q, 3.0882165025454276, 3);
  sqcRYGate(q, -2.09075633303722, 4);
  sqcRZGate(q, -2.182949247161016, 4);
  sqcRYGate(q, 1.5687511783065462, 5);
  sqcRZGate(q, -1.3057995996929286, 5);
  sqcRYGate(q, -0.01416431727060008, 6);
  sqcRZGate(q, 2.5788248262767883, 6);
  sqcRYGate(q, 1.5699167891332952, 7);
  sqcRZGate(q, 1.570989004158987, 7);
  sqcRYGate(q, 1.570757771832184, 8);
  sqcRZGate(q, 0.3512228839826315, 8);
  sqcRYGate(q, -3.141377886424728, 9);
  sqcRZGate(q, -0.269493662890139, 9);
  sqcRYGate(q, 2.955088015660263, 10);
  sqcRZGate(q, -1.7982493559634818, 10);
  sqcRYGate(q, -0.0012697180799154596, 11);
  sqcRZGate(q, -1.0687743793846236, 11);
  sqcRYGate(q, 2.23039248398905, 12);
  sqcRZGate(q, 2.786946413067331, 12);
  sqcRYGate(q, 2.9238675325883863, 13);
  sqcRZGate(q, -0.4800380442180314, 13);
  sqcRYGate(q, 1.5055081401399457, 14);
  sqcRZGate(q, -1.5647294574137653, 14);
  sqcRYGate(q, 3.141118809415468, 15);
  sqcRZGate(q, 0.5293519202008055, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5253557897728474, 0);
  sqcRZGate(q, -0.969115221366085, 0);
  sqcRYGate(q, -0.24485987036646772, 1);
  sqcRZGate(q, 2.5740653354324023, 1);
  sqcRYGate(q, 0.12563297835985746, 2);
  sqcRZGate(q, -0.42769662083160576, 2);
  sqcRYGate(q, 3.140459840156841, 3);
  sqcRZGate(q, 2.396498951756767, 3);
  sqcRYGate(q, -3.1409421212568427, 4);
  sqcRZGate(q, -1.4874350462964865, 4);
  sqcRYGate(q, -3.141399676977962, 5);
  sqcRZGate(q, -0.46564011435608255, 5);
  sqcRYGate(q, 3.1414660137094796, 6);
  sqcRZGate(q, -1.0838618188499245, 6);
  sqcRYGate(q, 1.570934734784107, 7);
  sqcRZGate(q, -1.5738513077728573, 7);
  sqcRYGate(q, 2.299792008403299, 8);
  sqcRZGate(q, 0.510052740142805, 8);
  sqcRYGate(q, -1.5712401975572217, 9);
  sqcRZGate(q, -1.5697051219188094, 9);
  sqcRYGate(q, 0.00016069397151508014, 10);
  sqcRZGate(q, -2.2837174955199986, 10);
  sqcRYGate(q, -0.0008851738660586861, 11);
  sqcRZGate(q, -1.3183174023951545, 11);
  sqcRYGate(q, 3.137778159126509, 12);
  sqcRZGate(q, 2.7468465466696523, 12);
  sqcRYGate(q, -1.597754408189861, 13);
  sqcRZGate(q, 1.5708562009516616, 13);
  sqcRYGate(q, 1.551127432853914, 14);
  sqcRZGate(q, -1.5711874562494836, 14);
  sqcRYGate(q, 2.321469918532573, 15);
  sqcRZGate(q, -1.5844615071187524, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.07491280416210233, 0);
  sqcRZGate(q, -0.024728202775421867, 0);
  sqcRYGate(q, 0.005129066381984515, 1);
  sqcRZGate(q, -0.33523887645011197, 1);
  sqcRYGate(q, 2.4307515626339984, 2);
  sqcRZGate(q, -0.008671945744481838, 2);
  sqcRYGate(q, 1.7118152346388615, 3);
  sqcRZGate(q, -1.1388288670518052, 3);
  sqcRYGate(q, -2.477026151866728, 4);
  sqcRZGate(q, -2.268000794291834, 4);
  sqcRYGate(q, -0.00016104994398435934, 5);
  sqcRZGate(q, -0.8404407999741901, 5);
  sqcRYGate(q, -3.1413805777397186, 6);
  sqcRZGate(q, 1.3907050389825673, 6);
  sqcRYGate(q, -1.5666653808159088, 7);
  sqcRZGate(q, 2.1903847986317935, 7);
  sqcRYGate(q, 3.1329586444653623, 8);
  sqcRZGate(q, 2.3373356906587976, 8);
  sqcRYGate(q, 0.1467901160994334, 9);
  sqcRZGate(q, -3.1408366746491776, 9);
  sqcRYGate(q, -3.123149779007674, 10);
  sqcRZGate(q, -2.289555455850196, 10);
  sqcRYGate(q, -3.141506335877496, 11);
  sqcRZGate(q, -1.801896863718396, 11);
  sqcRYGate(q, 1.574871387649777, 12);
  sqcRZGate(q, 1.63954350859734, 12);
  sqcRYGate(q, 1.5711496432979124, 13);
  sqcRZGate(q, 3.123388030165854, 13);
  sqcRYGate(q, -1.5708665448320303, 14);
  sqcRZGate(q, 1.6163238325161347, 14);
  sqcRYGate(q, 1.568255821107953, 15);
  sqcRZGate(q, 3.1411914602529656, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.4956270328952792, 0);
  sqcRZGate(q, 1.5764190140239833, 0);
  sqcRYGate(q, -1.3713979036971145, 1);
  sqcRZGate(q, 1.130624788926312, 1);
  sqcRYGate(q, 1.5790893217360722, 2);
  sqcRZGate(q, 3.113251344059407, 2);
  sqcRYGate(q, 3.137800741856187, 3);
  sqcRZGate(q, -2.817686213423785, 3);
  sqcRYGate(q, -2.5837882412282905e-05, 4);
  sqcRZGate(q, -0.30646244058401084, 4);
  sqcRYGate(q, 3.134201194227715, 5);
  sqcRZGate(q, 0.0010938297426239527, 5);
  sqcRYGate(q, 1.9867280974508056e-05, 6);
  sqcRZGate(q, 1.1326453946084167, 6);
  sqcRYGate(q, 1.5710308074171442, 7);
  sqcRZGate(q, 1.5704366600620823, 7);
  sqcRYGate(q, -3.122738776170321, 8);
  sqcRZGate(q, -2.85701032142446, 8);
  sqcRYGate(q, -1.570769464863095, 9);
  sqcRZGate(q, 2.8157331920740734, 9);
  sqcRYGate(q, 3.141318582474108, 10);
  sqcRZGate(q, 0.22035159280392413, 10);
  sqcRYGate(q, -3.1411975230082723, 11);
  sqcRZGate(q, -0.0702744779048281, 11);
  sqcRYGate(q, 1.536157553623412, 12);
  sqcRZGate(q, -1.504827798606165, 12);
  sqcRYGate(q, -0.0006496765376162728, 13);
  sqcRZGate(q, 1.3004164058974306, 13);
  sqcRYGate(q, -3.0284485788299036, 14);
  sqcRZGate(q, -1.5026428970081298, 14);
  sqcRYGate(q, 1.5509417962625296, 15);
  sqcRZGate(q, 0.2806413926625002, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.576814588681974, 0);
  sqcRZGate(q, 1.1667867722354766, 0);
  sqcRYGate(q, 3.1306578124923674, 1);
  sqcRZGate(q, -1.0746338755937013, 1);
  sqcRYGate(q, 0.057858635835319354, 2);
  sqcRZGate(q, -0.4070414604407097, 2);
  sqcRYGate(q, -0.0038996465588440653, 3);
  sqcRZGate(q, 2.324624415659951, 3);
  sqcRYGate(q, -1.7992331559351094, 4);
  sqcRZGate(q, -1.9681219698856558, 4);
  sqcRYGate(q, -1.5674379101495415, 5);
  sqcRZGate(q, 0.9377045883720215, 5);
  sqcRYGate(q, -0.0007623350627801173, 6);
  sqcRZGate(q, -0.091846884117194, 6);
  sqcRYGate(q, -1.5708084447390689, 7);
  sqcRZGate(q, -2.193234924484888, 7);
  sqcRYGate(q, -0.00035390527643563985, 8);
  sqcRZGate(q, 1.3838579441153092, 8);
  sqcRYGate(q, 0.00026013671284562444, 9);
  sqcRZGate(q, -0.3023459227277083, 9);
  sqcRYGate(q, 1.651735497512039, 10);
  sqcRZGate(q, -1.9680458068922189, 10);
  sqcRYGate(q, 3.1415312906928956, 11);
  sqcRZGate(q, 2.0421822617723326, 11);
  sqcRYGate(q, -1.600160118853303, 12);
  sqcRZGate(q, 2.7737554862002303, 12);
  sqcRYGate(q, 3.140554815957756, 13);
  sqcRZGate(q, -1.0588020506707068, 13);
  sqcRYGate(q, -1.5720360131004305, 14);
  sqcRZGate(q, -0.3690712308454964, 14);
  sqcRYGate(q, -3.138575006465101, 15);
  sqcRZGate(q, -0.3496822973049705, 15);

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
