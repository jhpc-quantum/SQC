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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -3.135084537235623, 0);
  sqcRZGate(q, 1.1313902097455728, 0);
  sqcRYGate(q, 3.0639589549087582, 1);
  sqcRZGate(q, -0.3490737189655509, 1);
  sqcRYGate(q, -3.0928830210744067, 2);
  sqcRZGate(q, -2.243155018697628, 2);
  sqcRYGate(q, -0.06812430767409162, 3);
  sqcRZGate(q, -1.7130553854910398, 3);
  sqcRYGate(q, -3.1402347218426465, 4);
  sqcRZGate(q, 2.414904385128372, 4);
  sqcRYGate(q, 0.004374033606872274, 5);
  sqcRZGate(q, -0.722438647770632, 5);
  sqcRYGate(q, -0.006460657715678265, 6);
  sqcRZGate(q, 0.09119793042357349, 6);
  sqcRYGate(q, 0.3502908590521985, 7);
  sqcRZGate(q, -1.2690553551295638, 7);
  sqcRYGate(q, -1.5707754970898078, 8);
  sqcRZGate(q, 3.140475791931153, 8);
  sqcRYGate(q, 1.571217454507059, 9);
  sqcRZGate(q, -1.1605644893587241, 9);
  sqcRYGate(q, 2.2191681807726127e-06, 10);
  sqcRZGate(q, 0.3274155939962993, 10);
  sqcRYGate(q, -3.1415868961862676, 11);
  sqcRZGate(q, 0.8778656701270439, 11);
  sqcRYGate(q, -1.5804938201400978, 12);
  sqcRZGate(q, -3.1066665004186444, 12);
  sqcRYGate(q, -1.981457553168231, 13);
  sqcRZGate(q, -2.4098256576483648, 13);
  sqcRYGate(q, -2.5222889448944605, 14);
  sqcRZGate(q, 0.750338821608452, 14);
  sqcRYGate(q, 0.6758801159972239, 15);
  sqcRZGate(q, 3.0647055957645493, 15);
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
  sqcRYGate(q, 2.9697011853870885, 0);
  sqcRZGate(q, 2.2258214699590195, 0);
  sqcRYGate(q, -0.5602536676923204, 1);
  sqcRZGate(q, -1.0252592076489724, 1);
  sqcRYGate(q, 0.001304287196064734, 2);
  sqcRZGate(q, 0.6853671938080401, 2);
  sqcRYGate(q, 3.1130031580989064, 3);
  sqcRZGate(q, -1.3141158326445703, 3);
  sqcRYGate(q, 1.5665551541702003, 4);
  sqcRZGate(q, -1.27055189527138, 4);
  sqcRYGate(q, 1.6217814682830292, 5);
  sqcRZGate(q, -0.08015942163590159, 5);
  sqcRYGate(q, 1.086679714320148, 6);
  sqcRZGate(q, -0.003258958868764122, 6);
  sqcRYGate(q, 2.9970600806600536, 7);
  sqcRZGate(q, 1.8752005395319236, 7);
  sqcRYGate(q, -1.5576789235364095, 8);
  sqcRZGate(q, 1.571146546413658, 8);
  sqcRYGate(q, 0.0013522875784100796, 9);
  sqcRZGate(q, 2.731734198885684, 9);
  sqcRYGate(q, 3.137031383415324, 10);
  sqcRZGate(q, 2.25220700162741, 10);
  sqcRYGate(q, -3.129903247305966, 11);
  sqcRZGate(q, 2.8674749421794674, 11);
  sqcRYGate(q, -2.2662732136674384, 12);
  sqcRZGate(q, 0.642199836475224, 12);
  sqcRYGate(q, 3.090366683815151, 13);
  sqcRZGate(q, 1.1654270874276176, 13);
  sqcRYGate(q, 3.136827074434648, 14);
  sqcRZGate(q, 0.818265617181427, 14);
  sqcRYGate(q, -0.6426827449699788, 15);
  sqcRZGate(q, 0.07804484159525593, 15);
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
  sqcRYGate(q, -1.4467273624151327, 0);
  sqcRZGate(q, 0.9439759685269875, 0);
  sqcRYGate(q, -1.1230692160414542, 1);
  sqcRZGate(q, 0.7127357521654756, 1);
  sqcRYGate(q, 0.0020243771522292274, 2);
  sqcRZGate(q, -0.6492886869411165, 2);
  sqcRYGate(q, 0.000726130595813467, 3);
  sqcRZGate(q, -2.0269537276975647, 3);
  sqcRYGate(q, 3.134328568407096, 4);
  sqcRZGate(q, -2.8316587354971885, 4);
  sqcRYGate(q, -0.01625219193601136, 5);
  sqcRZGate(q, 2.9123273390157336, 5);
  sqcRYGate(q, 1.5574148543246984, 6);
  sqcRZGate(q, -1.0045673947850953, 6);
  sqcRYGate(q, 1.5704283327207056, 7);
  sqcRZGate(q, -2.207972406234888, 7);
  sqcRYGate(q, -2.7491071838667933, 8);
  sqcRZGate(q, 2.2759397155224783, 8);
  sqcRYGate(q, 2.7494696353172747, 9);
  sqcRZGate(q, -2.392019900144971, 9);
  sqcRYGate(q, 3.1398718319619108, 10);
  sqcRZGate(q, 1.8756652723915144, 10);
  sqcRYGate(q, 3.1392047006248394, 11);
  sqcRZGate(q, 2.5659140701003755, 11);
  sqcRYGate(q, 0.34410862729519703, 12);
  sqcRZGate(q, -0.33560635534091465, 12);
  sqcRYGate(q, -0.552351285581622, 13);
  sqcRZGate(q, -1.384171237171146, 13);
  sqcRYGate(q, 2.4613942580088617, 14);
  sqcRZGate(q, 1.152975419023104, 14);
  sqcRYGate(q, 2.261139053210982, 15);
  sqcRZGate(q, -1.7652026976752389, 15);
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
  sqcRYGate(q, -2.6349538790456246, 0);
  sqcRZGate(q, 1.9724212844553808, 0);
  sqcRYGate(q, -2.4023936897764977, 1);
  sqcRZGate(q, 2.816697284488038, 1);
  sqcRYGate(q, 1.835293167958901, 2);
  sqcRZGate(q, 0.4545815080812702, 2);
  sqcRYGate(q, -1.3103146596682622, 3);
  sqcRZGate(q, -0.24576187857420703, 3);
  sqcRYGate(q, -1.5542294593734574, 4);
  sqcRZGate(q, -1.212212773330803, 4);
  sqcRYGate(q, -0.062245393889736024, 5);
  sqcRZGate(q, -2.22115047002893, 5);
  sqcRYGate(q, 1.686557704960735, 6);
  sqcRZGate(q, -3.0729860055383265, 6);
  sqcRYGate(q, 3.141427074386975, 7);
  sqcRZGate(q, -2.225203688514825, 7);
  sqcRYGate(q, 0.21879269633261078, 8);
  sqcRZGate(q, 0.8375068367324812, 8);
  sqcRYGate(q, 2.934941692751223, 9);
  sqcRZGate(q, 0.8578215160129171, 9);
  sqcRYGate(q, 0.00735741313249993, 10);
  sqcRZGate(q, -1.8369673254542382, 10);
  sqcRYGate(q, 0.3044383021252193, 11);
  sqcRZGate(q, 3.1077969462139436, 11);
  sqcRYGate(q, 0.9892662741004451, 12);
  sqcRZGate(q, -2.7831177234438806, 12);
  sqcRYGate(q, -2.8715823274444086, 13);
  sqcRZGate(q, 0.6882693891507261, 13);
  sqcRYGate(q, -1.4238234227179145, 14);
  sqcRZGate(q, -1.3706734705793095, 14);
  sqcRYGate(q, 1.3597774271322671, 15);
  sqcRZGate(q, 1.3830452466234178, 15);
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
  sqcRYGate(q, -2.1181172973137388, 0);
  sqcRZGate(q, -2.134937548018463, 0);
  sqcRYGate(q, -2.8435610037243815, 1);
  sqcRZGate(q, -0.5139439102712692, 1);
  sqcRYGate(q, 3.1398088563619444, 2);
  sqcRZGate(q, -1.32307782912334, 2);
  sqcRYGate(q, 3.1399348549846304, 3);
  sqcRZGate(q, 0.21715515793391876, 3);
  sqcRYGate(q, -3.140812475907421, 4);
  sqcRZGate(q, 1.6829140614434825, 4);
  sqcRYGate(q, 3.1409158268996946, 5);
  sqcRZGate(q, 1.9457190486595568, 5);
  sqcRYGate(q, -1.5746278449602376, 6);
  sqcRZGate(q, 2.575255057648572, 6);
  sqcRYGate(q, -1.5759768754324597, 7);
  sqcRZGate(q, -1.6372400452919882, 7);
  sqcRYGate(q, -1.1285845531936047, 8);
  sqcRZGate(q, -1.6175817276573392, 8);
  sqcRYGate(q, 2.1053805851757765, 9);
  sqcRZGate(q, 1.5572060616713717, 9);
  sqcRYGate(q, 1.5861300383807946, 10);
  sqcRZGate(q, -1.716444541187781, 10);
  sqcRYGate(q, -0.20243823324676286, 11);
  sqcRZGate(q, 0.7301000859919355, 11);
  sqcRYGate(q, 3.1384938086943417, 12);
  sqcRZGate(q, 1.6610024294649575, 12);
  sqcRYGate(q, 3.126332757005628, 13);
  sqcRZGate(q, 2.711059289981423, 13);
  sqcRYGate(q, -0.14249872746521675, 14);
  sqcRZGate(q, 0.7252658705068831, 14);
  sqcRYGate(q, -0.49634042175687654, 15);
  sqcRZGate(q, 2.419265856479128, 15);
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
  sqcRYGate(q, 2.7114846114285696, 0);
  sqcRZGate(q, 3.0402172893002906, 0);
  sqcRYGate(q, 1.0090905945991802, 1);
  sqcRZGate(q, -2.4843847994374633, 1);
  sqcRYGate(q, 2.97458084386487, 2);
  sqcRZGate(q, 0.7186299849341935, 2);
  sqcRYGate(q, -3.012307926442422, 3);
  sqcRZGate(q, 1.9844095151546197, 3);
  sqcRYGate(q, -0.749068784994874, 4);
  sqcRZGate(q, -2.293343026206342, 4);
  sqcRYGate(q, 2.320550257950733, 5);
  sqcRZGate(q, -2.6996958256962733, 5);
  sqcRYGate(q, 0.010704238257617696, 6);
  sqcRZGate(q, -2.7066114283471814, 6);
  sqcRYGate(q, -0.5573427445849519, 7);
  sqcRZGate(q, -0.7404613025502655, 7);
  sqcRYGate(q, -1.6110791063496313, 8);
  sqcRZGate(q, 3.1268971478891503, 8);
  sqcRYGate(q, -1.5290013957288018, 9);
  sqcRZGate(q, 0.012888552801506357, 9);
  sqcRYGate(q, 0.019006651671872987, 10);
  sqcRZGate(q, 1.9528708879741403, 10);
  sqcRYGate(q, 0.002282029101689465, 11);
  sqcRZGate(q, -2.2090839453814857, 11);
  sqcRYGate(q, -1.4105960850517434, 12);
  sqcRZGate(q, -2.4746570594580724, 12);
  sqcRYGate(q, 1.7024921439535392, 13);
  sqcRZGate(q, 0.5712189281597556, 13);
  sqcRYGate(q, -3.099110391981579, 14);
  sqcRZGate(q, -0.1726363030515273, 14);
  sqcRYGate(q, 1.1562660728033105, 15);
  sqcRZGate(q, -0.8959259905804149, 15);
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
  sqcRYGate(q, -0.8557142585206249, 0);
  sqcRZGate(q, -2.7166628761255347, 0);
  sqcRYGate(q, -2.738022429517785, 1);
  sqcRZGate(q, 0.05416452286916141, 1);
  sqcRYGate(q, 0.008474766487169383, 2);
  sqcRZGate(q, 1.8449633747595642, 2);
  sqcRYGate(q, 3.1392846456733206, 3);
  sqcRZGate(q, 3.084640432584065, 3);
  sqcRYGate(q, 3.1384641815747476, 4);
  sqcRZGate(q, 2.2678896354651528, 4);
  sqcRYGate(q, 0.0033208204886633727, 5);
  sqcRZGate(q, -2.2051546410577565, 5);
  sqcRYGate(q, 0.6203734161777835, 6);
  sqcRZGate(q, 1.7083643591552908, 6);
  sqcRYGate(q, 3.0595103639856407, 7);
  sqcRZGate(q, -2.4167344273957654, 7);
  sqcRYGate(q, 1.55851833527634, 8);
  sqcRZGate(q, -2.9409724094486163, 8);
  sqcRYGate(q, 1.585059872879392, 9);
  sqcRZGate(q, 2.734543825044597, 9);
  sqcRYGate(q, -0.0024109238175622494, 10);
  sqcRZGate(q, -1.6428560292261964, 10);
  sqcRYGate(q, 0.04880631987551401, 11);
  sqcRZGate(q, -1.3343579083789345, 11);
  sqcRYGate(q, 3.1357492555840096, 12);
  sqcRZGate(q, 2.3628456532570823, 12);
  sqcRYGate(q, -3.1346962131796587, 13);
  sqcRZGate(q, -2.638202591637302, 13);
  sqcRYGate(q, -0.1681342411093958, 14);
  sqcRZGate(q, -0.7820344252586627, 14);
  sqcRYGate(q, -0.15035560465668246, 15);
  sqcRZGate(q, 0.3223231616160973, 15);
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
  sqcRYGate(q, -1.7278999643580697, 0);
  sqcRZGate(q, 2.758862588578407, 0);
  sqcRYGate(q, 2.2611411362292806, 1);
  sqcRZGate(q, 0.6597821795546474, 1);
  sqcRYGate(q, 1.1004873381658102, 2);
  sqcRZGate(q, 1.8575080321986341, 2);
  sqcRYGate(q, 2.2192148091183714, 3);
  sqcRZGate(q, -1.274212680291705, 3);
  sqcRYGate(q, -1.7334161449493015, 4);
  sqcRZGate(q, 3.1245848599056063, 4);
  sqcRYGate(q, -1.7316510629177548, 5);
  sqcRZGate(q, -1.8121018060081875, 5);
  sqcRYGate(q, -1.5333102425901513, 6);
  sqcRZGate(q, 1.1685531932177526, 6);
  sqcRYGate(q, -1.6164662769433649, 7);
  sqcRZGate(q, -2.178875178498253, 7);
  sqcRYGate(q, -0.047203879703653584, 8);
  sqcRZGate(q, 1.6732477062679738, 8);
  sqcRYGate(q, -3.1320869957202535, 9);
  sqcRZGate(q, 2.883475449077893, 9);
  sqcRYGate(q, -2.768864308921152, 10);
  sqcRZGate(q, 2.9402717398935505, 10);
  sqcRYGate(q, 1.6697732402403624, 11);
  sqcRZGate(q, -1.1025156907628573, 11);
  sqcRYGate(q, -0.9277353568678377, 12);
  sqcRZGate(q, -1.1695947902548762, 12);
  sqcRYGate(q, 3.1208018417724457, 13);
  sqcRZGate(q, -1.8532173514255827, 13);
  sqcRYGate(q, -0.4085412742551462, 14);
  sqcRZGate(q, -1.2749744272164791, 14);
  sqcRYGate(q, 0.37759687223689403, 15);
  sqcRZGate(q, -0.6194865591743781, 15);
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
  sqcRYGate(q, 0.9471073128408579, 0);
  sqcRZGate(q, -0.06557175146544303, 0);
  sqcRYGate(q, -1.5470236017324401, 1);
  sqcRZGate(q, -2.858972823050139, 1);
  sqcRYGate(q, -1.6979250187413957, 2);
  sqcRZGate(q, 2.491101346926838, 2);
  sqcRYGate(q, 1.4427545887635793, 3);
  sqcRZGate(q, -3.127729402976892, 3);
  sqcRYGate(q, -1.3664165253723726, 4);
  sqcRZGate(q, -0.3385330400928883, 4);
  sqcRYGate(q, -0.8021206002516503, 5);
  sqcRZGate(q, -1.675270966320868, 5);
  sqcRYGate(q, -1.3627139297717887, 6);
  sqcRZGate(q, -2.4603926755014713, 6);
  sqcRYGate(q, 1.9913058168453874, 7);
  sqcRZGate(q, 2.14781719513711, 7);
  sqcRYGate(q, -2.6234312947602, 8);
  sqcRZGate(q, 0.014333938480108888, 8);
  sqcRYGate(q, 3.1297543851909317, 9);
  sqcRZGate(q, -1.4297036908493737, 9);
  sqcRYGate(q, 0.0058617427720442095, 10);
  sqcRZGate(q, 1.6064143347562254, 10);
  sqcRYGate(q, -3.125526606423493, 11);
  sqcRZGate(q, 2.1562706359684674, 11);
  sqcRYGate(q, -3.1189998878058134, 12);
  sqcRZGate(q, 1.1169474444016338, 12);
  sqcRYGate(q, -3.086509560859754, 13);
  sqcRZGate(q, 2.6730206309159454, 13);
  sqcRYGate(q, 3.047909851579962, 14);
  sqcRZGate(q, -0.6567368927415822, 14);
  sqcRYGate(q, -3.137628377291729, 15);
  sqcRZGate(q, 2.2497114700207526, 15);
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
  sqcRYGate(q, -0.5367732812923034, 0);
  sqcRZGate(q, -2.2897944427117634, 0);
  sqcRYGate(q, -0.6993061938500027, 1);
  sqcRZGate(q, 0.37269240090370664, 1);
  sqcRYGate(q, -3.140741311287731, 2);
  sqcRZGate(q, 2.9410289882282847, 2);
  sqcRYGate(q, 3.074614312011465, 3);
  sqcRZGate(q, 0.6107570463599145, 3);
  sqcRYGate(q, 0.0019240216192537574, 4);
  sqcRZGate(q, 0.39649473521711953, 4);
  sqcRYGate(q, 3.140709140270142, 5);
  sqcRZGate(q, 1.4666518262814499, 5);
  sqcRYGate(q, 2.5795898416267677e-06, 6);
  sqcRZGate(q, 2.3878411470257137, 6);
  sqcRYGate(q, -3.141355668215812, 7);
  sqcRZGate(q, 1.3148869246464157, 7);
  sqcRYGate(q, -1.1086723227353736, 8);
  sqcRZGate(q, -2.1762360570911867, 8);
  sqcRYGate(q, 3.1025087460760297, 9);
  sqcRZGate(q, 1.568934659524837, 9);
  sqcRYGate(q, 0.05450719681817838, 10);
  sqcRZGate(q, 1.9154160951106605, 10);
  sqcRYGate(q, -3.0315316936850976, 11);
  sqcRZGate(q, -2.4704237864934346, 11);
  sqcRYGate(q, -3.0268804773465114, 12);
  sqcRZGate(q, 2.993787989887808, 12);
  sqcRYGate(q, 2.01693043159519, 13);
  sqcRZGate(q, 0.6214331618098337, 13);
  sqcRYGate(q, 1.413519751798579, 14);
  sqcRZGate(q, -3.0793171732731976, 14);
  sqcRYGate(q, -2.0626893496475205, 15);
  sqcRZGate(q, 0.4102572998118865, 15);
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
  sqcRYGate(q, 1.9176087325210283, 0);
  sqcRZGate(q, 1.5689474376505776, 0);
  sqcRYGate(q, 0.34527176104724494, 1);
  sqcRZGate(q, 1.4557333833553932, 1);
  sqcRYGate(q, -0.0026297313475391855, 2);
  sqcRZGate(q, 2.6970939296671257, 2);
  sqcRYGate(q, 0.0007927725544695191, 3);
  sqcRZGate(q, -0.6057060234289036, 3);
  sqcRYGate(q, -1.7682286143508552, 4);
  sqcRZGate(q, 0.21640988993278032, 4);
  sqcRYGate(q, -2.3288298592992835, 5);
  sqcRZGate(q, -0.5696312821373022, 5);
  sqcRYGate(q, -0.0075148449308631805, 6);
  sqcRZGate(q, -0.12275745875401906, 6);
  sqcRYGate(q, 3.0832006409090655, 7);
  sqcRZGate(q, -1.286351587042777, 7);
  sqcRYGate(q, 1.2481692623616985, 8);
  sqcRZGate(q, -0.4113847759930911, 8);
  sqcRYGate(q, 1.5452771328685992, 9);
  sqcRZGate(q, -3.139947051594191, 9);
  sqcRYGate(q, -3.0906654442805936, 10);
  sqcRZGate(q, -1.5460373302698267, 10);
  sqcRYGate(q, 3.140851467913548, 11);
  sqcRZGate(q, -2.675901958272626, 11);
  sqcRYGate(q, 0.016028054044297413, 12);
  sqcRZGate(q, -2.832262035604139, 12);
  sqcRYGate(q, -0.027605075544649974, 13);
  sqcRZGate(q, -2.0901129647849546, 13);
  sqcRYGate(q, 0.7706881759733416, 14);
  sqcRZGate(q, 0.8758775203819076, 14);
  sqcRYGate(q, -2.582316974795847, 15);
  sqcRZGate(q, 0.12002812518486246, 15);
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
  sqcRYGate(q, -1.5656554030903944, 0);
  sqcRZGate(q, 2.8195706525324136, 0);
  sqcRYGate(q, -2.6531753061053952e-05, 1);
  sqcRZGate(q, -0.354611804811816, 1);
  sqcRYGate(q, 1.5751521922506002, 2);
  sqcRZGate(q, 1.7169075684639996, 2);
  sqcRYGate(q, -1.5708506105608635, 3);
  sqcRZGate(q, 1.5431435344669464, 3);
  sqcRYGate(q, 0.007639309188788523, 4);
  sqcRZGate(q, -0.004288189451844924, 4);
  sqcRYGate(q, -0.004780855757248403, 5);
  sqcRZGate(q, 2.572978194540448, 5);
  sqcRYGate(q, -3.1389805687848122, 6);
  sqcRZGate(q, 2.3520200102162687, 6);
  sqcRYGate(q, 3.1384560204276934, 7);
  sqcRZGate(q, -0.9736781436125979, 7);
  sqcRYGate(q, -1.5493818468450387, 8);
  sqcRZGate(q, 1.539219432256182, 8);
  sqcRYGate(q, 1.5740772620889594, 9);
  sqcRZGate(q, -0.4703599703555225, 9);
  sqcRYGate(q, -0.0008177245104387143, 10);
  sqcRZGate(q, 0.029454248411852915, 10);
  sqcRYGate(q, -3.139870787862247, 11);
  sqcRZGate(q, 3.0305635307316243, 11);
  sqcRYGate(q, -0.0029561228948879422, 12);
  sqcRZGate(q, 2.3207635579342307, 12);
  sqcRYGate(q, 0.000308205460177291, 13);
  sqcRZGate(q, -0.7811914733256724, 13);
  sqcRYGate(q, 2.8641355310237895, 14);
  sqcRZGate(q, -2.522727375228932, 14);
  sqcRYGate(q, 0.6163522862659951, 15);
  sqcRZGate(q, -0.2546555820712758, 15);
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
  sqcRYGate(q, -0.09025302465475527, 0);
  sqcRZGate(q, -1.1951224976460733, 0);
  sqcRYGate(q, 3.053432151841099, 1);
  sqcRZGate(q, -1.990526672064112, 1);
  sqcRYGate(q, 3.1355933191717855, 2);
  sqcRZGate(q, 0.8782154164240644, 2);
  sqcRYGate(q, 0.012744384464106447, 3);
  sqcRZGate(q, 2.352755220591534, 3);
  sqcRYGate(q, 1.5665829831676135, 4);
  sqcRZGate(q, -0.8109016663044457, 4);
  sqcRYGate(q, 1.6092044388637967, 5);
  sqcRZGate(q, -0.8189976503579697, 5);
  sqcRYGate(q, -0.9148937374498034, 6);
  sqcRZGate(q, 2.029289293761331, 6);
  sqcRYGate(q, -2.2127337823800395, 7);
  sqcRZGate(q, -1.1074184515625938, 7);
  sqcRYGate(q, -1.999347088265909, 8);
  sqcRZGate(q, -2.747844482598384, 8);
  sqcRYGate(q, -1.4713673384310482, 9);
  sqcRZGate(q, 2.9383178038639803, 9);
  sqcRYGate(q, 2.9293918649906763, 10);
  sqcRZGate(q, -2.711268438011135, 10);
  sqcRYGate(q, 1.288312967370147, 11);
  sqcRZGate(q, 0.4022689282755651, 11);
  sqcRYGate(q, 0.024011310373118988, 12);
  sqcRZGate(q, 1.8423888501547037, 12);
  sqcRYGate(q, 3.0954899148927923, 13);
  sqcRZGate(q, -0.2782560207910026, 13);
  sqcRYGate(q, 0.6859577100881706, 14);
  sqcRZGate(q, -0.9004876046772569, 14);
  sqcRYGate(q, 2.0841595142438085, 15);
  sqcRZGate(q, -2.8746349005152214, 15);

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
