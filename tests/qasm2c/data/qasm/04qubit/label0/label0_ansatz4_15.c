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

  sqcRYGate(q, -2.3127292483335387, 0);
  sqcRZGate(q, -0.1910588655925966, 0);
  sqcRYGate(q, -0.7625623040989131, 1);
  sqcRZGate(q, -1.7467188232162663, 1);
  sqcRYGate(q, -2.3923417839542385, 2);
  sqcRZGate(q, 2.8243876356580944, 2);
  sqcRYGate(q, -3.0000711492213843, 3);
  sqcRZGate(q, -0.07082480926061142, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6735505777976014, 0);
  sqcRZGate(q, -0.3603043520180656, 0);
  sqcRYGate(q, -1.4250064152121045, 1);
  sqcRZGate(q, 1.545019324248232, 1);
  sqcRYGate(q, 1.8080775709812615, 2);
  sqcRZGate(q, 1.8856475009681408, 2);
  sqcRYGate(q, 2.0289708584379555, 3);
  sqcRZGate(q, -2.2600234966096258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.090385216399269, 0);
  sqcRZGate(q, 0.10354171171228113, 0);
  sqcRYGate(q, -2.558825745127014, 1);
  sqcRZGate(q, 0.11004174086953444, 1);
  sqcRYGate(q, 1.314198168364035, 2);
  sqcRZGate(q, -2.2388009872032497, 2);
  sqcRYGate(q, 3.024264746378688, 3);
  sqcRZGate(q, 1.485482142498155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9264903669349005, 0);
  sqcRZGate(q, 0.9080846066791572, 0);
  sqcRYGate(q, -2.591608009716873, 1);
  sqcRZGate(q, 1.1269653460741627, 1);
  sqcRYGate(q, -0.09722065208693655, 2);
  sqcRZGate(q, -1.0087914164490106, 2);
  sqcRYGate(q, 1.1961701079138432, 3);
  sqcRZGate(q, -0.2813109446830196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3945210517278435, 0);
  sqcRZGate(q, -2.140671896142379, 0);
  sqcRYGate(q, -0.6553642054396631, 1);
  sqcRZGate(q, -2.66796284526922, 1);
  sqcRYGate(q, -0.5009122895382658, 2);
  sqcRZGate(q, 0.5186726928339812, 2);
  sqcRYGate(q, -2.978381448666262, 3);
  sqcRZGate(q, 2.0110475290421963, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3458718290997442, 0);
  sqcRZGate(q, 1.291943280083648, 0);
  sqcRYGate(q, -2.6303210846134033, 1);
  sqcRZGate(q, -2.9317146341471565, 1);
  sqcRYGate(q, 1.114508482561952, 2);
  sqcRZGate(q, 2.7103516857112235, 2);
  sqcRYGate(q, -2.0986235538163855, 3);
  sqcRZGate(q, -0.2653697005989919, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0717504269202607, 0);
  sqcRZGate(q, 2.7371057167579385, 0);
  sqcRYGate(q, -2.3948751818345633, 1);
  sqcRZGate(q, 0.7994277395634052, 1);
  sqcRYGate(q, -2.3397391850898335, 2);
  sqcRZGate(q, 0.8921972464883652, 2);
  sqcRYGate(q, -2.203990567544233, 3);
  sqcRZGate(q, 1.7607301363756638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8085570353596365, 0);
  sqcRZGate(q, 1.9804058078441633, 0);
  sqcRYGate(q, -1.6854921696559622, 1);
  sqcRZGate(q, -2.595485695854938, 1);
  sqcRYGate(q, -0.37245361468372384, 2);
  sqcRZGate(q, 2.876822299640961, 2);
  sqcRYGate(q, 0.6422831244738134, 3);
  sqcRZGate(q, -1.3349064607099999, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9834847259296993, 0);
  sqcRZGate(q, 2.159812221570685, 0);
  sqcRYGate(q, 1.7914553808960378, 1);
  sqcRZGate(q, -2.2596577253492036, 1);
  sqcRYGate(q, -2.28938451289705, 2);
  sqcRZGate(q, -1.9758815893663417, 2);
  sqcRYGate(q, -1.1543363160291706, 3);
  sqcRZGate(q, -0.07409606903951858, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7356227611187043, 0);
  sqcRZGate(q, -1.603334062138235, 0);
  sqcRYGate(q, 0.05443904711951566, 1);
  sqcRZGate(q, -0.05695394322411334, 1);
  sqcRYGate(q, 0.8528123606949765, 2);
  sqcRZGate(q, 2.4130971080954615, 2);
  sqcRYGate(q, -2.9702124309434828, 3);
  sqcRZGate(q, 0.510674273894919, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.19788521814893414, 0);
  sqcRZGate(q, -2.0702361748025755, 0);
  sqcRYGate(q, 3.128230915113138, 1);
  sqcRZGate(q, 2.953291205944776, 1);
  sqcRYGate(q, 3.030212333728471, 2);
  sqcRZGate(q, -2.386617979088931, 2);
  sqcRYGate(q, 2.3405191628450295, 3);
  sqcRZGate(q, 0.9064867535597356, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6091323916537281, 0);
  sqcRZGate(q, -1.9274030828190416, 0);
  sqcRYGate(q, 2.014054555228976, 1);
  sqcRZGate(q, -1.221646527255107, 1);
  sqcRYGate(q, 2.7575799373133996, 2);
  sqcRZGate(q, 0.05234904796802563, 2);
  sqcRYGate(q, -2.9478977149319197, 3);
  sqcRZGate(q, -0.2215633755167711, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9855813751993177, 0);
  sqcRZGate(q, 2.5339536465942727, 0);
  sqcRYGate(q, -1.9923024561730704, 1);
  sqcRZGate(q, 0.0345657392311578, 1);
  sqcRYGate(q, 0.2346834697933513, 2);
  sqcRZGate(q, 2.7425192155709945, 2);
  sqcRYGate(q, -1.9979124145272813, 3);
  sqcRZGate(q, 1.5690215961296783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8317290282865342, 0);
  sqcRZGate(q, -0.5755897371411134, 0);
  sqcRYGate(q, 1.3682998810235087, 1);
  sqcRZGate(q, -1.6648252115156705, 1);
  sqcRYGate(q, 0.2690734430479298, 2);
  sqcRZGate(q, 1.0187736317968632, 2);
  sqcRYGate(q, -1.2359020100773757, 3);
  sqcRZGate(q, -0.4169109694883106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.24094742495482624, 0);
  sqcRZGate(q, 1.1484270262754732, 0);
  sqcRYGate(q, -0.2859863634947528, 1);
  sqcRZGate(q, 2.104981706016013, 1);
  sqcRYGate(q, 1.8405288720201043, 2);
  sqcRZGate(q, 1.603224625905915, 2);
  sqcRYGate(q, -0.08972138673217746, 3);
  sqcRZGate(q, -1.3412448010019098, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.03632491414415462, 0);
  sqcRZGate(q, -0.29920243741532726, 0);
  sqcRYGate(q, -0.026999850110206624, 1);
  sqcRZGate(q, -1.34469529450658, 1);
  sqcRYGate(q, 2.8468511349986785, 2);
  sqcRZGate(q, 1.3423440582527277, 2);
  sqcRYGate(q, 0.3473816471545828, 3);
  sqcRZGate(q, 1.9870342645498358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26477976490725386, 0);
  sqcRZGate(q, 2.8867475777174336, 0);
  sqcRYGate(q, -0.9453686859309814, 1);
  sqcRZGate(q, 2.6858810491954017, 1);
  sqcRYGate(q, 1.5817226872910073, 2);
  sqcRZGate(q, 1.2971239090932447, 2);
  sqcRYGate(q, 1.3418591709652332, 3);
  sqcRZGate(q, 1.5397555397960545, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9962706828862998, 0);
  sqcRZGate(q, 1.7623143418769978, 0);
  sqcRYGate(q, -0.7789695371549126, 1);
  sqcRZGate(q, 2.7301132106654507, 1);
  sqcRYGate(q, 0.28253330353331485, 2);
  sqcRZGate(q, -1.46016130491403, 2);
  sqcRYGate(q, -2.803202205339987, 3);
  sqcRZGate(q, 1.398505095417482, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6377492557979514, 0);
  sqcRZGate(q, -1.0176844504175697, 0);
  sqcRYGate(q, 1.188582837459058, 1);
  sqcRZGate(q, 2.9960010744055214, 1);
  sqcRYGate(q, -2.667843610569052, 2);
  sqcRZGate(q, 1.5004834816264034, 2);
  sqcRYGate(q, 0.3479676813830821, 3);
  sqcRZGate(q, 0.5786899485503367, 3);

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
