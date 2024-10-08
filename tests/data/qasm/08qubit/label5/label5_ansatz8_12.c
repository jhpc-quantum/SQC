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

  sqcRYGate(q, -1.9833574604631998, 0);
  sqcRYGate(q, -1.1340282328999947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3968108352558435, 0);
  sqcRYGate(q, 0.9976106164694727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8253497347880656, 2);
  sqcRYGate(q, -2.4179456828730452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7195205619035264, 2);
  sqcRYGate(q, 0.7077767970978915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0454120934688858, 4);
  sqcRYGate(q, 2.4877291041286047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.410636128432329, 4);
  sqcRYGate(q, 0.6273375207148613, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.005852515138179193, 6);
  sqcRYGate(q, -0.8432492107537692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0056522171247728, 6);
  sqcRYGate(q, 2.291581632038786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3844093867985725, 0);
  sqcRYGate(q, 2.59032721432305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.60869064639739, 0);
  sqcRYGate(q, -0.7229294672629973, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2352942396001296, 2);
  sqcRYGate(q, 2.4339837374912143, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5946799809401435, 2);
  sqcRYGate(q, -1.3300591517259006, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7576287822108148, 4);
  sqcRYGate(q, -0.1764516223648904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.06481166561565924, 4);
  sqcRYGate(q, -2.1685244826194134, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3751740907555199, 1);
  sqcRYGate(q, -2.8441216587660882, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0364300612843556, 1);
  sqcRYGate(q, -0.9301266041139771, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06629206894993102, 3);
  sqcRYGate(q, -3.003838666914576, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.588292999302963, 3);
  sqcRYGate(q, 1.4999330077624036, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.07565492421349714, 5);
  sqcRYGate(q, -3.0798266553124494, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8656125254682516, 5);
  sqcRYGate(q, -0.15222199630864997, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9832716588123147, 0);
  sqcRYGate(q, 0.858491718970004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3702060264473735, 0);
  sqcRYGate(q, -2.6844397151940362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7561778169128415, 2);
  sqcRYGate(q, -0.12076352894967388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.070912458347922, 2);
  sqcRYGate(q, -1.7429057683408233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0779594967006272, 4);
  sqcRYGate(q, -1.3233589999223938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8881782552096622, 4);
  sqcRYGate(q, -3.020955409479512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7833571983163607, 6);
  sqcRYGate(q, -1.807942533644317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1086919466491552, 6);
  sqcRYGate(q, -0.20881839153582682, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8990900421429107, 0);
  sqcRYGate(q, 1.0306940014090984, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.37680274975464123, 0);
  sqcRYGate(q, 1.569708901132703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1666973062975174, 2);
  sqcRYGate(q, -1.6690667830492592, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6455809842741873, 2);
  sqcRYGate(q, 2.436667520232723, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5447149370181124, 4);
  sqcRYGate(q, 1.8975027229917378, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4512820370345513, 4);
  sqcRYGate(q, 1.0133180036493046, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0170869521459602, 1);
  sqcRYGate(q, -2.447396911264348, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1941029126418705, 1);
  sqcRYGate(q, -0.5195912749510665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07622642847090852, 3);
  sqcRYGate(q, 2.528210318554599, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2256000693714997, 3);
  sqcRYGate(q, 2.503433159553776, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.18123422737759667, 5);
  sqcRYGate(q, 2.628391976417502, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4161782433356174, 5);
  sqcRYGate(q, -1.3423925183665941, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.045618324254646, 0);
  sqcRYGate(q, -2.508718567937314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.398464877069373, 0);
  sqcRYGate(q, -0.6802502656832611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6382558892592145, 2);
  sqcRYGate(q, -0.7882390735740932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07926622688434648, 2);
  sqcRYGate(q, 2.812282339333163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0371063665955846, 4);
  sqcRYGate(q, 1.0007447581322892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9322817540333606, 4);
  sqcRYGate(q, 0.9040710714493373, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6021681803030854, 6);
  sqcRYGate(q, 2.745372914550796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6145148837985488, 6);
  sqcRYGate(q, 1.1372226025777004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.806284414822296, 0);
  sqcRYGate(q, -2.8100622478580823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.37654380397229126, 0);
  sqcRYGate(q, 2.6227543498126704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17299251238995803, 2);
  sqcRYGate(q, -1.2366089979501165, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7465146130442079, 2);
  sqcRYGate(q, -2.4397890276165164, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0845184949381745, 4);
  sqcRYGate(q, -2.564643433574148, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4991211722402007, 4);
  sqcRYGate(q, 1.3192849508168705, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.15922534109360154, 1);
  sqcRYGate(q, -2.191125308978196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8444777725935557, 1);
  sqcRYGate(q, -1.4498719151738362, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.47875424518252374, 3);
  sqcRYGate(q, -1.9523655542359035, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4617969260947552, 3);
  sqcRYGate(q, -0.20304892215355372, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.061801061479846, 5);
  sqcRYGate(q, -2.4858870757097304, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.589010902763642, 5);
  sqcRYGate(q, -1.0254845913041493, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6759054673519636, 0);
  sqcRYGate(q, -0.3001220438195151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8069376979292429, 0);
  sqcRYGate(q, -0.3311893067992173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3822553922724135, 2);
  sqcRYGate(q, 0.9148235697753312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4129227971842269, 2);
  sqcRYGate(q, 0.2398752762207577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3762338218863448, 4);
  sqcRYGate(q, -0.2719178303641103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.665578666915449, 4);
  sqcRYGate(q, -0.3299892897945708, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7042523026831997, 6);
  sqcRYGate(q, -0.8886533478029793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1242453102007643, 6);
  sqcRYGate(q, 1.9718143370240986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8131328751298392, 0);
  sqcRYGate(q, 1.5407190335622047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.152914116070611, 0);
  sqcRYGate(q, -2.196291049985856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.787239086819615, 2);
  sqcRYGate(q, -2.9612659554942944, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2703338638919338, 2);
  sqcRYGate(q, -2.0922341565033014, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8946137915370995, 4);
  sqcRYGate(q, -1.1389747035114024, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8780366554626977, 4);
  sqcRYGate(q, -1.101153117237573, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.956982179859221, 1);
  sqcRYGate(q, 1.3446465941807182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8963620528361431, 1);
  sqcRYGate(q, 0.2589449967951376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5801335508447942, 3);
  sqcRYGate(q, -0.010954649076156148, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.15271316504841437, 3);
  sqcRYGate(q, -3.053928931092473, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.674073314777673, 5);
  sqcRYGate(q, -2.258469212051863, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.234456038879281, 5);
  sqcRYGate(q, -1.3333514959397106, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9482573588211105, 0);
  sqcRYGate(q, 1.4042298723347422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.022324658490546705, 0);
  sqcRYGate(q, -1.5496795903063076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9882262133034057, 2);
  sqcRYGate(q, -0.21140206840947576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9811795421500162, 2);
  sqcRYGate(q, 2.9662087925032945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2726712629711603, 4);
  sqcRYGate(q, -0.7530869523981902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2338384039840946, 4);
  sqcRYGate(q, -3.009523044117001, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4685079743626641, 6);
  sqcRYGate(q, -0.8540866930926985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4785984017190614, 6);
  sqcRYGate(q, 1.0280188671324053, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.705444503923376, 0);
  sqcRYGate(q, 1.9271150838134359, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3984671519639087, 0);
  sqcRYGate(q, -1.7295825304921515, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5219397823933063, 2);
  sqcRYGate(q, 0.8853377731925208, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0321427254222186, 2);
  sqcRYGate(q, -1.4127050599578643, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.48740524417158543, 4);
  sqcRYGate(q, 0.35506543122232515, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6393143158287622, 4);
  sqcRYGate(q, -0.683114577423276, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.3253461030503652, 1);
  sqcRYGate(q, 0.1831062974874521, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1093271534683415, 1);
  sqcRYGate(q, 1.0929099223348508, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2830753354529927, 3);
  sqcRYGate(q, -1.5327425546529758, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.10868774927875315, 3);
  sqcRYGate(q, -0.18989028389315799, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8051771332316988, 5);
  sqcRYGate(q, 1.6470718242208502, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.630911145871483, 5);
  sqcRYGate(q, 2.220311099205155, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.107769235426289, 0);
  sqcRYGate(q, 0.46944309298105563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.110346529562213, 0);
  sqcRYGate(q, 1.6714269605454324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1045528311792694, 2);
  sqcRYGate(q, 2.9994250013463213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3511735303195858, 2);
  sqcRYGate(q, 1.44135374254543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2213339940720616, 4);
  sqcRYGate(q, -2.684290126727835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3197037758998658, 4);
  sqcRYGate(q, 2.072034992501352, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.252158418906782, 6);
  sqcRYGate(q, 2.628076792591483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.666668336835781, 6);
  sqcRYGate(q, 2.0807813301486355, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.011076615713228, 0);
  sqcRYGate(q, 0.49531474408681175, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4836895579396305, 0);
  sqcRYGate(q, -0.816999647498525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.04704373390414267, 2);
  sqcRYGate(q, 1.066771179772065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.32880199710950403, 2);
  sqcRYGate(q, -2.3884027213278385, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.447523561237564, 4);
  sqcRYGate(q, 2.129583301170662, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.905689737507692, 4);
  sqcRYGate(q, -0.8544966424076188, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5858508575543262, 1);
  sqcRYGate(q, 2.731822749189248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3296349786786044, 1);
  sqcRYGate(q, 0.7416226608243255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.098265714497534, 3);
  sqcRYGate(q, -0.3353684003323149, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.345901904742939, 3);
  sqcRYGate(q, -2.44281729148227, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3035203639946102, 5);
  sqcRYGate(q, -2.9101513808960267, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8217727605146727, 5);
  sqcRYGate(q, 1.0166111343504647, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.2672674315169079, 0);
  sqcRYGate(q, 1.2071542939585098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1919749705670677, 0);
  sqcRYGate(q, 1.1409432141930547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44992558392845977, 2);
  sqcRYGate(q, -0.5445071050900133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3869877999147144, 2);
  sqcRYGate(q, 2.6415385783319394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.88614063022521, 4);
  sqcRYGate(q, -1.4027977976240331, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4376156793164476, 4);
  sqcRYGate(q, 1.3055704875356007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8174325087899758, 6);
  sqcRYGate(q, -2.5073454386179224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3044608859103355, 6);
  sqcRYGate(q, -1.4765286678747287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8138138040062799, 0);
  sqcRYGate(q, -1.2742328795949955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2453611653664565, 0);
  sqcRYGate(q, 2.3459911726702045, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0199467966344136, 2);
  sqcRYGate(q, 2.0666330652450204, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6742546830493064, 2);
  sqcRYGate(q, 1.954661290137469, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1943488553425228, 4);
  sqcRYGate(q, 1.796736359191412, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3434001497856607, 4);
  sqcRYGate(q, -0.3939482423989493, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8464876327664065, 1);
  sqcRYGate(q, -1.9392440702578577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4235729461420035, 1);
  sqcRYGate(q, -0.409343358802003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5544119810144528, 3);
  sqcRYGate(q, -2.1419959998797733, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2569144986478817, 3);
  sqcRYGate(q, 0.19345803834762254, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3357565553303385, 5);
  sqcRYGate(q, -2.51968073021159, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7552474640398215, 5);
  sqcRYGate(q, -1.7885799650137413, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4455025100776995, 0);
  sqcRYGate(q, 3.022554226768037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7419817963682047, 0);
  sqcRYGate(q, -0.7935926029074836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.900622878390142, 2);
  sqcRYGate(q, 1.6218834182111772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5985591081907708, 2);
  sqcRYGate(q, 2.535911953312995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2928816417314701, 4);
  sqcRYGate(q, 3.032741267556919, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.19961590674566, 4);
  sqcRYGate(q, -1.3985933135431028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.139797167093863, 6);
  sqcRYGate(q, 2.0189888041096236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6716642910379966, 6);
  sqcRYGate(q, 0.5096753912286616, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.101153100683578, 0);
  sqcRYGate(q, 0.8817053074211847, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.663952009664527, 0);
  sqcRYGate(q, -1.1697795300323206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2212044849168153, 2);
  sqcRYGate(q, -1.085468602642548, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.786059647912175, 2);
  sqcRYGate(q, 3.0927151039397427, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5198312542843375, 4);
  sqcRYGate(q, -2.262204122773346, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5003375489347223, 4);
  sqcRYGate(q, 2.3565352490410207, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9246611095989308, 1);
  sqcRYGate(q, -1.6628926063167617, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0445430286745925, 1);
  sqcRYGate(q, 2.8428504615167878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.359800492185121, 3);
  sqcRYGate(q, -2.7439588709414595, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8419347319539537, 3);
  sqcRYGate(q, 2.865219620185128, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9430234937131519, 5);
  sqcRYGate(q, 2.1163622290465613, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7636041796265074, 5);
  sqcRYGate(q, 1.3406108631456184, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0271577738741975, 0);
  sqcRYGate(q, 1.1813825749454132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.508925697465121, 0);
  sqcRYGate(q, 2.4456143823854553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31078747067400236, 2);
  sqcRYGate(q, -1.4860846126700933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6490427767906422, 2);
  sqcRYGate(q, 1.9264567080339736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8897117055654467, 4);
  sqcRYGate(q, 2.2258700845440487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6249311988879374, 4);
  sqcRYGate(q, 0.591983361039256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05691414915603322, 6);
  sqcRYGate(q, -0.5585079071824518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4280543316827599, 6);
  sqcRYGate(q, -0.5141805356500617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.071160125228762, 0);
  sqcRYGate(q, -1.8619121272937016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3203636054068646, 0);
  sqcRYGate(q, -2.998404108921092, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.70092779614229, 2);
  sqcRYGate(q, -1.5811835898519933, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6520775120923377, 2);
  sqcRYGate(q, 2.441013761818661, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.4423517499513512, 4);
  sqcRYGate(q, 3.01814400574357, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6775928807522584, 4);
  sqcRYGate(q, -1.6758839204744886, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0707779599801013, 1);
  sqcRYGate(q, 0.20358211239263288, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0296261419383406, 1);
  sqcRYGate(q, -1.1840281552048342, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1691403406496574, 3);
  sqcRYGate(q, 0.8356941032714681, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8682476438986848, 3);
  sqcRYGate(q, -0.3487537440325097, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6803626620052534, 5);
  sqcRYGate(q, 0.24274016771900372, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.26585930682589076, 5);
  sqcRYGate(q, 0.025725297006691683, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.220565033704096, 0);
  sqcRYGate(q, 0.6296736651875992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4441757947649023, 0);
  sqcRYGate(q, 1.3975390664204372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9234411274638528, 2);
  sqcRYGate(q, -0.6458036761551629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2969166604596745, 2);
  sqcRYGate(q, -0.18551767178629483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.565593830677465, 4);
  sqcRYGate(q, -2.018602799507206, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0701565891328713, 4);
  sqcRYGate(q, -0.7124995016060325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.009133034177890131, 6);
  sqcRYGate(q, 1.094623736481748, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.555882933202616, 6);
  sqcRYGate(q, -2.9755549830255656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6666798818395243, 0);
  sqcRYGate(q, 2.624357475342382, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.011384167899145, 0);
  sqcRYGate(q, -2.210269611761267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44167876665960104, 2);
  sqcRYGate(q, 0.27614068980738565, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.1472000834993666, 2);
  sqcRYGate(q, -1.6313241214723737, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0258273791912256, 4);
  sqcRYGate(q, -2.887183720405091, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5000890611823916, 4);
  sqcRYGate(q, 2.950539508299793, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.411381816828186, 1);
  sqcRYGate(q, -2.2856140337013864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4056045432671214, 1);
  sqcRYGate(q, 2.3686558128721567, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.858886462585207, 3);
  sqcRYGate(q, -0.7826850314196493, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5308145213080104, 3);
  sqcRYGate(q, -1.9548197306780386, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.20356162565332, 5);
  sqcRYGate(q, -2.769997688183711, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4988286885177446, 5);
  sqcRYGate(q, -2.0272532930586915, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.540036200270039, 0);
  sqcRYGate(q, -0.9036306669593855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12146199159176785, 0);
  sqcRYGate(q, -2.864031629738172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7355625581739567, 2);
  sqcRYGate(q, 0.8564489255644668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.34210355891815636, 2);
  sqcRYGate(q, -0.9802938478630124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2618343646842876, 4);
  sqcRYGate(q, 0.7959020548043363, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.138398321331559, 4);
  sqcRYGate(q, 0.06443221080260948, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9537893132031714, 6);
  sqcRYGate(q, 1.918210191921138, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1871629233883183, 6);
  sqcRYGate(q, 2.196150939429592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.446851189718463, 0);
  sqcRYGate(q, 1.2242163350258206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4551306457197275, 0);
  sqcRYGate(q, 0.790918499278249, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.573133778744781, 2);
  sqcRYGate(q, 0.9910794365012183, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5910412732915242, 2);
  sqcRYGate(q, 2.0861596973735974, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9590103747485914, 4);
  sqcRYGate(q, 1.7107916382969819, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6477210096159745, 4);
  sqcRYGate(q, 2.267703033693974, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9652502162626162, 1);
  sqcRYGate(q, 2.5933741184413583, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14727206837281237, 1);
  sqcRYGate(q, -1.0113520123975999, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.336800254488466, 3);
  sqcRYGate(q, -2.8565695748317306, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.166419887408928, 3);
  sqcRYGate(q, 2.4192565058648783, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6321332430369848, 5);
  sqcRYGate(q, -2.4846349970286217, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3938484829963346, 5);
  sqcRYGate(q, 1.4102953715053204, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5414659228399387, 0);
  sqcRYGate(q, 1.0031094942708605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0359701619650137, 0);
  sqcRYGate(q, 0.030198167527679672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0573407886903197, 2);
  sqcRYGate(q, 0.2302695981280225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2074144190731981, 2);
  sqcRYGate(q, 3.008568485868931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5880707561004517, 4);
  sqcRYGate(q, 0.2482570133673718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0618423299390658, 4);
  sqcRYGate(q, 2.9234014003928235, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.42120210156947, 6);
  sqcRYGate(q, -1.8842406158901834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7004083320545389, 6);
  sqcRYGate(q, -2.625319798751288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9347334151348035, 0);
  sqcRYGate(q, -2.687823009160636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0862469749143147, 0);
  sqcRYGate(q, 1.161056710150329, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.627220367102379, 2);
  sqcRYGate(q, 1.0034630922818772, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5066467510252615, 2);
  sqcRYGate(q, 1.2204271879419988, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3054665172536324, 4);
  sqcRYGate(q, -2.865036269782803, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5707667156529896, 4);
  sqcRYGate(q, 0.9235334102635377, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7133632136000199, 1);
  sqcRYGate(q, -0.607125665501278, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7941251654991428, 1);
  sqcRYGate(q, 1.8562194668212944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.011377303026202, 3);
  sqcRYGate(q, -2.9890517110329404, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5826748401411136, 3);
  sqcRYGate(q, -0.30900163443990714, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9909600976807116, 5);
  sqcRYGate(q, 3.0756539961668534, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5119878636860866, 5);
  sqcRYGate(q, 2.378933816848313, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2477317202884555, 0);
  sqcRYGate(q, -2.2369418426529437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5044956857545513, 0);
  sqcRYGate(q, -2.539757689443985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.878108183533094, 2);
  sqcRYGate(q, 2.670273064774785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.423880479000191, 2);
  sqcRYGate(q, -0.5316235743254261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9605985677163078, 4);
  sqcRYGate(q, -2.5828310529775256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6756886788119665, 4);
  sqcRYGate(q, -2.608464312068859, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.524664539208403, 6);
  sqcRYGate(q, 0.4732799033516733, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.773939955103053, 6);
  sqcRYGate(q, -1.979714903824969, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8875896875405066, 0);
  sqcRYGate(q, 0.7311910841974631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3753762138880642, 0);
  sqcRYGate(q, -1.794892809610524, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0287245198927666, 2);
  sqcRYGate(q, -1.2553713297686764, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.234599912523394, 2);
  sqcRYGate(q, -3.099047171717179, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0493674817695826, 4);
  sqcRYGate(q, 0.55558391332464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3475538547241186, 4);
  sqcRYGate(q, -1.7452985725738168, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3434135227701542, 1);
  sqcRYGate(q, -3.0152710331101376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7872324393119825, 1);
  sqcRYGate(q, -2.3558322138731866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9556583945663535, 3);
  sqcRYGate(q, 0.3435020595688476, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.163683279160984, 3);
  sqcRYGate(q, -1.813886653116088, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3908748436326697, 5);
  sqcRYGate(q, 0.3978323966663249, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.818719371661766, 5);
  sqcRYGate(q, -3.138038300480976, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.0689442426362934, 0);
  sqcRYGate(q, 2.824991229149683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.046740057118982, 0);
  sqcRYGate(q, -1.5958199931391661, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0641794245448806, 2);
  sqcRYGate(q, 2.172928928637754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.565267710402716, 2);
  sqcRYGate(q, -0.9538650512794202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.299872684439751, 4);
  sqcRYGate(q, 0.6915876902240088, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.45872146764287197, 4);
  sqcRYGate(q, 2.23087817064254, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.428461730071075, 6);
  sqcRYGate(q, 0.35508969840228455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.21407410693403328, 6);
  sqcRYGate(q, -1.466597926765506, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6600523122953086, 0);
  sqcRYGate(q, 0.23441115550468972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4001589254149207, 0);
  sqcRYGate(q, 2.5158638799610236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1654411725776648, 2);
  sqcRYGate(q, -0.04256199515591241, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3786977279311363, 2);
  sqcRYGate(q, -0.8119268704153235, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.8321389662376992, 4);
  sqcRYGate(q, 1.9325052390428767, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1382528509073646, 4);
  sqcRYGate(q, -0.32854529789976716, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8629890798268045, 1);
  sqcRYGate(q, 0.8990289269401707, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1902431550426766, 1);
  sqcRYGate(q, 1.0238123184648826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8368766374872232, 3);
  sqcRYGate(q, 2.7389624120216642, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.696974934993246, 3);
  sqcRYGate(q, -2.4547412294983912, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.14564501450741, 5);
  sqcRYGate(q, 2.949228471704729, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1938633007829669, 5);
  sqcRYGate(q, -0.6812098737857192, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.726554155530668, 0);
  sqcRYGate(q, 0.4498614494343808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.364531457679148, 0);
  sqcRYGate(q, 2.0024158904294396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9312528545533638, 2);
  sqcRYGate(q, 2.185018275102641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3077028753122777, 2);
  sqcRYGate(q, -0.8806451649640445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.029854898063280295, 4);
  sqcRYGate(q, 0.8671107936328036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.794522417297899, 4);
  sqcRYGate(q, -2.312305188544814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6241680939662295, 6);
  sqcRYGate(q, 0.49632031452040287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9385149434674631, 6);
  sqcRYGate(q, -0.5047839320077898, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0854904360755384, 0);
  sqcRYGate(q, -1.3606188001300321, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.204651678186677, 0);
  sqcRYGate(q, 0.7424005797835801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8880718293653, 2);
  sqcRYGate(q, -0.9588644109581401, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1009110262768997, 2);
  sqcRYGate(q, 1.2530619753190597, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.86770669406201, 4);
  sqcRYGate(q, 0.9170764834878611, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6868480277993314, 4);
  sqcRYGate(q, -0.01717652586227616, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6669550965416544, 1);
  sqcRYGate(q, -2.6593178475740733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.138622647888366, 1);
  sqcRYGate(q, -2.8977393491511565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4491621807622588, 3);
  sqcRYGate(q, -1.2089056203032467, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4709536471872875, 3);
  sqcRYGate(q, 1.6520509310060367, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.875090236191901, 5);
  sqcRYGate(q, -1.1375810696891833, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8881798221261965, 5);
  sqcRYGate(q, -0.630651933023732, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0300701971588935, 0);
  sqcRYGate(q, -2.1750663265320798, 1);
  sqcRYGate(q, 1.9485164642934372, 2);
  sqcRYGate(q, -3.0840590236974115, 3);
  sqcRYGate(q, -2.822367784972212, 4);
  sqcRYGate(q, 1.403267282177936, 5);
  sqcRYGate(q, 0.5754095843687894, 6);
  sqcRYGate(q, 1.25766799034123, 7);

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
