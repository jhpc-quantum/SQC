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

  sqcRYGate(q, -0.9571406330296781, 0);
  sqcRZGate(q, 1.4820384492667955, 0);
  sqcRYGate(q, 1.0106140227700813, 1);
  sqcRZGate(q, -0.7145967090400767, 1);
  sqcRYGate(q, -0.7683147124781611, 2);
  sqcRZGate(q, -1.7583655088433143, 2);
  sqcRYGate(q, 2.985337275224109, 3);
  sqcRZGate(q, -2.7873897234800173, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9563912465403313, 0);
  sqcRZGate(q, -1.1428533358415993, 0);
  sqcRYGate(q, 1.2730825041383946, 1);
  sqcRZGate(q, -1.7249423665760983, 1);
  sqcRYGate(q, 3.0469651363413304, 2);
  sqcRZGate(q, 0.27964233458428106, 2);
  sqcRYGate(q, -0.006826183876446215, 3);
  sqcRZGate(q, -0.11990917524924782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8288209549836942, 0);
  sqcRZGate(q, 0.057275060227971686, 0);
  sqcRYGate(q, 1.2965232446025903, 1);
  sqcRZGate(q, -2.8951396193239445, 1);
  sqcRYGate(q, 2.554490076883901, 2);
  sqcRZGate(q, 2.829144259968995, 2);
  sqcRYGate(q, 0.779944461367974, 3);
  sqcRZGate(q, 2.4712060992445033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7787358714415396, 0);
  sqcRZGate(q, 2.258713728487092, 0);
  sqcRYGate(q, -0.0266462726332029, 1);
  sqcRZGate(q, 1.589737265195348, 1);
  sqcRYGate(q, -2.002428122165094, 2);
  sqcRZGate(q, 2.3818666433398685, 2);
  sqcRYGate(q, 3.1178766668353237, 3);
  sqcRZGate(q, -2.6296444370857697, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.32874829986191223, 0);
  sqcRZGate(q, -1.6398989995309432, 0);
  sqcRYGate(q, 1.9400561355333141, 1);
  sqcRZGate(q, 1.4290138793594904, 1);
  sqcRYGate(q, -2.3288157376306664, 2);
  sqcRZGate(q, 1.439211537203369, 2);
  sqcRYGate(q, 0.4545950065445262, 3);
  sqcRZGate(q, -0.389920655936323, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8163133111065468, 0);
  sqcRZGate(q, -1.0827869930247958, 0);
  sqcRYGate(q, 0.7493718864787452, 1);
  sqcRZGate(q, -2.2610020063109486, 1);
  sqcRYGate(q, 1.8574776908394526, 2);
  sqcRZGate(q, -1.9768170207278792, 2);
  sqcRYGate(q, 0.09287719617202911, 3);
  sqcRZGate(q, -1.0464807450896811, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4102859101380345, 0);
  sqcRZGate(q, -0.9806198158845554, 0);
  sqcRYGate(q, -0.24395060523975065, 1);
  sqcRZGate(q, 0.27349506979678506, 1);
  sqcRYGate(q, -2.3355078640041227, 2);
  sqcRZGate(q, -2.166719792818565, 2);
  sqcRYGate(q, 1.1504977083617165, 3);
  sqcRZGate(q, -2.090721107206604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7081472020871118, 0);
  sqcRZGate(q, 0.5315815712670638, 0);
  sqcRYGate(q, -0.6429661770655801, 1);
  sqcRZGate(q, 2.8318015547909554, 1);
  sqcRYGate(q, -0.2717416940660877, 2);
  sqcRZGate(q, -1.253293300780915, 2);
  sqcRYGate(q, 2.1500897292841503, 3);
  sqcRZGate(q, -1.5376337527778574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8861257809039778, 0);
  sqcRZGate(q, -3.0834669838310664, 0);
  sqcRYGate(q, 2.188165694121839, 1);
  sqcRZGate(q, -0.10836055277909404, 1);
  sqcRYGate(q, -3.139223512525998, 2);
  sqcRZGate(q, 1.5738414418283284, 2);
  sqcRYGate(q, -2.222987925962631, 3);
  sqcRZGate(q, -1.081154261110487, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1565738821025768, 0);
  sqcRZGate(q, 2.4556948008064046, 0);
  sqcRYGate(q, -2.8077981222642627, 1);
  sqcRZGate(q, -2.1965358887176993, 1);
  sqcRYGate(q, -0.14328213435618412, 2);
  sqcRZGate(q, -2.295809440920238, 2);
  sqcRYGate(q, -2.3422591299820414, 3);
  sqcRZGate(q, 1.1366795322412044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.041463887653238274, 0);
  sqcRZGate(q, 1.1654792173407662, 0);
  sqcRYGate(q, -1.2492255230980103, 1);
  sqcRZGate(q, 0.8181312265982459, 1);
  sqcRYGate(q, 0.6094826153304027, 2);
  sqcRZGate(q, -2.6973887450150893, 2);
  sqcRYGate(q, -1.6724251484985173, 3);
  sqcRZGate(q, 1.5017068162602736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9598645722967807, 0);
  sqcRZGate(q, -2.099103473684657, 0);
  sqcRYGate(q, -1.928654034937023, 1);
  sqcRZGate(q, 1.4250763401890687, 1);
  sqcRYGate(q, 2.4635798098659785, 2);
  sqcRZGate(q, 3.1115466542238064, 2);
  sqcRYGate(q, 0.7805433046346524, 3);
  sqcRZGate(q, -0.6023188168808078, 3);

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
