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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.9894491039004434, 0);
  sqcRZGate(q, 0.4849302175908817, 0);
  sqcRYGate(q, 1.1636261289240473, 1);
  sqcRZGate(q, -1.7139260099526226, 1);
  sqcRYGate(q, 2.6039662870402935e-06, 2);
  sqcRZGate(q, 0.5167926970145671, 2);
  sqcRYGate(q, -3.1401862589095786, 3);
  sqcRZGate(q, -3.128518127130681, 3);
  sqcRYGate(q, -1.5706848816682495, 4);
  sqcRZGate(q, 1.5708471322934958, 4);
  sqcRYGate(q, 1.5700849717958552, 5);
  sqcRZGate(q, -1.5721417628224152, 5);
  sqcRYGate(q, 3.140777097183273, 6);
  sqcRZGate(q, 0.27400946122152603, 6);
  sqcRYGate(q, -1.5709105297291928, 7);
  sqcRZGate(q, 1.190479058448223, 7);
  sqcRYGate(q, -0.0006893818632018898, 8);
  sqcRZGate(q, 0.6624782494964243, 8);
  sqcRYGate(q, 3.1415391903130154, 9);
  sqcRZGate(q, 1.7492834417974406, 9);
  sqcRYGate(q, 1.5688712520459382, 10);
  sqcRZGate(q, 0.9849923015214012, 10);
  sqcRYGate(q, 1.5702041171694765, 11);
  sqcRZGate(q, 0.5042777256496037, 11);
  sqcRYGate(q, -0.19439608964928468, 12);
  sqcRZGate(q, -3.108595083151122, 12);
  sqcRYGate(q, 3.141495915196975, 13);
  sqcRZGate(q, 1.2481629919431911, 13);
  sqcRYGate(q, -0.0036509816422078956, 14);
  sqcRZGate(q, 2.4371876170310687, 14);
  sqcRYGate(q, -0.004005450336132199, 15);
  sqcRZGate(q, 3.0931064536366346, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.6361763747502867, 0);
  sqcRZGate(q, -1.0962193459205007, 0);
  sqcRYGate(q, 1.8981373344075836, 1);
  sqcRZGate(q, 0.997499604132814, 1);
  sqcRYGate(q, 0.2718998146528824, 2);
  sqcRZGate(q, 2.8219476501724703, 2);
  sqcRYGate(q, 3.141537177158141, 3);
  sqcRZGate(q, -1.610440214238129, 3);
  sqcRYGate(q, 1.5707581071124894, 4);
  sqcRZGate(q, -2.2704474928060003, 4);
  sqcRYGate(q, 1.5515340137273355, 5);
  sqcRZGate(q, 1.6501507640734046, 5);
  sqcRYGate(q, -1.5710270780776379, 6);
  sqcRZGate(q, -0.002460583105908762, 6);
  sqcRYGate(q, 0.0003901996808915962, 7);
  sqcRZGate(q, 0.3814004153049142, 7);
  sqcRYGate(q, 0.00012202288390160092, 8);
  sqcRZGate(q, -2.2355463451465303, 8);
  sqcRYGate(q, 0.9379525498902059, 9);
  sqcRZGate(q, -1.5702448964843723, 9);
  sqcRYGate(q, -0.27309542268314324, 10);
  sqcRZGate(q, -2.9032159190319393, 10);
  sqcRYGate(q, -2.736661468750957, 11);
  sqcRZGate(q, 1.7340529370692686, 11);
  sqcRYGate(q, 0.3010138697574041, 12);
  sqcRZGate(q, 3.1309386599323594, 12);
  sqcRYGate(q, -1.5697898138968682, 13);
  sqcRZGate(q, 3.1192725875703204, 13);
  sqcRYGate(q, -1.5582095338196114, 14);
  sqcRZGate(q, 0.001640048793736149, 14);
  sqcRYGate(q, 0.004977216086401601, 15);
  sqcRZGate(q, -1.2324995207966782, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.05675669029868491, 0);
  sqcRZGate(q, -0.17416804466772487, 0);
  sqcRYGate(q, -1.7314255194450723, 1);
  sqcRZGate(q, -3.136679339118033, 1);
  sqcRYGate(q, -0.8264577398883494, 2);
  sqcRZGate(q, -0.05287870799197366, 2);
  sqcRYGate(q, -3.141294608786536, 3);
  sqcRZGate(q, -1.3523042774111702, 3);
  sqcRYGate(q, -3.141486454967922, 4);
  sqcRZGate(q, 0.40081233422617135, 4);
  sqcRYGate(q, 0.6056439418452969, 5);
  sqcRZGate(q, -2.4606163293029555, 5);
  sqcRYGate(q, 1.5710372287452916, 6);
  sqcRZGate(q, -3.141466823840664, 6);
  sqcRYGate(q, -0.2189789728169144, 7);
  sqcRZGate(q, -1.5721327192068157, 7);
  sqcRYGate(q, 3.141583493367741, 8);
  sqcRZGate(q, 2.0278196999833256, 8);
  sqcRYGate(q, 3.141518626073982, 9);
  sqcRZGate(q, 3.134633066942645, 9);
  sqcRYGate(q, 1.47279325929955, 10);
  sqcRZGate(q, -3.1037424093311907, 10);
  sqcRYGate(q, -1.67083372808657, 11);
  sqcRZGate(q, -1.7131977280554143, 11);
  sqcRYGate(q, -0.04708962310402409, 12);
  sqcRZGate(q, -0.02400046718825935, 12);
  sqcRYGate(q, 3.1290624831898306, 13);
  sqcRZGate(q, 1.5503509304682082, 13);
  sqcRYGate(q, 0.891050306969016, 14);
  sqcRZGate(q, -0.7537094622442524, 14);
  sqcRYGate(q, -3.140540296416771, 15);
  sqcRZGate(q, 2.898380181912756, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.1371835536145121, 0);
  sqcRZGate(q, -0.39083334277827525, 0);
  sqcRYGate(q, -3.1116000562016373, 1);
  sqcRZGate(q, 1.7451042365128044, 1);
  sqcRYGate(q, -0.8733956890062186, 2);
  sqcRZGate(q, -2.530984674407309, 2);
  sqcRYGate(q, -1.5694568855455957, 3);
  sqcRZGate(q, 3.141015056111432, 3);
  sqcRYGate(q, 3.141085061772671, 4);
  sqcRZGate(q, 1.5163037407909794, 4);
  sqcRYGate(q, -3.1415127312856477, 5);
  sqcRZGate(q, -2.4590101494382397, 5);
  sqcRYGate(q, -1.5717313684736074, 6);
  sqcRZGate(q, -1.5826058009751387, 6);
  sqcRYGate(q, -1.5703517124603763, 7);
  sqcRZGate(q, -1.5708795074217017, 7);
  sqcRYGate(q, -3.141445713230115, 8);
  sqcRZGate(q, 2.5041834711812467, 8);
  sqcRYGate(q, -3.1114513988608024, 9);
  sqcRZGate(q, -0.009068830003799988, 9);
  sqcRYGate(q, -1.55627830624645, 10);
  sqcRZGate(q, -2.8899992923351623, 10);
  sqcRYGate(q, -2.9969302905009028, 11);
  sqcRZGate(q, -1.2671919416956872, 11);
  sqcRYGate(q, 0.5053322074123054, 12);
  sqcRZGate(q, -3.1312352202337803, 12);
  sqcRYGate(q, 1.5794370473960244, 13);
  sqcRZGate(q, 0.0014535920682030579, 13);
  sqcRYGate(q, 3.1285061884898284, 14);
  sqcRZGate(q, -2.3199108488041738, 14);
  sqcRYGate(q, -1.5716989460602742, 15);
  sqcRZGate(q, 1.5724132277783436, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.572528638785597, 0);
  sqcRZGate(q, -1.5708081312814057, 0);
  sqcRYGate(q, -3.1413227009920903, 1);
  sqcRZGate(q, -1.504285922178128, 1);
  sqcRYGate(q, -3.1411766790213065, 2);
  sqcRZGate(q, 2.1844216294798127, 2);
  sqcRYGate(q, -1.5709041354786473, 3);
  sqcRZGate(q, 1.4451055102228967, 3);
  sqcRYGate(q, -0.0008161966968764207, 4);
  sqcRZGate(q, 2.3170345810051796, 4);
  sqcRYGate(q, 1.5708821480843433, 5);
  sqcRZGate(q, 3.1379699319721506, 5);
  sqcRYGate(q, -2.948997550610235, 6);
  sqcRZGate(q, 3.0855413552096915, 6);
  sqcRYGate(q, -1.5732670395240957, 7);
  sqcRZGate(q, 1.937676912649155, 7);
  sqcRYGate(q, 3.1414687108952584, 8);
  sqcRZGate(q, 1.2636554744368942, 8);
  sqcRYGate(q, -0.34916131139831297, 9);
  sqcRZGate(q, -0.8553931994011721, 9);
  sqcRYGate(q, 1.5704118634368376, 10);
  sqcRZGate(q, -2.33445703664598, 10);
  sqcRYGate(q, 3.1396936083399165, 11);
  sqcRZGate(q, -1.0722373483702974, 11);
  sqcRYGate(q, -1.5712424952649053, 12);
  sqcRZGate(q, 8.607049233333441e-06, 12);
  sqcRYGate(q, 1.571306316336229, 13);
  sqcRZGate(q, -1.1766415668649297, 13);
  sqcRYGate(q, -1.5732838448533146, 14);
  sqcRZGate(q, 0.0005162073882214457, 14);
  sqcRYGate(q, -2.2947915924497786, 15);
  sqcRZGate(q, 2.4106131590544995, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5638436177874278, 0);
  sqcRZGate(q, 2.586356350863673, 0);
  sqcRYGate(q, 1.5727534607853908, 1);
  sqcRZGate(q, 3.139661708031501, 1);
  sqcRYGate(q, 0.45568304090539336, 2);
  sqcRZGate(q, 3.1348003691836004, 2);
  sqcRYGate(q, 0.024269464792348927, 3);
  sqcRZGate(q, 0.1322658076218266, 3);
  sqcRYGate(q, 3.141356540304065, 4);
  sqcRZGate(q, -1.8927842580026366, 4);
  sqcRYGate(q, -2.9979496093207008, 5);
  sqcRZGate(q, 2.1692253165213162, 5);
  sqcRYGate(q, -2.106299702504669, 6);
  sqcRZGate(q, -1.7480116756232658, 6);
  sqcRYGate(q, 3.1413535119040286, 7);
  sqcRZGate(q, 1.9377903942123371, 7);
  sqcRYGate(q, -6.842775533976341e-06, 8);
  sqcRZGate(q, 1.7574559066016668, 8);
  sqcRYGate(q, 1.651510475042528e-05, 9);
  sqcRZGate(q, 0.8846617571160005, 9);
  sqcRYGate(q, 3.140593868351222, 10);
  sqcRZGate(q, 2.3779048365078936, 10);
  sqcRYGate(q, -3.1082354557542877, 11);
  sqcRZGate(q, 1.6441659948852996, 11);
  sqcRYGate(q, -2.658327014303656, 12);
  sqcRZGate(q, -0.9643457968410836, 12);
  sqcRYGate(q, -3.1415472132965023, 13);
  sqcRZGate(q, 1.9650075832932867, 13);
  sqcRYGate(q, -1.5676458319281785, 14);
  sqcRZGate(q, -1.5640944625171942, 14);
  sqcRYGate(q, -3.1377385479220803, 15);
  sqcRZGate(q, -0.7340784080092638, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.000927521979774446, 0);
  sqcRZGate(q, -0.8698685615828268, 0);
  sqcRYGate(q, -1.78743583230742, 1);
  sqcRZGate(q, -0.0017923370513912298, 1);
  sqcRYGate(q, -1.571718536668365, 2);
  sqcRZGate(q, 1.450613843397277, 2);
  sqcRYGate(q, 1.5707332538665213, 3);
  sqcRZGate(q, -1.4775750508263368, 3);
  sqcRYGate(q, 1.5706664558235977, 4);
  sqcRZGate(q, 3.141047134391108, 4);
  sqcRYGate(q, 0.00046851224826651913, 5);
  sqcRZGate(q, 0.96894616113955, 5);
  sqcRYGate(q, 1.5657461639033388, 6);
  sqcRZGate(q, -0.02603723184980268, 6);
  sqcRYGate(q, 1.570750596916565, 7);
  sqcRZGate(q, 1.5117109530097448, 7);
  sqcRYGate(q, 3.1413698645167605, 8);
  sqcRZGate(q, 1.342286644428766, 8);
  sqcRYGate(q, -0.03672056579607208, 9);
  sqcRZGate(q, 0.8660414746791193, 9);
  sqcRYGate(q, 1.521140697936347, 10);
  sqcRZGate(q, 0.5868258387555622, 10);
  sqcRYGate(q, 1.5717276395026456, 11);
  sqcRZGate(q, -0.11143890931740508, 11);
  sqcRYGate(q, -9.414774584768184e-05, 12);
  sqcRZGate(q, 2.534613154556276, 12);
  sqcRYGate(q, 1.5691979940565322, 13);
  sqcRZGate(q, -3.1348522770048772, 13);
  sqcRYGate(q, 2.7978413011672014, 14);
  sqcRZGate(q, -0.8083265089327877, 14);
  sqcRYGate(q, -1.5609825128284671, 15);
  sqcRZGate(q, 3.1238379842748656, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.0027553138947951084, 0);
  sqcRZGate(q, 2.9956690850241503, 0);
  sqcRYGate(q, 1.5683701270664772, 1);
  sqcRZGate(q, -3.1412140811144997, 1);
  sqcRYGate(q, -0.00013575349932381248, 2);
  sqcRZGate(q, 2.7887199758573207, 2);
  sqcRYGate(q, -3.1413138101050597, 3);
  sqcRZGate(q, -1.4776000106414078, 3);
  sqcRYGate(q, 1.5706250030073485, 4);
  sqcRZGate(q, 3.141501834536719, 4);
  sqcRYGate(q, -1.5708314488221156, 5);
  sqcRZGate(q, 0.46728601511395146, 5);
  sqcRYGate(q, 1.5706547639211579, 6);
  sqcRZGate(q, 2.2295832408349145, 6);
  sqcRYGate(q, -3.1405989284479543, 7);
  sqcRZGate(q, 3.0825195876064284, 7);
  sqcRYGate(q, 0.47056616462786, 8);
  sqcRZGate(q, -3.1414417828623, 8);
  sqcRYGate(q, -3.141590473359814, 9);
  sqcRZGate(q, 2.4622345468872933, 9);
  sqcRYGate(q, 6.178083927999012e-05, 10);
  sqcRZGate(q, -1.573876796708749, 10);
  sqcRYGate(q, 6.621786514652075e-05, 11);
  sqcRZGate(q, -1.455496458829315, 11);
  sqcRYGate(q, 1.5702062760020532, 12);
  sqcRZGate(q, -2.5424246125003127, 12);
  sqcRYGate(q, 1.57458964461651, 13);
  sqcRZGate(q, 0.7255678117410351, 13);
  sqcRYGate(q, 3.1414247892963854, 14);
  sqcRZGate(q, 1.5938753138890285, 14);
  sqcRYGate(q, 0.09070026381506349, 15);
  sqcRZGate(q, 0.009071450892903276, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5809545991993388, 0);
  sqcRZGate(q, 3.0959516867279966, 0);
  sqcRYGate(q, -1.354401292913619, 1);
  sqcRZGate(q, -1.774504198305112, 1);
  sqcRYGate(q, -3.133992275328009, 2);
  sqcRZGate(q, 0.47219536095572145, 2);
  sqcRYGate(q, -1.5697035847283258, 3);
  sqcRZGate(q, -0.26046303005614097, 3);
  sqcRYGate(q, -1.57033906516138, 4);
  sqcRZGate(q, 3.1407363933024643, 4);
  sqcRYGate(q, -1.5709823273538284, 5);
  sqcRZGate(q, -0.00014292751457301023, 5);
  sqcRYGate(q, -3.1413712015128095, 6);
  sqcRZGate(q, -2.644368158098861, 6);
  sqcRYGate(q, 1.5704060093953391, 7);
  sqcRZGate(q, 1.5033067779346574, 7);
  sqcRYGate(q, 1.5707393188577055, 8);
  sqcRZGate(q, -5.810977491371716e-05, 8);
  sqcRYGate(q, -1.560757780294808, 9);
  sqcRZGate(q, -3.8497773414922784e-05, 9);
  sqcRYGate(q, -0.000460650159404885, 10);
  sqcRZGate(q, -2.154036832456482, 10);
  sqcRYGate(q, 3.034441226521454, 11);
  sqcRZGate(q, -2.4265560153600414, 11);
  sqcRYGate(q, -7.644345945449717e-05, 12);
  sqcRZGate(q, -1.3153154859039062, 12);
  sqcRYGate(q, 3.1412796596311847, 13);
  sqcRZGate(q, 2.1509385305107207, 13);
  sqcRYGate(q, 0.005779218401812614, 14);
  sqcRZGate(q, -1.0726487278114145, 14);
  sqcRYGate(q, -0.10350141781562437, 15);
  sqcRZGate(q, 3.1251248258185877, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3778148828294121, 0);
  sqcRZGate(q, -0.08665565304876031, 0);
  sqcRYGate(q, -0.14820963592173836, 1);
  sqcRZGate(q, -3.0157502311100264, 1);
  sqcRYGate(q, -3.141553400893729, 2);
  sqcRZGate(q, -0.6251770198730497, 2);
  sqcRYGate(q, -3.1408315942937803, 3);
  sqcRZGate(q, 2.8911276199227323, 3);
  sqcRYGate(q, 1.5706722884746174, 4);
  sqcRZGate(q, 1.5703635161732419, 4);
  sqcRYGate(q, 1.5983536112569423, 5);
  sqcRZGate(q, -0.4201722074949146, 5);
  sqcRYGate(q, -3.1389252328173582, 6);
  sqcRZGate(q, -0.1612878460744449, 6);
  sqcRYGate(q, 3.141591887445608, 7);
  sqcRZGate(q, 1.5175720581923784, 7);
  sqcRYGate(q, -1.5708156745576056, 8);
  sqcRZGate(q, -1.5703459036190721, 8);
  sqcRYGate(q, -1.57104572240645, 9);
  sqcRZGate(q, 2.5100526048589624, 9);
  sqcRYGate(q, 2.8932884343149725, 10);
  sqcRZGate(q, 1.5750485713690683, 10);
  sqcRYGate(q, -3.1412169181903558, 11);
  sqcRZGate(q, 2.1844980015858395, 11);
  sqcRYGate(q, -3.1415216671939517, 12);
  sqcRZGate(q, -0.7158175597803123, 12);
  sqcRYGate(q, 1.570470063421614, 13);
  sqcRZGate(q, 0.0037776061519210315, 13);
  sqcRYGate(q, 3.141358491019179, 14);
  sqcRZGate(q, 0.7919050225655767, 14);
  sqcRYGate(q, -0.09049033358844039, 15);
  sqcRZGate(q, 1.0589287767024305, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5607162477313343, 0);
  sqcRZGate(q, 1.5717017481933724, 0);
  sqcRYGate(q, -3.1407285703560373, 1);
  sqcRZGate(q, -0.9537024835277588, 1);
  sqcRYGate(q, 1.5706735709853936, 2);
  sqcRZGate(q, -2.7744980597526014, 2);
  sqcRYGate(q, -1.5707310305231497, 3);
  sqcRZGate(q, -3.141495662974351, 3);
  sqcRYGate(q, 2.7579420660663927, 4);
  sqcRZGate(q, -2.47665405958754, 4);
  sqcRYGate(q, 0.000484413769772235, 5);
  sqcRZGate(q, -0.8573372306058459, 5);
  sqcRYGate(q, -1.6760234499649111, 6);
  sqcRZGate(q, -1.563096787147882, 6);
  sqcRYGate(q, -1.3971394604329213, 7);
  sqcRZGate(q, 0.09092575967912953, 7);
  sqcRYGate(q, 1.5682137539272665, 8);
  sqcRZGate(q, -2.0404654009212413, 8);
  sqcRYGate(q, 3.1413966211124364, 9);
  sqcRZGate(q, -0.6353204395091951, 9);
  sqcRYGate(q, -0.23881805375906665, 10);
  sqcRZGate(q, 1.5678614910093767, 10);
  sqcRYGate(q, -0.0009041020137048649, 11);
  sqcRZGate(q, -0.36121226560335895, 11);
  sqcRYGate(q, 1.570857275515165, 12);
  sqcRZGate(q, 0.0011896664239526766, 12);
  sqcRYGate(q, -1.5710849336760553, 13);
  sqcRZGate(q, 1.570521559985373, 13);
  sqcRYGate(q, 0.00034601710735728577, 14);
  sqcRZGate(q, 2.116136461474304, 14);
  sqcRYGate(q, -3.1414047497758, 15);
  sqcRZGate(q, -0.537547241015515, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5712181651513815, 0);
  sqcRZGate(q, -1.409888656646316, 0);
  sqcRYGate(q, 1.5707580062481785, 1);
  sqcRZGate(q, -3.1409319618448968, 1);
  sqcRYGate(q, 3.1415811232180024, 2);
  sqcRZGate(q, 1.4684563675236844, 2);
  sqcRYGate(q, -1.5707968738115305, 3);
  sqcRZGate(q, -2.299366406567756, 3);
  sqcRYGate(q, 0.0001941673464909144, 4);
  sqcRZGate(q, 1.874303109382797, 4);
  sqcRYGate(q, -0.0007944830845776352, 5);
  sqcRZGate(q, -0.23047400294956197, 5);
  sqcRYGate(q, -3.1204082200688643, 6);
  sqcRZGate(q, 0.007520977600001366, 6);
  sqcRYGate(q, -3.1388483155994114, 7);
  sqcRZGate(q, 0.17250036532320936, 7);
  sqcRYGate(q, 3.1366859834604406, 8);
  sqcRZGate(q, 1.1968808967806526, 8);
  sqcRYGate(q, 3.118407542824887, 9);
  sqcRZGate(q, -0.0015076201362126955, 9);
  sqcRYGate(q, 1.5706518852670814, 10);
  sqcRZGate(q, 1.5706909102467774, 10);
  sqcRYGate(q, 3.141565335815625, 11);
  sqcRZGate(q, -0.45921108718484144, 11);
  sqcRYGate(q, 1.5706967723835739, 12);
  sqcRZGate(q, -1.686405590030403, 12);
  sqcRYGate(q, 1.570491172110657, 13);
  sqcRZGate(q, -0.00032742441930011523, 13);
  sqcRYGate(q, 1.5590383520072297, 14);
  sqcRZGate(q, -1.570015435148132, 14);
  sqcRYGate(q, 1.5789767308851443, 15);
  sqcRZGate(q, 1.5735025988523612, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.571116228755476, 0);
  sqcRZGate(q, 1.5710559639020025, 0);
  sqcRYGate(q, -1.5708190694210338, 1);
  sqcRZGate(q, -2.714751311291227, 1);
  sqcRYGate(q, -5.496947434647367e-05, 2);
  sqcRZGate(q, -2.6721526149499413, 2);
  sqcRYGate(q, -3.1415784070309334, 3);
  sqcRZGate(q, 2.4130403691381597, 3);
  sqcRYGate(q, -3.141567834606801, 4);
  sqcRZGate(q, 0.9683023388722894, 4);
  sqcRYGate(q, 3.1414882549973586, 5);
  sqcRZGate(q, -1.5077857272614783, 5);
  sqcRYGate(q, 1.5710715195470577, 6);
  sqcRZGate(q, 3.0394778899353283, 6);
  sqcRYGate(q, -2.9677871621392375, 7);
  sqcRZGate(q, -2.789301303029935, 7);
  sqcRYGate(q, 3.1354518444746065, 8);
  sqcRZGate(q, -0.1295203623039525, 8);
  sqcRYGate(q, 1.4901051379137895, 9);
  sqcRZGate(q, -2.7766250200392877, 9);
  sqcRYGate(q, -1.570861072607527, 10);
  sqcRZGate(q, 1.561025618854857, 10);
  sqcRYGate(q, 1.5708073439113566, 11);
  sqcRZGate(q, 0.9406814194068435, 11);
  sqcRYGate(q, -0.21876314819826526, 12);
  sqcRZGate(q, 1.6012862979904048, 12);
  sqcRYGate(q, 1.5709428282379898, 13);
  sqcRZGate(q, -1.6615671785507538, 13);
  sqcRYGate(q, -1.574157311723013, 14);
  sqcRZGate(q, 1.5709308189113793, 14);
  sqcRYGate(q, 1.5703931876778368, 15);
  sqcRZGate(q, 1.0622620130759595, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9398617928243418, 0);
  sqcRZGate(q, -1.9779953004032995, 0);
  sqcRYGate(q, -3.1415398179229954, 1);
  sqcRZGate(q, -2.3393546635015827, 1);
  sqcRYGate(q, -1.5708227265123489, 2);
  sqcRZGate(q, 1.5707627158570165, 2);
  sqcRYGate(q, -1.5707780950746133, 3);
  sqcRZGate(q, 2.8393881171290936, 3);
  sqcRYGate(q, -1.5709005522668562, 4);
  sqcRZGate(q, 0.7736245039642501, 4);
  sqcRYGate(q, 1.5705621977926656, 5);
  sqcRZGate(q, -1.5711816645713168, 5);
  sqcRYGate(q, 0.049114059778451846, 6);
  sqcRZGate(q, 3.1385187272061157, 6);
  sqcRYGate(q, 3.1415481813362236, 7);
  sqcRZGate(q, -2.9890247789287097, 7);
  sqcRYGate(q, 3.1415679462184385, 8);
  sqcRZGate(q, 1.344733026254235, 8);
  sqcRYGate(q, 0.00013160950720735487, 9);
  sqcRZGate(q, -0.36528615000738274, 9);
  sqcRYGate(q, 0.00014181120152834126, 10);
  sqcRZGate(q, 1.5803037761881589, 10);
  sqcRYGate(q, 7.342555953548526e-05, 11);
  sqcRZGate(q, -1.5428509012830642, 11);
  sqcRYGate(q, -1.570769695706604, 12);
  sqcRZGate(q, 1.5708215838112605, 12);
  sqcRYGate(q, -1.570790455510961, 13);
  sqcRZGate(q, 0.3254593977213051, 13);
  sqcRYGate(q, -1.3632926185804584, 14);
  sqcRZGate(q, 3.0898636446006664, 14);
  sqcRYGate(q, 0.00030390357682237465, 15);
  sqcRZGate(q, 1.184949084242747, 15);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1412070507248644, 0);
  sqcRZGate(q, 2.015746757636915, 0);
  sqcRYGate(q, 3.1406254964451814, 1);
  sqcRZGate(q, -1.5741008032416608, 1);
  sqcRYGate(q, 1.5710451454196006, 2);
  sqcRZGate(q, 0.8517544594690404, 2);
  sqcRYGate(q, 9.090186745996931e-05, 3);
  sqcRZGate(q, 3.065255351057364, 3);
  sqcRYGate(q, 3.14155715429683, 4);
  sqcRZGate(q, 0.052504193092794964, 4);
  sqcRYGate(q, -1.6073748938802883, 5);
  sqcRZGate(q, 1.1943696236848043, 5);
  sqcRYGate(q, -1.5707909090935717, 6);
  sqcRZGate(q, -2.287423550456737, 6);
  sqcRYGate(q, 3.139876973211349, 7);
  sqcRZGate(q, 1.0718434266798316, 7);
  sqcRYGate(q, -1.5714060110690742, 8);
  sqcRZGate(q, 0.8609108094374937, 8);
  sqcRYGate(q, -1.5171801602046593, 9);
  sqcRZGate(q, -1.948057719550377, 9);
  sqcRYGate(q, -1.570846846832297, 10);
  sqcRZGate(q, -0.7158819299391899, 10);
  sqcRYGate(q, 3.1415433738420724, 11);
  sqcRZGate(q, 0.5891825688571389, 11);
  sqcRYGate(q, 1.5713934500196558, 12);
  sqcRZGate(q, 2.4262709391745583, 12);
  sqcRYGate(q, -3.1412810883906888, 13);
  sqcRZGate(q, -0.053987878930138455, 13);
  sqcRYGate(q, -0.0029781964379695424, 14);
  sqcRZGate(q, -0.6635863803561305, 14);
  sqcRYGate(q, 3.141195746681019, 15);
  sqcRZGate(q, -1.2735895847927001, 15);

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
