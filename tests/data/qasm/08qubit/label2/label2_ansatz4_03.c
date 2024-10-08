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

  sqcRYGate(q, 0.5829787917340894, 0);
  sqcRZGate(q, 2.2698562360820107, 0);
  sqcRYGate(q, -0.03918579178067283, 1);
  sqcRZGate(q, -1.0211826094943097, 1);
  sqcRYGate(q, 0.0003114214005881164, 2);
  sqcRZGate(q, 1.719277277058188, 2);
  sqcRYGate(q, 3.126435033287021, 3);
  sqcRZGate(q, 0.9660743699131691, 3);
  sqcRYGate(q, 1.5376146340878103, 4);
  sqcRZGate(q, -2.1773008433514986, 4);
  sqcRYGate(q, -1.558415502306778, 5);
  sqcRZGate(q, -2.5099413099943844, 5);
  sqcRYGate(q, 2.887454873373296, 6);
  sqcRZGate(q, -0.14125303706192752, 6);
  sqcRYGate(q, 2.6211539442175313, 7);
  sqcRZGate(q, -3.0783011684758943, 7);
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
  sqcRYGate(q, -2.0095052895843013, 0);
  sqcRZGate(q, -1.9802560260416868, 0);
  sqcRYGate(q, -1.536354329125393, 1);
  sqcRZGate(q, 0.10558470412731549, 1);
  sqcRYGate(q, -3.141587349914981, 2);
  sqcRZGate(q, 0.39708103067467976, 2);
  sqcRYGate(q, 3.141590248937162, 3);
  sqcRZGate(q, 1.1315587089630745, 3);
  sqcRYGate(q, 0.0017573964909853856, 4);
  sqcRZGate(q, -1.1558180166608256, 4);
  sqcRYGate(q, -3.13982019419436, 5);
  sqcRZGate(q, -0.2370148769159197, 5);
  sqcRYGate(q, -0.9091236830964462, 6);
  sqcRZGate(q, 0.09994015750947227, 6);
  sqcRYGate(q, -2.3662074835195583, 7);
  sqcRZGate(q, -3.1009231765324303, 7);
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
  sqcRYGate(q, 3.022718092847387, 0);
  sqcRZGate(q, -1.2597054953597526, 0);
  sqcRYGate(q, 1.6768810930211009, 1);
  sqcRZGate(q, 2.906147947631599, 1);
  sqcRYGate(q, -1.5641813844074233, 2);
  sqcRZGate(q, -0.794510331261085, 2);
  sqcRYGate(q, 3.1414915580352467, 3);
  sqcRZGate(q, 0.46285164478321017, 3);
  sqcRYGate(q, -3.1019064191615504, 4);
  sqcRZGate(q, 1.3796483987013541, 4);
  sqcRYGate(q, 3.0895816708965387, 5);
  sqcRZGate(q, 2.947514463842659, 5);
  sqcRYGate(q, -2.8346566146605503, 6);
  sqcRZGate(q, -3.031561133288484, 6);
  sqcRYGate(q, 2.3479437392129707, 7);
  sqcRZGate(q, 0.07910640173910988, 7);
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
  sqcRYGate(q, -1.5711591663390538, 0);
  sqcRZGate(q, -2.0742962078767047, 0);
  sqcRYGate(q, -1.5703909609089322, 1);
  sqcRZGate(q, -0.9615695316129934, 1);
  sqcRYGate(q, -7.479690373912719e-05, 2);
  sqcRZGate(q, -0.7765250802483239, 2);
  sqcRYGate(q, -1.7282279163310932e-07, 3);
  sqcRZGate(q, -0.3585392292532595, 3);
  sqcRYGate(q, 0.0668152992583444, 4);
  sqcRZGate(q, -0.00035616308812125665, 4);
  sqcRYGate(q, -3.1415485308230973, 5);
  sqcRZGate(q, 2.5116494676419228, 5);
  sqcRYGate(q, 2.3387796904263367, 6);
  sqcRZGate(q, -3.1137731031789815, 6);
  sqcRYGate(q, -2.3021342319333677, 7);
  sqcRZGate(q, -0.008766108769902026, 7);
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
  sqcRYGate(q, 1.0561857180027818, 0);
  sqcRZGate(q, 0.26644449791861113, 0);
  sqcRYGate(q, 2.315302832024525, 1);
  sqcRZGate(q, -2.701714688664456, 1);
  sqcRYGate(q, 1.570759057866549, 2);
  sqcRZGate(q, 2.17645794388812, 2);
  sqcRYGate(q, 1.5708960627438824, 3);
  sqcRZGate(q, -1.1118817348794405, 3);
  sqcRYGate(q, -1.5494138265888402, 4);
  sqcRZGate(q, 1.565647821778751, 4);
  sqcRYGate(q, -3.1409466227787743, 5);
  sqcRZGate(q, -2.713756963026331, 5);
  sqcRYGate(q, 0.424846402911395, 6);
  sqcRZGate(q, -1.605263432631343, 6);
  sqcRYGate(q, 2.758372902075825, 7);
  sqcRZGate(q, 1.5346678114581944, 7);
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
  sqcRYGate(q, -1.4313620194911676, 0);
  sqcRZGate(q, -1.569629559054567, 0);
  sqcRYGate(q, 1.43205674352832, 1);
  sqcRZGate(q, -1.5719662203826648, 1);
  sqcRYGate(q, -2.9514013319355187e-05, 2);
  sqcRZGate(q, -2.169721154649003, 2);
  sqcRYGate(q, 3.1414691866167375, 3);
  sqcRZGate(q, -0.7267644459065927, 3);
  sqcRYGate(q, -1.570274724317867, 4);
  sqcRZGate(q, 2.649382519390056, 4);
  sqcRYGate(q, -4.637794891119101e-06, 5);
  sqcRZGate(q, 2.9785373833756497, 5);
  sqcRYGate(q, 0.8102320988961198, 6);
  sqcRZGate(q, 0.024082881738336226, 6);
  sqcRYGate(q, 0.7602137354988852, 7);
  sqcRZGate(q, -3.1159391441805697, 7);
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
  sqcRYGate(q, 1.9995500717810364, 0);
  sqcRZGate(q, 2.5617951590325663, 0);
  sqcRYGate(q, 2.009387708518324, 1);
  sqcRZGate(q, -0.5799348456629252, 1);
  sqcRYGate(q, 1.5707537144865054, 2);
  sqcRZGate(q, 1.1726806395933052, 2);
  sqcRYGate(q, 0.0001019026324075771, 3);
  sqcRZGate(q, -0.7832436520023567, 3);
  sqcRYGate(q, 8.078740030104115e-05, 4);
  sqcRZGate(q, -3.047501463115132, 4);
  sqcRYGate(q, 1.5708342035689995, 5);
  sqcRZGate(q, -1.968915713433351, 5);
  sqcRYGate(q, -1.5708341012705243, 6);
  sqcRZGate(q, 1.1726793488651235, 6);
  sqcRYGate(q, -1.5707585549725014, 7);
  sqcRZGate(q, -1.9689132422578102, 7);

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
