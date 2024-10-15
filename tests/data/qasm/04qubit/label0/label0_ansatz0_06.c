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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06991970095038229, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07405342183129235, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09800530026342534, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.13020243569562898, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.35154909792623945, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.06028228683460501, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.0064396316904385045, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.14069118858808044, 0);
  sqcRZGate(q, -0.3051213197177736, 1);
  sqcRZGate(q, 0.04810133396041157, 2);
  sqcRZGate(q, -0.03259877332803483, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.41175976283058696, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16244261065337565, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.01054731639955002, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3784094517581588, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1444646643380042, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.16400823485497168, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.1332812896588081, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.004280999360781265, 0);
  sqcRZGate(q, -0.17707765451821156, 1);
  sqcRZGate(q, 0.27150354473641525, 2);
  sqcRZGate(q, 0.004033292204884058, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0802320883327449, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.08806696722608659, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.28104575002884963, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5568467632104305, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.18493567701215574, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.16011456490753542, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.11322547430786652, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2046157269946356, 0);
  sqcRZGate(q, 0.05860100395298752, 1);
  sqcRZGate(q, 0.4345085005427001, 2);
  sqcRZGate(q, 0.1986727496863194, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8459808718446765, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6011796554512676, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.48421079654212806, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.7399982649182775, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5315790995147297, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.16847648994053638, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.0186783377573978, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3705850710609985, 0);
  sqcRZGate(q, 0.3870587103510397, 1);
  sqcRZGate(q, 0.33253323006938423, 2);
  sqcRZGate(q, 0.2794266005480635, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.2998523182533201, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.636143070663537, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.40932178166811106, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.9301743316979465, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.03460321779416112, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5779970661712186, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.07705179968515957, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.24649007187577346, 0);
  sqcRZGate(q, 0.7386413835891558, 1);
  sqcRZGate(q, 0.6002822669723381, 2);
  sqcRZGate(q, 0.3934833034104962, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8543967087067518, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.44419819115924286, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.5684136997502985, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.9390879177644698, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3091040579968707, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.752842388748933, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.25739507763559866, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.891002952049874, 0);
  sqcRZGate(q, 0.48323383564581285, 1);
  sqcRZGate(q, 0.11311657783411297, 2);
  sqcRZGate(q, 0.42493062139736776, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.8767939938850726, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.8747285123385804, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.5785965350990323, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3541125472383092, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.414089910133703, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.385783280855501, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5744379070928387, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9680364361664553, 0);
  sqcRZGate(q, 0.03548455847391885, 1);
  sqcRZGate(q, -0.06081518490492, 2);
  sqcRZGate(q, 0.8225350709687693, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.9760711899616552, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.8030831474570356, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2321856305721949, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.2276226748406722, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.239819780511796, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.735294541116346, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.2477662768193798, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9358482559267436, 0);
  sqcRZGate(q, -0.04239440910740147, 1);
  sqcRZGate(q, -0.019996233097294897, 2);
  sqcRZGate(q, 0.2936987022349574, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2554049862270897, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.8345430948480861, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.20260320174926175, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.4777425591648685, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.658834994182774, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.7233257682962044, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.04342766708026385, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5519161700557512, 0);
  sqcRZGate(q, 0.46956101629678465, 1);
  sqcRZGate(q, -0.21124612204827276, 2);
  sqcRZGate(q, 0.7729852861903312, 3);

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
