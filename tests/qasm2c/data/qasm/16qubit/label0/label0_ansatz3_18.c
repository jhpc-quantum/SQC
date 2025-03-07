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

  sqcRYGate(q, 2.998040129124779, 0);
  sqcRZGate(q, -1.7294444476626083, 0);
  sqcRYGate(q, -1.666762860045, 1);
  sqcRZGate(q, 0.796429906386126, 1);
  sqcRYGate(q, 1.9297438192436633, 2);
  sqcRZGate(q, -1.3086050187584817, 2);
  sqcRYGate(q, -0.0865557334187975, 3);
  sqcRZGate(q, -2.769776218791214, 3);
  sqcRYGate(q, -3.129019307032933, 4);
  sqcRZGate(q, -2.222817361375177, 4);
  sqcRYGate(q, -0.01838526321702716, 5);
  sqcRZGate(q, 1.4627564129690869, 5);
  sqcRYGate(q, -3.1397870001764416, 6);
  sqcRZGate(q, -2.2191839590384164, 6);
  sqcRYGate(q, -0.0575859252631572, 7);
  sqcRZGate(q, 2.6490647892508346, 7);
  sqcRYGate(q, -0.43164820977041884, 8);
  sqcRZGate(q, -2.750750944797765, 8);
  sqcRYGate(q, 1.115521947486985, 9);
  sqcRZGate(q, -0.3357325597938002, 9);
  sqcRYGate(q, -0.6762382896213746, 10);
  sqcRZGate(q, 3.107633219590969, 10);
  sqcRYGate(q, -0.00023337479519902615, 11);
  sqcRZGate(q, -0.8245608390007692, 11);
  sqcRYGate(q, -3.0065071468994584, 12);
  sqcRZGate(q, -0.3302259666264157, 12);
  sqcRYGate(q, 1.809684853866106, 13);
  sqcRZGate(q, -3.113003529920262, 13);
  sqcRYGate(q, 3.135810266685559, 14);
  sqcRZGate(q, 1.033757545806804, 14);
  sqcRYGate(q, -0.07572138548752189, 15);
  sqcRZGate(q, 0.06082984337569908, 15);
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
  sqcRYGate(q, -1.7936100129292716, 0);
  sqcRZGate(q, 1.1317235146890912, 0);
  sqcRYGate(q, -0.17700837300741412, 1);
  sqcRZGate(q, -2.182384683968124, 1);
  sqcRYGate(q, 0.43737464539780135, 2);
  sqcRZGate(q, -2.8059654840151795, 2);
  sqcRYGate(q, 1.5626900635890415, 3);
  sqcRZGate(q, 1.5976299660959337, 3);
  sqcRYGate(q, -1.5490174171577769, 4);
  sqcRZGate(q, -0.256497284467601, 4);
  sqcRYGate(q, 0.0016824092182110562, 5);
  sqcRZGate(q, -0.1553784184001712, 5);
  sqcRYGate(q, 3.140120438112411, 6);
  sqcRZGate(q, -0.17610308930860247, 6);
  sqcRYGate(q, -3.1251489610672696, 7);
  sqcRZGate(q, 1.2304482415985127, 7);
  sqcRYGate(q, -1.4514551722660602, 8);
  sqcRZGate(q, 1.9299705024436156, 8);
  sqcRYGate(q, -0.8134277467834554, 9);
  sqcRZGate(q, 1.6532868653353434, 9);
  sqcRYGate(q, 0.9173009525369156, 10);
  sqcRZGate(q, -0.3554107986827619, 10);
  sqcRYGate(q, -2.7719798533861457, 11);
  sqcRZGate(q, 1.6252578679942502, 11);
  sqcRYGate(q, -1.9359800853655562, 12);
  sqcRZGate(q, -3.094770750305215, 12);
  sqcRYGate(q, 0.015374649419336842, 13);
  sqcRZGate(q, 0.13190409334687467, 13);
  sqcRYGate(q, 0.005048525205727156, 14);
  sqcRZGate(q, -1.2991555267797088, 14);
  sqcRYGate(q, -0.35495904114447363, 15);
  sqcRZGate(q, -0.7864033460323795, 15);
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
  sqcRYGate(q, -3.1299598640342303, 0);
  sqcRZGate(q, 2.573905530806397, 0);
  sqcRYGate(q, 1.8943179779910997, 1);
  sqcRZGate(q, 1.332653852169126, 1);
  sqcRYGate(q, -3.0493717365876987, 2);
  sqcRZGate(q, 1.930755595797197, 2);
  sqcRYGate(q, 0.46546667835072003, 3);
  sqcRZGate(q, -2.481916945624221, 3);
  sqcRYGate(q, -3.106919548737711, 4);
  sqcRZGate(q, 0.3065986251653344, 4);
  sqcRYGate(q, 0.009807793934815123, 5);
  sqcRZGate(q, 1.9322363442544948, 5);
  sqcRYGate(q, 1.4413883258625626, 6);
  sqcRZGate(q, 1.5469058179787005, 6);
  sqcRYGate(q, -0.018809603427665487, 7);
  sqcRZGate(q, 0.027996642752136397, 7);
  sqcRYGate(q, -0.5619339714389935, 8);
  sqcRZGate(q, -2.4075966110891156, 8);
  sqcRYGate(q, -3.1407093758783398, 9);
  sqcRZGate(q, -1.5235946934842854, 9);
  sqcRYGate(q, 3.140979344737206, 10);
  sqcRZGate(q, 0.08415581070698241, 10);
  sqcRYGate(q, 3.1388374272607042, 11);
  sqcRZGate(q, 0.04839966507940391, 11);
  sqcRYGate(q, -0.18804015785684403, 12);
  sqcRZGate(q, -2.254660998387701, 12);
  sqcRYGate(q, -0.004082062301961937, 13);
  sqcRZGate(q, 3.1076264968878458, 13);
  sqcRYGate(q, -0.03003858608302679, 14);
  sqcRZGate(q, 1.4294415505108218, 14);
  sqcRYGate(q, 0.3471525546902612, 15);
  sqcRZGate(q, 0.7919246647359017, 15);
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
  sqcRYGate(q, -1.032575765253391, 0);
  sqcRZGate(q, -1.1388347203454785, 0);
  sqcRYGate(q, -0.09268002205206452, 1);
  sqcRZGate(q, -1.9679702080308523, 1);
  sqcRYGate(q, 1.3318097865425509, 2);
  sqcRZGate(q, -2.587734482368975, 2);
  sqcRYGate(q, 2.1657695929572327, 3);
  sqcRZGate(q, -1.376768762363147, 3);
  sqcRYGate(q, -0.0011175034967685349, 4);
  sqcRZGate(q, 1.0884405069456502, 4);
  sqcRYGate(q, -2.476463448521941, 5);
  sqcRZGate(q, -1.0487343905234938, 5);
  sqcRYGate(q, -3.137126774106873, 6);
  sqcRZGate(q, -0.5709129278152371, 6);
  sqcRYGate(q, -2.9821732689560756, 7);
  sqcRZGate(q, -0.9129884068898163, 7);
  sqcRYGate(q, 1.7888332067378563, 8);
  sqcRZGate(q, -2.2784446174673807, 8);
  sqcRYGate(q, -0.7257011641082705, 9);
  sqcRZGate(q, -1.3588172322076242, 9);
  sqcRYGate(q, -2.177396988648302, 10);
  sqcRZGate(q, -1.6564443995843303, 10);
  sqcRYGate(q, 1.572522812823664, 11);
  sqcRZGate(q, -1.2007920327074793, 11);
  sqcRYGate(q, -0.5772808720200349, 12);
  sqcRZGate(q, 0.7305854710178803, 12);
  sqcRYGate(q, -0.5992703574280496, 13);
  sqcRZGate(q, 1.5443034909941895, 13);
  sqcRYGate(q, -3.1379006196120436, 14);
  sqcRZGate(q, 0.3967879030311572, 14);
  sqcRYGate(q, 0.3642979969011409, 15);
  sqcRZGate(q, -1.2692989868093805, 15);
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
  sqcRYGate(q, -1.8536936257451728, 0);
  sqcRZGate(q, 2.4875499852787164, 0);
  sqcRYGate(q, -2.2890966410826223, 1);
  sqcRZGate(q, -1.1382494066709272, 1);
  sqcRYGate(q, -0.009150675675867971, 2);
  sqcRZGate(q, -1.8631349987143935, 2);
  sqcRYGate(q, 3.137347935624642, 3);
  sqcRZGate(q, 1.9153461354206867, 3);
  sqcRYGate(q, -2.2152256805942847, 4);
  sqcRZGate(q, 1.4750371062483518, 4);
  sqcRYGate(q, -3.1327603746727224, 5);
  sqcRZGate(q, -1.665556051566869, 5);
  sqcRYGate(q, 2.35671515338527, 6);
  sqcRZGate(q, -0.621472460912747, 6);
  sqcRYGate(q, 0.006844848594262487, 7);
  sqcRZGate(q, 0.6794895329523937, 7);
  sqcRYGate(q, -0.018732602480419303, 8);
  sqcRZGate(q, -0.7076812673502371, 8);
  sqcRYGate(q, -3.1413624996271676, 9);
  sqcRZGate(q, 1.239709626720931, 9);
  sqcRYGate(q, 3.141478993970537, 10);
  sqcRZGate(q, -2.8218785982546573, 10);
  sqcRYGate(q, -1.5718150171227343, 11);
  sqcRZGate(q, 3.1223951149306153, 11);
  sqcRYGate(q, 1.5654477829969249, 12);
  sqcRZGate(q, -1.7823764209487571, 12);
  sqcRYGate(q, 1.7156067089875213, 13);
  sqcRZGate(q, -0.1245322288330426, 13);
  sqcRYGate(q, -1.550981257351525, 14);
  sqcRZGate(q, 2.355665902187361, 14);
  sqcRYGate(q, 0.31093046030788685, 15);
  sqcRZGate(q, -0.9893620051948613, 15);
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
  sqcRYGate(q, -2.9089039818173053, 0);
  sqcRZGate(q, 0.45161470207817866, 0);
  sqcRYGate(q, 3.080738180460755, 1);
  sqcRZGate(q, -1.7632609792437441, 1);
  sqcRYGate(q, -3.1392547229101972, 2);
  sqcRZGate(q, 0.3830667813077176, 2);
  sqcRYGate(q, -0.9626159511867803, 3);
  sqcRZGate(q, -1.4291835997104743, 3);
  sqcRYGate(q, -3.140604599877318, 4);
  sqcRZGate(q, 1.3966065715539049, 4);
  sqcRYGate(q, 2.335500621227471, 5);
  sqcRZGate(q, -0.09560891555733608, 5);
  sqcRYGate(q, 0.0025123976618512955, 6);
  sqcRZGate(q, 0.049792948889810444, 6);
  sqcRYGate(q, 2.8850325707450026, 7);
  sqcRZGate(q, -2.8951291814535285, 7);
  sqcRYGate(q, 3.0156601654647583, 8);
  sqcRZGate(q, 0.13490442117606527, 8);
  sqcRYGate(q, -3.1403830246581297, 9);
  sqcRZGate(q, 1.860221306137614, 9);
  sqcRYGate(q, 1.8014007831824224, 10);
  sqcRZGate(q, -1.2875188540224134, 10);
  sqcRYGate(q, -0.25132448120973283, 11);
  sqcRZGate(q, -3.120835195702406, 11);
  sqcRYGate(q, -0.0007877015812978172, 12);
  sqcRZGate(q, 1.783860189441985, 12);
  sqcRYGate(q, 0.003678804617052352, 13);
  sqcRZGate(q, 1.6541143666308644, 13);
  sqcRYGate(q, 0.0009997406540631572, 14);
  sqcRZGate(q, 0.45271186105832706, 14);
  sqcRYGate(q, 3.0777666862642925, 15);
  sqcRZGate(q, -2.7215752124819788, 15);
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
  sqcRYGate(q, 1.918413712294189, 0);
  sqcRZGate(q, -0.752459846938547, 0);
  sqcRYGate(q, -2.540898884692895, 1);
  sqcRZGate(q, -1.3565565875305392, 1);
  sqcRYGate(q, -3.139828971508221, 2);
  sqcRZGate(q, 2.4237609440123937, 2);
  sqcRYGate(q, 3.1110821169861373, 3);
  sqcRZGate(q, -1.1231361603284422, 3);
  sqcRYGate(q, -0.17649327956296457, 4);
  sqcRZGate(q, -3.0349030081004194, 4);
  sqcRYGate(q, -0.0006341977827628541, 5);
  sqcRZGate(q, 0.6598795935824464, 5);
  sqcRYGate(q, 2.4915128805564684, 6);
  sqcRZGate(q, -1.4522427689101924, 6);
  sqcRYGate(q, 2.971741647001047, 7);
  sqcRZGate(q, -2.736969217571473, 7);
  sqcRYGate(q, -1.1708020066986293, 8);
  sqcRZGate(q, 0.723649392362868, 8);
  sqcRYGate(q, -0.0003948039471985964, 9);
  sqcRZGate(q, 1.911780498336078, 9);
  sqcRYGate(q, -3.1414329142274036, 10);
  sqcRZGate(q, 1.6389715923626516, 10);
  sqcRYGate(q, 1.570557590744162, 11);
  sqcRZGate(q, 3.1413990924100883, 11);
  sqcRYGate(q, -1.570074187100586, 12);
  sqcRZGate(q, 1.3419406967135075, 12);
  sqcRYGate(q, -1.586620997145527, 13);
  sqcRZGate(q, -0.6160825494879161, 13);
  sqcRYGate(q, 1.5187232346600075, 14);
  sqcRZGate(q, -2.5638417860924894, 14);
  sqcRYGate(q, -3.041636575078046, 15);
  sqcRZGate(q, -0.476854069494685, 15);
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
  sqcRYGate(q, -0.1238786669358376, 0);
  sqcRZGate(q, 2.2106420734099883, 0);
  sqcRYGate(q, -1.634303253838815, 1);
  sqcRZGate(q, -2.6044119161650814, 1);
  sqcRYGate(q, -0.6847337426737293, 2);
  sqcRZGate(q, 0.6234470275481063, 2);
  sqcRYGate(q, -0.457413003386814, 3);
  sqcRZGate(q, -1.4711432717047095, 3);
  sqcRYGate(q, -3.138586152277613, 4);
  sqcRZGate(q, 0.03709980657697947, 4);
  sqcRYGate(q, -3.104551961788059, 5);
  sqcRZGate(q, -0.17725786914910807, 5);
  sqcRYGate(q, 0.0018516336940191576, 6);
  sqcRZGate(q, -1.5894965403434038, 6);
  sqcRYGate(q, -1.9752399417007183, 7);
  sqcRZGate(q, -0.1294123044387728, 7);
  sqcRYGate(q, 1.4773554595377663, 8);
  sqcRZGate(q, -1.569371571595938, 8);
  sqcRYGate(q, 1.6268606743359646, 9);
  sqcRZGate(q, -1.6869288989271407, 9);
  sqcRYGate(q, -0.22683792882696707, 10);
  sqcRZGate(q, 1.543751066372237, 10);
  sqcRYGate(q, 1.5154569538626177, 11);
  sqcRZGate(q, -2.0144068687546994, 11);
  sqcRYGate(q, -0.008941937366995367, 12);
  sqcRZGate(q, 1.7412968913236782, 12);
  sqcRYGate(q, -1.760024402793035, 13);
  sqcRZGate(q, 1.965991510300836, 13);
  sqcRYGate(q, 1.6530182065039316, 14);
  sqcRZGate(q, -3.0203461605945034, 14);
  sqcRYGate(q, 0.002933114016358997, 15);
  sqcRZGate(q, -0.8291746009617162, 15);
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
  sqcRYGate(q, -0.7094912407791184, 0);
  sqcRZGate(q, 2.7448085568593243, 0);
  sqcRYGate(q, 2.350525060395861, 1);
  sqcRZGate(q, 1.5346306462942654, 1);
  sqcRYGate(q, -3.1212128490832645, 2);
  sqcRZGate(q, -1.1515516699079147, 2);
  sqcRYGate(q, 0.010327401008326298, 3);
  sqcRZGate(q, -2.4298565595574257, 3);
  sqcRYGate(q, -1.6315471383184887, 4);
  sqcRZGate(q, 0.966586772045428, 4);
  sqcRYGate(q, 3.1400877991456784, 5);
  sqcRZGate(q, 0.763843425390684, 5);
  sqcRYGate(q, 2.92242417237731, 6);
  sqcRZGate(q, -2.891377641447794, 6);
  sqcRYGate(q, 1.2710630812298316, 7);
  sqcRZGate(q, -0.889353064851986, 7);
  sqcRYGate(q, -3.0136873951709133, 8);
  sqcRZGate(q, 2.8550182723098194, 8);
  sqcRYGate(q, 3.134182506266301, 9);
  sqcRZGate(q, -1.7161722466667857, 9);
  sqcRYGate(q, -3.141029702730506, 10);
  sqcRZGate(q, -0.7354428818046848, 10);
  sqcRYGate(q, 0.0003320011543557054, 11);
  sqcRZGate(q, 1.120030262373641, 11);
  sqcRYGate(q, -0.0029963847945415623, 12);
  sqcRZGate(q, -2.9643631522215204, 12);
  sqcRYGate(q, 1.480079187751203, 13);
  sqcRZGate(q, -0.2150171507341394, 13);
  sqcRYGate(q, -0.35511364294692793, 14);
  sqcRZGate(q, 2.0659305629328557, 14);
  sqcRYGate(q, 3.105273980768128, 15);
  sqcRZGate(q, 2.742718532789623, 15);
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
  sqcRYGate(q, 0.4085644199409293, 0);
  sqcRZGate(q, -0.8295339422692495, 0);
  sqcRYGate(q, -0.005874069027854922, 1);
  sqcRZGate(q, 0.5643176017861212, 1);
  sqcRYGate(q, 0.8901537693802289, 2);
  sqcRZGate(q, -0.6233580014034369, 2);
  sqcRYGate(q, -2.0913439458829934, 3);
  sqcRZGate(q, 2.6945376242431895, 3);
  sqcRYGate(q, 2.98957439491077, 4);
  sqcRZGate(q, -3.055886149613697, 4);
  sqcRYGate(q, 3.0944555401371034, 5);
  sqcRZGate(q, 0.3767661467947132, 5);
  sqcRYGate(q, 3.1364872336037757, 6);
  sqcRZGate(q, -0.09420611570097924, 6);
  sqcRYGate(q, 0.8633127565482921, 7);
  sqcRZGate(q, -2.0499111418725087, 7);
  sqcRYGate(q, -1.4724917271250488, 8);
  sqcRZGate(q, 1.1593962307272792, 8);
  sqcRYGate(q, -0.14192947743302609, 9);
  sqcRZGate(q, 1.057535287485089, 9);
  sqcRYGate(q, -0.664221232992281, 10);
  sqcRZGate(q, -0.7380233729991563, 10);
  sqcRYGate(q, 2.9420390865334007, 11);
  sqcRZGate(q, 0.3225641067980322, 11);
  sqcRYGate(q, -1.2071904999916976, 12);
  sqcRZGate(q, -2.698222116343413, 12);
  sqcRYGate(q, 0.12604739119180688, 13);
  sqcRZGate(q, -0.33014782524168224, 13);
  sqcRYGate(q, -3.123994054848951, 14);
  sqcRZGate(q, -2.1412608829653763, 14);
  sqcRYGate(q, 2.928381749636622, 15);
  sqcRZGate(q, -2.0506470271854873, 15);
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
  sqcRYGate(q, 0.06563140239914755, 0);
  sqcRZGate(q, 0.3576830568909325, 0);
  sqcRYGate(q, -0.3802857098214645, 1);
  sqcRZGate(q, -0.19718384547274356, 1);
  sqcRYGate(q, -3.1346050731979607, 2);
  sqcRZGate(q, 1.95811174846426, 2);
  sqcRYGate(q, -3.094954303192708, 3);
  sqcRZGate(q, 2.4412357788953716, 3);
  sqcRYGate(q, 1.2771630103505505, 4);
  sqcRZGate(q, -0.10278844229260731, 4);
  sqcRYGate(q, 0.016169431553783475, 5);
  sqcRZGate(q, -0.9475683769570384, 5);
  sqcRYGate(q, 3.0666411355823513, 6);
  sqcRZGate(q, 1.785905754389217, 6);
  sqcRYGate(q, 0.9801654349297854, 7);
  sqcRZGate(q, 0.5858778964930584, 7);
  sqcRYGate(q, -3.140287936564055, 8);
  sqcRZGate(q, 0.3415567108658397, 8);
  sqcRYGate(q, -0.003416891933481149, 9);
  sqcRZGate(q, -1.8625960893503166, 9);
  sqcRYGate(q, 0.00035332021262273383, 10);
  sqcRZGate(q, -1.2486719878393044, 10);
  sqcRYGate(q, 3.1396269821981915, 11);
  sqcRZGate(q, -1.3192967449508224, 11);
  sqcRYGate(q, 3.1408611870220646, 12);
  sqcRZGate(q, 0.8345583393952568, 12);
  sqcRYGate(q, 3.1162456718756686, 13);
  sqcRZGate(q, 1.1873318518764597, 13);
  sqcRYGate(q, -2.1523741950887354, 14);
  sqcRZGate(q, 2.8352123989643996, 14);
  sqcRYGate(q, -0.3291063271143431, 15);
  sqcRZGate(q, 0.9334468571722639, 15);
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
  sqcRYGate(q, 0.09785666776554669, 0);
  sqcRZGate(q, -2.9267754994952604, 0);
  sqcRYGate(q, 0.4089550357147016, 1);
  sqcRZGate(q, -1.7023302043217567, 1);
  sqcRYGate(q, 2.0367283185947453, 2);
  sqcRZGate(q, 0.7201043608645492, 2);
  sqcRYGate(q, -0.6454395625624678, 3);
  sqcRZGate(q, 0.17715719395907475, 3);
  sqcRYGate(q, 2.9944511834279646, 4);
  sqcRZGate(q, -1.4634370423901037, 4);
  sqcRYGate(q, -0.09269475925333559, 5);
  sqcRZGate(q, 1.5775098783104342, 5);
  sqcRYGate(q, 1.7676628777269832, 6);
  sqcRZGate(q, 1.5416277394412399, 6);
  sqcRYGate(q, 2.550837705117863, 7);
  sqcRZGate(q, -3.0300198200157173, 7);
  sqcRYGate(q, 2.548968394994197, 8);
  sqcRZGate(q, -0.41425759260117356, 8);
  sqcRYGate(q, 2.5712977613680668, 9);
  sqcRZGate(q, -0.9477805906753183, 9);
  sqcRYGate(q, -2.7553834768938175, 10);
  sqcRZGate(q, 2.3130237395819164, 10);
  sqcRYGate(q, -2.7437359174684373, 11);
  sqcRZGate(q, 1.8973168180817355, 11);
  sqcRYGate(q, 1.5355504116492233, 12);
  sqcRZGate(q, -0.6996759766344602, 12);
  sqcRYGate(q, 0.5964679979897924, 13);
  sqcRZGate(q, -2.6070949368148297, 13);
  sqcRYGate(q, -2.8320727580827065, 14);
  sqcRZGate(q, 2.67589774930769, 14);
  sqcRYGate(q, -0.2840786663103548, 15);
  sqcRZGate(q, -0.5424837940151869, 15);
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
  sqcRYGate(q, 0.5514172630198928, 0);
  sqcRZGate(q, -1.1193134857788778, 0);
  sqcRYGate(q, -3.0122113124291032, 1);
  sqcRZGate(q, -0.04415787085678754, 1);
  sqcRYGate(q, 1.6967136268837084, 2);
  sqcRZGate(q, 2.478579081920742, 2);
  sqcRYGate(q, 3.107689217150412, 3);
  sqcRZGate(q, -1.1931666655199027, 3);
  sqcRYGate(q, -0.0013505731694664624, 4);
  sqcRZGate(q, 2.124125341544079, 4);
  sqcRYGate(q, 0.09376157838096244, 5);
  sqcRZGate(q, -2.38001427136646, 5);
  sqcRYGate(q, -0.2517656519488449, 6);
  sqcRZGate(q, 1.5776263914527222, 6);
  sqcRYGate(q, -3.137866050192437, 7);
  sqcRZGate(q, -2.912925485626447, 7);
  sqcRYGate(q, 3.131921668957372, 8);
  sqcRZGate(q, 3.081303165757445, 8);
  sqcRYGate(q, 3.1333001834328496, 9);
  sqcRZGate(q, 2.2864591409659516, 9);
  sqcRYGate(q, -3.1415803434515452, 10);
  sqcRZGate(q, 0.28421635112692867, 10);
  sqcRYGate(q, -0.001137541571313072, 11);
  sqcRZGate(q, -0.7946411058723939, 11);
  sqcRYGate(q, -0.002432794252227105, 12);
  sqcRZGate(q, 0.11186454246669844, 12);
  sqcRYGate(q, -0.005376764695364856, 13);
  sqcRZGate(q, -0.8678645281827562, 13);
  sqcRYGate(q, -0.6140620606280569, 14);
  sqcRZGate(q, -1.9906663478831859, 14);
  sqcRYGate(q, 3.096205623414097, 15);
  sqcRZGate(q, -1.5331160598354803, 15);
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
  sqcRYGate(q, 1.0018666293777283, 0);
  sqcRZGate(q, 1.6347234753660163, 0);
  sqcRYGate(q, 2.381413621907241, 1);
  sqcRZGate(q, 0.3735719062351892, 1);
  sqcRYGate(q, -0.07018897983925321, 2);
  sqcRZGate(q, 2.4794097941105586, 2);
  sqcRYGate(q, -3.121104423376278, 3);
  sqcRZGate(q, -1.003892180000717, 3);
  sqcRYGate(q, -3.141532510833544, 4);
  sqcRZGate(q, 0.2939360597417384, 4);
  sqcRYGate(q, -3.0731486307695124, 5);
  sqcRZGate(q, -0.36774571285919416, 5);
  sqcRYGate(q, 1.7683851557257757, 6);
  sqcRZGate(q, 1.8597422326737738, 6);
  sqcRYGate(q, -1.5892126323896814, 7);
  sqcRZGate(q, -1.5647746956399935, 7);
  sqcRYGate(q, -1.5830623065647993, 8);
  sqcRZGate(q, 0.07222659702110071, 8);
  sqcRYGate(q, 2.5018265652357323, 9);
  sqcRZGate(q, 0.7326250102214474, 9);
  sqcRYGate(q, -2.4219895899705053, 10);
  sqcRZGate(q, -1.5466401359189423, 10);
  sqcRYGate(q, -1.4764018723746608, 11);
  sqcRZGate(q, 1.5364450458538226, 11);
  sqcRYGate(q, 1.630136778299752, 12);
  sqcRZGate(q, 0.32557595982831616, 12);
  sqcRYGate(q, -2.210410631523807, 13);
  sqcRZGate(q, 0.04290164339884229, 13);
  sqcRYGate(q, 0.3793262134760859, 14);
  sqcRZGate(q, 0.2752010256374513, 14);
  sqcRYGate(q, 0.17023788624276026, 15);
  sqcRZGate(q, 1.9055158780641879, 15);
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
  sqcRYGate(q, 1.8951448189094515, 0);
  sqcRZGate(q, -0.5579824336307277, 0);
  sqcRYGate(q, -3.1378199544231022, 1);
  sqcRZGate(q, 1.7213685440686195, 1);
  sqcRYGate(q, -1.8633409064416513, 2);
  sqcRZGate(q, -0.46146010330708354, 2);
  sqcRYGate(q, 0.00023798669112551354, 3);
  sqcRZGate(q, 0.7808484786111345, 3);
  sqcRYGate(q, -9.885692001782096e-05, 4);
  sqcRZGate(q, -2.707076732338901, 4);
  sqcRYGate(q, 3.0989827034843924, 5);
  sqcRZGate(q, -1.8526546241798076, 5);
  sqcRYGate(q, -0.9970974062746787, 6);
  sqcRZGate(q, -2.938447642514601, 6);
  sqcRYGate(q, 2.4227019703819206, 7);
  sqcRZGate(q, 2.431233234634591, 7);
  sqcRYGate(q, -0.16847799370166053, 8);
  sqcRZGate(q, -0.8027931851505715, 8);
  sqcRYGate(q, 3.1250191782719914, 9);
  sqcRZGate(q, -1.9277185638836936, 9);
  sqcRYGate(q, -0.002026540752185113, 10);
  sqcRZGate(q, -1.8357716631695347, 10);
  sqcRYGate(q, 3.1409337514141784, 11);
  sqcRZGate(q, 2.609897458730087, 11);
  sqcRYGate(q, -3.1397768251267557, 12);
  sqcRZGate(q, 2.6889716871992815, 12);
  sqcRYGate(q, 3.133625574403308, 13);
  sqcRZGate(q, 0.6767996218842072, 13);
  sqcRYGate(q, -2.0292833840747866, 14);
  sqcRZGate(q, 0.8003621232056748, 14);
  sqcRYGate(q, -1.351264435407309, 15);
  sqcRZGate(q, 2.0242825141726666, 15);
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
  sqcRYGate(q, 3.0007258982434255, 0);
  sqcRZGate(q, -2.497446618267973, 0);
  sqcRYGate(q, 1.5399951292790013, 1);
  sqcRZGate(q, -0.75996256268655, 1);
  sqcRYGate(q, 2.15731746834057, 2);
  sqcRZGate(q, -0.9325606794402336, 2);
  sqcRYGate(q, 0.2965295012696725, 3);
  sqcRZGate(q, 2.4207473696200723, 3);
  sqcRYGate(q, -0.0007496852071202653, 4);
  sqcRZGate(q, 1.3288624500941315, 4);
  sqcRYGate(q, 2.8919252222638936, 5);
  sqcRZGate(q, 1.2025299148687518, 5);
  sqcRYGate(q, 0.018154335032200885, 6);
  sqcRZGate(q, 0.7901089519168947, 6);
  sqcRYGate(q, -2.4053330893251554, 7);
  sqcRZGate(q, 2.255627320653317, 7);
  sqcRYGate(q, 3.0129101926917907, 8);
  sqcRZGate(q, -2.3225241538039776, 8);
  sqcRYGate(q, -1.8492556317924607, 9);
  sqcRZGate(q, -1.856549953164535, 9);
  sqcRYGate(q, -1.485065514001031, 10);
  sqcRZGate(q, 2.5437349090540624, 10);
  sqcRYGate(q, -0.8534395555837206, 11);
  sqcRZGate(q, -2.7609489945030203, 11);
  sqcRYGate(q, 2.97102738559366, 12);
  sqcRZGate(q, -0.5211209869556246, 12);
  sqcRYGate(q, -1.0378661746544138, 13);
  sqcRZGate(q, 0.12881603459404456, 13);
  sqcRYGate(q, 3.124478369004956, 14);
  sqcRZGate(q, -2.89905250596612, 14);
  sqcRYGate(q, 0.2713723900817882, 15);
  sqcRZGate(q, 0.8687754440622601, 15);
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
  sqcRYGate(q, -0.4818104780786217, 0);
  sqcRZGate(q, 0.8385340498106276, 0);
  sqcRYGate(q, -0.07544814313111292, 1);
  sqcRZGate(q, 1.2245677410196922, 1);
  sqcRYGate(q, 1.3099755490927902, 2);
  sqcRZGate(q, -0.480143605875357, 2);
  sqcRYGate(q, -0.013117435232772668, 3);
  sqcRZGate(q, 1.2632649255920496, 3);
  sqcRYGate(q, -3.1398410271824346, 4);
  sqcRZGate(q, 1.9851414349718115, 4);
  sqcRYGate(q, -3.1013904800186656, 5);
  sqcRZGate(q, 0.6209738460096702, 5);
  sqcRYGate(q, 0.9634709007319708, 6);
  sqcRZGate(q, -2.518857329653886, 6);
  sqcRYGate(q, -3.1361725937246643, 7);
  sqcRZGate(q, -1.884172357660492, 7);
  sqcRYGate(q, 1.0032830351796278, 8);
  sqcRZGate(q, -1.7840994240310994, 8);
  sqcRYGate(q, -0.0016431566419878865, 9);
  sqcRZGate(q, 1.9089990247858157, 9);
  sqcRYGate(q, 0.0017457940393951553, 10);
  sqcRZGate(q, 2.5575502260637717, 10);
  sqcRYGate(q, -3.1413154891498234, 11);
  sqcRZGate(q, 0.7383965903262898, 11);
  sqcRYGate(q, 3.1391324860183625, 12);
  sqcRZGate(q, -2.1887940034061906, 12);
  sqcRYGate(q, -0.012632796104289913, 13);
  sqcRZGate(q, -0.3421069421477829, 13);
  sqcRYGate(q, -1.5352557029494927, 14);
  sqcRZGate(q, -0.09743343906126789, 14);
  sqcRYGate(q, -1.4099924331518157, 15);
  sqcRZGate(q, 0.4476245489715014, 15);
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
  sqcRYGate(q, 1.011114312249446, 0);
  sqcRZGate(q, 0.598819584138373, 0);
  sqcRYGate(q, 0.561462445178839, 1);
  sqcRZGate(q, -0.556119441262629, 1);
  sqcRYGate(q, -1.047744349100757, 2);
  sqcRZGate(q, 1.6233076496131118, 2);
  sqcRYGate(q, 0.12136845322913568, 3);
  sqcRZGate(q, -2.5917120293132916, 3);
  sqcRYGate(q, 3.119892637572871, 4);
  sqcRZGate(q, 1.4104543211022398, 4);
  sqcRYGate(q, 2.9834431192260387, 5);
  sqcRZGate(q, 3.0521820933614157, 5);
  sqcRYGate(q, -2.0704517401284184, 6);
  sqcRZGate(q, 1.6446457289057825, 6);
  sqcRYGate(q, 1.2120575917656493, 7);
  sqcRZGate(q, -1.2823515863631862, 7);
  sqcRYGate(q, 1.9060940693342978, 8);
  sqcRZGate(q, 1.742006682482756, 8);
  sqcRYGate(q, -2.651257537725629, 9);
  sqcRZGate(q, 1.948235916370682, 9);
  sqcRYGate(q, -1.7267287189904081, 10);
  sqcRZGate(q, -2.8054403408390027, 10);
  sqcRYGate(q, 2.8115132015756457, 11);
  sqcRZGate(q, -3.026155575975151, 11);
  sqcRYGate(q, -0.6170821291608135, 12);
  sqcRZGate(q, -0.7685296340531496, 12);
  sqcRYGate(q, 1.9249048691762018, 13);
  sqcRZGate(q, 2.6609851005101577, 13);
  sqcRYGate(q, -3.077505610425537, 14);
  sqcRZGate(q, 2.276846324115743, 14);
  sqcRYGate(q, -0.12084567344711003, 15);
  sqcRZGate(q, -1.670636861144989, 15);
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
  sqcRYGate(q, 1.796337551014508, 0);
  sqcRZGate(q, -1.8957005805180365, 0);
  sqcRYGate(q, 2.577995098157081, 1);
  sqcRZGate(q, 2.0203503086164005, 1);
  sqcRYGate(q, -2.989500653164483, 2);
  sqcRZGate(q, -0.024567723791857784, 2);
  sqcRYGate(q, -0.008368642163681272, 3);
  sqcRZGate(q, -3.0097921769811466, 3);
  sqcRYGate(q, -0.0002939606230469849, 4);
  sqcRZGate(q, 1.2495083210116498, 4);
  sqcRYGate(q, 3.1249905468608565, 5);
  sqcRZGate(q, -0.8035924606400444, 5);
  sqcRYGate(q, 3.133381400061625, 6);
  sqcRZGate(q, -0.891838127789272, 6);
  sqcRYGate(q, 3.1333439996319883, 7);
  sqcRZGate(q, -0.5043748036561029, 7);
  sqcRYGate(q, 0.015894971097003108, 8);
  sqcRZGate(q, 0.23001461223998554, 8);
  sqcRYGate(q, 0.006042140419841857, 9);
  sqcRZGate(q, 1.5416517689422884, 9);
  sqcRYGate(q, -0.002585026084097386, 10);
  sqcRZGate(q, -0.8826045961142697, 10);
  sqcRYGate(q, 2.7189587332125984, 11);
  sqcRZGate(q, -0.08005184046577576, 11);
  sqcRYGate(q, 0.0015123137650905382, 12);
  sqcRZGate(q, 0.37453235790201767, 12);
  sqcRYGate(q, 0.20848619879015196, 13);
  sqcRZGate(q, 2.5130018318541896, 13);
  sqcRYGate(q, -0.9684137625070051, 14);
  sqcRZGate(q, -2.9879873057349458, 14);
  sqcRYGate(q, -0.3300684049153866, 15);
  sqcRZGate(q, 0.6234382906072105, 15);
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
  sqcRYGate(q, -2.2524655318342557, 0);
  sqcRZGate(q, 1.016251992676536, 0);
  sqcRYGate(q, 0.16517650717516008, 1);
  sqcRZGate(q, 2.7120532954475314, 1);
  sqcRYGate(q, 0.10401327001568017, 2);
  sqcRZGate(q, 2.831127921942977, 2);
  sqcRYGate(q, -3.117930885198518, 3);
  sqcRZGate(q, -2.397398333631317, 3);
  sqcRYGate(q, -3.1319395338085654, 4);
  sqcRZGate(q, -0.6436899560824774, 4);
  sqcRYGate(q, 1.618777722099644, 5);
  sqcRZGate(q, 0.043510520019319814, 5);
  sqcRYGate(q, -2.551446242591456, 6);
  sqcRZGate(q, 1.5752218726475424, 6);
  sqcRYGate(q, 0.09163400679470346, 7);
  sqcRZGate(q, 0.4368599464226017, 7);
  sqcRYGate(q, -1.980883765884328, 8);
  sqcRZGate(q, 2.587244105699782, 8);
  sqcRYGate(q, 3.1404667196230087, 9);
  sqcRZGate(q, -1.5183441100332231, 9);
  sqcRYGate(q, 3.1404436185775197, 10);
  sqcRZGate(q, 1.1067352541541728, 10);
  sqcRYGate(q, -0.09382667158715208, 11);
  sqcRZGate(q, -3.080994339778371, 11);
  sqcRYGate(q, -0.19941588328721707, 12);
  sqcRZGate(q, -2.535032018990208, 12);
  sqcRYGate(q, 3.1224526314373167, 13);
  sqcRZGate(q, 1.5467839881513201, 13);
  sqcRYGate(q, 0.02268960557374555, 14);
  sqcRZGate(q, 1.0047939575973093, 14);
  sqcRYGate(q, 2.281445287725963, 15);
  sqcRZGate(q, -2.7629051882727933, 15);
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
  sqcRYGate(q, -1.8820458388051957, 0);
  sqcRZGate(q, -1.4149737955550712, 0);
  sqcRYGate(q, -1.6516971171442498, 1);
  sqcRZGate(q, -2.7590895259741504, 1);
  sqcRYGate(q, -1.7980184654600464, 2);
  sqcRZGate(q, -3.1384165260166688, 2);
  sqcRYGate(q, -3.135436746846094, 3);
  sqcRZGate(q, -0.3984772108192831, 3);
  sqcRYGate(q, -3.14122214830175, 4);
  sqcRZGate(q, -2.2769975551945523, 4);
  sqcRYGate(q, -3.1222267714599887, 5);
  sqcRZGate(q, -2.566875136601697, 5);
  sqcRYGate(q, -0.015704260451946617, 6);
  sqcRZGate(q, -2.6049374131037433, 6);
  sqcRYGate(q, -0.23717767204433748, 7);
  sqcRZGate(q, 0.41783386071030737, 7);
  sqcRYGate(q, -0.006818434479026081, 8);
  sqcRZGate(q, 0.8750103954809312, 8);
  sqcRYGate(q, 3.1338122507382353, 9);
  sqcRZGate(q, -0.7050157975201561, 9);
  sqcRYGate(q, 3.140418191470327, 10);
  sqcRZGate(q, 1.0370426738990497, 10);
  sqcRYGate(q, -2.717076784078677, 11);
  sqcRZGate(q, -1.7993267316854373, 11);
  sqcRYGate(q, 0.00010837391796236773, 12);
  sqcRZGate(q, -2.381957618381378, 12);
  sqcRYGate(q, -3.1138678906942863, 13);
  sqcRZGate(q, 0.804703231506819, 13);
  sqcRYGate(q, -2.9868594775267607, 14);
  sqcRZGate(q, 2.008030703276753, 14);
  sqcRYGate(q, 1.4229966998049055, 15);
  sqcRZGate(q, -2.4806065788693616, 15);
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
  sqcRYGate(q, 0.6982043466425792, 0);
  sqcRZGate(q, -1.2261128574812357, 0);
  sqcRYGate(q, -2.9778906575981434, 1);
  sqcRZGate(q, 1.4990246196787385, 1);
  sqcRYGate(q, 0.41681586605323595, 2);
  sqcRZGate(q, 2.412557799660443, 2);
  sqcRYGate(q, -1.716393560337679, 3);
  sqcRZGate(q, -3.1246722842480925, 3);
  sqcRYGate(q, -0.786003066467192, 4);
  sqcRZGate(q, 0.012637830891211716, 4);
  sqcRYGate(q, 0.05911093081685159, 5);
  sqcRZGate(q, 2.9626560760560876, 5);
  sqcRYGate(q, 1.5818494727720254, 6);
  sqcRZGate(q, -1.57166296216008, 6);
  sqcRYGate(q, 3.136325316915916, 7);
  sqcRZGate(q, -1.1597004963668613, 7);
  sqcRYGate(q, -1.8388657986283214, 8);
  sqcRZGate(q, -0.3980425749642828, 8);
  sqcRYGate(q, 1.5575994035301042, 9);
  sqcRZGate(q, 3.1323392237987786, 9);
  sqcRYGate(q, 1.7698295987946275, 10);
  sqcRZGate(q, -2.7641873303642304, 10);
  sqcRYGate(q, -0.20628132239560934, 11);
  sqcRZGate(q, 2.1498989985218753, 11);
  sqcRYGate(q, 2.0761811629820377, 12);
  sqcRZGate(q, 0.6144435717620709, 12);
  sqcRYGate(q, 3.1106015084478544, 13);
  sqcRZGate(q, -0.0022671592474322725, 13);
  sqcRYGate(q, 2.033363727514568, 14);
  sqcRZGate(q, -1.4501345206924894, 14);
  sqcRYGate(q, 2.24906299038786, 15);
  sqcRZGate(q, 0.4774284812965854, 15);

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
