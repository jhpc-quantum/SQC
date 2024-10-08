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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.5707967343591247, 0);
  sqcRZGate(q, 1.570793665209839, 0);
  sqcRYGate(q, -1.5707954521677427, 1);
  sqcRZGate(q, -1.2902246769707597, 1);
  sqcRYGate(q, -3.1415909097632233, 2);
  sqcRZGate(q, -1.515911545746904, 2);
  sqcRYGate(q, -1.5707936234063933, 3);
  sqcRZGate(q, -0.08920442635787308, 3);
  sqcRYGate(q, 3.1415893305984746, 4);
  sqcRZGate(q, -0.5045608057813588, 4);
  sqcRYGate(q, 0.42855481705895687, 5);
  sqcRZGate(q, 1.5707938472793839, 5);
  sqcRYGate(q, 3.141590551165997, 6);
  sqcRZGate(q, -1.4845870602572078, 6);
  sqcRYGate(q, 0.11045172967607986, 7);
  sqcRZGate(q, -1.9844644633477344, 7);
  sqcRYGate(q, 1.570795580727654, 8);
  sqcRZGate(q, 0.06789534156965349, 8);
  sqcRYGate(q, -1.5468709285150108, 9);
  sqcRZGate(q, 2.1796211894195876, 9);
  sqcRYGate(q, -3.1415920127290313, 10);
  sqcRZGate(q, 1.7651626344847344, 10);
  sqcRYGate(q, -0.00038492621440511243, 11);
  sqcRZGate(q, -2.786469987687124, 11);
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
  sqcRYGate(q, -2.688563288451873, 0);
  sqcRZGate(q, 1.5707924807560385, 0);
  sqcRYGate(q, 2.8499861968351323e-06, 1);
  sqcRZGate(q, -2.57079347982141, 1);
  sqcRYGate(q, -1.570795938586885, 2);
  sqcRZGate(q, 3.1309435973553033, 2);
  sqcRYGate(q, -3.1415916543631046, 3);
  sqcRZGate(q, 2.132852515352487, 3);
  sqcRYGate(q, 1.5707970743143438, 4);
  sqcRZGate(q, 1.9833656067415077, 4);
  sqcRYGate(q, -1.57079018739571, 5);
  sqcRZGate(q, 2.8007680732267044, 5);
  sqcRYGate(q, 6.149786685931821e-08, 6);
  sqcRZGate(q, -1.0345811177625794, 6);
  sqcRYGate(q, -3.1415926365237645, 7);
  sqcRZGate(q, -1.885606205132004, 7);
  sqcRYGate(q, -6.787854853929076e-05, 8);
  sqcRZGate(q, 3.0737898401302597, 8);
  sqcRYGate(q, -3.1414799478321385, 9);
  sqcRZGate(q, 2.1796164998007925, 9);
  sqcRYGate(q, -1.5707960199675215, 10);
  sqcRZGate(q, 1.6249790719261705, 10);
  sqcRYGate(q, -3.1415904414806333, 11);
  sqcRZGate(q, -2.232783841236991, 11);
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
  sqcRYGate(q, -1.5707936737961605, 0);
  sqcRZGate(q, -1.3542962862766492, 0);
  sqcRYGate(q, 2.0092215760060608, 1);
  sqcRZGate(q, 0.4294976497420383, 1);
  sqcRYGate(q, 1.8431206161295677e-06, 2);
  sqcRZGate(q, 2.3319465925036473, 2);
  sqcRYGate(q, 1.319018265928561e-06, 3);
  sqcRZGate(q, -0.651261864130083, 3);
  sqcRYGate(q, 4.348049458258174e-07, 4);
  sqcRZGate(q, 1.158226361535196, 4);
  sqcRYGate(q, 3.141591324003934, 5);
  sqcRZGate(q, -0.3408309796009951, 5);
  sqcRYGate(q, -1.5708022417300949, 6);
  sqcRZGate(q, -0.2625591352038723, 6);
  sqcRYGate(q, 9.748860589908759e-07, 7);
  sqcRZGate(q, 3.0427208440816953, 7);
  sqcRYGate(q, 1.570796135404632, 8);
  sqcRZGate(q, 2.0818270996328154, 8);
  sqcRYGate(q, -1.57079753984433, 9);
  sqcRZGate(q, -0.00015501323239052638, 9);
  sqcRYGate(q, 3.1415843983086784, 10);
  sqcRZGate(q, 1.3790910465952686, 10);
  sqcRYGate(q, 0.16627774202900877, 11);
  sqcRZGate(q, 3.141569726045578, 11);
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
  sqcRYGate(q, 3.5459315901540527e-06, 0);
  sqcRZGate(q, -3.0370907409305192, 0);
  sqcRYGate(q, 1.6255409193965598, 1);
  sqcRZGate(q, 0.4793773624326185, 1);
  sqcRYGate(q, -1.527376463528185e-06, 2);
  sqcRZGate(q, 2.142959214371365, 2);
  sqcRYGate(q, -1.570796861898206, 3);
  sqcRZGate(q, 2.4283771930720186, 3);
  sqcRYGate(q, 1.5707968373447705, 4);
  sqcRZGate(q, 0.050248459324887675, 4);
  sqcRYGate(q, -3.0149659324051297, 5);
  sqcRZGate(q, 0.8575778617223078, 5);
  sqcRYGate(q, -3.3190838148762455e-06, 6);
  sqcRZGate(q, -2.8287840922795287, 6);
  sqcRYGate(q, 1.5707953105652912, 7);
  sqcRZGate(q, 0.8575889033883338, 7);
  sqcRYGate(q, -2.2527644283343307e-07, 8);
  sqcRZGate(q, -0.7309322862647337, 8);
  sqcRYGate(q, -1.4449810316291956, 9);
  sqcRZGate(q, -2.2840040478603165, 9);
  sqcRYGate(q, 1.9146754839383107e-06, 10);
  sqcRZGate(q, -1.544622107898575, 10);
  sqcRYGate(q, -1.5711365608757497, 11);
  sqcRZGate(q, 0.8577740423691711, 11);

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
