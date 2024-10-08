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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03159333257061299, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07149252085340214, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07759117418495086, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.008178448221363944, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.05210878102125015, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.050937908638164844, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05243346741474304, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.03105546063963692, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.5683758523620643, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.570736624269456, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.5707802358715428, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.5708063527133387, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.5707987886945962, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.570852706816526, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.0303339377919791, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.001392307958740102, 0);
  sqcRZGate(q, -1.5614415832773594, 1);
  sqcRZGate(q, -0.03920481038472569, 2);
  sqcRZGate(q, -1.570810038803872, 3);
  sqcRZGate(q, -1.5707969842140566, 4);
  sqcRZGate(q, -1.6342049840071022, 5);
  sqcRZGate(q, -1.7140130023656557, 6);
  sqcRZGate(q, -2.4121070271971514, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.2807919961218655, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.570883727309839, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.637235695938374, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.5710461230473083, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6371696441349333, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.5700647058846189, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.11495158744939396, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.243780422094108, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.533375996817799, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.04904650517755097, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.1422024146098608, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.14221516925330252, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.04905019089015531, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -2.8344726340625215, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 3.141276779518591, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.5711939706179185, 0);
  sqcRZGate(q, -0.22739486052692792, 1);
  sqcRZGate(q, -0.2779907495258988, 2);
  sqcRZGate(q, 3.141590059396379, 3);
  sqcRZGate(q, 3.028823167977245e-06, 4);
  sqcRZGate(q, -0.038341081398359976, 5);
  sqcRZGate(q, 1.7804071674625104, 6);
  sqcRZGate(q, -0.8414358159979409, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.5598758809019673, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.5682494950303143, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.38803048928987804, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.5710264628778792, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.3879636902169995, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.5700225508834291, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4054060424205372, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.5707911320338221, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -3.1415280536332433, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 3.141365496941065, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.570800230676443, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.5706787294291686, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 5.949000986142381e-05, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.0677680661371932e-05, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.5707934041183464, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.5668269092718772, 0);
  sqcRZGate(q, -0.22740352225431218, 1);
  sqcRZGate(q, -0.27801052018822814, 2);
  sqcRZGate(q, 1.5635279725224956e-05, 3);
  sqcRZGate(q, -8.714457420806395e-06, 4);
  sqcRZGate(q, 0.03833782419010599, 5);
  sqcRZGate(q, -1.7804189829114738, 6);
  sqcRZGate(q, 0.5602850858274518, 7);

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
