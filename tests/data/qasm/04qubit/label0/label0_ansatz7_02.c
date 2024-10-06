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

  sqcRYGate(q, -0.9197713683469431, 0);
  sqcRYGate(q, 1.503333824104888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.034824925691843, 0);
  sqcRYGate(q, -1.7208625185450341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15812010060385703, 0);
  sqcRYGate(q, 0.7115756062332306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6523116814544663, 0);
  sqcRYGate(q, 2.2691185758894377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9792995815166785, 0);
  sqcRYGate(q, 0.9259610433308781, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0727024796149126, 0);
  sqcRYGate(q, 1.835687502691288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.163494281696078, 1);
  sqcRYGate(q, 1.1412421745616068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3507549825642238, 1);
  sqcRYGate(q, 2.538917423075833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0028431830711515, 1);
  sqcRYGate(q, 0.6952990518249813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1545545745600068, 1);
  sqcRYGate(q, -2.4978043528016136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2047126388579392, 2);
  sqcRYGate(q, 2.396910521947579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9833039113046342, 2);
  sqcRYGate(q, 1.4580978792078607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6799371092250925, 0);
  sqcRYGate(q, 0.16071537004854794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45990060526027143, 0);
  sqcRYGate(q, -0.9518633413590489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0216542210982245, 0);
  sqcRYGate(q, 2.0849551978804595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.463404307454656, 0);
  sqcRYGate(q, 1.0670540524629581, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9759272943405835, 0);
  sqcRYGate(q, 0.3478935593339534, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8563091347334458, 0);
  sqcRYGate(q, 1.3372744782326578, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.47030368440639897, 1);
  sqcRYGate(q, -3.0545002618080423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7962433844157633, 1);
  sqcRYGate(q, -2.1831461010744775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.170459713487923, 1);
  sqcRYGate(q, -1.797614228714891, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9093111554609957, 1);
  sqcRYGate(q, -2.575553113087295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4976179776236081, 2);
  sqcRYGate(q, 0.7929181430752312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.315599428378288, 2);
  sqcRYGate(q, -1.0852642216432677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3437914588031663, 0);
  sqcRYGate(q, 1.4403810493240699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.672298492253275, 0);
  sqcRYGate(q, 2.4751491989683565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9065354369807508, 0);
  sqcRYGate(q, -2.002547630898631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.593833781677893, 0);
  sqcRYGate(q, 2.3866437150244044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3129131148578888, 0);
  sqcRYGate(q, -2.2143111984061674, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.299021432794431, 0);
  sqcRYGate(q, 2.158977195781624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.247861653731105, 1);
  sqcRYGate(q, 0.8269389025457103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.709268462665718, 1);
  sqcRYGate(q, -1.6932441717170663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13185021008512038, 1);
  sqcRYGate(q, -1.6422681212212762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.068083960876651, 1);
  sqcRYGate(q, 0.09647548316661858, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7452997411613662, 2);
  sqcRYGate(q, -1.5384749436084892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4108015905473956, 2);
  sqcRYGate(q, -2.770979953076138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43033479869033364, 0);
  sqcRYGate(q, 0.6458327920712702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2012242153887245, 0);
  sqcRYGate(q, 2.025056310508266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.59175321667007, 0);
  sqcRYGate(q, 3.0875637537192198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.368260711748814, 0);
  sqcRYGate(q, -1.3169486234765122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9475371552644685, 0);
  sqcRYGate(q, 2.7188147654795514, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.39665055374394176, 0);
  sqcRYGate(q, 1.3060630331554257, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0448309477951976, 1);
  sqcRYGate(q, 1.5511441471059118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.29713911781083, 1);
  sqcRYGate(q, -0.4795156833524965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.334656033406176, 1);
  sqcRYGate(q, -1.998846909653171, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3651303090767855, 1);
  sqcRYGate(q, -2.8060499921776527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7280050006125112, 2);
  sqcRYGate(q, -1.7587228695488821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9722225063599237, 2);
  sqcRYGate(q, -2.3606866468592465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33168319910966026, 0);
  sqcRYGate(q, 2.132435821049822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1140330502569828, 0);
  sqcRYGate(q, 1.2812739411653533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.061048219264233, 0);
  sqcRYGate(q, -2.9388812485172107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1696797627517297, 0);
  sqcRYGate(q, 0.336882436824234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7906507540342202, 0);
  sqcRYGate(q, -2.9996086549948964, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.30174300483738936, 0);
  sqcRYGate(q, 2.5212372998102017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2474315635078312, 1);
  sqcRYGate(q, 1.5643719030141503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1328235159455282, 1);
  sqcRYGate(q, -0.7632123301360263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7313420410197099, 1);
  sqcRYGate(q, -1.7906063899814582, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7427612970371094, 1);
  sqcRYGate(q, -0.1350737506123076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9312727600112916, 2);
  sqcRYGate(q, -2.2390143260124136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.023943558567218658, 2);
  sqcRYGate(q, -2.4317144450359964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7687314851373585, 0);
  sqcRYGate(q, 1.3578896953898256, 1);
  sqcRYGate(q, 2.642823639959661, 2);
  sqcRYGate(q, -3.0271534257463912, 3);

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
