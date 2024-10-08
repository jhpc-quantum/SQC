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

  sqcRYGate(q, -3.1026592084470033, 0);
  sqcRZGate(q, -2.840846143608598, 0);
  sqcRYGate(q, -2.0774773914750035, 1);
  sqcRZGate(q, -1.4961830882940252, 1);
  sqcRYGate(q, -0.31345704420054155, 2);
  sqcRZGate(q, -1.462588160693059, 2);
  sqcRYGate(q, -3.0212340306344596, 3);
  sqcRZGate(q, -1.505433166075421, 3);
  sqcRYGate(q, -1.766211058367226, 4);
  sqcRZGate(q, -2.4585731242417914, 4);
  sqcRYGate(q, 0.5877873439109758, 5);
  sqcRZGate(q, 2.259363744605344, 5);
  sqcRYGate(q, -2.9874153577604043, 6);
  sqcRZGate(q, -1.09444230292854, 6);
  sqcRYGate(q, 2.3703300570321617, 7);
  sqcRZGate(q, 2.989582064222098, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5579332015386385, 0);
  sqcRZGate(q, -1.5451007471878542, 0);
  sqcRYGate(q, 0.2540237031086958, 1);
  sqcRZGate(q, 1.062508079531364, 1);
  sqcRYGate(q, -2.491981326543865, 2);
  sqcRZGate(q, 0.912873042257735, 2);
  sqcRYGate(q, 3.0029142616869198, 3);
  sqcRZGate(q, -0.33487710089229333, 3);
  sqcRYGate(q, -2.284262505461249, 4);
  sqcRZGate(q, 2.0414207791920456, 4);
  sqcRYGate(q, -2.08374907490718, 5);
  sqcRZGate(q, -1.1077951593431488, 5);
  sqcRYGate(q, 0.4646077863614026, 6);
  sqcRZGate(q, -2.2748421608672755, 6);
  sqcRYGate(q, -2.8517086688571136, 7);
  sqcRZGate(q, -2.3334732506288804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9723008166607547, 0);
  sqcRZGate(q, 1.6186583067337903, 0);
  sqcRYGate(q, 1.9716022181352322, 1);
  sqcRZGate(q, 3.1407697327510515, 1);
  sqcRYGate(q, -1.7838836893202812, 2);
  sqcRZGate(q, -2.011056514985172, 2);
  sqcRYGate(q, -0.182456259988388, 3);
  sqcRZGate(q, -1.209179476913507, 3);
  sqcRYGate(q, 1.8114960894495022, 4);
  sqcRZGate(q, -1.8685762503500598, 4);
  sqcRYGate(q, -2.4094269937332387, 5);
  sqcRZGate(q, 2.5830999276232727, 5);
  sqcRYGate(q, 2.692366079181158, 6);
  sqcRZGate(q, 2.459282323496198, 6);
  sqcRYGate(q, -2.044038804520944, 7);
  sqcRZGate(q, 1.5304622391112543, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.30586607891478995, 0);
  sqcRZGate(q, -0.17589492538640616, 0);
  sqcRYGate(q, 1.0036641167830762, 1);
  sqcRZGate(q, 0.0034450982028747888, 1);
  sqcRYGate(q, -0.005209740429580653, 2);
  sqcRZGate(q, -1.848106457128905, 2);
  sqcRYGate(q, -1.249903280188228, 3);
  sqcRZGate(q, 0.4388507015115302, 3);
  sqcRYGate(q, -2.3434854523509228, 4);
  sqcRZGate(q, -2.9621563877301273, 4);
  sqcRYGate(q, 1.4447371271023723, 5);
  sqcRZGate(q, 0.5727936288917903, 5);
  sqcRYGate(q, 1.0982347126033796, 6);
  sqcRZGate(q, 0.5187783425874092, 6);
  sqcRYGate(q, 0.653589976649843, 7);
  sqcRZGate(q, -2.7442546031248787, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.004657209153978492, 0);
  sqcRZGate(q, 0.16955023039865494, 0);
  sqcRYGate(q, 1.9466242115318924, 1);
  sqcRZGate(q, -2.8319675690599726, 1);
  sqcRYGate(q, -3.051017099204963, 2);
  sqcRZGate(q, -1.005229196491996, 2);
  sqcRYGate(q, -0.24623186620628343, 3);
  sqcRZGate(q, 1.9774421781490652, 3);
  sqcRYGate(q, -2.594459970802176, 4);
  sqcRZGate(q, 2.489758081677138, 4);
  sqcRYGate(q, -2.2124164314610866, 5);
  sqcRZGate(q, -2.91432206931865, 5);
  sqcRYGate(q, 2.4131954087638823, 6);
  sqcRZGate(q, 1.5120612246542184, 6);
  sqcRYGate(q, 2.320874417632978, 7);
  sqcRZGate(q, -1.3487060527049053, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7192667963564257, 0);
  sqcRZGate(q, -0.1681682968371776, 0);
  sqcRYGate(q, -1.2333451179464154, 1);
  sqcRZGate(q, -0.2967079018659169, 1);
  sqcRYGate(q, 1.1483049720615055, 2);
  sqcRZGate(q, -1.1025486747272808, 2);
  sqcRYGate(q, 2.2426180183294226, 3);
  sqcRZGate(q, -2.3768193455607776, 3);
  sqcRYGate(q, -2.30230305486267, 4);
  sqcRZGate(q, 1.6797914376808247, 4);
  sqcRYGate(q, -0.6148634279886047, 5);
  sqcRZGate(q, -1.6979026686108645, 5);
  sqcRYGate(q, 0.2130734519318544, 6);
  sqcRZGate(q, -2.764201086612428, 6);
  sqcRYGate(q, 0.12220187015584119, 7);
  sqcRZGate(q, 0.906209071640582, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.403864097236653, 0);
  sqcRZGate(q, 1.4979145343583573, 0);
  sqcRYGate(q, 2.2986802102034285, 1);
  sqcRZGate(q, 0.9872206003245386, 1);
  sqcRYGate(q, -0.35452709271856087, 2);
  sqcRZGate(q, -0.11883404263199318, 2);
  sqcRYGate(q, 3.076535894336724, 3);
  sqcRZGate(q, 2.848145582475279, 3);
  sqcRYGate(q, -0.8619815311273177, 4);
  sqcRZGate(q, 0.8394008189212235, 4);
  sqcRYGate(q, 2.1036767406158496, 5);
  sqcRZGate(q, -0.9596039981121123, 5);
  sqcRYGate(q, 1.854897875281326, 6);
  sqcRZGate(q, 2.211437903693091, 6);
  sqcRYGate(q, -0.43242834682028014, 7);
  sqcRZGate(q, -0.18241679572895367, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7370749992390118, 0);
  sqcRZGate(q, 2.889589958669896, 0);
  sqcRYGate(q, -0.001412145343819052, 1);
  sqcRZGate(q, 2.3616809127812917, 1);
  sqcRYGate(q, -2.120340710974292, 2);
  sqcRZGate(q, 2.7425703622754973, 2);
  sqcRYGate(q, -1.8761526068147512, 3);
  sqcRZGate(q, -2.5276314063237817, 3);
  sqcRYGate(q, -2.160538422376863, 4);
  sqcRZGate(q, -0.5178439707505563, 4);
  sqcRYGate(q, -2.471948659224104, 5);
  sqcRZGate(q, -1.3644409341253319, 5);
  sqcRYGate(q, -0.42884783022801065, 6);
  sqcRZGate(q, 2.1835718011668837, 6);
  sqcRYGate(q, -2.960145941618462, 7);
  sqcRZGate(q, 0.13485417509448713, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3900407634699814, 0);
  sqcRZGate(q, -0.25596209854457547, 0);
  sqcRYGate(q, 0.12371115123787504, 1);
  sqcRZGate(q, 1.2854955405780502, 1);
  sqcRYGate(q, -0.25663305779412315, 2);
  sqcRZGate(q, 0.5640131409875666, 2);
  sqcRYGate(q, -2.4785511597505168, 3);
  sqcRZGate(q, -2.9913162759617715, 3);
  sqcRYGate(q, -0.8658930758296766, 4);
  sqcRZGate(q, -3.118980713143551, 4);
  sqcRYGate(q, -1.91631246234916, 5);
  sqcRZGate(q, -2.854970298177567, 5);
  sqcRYGate(q, 0.7301455111920472, 6);
  sqcRZGate(q, -0.4697170154520585, 6);
  sqcRYGate(q, -1.4491987526784924, 7);
  sqcRZGate(q, -1.3705882057359324, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4917956924415128, 0);
  sqcRZGate(q, -1.5129149909573245, 0);
  sqcRYGate(q, 0.003336311431397121, 1);
  sqcRZGate(q, -1.5378579740656644, 1);
  sqcRYGate(q, -1.8318465363595344, 2);
  sqcRZGate(q, 2.051636024145351, 2);
  sqcRYGate(q, 1.835748288880168, 3);
  sqcRZGate(q, 0.9419182591406621, 3);
  sqcRYGate(q, -2.7796294077234664, 4);
  sqcRZGate(q, 2.428453186503864, 4);
  sqcRYGate(q, 1.110697692365766, 5);
  sqcRZGate(q, 1.95114586936935, 5);
  sqcRYGate(q, 0.1351087419751904, 6);
  sqcRZGate(q, 2.189647619896129, 6);
  sqcRYGate(q, -2.633741777734121, 7);
  sqcRZGate(q, 0.5838563067797891, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0911268984804865, 0);
  sqcRZGate(q, 1.722837583821348, 0);
  sqcRYGate(q, -0.43413064960888276, 1);
  sqcRZGate(q, 2.6338324943730074, 1);
  sqcRYGate(q, -2.0641109823063926, 2);
  sqcRZGate(q, -0.36517018226615194, 2);
  sqcRYGate(q, -1.6063454909495674, 3);
  sqcRZGate(q, -1.386726658657235, 3);
  sqcRYGate(q, -0.5772712444104746, 4);
  sqcRZGate(q, -0.19883153054636815, 4);
  sqcRYGate(q, 0.8983909060168571, 5);
  sqcRZGate(q, -0.5938821537624479, 5);
  sqcRYGate(q, -0.7173698455044369, 6);
  sqcRZGate(q, 2.6201784288346976, 6);
  sqcRYGate(q, -1.565703981551903, 7);
  sqcRZGate(q, 0.604532011702771, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5170630921849471, 0);
  sqcRZGate(q, -2.467921564444114, 0);
  sqcRYGate(q, -1.6565050720389207, 1);
  sqcRZGate(q, 3.1262666356081694, 1);
  sqcRYGate(q, -0.5563367761087514, 2);
  sqcRZGate(q, -2.404146567475864, 2);
  sqcRYGate(q, 0.01469227850120502, 3);
  sqcRZGate(q, -0.1993051505097144, 3);
  sqcRYGate(q, 2.992729348503268, 4);
  sqcRZGate(q, -3.1106489873061713, 4);
  sqcRYGate(q, -2.4988873122863513, 5);
  sqcRZGate(q, 1.8796332373771953, 5);
  sqcRYGate(q, 2.228819865008656, 6);
  sqcRZGate(q, -2.0697362443503935, 6);
  sqcRYGate(q, 2.991532474288754, 7);
  sqcRZGate(q, 2.7444207031694914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3169701217529596, 0);
  sqcRZGate(q, -2.381454310165764, 0);
  sqcRYGate(q, -0.07076761113769463, 1);
  sqcRZGate(q, -2.89469030371111, 1);
  sqcRYGate(q, -0.0031301764900585134, 2);
  sqcRZGate(q, -3.0767349318933968, 2);
  sqcRYGate(q, -0.6834700430051166, 3);
  sqcRZGate(q, -2.690782469991273, 3);
  sqcRYGate(q, 3.058425668831897, 4);
  sqcRZGate(q, 1.4746567135393178, 4);
  sqcRYGate(q, 1.2877488820880183, 5);
  sqcRZGate(q, 2.884598003052384, 5);
  sqcRYGate(q, 1.202530188958069, 6);
  sqcRZGate(q, 0.40712090617582053, 6);
  sqcRYGate(q, 1.8306173691087446, 7);
  sqcRZGate(q, -1.7902665543424243, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4112686878280478, 0);
  sqcRZGate(q, 2.63850901977758, 0);
  sqcRYGate(q, 0.08495898748067887, 1);
  sqcRZGate(q, -2.3785398832207045, 1);
  sqcRYGate(q, -2.309363885998653, 2);
  sqcRZGate(q, -1.7357827315887004, 2);
  sqcRYGate(q, 3.0800253824024617, 3);
  sqcRZGate(q, -2.609216451073048, 3);
  sqcRYGate(q, 1.47583122422996, 4);
  sqcRZGate(q, 1.4325543018059093, 4);
  sqcRYGate(q, 0.6239804764333972, 5);
  sqcRZGate(q, -1.2941650103656865, 5);
  sqcRYGate(q, -1.1028458480399594, 6);
  sqcRZGate(q, -1.1010656619523713, 6);
  sqcRYGate(q, -2.5559689512949992, 7);
  sqcRZGate(q, -2.335628111135999, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1391449550935917, 0);
  sqcRZGate(q, 0.9173260688508728, 0);
  sqcRYGate(q, 0.7608964189406033, 1);
  sqcRZGate(q, 1.4317860937276823, 1);
  sqcRYGate(q, 0.0009249235775721232, 2);
  sqcRZGate(q, 2.179481605552444, 2);
  sqcRYGate(q, -2.815325224148528, 3);
  sqcRZGate(q, -0.8404865073536565, 3);
  sqcRYGate(q, 0.8875911765647313, 4);
  sqcRZGate(q, -2.95574322252996, 4);
  sqcRYGate(q, -0.1655176017017057, 5);
  sqcRZGate(q, -1.5136737495894284, 5);
  sqcRYGate(q, -0.4592694329185083, 6);
  sqcRZGate(q, 1.779267830923298, 6);
  sqcRYGate(q, -1.5766851986331911, 7);
  sqcRZGate(q, -2.249048586026158, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.070578021321202, 0);
  sqcRZGate(q, 1.3194045936562808, 0);
  sqcRYGate(q, 3.1153399648882414, 1);
  sqcRZGate(q, -0.13592467476022776, 1);
  sqcRYGate(q, 3.137751579040763, 2);
  sqcRZGate(q, -1.570948649946386, 2);
  sqcRYGate(q, -1.2192551220723242, 3);
  sqcRZGate(q, -1.5354059303256784, 3);
  sqcRYGate(q, 0.7700430958593341, 4);
  sqcRZGate(q, 2.98705073875946, 4);
  sqcRYGate(q, 0.6161319219553585, 5);
  sqcRZGate(q, -2.586110678006536, 5);
  sqcRYGate(q, 1.883136652282425, 6);
  sqcRZGate(q, -0.06825836728687838, 6);
  sqcRYGate(q, -2.2391440660715736, 7);
  sqcRZGate(q, 2.9699375542277453, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.16461190555026128, 0);
  sqcRZGate(q, 2.822818882977797, 0);
  sqcRYGate(q, 0.5907587377912975, 1);
  sqcRZGate(q, -1.487175229936721, 1);
  sqcRYGate(q, 5.490383145176396e-05, 2);
  sqcRZGate(q, -0.9934451888235207, 2);
  sqcRYGate(q, -1.6557916618887036, 3);
  sqcRZGate(q, 2.8932917195425807, 3);
  sqcRYGate(q, 2.870360514192419, 4);
  sqcRZGate(q, 2.9745276326984036, 4);
  sqcRYGate(q, -1.5710409800973548, 5);
  sqcRZGate(q, 0.9995509935480883, 5);
  sqcRYGate(q, -1.9994944356069269, 6);
  sqcRZGate(q, -0.950117054460986, 6);
  sqcRYGate(q, 2.5705748990497232, 7);
  sqcRZGate(q, -1.916324647689784, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1038998910802675, 0);
  sqcRZGate(q, -2.26162382924172, 0);
  sqcRYGate(q, -3.0854001635649904, 1);
  sqcRZGate(q, -1.0165088821407862, 1);
  sqcRYGate(q, -0.31399375729667156, 2);
  sqcRZGate(q, 1.3672384946254557, 2);
  sqcRYGate(q, 0.39675533205006436, 3);
  sqcRZGate(q, 2.929651140758974, 3);
  sqcRYGate(q, -2.5238219298039417, 4);
  sqcRZGate(q, 0.366393397634737, 4);
  sqcRYGate(q, 2.6209295266434314, 5);
  sqcRZGate(q, -2.2662618832820614, 5);
  sqcRYGate(q, 0.8248592753475634, 6);
  sqcRZGate(q, -1.7234840541576564, 6);
  sqcRYGate(q, 1.1307573253738807, 7);
  sqcRZGate(q, -0.19768614280781346, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3593679801747287, 0);
  sqcRZGate(q, 0.24251758008608792, 0);
  sqcRYGate(q, -1.693869947226764, 1);
  sqcRZGate(q, -1.57587204788448, 1);
  sqcRYGate(q, -1.575226211635088, 2);
  sqcRZGate(q, 0.0895964436285528, 2);
  sqcRYGate(q, -1.0402702733174962, 3);
  sqcRZGate(q, -1.4568394804335238, 3);
  sqcRYGate(q, -2.789701874248423, 4);
  sqcRZGate(q, -2.0991122042791375, 4);
  sqcRYGate(q, -1.9687737839131643, 5);
  sqcRZGate(q, -2.92094059876486, 5);
  sqcRYGate(q, -0.952547176788595, 6);
  sqcRZGate(q, -1.5591002485193721, 6);
  sqcRYGate(q, 1.0702554841188476, 7);
  sqcRZGate(q, -1.7197007506499862, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.316906876517378, 0);
  sqcRZGate(q, 1.0333541648620255, 0);
  sqcRYGate(q, -0.48067123974164616, 1);
  sqcRZGate(q, -3.1344928543927173, 1);
  sqcRYGate(q, 2.5006784708667973, 2);
  sqcRZGate(q, 3.104006472108123, 2);
  sqcRYGate(q, 1.291342959720696, 3);
  sqcRZGate(q, 1.6900854234803135, 3);
  sqcRYGate(q, -1.160412119194616, 4);
  sqcRZGate(q, 1.3789079635443722, 4);
  sqcRYGate(q, 2.853621149192293, 5);
  sqcRZGate(q, 1.018707205996121, 5);
  sqcRYGate(q, 0.6833058107072826, 6);
  sqcRZGate(q, -2.8319116462251808, 6);
  sqcRYGate(q, -2.6693338882540094, 7);
  sqcRZGate(q, 1.9955793828226502, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4153091989093374, 0);
  sqcRZGate(q, -1.5770696978661884, 0);
  sqcRYGate(q, -1.398782594411112, 1);
  sqcRZGate(q, 0.00021879765374761752, 1);
  sqcRYGate(q, 3.1246099207076186, 2);
  sqcRZGate(q, -1.6921436428293328, 2);
  sqcRYGate(q, 0.0007058228645669396, 3);
  sqcRZGate(q, -1.6970433237740687, 3);
  sqcRYGate(q, 0.21701993252986718, 4);
  sqcRZGate(q, -3.1391125992517663, 4);
  sqcRYGate(q, 2.60263903237953, 5);
  sqcRZGate(q, 3.0434529889791397, 5);
  sqcRYGate(q, -0.28518958868350985, 6);
  sqcRZGate(q, 1.0948782080914838, 6);
  sqcRYGate(q, -0.05824110011045125, 7);
  sqcRZGate(q, -0.009748418375204793, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1378730230643157, 0);
  sqcRZGate(q, 1.8759065160667205, 0);
  sqcRYGate(q, 1.6506094468778318, 1);
  sqcRZGate(q, -1.9134044241622588, 1);
  sqcRYGate(q, 0.30718055503873587, 2);
  sqcRZGate(q, -3.0849131212640173, 2);
  sqcRYGate(q, -0.28614244189542326, 3);
  sqcRZGate(q, 0.006920276472106639, 3);
  sqcRYGate(q, -1.3203498344746984, 4);
  sqcRZGate(q, 0.5502685746502208, 4);
  sqcRYGate(q, 3.1435505726337747e-05, 5);
  sqcRZGate(q, -1.7176038806547833, 5);
  sqcRYGate(q, 2.5145285043311074, 6);
  sqcRZGate(q, -1.841232210541051, 6);
  sqcRYGate(q, 0.34721426795242394, 7);
  sqcRZGate(q, -1.9026732045521824, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1790431284792053, 0);
  sqcRZGate(q, -1.7124117302952635, 0);
  sqcRYGate(q, 2.653274527520828, 1);
  sqcRZGate(q, -1.9548656534174151, 1);
  sqcRYGate(q, -3.122046903602297, 2);
  sqcRZGate(q, -1.5272513828272523, 2);
  sqcRYGate(q, -2.7646607868416844, 3);
  sqcRZGate(q, -1.7891958693512335, 3);
  sqcRYGate(q, -1.3916589378782982, 4);
  sqcRZGate(q, 3.0340600736352954, 4);
  sqcRYGate(q, -0.25208189426569855, 5);
  sqcRZGate(q, -0.13102717175906164, 5);
  sqcRYGate(q, -1.8354394540381929, 6);
  sqcRZGate(q, -1.6609341145900771, 6);
  sqcRYGate(q, -2.279693607184768, 7);
  sqcRZGate(q, 2.300254840564398, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.593364540532916, 0);
  sqcRZGate(q, -3.1388241449345107, 0);
  sqcRYGate(q, 1.5761588349832154, 1);
  sqcRZGate(q, -0.1148374998427002, 1);
  sqcRYGate(q, -1.5719585216404603, 2);
  sqcRZGate(q, 1.9004791857592505, 2);
  sqcRYGate(q, 0.00027373226799418565, 3);
  sqcRZGate(q, 0.21102197254598298, 3);
  sqcRYGate(q, -1.8566342144001649, 4);
  sqcRZGate(q, 0.0013487408549277546, 4);
  sqcRYGate(q, 1.5707218389973876, 5);
  sqcRZGate(q, 3.135235573985637, 5);
  sqcRYGate(q, -2.1587323613435085, 6);
  sqcRZGate(q, 0.06912031409245945, 6);
  sqcRYGate(q, -1.401146389398055, 7);
  sqcRZGate(q, -2.5771072634885566, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.07398909426223486, 0);
  sqcRZGate(q, 0.006268011060938328, 0);
  sqcRYGate(q, 1.4519392357266572, 1);
  sqcRZGate(q, 2.3857647043798162, 1);
  sqcRYGate(q, -2.1959908958776198, 2);
  sqcRZGate(q, 2.423434052292333, 2);
  sqcRYGate(q, 3.1237807212926922, 3);
  sqcRZGate(q, 1.572541470254425, 3);
  sqcRYGate(q, -3.0582459217569595, 4);
  sqcRZGate(q, -2.9163535040025117, 4);
  sqcRYGate(q, -3.104841242610462, 5);
  sqcRZGate(q, 2.3406892597219566, 5);
  sqcRYGate(q, 1.5708329637104415, 6);
  sqcRZGate(q, -3.109667276183109, 6);
  sqcRYGate(q, 0.10173271053964951, 7);
  sqcRZGate(q, 0.7684489408015569, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6822439261151334, 0);
  sqcRZGate(q, -2.6926309841303557, 0);
  sqcRYGate(q, -1.576422348170392, 1);
  sqcRZGate(q, 2.0212420010247945, 1);
  sqcRYGate(q, 1.5621909693507938, 2);
  sqcRZGate(q, 2.0189062562103377, 2);
  sqcRYGate(q, 2.151826143610867, 3);
  sqcRZGate(q, 0.4536328773255306, 3);
  sqcRYGate(q, 0.03837560641452694, 4);
  sqcRZGate(q, 0.22336590593386882, 4);
  sqcRYGate(q, 0.010763517371363386, 5);
  sqcRZGate(q, -1.8982376814718185, 5);
  sqcRYGate(q, -0.23781756879111876, 6);
  sqcRZGate(q, -2.7247058859502027, 6);
  sqcRYGate(q, 1.563087930964259, 7);
  sqcRZGate(q, 2.0196581351485046, 7);

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
