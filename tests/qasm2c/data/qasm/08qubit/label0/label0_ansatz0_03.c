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
  q = sqcQuantumCircuit(8);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08121532567070222, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04026345083353728, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05464201000923471, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.05478705313925358, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.03509959307836422, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0651637382114832, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.032643806846847756, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.39854278390261166, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3230397474984948, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.9001100480934767, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.1123549269340545, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.8897495742184565, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 2.4700159950439473, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6486059581330011, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.6891347837046732, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4144821639772081, 0);
  sqcRZGate(q, -0.35017946653340604, 1);
  sqcRZGate(q, -0.8795470657966952, 2);
  sqcRZGate(q, 0.855690681737706, 3);
  sqcRZGate(q, -0.6643929732740665, 4);
  sqcRZGate(q, 0.3180813556843418, 5);
  sqcRZGate(q, 0.16588817987071156, 6);
  sqcRZGate(q, -0.5741973853566249, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.217400473469204, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.025657795197563373, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6159084432329707, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0014082985784154875, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5866873297520474, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.0826236732487824, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.0163542555711332, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.6014071748084898, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.371581099305075, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9719206185035824, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.9381468248689073, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.7505039485040669, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.8781066652648506, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.08682707384824226, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.06833339606470457, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.007491446754450536, 0);
  sqcRZGate(q, -0.5992239433868913, 1);
  sqcRZGate(q, -0.5790527947620933, 2);
  sqcRZGate(q, 0.6591814994277474, 3);
  sqcRZGate(q, -1.4076745949195137, 4);
  sqcRZGate(q, -0.48270266286989166, 5);
  sqcRZGate(q, 0.2140261843044646, 6);
  sqcRZGate(q, -0.8397034567382619, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8598030833787897, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.9806956640765718, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.16703341184859755, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.20312313221644512, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.31352597107965224, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.1795932154265467, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.025195258515377173, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3154012297577031, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9624426933321093, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.0005687771941420719, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.2699069281395827, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.5042163213029474, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.0222775237149493, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5199423918859781, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.19559575419992495, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.42429993477662764, 0);
  sqcRZGate(q, 0.004520381031040017, 1);
  sqcRZGate(q, 0.7111607645534884, 2);
  sqcRZGate(q, 0.7393606411836748, 3);
  sqcRZGate(q, -2.244173900610873, 4);
  sqcRZGate(q, 2.901439238924185, 5);
  sqcRZGate(q, 1.1261093284046413, 6);
  sqcRZGate(q, -0.7274962044926927, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.329162637044885, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04879474372954864, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.33132575099536915, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.005520457484175894, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.9845645035542773, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.024629168224136643, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.01202363981620189, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.217713709540485, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.594392579190973, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.45218818048311565, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 3.058705994346877, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.9632431093025187, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.5914472307588531, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.0998502218054593, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.44165091045200094, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.2271122612457062, 0);
  sqcRZGate(q, -0.21409749459605948, 1);
  sqcRZGate(q, 0.09148891184103514, 2);
  sqcRZGate(q, -0.1409078509244401, 3);
  sqcRZGate(q, -0.2481334260047329, 4);
  sqcRZGate(q, -0.13997533224644354, 5);
  sqcRZGate(q, 0.6445170202386549, 6);
  sqcRZGate(q, 0.27245574059042155, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.2821627873442232, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5821612644591422, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.05120135389313285, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0006366606496432761, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.028842316154931498, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.3803906509842705, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4962279896491512, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6970933503355369, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.7779736186991256, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.045227921475692, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 3.1260454255616366, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.9249826650032351, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -2.062602250296388, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.9686117766420107, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.4927825807518681, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.7914622163016191, 0);
  sqcRZGate(q, 0.03186755263709091, 1);
  sqcRZGate(q, -0.01726116040576885, 2);
  sqcRZGate(q, -0.8900890471854658, 3);
  sqcRZGate(q, 0.030775528696264272, 4);
  sqcRZGate(q, 0.06198786605389083, 5);
  sqcRZGate(q, -0.0031637309772955674, 6);
  sqcRZGate(q, 0.5806495628807133, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.6555595517601385, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.046579016369848084, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.01705959953318327, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.06823205046046754, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.0583333689673535, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05788158727110069, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.5804496545266543, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.2305527793923379, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -2.7278683931664798, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.2274834993200796, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.3330750617308658, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.032868200868119646, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.337902019170427, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.8289499684655225, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.5500407631065167, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.2406331111033062, 0);
  sqcRZGate(q, 0.05682984109772024, 1);
  sqcRZGate(q, -0.1031417317580595, 2);
  sqcRZGate(q, 0.11463427430188056, 3);
  sqcRZGate(q, 0.5012798840786752, 4);
  sqcRZGate(q, 2.639909563272038, 5);
  sqcRZGate(q, -3.1347619828224182, 6);
  sqcRZGate(q, 0.3818951205635335, 7);

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
