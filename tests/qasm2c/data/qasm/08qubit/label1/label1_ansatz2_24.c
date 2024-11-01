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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.8534978730682148, 0);
  sqcRZGate(q, -2.675572487585794, 0);
  sqcRYGate(q, -2.7392667264768, 1);
  sqcRZGate(q, 0.6487381165069906, 1);
  sqcRYGate(q, 1.0277661240905935, 2);
  sqcRZGate(q, 2.166720567390656, 2);
  sqcRYGate(q, -0.44180350770928367, 3);
  sqcRZGate(q, 0.8579889854934324, 3);
  sqcRYGate(q, -1.6909684006708758, 4);
  sqcRZGate(q, 1.519197238381957, 4);
  sqcRYGate(q, 2.6709986284478564, 5);
  sqcRZGate(q, -2.933810632079711, 5);
  sqcRYGate(q, 2.7741002325986397, 6);
  sqcRZGate(q, 2.467644413986362, 6);
  sqcRYGate(q, -0.6832857330372688, 7);
  sqcRZGate(q, -3.088115298241717, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1273057774331674, 0);
  sqcRZGate(q, -1.9743760039218001, 0);
  sqcRYGate(q, 2.8886464737156103, 1);
  sqcRZGate(q, 0.596025566153954, 1);
  sqcRYGate(q, 1.2329877572870647, 2);
  sqcRZGate(q, -0.8366141904556557, 2);
  sqcRYGate(q, 1.852575811274375, 3);
  sqcRZGate(q, -0.144093615667467, 3);
  sqcRYGate(q, 2.1045804824939545, 4);
  sqcRZGate(q, 1.2528366831780249, 4);
  sqcRYGate(q, -3.085072200048734, 5);
  sqcRZGate(q, 0.7616072904435464, 5);
  sqcRYGate(q, -1.690711718764692, 6);
  sqcRZGate(q, 2.5678234231591848, 6);
  sqcRYGate(q, 1.1061381763959806, 7);
  sqcRZGate(q, 1.990959701498498, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.630378155756638, 0);
  sqcRZGate(q, 1.1210645725047534, 0);
  sqcRYGate(q, 1.9878693036890323, 1);
  sqcRZGate(q, -2.6952617228877154, 1);
  sqcRYGate(q, -0.7513005564847216, 2);
  sqcRZGate(q, 0.9353740352401783, 2);
  sqcRYGate(q, 1.2633174742682698, 3);
  sqcRZGate(q, -2.5764322490642075, 3);
  sqcRYGate(q, -1.7574770747426287, 4);
  sqcRZGate(q, 1.520360403773992, 4);
  sqcRYGate(q, -0.5948671335947182, 5);
  sqcRZGate(q, 0.2538007104103898, 5);
  sqcRYGate(q, -1.9858731704640018, 6);
  sqcRZGate(q, -0.7708622476560594, 6);
  sqcRYGate(q, -1.5651715474297194, 7);
  sqcRZGate(q, 3.08445576661384, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.9789457483882026, 0);
  sqcRZGate(q, 3.1152753412017553, 0);
  sqcRYGate(q, 0.18800757326614181, 1);
  sqcRZGate(q, 2.1237317275568603, 1);
  sqcRYGate(q, -1.8835926840352224, 2);
  sqcRZGate(q, -3.0739917103806675, 2);
  sqcRYGate(q, -0.7512006910082158, 3);
  sqcRZGate(q, 1.5966124683385923, 3);
  sqcRYGate(q, -2.6417583801213835, 4);
  sqcRZGate(q, 2.6823447114799728, 4);
  sqcRYGate(q, 3.0195199208562427, 5);
  sqcRZGate(q, -1.3101544726724572, 5);
  sqcRYGate(q, 0.6230967439799744, 6);
  sqcRZGate(q, 1.1262651757307176, 6);
  sqcRYGate(q, 0.38585279538116524, 7);
  sqcRZGate(q, -2.3546469007379884, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.8839419931244098, 0);
  sqcRZGate(q, 2.4468919912104132, 0);
  sqcRYGate(q, 1.3656258907379797, 1);
  sqcRZGate(q, -0.3115812798607731, 1);
  sqcRYGate(q, -1.1198257325327212, 2);
  sqcRZGate(q, 2.6093699668353048, 2);
  sqcRYGate(q, -2.0627513603234684, 3);
  sqcRZGate(q, 0.8297055786043956, 3);
  sqcRYGate(q, 1.113574516772637, 4);
  sqcRZGate(q, -0.9870693674651241, 4);
  sqcRYGate(q, -0.5468711572870806, 5);
  sqcRZGate(q, 2.5400275895226647, 5);
  sqcRYGate(q, 2.1626586821234333, 6);
  sqcRZGate(q, 1.7474417339759887, 6);
  sqcRYGate(q, -2.0212219852520343, 7);
  sqcRZGate(q, -2.690053121831555, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.2992307820610969, 0);
  sqcRZGate(q, 1.1065345315724735, 0);
  sqcRYGate(q, 1.753238871961639, 1);
  sqcRZGate(q, 2.3484995295310016, 1);
  sqcRYGate(q, 2.3369462024175665, 2);
  sqcRZGate(q, -2.7981004349804617, 2);
  sqcRYGate(q, -0.31951566277140087, 3);
  sqcRZGate(q, 1.9182117855950465, 3);
  sqcRYGate(q, -0.0719284511164755, 4);
  sqcRZGate(q, -2.6178384523367706, 4);
  sqcRYGate(q, 1.2443402345757566, 5);
  sqcRZGate(q, 1.7041761714070303, 5);
  sqcRYGate(q, 2.948927506875336, 6);
  sqcRZGate(q, -0.3299040109807275, 6);
  sqcRYGate(q, -1.1953080772294191, 7);
  sqcRZGate(q, 2.5617054842620046, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.8598219219616396, 0);
  sqcRZGate(q, -0.958119695617129, 0);
  sqcRYGate(q, -2.1483049375291734, 1);
  sqcRZGate(q, -1.2248774005142637, 1);
  sqcRYGate(q, 2.209929127785143, 2);
  sqcRZGate(q, -0.14216748060887066, 2);
  sqcRYGate(q, -1.3484261417549424, 3);
  sqcRZGate(q, -1.2399925635768323, 3);
  sqcRYGate(q, -2.073996799020885, 4);
  sqcRZGate(q, 2.4130896354444817, 4);
  sqcRYGate(q, -2.673919331542806, 5);
  sqcRZGate(q, -2.706160262628933, 5);
  sqcRYGate(q, -0.9255467440071325, 6);
  sqcRZGate(q, -2.0150827272111758, 6);
  sqcRYGate(q, -2.9359140283286917, 7);
  sqcRZGate(q, -2.0833829392745615, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.423593485092226, 0);
  sqcRZGate(q, 0.8793400379092322, 0);
  sqcRYGate(q, 1.2044273087782607, 1);
  sqcRZGate(q, 2.304387124701892, 1);
  sqcRYGate(q, -0.18132187453661427, 2);
  sqcRZGate(q, -2.537986512491642, 2);
  sqcRYGate(q, 1.8317036397779294, 3);
  sqcRZGate(q, -2.724706671514302, 3);
  sqcRYGate(q, -2.5085756413359577, 4);
  sqcRZGate(q, 2.1261028125505352, 4);
  sqcRYGate(q, 1.081048474716166, 5);
  sqcRZGate(q, -0.12142495968537298, 5);
  sqcRYGate(q, -1.9209771196711396, 6);
  sqcRZGate(q, 1.4392515691620758, 6);
  sqcRYGate(q, -0.11997790370677666, 7);
  sqcRZGate(q, 2.63762592105811, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6070075000203863, 0);
  sqcRZGate(q, -2.8568756567059705, 0);
  sqcRYGate(q, 1.9682878815553124, 1);
  sqcRZGate(q, 0.2026133888057808, 1);
  sqcRYGate(q, 1.3138441632167854, 2);
  sqcRZGate(q, -2.0370590477095867, 2);
  sqcRYGate(q, -0.4834515189758205, 3);
  sqcRZGate(q, 1.2282145519206562, 3);
  sqcRYGate(q, 0.11655307268250019, 4);
  sqcRZGate(q, -0.7600686231013007, 4);
  sqcRYGate(q, -2.3208017528816756, 5);
  sqcRZGate(q, 1.2403951196480152, 5);
  sqcRYGate(q, -2.591471005651288, 6);
  sqcRZGate(q, -2.69448145415274, 6);
  sqcRYGate(q, 1.1617536603526855, 7);
  sqcRZGate(q, -1.9893566901585087, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.9665405995881088, 0);
  sqcRZGate(q, 3.0893258280822646, 0);
  sqcRYGate(q, -1.253817838869554, 1);
  sqcRZGate(q, 2.1561352711685737, 1);
  sqcRYGate(q, -1.297137635888092, 2);
  sqcRZGate(q, 2.5686319902460557, 2);
  sqcRYGate(q, -2.623808735746081, 3);
  sqcRZGate(q, 0.8520649257269746, 3);
  sqcRYGate(q, 0.18389542334830455, 4);
  sqcRZGate(q, -1.0422138215547645, 4);
  sqcRYGate(q, 2.0388860142506924, 5);
  sqcRZGate(q, 2.9498296282609884, 5);
  sqcRYGate(q, 2.5042239354131786, 6);
  sqcRZGate(q, -2.164751221258641, 6);
  sqcRYGate(q, 0.4865331117759926, 7);
  sqcRZGate(q, 2.4717867391602586, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.28170082171453625, 0);
  sqcRZGate(q, -1.9016355275085166, 0);
  sqcRYGate(q, -0.6670954890082113, 1);
  sqcRZGate(q, 1.5566707929143586, 1);
  sqcRYGate(q, -0.2080479832419373, 2);
  sqcRZGate(q, 1.0944398223754925, 2);
  sqcRYGate(q, 0.34890049540879714, 3);
  sqcRZGate(q, 2.817906685794197, 3);
  sqcRYGate(q, 3.0020483738709323, 4);
  sqcRZGate(q, -0.2842104792043818, 4);
  sqcRYGate(q, -2.415976956146889, 5);
  sqcRZGate(q, 3.1230143192402005, 5);
  sqcRYGate(q, 0.3292356633590634, 6);
  sqcRZGate(q, 2.378034864524162, 6);
  sqcRYGate(q, 0.8639155179035383, 7);
  sqcRZGate(q, 0.384756865837403, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.5833946146079754, 0);
  sqcRZGate(q, -0.1322624600366334, 0);
  sqcRYGate(q, -0.9386067967561144, 1);
  sqcRZGate(q, 2.3788223496133662, 1);
  sqcRYGate(q, 0.5580644373428805, 2);
  sqcRZGate(q, 2.3470551971386495, 2);
  sqcRYGate(q, -3.000656266526712, 3);
  sqcRZGate(q, 0.50763343654745, 3);
  sqcRYGate(q, -2.4101492104815363, 4);
  sqcRZGate(q, -1.733677821523869, 4);
  sqcRYGate(q, 0.617379217802215, 5);
  sqcRZGate(q, 0.26930373795502577, 5);
  sqcRYGate(q, 1.6905502019830123, 6);
  sqcRZGate(q, -0.12482989248632086, 6);
  sqcRYGate(q, -1.1726026483557712, 7);
  sqcRZGate(q, -1.4377398793562808, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.6637476066514343, 0);
  sqcRZGate(q, 0.4998599409450488, 0);
  sqcRYGate(q, 0.10907927379729632, 1);
  sqcRZGate(q, -1.0203242582309924, 1);
  sqcRYGate(q, -3.0101440052915183, 2);
  sqcRZGate(q, 0.7403674116484682, 2);
  sqcRYGate(q, 3.1052190522472265, 3);
  sqcRZGate(q, -0.7728186738365421, 3);
  sqcRYGate(q, -0.9818557197725951, 4);
  sqcRZGate(q, 2.660921963416358, 4);
  sqcRYGate(q, 2.4408001746745005, 5);
  sqcRZGate(q, 2.786828728258898, 5);
  sqcRYGate(q, -2.1362753053852424, 6);
  sqcRZGate(q, 0.713368075035028, 6);
  sqcRYGate(q, -1.6021545527412941, 7);
  sqcRZGate(q, -1.1051703419060699, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4154088751557993, 0);
  sqcRZGate(q, -2.119271021781114, 0);
  sqcRYGate(q, 1.8255769653609075, 1);
  sqcRZGate(q, 2.2206267222098544, 1);
  sqcRYGate(q, 0.834632508938494, 2);
  sqcRZGate(q, -1.5698565217878058, 2);
  sqcRYGate(q, -0.7200457993298645, 3);
  sqcRZGate(q, -0.42243161878027286, 3);
  sqcRYGate(q, -2.3369243416082526, 4);
  sqcRZGate(q, -1.5055944303354374, 4);
  sqcRYGate(q, 2.045291546693558, 5);
  sqcRZGate(q, 1.9226790542019927, 5);
  sqcRYGate(q, -0.2504815452735025, 6);
  sqcRZGate(q, -0.36958160988834626, 6);
  sqcRYGate(q, 1.4408886033032375, 7);
  sqcRZGate(q, -2.210266452800831, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.8417049254631115, 0);
  sqcRZGate(q, 1.8844119988769268, 0);
  sqcRYGate(q, 2.328293261323264, 1);
  sqcRZGate(q, 0.8609324261873766, 1);
  sqcRYGate(q, -0.8351520907232975, 2);
  sqcRZGate(q, 0.4005097462102055, 2);
  sqcRYGate(q, -2.6127270032993937, 3);
  sqcRZGate(q, 2.3501444546884938, 3);
  sqcRYGate(q, -2.7677584919709255, 4);
  sqcRZGate(q, 2.8791702759640234, 4);
  sqcRYGate(q, -2.789107334458872, 5);
  sqcRZGate(q, -2.5252081130366464, 5);
  sqcRYGate(q, 0.47871451740915444, 6);
  sqcRZGate(q, 1.5389975177840118, 6);
  sqcRYGate(q, -0.8471872017952773, 7);
  sqcRZGate(q, 2.0383408362860838, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6231893172699488, 0);
  sqcRZGate(q, -1.8808071231792287, 0);
  sqcRYGate(q, -0.9369982138462678, 1);
  sqcRZGate(q, -2.821556534559159, 1);
  sqcRYGate(q, 0.3908810073877138, 2);
  sqcRZGate(q, -1.292820347966808, 2);
  sqcRYGate(q, -1.3342802671221925, 3);
  sqcRZGate(q, 2.5538917124407274, 3);
  sqcRYGate(q, -2.7844490414685734, 4);
  sqcRZGate(q, -0.868904135255245, 4);
  sqcRYGate(q, 2.2850091390738934, 5);
  sqcRZGate(q, -1.9827597199008224, 5);
  sqcRYGate(q, -0.9402497830820398, 6);
  sqcRZGate(q, -2.0602490090715424, 6);
  sqcRYGate(q, -1.4725524704541213, 7);
  sqcRZGate(q, 3.1193029415770384, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.8429915279735276, 0);
  sqcRZGate(q, -1.7308065762159464, 0);
  sqcRYGate(q, -1.3762022573768862, 1);
  sqcRZGate(q, -0.6790268098332193, 1);
  sqcRYGate(q, -2.2659645872781136, 2);
  sqcRZGate(q, -1.1646298018838712, 2);
  sqcRYGate(q, -2.209388537743846, 3);
  sqcRZGate(q, -0.994921995451432, 3);
  sqcRYGate(q, -0.1426608733773533, 4);
  sqcRZGate(q, -1.0478910428674542, 4);
  sqcRYGate(q, -1.967201888086273, 5);
  sqcRZGate(q, 1.4106776985307858, 5);
  sqcRYGate(q, -1.2865722240415178, 6);
  sqcRZGate(q, 1.0352824293766052, 6);
  sqcRYGate(q, 2.2311350445366873, 7);
  sqcRZGate(q, -0.10286755427858107, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.0158764784339955, 0);
  sqcRZGate(q, -2.3428359978272097, 0);
  sqcRYGate(q, 0.9689229125218941, 1);
  sqcRZGate(q, -0.5807885320163274, 1);
  sqcRYGate(q, -1.0594557491850054, 2);
  sqcRZGate(q, 1.5936377886454218, 2);
  sqcRYGate(q, -2.829522363829178, 3);
  sqcRZGate(q, 2.9838020459070846, 3);
  sqcRYGate(q, 1.4730695257499937, 4);
  sqcRZGate(q, 2.47418292197009, 4);
  sqcRYGate(q, -1.747630821115156, 5);
  sqcRZGate(q, 0.23824912116021116, 5);
  sqcRYGate(q, 1.995280939104319, 6);
  sqcRZGate(q, 1.8869076356542704, 6);
  sqcRYGate(q, 1.8645204609817045, 7);
  sqcRZGate(q, 1.5384362876208446, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.408410698268599, 0);
  sqcRZGate(q, -2.3235600277686683, 0);
  sqcRYGate(q, -2.010142680102293, 1);
  sqcRZGate(q, -0.1369618919143029, 1);
  sqcRYGate(q, 0.47436831177753724, 2);
  sqcRZGate(q, 2.6532549558325296, 2);
  sqcRYGate(q, 2.9180276136643584, 3);
  sqcRZGate(q, 0.8615162895605614, 3);
  sqcRYGate(q, 2.6167081259201983, 4);
  sqcRZGate(q, 0.7154467469374498, 4);
  sqcRYGate(q, 2.1395482345888563, 5);
  sqcRZGate(q, 2.599017119720302, 5);
  sqcRYGate(q, 2.449211412327368, 6);
  sqcRZGate(q, -1.497812318391139, 6);
  sqcRYGate(q, 2.364603471433668, 7);
  sqcRZGate(q, -1.9194345238796924, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.307336088290111, 0);
  sqcRZGate(q, 2.526373247533442, 0);
  sqcRYGate(q, -0.7044736740047838, 1);
  sqcRZGate(q, 2.0197023815689716, 1);
  sqcRYGate(q, 0.7213461386392656, 2);
  sqcRZGate(q, -2.302118476060718, 2);
  sqcRYGate(q, 1.2638778646055888, 3);
  sqcRZGate(q, 0.0880500159789417, 3);
  sqcRYGate(q, -1.5021461701686787, 4);
  sqcRZGate(q, -2.267031760668024, 4);
  sqcRYGate(q, -2.2035011382622764, 5);
  sqcRZGate(q, -2.8107185503603582, 5);
  sqcRYGate(q, 0.11931335899640237, 6);
  sqcRZGate(q, 2.2795685299126354, 6);
  sqcRYGate(q, 1.1914651319881966, 7);
  sqcRZGate(q, 1.243492442450739, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.39712342215301444, 0);
  sqcRZGate(q, 1.9706975558338757, 0);
  sqcRYGate(q, -2.1098383347271645, 1);
  sqcRZGate(q, -1.2591097994599707, 1);
  sqcRYGate(q, -2.3799259881974457, 2);
  sqcRZGate(q, 2.7192297472514215, 2);
  sqcRYGate(q, 0.7511541283736178, 3);
  sqcRZGate(q, 1.8932734536322022, 3);
  sqcRYGate(q, 1.476229694313463, 4);
  sqcRZGate(q, 0.7920096391156414, 4);
  sqcRYGate(q, 1.0871441210012731, 5);
  sqcRZGate(q, -1.3083157946774497, 5);
  sqcRYGate(q, -0.02921817367492796, 6);
  sqcRZGate(q, -0.4631029655394446, 6);
  sqcRYGate(q, -0.7108612574249585, 7);
  sqcRZGate(q, -1.9682225516707519, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.7425056777160612, 0);
  sqcRZGate(q, -2.1957876943295505, 0);
  sqcRYGate(q, 1.417774927527459, 1);
  sqcRZGate(q, -0.036411168309027936, 1);
  sqcRYGate(q, 1.6571108726249746, 2);
  sqcRZGate(q, -1.2583206532310305, 2);
  sqcRYGate(q, -2.310710980735841, 3);
  sqcRZGate(q, 0.47308212912631564, 3);
  sqcRYGate(q, 0.90484990820116, 4);
  sqcRZGate(q, 3.002743793412862, 4);
  sqcRYGate(q, 1.198964659020086, 5);
  sqcRZGate(q, -0.4294401257727963, 5);
  sqcRYGate(q, 1.5197939224551744, 6);
  sqcRZGate(q, -1.8587297762283554, 6);
  sqcRYGate(q, -0.7896713255297314, 7);
  sqcRZGate(q, 0.14433199954790196, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.9134464031947593, 0);
  sqcRZGate(q, 2.288052351392719, 0);
  sqcRYGate(q, -0.755442248835917, 1);
  sqcRZGate(q, -1.746303581729391, 1);
  sqcRYGate(q, -1.3570436536327162, 2);
  sqcRZGate(q, -2.8545090250174763, 2);
  sqcRYGate(q, -0.8537285384577276, 3);
  sqcRZGate(q, 2.8151067850453653, 3);
  sqcRYGate(q, -0.8924263509868657, 4);
  sqcRZGate(q, 1.0141735735352748, 4);
  sqcRYGate(q, 0.6548068808356495, 5);
  sqcRZGate(q, -2.2589879479021864, 5);
  sqcRYGate(q, -2.5223232421252666, 6);
  sqcRZGate(q, 0.8210971345619323, 6);
  sqcRYGate(q, -0.5933564582244912, 7);
  sqcRZGate(q, -2.594784655033786, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.51727484631445, 0);
  sqcRZGate(q, 0.6563544227137275, 0);
  sqcRYGate(q, -0.0962646544658794, 1);
  sqcRZGate(q, -0.5007243353999673, 1);
  sqcRYGate(q, -2.7175970627239465, 2);
  sqcRZGate(q, 2.1919161713904565, 2);
  sqcRYGate(q, 0.4610957001953428, 3);
  sqcRZGate(q, 0.07077620780368486, 3);
  sqcRYGate(q, 0.7266166965294092, 4);
  sqcRZGate(q, -2.0883433812073386, 4);
  sqcRYGate(q, 1.6480829001563606, 5);
  sqcRZGate(q, 2.8576209897141363, 5);
  sqcRYGate(q, 2.2027242983087953, 6);
  sqcRZGate(q, 2.156800966164512, 6);
  sqcRYGate(q, -0.8898184645932883, 7);
  sqcRZGate(q, -0.13782879484850064, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.277061588213475, 0);
  sqcRZGate(q, -2.146290402638738, 0);
  sqcRYGate(q, -1.0561300562631208, 1);
  sqcRZGate(q, 2.127062684104792, 1);
  sqcRYGate(q, -0.31895098104201924, 2);
  sqcRZGate(q, 3.0116147247747875, 2);
  sqcRYGate(q, 2.9028182537349885, 3);
  sqcRZGate(q, 1.80127745822992, 3);
  sqcRYGate(q, -0.6675032038488485, 4);
  sqcRZGate(q, 2.6628142321485253, 4);
  sqcRYGate(q, 2.500885569523054, 5);
  sqcRZGate(q, 0.7883703306465067, 5);
  sqcRYGate(q, 1.6383595483771083, 6);
  sqcRZGate(q, -1.778749383645505, 6);
  sqcRYGate(q, 0.8518560414300776, 7);
  sqcRZGate(q, 2.4372644398921586, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.014221000192147, 0);
  sqcRZGate(q, -1.8959741046377854, 0);
  sqcRYGate(q, -2.1976954049499065, 1);
  sqcRZGate(q, 1.3877149314612645, 1);
  sqcRYGate(q, 0.7728816768055509, 2);
  sqcRZGate(q, 1.9771827154014021, 2);
  sqcRYGate(q, -1.3147577472389695, 3);
  sqcRZGate(q, 2.230165285083341, 3);
  sqcRYGate(q, -1.9749730516416342, 4);
  sqcRZGate(q, -2.4150875302741075, 4);
  sqcRYGate(q, 1.242303273649724, 5);
  sqcRZGate(q, 0.9324928923146877, 5);
  sqcRYGate(q, -3.101138264840157, 6);
  sqcRZGate(q, 2.0344812543579915, 6);
  sqcRYGate(q, -1.7055129252124015, 7);
  sqcRZGate(q, 1.515870632572189, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.011751762377542, 0);
  sqcRZGate(q, 0.9485769954469258, 0);
  sqcRYGate(q, 0.7243008817639929, 1);
  sqcRZGate(q, -1.4262826293252209, 1);
  sqcRYGate(q, 1.013612209357352, 2);
  sqcRZGate(q, -0.10135821227392414, 2);
  sqcRYGate(q, 0.236185470415756, 3);
  sqcRZGate(q, 1.4334084536291618, 3);
  sqcRYGate(q, -1.8851226370886276, 4);
  sqcRZGate(q, -1.3254145660882366, 4);
  sqcRYGate(q, 0.35223100499459115, 5);
  sqcRZGate(q, 1.9170735185950427, 5);
  sqcRYGate(q, -0.7821156164642105, 6);
  sqcRZGate(q, 0.3425314231085404, 6);
  sqcRYGate(q, 1.048003825983817, 7);
  sqcRZGate(q, -2.004428089551188, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.8028560608445572, 0);
  sqcRZGate(q, 1.7868498339321668, 0);
  sqcRYGate(q, 0.9231346222816478, 1);
  sqcRZGate(q, 2.5104998412314905, 1);
  sqcRYGate(q, -2.2856714828500584, 2);
  sqcRZGate(q, -0.4149744826342349, 2);
  sqcRYGate(q, 1.2315608956788848, 3);
  sqcRZGate(q, -3.0134265979637207, 3);
  sqcRYGate(q, -0.2630687064099079, 4);
  sqcRZGate(q, 0.0814163907605701, 4);
  sqcRYGate(q, 1.7917478990261912, 5);
  sqcRZGate(q, 0.8619489067189097, 5);
  sqcRYGate(q, -0.9306491854367297, 6);
  sqcRZGate(q, -2.1276246478680543, 6);
  sqcRYGate(q, 0.43064634458319784, 7);
  sqcRZGate(q, -0.8825092797918505, 7);

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
