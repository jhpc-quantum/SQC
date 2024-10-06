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

  sqcRYGate(q, 1.2260085065818371, 0);
  sqcRYGate(q, 2.450586378997944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.054681902491633995, 0);
  sqcRYGate(q, 2.6158433421650114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18269553731738863, 2);
  sqcRYGate(q, 1.8945225546394142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6766405454481985, 2);
  sqcRYGate(q, -2.3466718636237305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.562042609197137, 1);
  sqcRYGate(q, 2.1927512180030586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.48497896831349, 1);
  sqcRYGate(q, 3.105316235110991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5082213593510405, 0);
  sqcRYGate(q, 1.4421674396881963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.656260957954603, 0);
  sqcRYGate(q, -2.3489164526878086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8863966535296206, 2);
  sqcRYGate(q, -2.4169384311429365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.344655742819507, 2);
  sqcRYGate(q, -2.0064185510935237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3386115268090792, 1);
  sqcRYGate(q, 2.045620781420801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.983353234596054, 1);
  sqcRYGate(q, -2.2176834384110347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5669708940698164, 0);
  sqcRYGate(q, -2.264595016049403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1532696670262332, 0);
  sqcRYGate(q, -1.881763606377766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.738151585554756, 2);
  sqcRYGate(q, 0.6249649423238157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7916997306098654, 2);
  sqcRYGate(q, 1.799553543774306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.456936718288083, 1);
  sqcRYGate(q, 2.7353910813469753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.382506625690156, 1);
  sqcRYGate(q, -1.5210674570348868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7978334171414313, 0);
  sqcRYGate(q, 0.3343268492266056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3753637370249603, 0);
  sqcRYGate(q, -2.704260021733507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04044262420591682, 2);
  sqcRYGate(q, 2.561821465462767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7656400670627195, 2);
  sqcRYGate(q, -2.5966851801121935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.37017570196475, 1);
  sqcRYGate(q, -0.07542787656710019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5628720345227434, 1);
  sqcRYGate(q, -1.8626222161162802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1489747590734813, 0);
  sqcRYGate(q, 2.542633058456313, 1);
  sqcRYGate(q, 2.944035546625805, 2);
  sqcRYGate(q, -2.5910033254266454, 3);

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
