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

  sqcRYGate(q, -1.1021457960420387, 0);
  sqcRYGate(q, -2.3971705509775862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8445454400011718, 0);
  sqcRYGate(q, -3.0529405122732443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.812194002721606, 2);
  sqcRYGate(q, -3.1248245802948964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.916175572727222, 2);
  sqcRYGate(q, 0.6437410946442474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1654974804845448, 1);
  sqcRYGate(q, -1.8454333367625895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2404755086913246, 1);
  sqcRYGate(q, -0.04534730868481419, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.503033566669983, 0);
  sqcRYGate(q, 1.1169227755271578, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29082413885444297, 0);
  sqcRYGate(q, -1.8952068535347726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.049949294627949, 2);
  sqcRYGate(q, -2.388336700441183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0654301799888568, 2);
  sqcRYGate(q, 1.8179276989547228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7553688307184565, 1);
  sqcRYGate(q, -0.9391759398578526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8053133674157492, 1);
  sqcRYGate(q, -0.5852561802166115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.906421256461094, 0);
  sqcRYGate(q, -1.5385939913388862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6406133051277816, 0);
  sqcRYGate(q, -2.868225548645808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0807488277130752, 2);
  sqcRYGate(q, 2.868605090455472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9451696420448445, 2);
  sqcRYGate(q, -2.376647512657098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8134948191008367, 1);
  sqcRYGate(q, -0.8483660126411348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22640239311046173, 1);
  sqcRYGate(q, 2.7156152610422652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.446624848101867, 0);
  sqcRYGate(q, -2.1934753439807952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2849453836364746, 0);
  sqcRYGate(q, -1.9766613366523746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37218485759655895, 2);
  sqcRYGate(q, -1.7749743858608598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4221882237426933, 2);
  sqcRYGate(q, -2.2045494507956596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5239414337636816, 1);
  sqcRYGate(q, 2.7688483260375762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2518726210768141, 1);
  sqcRYGate(q, -0.9208545544885909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.705060762894052, 0);
  sqcRYGate(q, -2.9293417471424053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3253367404104743, 0);
  sqcRYGate(q, 2.5340721575953897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2745654358931644, 2);
  sqcRYGate(q, -0.1502329634350271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6267433643285473, 2);
  sqcRYGate(q, -2.0339398403946767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3404725271185606, 1);
  sqcRYGate(q, -0.583022241415758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4105915806334184, 1);
  sqcRYGate(q, -0.43527434486577116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.915464877091051, 0);
  sqcRYGate(q, -2.5932878525065672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4862057695125204, 0);
  sqcRYGate(q, 0.6136465658317292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8180253413016585, 2);
  sqcRYGate(q, 3.132376563341577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6333552144362002, 2);
  sqcRYGate(q, 2.917126303865133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0892426370470254, 1);
  sqcRYGate(q, -2.9674760089242267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7230242388605497, 1);
  sqcRYGate(q, 0.44351652210566334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0807257489337, 0);
  sqcRYGate(q, -1.6235820443086424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3743473209516353, 0);
  sqcRYGate(q, 1.261569856958618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2736707059403654, 2);
  sqcRYGate(q, -2.84159348374112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2658551972044592, 2);
  sqcRYGate(q, -0.8343672970839886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.363919741902445, 1);
  sqcRYGate(q, 1.852462229566127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1382274658706629, 1);
  sqcRYGate(q, -0.409160445780341, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.20692170757341, 0);
  sqcRYGate(q, -2.8844636897719083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8045203509895194, 0);
  sqcRYGate(q, -2.5726419519722827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3132761801900896, 2);
  sqcRYGate(q, 1.8101708552514069, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41378494045972025, 2);
  sqcRYGate(q, 1.0082406017013419, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0353571170946196, 1);
  sqcRYGate(q, -2.6728420172934495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9582684611944545, 1);
  sqcRYGate(q, 2.408166142188605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7951490590758519, 0);
  sqcRYGate(q, 1.7898537214089814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.011262109713889856, 0);
  sqcRYGate(q, 1.2207781016617358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6201848257024355, 2);
  sqcRYGate(q, -0.04427658994894422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2676018146066914, 2);
  sqcRYGate(q, 2.172568384337974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6309058903698457, 1);
  sqcRYGate(q, 1.3220110654797825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3652899998209106, 1);
  sqcRYGate(q, 1.9629698905059225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0525474838661653, 0);
  sqcRYGate(q, -0.5884118735597291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.584083073621602, 0);
  sqcRYGate(q, 0.297442308632208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16488341395862705, 2);
  sqcRYGate(q, -0.8176614182470281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1697859224523426, 2);
  sqcRYGate(q, 1.9277054871185189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5448831385126661, 1);
  sqcRYGate(q, 3.0534113817845654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8417412677989491, 1);
  sqcRYGate(q, -1.3513686740117725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.509708972563948, 0);
  sqcRYGate(q, 0.8244738172438151, 1);
  sqcRYGate(q, -1.5035756263907458, 2);
  sqcRYGate(q, 1.7459717429654997, 3);

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
