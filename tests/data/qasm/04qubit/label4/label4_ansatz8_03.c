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

  sqcRYGate(q, 2.0149266069276903, 0);
  sqcRYGate(q, 2.162435269950885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6122170259987785, 0);
  sqcRYGate(q, 1.2038962612200237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.498216830239647, 2);
  sqcRYGate(q, -0.4427903991028605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.330856431098466, 2);
  sqcRYGate(q, -2.751671316034051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22224437471948466, 0);
  sqcRYGate(q, 2.64280741009771, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1253325224697455, 0);
  sqcRYGate(q, 2.3658689520314224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4126711858034806, 1);
  sqcRYGate(q, 2.3062036156054972, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4113864652816996, 1);
  sqcRYGate(q, -0.9902889695585806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3926989404533026, 0);
  sqcRYGate(q, -1.4690358475775487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3489993763606647, 0);
  sqcRYGate(q, 0.3114029047356821, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1954105567570394, 2);
  sqcRYGate(q, 1.2977330424611457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8143069478902567, 2);
  sqcRYGate(q, 0.6484772851447582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7100088474982722, 0);
  sqcRYGate(q, -1.5467200869605966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5018707312723563, 0);
  sqcRYGate(q, 2.4936643404859065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9701988924858869, 1);
  sqcRYGate(q, 0.5364423689203495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11933494474428308, 1);
  sqcRYGate(q, 1.14823899911375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5786286494781816, 0);
  sqcRYGate(q, -1.8713325572612245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.055322246692013, 0);
  sqcRYGate(q, 1.505569651592768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4943393518888843, 2);
  sqcRYGate(q, -1.023575202343583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5468389215460254, 2);
  sqcRYGate(q, -0.018360218793937122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9706220964696057, 0);
  sqcRYGate(q, -2.681753972803925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.748757833304365, 0);
  sqcRYGate(q, -1.093325318536762, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6567621090544673, 1);
  sqcRYGate(q, -1.1479982053340647, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9599401835674506, 1);
  sqcRYGate(q, 2.6518389341412294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.772427569877637, 0);
  sqcRYGate(q, -2.036027087618307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9182021948355807, 0);
  sqcRYGate(q, -2.813401357668264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.853268250058899, 2);
  sqcRYGate(q, 0.7159617579241262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.782113253986342, 2);
  sqcRYGate(q, 0.010700457805059573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9145284659100792, 0);
  sqcRYGate(q, 3.06218052009901, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.380278439052922, 0);
  sqcRYGate(q, 1.5929459742580598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.128923536598341, 1);
  sqcRYGate(q, 2.292400692732987, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8133150298368903, 1);
  sqcRYGate(q, -1.9168970835343142, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.014899755750615, 0);
  sqcRYGate(q, 1.3829481044944711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5272522910973247, 0);
  sqcRYGate(q, -1.215953541786888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.035024624415803, 2);
  sqcRYGate(q, 1.1085581698394407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9790516510911784, 2);
  sqcRYGate(q, 0.7884946843664106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2335566516893888, 0);
  sqcRYGate(q, 0.08188554890018551, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8505305123104905, 0);
  sqcRYGate(q, -1.3807682713398555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.48498832404990155, 1);
  sqcRYGate(q, -0.9470402515883857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5799878655006243, 1);
  sqcRYGate(q, -0.7125424583106506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9713514543469453, 0);
  sqcRYGate(q, -2.8410628691403446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.25626770992530545, 0);
  sqcRYGate(q, 0.6938314280545217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.95113312333246, 2);
  sqcRYGate(q, -2.3616240999011833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7111568207065913, 2);
  sqcRYGate(q, 1.2434099936388503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7201870384682962, 0);
  sqcRYGate(q, -1.0732380451580055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.799305923531909, 0);
  sqcRYGate(q, 0.048738907644236384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9605261637234443, 1);
  sqcRYGate(q, -2.7959727385570172, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2444588652297887, 1);
  sqcRYGate(q, 0.5043978053937247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8454843165967462, 0);
  sqcRYGate(q, -1.920302897936143, 1);
  sqcRYGate(q, -2.165555989541617, 2);
  sqcRYGate(q, -2.3398524981086655, 3);

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
