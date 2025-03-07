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

  sqcRYGate(q, 2.5320677523763337, 0);
  sqcRZGate(q, 0.1847112535303674, 0);
  sqcRYGate(q, -0.5454513825127336, 1);
  sqcRZGate(q, -1.317649184898615, 1);
  sqcRYGate(q, 0.01658554797534606, 2);
  sqcRZGate(q, 1.7770387795153038, 2);
  sqcRYGate(q, 0.11883738861456283, 3);
  sqcRZGate(q, -0.16586411111646626, 3);
  sqcRYGate(q, -0.5375819402996598, 4);
  sqcRZGate(q, 1.430800554144029, 4);
  sqcRYGate(q, -1.8126580649300976, 5);
  sqcRZGate(q, -3.1322159064649537, 5);
  sqcRYGate(q, 2.73363576366258, 6);
  sqcRZGate(q, 1.299046643557747, 6);
  sqcRYGate(q, 0.427505319403263, 7);
  sqcRZGate(q, -0.028095449268935712, 7);
  sqcRYGate(q, -1.8360504150320605, 8);
  sqcRZGate(q, -1.499980252351145, 8);
  sqcRYGate(q, 3.0795615093583706, 9);
  sqcRZGate(q, 2.6874531580983274, 9);
  sqcRYGate(q, 3.1378858448663296, 10);
  sqcRZGate(q, -0.1678015023134857, 10);
  sqcRYGate(q, 1.9789196222836651, 11);
  sqcRZGate(q, 1.5259408756161186, 11);
  sqcRYGate(q, -1.4432163057007052, 12);
  sqcRZGate(q, -3.128135172964985, 12);
  sqcRYGate(q, 0.5935218801174638, 13);
  sqcRZGate(q, -2.757068746896169, 13);
  sqcRYGate(q, 0.010149428007211192, 14);
  sqcRZGate(q, 1.5505366862941312, 14);
  sqcRYGate(q, 0.08756018797488967, 15);
  sqcRZGate(q, -0.6333820685359618, 15);
  sqcRYGate(q, -1.2726560056948792, 16);
  sqcRZGate(q, 2.408127716995715, 16);
  sqcRYGate(q, -1.2100488641772826, 17);
  sqcRZGate(q, -0.7631899270913713, 17);
  sqcRYGate(q, 1.3663481233500836, 18);
  sqcRZGate(q, 0.4399909236729943, 18);
  sqcRYGate(q, -0.09202721597249575, 19);
  sqcRZGate(q, -2.809702925128019, 19);
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
  sqcRYGate(q, -2.5177303236807322, 0);
  sqcRZGate(q, -1.5172536065022446, 0);
  sqcRYGate(q, -1.7553616304406248, 1);
  sqcRZGate(q, -1.511547646028423, 1);
  sqcRYGate(q, -1.5950135960896459, 2);
  sqcRZGate(q, -1.5485646202508123, 2);
  sqcRYGate(q, -2.0037741642295583, 3);
  sqcRZGate(q, 2.6362817709413036, 3);
  sqcRYGate(q, -1.6386676174726655, 4);
  sqcRZGate(q, -2.5339429551999957, 4);
  sqcRYGate(q, -1.6085629216642268, 5);
  sqcRZGate(q, 1.881210146502057, 5);
  sqcRYGate(q, -1.5672654204309522, 6);
  sqcRZGate(q, 1.0942728770546164, 6);
  sqcRYGate(q, 2.8701610890904754, 7);
  sqcRZGate(q, 3.1271089708752426, 7);
  sqcRYGate(q, -1.3353312089304896, 8);
  sqcRZGate(q, -1.1475699894597344, 8);
  sqcRYGate(q, -3.1262189373674922, 9);
  sqcRZGate(q, -2.859180151169397, 9);
  sqcRYGate(q, 3.037887419516577, 10);
  sqcRZGate(q, 0.44303895812258204, 10);
  sqcRYGate(q, -2.284903177681385, 11);
  sqcRZGate(q, 1.8792830096370678, 11);
  sqcRYGate(q, 1.4515532148845143, 12);
  sqcRZGate(q, 0.5485273341129933, 12);
  sqcRYGate(q, -1.651547501291538, 13);
  sqcRZGate(q, -2.725872625898401, 13);
  sqcRYGate(q, 0.640031553397956, 14);
  sqcRZGate(q, 0.987698477016079, 14);
  sqcRYGate(q, -1.4185274543722022, 15);
  sqcRZGate(q, -0.9441506764043484, 15);
  sqcRYGate(q, -2.6150268036214843, 16);
  sqcRZGate(q, 0.9101026972536879, 16);
  sqcRYGate(q, 0.7674682784233484, 17);
  sqcRZGate(q, 1.0721413669667867, 17);
  sqcRYGate(q, 1.37090417236833, 18);
  sqcRZGate(q, -0.14349875581458527, 18);
  sqcRYGate(q, -0.4687042781300655, 19);
  sqcRZGate(q, -0.9028613341476026, 19);
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
  sqcRYGate(q, -1.5183835514458028, 0);
  sqcRZGate(q, 3.0143487664827497, 0);
  sqcRYGate(q, 1.5350839723421197, 1);
  sqcRZGate(q, 1.403454312547199, 1);
  sqcRYGate(q, 2.464730019772855, 2);
  sqcRZGate(q, 0.5239919199729665, 2);
  sqcRYGate(q, -3.0943840147149317, 3);
  sqcRZGate(q, -2.0705867499384567, 3);
  sqcRYGate(q, 3.1415265676065425, 4);
  sqcRZGate(q, -1.2716733687447077, 4);
  sqcRYGate(q, -0.09258402992576939, 5);
  sqcRZGate(q, 2.839489412937996, 5);
  sqcRYGate(q, -3.138752080993285, 6);
  sqcRZGate(q, 2.7122262380420805, 6);
  sqcRYGate(q, 1.5592111500964387, 7);
  sqcRZGate(q, -1.7486229566283544, 7);
  sqcRYGate(q, -2.8714980170501954, 8);
  sqcRZGate(q, -1.2725786965773835, 8);
  sqcRYGate(q, 0.12403681717581971, 9);
  sqcRZGate(q, 3.04289451386891, 9);
  sqcRYGate(q, -0.0010467554965005576, 10);
  sqcRZGate(q, -0.2926161829709182, 10);
  sqcRYGate(q, 1.6520836972765012, 11);
  sqcRZGate(q, 0.20162906607170147, 11);
  sqcRYGate(q, 0.31571842956818763, 12);
  sqcRZGate(q, 0.8780409767820903, 12);
  sqcRYGate(q, 0.007068892426182634, 13);
  sqcRZGate(q, 3.124415227244485, 13);
  sqcRYGate(q, 0.022637962554852287, 14);
  sqcRZGate(q, 2.0598150970109685, 14);
  sqcRYGate(q, -3.1353293598820517, 15);
  sqcRZGate(q, -1.000235673531231, 15);
  sqcRYGate(q, -0.019420487296354594, 16);
  sqcRZGate(q, 0.6462085802887637, 16);
  sqcRYGate(q, -2.11113813161745, 17);
  sqcRZGate(q, 1.940008166591637, 17);
  sqcRYGate(q, 1.962891222431395, 18);
  sqcRZGate(q, -1.4750478191231382, 18);
  sqcRYGate(q, 2.9815070142799156, 19);
  sqcRZGate(q, 0.1903802358943294, 19);
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
  sqcRYGate(q, 1.0950353868112046, 0);
  sqcRZGate(q, -2.0199445194729293, 0);
  sqcRYGate(q, 3.003342095146878, 1);
  sqcRZGate(q, -0.3307334727272165, 1);
  sqcRYGate(q, -1.6511633583462566, 2);
  sqcRZGate(q, -1.8419910154254977, 2);
  sqcRYGate(q, 2.2341658938286137, 3);
  sqcRZGate(q, 3.1341718519379973, 3);
  sqcRYGate(q, 0.2449189415000399, 4);
  sqcRZGate(q, 2.0480794670439795, 4);
  sqcRYGate(q, -0.22565221787254403, 5);
  sqcRZGate(q, 1.121765180710904, 5);
  sqcRYGate(q, -1.8904629499749046, 6);
  sqcRZGate(q, 1.0883687183834563, 6);
  sqcRYGate(q, 0.8375140217542176, 7);
  sqcRZGate(q, -2.928404257366334, 7);
  sqcRYGate(q, 1.5725264970082593, 8);
  sqcRZGate(q, 0.046738666393654024, 8);
  sqcRYGate(q, 0.00024260591892311112, 9);
  sqcRZGate(q, 1.736361240916238, 9);
  sqcRYGate(q, 0.28458041140788826, 10);
  sqcRZGate(q, 0.9151896541838497, 10);
  sqcRYGate(q, 3.128884347479019, 11);
  sqcRZGate(q, 0.5944683067801496, 11);
  sqcRYGate(q, -1.080366254071591, 12);
  sqcRZGate(q, -1.224385047358382, 12);
  sqcRYGate(q, -1.8638997753183544, 13);
  sqcRZGate(q, -2.109309192008169, 13);
  sqcRYGate(q, 3.0258337548765017, 14);
  sqcRZGate(q, 1.3960574590818036, 14);
  sqcRYGate(q, -1.183247186409422, 15);
  sqcRZGate(q, 2.46808956683126, 15);
  sqcRYGate(q, -1.9159989914156315, 16);
  sqcRZGate(q, 2.6754144872899146, 16);
  sqcRYGate(q, -1.6847934674014633, 17);
  sqcRZGate(q, 1.7463714753929533, 17);
  sqcRYGate(q, -0.7511924646349861, 18);
  sqcRZGate(q, -0.06442115065113711, 18);
  sqcRYGate(q, 3.109952348694588, 19);
  sqcRZGate(q, 0.5364003752774474, 19);
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
  sqcRYGate(q, 1.5679016535863513, 0);
  sqcRZGate(q, 2.7263983862340964, 0);
  sqcRYGate(q, -2.6962696741650265, 1);
  sqcRZGate(q, -2.0963912590579845, 1);
  sqcRYGate(q, -2.8276717615307665, 2);
  sqcRZGate(q, -1.7725277275349067, 2);
  sqcRYGate(q, -3.138570683325376, 3);
  sqcRZGate(q, 2.842527362805557, 3);
  sqcRYGate(q, -8.207418995550345e-05, 4);
  sqcRZGate(q, -1.41907877188751, 4);
  sqcRYGate(q, 0.003113239036088622, 5);
  sqcRZGate(q, 0.4507047632730181, 5);
  sqcRYGate(q, -0.041530248544149155, 6);
  sqcRZGate(q, 2.85834358847699, 6);
  sqcRYGate(q, 1.570534598017118, 7);
  sqcRZGate(q, 3.034618448950533, 7);
  sqcRYGate(q, 0.03725742884567157, 8);
  sqcRZGate(q, 1.3645148520050112, 8);
  sqcRYGate(q, 2.938793101631236, 9);
  sqcRZGate(q, -3.1298915136057555, 9);
  sqcRYGate(q, 0.00952689693896255, 10);
  sqcRZGate(q, -0.9102699459445516, 10);
  sqcRYGate(q, 1.6524223136340346, 11);
  sqcRZGate(q, -1.577444445065092, 11);
  sqcRYGate(q, -1.5244878669004986, 12);
  sqcRZGate(q, 0.8749914243420865, 12);
  sqcRYGate(q, -0.03109843826429426, 13);
  sqcRZGate(q, 0.521958658176744, 13);
  sqcRYGate(q, 0.03407110519692585, 14);
  sqcRZGate(q, 0.14769037023069928, 14);
  sqcRYGate(q, -3.1209659281705746, 15);
  sqcRZGate(q, 0.28928218297674874, 15);
  sqcRYGate(q, -0.05645506050124444, 16);
  sqcRZGate(q, 0.8409716174115456, 16);
  sqcRYGate(q, 1.6783650855867496, 17);
  sqcRZGate(q, 2.0177593788386705, 17);
  sqcRYGate(q, 1.7667620493492566, 18);
  sqcRZGate(q, -2.8342322509375473, 18);
  sqcRYGate(q, 0.7579357175763297, 19);
  sqcRZGate(q, -0.09722942242123912, 19);
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
  sqcRYGate(q, 0.5232314806183904, 0);
  sqcRZGate(q, 0.3582689035618562, 0);
  sqcRYGate(q, -2.6278358918430462, 1);
  sqcRZGate(q, 1.2747336105831346, 1);
  sqcRYGate(q, 1.9327474834444973, 2);
  sqcRZGate(q, 1.629295590869103, 2);
  sqcRYGate(q, -0.2331744422513955, 3);
  sqcRZGate(q, -2.365065325030434, 3);
  sqcRYGate(q, -1.4746468598878824, 4);
  sqcRZGate(q, -1.1961660952193143, 4);
  sqcRYGate(q, -1.9916631524711073, 5);
  sqcRZGate(q, -2.7065027316847714, 5);
  sqcRYGate(q, 1.5819419948360052, 6);
  sqcRZGate(q, -1.125617620379621, 6);
  sqcRYGate(q, 2.8417458629125454, 7);
  sqcRZGate(q, 0.36573397376195027, 7);
  sqcRYGate(q, -0.1554036111896027, 8);
  sqcRZGate(q, -2.5597435116663094, 8);
  sqcRYGate(q, 1.0114372349997023, 9);
  sqcRZGate(q, -2.717691814711941, 9);
  sqcRYGate(q, 2.064606840741906, 10);
  sqcRZGate(q, -2.7093949159217474, 10);
  sqcRYGate(q, -1.1322554442104749, 11);
  sqcRZGate(q, 0.43566534007903324, 11);
  sqcRYGate(q, -1.249449633591061, 12);
  sqcRZGate(q, 1.5314775209435236, 12);
  sqcRYGate(q, 2.895601057491866, 13);
  sqcRZGate(q, -2.870973026641875, 13);
  sqcRYGate(q, -1.0542860946657928, 14);
  sqcRZGate(q, -2.7813645266865694, 14);
  sqcRYGate(q, -2.163395272951638, 15);
  sqcRZGate(q, -2.129494310905458, 15);
  sqcRYGate(q, -0.9803610686475214, 16);
  sqcRZGate(q, -1.1007870873780154, 16);
  sqcRYGate(q, -0.9007892751740725, 17);
  sqcRZGate(q, -0.6867766700788467, 17);
  sqcRYGate(q, -0.9097866501928661, 18);
  sqcRZGate(q, -1.0403865079663905, 18);
  sqcRYGate(q, -2.202588945824294, 19);
  sqcRZGate(q, -2.6570233543334116, 19);

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
