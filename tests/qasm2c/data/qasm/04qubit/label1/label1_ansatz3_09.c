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

  sqcRYGate(q, 1.2182262350012607, 0);
  sqcRZGate(q, -3.0102201374046422, 0);
  sqcRYGate(q, 0.23455285911364043, 1);
  sqcRZGate(q, 2.5515654826467786, 1);
  sqcRYGate(q, 0.5348214881372896, 2);
  sqcRZGate(q, -1.9106838214944806, 2);
  sqcRYGate(q, 0.7689566544026096, 3);
  sqcRZGate(q, -0.46835798240953447, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.506692449905303, 0);
  sqcRZGate(q, 2.4095315066235408, 0);
  sqcRYGate(q, -0.7437771107808029, 1);
  sqcRZGate(q, -0.9748710392199081, 1);
  sqcRYGate(q, 0.6153032130826341, 2);
  sqcRZGate(q, 2.1437260144184274, 2);
  sqcRYGate(q, 3.0980950696266785, 3);
  sqcRZGate(q, 2.5197728997240842, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1442793332554042, 0);
  sqcRZGate(q, 0.7079844049654058, 0);
  sqcRYGate(q, 2.1299856065746665, 1);
  sqcRZGate(q, 0.06551755598794962, 1);
  sqcRYGate(q, -1.4577621253160495, 2);
  sqcRZGate(q, 0.17633239784524274, 2);
  sqcRYGate(q, 1.481229679048874, 3);
  sqcRZGate(q, 0.9549570358062789, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.971269940437209, 0);
  sqcRZGate(q, -1.7417540915982748, 0);
  sqcRYGate(q, -2.7535729554541217, 1);
  sqcRZGate(q, 0.6502144332395117, 1);
  sqcRYGate(q, 2.6647287683593603, 2);
  sqcRZGate(q, -0.6949933492054496, 2);
  sqcRYGate(q, -2.597858049266849, 3);
  sqcRZGate(q, 1.3260378329944835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.109701569172774, 0);
  sqcRZGate(q, 0.11980474197846265, 0);
  sqcRYGate(q, 0.09579481537439381, 1);
  sqcRZGate(q, 2.0351847531362974, 1);
  sqcRYGate(q, 1.3869399480879856, 2);
  sqcRZGate(q, -1.4364557431629343, 2);
  sqcRYGate(q, -2.4846389625705423, 3);
  sqcRZGate(q, -0.4594353155201396, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9923033806798238, 0);
  sqcRZGate(q, 0.4859701584648386, 0);
  sqcRYGate(q, -0.7666696926772332, 1);
  sqcRZGate(q, 1.5374627206470337, 1);
  sqcRYGate(q, -0.3155005230868047, 2);
  sqcRZGate(q, 0.5673791041628768, 2);
  sqcRYGate(q, 1.4663408369187305, 3);
  sqcRZGate(q, -2.3404576019745496, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4223222984738801, 0);
  sqcRZGate(q, -1.8023357775164222, 0);
  sqcRYGate(q, -0.543105728075276, 1);
  sqcRZGate(q, -0.5406116347723627, 1);
  sqcRYGate(q, -0.7243975046884124, 2);
  sqcRZGate(q, 0.06994105993286226, 2);
  sqcRYGate(q, -0.5290801668552287, 3);
  sqcRZGate(q, -0.37126008732836, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4619787766767938, 0);
  sqcRZGate(q, 2.429586472769752, 0);
  sqcRYGate(q, -1.2215908624019045, 1);
  sqcRZGate(q, 2.1476376608454255, 1);
  sqcRYGate(q, 1.8902910033426283, 2);
  sqcRZGate(q, 0.5960680035680704, 2);
  sqcRYGate(q, 1.30956117001055, 3);
  sqcRZGate(q, -2.192557592422303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.563410013301004, 0);
  sqcRZGate(q, 2.150177017975631, 0);
  sqcRYGate(q, 1.1303490855964533, 1);
  sqcRZGate(q, 0.13529236115139776, 1);
  sqcRYGate(q, 2.109058007464455, 2);
  sqcRZGate(q, -2.78701044240421, 2);
  sqcRYGate(q, -0.3457047707528662, 3);
  sqcRZGate(q, -0.8212347439642738, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8002129927217032, 0);
  sqcRZGate(q, 2.5192731162779247, 0);
  sqcRYGate(q, -0.5589188622017165, 1);
  sqcRZGate(q, -0.11596546596120039, 1);
  sqcRYGate(q, -2.8596502445079373, 2);
  sqcRZGate(q, -1.0028856987535608, 2);
  sqcRYGate(q, 1.8626095174529615, 3);
  sqcRZGate(q, -0.3081291259283266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9895865829647796, 0);
  sqcRZGate(q, -1.5242644677739268, 0);
  sqcRYGate(q, 3.0625146895955297, 1);
  sqcRZGate(q, 1.6129180161955656, 1);
  sqcRYGate(q, -0.3473794139296739, 2);
  sqcRZGate(q, -0.6752960214863705, 2);
  sqcRYGate(q, 2.022292971695925, 3);
  sqcRZGate(q, -2.65186871527626, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0389268962313132, 0);
  sqcRZGate(q, 0.33225614014977634, 0);
  sqcRYGate(q, -2.3529274374201368, 1);
  sqcRZGate(q, -2.8841107269325357, 1);
  sqcRYGate(q, 0.10825344193063381, 2);
  sqcRZGate(q, -1.4891631928969078, 2);
  sqcRYGate(q, 1.4476168993029552, 3);
  sqcRZGate(q, 0.21801449739273074, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2409205164258654, 0);
  sqcRZGate(q, -2.8746527069636385, 0);
  sqcRYGate(q, -2.1899639159217514, 1);
  sqcRZGate(q, 1.8003746294396004, 1);
  sqcRYGate(q, 0.5061533604995576, 2);
  sqcRZGate(q, 2.2276318980679433, 2);
  sqcRYGate(q, -2.101475675452243, 3);
  sqcRZGate(q, 0.41130773156521405, 3);

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
