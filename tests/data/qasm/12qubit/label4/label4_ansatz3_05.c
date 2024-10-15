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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.4888308005934308, 0);
  sqcRZGate(q, -2.4513541378332793, 0);
  sqcRYGate(q, 5.9198968386198214e-05, 1);
  sqcRZGate(q, 1.1900963796912762, 1);
  sqcRYGate(q, -1.7103516377400512, 2);
  sqcRZGate(q, 3.0833074124689612, 2);
  sqcRYGate(q, -3.1415656088096156, 3);
  sqcRZGate(q, -2.849558010215147, 3);
  sqcRYGate(q, 1.571129256500744, 4);
  sqcRZGate(q, -1.5712115430630138, 4);
  sqcRYGate(q, 5.134414198745595e-05, 5);
  sqcRZGate(q, 1.8336575741357752, 5);
  sqcRYGate(q, -0.03957294759432155, 6);
  sqcRZGate(q, -0.19538575043068607, 6);
  sqcRYGate(q, 2.4632736601162044, 7);
  sqcRZGate(q, 1.9088252513940072, 7);
  sqcRYGate(q, 1.574401326317046, 8);
  sqcRZGate(q, 1.8704700871835391, 8);
  sqcRYGate(q, -0.0077025026038421976, 9);
  sqcRZGate(q, -3.0549332408957293, 9);
  sqcRYGate(q, -0.08912909912093969, 10);
  sqcRZGate(q, 0.8817355020586993, 10);
  sqcRYGate(q, 3.014068654590401, 11);
  sqcRZGate(q, 0.014803856248068147, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.141564085766042, 0);
  sqcRZGate(q, -0.7694225751484237, 0);
  sqcRYGate(q, 1.5707894315208362, 1);
  sqcRZGate(q, 1.5683964874209209, 1);
  sqcRYGate(q, 1.5708807344902376, 2);
  sqcRZGate(q, -1.5703885423862767, 2);
  sqcRYGate(q, 3.141571255213113, 3);
  sqcRZGate(q, 2.854810892803731, 3);
  sqcRYGate(q, 1.9869238667500095, 4);
  sqcRZGate(q, -3.141510526048415, 4);
  sqcRYGate(q, 3.1413825286533776, 5);
  sqcRZGate(q, 1.315462517991311, 5);
  sqcRYGate(q, -3.141565071910325, 6);
  sqcRZGate(q, 2.694061402730289, 6);
  sqcRYGate(q, -0.00017325442422588822, 7);
  sqcRZGate(q, 0.5689233130004272, 7);
  sqcRYGate(q, -3.133112971538105, 8);
  sqcRZGate(q, -1.1791596960430661, 8);
  sqcRYGate(q, 0.718234867298391, 9);
  sqcRZGate(q, 1.5701627152599986, 9);
  sqcRYGate(q, -1.564306902205674, 10);
  sqcRZGate(q, -7.45658482858081e-05, 10);
  sqcRYGate(q, -3.012734626956664, 11);
  sqcRZGate(q, 2.6028702276683315, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.130260427551936, 0);
  sqcRZGate(q, 0.046981880467397374, 0);
  sqcRYGate(q, -1.0375927920256014, 1);
  sqcRZGate(q, -0.032931755630961845, 1);
  sqcRYGate(q, -1.5705053754443714, 2);
  sqcRZGate(q, -0.7129629681240236, 2);
  sqcRYGate(q, 1.570556611796053, 3);
  sqcRZGate(q, -2.420629765411945, 3);
  sqcRYGate(q, -1.5707269529106858, 4);
  sqcRZGate(q, 1.7036666454553766, 4);
  sqcRYGate(q, 1.5708904820983767, 5);
  sqcRZGate(q, -3.140992389520839, 5);
  sqcRYGate(q, -2.4710515129854533, 6);
  sqcRZGate(q, -2.8512864136756604, 6);
  sqcRYGate(q, -3.1401618429132685, 7);
  sqcRZGate(q, -0.2640213308140567, 7);
  sqcRYGate(q, 1.5707928723460853, 8);
  sqcRZGate(q, -0.010616028746294848, 8);
  sqcRYGate(q, 1.571714370954014, 9);
  sqcRZGate(q, 3.1347129203182265, 9);
  sqcRYGate(q, -1.5152965542901313, 10);
  sqcRZGate(q, 0.938551572135654, 10);
  sqcRYGate(q, -1.570861952917232, 11);
  sqcRZGate(q, -3.1261048647346246, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.1414791374172233, 0);
  sqcRZGate(q, -1.3468724084788979, 0);
  sqcRYGate(q, -3.1346234170671825, 1);
  sqcRZGate(q, 1.5368903640665674, 1);
  sqcRYGate(q, -3.1415299132593337, 2);
  sqcRZGate(q, -0.43518174181294395, 2);
  sqcRYGate(q, 0.6783931572703209, 3);
  sqcRZGate(q, 0.766968704795451, 3);
  sqcRYGate(q, -0.00022580942499288807, 4);
  sqcRZGate(q, 0.09808051587332242, 4);
  sqcRYGate(q, -1.571619249076977, 5);
  sqcRZGate(q, 3.131967835037391, 5);
  sqcRYGate(q, -4.928659953092917e-05, 6);
  sqcRZGate(q, -1.8597822425037904, 6);
  sqcRYGate(q, -5.939399834176129e-07, 7);
  sqcRZGate(q, -1.9694529066634898, 7);
  sqcRYGate(q, 1.4808516120553392, 8);
  sqcRZGate(q, -3.1413880365008033, 8);
  sqcRYGate(q, -1.570830001354051, 9);
  sqcRZGate(q, -3.1412404585264895, 9);
  sqcRYGate(q, 0.016276820754161037, 10);
  sqcRZGate(q, 0.7236794562447252, 10);
  sqcRYGate(q, -1.5714222784348264, 11);
  sqcRZGate(q, 2.247119518172175, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.573009328573912, 0);
  sqcRZGate(q, -1.5820260884483366, 0);
  sqcRYGate(q, 1.568328065158462, 1);
  sqcRZGate(q, -0.5864057470052796, 1);
  sqcRYGate(q, 3.141507687519983, 2);
  sqcRZGate(q, 1.1435827376008179, 2);
  sqcRYGate(q, 3.1415664876971805, 3);
  sqcRZGate(q, 1.6124317953824265, 3);
  sqcRYGate(q, 7.605892500350819e-05, 4);
  sqcRZGate(q, -1.801211438498508, 4);
  sqcRYGate(q, -1.5709841973766663, 5);
  sqcRZGate(q, -3.1633709216549737e-06, 5);
  sqcRYGate(q, -1.5706632053653236, 6);
  sqcRZGate(q, 0.8698300834389985, 6);
  sqcRYGate(q, -1.5709675691140499, 7);
  sqcRZGate(q, -2.296647011171496, 7);
  sqcRYGate(q, 1.5609284173919227, 8);
  sqcRZGate(q, -1.1422013489014626, 8);
  sqcRYGate(q, -1.5709465017508764, 9);
  sqcRZGate(q, 1.5707248383042973, 9);
  sqcRYGate(q, -1.5739993996495523, 10);
  sqcRZGate(q, -1.5706653203980998, 10);
  sqcRYGate(q, -1.5123895038969994, 11);
  sqcRZGate(q, 1.5235876481244572, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5709976453350345, 0);
  sqcRZGate(q, -1.570647185129822, 0);
  sqcRYGate(q, 0.00012252619956054644, 1);
  sqcRZGate(q, -2.5554292273175734, 1);
  sqcRYGate(q, -1.8745078413040517e-05, 2);
  sqcRZGate(q, 2.574087511761462, 2);
  sqcRYGate(q, -1.5709180944048349, 3);
  sqcRZGate(q, 1.5709428195952275, 3);
  sqcRYGate(q, 1.570816138529481, 4);
  sqcRZGate(q, -1.564557147156174, 4);
  sqcRYGate(q, -1.570529547100395, 5);
  sqcRZGate(q, 1.3998838088707704, 5);
  sqcRYGate(q, -3.1406981063838386, 6);
  sqcRZGate(q, -2.337822094585545, 6);
  sqcRYGate(q, 3.1415511556774796, 7);
  sqcRZGate(q, -0.6504931328833266, 7);
  sqcRYGate(q, 0.0014976061553260128, 8);
  sqcRZGate(q, -1.161566177052764, 8);
  sqcRYGate(q, 1.5700297015206295, 9);
  sqcRZGate(q, -0.1262916594109367, 9);
  sqcRYGate(q, 1.5705498885227325, 10);
  sqcRZGate(q, -3.0326044135276566, 10);
  sqcRYGate(q, -1.5706839539921174, 11);
  sqcRZGate(q, -0.697537249701756, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5708066980679827, 0);
  sqcRZGate(q, -2.3927413484242464, 0);
  sqcRYGate(q, 1.570832728022339, 1);
  sqcRZGate(q, 3.141511912634139, 1);
  sqcRYGate(q, 1.5708071963761698, 2);
  sqcRZGate(q, 1.5796966084406572, 2);
  sqcRYGate(q, 1.5708860761568164, 3);
  sqcRZGate(q, 2.8556072306221396, 3);
  sqcRYGate(q, -5.68391472723917e-05, 4);
  sqcRZGate(q, 0.9459797409922964, 4);
  sqcRYGate(q, -1.5686889667002961, 5);
  sqcRZGate(q, -1.7469737467119595, 5);
  sqcRYGate(q, 1.5714438355465736, 6);
  sqcRZGate(q, -2.5096169365223115, 6);
  sqcRYGate(q, 3.1410609910049128, 7);
  sqcRZGate(q, -1.3487863077241478, 7);
  sqcRYGate(q, -1.359917512176941, 8);
  sqcRZGate(q, -3.1414370191415233, 8);
  sqcRYGate(q, 3.1310601193792085, 9);
  sqcRZGate(q, 0.19631501983734376, 9);
  sqcRYGate(q, 2.4269702346313395, 10);
  sqcRZGate(q, 0.5393139890006208, 10);
  sqcRYGate(q, -0.9816521726913479, 11);
  sqcRZGate(q, 2.2044708654447387, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5706970091685954, 0);
  sqcRZGate(q, -2.7707002704642973, 0);
  sqcRYGate(q, -1.5709474953004547, 1);
  sqcRZGate(q, 2.9844788466942775, 1);
  sqcRYGate(q, 3.1415196090997486, 2);
  sqcRZGate(q, -1.5621193928559693, 2);
  sqcRYGate(q, 3.141529984145976, 3);
  sqcRZGate(q, 2.4765907060847385, 3);
  sqcRYGate(q, 3.141583525946209, 4);
  sqcRZGate(q, -1.3783709340587733, 4);
  sqcRYGate(q, -3.1415433290695955, 5);
  sqcRZGate(q, -1.7471530329778862, 5);
  sqcRYGate(q, 0.009925454649761885, 6);
  sqcRZGate(q, -0.7452473835573076, 6);
  sqcRYGate(q, -0.05025788109167273, 7);
  sqcRZGate(q, -2.474344659069704, 7);
  sqcRYGate(q, 1.5610217855985553, 8);
  sqcRZGate(q, 3.1411208615350885, 8);
  sqcRYGate(q, 1.9560420291512214e-05, 9);
  sqcRZGate(q, 0.6105094596032667, 9);
  sqcRYGate(q, 3.1413664312512615, 10);
  sqcRZGate(q, 2.1116225110429636, 10);
  sqcRYGate(q, 3.141510288424089, 11);
  sqcRZGate(q, 1.220350809696579, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.1415545029069025, 0);
  sqcRZGate(q, -0.5347579807783033, 0);
  sqcRYGate(q, 0.00010882726354566331, 1);
  sqcRZGate(q, -2.1208267937182255, 1);
  sqcRYGate(q, -1.5706324004516652, 2);
  sqcRZGate(q, -0.9056608611211878, 2);
  sqcRYGate(q, -8.922758527241115e-05, 3);
  sqcRZGate(q, 1.242638199250548, 3);
  sqcRYGate(q, -3.679943339651715e-05, 4);
  sqcRZGate(q, -0.14856483765199152, 4);
  sqcRYGate(q, 1.5686388251969738, 5);
  sqcRZGate(q, -0.8783187826712168, 5);
  sqcRYGate(q, 0.0054158208061938495, 6);
  sqcRZGate(q, 0.7672979606029243, 6);
  sqcRYGate(q, 0.0005107790591868744, 7);
  sqcRZGate(q, -1.5209820142830446, 7);
  sqcRYGate(q, -1.3595859323677466, 8);
  sqcRZGate(q, -2.478971000826454, 8);
  sqcRYGate(q, -3.141461439048344, 9);
  sqcRZGate(q, -2.916447142415702, 9);
  sqcRYGate(q, 1.5706703879997976, 10);
  sqcRZGate(q, 2.235727045430301, 10);
  sqcRYGate(q, -2.2619550484949613, 11);
  sqcRZGate(q, 0.09910640495411639, 11);

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
