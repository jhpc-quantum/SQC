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

  sqcRYGate(q, -5.543547780817448e-07, 0);
  sqcRZGate(q, -1.991169983813196, 0);
  sqcRYGate(q, 1.4891150512945603, 1);
  sqcRZGate(q, -1.5469223356844362, 1);
  sqcRYGate(q, -3.063730536541233, 2);
  sqcRZGate(q, 1.569596991990771, 2);
  sqcRYGate(q, -1.548344367134411, 3);
  sqcRZGate(q, 1.6066227551112036, 3);
  sqcRYGate(q, 5.605667324979201e-06, 4);
  sqcRZGate(q, -2.557324564825206, 4);
  sqcRYGate(q, 1.5710334077078538, 5);
  sqcRZGate(q, -1.5571098213315748, 5);
  sqcRYGate(q, -0.0026555310988474194, 6);
  sqcRZGate(q, 1.5361322100651638, 6);
  sqcRYGate(q, -1.4966491762352607, 7);
  sqcRZGate(q, -1.5710838886367053, 7);
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
  sqcRYGate(q, 3.9009534980039e-07, 0);
  sqcRZGate(q, 1.1689224178255695, 0);
  sqcRYGate(q, -0.036178395733174974, 1);
  sqcRZGate(q, 0.8109707887273094, 1);
  sqcRYGate(q, 2.814382472328866, 2);
  sqcRZGate(q, -1.3895523811640016, 2);
  sqcRYGate(q, 2.81394537525724, 3);
  sqcRZGate(q, -3.103760740877377, 3);
  sqcRYGate(q, -1.5708274321828384, 4);
  sqcRZGate(q, -0.43823854840535814, 4);
  sqcRYGate(q, 1.5710300398880852, 5);
  sqcRZGate(q, 3.127593593619585, 5);
  sqcRYGate(q, -1.8942011797862497, 6);
  sqcRZGate(q, 0.006472594317362912, 6);
  sqcRYGate(q, -1.247133751005637, 7);
  sqcRZGate(q, 0.0010180421990671322, 7);
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
  sqcRYGate(q, -3.141592641947498, 0);
  sqcRZGate(q, 1.9785953019135454, 0);
  sqcRYGate(q, -1.2590523522392507e-06, 1);
  sqcRZGate(q, 0.7360374541128873, 1);
  sqcRYGate(q, 3.141592593264042, 2);
  sqcRZGate(q, -2.9589413726113634, 2);
  sqcRYGate(q, -1.5707819462720007, 3);
  sqcRZGate(q, -2.1429070543678352, 3);
  sqcRYGate(q, 3.141532336019634, 4);
  sqcRZGate(q, -0.7323938799395062, 4);
  sqcRYGate(q, -1.5707962019298372, 5);
  sqcRZGate(q, -0.0001717213620831214, 5);
  sqcRYGate(q, -3.1415450465449575, 6);
  sqcRZGate(q, -1.5657235688520243, 6);
  sqcRYGate(q, 1.5707995464753326, 7);
  sqcRZGate(q, 0.598784133156128, 7);
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
  sqcRYGate(q, -1.5707963638323652, 0);
  sqcRZGate(q, -3.1415885872226603, 0);
  sqcRYGate(q, 1.5706302369876575, 1);
  sqcRZGate(q, -0.4258535078585152, 1);
  sqcRYGate(q, 1.5708581035977123, 2);
  sqcRZGate(q, -0.59302155485565, 2);
  sqcRYGate(q, 3.141401823124066, 3);
  sqcRZGate(q, 1.8362717819347552, 3);
  sqcRYGate(q, 3.140121036607013, 4);
  sqcRZGate(q, 1.7194749096597208, 4);
  sqcRYGate(q, 1.5705360574962028, 5);
  sqcRZGate(q, -2.026948613593492, 5);
  sqcRYGate(q, -1.5703708562151393, 6);
  sqcRZGate(q, 2.71382103911083, 6);
  sqcRYGate(q, -0.00030904125368543656, 7);
  sqcRZGate(q, 0.7070574329696986, 7);
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
  sqcRYGate(q, 1.5707905667311781, 0);
  sqcRZGate(q, -3.130909232517664, 0);
  sqcRYGate(q, -3.1415926270834236, 1);
  sqcRZGate(q, 2.726431289841432, 1);
  sqcRYGate(q, 7.0783385259867565e-06, 2);
  sqcRZGate(q, 0.603704131245255, 2);
  sqcRYGate(q, 4.5953494685855415e-08, 3);
  sqcRZGate(q, -2.3976904660250584, 3);
  sqcRYGate(q, -3.1415848085645246, 4);
  sqcRZGate(q, 0.45351540394480505, 4);
  sqcRYGate(q, -3.141592324027774, 5);
  sqcRZGate(q, -0.4454615450986825, 5);
  sqcRYGate(q, -7.677587405255514e-06, 6);
  sqcRZGate(q, -2.7031391903247552, 6);
  sqcRYGate(q, 3.1415922580512645, 7);
  sqcRZGate(q, 2.8873282894559553, 7);

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
