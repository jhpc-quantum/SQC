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

  sqcRYGate(q, 3.0149669445416323, 0);
  sqcRYGate(q, -1.6792217372751113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.631229421166343, 0);
  sqcRYGate(q, 2.091664625597633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.683106963169787, 2);
  sqcRYGate(q, 0.13978725688776927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2470399856423295, 2);
  sqcRYGate(q, -2.47152408048906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5245305136193278, 4);
  sqcRYGate(q, -2.9465897401465755, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6824439149894144, 4);
  sqcRYGate(q, 2.917242899231599, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5998052895838937, 6);
  sqcRYGate(q, 1.501030493147332, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8364050097456379, 6);
  sqcRYGate(q, -2.1736189690633214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0044696801265243, 1);
  sqcRYGate(q, -0.44097081442420105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1755431942566341, 1);
  sqcRYGate(q, -1.9455157045119122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8863382044235415, 3);
  sqcRYGate(q, -0.15325799149128372, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5707966800437052, 3);
  sqcRYGate(q, 1.5707962584555704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6913441361552306, 5);
  sqcRYGate(q, -2.6902301259179384, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.570796389112382, 5);
  sqcRYGate(q, 0.3558369977428941, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7126964748225816, 0);
  sqcRYGate(q, 1.5707949700605583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.021626150771340866, 0);
  sqcRYGate(q, 0.9753568693332522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5369310563405634e-07, 2);
  sqcRYGate(q, -1.388519211861702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.570795357378136, 2);
  sqcRYGate(q, -0.3976383720490811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1030434983183568e-06, 4);
  sqcRYGate(q, 3.1388663832709924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5707979965596799, 4);
  sqcRYGate(q, 1.8557962675205524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06902723202569369, 6);
  sqcRYGate(q, 2.3519828503158786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.280791430756301, 6);
  sqcRYGate(q, -1.4126964281650614, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5707976093205556, 1);
  sqcRYGate(q, -2.2827301560113256e-07, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5707952503022413, 1);
  sqcRYGate(q, 0.768571861406178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5707963664801907, 3);
  sqcRYGate(q, 0.13280694285214878, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1415861195551296, 3);
  sqcRYGate(q, -1.570795658725164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5708155207377104, 5);
  sqcRYGate(q, -0.888012369972402, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5707965037784963, 5);
  sqcRYGate(q, 1.6249858808113053, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6902996135628872, 0);
  sqcRYGate(q, -6.487715863354162e-08, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5707964000327503, 0);
  sqcRYGate(q, -0.8952123888344617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5707962847086376, 2);
  sqcRYGate(q, 1.5707962871797871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1862286835410902, 2);
  sqcRYGate(q, 1.4506842662333086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9058288144362576, 4);
  sqcRYGate(q, -1.0740678524356895e-06, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5707961243214994, 4);
  sqcRYGate(q, 1.7675094920340712e-07, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5708061797816113, 6);
  sqcRYGate(q, -1.5707966241379046, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5707975553870597, 6);
  sqcRYGate(q, 3.0703229660442664, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.141592410085514, 1);
  sqcRYGate(q, -6.618849024420115e-08, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5707962609206811, 1);
  sqcRYGate(q, 1.5707961634235619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -8.185195099486009e-08, 3);
  sqcRYGate(q, 1.0386374102748102, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5707962482231366, 3);
  sqcRYGate(q, 1.5707970817916852, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5707959046446804, 5);
  sqcRYGate(q, -1.8286164916426273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1289696279751507e-06, 5);
  sqcRYGate(q, 1.570781041951049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.072100633238714, 0);
  sqcRYGate(q, 2.072102799258313, 1);
  sqcRYGate(q, -1.0694932708658251, 2);
  sqcRYGate(q, 0.5013059302669678, 3);
  sqcRYGate(q, -2.640288247477845, 4);
  sqcRYGate(q, -2.64028622001369, 5);
  sqcRYGate(q, 2.3299297092928413, 6);
  sqcRYGate(q, -1.0694899815489585, 7);

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
