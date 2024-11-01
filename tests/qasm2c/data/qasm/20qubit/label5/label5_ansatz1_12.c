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

  sqcRYGate(q, -1.1755129702068352, 0);
  sqcRZGate(q, -1.1670133031166996, 0);
  sqcRYGate(q, -0.689413627527883, 1);
  sqcRZGate(q, 2.8776345336890676, 1);
  sqcRYGate(q, 0.18994097933687262, 2);
  sqcRZGate(q, 1.8414962953136529, 2);
  sqcRYGate(q, 0.0019300769339612336, 3);
  sqcRZGate(q, -2.3127741791750203, 3);
  sqcRYGate(q, -1.5880747854927781, 4);
  sqcRZGate(q, 1.5474538661006716, 4);
  sqcRYGate(q, -1.4915790268615918, 5);
  sqcRZGate(q, 0.26008485513104806, 5);
  sqcRYGate(q, 1.4673989996519279, 6);
  sqcRZGate(q, -2.7674599399084383, 6);
  sqcRYGate(q, -0.9631313010466047, 7);
  sqcRZGate(q, -1.8439824153477122, 7);
  sqcRYGate(q, -1.5860163058097163, 8);
  sqcRZGate(q, -1.5850395835763256, 8);
  sqcRYGate(q, 1.3741034840912585, 9);
  sqcRZGate(q, -2.5783250121672934, 9);
  sqcRYGate(q, 3.136499161854058, 10);
  sqcRZGate(q, 2.250278058302066, 10);
  sqcRYGate(q, -0.48738004078042163, 11);
  sqcRZGate(q, -0.3088002200654838, 11);
  sqcRYGate(q, 2.234154876175099, 12);
  sqcRZGate(q, -1.1766484115913716, 12);
  sqcRYGate(q, -0.010616045816691289, 13);
  sqcRZGate(q, 0.6510544662735213, 13);
  sqcRYGate(q, -0.012201497217716316, 14);
  sqcRZGate(q, 0.9330119342656849, 14);
  sqcRYGate(q, -0.7677658163001233, 15);
  sqcRZGate(q, 0.5731562956739511, 15);
  sqcRYGate(q, 1.2796456078364296, 16);
  sqcRZGate(q, -0.509699957880222, 16);
  sqcRYGate(q, -2.9859090366616376, 17);
  sqcRZGate(q, 2.133753413453382, 17);
  sqcRYGate(q, -1.8358902196665032, 18);
  sqcRZGate(q, -1.235349315669775, 18);
  sqcRYGate(q, 0.24363895974690664, 19);
  sqcRZGate(q, 2.791721785482083, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.10485799364729381, 0);
  sqcRZGate(q, -1.8840623391044784, 0);
  sqcRYGate(q, -2.3680640537211044, 1);
  sqcRZGate(q, -1.9081105517526495, 1);
  sqcRYGate(q, -1.530460891572445, 2);
  sqcRZGate(q, 2.6615642082781403, 2);
  sqcRYGate(q, 1.5127886973369726, 3);
  sqcRZGate(q, -0.5897632604411225, 3);
  sqcRYGate(q, 1.720336836221521, 4);
  sqcRZGate(q, 0.20988372809276223, 4);
  sqcRYGate(q, 2.0173960517175265, 5);
  sqcRZGate(q, 2.437406397575963, 5);
  sqcRYGate(q, 2.520771015124268e-05, 6);
  sqcRZGate(q, -2.626508115935082, 6);
  sqcRYGate(q, -3.1337900390394653, 7);
  sqcRZGate(q, -1.2961071042096264, 7);
  sqcRYGate(q, -0.36545785611660886, 8);
  sqcRZGate(q, -1.380477197512771, 8);
  sqcRYGate(q, 3.1376935596223463, 9);
  sqcRZGate(q, -1.0571666805053308, 9);
  sqcRYGate(q, 3.1413753287211907, 10);
  sqcRZGate(q, -1.232950740973421, 10);
  sqcRYGate(q, -2.7742480104869403, 11);
  sqcRZGate(q, -0.21487021515228033, 11);
  sqcRYGate(q, -1.57888546730341, 12);
  sqcRZGate(q, -1.3725692355065269, 12);
  sqcRYGate(q, 1.6909766385457212, 13);
  sqcRZGate(q, 2.059069939040665, 13);
  sqcRYGate(q, 0.040342948928868916, 14);
  sqcRZGate(q, -1.8801340512323836, 14);
  sqcRYGate(q, 0.7531643549858851, 15);
  sqcRZGate(q, -2.866491400096336, 15);
  sqcRYGate(q, -1.395781947735591, 16);
  sqcRZGate(q, -2.796862860869007, 16);
  sqcRYGate(q, 2.943148074273497, 17);
  sqcRZGate(q, -0.9341562910158233, 17);
  sqcRYGate(q, 2.61248255510074, 18);
  sqcRZGate(q, -1.4857518915466432, 18);
  sqcRYGate(q, 0.927576852766666, 19);
  sqcRZGate(q, -2.7039398015669303, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.509005461033382, 0);
  sqcRZGate(q, 2.2318488211587475, 0);
  sqcRYGate(q, 2.762323818426891, 1);
  sqcRZGate(q, 1.289565973965429, 1);
  sqcRYGate(q, -0.006099185937285867, 2);
  sqcRZGate(q, -2.3061924647178595, 2);
  sqcRYGate(q, 1.9942873216524624, 3);
  sqcRZGate(q, -0.02957614361337768, 3);
  sqcRYGate(q, -2.5885819953590152, 4);
  sqcRZGate(q, 3.1372765937484086, 4);
  sqcRYGate(q, -3.1392163115829184, 5);
  sqcRZGate(q, 0.8907576618117378, 5);
  sqcRYGate(q, -2.77550037342634, 6);
  sqcRZGate(q, 2.4251943211728486, 6);
  sqcRYGate(q, 2.748636698009787, 7);
  sqcRZGate(q, 0.5368506738487825, 7);
  sqcRYGate(q, -0.0151120863119287, 8);
  sqcRZGate(q, 1.4214620811886192, 8);
  sqcRYGate(q, -0.812537401370739, 9);
  sqcRZGate(q, 1.0581673498913045, 9);
  sqcRYGate(q, -2.9905669447302894, 10);
  sqcRZGate(q, 0.6364520876321194, 10);
  sqcRYGate(q, 1.2435301204042792, 11);
  sqcRZGate(q, 3.100816586526216, 11);
  sqcRYGate(q, 1.5208959095612125, 12);
  sqcRZGate(q, 2.3115124249203407, 12);
  sqcRYGate(q, 0.04746551643994406, 13);
  sqcRZGate(q, 1.5315846072424804, 13);
  sqcRYGate(q, -3.136368844436552, 14);
  sqcRZGate(q, 0.2601755159075463, 14);
  sqcRYGate(q, -1.2856388627079598, 15);
  sqcRZGate(q, -2.847621748202237, 15);
  sqcRYGate(q, -0.28049253022766124, 16);
  sqcRZGate(q, 2.2534266596693984, 16);
  sqcRYGate(q, -1.3539276241962046, 17);
  sqcRZGate(q, -3.0142070816597912, 17);
  sqcRYGate(q, 2.835808673802804, 18);
  sqcRZGate(q, 2.81857583364264, 18);
  sqcRYGate(q, 1.2999126472164941, 19);
  sqcRZGate(q, -0.4262525823053682, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.2359099015823176, 0);
  sqcRZGate(q, -2.7097410325318894, 0);
  sqcRYGate(q, -1.5223200358671893, 1);
  sqcRZGate(q, 0.33357766231667973, 1);
  sqcRYGate(q, 0.13733966038757206, 2);
  sqcRZGate(q, -0.37307067280751444, 2);
  sqcRYGate(q, 1.3228114232899262, 3);
  sqcRZGate(q, 2.672069159716373, 3);
  sqcRYGate(q, 0.3836600683148095, 4);
  sqcRZGate(q, 0.003999522627829322, 4);
  sqcRYGate(q, -3.1386648565473023, 5);
  sqcRZGate(q, -1.5489133150099823, 5);
  sqcRYGate(q, -2.121021828266272, 6);
  sqcRZGate(q, 7.484480282826667e-05, 6);
  sqcRYGate(q, -1.1040505321584262, 7);
  sqcRZGate(q, -0.0029999858596357117, 7);
  sqcRYGate(q, 0.21137129750686778, 8);
  sqcRZGate(q, -0.04342748110897077, 8);
  sqcRYGate(q, 3.135518128318699, 9);
  sqcRZGate(q, 0.9208895540627892, 9);
  sqcRYGate(q, -0.0015007567465419316, 10);
  sqcRZGate(q, 2.6458429671812125, 10);
  sqcRYGate(q, -3.136418407806234, 11);
  sqcRZGate(q, -2.3064618318150303, 11);
  sqcRYGate(q, -0.02031026621973897, 12);
  sqcRZGate(q, 0.6321035924869642, 12);
  sqcRYGate(q, 0.493253421677446, 13);
  sqcRZGate(q, -1.838853762465923, 13);
  sqcRYGate(q, -1.5669983409109858, 14);
  sqcRZGate(q, -1.245964377339102, 14);
  sqcRYGate(q, -2.82762171773555, 15);
  sqcRZGate(q, -2.1326000704884525, 15);
  sqcRYGate(q, -3.074436122241749, 16);
  sqcRZGate(q, 1.5691089046907516, 16);
  sqcRYGate(q, -1.7203327902483307, 17);
  sqcRZGate(q, -1.4488675273779155, 17);
  sqcRYGate(q, -0.035884159261660116, 18);
  sqcRZGate(q, -1.3025639441235035, 18);
  sqcRYGate(q, 2.1896788793595094, 19);
  sqcRZGate(q, -0.9588590414652832, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.0223293298508542, 0);
  sqcRZGate(q, -0.8581833355810854, 0);
  sqcRYGate(q, -2.1275100238593945, 1);
  sqcRZGate(q, 2.110706724849191, 1);
  sqcRYGate(q, 0.014221739064011314, 2);
  sqcRZGate(q, -1.6514669057535556, 2);
  sqcRYGate(q, -3.125635382753377, 3);
  sqcRZGate(q, -1.7732573299874286, 3);
  sqcRYGate(q, -1.473605188438115, 4);
  sqcRZGate(q, 2.390688879783884, 4);
  sqcRYGate(q, 1.484799493034747, 5);
  sqcRZGate(q, 1.9833603950322833, 5);
  sqcRYGate(q, -0.8434226084108065, 6);
  sqcRZGate(q, -0.0003542071415440419, 6);
  sqcRYGate(q, 1.4280075554252951, 7);
  sqcRZGate(q, -0.49013776781264395, 7);
  sqcRYGate(q, 0.2380063630907852, 8);
  sqcRZGate(q, -3.1282103933026093, 8);
  sqcRYGate(q, -0.9326405002456186, 9);
  sqcRZGate(q, 1.44636111154574, 9);
  sqcRYGate(q, 1.7237651354772225, 10);
  sqcRZGate(q, -1.5944836681719323, 10);
  sqcRYGate(q, 0.526437775853746, 11);
  sqcRZGate(q, -1.1471055633432004, 11);
  sqcRYGate(q, -0.7814094895506178, 12);
  sqcRZGate(q, -0.13803456870107933, 12);
  sqcRYGate(q, 1.5735388051539774, 13);
  sqcRZGate(q, -1.129440978005572, 13);
  sqcRYGate(q, 1.7761935101828374, 14);
  sqcRZGate(q, 3.135336674453755, 14);
  sqcRYGate(q, 3.1055525805424598, 15);
  sqcRZGate(q, 0.7872092345173969, 15);
  sqcRYGate(q, 1.8190212292469359, 16);
  sqcRZGate(q, 0.08080776911519738, 16);
  sqcRYGate(q, -1.89067937190035, 17);
  sqcRZGate(q, 1.3621412948019032, 17);
  sqcRYGate(q, -2.07668417549507, 18);
  sqcRZGate(q, -0.8593775030012009, 18);
  sqcRYGate(q, -2.1116275790249146, 19);
  sqcRZGate(q, 2.271825634318465, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.090190271878196, 0);
  sqcRZGate(q, -1.606255949114046, 0);
  sqcRYGate(q, -1.9087953010165906, 1);
  sqcRZGate(q, -0.8578712826892726, 1);
  sqcRYGate(q, -2.977632719856419, 2);
  sqcRZGate(q, -1.924854689064503, 2);
  sqcRYGate(q, -1.6563600195639332, 3);
  sqcRZGate(q, 1.6880124872672138, 3);
  sqcRYGate(q, -0.012023877434680084, 4);
  sqcRZGate(q, 2.0941135661863726, 4);
  sqcRYGate(q, 2.808497681961688, 5);
  sqcRZGate(q, 0.433457120594376, 5);
  sqcRYGate(q, 1.4823513381463993, 6);
  sqcRZGate(q, -3.127430622365698, 6);
  sqcRYGate(q, -3.1306799582103984, 7);
  sqcRZGate(q, 2.661628060344569, 7);
  sqcRYGate(q, -1.0565498866438396, 8);
  sqcRZGate(q, 2.7957277861353793, 8);
  sqcRYGate(q, -1.5586951479716447, 9);
  sqcRZGate(q, -2.2462710619777777, 9);
  sqcRYGate(q, -1.2759925599319875, 10);
  sqcRZGate(q, -3.0956341845634228, 10);
  sqcRYGate(q, -0.001195778400228775, 11);
  sqcRZGate(q, -1.6689127191684194, 11);
  sqcRYGate(q, 0.007339152994831899, 12);
  sqcRZGate(q, 2.845765502786659, 12);
  sqcRYGate(q, -3.131720209740736, 13);
  sqcRZGate(q, -2.1996298217653365, 13);
  sqcRYGate(q, -1.4811373627974271, 14);
  sqcRZGate(q, 0.8817547710611686, 14);
  sqcRYGate(q, 3.14083183894061, 15);
  sqcRZGate(q, -3.057636821871487, 15);
  sqcRYGate(q, 1.629194399517858, 16);
  sqcRZGate(q, -0.168452264778284, 16);
  sqcRYGate(q, -0.39765604681219346, 17);
  sqcRZGate(q, 2.421661451416846, 17);
  sqcRYGate(q, 2.851457704225328, 18);
  sqcRZGate(q, 3.016111365641181, 18);
  sqcRYGate(q, 0.41161017018681445, 19);
  sqcRZGate(q, 0.48139785404192725, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.6731989195589994, 0);
  sqcRZGate(q, 2.599545876362373, 0);
  sqcRYGate(q, -2.040782928210285, 1);
  sqcRZGate(q, -1.8380497685087067, 1);
  sqcRYGate(q, -0.05224625460914864, 2);
  sqcRZGate(q, 1.6778820825860443, 2);
  sqcRYGate(q, 3.134589593397363, 3);
  sqcRZGate(q, 2.83965223891858, 3);
  sqcRYGate(q, -3.140656610941193, 4);
  sqcRZGate(q, 2.9118172724064513, 4);
  sqcRYGate(q, 1.5718810201888864, 5);
  sqcRZGate(q, 1.9504329321859837, 5);
  sqcRYGate(q, 0.01361435169580627, 6);
  sqcRZGate(q, -1.5205413743758658, 6);
  sqcRYGate(q, -0.7182485514699425, 7);
  sqcRZGate(q, -0.010167459768959108, 7);
  sqcRYGate(q, 0.0006921440003079201, 8);
  sqcRZGate(q, 0.3459647803213359, 8);
  sqcRYGate(q, -3.136330895180572, 9);
  sqcRZGate(q, 2.335246290404622, 9);
  sqcRYGate(q, 0.022493340687018602, 10);
  sqcRZGate(q, -2.6875583811674577, 10);
  sqcRYGate(q, -3.1207228414407155, 11);
  sqcRZGate(q, 2.7904450918939685, 11);
  sqcRYGate(q, 1.3977795328059592, 12);
  sqcRZGate(q, 0.700579796306665, 12);
  sqcRYGate(q, -3.098450006237211, 13);
  sqcRZGate(q, -2.7726470374058745, 13);
  sqcRYGate(q, 1.4765840681606903, 14);
  sqcRZGate(q, 1.7184893306230253, 14);
  sqcRYGate(q, -1.5229321998026233, 15);
  sqcRZGate(q, -2.83672687288613, 15);
  sqcRYGate(q, 1.9260530433265846, 16);
  sqcRZGate(q, -1.526440049923778, 16);
  sqcRYGate(q, -2.4451252765373943, 17);
  sqcRZGate(q, 0.7957353150698303, 17);
  sqcRYGate(q, 0.9651157799004605, 18);
  sqcRZGate(q, 0.1770445311748627, 18);
  sqcRYGate(q, 2.9410859520675405, 19);
  sqcRZGate(q, 1.7338320985878992, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.5889785872496294, 0);
  sqcRZGate(q, 1.7715876761009284, 0);
  sqcRYGate(q, 1.7449904884407452, 1);
  sqcRZGate(q, 0.4711006098879897, 1);
  sqcRYGate(q, -0.18567297657751414, 2);
  sqcRZGate(q, -0.1215236117889882, 2);
  sqcRYGate(q, 1.7806349491151796, 3);
  sqcRZGate(q, 1.2237382336774347, 3);
  sqcRYGate(q, -1.570059924133842, 4);
  sqcRZGate(q, 1.5627439437857282, 4);
  sqcRYGate(q, -1.461496087771136, 5);
  sqcRZGate(q, 1.8418559983372245, 5);
  sqcRYGate(q, -3.141042323488024, 6);
  sqcRZGate(q, 1.454722460601747, 6);
  sqcRYGate(q, -0.8280796643248206, 7);
  sqcRZGate(q, 2.1779548220564084, 7);
  sqcRYGate(q, -1.8832020703579697, 8);
  sqcRZGate(q, -3.1413555319489843, 8);
  sqcRYGate(q, 0.05272168317650917, 9);
  sqcRZGate(q, -1.4400655202476162, 9);
  sqcRYGate(q, -0.09812408837626485, 10);
  sqcRZGate(q, 2.6526320858822805, 10);
  sqcRYGate(q, -0.5747286170954631, 11);
  sqcRZGate(q, 0.0006837744404348811, 11);
  sqcRYGate(q, -1.5197383856903741, 12);
  sqcRZGate(q, 1.8785293544493655, 12);
  sqcRYGate(q, 0.1320062488195529, 13);
  sqcRZGate(q, 1.6715150602920126, 13);
  sqcRYGate(q, 3.1325026269398144, 14);
  sqcRZGate(q, 2.955413457333898, 14);
  sqcRYGate(q, -0.47019356745157825, 15);
  sqcRZGate(q, 0.5630313924686003, 15);
  sqcRYGate(q, -3.1025656535478543, 16);
  sqcRZGate(q, -2.5962241032374194, 16);
  sqcRYGate(q, -0.07423766018956542, 17);
  sqcRZGate(q, -1.2624565032478445, 17);
  sqcRYGate(q, 1.4246728953085754, 18);
  sqcRZGate(q, -0.013330397729250933, 18);
  sqcRYGate(q, -2.1105579067431335, 19);
  sqcRZGate(q, -0.5661105128124932, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5718240436307538, 0);
  sqcRZGate(q, 1.6416577821561242, 0);
  sqcRYGate(q, -0.4613192204018626, 1);
  sqcRZGate(q, 1.3575677019107422, 1);
  sqcRYGate(q, -1.3888669289992324, 2);
  sqcRZGate(q, 3.0710915328147803, 2);
  sqcRYGate(q, 3.1400814342363788, 3);
  sqcRZGate(q, 0.5042824272498798, 3);
  sqcRYGate(q, 1.553917202455235, 4);
  sqcRZGate(q, 1.5696806650330855, 4);
  sqcRYGate(q, -1.570520148258285, 5);
  sqcRZGate(q, -1.5746170452779737, 5);
  sqcRYGate(q, 0.005112543658296609, 6);
  sqcRZGate(q, -1.4029612040951127, 6);
  sqcRYGate(q, -0.0014363389632983687, 7);
  sqcRZGate(q, 2.8257747360443983, 7);
  sqcRYGate(q, -2.0520007007829317, 8);
  sqcRZGate(q, -3.141399550076069, 8);
  sqcRYGate(q, 1.0072618704719583, 9);
  sqcRZGate(q, 3.138232819103193, 9);
  sqcRYGate(q, 1.7153069022583742, 10);
  sqcRZGate(q, -3.139185214449392, 10);
  sqcRYGate(q, 0.5925768559780955, 11);
  sqcRZGate(q, -3.140725994711022, 11);
  sqcRYGate(q, -3.1411359566722727, 12);
  sqcRZGate(q, 1.8602448452117697, 12);
  sqcRYGate(q, 1.8251201335751497, 13);
  sqcRZGate(q, -0.006256898206222379, 13);
  sqcRYGate(q, -0.26801296880072245, 14);
  sqcRZGate(q, -2.5815110003214783, 14);
  sqcRYGate(q, 1.7230332621949143, 15);
  sqcRZGate(q, -2.7763785472148945, 15);
  sqcRYGate(q, 3.127461743914994, 16);
  sqcRZGate(q, -2.640203157677434, 16);
  sqcRYGate(q, -1.3788303564804476, 17);
  sqcRZGate(q, 0.11120193101058275, 17);
  sqcRYGate(q, -1.3622299424230342, 18);
  sqcRZGate(q, 2.0281977358956116, 18);
  sqcRYGate(q, -0.1330363252242264, 19);
  sqcRZGate(q, -0.2785017646466921, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.31121622212583333, 0);
  sqcRZGate(q, -0.062212190521522714, 0);
  sqcRYGate(q, 2.9960899014401834, 1);
  sqcRZGate(q, 0.26592946324004174, 1);
  sqcRYGate(q, -0.0506383499964889, 2);
  sqcRZGate(q, -0.04706373626500729, 2);
  sqcRYGate(q, -3.141332133172564, 3);
  sqcRZGate(q, 2.6460959921104155, 3);
  sqcRYGate(q, -0.00020403461045192487, 4);
  sqcRZGate(q, -1.5699313540168618, 4);
  sqcRYGate(q, 1.8777421742914882, 5);
  sqcRZGate(q, 1.2213984321277005, 5);
  sqcRYGate(q, -0.056305870925066344, 6);
  sqcRZGate(q, -1.4177827663616709, 6);
  sqcRYGate(q, -0.0259159180940312, 7);
  sqcRZGate(q, -1.8597160422526053, 7);
  sqcRYGate(q, 1.8418224144692643, 8);
  sqcRZGate(q, -0.00036100512266301626, 8);
  sqcRYGate(q, 1.5593013989968663, 9);
  sqcRZGate(q, 3.1326079469630064, 9);
  sqcRYGate(q, -1.052317502122908, 10);
  sqcRZGate(q, -1.3877639286326868, 10);
  sqcRYGate(q, -1.6647100179062129, 11);
  sqcRZGate(q, -0.7171704890902756, 11);
  sqcRYGate(q, 0.013045318671927271, 12);
  sqcRZGate(q, 0.02198834578881126, 12);
  sqcRYGate(q, 1.3123136528559645, 13);
  sqcRZGate(q, 1.3874573659285792, 13);
  sqcRYGate(q, -3.092929566039887, 14);
  sqcRZGate(q, 0.497725713865983, 14);
  sqcRYGate(q, -2.9766314598617303, 15);
  sqcRZGate(q, -0.004007289275867718, 15);
  sqcRYGate(q, 1.6218274672856101, 16);
  sqcRZGate(q, 1.5709881914352124, 16);
  sqcRYGate(q, -0.434784913495196, 17);
  sqcRZGate(q, -1.6321897491412125, 17);
  sqcRYGate(q, 3.075607673061719, 18);
  sqcRZGate(q, 2.0522565756525877, 18);
  sqcRYGate(q, 2.9038225387834933, 19);
  sqcRZGate(q, -1.4908564513502134, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.4803108509000373, 0);
  sqcRZGate(q, -3.131649950174322, 0);
  sqcRYGate(q, 1.6354472905673372, 1);
  sqcRZGate(q, -1.318528762447504, 1);
  sqcRYGate(q, 0.46823521872052637, 2);
  sqcRZGate(q, -3.024133860509052, 2);
  sqcRYGate(q, 0.00020288999373363478, 3);
  sqcRZGate(q, 1.1859226367694689, 3);
  sqcRYGate(q, 1.5674031726095077, 4);
  sqcRZGate(q, -1.563883879287578, 4);
  sqcRYGate(q, 0.0023781853944173648, 5);
  sqcRZGate(q, -2.7696649668016757, 5);
  sqcRYGate(q, 3.1394576556049514, 6);
  sqcRZGate(q, -1.4293923859546078, 6);
  sqcRYGate(q, 0.9950231332244392, 7);
  sqcRZGate(q, 0.3450019237200799, 7);
  sqcRYGate(q, -1.565815348613107, 8);
  sqcRZGate(q, 0.0005943954302698735, 8);
  sqcRYGate(q, 0.6533929940101846, 9);
  sqcRZGate(q, -3.099485820521102, 9);
  sqcRYGate(q, -0.00018682213351110002, 10);
  sqcRZGate(q, -1.7429721180231197, 10);
  sqcRYGate(q, 0.13119652651110325, 11);
  sqcRZGate(q, -2.390931577714948, 11);
  sqcRYGate(q, -1.5782381221251012, 12);
  sqcRZGate(q, -3.1414103260034114, 12);
  sqcRYGate(q, -0.11392073414524528, 13);
  sqcRZGate(q, 1.7275555486809318, 13);
  sqcRYGate(q, -2.9844345413904425, 14);
  sqcRZGate(q, 3.0478178985489706, 14);
  sqcRYGate(q, 3.076996040942582, 15);
  sqcRZGate(q, -0.19397425309061844, 15);
  sqcRYGate(q, -1.5702042636869826, 16);
  sqcRZGate(q, -0.17595704691761505, 16);
  sqcRYGate(q, -1.486203236569347, 17);
  sqcRZGate(q, -1.5823139852636188, 17);
  sqcRYGate(q, -2.0728944011827686, 18);
  sqcRZGate(q, -1.4808462294985407, 18);
  sqcRYGate(q, 3.055701952254199, 19);
  sqcRZGate(q, 1.9076866812747753, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.5513114007041714, 0);
  sqcRZGate(q, 0.11700692198700581, 0);
  sqcRYGate(q, 0.4647345729489576, 1);
  sqcRZGate(q, -3.1004295989664157, 1);
  sqcRYGate(q, 1.351029660846673, 2);
  sqcRZGate(q, -3.1370211176183584, 2);
  sqcRYGate(q, -1.5584383635259336, 3);
  sqcRZGate(q, 1.141646448094641, 3);
  sqcRYGate(q, 1.5243596900832783, 4);
  sqcRZGate(q, 0.7999118454478474, 4);
  sqcRYGate(q, -0.31747781681371956, 5);
  sqcRZGate(q, 1.5284950434948286, 5);
  sqcRYGate(q, 2.49896433411875, 6);
  sqcRZGate(q, -1.5996702855225164, 6);
  sqcRYGate(q, -1.911403741687404, 7);
  sqcRZGate(q, -0.9398166824123821, 7);
  sqcRYGate(q, -1.6091551185887027, 8);
  sqcRZGate(q, 3.134498910648298, 8);
  sqcRYGate(q, 0.21681430588890108, 9);
  sqcRZGate(q, 3.1120697694108586, 9);
  sqcRYGate(q, 2.964408908029565, 10);
  sqcRZGate(q, 0.012128436225907225, 10);
  sqcRYGate(q, -1.5661903770853225, 11);
  sqcRZGate(q, 3.1414474623916004, 11);
  sqcRYGate(q, -1.5667370653751007, 12);
  sqcRZGate(q, -3.1315706746338776, 12);
  sqcRYGate(q, 1.649418274695032, 13);
  sqcRZGate(q, 3.103721403829977, 13);
  sqcRYGate(q, -2.475355796889291, 14);
  sqcRZGate(q, -0.04090506908802993, 14);
  sqcRYGate(q, -4.7962436440995065e-05, 15);
  sqcRZGate(q, 1.3476852575078682, 15);
  sqcRYGate(q, 3.1404699459172503, 16);
  sqcRZGate(q, -0.15519837784397514, 16);
  sqcRYGate(q, -1.6179956057997427, 17);
  sqcRZGate(q, -1.5228968171904746, 17);
  sqcRYGate(q, -1.5348140426344852, 18);
  sqcRZGate(q, -0.03052829485130904, 18);
  sqcRYGate(q, -0.12019813970568372, 19);
  sqcRZGate(q, -1.96378699091635, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.1428372139475889, 0);
  sqcRZGate(q, 0.9982444624750082, 0);
  sqcRYGate(q, 2.4679578228743986, 1);
  sqcRZGate(q, 3.0367391571773794, 1);
  sqcRYGate(q, 1.5577658180665617, 2);
  sqcRZGate(q, -1.4479493484815498, 2);
  sqcRYGate(q, -3.1410953619795023, 3);
  sqcRZGate(q, -2.799749358498273, 3);
  sqcRYGate(q, 3.1402426414863487, 4);
  sqcRZGate(q, 0.8000945307118853, 4);
  sqcRYGate(q, -1.571856569880201, 5);
  sqcRZGate(q, 1.5717313227580103, 5);
  sqcRYGate(q, 3.049966180595438, 6);
  sqcRZGate(q, -1.7098962209668214, 6);
  sqcRYGate(q, 3.1242057600005984, 7);
  sqcRZGate(q, 0.6151714683929905, 7);
  sqcRYGate(q, -0.06291760055934414, 8);
  sqcRZGate(q, 0.0077856119850245875, 8);
  sqcRYGate(q, -2.2114689627208746, 9);
  sqcRZGate(q, -3.1384799868294913, 9);
  sqcRYGate(q, 1.4388202684976628, 10);
  sqcRZGate(q, -1.144499739777437, 10);
  sqcRYGate(q, 1.5352506548837799, 11);
  sqcRZGate(q, -1.6632450725937769, 11);
  sqcRYGate(q, -0.11869560772539511, 12);
  sqcRZGate(q, 0.275377254151743, 12);
  sqcRYGate(q, 1.5292215322035032, 13);
  sqcRZGate(q, -1.5510680169571236, 13);
  sqcRYGate(q, -1.4150609642694243, 14);
  sqcRZGate(q, 0.0006109607383162284, 14);
  sqcRYGate(q, 2.3326191785774952, 15);
  sqcRZGate(q, -3.138340561364454, 15);
  sqcRYGate(q, 1.5707883931225384, 16);
  sqcRZGate(q, 1.5691117921013369, 16);
  sqcRYGate(q, 1.5944843903630903, 17);
  sqcRZGate(q, -3.1237253051581506, 17);
  sqcRYGate(q, -1.5427743233264715, 18);
  sqcRZGate(q, 3.138656369852907, 18);
  sqcRYGate(q, -0.04219736978768195, 19);
  sqcRZGate(q, -1.822297049213649, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.0026578359450473853, 0);
  sqcRZGate(q, 2.075742874514839, 0);
  sqcRYGate(q, -1.6662881181741769, 1);
  sqcRZGate(q, -0.3834997272054207, 1);
  sqcRYGate(q, 0.7326210739931245, 2);
  sqcRZGate(q, 1.2092056591239526, 2);
  sqcRYGate(q, -2.1493482267291357, 3);
  sqcRZGate(q, -2.1591953787121296, 3);
  sqcRYGate(q, -1.5706381556931666, 4);
  sqcRZGate(q, -1.9771893514890952, 4);
  sqcRYGate(q, 1.5624025043103287, 5);
  sqcRZGate(q, 0.024433714634398914, 5);
  sqcRYGate(q, 0.002485906686121238, 6);
  sqcRZGate(q, 1.6808818325991504, 6);
  sqcRYGate(q, -2.8127624028397973, 7);
  sqcRZGate(q, -1.4605222328334873, 7);
  sqcRYGate(q, -0.7067961589292612, 8);
  sqcRZGate(q, -0.0005419205840098353, 8);
  sqcRYGate(q, -0.6082718705344377, 9);
  sqcRZGate(q, 2.595199312364353, 9);
  sqcRYGate(q, -1.4122667161641194, 10);
  sqcRZGate(q, -0.4201539808646152, 10);
  sqcRYGate(q, -1.6072037781269934, 11);
  sqcRZGate(q, 0.4377300767312518, 11);
  sqcRYGate(q, 0.00973450166894997, 12);
  sqcRZGate(q, -1.2875823239096222, 12);
  sqcRYGate(q, -3.1403146630828487, 13);
  sqcRZGate(q, -1.5538799940004606, 13);
  sqcRYGate(q, -1.506466704817898, 14);
  sqcRZGate(q, -3.141528982434106, 14);
  sqcRYGate(q, 1.6308987866197548, 15);
  sqcRZGate(q, 0.00014618587411696637, 15);
  sqcRYGate(q, -1.6626089285204841, 16);
  sqcRZGate(q, -3.140670430825954, 16);
  sqcRYGate(q, 0.5980683426954726, 17);
  sqcRZGate(q, 0.04557319296069516, 17);
  sqcRYGate(q, 1.5322433146900982, 18);
  sqcRZGate(q, 1.5456729263692093, 18);
  sqcRYGate(q, 2.3648034435804965, 19);
  sqcRZGate(q, -0.01228924590977106, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5958619995817964, 0);
  sqcRZGate(q, 1.5708486249859952, 0);
  sqcRYGate(q, 0.0035220726083384866, 1);
  sqcRZGate(q, 1.9487917757886946, 1);
  sqcRYGate(q, 3.1387765957003477, 2);
  sqcRZGate(q, -1.7666945092509971, 2);
  sqcRYGate(q, -3.139185116028123, 3);
  sqcRZGate(q, 3.0398304835438426, 3);
  sqcRYGate(q, 3.1414230185240726, 4);
  sqcRZGate(q, -2.06498132017271, 4);
  sqcRYGate(q, -1.5708732538150336, 5);
  sqcRZGate(q, -3.1290225563447893, 5);
  sqcRYGate(q, 1.6732835528120307, 6);
  sqcRZGate(q, 1.5710333231633467, 6);
  sqcRYGate(q, -2.562977503728204, 7);
  sqcRZGate(q, 1.5896893218264978, 7);
  sqcRYGate(q, 1.5173141429683454, 8);
  sqcRZGate(q, -1.5709708808692424, 8);
  sqcRYGate(q, -3.140997166404906, 9);
  sqcRZGate(q, 1.0262156587540288, 9);
  sqcRYGate(q, 0.001255115561505968, 10);
  sqcRZGate(q, -0.8163419543220043, 10);
  sqcRYGate(q, -3.1414399876586345, 11);
  sqcRZGate(q, -1.5145814116019236, 11);
  sqcRYGate(q, -0.00015922264159673458, 12);
  sqcRZGate(q, -0.5687680565500965, 12);
  sqcRYGate(q, -2.5594365962531382, 13);
  sqcRZGate(q, 1.568589644379812, 13);
  sqcRYGate(q, 1.2200462252796174, 14);
  sqcRZGate(q, 1.5705261585681152, 14);
  sqcRYGate(q, -2.581389686502329, 15);
  sqcRZGate(q, -1.5675930928522435, 15);
  sqcRYGate(q, -0.5938539277907944, 16);
  sqcRZGate(q, 1.57008491157765, 16);
  sqcRYGate(q, -2.654116736486408, 17);
  sqcRZGate(q, 1.5728428393479894, 17);
  sqcRYGate(q, 1.1962153681743017, 18);
  sqcRZGate(q, -1.6132640860799663, 18);
  sqcRYGate(q, -1.5671151054017392, 19);
  sqcRZGate(q, -0.7157540408504239, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5740149598242106, 0);
  sqcRZGate(q, -0.10631865550302008, 0);
  sqcRYGate(q, 1.558587945230025, 1);
  sqcRZGate(q, -0.22068782181475374, 1);
  sqcRYGate(q, -2.2988164108749287, 2);
  sqcRZGate(q, 1.6299526981152015, 2);
  sqcRYGate(q, -2.2099823833657277, 3);
  sqcRZGate(q, 0.3567835996301588, 3);
  sqcRYGate(q, -3.1144248190831387, 4);
  sqcRZGate(q, 1.2535231916356842, 4);
  sqcRYGate(q, -1.6564794530167766, 5);
  sqcRZGate(q, -2.3650237002163705, 5);
  sqcRYGate(q, 1.5698038154546872, 6);
  sqcRZGate(q, -0.2045889939668939, 6);
  sqcRYGate(q, 1.5658260091688811, 7);
  sqcRZGate(q, -0.7938760357980019, 7);
  sqcRYGate(q, -1.5710428683661366, 8);
  sqcRZGate(q, 1.2265660776365168, 8);
  sqcRYGate(q, 1.5582633513310178, 9);
  sqcRZGate(q, 2.3218736201043217, 9);
  sqcRYGate(q, -0.453135739384325, 10);
  sqcRZGate(q, -0.5895186103267871, 10);
  sqcRYGate(q, 3.0480786259298727, 11);
  sqcRZGate(q, 1.9661284448452125, 11);
  sqcRYGate(q, -1.5688263953048251, 12);
  sqcRZGate(q, 1.315647366372179, 12);
  sqcRYGate(q, -1.566832090366607, 13);
  sqcRZGate(q, 2.2549998097835307, 13);
  sqcRYGate(q, -1.571053241849583, 14);
  sqcRZGate(q, -0.26257025216357643, 14);
  sqcRYGate(q, -1.5692591023143332, 15);
  sqcRZGate(q, -2.554075882310931, 15);
  sqcRYGate(q, -1.569851216250501, 16);
  sqcRZGate(q, -1.7130331156985126, 16);
  sqcRYGate(q, -1.571556725859499, 17);
  sqcRZGate(q, 2.360503387901604, 17);
  sqcRYGate(q, 1.5649169351486851, 18);
  sqcRZGate(q, -0.22661992231933323, 18);
  sqcRYGate(q, -0.9853414536401468, 19);
  sqcRZGate(q, -1.5045501766940568, 19);

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
