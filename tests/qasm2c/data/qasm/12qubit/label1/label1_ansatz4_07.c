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

  sqcRYGate(q, 0.3546445467812367, 0);
  sqcRZGate(q, -2.7660682248167903, 0);
  sqcRYGate(q, 0.9199240184147159, 1);
  sqcRZGate(q, -2.792770024248972, 1);
  sqcRYGate(q, 0.002263460969346376, 2);
  sqcRZGate(q, 1.2940610376865649, 2);
  sqcRYGate(q, 2.842438511846706, 3);
  sqcRZGate(q, 0.5419144361517522, 3);
  sqcRYGate(q, -1.7080930759348965, 4);
  sqcRZGate(q, 0.6919073110835178, 4);
  sqcRYGate(q, 1.5142473433721373, 5);
  sqcRZGate(q, -0.06127751834179041, 5);
  sqcRYGate(q, 4.175119501148571e-05, 6);
  sqcRZGate(q, 1.0447336135210161, 6);
  sqcRYGate(q, 3.1415709471176285, 7);
  sqcRZGate(q, -2.4896228235231517, 7);
  sqcRYGate(q, -2.4203469493682794, 8);
  sqcRZGate(q, -1.183799019178599, 8);
  sqcRYGate(q, 0.5124977585894082, 9);
  sqcRZGate(q, -2.8405026155069386, 9);
  sqcRYGate(q, -0.26592738294055795, 10);
  sqcRZGate(q, -0.866279675797065, 10);
  sqcRYGate(q, -0.5909591771169832, 11);
  sqcRZGate(q, 2.579887185377375, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.33043333310253864, 0);
  sqcRZGate(q, 2.377608428582331, 0);
  sqcRYGate(q, -2.64792873327261, 1);
  sqcRZGate(q, 2.4617469419057176, 1);
  sqcRYGate(q, -1.5703749237735698, 2);
  sqcRZGate(q, -0.02600347093507516, 2);
  sqcRYGate(q, -0.32541639940160305, 3);
  sqcRZGate(q, -1.6214334546434372, 3);
  sqcRYGate(q, 2.99226351431242, 4);
  sqcRZGate(q, 0.004411007601648364, 4);
  sqcRYGate(q, 1.5084194506627648, 5);
  sqcRZGate(q, -2.4775519181845764, 5);
  sqcRYGate(q, 0.07653396862537347, 6);
  sqcRZGate(q, -2.8785358663703624, 6);
  sqcRYGate(q, 0.00011093297659048318, 7);
  sqcRZGate(q, -0.6725551652249395, 7);
  sqcRYGate(q, -2.264828472444294, 8);
  sqcRZGate(q, -2.4720369016544277, 8);
  sqcRYGate(q, -2.900406514869559, 9);
  sqcRZGate(q, 2.143320859015492, 9);
  sqcRYGate(q, -0.78688518012898, 10);
  sqcRZGate(q, 2.0048471265844077, 10);
  sqcRYGate(q, 1.0226496193367387, 11);
  sqcRZGate(q, -0.8210530193942898, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -3.1190904361735208, 0);
  sqcRZGate(q, 2.9165289644551255, 0);
  sqcRYGate(q, -1.554157945838843, 1);
  sqcRZGate(q, -0.4075282096040072, 1);
  sqcRYGate(q, -1.5819496563711262, 2);
  sqcRZGate(q, 0.8705149707432261, 2);
  sqcRYGate(q, 0.008945912198437432, 3);
  sqcRZGate(q, 0.10160961483471241, 3);
  sqcRYGate(q, -1.5777129788271675, 4);
  sqcRZGate(q, -3.073630106864551, 4);
  sqcRYGate(q, 1.5645414641974602, 5);
  sqcRZGate(q, -0.006322605929413916, 5);
  sqcRYGate(q, -2.317889234792462, 6);
  sqcRZGate(q, 1.6524062391945218, 6);
  sqcRYGate(q, -3.14035680077536, 7);
  sqcRZGate(q, 1.110275748701575, 7);
  sqcRYGate(q, -2.3723165970258537, 8);
  sqcRZGate(q, -1.1502476536264066, 8);
  sqcRYGate(q, -2.9779357301297638, 9);
  sqcRZGate(q, 2.9790896994280156, 9);
  sqcRYGate(q, 2.082165922291505, 10);
  sqcRZGate(q, 0.6072506972572435, 10);
  sqcRYGate(q, 2.5849090686158775, 11);
  sqcRZGate(q, 2.143887948582174, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.636699604184546, 0);
  sqcRZGate(q, 0.22560728822441978, 0);
  sqcRYGate(q, 1.032357215239701, 1);
  sqcRZGate(q, -0.1560710519679645, 1);
  sqcRYGate(q, -0.17669175773353096, 2);
  sqcRZGate(q, 1.837480972261262, 2);
  sqcRYGate(q, 3.120181783862398, 3);
  sqcRZGate(q, 0.076316273746877, 3);
  sqcRYGate(q, 1.5696120406092682, 4);
  sqcRZGate(q, 0.0014150521759344057, 4);
  sqcRYGate(q, 1.533562915608072, 5);
  sqcRZGate(q, 3.1404201783771115, 5);
  sqcRYGate(q, 1.7338421776767898, 6);
  sqcRZGate(q, 0.902778380508007, 6);
  sqcRYGate(q, -1.5709398567337738, 7);
  sqcRZGate(q, -1.723394691074405, 7);
  sqcRYGate(q, -2.10522118343558, 8);
  sqcRZGate(q, -2.7681409273668804, 8);
  sqcRYGate(q, 2.580054537931967, 9);
  sqcRZGate(q, 2.0171539499762114, 9);
  sqcRYGate(q, -1.2045279409691716, 10);
  sqcRZGate(q, 2.037324853015397, 10);
  sqcRYGate(q, 0.4936253888271525, 11);
  sqcRZGate(q, 0.34314600677329743, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 3.0705233675252925, 0);
  sqcRZGate(q, -3.0973669238679853, 0);
  sqcRYGate(q, 0.026714063735824745, 1);
  sqcRZGate(q, 1.5129036390658115, 1);
  sqcRYGate(q, 3.1393242483361976, 2);
  sqcRZGate(q, 1.7865085031845331, 2);
  sqcRYGate(q, 0.004497580649765525, 3);
  sqcRZGate(q, 2.5892565567966823, 3);
  sqcRYGate(q, 1.703209318875532, 4);
  sqcRZGate(q, 0.32314143255489114, 4);
  sqcRYGate(q, 1.433667447343261, 5);
  sqcRZGate(q, -1.5702596537085785, 5);
  sqcRYGate(q, 0.004693375210466755, 6);
  sqcRZGate(q, -2.3809105553157934, 6);
  sqcRYGate(q, -0.049257628950294396, 7);
  sqcRZGate(q, 0.15278521117601865, 7);
  sqcRYGate(q, 0.001726053945740727, 8);
  sqcRZGate(q, -0.5414549504117678, 8);
  sqcRYGate(q, -3.140745058202984, 9);
  sqcRZGate(q, -0.9743485830846186, 9);
  sqcRYGate(q, -1.7523324705380736, 10);
  sqcRZGate(q, -2.9265485940963396, 10);
  sqcRYGate(q, -1.8338011281970672, 11);
  sqcRZGate(q, 0.7167823811295109, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.20949340263064, 0);
  sqcRZGate(q, -0.53877048177963, 0);
  sqcRYGate(q, 2.1073974930369106, 1);
  sqcRZGate(q, 0.3807277105038205, 1);
  sqcRYGate(q, 0.5113547129777044, 2);
  sqcRZGate(q, -2.1836009872524635, 2);
  sqcRYGate(q, 0.0011558687839583466, 3);
  sqcRZGate(q, -1.0537662259056926, 3);
  sqcRYGate(q, -0.030260121162288378, 4);
  sqcRZGate(q, 1.2521858150056773, 4);
  sqcRYGate(q, -1.5035611993322913, 5);
  sqcRZGate(q, -3.115613604550504, 5);
  sqcRYGate(q, 1.4647720535272901, 6);
  sqcRZGate(q, 2.6919750706538292, 6);
  sqcRYGate(q, -1.2540864843663715, 7);
  sqcRZGate(q, 1.5757482766148874, 7);
  sqcRYGate(q, -0.7484453206098155, 8);
  sqcRZGate(q, 2.853474247624211, 8);
  sqcRYGate(q, -2.76628257602716, 9);
  sqcRZGate(q, -1.1472435935824303, 9);
  sqcRYGate(q, -1.4357611457920192, 10);
  sqcRZGate(q, -2.6475433031283653, 10);
  sqcRYGate(q, -0.6896236444491419, 11);
  sqcRZGate(q, -1.5923838554553282, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -3.1092291524660123, 0);
  sqcRZGate(q, -2.0116462495558864, 0);
  sqcRYGate(q, -1.586401069684569, 1);
  sqcRZGate(q, -2.9423832994712282, 1);
  sqcRYGate(q, -0.1472457678810981, 2);
  sqcRZGate(q, 2.988096224624448, 2);
  sqcRYGate(q, -2.171507475755247, 3);
  sqcRZGate(q, 1.992514878807331, 3);
  sqcRYGate(q, 0.6674141688214164, 4);
  sqcRZGate(q, -0.004840460750504151, 4);
  sqcRYGate(q, 1.5721609821389464, 5);
  sqcRZGate(q, 1.7437456380471799, 5);
  sqcRYGate(q, -1.5602749833592764, 6);
  sqcRZGate(q, -0.19351307052040748, 6);
  sqcRYGate(q, -0.23097982463790157, 7);
  sqcRZGate(q, 1.8345171169383498, 7);
  sqcRYGate(q, 3.155417282269259e-05, 8);
  sqcRZGate(q, -0.32753485901204127, 8);
  sqcRYGate(q, 1.5696893494764264, 9);
  sqcRZGate(q, -0.12425206582676827, 9);
  sqcRYGate(q, 2.629933740916852, 10);
  sqcRZGate(q, -2.007838189075759, 10);
  sqcRYGate(q, -1.0252342290254586, 11);
  sqcRZGate(q, 0.0003805115983768203, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 3.1392503912382703, 0);
  sqcRZGate(q, 1.3825937170995815, 0);
  sqcRYGate(q, -1.580390356257757, 1);
  sqcRZGate(q, -1.5750297218877725, 1);
  sqcRYGate(q, 2.311330441543922, 2);
  sqcRZGate(q, -1.16165579049701, 2);
  sqcRYGate(q, -1.0474694527098771, 3);
  sqcRZGate(q, 1.6421004513203954, 3);
  sqcRYGate(q, -2.866869300692671, 4);
  sqcRZGate(q, 0.0025694198068711366, 4);
  sqcRYGate(q, 3.139836649716454, 5);
  sqcRZGate(q, 0.2930843840002467, 5);
  sqcRYGate(q, 0.002107676009057967, 6);
  sqcRZGate(q, -2.6836530112629973, 6);
  sqcRYGate(q, -0.003933090817865932, 7);
  sqcRZGate(q, -1.8338896324292797, 7);
  sqcRYGate(q, 3.1411251615625577, 8);
  sqcRZGate(q, -0.8863265316602206, 8);
  sqcRYGate(q, -3.1403067508836693, 9);
  sqcRZGate(q, 3.0155426529185685, 9);
  sqcRYGate(q, 1.5741250245618719, 10);
  sqcRZGate(q, 1.5588843350016388, 10);
  sqcRYGate(q, 1.5724378336702924, 11);
  sqcRZGate(q, -1.5705132220361873, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 3.1086300127496393, 0);
  sqcRZGate(q, -1.400355966922225, 0);
  sqcRYGate(q, 0.5641129360971393, 1);
  sqcRZGate(q, 1.5723786633319456, 1);
  sqcRYGate(q, -3.140344388963686, 2);
  sqcRZGate(q, 2.1717396163130815, 2);
  sqcRYGate(q, -3.1411495953524833, 3);
  sqcRZGate(q, -1.094732064463367, 3);
  sqcRYGate(q, -2.9736431393188405, 4);
  sqcRZGate(q, 1.573519592727158, 4);
  sqcRYGate(q, -0.011080708951946683, 5);
  sqcRZGate(q, 3.019015437875688, 5);
  sqcRYGate(q, 1.5867489339128733, 6);
  sqcRZGate(q, -0.5090104416503795, 6);
  sqcRYGate(q, -2.888301299621208, 7);
  sqcRZGate(q, 0.011476351753709807, 7);
  sqcRYGate(q, -3.1406739345661636, 8);
  sqcRZGate(q, -2.781572684416529, 8);
  sqcRYGate(q, -1.5734062394109252, 9);
  sqcRZGate(q, 2.7804122638431026, 9);
  sqcRYGate(q, 2.387047814982182, 10);
  sqcRZGate(q, 1.556651891858282, 10);
  sqcRYGate(q, 1.8723804570257145, 11);
  sqcRZGate(q, 1.5591367937723764, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.00214350137763919, 0);
  sqcRZGate(q, -1.0776106771932383, 0);
  sqcRYGate(q, 1.5613318962681708, 1);
  sqcRZGate(q, 2.946953367535337, 1);
  sqcRYGate(q, -2.3328461268560217, 2);
  sqcRZGate(q, -1.5880875145188065, 2);
  sqcRYGate(q, 1.6504276884405726, 3);
  sqcRZGate(q, 2.2458542992915205, 3);
  sqcRYGate(q, 1.5713262088102753, 4);
  sqcRZGate(q, -1.224593889715952, 4);
  sqcRYGate(q, -1.5966759863790658, 5);
  sqcRZGate(q, -3.1399686781483087, 5);
  sqcRYGate(q, -0.0002377977554459676, 6);
  sqcRZGate(q, 2.1706554901179884, 6);
  sqcRYGate(q, -0.012545112370909273, 7);
  sqcRZGate(q, -0.004099721387786572, 7);
  sqcRYGate(q, -0.057361267263330226, 8);
  sqcRZGate(q, -0.5683023333966837, 8);
  sqcRYGate(q, -0.0265510222269576, 9);
  sqcRZGate(q, 0.16610888710068217, 9);
  sqcRYGate(q, 1.8573747447014881, 10);
  sqcRZGate(q, -0.005212657196289772, 10);
  sqcRYGate(q, -0.3766622148845453, 11);
  sqcRZGate(q, 0.010673787883231256, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -3.1388125272723455, 0);
  sqcRZGate(q, 1.413658424740265, 0);
  sqcRYGate(q, -3.1344596015602066, 1);
  sqcRZGate(q, 1.5678125596586514, 1);
  sqcRYGate(q, 3.130589378439693, 2);
  sqcRZGate(q, -0.5286075881663077, 2);
  sqcRYGate(q, -3.1319515663769995, 3);
  sqcRZGate(q, 1.7872074758787642, 3);
  sqcRYGate(q, 0.0031157213582089227, 4);
  sqcRZGate(q, -3.0652979731490855, 4);
  sqcRYGate(q, 1.5721608528989064, 5);
  sqcRZGate(q, 2.7381940477845013, 5);
  sqcRYGate(q, 0.003468716741548834, 6);
  sqcRZGate(q, 1.8957815466354218, 6);
  sqcRYGate(q, 1.5759365769135805, 7);
  sqcRZGate(q, 2.42978144951416, 7);
  sqcRYGate(q, -0.0028255552108962007, 8);
  sqcRZGate(q, 2.785353046486135, 8);
  sqcRYGate(q, -3.1389991986361863, 9);
  sqcRZGate(q, -2.06663255458745, 9);
  sqcRYGate(q, -1.5608072977482061, 10);
  sqcRZGate(q, -0.6762684807564961, 10);
  sqcRYGate(q, 1.5694201198886855, 11);
  sqcRZGate(q, 2.058446872735617, 11);

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
