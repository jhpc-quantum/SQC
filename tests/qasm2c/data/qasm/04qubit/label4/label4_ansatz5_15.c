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

  sqcRYGate(q, -2.976212155129629, 0);
  sqcRYGate(q, 1.2885600234003198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.694958752203169, 0);
  sqcRYGate(q, 2.3305611987911843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0036004277845825, 2);
  sqcRYGate(q, -2.292179505498605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6794670304465464, 2);
  sqcRYGate(q, -0.1452088495203376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35732450431253593, 1);
  sqcRYGate(q, 1.6431984434513314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6778314175551934, 1);
  sqcRYGate(q, -2.5661529285186386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.061816354381018186, 0);
  sqcRYGate(q, 1.9605205864859427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.947017531878844, 0);
  sqcRYGate(q, 0.6989434151211397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2725351073992244, 2);
  sqcRYGate(q, -0.3939792652398548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.355102130509227, 2);
  sqcRYGate(q, -1.9759210808693037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9166108874296366, 1);
  sqcRYGate(q, 0.9577518725644013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0194255608959164, 1);
  sqcRYGate(q, -1.3060361732031327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2326819677420144, 0);
  sqcRYGate(q, 3.109773322875155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7878200383737592, 0);
  sqcRYGate(q, 1.4918987117044464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7930428985324447, 2);
  sqcRYGate(q, 1.866801452107226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1972703815548507, 2);
  sqcRYGate(q, -0.4776806135278902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9540982734648686, 1);
  sqcRYGate(q, 2.438533276941544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4137344772467308, 1);
  sqcRYGate(q, -0.2837030715304604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6389283822145781, 0);
  sqcRYGate(q, 1.0833887518275942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.030094058405452, 0);
  sqcRYGate(q, 1.2823734808384364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6887940287384047, 2);
  sqcRYGate(q, -2.8812065588058915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7114099067006183, 2);
  sqcRYGate(q, 1.9347246920823502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4320885058899253, 1);
  sqcRYGate(q, 0.6909601692953442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5708713007169592, 1);
  sqcRYGate(q, -0.851634642794367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.002389329057128, 0);
  sqcRYGate(q, 1.1916200801876577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7736802528365214, 0);
  sqcRYGate(q, 0.49605055663078357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.683152191566069, 2);
  sqcRYGate(q, 1.016860512542273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.208618721398647, 2);
  sqcRYGate(q, -0.7059466928091922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2820267632924136, 1);
  sqcRYGate(q, 0.29810702014505264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2716038335359299, 1);
  sqcRYGate(q, -3.127346519299743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8177469146576546, 0);
  sqcRYGate(q, 1.6784669299830082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0840191822694494, 0);
  sqcRYGate(q, -2.064472352574003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.878246941949567, 2);
  sqcRYGate(q, -2.0629746888193283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3518297690607586, 2);
  sqcRYGate(q, 0.4822973208098314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6310599865999, 1);
  sqcRYGate(q, 3.0774723281611642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.918346773413746, 1);
  sqcRYGate(q, 2.6099068169432984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7324970477233528, 0);
  sqcRYGate(q, 2.510886375442909, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12785828271997463, 0);
  sqcRYGate(q, -2.603578008539018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5066919403461105, 2);
  sqcRYGate(q, 1.869778683773034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.229860612172053, 2);
  sqcRYGate(q, -1.074322471516962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2691407350792123, 1);
  sqcRYGate(q, -2.6294037296690385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8036628203364709, 1);
  sqcRYGate(q, 0.3188703840856676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.11172722109213, 0);
  sqcRYGate(q, 0.9837190295405619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.289552020761452, 0);
  sqcRYGate(q, 2.858487080839007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3810408933588962, 2);
  sqcRYGate(q, -3.0658538191770206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.02660093933177, 2);
  sqcRYGate(q, 3.0575950644756804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4049341868186858, 1);
  sqcRYGate(q, 1.2723582321394868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.241423098746245, 1);
  sqcRYGate(q, -0.7040541950105502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8410704002971308, 0);
  sqcRYGate(q, -0.19820582321740157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5323658015091377, 0);
  sqcRYGate(q, 1.6908710866744885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.326854884883945, 2);
  sqcRYGate(q, 0.9943594812678606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.312705563928271, 2);
  sqcRYGate(q, -1.891137225568378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8165627721715292, 1);
  sqcRYGate(q, 2.768330779408539, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5109423904915984, 1);
  sqcRYGate(q, -1.134872912200307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9405424466001442, 0);
  sqcRYGate(q, 1.4165688447754357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3141214619751542, 0);
  sqcRYGate(q, -1.0325443578826041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5856681455448207, 2);
  sqcRYGate(q, 2.012057902944865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17842867246108707, 2);
  sqcRYGate(q, 2.115743492778004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.89342495910028, 1);
  sqcRYGate(q, 2.181945257474196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.27539186804087556, 1);
  sqcRYGate(q, 0.8540961701905002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48800881530431006, 0);
  sqcRYGate(q, -2.5712235308696347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3012062457049747, 0);
  sqcRYGate(q, -2.016344919536607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4320857617188433, 2);
  sqcRYGate(q, 1.5484790195367493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7360126718404683, 2);
  sqcRYGate(q, -1.7726781751669443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4338611453910173, 1);
  sqcRYGate(q, 0.3820182855191686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.555781267642221, 1);
  sqcRYGate(q, -2.108755390757089, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0176750895757287, 0);
  sqcRYGate(q, -2.990603431716517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45496194238374427, 0);
  sqcRYGate(q, -2.696040253332144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0507353578741645, 2);
  sqcRYGate(q, 2.293448685375368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3525708345344762, 2);
  sqcRYGate(q, 2.7006448562726644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.689999082731667, 1);
  sqcRYGate(q, 0.7087162309105928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1445562190218483, 1);
  sqcRYGate(q, -0.05713591121297279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8123554914872688, 0);
  sqcRYGate(q, 0.19088298141765847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.261527419426783, 0);
  sqcRYGate(q, 2.281029618975495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7145645326894918, 2);
  sqcRYGate(q, -2.277558224040541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8752152894114966, 2);
  sqcRYGate(q, -2.898232474299823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4641446569897516, 1);
  sqcRYGate(q, -2.678824725714581, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47458358127684175, 1);
  sqcRYGate(q, 1.609076184414162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1806715750941273, 0);
  sqcRYGate(q, -1.147856049968794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0268886617836737, 0);
  sqcRYGate(q, 2.034156075470919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3470539950757203, 2);
  sqcRYGate(q, -1.8193850068537074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8797722991590049, 2);
  sqcRYGate(q, 0.3583848007588117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5354545997366342, 1);
  sqcRYGate(q, 2.8196768573987914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6484051212270616, 1);
  sqcRYGate(q, -0.5724164259910658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09510291540196479, 0);
  sqcRYGate(q, -0.14266397087396632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0361637244924173, 0);
  sqcRYGate(q, 1.7851572605316153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.12948426938018, 2);
  sqcRYGate(q, -0.6500175625153339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7417825283345776, 2);
  sqcRYGate(q, -1.5734509305339444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.864433293811107, 1);
  sqcRYGate(q, -0.5464081426713547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5103516975612186, 1);
  sqcRYGate(q, -1.2170310821126953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7863605940032907, 0);
  sqcRYGate(q, -0.17667823282985679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.016510368306154995, 0);
  sqcRYGate(q, 2.945431375959725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1959194361563963, 2);
  sqcRYGate(q, 2.0063523797149196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7375066221544044, 2);
  sqcRYGate(q, 2.527785913706266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.215828667766651, 1);
  sqcRYGate(q, 2.528298257157075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.42330304873946545, 1);
  sqcRYGate(q, -0.10570932852709093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1892533253568507, 0);
  sqcRYGate(q, 1.4712946566863048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6243941493173144, 0);
  sqcRYGate(q, -2.487529680428547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6117525852513577, 2);
  sqcRYGate(q, -0.6068078228680023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6799369014268466, 2);
  sqcRYGate(q, -2.820024164535735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45749586255384156, 1);
  sqcRYGate(q, -0.5429776117939982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4232579251437922, 1);
  sqcRYGate(q, 2.976821787605661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5666172844517654, 0);
  sqcRYGate(q, -1.7762545728592063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3536903764933967, 0);
  sqcRYGate(q, -2.566321856239713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1820648972056773, 2);
  sqcRYGate(q, 1.4221121980657179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.67335658567992, 2);
  sqcRYGate(q, -0.4041113620103287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.512045846541254, 1);
  sqcRYGate(q, 3.0348408026721314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9883527682412794, 1);
  sqcRYGate(q, -1.6468822589033483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.46087987430748, 0);
  sqcRYGate(q, -1.7554506275629995, 1);
  sqcRYGate(q, 2.265103591412417, 2);
  sqcRYGate(q, -1.986990264897564, 3);

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
