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

  sqcRYGate(q, -0.8110357216245435, 0);
  sqcRZGate(q, -1.4204554688332678, 0);
  sqcRYGate(q, 1.0752985570786953, 1);
  sqcRZGate(q, 0.2988251404875852, 1);
  sqcRYGate(q, 1.7245541512019607, 2);
  sqcRZGate(q, -2.601687946578337, 2);
  sqcRYGate(q, 0.27935689844856526, 3);
  sqcRZGate(q, -0.005897402973201418, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4037478883193303, 0);
  sqcRZGate(q, -3.000354769014436, 0);
  sqcRYGate(q, -2.9665816212445426, 1);
  sqcRZGate(q, 2.005811450428019, 1);
  sqcRYGate(q, -1.6102214046044419, 2);
  sqcRZGate(q, 2.4305634830800487, 2);
  sqcRYGate(q, -0.012280720623920159, 3);
  sqcRZGate(q, 1.7553574156818694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8931345904455759, 0);
  sqcRZGate(q, 1.7821856456563063, 0);
  sqcRYGate(q, -1.46774468592099, 1);
  sqcRZGate(q, 0.5811495038477518, 1);
  sqcRYGate(q, -1.2623645985185776, 2);
  sqcRZGate(q, 0.7578857458617545, 2);
  sqcRYGate(q, 1.7730155997152988, 3);
  sqcRZGate(q, 1.5790991918966772, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2603011934334714, 0);
  sqcRZGate(q, 2.612015077028368, 0);
  sqcRYGate(q, -2.498589398178771, 1);
  sqcRZGate(q, 1.4413044182525265, 1);
  sqcRYGate(q, -3.0015145599643773, 2);
  sqcRZGate(q, 0.4314646243273952, 2);
  sqcRYGate(q, 2.1631548220405588, 3);
  sqcRZGate(q, 0.5448110252793565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1998722062870621, 0);
  sqcRZGate(q, 3.034321847588868, 0);
  sqcRYGate(q, 3.011179115792995, 1);
  sqcRZGate(q, 1.5436981535079437, 1);
  sqcRYGate(q, -2.430601414475278, 2);
  sqcRZGate(q, 1.9765417294799779, 2);
  sqcRYGate(q, 2.789929432673566, 3);
  sqcRZGate(q, 0.17895736807633164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6612967169508911, 0);
  sqcRZGate(q, -0.7848800342808542, 0);
  sqcRYGate(q, 1.5131069400597954, 1);
  sqcRZGate(q, -1.061955431912514, 1);
  sqcRYGate(q, 0.13776259119473422, 2);
  sqcRZGate(q, -1.1768145294701315, 2);
  sqcRYGate(q, 0.5664394233898163, 3);
  sqcRZGate(q, -2.352626645963155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.31238238221512304, 0);
  sqcRZGate(q, 3.0488083219895534, 0);
  sqcRYGate(q, -1.4157249669259333, 1);
  sqcRZGate(q, -1.5502422327137078, 1);
  sqcRYGate(q, -0.9800069275250349, 2);
  sqcRZGate(q, 2.8116798283636126, 2);
  sqcRYGate(q, 3.0949739209619063, 3);
  sqcRZGate(q, 0.34819576316138634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7650320219014726, 0);
  sqcRZGate(q, -1.6751803212913456, 0);
  sqcRYGate(q, -0.049484766230227795, 1);
  sqcRZGate(q, 1.3014876092855021, 1);
  sqcRYGate(q, -1.6135680880005783, 2);
  sqcRZGate(q, 2.992243082842757, 2);
  sqcRYGate(q, -1.6662501832941228, 3);
  sqcRZGate(q, -0.7213646309552288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9785683023153632, 0);
  sqcRZGate(q, -0.30427178394470256, 0);
  sqcRYGate(q, -0.29197608085667515, 1);
  sqcRZGate(q, -1.4706266188808277, 1);
  sqcRYGate(q, -3.1415601540839284, 2);
  sqcRZGate(q, -2.431112802431658, 2);
  sqcRYGate(q, -1.9005148580702071, 3);
  sqcRZGate(q, -0.7009589918637299, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4613437248346886, 0);
  sqcRZGate(q, -2.759583045242596, 0);
  sqcRYGate(q, 1.468855414263217, 1);
  sqcRZGate(q, -0.4330796984831092, 1);
  sqcRYGate(q, -2.472960315100033, 2);
  sqcRZGate(q, -1.7786079804826496, 2);
  sqcRYGate(q, -2.3304597421237365, 3);
  sqcRZGate(q, -2.799590473151184, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.817892607021263, 0);
  sqcRZGate(q, 0.16511921618770842, 0);
  sqcRYGate(q, 2.9157861142419543, 1);
  sqcRZGate(q, 0.1465333347523563, 1);
  sqcRYGate(q, 1.8608484477269678, 2);
  sqcRZGate(q, 0.5914953454290881, 2);
  sqcRYGate(q, -1.4354235941953535, 3);
  sqcRZGate(q, -1.3544320646636407, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.873796934613675, 0);
  sqcRZGate(q, 2.5360463414384125, 0);
  sqcRYGate(q, 0.7325278772060537, 1);
  sqcRZGate(q, 1.7670181278534447, 1);
  sqcRYGate(q, -0.5504243365429682, 2);
  sqcRZGate(q, -0.8116148029286763, 2);
  sqcRYGate(q, 0.17988710739867428, 3);
  sqcRZGate(q, 1.7690954125861422, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.502797333053407, 0);
  sqcRZGate(q, -2.7301821729864497, 0);
  sqcRYGate(q, -1.8962600606109017, 1);
  sqcRZGate(q, 0.21947473416756258, 1);
  sqcRYGate(q, 3.0291178628977042, 2);
  sqcRZGate(q, 2.265403905242329, 2);
  sqcRYGate(q, 0.15385833544998917, 3);
  sqcRZGate(q, 0.18359596043500306, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.515198245913852, 0);
  sqcRZGate(q, -0.9747468586681559, 0);
  sqcRYGate(q, -2.2876551673626038, 1);
  sqcRZGate(q, -2.382728595033153, 1);
  sqcRYGate(q, 2.107388314401174, 2);
  sqcRZGate(q, 0.910045125835281, 2);
  sqcRYGate(q, -0.944743596457366, 3);
  sqcRZGate(q, -1.4734552264920622, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.696675134926857, 0);
  sqcRZGate(q, -0.6958378341567569, 0);
  sqcRYGate(q, -1.225164695642346, 1);
  sqcRZGate(q, 1.3689741003927756, 1);
  sqcRYGate(q, -1.5576031333817248, 2);
  sqcRZGate(q, 1.888940024227419, 2);
  sqcRYGate(q, -0.45271130282515043, 3);
  sqcRZGate(q, -1.7758492782754904, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7041790810234136, 0);
  sqcRZGate(q, 0.020899830841438365, 0);
  sqcRYGate(q, -0.1743833713774299, 1);
  sqcRZGate(q, 2.685133042633841, 1);
  sqcRYGate(q, 1.2604497738966058, 2);
  sqcRZGate(q, -1.4580094288831755, 2);
  sqcRYGate(q, 0.24890725559154203, 3);
  sqcRZGate(q, 2.1796357424876804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1420060787629961, 0);
  sqcRZGate(q, 2.1859393805910963, 0);
  sqcRYGate(q, 1.2029206243681028, 1);
  sqcRZGate(q, -1.1616873405039851, 1);
  sqcRYGate(q, -1.9803445882058213, 2);
  sqcRZGate(q, -1.6575760831467763, 2);
  sqcRYGate(q, 3.0946773603311355, 3);
  sqcRZGate(q, 3.0314061703926383, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6336420693501106, 0);
  sqcRZGate(q, 1.8028607537334764, 0);
  sqcRYGate(q, 0.561471178382023, 1);
  sqcRZGate(q, 0.43375188982490337, 1);
  sqcRYGate(q, -2.5459840713873274, 2);
  sqcRZGate(q, 0.13632897852087567, 2);
  sqcRYGate(q, -1.3094519939660945, 3);
  sqcRZGate(q, -0.19459880748209504, 3);

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
