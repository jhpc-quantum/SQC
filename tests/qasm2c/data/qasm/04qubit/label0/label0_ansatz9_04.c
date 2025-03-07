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

  sqcRYGate(q, 0.13968352436228276, 0);
  sqcRYGate(q, 2.931132890471957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8239296598178119, 0);
  sqcRYGate(q, -0.3541601688579351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.547889333748075, 2);
  sqcRYGate(q, 2.9085543909957847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8074310785463163, 2);
  sqcRYGate(q, -1.187418098473282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5085028903022742, 0);
  sqcRYGate(q, 1.846104589536911, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8636558803472454, 0);
  sqcRYGate(q, -1.7430163330275787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1504967110574507, 1);
  sqcRYGate(q, 1.2134694003891484, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0774897948442002, 1);
  sqcRYGate(q, -2.5663619260418673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2487823829438245, 0);
  sqcRYGate(q, -1.082061294648832, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0554295524146573, 0);
  sqcRYGate(q, -2.081673332829318, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2406337690859455, 1);
  sqcRYGate(q, -2.297839255378476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4210019939857843, 1);
  sqcRYGate(q, -1.2675067372594748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5923927682368921, 0);
  sqcRYGate(q, -1.1016945911806433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5345339195903984, 0);
  sqcRYGate(q, 2.615364088898609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7223195292979945, 2);
  sqcRYGate(q, 2.747458145774157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5143607308463403, 2);
  sqcRYGate(q, -2.5355727852570893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.002002336124135695, 0);
  sqcRYGate(q, -2.039903589779986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1089619416805832, 0);
  sqcRYGate(q, -0.1446536689466921, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.928545032552406, 1);
  sqcRYGate(q, 1.7974465177312635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6599333025786387, 1);
  sqcRYGate(q, -1.7319833742977089, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8850169334524782, 0);
  sqcRYGate(q, 1.5705884521127838, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4690131416456955, 0);
  sqcRYGate(q, 0.6837694658080107, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2455546344129493, 1);
  sqcRYGate(q, -2.6951059363086145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.907780888697867, 1);
  sqcRYGate(q, 1.2495654793750521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8979148543870004, 0);
  sqcRYGate(q, -0.29177432945032405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15536052025443944, 0);
  sqcRYGate(q, 1.4508752783395966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9364269934966865, 2);
  sqcRYGate(q, 1.0971761183299247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5205436953908102, 2);
  sqcRYGate(q, -3.078253246563409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7157261733258817, 0);
  sqcRYGate(q, -0.43048411105005435, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7765167470083973, 0);
  sqcRYGate(q, 2.4703446237825366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0324159939659, 1);
  sqcRYGate(q, 0.10274648001132379, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1744409709151178, 1);
  sqcRYGate(q, -1.5632919155386258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0778753240451078, 0);
  sqcRYGate(q, 1.686640703764703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.415003734089231, 0);
  sqcRYGate(q, 0.49416856163155715, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0492625216787803, 1);
  sqcRYGate(q, -2.161784700571142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.401247918531815, 1);
  sqcRYGate(q, -2.8372271139207887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5298743919887796, 0);
  sqcRYGate(q, 2.80580921088136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0057453485653305, 0);
  sqcRYGate(q, -0.25073058312639357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8008309612854387, 2);
  sqcRYGate(q, 2.5286594587846727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.101694929566831, 2);
  sqcRYGate(q, -1.7357555412476042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.897447868199183, 0);
  sqcRYGate(q, -1.976761060550321, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.040157148624715866, 0);
  sqcRYGate(q, 0.8631155294667581, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3415540428595154, 1);
  sqcRYGate(q, 0.1019947318840209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.161657467134464, 1);
  sqcRYGate(q, 0.3988683281103853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41956336353649526, 0);
  sqcRYGate(q, -1.6475937782889654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.914209686024071, 0);
  sqcRYGate(q, 2.8481204598111507, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6966435684092387, 1);
  sqcRYGate(q, -1.3678186544632271, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1845499989829822, 1);
  sqcRYGate(q, -2.6870054014346563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3943900152066737, 0);
  sqcRYGate(q, -1.3668242336653833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7558232009632357, 0);
  sqcRYGate(q, -2.3515368215525956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5865960897119531, 2);
  sqcRYGate(q, -1.441743128579139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5932421923538159, 2);
  sqcRYGate(q, -0.7070938821682908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9976349282246444, 0);
  sqcRYGate(q, 0.35040568816207596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.010617028730523, 0);
  sqcRYGate(q, -0.7008989963403348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1911725755333644, 1);
  sqcRYGate(q, 2.8119508695362345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7119912928324783, 1);
  sqcRYGate(q, 0.9125516714350028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4188802484350056, 0);
  sqcRYGate(q, -1.2821822167053025, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5236822822615688, 0);
  sqcRYGate(q, 2.8268839870340834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.49601471103574735, 1);
  sqcRYGate(q, 1.776779437852648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8898310902675695, 1);
  sqcRYGate(q, 2.1451648038651028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.866182302718798, 0);
  sqcRYGate(q, -1.861030800242676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.301817585569017, 0);
  sqcRYGate(q, -2.4086624367445695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2998678977264131, 2);
  sqcRYGate(q, 1.9171288112757516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.777479332507822, 2);
  sqcRYGate(q, -2.4051604501219237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.031074013894462738, 0);
  sqcRYGate(q, -1.2977247501825355, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4648640229455476, 0);
  sqcRYGate(q, -0.8604426717175829, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0948851988824737, 1);
  sqcRYGate(q, 2.686025535481629, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.863236639521569, 1);
  sqcRYGate(q, 2.32014368522507, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.755808516622821, 0);
  sqcRYGate(q, 0.18241050935301287, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.32887714747864605, 0);
  sqcRYGate(q, -2.149249411840969, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0343441927334824, 1);
  sqcRYGate(q, 3.1381615643385334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.733791034246959, 1);
  sqcRYGate(q, -2.397072992250034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2961610572003197, 0);
  sqcRYGate(q, -1.4484642570718602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4172356895452447, 0);
  sqcRYGate(q, 2.687332426149097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5144975102351305, 2);
  sqcRYGate(q, 1.7180021427403176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4617041686031352, 2);
  sqcRYGate(q, -2.8195197645125054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7031314873290357, 0);
  sqcRYGate(q, 1.0060749306682721, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.929507320072471, 0);
  sqcRYGate(q, 0.9146587500590462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1381198512753667, 1);
  sqcRYGate(q, 1.170986329998633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.018494546579115, 1);
  sqcRYGate(q, 2.941735974514774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6141475392930085, 0);
  sqcRYGate(q, -0.3258953803416471, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.658716314168972, 0);
  sqcRYGate(q, 2.6343153847408844, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.192873282923735, 1);
  sqcRYGate(q, 2.487924832497727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3059036577532634, 1);
  sqcRYGate(q, -1.3880181180584152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.005575835909662, 0);
  sqcRYGate(q, -0.7471360312074761, 1);
  sqcRYGate(q, 2.270242701008204, 2);
  sqcRYGate(q, 2.3175464812554614, 3);

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
