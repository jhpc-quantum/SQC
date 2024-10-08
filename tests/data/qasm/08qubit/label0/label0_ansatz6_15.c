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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.0654854012960016, 0);
  sqcRYGate(q, -2.1345920373058327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.613806439980885, 0);
  sqcRYGate(q, 2.8736172466927443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7137392734210164, 1);
  sqcRYGate(q, 0.6745680776785468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7503228563317657, 1);
  sqcRYGate(q, -2.8178854198295675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.253094154060083, 2);
  sqcRYGate(q, -1.0993342407755724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3691502023290933, 2);
  sqcRYGate(q, 0.47937119698287217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.51221078302312, 3);
  sqcRYGate(q, -1.038079836913858, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4878646322864776, 3);
  sqcRYGate(q, 2.781102109785332, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5071386600722061, 4);
  sqcRYGate(q, -1.3237399849816542, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6306873733479064, 4);
  sqcRYGate(q, -1.7048333718121533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5364990957855693, 5);
  sqcRYGate(q, -0.16551540969192635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.229003117290084, 5);
  sqcRYGate(q, 1.8392383096882674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.219843987380983, 6);
  sqcRYGate(q, 0.42892170099862614, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5622130582794906, 6);
  sqcRYGate(q, -3.020566731038666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.181181677237581, 0);
  sqcRYGate(q, -0.2983176176072471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.13846761647255, 0);
  sqcRYGate(q, 0.5846477426105631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4688463876433273, 1);
  sqcRYGate(q, -2.5662729309431977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7496943782273613, 1);
  sqcRYGate(q, 0.7267430999400156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.079638269373602, 2);
  sqcRYGate(q, -1.1140652886730353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.64730947270387, 2);
  sqcRYGate(q, 1.5471211250524561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6860518923567378, 3);
  sqcRYGate(q, 1.4188890404953256, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1187274102228923, 3);
  sqcRYGate(q, -1.5345758854063154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0215111600102373, 4);
  sqcRYGate(q, 1.5587523229457612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.077260729071939, 4);
  sqcRYGate(q, 0.39202491737457557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.15600471400018, 5);
  sqcRYGate(q, 2.393240924078318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6708866742517423, 5);
  sqcRYGate(q, 1.633126273758104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6787883004239221, 6);
  sqcRYGate(q, -2.588977447793325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.323490976030132, 6);
  sqcRYGate(q, -1.1145468643967034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.559858320148668, 0);
  sqcRYGate(q, 2.29943771564193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.180936998812821, 0);
  sqcRYGate(q, -2.6829949476737056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9083150411400482, 1);
  sqcRYGate(q, -2.8560850952583348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2805868477840745, 1);
  sqcRYGate(q, -2.1079154580917017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7428369689994172, 2);
  sqcRYGate(q, 2.5932875828316337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2651728332159946, 2);
  sqcRYGate(q, -0.5972535058398352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.491008463827583, 3);
  sqcRYGate(q, -2.7082568505935023, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7553082520847374, 3);
  sqcRYGate(q, 0.5898896550077124, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3994804683146187, 4);
  sqcRYGate(q, -2.4726719488118714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0689896112019732, 4);
  sqcRYGate(q, 0.7495345200725705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17427560561257602, 5);
  sqcRYGate(q, 1.7108545506794526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8290342900511034, 5);
  sqcRYGate(q, 0.6111338793864496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3631489505152645, 6);
  sqcRYGate(q, -2.5043906009414934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8610613472659114, 6);
  sqcRYGate(q, 1.2200376605949603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.072386676314372, 0);
  sqcRYGate(q, -1.5960668474550994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8102181534944255, 0);
  sqcRYGate(q, -0.3922312447837717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8002205451786044, 1);
  sqcRYGate(q, -3.083807888500682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5903142682366465, 1);
  sqcRYGate(q, 0.02666256518197585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8172228380202835, 2);
  sqcRYGate(q, 1.9768994457913047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7192822258474743, 2);
  sqcRYGate(q, -3.0614402664100875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9612793672367066, 3);
  sqcRYGate(q, -0.05990310974123119, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5320086016720572, 3);
  sqcRYGate(q, -2.1687438811881217, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6066047401083534, 4);
  sqcRYGate(q, 0.6774652029963388, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3966232663997133, 4);
  sqcRYGate(q, -0.8586913177593116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6849123943978002, 5);
  sqcRYGate(q, -2.212509849508977, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.527511495250075, 5);
  sqcRYGate(q, 0.9345648168580174, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3488686730722645, 6);
  sqcRYGate(q, 3.015302082257952, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5868184436816777, 6);
  sqcRYGate(q, 2.1613469336484137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.252314734664293, 0);
  sqcRYGate(q, 1.6984252499736243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.515387499789786, 0);
  sqcRYGate(q, -2.7544808395211575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2495228507558097, 1);
  sqcRYGate(q, -0.7621072035065419, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1160849228935894, 1);
  sqcRYGate(q, 2.8545096052823222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.090980305747696, 2);
  sqcRYGate(q, -1.6439131191973149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6791704481160226, 2);
  sqcRYGate(q, 0.43065326833583983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6705835372022055, 3);
  sqcRYGate(q, -1.3510585885297655, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2328409091111014, 3);
  sqcRYGate(q, 3.0101994853431893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.09183358587942, 4);
  sqcRYGate(q, -0.05577908469816429, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7317245076569119, 4);
  sqcRYGate(q, -3.1360112149751016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6084404222715971, 5);
  sqcRYGate(q, -0.9218833306958798, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.24885085326494139, 5);
  sqcRYGate(q, 1.2201206039534043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2120711269038165, 6);
  sqcRYGate(q, -0.9817098827660949, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.772441812433419, 6);
  sqcRYGate(q, 2.2419378692936416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9252232042698427, 0);
  sqcRYGate(q, 3.026148315777679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.240300038176918, 0);
  sqcRYGate(q, 2.4281454094814268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.526439938606119, 1);
  sqcRYGate(q, -2.810705480206935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7784451660909989, 1);
  sqcRYGate(q, 1.2830184423971236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9053732189213054, 2);
  sqcRYGate(q, 2.389172271961999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.953546214138944, 2);
  sqcRYGate(q, 0.15471236864945184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5080346028606817, 3);
  sqcRYGate(q, -0.06657092088301554, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4301241967272061, 3);
  sqcRYGate(q, 1.7512133953828137, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.392679782593528, 4);
  sqcRYGate(q, -1.5555276247548466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2556755912084312, 4);
  sqcRYGate(q, -1.0792992138578228, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9521706305500186, 5);
  sqcRYGate(q, -0.8956392409200518, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.029500971421252, 5);
  sqcRYGate(q, -2.056927660567904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.30060054107402756, 6);
  sqcRYGate(q, 2.2405433494001255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9004022206288678, 6);
  sqcRYGate(q, 0.15362847933182522, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.05474181309177517, 0);
  sqcRYGate(q, 1.7094230404469961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2423179533221056, 0);
  sqcRYGate(q, 0.9905263116003447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.018658697915442, 1);
  sqcRYGate(q, 1.6509949916117463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.766060460971401, 1);
  sqcRYGate(q, 0.23364302849001906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4274695180290573, 2);
  sqcRYGate(q, 2.4051524091568086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8232309040089199, 2);
  sqcRYGate(q, 2.191256809821871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6458510242934876, 3);
  sqcRYGate(q, 0.012359101727146715, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7668518042216252, 3);
  sqcRYGate(q, 0.5580516896433991, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7437194664031148, 4);
  sqcRYGate(q, 1.9387677650301625, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9743187818217267, 4);
  sqcRYGate(q, -0.7622635766239442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3782355617254654, 5);
  sqcRYGate(q, -2.082721656729414, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3102496360853606, 5);
  sqcRYGate(q, 2.5328745978295877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6062352232817587, 6);
  sqcRYGate(q, 2.4725267762107705, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2306576224160128, 6);
  sqcRYGate(q, 0.2624217165539191, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.138320158825766, 0);
  sqcRYGate(q, -2.0429432361361224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4313974728355108, 0);
  sqcRYGate(q, -2.2039469689370437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0358212024815217, 1);
  sqcRYGate(q, -3.067208954165172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4383711201928122, 1);
  sqcRYGate(q, 0.48018349970448865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7552414148102714, 2);
  sqcRYGate(q, -1.4618861176292457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0616609366469376, 2);
  sqcRYGate(q, -2.3083581347847133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7413335516119477, 3);
  sqcRYGate(q, -2.5998854726398424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.890396500324206, 3);
  sqcRYGate(q, -2.679044625772575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.036102430027461274, 4);
  sqcRYGate(q, 2.1220733597279957, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0865443448746444, 4);
  sqcRYGate(q, -0.5443910508456522, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0668631351957014, 5);
  sqcRYGate(q, -2.21367855217906, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08207642769979628, 5);
  sqcRYGate(q, 1.1563746695008814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.563135532544678, 6);
  sqcRYGate(q, 1.6711234709302003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3727693488742085, 6);
  sqcRYGate(q, 3.005972827297653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.860480122645992, 0);
  sqcRYGate(q, 0.9804057408787292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4943399990297097, 0);
  sqcRYGate(q, -1.3370810992640978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6975014253847527, 1);
  sqcRYGate(q, 0.10957626100260055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.124090919182052, 1);
  sqcRYGate(q, 2.1614128529633794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7818738999105532, 2);
  sqcRYGate(q, 1.470216907333782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1245789116863076, 2);
  sqcRYGate(q, -0.22627833070175818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2385458461376002, 3);
  sqcRYGate(q, 1.239554355264442, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5164477574358352, 3);
  sqcRYGate(q, -2.473215052474075, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.976104997141885, 4);
  sqcRYGate(q, 1.305495213634213, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.086644927039987, 4);
  sqcRYGate(q, 1.0130903812743606, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8931888931577623, 5);
  sqcRYGate(q, -2.3811292609845576, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.758830090052427, 5);
  sqcRYGate(q, 3.116403371057931, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.133471873047908, 6);
  sqcRYGate(q, -3.016191946235864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9060880432218212, 6);
  sqcRYGate(q, -0.5868239234056336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.321747968605256, 0);
  sqcRYGate(q, -2.055825300025827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.61649062615532, 0);
  sqcRYGate(q, 2.818093805554053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20551321726327032, 1);
  sqcRYGate(q, -2.242842875910684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47677936943746874, 1);
  sqcRYGate(q, 1.8205157584945573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.734220361789173, 2);
  sqcRYGate(q, 1.1833617035122455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5463900513822155, 2);
  sqcRYGate(q, -0.657820376265013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1731340892959015, 3);
  sqcRYGate(q, -0.6730504098265586, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.09199946064514, 3);
  sqcRYGate(q, 0.1914629017747038, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.088238063021925, 4);
  sqcRYGate(q, 0.7765436883422341, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9777433311615975, 4);
  sqcRYGate(q, 1.1794309174626247, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5813478429913521, 5);
  sqcRYGate(q, 2.016678516100826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.45868002707848726, 5);
  sqcRYGate(q, 0.96603279400475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7888998053526985, 6);
  sqcRYGate(q, 1.5646347462489105, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4681507573167978, 6);
  sqcRYGate(q, -2.2869227367487737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5439106810863894, 0);
  sqcRYGate(q, -1.109375667704394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1274303419117082, 0);
  sqcRYGate(q, 2.409838894473898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8846518824689547, 1);
  sqcRYGate(q, 2.578884176528336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43204191274601295, 1);
  sqcRYGate(q, 0.4145965396188336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.45549457096552, 2);
  sqcRYGate(q, 1.4742966386927423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9070080815265094, 2);
  sqcRYGate(q, -2.713183491286672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19276270839161697, 3);
  sqcRYGate(q, 1.8101405879560348, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8554569609519236, 3);
  sqcRYGate(q, -2.6049777408572092, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5851647600386505, 4);
  sqcRYGate(q, 2.887599496337605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8655921831939035, 4);
  sqcRYGate(q, 0.22852423015821374, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9587964967416234, 5);
  sqcRYGate(q, -1.8500429504563698, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.956432936321665, 5);
  sqcRYGate(q, -1.2891186932448637, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8931147449017507, 6);
  sqcRYGate(q, 0.5344097364069818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.324708393583082, 6);
  sqcRYGate(q, 1.4762615751099957, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9664908673996684, 0);
  sqcRYGate(q, 2.3115603750891798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9884892982916407, 0);
  sqcRYGate(q, -0.6534856728988452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5771665857510246, 1);
  sqcRYGate(q, 3.118042058020354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.755844901784287, 1);
  sqcRYGate(q, -3.1034740095466136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3738552842267344, 2);
  sqcRYGate(q, 2.305445383033961, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.677417129282651, 2);
  sqcRYGate(q, 1.8057917806966142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6120539644863907, 3);
  sqcRYGate(q, -1.2884145982539925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.053511603554539, 3);
  sqcRYGate(q, 1.542763946063733, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.42924040648605116, 4);
  sqcRYGate(q, -3.0228253808552576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6247946995685432, 4);
  sqcRYGate(q, 2.675427034964066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1697116069717932, 5);
  sqcRYGate(q, 3.1259821325511834, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0789331709220953, 5);
  sqcRYGate(q, -1.2878336329264692, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.815707665638531, 6);
  sqcRYGate(q, 1.055434921228187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3969131554248113, 6);
  sqcRYGate(q, 2.5305928494086447, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.728738233942374, 0);
  sqcRYGate(q, 1.5172155819320698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.024909292322549, 0);
  sqcRYGate(q, 1.8626709814292397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0292739949905036, 1);
  sqcRYGate(q, 0.9678593295172814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9433564319679545, 1);
  sqcRYGate(q, -0.6050466626883255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8191529483178162, 2);
  sqcRYGate(q, -1.867478954359105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5187279309011046, 2);
  sqcRYGate(q, -2.1700332024419238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.982529855922071, 3);
  sqcRYGate(q, 1.2770936240949933, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3961491618344794, 3);
  sqcRYGate(q, 3.1130939108705475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.606323106627352, 4);
  sqcRYGate(q, 0.8905823447127225, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5721450456478683, 4);
  sqcRYGate(q, 0.9023895921122377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0360098477866533, 5);
  sqcRYGate(q, -1.0108382600992778, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5193802773460403, 5);
  sqcRYGate(q, -2.026051289146247, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7134063270368154, 6);
  sqcRYGate(q, -2.0619927364123836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0447300732842688, 6);
  sqcRYGate(q, -2.780554611967458, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.338931081698684, 0);
  sqcRYGate(q, 0.6728205679714998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.746534382490763, 0);
  sqcRYGate(q, -1.4314616072995325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.337253807509537, 1);
  sqcRYGate(q, 1.238225728579125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.810706472808608, 1);
  sqcRYGate(q, 1.4034473002268602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2861247928409805, 2);
  sqcRYGate(q, 1.286618803701395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.07825467712607, 2);
  sqcRYGate(q, 2.7330282960218235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5482634084681226, 3);
  sqcRYGate(q, 1.9457164359549957, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.932388052810158, 3);
  sqcRYGate(q, -0.32253244973768885, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5815520223725743, 4);
  sqcRYGate(q, 2.607754081465157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6925466887614364, 4);
  sqcRYGate(q, -1.9475007743104644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1820665340939644, 5);
  sqcRYGate(q, 3.0376577420131086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.764142333140764, 5);
  sqcRYGate(q, 0.3193054270200326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4216992535952384, 6);
  sqcRYGate(q, -1.9490665497460482, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3833311701119653, 6);
  sqcRYGate(q, -1.6618199469319208, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8287996153709125, 0);
  sqcRYGate(q, 2.5266979920970463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4172598322292735, 0);
  sqcRYGate(q, -0.882231781783105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.501456862319478, 1);
  sqcRYGate(q, -1.4010041750172695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.489075070527762, 1);
  sqcRYGate(q, -1.082027237170678, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2745014142262006, 2);
  sqcRYGate(q, -1.9661179441632468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.076948370242462, 2);
  sqcRYGate(q, 1.619399345069242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3931337125792007, 3);
  sqcRYGate(q, 1.6536148452934831, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.050270580463515104, 3);
  sqcRYGate(q, -0.657783195434408, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.05322499285746041, 4);
  sqcRYGate(q, 1.7785548087778302, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1984297739042757, 4);
  sqcRYGate(q, -2.512601018809292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0565282449043987, 5);
  sqcRYGate(q, 1.024238904991957, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.896502446023963, 5);
  sqcRYGate(q, -1.5581703392241852, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8316394208576713, 6);
  sqcRYGate(q, 1.9428849167481905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.651814460188064, 6);
  sqcRYGate(q, 1.5244455386627442, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0466097053059285, 0);
  sqcRYGate(q, -2.4634820729889735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9067996490909014, 0);
  sqcRYGate(q, -1.4385679280815087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2362189361454488, 1);
  sqcRYGate(q, -1.6234014420361043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5872407025383806, 1);
  sqcRYGate(q, -2.953702868064617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5075443725962354, 2);
  sqcRYGate(q, -2.27983495044486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5104961717801253, 2);
  sqcRYGate(q, 2.201288982284932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41330940275055106, 3);
  sqcRYGate(q, 1.8670310311942666, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1043691126505304, 3);
  sqcRYGate(q, 0.8271227453820267, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.496976748079554, 4);
  sqcRYGate(q, -2.4933498738021056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.929125711331804, 4);
  sqcRYGate(q, 1.6207946827488462, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7860876576226454, 5);
  sqcRYGate(q, -1.313061116476274, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3872469977495046, 5);
  sqcRYGate(q, 2.991246133989635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.854991551383308, 6);
  sqcRYGate(q, -1.5311233159140283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9973404775547506, 6);
  sqcRYGate(q, -1.317117258887299, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9098873946664748, 0);
  sqcRYGate(q, 2.7233836211877485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7986752253675784, 0);
  sqcRYGate(q, -2.362484765295788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.497849260353442, 1);
  sqcRYGate(q, 1.8999487051171007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.481076641716991, 1);
  sqcRYGate(q, 0.5538788049476668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20418857926943892, 2);
  sqcRYGate(q, 0.5699935443925712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8222543459235965, 2);
  sqcRYGate(q, -0.6160361876572532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6785165745182233, 3);
  sqcRYGate(q, 2.9718566717489083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.22149287101492957, 3);
  sqcRYGate(q, 0.10880863353136484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.573776626117914, 4);
  sqcRYGate(q, -1.8198857390132845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5144688831896023, 4);
  sqcRYGate(q, -1.7291840892131194, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4814537924199138, 5);
  sqcRYGate(q, -2.981609831636455, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.19891660619220008, 5);
  sqcRYGate(q, -1.844090986758722, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9863001832424768, 6);
  sqcRYGate(q, -1.2603013739226983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0676778456167697, 6);
  sqcRYGate(q, -1.962617086073038, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.709497167018162, 0);
  sqcRYGate(q, -2.1603451860553013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7843593063056109, 0);
  sqcRYGate(q, -1.6630973555285227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8377113120896645, 1);
  sqcRYGate(q, 2.5438775911280467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9439573095261045, 1);
  sqcRYGate(q, 2.71336260156913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9718295980024392, 2);
  sqcRYGate(q, 0.8412587318302194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5297779120506908, 2);
  sqcRYGate(q, -0.8522228596921417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6763922470775956, 3);
  sqcRYGate(q, -0.413740864585451, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7401330631827434, 3);
  sqcRYGate(q, -0.8868300360495098, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6064150797858728, 4);
  sqcRYGate(q, 1.7679767741432713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4953659852970016, 4);
  sqcRYGate(q, 0.8192038301286928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04458448526954031, 5);
  sqcRYGate(q, -2.1031711787806984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.897760074008296, 5);
  sqcRYGate(q, -2.654106500934712, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.882223017599894, 6);
  sqcRYGate(q, -2.6279941728659497, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4544252339849313, 6);
  sqcRYGate(q, 1.8457710587817429, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1863341443054836, 0);
  sqcRYGate(q, -0.12676031793842266, 1);
  sqcRYGate(q, -1.8210461336913637, 2);
  sqcRYGate(q, 0.2827985842462555, 3);
  sqcRYGate(q, -0.03922705096721622, 4);
  sqcRYGate(q, -0.25826347125779137, 5);
  sqcRYGate(q, 0.13861260055023905, 6);
  sqcRYGate(q, -0.173918591394707, 7);

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
