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

  sqcRYGate(q, 1.3686425220080825, 0);
  sqcRYGate(q, 2.0592864031275075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9849824916832874, 0);
  sqcRYGate(q, -2.3661743329984297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8555449556004318, 2);
  sqcRYGate(q, -0.08621625940611999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.480320085086652, 2);
  sqcRYGate(q, -2.039331967040229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1173553437261012, 4);
  sqcRYGate(q, 1.0815057593401871, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.744769552537049, 4);
  sqcRYGate(q, -0.5176403714871967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.667423904824419, 6);
  sqcRYGate(q, 3.1251976200955065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7896036690539456, 6);
  sqcRYGate(q, -2.4680842127571188, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.04682174064672, 8);
  sqcRYGate(q, -3.017154662187996, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0917256990704902, 8);
  sqcRYGate(q, 0.129642320930833, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.478021941504779, 10);
  sqcRYGate(q, -2.192329505730985, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.09275079871254444, 10);
  sqcRYGate(q, 0.08382766779556938, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3239646903405964, 12);
  sqcRYGate(q, -1.9120279984443471, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.3465041937739093, 12);
  sqcRYGate(q, 2.821202687524717, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.684942610302184, 14);
  sqcRYGate(q, 0.0002788030697349342, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.637012868387398, 14);
  sqcRYGate(q, -0.06708837680591095, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1296064026816337, 16);
  sqcRYGate(q, 2.9883575682540884, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.365866223410303, 16);
  sqcRYGate(q, 1.6721084954225756, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.1136230123318303, 18);
  sqcRYGate(q, -0.6325787112173433, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.355897549797787, 18);
  sqcRYGate(q, -2.2261362703537415, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.3733264872160253, 0);
  sqcRYGate(q, 2.043214150637488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0624946170024105, 0);
  sqcRYGate(q, 3.0380011864186613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.509946350229293, 2);
  sqcRYGate(q, 2.0950052133204835, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.014479635372445012, 2);
  sqcRYGate(q, 0.018361762634079605, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.099640805601882, 4);
  sqcRYGate(q, -0.9932549756146124, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4610545962533843, 4);
  sqcRYGate(q, 0.013585096455150492, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9161934909424418, 6);
  sqcRYGate(q, 0.10440043054901696, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.4705529749672772, 6);
  sqcRYGate(q, 0.7097816688254586, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.35231080869528, 8);
  sqcRYGate(q, -1.02508871522202, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.6596707247127163, 8);
  sqcRYGate(q, 0.013793644051586, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4490475628579533, 10);
  sqcRYGate(q, -1.2358263140306776, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.9349396534189476, 10);
  sqcRYGate(q, 0.21978293398904383, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.7475439739571974, 12);
  sqcRYGate(q, -1.4543893173853149, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.973894146193163, 12);
  sqcRYGate(q, 2.1407458449407417, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.4591035470212557, 14);
  sqcRYGate(q, -2.8907804140237734, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.665573801889897, 14);
  sqcRYGate(q, 0.008149362606773994, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.565929664849941, 16);
  sqcRYGate(q, -0.9273193157671872, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.7412988140509087, 16);
  sqcRYGate(q, 2.872629429121507, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.8345017390578213, 1);
  sqcRYGate(q, -2.823070091561236, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.893934686176032, 1);
  sqcRYGate(q, -2.432797588970191, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.995051857479852, 3);
  sqcRYGate(q, -3.13292638266162, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.45861646504720505, 3);
  sqcRYGate(q, 3.125046766667893, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.24809637779061014, 5);
  sqcRYGate(q, 1.2532112894747809, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.4244942510982215, 5);
  sqcRYGate(q, -0.21368667853682988, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.789378913067475, 7);
  sqcRYGate(q, 1.3202291195391727, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.1128280947532323, 7);
  sqcRYGate(q, 0.06885602323141705, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.695431164680152, 9);
  sqcRYGate(q, -0.9388134214103241, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.120786870233493, 9);
  sqcRYGate(q, -0.027266463712489114, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.8809348031363449, 11);
  sqcRYGate(q, -1.2473104036863578, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.2167582760977935, 11);
  sqcRYGate(q, 2.4539400122376143, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.06830080885163525, 13);
  sqcRYGate(q, -0.8389117039906833, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.6084322511332267, 13);
  sqcRYGate(q, -0.9262811711700047, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.093405340316929, 15);
  sqcRYGate(q, -2.120990838290843, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.5056039742253874, 15);
  sqcRYGate(q, -0.014083621949598779, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.10585293074720634, 17);
  sqcRYGate(q, 1.796051379562007, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.8590091123534886, 17);
  sqcRYGate(q, 0.03933265227948586, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.9410137693839671, 0);
  sqcRYGate(q, -2.045913919357384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.07560521903932, 0);
  sqcRYGate(q, 1.6451904451338946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0167551917631732, 2);
  sqcRYGate(q, -2.9537798720521957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3579150651056624, 2);
  sqcRYGate(q, -1.2044959822343262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2214366591732206, 4);
  sqcRYGate(q, -0.48511022041699847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8847945356406814, 4);
  sqcRYGate(q, 1.0142151373524964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.854568368987669, 6);
  sqcRYGate(q, -2.129450091645012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0395946171130266, 6);
  sqcRYGate(q, 1.662498203538129, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4620644651325962, 8);
  sqcRYGate(q, -0.16349450197934087, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3378988911563243, 8);
  sqcRYGate(q, -1.2984639320680518, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5743028989166477, 10);
  sqcRYGate(q, -0.03825743185131536, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6614337470671403, 10);
  sqcRYGate(q, -0.927175713170211, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.14984498080267308, 12);
  sqcRYGate(q, 2.4483610520511587, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.10245723369585225, 12);
  sqcRYGate(q, -3.1314629053433065, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.0790951297145837, 14);
  sqcRYGate(q, 0.09857495600627268, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0752730841477787, 14);
  sqcRYGate(q, 3.013076179338632, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.7548931923034053, 16);
  sqcRYGate(q, -0.7309949709623023, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.32165695540674294, 16);
  sqcRYGate(q, -3.123712777617911, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.7848268554775726, 18);
  sqcRYGate(q, -0.8319923055143716, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.7588781861369593, 18);
  sqcRYGate(q, -1.4830787644673498, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.4959352378775086, 0);
  sqcRYGate(q, -0.04247237964472504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.657110671813129, 0);
  sqcRYGate(q, 2.837675381588769, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2551688682092017, 2);
  sqcRYGate(q, -1.778752396461794, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0458833533132403, 2);
  sqcRYGate(q, -3.110104008055734, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.175893921619444, 4);
  sqcRYGate(q, 2.684748283877745, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1406562398764835, 4);
  sqcRYGate(q, -3.051281963073608, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9070822574708945, 6);
  sqcRYGate(q, 0.9876659296599959, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1158965161486405, 6);
  sqcRYGate(q, 0.003185823000229071, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5559168333308655, 8);
  sqcRYGate(q, -2.710539065661764, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.07458117751933457, 8);
  sqcRYGate(q, 3.0752351784413667, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.11393219132710819, 10);
  sqcRYGate(q, -0.7966103006935157, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1404655019271965, 10);
  sqcRYGate(q, 3.1406132800797235, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.4837469096320666, 12);
  sqcRYGate(q, -2.6010572603081634, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.1547085355344868, 12);
  sqcRYGate(q, -2.1431652664124865, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.4296123859159824, 14);
  sqcRYGate(q, -1.7515082133747004, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.055854110527161716, 14);
  sqcRYGate(q, -0.585652462793093, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.18252728315830424, 16);
  sqcRYGate(q, -2.6990517112733854, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.3300190760494512, 16);
  sqcRYGate(q, 3.1357154925973476, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.376142196268143, 1);
  sqcRYGate(q, 2.3207549622202146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5533967360872776, 1);
  sqcRYGate(q, -3.128449798841573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9433301645705767, 3);
  sqcRYGate(q, -2.5950142430579333, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0601956404612344, 3);
  sqcRYGate(q, -3.126480799338393, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6615882887333168, 5);
  sqcRYGate(q, 1.5467543659109637, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.125935630914463, 5);
  sqcRYGate(q, 0.036153483079662596, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.15288426433623603, 7);
  sqcRYGate(q, -2.219393237938893, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1392232815688446, 7);
  sqcRYGate(q, 3.122848870221586, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.6766258553880384, 9);
  sqcRYGate(q, -2.2901662267130307, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.0006123756866811547, 9);
  sqcRYGate(q, -3.0399074075106127, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.6421693098821386, 11);
  sqcRYGate(q, 1.025338357963635, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1413400515457095, 11);
  sqcRYGate(q, -3.1412177739866616, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.4147464459566432, 13);
  sqcRYGate(q, -0.39634460423508244, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.13093114934874683, 13);
  sqcRYGate(q, -0.9431200953438116, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.4830849795428831, 15);
  sqcRYGate(q, -1.2210381868708335, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.0023058895959431397, 15);
  sqcRYGate(q, 0.055714716448195124, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.4216168225085, 17);
  sqcRYGate(q, -2.1879861969378522, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.0631826721021587, 17);
  sqcRYGate(q, 0.08258201586799085, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.8707447266118142, 0);
  sqcRYGate(q, 1.0271337191278647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8857463960405516, 0);
  sqcRYGate(q, 3.0857968010725023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.135322758217587, 2);
  sqcRYGate(q, 0.5614779809381704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7007606050256657, 2);
  sqcRYGate(q, -2.6967819676442755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47045725151212814, 4);
  sqcRYGate(q, -1.66243636671111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4780186113150934, 4);
  sqcRYGate(q, 0.07572068997106653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5864180430720678, 6);
  sqcRYGate(q, 0.8260831991502284, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4409245683520489, 6);
  sqcRYGate(q, 0.3270131763120858, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1621801512039287, 8);
  sqcRYGate(q, -1.3735669716745789, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3554472539863456, 8);
  sqcRYGate(q, -0.3583643626840657, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3696487810951115, 10);
  sqcRYGate(q, 1.5287214325473548, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5919310001136613, 10);
  sqcRYGate(q, -2.483888931271972, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.450233901328689, 12);
  sqcRYGate(q, 1.8993311398360602, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.06943774694792913, 12);
  sqcRYGate(q, -1.5746668328008389, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.278702044806912, 14);
  sqcRYGate(q, -2.6098272183646976, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.0014147225406904817, 14);
  sqcRYGate(q, -3.1399904013557838, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.19935468454971, 16);
  sqcRYGate(q, 1.6390419473542674, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.7031621154257524, 16);
  sqcRYGate(q, -3.057512312755586, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.3594254994498174, 18);
  sqcRYGate(q, 2.3873484729160843, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.775674845094132, 18);
  sqcRYGate(q, 1.780652680967499, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.3401012737491209, 0);
  sqcRYGate(q, 1.6777795545021583, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.048046750023147844, 0);
  sqcRYGate(q, 3.047924017476871, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7613504510292826, 2);
  sqcRYGate(q, 1.0136880491802227, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1169411047622604, 2);
  sqcRYGate(q, 0.02829025208669034, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9231767975749539, 4);
  sqcRYGate(q, 2.2740616995265404, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1318908503875806, 4);
  sqcRYGate(q, -0.06353021108953971, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.324371174618351, 6);
  sqcRYGate(q, 1.8220686038632397, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.111496649456351, 6);
  sqcRYGate(q, 0.019554914451042293, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3599493226253467, 8);
  sqcRYGate(q, 0.9704783759935383, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.06981725950480566, 8);
  sqcRYGate(q, -0.040899148045211, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.789389412794756, 10);
  sqcRYGate(q, -2.2194075716876176, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.117736238049383, 10);
  sqcRYGate(q, -3.1329489862388114, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.10422800632172624, 12);
  sqcRYGate(q, 2.5964371483186954, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.1377811923148524, 12);
  sqcRYGate(q, -3.1359129306551816, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.8343137821189686, 14);
  sqcRYGate(q, 1.575111003542438, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.001700226863601989, 14);
  sqcRYGate(q, -0.5824851346048066, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.4335858260872621, 16);
  sqcRYGate(q, 0.23738394190698564, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.0019171244660673992, 16);
  sqcRYGate(q, 3.1318955954705654, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.8164524329705612, 1);
  sqcRYGate(q, 2.555126380840857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.108333966995271, 1);
  sqcRYGate(q, -0.04889785228814445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.006423584897028434, 3);
  sqcRYGate(q, 0.31071614173418716, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.07277690750670704, 3);
  sqcRYGate(q, -0.0020528917062767604, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4498732855187896, 5);
  sqcRYGate(q, 1.9001567670953836, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.118484912824065, 5);
  sqcRYGate(q, -0.018859645793094515, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.206174809082091, 7);
  sqcRYGate(q, 1.0896671966537534, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.0230257376212748, 7);
  sqcRYGate(q, -0.029846337846812798, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.6976841052735329, 9);
  sqcRYGate(q, -1.8383025549761527, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.121845661578879, 9);
  sqcRYGate(q, -0.08418952571139204, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.30629383897945045, 11);
  sqcRYGate(q, 0.45577159455617355, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.005473614246448131, 11);
  sqcRYGate(q, 3.1354807341945348, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.4610223697878517, 13);
  sqcRYGate(q, -2.1026655680670543, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.543014023955723, 13);
  sqcRYGate(q, 3.134026595092916, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.3384609037188326, 15);
  sqcRYGate(q, -2.8879646651151227, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.007290822509207486, 15);
  sqcRYGate(q, 0.01586831046562409, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 1.1527396823429434, 17);
  sqcRYGate(q, -0.39655324643583706, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 3.125806213486689, 17);
  sqcRYGate(q, -0.004407365538917851, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.17387582270488117, 0);
  sqcRYGate(q, 1.21405762153662, 1);
  sqcRYGate(q, 1.2535078622930005, 2);
  sqcRYGate(q, -2.687403161909947, 3);
  sqcRYGate(q, 2.109295120964254, 4);
  sqcRYGate(q, 2.512086047161798, 5);
  sqcRYGate(q, -2.602910801880224, 6);
  sqcRYGate(q, -0.7809232380939397, 7);
  sqcRYGate(q, 1.3605343551462383, 8);
  sqcRYGate(q, 1.8842252876015273, 9);
  sqcRYGate(q, 1.9533353909014177, 10);
  sqcRYGate(q, 2.17835623764592, 11);
  sqcRYGate(q, -2.03320576242793, 12);
  sqcRYGate(q, 2.7505476858546785, 13);
  sqcRYGate(q, 0.9197865161002391, 14);
  sqcRYGate(q, -1.3283192881419872, 15);
  sqcRYGate(q, 1.7602597131990567, 16);
  sqcRYGate(q, 2.664224864821144, 17);
  sqcRYGate(q, 0.6347999924021926, 18);
  sqcRYGate(q, -2.5924632935124516, 19);

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
