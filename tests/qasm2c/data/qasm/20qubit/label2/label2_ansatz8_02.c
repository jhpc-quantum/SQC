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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.394933085671876, 0);
  sqcRYGate(q, 2.26523750336599, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4711422755564654, 0);
  sqcRYGate(q, -0.17021386888673362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4203831326670286, 2);
  sqcRYGate(q, 2.328552324174982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8108819483164843, 2);
  sqcRYGate(q, 1.3595938021688814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7221063521948208, 4);
  sqcRYGate(q, -1.4778760214384667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6464252053890815, 4);
  sqcRYGate(q, 1.1022675032065945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.581118971858725, 6);
  sqcRYGate(q, 2.923162389725333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9574127945132416, 6);
  sqcRYGate(q, 1.5121507238256902, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4220823127602324, 8);
  sqcRYGate(q, 1.4448019510138934, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0546839478542145, 8);
  sqcRYGate(q, -3.1318030267006933, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9323832412522356, 10);
  sqcRYGate(q, -2.7002005632502906, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6258662745166355, 10);
  sqcRYGate(q, -2.6462536702578667, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.933962849494093, 12);
  sqcRYGate(q, 1.6957869342312364, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.8681999993804537, 12);
  sqcRYGate(q, -3.0679991123581796, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3651224012854528, 14);
  sqcRYGate(q, 1.583106622293939, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6450630487214992, 14);
  sqcRYGate(q, 3.0466028198370467, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8570319669404137, 16);
  sqcRYGate(q, -0.05136461031690587, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.096832176439309, 16);
  sqcRYGate(q, -1.17092754559597, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0086441020412806, 18);
  sqcRYGate(q, -1.760397163904132, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8676891045781108, 18);
  sqcRYGate(q, 2.9279190257431864, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.7157463242269193, 0);
  sqcRYGate(q, -2.6546723251212536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.41929675231036057, 0);
  sqcRYGate(q, 2.1129474230978333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.134571371880433, 2);
  sqcRYGate(q, -0.8538012595606634, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0008438440989202435, 2);
  sqcRYGate(q, -0.0006609023486348065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9955070786699514, 4);
  sqcRYGate(q, -0.06136218225019618, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.376004423611278, 4);
  sqcRYGate(q, -1.3330081592627518, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7771291184084728, 6);
  sqcRYGate(q, -3.073791186331472, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3104866583181654, 6);
  sqcRYGate(q, 3.0496618845887005, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9793347610312788, 8);
  sqcRYGate(q, 1.7567349807584467, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1316386479122857, 8);
  sqcRYGate(q, -3.0845348775329886, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.931885124173649, 10);
  sqcRYGate(q, 0.3969678910007142, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.004011223144286169, 10);
  sqcRYGate(q, -3.1352948501706104, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.7565676606223088, 12);
  sqcRYGate(q, -1.4729995043469053, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.45394711620715, 12);
  sqcRYGate(q, 1.8450287858925412, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.7251225613932242, 14);
  sqcRYGate(q, -2.616897950597307, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.7694690733917078, 14);
  sqcRYGate(q, 0.7220013833500176, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.240497904750633, 16);
  sqcRYGate(q, -2.7757472921999846, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.06806418036366713, 16);
  sqcRYGate(q, 0.8723838254219254, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.6017742826562158, 1);
  sqcRYGate(q, -2.628721119418159, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7378670480381864, 1);
  sqcRYGate(q, 2.813523000564436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8072047514106964, 3);
  sqcRYGate(q, 2.2973372631631177, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.007426310424609554, 3);
  sqcRYGate(q, 0.003387416566002166, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5726521667561055, 5);
  sqcRYGate(q, -0.6324190807131284, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.924243941306499, 5);
  sqcRYGate(q, 0.014548160946783462, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.883741254140167, 7);
  sqcRYGate(q, 0.7963158274078077, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.00011700914764048507, 7);
  sqcRYGate(q, 3.141297649684706, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.1873296028439677, 9);
  sqcRYGate(q, 0.9647802079536678, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.9072849342488696, 9);
  sqcRYGate(q, 1.4037048139185948, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.028607945791078393, 11);
  sqcRYGate(q, -0.9703110607837363, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.07110250454002465, 11);
  sqcRYGate(q, -3.070743383832277, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.7866890296585474, 13);
  sqcRYGate(q, -1.451619245397751, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.8645371156860286, 13);
  sqcRYGate(q, 0.3750578308874104, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.695048512188883, 15);
  sqcRYGate(q, -1.005085157066091, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.7903677459082437, 15);
  sqcRYGate(q, -0.03327556026685041, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.1879445763138436, 17);
  sqcRYGate(q, 0.83323756776353, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.0705202583691875, 17);
  sqcRYGate(q, -0.11689447661932739, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.678904983373923, 0);
  sqcRYGate(q, 0.5634570783338528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.038490870139943, 0);
  sqcRYGate(q, 1.7314425754330758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5793573791240294, 2);
  sqcRYGate(q, 2.6372053835014047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0308130956402772, 2);
  sqcRYGate(q, 2.126700741944679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.75790565246692, 4);
  sqcRYGate(q, 3.023401528521643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.029113301950634, 4);
  sqcRYGate(q, -0.540338081369386, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.638775560428846, 6);
  sqcRYGate(q, -1.7537075850579178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4585299603148987, 6);
  sqcRYGate(q, -0.6281857789108267, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.852868764420236, 8);
  sqcRYGate(q, 0.02676531738036233, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8966049780453056, 8);
  sqcRYGate(q, -0.7017903989359545, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.034262498902336, 10);
  sqcRYGate(q, 2.8401129305655637, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.717809641483873, 10);
  sqcRYGate(q, -0.610284027709957, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.39742976491370197, 12);
  sqcRYGate(q, -0.6303228820183695, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7641995856024656, 12);
  sqcRYGate(q, 2.951410874192885, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7032653154755373, 14);
  sqcRYGate(q, -0.3516731350168589, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.108762211031892, 14);
  sqcRYGate(q, -0.07738109695362194, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.37929042093611876, 16);
  sqcRYGate(q, 3.0055041399953875, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.019834431423859655, 16);
  sqcRYGate(q, -0.03747630015859915, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.37119901260627697, 18);
  sqcRYGate(q, -2.002309058899068, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.2304297264006916, 18);
  sqcRYGate(q, -1.80079407406535, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.474762833040694, 0);
  sqcRYGate(q, 2.7980704659984403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.598420745237304, 0);
  sqcRYGate(q, 1.1940805140254196, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.425837487973598, 2);
  sqcRYGate(q, 1.245144775151421, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.140141670381819, 2);
  sqcRYGate(q, -0.0002559225146611904, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5682618585030408, 4);
  sqcRYGate(q, 0.9918760049703276, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.852531508491245, 4);
  sqcRYGate(q, 2.2407035495959082, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.711592454463192, 6);
  sqcRYGate(q, 0.08931922845221543, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.647520347960175, 6);
  sqcRYGate(q, -3.1333727665740883, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.377914439657908, 8);
  sqcRYGate(q, 3.097416222158052, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.1402930040511414, 8);
  sqcRYGate(q, -3.047170404396866, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.5058071837847047, 10);
  sqcRYGate(q, 2.579632537434353, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.20686307533504528, 10);
  sqcRYGate(q, -0.025039003922616487, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.5204408069751327, 12);
  sqcRYGate(q, 0.6183997004669083, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.1409529994167835, 12);
  sqcRYGate(q, -0.0006962716684828507, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.9643228373664483, 14);
  sqcRYGate(q, 1.1605908931671522, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.0969627104744086, 14);
  sqcRYGate(q, -1.5426911729867978, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.5834652911745393, 16);
  sqcRYGate(q, 1.495207342980291, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.8372874980177711, 16);
  sqcRYGate(q, 1.2134830551158542, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.4559629418715552, 1);
  sqcRYGate(q, 2.203286861605065, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.632715502785276, 1);
  sqcRYGate(q, -1.9637002582181529, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.086338475674176, 3);
  sqcRYGate(q, 0.8409756124210405, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.00017138718844635613, 3);
  sqcRYGate(q, -0.0007581618251404289, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9262190907581336, 5);
  sqcRYGate(q, -2.141733848113252, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6969594106681143, 5);
  sqcRYGate(q, -1.591910556204411, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2015115069792213, 7);
  sqcRYGate(q, 1.0914120261823594, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1131791712682158, 7);
  sqcRYGate(q, -0.08828049528589693, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.24634359801332298, 9);
  sqcRYGate(q, 1.3024146052077725, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.013117892007238369, 9);
  sqcRYGate(q, 3.0190357823950444, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.13949994672977709, 11);
  sqcRYGate(q, 2.6171492022311362, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.9828335895472495, 11);
  sqcRYGate(q, -0.011494753221775074, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.845550255621779, 13);
  sqcRYGate(q, -1.9252975181305352, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.119993909454798, 13);
  sqcRYGate(q, -3.0405695905348065, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.15197684850391432, 15);
  sqcRYGate(q, 2.216263127661812, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.4401737370308325, 15);
  sqcRYGate(q, 3.071661626304775, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 1.2593807826963606, 17);
  sqcRYGate(q, -1.4684490431211605, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.6055898120056407, 17);
  sqcRYGate(q, -0.1385262418216664, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.7917290822045255, 0);
  sqcRYGate(q, 0.9899544387014445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.574724093755832, 0);
  sqcRYGate(q, -2.0375854727840443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3012797460624501, 2);
  sqcRYGate(q, -2.3865305186524206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.506969266616418, 2);
  sqcRYGate(q, -1.6151218168797432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7254671849548631, 4);
  sqcRYGate(q, -2.8040074661583163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8366203997379262, 4);
  sqcRYGate(q, -1.2683575776653047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9723814672108348, 6);
  sqcRYGate(q, 1.114431219365252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1278648792795054, 6);
  sqcRYGate(q, 2.587733011276534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1012027714930515, 8);
  sqcRYGate(q, 0.5450740974850525, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.555042640024972, 8);
  sqcRYGate(q, -2.351004812730896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.719115031796871, 10);
  sqcRYGate(q, 2.116067159143962, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2646406615856298, 10);
  sqcRYGate(q, -0.28130863019286934, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1393704113230454, 12);
  sqcRYGate(q, -1.613614532945337, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3026344678466657, 12);
  sqcRYGate(q, 1.1959867697129911, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6667480692109891, 14);
  sqcRYGate(q, 2.6454585681989164, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8608682195904755, 14);
  sqcRYGate(q, 0.05278398421751174, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9660674440952386, 16);
  sqcRYGate(q, -0.7567803140203532, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.0363774912246937, 16);
  sqcRYGate(q, -2.5114349394127946, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.2986877621742832, 18);
  sqcRYGate(q, -2.616515863475393, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.4041574613512644, 18);
  sqcRYGate(q, -0.02528617494122711, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.92439792542685, 0);
  sqcRYGate(q, -1.9694803918994577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1356694224119215, 0);
  sqcRYGate(q, 1.6697610118888138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6298161074731112, 2);
  sqcRYGate(q, -1.6877619200067384, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.020671309293577522, 2);
  sqcRYGate(q, 3.136101815619737, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.941752798540972, 4);
  sqcRYGate(q, 2.4293485786399875, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0393848280587368, 4);
  sqcRYGate(q, 3.0799037658471127, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.130884357518341, 6);
  sqcRYGate(q, -0.1611539253935268, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.17851073270097345, 6);
  sqcRYGate(q, 0.041383626242707194, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.7346838109530556, 8);
  sqcRYGate(q, 1.1542279573417087, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1372994520395214, 8);
  sqcRYGate(q, 3.120033201946064, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.8700331900577076, 10);
  sqcRYGate(q, -2.7167385327027236, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.6881388774683755, 10);
  sqcRYGate(q, 3.081661101574816, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.6826464962829997, 12);
  sqcRYGate(q, 3.1092367402210663, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.1383638350276795, 12);
  sqcRYGate(q, -3.1408946253144268, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.9197124227433031, 14);
  sqcRYGate(q, -1.0802112777032502, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.05392586245788554, 14);
  sqcRYGate(q, -3.1413578774730637, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.225701187136012, 16);
  sqcRYGate(q, 2.1336973634147682, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 3.0919365938374694, 16);
  sqcRYGate(q, 0.13774495223993902, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 3.0625150670145227, 1);
  sqcRYGate(q, -1.060420357559154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2718363391650937, 1);
  sqcRYGate(q, -1.1671657622005491, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9540419016788104, 3);
  sqcRYGate(q, 0.04003044070418227, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.02383468167175185, 3);
  sqcRYGate(q, 1.0371344514859326, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0859602062112796, 5);
  sqcRYGate(q, -2.1563690706293945, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.111241535268862, 5);
  sqcRYGate(q, -0.003652354900185865, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4750631197949757, 7);
  sqcRYGate(q, 0.857138888762319, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.008489296783890259, 7);
  sqcRYGate(q, 0.002539631397540274, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.329969429718381, 9);
  sqcRYGate(q, -1.780621472642105, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.18436390434345018, 9);
  sqcRYGate(q, -3.0209789087837593, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5955986111432452, 11);
  sqcRYGate(q, 1.6677763173550109, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1372046054914247, 11);
  sqcRYGate(q, -3.0093725404060683, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.879013673800576, 13);
  sqcRYGate(q, -1.7828106912418493, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.0955340264120323, 13);
  sqcRYGate(q, -0.0041355688329565155, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.23802309122998194, 15);
  sqcRYGate(q, 0.4252252867268355, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.0034654978626446125, 15);
  sqcRYGate(q, -3.138153018962902, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.6129210988046783, 17);
  sqcRYGate(q, -3.127480651538893, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.43408003275398155, 17);
  sqcRYGate(q, 0.0188117199628191, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.27962273137610455, 0);
  sqcRYGate(q, 0.8841042615691518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7305619080255445, 0);
  sqcRYGate(q, -1.4695526896799267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.919247147502834, 2);
  sqcRYGate(q, -1.3710388365316102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6271479925020533, 2);
  sqcRYGate(q, -0.2429189463322522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4584461642278632, 4);
  sqcRYGate(q, 0.15879489912404876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.058397930954011024, 4);
  sqcRYGate(q, 1.2382986343901674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9529125564053356, 6);
  sqcRYGate(q, -2.411535783273186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.871335830073747, 6);
  sqcRYGate(q, -0.3069830856679204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.42281240327145, 8);
  sqcRYGate(q, 1.1251112749671002, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.130696794907966, 8);
  sqcRYGate(q, -0.39743218848116496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4769243005905395, 10);
  sqcRYGate(q, 1.3612042978300778, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5294146186143248, 10);
  sqcRYGate(q, -3.1409164433848162, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.09563980189143705, 12);
  sqcRYGate(q, -0.5031308001152253, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.00011219320912591945, 12);
  sqcRYGate(q, 2.2291498631549436, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6382010467035764, 14);
  sqcRYGate(q, -1.3102268263248602, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.005968826637228197, 14);
  sqcRYGate(q, 0.06633508691979777, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.07202058909591, 16);
  sqcRYGate(q, -2.3951858019313095, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.5544683288145569, 16);
  sqcRYGate(q, 1.9218165955234667, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.822270252874799, 18);
  sqcRYGate(q, -0.6236612725270148, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.3393449044894753, 18);
  sqcRYGate(q, 1.0883450176523501, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.7412255927189113, 0);
  sqcRYGate(q, -2.63657911134622, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9397742337340733, 0);
  sqcRYGate(q, -1.584381229006597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.652514774647872, 2);
  sqcRYGate(q, -0.22648705643750236, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0023822530794497254, 2);
  sqcRYGate(q, 0.047189828213025226, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.13294830197640287, 4);
  sqcRYGate(q, -0.06891178120069075, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.003139801455397162, 4);
  sqcRYGate(q, 3.1407734706371877, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1234350896552847, 6);
  sqcRYGate(q, -1.7767151567427764, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.941798720230433, 6);
  sqcRYGate(q, -3.140150743485254, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.6251540113584868, 8);
  sqcRYGate(q, -1.086891419364093, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.003704562056987062, 8);
  sqcRYGate(q, -3.032882712079962, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.6481313761065737, 10);
  sqcRYGate(q, -1.5308327473458965, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.677614815537602, 10);
  sqcRYGate(q, 3.1124608955500306, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.241226887679555, 12);
  sqcRYGate(q, 2.1785562008539223, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.5213061319953621, 12);
  sqcRYGate(q, 0.010561092849170173, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.1053081155653697, 14);
  sqcRYGate(q, 0.37802240558520417, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.0015214068382833899, 14);
  sqcRYGate(q, 0.007274056146978881, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.0874051738679551, 16);
  sqcRYGate(q, 2.609684966488684, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.01733654455783462, 16);
  sqcRYGate(q, -0.015344857726487983, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.625613795901096, 1);
  sqcRYGate(q, -2.1285934510475553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2745432090335206, 1);
  sqcRYGate(q, 0.4012774985775991, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.163374566961209, 3);
  sqcRYGate(q, -2.296464914486811, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.00525146321501656, 3);
  sqcRYGate(q, -2.5971124440365694, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.060644679787128, 5);
  sqcRYGate(q, 1.5436139417025327, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3873060564792077, 5);
  sqcRYGate(q, -0.0006462122533637895, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.43079098191999, 7);
  sqcRYGate(q, 0.03418604169441952, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1391591017968343, 7);
  sqcRYGate(q, 0.003438315938261321, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.15844759942640066, 9);
  sqcRYGate(q, 2.4703276092072026, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.12251130322179007, 9);
  sqcRYGate(q, 0.07231659717689354, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.412982946812447, 11);
  sqcRYGate(q, -1.0890426668674351, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.002016106091219605, 11);
  sqcRYGate(q, -2.8069578083208744, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.828659158510449, 13);
  sqcRYGate(q, -2.063284791043339, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.0821973285840876, 13);
  sqcRYGate(q, 0.017836212684277264, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.081881798320403, 15);
  sqcRYGate(q, 1.427139168308209, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.0624675323126724, 15);
  sqcRYGate(q, 0.022177091485859, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.1288430961801245, 17);
  sqcRYGate(q, 0.45850805038614995, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.11592177234885569, 17);
  sqcRYGate(q, -3.125304659912725, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.7911635947227066, 0);
  sqcRYGate(q, -2.318215097211496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3685226683791907, 0);
  sqcRYGate(q, 2.7651928149104235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5188235170352777, 2);
  sqcRYGate(q, -3.018103634640648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6659179321101414, 2);
  sqcRYGate(q, -0.06549165553829717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6370440038281941, 4);
  sqcRYGate(q, 1.8591912312342278, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1412009570571864, 4);
  sqcRYGate(q, 1.4895248949717426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.694150581476952, 6);
  sqcRYGate(q, -1.4773146622094073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.12225452346692, 6);
  sqcRYGate(q, -0.058193422997979874, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1874286447448572, 8);
  sqcRYGate(q, 0.3396018791471611, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.078447647882547, 8);
  sqcRYGate(q, 0.6692628033251964, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.09168064623556749, 10);
  sqcRYGate(q, -3.0134635550967532, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1697752475218195, 10);
  sqcRYGate(q, 1.3475193185722374, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0562199176130065, 12);
  sqcRYGate(q, 1.643093835752163, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.290883630208878, 12);
  sqcRYGate(q, -0.13303598070084938, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5156952627828187, 14);
  sqcRYGate(q, -2.5603941163900497, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.043192063954111085, 14);
  sqcRYGate(q, 1.359252265303965, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.546871876342161, 16);
  sqcRYGate(q, 2.013592344877134, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.5843073679000566, 16);
  sqcRYGate(q, 2.04367934173116, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.6179993745301644, 18);
  sqcRYGate(q, -2.9014766351263153, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.716524298842971, 18);
  sqcRYGate(q, -2.2773410365496174, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.43469257862324095, 0);
  sqcRYGate(q, -2.736502328868219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0856619503381433, 0);
  sqcRYGate(q, -1.5954632776748596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7010150915485047, 2);
  sqcRYGate(q, -2.6640046050226567, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.010251933088830434, 2);
  sqcRYGate(q, -0.007200109715975067, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9156855175225433, 4);
  sqcRYGate(q, -1.1637331737263228, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1334907947153487, 4);
  sqcRYGate(q, 0.013489133631958177, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5769692304158083, 6);
  sqcRYGate(q, -3.134495292624838, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.017451872821192534, 6);
  sqcRYGate(q, -0.01194110232958814, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.211174329871696, 8);
  sqcRYGate(q, -3.0322045071619543, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.012696784357442148, 8);
  sqcRYGate(q, -0.0016542190361522864, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.0834241573975945, 10);
  sqcRYGate(q, 1.3765229517068927, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.006173065110171905, 10);
  sqcRYGate(q, 0.0150372963292984, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.203197613812474, 12);
  sqcRYGate(q, -1.6209769995513748, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.598399440280426, 12);
  sqcRYGate(q, 0.0004757643531813911, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.97352175055937, 14);
  sqcRYGate(q, 1.6673897994571911, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.13634420401231, 14);
  sqcRYGate(q, -3.120485163140456, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.7393059544915266, 16);
  sqcRYGate(q, 0.10485950074217776, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 3.0586845989011464, 16);
  sqcRYGate(q, 3.128632783929337, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.0794585054464743, 1);
  sqcRYGate(q, 0.390496059218858, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1025468651408907, 1);
  sqcRYGate(q, -1.5220222788437308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.009562148406227, 3);
  sqcRYGate(q, -2.0069713963248326, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.13868502546959, 3);
  sqcRYGate(q, 1.6185997147460542, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6620451612125727, 5);
  sqcRYGate(q, -2.1943411560783055, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.74799010135853, 5);
  sqcRYGate(q, -3.1404457405093154, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.03075398414774444, 7);
  sqcRYGate(q, 1.0437001285937932, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.017184208057306312, 7);
  sqcRYGate(q, 0.03058681310793793, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.4192636571739774, 9);
  sqcRYGate(q, -1.8666408618990216, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1048052604063465, 9);
  sqcRYGate(q, -3.1262487780734802, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.2178830131666054, 11);
  sqcRYGate(q, 2.7528503184995077, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.00017777128275134124, 11);
  sqcRYGate(q, 2.9712536706050625, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.115498784539273, 13);
  sqcRYGate(q, 3.0738486809452685, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.012566459330527913, 13);
  sqcRYGate(q, -0.02323392073447117, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.9341335677089618, 15);
  sqcRYGate(q, 2.9200026782687085, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.042792389634245254, 15);
  sqcRYGate(q, -3.1358967290265785, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.1070845030001664, 17);
  sqcRYGate(q, 2.4033416087535597, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.05036065177212645, 17);
  sqcRYGate(q, 3.1301820237283233, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.06118457337508611, 0);
  sqcRYGate(q, 0.08592651123807594, 1);
  sqcRYGate(q, -1.1428206028472758, 2);
  sqcRYGate(q, -1.4754408777828734, 3);
  sqcRYGate(q, 0.3068519240249002, 4);
  sqcRYGate(q, 0.7826981700161135, 5);
  sqcRYGate(q, 0.9707686219580678, 6);
  sqcRYGate(q, 1.5728733547306115, 7);
  sqcRYGate(q, 2.462103933524884, 8);
  sqcRYGate(q, -0.7249528622817794, 9);
  sqcRYGate(q, -1.2460439463699817, 10);
  sqcRYGate(q, -0.8371574665805677, 11);
  sqcRYGate(q, 1.830985082522786, 12);
  sqcRYGate(q, -3.0365301545594043, 13);
  sqcRYGate(q, -2.1878331629346666, 14);
  sqcRYGate(q, -0.49786850980886843, 15);
  sqcRYGate(q, 1.1348387009405545, 16);
  sqcRYGate(q, -2.4153376650732814, 17);
  sqcRYGate(q, -2.1756561469521074, 18);
  sqcRYGate(q, -0.6681599364201851, 19);

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
