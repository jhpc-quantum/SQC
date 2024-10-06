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

  sqcRYGate(q, 2.413041941094413, 0);
  sqcRYGate(q, 0.13619844477803617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.965817582432777, 0);
  sqcRYGate(q, 1.2053094518741778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6496669588838042, 2);
  sqcRYGate(q, -2.3999895616123874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0111779753124632, 2);
  sqcRYGate(q, 2.468975492087742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5258065271925005, 0);
  sqcRYGate(q, 0.5513803974434861, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4300688744429815, 0);
  sqcRYGate(q, 1.3319542980272976, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4795924507200666, 1);
  sqcRYGate(q, -2.4639938937159482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0719941060846923, 1);
  sqcRYGate(q, -0.2551599531859452, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7130411351776337, 0);
  sqcRYGate(q, -0.00460001220088974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.977107342516879, 0);
  sqcRYGate(q, -2.049491492619942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5907642068902774, 2);
  sqcRYGate(q, -0.2061563342087629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4964106149467242, 2);
  sqcRYGate(q, -1.5368150522113604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.145955374834424, 0);
  sqcRYGate(q, -0.8707544281646395, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.881370581582213, 0);
  sqcRYGate(q, 0.056311639186446195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0342114788000325, 1);
  sqcRYGate(q, -2.504698416253285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9928758125913169, 1);
  sqcRYGate(q, 3.1165281308504666, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.713019856393245, 0);
  sqcRYGate(q, -2.784058599677103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47533905317641373, 0);
  sqcRYGate(q, 0.9697565908416149, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6885442820280325, 2);
  sqcRYGate(q, 2.5930929355326326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.52430256706609, 2);
  sqcRYGate(q, 1.6281019923141447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9367653587769816, 0);
  sqcRYGate(q, 2.0382219323326884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6876018764377632, 0);
  sqcRYGate(q, -0.3300252542493203, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3378782074759947, 1);
  sqcRYGate(q, -0.1496634407675968, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2902156835173457, 1);
  sqcRYGate(q, 1.5679815335842475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5502758291868455, 0);
  sqcRYGate(q, -1.9693905924737907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.297882605725874, 0);
  sqcRYGate(q, -0.23768028696988439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.347344321314511, 2);
  sqcRYGate(q, 1.700994867871187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3200946599203736, 2);
  sqcRYGate(q, 0.9386926297516585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.921808013031172, 0);
  sqcRYGate(q, -3.040950400720127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.834837937613317, 0);
  sqcRYGate(q, -2.5339873202284613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.364753266485069, 1);
  sqcRYGate(q, 3.120470091128011, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9050154021434986, 1);
  sqcRYGate(q, 1.7130908527584197, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8191085439186794, 0);
  sqcRYGate(q, 2.1975905453437083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2663659207675365, 0);
  sqcRYGate(q, 1.447698994418042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3283807002343562, 2);
  sqcRYGate(q, 0.37564222071151526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8429967075755715, 2);
  sqcRYGate(q, 0.04653653573758376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.514976435587414, 0);
  sqcRYGate(q, 1.6461888662641961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.416285032636951, 0);
  sqcRYGate(q, 1.223583892515146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0712976947294832, 1);
  sqcRYGate(q, -2.316191790635627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0701107055962433, 1);
  sqcRYGate(q, 1.833172082378576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.22097756394734752, 0);
  sqcRYGate(q, -2.2601995583655197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.137672385839071, 0);
  sqcRYGate(q, -1.383275325779409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7848930840030723, 2);
  sqcRYGate(q, 1.3709544237011375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.49327137598289567, 2);
  sqcRYGate(q, 2.6575514891686236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1328496656244504, 0);
  sqcRYGate(q, -1.6037576757019891, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3717363322033025, 0);
  sqcRYGate(q, -1.6194049374056827, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1612645037362792, 1);
  sqcRYGate(q, -0.9241135142503527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9087068495045947, 1);
  sqcRYGate(q, -1.6546338181403597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.18087143168269648, 0);
  sqcRYGate(q, -2.689385083025094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29479915903814946, 0);
  sqcRYGate(q, -1.3528415379703143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7428712516217697, 2);
  sqcRYGate(q, 1.3843589217205385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2688432482401617, 2);
  sqcRYGate(q, 0.20868163326082723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5194037801969333, 0);
  sqcRYGate(q, 2.7677777526616008, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2186549791545218, 0);
  sqcRYGate(q, -2.0708310076103222, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.467255373522593, 1);
  sqcRYGate(q, -1.503227206676546, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.276594108921592, 1);
  sqcRYGate(q, 1.7326869581863242, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.754162565774144, 0);
  sqcRYGate(q, -0.186557595921075, 1);
  sqcRYGate(q, -1.5972463206259482, 2);
  sqcRYGate(q, -0.13723250972848514, 3);

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
