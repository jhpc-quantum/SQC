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

  sqcRYGate(q, -2.0219732288614614, 0);
  sqcRYGate(q, 2.496632123399217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0311793574763872, 0);
  sqcRYGate(q, -0.9214340830717385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0253285373361183, 2);
  sqcRYGate(q, -0.4791083905535122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46769095991809895, 2);
  sqcRYGate(q, -1.4678040247399444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.456524583003762, 0);
  sqcRYGate(q, -3.111437926000475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.34992792825191, 0);
  sqcRYGate(q, 2.495567222628488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.532472805491089, 1);
  sqcRYGate(q, 2.3036595350716444, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.882965610765264, 1);
  sqcRYGate(q, -0.45204575375511524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7213748796216128, 0);
  sqcRYGate(q, 2.6090815506373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3454547730163617, 0);
  sqcRYGate(q, 2.274245112060467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.124466102264107, 2);
  sqcRYGate(q, -0.016341927696423397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.53244841556349, 2);
  sqcRYGate(q, -1.3923821034161976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1057362111969873, 0);
  sqcRYGate(q, -0.6263402055327685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3864505530646467, 0);
  sqcRYGate(q, -2.1422775893603605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6208515910418813, 1);
  sqcRYGate(q, 1.8030444859716448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7518735223548472, 1);
  sqcRYGate(q, 2.2932370000962257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7206657255059905, 0);
  sqcRYGate(q, 2.0985463019451345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9574817715541863, 0);
  sqcRYGate(q, 0.39173856088173764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.715333035992239, 2);
  sqcRYGate(q, -0.6575909996437108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.551092258604265, 2);
  sqcRYGate(q, 1.0851750748265352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4990045182132425, 0);
  sqcRYGate(q, -0.0772582333851286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2542481471109963, 0);
  sqcRYGate(q, 0.5407994724431227, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2059163463656228, 1);
  sqcRYGate(q, 1.1370848509348048, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5200546259269063, 1);
  sqcRYGate(q, 2.7621547620635045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0803224981231858, 0);
  sqcRYGate(q, 1.1274669039137546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7254225078865044, 0);
  sqcRYGate(q, -0.49167948565529507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5137691593711877, 2);
  sqcRYGate(q, -0.5820010675996228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8775612012077743, 2);
  sqcRYGate(q, -1.6680675143268386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.070567474242011, 0);
  sqcRYGate(q, 2.534077123641836, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8195526879989566, 0);
  sqcRYGate(q, -1.8337196877970454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0743908397326658, 1);
  sqcRYGate(q, -2.593670054059177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8889406026277389, 1);
  sqcRYGate(q, -2.5682787157308313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.899843278860871, 0);
  sqcRYGate(q, 2.6275705236094073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6498204041644629, 0);
  sqcRYGate(q, -0.7778696011895254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.045212697755953, 2);
  sqcRYGate(q, 2.7947594613932822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3498755124646804, 2);
  sqcRYGate(q, -1.9724809664504792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4802281318205255, 0);
  sqcRYGate(q, 2.8782961530881854, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2864085136957097, 0);
  sqcRYGate(q, 1.628326114396347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.978667198723476, 1);
  sqcRYGate(q, -2.8043283058320356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.45278834718378, 1);
  sqcRYGate(q, -0.5939964699448284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.499246742125673, 0);
  sqcRYGate(q, -0.9298683172293902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6287436007159001, 0);
  sqcRYGate(q, 2.188920125544392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5993365173911247, 2);
  sqcRYGate(q, 1.4927036729737448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7503790291095704, 2);
  sqcRYGate(q, -1.119954164781677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4756267650617132, 0);
  sqcRYGate(q, -2.9233649822157695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9058885899547935, 0);
  sqcRYGate(q, 1.1820093657108999, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1116051060924765, 1);
  sqcRYGate(q, -1.0363021867477755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11925203749001767, 1);
  sqcRYGate(q, -0.7265172001902708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10241893038968453, 0);
  sqcRYGate(q, 0.5144623648682751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1589586297290864, 0);
  sqcRYGate(q, 2.3493210985344732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9388915653798187, 2);
  sqcRYGate(q, -2.720352236492546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7133368447985844, 2);
  sqcRYGate(q, -0.28996281872865143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4802331628953427, 0);
  sqcRYGate(q, 2.919268846164782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7517795538872507, 0);
  sqcRYGate(q, -1.8158930532195425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.005045215794525, 1);
  sqcRYGate(q, -1.4318341397640193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5604385334008226, 1);
  sqcRYGate(q, 1.3363347949397815, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6427542779996243, 0);
  sqcRYGate(q, 2.4073437814452925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.866434784824988, 0);
  sqcRYGate(q, 1.4050865647590094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22944809177779568, 2);
  sqcRYGate(q, 0.5172642822426985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.634293777843782, 2);
  sqcRYGate(q, 0.09842956736555397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9932878101989111, 0);
  sqcRYGate(q, -0.9059218964402865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9941482186608342, 0);
  sqcRYGate(q, -2.159532257019811, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10665492225316327, 1);
  sqcRYGate(q, 1.9838024258016764, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5799704425490964, 1);
  sqcRYGate(q, 2.7954160595394044, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6664759993901548, 0);
  sqcRYGate(q, -1.7533305400334918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1385376152946345, 0);
  sqcRYGate(q, -0.06009993599652663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.02048364873410158, 2);
  sqcRYGate(q, 0.4743051394204265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.750781624865981, 2);
  sqcRYGate(q, 2.42820649302425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2838370700632193, 0);
  sqcRYGate(q, 1.216095815563924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8649819780706123, 0);
  sqcRYGate(q, 1.3116183128296748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5852745968144153, 1);
  sqcRYGate(q, -1.744063413520423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4642449924449243, 1);
  sqcRYGate(q, -2.9464263778420055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3379703945250991, 0);
  sqcRYGate(q, -2.4417077060170107, 1);
  sqcRYGate(q, 0.8387140490093836, 2);
  sqcRYGate(q, -0.8474933974621379, 3);

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
