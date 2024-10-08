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

  sqcRYGate(q, -1.9632730865184183, 0);
  sqcRZGate(q, 0.9701098671127086, 0);
  sqcRYGate(q, -1.5650288473042109, 1);
  sqcRZGate(q, -0.009830479590155148, 1);
  sqcRYGate(q, 1.5694191968039182, 2);
  sqcRZGate(q, -1.9218793893051016, 2);
  sqcRYGate(q, 0.056509955225453545, 3);
  sqcRZGate(q, -0.7437490262515052, 3);
  sqcRYGate(q, 1.5398039429719423, 4);
  sqcRZGate(q, -1.4925986178616133, 4);
  sqcRYGate(q, -3.1415600523192717, 5);
  sqcRZGate(q, -0.606762844458232, 5);
  sqcRYGate(q, 0.00531856706873097, 6);
  sqcRZGate(q, -2.9070803344956513, 6);
  sqcRYGate(q, 1.5699597844778603, 7);
  sqcRZGate(q, -1.575946500071861, 7);
  sqcRYGate(q, -3.1413073951692545, 8);
  sqcRZGate(q, 1.2508502534449024, 8);
  sqcRYGate(q, -2.842484113689998, 9);
  sqcRZGate(q, 2.188999761679894, 9);
  sqcRYGate(q, 1.5683571629513142, 10);
  sqcRZGate(q, -0.8183530153756933, 10);
  sqcRYGate(q, -1.571531176489201, 11);
  sqcRZGate(q, -0.5358159617714842, 11);
  sqcRYGate(q, -0.00013184983099676106, 12);
  sqcRZGate(q, -2.4996400689677296, 12);
  sqcRYGate(q, -0.03421521165371041, 13);
  sqcRZGate(q, -2.7434101804490183, 13);
  sqcRYGate(q, 0.06864451487844143, 14);
  sqcRZGate(q, -0.01068072281095489, 14);
  sqcRYGate(q, -1.5722546581186507, 15);
  sqcRZGate(q, 1.6137766941645675, 15);
  sqcRYGate(q, 3.1332028811657917, 16);
  sqcRZGate(q, 1.7010823744146082, 16);
  sqcRYGate(q, 1.5321571900051882, 17);
  sqcRZGate(q, -2.204670654624606, 17);
  sqcRYGate(q, -1.5885455514041675, 18);
  sqcRZGate(q, 1.6138601062065059, 18);
  sqcRYGate(q, -1.546966056547294, 19);
  sqcRZGate(q, -1.9122602091292276, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.0829440658469616, 0);
  sqcRZGate(q, 0.8312802237823362, 0);
  sqcRYGate(q, 1.6016974712863021, 1);
  sqcRZGate(q, -2.2732725529477626, 1);
  sqcRYGate(q, -1.5937712206888441, 2);
  sqcRZGate(q, -1.540940946391892, 2);
  sqcRYGate(q, 0.918525281622129, 3);
  sqcRZGate(q, -0.5544113617403479, 3);
  sqcRYGate(q, 0.3470433284272133, 4);
  sqcRZGate(q, 3.12509311126815, 4);
  sqcRYGate(q, -0.2767109490626707, 5);
  sqcRZGate(q, 0.21177961410108703, 5);
  sqcRYGate(q, -0.06745775219278638, 6);
  sqcRZGate(q, -1.1050444590441157, 6);
  sqcRYGate(q, 2.407691444216521, 7);
  sqcRZGate(q, -1.5737936402911026, 7);
  sqcRYGate(q, -2.3520219064758097, 8);
  sqcRZGate(q, 0.6054149898751985, 8);
  sqcRYGate(q, -3.1107089305164233, 9);
  sqcRZGate(q, 1.7434842197781713, 9);
  sqcRYGate(q, 0.030649774405302976, 10);
  sqcRZGate(q, 2.369759293183973, 10);
  sqcRYGate(q, -0.0229863870736704, 11);
  sqcRZGate(q, 0.5135739140528326, 11);
  sqcRYGate(q, 0.3176054405536573, 12);
  sqcRZGate(q, -0.4675711845299712, 12);
  sqcRYGate(q, 2.5869357014621976, 13);
  sqcRZGate(q, -2.364184394156011, 13);
  sqcRYGate(q, 1.5706679365037748, 14);
  sqcRZGate(q, -0.09440094992620372, 14);
  sqcRYGate(q, 2.8295859658762126, 15);
  sqcRZGate(q, 1.8352857349101184, 15);
  sqcRYGate(q, -0.9540732909104342, 16);
  sqcRZGate(q, -1.7994028487646372, 16);
  sqcRYGate(q, 1.0216164057778796, 17);
  sqcRZGate(q, -1.2352315874773758, 17);
  sqcRYGate(q, 1.817790248210187, 18);
  sqcRZGate(q, -3.1330608463570173, 18);
  sqcRYGate(q, 3.1161196823504826, 19);
  sqcRZGate(q, 1.4601428467725572, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.585732842264341, 0);
  sqcRZGate(q, -0.07948851838334489, 0);
  sqcRYGate(q, -0.07727592852960186, 1);
  sqcRZGate(q, 2.288011831073818, 1);
  sqcRYGate(q, -1.6254264945850627, 2);
  sqcRZGate(q, 2.6007283605949016, 2);
  sqcRYGate(q, 1.653343697929228, 3);
  sqcRZGate(q, -1.5611804473876827, 3);
  sqcRYGate(q, -1.4893219914759834, 4);
  sqcRZGate(q, 1.5178349324655134, 4);
  sqcRYGate(q, -3.1380901792493465, 5);
  sqcRZGate(q, -2.517540952159187, 5);
  sqcRYGate(q, -3.1370951040625967, 6);
  sqcRZGate(q, 2.418530526219953, 6);
  sqcRYGate(q, 1.5645137431333647, 7);
  sqcRZGate(q, 2.1976226965690917, 7);
  sqcRYGate(q, -0.0007157189910174111, 8);
  sqcRZGate(q, -0.8193510296534012, 8);
  sqcRYGate(q, -0.22849112192080856, 9);
  sqcRZGate(q, 0.2028401034907423, 9);
  sqcRYGate(q, -0.3489747580975381, 10);
  sqcRZGate(q, 0.009722299195753993, 10);
  sqcRYGate(q, -1.5699220952396364, 11);
  sqcRZGate(q, -0.02135391160170807, 11);
  sqcRYGate(q, -0.9119993555907513, 12);
  sqcRZGate(q, -2.674676701615062, 12);
  sqcRYGate(q, 0.060762721467204184, 13);
  sqcRZGate(q, -0.9789256546584778, 13);
  sqcRYGate(q, 0.0175102801412806, 14);
  sqcRZGate(q, -1.4768010053799852, 14);
  sqcRYGate(q, 3.123198985379753, 15);
  sqcRZGate(q, -1.3821250462383494, 15);
  sqcRYGate(q, 0.5176709052356369, 16);
  sqcRZGate(q, -3.0696746057371858, 16);
  sqcRYGate(q, -1.496768341894956, 17);
  sqcRZGate(q, -2.809517745861246, 17);
  sqcRYGate(q, -0.2529901708471112, 18);
  sqcRZGate(q, 1.581883690088488, 18);
  sqcRYGate(q, 1.9346912971692163, 19);
  sqcRZGate(q, -1.5107659918568561, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.8823766897984159, 0);
  sqcRZGate(q, 3.038720545441309, 0);
  sqcRYGate(q, 3.12760234444397, 1);
  sqcRZGate(q, 3.116074050882621, 1);
  sqcRYGate(q, -1.3687508436211653, 2);
  sqcRZGate(q, 1.86889910972012, 2);
  sqcRYGate(q, 2.3541544245129282, 3);
  sqcRZGate(q, -1.7851896608815352, 3);
  sqcRYGate(q, 1.5715710987852791, 4);
  sqcRZGate(q, 1.5653443639655633, 4);
  sqcRYGate(q, 2.577830915084778, 5);
  sqcRZGate(q, 0.6760207365742864, 5);
  sqcRYGate(q, -3.1095407869619343, 6);
  sqcRZGate(q, -1.7343966761608223, 6);
  sqcRYGate(q, -1.5712455536996022, 7);
  sqcRZGate(q, -3.1378305795952777, 7);
  sqcRYGate(q, -2.404577198660077, 8);
  sqcRZGate(q, 1.074583652922164, 8);
  sqcRYGate(q, -0.30312908153812246, 9);
  sqcRZGate(q, 1.9742611219987019, 9);
  sqcRYGate(q, -0.8780709382014769, 10);
  sqcRZGate(q, -1.5720964550171996, 10);
  sqcRYGate(q, 0.06887931853092474, 11);
  sqcRZGate(q, 1.4327849879683807, 11);
  sqcRYGate(q, -2.760944758138447, 12);
  sqcRZGate(q, 0.13233128911951386, 12);
  sqcRYGate(q, -3.1409414799320454, 13);
  sqcRZGate(q, -2.443304313121211, 13);
  sqcRYGate(q, 2.8251041029262267, 14);
  sqcRZGate(q, -1.6131340859540293, 14);
  sqcRYGate(q, -1.500718578346419, 15);
  sqcRZGate(q, 1.5597081011428067, 15);
  sqcRYGate(q, 1.540786581235496, 16);
  sqcRZGate(q, -1.0482181062159732, 16);
  sqcRYGate(q, 1.596056922579035, 17);
  sqcRZGate(q, -3.015605815107382, 17);
  sqcRYGate(q, -3.0568501609673966, 18);
  sqcRZGate(q, -1.5478538280980778, 18);
  sqcRYGate(q, -0.030347810293488382, 19);
  sqcRZGate(q, -1.6770127867578006, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.563899721363592, 0);
  sqcRZGate(q, 0.25739373443072466, 0);
  sqcRYGate(q, 3.020068076679938, 1);
  sqcRZGate(q, 0.6133503708409277, 1);
  sqcRYGate(q, 1.5044750603714436, 2);
  sqcRZGate(q, 3.136715898261589, 2);
  sqcRYGate(q, 0.061882889967915744, 3);
  sqcRZGate(q, 0.17865645180755774, 3);
  sqcRYGate(q, -0.020738051900980103, 4);
  sqcRZGate(q, -0.5603586194327753, 4);
  sqcRYGate(q, 2.880472044550927, 5);
  sqcRZGate(q, 2.7337579952938587, 5);
  sqcRYGate(q, 0.8295163267118165, 6);
  sqcRZGate(q, -2.973536961433555, 6);
  sqcRYGate(q, 1.5725950607887385, 7);
  sqcRZGate(q, -1.115933028586614, 7);
  sqcRYGate(q, -1.5659292955801656, 8);
  sqcRZGate(q, 3.1402324941949535, 8);
  sqcRYGate(q, -1.5724744892965872, 9);
  sqcRZGate(q, -3.1385126999866677, 9);
  sqcRYGate(q, -1.5732706376615526, 10);
  sqcRZGate(q, -0.3673869090728381, 10);
  sqcRYGate(q, -8.061456516283982e-05, 11);
  sqcRZGate(q, -1.0300047917882542, 11);
  sqcRYGate(q, -0.7287562218297019, 12);
  sqcRZGate(q, 0.543697052169838, 12);
  sqcRYGate(q, 2.802138562585955, 13);
  sqcRZGate(q, -0.7715880162297285, 13);
  sqcRYGate(q, -3.13001151090213, 14);
  sqcRZGate(q, -1.6013036821387194, 14);
  sqcRYGate(q, 3.134199245803815, 15);
  sqcRZGate(q, 3.1300394050873583, 15);
  sqcRYGate(q, -0.258401004343348, 16);
  sqcRZGate(q, -1.7535536952582012, 16);
  sqcRYGate(q, 2.183650396778385, 17);
  sqcRZGate(q, 1.2320944588160687, 17);
  sqcRYGate(q, 2.901295478151314, 18);
  sqcRZGate(q, -1.5553725742806792, 18);
  sqcRYGate(q, -2.0303261877431513, 19);
  sqcRZGate(q, 1.644900883977578, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.1343101646913376, 0);
  sqcRZGate(q, -1.3695926383994395, 0);
  sqcRYGate(q, -3.1359878880478305, 1);
  sqcRZGate(q, -2.5964175398550404, 1);
  sqcRYGate(q, -1.6100961328009422, 2);
  sqcRZGate(q, 3.1382261525404727, 2);
  sqcRYGate(q, 1.5686049493023464, 3);
  sqcRZGate(q, 1.4663587327948058, 3);
  sqcRYGate(q, -0.006003152695444166, 4);
  sqcRZGate(q, -1.029296789306046, 4);
  sqcRYGate(q, 1.6115618973394448, 5);
  sqcRZGate(q, 1.635272985106, 5);
  sqcRYGate(q, -0.3671432044626321, 6);
  sqcRZGate(q, -2.996582756009282, 6);
  sqcRYGate(q, -0.19362295245862526, 7);
  sqcRZGate(q, 1.953123429169409, 7);
  sqcRYGate(q, -0.00484381471785282, 8);
  sqcRZGate(q, -0.0006873439727801411, 8);
  sqcRYGate(q, -0.0418035046648324, 9);
  sqcRZGate(q, -0.003963641882096525, 9);
  sqcRYGate(q, -0.5380709574668069, 10);
  sqcRZGate(q, -0.3126779149876535, 10);
  sqcRYGate(q, -0.21252118848735876, 11);
  sqcRZGate(q, 2.260563547517029, 11);
  sqcRYGate(q, 1.5826651453469287, 12);
  sqcRZGate(q, 1.4431282656204887, 12);
  sqcRYGate(q, 1.5720854989075153, 13);
  sqcRZGate(q, -0.05248987840324393, 13);
  sqcRYGate(q, -2.5288737467465605, 14);
  sqcRZGate(q, 1.5771628200529502, 14);
  sqcRYGate(q, 1.5700219480053415, 15);
  sqcRZGate(q, -0.22106576118254545, 15);
  sqcRYGate(q, 1.2335483489480945, 16);
  sqcRZGate(q, 0.7681502102946317, 16);
  sqcRYGate(q, 1.379736206620441, 17);
  sqcRZGate(q, 1.244577350653545, 17);
  sqcRYGate(q, 0.1038896669013667, 18);
  sqcRZGate(q, -3.139419018700816, 18);
  sqcRYGate(q, -3.0746632853458777, 19);
  sqcRZGate(q, -3.06859044200941, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.594550057272297, 0);
  sqcRZGate(q, 2.197486415875578, 0);
  sqcRYGate(q, -3.074663138414586, 1);
  sqcRZGate(q, -1.2983143293174821, 1);
  sqcRYGate(q, 1.5646352031034343, 2);
  sqcRZGate(q, 1.5730943453599018, 2);
  sqcRYGate(q, 0.09476756609032577, 3);
  sqcRZGate(q, 1.6750232673395518, 3);
  sqcRYGate(q, 3.077047803794528, 4);
  sqcRZGate(q, 1.545606117423379, 4);
  sqcRYGate(q, -3.1116782249259383, 5);
  sqcRZGate(q, -1.49911444162363, 5);
  sqcRYGate(q, 2.596877751222671, 6);
  sqcRZGate(q, 2.4145786181642044, 6);
  sqcRYGate(q, 3.052588746611458, 7);
  sqcRZGate(q, -1.2517187576883897, 7);
  sqcRYGate(q, -1.56670042522284, 8);
  sqcRZGate(q, 3.015238196847681, 8);
  sqcRYGate(q, -1.5723752000198434, 9);
  sqcRZGate(q, -1.6147746438734414, 9);
  sqcRYGate(q, 2.909092011282571, 10);
  sqcRZGate(q, 0.04248069401934483, 10);
  sqcRYGate(q, -0.13797807321039376, 11);
  sqcRZGate(q, -3.03868152041653, 11);
  sqcRYGate(q, 3.1350678884792185, 12);
  sqcRZGate(q, -1.6978577873193883, 12);
  sqcRYGate(q, -3.128647207079305, 13);
  sqcRZGate(q, -0.051891087059213734, 13);
  sqcRYGate(q, 0.0960981892626326, 14);
  sqcRZGate(q, -3.1387373028838343, 14);
  sqcRYGate(q, 3.1414031222018064, 15);
  sqcRZGate(q, 2.6109940139742274, 15);
  sqcRYGate(q, -2.971151227620095, 16);
  sqcRZGate(q, 1.8676683238561518, 16);
  sqcRYGate(q, 9.026168734006345e-06, 17);
  sqcRZGate(q, 2.3384571280537187, 17);
  sqcRYGate(q, -1.5736154738045753, 18);
  sqcRZGate(q, -0.142089608072488, 18);
  sqcRYGate(q, 1.5706933683883326, 19);
  sqcRZGate(q, 1.1235672642690187, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.004874890659686501, 0);
  sqcRZGate(q, -1.7630574762637652, 0);
  sqcRYGate(q, -3.139123345089965, 1);
  sqcRZGate(q, -2.593921900768947, 1);
  sqcRYGate(q, 1.5989830034459063, 2);
  sqcRZGate(q, -1.4709623158314997, 2);
  sqcRYGate(q, -1.517145496536877, 3);
  sqcRZGate(q, -0.7612037600511484, 3);
  sqcRYGate(q, -1.5717213640264078, 4);
  sqcRZGate(q, 1.439685134729083, 4);
  sqcRYGate(q, -1.5361688127297033, 5);
  sqcRZGate(q, 0.4814603075078776, 5);
  sqcRYGate(q, 3.1384054532424988, 6);
  sqcRZGate(q, 0.013743582290921985, 6);
  sqcRYGate(q, -3.1395514915559404, 7);
  sqcRZGate(q, -2.7920887646009445, 7);
  sqcRYGate(q, 0.002721633431717052, 8);
  sqcRZGate(q, -2.1188015790410573, 8);
  sqcRYGate(q, -0.0017863792324387306, 9);
  sqcRZGate(q, -0.7142107373158291, 9);
  sqcRYGate(q, -0.00044135066636918907, 10);
  sqcRZGate(q, -2.4667980649799697, 10);
  sqcRYGate(q, 0.000995742761938952, 11);
  sqcRZGate(q, 1.6124232243101977, 11);
  sqcRYGate(q, -1.5613003617365138, 12);
  sqcRZGate(q, 0.5884284576939407, 12);
  sqcRYGate(q, -1.5718646269816405, 13);
  sqcRZGate(q, -0.011656870756405459, 13);
  sqcRYGate(q, -1.5667673469519336, 14);
  sqcRZGate(q, 0.1941830969676644, 14);
  sqcRYGate(q, 0.0009483779181964636, 15);
  sqcRZGate(q, -2.106914731695792, 15);
  sqcRYGate(q, -0.0059067371764280965, 16);
  sqcRZGate(q, 1.3357501222987302, 16);
  sqcRYGate(q, -3.140097645176062, 17);
  sqcRZGate(q, -2.239723914565805, 17);
  sqcRYGate(q, -3.1394120056236106, 18);
  sqcRZGate(q, -1.699165424860853, 18);
  sqcRYGate(q, -0.0011206219915536053, 19);
  sqcRZGate(q, 0.45598557527780953, 19);

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
