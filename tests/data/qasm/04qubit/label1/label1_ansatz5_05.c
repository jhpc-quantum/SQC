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

  sqcRYGate(q, -2.472144742748004, 0);
  sqcRYGate(q, 3.1290854924373064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5683354083510972, 0);
  sqcRYGate(q, -0.7753667077639852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.003241384909422, 2);
  sqcRYGate(q, 1.6085101294565334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9312223981299562, 2);
  sqcRYGate(q, 1.8165704567616032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.767135597345571, 1);
  sqcRYGate(q, -2.734035712894701, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6927941096276276, 1);
  sqcRYGate(q, 0.6353860368972498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.75702778986335, 0);
  sqcRYGate(q, -1.421596985771277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.412691888565765, 0);
  sqcRYGate(q, -3.130636115295236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9289666496627537, 2);
  sqcRYGate(q, -0.5613964552764322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7198788184733367, 2);
  sqcRYGate(q, -0.8991665762770429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5963363284281331, 1);
  sqcRYGate(q, 1.1394803545122052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8581456591417371, 1);
  sqcRYGate(q, 2.7703858433839783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8421787002063525, 0);
  sqcRYGate(q, -0.48809292221787337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6844257811667944, 0);
  sqcRYGate(q, 2.4478923494702802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1373942453717443, 2);
  sqcRYGate(q, 1.8940868475150157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8750809103895403, 2);
  sqcRYGate(q, 1.6243169144170346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8091119279272543, 1);
  sqcRYGate(q, 1.1064779668705214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7229513426531082, 1);
  sqcRYGate(q, 1.0543786262180317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9655958819410118, 0);
  sqcRYGate(q, -2.9829062543120743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44765453565471225, 0);
  sqcRYGate(q, -3.112173870690045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.776721372153978, 2);
  sqcRYGate(q, -2.512520884844492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3076628816514617, 2);
  sqcRYGate(q, -1.612688379636111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5342137678498893, 1);
  sqcRYGate(q, 2.4489095314409774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.040447037689009, 1);
  sqcRYGate(q, 0.7073228094149123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.074166420481716, 0);
  sqcRYGate(q, -3.053406508483019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7283565296847643, 0);
  sqcRYGate(q, -2.5505417487638304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4489112683406553, 2);
  sqcRYGate(q, 0.3424870071044309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.535071089334146, 2);
  sqcRYGate(q, -1.0691113100196978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9548764575508136, 1);
  sqcRYGate(q, -0.3517939603229676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.218115401087081, 1);
  sqcRYGate(q, 1.3059887329636752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8735720468394472, 0);
  sqcRYGate(q, -0.6740610711653607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1572150717751915, 0);
  sqcRYGate(q, 2.072322243406701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8258423946675504, 2);
  sqcRYGate(q, 2.7951570598112583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1623199701247793, 2);
  sqcRYGate(q, -2.3828978607756515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8193058301323142, 1);
  sqcRYGate(q, 0.49969375310205866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.677876214784643, 1);
  sqcRYGate(q, -1.8030814329173834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30513280380846114, 0);
  sqcRYGate(q, -0.8029905674566207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2619088102270055, 0);
  sqcRYGate(q, -1.5734945196066736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7015827714666223, 2);
  sqcRYGate(q, -1.590692228672947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0504595346414638, 2);
  sqcRYGate(q, 0.9426924929516399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8237903325617753, 1);
  sqcRYGate(q, 1.7331196388023562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5893816318225724, 1);
  sqcRYGate(q, -1.388704162976051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9934418706245136, 0);
  sqcRYGate(q, -0.11259991229814435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9386085115998264, 0);
  sqcRYGate(q, -0.12298031254266738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.528335151285356, 2);
  sqcRYGate(q, -0.6995563708609218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1884235930860019, 2);
  sqcRYGate(q, -1.100184071852982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3002178823169012, 1);
  sqcRYGate(q, 1.3645008995561891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.048978861733489, 1);
  sqcRYGate(q, 2.8573907862255754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.615100818367502, 0);
  sqcRYGate(q, -1.234529786806829, 1);
  sqcRYGate(q, 1.8180533916898103, 2);
  sqcRYGate(q, 2.9545590756322455, 3);

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
