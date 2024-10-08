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

  sqcRYGate(q, 1.5906220082517526, 0);
  sqcRZGate(q, -2.3659819157821875, 0);
  sqcRYGate(q, 3.14059534914948, 1);
  sqcRZGate(q, -1.2388380293697785, 1);
  sqcRYGate(q, 1.5715143521805623, 2);
  sqcRZGate(q, 2.321587434192179, 2);
  sqcRYGate(q, 1.5314972408054668, 3);
  sqcRZGate(q, 1.108112002091941, 3);
  sqcRYGate(q, 0.674533947265942, 4);
  sqcRZGate(q, -1.7476386303635412, 4);
  sqcRYGate(q, 2.7430650590655232, 5);
  sqcRZGate(q, -0.8228358674833051, 5);
  sqcRYGate(q, -1.5713482020078282, 6);
  sqcRZGate(q, 1.572213903134016, 6);
  sqcRYGate(q, 3.1348502046167233, 7);
  sqcRZGate(q, 2.705414590696678, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.00022560212958154567, 0);
  sqcRZGate(q, -1.7979521102992746, 0);
  sqcRYGate(q, 1.5753866939014678, 1);
  sqcRZGate(q, -0.35992649250487047, 1);
  sqcRYGate(q, 0.0002278757157947453, 2);
  sqcRZGate(q, -0.7476779662075422, 2);
  sqcRYGate(q, 0.000123859701338353, 3);
  sqcRZGate(q, -2.6735659719481846, 3);
  sqcRYGate(q, -3.081121371878927, 4);
  sqcRZGate(q, 3.0716528996986514, 4);
  sqcRYGate(q, -3.1339991289311677, 5);
  sqcRZGate(q, 0.807468363862629, 5);
  sqcRYGate(q, -1.6939367299601717, 6);
  sqcRZGate(q, 1.1150112117453115, 6);
  sqcRYGate(q, 3.141438808203157, 7);
  sqcRZGate(q, 0.8852082725466535, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4972372394451677, 0);
  sqcRZGate(q, 2.621909966849422, 0);
  sqcRYGate(q, 0.00029440724501667427, 1);
  sqcRZGate(q, -0.4509067257393307, 1);
  sqcRYGate(q, 1.1040253526458217, 2);
  sqcRZGate(q, 1.5706677331899597, 2);
  sqcRYGate(q, 2.5873608803800967, 3);
  sqcRZGate(q, 3.0740900668103572, 3);
  sqcRYGate(q, -2.4075393498213513, 4);
  sqcRZGate(q, 0.1670688515077856, 4);
  sqcRYGate(q, 3.090260851862807, 5);
  sqcRZGate(q, 0.2335407394445008, 5);
  sqcRYGate(q, 3.1351637248450652, 6);
  sqcRZGate(q, -1.893102157885692, 6);
  sqcRYGate(q, 2.9002219275430323, 7);
  sqcRZGate(q, 2.1004605241723926, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5683729657784626, 0);
  sqcRZGate(q, 0.0008869441505236176, 0);
  sqcRYGate(q, -1.5232715715808989, 1);
  sqcRZGate(q, 1.4480833111105766, 1);
  sqcRYGate(q, -1.5589676430360417, 2);
  sqcRZGate(q, -0.004852548134496536, 2);
  sqcRYGate(q, -1.5697348773360078, 3);
  sqcRZGate(q, -0.011509467591537259, 3);
  sqcRYGate(q, -2.9075267846162127, 4);
  sqcRZGate(q, 0.4559032071182961, 4);
  sqcRYGate(q, -0.029272957375844122, 5);
  sqcRZGate(q, 1.4775443513357962, 5);
  sqcRYGate(q, 2.1865967581458294, 6);
  sqcRZGate(q, -1.4997573493658667, 6);
  sqcRYGate(q, 1.672033373106112, 7);
  sqcRZGate(q, -3.1210800208357363, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.844295224834907, 0);
  sqcRZGate(q, 0.00034613639126846493, 0);
  sqcRYGate(q, -3.141117640397045, 1);
  sqcRZGate(q, -1.622166915556675, 1);
  sqcRYGate(q, 1.5706959602054065, 2);
  sqcRZGate(q, 1.5701758783159372, 2);
  sqcRYGate(q, -1.577170835480578, 3);
  sqcRZGate(q, -0.5184801464270586, 3);
  sqcRYGate(q, -3.14158051830213, 4);
  sqcRZGate(q, -1.116375396354363, 4);
  sqcRYGate(q, 3.141564114210085, 5);
  sqcRZGate(q, 3.0451670198984897, 5);
  sqcRYGate(q, 3.0306845631178043, 6);
  sqcRZGate(q, -1.7467104130472244, 6);
  sqcRYGate(q, -0.1104789899835419, 7);
  sqcRZGate(q, -1.7400123128746687, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.593932902592139, 0);
  sqcRZGate(q, -1.5708337914298793, 0);
  sqcRYGate(q, 1.567759580766415, 1);
  sqcRZGate(q, -3.141375373409857, 1);
  sqcRYGate(q, 1.286480748350673, 2);
  sqcRZGate(q, 1.570783111387527, 2);
  sqcRYGate(q, 3.1366888591902358, 3);
  sqcRZGate(q, 1.0522845029112355, 3);
  sqcRYGate(q, -1.5715180601839516, 4);
  sqcRZGate(q, 0.0007473739624085896, 4);
  sqcRYGate(q, 1.5690965137769117, 5);
  sqcRZGate(q, -3.1388698892434204, 5);
  sqcRYGate(q, -0.6117614631111747, 6);
  sqcRZGate(q, -1.3589576342027438, 6);
  sqcRYGate(q, -2.5879910217925794, 7);
  sqcRZGate(q, 1.3998961299973818, 7);

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
