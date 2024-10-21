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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.8663950536943616, 0);
  sqcRYGate(q, 1.5889102231626682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7916948588082042, 0);
  sqcRYGate(q, -0.0177449291407408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7152537011900325, 2);
  sqcRYGate(q, -3.0996295535236427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8839048502554614, 2);
  sqcRYGate(q, -0.5003304728229824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6521579109881427, 0);
  sqcRYGate(q, -1.9392354883924412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8803169673481532, 0);
  sqcRYGate(q, -0.8884379487962981, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8753526474384482, 1);
  sqcRYGate(q, 2.2160718272346216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9080979317211595, 1);
  sqcRYGate(q, 2.64768293752445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7846686904294544, 0);
  sqcRYGate(q, 2.1025450608270693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6616207269184557, 0);
  sqcRYGate(q, 0.033018270735843736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47605566579600817, 2);
  sqcRYGate(q, -1.5784698538443125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.611822261134807, 2);
  sqcRYGate(q, -1.4135409620019537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4746371657535864, 0);
  sqcRYGate(q, 2.278989761742767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.969680031985574, 0);
  sqcRYGate(q, 2.4333249620156545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1580871454561779, 1);
  sqcRYGate(q, -0.10702725927825264, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9275225799896258, 1);
  sqcRYGate(q, 2.1258117027678605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.410367326947164, 0);
  sqcRYGate(q, -2.5580846435213442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.043165483743145, 0);
  sqcRYGate(q, -0.5203575606644163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1798302701146524, 2);
  sqcRYGate(q, 3.0388934244346104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5966726710696175, 2);
  sqcRYGate(q, 1.0629661005636821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3191032903572266, 0);
  sqcRYGate(q, -1.5787773098289626, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.142827533434974, 0);
  sqcRYGate(q, -3.0526233336331083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.338662133826712, 1);
  sqcRYGate(q, 2.4167766798794887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41771638895150204, 1);
  sqcRYGate(q, -0.9267718810720282, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0321340251677005, 0);
  sqcRYGate(q, -1.9153382207647098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24739221950116885, 0);
  sqcRYGate(q, 2.2843233219599313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5641226293891526, 2);
  sqcRYGate(q, -0.10363604698674944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5006876351977381, 2);
  sqcRYGate(q, 2.533464971778601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42011299566517846, 0);
  sqcRYGate(q, -0.9577985039825458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6596173328928544, 0);
  sqcRYGate(q, -0.20737133476538452, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6873336334111491, 1);
  sqcRYGate(q, 0.7267298121093395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5866891318812115, 1);
  sqcRYGate(q, 2.4061963213658037, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.623339921809139, 0);
  sqcRYGate(q, 2.9004271938160073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.258284362566517, 0);
  sqcRYGate(q, 2.966644448706023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9079474581008958, 2);
  sqcRYGate(q, -0.04620271735338477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.181050250421043, 2);
  sqcRYGate(q, -1.9697980053305457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1637701742394118, 0);
  sqcRYGate(q, -2.982213884219448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.43526317434985806, 0);
  sqcRYGate(q, -0.1481098772258136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9402825436573218, 1);
  sqcRYGate(q, -0.7055050469312167, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7317981600428585, 1);
  sqcRYGate(q, -0.1110262459624333, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0097807578273785, 0);
  sqcRYGate(q, -2.111097171392229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.843376590948488, 0);
  sqcRYGate(q, -1.4248550221592833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.536763688814121, 2);
  sqcRYGate(q, -1.6815076646152907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2730113571525035, 2);
  sqcRYGate(q, 3.109500562198725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0903130982170293, 0);
  sqcRYGate(q, -2.855665692050895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5323204234565841, 0);
  sqcRYGate(q, 1.733433433711065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1578512443543409, 1);
  sqcRYGate(q, -2.1066445327896157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6535798236884207, 1);
  sqcRYGate(q, 0.11819150116312074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5246176207185806, 0);
  sqcRYGate(q, -0.9922178645041964, 1);
  sqcRYGate(q, 2.927032830982957, 2);
  sqcRYGate(q, 0.7703154692569195, 3);

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
