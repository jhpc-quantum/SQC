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

  sqcRYGate(q, -0.6911769976990562, 0);
  sqcRYGate(q, 1.5780307197385761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8808403343891023, 0);
  sqcRYGate(q, -1.1904350622512534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7505850734217878, 2);
  sqcRYGate(q, 0.07099948197515449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3394684905846406, 2);
  sqcRYGate(q, 3.037242849267838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2080121807357281, 4);
  sqcRYGate(q, 1.4982993571188477, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.967688962198912, 4);
  sqcRYGate(q, 2.3104000582764432, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.118740166670986, 6);
  sqcRYGate(q, -0.9164995573025492, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1056009542347276, 6);
  sqcRYGate(q, -0.8293357011559318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3582134736382567, 8);
  sqcRYGate(q, 2.382459620072874, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.29016282774406843, 8);
  sqcRYGate(q, -1.4193255047121038, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.904555171194839, 10);
  sqcRYGate(q, -0.8645019674369747, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5969374467861854, 10);
  sqcRYGate(q, 1.8408998172110653, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5436442415074703, 12);
  sqcRYGate(q, 1.697246051029998, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.570906813054221, 12);
  sqcRYGate(q, -0.11907118570821482, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5471781168697176, 14);
  sqcRYGate(q, -1.0439505579534454, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1629778704354914, 14);
  sqcRYGate(q, -0.9738505564459554, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3125318783207003, 16);
  sqcRYGate(q, -2.2623172969484733, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.21741191474013807, 16);
  sqcRYGate(q, 1.8564368466367647, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.21010496096598086, 18);
  sqcRYGate(q, 2.7948858896674316, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.2024819847837245, 18);
  sqcRYGate(q, -1.8045397428997634, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.2863681353639738, 1);
  sqcRYGate(q, -1.835577795648388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.727018762725426, 1);
  sqcRYGate(q, 1.4448578336833224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1837891042774555, 3);
  sqcRYGate(q, 1.0662038678696284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.022126447280288647, 3);
  sqcRYGate(q, 2.0246280797459013, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8655487250853979, 5);
  sqcRYGate(q, 0.4687012679914263, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9604155698051362, 5);
  sqcRYGate(q, -0.8420528248398655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2981713376141846, 7);
  sqcRYGate(q, -0.1012968123562823, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9028302275290416, 7);
  sqcRYGate(q, 1.6750428616484605, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1286741278652936, 9);
  sqcRYGate(q, 3.0003489399750953, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1256301113518163, 9);
  sqcRYGate(q, 1.5466804805914776, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7744132996469801, 11);
  sqcRYGate(q, 1.8306127026878827, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0163125595542906, 11);
  sqcRYGate(q, -2.5965872030149977, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.083633441156913, 13);
  sqcRYGate(q, -1.517816299871492, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.51607765589928, 13);
  sqcRYGate(q, -1.24326392547337, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.2394777262186842, 15);
  sqcRYGate(q, -1.0199120843102856, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.6125005713584102, 15);
  sqcRYGate(q, -1.1300672089699049, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.4190660555183108, 17);
  sqcRYGate(q, 2.815091478204318, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.9116530129455966, 17);
  sqcRYGate(q, -1.3865510273445882, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9266620959636652, 0);
  sqcRYGate(q, -2.288478870610666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2974957409976877, 0);
  sqcRYGate(q, 1.6975679662642262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1031585082905777, 2);
  sqcRYGate(q, -0.11971982282724625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.025622012177811, 2);
  sqcRYGate(q, 1.594049870347381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.44424571391277823, 4);
  sqcRYGate(q, 1.589863443920641, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.758892116378832, 4);
  sqcRYGate(q, -1.4405702343616273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5647496482934855, 6);
  sqcRYGate(q, 2.929144250742878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6326762139434594, 6);
  sqcRYGate(q, 1.5841895799624235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25130826476265966, 8);
  sqcRYGate(q, -1.3529360967071666, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9908188703479606, 8);
  sqcRYGate(q, 0.20435433464903777, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8479511637727525, 10);
  sqcRYGate(q, 0.19717163740331142, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7141284919718648, 10);
  sqcRYGate(q, -1.6287984771599096, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9994200184028843, 12);
  sqcRYGate(q, 2.214347714237949, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6014433547656706, 12);
  sqcRYGate(q, -1.3551917630379477, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0550978097494723, 14);
  sqcRYGate(q, -1.4754230572367584, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.897921868158406, 14);
  sqcRYGate(q, 0.06814724173005171, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8708003071410368, 16);
  sqcRYGate(q, 0.1451444348080866, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7949865911414333, 16);
  sqcRYGate(q, 2.033130539929668, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.9115575046991164, 18);
  sqcRYGate(q, -1.585696985258738, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.354022497358463, 18);
  sqcRYGate(q, 1.339221136182383, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8678493141599349, 1);
  sqcRYGate(q, -2.018734972951636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.811702159648266, 1);
  sqcRYGate(q, -1.5605530741505547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8814925139248793, 3);
  sqcRYGate(q, 0.9720449907017055, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.117054371527407, 3);
  sqcRYGate(q, -1.5938234866700123, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6551821328848288, 5);
  sqcRYGate(q, -1.4865422624703681, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2775565285569319, 5);
  sqcRYGate(q, 1.574500092241524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3707135770550227, 7);
  sqcRYGate(q, 2.071351051343684, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5739767222962096, 7);
  sqcRYGate(q, 1.6032832377819997, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6182231099726176, 9);
  sqcRYGate(q, 1.6170500188537114, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.549669374809997, 9);
  sqcRYGate(q, -1.6869899094118133, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6448182613430788, 11);
  sqcRYGate(q, 1.6625534834861195, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.959244440797988, 11);
  sqcRYGate(q, -2.836797816160998, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.31343893281905616, 13);
  sqcRYGate(q, -3.082475918021399, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.22825006233914358, 13);
  sqcRYGate(q, -0.01894239904026218, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5621557762232032, 15);
  sqcRYGate(q, 0.21516543941073626, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.092055744016996, 15);
  sqcRYGate(q, -2.397272190566148, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.132556409995109, 17);
  sqcRYGate(q, -1.4772187932328857, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.8458316594826587, 17);
  sqcRYGate(q, 2.8177395698501186, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.6323597506530954, 0);
  sqcRYGate(q, 1.1162682018762453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2526472648647857, 0);
  sqcRYGate(q, 2.2942607437396196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.970679005984804, 2);
  sqcRYGate(q, -1.6181761794018694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6392246195063649, 2);
  sqcRYGate(q, -2.59541583447372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5973919694784726, 4);
  sqcRYGate(q, -1.6663305183378334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2745059238671218, 4);
  sqcRYGate(q, 1.8759213356241446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2993617842982723, 6);
  sqcRYGate(q, -2.4707044228686827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.025202734819976477, 6);
  sqcRYGate(q, -1.5017666187587793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7938653752660967, 8);
  sqcRYGate(q, 0.26466203254214254, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6055015825042271, 8);
  sqcRYGate(q, 0.28611069576421216, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9833856958340084, 10);
  sqcRYGate(q, -2.743738550300016, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.537451841220392, 10);
  sqcRYGate(q, 1.1278442950619283, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.656010595883471, 12);
  sqcRYGate(q, -1.2556595765825982, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5354220794034392, 12);
  sqcRYGate(q, -3.094744779127858, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1048823716471428, 14);
  sqcRYGate(q, -1.554582586252926, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2163299610219753, 14);
  sqcRYGate(q, 0.09774232838978136, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.1711623947390046, 16);
  sqcRYGate(q, 3.0181260514156576, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.3328837719726832, 16);
  sqcRYGate(q, -1.5721321437687183, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6454483325936597, 18);
  sqcRYGate(q, -0.34487549841428805, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.378143188519244, 18);
  sqcRYGate(q, -1.7127613875216094, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.2868108709723998, 1);
  sqcRYGate(q, -2.0159459962700925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6383604435305472, 1);
  sqcRYGate(q, -0.28200169404686043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1972353143408891, 3);
  sqcRYGate(q, 1.7328253261167597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6211682775272658, 3);
  sqcRYGate(q, 3.140262422013484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.08094262495050852, 5);
  sqcRYGate(q, 0.564303482640387, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.28138212281936004, 5);
  sqcRYGate(q, 1.0126794327564879, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.813964629191823, 7);
  sqcRYGate(q, -0.056728579519078615, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.06681683283487772, 7);
  sqcRYGate(q, 0.2262182968742268, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3366623384142644, 9);
  sqcRYGate(q, 0.5399888774306287, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.068560779911081, 9);
  sqcRYGate(q, 0.10301315362068751, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.057651432123267, 11);
  sqcRYGate(q, -2.531244037547838, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9370568659471297, 11);
  sqcRYGate(q, -2.972715587855443, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.047415428170436, 13);
  sqcRYGate(q, -1.5682462351339794, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6481108944237324, 13);
  sqcRYGate(q, -1.5766524728203812, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.2745354180030724, 15);
  sqcRYGate(q, 3.05080853426448, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5789401969141599, 15);
  sqcRYGate(q, -0.5817059667864036, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.045467351891806, 17);
  sqcRYGate(q, 2.725015818553077, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.8725914733442037, 17);
  sqcRYGate(q, -1.77496946843758, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5759229617214028, 0);
  sqcRYGate(q, 1.5502856156173581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9716338041873369, 0);
  sqcRYGate(q, -0.6030321481888491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2815790240720872, 2);
  sqcRYGate(q, 1.7948645406259267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6229837176295738, 2);
  sqcRYGate(q, 2.611592482139707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5759107031616635, 4);
  sqcRYGate(q, 1.3660400195005167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0036130436691532704, 4);
  sqcRYGate(q, 1.4102116259644013, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.117373610793998, 6);
  sqcRYGate(q, 0.3474855318235823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5276699733902672, 6);
  sqcRYGate(q, 0.3155165202222379, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.938594955310378, 8);
  sqcRYGate(q, -2.3941943666246375, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0321968650983298, 8);
  sqcRYGate(q, -2.44752404132192, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7005292440476323, 10);
  sqcRYGate(q, -1.5594301862449609, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6859060367691852, 10);
  sqcRYGate(q, 1.1105332732403763, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.02621897163674777, 12);
  sqcRYGate(q, 1.6247590544090853, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.43634864718704497, 12);
  sqcRYGate(q, -0.5535305317588497, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.824806418176386, 14);
  sqcRYGate(q, -0.8029097353160805, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.9711833834502537, 14);
  sqcRYGate(q, 3.138700081885216, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9982286375594951, 16);
  sqcRYGate(q, 1.521881406510055, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5918530939519098, 16);
  sqcRYGate(q, 0.027004759274781548, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.133730756015667, 18);
  sqcRYGate(q, 0.5552514814695657, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.215461512309008, 18);
  sqcRYGate(q, -3.1413033798799948, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.07391025206607704, 1);
  sqcRYGate(q, 0.9822701991344011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0981081401639137, 1);
  sqcRYGate(q, 1.763897333863417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5059420244038348, 3);
  sqcRYGate(q, 1.5752976161892676, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5095197474056645, 3);
  sqcRYGate(q, -0.12401895753582383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3768718534230104, 5);
  sqcRYGate(q, -1.8229405084259565, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.556262107951877, 5);
  sqcRYGate(q, 1.3162815240057038, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14766345707155892, 7);
  sqcRYGate(q, 1.9301211130100588, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0680556158210743, 7);
  sqcRYGate(q, -3.1355971312062323, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7262779448565402, 9);
  sqcRYGate(q, 0.24953163846883272, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1042324454648418, 9);
  sqcRYGate(q, 2.128957750634676, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9557991108636914, 11);
  sqcRYGate(q, 1.8187482218637516, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.06572524079126398, 11);
  sqcRYGate(q, 2.9342390485857712, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5445104812483046, 13);
  sqcRYGate(q, 0.04588938227361034, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0901192276248484, 13);
  sqcRYGate(q, -1.5272438657259242, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1473938285228606, 15);
  sqcRYGate(q, 0.5241854765554572, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.8347141547482058, 15);
  sqcRYGate(q, 2.9486612361391913, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.974949551879043, 17);
  sqcRYGate(q, -0.20861805534921363, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.45445552170027, 17);
  sqcRYGate(q, -1.5585320342611193, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.6553359371910101, 0);
  sqcRYGate(q, 2.811773083105751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7551232907238554, 0);
  sqcRYGate(q, 1.5658557753159752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7129640697236708, 2);
  sqcRYGate(q, -0.5053978217229729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.491989449553763, 2);
  sqcRYGate(q, 1.4823775906783023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5640635484089902, 4);
  sqcRYGate(q, 1.0250075134283385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1172033289725682, 4);
  sqcRYGate(q, -2.204422061104382, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.139180655509008, 6);
  sqcRYGate(q, 3.0111354519482485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.30881559971478456, 6);
  sqcRYGate(q, -1.5735521867638107, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9716782195205611, 8);
  sqcRYGate(q, 1.821312163857816, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0300893971897453, 8);
  sqcRYGate(q, -0.2587750911113007, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5546635059369587, 10);
  sqcRYGate(q, -2.9403415979688496, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.08309884875629248, 10);
  sqcRYGate(q, -1.4422703768294107, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9476619547390266, 12);
  sqcRYGate(q, 3.0688650026937503, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5717923483600884, 12);
  sqcRYGate(q, 1.2809990718204691, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.8734725260353828, 14);
  sqcRYGate(q, -1.0626907879367518, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6321000110919857, 14);
  sqcRYGate(q, 0.03345103546570591, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0857689255471277, 16);
  sqcRYGate(q, 1.3627582551907054, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6844790815716983, 16);
  sqcRYGate(q, 3.049262773970062, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.1143193729397991, 18);
  sqcRYGate(q, 1.081384923049388, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.5442102650580853, 18);
  sqcRYGate(q, -1.4962117952873566, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6910274557204847, 1);
  sqcRYGate(q, 0.013988844047137437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5906626915626116, 1);
  sqcRYGate(q, 1.5211161263440536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5269465495689583, 3);
  sqcRYGate(q, 0.002763760856874491, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5612747362973822, 3);
  sqcRYGate(q, 1.5491592164314814, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1342480971240114, 5);
  sqcRYGate(q, -1.6639541690102606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3028694089736508, 5);
  sqcRYGate(q, 0.015111185626630642, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.346666569213264, 7);
  sqcRYGate(q, -2.7709365645178985, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.011942264550650172, 7);
  sqcRYGate(q, 3.1181883778685373, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1318755147992707, 9);
  sqcRYGate(q, 0.0017427837352376673, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5955840882030679, 9);
  sqcRYGate(q, 1.5551735930717483, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.066268343276851, 11);
  sqcRYGate(q, 1.4954681637272662, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.04988644508693163, 11);
  sqcRYGate(q, -0.0027854198583789317, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.040684282261568366, 13);
  sqcRYGate(q, -1.7868307076670824, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1230220213220337, 13);
  sqcRYGate(q, -3.100505026841098, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.23765521062349124, 15);
  sqcRYGate(q, -1.0206577154403726, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5014930262924526, 15);
  sqcRYGate(q, 1.346127026738765, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.01978626868481026, 17);
  sqcRYGate(q, -0.01664874187557549, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5727295678607929, 17);
  sqcRYGate(q, -1.5806904818717211, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.5956688931057905, 0);
  sqcRYGate(q, -0.23321580924807697, 1);
  sqcRYGate(q, -0.431516674496616, 2);
  sqcRYGate(q, -1.7815789360609857, 3);
  sqcRYGate(q, 2.7930063106354597, 4);
  sqcRYGate(q, -0.7880383370741963, 5);
  sqcRYGate(q, -1.8505558537334887, 6);
  sqcRYGate(q, 0.021040499009145286, 7);
  sqcRYGate(q, -0.8682032644638875, 8);
  sqcRYGate(q, 1.3751731749896274, 9);
  sqcRYGate(q, 0.45021424129242804, 10);
  sqcRYGate(q, 2.6087034460039025, 11);
  sqcRYGate(q, -1.8905437839110426, 12);
  sqcRYGate(q, 2.586533298278192, 13);
  sqcRYGate(q, -0.1884507291690066, 14);
  sqcRYGate(q, 0.346315004576996, 15);
  sqcRYGate(q, -0.35038261352956646, 16);
  sqcRYGate(q, 1.4273171711258579, 17);
  sqcRYGate(q, 2.8259656790829575, 18);
  sqcRYGate(q, 3.0142802818015473, 19);

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
