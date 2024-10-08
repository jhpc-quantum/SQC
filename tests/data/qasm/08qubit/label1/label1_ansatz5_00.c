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

  sqcRYGate(q, 1.1846240521889584, 0);
  sqcRYGate(q, 0.36843448744369045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5611654610390842, 0);
  sqcRYGate(q, -0.4786659718204591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.327043386367539, 2);
  sqcRYGate(q, 1.5121845019512865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42214790302168126, 2);
  sqcRYGate(q, 1.8484133560200908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.467321695420968, 4);
  sqcRYGate(q, 2.191896836668394, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9417942073404443, 4);
  sqcRYGate(q, 1.1443930889714193, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3267553228430122, 6);
  sqcRYGate(q, -1.3336247769507947, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.009716408232212523, 6);
  sqcRYGate(q, -1.626629404275528, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2087662127364713, 1);
  sqcRYGate(q, 2.802280713887929, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0321854843599922, 1);
  sqcRYGate(q, -1.4463111115378402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8747165587020385, 3);
  sqcRYGate(q, 1.162876871154059, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.055652692387002, 3);
  sqcRYGate(q, 1.5756594110940998, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0304174223485525, 5);
  sqcRYGate(q, 1.5916977294704815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1835018679892033, 5);
  sqcRYGate(q, -1.5534396431494741, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2602910920406489, 0);
  sqcRYGate(q, -1.790595878338765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.521342576035248, 0);
  sqcRYGate(q, -0.5825470682874806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0475250989026597, 2);
  sqcRYGate(q, 2.212463446273812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.328155195154853, 2);
  sqcRYGate(q, -2.0587973172789047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06703368102978668, 4);
  sqcRYGate(q, 0.25759891903667675, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5236290431222808, 4);
  sqcRYGate(q, -1.447661486205083, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1293669051956874, 6);
  sqcRYGate(q, -1.144472355560417, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.49369705331214, 6);
  sqcRYGate(q, -2.8145076338694253, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0580903551529286, 1);
  sqcRYGate(q, -0.34180047087763377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7354218888363881, 1);
  sqcRYGate(q, 1.9055150185911616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.743997936303144, 3);
  sqcRYGate(q, 0.009550340073244176, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.017264136577239, 3);
  sqcRYGate(q, 0.11861338450069427, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.430776747173009, 5);
  sqcRYGate(q, -0.453966544814809, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4719162579771599, 5);
  sqcRYGate(q, -1.5886356608792003, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0459226423578154, 0);
  sqcRYGate(q, -1.6429131983992917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.869214497601672, 0);
  sqcRYGate(q, 1.1016660356039223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5943148765206012, 2);
  sqcRYGate(q, 0.721137833491805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9736667053673984, 2);
  sqcRYGate(q, -0.0947490724355271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5970112364251616, 4);
  sqcRYGate(q, -0.03436818446843847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7985885330048688, 4);
  sqcRYGate(q, -1.5515568412462653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.015523709917053683, 6);
  sqcRYGate(q, -2.9844168645331566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0338989464115196, 6);
  sqcRYGate(q, -2.557708256733901, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.576363558169175, 1);
  sqcRYGate(q, 2.627963722366067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5151645042460054, 1);
  sqcRYGate(q, 0.1509488989905404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.864057229203155, 3);
  sqcRYGate(q, 0.23482251115683805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.128706089428205, 3);
  sqcRYGate(q, -3.095192851057127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6804734469466238, 5);
  sqcRYGate(q, -1.5973430860230495, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.347485186389231, 5);
  sqcRYGate(q, -2.709801918240723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.655976250297449, 0);
  sqcRYGate(q, -2.9825800245186764, 1);
  sqcRYGate(q, -1.4401294795387913, 2);
  sqcRYGate(q, 0.027602828319893073, 3);
  sqcRYGate(q, 1.850358864882476, 4);
  sqcRYGate(q, 1.555593238011773, 5);
  sqcRYGate(q, 0.023518128128310778, 6);
  sqcRYGate(q, 0.8384189848274132, 7);

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
