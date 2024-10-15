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

  sqcRYGate(q, 0.20622752423476992, 0);
  sqcRZGate(q, 2.8193389905524664, 0);
  sqcRYGate(q, 1.27285624550729, 1);
  sqcRZGate(q, -2.054869446440189, 1);
  sqcRYGate(q, -0.6475178960089951, 2);
  sqcRZGate(q, -1.0184841044777346, 2);
  sqcRYGate(q, -2.2718187133416103, 3);
  sqcRZGate(q, 1.101696574129633, 3);
  sqcRYGate(q, 2.989167452405721, 4);
  sqcRZGate(q, -3.0607640002989807, 4);
  sqcRYGate(q, -0.13765190887978185, 5);
  sqcRZGate(q, -0.11724239100416423, 5);
  sqcRYGate(q, -3.113482241627985, 6);
  sqcRZGate(q, -2.2633661001461096, 6);
  sqcRYGate(q, -1.5754259503756893, 7);
  sqcRZGate(q, -2.969220558488925, 7);
  sqcRYGate(q, -2.4155361376386115, 8);
  sqcRZGate(q, 0.14382464952697038, 8);
  sqcRYGate(q, -1.4529845634082807, 9);
  sqcRZGate(q, 0.2109781662357095, 9);
  sqcRYGate(q, -1.387926149179683, 10);
  sqcRZGate(q, 0.29638749241587453, 10);
  sqcRYGate(q, -1.5967286824818867, 11);
  sqcRZGate(q, -0.6497850430006624, 11);
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
  sqcRYGate(q, -1.9800997136873297, 0);
  sqcRZGate(q, -1.317938255923237, 0);
  sqcRYGate(q, -1.5808485079041157, 1);
  sqcRZGate(q, -0.5743653237824755, 1);
  sqcRYGate(q, -0.9694280662074717, 2);
  sqcRZGate(q, -0.2719089855473902, 2);
  sqcRYGate(q, 2.19174334620965, 3);
  sqcRZGate(q, 0.8618137758563791, 3);
  sqcRYGate(q, -3.0252064454840086, 4);
  sqcRZGate(q, 2.0897533582747627, 4);
  sqcRYGate(q, -2.38130686652596, 5);
  sqcRZGate(q, 2.85435461312073, 5);
  sqcRYGate(q, -3.1358524662800775, 6);
  sqcRZGate(q, 1.3007873985102094, 6);
  sqcRYGate(q, 3.140182079298181, 7);
  sqcRZGate(q, 0.8175065154759603, 7);
  sqcRYGate(q, 2.233325505040736, 8);
  sqcRZGate(q, -1.2375738679288837, 8);
  sqcRYGate(q, 0.00316048185849111, 9);
  sqcRZGate(q, -1.0436501104136255, 9);
  sqcRYGate(q, -3.054623287357381, 10);
  sqcRZGate(q, -0.9181048385055316, 10);
  sqcRYGate(q, -0.16395088640472133, 11);
  sqcRZGate(q, 1.339908552473707, 11);
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
  sqcRYGate(q, -2.5355978248050266, 0);
  sqcRZGate(q, 3.120188823991297, 0);
  sqcRYGate(q, -1.278751307915102, 1);
  sqcRZGate(q, -0.10567506725976461, 1);
  sqcRYGate(q, 1.3590289425583493, 2);
  sqcRZGate(q, 1.1539487968841395, 2);
  sqcRYGate(q, -1.5211777821743657, 3);
  sqcRZGate(q, -1.1003724526699603, 3);
  sqcRYGate(q, -0.4746591226070347, 4);
  sqcRZGate(q, 0.10743032666101188, 4);
  sqcRYGate(q, -2.183133037246602, 5);
  sqcRZGate(q, 1.7629976477701967, 5);
  sqcRYGate(q, 3.1183160921291613, 6);
  sqcRZGate(q, -2.4399400917431904, 6);
  sqcRYGate(q, 1.3429316529377493, 7);
  sqcRZGate(q, 1.863592705554864, 7);
  sqcRYGate(q, -1.860791838040986, 8);
  sqcRZGate(q, -0.894227680304498, 8);
  sqcRYGate(q, 2.9191282585023877, 9);
  sqcRZGate(q, -2.749183309333822, 9);
  sqcRYGate(q, 0.36470199959268135, 10);
  sqcRZGate(q, -2.5130074103433593, 10);
  sqcRYGate(q, 1.1993379887334128, 11);
  sqcRZGate(q, -2.6966988446485205, 11);
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
  sqcRYGate(q, 1.6928580512092994, 0);
  sqcRZGate(q, -1.2170965163744265, 0);
  sqcRYGate(q, 0.89804765323477, 1);
  sqcRZGate(q, 2.257610355065591, 1);
  sqcRYGate(q, 1.9662979857059182, 2);
  sqcRZGate(q, -0.06981101049148553, 2);
  sqcRYGate(q, -1.3724386875187626, 3);
  sqcRZGate(q, -1.580863061618647, 3);
  sqcRYGate(q, -0.08280767193855605, 4);
  sqcRZGate(q, -2.6420333105682183, 4);
  sqcRYGate(q, -0.3125043378812698, 5);
  sqcRZGate(q, 1.2528668491328778, 5);
  sqcRYGate(q, 0.021013973029665556, 6);
  sqcRZGate(q, -1.3210213278134715, 6);
  sqcRYGate(q, -0.0035499787972845687, 7);
  sqcRZGate(q, 0.9487112730189924, 7);
  sqcRYGate(q, -3.0903893450297537, 8);
  sqcRZGate(q, 2.3707098686818946, 8);
  sqcRYGate(q, -0.0026560781939702887, 9);
  sqcRZGate(q, -0.20355837889026174, 9);
  sqcRYGate(q, 1.9651963537460864, 10);
  sqcRZGate(q, 0.8928579770725265, 10);
  sqcRYGate(q, 0.5542823690030074, 11);
  sqcRZGate(q, 3.0936878455811696, 11);
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
  sqcRYGate(q, -1.5660921510335082, 0);
  sqcRZGate(q, 2.9718113622815023, 0);
  sqcRYGate(q, 0.19521086370560337, 1);
  sqcRZGate(q, -2.289817532496671, 1);
  sqcRYGate(q, 0.257695392163025, 2);
  sqcRZGate(q, -0.2717267560300778, 2);
  sqcRYGate(q, -1.3180905357615451, 3);
  sqcRZGate(q, -1.317268572320799, 3);
  sqcRYGate(q, -3.085323292944783, 4);
  sqcRZGate(q, 2.679594713295932, 4);
  sqcRYGate(q, -2.3244058014591653, 5);
  sqcRZGate(q, -1.7937667293846715, 5);
  sqcRYGate(q, -3.130737251965368, 6);
  sqcRZGate(q, -2.9374932927925284, 6);
  sqcRYGate(q, -2.1007381136133536, 7);
  sqcRZGate(q, -2.7824034382063285, 7);
  sqcRYGate(q, -0.1233374591517924, 8);
  sqcRZGate(q, -1.5396809568637815, 8);
  sqcRYGate(q, -0.080847402246218, 9);
  sqcRZGate(q, -0.8821904349936169, 9);
  sqcRYGate(q, 2.9116098650516498, 10);
  sqcRZGate(q, -2.997751895953464, 10);
  sqcRYGate(q, 2.98842829186472, 11);
  sqcRZGate(q, -1.2392510106911407, 11);
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
  sqcRYGate(q, -1.8688696754439151, 0);
  sqcRZGate(q, 1.7563840117272762, 0);
  sqcRYGate(q, -1.6596431262781162, 1);
  sqcRZGate(q, -0.04587319029038638, 1);
  sqcRYGate(q, 1.5590018497946618, 2);
  sqcRZGate(q, 0.5385610661117514, 2);
  sqcRYGate(q, -0.9072678687794359, 3);
  sqcRZGate(q, -0.27578677779361455, 3);
  sqcRYGate(q, 0.000895802548977703, 4);
  sqcRZGate(q, 2.943296517253686, 4);
  sqcRYGate(q, -0.009516487635172273, 5);
  sqcRZGate(q, 2.075781318443819, 5);
  sqcRYGate(q, -0.00443703168786265, 6);
  sqcRZGate(q, 0.7479557967542972, 6);
  sqcRYGate(q, -1.570302627004108, 7);
  sqcRZGate(q, 0.15068479356848474, 7);
  sqcRYGate(q, 1.6071438471135195, 8);
  sqcRZGate(q, 0.5548393253006543, 8);
  sqcRYGate(q, 0.6208978226342194, 9);
  sqcRZGate(q, -1.5793143826519223, 9);
  sqcRYGate(q, -1.2841009583379286, 10);
  sqcRZGate(q, 1.1151019269684959, 10);
  sqcRYGate(q, 1.929812744699656, 11);
  sqcRZGate(q, -2.675143086994226, 11);
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
  sqcRYGate(q, -0.15600716796174172, 0);
  sqcRZGate(q, 2.2800917201637834, 0);
  sqcRYGate(q, 1.8163833797707643, 1);
  sqcRZGate(q, -1.7771856399150154, 1);
  sqcRYGate(q, 1.1973749843814665, 2);
  sqcRZGate(q, 2.6135380052968094, 2);
  sqcRYGate(q, 1.8605072557324818, 3);
  sqcRZGate(q, 1.0629294607570565, 3);
  sqcRYGate(q, 3.028399619862254, 4);
  sqcRZGate(q, 2.7231537888994124, 4);
  sqcRYGate(q, -3.140147453901542, 5);
  sqcRZGate(q, 0.45353433607979277, 5);
  sqcRYGate(q, 3.132852782018523, 6);
  sqcRZGate(q, 0.4244495663426662, 6);
  sqcRYGate(q, -1.421396128323633, 7);
  sqcRZGate(q, -1.5652486028541372, 7);
  sqcRYGate(q, 1.5609028533717508, 8);
  sqcRZGate(q, -0.0140334240272429, 8);
  sqcRYGate(q, 1.5730515086431893, 9);
  sqcRZGate(q, 2.3218206571291677, 9);
  sqcRYGate(q, -2.3513196383010633, 10);
  sqcRZGate(q, 0.2603697517545041, 10);
  sqcRYGate(q, -2.5922081665805603, 11);
  sqcRZGate(q, 1.6013111239998432, 11);
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
  sqcRYGate(q, -2.478095140809139, 0);
  sqcRZGate(q, -3.0042495826322595, 0);
  sqcRYGate(q, 1.4509773853521324, 1);
  sqcRZGate(q, 2.893762692473429, 1);
  sqcRYGate(q, -2.6952092648446118, 2);
  sqcRZGate(q, 0.9947326321611578, 2);
  sqcRYGate(q, 1.9353009646796977, 3);
  sqcRZGate(q, 3.0251946686424747, 3);
  sqcRYGate(q, 3.131164255337089, 4);
  sqcRZGate(q, -0.47547937470224694, 4);
  sqcRYGate(q, -3.130489075138753, 5);
  sqcRZGate(q, -1.241770095277449, 5);
  sqcRYGate(q, -3.127236895220457, 6);
  sqcRZGate(q, 0.2870463370927915, 6);
  sqcRYGate(q, 3.099769860989055, 7);
  sqcRZGate(q, -0.766360839455844, 7);
  sqcRYGate(q, -1.5064883619411056, 8);
  sqcRZGate(q, 0.7638009205837245, 8);
  sqcRYGate(q, -3.1380224401130925, 9);
  sqcRZGate(q, -0.20060279791561353, 9);
  sqcRYGate(q, 1.5410341147321276, 10);
  sqcRZGate(q, 2.6267280006448432, 10);
  sqcRYGate(q, -1.5719239740600626, 11);
  sqcRZGate(q, -1.5662660993225845, 11);
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
  sqcRYGate(q, 1.362349970089511, 0);
  sqcRZGate(q, -1.5123607488371449, 0);
  sqcRYGate(q, -2.2159724707982003, 1);
  sqcRZGate(q, 1.5305443445518379, 1);
  sqcRYGate(q, 1.864796648319233, 2);
  sqcRZGate(q, -1.2250829136387713, 2);
  sqcRYGate(q, -2.7773961821011186, 3);
  sqcRZGate(q, -2.441208482819936, 3);
  sqcRYGate(q, 0.09979147354694451, 4);
  sqcRZGate(q, -0.40126132741333825, 4);
  sqcRYGate(q, 0.0022246214028589506, 5);
  sqcRZGate(q, -1.8441465563347572, 5);
  sqcRYGate(q, -0.0033762676581261413, 6);
  sqcRZGate(q, 2.26768759334472, 6);
  sqcRYGate(q, 0.20508552715013106, 7);
  sqcRZGate(q, -0.7406680083808148, 7);
  sqcRYGate(q, 0.532549013940743, 8);
  sqcRZGate(q, -0.9580008158118395, 8);
  sqcRYGate(q, -3.1412185683760008, 9);
  sqcRZGate(q, -2.558349463581528, 9);
  sqcRYGate(q, -1.876768419733346, 10);
  sqcRZGate(q, -1.9636909445261344, 10);
  sqcRYGate(q, -0.006632975268758484, 11);
  sqcRZGate(q, -3.140574689066442, 11);
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
  sqcRYGate(q, -0.35603638477453003, 0);
  sqcRZGate(q, 2.487490591808602, 0);
  sqcRYGate(q, -2.178300924641194, 1);
  sqcRZGate(q, 0.9834633271487729, 1);
  sqcRYGate(q, 2.0450960183626483, 2);
  sqcRZGate(q, -0.43144337940852223, 2);
  sqcRYGate(q, 1.529014048122563, 3);
  sqcRZGate(q, 1.0369790013715274, 3);
  sqcRYGate(q, 3.135463084862058, 4);
  sqcRZGate(q, 1.6427104525855951, 4);
  sqcRYGate(q, -1.596816643952213, 5);
  sqcRZGate(q, -0.562724383455645, 5);
  sqcRYGate(q, -1.5560372562149176, 6);
  sqcRZGate(q, -1.4425693878959658, 6);
  sqcRYGate(q, 2.3889660311663516, 7);
  sqcRZGate(q, -3.0717974564716277, 7);
  sqcRYGate(q, -1.2361441186949422, 8);
  sqcRZGate(q, 0.5208464318258859, 8);
  sqcRYGate(q, 3.1411487783874024, 9);
  sqcRZGate(q, 0.4068706971530762, 9);
  sqcRYGate(q, -0.8298567710864111, 10);
  sqcRZGate(q, 0.014583156796024545, 10);
  sqcRYGate(q, 3.1240951444634706, 11);
  sqcRZGate(q, 1.5805039892243151, 11);
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
  sqcRYGate(q, 0.905313366477957, 0);
  sqcRZGate(q, -2.027139209156097, 0);
  sqcRYGate(q, -1.0795402171397805, 1);
  sqcRZGate(q, 2.042610867491433, 1);
  sqcRYGate(q, -1.3292378009556423, 2);
  sqcRZGate(q, 1.8311842692041296, 2);
  sqcRYGate(q, -0.0029134073408192407, 3);
  sqcRZGate(q, -1.839560354172585, 3);
  sqcRYGate(q, 3.1401389043157275, 4);
  sqcRZGate(q, -1.9849148078627907, 4);
  sqcRYGate(q, 3.1362550963097933, 5);
  sqcRZGate(q, -2.6920697622222036, 5);
  sqcRYGate(q, 3.1412955748107536, 6);
  sqcRZGate(q, -2.218344555295999, 6);
  sqcRYGate(q, 1.5667838640657028, 7);
  sqcRZGate(q, 2.511102029442019, 7);
  sqcRYGate(q, 3.111065234135038, 8);
  sqcRZGate(q, 2.97661993191669, 8);
  sqcRYGate(q, 3.1308328277544164, 9);
  sqcRZGate(q, -2.646863898841819, 9);
  sqcRYGate(q, -1.658193704149429, 10);
  sqcRZGate(q, 1.8732098721889867, 10);
  sqcRYGate(q, 2.5387172557953317, 11);
  sqcRZGate(q, -3.137635863850231, 11);
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
  sqcRYGate(q, -1.3185818528022242, 0);
  sqcRZGate(q, -1.377108288549623, 0);
  sqcRYGate(q, -2.613115748369631, 1);
  sqcRZGate(q, -0.6642380585694446, 1);
  sqcRYGate(q, -2.3371353593500173, 2);
  sqcRZGate(q, 3.062004980227117, 2);
  sqcRYGate(q, -2.6424115672699444, 3);
  sqcRZGate(q, -0.16117374675558435, 3);
  sqcRYGate(q, 3.0624644839981428, 4);
  sqcRZGate(q, -2.173624619712692, 4);
  sqcRYGate(q, -0.3489605389649915, 5);
  sqcRZGate(q, -1.640738261440993, 5);
  sqcRYGate(q, 0.42546848899751133, 6);
  sqcRZGate(q, -0.35713418706892425, 6);
  sqcRYGate(q, 3.1394733645592083, 7);
  sqcRZGate(q, -2.8537289200278084, 7);
  sqcRYGate(q, 1.7909349316630687, 8);
  sqcRZGate(q, -2.9055684728731452, 8);
  sqcRYGate(q, -0.10414405285129318, 9);
  sqcRZGate(q, 1.524748114975601, 9);
  sqcRYGate(q, -0.9992775937816135, 10);
  sqcRZGate(q, 0.6633524354437755, 10);
  sqcRYGate(q, -1.56928351108711, 11);
  sqcRZGate(q, 0.25782107339350274, 11);
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
  sqcRYGate(q, 2.387566944875709, 0);
  sqcRZGate(q, 1.9091800951201634, 0);
  sqcRYGate(q, -2.6884048142674275, 1);
  sqcRZGate(q, -2.4264822794138574, 1);
  sqcRYGate(q, 0.4917464709455238, 2);
  sqcRZGate(q, -0.6200586981165711, 2);
  sqcRYGate(q, -0.008364419911160326, 3);
  sqcRZGate(q, -0.4775634133007521, 3);
  sqcRYGate(q, 3.1385843556500306, 4);
  sqcRZGate(q, 1.2893037227552888, 4);
  sqcRYGate(q, -0.007910332054283901, 5);
  sqcRZGate(q, -0.9006120161800775, 5);
  sqcRYGate(q, -0.006880897270504782, 6);
  sqcRZGate(q, -2.044804551703259, 6);
  sqcRYGate(q, -3.133871836710172, 7);
  sqcRZGate(q, 1.2655911951656504, 7);
  sqcRYGate(q, 3.113153456332376, 8);
  sqcRZGate(q, -2.6682461070969836, 8);
  sqcRYGate(q, 1.5742388328359351, 9);
  sqcRZGate(q, 0.3695851242425495, 9);
  sqcRYGate(q, -0.018110045245175677, 10);
  sqcRZGate(q, -1.5886252278225295, 10);
  sqcRYGate(q, -1.4408305088479647, 11);
  sqcRZGate(q, -0.503355952398123, 11);
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
  sqcRYGate(q, 2.0830075054950035, 0);
  sqcRZGate(q, -2.0804205745459754, 0);
  sqcRYGate(q, -2.1321637893710372, 1);
  sqcRZGate(q, 0.4420262181853918, 1);
  sqcRYGate(q, -1.9048096936262224, 2);
  sqcRZGate(q, -0.6602622798367432, 2);
  sqcRYGate(q, 1.9505984964594, 3);
  sqcRZGate(q, 1.4104859770575224, 3);
  sqcRYGate(q, -0.1575974259868227, 4);
  sqcRZGate(q, -2.7168266308610134, 4);
  sqcRYGate(q, -1.8568104460086805, 5);
  sqcRZGate(q, 2.5148800577872756, 5);
  sqcRYGate(q, 1.3008950260610606, 6);
  sqcRZGate(q, 2.4477538911282273, 6);
  sqcRYGate(q, -0.32585262581691676, 7);
  sqcRZGate(q, -0.027994285359784016, 7);
  sqcRYGate(q, -1.5057901947003005, 8);
  sqcRZGate(q, -1.0499549312829217, 8);
  sqcRYGate(q, 2.9029920197455636, 9);
  sqcRZGate(q, -1.2617498277981705, 9);
  sqcRYGate(q, 1.1294957809198214, 10);
  sqcRZGate(q, -1.8326697992395018, 10);
  sqcRYGate(q, -3.1387376410977827, 11);
  sqcRZGate(q, 2.679945212080271, 11);
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
  sqcRYGate(q, -1.5009508704607617, 0);
  sqcRZGate(q, -1.5981192609031911, 0);
  sqcRYGate(q, -0.39699324582632656, 1);
  sqcRZGate(q, 3.09507529148072, 1);
  sqcRYGate(q, -1.4971677876969118, 2);
  sqcRZGate(q, -0.8267961690243313, 2);
  sqcRYGate(q, 1.0377510559278704, 3);
  sqcRZGate(q, 3.1252272626742665, 3);
  sqcRYGate(q, 0.02963648095140288, 4);
  sqcRZGate(q, -1.410730988639319, 4);
  sqcRYGate(q, -0.001624999266121083, 5);
  sqcRZGate(q, -2.3224533981540874, 5);
  sqcRYGate(q, 0.030626635358400243, 6);
  sqcRZGate(q, 1.9706850303413241, 6);
  sqcRYGate(q, -3.1326552307258924, 7);
  sqcRZGate(q, 0.5722304356254283, 7);
  sqcRYGate(q, -0.0023731281885614633, 8);
  sqcRZGate(q, -0.5945620995322942, 8);
  sqcRYGate(q, 0.011224015471229087, 9);
  sqcRZGate(q, -3.102537233965513, 9);
  sqcRYGate(q, -3.017206921283987, 10);
  sqcRZGate(q, -2.9661906969039773, 10);
  sqcRYGate(q, -0.06374700606926237, 11);
  sqcRZGate(q, -0.8468988798981893, 11);
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
  sqcRYGate(q, 1.6435473927390871, 0);
  sqcRZGate(q, 1.3303910332377535, 0);
  sqcRYGate(q, -0.0010359411174968552, 1);
  sqcRZGate(q, 2.457118459164546, 1);
  sqcRYGate(q, 1.5673091644359474, 2);
  sqcRZGate(q, 3.090920860669262, 2);
  sqcRYGate(q, 0.7206994155233742, 3);
  sqcRZGate(q, -0.21872566510735417, 3);
  sqcRYGate(q, 2.8616994172779173, 4);
  sqcRZGate(q, 2.246412042479897, 4);
  sqcRYGate(q, -1.57187683967872, 5);
  sqcRZGate(q, 1.0983380476648374, 5);
  sqcRYGate(q, 1.6303298197957798, 6);
  sqcRZGate(q, -0.0905247486051559, 6);
  sqcRYGate(q, 2.888326510102111, 7);
  sqcRZGate(q, -1.2864352425929884, 7);
  sqcRYGate(q, 2.2118507003329553, 8);
  sqcRZGate(q, 1.1590097022253658, 8);
  sqcRYGate(q, -1.487815370427645, 9);
  sqcRZGate(q, 2.6235107526309016, 9);
  sqcRYGate(q, -1.3685956807139437, 10);
  sqcRZGate(q, 0.16905148858562818, 10);
  sqcRYGate(q, -0.003974304369034343, 11);
  sqcRZGate(q, -0.5693950955342961, 11);
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
  sqcRYGate(q, -1.5703828013386065, 0);
  sqcRZGate(q, 1.5694703926470497, 0);
  sqcRYGate(q, -0.37934984382145925, 1);
  sqcRZGate(q, 3.0650969769912106, 1);
  sqcRYGate(q, 0.08623011990513725, 2);
  sqcRZGate(q, -3.095007214578013, 2);
  sqcRYGate(q, 3.137207443883392, 3);
  sqcRZGate(q, 2.8847917117872752, 3);
  sqcRYGate(q, 0.021271197604626875, 4);
  sqcRZGate(q, -0.518143556528894, 4);
  sqcRYGate(q, 3.1398811980352805, 5);
  sqcRZGate(q, -2.5191867874062717, 5);
  sqcRYGate(q, -1.5866055846319034, 6);
  sqcRZGate(q, 1.790488328964332, 6);
  sqcRYGate(q, -1.3648188435085051, 7);
  sqcRZGate(q, 4.424996593055397e-05, 7);
  sqcRYGate(q, -0.0010621812797127538, 8);
  sqcRZGate(q, -2.8069147505053245, 8);
  sqcRYGate(q, -0.0045963499469579006, 9);
  sqcRZGate(q, 0.7406107465661718, 9);
  sqcRYGate(q, 0.049331396147598225, 10);
  sqcRZGate(q, 0.37216929867414006, 10);
  sqcRYGate(q, 1.5757032480192699, 11);
  sqcRZGate(q, -1.0269064587247145, 11);
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
  sqcRYGate(q, -1.574124117020775, 0);
  sqcRZGate(q, -1.404149611332517, 0);
  sqcRYGate(q, 0.6712109841414078, 1);
  sqcRZGate(q, 0.8693549013110676, 1);
  sqcRYGate(q, -2.562264686147526, 2);
  sqcRZGate(q, -0.0026456190251145464, 2);
  sqcRYGate(q, 0.36947483290888794, 3);
  sqcRZGate(q, 1.087891688391026, 3);
  sqcRYGate(q, -1.5741964013020677, 4);
  sqcRZGate(q, 3.0940594128682495, 4);
  sqcRYGate(q, -0.0027346744113883052, 5);
  sqcRZGate(q, -1.0731515230067663, 5);
  sqcRYGate(q, 3.140011594540749, 6);
  sqcRZGate(q, -3.120670893582479, 6);
  sqcRYGate(q, 1.5658147352529443, 7);
  sqcRZGate(q, 3.141211488321362, 7);
  sqcRYGate(q, 1.5694913781529358, 8);
  sqcRZGate(q, 0.7434058286867186, 8);
  sqcRYGate(q, 2.5151328667803905, 9);
  sqcRZGate(q, 1.5713917110144515, 9);
  sqcRYGate(q, -0.00017652634188123367, 10);
  sqcRZGate(q, 2.1967874153359865, 10);
  sqcRYGate(q, -3.1404772087115993, 11);
  sqcRZGate(q, -2.597009137036243, 11);
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
  sqcRYGate(q, 2.1775758734673896, 0);
  sqcRZGate(q, -1.8988582390137392, 0);
  sqcRYGate(q, 0.0018301217498999378, 1);
  sqcRZGate(q, 0.6180060296711023, 1);
  sqcRYGate(q, -1.5717283702373763, 2);
  sqcRZGate(q, 3.092252038550229, 2);
  sqcRYGate(q, -3.1384944956116385, 3);
  sqcRZGate(q, -1.9748965095772637, 3);
  sqcRYGate(q, 0.0038053152904643298, 4);
  sqcRZGate(q, -2.920363307901022, 4);
  sqcRYGate(q, -0.003109703140916409, 5);
  sqcRZGate(q, 3.11936338979517, 5);
  sqcRYGate(q, 3.1408629451283336, 6);
  sqcRZGate(q, -0.9453924753774849, 6);
  sqcRYGate(q, 1.8207289451092847, 7);
  sqcRZGate(q, 0.0006930786654502086, 7);
  sqcRYGate(q, -0.0034620107417624646, 8);
  sqcRZGate(q, -2.9377709397324545, 8);
  sqcRYGate(q, 1.5732679814804325, 9);
  sqcRZGate(q, 1.2513310494305623, 9);
  sqcRYGate(q, 3.1407402981679122, 10);
  sqcRZGate(q, 2.89715939433997, 10);
  sqcRYGate(q, 1.5670293259813022, 11);
  sqcRZGate(q, 1.5659708010254345, 11);
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
  sqcRYGate(q, -1.569674709809459, 0);
  sqcRZGate(q, 0.48073833610906913, 0);
  sqcRYGate(q, -3.0835408747005406, 1);
  sqcRZGate(q, 0.6694303938909627, 1);
  sqcRYGate(q, 0.14514538143487948, 2);
  sqcRZGate(q, -1.0416481876449835, 2);
  sqcRYGate(q, 3.140834078301586, 3);
  sqcRZGate(q, 1.4365975018146289, 3);
  sqcRYGate(q, -0.001574434560024564, 4);
  sqcRZGate(q, 0.3051895903940976, 4);
  sqcRYGate(q, -1.5721989017205917, 5);
  sqcRZGate(q, -1.8188505768639978, 5);
  sqcRYGate(q, -3.141314529039998, 6);
  sqcRZGate(q, -1.8375039888970128, 6);
  sqcRYGate(q, -1.5694081400181872, 7);
  sqcRZGate(q, -1.8485385440075177, 7);
  sqcRYGate(q, 3.135616618482644, 8);
  sqcRZGate(q, 2.986527987764697, 8);
  sqcRYGate(q, 0.001590327849032569, 9);
  sqcRZGate(q, -1.504376420074635, 9);
  sqcRYGate(q, 0.009426343528041614, 10);
  sqcRZGate(q, -2.8162994152037766, 10);
  sqcRYGate(q, 1.568634162955013, 11);
  sqcRZGate(q, 1.3238914311738557, 11);

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
