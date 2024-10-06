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

  sqcRYGate(q, -3.066625201633163, 0);
  sqcRZGate(q, -1.6462662375666627e-05, 0);
  sqcRYGate(q, 3.1415926052558785, 1);
  sqcRZGate(q, 0.41287249405655757, 1);
  sqcRYGate(q, 3.0949051772873046, 2);
  sqcRZGate(q, 6.945318235254245e-05, 2);
  sqcRYGate(q, 7.520678857026874e-08, 3);
  sqcRZGate(q, 0.2367171414080147, 3);
  sqcRYGate(q, 8.531176730894517e-07, 4);
  sqcRZGate(q, 1.6919974679223282, 4);
  sqcRYGate(q, -1.5707957954184555, 5);
  sqcRZGate(q, -2.3541685960637437e-06, 5);
  sqcRYGate(q, -1.6490666977296122, 6);
  sqcRZGate(q, 3.1415924805358926, 6);
  sqcRYGate(q, 1.5707949341425624, 7);
  sqcRZGate(q, 2.7998140138474486e-06, 7);
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
  sqcRYGate(q, -1.5708411528740531, 0);
  sqcRZGate(q, -3.1415912045588112, 0);
  sqcRYGate(q, 3.141592136426426, 1);
  sqcRZGate(q, 0.9590812152225635, 1);
  sqcRYGate(q, 1.5708181501009004, 2);
  sqcRZGate(q, -1.570790724642885, 2);
  sqcRYGate(q, -3.1415897052114987, 3);
  sqcRZGate(q, -0.22921733909069286, 3);
  sqcRYGate(q, 6.90448001474418e-05, 4);
  sqcRZGate(q, 3.0812921990899556, 4);
  sqcRYGate(q, 0.6613439935391154, 5);
  sqcRZGate(q, 1.570798601581027, 5);
  sqcRYGate(q, 1.5713293299434383, 6);
  sqcRZGate(q, 3.1415767164800283, 6);
  sqcRYGate(q, -2.4807872323018945, 7);
  sqcRZGate(q, -2.5180912788938077, 7);
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
  sqcRYGate(q, 0.551138610247376, 0);
  sqcRZGate(q, 0.9550541481769464, 0);
  sqcRYGate(q, -1.5707964827062433, 1);
  sqcRZGate(q, 1.5707966010629333, 1);
  sqcRYGate(q, -1.570791754140057, 2);
  sqcRZGate(q, 2.6033069765481027, 2);
  sqcRYGate(q, 1.5707982764001498, 3);
  sqcRZGate(q, -1.570796415464823, 3);
  sqcRYGate(q, 1.5708136697495851, 4);
  sqcRZGate(q, 3.1387541623751134, 4);
  sqcRYGate(q, -1.5708234363512465, 5);
  sqcRZGate(q, -2.8421355514859044, 5);
  sqcRYGate(q, 1.854055322365253, 6);
  sqcRZGate(q, -2.684229981233897, 6);
  sqcRYGate(q, -3.141590097069094, 7);
  sqcRZGate(q, -1.0570056484408923, 7);
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
  sqcRYGate(q, -3.141586780823417, 0);
  sqcRZGate(q, -2.1865224227437015, 0);
  sqcRYGate(q, 1.5707962130476578, 1);
  sqcRZGate(q, 1.8105738223882508, 1);
  sqcRYGate(q, -1.570791055781836, 2);
  sqcRZGate(q, -3.141592545873765, 2);
  sqcRYGate(q, -1.5707977990002089, 3);
  sqcRZGate(q, 1.5169506608688201, 3);
  sqcRYGate(q, -1.422132046250053, 4);
  sqcRZGate(q, 0.8267298645346297, 4);
  sqcRYGate(q, 2.0027141509425418e-07, 5);
  sqcRZGate(q, -1.8702536131190914, 5);
  sqcRYGate(q, 3.1415915417129026, 6);
  sqcRZGate(q, -2.6842014920144335, 6);
  sqcRYGate(q, 2.807838264118346e-07, 7);
  sqcRZGate(q, 1.6805038542594426, 7);
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
  sqcRYGate(q, 1.5707956147771769, 0);
  sqcRZGate(q, -2.142248957537466, 0);
  sqcRYGate(q, 6.400545782270228e-08, 1);
  sqcRZGate(q, -1.8526446735566298, 1);
  sqcRYGate(q, 1.570804892525117, 2);
  sqcRZGate(q, -2.1422503265638007, 2);
  sqcRYGate(q, 3.1415922849577704, 3);
  sqcRZGate(q, -1.518047844394351, 3);
  sqcRYGate(q, 4.379345684313306e-06, 4);
  sqcRZGate(q, 0.17302991294192263, 4);
  sqcRYGate(q, -1.5707960290166167, 5);
  sqcRZGate(q, 0.0009273424344637962, 5);
  sqcRYGate(q, -1.5707957333430986, 6);
  sqcRZGate(q, -2.1422526046960417, 6);
  sqcRYGate(q, 1.5707971762073116, 7);
  sqcRZGate(q, -1.569868616100789, 7);

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
