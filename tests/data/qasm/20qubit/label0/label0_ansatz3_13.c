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

  sqcRYGate(q, 0.29828656963910394, 0);
  sqcRZGate(q, -1.6785771735364925, 0);
  sqcRYGate(q, 1.606265722275846, 1);
  sqcRZGate(q, 1.8181242635379133, 1);
  sqcRYGate(q, 3.1107702283936254, 2);
  sqcRZGate(q, 2.6670531885545357, 2);
  sqcRYGate(q, -2.9358305939428053, 3);
  sqcRZGate(q, -2.423267817766679, 3);
  sqcRYGate(q, 2.5930209942680262, 4);
  sqcRZGate(q, -3.100170420442932, 4);
  sqcRYGate(q, -3.0112637520915713, 5);
  sqcRZGate(q, 1.6649058333010627, 5);
  sqcRYGate(q, -0.008721497002861829, 6);
  sqcRZGate(q, 2.7067892090809114, 6);
  sqcRYGate(q, -0.08448978152160434, 7);
  sqcRZGate(q, 3.0877780374105503, 7);
  sqcRYGate(q, 0.30703319976378207, 8);
  sqcRZGate(q, 2.3660303294469145, 8);
  sqcRYGate(q, -1.9346479056081387, 9);
  sqcRZGate(q, 3.116434282525096, 9);
  sqcRYGate(q, 2.875893979831379, 10);
  sqcRZGate(q, 0.4133629061158255, 10);
  sqcRYGate(q, 3.1306084239094885, 11);
  sqcRZGate(q, -3.1090911618752046, 11);
  sqcRYGate(q, -1.5137689994389572, 12);
  sqcRZGate(q, -2.124193200750285, 12);
  sqcRYGate(q, -3.1393835207169585, 13);
  sqcRZGate(q, 0.543630981509506, 13);
  sqcRYGate(q, 1.5046319584248415, 14);
  sqcRZGate(q, -1.8326712844034743, 14);
  sqcRYGate(q, 3.137645300328857, 15);
  sqcRZGate(q, -0.9165110658519585, 15);
  sqcRYGate(q, 3.1385415473985225, 16);
  sqcRZGate(q, 1.671224583645963, 16);
  sqcRYGate(q, -1.2407240808784368, 17);
  sqcRZGate(q, 3.139645821350523, 17);
  sqcRYGate(q, 0.9659604859815762, 18);
  sqcRZGate(q, 1.5608659263817068, 18);
  sqcRYGate(q, -0.22230096238008112, 19);
  sqcRZGate(q, -1.3804796414559364, 19);
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
  sqcRYGate(q, 3.1133429706379236, 0);
  sqcRZGate(q, 0.01744139475448426, 0);
  sqcRYGate(q, -0.3679891901672052, 1);
  sqcRZGate(q, -0.2348324759371028, 1);
  sqcRYGate(q, -0.2374150025750602, 2);
  sqcRZGate(q, -1.9742615877884326, 2);
  sqcRYGate(q, -3.130692134870099, 3);
  sqcRZGate(q, -2.334751376735247, 3);
  sqcRYGate(q, 2.6421719908865158, 4);
  sqcRZGate(q, -1.4844209546481302, 4);
  sqcRYGate(q, 0.0031535913706009226, 5);
  sqcRZGate(q, -2.9222100399002926, 5);
  sqcRYGate(q, 3.0512144628187152, 6);
  sqcRZGate(q, 1.8398621349280269, 6);
  sqcRYGate(q, 1.1526205822114266, 7);
  sqcRZGate(q, 0.10709181451979538, 7);
  sqcRYGate(q, -1.2633218201367802, 8);
  sqcRZGate(q, 2.9975852837615915, 8);
  sqcRYGate(q, 1.9518657734692935, 9);
  sqcRZGate(q, -0.21719620098715176, 9);
  sqcRYGate(q, -3.1350867279996395, 10);
  sqcRZGate(q, 2.556029180880892, 10);
  sqcRYGate(q, 1.6255901405583464, 11);
  sqcRZGate(q, -1.0437598770030752, 11);
  sqcRYGate(q, -1.2677430248623944, 12);
  sqcRZGate(q, -0.001091257937894774, 12);
  sqcRYGate(q, -2.943735721301036, 13);
  sqcRZGate(q, 2.7646813776604278, 13);
  sqcRYGate(q, -2.110761475308235, 14);
  sqcRZGate(q, 2.5360850554679844, 14);
  sqcRYGate(q, -3.079276868199051, 15);
  sqcRZGate(q, -1.6438019324014415, 15);
  sqcRYGate(q, 3.141572057602147, 16);
  sqcRZGate(q, 2.07723424850544, 16);
  sqcRYGate(q, -2.818057598025587, 17);
  sqcRZGate(q, -1.8507760214178681, 17);
  sqcRYGate(q, 1.8592384321778108, 18);
  sqcRZGate(q, 0.6898810020457908, 18);
  sqcRYGate(q, 1.1457042209772155, 19);
  sqcRZGate(q, -2.6233481004230517, 19);
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
  sqcRYGate(q, 1.3664070266485386, 0);
  sqcRZGate(q, -2.522593020403553, 0);
  sqcRYGate(q, -0.5970941004442452, 1);
  sqcRZGate(q, -1.8330571382271996, 1);
  sqcRYGate(q, -1.5760011931282305, 2);
  sqcRZGate(q, 3.0674151785949606, 2);
  sqcRYGate(q, 1.4330295315569863, 3);
  sqcRZGate(q, -2.6133121619162285, 3);
  sqcRYGate(q, 3.0943050880875536, 4);
  sqcRZGate(q, -0.8953367926775382, 4);
  sqcRYGate(q, 0.03446915016604265, 5);
  sqcRZGate(q, -2.2871456255753495, 5);
  sqcRYGate(q, 1.6051557952383098, 6);
  sqcRZGate(q, -1.6152428332258175, 6);
  sqcRYGate(q, 1.312897219226806, 7);
  sqcRZGate(q, 2.9600458013247537, 7);
  sqcRYGate(q, 1.0758566735425592, 8);
  sqcRZGate(q, 0.5785377738576726, 8);
  sqcRYGate(q, 3.139100611984452, 9);
  sqcRZGate(q, 1.4530004229408604, 9);
  sqcRYGate(q, -0.01954530411227085, 10);
  sqcRZGate(q, 1.9999877305049143, 10);
  sqcRYGate(q, 3.136107750237035, 11);
  sqcRZGate(q, -2.3753185696319306, 11);
  sqcRYGate(q, 1.518041303365563, 12);
  sqcRZGate(q, -3.05753028232158, 12);
  sqcRYGate(q, 3.094321267108608, 13);
  sqcRZGate(q, -1.898672782913323, 13);
  sqcRYGate(q, -0.05988754687985171, 14);
  sqcRZGate(q, -1.3269992191073465, 14);
  sqcRYGate(q, 0.29575750234190057, 15);
  sqcRZGate(q, -2.534425232975034, 15);
  sqcRYGate(q, 1.2799071151186725, 16);
  sqcRZGate(q, 1.67083450527194, 16);
  sqcRYGate(q, -1.6552512649209694, 17);
  sqcRZGate(q, -3.099696663927322, 17);
  sqcRYGate(q, -0.07263229889543155, 18);
  sqcRZGate(q, -0.7948050365981892, 18);
  sqcRYGate(q, 2.916912505473622, 19);
  sqcRZGate(q, 2.1977726017988135, 19);
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
  sqcRYGate(q, -1.597826353937359, 0);
  sqcRZGate(q, -1.7745838856027838, 0);
  sqcRYGate(q, 2.9602237846229635, 1);
  sqcRZGate(q, -0.4241189969531195, 1);
  sqcRYGate(q, -2.1508436116316103, 2);
  sqcRZGate(q, -3.134734977242347, 2);
  sqcRYGate(q, -3.13464441856649, 3);
  sqcRZGate(q, -1.8965580589924373, 3);
  sqcRYGate(q, 0.001103709824668897, 4);
  sqcRZGate(q, 0.19249582778004548, 4);
  sqcRYGate(q, 3.1410578637700235, 5);
  sqcRZGate(q, -0.757338038801981, 5);
  sqcRYGate(q, 2.9923438930144544, 6);
  sqcRZGate(q, 1.809400889608101, 6);
  sqcRYGate(q, -1.5279772534767941, 7);
  sqcRZGate(q, 2.6861504111856425, 7);
  sqcRYGate(q, 1.7677674380751363, 8);
  sqcRZGate(q, 2.0440791252502715, 8);
  sqcRYGate(q, -0.06756223085510005, 9);
  sqcRZGate(q, -2.614224631606048, 9);
  sqcRYGate(q, -0.021882527491562352, 10);
  sqcRZGate(q, 2.0044895123976336, 10);
  sqcRYGate(q, -1.4333272893653686, 11);
  sqcRZGate(q, -2.480831384451037, 11);
  sqcRYGate(q, 1.2608975738379642, 12);
  sqcRZGate(q, -3.029810451385747, 12);
  sqcRYGate(q, -0.19922643401395035, 13);
  sqcRZGate(q, 0.8180584178419463, 13);
  sqcRYGate(q, 2.9382507818561607, 14);
  sqcRZGate(q, 0.6678675058226595, 14);
  sqcRYGate(q, -3.1327564643959325, 15);
  sqcRZGate(q, 2.5863974956759344, 15);
  sqcRYGate(q, -0.00018481621118127123, 16);
  sqcRZGate(q, -0.17927202438423767, 16);
  sqcRYGate(q, -1.531478256502136, 17);
  sqcRZGate(q, 1.4764754703954726, 17);
  sqcRYGate(q, -0.029693390314463858, 18);
  sqcRZGate(q, -2.857785150582799, 18);
  sqcRYGate(q, -1.1170957072935268, 19);
  sqcRZGate(q, -2.2498422595472807, 19);
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
  sqcRYGate(q, -1.2601651981855682, 0);
  sqcRZGate(q, -1.8609493551439957, 0);
  sqcRYGate(q, 3.0102219769104828, 1);
  sqcRZGate(q, -1.7174050157579526, 1);
  sqcRYGate(q, -3.103153878934064, 2);
  sqcRZGate(q, 1.5942496290717694, 2);
  sqcRYGate(q, 0.1356289173267389, 3);
  sqcRZGate(q, -1.481036502313229, 3);
  sqcRYGate(q, 3.070641660196201, 4);
  sqcRZGate(q, -2.829645431861893, 4);
  sqcRYGate(q, 0.03161123113500645, 5);
  sqcRZGate(q, 2.480024489125502, 5);
  sqcRYGate(q, 0.0548870244947528, 6);
  sqcRZGate(q, -2.411440931529528, 6);
  sqcRYGate(q, -2.9014888070136493, 7);
  sqcRZGate(q, -0.6614885263281405, 7);
  sqcRYGate(q, 2.4229706129775908, 8);
  sqcRZGate(q, -2.3369193931828693, 8);
  sqcRYGate(q, -3.1389948885885413, 9);
  sqcRZGate(q, -0.7134495055016661, 9);
  sqcRYGate(q, 3.0944825506755134, 10);
  sqcRZGate(q, 2.727919870010437, 10);
  sqcRYGate(q, 3.1367552385165074, 11);
  sqcRZGate(q, 2.3166536659298256, 11);
  sqcRYGate(q, 0.0370989828429913, 12);
  sqcRZGate(q, 1.473487609289331, 12);
  sqcRYGate(q, 3.1315055533578864, 13);
  sqcRZGate(q, 2.5243318692812666, 13);
  sqcRYGate(q, -2.9036837774622546, 14);
  sqcRZGate(q, -1.3350497753554116, 14);
  sqcRYGate(q, -3.066004972986836, 15);
  sqcRZGate(q, -2.4578409442097433, 15);
  sqcRYGate(q, -0.3403488829554808, 16);
  sqcRZGate(q, -1.214393235486235, 16);
  sqcRYGate(q, 1.5656905238397225, 17);
  sqcRZGate(q, 0.838347799854489, 17);
  sqcRYGate(q, 2.203806618827318, 18);
  sqcRZGate(q, 0.7912261404088943, 18);
  sqcRYGate(q, 1.589934283873089, 19);
  sqcRZGate(q, -2.323288623055017, 19);
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
  sqcRYGate(q, -0.18655862682360616, 0);
  sqcRZGate(q, 2.054908775205904, 0);
  sqcRYGate(q, -1.5566484894870014, 1);
  sqcRZGate(q, -0.8317837128634579, 1);
  sqcRYGate(q, 1.642810953461904, 2);
  sqcRZGate(q, 2.853026608474969, 2);
  sqcRYGate(q, 0.04347637684808575, 3);
  sqcRZGate(q, 0.8682355175366371, 3);
  sqcRYGate(q, 3.140728098046411, 4);
  sqcRZGate(q, -2.710322629841268, 4);
  sqcRYGate(q, 3.141479127874612, 5);
  sqcRZGate(q, 0.06044250784424835, 5);
  sqcRYGate(q, 3.1314063286947516, 6);
  sqcRZGate(q, 1.3618561306653276, 6);
  sqcRYGate(q, -0.1165204204579215, 7);
  sqcRZGate(q, 0.08714550502442808, 7);
  sqcRYGate(q, 2.9879189069370353, 8);
  sqcRZGate(q, -0.3140049049957033, 8);
  sqcRYGate(q, 0.12235578908016062, 9);
  sqcRZGate(q, 2.2192292448965265, 9);
  sqcRYGate(q, 0.0045761331841909225, 10);
  sqcRZGate(q, 0.8302064295892712, 10);
  sqcRYGate(q, -1.7907386477964915, 11);
  sqcRZGate(q, -2.562672818568572, 11);
  sqcRYGate(q, -0.03976544612195837, 12);
  sqcRZGate(q, 1.4126083167975039, 12);
  sqcRYGate(q, 1.5100932459158303, 13);
  sqcRZGate(q, 1.2454659723963741, 13);
  sqcRYGate(q, 0.18825704498893017, 14);
  sqcRZGate(q, 0.3351914489036873, 14);
  sqcRYGate(q, -0.3073430132018273, 15);
  sqcRZGate(q, -0.9798573256745619, 15);
  sqcRYGate(q, -3.1129857021587664, 16);
  sqcRZGate(q, -2.7964815800550595, 16);
  sqcRYGate(q, -1.5925892988674457, 17);
  sqcRZGate(q, 1.9383659842682928, 17);
  sqcRYGate(q, 0.026739360247390206, 18);
  sqcRZGate(q, -1.1304514659754803, 18);
  sqcRYGate(q, 0.09108758916079254, 19);
  sqcRZGate(q, -2.3821781046594546, 19);
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
  sqcRYGate(q, -2.447028625723558, 0);
  sqcRZGate(q, 2.066731741504578, 0);
  sqcRYGate(q, -0.8836708468736433, 1);
  sqcRZGate(q, -0.16288933945352646, 1);
  sqcRYGate(q, 0.24788442418818143, 2);
  sqcRZGate(q, 1.305479440689278, 2);
  sqcRYGate(q, 1.538263160948958, 3);
  sqcRZGate(q, 3.005047717978029, 3);
  sqcRYGate(q, 3.113921492739153, 4);
  sqcRZGate(q, -0.4782524558029184, 4);
  sqcRYGate(q, 3.1196407087288955, 5);
  sqcRZGate(q, -1.8632289560476956, 5);
  sqcRYGate(q, 0.1423011593966116, 6);
  sqcRZGate(q, 1.1106909012594706, 6);
  sqcRYGate(q, -1.496063537952594, 7);
  sqcRZGate(q, -3.1234391989386685, 7);
  sqcRYGate(q, 2.568084701481247, 8);
  sqcRZGate(q, -1.2272668063084264, 8);
  sqcRYGate(q, 1.3321776088827562, 9);
  sqcRZGate(q, 1.3514611081582242, 9);
  sqcRYGate(q, -3.131285385569719, 10);
  sqcRZGate(q, 1.9207199651913731, 10);
  sqcRYGate(q, -3.053632662917736, 11);
  sqcRZGate(q, 3.102810710183572, 11);
  sqcRYGate(q, 1.0769666792727612, 12);
  sqcRZGate(q, 1.7381307215222768, 12);
  sqcRYGate(q, -3.11833921443056, 13);
  sqcRZGate(q, -1.3146821124459835, 13);
  sqcRYGate(q, -2.90725745220081, 14);
  sqcRZGate(q, 1.1821458286598192, 14);
  sqcRYGate(q, -0.0008848116886740461, 15);
  sqcRZGate(q, -1.5700337308471148, 15);
  sqcRYGate(q, -3.127900096638673, 16);
  sqcRZGate(q, 0.7103183102567996, 16);
  sqcRYGate(q, -2.9034274695710556, 17);
  sqcRZGate(q, -2.8534668145305693, 17);
  sqcRYGate(q, -0.8047938672177669, 18);
  sqcRZGate(q, 0.057368965023896525, 18);
  sqcRYGate(q, -1.5122402103723704, 19);
  sqcRZGate(q, 0.23504749635415578, 19);
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
  sqcRYGate(q, 1.2586536856375459, 0);
  sqcRZGate(q, 0.9235116622231222, 0);
  sqcRYGate(q, 0.7705499993938248, 1);
  sqcRZGate(q, -2.7040229215792437, 1);
  sqcRYGate(q, -1.6478794785442885, 2);
  sqcRZGate(q, 2.295657348061622, 2);
  sqcRYGate(q, 3.1088079402178983, 3);
  sqcRZGate(q, 3.123063348587076, 3);
  sqcRYGate(q, 3.1402935932203992, 4);
  sqcRZGate(q, -1.3837478523465294, 4);
  sqcRYGate(q, -1.2363610656370732, 5);
  sqcRZGate(q, -0.4880589808748527, 5);
  sqcRYGate(q, 3.076815986036758, 6);
  sqcRZGate(q, -0.3341367901247637, 6);
  sqcRYGate(q, 0.3800100602834995, 7);
  sqcRZGate(q, -1.253933249192885, 7);
  sqcRYGate(q, 1.6142064240387246, 8);
  sqcRZGate(q, 0.5204876751064873, 8);
  sqcRYGate(q, 0.0806786059998652, 9);
  sqcRZGate(q, 0.1390845367058962, 9);
  sqcRYGate(q, 0.0007467631368560596, 10);
  sqcRZGate(q, 1.0125585532440358, 10);
  sqcRYGate(q, -0.011068600447255878, 11);
  sqcRZGate(q, -0.6171465401650744, 11);
  sqcRYGate(q, -3.131487606827135, 12);
  sqcRZGate(q, -0.8540339615553786, 12);
  sqcRYGate(q, -3.04913552454489, 13);
  sqcRZGate(q, -1.3754513937776116, 13);
  sqcRYGate(q, -0.33377474327701284, 14);
  sqcRZGate(q, -2.1698944524977986, 14);
  sqcRYGate(q, 0.2939502670720665, 15);
  sqcRZGate(q, 0.3745601231799247, 15);
  sqcRYGate(q, -3.1258288785555073, 16);
  sqcRZGate(q, -2.322232204619645, 16);
  sqcRYGate(q, 1.5198432561027972, 17);
  sqcRZGate(q, 1.119360408896896, 17);
  sqcRYGate(q, 3.0784320318490535, 18);
  sqcRZGate(q, 0.8468580425907544, 18);
  sqcRYGate(q, 1.455139702611203, 19);
  sqcRZGate(q, 1.781916742384651, 19);
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
  sqcRYGate(q, -2.483866364652436, 0);
  sqcRZGate(q, -0.4497336021140432, 0);
  sqcRYGate(q, 2.055939384046347, 1);
  sqcRZGate(q, 1.4456594361071016, 1);
  sqcRYGate(q, 2.9173814539502683, 2);
  sqcRZGate(q, 2.1971564932703167, 2);
  sqcRYGate(q, -0.0008028930495683094, 3);
  sqcRZGate(q, 0.36811435491731886, 3);
  sqcRYGate(q, 2.868311906098687, 4);
  sqcRZGate(q, -0.6121052798313311, 4);
  sqcRYGate(q, 3.1257176262777993, 5);
  sqcRZGate(q, 1.050256494971476, 5);
  sqcRYGate(q, -0.19016313343214367, 6);
  sqcRZGate(q, 0.002001493486137207, 6);
  sqcRYGate(q, -0.005700517003645268, 7);
  sqcRZGate(q, 1.2120555219395652, 7);
  sqcRYGate(q, -2.5605475187932134, 8);
  sqcRZGate(q, -2.8710592475981294, 8);
  sqcRYGate(q, 1.247889168204267, 9);
  sqcRZGate(q, -1.1568539797914612, 9);
  sqcRYGate(q, -2.0662445295343894, 10);
  sqcRZGate(q, -0.8726346247169704, 10);
  sqcRYGate(q, 0.15653576083564413, 11);
  sqcRZGate(q, 2.7126616425937162, 11);
  sqcRYGate(q, -2.608087186258877, 12);
  sqcRZGate(q, 0.001182396868904867, 12);
  sqcRYGate(q, -3.1114913898832453, 13);
  sqcRZGate(q, -0.5800487132381393, 13);
  sqcRYGate(q, 0.27543076998047944, 14);
  sqcRZGate(q, 2.354272204823003, 14);
  sqcRYGate(q, 3.1234337728685793, 15);
  sqcRZGate(q, -1.4280297709721426, 15);
  sqcRYGate(q, -2.596057994993859, 16);
  sqcRZGate(q, -3.1102785841031215, 16);
  sqcRYGate(q, -0.0993110573308527, 17);
  sqcRZGate(q, -0.6261260430864509, 17);
  sqcRYGate(q, -0.4161680579985152, 18);
  sqcRZGate(q, 2.317564846890098, 18);
  sqcRYGate(q, -2.5699875975541198, 19);
  sqcRZGate(q, 1.6614228415655623, 19);
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
  sqcRYGate(q, -1.7082637126784883, 0);
  sqcRZGate(q, 1.7648432712007267, 0);
  sqcRYGate(q, -2.421589419804561, 1);
  sqcRZGate(q, -1.9905130436109568, 1);
  sqcRYGate(q, -0.013382445229979213, 2);
  sqcRZGate(q, -1.2270625327949292, 2);
  sqcRYGate(q, 0.01056681890279254, 3);
  sqcRZGate(q, -1.4148747225296225, 3);
  sqcRYGate(q, -3.1407204313914265, 4);
  sqcRZGate(q, 0.03972266262762286, 4);
  sqcRYGate(q, -1.717752813901435, 5);
  sqcRZGate(q, 1.2528917487378732, 5);
  sqcRYGate(q, -1.3578634688810327, 6);
  sqcRZGate(q, -2.6166737175860444, 6);
  sqcRYGate(q, -1.5090334303630775, 7);
  sqcRZGate(q, -0.9840809434889577, 7);
  sqcRYGate(q, -0.28797577914296557, 8);
  sqcRZGate(q, 0.10038749813133147, 8);
  sqcRYGate(q, -0.07458621121135016, 9);
  sqcRZGate(q, -1.7940917319573602, 9);
  sqcRYGate(q, 3.140424652344844, 10);
  sqcRZGate(q, -0.634566557145928, 10);
  sqcRYGate(q, -0.010406036446341638, 11);
  sqcRZGate(q, 2.0932094023467496, 11);
  sqcRYGate(q, 3.1413164735770374, 12);
  sqcRZGate(q, 1.1489915455159379, 12);
  sqcRYGate(q, -1.6326580501398906, 13);
  sqcRZGate(q, -3.106947090695769, 13);
  sqcRYGate(q, 2.8628813733948935, 14);
  sqcRZGate(q, -3.037724416127825, 14);
  sqcRYGate(q, -3.0184859641184087, 15);
  sqcRZGate(q, 0.3068928528446282, 15);
  sqcRYGate(q, -3.1230165197538735, 16);
  sqcRZGate(q, 1.3750180791919675, 16);
  sqcRYGate(q, 3.0120376380931573, 17);
  sqcRZGate(q, 0.2454943222370671, 17);
  sqcRYGate(q, 0.04458754980407541, 18);
  sqcRZGate(q, -0.6278282593048853, 18);
  sqcRYGate(q, -0.5917598302067464, 19);
  sqcRZGate(q, -1.7028230336602388, 19);
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
  sqcRYGate(q, -2.5035714118977244, 0);
  sqcRZGate(q, 0.7925217463276271, 0);
  sqcRYGate(q, -1.708383492984437, 1);
  sqcRZGate(q, 0.5780348330436347, 1);
  sqcRYGate(q, 0.5020318596411135, 2);
  sqcRZGate(q, 1.134530184401691, 2);
  sqcRYGate(q, 3.138466932482021, 3);
  sqcRZGate(q, 2.8996175455047015, 3);
  sqcRYGate(q, -3.0904127902545286, 4);
  sqcRZGate(q, 0.5952054470714123, 4);
  sqcRYGate(q, 2.8864956467266993, 5);
  sqcRZGate(q, 3.108843076973231, 5);
  sqcRYGate(q, 1.566832353561459, 6);
  sqcRZGate(q, -2.998197241515528, 6);
  sqcRYGate(q, 0.0017643050567244247, 7);
  sqcRZGate(q, -0.6911484750388999, 7);
  sqcRYGate(q, -0.5024523118972697, 8);
  sqcRZGate(q, -2.359488458253907, 8);
  sqcRYGate(q, -2.764960096024047, 9);
  sqcRZGate(q, -1.9014092811961874, 9);
  sqcRYGate(q, -2.0805056396069377, 10);
  sqcRZGate(q, 0.10773938995767374, 10);
  sqcRYGate(q, 3.1143204263882858, 11);
  sqcRZGate(q, -3.0192769963961146, 11);
  sqcRYGate(q, -1.431233635759929, 12);
  sqcRZGate(q, -1.1554744499716891, 12);
  sqcRYGate(q, 1.655702228259106, 13);
  sqcRZGate(q, 2.6509091831500875, 13);
  sqcRYGate(q, 1.5995247394696968, 14);
  sqcRZGate(q, -1.7531898766559708, 14);
  sqcRYGate(q, -0.041251682518770316, 15);
  sqcRZGate(q, -2.0961625679972693, 15);
  sqcRYGate(q, -0.47514280697261974, 16);
  sqcRZGate(q, -0.49854242764311796, 16);
  sqcRYGate(q, -2.9478245410945223, 17);
  sqcRZGate(q, 2.8727957597608076, 17);
  sqcRYGate(q, 2.33633035562054, 18);
  sqcRZGate(q, 0.7361060958926267, 18);
  sqcRYGate(q, -1.5176248531883418, 19);
  sqcRZGate(q, 0.28683634102333594, 19);
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
  sqcRYGate(q, 1.3974852242256295, 0);
  sqcRZGate(q, -2.2352401947488074, 0);
  sqcRYGate(q, -2.255063490754016, 1);
  sqcRZGate(q, 0.47424781149411915, 1);
  sqcRYGate(q, -3.1376501691247456, 2);
  sqcRZGate(q, 1.673346686289656, 2);
  sqcRYGate(q, -0.0067932230550546095, 3);
  sqcRZGate(q, 2.932046777050315, 3);
  sqcRYGate(q, -0.00019615003492340938, 4);
  sqcRZGate(q, -0.9103639370969799, 4);
  sqcRYGate(q, 1.5182018101845596, 5);
  sqcRZGate(q, 1.976411749287693, 5);
  sqcRYGate(q, 1.7635027026020207, 6);
  sqcRZGate(q, 0.49648398013766276, 6);
  sqcRYGate(q, 0.9253440608237481, 7);
  sqcRZGate(q, 1.5331721053285143, 7);
  sqcRYGate(q, -1.4484627508171641, 8);
  sqcRZGate(q, 1.8271108664890319, 8);
  sqcRYGate(q, -0.10382436786253676, 9);
  sqcRZGate(q, 0.555363111101359, 9);
  sqcRYGate(q, -0.07902365418510095, 10);
  sqcRZGate(q, -1.8528424118340272, 10);
  sqcRYGate(q, -0.009612107644658962, 11);
  sqcRZGate(q, -2.5912566365004737, 11);
  sqcRYGate(q, 3.139482285325472, 12);
  sqcRZGate(q, 0.0034948630024025087, 12);
  sqcRYGate(q, 2.622484041704708, 13);
  sqcRZGate(q, -1.7377175948418382, 13);
  sqcRYGate(q, -3.1041270462852153, 14);
  sqcRZGate(q, -0.6217423400334265, 14);
  sqcRYGate(q, 1.4136550690882048, 15);
  sqcRZGate(q, 2.966878737735613, 15);
  sqcRYGate(q, 0.03075793277797967, 16);
  sqcRZGate(q, 1.0420483084537837, 16);
  sqcRYGate(q, -3.060149537194733, 17);
  sqcRZGate(q, -2.3263464081863496, 17);
  sqcRYGate(q, 0.2271858670545258, 18);
  sqcRZGate(q, -0.07334578379212993, 18);
  sqcRYGate(q, 1.3300472213353656, 19);
  sqcRZGate(q, -2.2377252565246137, 19);
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
  sqcRYGate(q, -1.9199364054406713, 0);
  sqcRZGate(q, 1.5459571510459886, 0);
  sqcRYGate(q, -2.574253732743743, 1);
  sqcRZGate(q, 1.5997535816581205, 1);
  sqcRYGate(q, -0.07352073854554408, 2);
  sqcRZGate(q, -2.2748053837085065, 2);
  sqcRYGate(q, -0.2484459637535927, 3);
  sqcRZGate(q, 1.7349682501489938, 3);
  sqcRYGate(q, -1.5986347977452695, 4);
  sqcRZGate(q, 0.10791278083558174, 4);
  sqcRYGate(q, 3.053808865968978, 5);
  sqcRZGate(q, -0.47709178516885575, 5);
  sqcRYGate(q, 1.9423725283644937, 6);
  sqcRZGate(q, 1.001633874148319, 6);
  sqcRYGate(q, 3.038218023416854, 7);
  sqcRZGate(q, 1.2012524519394532, 7);
  sqcRYGate(q, -0.8816575734413273, 8);
  sqcRZGate(q, -0.39114747024993807, 8);
  sqcRYGate(q, 3.1109648391633593, 9);
  sqcRZGate(q, -0.5554363567973821, 9);
  sqcRYGate(q, 3.0641891577650897, 10);
  sqcRZGate(q, 1.935926057704057, 10);
  sqcRYGate(q, -0.03339199235538004, 11);
  sqcRZGate(q, -1.7922740154797796, 11);
  sqcRYGate(q, -0.12151945160227479, 12);
  sqcRZGate(q, -0.22002289645184683, 12);
  sqcRYGate(q, -0.025325065640263524, 13);
  sqcRZGate(q, -0.2691840910486833, 13);
  sqcRYGate(q, 0.02284504846572411, 14);
  sqcRZGate(q, 0.03169124966969398, 14);
  sqcRYGate(q, -0.025571626258641754, 15);
  sqcRZGate(q, -1.4515597612734128, 15);
  sqcRYGate(q, 0.2069642656385575, 16);
  sqcRZGate(q, 1.8121284273051184, 16);
  sqcRYGate(q, -2.8920116642450777, 17);
  sqcRZGate(q, -0.2526071262370584, 17);
  sqcRYGate(q, 3.110108928601123, 18);
  sqcRZGate(q, 1.6971337404635172, 18);
  sqcRYGate(q, 0.538525087138958, 19);
  sqcRZGate(q, 0.32608467186519796, 19);
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
  sqcRYGate(q, 1.4758721849837464, 0);
  sqcRZGate(q, 1.3455377068753123, 0);
  sqcRYGate(q, -0.6294740037962914, 1);
  sqcRZGate(q, 2.0759152324970684, 1);
  sqcRYGate(q, -1.5956465221235319, 2);
  sqcRZGate(q, 1.3016981266250884, 2);
  sqcRYGate(q, 3.140763100014485, 3);
  sqcRZGate(q, 0.7381679792676916, 3);
  sqcRYGate(q, -3.140603272915739, 4);
  sqcRZGate(q, -0.37527269537064306, 4);
  sqcRYGate(q, 3.088218511978843, 5);
  sqcRZGate(q, -2.2029050603962563, 5);
  sqcRYGate(q, -3.141079436375281, 6);
  sqcRZGate(q, 2.1032601981139334, 6);
  sqcRYGate(q, 1.1481758988942081, 7);
  sqcRZGate(q, -3.0923763650913973, 7);
  sqcRYGate(q, -1.426443073649204, 8);
  sqcRZGate(q, 1.5561660113893385, 8);
  sqcRYGate(q, -0.034364111550909904, 9);
  sqcRZGate(q, 1.0968431787943396, 9);
  sqcRYGate(q, 3.1023153373067043, 10);
  sqcRZGate(q, -0.1282583910280611, 10);
  sqcRYGate(q, -0.005872705512057763, 11);
  sqcRZGate(q, -0.7536293426438592, 11);
  sqcRYGate(q, 3.141350541329613, 12);
  sqcRZGate(q, -2.2041998394627873, 12);
  sqcRYGate(q, -1.7972792406589384, 13);
  sqcRZGate(q, -2.3077812464840157, 13);
  sqcRYGate(q, 0.08530893837282004, 14);
  sqcRZGate(q, 1.364973228003599, 14);
  sqcRYGate(q, -1.065355095948827, 15);
  sqcRZGate(q, 2.923977197005276, 15);
  sqcRYGate(q, 0.04625672541536279, 16);
  sqcRZGate(q, -0.3191625600865342, 16);
  sqcRYGate(q, 0.14139717596074153, 17);
  sqcRZGate(q, -0.024203423879842867, 17);
  sqcRYGate(q, -0.41903322150230604, 18);
  sqcRZGate(q, 1.315099422949067, 18);
  sqcRYGate(q, -2.369386144483589, 19);
  sqcRZGate(q, 1.3115908525965887, 19);
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
  sqcRYGate(q, 2.8557367064452457, 0);
  sqcRZGate(q, 1.3247171770380257, 0);
  sqcRYGate(q, 3.0062930027630026, 1);
  sqcRZGate(q, -2.6181279733250835, 1);
  sqcRYGate(q, -2.9123943984851697, 2);
  sqcRZGate(q, 1.2303809509801544, 2);
  sqcRYGate(q, 0.06972828966728377, 3);
  sqcRZGate(q, 0.8853011349601162, 3);
  sqcRYGate(q, -2.271164298739942, 4);
  sqcRZGate(q, 0.11120144042482397, 4);
  sqcRYGate(q, -0.10765571971628861, 5);
  sqcRZGate(q, 1.1300151666731038, 5);
  sqcRYGate(q, -2.0727807330869945, 6);
  sqcRZGate(q, 1.5815869258598365, 6);
  sqcRYGate(q, -0.067294671261486, 7);
  sqcRZGate(q, 1.6306042790190582, 7);
  sqcRYGate(q, 1.5354326687792224, 8);
  sqcRZGate(q, -0.961349819019049, 8);
  sqcRYGate(q, -3.0897048942117378, 9);
  sqcRZGate(q, -2.236757671614205, 9);
  sqcRYGate(q, 1.6540396636685095, 10);
  sqcRZGate(q, 0.19636457039606817, 10);
  sqcRYGate(q, -1.7832697679083216, 11);
  sqcRZGate(q, -0.055462000525661144, 11);
  sqcRYGate(q, 3.097430882155999, 12);
  sqcRZGate(q, 1.575432947633665, 12);
  sqcRYGate(q, 0.051311777874150984, 13);
  sqcRZGate(q, 1.5950511725385033, 13);
  sqcRYGate(q, 2.8972585268029087, 14);
  sqcRZGate(q, 0.990409918486188, 14);
  sqcRYGate(q, -3.116156625794558, 15);
  sqcRZGate(q, -1.9790718126055804, 15);
  sqcRYGate(q, 0.24867958545017022, 16);
  sqcRZGate(q, -3.0473971072963493, 16);
  sqcRYGate(q, -2.9094036166786896, 17);
  sqcRZGate(q, 2.905680260823783, 17);
  sqcRYGate(q, -2.83052690145743, 18);
  sqcRZGate(q, -2.312237404700369, 18);
  sqcRYGate(q, 0.1981527585362013, 19);
  sqcRZGate(q, 2.9249916630433574, 19);
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
  sqcRYGate(q, 1.533562786033201, 0);
  sqcRZGate(q, 1.668817502683127, 0);
  sqcRYGate(q, 0.3230650435323143, 1);
  sqcRZGate(q, -1.2268416024899078, 1);
  sqcRYGate(q, 0.05330145367357168, 2);
  sqcRZGate(q, -0.5183587974611771, 2);
  sqcRYGate(q, 3.140994257282504, 3);
  sqcRZGate(q, 2.0880289599924593, 3);
  sqcRYGate(q, 0.0037069390099563645, 4);
  sqcRZGate(q, -0.281712609968098, 4);
  sqcRYGate(q, -0.07705911407976691, 5);
  sqcRZGate(q, -0.2892668004961534, 5);
  sqcRYGate(q, -3.112108294004805, 6);
  sqcRZGate(q, -1.3461377427577794, 6);
  sqcRYGate(q, 1.3653080036138174, 7);
  sqcRZGate(q, 2.8542588003547573, 7);
  sqcRYGate(q, -3.1374460657595513, 8);
  sqcRZGate(q, -1.45349520363989, 8);
  sqcRYGate(q, -0.027572106088359583, 9);
  sqcRZGate(q, -1.4712946970664063, 9);
  sqcRYGate(q, -0.09449558037913458, 10);
  sqcRZGate(q, 1.3773203919218933, 10);
  sqcRYGate(q, -3.0165022810172775, 11);
  sqcRZGate(q, -1.5984235728107512, 11);
  sqcRYGate(q, -0.020985494786618375, 12);
  sqcRZGate(q, 1.6605775189369598, 12);
  sqcRYGate(q, 0.007117128626641822, 13);
  sqcRZGate(q, -1.589199965978231, 13);
  sqcRYGate(q, 3.0063318979448175, 14);
  sqcRZGate(q, 1.1571473678450186, 14);
  sqcRYGate(q, 1.5797402243606857, 15);
  sqcRZGate(q, -0.19664872329000543, 15);
  sqcRYGate(q, 3.127228078591844, 16);
  sqcRZGate(q, 0.24030931265611244, 16);
  sqcRYGate(q, 0.09376385181693059, 17);
  sqcRZGate(q, 2.4529991690318007, 17);
  sqcRYGate(q, 2.685872690369002, 18);
  sqcRZGate(q, -0.02998709838960625, 18);
  sqcRYGate(q, -1.5320439772961, 19);
  sqcRZGate(q, 0.1565329914365637, 19);
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
  sqcRYGate(q, -1.5922115937121353, 0);
  sqcRZGate(q, -0.08220931993295189, 0);
  sqcRYGate(q, -1.4390170252576095, 1);
  sqcRZGate(q, -1.6136977866788016, 1);
  sqcRYGate(q, 0.04688007407817207, 2);
  sqcRZGate(q, 2.048363123177453, 2);
  sqcRYGate(q, -1.6094833382860045, 3);
  sqcRZGate(q, -3.088681551960487, 3);
  sqcRYGate(q, 1.154382369014506, 4);
  sqcRZGate(q, 1.1013642129168462, 4);
  sqcRYGate(q, 1.6340664447024276, 5);
  sqcRZGate(q, -0.027573084589791463, 5);
  sqcRYGate(q, 1.6075781956178943, 6);
  sqcRZGate(q, -2.850621498377978, 6);
  sqcRYGate(q, 1.6525018501934081, 7);
  sqcRZGate(q, 3.1230400220324483, 7);
  sqcRYGate(q, -1.560313553374687, 8);
  sqcRZGate(q, 3.117201629021115, 8);
  sqcRYGate(q, 1.6288695306731342, 9);
  sqcRZGate(q, 0.015995306650080643, 9);
  sqcRYGate(q, 1.6019827911737403, 10);
  sqcRZGate(q, -1.6622663903455581, 10);
  sqcRYGate(q, 1.5015875941498287, 11);
  sqcRZGate(q, -1.7781075912805098, 11);
  sqcRYGate(q, -1.5602912649050198, 12);
  sqcRZGate(q, -0.02307636503177315, 12);
  sqcRYGate(q, 1.5698717014909827, 13);
  sqcRZGate(q, 3.133569534999354, 13);
  sqcRYGate(q, -1.6583490579355367, 14);
  sqcRZGate(q, -3.133154263244138, 14);
  sqcRYGate(q, -1.6142908045895936, 15);
  sqcRZGate(q, 3.1268168058180748, 15);
  sqcRYGate(q, 1.5210452308586095, 16);
  sqcRZGate(q, -1.3674027054235598, 16);
  sqcRYGate(q, 1.6055810856159685, 17);
  sqcRZGate(q, 0.07543442346346804, 17);
  sqcRYGate(q, 1.1756868179713411, 18);
  sqcRZGate(q, -1.8935605372354685, 18);
  sqcRYGate(q, 1.8555898472931824, 19);
  sqcRZGate(q, -0.20006315710801825, 19);

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
