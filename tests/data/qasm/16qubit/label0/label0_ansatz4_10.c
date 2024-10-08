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

  sqcRYGate(q, 2.967608670032586, 0);
  sqcRZGate(q, 2.87982104659644, 0);
  sqcRYGate(q, 2.9321120591890257, 1);
  sqcRZGate(q, 0.5288683198105391, 1);
  sqcRYGate(q, 8.582892917363694e-05, 2);
  sqcRZGate(q, -1.5293415581552896, 2);
  sqcRYGate(q, -3.141582565543284, 3);
  sqcRZGate(q, -3.1142378531748083, 3);
  sqcRYGate(q, -0.2973463670657557, 4);
  sqcRZGate(q, 3.1415687483665398, 4);
  sqcRYGate(q, 1.076643143397059, 5);
  sqcRZGate(q, -0.0006407539849071497, 5);
  sqcRYGate(q, -7.028351069824256e-05, 6);
  sqcRZGate(q, -2.6082683916423375, 6);
  sqcRYGate(q, -5.351330678937671e-05, 7);
  sqcRZGate(q, 3.013148752409116, 7);
  sqcRYGate(q, -1.5714136786770327, 8);
  sqcRZGate(q, -1.5712862168892368, 8);
  sqcRYGate(q, -3.1415393514542016, 9);
  sqcRZGate(q, -0.016375383375702764, 9);
  sqcRYGate(q, 2.8730253462790656, 10);
  sqcRZGate(q, -0.09677254142407493, 10);
  sqcRYGate(q, 1.5716350781833803, 11);
  sqcRZGate(q, 1.377846459684992, 11);
  sqcRYGate(q, -1.5696144360079403, 12);
  sqcRZGate(q, -2.4511206293334884, 12);
  sqcRYGate(q, -0.5391573673054176, 13);
  sqcRZGate(q, -0.7686203307243209, 13);
  sqcRYGate(q, -0.47846321321345897, 14);
  sqcRZGate(q, 2.790871233973288, 14);
  sqcRYGate(q, -2.9162789974450156, 15);
  sqcRZGate(q, -0.9558226539643426, 15);
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
  sqcRYGate(q, 2.720838143943461, 0);
  sqcRZGate(q, 0.9978078264312638, 0);
  sqcRYGate(q, 1.8067922095225981, 1);
  sqcRZGate(q, -3.0464538772110084, 1);
  sqcRYGate(q, 3.0446091155573094, 2);
  sqcRZGate(q, -1.343314516589253, 2);
  sqcRYGate(q, 2.949658623578122, 3);
  sqcRZGate(q, 1.1343613160900161, 3);
  sqcRYGate(q, -2.9971945047416795, 4);
  sqcRZGate(q, 2.362078854092557, 4);
  sqcRYGate(q, -2.0839020532400605, 5);
  sqcRZGate(q, 1.6889960237810433, 5);
  sqcRYGate(q, 0.17605012179002572, 6);
  sqcRZGate(q, -0.9262113473396534, 6);
  sqcRYGate(q, 1.6998170134750512, 7);
  sqcRZGate(q, -1.3991802221499108, 7);
  sqcRYGate(q, 1.9133063268549562, 8);
  sqcRZGate(q, 3.08283437522018, 8);
  sqcRYGate(q, -3.141278443462032, 9);
  sqcRZGate(q, -0.14217102852656058, 9);
  sqcRYGate(q, 7.334994384435024e-05, 10);
  sqcRZGate(q, 0.6816390925971008, 10);
  sqcRYGate(q, 0.00010674003105040191, 11);
  sqcRZGate(q, 0.015520643666536493, 11);
  sqcRYGate(q, 3.1304571272001946, 12);
  sqcRZGate(q, 0.5468524288325884, 12);
  sqcRYGate(q, -0.002223141694712716, 13);
  sqcRZGate(q, -1.7629767935745158, 13);
  sqcRYGate(q, 2.5033786666017472, 14);
  sqcRZGate(q, 1.502850314485392, 14);
  sqcRYGate(q, 3.0823210105085357, 15);
  sqcRZGate(q, -2.8736391337175755, 15);
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
  sqcRYGate(q, -2.114208165150768, 0);
  sqcRZGate(q, -0.6897171878774704, 0);
  sqcRYGate(q, 2.262007105606832, 1);
  sqcRZGate(q, 1.6536593376565543, 1);
  sqcRYGate(q, 2.7912892507160336, 2);
  sqcRZGate(q, -0.2419757250285457, 2);
  sqcRYGate(q, -2.770506775167778, 3);
  sqcRZGate(q, 0.339519268503013, 3);
  sqcRYGate(q, -7.488934547073e-05, 4);
  sqcRZGate(q, -3.073445970301975, 4);
  sqcRYGate(q, -3.1413085797788147, 5);
  sqcRZGate(q, -1.7209346730778616, 5);
  sqcRYGate(q, 3.0462332258923275, 6);
  sqcRZGate(q, 0.6321319172894082, 6);
  sqcRYGate(q, 1.550921885906961, 7);
  sqcRZGate(q, -0.2962931941590705, 7);
  sqcRYGate(q, -1.5848220912977533, 8);
  sqcRZGate(q, -0.45866162553690065, 8);
  sqcRYGate(q, 3.138006657456404, 9);
  sqcRZGate(q, 2.003498946873978, 9);
  sqcRYGate(q, 3.111464385208462, 10);
  sqcRZGate(q, 0.7971233771356503, 10);
  sqcRYGate(q, -1.7162829781983004, 11);
  sqcRZGate(q, 1.7680559233664526, 11);
  sqcRYGate(q, 1.3413322473653086, 12);
  sqcRZGate(q, -0.18931482154184354, 12);
  sqcRYGate(q, -1.2476595995146358, 13);
  sqcRZGate(q, -0.647126308853216, 13);
  sqcRYGate(q, -1.6568144999016465, 14);
  sqcRZGate(q, -2.9220232219120312, 14);
  sqcRYGate(q, -0.19955782900081434, 15);
  sqcRZGate(q, 0.47002083430251324, 15);
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
  sqcRYGate(q, 1.4053606146663071, 0);
  sqcRZGate(q, 2.8521148822709383, 0);
  sqcRYGate(q, -2.2429801716972424, 1);
  sqcRZGate(q, -2.1912827950832696, 1);
  sqcRYGate(q, 3.030173307259012, 2);
  sqcRZGate(q, 2.2427295820193027, 2);
  sqcRYGate(q, -0.06532669224265808, 3);
  sqcRZGate(q, -2.721386696562055, 3);
  sqcRYGate(q, 3.1415052005273494, 4);
  sqcRZGate(q, 2.1550479728011727, 4);
  sqcRYGate(q, 0.0001506234708070764, 5);
  sqcRZGate(q, 0.48868685141285, 5);
  sqcRYGate(q, 1.6458962692279053, 6);
  sqcRZGate(q, -2.309663914834417, 6);
  sqcRYGate(q, -1.6957975483562782, 7);
  sqcRZGate(q, 0.08044409139166767, 7);
  sqcRYGate(q, -3.1373877960661396, 8);
  sqcRZGate(q, -2.3134332239746564, 8);
  sqcRYGate(q, -0.005097205473357569, 9);
  sqcRZGate(q, 2.0092766415562195, 9);
  sqcRYGate(q, -0.0002828726896613176, 10);
  sqcRZGate(q, 1.405580546714796, 10);
  sqcRYGate(q, -8.7613954306267e-05, 11);
  sqcRZGate(q, -1.7388515017866497, 11);
  sqcRYGate(q, 2.6337454871885715, 12);
  sqcRZGate(q, -1.2145594476726824, 12);
  sqcRYGate(q, -2.0182767027248296, 13);
  sqcRZGate(q, -1.6726943028758454, 13);
  sqcRYGate(q, -2.293428042465965, 14);
  sqcRZGate(q, 2.3481551520749444, 14);
  sqcRYGate(q, 0.02375844751748174, 15);
  sqcRZGate(q, 2.9933394959460817, 15);
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
  sqcRYGate(q, -2.654801360210886, 0);
  sqcRZGate(q, 0.6891545104614201, 0);
  sqcRYGate(q, 0.28737185944051813, 1);
  sqcRZGate(q, -3.073436997619132, 1);
  sqcRYGate(q, 0.38779132791292614, 2);
  sqcRZGate(q, -0.01953071614273306, 2);
  sqcRYGate(q, 2.7610006291276368, 3);
  sqcRZGate(q, 2.3204944006892565, 3);
  sqcRYGate(q, 0.03634979196220632, 4);
  sqcRZGate(q, 2.236250378082982, 4);
  sqcRYGate(q, -2.8794076802471245, 5);
  sqcRZGate(q, 0.7354961040808574, 5);
  sqcRYGate(q, 1.704338469855493, 6);
  sqcRZGate(q, -1.812220410868938, 6);
  sqcRYGate(q, 1.3073176850694352, 7);
  sqcRZGate(q, 2.1565850609014663, 7);
  sqcRYGate(q, -1.7455935527121529, 8);
  sqcRZGate(q, 2.9379240063599785, 8);
  sqcRYGate(q, 0.19652978569507606, 9);
  sqcRZGate(q, -0.25190130729906385, 9);
  sqcRYGate(q, 3.13017581371991, 10);
  sqcRZGate(q, 2.269628369785832, 10);
  sqcRYGate(q, 0.07582858172075824, 11);
  sqcRZGate(q, 1.6752833466483557, 11);
  sqcRYGate(q, 1.9073492254886943, 12);
  sqcRZGate(q, 0.6582210932838617, 12);
  sqcRYGate(q, -2.2097189201860283, 13);
  sqcRZGate(q, 0.6093671455310411, 13);
  sqcRYGate(q, -0.9583155664882071, 14);
  sqcRZGate(q, 2.695157488018967, 14);
  sqcRYGate(q, -2.9239890952248317, 15);
  sqcRZGate(q, 0.8866480549004762, 15);
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
  sqcRYGate(q, -0.9998465044639646, 0);
  sqcRZGate(q, 0.8947010370651359, 0);
  sqcRYGate(q, -0.6215549814014836, 1);
  sqcRZGate(q, -0.7415374525322421, 1);
  sqcRYGate(q, 3.141504872117153, 2);
  sqcRZGate(q, -2.7190645271003437, 2);
  sqcRYGate(q, 3.140850451789103, 3);
  sqcRZGate(q, 1.259493813504447, 3);
  sqcRYGate(q, -0.00035945212995969206, 4);
  sqcRZGate(q, -1.6983567755795637, 4);
  sqcRYGate(q, 3.1413635089494933, 5);
  sqcRZGate(q, 1.0180353635761494, 5);
  sqcRYGate(q, 3.140465216067028, 6);
  sqcRZGate(q, -0.15140992373563764, 6);
  sqcRYGate(q, 0.41546128832941687, 7);
  sqcRZGate(q, 1.5709917085772407, 7);
  sqcRYGate(q, -1.6422962974707014, 8);
  sqcRZGate(q, 1.784321241431667, 8);
  sqcRYGate(q, -0.005418862620558647, 9);
  sqcRZGate(q, -1.728208173347161, 9);
  sqcRYGate(q, 0.008759251686806913, 10);
  sqcRZGate(q, -1.5376626689035566, 10);
  sqcRYGate(q, -0.00041747817565074286, 11);
  sqcRZGate(q, -1.6007101164286408, 11);
  sqcRYGate(q, 1.0615162415314634, 12);
  sqcRZGate(q, 0.7598188689973178, 12);
  sqcRYGate(q, 2.2435945284884435, 13);
  sqcRZGate(q, -0.9566821539962511, 13);
  sqcRYGate(q, -0.23253973750611667, 14);
  sqcRZGate(q, -2.004613966680763, 14);
  sqcRYGate(q, 0.09163759152434281, 15);
  sqcRZGate(q, -2.0703296959304343, 15);
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
  sqcRYGate(q, 2.0884980678300638, 0);
  sqcRZGate(q, -2.397841850317493, 0);
  sqcRYGate(q, 1.3755308458254256, 1);
  sqcRZGate(q, -0.1943352736407222, 1);
  sqcRYGate(q, -2.1660271639981374, 2);
  sqcRZGate(q, -0.44094962476569416, 2);
  sqcRYGate(q, 2.0079166963406325, 3);
  sqcRZGate(q, 0.2029371832427027, 3);
  sqcRYGate(q, -0.003772257754342356, 4);
  sqcRZGate(q, 1.0803767730511442, 4);
  sqcRYGate(q, -3.137073538147577, 5);
  sqcRZGate(q, 2.394117743063453, 5);
  sqcRYGate(q, 1.5735834996328046, 6);
  sqcRZGate(q, 1.573913001703577, 6);
  sqcRYGate(q, 1.5701056971896084, 7);
  sqcRZGate(q, -1.8622954434447703, 7);
  sqcRYGate(q, 3.139679940825968, 8);
  sqcRZGate(q, -0.9355062422866088, 8);
  sqcRYGate(q, -4.132227153232555e-05, 9);
  sqcRZGate(q, -2.738562281359061, 9);
  sqcRYGate(q, -3.1410011426975055, 10);
  sqcRZGate(q, 2.278177060359004, 10);
  sqcRYGate(q, -3.1414007120732887, 11);
  sqcRZGate(q, 1.7131196010494696, 11);
  sqcRYGate(q, 3.041375117389098, 12);
  sqcRZGate(q, -2.105133421555017, 12);
  sqcRYGate(q, -2.9183261842170625, 13);
  sqcRZGate(q, -1.2917743314273904, 13);
  sqcRYGate(q, -0.6506475733784223, 14);
  sqcRZGate(q, -1.9031653085933058, 14);
  sqcRYGate(q, -1.5570663175064627, 15);
  sqcRZGate(q, 1.8017020565736244, 15);
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
  sqcRYGate(q, -1.6261290681786134, 0);
  sqcRZGate(q, 2.6162989938139547, 0);
  sqcRYGate(q, 1.5643231679332061, 1);
  sqcRZGate(q, -1.1201959645375326, 1);
  sqcRYGate(q, -3.140270082851448, 2);
  sqcRZGate(q, 0.12725440400595023, 2);
  sqcRYGate(q, 3.1412880734546547, 3);
  sqcRZGate(q, -1.698263148398579, 3);
  sqcRYGate(q, 0.0032754090711275344, 4);
  sqcRZGate(q, -1.6541235787122202, 4);
  sqcRYGate(q, 3.1412509580142953, 5);
  sqcRZGate(q, 2.116576121018754, 5);
  sqcRYGate(q, 1.1473017075199252, 6);
  sqcRZGate(q, -3.022763334913555, 6);
  sqcRYGate(q, 1.5721584486433517, 7);
  sqcRZGate(q, -2.2937218429477735, 7);
  sqcRYGate(q, 0.33316459504583995, 8);
  sqcRZGate(q, -2.0088584848627606, 8);
  sqcRYGate(q, -1.5712768829413624, 9);
  sqcRZGate(q, -2.9798630551509273, 9);
  sqcRYGate(q, -0.23768687008894762, 10);
  sqcRZGate(q, 2.96927534196648, 10);
  sqcRYGate(q, -3.111208746572737, 11);
  sqcRZGate(q, 0.9206510993448198, 11);
  sqcRYGate(q, 2.9584359519759618, 12);
  sqcRZGate(q, 2.3314190908060186, 12);
  sqcRYGate(q, 2.93469974372544, 13);
  sqcRZGate(q, -1.9085493927289632, 13);
  sqcRYGate(q, -0.011374211274080108, 14);
  sqcRZGate(q, 1.9530980034637786, 14);
  sqcRYGate(q, 2.933526929846931, 15);
  sqcRZGate(q, 1.6656567994996248, 15);
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
  sqcRYGate(q, -1.305399026944439, 0);
  sqcRZGate(q, 0.9627541433326217, 0);
  sqcRYGate(q, -2.405267762400039, 1);
  sqcRZGate(q, 1.4632098698513907, 1);
  sqcRYGate(q, 2.9818678072453944, 2);
  sqcRZGate(q, 0.9927313476406017, 2);
  sqcRYGate(q, 2.0151069962988624, 3);
  sqcRZGate(q, -2.000180814606799, 3);
  sqcRYGate(q, -3.1259523049760256, 4);
  sqcRZGate(q, -1.6979278818803627, 4);
  sqcRYGate(q, -3.047706731250092, 5);
  sqcRZGate(q, -1.7291252842756633, 5);
  sqcRYGate(q, 3.141362522364738, 6);
  sqcRZGate(q, -1.4509004472638631, 6);
  sqcRYGate(q, -2.797141561181412, 7);
  sqcRZGate(q, -0.7767295065335462, 7);
  sqcRYGate(q, 0.20992272938726408, 8);
  sqcRZGate(q, 1.7168467518187258, 8);
  sqcRYGate(q, -3.1415233427403733, 9);
  sqcRZGate(q, 0.4716580418805041, 9);
  sqcRYGate(q, 2.899429512200338, 10);
  sqcRZGate(q, -2.994338876725053, 10);
  sqcRYGate(q, 0.9346088929505516, 11);
  sqcRZGate(q, 1.7486441025275177, 11);
  sqcRYGate(q, -1.567646713734812, 12);
  sqcRZGate(q, 1.5266132206366585, 12);
  sqcRYGate(q, -1.5675359075661832, 13);
  sqcRZGate(q, 0.633850563529807, 13);
  sqcRYGate(q, 0.8748672216945499, 14);
  sqcRZGate(q, 0.31827449580611306, 14);
  sqcRYGate(q, -1.7196250203573733, 15);
  sqcRZGate(q, -2.057381619663633, 15);
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
  sqcRYGate(q, -1.443896896089849, 0);
  sqcRZGate(q, 1.4921121795032173, 0);
  sqcRYGate(q, -0.5410755572368426, 1);
  sqcRZGate(q, 2.2479940212736134, 1);
  sqcRYGate(q, -0.00017268398135032132, 2);
  sqcRZGate(q, -1.9257485182996694, 2);
  sqcRYGate(q, 0.00034771508265566103, 3);
  sqcRZGate(q, -2.757407000995264, 3);
  sqcRYGate(q, 3.0614613696765365, 4);
  sqcRZGate(q, -0.2978487830635297, 4);
  sqcRYGate(q, -0.011773915653010168, 5);
  sqcRZGate(q, -3.0499186905216353, 5);
  sqcRYGate(q, 1.5861809331850882, 6);
  sqcRZGate(q, -1.879557188861186, 6);
  sqcRYGate(q, 1.5711687881236713, 7);
  sqcRZGate(q, -0.02602020198951749, 7);
  sqcRYGate(q, -0.0008023232068099517, 8);
  sqcRZGate(q, 1.4172874756777072, 8);
  sqcRYGate(q, -3.141466661023239, 9);
  sqcRZGate(q, -2.833549435631534, 9);
  sqcRYGate(q, 3.1414400646898337, 10);
  sqcRZGate(q, -1.1257590742900698, 10);
  sqcRYGate(q, 2.206832392298253e-05, 11);
  sqcRZGate(q, -1.7077940387978419, 11);
  sqcRYGate(q, 0.0017296538757764553, 12);
  sqcRZGate(q, 1.6147421701148545, 12);
  sqcRYGate(q, -0.001242107667860193, 13);
  sqcRZGate(q, -0.6265204633469124, 13);
  sqcRYGate(q, -0.8496489345059316, 14);
  sqcRZGate(q, -0.5964893881953457, 14);
  sqcRYGate(q, -3.023938548715986, 15);
  sqcRZGate(q, -1.2194787696219849, 15);
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
  sqcRYGate(q, 0.8653626832449604, 0);
  sqcRZGate(q, 1.2611137165332638, 0);
  sqcRYGate(q, -1.7893757813825912, 1);
  sqcRZGate(q, 0.9614722408952384, 1);
  sqcRYGate(q, 0.7946578174490547, 2);
  sqcRZGate(q, -1.5374606825859116, 2);
  sqcRYGate(q, 1.0871401341406397, 3);
  sqcRZGate(q, 2.413933156564404, 3);
  sqcRYGate(q, 3.61809378901512e-07, 4);
  sqcRZGate(q, 0.24627575128536883, 4);
  sqcRYGate(q, 3.1412524826614363, 5);
  sqcRZGate(q, 3.119109944676372, 5);
  sqcRYGate(q, 3.1364099095417317, 6);
  sqcRZGate(q, -2.0531894463425573, 6);
  sqcRYGate(q, 3.1176235902249183, 7);
  sqcRZGate(q, -2.937476870573234, 7);
  sqcRYGate(q, -1.570276102594759, 8);
  sqcRZGate(q, -1.327722507779196, 8);
  sqcRYGate(q, -1.5709412868479988, 9);
  sqcRZGate(q, -1.837639916902719, 9);
  sqcRYGate(q, -2.061192507888527, 10);
  sqcRZGate(q, -1.2963116499264336, 10);
  sqcRYGate(q, 2.1712149117698103, 11);
  sqcRZGate(q, 0.8181455657404033, 11);
  sqcRYGate(q, 1.5710865285762141, 12);
  sqcRZGate(q, -2.202410893275892, 12);
  sqcRYGate(q, -1.5684327673198775, 13);
  sqcRZGate(q, 0.7185441615664904, 13);
  sqcRYGate(q, -2.281930364560462, 14);
  sqcRZGate(q, -2.4390043312575798, 14);
  sqcRYGate(q, 3.1046241824164382, 15);
  sqcRZGate(q, 0.171765798731201, 15);
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
  sqcRYGate(q, 1.479413642060796, 0);
  sqcRZGate(q, -1.571013088877147, 0);
  sqcRYGate(q, 1.0943301736009516, 1);
  sqcRZGate(q, 1.8668874253139789, 1);
  sqcRYGate(q, -1.5696035474704388, 2);
  sqcRZGate(q, 0.000926343463764745, 2);
  sqcRYGate(q, 1.5725449646065222, 3);
  sqcRZGate(q, 3.139059352513195, 3);
  sqcRYGate(q, -0.2774140129913178, 4);
  sqcRZGate(q, 3.0764151131083293, 4);
  sqcRYGate(q, 0.03638135869571179, 5);
  sqcRZGate(q, 2.8020022996937484, 5);
  sqcRYGate(q, 1.2452774756133653, 6);
  sqcRZGate(q, -2.7142154951677835, 6);
  sqcRYGate(q, 0.1255184234009899, 7);
  sqcRZGate(q, -1.2724896610664571, 7);
  sqcRYGate(q, 0.0027624592297241786, 8);
  sqcRZGate(q, -0.38551924033105855, 8);
  sqcRYGate(q, 0.00017625400418541656, 9);
  sqcRZGate(q, -0.10960802114248243, 9);
  sqcRYGate(q, 1.5709417490711806, 10);
  sqcRZGate(q, 1.5037933107945047, 10);
  sqcRYGate(q, 1.5709544860371025, 11);
  sqcRZGate(q, -1.5747151127350314, 11);
  sqcRYGate(q, -0.01544552304533534, 12);
  sqcRZGate(q, 1.529286412776158, 12);
  sqcRYGate(q, 0.016906866103254536, 13);
  sqcRZGate(q, 1.5746402768802819, 13);
  sqcRYGate(q, 2.5066374448154507, 14);
  sqcRZGate(q, -1.2358848611412565, 14);
  sqcRYGate(q, 0.014386274338773375, 15);
  sqcRZGate(q, 2.9617446216642525, 15);
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
  sqcRYGate(q, 1.822555003175336, 0);
  sqcRZGate(q, -1.5716236425963697, 0);
  sqcRYGate(q, -1.6164022849782735, 1);
  sqcRZGate(q, 1.5901767896915864, 1);
  sqcRYGate(q, 1.5734803528343926, 2);
  sqcRZGate(q, -1.1492592039765146, 2);
  sqcRYGate(q, 1.5678184330634144, 3);
  sqcRZGate(q, -1.5656091938842696, 3);
  sqcRYGate(q, -3.1414724729305625, 4);
  sqcRZGate(q, 1.513719372862626, 4);
  sqcRYGate(q, -2.996552765221696e-05, 5);
  sqcRZGate(q, -1.2551635189110353, 5);
  sqcRYGate(q, -3.1410346998857865, 6);
  sqcRZGate(q, -1.1735426734553422, 6);
  sqcRYGate(q, -3.1407474266381707, 7);
  sqcRZGate(q, -1.0427584669714418, 7);
  sqcRYGate(q, -3.14141853233849, 8);
  sqcRZGate(q, 1.9917582631894977, 8);
  sqcRYGate(q, 3.141488452358122, 9);
  sqcRZGate(q, 2.772850668522071, 9);
  sqcRYGate(q, 0.05025523057638548, 10);
  sqcRZGate(q, 0.07086963481641773, 10);
  sqcRYGate(q, -1.0314859502295761, 11);
  sqcRZGate(q, 3.1317788881036264, 11);
  sqcRYGate(q, -3.1406905106162606, 12);
  sqcRZGate(q, -1.7759761602108854, 12);
  sqcRYGate(q, 0.0016367629261450024, 13);
  sqcRZGate(q, -1.7330786875366995, 13);
  sqcRYGate(q, -1.3450830048822562, 14);
  sqcRZGate(q, 0.11390411586200849, 14);
  sqcRYGate(q, -0.005547914762520506, 15);
  sqcRZGate(q, 1.230536959387118, 15);
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
  sqcRYGate(q, 0.26374274823092464, 0);
  sqcRZGate(q, 1.572697698119881, 0);
  sqcRYGate(q, 1.6320273520241946, 1);
  sqcRZGate(q, -3.1121309813491367, 1);
  sqcRYGate(q, -0.03567843931575432, 2);
  sqcRZGate(q, 1.1627644606024534, 2);
  sqcRYGate(q, 2.048753587552846, 3);
  sqcRZGate(q, 0.03905304639853213, 3);
  sqcRYGate(q, 1.5696773947417526, 4);
  sqcRZGate(q, 0.008501171578005895, 4);
  sqcRYGate(q, 1.5708870387914249, 5);
  sqcRZGate(q, 3.140767445158515, 5);
  sqcRYGate(q, -1.7433615569815402, 6);
  sqcRZGate(q, 2.818651547443542, 6);
  sqcRYGate(q, -1.6936011970743508, 7);
  sqcRZGate(q, -1.5401265749151658, 7);
  sqcRYGate(q, 3.1399060357739477, 8);
  sqcRZGate(q, -2.578820161541298, 8);
  sqcRYGate(q, -1.5673747735392478, 9);
  sqcRZGate(q, -0.0007292820786136445, 9);
  sqcRYGate(q, -1.5892858173922981, 10);
  sqcRZGate(q, 1.5711091229976488, 10);
  sqcRYGate(q, 1.4638934417930523, 11);
  sqcRZGate(q, -1.5707599140966353, 11);
  sqcRYGate(q, 2.536046532237192, 12);
  sqcRZGate(q, 1.3347666562751674, 12);
  sqcRYGate(q, 2.3453833915493614, 13);
  sqcRZGate(q, -1.7896764147596862, 13);
  sqcRYGate(q, -2.611891424610545, 14);
  sqcRZGate(q, 1.6666182210431433, 14);
  sqcRYGate(q, 1.5676122159648598, 15);
  sqcRZGate(q, 0.027631728256738874, 15);

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
