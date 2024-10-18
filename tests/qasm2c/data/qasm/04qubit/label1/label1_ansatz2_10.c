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

  sqcRYGate(q, -0.28843496997687623, 0);
  sqcRZGate(q, -0.7773240040468874, 0);
  sqcRYGate(q, 1.4839561583187209, 1);
  sqcRZGate(q, 2.9349862026703026, 1);
  sqcRYGate(q, -2.523423992648096, 2);
  sqcRZGate(q, -1.5801351078091599, 2);
  sqcRYGate(q, -1.9568545387506315, 3);
  sqcRZGate(q, 1.2145754121427288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3156740760236134, 0);
  sqcRZGate(q, 0.28618635337775533, 0);
  sqcRYGate(q, 0.040871260109342604, 1);
  sqcRZGate(q, 2.2235057631477453, 1);
  sqcRYGate(q, 1.5286642272196267, 2);
  sqcRZGate(q, 2.7815625587719968, 2);
  sqcRYGate(q, -2.5934697159869464, 3);
  sqcRZGate(q, -1.9057256399789688, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2154379684879353, 0);
  sqcRZGate(q, -2.3897369497180474, 0);
  sqcRYGate(q, -2.361255904452485, 1);
  sqcRZGate(q, -2.6142152010054978, 1);
  sqcRYGate(q, 0.6685679878113228, 2);
  sqcRZGate(q, 2.850332656700544, 2);
  sqcRYGate(q, -1.2970449786290243, 3);
  sqcRZGate(q, 2.1156170163311616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.872999995842073, 0);
  sqcRZGate(q, -2.170981322431129, 0);
  sqcRYGate(q, 0.06800455094159123, 1);
  sqcRZGate(q, -0.7505794577180291, 1);
  sqcRYGate(q, -0.026805771235835607, 2);
  sqcRZGate(q, -2.7715067572514647, 2);
  sqcRYGate(q, 2.6605699993789216, 3);
  sqcRZGate(q, 0.016124172767300667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1234459806083192, 0);
  sqcRZGate(q, 0.1644757250551889, 0);
  sqcRYGate(q, 1.7828654262981984, 1);
  sqcRZGate(q, -0.21816690272357206, 1);
  sqcRYGate(q, -2.596365874195347, 2);
  sqcRZGate(q, 0.01431257532863306, 2);
  sqcRYGate(q, -2.6106865194093167, 3);
  sqcRZGate(q, -2.5121534629711055, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.002124437706050123, 0);
  sqcRZGate(q, -0.5649744369117461, 0);
  sqcRYGate(q, -1.1118442454023683, 1);
  sqcRZGate(q, 1.9570705593003597, 1);
  sqcRYGate(q, -0.7362566400394313, 2);
  sqcRZGate(q, -0.843684053519743, 2);
  sqcRYGate(q, 1.3564679977296443, 3);
  sqcRZGate(q, -2.397912418806057, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.083961507044359, 0);
  sqcRZGate(q, 1.300760752420888, 0);
  sqcRYGate(q, 2.6351410544349534, 1);
  sqcRZGate(q, 0.15596952320647398, 1);
  sqcRYGate(q, -1.5188535910684076, 2);
  sqcRZGate(q, 2.8407894837548047, 2);
  sqcRYGate(q, 0.16396476099565405, 3);
  sqcRZGate(q, 2.3926330379792384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9878285789519818, 0);
  sqcRZGate(q, -2.009523036384885, 0);
  sqcRYGate(q, -2.0464149901322153, 1);
  sqcRZGate(q, -2.252672353508161, 1);
  sqcRYGate(q, 1.7715633379644018, 2);
  sqcRZGate(q, -1.677396167245349, 2);
  sqcRYGate(q, -0.8288614933753546, 3);
  sqcRZGate(q, 2.2987200976968922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.097327766912755, 0);
  sqcRZGate(q, 0.36572719218049965, 0);
  sqcRYGate(q, 0.18727273223423108, 1);
  sqcRZGate(q, 1.0494072940723365, 1);
  sqcRYGate(q, -2.1499589828542787, 2);
  sqcRZGate(q, -2.3435190010714164, 2);
  sqcRYGate(q, 3.066007854790176, 3);
  sqcRZGate(q, -0.27615893429089855, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.3773410568817885, 0);
  sqcRZGate(q, 2.93394553872892, 0);
  sqcRYGate(q, -1.2910578231413525, 1);
  sqcRZGate(q, 2.7035596200684573, 1);
  sqcRYGate(q, -0.34000891713566794, 2);
  sqcRZGate(q, 2.9208676936368927, 2);
  sqcRYGate(q, -0.2793213604291127, 3);
  sqcRZGate(q, -2.566079788229109, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2527834863825609, 0);
  sqcRZGate(q, 1.5214324354933044, 0);
  sqcRYGate(q, -0.49889716535177886, 1);
  sqcRZGate(q, 1.8366670670903815, 1);
  sqcRYGate(q, 2.383722618142459, 2);
  sqcRZGate(q, 2.417117220433343, 2);
  sqcRYGate(q, -2.564834273082801, 3);
  sqcRZGate(q, -1.4605542743136608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.525918545013874, 0);
  sqcRZGate(q, 1.784857553282299, 0);
  sqcRYGate(q, 3.130996910793392, 1);
  sqcRZGate(q, -2.3795769741785766, 1);
  sqcRYGate(q, 2.7852400064972347, 2);
  sqcRZGate(q, -1.3240038140810482, 2);
  sqcRYGate(q, 0.17110720163610083, 3);
  sqcRZGate(q, 1.2819555302417003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0141156354235656, 0);
  sqcRZGate(q, 3.080629269201953, 0);
  sqcRYGate(q, 2.7718123651291275, 1);
  sqcRZGate(q, 0.9549723063564615, 1);
  sqcRYGate(q, 1.217269779130154, 2);
  sqcRZGate(q, 1.4592721959428203, 2);
  sqcRYGate(q, -2.6726307124642545, 3);
  sqcRZGate(q, 1.795843917423861, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.07046011784516804, 0);
  sqcRZGate(q, 2.8420700430614607, 0);
  sqcRYGate(q, 2.949423143843299, 1);
  sqcRZGate(q, -1.9262835245858525, 1);
  sqcRYGate(q, -0.5089677599614246, 2);
  sqcRZGate(q, -1.5891818285025148, 2);
  sqcRYGate(q, 3.045867933242086, 3);
  sqcRZGate(q, -2.0327527045622693, 3);

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
