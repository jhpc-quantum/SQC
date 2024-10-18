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

  sqcRYGate(q, -2.732367800922403, 0);
  sqcRYGate(q, -2.174875339467294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7445338811099139, 0);
  sqcRYGate(q, 2.16876865934202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2998038628162805, 2);
  sqcRYGate(q, -1.1776763971765662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0356485052240285, 2);
  sqcRYGate(q, 2.9033065278283874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8549997014953625, 1);
  sqcRYGate(q, -1.9708067737061725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8133132640576548, 1);
  sqcRYGate(q, 1.5414839018975188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19614313518617002, 0);
  sqcRYGate(q, -0.7192229087236228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.982020319182269, 0);
  sqcRYGate(q, 2.355426322762607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6139226340348634, 2);
  sqcRYGate(q, -2.922692220002981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2707225119147423, 2);
  sqcRYGate(q, -1.8561578988952854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3334383010858866, 1);
  sqcRYGate(q, 1.6541662470480198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6701643489927962, 1);
  sqcRYGate(q, 2.5878434782578235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0167959689488157, 0);
  sqcRYGate(q, -0.16143197030782552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6660015032095412, 0);
  sqcRYGate(q, -0.3446976199601275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8722834279558245, 2);
  sqcRYGate(q, 0.9015204923399827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7297449197276867, 2);
  sqcRYGate(q, -1.8399464785501758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8326960363820692, 1);
  sqcRYGate(q, 0.3850277840428154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5647687426228005, 1);
  sqcRYGate(q, -2.123832766727041, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5006278869293164, 0);
  sqcRYGate(q, 3.0428289971969216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.019765547519723547, 0);
  sqcRYGate(q, -3.0778959137506594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.884696249580518, 2);
  sqcRYGate(q, 1.3336055347829578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2863998487043613, 2);
  sqcRYGate(q, -2.453058208398254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2141995050196708, 1);
  sqcRYGate(q, -2.041566867965117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.610144243892113, 1);
  sqcRYGate(q, -2.573166760755214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.41052020518775145, 0);
  sqcRYGate(q, -1.056306943141485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7736743520288105, 0);
  sqcRYGate(q, -2.971403104833961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.133168584264485, 2);
  sqcRYGate(q, 2.8752711954813446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3190110103449229, 2);
  sqcRYGate(q, -3.0325378158836793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.335438486724593, 1);
  sqcRYGate(q, -1.4817390711026914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8173720073913566, 1);
  sqcRYGate(q, -1.9044610979066015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4202387961423986, 0);
  sqcRYGate(q, -1.9574388140441856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6872348123993446, 0);
  sqcRYGate(q, -2.6005858161646884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8552910097421972, 2);
  sqcRYGate(q, 1.3497292886794057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1058793648167695, 2);
  sqcRYGate(q, -2.4482934064561266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3716620980837151, 1);
  sqcRYGate(q, -2.0427711404774365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0897765083025195, 1);
  sqcRYGate(q, 0.6780288895132712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.818303406709378, 0);
  sqcRYGate(q, 0.6670398158234123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2927175787943277, 0);
  sqcRYGate(q, 0.21250288737200407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3325859107407698, 2);
  sqcRYGate(q, -1.9278488466904555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4654872386382858, 2);
  sqcRYGate(q, 3.1192288701923183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9089194507119897, 1);
  sqcRYGate(q, -1.7067173791445551, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.738629135612735, 1);
  sqcRYGate(q, -2.2499469742158817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48200470106651405, 0);
  sqcRYGate(q, 1.9725509179865808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4068448344812364, 0);
  sqcRYGate(q, -2.2107465784282496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2511227030203527, 2);
  sqcRYGate(q, -2.8106381200412707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5130821925889943, 2);
  sqcRYGate(q, 2.464240096282332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1537090602462015, 1);
  sqcRYGate(q, 1.426977775493121, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5975331335651566, 1);
  sqcRYGate(q, 1.3883666206843488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0686050510771887, 0);
  sqcRYGate(q, -0.20008496922418129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3910844374625917, 0);
  sqcRYGate(q, 1.1118168124745138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2783602164327028, 2);
  sqcRYGate(q, -2.322821752300906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.414480466083111, 2);
  sqcRYGate(q, 0.8633373911415237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7627795986360173, 1);
  sqcRYGate(q, 2.115579747746911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.884390328066059, 1);
  sqcRYGate(q, 0.31060794658948154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6567458057568931, 0);
  sqcRYGate(q, -0.8404349358474333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0094654993425887, 0);
  sqcRYGate(q, -2.0608594423742304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8015497208356281, 2);
  sqcRYGate(q, 1.3445713881902082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.428720722918979, 2);
  sqcRYGate(q, -0.7381388943981397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.269958156725699, 1);
  sqcRYGate(q, 0.04244813501722832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7062734759754062, 1);
  sqcRYGate(q, 1.2527667709341568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4490293110272853, 0);
  sqcRYGate(q, -2.511353474549444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.802352583110084, 0);
  sqcRYGate(q, -2.4471505080771343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.491031819171613, 2);
  sqcRYGate(q, 1.4905244931546784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.134600311718901, 2);
  sqcRYGate(q, -1.5816464354000939, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5309494796782719, 1);
  sqcRYGate(q, -0.2749671982340824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.591160691104149, 1);
  sqcRYGate(q, 2.1146051400627606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06072839245613615, 0);
  sqcRYGate(q, 2.2224775333378357, 1);
  sqcRYGate(q, -0.5289657033358349, 2);
  sqcRYGate(q, -2.0567498639682005, 3);

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
