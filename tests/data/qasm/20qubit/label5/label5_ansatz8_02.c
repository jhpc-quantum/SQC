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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.860920811411539, 0);
  sqcRYGate(q, 2.721875451371342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.360745509429167, 0);
  sqcRYGate(q, 1.2205657336294982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9128011072594653, 2);
  sqcRYGate(q, -1.4788094742355722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.840027881849519, 2);
  sqcRYGate(q, -2.745168777523427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4448032844062495, 4);
  sqcRYGate(q, 2.456351722906973, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.951207990588051, 4);
  sqcRYGate(q, -0.39545673569965073, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1329379852519823, 6);
  sqcRYGate(q, -1.8913370714226057, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3426982557696805, 6);
  sqcRYGate(q, -2.891628047769551, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4332510327336001, 8);
  sqcRYGate(q, -0.7606855691219635, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.933119431710386, 8);
  sqcRYGate(q, 0.26974946589382115, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1557026457156855, 10);
  sqcRYGate(q, -2.67857854597281, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4068511426215297, 10);
  sqcRYGate(q, 0.8434841601179235, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1581082784773029, 12);
  sqcRYGate(q, -1.6959918199718156, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8595127583702373, 12);
  sqcRYGate(q, -0.3442457075629366, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.251899636337546, 14);
  sqcRYGate(q, -1.341327918342767, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4399219698936834, 14);
  sqcRYGate(q, -1.0011673139320107, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4032544896735606, 16);
  sqcRYGate(q, 0.4072114165956444, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7714989775621366, 16);
  sqcRYGate(q, 1.2876808576726928, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.0339643530510505, 18);
  sqcRYGate(q, -1.4039775001618207, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.7353241241626844, 18);
  sqcRYGate(q, -3.0943318324918327, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9615630238020322, 0);
  sqcRYGate(q, 0.26094982159394176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1239760221547552, 0);
  sqcRYGate(q, -0.0205530600167112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0691204010332793, 2);
  sqcRYGate(q, -0.08426302075837269, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1329967758514625, 2);
  sqcRYGate(q, 0.8609979657276798, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5644831956394327, 4);
  sqcRYGate(q, 1.1657135532769587, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5774678690859698, 4);
  sqcRYGate(q, 0.003250702390968918, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9400387531725047, 6);
  sqcRYGate(q, -1.1813052142449527, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5704106652556977, 6);
  sqcRYGate(q, 1.5676489952366068, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.597333466603534, 8);
  sqcRYGate(q, 0.5645685308179038, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5127062328059645, 8);
  sqcRYGate(q, -2.640474783752773, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.060418144425222, 10);
  sqcRYGate(q, -0.09837711314091033, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.703157024098557e-05, 10);
  sqcRYGate(q, 1.7704433816938567, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.3430353997298898, 12);
  sqcRYGate(q, -1.3584057436496826, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.24110554440328, 12);
  sqcRYGate(q, -3.0904263555244555, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.03046207480605, 14);
  sqcRYGate(q, 2.7864573840496796, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.6091961470334946, 14);
  sqcRYGate(q, -0.005864547268822293, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.981358096364943, 16);
  sqcRYGate(q, -0.37620019442281877, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.954976062817932, 16);
  sqcRYGate(q, -1.797510990304339, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.423185016651468, 1);
  sqcRYGate(q, -2.0414322660425275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2805241681896946, 1);
  sqcRYGate(q, 1.3188842024111433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.238086754476058, 3);
  sqcRYGate(q, -2.819041206671824, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.802391017124628, 3);
  sqcRYGate(q, 3.1153163960821377, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.717064179922427, 5);
  sqcRYGate(q, 1.5233746661528123, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4841053803226152, 5);
  sqcRYGate(q, -1.7151468598385577, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.32581701711011873, 7);
  sqcRYGate(q, 2.1186152776292975, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.001491025809338055, 7);
  sqcRYGate(q, 0.0009797286718919124, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.7207953600668966, 9);
  sqcRYGate(q, -1.2437602028789776, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.13897515662637, 9);
  sqcRYGate(q, 1.5704152464992955, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.023471400862243, 11);
  sqcRYGate(q, -2.969384535891422, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.8849425166415498, 11);
  sqcRYGate(q, -0.000808302556298769, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.2330874851204974, 13);
  sqcRYGate(q, 0.9417817596036893, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.774338736097528, 13);
  sqcRYGate(q, -0.0029785675765634317, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.4247220874657751, 15);
  sqcRYGate(q, 0.8747816331075695, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.09858828843343599, 15);
  sqcRYGate(q, 0.708971318213694, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.7116769130646825, 17);
  sqcRYGate(q, 2.379879623571579, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 3.0915299456260303, 17);
  sqcRYGate(q, -3.1006797110178552, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.183869922307192, 0);
  sqcRYGate(q, -1.3692394741371716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5270710821602247, 0);
  sqcRYGate(q, -3.0505872521754007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4069896377104605, 2);
  sqcRYGate(q, -0.3823527331093137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1303467073778655, 2);
  sqcRYGate(q, -0.08688013278788206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2581695002411628, 4);
  sqcRYGate(q, -1.546619806635303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7511249259098163, 4);
  sqcRYGate(q, -1.5765512641863781, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5433534464119516, 6);
  sqcRYGate(q, -2.3860122030272204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5724859985242112, 6);
  sqcRYGate(q, -1.5659338934576659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5720486656270563, 8);
  sqcRYGate(q, -2.91285858718085, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.141062523132413, 8);
  sqcRYGate(q, -1.5491385562638031, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1415225930778794, 10);
  sqcRYGate(q, 0.2026604818840596, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 7.95845911767401e-05, 10);
  sqcRYGate(q, -1.091511901124771, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.129005569790606, 12);
  sqcRYGate(q, -2.851308834746641, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.11939041993293624, 12);
  sqcRYGate(q, 0.19867268435599802, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.059115631100121746, 14);
  sqcRYGate(q, -2.719861487298946, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5608953098173066, 14);
  sqcRYGate(q, -1.0231489341440168, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3902562455569285, 16);
  sqcRYGate(q, 2.6209932429874137, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.0982154588577626, 16);
  sqcRYGate(q, -0.01341872517316636, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.6316128432406352, 18);
  sqcRYGate(q, -0.548999908555408, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.78419490426195, 18);
  sqcRYGate(q, -0.05229833915312199, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.6443113667715222, 0);
  sqcRYGate(q, -2.618853792254254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1351786886622595, 0);
  sqcRYGate(q, -0.7196649311268051, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7735397287528625, 2);
  sqcRYGate(q, -0.46855860072164734, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.11616907719048837, 2);
  sqcRYGate(q, -3.01920961374429, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8963111188357915, 4);
  sqcRYGate(q, 3.141136782292681, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5781793696445505, 4);
  sqcRYGate(q, 0.003921333978351704, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6345426543894535, 6);
  sqcRYGate(q, -1.5516790607364805, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.006166323244755234, 6);
  sqcRYGate(q, -3.139046002307753, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8390553982382545, 8);
  sqcRYGate(q, -2.675028356565314, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.008906977420090278, 8);
  sqcRYGate(q, -3.1335606650050583, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.1070611068448883, 10);
  sqcRYGate(q, -3.1193467858377697, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5667986323048364, 10);
  sqcRYGate(q, 1.5682144265752824, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.18899309181279775, 12);
  sqcRYGate(q, 3.126434103615215, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.08168505632705526, 12);
  sqcRYGate(q, 0.017082676907727468, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.5754325130466162, 14);
  sqcRYGate(q, 2.30135240234233, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.0016119507401422878, 14);
  sqcRYGate(q, 0.024175654462967877, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.08933620563452287, 16);
  sqcRYGate(q, -1.9569415958990184, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.8972920088121423, 16);
  sqcRYGate(q, -0.22482137770736535, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.4982316589884208, 1);
  sqcRYGate(q, -0.2540681068149615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9629282441729905, 1);
  sqcRYGate(q, 3.0281363397064243, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0489031111384435, 3);
  sqcRYGate(q, 2.272504990777067, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1411794864459757, 3);
  sqcRYGate(q, 3.134712089332918, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4661839189896457, 5);
  sqcRYGate(q, -0.3010854021351701, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1331317653025077, 5);
  sqcRYGate(q, -1.568612883118494, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.102880212413781, 7);
  sqcRYGate(q, 1.8142743053293415, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.9001897856956758, 7);
  sqcRYGate(q, 0.00036978280082333725, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.4638748069908757, 9);
  sqcRYGate(q, -1.5258599542833537, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5698534478136579, 9);
  sqcRYGate(q, -0.0004173035273151696, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.095366679371587, 11);
  sqcRYGate(q, 1.629987131397491, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1413373301165066, 11);
  sqcRYGate(q, 3.1322308900888123, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.1099284266206144, 13);
  sqcRYGate(q, -1.6222211992895756, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.586544334289874, 13);
  sqcRYGate(q, 1.5596080271691957, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.332582949183818, 15);
  sqcRYGate(q, -2.5700874973900154, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.4672520434132106, 15);
  sqcRYGate(q, -2.2424954382387043, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.9448216594922743, 17);
  sqcRYGate(q, 0.20197222197267894, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.3422905024630782, 17);
  sqcRYGate(q, -3.137658802648586, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.3131334692976601, 0);
  sqcRYGate(q, -1.5750342687982872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1404177106186526, 0);
  sqcRYGate(q, 0.13951842900433978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.103271517324805, 2);
  sqcRYGate(q, 2.536765239568675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1409372531835835, 2);
  sqcRYGate(q, 0.12242326658454239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14818706915647084, 4);
  sqcRYGate(q, 1.5681673886110943, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3900796777416264, 4);
  sqcRYGate(q, -1.5706155021145323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0795213150362124, 6);
  sqcRYGate(q, 1.2742991716288647, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0022249631392075274, 6);
  sqcRYGate(q, -2.1303344191100657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.844252843364079, 8);
  sqcRYGate(q, 1.385172994423609, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.141044462586784, 8);
  sqcRYGate(q, 1.7208218094071164, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0215446208888044, 10);
  sqcRYGate(q, 1.6197428672004188, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7462369922447746, 10);
  sqcRYGate(q, -1.5693487988355566, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.033573842954725, 12);
  sqcRYGate(q, 0.27951670098886167, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.009007104940329502, 12);
  sqcRYGate(q, -0.012859770207846566, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5816767412254435, 14);
  sqcRYGate(q, -2.127971409254352, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.576713230527317, 14);
  sqcRYGate(q, -1.5112576130369273, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4235946534655604, 16);
  sqcRYGate(q, 1.8760141684773455, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.0002707541991915363, 16);
  sqcRYGate(q, 1.7136459269043538, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.7099936253605517, 18);
  sqcRYGate(q, 0.005409629724431041, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.3535406772369205, 18);
  sqcRYGate(q, -3.1391066581175298, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.8487523844380975, 0);
  sqcRYGate(q, 1.4818230956501248, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.005397598624600513, 0);
  sqcRYGate(q, -2.869306177380495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3807455446439256, 2);
  sqcRYGate(q, 1.5746455611982133, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.590564188182273, 2);
  sqcRYGate(q, -1.5591552270760989, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1852166697555946, 4);
  sqcRYGate(q, -1.0146611371047067, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.138490520473125, 4);
  sqcRYGate(q, -3.14063815250835, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7172470502174564, 6);
  sqcRYGate(q, -1.2674428371159179, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.00044844361209762744, 6);
  sqcRYGate(q, -3.127679455544624, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.3767215801349935, 8);
  sqcRYGate(q, 0.037594299802249154, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.00019185374973762492, 8);
  sqcRYGate(q, 3.140559532466537, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.3140393633994878, 10);
  sqcRYGate(q, -1.3662670391380898, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5715329504069444, 10);
  sqcRYGate(q, -3.1411314979728293, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5713810627918527, 12);
  sqcRYGate(q, -2.635445534369776, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.4129506390996665e-05, 12);
  sqcRYGate(q, -0.5296944291971177, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.445018071561135, 14);
  sqcRYGate(q, 2.0778000349636576, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.01364333537815151, 14);
  sqcRYGate(q, 1.5755806038238276, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 1.078013912705282, 16);
  sqcRYGate(q, -1.7532114921660549, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.577280792755273, 16);
  sqcRYGate(q, -2.666379580766739, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.2664203671202017, 1);
  sqcRYGate(q, 2.2399221587060882, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5293525227725748, 1);
  sqcRYGate(q, 3.0484926191354322, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1934009117987783, 3);
  sqcRYGate(q, -1.5825398316559172, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1322016103692523, 3);
  sqcRYGate(q, -3.140335429440568, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5581546550436256, 5);
  sqcRYGate(q, 1.5267057828717936, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5717010859805844, 5);
  sqcRYGate(q, -1.5881451966410065, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4695781665941751, 7);
  sqcRYGate(q, 0.23138224793990855, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1374472483924127, 7);
  sqcRYGate(q, -0.0006197107336376462, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.913003450315526, 9);
  sqcRYGate(q, 1.3889562257811292, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.048560142676452506, 9);
  sqcRYGate(q, -0.0014019560685722965, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.350092973800102, 11);
  sqcRYGate(q, -1.8273193830365813, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5720240645533465, 11);
  sqcRYGate(q, 1.5961916803658722, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.7361453700987184, 13);
  sqcRYGate(q, -1.6219900874049984, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.1278041877191636, 13);
  sqcRYGate(q, -3.1362834054980473, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.2185214834470113, 15);
  sqcRYGate(q, -0.9843445108260324, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.139298719213571, 15);
  sqcRYGate(q, 3.102664640907946, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.5333527126245752, 17);
  sqcRYGate(q, 1.3624876000662456, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.4350988093665489, 17);
  sqcRYGate(q, 1.5624111802449447, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.126787311214139, 0);
  sqcRYGate(q, -2.0872685851100963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3247548819852488, 0);
  sqcRYGate(q, -1.4662257337577032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.563019201347237, 2);
  sqcRYGate(q, -1.8630227913477375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5733387592243835, 2);
  sqcRYGate(q, 1.5671317424877895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9687118224302738, 4);
  sqcRYGate(q, 0.39211321197343363, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2298314671451556, 4);
  sqcRYGate(q, -3.1142175577720974, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2764661915071658, 6);
  sqcRYGate(q, 1.0886092288600553, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5708983533615326, 6);
  sqcRYGate(q, -1.5655953914744645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6328137850464093, 8);
  sqcRYGate(q, -2.1562479475810563, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.00045100213611881293, 8);
  sqcRYGate(q, 1.4204539910728864, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8082577306428893, 10);
  sqcRYGate(q, -0.9068940466263344, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.03410978918975786, 10);
  sqcRYGate(q, -1.5433796416546182, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5708916197291032, 12);
  sqcRYGate(q, -1.4328989776685006, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5719440946870353, 12);
  sqcRYGate(q, 1.5704825577011494, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1068014273027256, 14);
  sqcRYGate(q, 2.055401145764521, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.1288640098624194, 14);
  sqcRYGate(q, 0.042152882500205366, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.559923064629471, 16);
  sqcRYGate(q, -3.130844123381396, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.2298014625365994, 16);
  sqcRYGate(q, -0.0018184672964146596, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.821778420569123, 18);
  sqcRYGate(q, 1.4225847398982951, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.701069903992307, 18);
  sqcRYGate(q, 3.117395493178204, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5070079775770067, 0);
  sqcRYGate(q, 1.6219593598090651, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5711268045877085, 0);
  sqcRYGate(q, -3.099952534160946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.061627731448598635, 2);
  sqcRYGate(q, -2.0961262779988905, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1017626624382957, 2);
  sqcRYGate(q, -2.9810775207228737, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6061736325728173, 4);
  sqcRYGate(q, 1.4601448479424244, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0716059495408476, 4);
  sqcRYGate(q, 3.130096273226623, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.10993471927787707, 6);
  sqcRYGate(q, 1.5425225004324723, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1410725602783276, 6);
  sqcRYGate(q, 3.0921965327939396, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0883168186798216, 8);
  sqcRYGate(q, -3.00214325330961, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.1407315406079785, 8);
  sqcRYGate(q, -1.5704100941320993, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.3049625609112936, 10);
  sqcRYGate(q, 2.9009090326045754, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.119875400438856, 10);
  sqcRYGate(q, -3.141208662779683, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.3346709845071087, 12);
  sqcRYGate(q, -1.5490805023917236, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.5732461402190094, 12);
  sqcRYGate(q, 0.5290474058602657, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.567390745644692, 14);
  sqcRYGate(q, 2.91279083131547, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.524045956879891, 14);
  sqcRYGate(q, 1.5625546320026882, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 1.5669730695575368, 16);
  sqcRYGate(q, 0.6374001210285843, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.0015970837038787875, 16);
  sqcRYGate(q, -1.5660007196076018, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.13283365673246658, 1);
  sqcRYGate(q, -0.5680299498016999, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0022900981672799863, 1);
  sqcRYGate(q, 3.141079752214852, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5776042334497055, 3);
  sqcRYGate(q, -0.03070747164519183, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.140324024686447, 3);
  sqcRYGate(q, 0.019126823418415206, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.37443600389570264, 5);
  sqcRYGate(q, -0.42809688835575255, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.14117757807066, 5);
  sqcRYGate(q, -3.1164933459927697, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.4311792724374319, 7);
  sqcRYGate(q, 2.40369336642492, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.00037702597806408883, 7);
  sqcRYGate(q, 0.10608314416791131, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.7878265889370057, 9);
  sqcRYGate(q, -0.6615609898493747, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5689250422572476, 9);
  sqcRYGate(q, 3.1413904722280215, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.725264835889863, 11);
  sqcRYGate(q, -2.4105552218204105, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.0001407850464162114, 11);
  sqcRYGate(q, 3.1413071012985823, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.6716665508709436, 13);
  sqcRYGate(q, -0.10616683115596605, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.0015270638837127592, 13);
  sqcRYGate(q, -3.1413987339186713, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.2472669870080466, 15);
  sqcRYGate(q, 1.8742796012208762, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.016825371326345415, 15);
  sqcRYGate(q, 3.1209118134646507, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.812876010185168, 17);
  sqcRYGate(q, 0.05710799920830791, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.1009053325036575, 17);
  sqcRYGate(q, -2.778008242191363, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.544306210386571, 0);
  sqcRYGate(q, -3.0097804935048282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3244642450933806, 0);
  sqcRYGate(q, -1.5715066110159137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0249101061549102, 2);
  sqcRYGate(q, 1.565701262432853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5628761990940472, 2);
  sqcRYGate(q, -3.1387029414450547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0483488263408347, 4);
  sqcRYGate(q, 2.6675168805711627, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5143218706551795, 4);
  sqcRYGate(q, 3.124931355845181, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5680075621117502, 6);
  sqcRYGate(q, -1.6458483941305726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.015086835166624013, 6);
  sqcRYGate(q, 1.5729014698243882, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5706412604561597, 8);
  sqcRYGate(q, 1.2530253717330095, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5702432837053824, 8);
  sqcRYGate(q, -1.5710959640154318, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7004394816968542, 10);
  sqcRYGate(q, -1.9514653501355266, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.03595668035458799, 10);
  sqcRYGate(q, 1.5830918777515661, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.023571360595275, 12);
  sqcRYGate(q, 2.9729424385159984, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5703170660264927, 12);
  sqcRYGate(q, 3.140864422960328, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5714036335712511, 14);
  sqcRYGate(q, 2.4587139982696185, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.0003788840738789505, 14);
  sqcRYGate(q, 1.5713372420090832, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.21273723099976838, 16);
  sqcRYGate(q, 1.139532965997526, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.126540261432482, 16);
  sqcRYGate(q, -3.1404666041362046, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.65052469128194, 18);
  sqcRYGate(q, -1.0132326973141108, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.897934669946884, 18);
  sqcRYGate(q, 1.5717241753661577, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.1970078855219528, 0);
  sqcRYGate(q, 2.668163941291987, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4607843294045812, 0);
  sqcRYGate(q, 1.5002221278766825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5243108215424463, 2);
  sqcRYGate(q, -1.6378129046438108, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.017146808246716105, 2);
  sqcRYGate(q, 3.1369257908921826, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.02267364960960334, 4);
  sqcRYGate(q, -3.134055234163099, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5622406192503004, 4);
  sqcRYGate(q, 0.031255941502704054, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.497313135800992, 6);
  sqcRYGate(q, 0.2913395702971666, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.0002901899289967951, 6);
  sqcRYGate(q, 3.1404078344586415, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.4874796307590401, 8);
  sqcRYGate(q, -1.5082715818726056, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.02775639021492804, 8);
  sqcRYGate(q, 3.124480244092799, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.655751932537223, 10);
  sqcRYGate(q, 0.6185701886288264, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1343187218045245, 10);
  sqcRYGate(q, 3.137621891185697, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.11660552112968325, 12);
  sqcRYGate(q, 0.7285345041454375, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.1209050226292576, 12);
  sqcRYGate(q, 0.025268191399593576, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.4079806420706533, 14);
  sqcRYGate(q, 1.9853032293248347, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.7666044750372816e-05, 14);
  sqcRYGate(q, -0.0008764530038378737, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.82467452381382, 16);
  sqcRYGate(q, -3.141278054666844, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.11125609907995493, 16);
  sqcRYGate(q, -0.11126727119827784, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.3420050084349766, 1);
  sqcRYGate(q, 3.125712809405035, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03704464660087581, 1);
  sqcRYGate(q, 1.5792083552145881, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6233806738410275, 3);
  sqcRYGate(q, 0.7390749566107954, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 4.5075251421167195e-05, 3);
  sqcRYGate(q, -3.1388691778006046, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6530451519456957, 5);
  sqcRYGate(q, 0.08263013154278792, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4637189842736267, 5);
  sqcRYGate(q, -1.6063496579029057, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5007563775016637, 7);
  sqcRYGate(q, -3.0203622168809585, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1399774644499607, 7);
  sqcRYGate(q, -0.0001572472768236466, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.08932889268896517, 9);
  sqcRYGate(q, 0.8162465053054708, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5706570970108704, 9);
  sqcRYGate(q, -3.0584981105035545, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.017822911743916, 11);
  sqcRYGate(q, -1.6800672590698955, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.127604928224885, 11);
  sqcRYGate(q, 0.00013546284138356163, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.9635287986949264, 13);
  sqcRYGate(q, 1.4597528119475767, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5724609208633051, 13);
  sqcRYGate(q, -3.1283730968097303, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.581232008054402, 15);
  sqcRYGate(q, -1.537630718844757, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.050195895588263366, 15);
  sqcRYGate(q, 3.141432086851879, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.740640328955315, 17);
  sqcRYGate(q, 0.4007607682502972, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.5697733793399964, 17);
  sqcRYGate(q, -1.0068416027265563, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.3193047870137082, 0);
  sqcRYGate(q, 0.0015401255273095708, 1);
  sqcRYGate(q, 2.555948298706798, 2);
  sqcRYGate(q, 1.6069539843866125, 3);
  sqcRYGate(q, 1.613360607345264, 4);
  sqcRYGate(q, 1.5507508191963109, 5);
  sqcRYGate(q, 2.2228441962355756, 6);
  sqcRYGate(q, -1.4994102642944664, 7);
  sqcRYGate(q, -2.384146606801312, 8);
  sqcRYGate(q, 1.538517547578992, 9);
  sqcRYGate(q, -0.4230870889302468, 10);
  sqcRYGate(q, 1.6957635550074617, 11);
  sqcRYGate(q, -1.6171383523383112, 12);
  sqcRYGate(q, 1.5011938117368835, 13);
  sqcRYGate(q, 2.1078409938579457, 14);
  sqcRYGate(q, -1.0327383267451038, 15);
  sqcRYGate(q, -1.0343230246998345, 16);
  sqcRYGate(q, -1.6588092701972288, 17);
  sqcRYGate(q, -0.0026990050851833773, 18);
  sqcRYGate(q, -1.5665761260588988, 19);

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
