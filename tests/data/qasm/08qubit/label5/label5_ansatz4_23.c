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

  sqcRYGate(q, -1.6149066010374975, 0);
  sqcRZGate(q, -2.384749953778225, 0);
  sqcRYGate(q, 2.2560833226413237, 1);
  sqcRZGate(q, -2.7611038076119807, 1);
  sqcRYGate(q, -2.77866017426572, 2);
  sqcRZGate(q, 2.339712826329626, 2);
  sqcRYGate(q, -1.795640722678308, 3);
  sqcRZGate(q, -1.4139649969642116, 3);
  sqcRYGate(q, -1.5189225959459642, 4);
  sqcRZGate(q, -2.8744495750097765, 4);
  sqcRYGate(q, -2.3922626046791944, 5);
  sqcRZGate(q, -1.852032592979727, 5);
  sqcRYGate(q, -2.526323186778741, 6);
  sqcRZGate(q, 1.0809438448776227, 6);
  sqcRYGate(q, -0.5200360975339889, 7);
  sqcRZGate(q, -2.7173635104105855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7446250562712233, 0);
  sqcRZGate(q, 0.8489700011338411, 0);
  sqcRYGate(q, -1.2838081083029833, 1);
  sqcRZGate(q, -0.024544178325077517, 1);
  sqcRYGate(q, -1.7050852966508636, 2);
  sqcRZGate(q, -1.2727238705848356, 2);
  sqcRYGate(q, -2.891092150161235, 3);
  sqcRZGate(q, -1.2337204030687832, 3);
  sqcRYGate(q, -2.8050612596376108, 4);
  sqcRZGate(q, 1.3284972423868497, 4);
  sqcRYGate(q, 2.2691613283030407, 5);
  sqcRZGate(q, -0.9170285878305799, 5);
  sqcRYGate(q, -0.6184133849426248, 6);
  sqcRZGate(q, 1.3686868027853913, 6);
  sqcRYGate(q, 1.8337413685231114, 7);
  sqcRZGate(q, 0.5341980920785758, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.28846954333938024, 0);
  sqcRZGate(q, -2.836497742779823, 0);
  sqcRYGate(q, 0.31974843235464867, 1);
  sqcRZGate(q, 1.7635223822033355, 1);
  sqcRYGate(q, -0.7892808626173844, 2);
  sqcRZGate(q, 1.8155260775948379, 2);
  sqcRYGate(q, -1.8319346546471929, 3);
  sqcRZGate(q, 1.7736470031868694, 3);
  sqcRYGate(q, 0.4203016553619463, 4);
  sqcRZGate(q, -3.094713179615337, 4);
  sqcRYGate(q, -1.4545103605403098, 5);
  sqcRZGate(q, 2.951677462889088, 5);
  sqcRYGate(q, -1.1581121268896446, 6);
  sqcRZGate(q, 0.8835150556101734, 6);
  sqcRYGate(q, -1.6642374698077034, 7);
  sqcRZGate(q, 3.0375273662280784, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.38151594877540507, 0);
  sqcRZGate(q, 2.4243582300606143, 0);
  sqcRYGate(q, 0.487854844023726, 1);
  sqcRZGate(q, -2.8715243829059593, 1);
  sqcRYGate(q, -0.620246011289125, 2);
  sqcRZGate(q, -1.3817929384308645, 2);
  sqcRYGate(q, -1.2014264214390966, 3);
  sqcRZGate(q, -3.1009461634798794, 3);
  sqcRYGate(q, -0.6993384248433232, 4);
  sqcRZGate(q, 0.318099751630031, 4);
  sqcRYGate(q, -2.2314470723774122, 5);
  sqcRZGate(q, -2.199613295779173, 5);
  sqcRYGate(q, -0.6270623977476228, 6);
  sqcRZGate(q, -0.8961040406471205, 6);
  sqcRYGate(q, -0.553848578702962, 7);
  sqcRZGate(q, 2.653072327435329, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.04710271105252, 0);
  sqcRZGate(q, 1.504732268743041, 0);
  sqcRYGate(q, 2.591071228961439, 1);
  sqcRZGate(q, 0.24535781412736224, 1);
  sqcRYGate(q, -2.242251264080343, 2);
  sqcRZGate(q, 0.7563773373945101, 2);
  sqcRYGate(q, -2.809129201272404, 3);
  sqcRZGate(q, -0.7147982954966556, 3);
  sqcRYGate(q, 1.427749290425883, 4);
  sqcRZGate(q, 0.5660673209647422, 4);
  sqcRYGate(q, 1.973376662469076, 5);
  sqcRZGate(q, -2.617531133817857, 5);
  sqcRYGate(q, -2.648830813420238, 6);
  sqcRZGate(q, 0.5920245981979209, 6);
  sqcRYGate(q, -0.6640656702657796, 7);
  sqcRZGate(q, -0.01057248849124822, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9125017825758186, 0);
  sqcRZGate(q, 1.2616617922404265, 0);
  sqcRYGate(q, 1.1380485184979197, 1);
  sqcRZGate(q, 1.9760747123177103, 1);
  sqcRYGate(q, 1.3960159093947917, 2);
  sqcRZGate(q, 0.5256955899167943, 2);
  sqcRYGate(q, -0.17268423953819312, 3);
  sqcRZGate(q, -3.0831091585914336, 3);
  sqcRYGate(q, -0.6129847606444835, 4);
  sqcRZGate(q, -0.07075291530031444, 4);
  sqcRYGate(q, 2.165848548584006, 5);
  sqcRZGate(q, 1.367248815292695, 5);
  sqcRYGate(q, -2.323548837288438, 6);
  sqcRZGate(q, 0.2332441104453549, 6);
  sqcRYGate(q, 2.392421942779807, 7);
  sqcRZGate(q, -1.3459347508437354, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3710166782774253, 0);
  sqcRZGate(q, -1.7720443682932405, 0);
  sqcRYGate(q, -1.4770208196593808, 1);
  sqcRZGate(q, -0.5263487832276716, 1);
  sqcRYGate(q, 1.74050743226283, 2);
  sqcRZGate(q, 0.9296157397258403, 2);
  sqcRYGate(q, 0.8307675850698706, 3);
  sqcRZGate(q, -1.4788726264005767, 3);
  sqcRYGate(q, -2.5110043474855384, 4);
  sqcRZGate(q, -2.333595893592079, 4);
  sqcRYGate(q, -1.2717521237685412, 5);
  sqcRZGate(q, 2.3460200199369345, 5);
  sqcRYGate(q, -2.566739091738723, 6);
  sqcRZGate(q, -1.2107485402529818, 6);
  sqcRYGate(q, -1.5220530211516266, 7);
  sqcRZGate(q, -1.7315274188128846, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9610767017832242, 0);
  sqcRZGate(q, 0.8695674072910426, 0);
  sqcRYGate(q, -1.0549328612734532, 1);
  sqcRZGate(q, -1.9531931005989147, 1);
  sqcRYGate(q, 0.20762150223961484, 2);
  sqcRZGate(q, 0.4752644302393109, 2);
  sqcRYGate(q, 0.7049439537018785, 3);
  sqcRZGate(q, -1.4333122396803015, 3);
  sqcRYGate(q, -1.6334500671992933, 4);
  sqcRZGate(q, -1.0079092807698797, 4);
  sqcRYGate(q, 1.5583731796801974, 5);
  sqcRZGate(q, -0.8417439090989918, 5);
  sqcRYGate(q, -0.6768289681540898, 6);
  sqcRZGate(q, -1.2643635162864602, 6);
  sqcRYGate(q, 0.5770757569815217, 7);
  sqcRZGate(q, -1.412382449266774, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5806280176699263, 0);
  sqcRZGate(q, -2.3763124149106267, 0);
  sqcRYGate(q, 1.4452418019989726, 1);
  sqcRZGate(q, 3.0870795240824087, 1);
  sqcRYGate(q, -1.1003210640481382, 2);
  sqcRZGate(q, -2.6293429264220096, 2);
  sqcRYGate(q, -0.2950699283056447, 3);
  sqcRZGate(q, -2.2454323108478085, 3);
  sqcRYGate(q, 2.00680319982129, 4);
  sqcRZGate(q, -2.0529681948774665, 4);
  sqcRYGate(q, -0.5803166629896881, 5);
  sqcRZGate(q, -2.722531846116596, 5);
  sqcRYGate(q, -1.2834849198926097, 6);
  sqcRZGate(q, -1.6597953223794557, 6);
  sqcRYGate(q, 1.8889323965508231, 7);
  sqcRZGate(q, -2.438796278121521, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9878042742251463, 0);
  sqcRZGate(q, -0.7834500647215071, 0);
  sqcRYGate(q, -2.3827796139927773, 1);
  sqcRZGate(q, -0.877835614225246, 1);
  sqcRYGate(q, -1.1678465885360563, 2);
  sqcRZGate(q, -1.9750693529454388, 2);
  sqcRYGate(q, -2.4390096647144124, 3);
  sqcRZGate(q, 1.5376419654203524, 3);
  sqcRYGate(q, 0.556315592656186, 4);
  sqcRZGate(q, -2.0202209599605694, 4);
  sqcRYGate(q, -1.9058538031621284, 5);
  sqcRZGate(q, 1.2087071921965937, 5);
  sqcRYGate(q, -2.5692013284017823, 6);
  sqcRZGate(q, 1.1230898921791728, 6);
  sqcRYGate(q, -2.201659208962495, 7);
  sqcRZGate(q, -2.8742177601939893, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.510248777952527, 0);
  sqcRZGate(q, 2.6817484549208257, 0);
  sqcRYGate(q, 2.4156033305372553, 1);
  sqcRZGate(q, 1.2344620073899193, 1);
  sqcRYGate(q, -1.177158397707493, 2);
  sqcRZGate(q, 1.9841837605056523, 2);
  sqcRYGate(q, 1.7995289183986811, 3);
  sqcRZGate(q, -2.816933587522553, 3);
  sqcRYGate(q, 0.706818072701875, 4);
  sqcRZGate(q, -0.11055166073281596, 4);
  sqcRYGate(q, 2.62613675957577, 5);
  sqcRZGate(q, 0.45385663797800035, 5);
  sqcRYGate(q, -1.5843473471666634, 6);
  sqcRZGate(q, -1.7100286190167096, 6);
  sqcRYGate(q, -2.874520085039018, 7);
  sqcRZGate(q, 0.5934248397684999, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5200502701218839, 0);
  sqcRZGate(q, -1.8240592500880055, 0);
  sqcRYGate(q, -1.5200253975405547, 1);
  sqcRZGate(q, 0.08267988376371699, 1);
  sqcRYGate(q, 0.42203995474279754, 2);
  sqcRZGate(q, -2.8873919289485794, 2);
  sqcRYGate(q, 1.2358742066288566, 3);
  sqcRZGate(q, -0.9428274834791589, 3);
  sqcRYGate(q, 1.9692901882550582, 4);
  sqcRZGate(q, -0.31207639174949353, 4);
  sqcRYGate(q, -2.9131160523954436, 5);
  sqcRZGate(q, 1.28865004683862, 5);
  sqcRYGate(q, -1.576542892209969, 6);
  sqcRZGate(q, -1.6989411389689115, 6);
  sqcRYGate(q, 0.5629147664918441, 7);
  sqcRZGate(q, -1.078820963157084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7043276222979313, 0);
  sqcRZGate(q, 3.054827570974975, 0);
  sqcRYGate(q, -0.7687975713694742, 1);
  sqcRZGate(q, -1.5342759713363412, 1);
  sqcRYGate(q, -2.406298554505203, 2);
  sqcRZGate(q, 2.3144665722979783, 2);
  sqcRYGate(q, -0.9494914511827046, 3);
  sqcRZGate(q, 2.183921637399044, 3);
  sqcRYGate(q, -1.0697183956753573, 4);
  sqcRZGate(q, -0.5828997689815028, 4);
  sqcRYGate(q, -2.834028900959282, 5);
  sqcRZGate(q, 2.77723905288243, 5);
  sqcRYGate(q, -0.04398903249229758, 6);
  sqcRZGate(q, -3.112310756921101, 6);
  sqcRYGate(q, -1.0404553364539741, 7);
  sqcRZGate(q, -0.694460763947145, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.48207067885503896, 0);
  sqcRZGate(q, -1.0752297971449698, 0);
  sqcRYGate(q, 1.8272137769884067, 1);
  sqcRZGate(q, -2.858109883150191, 1);
  sqcRYGate(q, -2.7210730270112657, 2);
  sqcRZGate(q, 0.17032963165822237, 2);
  sqcRYGate(q, -2.8672049541360902, 3);
  sqcRZGate(q, 1.37405018550743, 3);
  sqcRYGate(q, -3.0755129036653077, 4);
  sqcRZGate(q, -2.453840778246091, 4);
  sqcRYGate(q, 2.011809781482593, 5);
  sqcRZGate(q, 2.378469735705057, 5);
  sqcRYGate(q, 2.674798235658493, 6);
  sqcRZGate(q, -0.7460015257250694, 6);
  sqcRYGate(q, 3.0829912939341337, 7);
  sqcRZGate(q, 2.6183054207708105, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9281839643823586, 0);
  sqcRZGate(q, 2.652903418592684, 0);
  sqcRYGate(q, 1.2631980690507403, 1);
  sqcRZGate(q, -0.45750145199882447, 1);
  sqcRYGate(q, -0.8637377608912562, 2);
  sqcRZGate(q, -0.8097845337172516, 2);
  sqcRYGate(q, 2.0595563480129897, 3);
  sqcRZGate(q, -0.23160418830300042, 3);
  sqcRYGate(q, 1.821460222883282, 4);
  sqcRZGate(q, 0.08117385786252518, 4);
  sqcRYGate(q, 0.3696909222042458, 5);
  sqcRZGate(q, -2.069353125470682, 5);
  sqcRYGate(q, -1.3888393530608036, 6);
  sqcRZGate(q, 1.2285478951224542, 6);
  sqcRYGate(q, -2.232572463425259, 7);
  sqcRZGate(q, -0.4768048405487395, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4074644364742563, 0);
  sqcRZGate(q, -2.1527693692344334, 0);
  sqcRYGate(q, -0.2994716039910671, 1);
  sqcRZGate(q, 1.121683979990545, 1);
  sqcRYGate(q, -2.2609395097442344, 2);
  sqcRZGate(q, 2.1517194006409044, 2);
  sqcRYGate(q, -2.0282211832637635, 3);
  sqcRZGate(q, 0.6653964084987766, 3);
  sqcRYGate(q, 2.1476488578591737, 4);
  sqcRZGate(q, 0.3947561120549281, 4);
  sqcRYGate(q, 0.8352861206234291, 5);
  sqcRZGate(q, -0.11926916922101814, 5);
  sqcRYGate(q, -0.3667482618417722, 6);
  sqcRZGate(q, 1.870932797331212, 6);
  sqcRYGate(q, -1.0544452361795764, 7);
  sqcRZGate(q, -0.3222585878855416, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3517622332839405, 0);
  sqcRZGate(q, -2.6865674842050176, 0);
  sqcRYGate(q, -3.009012391114168, 1);
  sqcRZGate(q, 0.7764612726900232, 1);
  sqcRYGate(q, -1.7969228480629773, 2);
  sqcRZGate(q, -0.9060804078829205, 2);
  sqcRYGate(q, 1.386738403481269, 3);
  sqcRZGate(q, 1.232273876633699, 3);
  sqcRYGate(q, 2.6297889975083226, 4);
  sqcRZGate(q, 1.9894469632343574, 4);
  sqcRYGate(q, -1.447855751747472, 5);
  sqcRZGate(q, 1.9592717873963854, 5);
  sqcRYGate(q, 2.320851597242066, 6);
  sqcRZGate(q, -1.750719083570881, 6);
  sqcRYGate(q, 0.9661472262380099, 7);
  sqcRZGate(q, 2.344616372346287, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5375937277361995, 0);
  sqcRZGate(q, 2.1203417910167115, 0);
  sqcRYGate(q, -2.1186141405505836, 1);
  sqcRZGate(q, -1.8789314119194838, 1);
  sqcRYGate(q, 1.139552841230876, 2);
  sqcRZGate(q, -0.13598573123590452, 2);
  sqcRYGate(q, 1.4610807787383706, 3);
  sqcRZGate(q, 1.8236788105430122, 3);
  sqcRYGate(q, -1.3326191218209316, 4);
  sqcRZGate(q, -1.5770658170528769, 4);
  sqcRYGate(q, 0.99176234627918, 5);
  sqcRZGate(q, -2.786005783656728, 5);
  sqcRYGate(q, 2.016436871113495, 6);
  sqcRZGate(q, 1.8341257782511218, 6);
  sqcRYGate(q, 2.1226681014064717, 7);
  sqcRZGate(q, 0.32245567933116526, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8969290811070385, 0);
  sqcRZGate(q, -0.664627488459481, 0);
  sqcRYGate(q, 2.2418457478018468, 1);
  sqcRZGate(q, 2.838506842912774, 1);
  sqcRYGate(q, 1.477470847948748, 2);
  sqcRZGate(q, -0.8607654069613792, 2);
  sqcRYGate(q, -1.9008106626828773, 3);
  sqcRZGate(q, 0.2246600524573264, 3);
  sqcRYGate(q, 1.506835119493184, 4);
  sqcRZGate(q, 2.380633865363845, 4);
  sqcRYGate(q, 1.912430353893377, 5);
  sqcRZGate(q, 2.80616514587878, 5);
  sqcRYGate(q, -0.21249384610451924, 6);
  sqcRZGate(q, -2.273949583118215, 6);
  sqcRYGate(q, -1.4908670439770006, 7);
  sqcRZGate(q, 1.9107071081464084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8016685053299633, 0);
  sqcRZGate(q, 0.5399458077877871, 0);
  sqcRYGate(q, -2.634655392379904, 1);
  sqcRZGate(q, -1.728365087363433, 1);
  sqcRYGate(q, -2.6580021325216396, 2);
  sqcRZGate(q, 0.802919245438278, 2);
  sqcRYGate(q, 1.8853758618108654, 3);
  sqcRZGate(q, 1.4230800717453356, 3);
  sqcRYGate(q, 0.39620568006628576, 4);
  sqcRZGate(q, -0.08849170040542198, 4);
  sqcRYGate(q, -1.799006770622438, 5);
  sqcRZGate(q, 2.9077956901864574, 5);
  sqcRYGate(q, -2.216831659201224, 6);
  sqcRZGate(q, 0.39590695774657575, 6);
  sqcRYGate(q, 0.5208480814764007, 7);
  sqcRZGate(q, 2.6304559119197153, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4096694370775324, 0);
  sqcRZGate(q, -1.914380033466025, 0);
  sqcRYGate(q, -0.3027373499184547, 1);
  sqcRZGate(q, -0.711409376935852, 1);
  sqcRYGate(q, 0.4573663133089019, 2);
  sqcRZGate(q, -2.861346000453696, 2);
  sqcRYGate(q, 2.4414687622782956, 3);
  sqcRZGate(q, 1.4861325925705875, 3);
  sqcRYGate(q, 0.22959287397281525, 4);
  sqcRZGate(q, -1.7736337313758455, 4);
  sqcRYGate(q, 1.2588785420089597, 5);
  sqcRZGate(q, -1.1191594515351566, 5);
  sqcRYGate(q, 2.526498526688806, 6);
  sqcRZGate(q, 0.8833989335840947, 6);
  sqcRYGate(q, -2.9136034821321712, 7);
  sqcRZGate(q, 2.306537494033956, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7274952426341476, 0);
  sqcRZGate(q, 1.2563667414767412, 0);
  sqcRYGate(q, 2.8317028630788097, 1);
  sqcRZGate(q, -1.6836635254382273, 1);
  sqcRYGate(q, -0.6461710444913376, 2);
  sqcRZGate(q, 0.30776746146341427, 2);
  sqcRYGate(q, -0.8803838719659349, 3);
  sqcRZGate(q, 0.6989460958124791, 3);
  sqcRYGate(q, 1.9256747701247707, 4);
  sqcRZGate(q, 2.6534618676679975, 4);
  sqcRYGate(q, -0.740103376943923, 5);
  sqcRZGate(q, -2.2350676431741507, 5);
  sqcRYGate(q, -0.9666143004062553, 6);
  sqcRZGate(q, 3.0580224647926144, 6);
  sqcRYGate(q, 1.9683842998765364, 7);
  sqcRZGate(q, 2.6126856757976378, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.417556656294396, 0);
  sqcRZGate(q, -0.30554422464486436, 0);
  sqcRYGate(q, -2.588859765887517, 1);
  sqcRZGate(q, 2.8355518585553074, 1);
  sqcRYGate(q, -2.816805680900509, 2);
  sqcRZGate(q, -1.530222668188646, 2);
  sqcRYGate(q, -1.3736745889353523, 3);
  sqcRZGate(q, -2.9465244885303963, 3);
  sqcRYGate(q, 0.44426696359537454, 4);
  sqcRZGate(q, 0.6990486085978908, 4);
  sqcRYGate(q, -0.31095611007769186, 5);
  sqcRZGate(q, -1.5969905670027966, 5);
  sqcRYGate(q, -0.3366993324063605, 6);
  sqcRZGate(q, -0.9866181448928861, 6);
  sqcRYGate(q, -1.6994559834744205, 7);
  sqcRZGate(q, -0.2680591839066678, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.279603048685942, 0);
  sqcRZGate(q, 0.9317553678832018, 0);
  sqcRYGate(q, -0.5011020529536641, 1);
  sqcRZGate(q, 1.2462401007263884, 1);
  sqcRYGate(q, 2.4463448247046333, 2);
  sqcRZGate(q, 1.2142062596264331, 2);
  sqcRYGate(q, -2.6194942638304046, 3);
  sqcRZGate(q, 1.6926223442694175, 3);
  sqcRYGate(q, 2.4207229783944566, 4);
  sqcRZGate(q, -1.6824865991378954, 4);
  sqcRYGate(q, 1.5301946938267639, 5);
  sqcRZGate(q, -2.2882612827332562, 5);
  sqcRYGate(q, -0.7372192382711367, 6);
  sqcRZGate(q, 0.47257068563201915, 6);
  sqcRYGate(q, 1.5297060116452617, 7);
  sqcRZGate(q, 0.27374341741357977, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.36801238499807215, 0);
  sqcRZGate(q, -1.1002899019177583, 0);
  sqcRYGate(q, 2.1782090870825375, 1);
  sqcRZGate(q, 0.4104356934368686, 1);
  sqcRYGate(q, 1.2728128260058664, 2);
  sqcRZGate(q, 1.2405953876373623, 2);
  sqcRYGate(q, 1.3361779383428543, 3);
  sqcRZGate(q, 0.0847886746947027, 3);
  sqcRYGate(q, -0.596031946934091, 4);
  sqcRZGate(q, -2.5074716363815273, 4);
  sqcRYGate(q, 2.523704808296031, 5);
  sqcRZGate(q, 2.7909171204945973, 5);
  sqcRYGate(q, 0.1915872600415777, 6);
  sqcRZGate(q, -0.9326476097845766, 6);
  sqcRYGate(q, 1.6702178250553321, 7);
  sqcRZGate(q, -1.0748569919310222, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9907715125708387, 0);
  sqcRZGate(q, -0.27046808142218737, 0);
  sqcRYGate(q, 2.309728942556275, 1);
  sqcRZGate(q, -1.9352323350018645, 1);
  sqcRYGate(q, 1.103158891260934, 2);
  sqcRZGate(q, -2.9635142470284395, 2);
  sqcRYGate(q, 2.662105944277681, 3);
  sqcRZGate(q, 0.5658838589398192, 3);
  sqcRYGate(q, -2.666629890472556, 4);
  sqcRZGate(q, -2.240357968969155, 4);
  sqcRYGate(q, -1.8818410572413753, 5);
  sqcRZGate(q, -0.015395569615502846, 5);
  sqcRYGate(q, -1.3932830043527549, 6);
  sqcRZGate(q, 1.8244676943643077, 6);
  sqcRYGate(q, -1.6177119478124125, 7);
  sqcRZGate(q, -2.611714903518361, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9763974088735421, 0);
  sqcRZGate(q, 2.0173038918329516, 0);
  sqcRYGate(q, 2.9340051223864574, 1);
  sqcRZGate(q, 1.8969510024642013, 1);
  sqcRYGate(q, -1.445380956669086, 2);
  sqcRZGate(q, -2.7762819709792628, 2);
  sqcRYGate(q, -0.5834619807890502, 3);
  sqcRZGate(q, 0.7149064277634718, 3);
  sqcRYGate(q, 0.2930563668191368, 4);
  sqcRZGate(q, 0.5369108729306192, 4);
  sqcRYGate(q, 2.656119219583734, 5);
  sqcRZGate(q, 2.2989948446114163, 5);
  sqcRYGate(q, 1.9100118857686805, 6);
  sqcRZGate(q, 1.1076394141360129, 6);
  sqcRYGate(q, 2.0145464098896033, 7);
  sqcRZGate(q, -3.072237937732343, 7);

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
