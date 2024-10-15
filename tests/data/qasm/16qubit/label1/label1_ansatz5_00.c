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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.5528766313829665, 0);
  sqcRYGate(q, -2.876467664095039, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.350385080779267, 0);
  sqcRYGate(q, 0.3501314462016598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2446349974933757, 2);
  sqcRYGate(q, -1.057026525932609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3461378533993749, 2);
  sqcRYGate(q, -0.6718837057390807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4897396609787794, 4);
  sqcRYGate(q, -2.8343415824873133, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2791272267577933, 4);
  sqcRYGate(q, 0.47338125772553763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1405786756858665, 6);
  sqcRYGate(q, -0.1126127269836421, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.409788217857887, 6);
  sqcRYGate(q, -2.520054720842403, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9557724883996999, 8);
  sqcRYGate(q, -1.1665751218765417, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.28142993367271063, 8);
  sqcRYGate(q, 0.8968479607874914, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9991066168417699, 10);
  sqcRYGate(q, 2.6283350110718247, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8884681557285656, 10);
  sqcRYGate(q, 1.5077588140894858, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9236419882073506, 12);
  sqcRYGate(q, -0.47703227248251423, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6750669901004623, 12);
  sqcRYGate(q, -0.07060330715107721, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.132842710326047, 14);
  sqcRYGate(q, 1.1218291912554592, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9489719594014288, 14);
  sqcRYGate(q, 2.7208749170206614, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.1435666412446341, 1);
  sqcRYGate(q, 2.9345455786435015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3896855902979437, 1);
  sqcRYGate(q, 0.8655784219948711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1548388834954537, 3);
  sqcRYGate(q, 1.019883538756968, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7645203822752906, 3);
  sqcRYGate(q, -0.9906071235828575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.763480001166423, 5);
  sqcRYGate(q, 2.4437849395872635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6815241510591337, 5);
  sqcRYGate(q, 2.126291183564453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0658077982803607, 7);
  sqcRYGate(q, 3.141135314500183, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.94576784334009, 7);
  sqcRYGate(q, -0.13538412860326018, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5510284974838098, 9);
  sqcRYGate(q, 0.6432785250576711, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.5074272057576963, 9);
  sqcRYGate(q, -0.951769857414441, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.172887325180027, 11);
  sqcRYGate(q, 1.0645724049997078, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9388576739914987, 11);
  sqcRYGate(q, 2.0658856048557372, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.21088271942528747, 13);
  sqcRYGate(q, -2.405104902808172, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.1084460773236393, 13);
  sqcRYGate(q, -0.8648067508754814, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4532163748694948, 0);
  sqcRYGate(q, -1.5449996882763175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2471962811283253, 0);
  sqcRYGate(q, -1.0390415327473548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.32230280463763084, 2);
  sqcRYGate(q, 1.7371164461576905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0839986444637475, 2);
  sqcRYGate(q, 1.4858571453097356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9456632902390056, 4);
  sqcRYGate(q, -0.052169147458558385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.677261249778658, 4);
  sqcRYGate(q, 1.3373900686706284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.293025503098405, 6);
  sqcRYGate(q, 1.1478589177249932, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9441294966328544, 6);
  sqcRYGate(q, 1.7828668406684756, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7636597892879973, 8);
  sqcRYGate(q, -0.12857440745218796, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.255600789389426, 8);
  sqcRYGate(q, 1.6272147585068684, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1342165521612064, 10);
  sqcRYGate(q, 2.9226551892444914, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.15070359400387, 10);
  sqcRYGate(q, -0.051762667556902286, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6292565658039777, 12);
  sqcRYGate(q, -1.100067568453019, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.0794548378034152, 12);
  sqcRYGate(q, -1.6416811772887163, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.1945446667864807, 14);
  sqcRYGate(q, 3.1302237616698902, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9023863546582535, 14);
  sqcRYGate(q, 0.04092744723519193, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.6893987055182493, 1);
  sqcRYGate(q, 3.021307713940561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0739771194460408, 1);
  sqcRYGate(q, -1.4308001707576956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1875025459615192, 3);
  sqcRYGate(q, -1.2867505904213665, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.06051395378632566, 3);
  sqcRYGate(q, 0.012518273697824597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.635403783944653, 5);
  sqcRYGate(q, -0.3501193537974947, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1025994989315135, 5);
  sqcRYGate(q, -0.20416482866655272, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8567484007710537, 7);
  sqcRYGate(q, -2.1109016394964106, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.810299173464462, 7);
  sqcRYGate(q, 2.879676257945616, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3911175624513075, 9);
  sqcRYGate(q, 2.9364139082315055, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9318373901914927, 9);
  sqcRYGate(q, -2.2294574315181754, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5259042990665557, 11);
  sqcRYGate(q, 1.1651934650240605, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.749779216078984, 11);
  sqcRYGate(q, 0.3339323121201332, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.6269781472039178, 13);
  sqcRYGate(q, -2.5147851628984257, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.347773926731856, 13);
  sqcRYGate(q, 1.276301722067485, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8470653392133065, 0);
  sqcRYGate(q, 0.69467199877735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7439124401040137, 0);
  sqcRYGate(q, -1.5391465253502137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.040108230491101, 2);
  sqcRYGate(q, 0.16272005285640834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.948055589524067, 2);
  sqcRYGate(q, 1.8234489254408714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3935763887030816, 4);
  sqcRYGate(q, -1.9981798590774815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9102412855876265, 4);
  sqcRYGate(q, 0.9362851220437793, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7769793070915695, 6);
  sqcRYGate(q, -0.7777238999874251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6310719321214221, 6);
  sqcRYGate(q, -2.2568729957060523, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9280910334026138, 8);
  sqcRYGate(q, -2.6267673463769663, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9909180236443715, 8);
  sqcRYGate(q, 1.2489599026666722, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8285806122256739, 10);
  sqcRYGate(q, -1.333375154707256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6558481902199791, 10);
  sqcRYGate(q, 2.9486477367560626, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.545949736086389, 12);
  sqcRYGate(q, 0.07430126890663136, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.454746756341493, 12);
  sqcRYGate(q, -1.4845384166504225, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2015908491755143, 14);
  sqcRYGate(q, -1.0357876405523099, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6850812821979931, 14);
  sqcRYGate(q, 2.598633167068456, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4634617323755588, 1);
  sqcRYGate(q, 0.9219212841926155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.97214756735934, 1);
  sqcRYGate(q, -2.515846012692706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.21672681347773, 3);
  sqcRYGate(q, -2.4557167394502444, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.924908493455417, 3);
  sqcRYGate(q, 0.22216291898262422, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0463963802778222, 5);
  sqcRYGate(q, 0.9717408153264913, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6378376111932087, 5);
  sqcRYGate(q, 0.5241367432066112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1607247181081606, 7);
  sqcRYGate(q, -1.6747912937859413, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7422171432702354, 7);
  sqcRYGate(q, 0.331633430481034, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4927887811283398, 9);
  sqcRYGate(q, -2.0762403534029312, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.945615782814973, 9);
  sqcRYGate(q, -2.786836767365342, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8857600665926504, 11);
  sqcRYGate(q, -0.27310252437121124, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.08084592779286393, 11);
  sqcRYGate(q, -0.47878436672807734, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7587949076831544, 13);
  sqcRYGate(q, -1.4653822245529087, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.883875563068431, 13);
  sqcRYGate(q, 2.8654397531182276, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.081536377556789, 0);
  sqcRYGate(q, -1.7877168511721682, 1);
  sqcRYGate(q, -3.0923613545816866, 2);
  sqcRYGate(q, 1.6647699135837195, 3);
  sqcRYGate(q, 0.4440674189730269, 4);
  sqcRYGate(q, -1.5184488365539404, 5);
  sqcRYGate(q, 0.051598702917204704, 6);
  sqcRYGate(q, 1.019912325025885, 7);
  sqcRYGate(q, -0.5594529908453357, 8);
  sqcRYGate(q, -2.749088504858405, 9);
  sqcRYGate(q, -3.0903222865572997, 10);
  sqcRYGate(q, 3.0115194450873535, 11);
  sqcRYGate(q, 2.9419201752040376, 12);
  sqcRYGate(q, -1.4687658688229592, 13);
  sqcRYGate(q, -2.9760805171176874, 14);
  sqcRYGate(q, -0.5788317698773728, 15);

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
