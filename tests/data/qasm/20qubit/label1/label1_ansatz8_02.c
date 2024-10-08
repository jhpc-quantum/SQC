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

  sqcRYGate(q, -0.06971072147471112, 0);
  sqcRYGate(q, -1.270057625678363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9677911771515166, 0);
  sqcRYGate(q, 1.4550806860805627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7986516375343422, 2);
  sqcRYGate(q, -2.028492011899158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37876055289250665, 2);
  sqcRYGate(q, 0.5332717037501045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6840043917697494, 4);
  sqcRYGate(q, 2.14960673427942, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6972821095286265, 4);
  sqcRYGate(q, -1.6299530384726566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4568338348693226, 6);
  sqcRYGate(q, -0.7474802648835963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.345817791292703, 6);
  sqcRYGate(q, 2.531013274320382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3463016718594707, 8);
  sqcRYGate(q, -0.3914175873505217, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8735255788459009, 8);
  sqcRYGate(q, -1.8304659014178846, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9299245919534833, 10);
  sqcRYGate(q, -0.7377537580781562, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6979359229931132, 10);
  sqcRYGate(q, 2.446934918397937, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2083106673577846, 12);
  sqcRYGate(q, -2.92150413427868, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8670954373826314, 12);
  sqcRYGate(q, -1.6667673477192606, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.0899118634318403, 14);
  sqcRYGate(q, 0.7361887305821988, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3296199444502443, 14);
  sqcRYGate(q, -1.1786928141467383, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.08747918518362707, 16);
  sqcRYGate(q, -0.5940345038069594, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.6031662801657793, 16);
  sqcRYGate(q, -1.8321836201179655, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.8351109155624474, 18);
  sqcRYGate(q, -1.6522637665985611, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.368305439008994, 18);
  sqcRYGate(q, -0.8913133535442351, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.2858887115524005, 0);
  sqcRYGate(q, 2.558149941335447, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08922923452437637, 0);
  sqcRYGate(q, -0.1397489845393445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1904072719520205, 2);
  sqcRYGate(q, -0.18698236875775504, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3912396410667602, 2);
  sqcRYGate(q, -0.8538591534475075, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.350830022474326, 4);
  sqcRYGate(q, 1.422195409254388, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7974677647499995, 4);
  sqcRYGate(q, 2.306139105984091, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9292531413716048, 6);
  sqcRYGate(q, 1.576199189667591, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.6507957301092202, 6);
  sqcRYGate(q, 0.6136143155030439, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.031806166514966705, 8);
  sqcRYGate(q, -0.45907518854407403, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7790362114082452, 8);
  sqcRYGate(q, 2.4248923777670566, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0439364460684004, 10);
  sqcRYGate(q, -1.0195956531534593, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.9576549237716234, 10);
  sqcRYGate(q, -2.5377634698554563, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.69485653604898, 12);
  sqcRYGate(q, 0.8873054365697068, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.7590340430662614, 12);
  sqcRYGate(q, -2.5573136924595667, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.42936174412279243, 14);
  sqcRYGate(q, 0.6182613724140218, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.16377392194669319, 14);
  sqcRYGate(q, -3.109410139790673, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.8169559086251793, 16);
  sqcRYGate(q, 1.6367830449545195, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.9305738780431438, 16);
  sqcRYGate(q, -3.121903557377856, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.3656123304640044, 1);
  sqcRYGate(q, -2.3862292193140218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4255851699035083, 1);
  sqcRYGate(q, -3.06568032360574, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.111287804091502, 3);
  sqcRYGate(q, -2.945129758288957, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2687552944645901, 3);
  sqcRYGate(q, -1.3167897039061274, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9826327028553634, 5);
  sqcRYGate(q, -1.882146703635697, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.037984184243343044, 5);
  sqcRYGate(q, 3.103686224474132, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7321443897435076, 7);
  sqcRYGate(q, 1.3702656999107596, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.8795662541627491, 7);
  sqcRYGate(q, 0.3461320291485377, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.1885476869430445, 9);
  sqcRYGate(q, 2.107076515001739, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.91142393400627, 9);
  sqcRYGate(q, -0.03766728749342807, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.05369754166224805, 11);
  sqcRYGate(q, 1.6825025650707017, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.750185366784282, 11);
  sqcRYGate(q, -2.89699004389504, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.1310491185110487, 13);
  sqcRYGate(q, 0.6010040427498723, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.8160039011841036, 13);
  sqcRYGate(q, 1.4524459978650974, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.32152572928526446, 15);
  sqcRYGate(q, -3.0432841303414326, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.5122438596494924, 15);
  sqcRYGate(q, 2.7211544963272183, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.21149164660308895, 17);
  sqcRYGate(q, 0.9564413876355484, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.00539899569277116, 17);
  sqcRYGate(q, -3.1396029931745795, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.539413098373315, 0);
  sqcRYGate(q, -2.0141842438459014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.120373648583021, 0);
  sqcRYGate(q, 0.9294293230453148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4817326594807745, 2);
  sqcRYGate(q, 1.2300412580458708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7973180766058263, 2);
  sqcRYGate(q, 3.1299627777606394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8358576049509365, 4);
  sqcRYGate(q, 2.7223505284257827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.503289058655917, 4);
  sqcRYGate(q, 1.796282174489297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2801815242496968, 6);
  sqcRYGate(q, -1.0156531400869238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4043881192166463, 6);
  sqcRYGate(q, 2.6776662702104064, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.661664487844499, 8);
  sqcRYGate(q, 1.0510373076061683, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7684664751066743, 8);
  sqcRYGate(q, -1.025759858436547, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.532213593842621, 10);
  sqcRYGate(q, 0.4382673715498853, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.408434214781609, 10);
  sqcRYGate(q, -0.21924462662663094, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5972173029340833, 12);
  sqcRYGate(q, -2.627346939551261, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.263000175952363, 12);
  sqcRYGate(q, -2.7351327108244816, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7061052587342059, 14);
  sqcRYGate(q, 2.548641953983739, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6345066307506633, 14);
  sqcRYGate(q, 2.219724708243639, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1642764476313383, 16);
  sqcRYGate(q, 0.13309066718792892, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.1511522636741125, 16);
  sqcRYGate(q, -1.47318902544784, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.12061536774951964, 18);
  sqcRYGate(q, 2.972819514651782, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.16471627744179732, 18);
  sqcRYGate(q, 0.24637841899384577, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.3254212862701227, 0);
  sqcRYGate(q, 1.9335254516143223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08858913422860404, 0);
  sqcRYGate(q, -2.7343411889730866, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5369664074851404, 2);
  sqcRYGate(q, -1.843480661457077, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2804947753207954, 2);
  sqcRYGate(q, -0.6998592365969348, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5175113458301678, 4);
  sqcRYGate(q, 1.1868046333460194, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0005264755698481949, 4);
  sqcRYGate(q, -1.600277658441887, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.616131611423585, 6);
  sqcRYGate(q, 2.17072244898383, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.7385298765701898, 6);
  sqcRYGate(q, 3.138097142967571, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.14192560371681218, 8);
  sqcRYGate(q, 1.160913407591888, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.0766778051816841, 8);
  sqcRYGate(q, -3.052041362129315, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.1222856389642573, 10);
  sqcRYGate(q, 1.943699878958764, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1384974983718696, 10);
  sqcRYGate(q, 3.0913632793083337, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.098665449896425, 12);
  sqcRYGate(q, -1.404921991002105, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.18782934767901588, 12);
  sqcRYGate(q, -2.8663895693992165, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.264313627122129, 14);
  sqcRYGate(q, 2.823286900204506, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.03871847755767721, 14);
  sqcRYGate(q, -3.0971228035026566, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.3764326055753595, 16);
  sqcRYGate(q, 0.30064381414120517, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -3.0844884105694392, 16);
  sqcRYGate(q, -2.868066136788157, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.4194115983052935, 1);
  sqcRYGate(q, -2.302391226565534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9002251119659794, 1);
  sqcRYGate(q, 0.8023750269044627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.976713015915002, 3);
  sqcRYGate(q, -1.8739711158792431, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.032507740086851, 3);
  sqcRYGate(q, 2.538606511366959, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.851233424588623, 5);
  sqcRYGate(q, 2.267317362400438, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9791292496132336, 5);
  sqcRYGate(q, -3.071644583344646, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.138483070384077, 7);
  sqcRYGate(q, 1.9553860272861527, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.584899809110931, 7);
  sqcRYGate(q, 2.757158088088495, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.1930256245493995, 9);
  sqcRYGate(q, 1.8576545090254468, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.02637155073922948, 9);
  sqcRYGate(q, 3.1129626191208533, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1702580136302219, 11);
  sqcRYGate(q, -0.9719808382261665, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.0050269663026703, 11);
  sqcRYGate(q, -0.036998292609168204, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.3109588329108996, 13);
  sqcRYGate(q, -1.0106457904607313, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.004721238124388118, 13);
  sqcRYGate(q, -0.12747167073843357, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.6793392907656517, 15);
  sqcRYGate(q, -1.6887355119420673, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 1.8177307704838557, 15);
  sqcRYGate(q, 2.27010269744989, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.0651254192554096, 17);
  sqcRYGate(q, 3.042978404397985, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.01756219558683192, 17);
  sqcRYGate(q, -3.140759299871587, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.595360463072558, 0);
  sqcRYGate(q, 2.2969363824496347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6124956484319428, 0);
  sqcRYGate(q, -1.5079312629004322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1493076105380764, 2);
  sqcRYGate(q, 2.6937160313374067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5892955493785177, 2);
  sqcRYGate(q, -1.0647914192278316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0977056794785667, 4);
  sqcRYGate(q, -0.124229854843108, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.641598091414505, 4);
  sqcRYGate(q, -0.04227292983894326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.553774431638852, 6);
  sqcRYGate(q, -1.8930059706972493, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2870542840063237, 6);
  sqcRYGate(q, 0.005038809087053231, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3083763439549663, 8);
  sqcRYGate(q, 2.615065702472798, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3947295315303894, 8);
  sqcRYGate(q, -2.1683073928746923, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.21596581824930006, 10);
  sqcRYGate(q, -2.229860779783553, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4216384744305648, 10);
  sqcRYGate(q, -1.307951328333347, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.06442114616077702, 12);
  sqcRYGate(q, 2.704023398091406, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5208033611433529, 12);
  sqcRYGate(q, 1.634053087496968, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6908953440426409, 14);
  sqcRYGate(q, -1.4134430822534143, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2777717035719087, 14);
  sqcRYGate(q, 1.452190413166031, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.8442223627048824, 16);
  sqcRYGate(q, 0.9218839343964038, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7527829362476324, 16);
  sqcRYGate(q, -1.6034341639440595, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.1554363485940495, 18);
  sqcRYGate(q, -2.928911585923345, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6319283170645271, 18);
  sqcRYGate(q, 1.1591253990601555, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.60943426655329, 0);
  sqcRYGate(q, -1.9241321935805744, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.25815847123915, 0);
  sqcRYGate(q, 1.4899063667592172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2687958956323966, 2);
  sqcRYGate(q, 0.004888497527358204, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.902523008010379, 2);
  sqcRYGate(q, 3.141397305003291, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5003114875355843, 4);
  sqcRYGate(q, 0.8756823843838761, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0022487315026800876, 4);
  sqcRYGate(q, 1.542653501636073, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9510414929354063, 6);
  sqcRYGate(q, -2.017884558075004, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.5517533576420224, 6);
  sqcRYGate(q, -2.3905001560533194, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6091232113191527, 8);
  sqcRYGate(q, -0.9978601743371891, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0052732535712323, 8);
  sqcRYGate(q, 0.003101699682761704, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.6429790554181434, 10);
  sqcRYGate(q, -1.7338010838324989, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.10497250131193839, 10);
  sqcRYGate(q, 3.093409545076876, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.2547364820424365, 12);
  sqcRYGate(q, -1.6246787682264852, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.9660583164471057, 12);
  sqcRYGate(q, 3.1327157146935076, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.0563793536229977, 14);
  sqcRYGate(q, -0.01867482104691021, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.8390347810884542, 14);
  sqcRYGate(q, 3.1031283099554736, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.6425723100169, 16);
  sqcRYGate(q, -3.124352891000361, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.6518454852804698, 16);
  sqcRYGate(q, 3.1291641362330034, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.8784687014717614, 1);
  sqcRYGate(q, 2.3822397341738313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03463043024192663, 1);
  sqcRYGate(q, -3.121363607173915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9875365812069608, 3);
  sqcRYGate(q, 0.5534999040672424, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9411204623439824, 3);
  sqcRYGate(q, -0.8467577174750768, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9359610700496988, 5);
  sqcRYGate(q, 0.6018384413299567, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.075291995863732, 5);
  sqcRYGate(q, -0.03591718797046894, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6500975739982716, 7);
  sqcRYGate(q, -0.04093842424361594, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.710894468220889, 7);
  sqcRYGate(q, -0.19609728438237806, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.302660741856455, 9);
  sqcRYGate(q, 1.7670405463282037, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.519885781749375, 9);
  sqcRYGate(q, 0.017226361718104544, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.696281684489151, 11);
  sqcRYGate(q, 2.6267516221894134, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.6348431702763238, 11);
  sqcRYGate(q, 3.0105994272973704, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.534049455052514, 13);
  sqcRYGate(q, 1.8860423025588409, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.0933651774627675, 13);
  sqcRYGate(q, -0.02772688716429911, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.17989809332714035, 15);
  sqcRYGate(q, -0.4381541721346043, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.0234278470849603, 15);
  sqcRYGate(q, -3.1114340695766227, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.7431451070086856, 17);
  sqcRYGate(q, -0.36804203165336524, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.1335508441615203, 17);
  sqcRYGate(q, -0.11861769010925549, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.4230529922786656, 0);
  sqcRYGate(q, 1.8116206205728567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.459981247541925, 0);
  sqcRYGate(q, 2.9777010925923695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0733899845769717, 2);
  sqcRYGate(q, 1.6839101124338427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5840353957562975, 2);
  sqcRYGate(q, 1.3757338092234423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6133314131269838, 4);
  sqcRYGate(q, -2.6430798321260607, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1480763410279824, 4);
  sqcRYGate(q, -0.21477178489988175, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6937553647267576, 6);
  sqcRYGate(q, 2.7384564379832455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1680942640829026, 6);
  sqcRYGate(q, 0.5542398845206806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6248188863543538, 8);
  sqcRYGate(q, -0.43049009889435297, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3590618947736621, 8);
  sqcRYGate(q, 3.060166489731756, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9572321883158548, 10);
  sqcRYGate(q, 0.49693918246848057, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3626694598876048, 10);
  sqcRYGate(q, -2.342827631287435, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.849637267994993, 12);
  sqcRYGate(q, -0.7004444410496956, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1184717437709986, 12);
  sqcRYGate(q, -0.44223820789768614, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3276274353457893, 14);
  sqcRYGate(q, 1.2576415306472106, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1064311580894532, 14);
  sqcRYGate(q, -3.134779944638818, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.568217976699948, 16);
  sqcRYGate(q, -1.565776893461133, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.6009809020053645, 16);
  sqcRYGate(q, -0.44068359199697316, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.9827934101513276, 18);
  sqcRYGate(q, 1.7460119055225194, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.090074080834043, 18);
  sqcRYGate(q, -0.9573624491840622, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.5904591961544425, 0);
  sqcRYGate(q, 1.6291972420169765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.571274438606814, 0);
  sqcRYGate(q, 2.5003779493321816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5538037724962992, 2);
  sqcRYGate(q, 1.3726145886065453, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.50395128377694, 2);
  sqcRYGate(q, -1.6160085249076257, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9238707175316185, 4);
  sqcRYGate(q, 2.5830403245761904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.00643002103537248, 4);
  sqcRYGate(q, 3.136720721922351, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8741214446364776, 6);
  sqcRYGate(q, -0.9684825346436258, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.016234441551554978, 6);
  sqcRYGate(q, 2.561200228043397, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.2701876161595875, 8);
  sqcRYGate(q, 0.8392405942414723, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0021125036609884, 8);
  sqcRYGate(q, -0.12034467734255225, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.13781022476016602, 10);
  sqcRYGate(q, -1.710206130336211, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.055167637775103154, 10);
  sqcRYGate(q, 3.0919463397443545, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.7396829753294138, 12);
  sqcRYGate(q, 2.906452501060149, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.0951484478627544, 12);
  sqcRYGate(q, -3.1049909266702, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.0655350223466833, 14);
  sqcRYGate(q, 0.47276653661955675, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.20852851158959493, 14);
  sqcRYGate(q, -0.007085127421115778, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.2550647318844947, 16);
  sqcRYGate(q, -1.6028820878684285, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.5764138425793157, 16);
  sqcRYGate(q, -1.4348911529101622, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.2280297391060433, 1);
  sqcRYGate(q, 3.098321284190007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.105137231156632, 1);
  sqcRYGate(q, 1.0992760491862965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8213447004229639, 3);
  sqcRYGate(q, -0.2650770611152611, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.966004693901495, 3);
  sqcRYGate(q, -3.1188844774739564, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.578431988650414, 5);
  sqcRYGate(q, 3.0879320520582265, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8341666585513137, 5);
  sqcRYGate(q, -2.912003382262255, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6367436693277693, 7);
  sqcRYGate(q, 0.6969416233925425, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.019744625331701602, 7);
  sqcRYGate(q, 0.07493359553831762, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.4593280896252034, 9);
  sqcRYGate(q, 2.8063222180334635, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0917749827212813, 9);
  sqcRYGate(q, -3.1415631274886144, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.6743239910577215, 11);
  sqcRYGate(q, 2.8890716451321317, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.5958069451118818, 11);
  sqcRYGate(q, 3.080524892253451, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.022082446381759, 13);
  sqcRYGate(q, -1.9091244739150346, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.0899680561720526, 13);
  sqcRYGate(q, 3.108104652699777, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.762005311867881, 15);
  sqcRYGate(q, 1.8092110023870982, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.257293748307845, 15);
  sqcRYGate(q, -3.100979656004328, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.8689636184754388, 17);
  sqcRYGate(q, 1.0947231507195838, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.2810831068343753, 17);
  sqcRYGate(q, 0.05425239162213943, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.7820966855725486, 0);
  sqcRYGate(q, -0.06393483995026936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.198949690807358, 0);
  sqcRYGate(q, -1.2923921955716733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0113855341660725, 2);
  sqcRYGate(q, -1.2849282152781534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14598858066293818, 2);
  sqcRYGate(q, -1.1649391225251027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.760718173986665, 4);
  sqcRYGate(q, -2.0233879339936642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08132391207275796, 4);
  sqcRYGate(q, 0.07980457198987878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0123025594392985, 6);
  sqcRYGate(q, -1.233192791650823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4621023162375386, 6);
  sqcRYGate(q, 0.6329768507566481, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8968619683521684, 8);
  sqcRYGate(q, 2.1715538284363443, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3622438857704466, 8);
  sqcRYGate(q, 2.053593193116159, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.01966122580238583, 10);
  sqcRYGate(q, 2.873954476876403, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8975726787502682, 10);
  sqcRYGate(q, 2.527211835158263, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.714069661111763, 12);
  sqcRYGate(q, 0.24928241809483076, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.12383428309402986, 12);
  sqcRYGate(q, -1.4715743224327094, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2625591664967386, 14);
  sqcRYGate(q, -2.1921931612283885, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3876977041954879, 14);
  sqcRYGate(q, -1.87609635817584, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.1542844148490777, 16);
  sqcRYGate(q, -1.5010902136498077, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.2801343503039142, 16);
  sqcRYGate(q, 1.35689160720906, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.4803589149724194, 18);
  sqcRYGate(q, 1.4545736580918982, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.5072310116443629, 18);
  sqcRYGate(q, -2.2943923647600544, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.7427956092213783, 0);
  sqcRYGate(q, -2.2888556305051475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03823451379536276, 0);
  sqcRYGate(q, -3.081362069329988, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3971683624912594, 2);
  sqcRYGate(q, 0.7367419647863684, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7651431871629844, 2);
  sqcRYGate(q, 1.7441462819518945, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9575730559095155, 4);
  sqcRYGate(q, 0.12056926292007063, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.10844144403454892, 4);
  sqcRYGate(q, 3.0381231776355473, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.863364297698289, 6);
  sqcRYGate(q, 0.5231128851196667, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0119203139638158, 6);
  sqcRYGate(q, 3.0927804675956514, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.7050303856074107, 8);
  sqcRYGate(q, 1.362198914032341, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.098701514602022, 8);
  sqcRYGate(q, 0.028405733636723236, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.299475328914345, 10);
  sqcRYGate(q, -0.14301434891652676, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.04514895997377768, 10);
  sqcRYGate(q, -0.08081862196909421, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.4910198236654733, 12);
  sqcRYGate(q, -2.885838400739841, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.053139292455184346, 12);
  sqcRYGate(q, -0.04975288266966515, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.17563521171030771, 14);
  sqcRYGate(q, 0.845744851890295, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.028886693932430596, 14);
  sqcRYGate(q, 3.059993333484848, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 1.1648276749470023, 16);
  sqcRYGate(q, -1.7628956172449546, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.3744553667079096, 16);
  sqcRYGate(q, -0.10416222363959599, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.568561652877887, 1);
  sqcRYGate(q, 0.6839824687410063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02017981919332978, 1);
  sqcRYGate(q, -0.665175930756181, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1116249074309006, 3);
  sqcRYGate(q, -0.619736562005686, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.05908531395488837, 3);
  sqcRYGate(q, 0.05973579344315727, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.037167182868788146, 5);
  sqcRYGate(q, -1.0699481395933592, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8710840079591846, 5);
  sqcRYGate(q, -0.008791633802291976, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.27900368775622, 7);
  sqcRYGate(q, 0.5947164226558128, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0832816765498756, 7);
  sqcRYGate(q, 3.0472305105977413, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.6650093612804548, 9);
  sqcRYGate(q, -3.0333358444548297, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.030081996763352766, 9);
  sqcRYGate(q, 0.04787783891715591, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.0095914251342224, 11);
  sqcRYGate(q, -1.8781247826842375, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.04420591771514861, 11);
  sqcRYGate(q, 0.06233314280611606, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.5666568983361915, 13);
  sqcRYGate(q, -2.4140930925514303, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.14014606500686178, 13);
  sqcRYGate(q, -0.17519130026501564, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.0762390523845276, 15);
  sqcRYGate(q, -0.1911593114966328, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.096045616854756, 15);
  sqcRYGate(q, -0.00750470132604182, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.4374462188567962, 17);
  sqcRYGate(q, 0.8070310431241945, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.7675115900501659, 17);
  sqcRYGate(q, 0.9399982577900696, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.1747969457120524, 0);
  sqcRYGate(q, 2.202551832855924, 1);
  sqcRYGate(q, -1.0153008040277502, 2);
  sqcRYGate(q, 1.6914641853393937, 3);
  sqcRYGate(q, -0.9048785080571145, 4);
  sqcRYGate(q, 2.998280264177926, 5);
  sqcRYGate(q, -1.3445970710383395, 6);
  sqcRYGate(q, -2.1433311636440746, 7);
  sqcRYGate(q, 3.0286694299671244, 8);
  sqcRYGate(q, 0.6031764668347268, 9);
  sqcRYGate(q, 1.4749750155268622, 10);
  sqcRYGate(q, -0.9949700460978022, 11);
  sqcRYGate(q, 2.983812218796743, 12);
  sqcRYGate(q, 2.186114975914519, 13);
  sqcRYGate(q, 0.8579319065214914, 14);
  sqcRYGate(q, -0.5310536229337143, 15);
  sqcRYGate(q, 2.301628844472873, 16);
  sqcRYGate(q, 1.0337357055409393, 17);
  sqcRYGate(q, -2.827866250598146, 18);
  sqcRYGate(q, -0.02293235764231686, 19);

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
