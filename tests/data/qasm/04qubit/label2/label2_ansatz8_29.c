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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.14049543996174482, 0);
  sqcRYGate(q, 2.285586685538431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6978898873592763, 0);
  sqcRYGate(q, -2.8107167898830223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.496340618466118, 2);
  sqcRYGate(q, 0.17963713221272748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6062549902181336, 2);
  sqcRYGate(q, 1.5625485503540442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07039463165801685, 0);
  sqcRYGate(q, -0.3359464563417873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.369950441376813, 0);
  sqcRYGate(q, 1.8348471392007357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5312605103337509, 1);
  sqcRYGate(q, -0.34319957680440005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3037036781331599, 1);
  sqcRYGate(q, 0.9648283192426711, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4755592157154567, 0);
  sqcRYGate(q, -0.6900833988449341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7397177804388813, 0);
  sqcRYGate(q, -1.0700534352513555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6267654307594798, 2);
  sqcRYGate(q, 2.963829967076248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8303707736622052, 2);
  sqcRYGate(q, -0.4232233313872156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28756380218112293, 0);
  sqcRYGate(q, -3.050153743488726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.087725442606113, 0);
  sqcRYGate(q, 2.38308925997123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0773479525772913, 1);
  sqcRYGate(q, -0.1310740657824875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6210259632921482, 1);
  sqcRYGate(q, 1.0912161404268625, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3475638347927328, 0);
  sqcRYGate(q, 0.6316527908155134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.04094546778635, 0);
  sqcRYGate(q, 1.9807216459008155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5779928942768724, 2);
  sqcRYGate(q, 2.5339207277338294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.38881653642555847, 2);
  sqcRYGate(q, -0.17347966590540764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.065379782231571, 0);
  sqcRYGate(q, -1.8275207290271935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3075335647092015, 0);
  sqcRYGate(q, 2.8468808067829796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8731238262038721, 1);
  sqcRYGate(q, -1.510902291279086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5657276387896115, 1);
  sqcRYGate(q, 1.3682355223838132, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8138478928309089, 0);
  sqcRYGate(q, 1.1269570160489693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5947996903790047, 0);
  sqcRYGate(q, -1.2527711905813979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9024163217551537, 2);
  sqcRYGate(q, 2.903092476933029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6707695961308885, 2);
  sqcRYGate(q, -2.600705376955783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.895226068620315, 0);
  sqcRYGate(q, 3.0340421813243412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2452265628028618, 0);
  sqcRYGate(q, -2.7662555748776376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34175198587333455, 1);
  sqcRYGate(q, -2.6911880689788177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16475323102619685, 1);
  sqcRYGate(q, -0.9284216069691071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.37294202290406, 0);
  sqcRYGate(q, -0.39192207449933036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9006274393547162, 0);
  sqcRYGate(q, -1.2508777535101079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.632191632414037, 2);
  sqcRYGate(q, -1.9565931420717648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8830580425364976, 2);
  sqcRYGate(q, -2.8730194977145787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7373629001973547, 0);
  sqcRYGate(q, -2.3282620822256663, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3924416407778164, 0);
  sqcRYGate(q, -0.3635827521052839, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8216052440316965, 1);
  sqcRYGate(q, 2.949388138472785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9505443016430593, 1);
  sqcRYGate(q, -2.8122407400939347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9629652301095293, 0);
  sqcRYGate(q, 0.8592314604319116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4164188326762084, 0);
  sqcRYGate(q, 1.564531229851678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2697120527892114, 2);
  sqcRYGate(q, 0.45572629815575105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0074550556155448, 2);
  sqcRYGate(q, 1.3220336062915408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.13269464696, 0);
  sqcRYGate(q, -0.9934802816347181, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14835040126265486, 0);
  sqcRYGate(q, 1.758758255512776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2323591203287378, 1);
  sqcRYGate(q, 0.15671481718746294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.261657911073104, 1);
  sqcRYGate(q, 1.3754581584359498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4111255160461589, 0);
  sqcRYGate(q, -2.1033115173111465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.198942045220562, 0);
  sqcRYGate(q, 2.086115375700323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08840539838926069, 2);
  sqcRYGate(q, -0.4808965100796243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.031364235619609, 2);
  sqcRYGate(q, 0.4612000648157651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.307043549016653, 0);
  sqcRYGate(q, 1.9181813786389597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7982321500562013, 0);
  sqcRYGate(q, -1.0854624795931338, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7792323636161456, 1);
  sqcRYGate(q, 1.374402607566811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.60732812968058, 1);
  sqcRYGate(q, -1.2978118417635596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.281266959664835, 0);
  sqcRYGate(q, 1.459828723300327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.871819788560492, 0);
  sqcRYGate(q, 1.9299664209871044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3808673855179796, 2);
  sqcRYGate(q, -1.9370216858940974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.919178413347165, 2);
  sqcRYGate(q, -1.7993225069480934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5634477836927989, 0);
  sqcRYGate(q, 2.5994811095222548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.503202800834929, 0);
  sqcRYGate(q, -1.2921462329471718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42427539217607624, 1);
  sqcRYGate(q, 0.49440257494843587, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.151165957425816, 1);
  sqcRYGate(q, -0.06580020132783489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7826138561611007, 0);
  sqcRYGate(q, -0.5998092204302298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.964430373373427, 0);
  sqcRYGate(q, 1.342683018760222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1483343251578586, 2);
  sqcRYGate(q, 0.8251856741909789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.168677685674404, 2);
  sqcRYGate(q, 1.7555994051464185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4976269681712084, 0);
  sqcRYGate(q, 0.3447982747844991, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7904746181073088, 0);
  sqcRYGate(q, 0.3175908021026592, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.057661801282180694, 1);
  sqcRYGate(q, 1.183373699180315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.042397622704681, 1);
  sqcRYGate(q, -0.4131271238222425, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6900926965823121, 0);
  sqcRYGate(q, -1.6217519662949575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3106637099242895, 0);
  sqcRYGate(q, 2.2918098413129133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2464062086239807, 2);
  sqcRYGate(q, 0.4876473256198211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.295072668977993, 2);
  sqcRYGate(q, -1.5511454420902326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.980035109067079, 0);
  sqcRYGate(q, -1.7258179190847893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7475045369323299, 0);
  sqcRYGate(q, 1.7193363855755592, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7815044814618807, 1);
  sqcRYGate(q, 0.36023485721731685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8671008561856164, 1);
  sqcRYGate(q, -2.2993931905729608, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5555213431845454, 0);
  sqcRYGate(q, -0.4707178441908493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.362099205025416, 0);
  sqcRYGate(q, -2.016417970128561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.181688363226612, 2);
  sqcRYGate(q, 0.5292609126274055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.958325932077689, 2);
  sqcRYGate(q, 0.08796059230381648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6255340165657246, 0);
  sqcRYGate(q, 2.4387885228870756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3856734879627433, 0);
  sqcRYGate(q, -0.5485085659833265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2467590662282245, 1);
  sqcRYGate(q, -2.7802048914647166, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.004783999671759625, 1);
  sqcRYGate(q, -0.1293562272539429, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7805653703911797, 0);
  sqcRYGate(q, -1.8703158450809871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6011312922194119, 0);
  sqcRYGate(q, 1.2628028582808515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7528152329478508, 2);
  sqcRYGate(q, -1.2465320825249764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5780871678357165, 2);
  sqcRYGate(q, -1.367776372227004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8809903210890289, 0);
  sqcRYGate(q, -2.493838516473184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.020235681671882, 0);
  sqcRYGate(q, 3.1137003756078334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5759665192136696, 1);
  sqcRYGate(q, -0.6363949126792701, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9321126288082525, 1);
  sqcRYGate(q, 3.0466509766294436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1780720648191032, 0);
  sqcRYGate(q, -2.2825777866035564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9744099080691628, 0);
  sqcRYGate(q, 2.177302837798689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17728980196341038, 2);
  sqcRYGate(q, 1.5066312157370545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9409426905021918, 2);
  sqcRYGate(q, 0.767384898806422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7766756362811917, 0);
  sqcRYGate(q, 2.1145957589625715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.57712640729335, 0);
  sqcRYGate(q, 0.13919626640866886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8970852292865021, 1);
  sqcRYGate(q, -0.2820023886313614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4368337648324668, 1);
  sqcRYGate(q, 0.26629798176903385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.171285998988412, 0);
  sqcRYGate(q, 0.6851331953913844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1033422475388983, 0);
  sqcRYGate(q, 0.6379087659591386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.199958434646278, 2);
  sqcRYGate(q, -1.7721518901200382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.038707103224903, 2);
  sqcRYGate(q, 1.8579213537044144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.595091610503668, 0);
  sqcRYGate(q, -2.1811946252862247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7908613149079127, 0);
  sqcRYGate(q, -1.7859094234910873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9312517185887645, 1);
  sqcRYGate(q, -1.4966129317967078, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0569637584597418, 1);
  sqcRYGate(q, 0.9464475118929915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1412543001369226, 0);
  sqcRYGate(q, -2.3043240477904448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3125691338664822, 0);
  sqcRYGate(q, 1.485268752941038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.248641941785559, 2);
  sqcRYGate(q, -2.6994615314675072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6857159051373823, 2);
  sqcRYGate(q, -0.9501176331068293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49947266680758157, 0);
  sqcRYGate(q, 0.025319292897675538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.33474697776459, 0);
  sqcRYGate(q, 2.4853865618598587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.589845408602166, 1);
  sqcRYGate(q, -1.278264957512178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.987084039375652, 1);
  sqcRYGate(q, 1.3274507007278917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.243032102564406, 0);
  sqcRYGate(q, -1.8994651284511186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.653650091404883, 0);
  sqcRYGate(q, -1.1304809285394084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4916316538391627, 2);
  sqcRYGate(q, -0.900928866552932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6734875408109775, 2);
  sqcRYGate(q, 0.6482575267168693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8593515002148746, 0);
  sqcRYGate(q, 1.9774818326837413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.893208642748779, 0);
  sqcRYGate(q, 1.5796863018544856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5044609400623663, 1);
  sqcRYGate(q, -0.4085981924016435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3504705294747801, 1);
  sqcRYGate(q, 0.6635470060078825, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0695235804782044, 0);
  sqcRYGate(q, -2.766874190422521, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1978886943197002, 0);
  sqcRYGate(q, 1.3452553230366275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33208602854590913, 2);
  sqcRYGate(q, -2.2239588738505702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8140329716103163, 2);
  sqcRYGate(q, 2.9658288983319108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5796710506791607, 0);
  sqcRYGate(q, -0.07212173876401184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.014849986127672, 0);
  sqcRYGate(q, 1.220411323476367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.714480368992116, 1);
  sqcRYGate(q, 3.1044075293156, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9003546465465697, 1);
  sqcRYGate(q, -1.5572217072137589, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.289392594030883, 0);
  sqcRYGate(q, -2.801168037588188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11439898229140866, 0);
  sqcRYGate(q, 2.794020775118111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3194708077724427, 2);
  sqcRYGate(q, -1.4691340029194544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5318251862749054, 2);
  sqcRYGate(q, -1.1431128212521982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9500109465213855, 0);
  sqcRYGate(q, -2.46585852603056, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.220256478387177, 0);
  sqcRYGate(q, 1.2900046685571045, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8743524441949484, 1);
  sqcRYGate(q, 3.0854629642835554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7144333087500527, 1);
  sqcRYGate(q, -1.3774117784983002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6097514883547248, 0);
  sqcRYGate(q, -1.6154440803482952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.593870118880809, 0);
  sqcRYGate(q, 0.18950697767639516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.238551629092804, 2);
  sqcRYGate(q, 2.971009455330545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4436190286293054, 2);
  sqcRYGate(q, 0.4916841338594846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24135605435598692, 0);
  sqcRYGate(q, -0.8026377860095133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8460682023051067, 0);
  sqcRYGate(q, -0.4632858400023109, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.373049370931596, 1);
  sqcRYGate(q, 2.313473730345218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.06951788211714376, 1);
  sqcRYGate(q, -0.6582848894031474, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.09430227953225234, 0);
  sqcRYGate(q, -1.0223484391295095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4402582233564942, 0);
  sqcRYGate(q, -2.101724116411255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7320450163883315, 2);
  sqcRYGate(q, 1.5500836873494905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.210795487518603, 2);
  sqcRYGate(q, 2.8945793637140813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38336429515424353, 0);
  sqcRYGate(q, 1.0566326440920863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.771924427852832, 0);
  sqcRYGate(q, 0.493465543432249, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5116037639067854, 1);
  sqcRYGate(q, 1.5867063419976903, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.93755947578029, 1);
  sqcRYGate(q, 2.127767423974722, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.423125381077217, 0);
  sqcRYGate(q, -2.3007702252189084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6392073680294644, 0);
  sqcRYGate(q, 0.735566936257819, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.035963388631266, 2);
  sqcRYGate(q, -0.04450613584705178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.77548377290585, 2);
  sqcRYGate(q, -1.6614302114387494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7463309745668054, 0);
  sqcRYGate(q, -2.7882376994595846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9164768639751744, 0);
  sqcRYGate(q, -0.5440752704760304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.612202159561118, 1);
  sqcRYGate(q, -0.5436426242838177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7997746610711465, 1);
  sqcRYGate(q, 0.5546550062085666, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.126029443459033, 0);
  sqcRYGate(q, -0.35873178430419017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2871936192980014, 0);
  sqcRYGate(q, 0.7919594420435911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6126681484206974, 2);
  sqcRYGate(q, -1.409070984112703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4182846446479349, 2);
  sqcRYGate(q, -0.24725278297854025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.676801676256769, 0);
  sqcRYGate(q, 1.5457413664501765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.794375845349365, 0);
  sqcRYGate(q, 1.8872407170105983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.14652620820278, 1);
  sqcRYGate(q, 2.511075802989576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16181109151505918, 1);
  sqcRYGate(q, 2.8386321293251147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3196393447356618, 0);
  sqcRYGate(q, 0.5259246118055003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.922140111088255, 0);
  sqcRYGate(q, 0.4905780495964621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1218489577611637, 2);
  sqcRYGate(q, 0.4753372233704705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.213120814166092, 2);
  sqcRYGate(q, -2.336735271322153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4957193008033995, 0);
  sqcRYGate(q, 1.3075458595411613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.413311823562981, 0);
  sqcRYGate(q, -1.0685770155050704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.838693167830154, 1);
  sqcRYGate(q, -1.9027940057225952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1285515214197392, 1);
  sqcRYGate(q, -0.9709568859669391, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.079814247723868, 0);
  sqcRYGate(q, 3.134670249396196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.956818183247992, 0);
  sqcRYGate(q, 1.2182109499685385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.079740706605847, 2);
  sqcRYGate(q, 2.7331227797907665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.843278273413214, 2);
  sqcRYGate(q, 0.8013101660427812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4199807750068256, 0);
  sqcRYGate(q, -2.710679408433377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.698249742431487, 0);
  sqcRYGate(q, -1.393450060734484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5635910283925747, 1);
  sqcRYGate(q, 0.23701362887582622, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.119935558239403, 1);
  sqcRYGate(q, -2.0477545323825117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8719428995057634, 0);
  sqcRYGate(q, -0.42537840985656494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.958650135613166, 0);
  sqcRYGate(q, -1.030187230866613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0299627196006393, 2);
  sqcRYGate(q, 1.2144842725113767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6741030657620632, 2);
  sqcRYGate(q, 2.396496081514544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8022387676046996, 0);
  sqcRYGate(q, -1.9257095062768765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7596401814239642, 0);
  sqcRYGate(q, 1.1265023127248162, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.251873564989533, 1);
  sqcRYGate(q, -0.5071296973460734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7128466783132362, 1);
  sqcRYGate(q, -2.330166479818213, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.618081595033429, 0);
  sqcRYGate(q, -1.4786046566276925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1621059861028797, 0);
  sqcRYGate(q, 1.085742278626662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.00986573252791849, 2);
  sqcRYGate(q, 1.2707976185187542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.480945072187645, 2);
  sqcRYGate(q, 2.4900665284004173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30012879898532363, 0);
  sqcRYGate(q, 2.131453393522144, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.09628729101074, 0);
  sqcRYGate(q, 2.3752125151534087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.15008134388517907, 1);
  sqcRYGate(q, -2.2152665922160777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8165483279279906, 1);
  sqcRYGate(q, 1.0155377473588318, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.23306589774563438, 0);
  sqcRYGate(q, 2.175744735359336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5537715670925778, 0);
  sqcRYGate(q, -0.1658477007104846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9278480474278246, 2);
  sqcRYGate(q, 2.2986120287735825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1132018531704975, 2);
  sqcRYGate(q, -2.697380784768101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8245118408835753, 0);
  sqcRYGate(q, 2.588350884643769, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.201248353147724, 0);
  sqcRYGate(q, 1.4367356782775016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6824297442296123, 1);
  sqcRYGate(q, -1.3330790107334878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.17555464365733, 1);
  sqcRYGate(q, -0.7164241999261725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3789433346702467, 0);
  sqcRYGate(q, 1.4800644525897417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.534904602256677, 0);
  sqcRYGate(q, 2.975431989380649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1595650684513358, 2);
  sqcRYGate(q, 2.1312672121533875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9558950819646717, 2);
  sqcRYGate(q, 2.0210866362192714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1624062945085987, 0);
  sqcRYGate(q, 2.1901578866614777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9508030992758922, 0);
  sqcRYGate(q, -0.6255229368481566, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8747111104839967, 1);
  sqcRYGate(q, 0.13889096084284078, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.401691831115157, 1);
  sqcRYGate(q, 1.4356025412282738, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2375279202868512, 0);
  sqcRYGate(q, -0.2523628758509471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.159959281963321, 0);
  sqcRYGate(q, -2.9521779090927827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.028793916804894515, 2);
  sqcRYGate(q, -0.4097028572680177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2227320905277788, 2);
  sqcRYGate(q, 2.637127527073184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6183147598455596, 0);
  sqcRYGate(q, 1.745754660601996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9034905097291603, 0);
  sqcRYGate(q, 0.6587500124162659, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1973841668795124, 1);
  sqcRYGate(q, -1.1656787508110398, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.506943867151583, 1);
  sqcRYGate(q, -0.6913992478154549, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4130054986286416, 0);
  sqcRYGate(q, -1.733427832392535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7751638172042519, 0);
  sqcRYGate(q, 1.6774477785743702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.389171920630217, 2);
  sqcRYGate(q, 0.32378198919707846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5455540575449392, 2);
  sqcRYGate(q, 2.275536717813928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.526461204430869, 0);
  sqcRYGate(q, -1.5053755200646646, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3077555545193551, 0);
  sqcRYGate(q, -0.2543277753423423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2864484326736978, 1);
  sqcRYGate(q, 2.275033946964739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6339438806171094, 1);
  sqcRYGate(q, 1.3517675529218103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7430684078072571, 0);
  sqcRYGate(q, 2.9762780265613835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4634137562516255, 0);
  sqcRYGate(q, 1.45010485496014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0153618453357653, 2);
  sqcRYGate(q, 0.3399757390607139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.821600421978176, 2);
  sqcRYGate(q, -2.7171210046800103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22414039249135073, 0);
  sqcRYGate(q, -2.300148410215486, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9166181359528456, 0);
  sqcRYGate(q, -0.3382683896502794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7253537939191923, 1);
  sqcRYGate(q, -1.9350642117958845, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.34742566818653575, 1);
  sqcRYGate(q, -0.3237283669068196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1676758706663133, 0);
  sqcRYGate(q, -1.6425586173368796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3828843319394508, 0);
  sqcRYGate(q, 3.0212963738259924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.699419500958749, 2);
  sqcRYGate(q, -0.008957667550376181, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1411354866342, 2);
  sqcRYGate(q, -1.3270006546274766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8718884795978834, 0);
  sqcRYGate(q, 0.38217914101099776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0978787600248694, 0);
  sqcRYGate(q, -1.783301139121638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.731186567244289, 1);
  sqcRYGate(q, 2.067666935748285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3372108914601144, 1);
  sqcRYGate(q, 1.1429146390332103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.067309862178676, 0);
  sqcRYGate(q, 2.0158362037718507, 1);
  sqcRYGate(q, -2.6369197356240623, 2);
  sqcRYGate(q, 0.1800688370588297, 3);

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
