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

  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.35073734334662304, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.27719358784030224, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.21626103784690265, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5757285516333207, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.4919242849508533, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.123603907218155, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.16988228453612927, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.8966038553678525, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.20174957830602805, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.30994590435786956, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0513096012657155, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.1938746545519812, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.05786109055798442, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.24900524203879382, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 1.568260933566611, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.04684264662943608, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.013545662925781765, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.04158989692536143, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.0040431400870641, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.02173404592181258, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.26022255645107495, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.3450240092746938, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.324635714422382, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.1179521643618269, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.25768851990855113, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.1064603801814281, 11);
  sqcCXGate(q, 10, 11);
  sqcRXGate(q, -0.9116969429561917, 0);
  sqcRZGate(q, 0.0005849589383684091, 0);
  sqcRXGate(q, -0.0022692084964160194, 1);
  sqcRZGate(q, -0.8803917544691036, 1);
  sqcRXGate(q, 0.0003899320441774286, 2);
  sqcRZGate(q, -0.018887205417241412, 2);
  sqcRXGate(q, 0.0004317490325184403, 3);
  sqcRZGate(q, -0.2944541425930223, 3);
  sqcRXGate(q, -0.00018893834455756595, 4);
  sqcRZGate(q, -0.5162297710666153, 4);
  sqcRXGate(q, -0.0005631926295431054, 5);
  sqcRZGate(q, 0.016814679882620996, 5);
  sqcRXGate(q, -0.0001396810213009927, 6);
  sqcRZGate(q, -0.25070099069678814, 6);
  sqcRXGate(q, 7.583018629356163e-05, 7);
  sqcRZGate(q, 0.5031589719158993, 7);
  sqcRXGate(q, 0.003841121291496433, 8);
  sqcRZGate(q, 0.04283959322624218, 8);
  sqcRXGate(q, -0.021460924184601816, 9);
  sqcRZGate(q, -0.5880519581857828, 9);
  sqcRXGate(q, 0.0004129150585616488, 10);
  sqcRZGate(q, -0.807040117284252, 10);
  sqcRXGate(q, 0.013622757846607667, 11);
  sqcRZGate(q, 0.16718468258061334, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.9162785554141147, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.00016445719239236236, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.00020886695577083004, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.273161438555785, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5107351405351984, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0035438689401178862, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.02156479017220886, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.47834325624580526, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5084721749547445, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.049089774329124924, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05712492068635787, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.19892352392456158, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.037976472397033126, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6991852107085436, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.019337568099708758, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.12019977746217633, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.012179584617922193, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.09300488772998317, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.021725047753943637, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.007623653257396485, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.610589669193731, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.056761206388904376, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.08229233596183891, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.9167367942874131, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.5620214850134919, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.14037083336048947, 11);
  sqcCXGate(q, 10, 11);
  sqcRXGate(q, -1.1981161343847613, 0);
  sqcRZGate(q, -0.00023839030809002574, 0);
  sqcRXGate(q, 0.013793453719062015, 1);
  sqcRZGate(q, -0.1729796350153123, 1);
  sqcRXGate(q, -0.0023243969298309022, 2);
  sqcRZGate(q, -0.6644754736028107, 2);
  sqcRXGate(q, -1.7786232242006432, 3);
  sqcRZGate(q, -0.00024579186151952887, 3);
  sqcRXGate(q, 0.00012538102276914094, 4);
  sqcRZGate(q, -0.2412304600172829, 4);
  sqcRXGate(q, -3.1411256729827093, 5);
  sqcRZGate(q, -0.6112294682186169, 5);
  sqcRXGate(q, 0.0003723255008107779, 6);
  sqcRZGate(q, -0.11592352124437562, 6);
  sqcRXGate(q, -0.0006251710746604643, 7);
  sqcRZGate(q, -1.9561608319888686, 7);
  sqcRXGate(q, -0.003451788701871893, 8);
  sqcRZGate(q, -0.588866875574575, 8);
  sqcRXGate(q, 0.00087875350874175, 9);
  sqcRZGate(q, -0.2788016241979656, 9);
  sqcRXGate(q, -0.0003502731455748063, 10);
  sqcRZGate(q, -0.3737995872487978, 10);
  sqcRXGate(q, -1.4151079074555135, 11);
  sqcRZGate(q, -0.010987656110612016, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.02023755290577342, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0029198617569894296, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0018262834129368713, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6848990937478044, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0003565706409486724, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 3.040268519534988e-05, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 8.490209646484155e-05, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -4.856955119524651e-06, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.6874570486303797, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 5.275471925855532e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.16536897569429967, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.31130390538423686, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.04821479258508887, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.2812213015148803, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.36220138848233246, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.07822600222138873, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.02481042320375774, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.013897659957873553, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.03680732675436895, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.1833483958248084, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 1.1115971098819837, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09759785080610933, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.04293118819167527, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.09148027433205165, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.005912503087564226, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.0008778046074586233, 11);
  sqcCXGate(q, 10, 11);
  sqcRXGate(q, -1.033187622844705, 0);
  sqcRZGate(q, 0.04970259712269051, 0);
  sqcRXGate(q, -0.013781941613842968, 1);
  sqcRZGate(q, -0.7537362346002512, 1);
  sqcRXGate(q, 0.0010045625619708551, 2);
  sqcRZGate(q, -0.34020462085213393, 2);
  sqcRXGate(q, -1.3626569751481854, 3);
  sqcRZGate(q, -1.6003992944234195, 3);
  sqcRXGate(q, 0.0002835215148380882, 4);
  sqcRZGate(q, -0.6203151163249481, 4);
  sqcRXGate(q, 7.966017872094572e-05, 5);
  sqcRZGate(q, 1.0526617709414914, 5);
  sqcRXGate(q, -0.00015728839997758125, 6);
  sqcRZGate(q, 0.1483256721103731, 6);
  sqcRXGate(q, -0.00016562164756535439, 7);
  sqcRZGate(q, -0.016727917529832763, 7);
  sqcRXGate(q, -0.0003812937892811518, 8);
  sqcRZGate(q, 0.14476540232499685, 8);
  sqcRXGate(q, 0.0004117707201829052, 9);
  sqcRZGate(q, 0.06810095173144626, 9);
  sqcRXGate(q, 0.0006072757843072928, 10);
  sqcRZGate(q, -1.1543687482063576, 10);
  sqcRXGate(q, -1.7379596579717649, 11);
  sqcRZGate(q, 0.3667435909451954, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.8872403458436501, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6823685769909177, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.35328095111059493, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3419334213700788, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9176371990484982, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5848254064560522, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.10836452453233848, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.14431265196497398, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.7585327291118327, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5803941780352535, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.39075472514770876, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.27421428229503403, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2131310201109411, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.4958245444207734, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.4260290222639624, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.2750288618554675, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.2251676065996347, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.006261502419838147, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.188177502743347, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.8355186209507542, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.7652291890205033, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.44661313818452947, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.013254994178740107, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.311503542992744, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.18107318743574868, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.06913212134987803, 11);
  sqcCXGate(q, 10, 11);
  sqcRXGate(q, 0.00648617573027409, 0);
  sqcRZGate(q, 0.023581605643207344, 0);
  sqcRXGate(q, -0.0008296723652679628, 1);
  sqcRZGate(q, -0.7439548181825423, 1);
  sqcRXGate(q, 0.000189065739717981, 2);
  sqcRZGate(q, -0.013580805137518132, 2);
  sqcRXGate(q, -0.00023726392101730884, 3);
  sqcRZGate(q, -0.011138142766891004, 3);
  sqcRXGate(q, 5.835493128587468e-05, 4);
  sqcRZGate(q, -0.019573598332788756, 4);
  sqcRXGate(q, 1.9459745331714957e-06, 5);
  sqcRZGate(q, -0.00418315573197834, 5);
  sqcRXGate(q, 1.7687094061802142e-05, 6);
  sqcRZGate(q, 0.003834594304590378, 6);
  sqcRXGate(q, 0.00011640516243614828, 7);
  sqcRZGate(q, -0.014551874580015202, 7);
  sqcRXGate(q, 7.354143533300149e-06, 8);
  sqcRZGate(q, 0.06941766832324106, 8);
  sqcRXGate(q, 5.272607184383979e-05, 9);
  sqcRZGate(q, -0.00602379719671082, 9);
  sqcRXGate(q, 3.3756361893608587e-06, 10);
  sqcRZGate(q, -0.09728741158298537, 10);
  sqcRXGate(q, 0.00979665660669526, 11);
  sqcRZGate(q, -0.0018234629738169532, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.21473406314407106, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.10499125335159787, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8534238505573365, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2926196519755426, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3080555029523917, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.022971778346122594, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.9691797785393858, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.003142222180759482, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2537465154803165, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.06097423038810637, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.27219940258180897, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.4474234640513106, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.015215621332470064, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2671837762314409, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2351146359850979, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.8166638035899142, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -2.152920643954593, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.06509489399702914, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.515994348269241, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.124616741356379, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.9740810006138725, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.270497552199973, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.03168533300444126, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.16246017660395018, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -2.3165951032591043, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 1.265672556452646, 11);
  sqcCXGate(q, 10, 11);
  sqcRXGate(q, -0.004928623391086088, 0);
  sqcRZGate(q, 0.014193886970506407, 0);
  sqcRXGate(q, -0.0007200223840829527, 1);
  sqcRZGate(q, -0.10876115226487494, 1);
  sqcRXGate(q, -8.004480518657282e-05, 2);
  sqcRZGate(q, -0.0056695217756372925, 2);
  sqcRXGate(q, 5.669024825443149e-05, 3);
  sqcRZGate(q, 0.07326855238878402, 3);
  sqcRXGate(q, 4.0114794723739e-06, 4);
  sqcRZGate(q, 0.0186226432718242, 4);
  sqcRXGate(q, 3.910028238834438e-05, 5);
  sqcRZGate(q, -0.005573448161454334, 5);
  sqcRXGate(q, -6.263780898640604e-06, 6);
  sqcRZGate(q, -0.04064836968432852, 6);
  sqcRXGate(q, -7.489847845568513e-06, 7);
  sqcRZGate(q, -0.00010356810276929445, 7);
  sqcRXGate(q, 1.7408902439762654e-05, 8);
  sqcRZGate(q, -0.03544581526939564, 8);
  sqcRXGate(q, 4.715990517143845e-06, 9);
  sqcRZGate(q, 0.0040616229708078785, 9);
  sqcRXGate(q, -5.879250395297297e-05, 10);
  sqcRZGate(q, -0.01340279057782339, 10);
  sqcRXGate(q, 0.00019426071265017187, 11);
  sqcRZGate(q, -0.02684089129490604, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2387963023834894, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.8903659552234534, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.19525464724461516, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.173832469421938, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5793859862222441, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.2706142605648868, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.9386770255034994, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.12603095562160074, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3692330744352837, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6730956324028419, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.11449728065498373, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.008076778484822028, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.004157895721788114, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.16726117281741026, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.03054273210857375, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.6577388273166411, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 8);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.7076584796918343, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05060362936849965, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.4496852045353083, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 9);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 1.4029872815481543, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.08343859151841783, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 10);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.07179641349037436, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.030473598988047395, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.05331004145612545, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 11);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.06612720144777107, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.2638017131353245, 11);
  sqcCXGate(q, 10, 11);
  sqcRXGate(q, 0.0022501553715268134, 0);
  sqcRZGate(q, -0.053734108541073126, 0);
  sqcRXGate(q, 4.9222277274190164e-05, 1);
  sqcRZGate(q, 0.025042809185304153, 1);
  sqcRXGate(q, 3.9643380293444386e-05, 2);
  sqcRZGate(q, -0.05859915605740125, 2);
  sqcRXGate(q, -0.00011843249961022398, 3);
  sqcRZGate(q, -0.09505914944013337, 3);
  sqcRXGate(q, 5.8058312786579236e-05, 4);
  sqcRZGate(q, -0.08570253183057677, 4);
  sqcRXGate(q, -3.289667235532081e-05, 5);
  sqcRZGate(q, -0.09553805738528864, 5);
  sqcRXGate(q, 1.553459360841763e-05, 6);
  sqcRZGate(q, -0.0384365458196002, 6);
  sqcRXGate(q, 2.0794773855250836e-05, 7);
  sqcRZGate(q, -0.06181842472363564, 7);
  sqcRXGate(q, -3.372630609203793e-05, 8);
  sqcRZGate(q, -0.0480954143214666, 8);
  sqcRXGate(q, 0.0001419754958385555, 9);
  sqcRZGate(q, -0.052289471188532506, 9);
  sqcRXGate(q, 5.768192672069525e-05, 10);
  sqcRZGate(q, -0.059716203867362684, 10);
  sqcRXGate(q, 0.0008034838058696991, 11);
  sqcRZGate(q, -0.0457227258494411, 11);

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
