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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.464765381676452, 0);
  sqcRZGate(q, -3.141570147782193, 0);
  sqcRYGate(q, -1.0998639097201623, 1);
  sqcRZGate(q, 7.818419867078319e-08, 1);
  sqcRYGate(q, 1.5707959152694222, 2);
  sqcRZGate(q, 1.570797440858368, 2);
  sqcRYGate(q, -3.1415921954952655, 3);
  sqcRZGate(q, 3.0569219301389383, 3);
  sqcRYGate(q, 1.5708175196112069, 4);
  sqcRZGate(q, -1.0172950781729133, 4);
  sqcRYGate(q, 1.3701521685500313, 5);
  sqcRZGate(q, -1.5707925638837974, 5);
  sqcRYGate(q, -0.2168029355799277, 6);
  sqcRZGate(q, -1.5707825642332804, 6);
  sqcRYGate(q, 3.141592547168966, 7);
  sqcRZGate(q, 1.7234356759393217, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5707962240699196, 0);
  sqcRZGate(q, -1.5707959912320018, 0);
  sqcRYGate(q, -1.9521187047504434, 1);
  sqcRZGate(q, -2.2879632239302827, 1);
  sqcRYGate(q, 3.0117873450978765, 2);
  sqcRZGate(q, -3.141592456694099, 2);
  sqcRYGate(q, 1.6603150623816414, 3);
  sqcRZGate(q, -3.141592394182489, 3);
  sqcRYGate(q, -1.5707962304928327, 4);
  sqcRZGate(q, 1.5707959670689264, 4);
  sqcRYGate(q, -0.8560152111847934, 5);
  sqcRZGate(q, 1.5707874939874238, 5);
  sqcRYGate(q, 2.994184243642145, 6);
  sqcRZGate(q, -1.5707687211874797, 6);
  sqcRYGate(q, 1.5707970792941577, 7);
  sqcRZGate(q, 1.3897761529477157, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.570795499276187, 0);
  sqcRZGate(q, -1.8800835830058, 0);
  sqcRYGate(q, -3.1415925514521135, 1);
  sqcRZGate(q, 2.4244441377427317, 1);
  sqcRYGate(q, 0.12721195211869205, 2);
  sqcRZGate(q, -1.570796326782725, 2);
  sqcRYGate(q, 1.570796528971015, 3);
  sqcRZGate(q, 2.4831170846643323e-07, 3);
  sqcRYGate(q, -1.570794625623794, 4);
  sqcRZGate(q, 2.3425638103091728e-05, 4);
  sqcRYGate(q, -3.01787508154978, 5);
  sqcRZGate(q, -1.570797806929917, 5);
  sqcRYGate(q, 2.6011636876691164, 6);
  sqcRZGate(q, -2.6153155058754463, 6);
  sqcRYGate(q, 1.2030635928795874e-06, 7);
  sqcRZGate(q, -1.3897762389469328, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5708021264182266, 0);
  sqcRZGate(q, -1.579743937298163, 0);
  sqcRYGate(q, 0.27808513263260154, 1);
  sqcRZGate(q, 1.6767294705448992, 1);
  sqcRYGate(q, -1.7829916702169744, 2);
  sqcRZGate(q, -1.57079660972357, 2);
  sqcRYGate(q, 1.7402280103524956, 3);
  sqcRZGate(q, 1.5707962319319666, 3);
  sqcRYGate(q, -1.5274608305791944, 4);
  sqcRZGate(q, -7.3580997170807905e-06, 4);
  sqcRYGate(q, -1.6830474082928477, 5);
  sqcRZGate(q, 3.4935828668223954e-07, 5);
  sqcRYGate(q, -6.905094318554461e-07, 6);
  sqcRZGate(q, 0.5510514747648472, 6);
  sqcRYGate(q, 1.570795696602546, 7);
  sqcRZGate(q, 1.3386898226189758, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.1415914686121833, 0);
  sqcRZGate(q, 1.5618534917377007, 0);
  sqcRYGate(q, 3.141592603561038, 1);
  sqcRZGate(q, -3.035665127338828, 1);
  sqcRYGate(q, 1.5707965472728382, 2);
  sqcRZGate(q, -2.7026649966899186e-06, 2);
  sqcRYGate(q, -1.5707945751548715, 3);
  sqcRZGate(q, -5.76653691908291e-07, 3);
  sqcRYGate(q, -1.570793682523007, 4);
  sqcRZGate(q, 1.570796532504314, 4);
  sqcRYGate(q, -1.5707970005110323, 5);
  sqcRZGate(q, 1.5708149784856904, 5);
  sqcRYGate(q, 3.141591973880129, 6);
  sqcRZGate(q, -0.49346961837360115, 6);
  sqcRYGate(q, 8.583770929604384e-07, 7);
  sqcRZGate(q, 0.2320952524624128, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7196023588684008, 0);
  sqcRZGate(q, -1.1149583309330353, 0);
  sqcRYGate(q, 0.35820969209932907, 1);
  sqcRZGate(q, 1.1149678654249373, 1);
  sqcRYGate(q, 2.953806116895468, 2);
  sqcRZGate(q, -0.0034229937041789778, 2);
  sqcRYGate(q, 1.9424299962661342, 3);
  sqcRZGate(q, -3.1381602438509706, 3);
  sqcRYGate(q, 2.777684038883677, 4);
  sqcRZGate(q, -0.006975715217594544, 4);
  sqcRYGate(q, 3.104485171144923, 5);
  sqcRZGate(q, -0.006981940438983259, 5);
  sqcRYGate(q, 1.0322587689990725, 6);
  sqcRZGate(q, -0.4558404209591751, 6);
  sqcRYGate(q, 0.3713423948518111, 7);
  sqcRZGate(q, -0.45582594512310864, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.567724235994853, 0);
  sqcRZGate(q, 2.5408070967484955, 0);
  sqcRYGate(q, -1.5738791056161971, 1);
  sqcRZGate(q, -0.6007867425080597, 1);
  sqcRYGate(q, -1.1149599272733655, 2);
  sqcRZGate(q, -2.1700763326707717, 2);
  sqcRYGate(q, 2.026624996211412, 3);
  sqcRZGate(q, -2.1700716318483058, 3);
  sqcRYGate(q, 2.6857414922041123, 4);
  sqcRZGate(q, 0.9637468858932183, 4);
  sqcRYGate(q, -2.685753783586595, 5);
  sqcRZGate(q, -2.1778685302907927, 5);
  sqcRYGate(q, 1.573867039740012, 6);
  sqcRZGate(q, 2.5408066852786577, 6);
  sqcRYGate(q, 1.573876819560342, 7);
  sqcRZGate(q, 2.5408064137890336, 7);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
