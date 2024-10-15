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

  sqcRYGate(q, 2.4576108203889193, 0);
  sqcRZGate(q, 0.47082300146296063, 0);
  sqcRYGate(q, -1.269206168349316, 1);
  sqcRZGate(q, 0.8956978935737032, 1);
  sqcRYGate(q, -0.000628460321755675, 2);
  sqcRZGate(q, 1.9816845984034837, 2);
  sqcRYGate(q, 0.002048433012413753, 3);
  sqcRZGate(q, -2.2175407827933276, 3);
  sqcRYGate(q, -0.001702930363841837, 4);
  sqcRZGate(q, 2.7813010279586146, 4);
  sqcRYGate(q, 3.0580423810882698, 5);
  sqcRZGate(q, -1.4900754310159445, 5);
  sqcRYGate(q, -1.5573496818260248, 6);
  sqcRZGate(q, 0.042572289982798495, 6);
  sqcRYGate(q, 1.5969429106308328, 7);
  sqcRZGate(q, 3.0584482315283266, 7);
  sqcRYGate(q, 5.6004375929674666e-05, 8);
  sqcRZGate(q, -0.40682376849700985, 8);
  sqcRYGate(q, -3.141464432039983, 9);
  sqcRZGate(q, 1.016180891937247, 9);
  sqcRYGate(q, 1.5993017759126524, 10);
  sqcRZGate(q, 3.0531855075451824, 10);
  sqcRYGate(q, 1.5404712124823199, 11);
  sqcRZGate(q, 0.5173674020409219, 11);
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
  sqcRYGate(q, 1.7823808885537549, 0);
  sqcRZGate(q, 2.157022938465448, 0);
  sqcRYGate(q, 0.5787367274640195, 1);
  sqcRZGate(q, 2.182299587852234, 1);
  sqcRYGate(q, -3.1356656822043285, 2);
  sqcRZGate(q, -0.3906792048209527, 2);
  sqcRYGate(q, -3.1394769386535986, 3);
  sqcRZGate(q, 2.8763964532660595, 3);
  sqcRYGate(q, 0.010788194912598642, 4);
  sqcRZGate(q, -2.3710248410299597, 4);
  sqcRYGate(q, 1.5771959331547452, 5);
  sqcRZGate(q, 0.006830773325000246, 5);
  sqcRYGate(q, 2.033636328084011, 6);
  sqcRZGate(q, -2.7674001119442058, 6);
  sqcRYGate(q, -0.46464919430688667, 7);
  sqcRZGate(q, 0.48272101997705524, 7);
  sqcRYGate(q, 2.783336610902003, 8);
  sqcRZGate(q, 2.7519490171590477, 8);
  sqcRYGate(q, -0.015562595996935998, 9);
  sqcRZGate(q, 2.3331905239651243, 9);
  sqcRYGate(q, -1.7287576545685766, 10);
  sqcRZGate(q, 2.6448447621814464, 10);
  sqcRYGate(q, -0.12329817692819134, 11);
  sqcRZGate(q, 2.746363708889946, 11);
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
  sqcRYGate(q, -0.024231885460531902, 0);
  sqcRZGate(q, 2.917692408342082, 0);
  sqcRYGate(q, 1.2477503680031354, 1);
  sqcRZGate(q, 1.7301044928517655, 1);
  sqcRYGate(q, -1.594707813939558, 2);
  sqcRZGate(q, 0.8740402017661324, 2);
  sqcRYGate(q, 1.7885568580259745, 3);
  sqcRZGate(q, 0.8462465052255148, 3);
  sqcRYGate(q, -3.115787527175048, 4);
  sqcRZGate(q, -2.6729866101275848, 4);
  sqcRYGate(q, -1.6002759484504259, 5);
  sqcRZGate(q, 0.6333508412631099, 5);
  sqcRYGate(q, -3.0270823931247737, 6);
  sqcRZGate(q, 0.1372391560877384, 6);
  sqcRYGate(q, -0.11662504973169874, 7);
  sqcRZGate(q, 0.6338799168312114, 7);
  sqcRYGate(q, -1.5526112179178697, 8);
  sqcRZGate(q, 1.149665486114932, 8);
  sqcRYGate(q, -1.643773924400851, 9);
  sqcRZGate(q, 0.9807265162143803, 9);
  sqcRYGate(q, -3.084756119493281, 10);
  sqcRZGate(q, -2.6558726384119695, 10);
  sqcRYGate(q, -0.0465012924599959, 11);
  sqcRZGate(q, 0.829418910055274, 11);
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
  sqcRYGate(q, -0.6655065168844221, 0);
  sqcRZGate(q, 0.7635618903891773, 0);
  sqcRYGate(q, 1.0460236527438518, 1);
  sqcRZGate(q, -1.989177328148124, 1);
  sqcRYGate(q, 0.016302591554584807, 2);
  sqcRZGate(q, -3.0205463860737267, 2);
  sqcRYGate(q, 0.055137176868080395, 3);
  sqcRZGate(q, -0.74390225158995, 3);
  sqcRYGate(q, 3.1409056086517255, 4);
  sqcRZGate(q, -2.0335700744558385, 4);
  sqcRYGate(q, 0.004299767456339865, 5);
  sqcRZGate(q, -1.437919915632893, 5);
  sqcRYGate(q, -1.409634512824548, 6);
  sqcRZGate(q, -0.39946985120307943, 6);
  sqcRYGate(q, -1.2302031608194095, 7);
  sqcRZGate(q, 0.23108996135628065, 7);
  sqcRYGate(q, 2.1711478365105323, 8);
  sqcRZGate(q, 2.9227038876500857, 8);
  sqcRYGate(q, 2.151482703814647, 9);
  sqcRZGate(q, -3.02581637200862, 9);
  sqcRYGate(q, -2.369893743932406, 10);
  sqcRZGate(q, -2.1593455951578813, 10);
  sqcRYGate(q, -2.4244355267768074, 11);
  sqcRZGate(q, -2.127766721507686, 11);
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
  sqcRYGate(q, 0.8705341281493563, 0);
  sqcRZGate(q, 2.0899030377709917, 0);
  sqcRYGate(q, 0.8065853173339308, 1);
  sqcRZGate(q, 0.8042824964235329, 1);
  sqcRYGate(q, -3.080287962072912, 2);
  sqcRZGate(q, 0.7369339748210698, 2);
  sqcRYGate(q, 1.854915974105664, 3);
  sqcRZGate(q, -0.153954430524123, 3);
  sqcRYGate(q, 3.141016478428671, 4);
  sqcRZGate(q, 0.8752860713048447, 4);
  sqcRYGate(q, -0.00017838402787706545, 5);
  sqcRZGate(q, 0.2466721966445664, 5);
  sqcRYGate(q, -1.8305254101233683, 6);
  sqcRZGate(q, -1.1502806089786004, 6);
  sqcRYGate(q, 1.0199956470414662, 7);
  sqcRZGate(q, 1.6614086288174568, 7);
  sqcRYGate(q, 0.027934030273059737, 8);
  sqcRZGate(q, -2.945219363317518, 8);
  sqcRYGate(q, -0.005242589213053095, 9);
  sqcRZGate(q, 0.9753365167438844, 9);
  sqcRYGate(q, 2.075868780620774, 10);
  sqcRZGate(q, -0.36191315142928554, 10);
  sqcRYGate(q, 2.1126029601780614, 11);
  sqcRZGate(q, -1.0312994485435303, 11);
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
  sqcRYGate(q, 1.5774310846026927, 0);
  sqcRZGate(q, 1.3564452760123782, 0);
  sqcRYGate(q, -0.027033711756127506, 1);
  sqcRZGate(q, -0.8518493852596379, 1);
  sqcRYGate(q, 3.1403126839729794, 2);
  sqcRZGate(q, -1.8555074656162756, 2);
  sqcRYGate(q, -3.0698401631082026, 3);
  sqcRZGate(q, 2.882665954383043, 3);
  sqcRYGate(q, 0.004604662630328882, 4);
  sqcRZGate(q, 1.1139541340904993, 4);
  sqcRYGate(q, -0.004879254536119747, 5);
  sqcRZGate(q, 1.437099596636821, 5);
  sqcRYGate(q, -0.15574265158549966, 6);
  sqcRZGate(q, 2.255379899446937, 6);
  sqcRYGate(q, -1.642531185824029, 7);
  sqcRZGate(q, 1.4649190293934975, 7);
  sqcRYGate(q, -0.7229484229536266, 8);
  sqcRZGate(q, -1.3032629644159508, 8);
  sqcRYGate(q, -0.07595996307490621, 9);
  sqcRZGate(q, 1.7484447592694758, 9);
  sqcRYGate(q, -0.20298898823434366, 10);
  sqcRZGate(q, 2.4635011393094524, 10);
  sqcRYGate(q, 3.0445668417489626, 11);
  sqcRZGate(q, 1.0353376953667388, 11);
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
  sqcRYGate(q, 0.45950665695267734, 0);
  sqcRZGate(q, 1.818536415108495, 0);
  sqcRYGate(q, -2.9489464392007374, 1);
  sqcRZGate(q, -0.16896933571215883, 1);
  sqcRYGate(q, -3.1151803822001614, 2);
  sqcRZGate(q, 2.823507982933888, 2);
  sqcRYGate(q, -2.5047104083154625, 3);
  sqcRZGate(q, -3.0752292452603176, 3);
  sqcRYGate(q, 1.607404594845519, 4);
  sqcRZGate(q, 2.321568335733062, 4);
  sqcRYGate(q, -1.6961185872694982, 5);
  sqcRZGate(q, 2.5364820295211863, 5);
  sqcRYGate(q, 0.02753545506784327, 6);
  sqcRZGate(q, 2.5301246781843885, 6);
  sqcRYGate(q, -3.0342191822159825, 7);
  sqcRZGate(q, 2.992643318840202, 7);
  sqcRYGate(q, -2.2137168269465866, 8);
  sqcRZGate(q, -2.7476322812489595, 8);
  sqcRYGate(q, -0.7292456084447947, 9);
  sqcRZGate(q, 0.3340142167661577, 9);
  sqcRYGate(q, -0.042663899990327714, 10);
  sqcRZGate(q, -2.361881766970417, 10);
  sqcRYGate(q, -3.0657204663110362, 11);
  sqcRZGate(q, 1.8418045454249778, 11);
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
  sqcRYGate(q, -1.7660008427548792, 0);
  sqcRZGate(q, -3.0499721507801087, 0);
  sqcRYGate(q, -3.1258446405415015, 1);
  sqcRZGate(q, 3.115165388810688, 1);
  sqcRYGate(q, -1.5842457561206365, 2);
  sqcRZGate(q, -0.45752240279931655, 2);
  sqcRYGate(q, 2.9313111324932177, 3);
  sqcRZGate(q, 2.8890423211486027, 3);
  sqcRYGate(q, 0.01275708082875848, 4);
  sqcRZGate(q, 3.103623063076946, 4);
  sqcRYGate(q, -3.1350493635751033, 5);
  sqcRZGate(q, -0.7297582049568848, 5);
  sqcRYGate(q, -3.138739082302653, 6);
  sqcRZGate(q, -1.3025363182546996, 6);
  sqcRYGate(q, -3.141383510618241, 7);
  sqcRZGate(q, -1.8267330583354624, 7);
  sqcRYGate(q, 2.853731307002872, 8);
  sqcRZGate(q, 1.947217360082794, 8);
  sqcRYGate(q, -1.9727640136267084, 9);
  sqcRZGate(q, 2.029058041113668, 9);
  sqcRYGate(q, -0.07660302559235355, 10);
  sqcRZGate(q, 1.3269266136915023, 10);
  sqcRYGate(q, -0.6660379311275682, 11);
  sqcRZGate(q, 1.7365795942890998, 11);
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
  sqcRYGate(q, -3.109040032160534, 0);
  sqcRZGate(q, -1.8086601934264088, 0);
  sqcRYGate(q, 0.04302170693050744, 1);
  sqcRZGate(q, 0.3317342856539254, 1);
  sqcRYGate(q, -1.23942372242019, 2);
  sqcRZGate(q, 0.8467505302021108, 2);
  sqcRYGate(q, 1.996529256680864, 3);
  sqcRZGate(q, 0.025265403607544326, 3);
  sqcRYGate(q, -0.1756739973698247, 4);
  sqcRZGate(q, 3.1021995178168393, 4);
  sqcRYGate(q, -2.0470219667209957, 5);
  sqcRZGate(q, 2.846729798229253, 5);
  sqcRYGate(q, 1.5165863982060777, 6);
  sqcRZGate(q, 0.6373285844716783, 6);
  sqcRYGate(q, -1.5171357323988106, 7);
  sqcRZGate(q, -1.7049499303409958, 7);
  sqcRYGate(q, 0.13513710734266232, 8);
  sqcRZGate(q, 2.2872126485102378, 8);
  sqcRYGate(q, 3.0954010452840133, 9);
  sqcRZGate(q, -2.8122304050906193, 9);
  sqcRYGate(q, -1.0033635036412238, 10);
  sqcRZGate(q, -1.9124669705212138, 10);
  sqcRYGate(q, 2.1100505733191874, 11);
  sqcRZGate(q, 1.9546146430906655, 11);
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
  sqcRYGate(q, -0.7373447651021259, 0);
  sqcRZGate(q, 0.2785376191634601, 0);
  sqcRYGate(q, 1.0858127608646615, 1);
  sqcRZGate(q, -2.1086251244892145, 1);
  sqcRYGate(q, 3.0893929329071423, 2);
  sqcRZGate(q, 0.1889835347872225, 2);
  sqcRYGate(q, 3.071551315614786, 3);
  sqcRZGate(q, 1.4186204350942606, 3);
  sqcRYGate(q, -2.8227856577865396, 4);
  sqcRZGate(q, -1.2661914252407747, 4);
  sqcRYGate(q, 1.1226046243583037, 5);
  sqcRZGate(q, -1.7748912182671757, 5);
  sqcRYGate(q, 3.139156537215975, 6);
  sqcRZGate(q, -0.2538946442240517, 6);
  sqcRYGate(q, -0.004034698938287044, 7);
  sqcRZGate(q, -0.6026322399260815, 7);
  sqcRYGate(q, -3.091975123022418, 8);
  sqcRZGate(q, -2.4692246534325983, 8);
  sqcRYGate(q, 3.1397025698054475, 9);
  sqcRZGate(q, 2.9896654080328844, 9);
  sqcRYGate(q, 2.7215549828220773, 10);
  sqcRZGate(q, 1.0589231860827486, 10);
  sqcRYGate(q, 0.9607672453489073, 11);
  sqcRZGate(q, 3.014478739200243, 11);
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
  sqcRYGate(q, 0.0353984383368651, 0);
  sqcRZGate(q, 0.9147196354311041, 0);
  sqcRYGate(q, 2.446769045576465, 1);
  sqcRZGate(q, -0.4048426988025592, 1);
  sqcRYGate(q, -0.0463081961548859, 2);
  sqcRZGate(q, 0.7092749194929606, 2);
  sqcRYGate(q, -0.03694113294905633, 3);
  sqcRZGate(q, -2.757582408831653, 3);
  sqcRYGate(q, -1.0541481947813187, 4);
  sqcRZGate(q, -2.854377136847805, 4);
  sqcRYGate(q, 0.3322035840794184, 5);
  sqcRZGate(q, -1.0667971723189353, 5);
  sqcRYGate(q, -1.2646160905910335, 6);
  sqcRZGate(q, 0.053353734038663815, 6);
  sqcRYGate(q, 1.25276037824224, 7);
  sqcRZGate(q, 3.095313599349066, 7);
  sqcRYGate(q, 0.3898902658262452, 8);
  sqcRZGate(q, -1.8158763258170578, 8);
  sqcRYGate(q, -2.3328302896794817, 9);
  sqcRZGate(q, 2.727022503299383, 9);
  sqcRYGate(q, 0.368170571641044, 10);
  sqcRZGate(q, -1.9476210988185514, 10);
  sqcRYGate(q, 2.9378566675688984, 11);
  sqcRZGate(q, -0.2956410038118777, 11);
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
  sqcRYGate(q, 2.0692857583152664, 0);
  sqcRZGate(q, -0.12035250268185219, 0);
  sqcRYGate(q, -2.211484484401476, 1);
  sqcRZGate(q, -0.8603553162521252, 1);
  sqcRYGate(q, 1.487509673646768, 2);
  sqcRZGate(q, 0.0602201931013866, 2);
  sqcRYGate(q, -1.5020953628268856, 3);
  sqcRZGate(q, -1.7037990062176653, 3);
  sqcRYGate(q, -3.1151184999465515, 4);
  sqcRZGate(q, 0.22052617265864874, 4);
  sqcRYGate(q, 0.13847725980104997, 5);
  sqcRZGate(q, -2.498447848244279, 5);
  sqcRYGate(q, 2.0384607527231524, 6);
  sqcRZGate(q, -1.663148043288924, 6);
  sqcRYGate(q, 1.1035644649884992, 7);
  sqcRZGate(q, -2.018778131681488, 7);
  sqcRYGate(q, -0.2511794893647312, 8);
  sqcRZGate(q, 0.885466205327196, 8);
  sqcRYGate(q, 0.11050793558923999, 9);
  sqcRZGate(q, 0.7915860219967384, 9);
  sqcRYGate(q, -0.22535908422574488, 10);
  sqcRZGate(q, -0.9936808096460015, 10);
  sqcRYGate(q, -0.28014716025345643, 11);
  sqcRZGate(q, -0.628771282723161, 11);
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
  sqcRYGate(q, -2.7929862102811027, 0);
  sqcRZGate(q, 0.7749111208316606, 0);
  sqcRYGate(q, -2.487654504939692, 1);
  sqcRZGate(q, 2.4161041110018493, 1);
  sqcRYGate(q, -0.025786881674980455, 2);
  sqcRZGate(q, 1.4945000168533245, 2);
  sqcRYGate(q, -0.037275367484487454, 3);
  sqcRZGate(q, 1.9217154455295837, 3);
  sqcRYGate(q, -0.46438202123133276, 4);
  sqcRZGate(q, -0.4204748386513583, 4);
  sqcRYGate(q, 2.139603268723134, 5);
  sqcRZGate(q, 2.6752990413801245, 5);
  sqcRYGate(q, -1.3922580430599458, 6);
  sqcRZGate(q, 1.84503087137358, 6);
  sqcRYGate(q, -1.451812125758269, 7);
  sqcRZGate(q, -1.693874592152187, 7);
  sqcRYGate(q, -1.4336568552814368, 8);
  sqcRZGate(q, 2.330547885741328, 8);
  sqcRYGate(q, 2.4568696143948734, 9);
  sqcRZGate(q, -0.8318365652367613, 9);
  sqcRYGate(q, -0.7469431488943475, 10);
  sqcRZGate(q, -1.058848200117061, 10);
  sqcRYGate(q, -1.7765173446836795, 11);
  sqcRZGate(q, 1.7382237062451393, 11);
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
  sqcRYGate(q, 0.559399127149355, 0);
  sqcRZGate(q, 1.2286257079700018, 0);
  sqcRYGate(q, -1.8616352372636955, 1);
  sqcRZGate(q, -0.8951384778777598, 1);
  sqcRYGate(q, 0.03762551882675513, 2);
  sqcRZGate(q, 2.3080553737057024, 2);
  sqcRYGate(q, -3.1410568686165834, 3);
  sqcRZGate(q, -1.0880346838106174, 3);
  sqcRYGate(q, -0.003177881137756522, 4);
  sqcRZGate(q, 2.6786677806592927, 4);
  sqcRYGate(q, -3.0450123045574164, 5);
  sqcRZGate(q, -0.07355065941293848, 5);
  sqcRYGate(q, 2.9990857407700373, 6);
  sqcRZGate(q, -2.072213775553383, 6);
  sqcRYGate(q, 3.025253225443269, 7);
  sqcRZGate(q, 2.1555474261155965, 7);
  sqcRYGate(q, -3.141493375369326, 8);
  sqcRZGate(q, -2.842270726879617, 8);
  sqcRYGate(q, -0.005234141241357015, 9);
  sqcRZGate(q, -1.2128166420691997, 9);
  sqcRYGate(q, 2.9774383733615624, 10);
  sqcRZGate(q, -2.0568082502089586, 10);
  sqcRYGate(q, 3.1296578217095767, 11);
  sqcRZGate(q, 1.9446629646123295, 11);
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
  sqcRYGate(q, 0.17438459874733953, 0);
  sqcRZGate(q, -1.1924833461283433, 0);
  sqcRYGate(q, 3.1354840844611465, 1);
  sqcRZGate(q, 1.217589632797411, 1);
  sqcRYGate(q, 0.28712654124622183, 2);
  sqcRZGate(q, -2.7048882116157213, 2);
  sqcRYGate(q, 1.3294415813086922, 3);
  sqcRZGate(q, -1.3989934978104204, 3);
  sqcRYGate(q, 0.013352740783696861, 4);
  sqcRZGate(q, -2.1040927648113987, 4);
  sqcRYGate(q, 1.354592596646352, 5);
  sqcRZGate(q, -2.4263114109625143, 5);
  sqcRYGate(q, -1.7300972828437962, 6);
  sqcRZGate(q, -1.963078901756063, 6);
  sqcRYGate(q, 1.837113753540109, 7);
  sqcRZGate(q, 1.5494451408178074, 7);
  sqcRYGate(q, 1.5914717238796763, 8);
  sqcRZGate(q, -0.11215584043455351, 8);
  sqcRYGate(q, 1.5835775816744555, 9);
  sqcRZGate(q, 1.8437297542186784, 9);
  sqcRYGate(q, -2.584391444588877, 10);
  sqcRZGate(q, 0.7250211375005287, 10);
  sqcRYGate(q, -1.6960846265384184, 11);
  sqcRZGate(q, -0.28079185567790343, 11);
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
  sqcRYGate(q, -1.6549462990779062, 0);
  sqcRZGate(q, -3.11097348236638, 0);
  sqcRYGate(q, 1.6330065591900944, 1);
  sqcRZGate(q, -0.12393662893691393, 1);
  sqcRYGate(q, 0.008644341890222229, 2);
  sqcRZGate(q, -0.17275965031402496, 2);
  sqcRYGate(q, 1.5797139704965528, 3);
  sqcRZGate(q, 0.9472993324491901, 3);
  sqcRYGate(q, -0.010669778170981598, 4);
  sqcRZGate(q, 2.1167436077556663, 4);
  sqcRYGate(q, -3.1387291279162737, 5);
  sqcRZGate(q, 2.1187893555705903, 5);
  sqcRYGate(q, -1.5426798925050598, 6);
  sqcRZGate(q, 0.1647554396244173, 6);
  sqcRYGate(q, 1.5884888165654605, 7);
  sqcRZGate(q, -1.355985376688186, 7);
  sqcRYGate(q, -0.004586038163174859, 8);
  sqcRZGate(q, -2.1757197823025702, 8);
  sqcRYGate(q, 0.07549099027722712, 9);
  sqcRZGate(q, -2.340272348954778, 9);
  sqcRYGate(q, 1.4210158522840326, 10);
  sqcRZGate(q, 2.703620838291529, 10);
  sqcRYGate(q, -1.269548668143133, 11);
  sqcRZGate(q, -0.22674811217440197, 11);
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
  sqcRYGate(q, -0.3688228273967423, 0);
  sqcRZGate(q, -1.6338866560710446, 0);
  sqcRYGate(q, 2.797411015943897, 1);
  sqcRZGate(q, -1.7455575550693965, 1);
  sqcRYGate(q, -0.47431925057713187, 2);
  sqcRZGate(q, 2.0268129625744473, 2);
  sqcRYGate(q, 2.872574680363792, 3);
  sqcRZGate(q, -1.9979917873111992, 3);
  sqcRYGate(q, 0.7491530200054541, 4);
  sqcRZGate(q, -0.6323426401713772, 4);
  sqcRYGate(q, 2.403085638717176, 5);
  sqcRZGate(q, 2.121002583677069, 5);
  sqcRYGate(q, 0.0007081048681003566, 6);
  sqcRZGate(q, -0.1601557495656527, 6);
  sqcRYGate(q, -4.8516831535956595e-05, 7);
  sqcRZGate(q, 1.3601001462614597, 7);
  sqcRYGate(q, 3.1327851681453027, 8);
  sqcRZGate(q, 1.0661191495070077, 8);
  sqcRYGate(q, 3.1319385166258344, 9);
  sqcRZGate(q, 2.4690661453082092, 9);
  sqcRYGate(q, 0.9281323101006826, 10);
  sqcRZGate(q, 1.0331724187669933, 10);
  sqcRYGate(q, 1.7949838427016573, 11);
  sqcRZGate(q, -1.8759460064409377, 11);
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
  sqcRYGate(q, -2.92347368320311, 0);
  sqcRZGate(q, -1.6259368861548058, 0);
  sqcRYGate(q, -2.917915988836094, 1);
  sqcRZGate(q, 1.5009354543842914, 1);
  sqcRYGate(q, -2.2947131821044775, 2);
  sqcRZGate(q, 1.4366588130939177, 2);
  sqcRYGate(q, -0.8557866022790053, 3);
  sqcRZGate(q, 1.4900087990875612, 3);
  sqcRYGate(q, -0.0010544397424095894, 4);
  sqcRZGate(q, -1.53639151213384, 4);
  sqcRYGate(q, -0.008420185691919052, 5);
  sqcRZGate(q, 3.0077541885763557, 5);
  sqcRYGate(q, -1.553405413876376, 6);
  sqcRZGate(q, -0.30631460004038147, 6);
  sqcRYGate(q, 1.5713459457721604, 7);
  sqcRZGate(q, -2.8415246264133884, 7);
  sqcRYGate(q, -1.6055817139225308, 8);
  sqcRZGate(q, 1.853894060119628, 8);
  sqcRYGate(q, -1.6116854501477207, 9);
  sqcRZGate(q, 0.07606549190784215, 9);
  sqcRYGate(q, 0.13167104676356622, 10);
  sqcRZGate(q, -2.504074160935135, 10);
  sqcRYGate(q, -1.691190649532073, 11);
  sqcRZGate(q, 2.1652156477154545, 11);
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
  sqcRYGate(q, 1.2876241134664939, 0);
  sqcRZGate(q, 1.2604371544671331, 0);
  sqcRYGate(q, 1.878561874487323, 1);
  sqcRZGate(q, -1.9242170250872008, 1);
  sqcRYGate(q, -0.4953594316542292, 2);
  sqcRZGate(q, -1.796109483501019, 2);
  sqcRYGate(q, 2.2616600391474604, 3);
  sqcRZGate(q, 1.185324233598382, 3);
  sqcRYGate(q, -1.4700776974545713, 4);
  sqcRZGate(q, 3.108582791021525, 4);
  sqcRYGate(q, 1.6710585849169561, 5);
  sqcRZGate(q, -3.1278767766865694, 5);
  sqcRYGate(q, 2.5538364600491876, 6);
  sqcRZGate(q, -1.1555532587465591, 6);
  sqcRYGate(q, -0.5971115720754231, 7);
  sqcRZGate(q, -1.1527774104283601, 7);
  sqcRYGate(q, -3.0748737540504187, 8);
  sqcRZGate(q, -1.653851588318073, 8);
  sqcRYGate(q, 0.40578032348624316, 9);
  sqcRZGate(q, -0.515229623690802, 9);
  sqcRYGate(q, 0.6885176473406088, 10);
  sqcRZGate(q, -0.48512633450625364, 10);
  sqcRYGate(q, -0.6831800161182189, 11);
  sqcRZGate(q, 2.685544932627181, 11);

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
