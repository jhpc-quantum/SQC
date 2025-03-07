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

  sqcRYGate(q, 0.6365436020820433, 0);
  sqcRZGate(q, -1.092467996010809, 0);
  sqcRYGate(q, 2.2887744643224517, 1);
  sqcRZGate(q, -1.5318637020111074, 1);
  sqcRYGate(q, 0.0005191937969823115, 2);
  sqcRZGate(q, 1.8333229044465367, 2);
  sqcRYGate(q, 1.4947208664653522, 3);
  sqcRZGate(q, -3.0512235300176016, 3);
  sqcRYGate(q, 3.7298641966333616e-05, 4);
  sqcRZGate(q, -0.790217508852339, 4);
  sqcRYGate(q, 1.570545264849077, 5);
  sqcRZGate(q, 2.3150052385132516, 5);
  sqcRYGate(q, 1.5707328744350304, 6);
  sqcRZGate(q, 0.23217760031146234, 6);
  sqcRYGate(q, 6.766207407693514e-07, 7);
  sqcRZGate(q, 1.3332554186116097, 7);
  sqcRYGate(q, 3.140134716932487, 8);
  sqcRZGate(q, 2.642116704465002, 8);
  sqcRYGate(q, -0.4881858001579369, 9);
  sqcRZGate(q, -0.422791813511096, 9);
  sqcRYGate(q, -2.9920363464020396, 10);
  sqcRZGate(q, -0.7106869493770942, 10);
  sqcRYGate(q, -2.9717316015841506, 11);
  sqcRZGate(q, 0.13835751650842926, 11);
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
  sqcRYGate(q, 0.9995717153018037, 0);
  sqcRZGate(q, -0.015150625619100744, 0);
  sqcRYGate(q, -0.5404105306884448, 1);
  sqcRZGate(q, -1.0341792834416124, 1);
  sqcRYGate(q, 3.1410469477758545, 2);
  sqcRZGate(q, -0.9926733238973355, 2);
  sqcRYGate(q, -1.856788708632072, 3);
  sqcRZGate(q, -2.7301519631163487, 3);
  sqcRYGate(q, -1.7700264656040972, 4);
  sqcRZGate(q, -0.9538334880809121, 4);
  sqcRYGate(q, 1.9585073742667467, 5);
  sqcRZGate(q, 0.9374960246643226, 5);
  sqcRYGate(q, -0.8721456554323561, 6);
  sqcRZGate(q, 2.1924989096467034, 6);
  sqcRYGate(q, 1.5707739960753617, 7);
  sqcRZGate(q, -1.9595271959395433, 7);
  sqcRYGate(q, -0.0007846913828428725, 8);
  sqcRZGate(q, 1.118677395579735, 8);
  sqcRYGate(q, 0.6710015504635763, 9);
  sqcRZGate(q, -1.0882655318634151, 9);
  sqcRYGate(q, 0.16241660086102527, 10);
  sqcRZGate(q, 1.1934329826431407, 10);
  sqcRYGate(q, 0.08610815142837058, 11);
  sqcRZGate(q, 2.5389612195717164, 11);
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
  sqcRYGate(q, 1.5816429638784983, 0);
  sqcRZGate(q, 3.0773632645188815, 0);
  sqcRYGate(q, 0.24428448250437917, 1);
  sqcRZGate(q, -2.017664827512239, 1);
  sqcRYGate(q, -3.04633143135551, 2);
  sqcRZGate(q, -3.0155081498743517, 2);
  sqcRYGate(q, -0.8749580412432328, 3);
  sqcRZGate(q, 2.5158686636444, 3);
  sqcRYGate(q, 1.754176701443029, 4);
  sqcRZGate(q, -3.1397605752623097, 4);
  sqcRYGate(q, -2.2338845243637655, 5);
  sqcRZGate(q, -0.05337909530383415, 5);
  sqcRYGate(q, -0.3957330578054652, 6);
  sqcRZGate(q, 1.9302178770340186, 6);
  sqcRYGate(q, -2.4581832713488883, 7);
  sqcRZGate(q, -3.139403598884687, 7);
  sqcRYGate(q, 1.6044978525789837, 8);
  sqcRZGate(q, -1.923456087241953, 8);
  sqcRYGate(q, 2.823890449542578, 9);
  sqcRZGate(q, -1.78007855796489, 9);
  sqcRYGate(q, -2.5061708599943677, 10);
  sqcRZGate(q, 1.5333228012291698, 10);
  sqcRYGate(q, 2.0865471642992084, 11);
  sqcRZGate(q, 1.3955982219312402, 11);
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
  sqcRYGate(q, -2.6989833705343687, 0);
  sqcRZGate(q, -0.9362521645174651, 0);
  sqcRYGate(q, -2.9181428161935514, 1);
  sqcRZGate(q, -1.7145890857170094, 1);
  sqcRYGate(q, -3.056403219022864, 2);
  sqcRZGate(q, 0.8818902203393384, 2);
  sqcRYGate(q, 3.141205177075888, 3);
  sqcRZGate(q, 0.22196863660584187, 3);
  sqcRYGate(q, 0.30521022382983887, 4);
  sqcRZGate(q, 2.279483836936235, 4);
  sqcRYGate(q, -3.097509836509508, 5);
  sqcRZGate(q, 1.5020750003648877, 5);
  sqcRYGate(q, -2.247295764402505, 6);
  sqcRZGate(q, 0.10379013979550303, 6);
  sqcRYGate(q, -0.9558080460566353, 7);
  sqcRZGate(q, -2.6341448781254684, 7);
  sqcRYGate(q, -0.000972219855014167, 8);
  sqcRZGate(q, -0.539159015608405, 8);
  sqcRYGate(q, 1.9014104231868174, 9);
  sqcRZGate(q, -3.0045768408286593, 9);
  sqcRYGate(q, 0.3589044944253476, 10);
  sqcRZGate(q, 1.4958571368375722, 10);
  sqcRYGate(q, -0.039225411250359415, 11);
  sqcRZGate(q, -0.5618058967317189, 11);
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
  sqcRYGate(q, -1.3149543532128483, 0);
  sqcRZGate(q, -3.0171986882535236, 0);
  sqcRYGate(q, -2.5310402474601474, 1);
  sqcRZGate(q, 0.35100298623877507, 1);
  sqcRYGate(q, 0.6617016426295113, 2);
  sqcRZGate(q, -0.1459235305016899, 2);
  sqcRYGate(q, -2.9607561164265577, 3);
  sqcRZGate(q, 0.9134751598060227, 3);
  sqcRYGate(q, 1.529389119788408, 4);
  sqcRZGate(q, -2.8622386888025764, 4);
  sqcRYGate(q, 2.457226987192764, 5);
  sqcRZGate(q, 2.3262722130872113, 5);
  sqcRYGate(q, -2.1658686362131716, 6);
  sqcRZGate(q, 1.35949656383105, 6);
  sqcRYGate(q, -1.674518541723777, 7);
  sqcRZGate(q, -0.9404240469799873, 7);
  sqcRYGate(q, 0.22257222864584228, 8);
  sqcRZGate(q, 1.112869116364939, 8);
  sqcRYGate(q, 0.4391177883840358, 9);
  sqcRZGate(q, -0.9018731413321371, 9);
  sqcRYGate(q, -1.6233825263092918, 10);
  sqcRZGate(q, 0.8798030025543061, 10);
  sqcRYGate(q, 0.9638144463270155, 11);
  sqcRZGate(q, -0.38891851520862397, 11);
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
  sqcRYGate(q, -1.531894915620682, 0);
  sqcRZGate(q, 2.2974200438330854, 0);
  sqcRYGate(q, 0.1171730820892769, 1);
  sqcRZGate(q, -0.12432519944223497, 1);
  sqcRYGate(q, -2.937695425235869, 2);
  sqcRZGate(q, 1.1004481204177896, 2);
  sqcRYGate(q, -3.1358646752758745, 3);
  sqcRZGate(q, -0.42266751771331734, 3);
  sqcRYGate(q, -3.140703317549902, 4);
  sqcRZGate(q, 0.3086715256892001, 4);
  sqcRYGate(q, -1.3399254074858404, 5);
  sqcRZGate(q, -1.3784206814636393, 5);
  sqcRYGate(q, -0.3309758211299131, 6);
  sqcRZGate(q, 2.238476825325492, 6);
  sqcRYGate(q, 0.002154176032405962, 7);
  sqcRZGate(q, 0.14861874250436896, 7);
  sqcRYGate(q, -0.0003671987460416304, 8);
  sqcRZGate(q, 1.3202257142007978, 8);
  sqcRYGate(q, -0.032369448322329575, 9);
  sqcRZGate(q, -2.32566138647963, 9);
  sqcRYGate(q, -3.0606828693896833, 10);
  sqcRZGate(q, -2.4390192127043546, 10);
  sqcRYGate(q, 2.8109158851699, 11);
  sqcRZGate(q, 2.5458025390209036, 11);
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
  sqcRYGate(q, 3.022485807127799, 0);
  sqcRZGate(q, -2.492420146419605, 0);
  sqcRYGate(q, 0.388787508347118, 1);
  sqcRZGate(q, -3.0481903151832856, 1);
  sqcRYGate(q, -3.0987156239508984, 2);
  sqcRZGate(q, 1.17850608869548, 2);
  sqcRYGate(q, 2.7785553739234863, 3);
  sqcRZGate(q, 2.4732818068265496, 3);
  sqcRYGate(q, 1.4805402482092846, 4);
  sqcRZGate(q, 2.617829205444125, 4);
  sqcRYGate(q, -0.29776106268908187, 5);
  sqcRZGate(q, -2.5747612550335943, 5);
  sqcRYGate(q, 0.8916037631031672, 6);
  sqcRZGate(q, -2.736342144630339, 6);
  sqcRYGate(q, 1.7091789347121484, 7);
  sqcRZGate(q, -3.0172190359761215, 7);
  sqcRYGate(q, -2.9619824221438558, 8);
  sqcRZGate(q, 0.5659035148701966, 8);
  sqcRYGate(q, -0.4222419383176419, 9);
  sqcRZGate(q, 0.24302807212669209, 9);
  sqcRYGate(q, -2.4423428775512406, 10);
  sqcRZGate(q, 2.85080291839591, 10);
  sqcRYGate(q, 0.4604352443110495, 11);
  sqcRZGate(q, -1.4794244294078578, 11);
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
  sqcRYGate(q, -1.5634433895714368, 0);
  sqcRZGate(q, -0.5098554222543243, 0);
  sqcRYGate(q, -2.8595043671624887, 1);
  sqcRZGate(q, -0.9707415892072393, 1);
  sqcRYGate(q, -0.10276836532782331, 2);
  sqcRZGate(q, 3.0747558908647945, 2);
  sqcRYGate(q, -1.6459363574942678, 3);
  sqcRZGate(q, -3.1410633380599466, 3);
  sqcRYGate(q, -7.93374257101543e-05, 4);
  sqcRZGate(q, 2.526951507869572, 4);
  sqcRYGate(q, -2.492566902389791, 5);
  sqcRZGate(q, 1.9434805078344468, 5);
  sqcRYGate(q, -1.9501486147391605, 6);
  sqcRZGate(q, -0.8794683153831447, 6);
  sqcRYGate(q, 0.008553538538118133, 7);
  sqcRZGate(q, -0.7076181989411312, 7);
  sqcRYGate(q, -0.06530652278177737, 8);
  sqcRZGate(q, -2.7567147416580275, 8);
  sqcRYGate(q, 2.5792630034689887, 9);
  sqcRZGate(q, 2.941812238658133, 9);
  sqcRYGate(q, -0.40719018918471195, 10);
  sqcRZGate(q, -2.084128978419318, 10);
  sqcRYGate(q, 2.1608266233388593, 11);
  sqcRZGate(q, -0.9234482005889086, 11);
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
  sqcRYGate(q, 0.6969649812154811, 0);
  sqcRZGate(q, -0.28900405222115366, 0);
  sqcRYGate(q, -3.0740096656288527, 1);
  sqcRZGate(q, 0.037267804371794, 1);
  sqcRYGate(q, 3.1409771659636605, 2);
  sqcRZGate(q, 2.9205243240694796, 2);
  sqcRYGate(q, -0.520820939562741, 3);
  sqcRZGate(q, 3.141079304400178, 3);
  sqcRYGate(q, -0.0030386470305989732, 4);
  sqcRZGate(q, -1.797044197237437, 4);
  sqcRYGate(q, -0.05577806004317388, 5);
  sqcRZGate(q, 0.12116087698119937, 5);
  sqcRYGate(q, -0.20930969010956008, 6);
  sqcRZGate(q, -0.7581786718095116, 6);
  sqcRYGate(q, 2.4498691987275376, 7);
  sqcRZGate(q, 1.9688423315124641, 7);
  sqcRYGate(q, -0.7847929816009627, 8);
  sqcRZGate(q, 2.396015642085431, 8);
  sqcRYGate(q, -1.232001528669807, 9);
  sqcRZGate(q, 2.8658427196926706, 9);
  sqcRYGate(q, 2.6731322927904526, 10);
  sqcRZGate(q, -1.0514434581929406, 10);
  sqcRYGate(q, -1.458992543102407, 11);
  sqcRZGate(q, -2.0266998879325966, 11);
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
  sqcRYGate(q, -0.2398556904258351, 0);
  sqcRZGate(q, -0.3192177315747058, 0);
  sqcRYGate(q, -0.10650511751019746, 1);
  sqcRZGate(q, -0.8899027470933064, 1);
  sqcRYGate(q, -0.8853618057898746, 2);
  sqcRZGate(q, -0.5912726138144011, 2);
  sqcRYGate(q, 1.500713776492095, 3);
  sqcRZGate(q, 0.6621202463460651, 3);
  sqcRYGate(q, 3.1362212387245516, 4);
  sqcRZGate(q, -0.7134502209599162, 4);
  sqcRYGate(q, 0.21577951133443385, 5);
  sqcRZGate(q, -2.485575003612643, 5);
  sqcRYGate(q, 3.0457725316144746, 6);
  sqcRZGate(q, 0.29163620834568427, 6);
  sqcRYGate(q, -3.068094906717339, 7);
  sqcRZGate(q, -1.1044228316952474, 7);
  sqcRYGate(q, -0.034549792854343744, 8);
  sqcRZGate(q, 0.782807702337526, 8);
  sqcRYGate(q, -3.1136978934613024, 9);
  sqcRZGate(q, 0.6182920726550947, 9);
  sqcRYGate(q, -3.1325440380053196, 10);
  sqcRZGate(q, 1.3930304990544065, 10);
  sqcRYGate(q, 0.8708562845262913, 11);
  sqcRZGate(q, 1.4816259542749428, 11);
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
  sqcRYGate(q, 0.6877505211069581, 0);
  sqcRZGate(q, -0.32577818400376196, 0);
  sqcRYGate(q, -0.43268656155677565, 1);
  sqcRZGate(q, 1.743832770271922, 1);
  sqcRYGate(q, 3.071546992280673, 2);
  sqcRZGate(q, 2.585581725225288, 2);
  sqcRYGate(q, 3.0726374814067494, 3);
  sqcRZGate(q, -1.637353420451444, 3);
  sqcRYGate(q, 2.752414738274833, 4);
  sqcRZGate(q, -1.703064725218142, 4);
  sqcRYGate(q, 2.1204173264953345, 5);
  sqcRZGate(q, -1.0420846562512431, 5);
  sqcRYGate(q, 3.0511127833655256, 6);
  sqcRZGate(q, 0.582220376953442, 6);
  sqcRYGate(q, 2.9068844649540826, 7);
  sqcRZGate(q, -0.9320994054943568, 7);
  sqcRYGate(q, -2.8262930224780582, 8);
  sqcRZGate(q, 2.4310615796671375, 8);
  sqcRYGate(q, 1.2613914170097738, 9);
  sqcRZGate(q, -2.4347809950694494, 9);
  sqcRYGate(q, -3.0607199109475487, 10);
  sqcRZGate(q, 2.8817560748099256, 10);
  sqcRYGate(q, 3.0635040218921463, 11);
  sqcRZGate(q, 2.111344335761963, 11);
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
  sqcRYGate(q, -1.146123170342424, 0);
  sqcRZGate(q, 2.521833788190753, 0);
  sqcRYGate(q, -0.1782196623805743, 1);
  sqcRZGate(q, 0.7031003320591124, 1);
  sqcRYGate(q, -0.9694976591291278, 2);
  sqcRZGate(q, -1.8196974102506012, 2);
  sqcRYGate(q, -0.002224770266237634, 3);
  sqcRZGate(q, -0.58582212780348, 3);
  sqcRYGate(q, 3.1245230030169453, 4);
  sqcRZGate(q, -1.4538506912345497, 4);
  sqcRYGate(q, 1.8618271934491148, 5);
  sqcRZGate(q, -2.238854146645533, 5);
  sqcRYGate(q, 0.046876869126064855, 6);
  sqcRZGate(q, 0.6126278984910158, 6);
  sqcRYGate(q, -0.06829188361953219, 7);
  sqcRZGate(q, 1.6080945380541862, 7);
  sqcRYGate(q, 3.0166880209556886, 8);
  sqcRZGate(q, -2.6920339058170155, 8);
  sqcRYGate(q, 0.014355384821255868, 9);
  sqcRZGate(q, -3.110083830616513, 9);
  sqcRYGate(q, -1.5733364542975776, 10);
  sqcRZGate(q, 0.638281107236705, 10);
  sqcRYGate(q, -2.177925811989522, 11);
  sqcRZGate(q, 1.607213199780958, 11);
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
  sqcRYGate(q, -2.81678702192822, 0);
  sqcRZGate(q, 1.8073355775088071, 0);
  sqcRYGate(q, 2.0431243905644347, 1);
  sqcRZGate(q, -0.4141971403249983, 1);
  sqcRYGate(q, 0.10065991847106746, 2);
  sqcRZGate(q, -2.426336946941151, 2);
  sqcRYGate(q, -2.239053059767734, 3);
  sqcRZGate(q, 1.4981304085529779, 3);
  sqcRYGate(q, 1.9978307457635545, 4);
  sqcRZGate(q, 2.4389015036426587, 4);
  sqcRYGate(q, 2.246489231517163, 5);
  sqcRZGate(q, -1.443849089474482, 5);
  sqcRYGate(q, -2.6100636455018265, 6);
  sqcRZGate(q, -1.3389466569121709, 6);
  sqcRYGate(q, 0.6800237645769751, 7);
  sqcRZGate(q, -0.3127711729646041, 7);
  sqcRYGate(q, -0.24392238374609176, 8);
  sqcRZGate(q, -0.2540418158124247, 8);
  sqcRYGate(q, 0.0025706200498225584, 9);
  sqcRZGate(q, -0.2807879804431188, 9);
  sqcRYGate(q, -2.9772862987072433, 10);
  sqcRZGate(q, 0.699868416025258, 10);
  sqcRYGate(q, -3.021983591042168, 11);
  sqcRZGate(q, -2.862225716015506, 11);
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
  sqcRYGate(q, 1.8996654873071217, 0);
  sqcRZGate(q, -2.392226808403578, 0);
  sqcRYGate(q, -0.12355762712727338, 1);
  sqcRZGate(q, -3.065644038649136, 1);
  sqcRYGate(q, 0.017928216650408224, 2);
  sqcRZGate(q, -2.9304375832706535, 2);
  sqcRYGate(q, 3.0902038488811283, 3);
  sqcRZGate(q, -1.489245673158477, 3);
  sqcRYGate(q, -3.09797904261946, 4);
  sqcRZGate(q, -0.5573267336746025, 4);
  sqcRYGate(q, 0.32891007368720615, 5);
  sqcRZGate(q, -2.9486764379395694, 5);
  sqcRYGate(q, -3.1333410006206592, 6);
  sqcRZGate(q, 1.8740772470897769, 6);
  sqcRYGate(q, 3.1266427177174267, 7);
  sqcRZGate(q, -0.7777295948543168, 7);
  sqcRYGate(q, -0.11368077308394023, 8);
  sqcRZGate(q, -2.2713736505669786, 8);
  sqcRYGate(q, -3.140913685192821, 9);
  sqcRZGate(q, 2.144893618784234, 9);
  sqcRYGate(q, -1.5476851094752935, 10);
  sqcRZGate(q, 1.1787272710347712, 10);
  sqcRYGate(q, -0.3022732828225092, 11);
  sqcRZGate(q, 0.8728715267924926, 11);
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
  sqcRYGate(q, 2.5251333857225564, 0);
  sqcRZGate(q, 0.716548053137438, 0);
  sqcRYGate(q, -1.7524001471638453, 1);
  sqcRZGate(q, -1.0664230424566679, 1);
  sqcRYGate(q, 0.28913525571322474, 2);
  sqcRZGate(q, -0.49629820946621894, 2);
  sqcRYGate(q, 0.3921249855066735, 3);
  sqcRZGate(q, -0.23434878124570574, 3);
  sqcRYGate(q, -1.6915812939650963, 4);
  sqcRZGate(q, 1.0114192813214675, 4);
  sqcRYGate(q, 2.1308949860332422, 5);
  sqcRZGate(q, -0.020485340869138113, 5);
  sqcRYGate(q, -1.8862626760426062, 6);
  sqcRZGate(q, -2.3595593353869453, 6);
  sqcRYGate(q, 2.5147981087150475, 7);
  sqcRZGate(q, 1.3000068251769028, 7);
  sqcRYGate(q, 2.655276819268607, 8);
  sqcRZGate(q, -3.1299934644708074, 8);
  sqcRYGate(q, -1.264332632972084, 9);
  sqcRZGate(q, 1.2761800748894796, 9);
  sqcRYGate(q, 0.6999474291721572, 10);
  sqcRZGate(q, 1.8744599321349984, 10);
  sqcRYGate(q, 1.7109233894293288, 11);
  sqcRZGate(q, 2.0702739059002324, 11);
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
  sqcRYGate(q, -1.8432848174251641, 0);
  sqcRZGate(q, -3.0643476760300996, 0);
  sqcRYGate(q, 2.3505163284920894, 1);
  sqcRZGate(q, -3.1327753278945742, 1);
  sqcRYGate(q, 3.139762315540556, 2);
  sqcRZGate(q, 1.1034715185885917, 2);
  sqcRYGate(q, 1.6529635134291771, 3);
  sqcRZGate(q, 3.1330823466329547, 3);
  sqcRYGate(q, 0.8995237688088725, 4);
  sqcRZGate(q, 0.9819791809156175, 4);
  sqcRYGate(q, 2.7584708891614884, 5);
  sqcRZGate(q, 2.2579137603236275, 5);
  sqcRYGate(q, -2.2105478275110424, 6);
  sqcRZGate(q, 1.2278985003411584, 6);
  sqcRYGate(q, 0.041086210486709775, 7);
  sqcRZGate(q, 1.3973138773293121, 7);
  sqcRYGate(q, -3.116142461972674, 8);
  sqcRZGate(q, 1.7897813914357155, 8);
  sqcRYGate(q, 0.7376517370423432, 9);
  sqcRZGate(q, 1.857944310322957, 9);
  sqcRYGate(q, -2.9863834268827736, 10);
  sqcRZGate(q, -1.9551158842965888, 10);
  sqcRYGate(q, 2.3666298510817887, 11);
  sqcRZGate(q, -1.3816843598849022, 11);
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
  sqcRYGate(q, -0.771141181762693, 0);
  sqcRZGate(q, 3.1277815328164618, 0);
  sqcRYGate(q, -1.796234197526874, 1);
  sqcRZGate(q, 2.5175445283617823, 1);
  sqcRYGate(q, 0.002520320324245053, 2);
  sqcRZGate(q, -0.8018712413345908, 2);
  sqcRYGate(q, 0.07279760160667936, 3);
  sqcRZGate(q, -3.1364810222200568, 3);
  sqcRYGate(q, -0.0021879001836691, 4);
  sqcRZGate(q, -0.948711556473472, 4);
  sqcRYGate(q, -0.0010508017190682395, 5);
  sqcRZGate(q, -2.2445712478330755, 5);
  sqcRYGate(q, 0.023999948091344606, 6);
  sqcRZGate(q, -1.1833117115702825, 6);
  sqcRYGate(q, -0.026239318817761866, 7);
  sqcRZGate(q, 1.2411285763525084, 7);
  sqcRYGate(q, -3.0486601131590363, 8);
  sqcRZGate(q, -0.6996656576447825, 8);
  sqcRYGate(q, -3.139821891909113, 9);
  sqcRZGate(q, -1.3184391167373253, 9);
  sqcRYGate(q, 3.127206908811821, 10);
  sqcRZGate(q, -0.6873953688340265, 10);
  sqcRYGate(q, -0.8261566234916301, 11);
  sqcRZGate(q, 3.1045547199066768, 11);
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
  sqcRYGate(q, 1.99946620292675, 0);
  sqcRZGate(q, 1.6154995153401455, 0);
  sqcRYGate(q, -1.5534299682052684, 1);
  sqcRZGate(q, -1.0360322801192012, 1);
  sqcRYGate(q, -0.0026763624641361616, 2);
  sqcRZGate(q, 0.812889947344857, 2);
  sqcRYGate(q, 1.492921263984071, 3);
  sqcRZGate(q, 3.020293405950961, 3);
  sqcRYGate(q, 2.2326571059408473, 4);
  sqcRZGate(q, 1.1763978006062263, 4);
  sqcRYGate(q, 0.3900185782134948, 5);
  sqcRZGate(q, -1.2324421007475401, 5);
  sqcRYGate(q, -0.8811854774188423, 6);
  sqcRZGate(q, 1.7331849726938298, 6);
  sqcRYGate(q, -0.05832502984295621, 7);
  sqcRZGate(q, 0.48685953301287144, 7);
  sqcRYGate(q, -3.1390915256104357, 8);
  sqcRZGate(q, -0.41657337211574225, 8);
  sqcRYGate(q, 0.7392448279121275, 9);
  sqcRZGate(q, -0.10197988336461172, 9);
  sqcRYGate(q, -3.0439620958716387, 10);
  sqcRZGate(q, -2.084963083845236, 10);
  sqcRYGate(q, 3.044683435237451, 11);
  sqcRZGate(q, -0.8786884446595269, 11);
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
  sqcRYGate(q, 0.9146098898941785, 0);
  sqcRZGate(q, -0.306633187925943, 0);
  sqcRYGate(q, 2.295166715360324, 1);
  sqcRZGate(q, 0.7637600819684711, 1);
  sqcRYGate(q, 2.5135240346058825, 2);
  sqcRZGate(q, -0.12305697711276693, 2);
  sqcRYGate(q, 0.9696234316738938, 3);
  sqcRZGate(q, 2.687297673655449, 3);
  sqcRYGate(q, -2.9419917340699797, 4);
  sqcRZGate(q, -2.003868200982789, 4);
  sqcRYGate(q, -0.5516849593523135, 5);
  sqcRZGate(q, -0.7930533066930519, 5);
  sqcRYGate(q, -1.036238793034518, 6);
  sqcRZGate(q, -2.229135249117429, 6);
  sqcRYGate(q, -0.6922303620341443, 7);
  sqcRZGate(q, -2.5218704477723946, 7);
  sqcRYGate(q, 1.326827184303071, 8);
  sqcRZGate(q, -1.9175089103954743, 8);
  sqcRYGate(q, -1.8190720649398513, 9);
  sqcRZGate(q, 1.3987770737432037, 9);
  sqcRYGate(q, 0.2690185406048018, 10);
  sqcRZGate(q, -1.9611432479455697, 10);
  sqcRYGate(q, -1.7288264002792528, 11);
  sqcRZGate(q, 2.964468293213327, 11);

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
