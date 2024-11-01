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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.7801302447546109, 0);
  sqcRYGate(q, 0.792642395954988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.429077318267403, 0);
  sqcRYGate(q, 2.8060857764052773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07711470959435185, 2);
  sqcRYGate(q, -2.639272543063346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08726216266230635, 2);
  sqcRYGate(q, -1.229256759558396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3411921965419413, 4);
  sqcRYGate(q, -1.2037333659012202, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9511859094076198, 4);
  sqcRYGate(q, -0.8910220254910826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0071584906003097, 6);
  sqcRYGate(q, 0.45306622211901715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5661201613071274, 6);
  sqcRYGate(q, 0.03405058244884973, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5654092490416787, 1);
  sqcRYGate(q, 0.41399048000218386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0003633448938588057, 1);
  sqcRYGate(q, 3.1351871677856415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.818400414746067, 3);
  sqcRYGate(q, 2.3254070753269063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.997559796827061, 3);
  sqcRYGate(q, -0.12607365386529143, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.014955623585388267, 5);
  sqcRYGate(q, 2.577923586989057, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.039105932707788, 5);
  sqcRYGate(q, -2.5175712358539, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.359753088327522, 0);
  sqcRYGate(q, 0.7546206939279285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3458100731000155, 0);
  sqcRYGate(q, 1.5243372961536483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6925728846440165, 2);
  sqcRYGate(q, 0.12557459266998183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13102768636396261, 2);
  sqcRYGate(q, 1.6496035737460644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.455775017300359, 4);
  sqcRYGate(q, 0.501019751232661, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7727638368187875, 4);
  sqcRYGate(q, 1.0539773051345291, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1432438432642569, 6);
  sqcRYGate(q, -2.216989282936079, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2980895646514745, 6);
  sqcRYGate(q, -1.6119354092856277, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0803595354446056, 1);
  sqcRYGate(q, 0.3004648523686715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9100525080747115, 1);
  sqcRYGate(q, -2.965815395333786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11025490002282456, 3);
  sqcRYGate(q, 0.9113179601014025, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1100405758131644, 3);
  sqcRYGate(q, 2.751442198546997, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4889796765209344, 5);
  sqcRYGate(q, 0.5586737232520499, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6528331189183287, 5);
  sqcRYGate(q, 0.37115108043409806, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.981404028049088, 0);
  sqcRYGate(q, -1.2918786978267738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5697877931518276, 0);
  sqcRYGate(q, -2.2180097975437985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09827729805446239, 2);
  sqcRYGate(q, -2.00542615031739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.005895835309055464, 2);
  sqcRYGate(q, -3.1169297235412254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2750807453868562, 4);
  sqcRYGate(q, -2.9938517531331104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6734868334186309, 4);
  sqcRYGate(q, -0.42507635370416796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8823137770266802, 6);
  sqcRYGate(q, 3.059659778339318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.169890740516326, 6);
  sqcRYGate(q, -2.247313181470635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7132260073898227, 1);
  sqcRYGate(q, 1.1877475976882277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.424412036789529, 1);
  sqcRYGate(q, 0.11219540717533859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.556118599793686, 3);
  sqcRYGate(q, 2.0482459576313166, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.811540364621802, 3);
  sqcRYGate(q, 0.5461735159056067, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.502065473914851, 5);
  sqcRYGate(q, -3.0900728030896683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.46712620984791803, 5);
  sqcRYGate(q, -1.3511281326282853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3021044255079248, 0);
  sqcRYGate(q, 1.4986473423817213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3635562304502127, 0);
  sqcRYGate(q, 2.0429712915599594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8435630683091815, 2);
  sqcRYGate(q, -1.0740257377855802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.027376659845696094, 2);
  sqcRYGate(q, -2.8593972855122387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9756402811092866, 4);
  sqcRYGate(q, 1.02095169330814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7013668145718084, 4);
  sqcRYGate(q, -1.7688626244680163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.229253949273523, 6);
  sqcRYGate(q, 1.3823733510504832, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1137462833010785, 6);
  sqcRYGate(q, -0.8086302288120278, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9905604323845842, 1);
  sqcRYGate(q, -0.8022690971658374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3655181430052785, 1);
  sqcRYGate(q, 0.2844211758096362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6595387879221004, 3);
  sqcRYGate(q, 1.276460564526728, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7177085965805454, 3);
  sqcRYGate(q, 0.46403253055447813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.37001353385300373, 5);
  sqcRYGate(q, 1.4223599920190833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8822623610290771, 5);
  sqcRYGate(q, -1.2069226218374371, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7018252891387329, 0);
  sqcRYGate(q, 2.8734673704996774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1133245140717904, 0);
  sqcRYGate(q, 2.9283593089909656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9379887127204061, 2);
  sqcRYGate(q, 1.301644122482835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16478852836697744, 2);
  sqcRYGate(q, -2.9328078102347077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0083371312846259, 4);
  sqcRYGate(q, 2.1534746080919813, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.803944599395388, 4);
  sqcRYGate(q, 1.3037342259557683, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.21681380927893187, 6);
  sqcRYGate(q, -1.65698810815541, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4786899388986243, 6);
  sqcRYGate(q, -1.3300568237865815, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6330940061866688, 1);
  sqcRYGate(q, 1.494467985495902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.406577465188473, 1);
  sqcRYGate(q, -1.9445040192017164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2220949856846977, 3);
  sqcRYGate(q, 2.243745728278662, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.644987548027053, 3);
  sqcRYGate(q, 0.3834309500877371, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13734242728237891, 5);
  sqcRYGate(q, 2.574923911888641, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9678953971092705, 5);
  sqcRYGate(q, -2.8685758279164477, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4600151622640693, 0);
  sqcRYGate(q, 0.9064635177064693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4994049070087554, 0);
  sqcRYGate(q, -1.3234876058074523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3609767409702869, 2);
  sqcRYGate(q, 2.411857719300264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4246541012258184, 2);
  sqcRYGate(q, -2.463754246251587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3005585403339142, 4);
  sqcRYGate(q, 2.1979874723562496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1320326085549433, 4);
  sqcRYGate(q, 0.22986156139510933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19141723006118117, 6);
  sqcRYGate(q, -2.951102497685122, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2727054629155785, 6);
  sqcRYGate(q, 0.9732301703886426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1075504089989008, 1);
  sqcRYGate(q, -1.571264577751512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.083801391014624, 1);
  sqcRYGate(q, 0.3607369433762954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17116068121868278, 3);
  sqcRYGate(q, -0.4411798034560386, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.074444476760638, 3);
  sqcRYGate(q, -0.009324627193157811, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1846094783658516, 5);
  sqcRYGate(q, 2.6676249464283637, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0285903875943376, 5);
  sqcRYGate(q, -2.3203195883428767, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8062313543944692, 0);
  sqcRYGate(q, 1.1325841297788273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3996660579153293, 0);
  sqcRYGate(q, 1.6822154363357622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.000084285122515, 2);
  sqcRYGate(q, 2.5430603910442575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09742946175236256, 2);
  sqcRYGate(q, -3.111081960192992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9167098769148083, 4);
  sqcRYGate(q, -0.9769714666134073, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20948391247901374, 4);
  sqcRYGate(q, -2.405998097798311, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1679892451402436, 6);
  sqcRYGate(q, 0.17785510624443557, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.604629501816226, 6);
  sqcRYGate(q, 2.7981335201815933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6346370613738768, 1);
  sqcRYGate(q, -2.3288289676427882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8148849045405736, 1);
  sqcRYGate(q, 0.5328662455437003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45698210039419873, 3);
  sqcRYGate(q, -0.9682341772298786, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9178206587787097, 3);
  sqcRYGate(q, 0.3832178519256844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.925734030521614, 5);
  sqcRYGate(q, -2.966652475420236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7239703333725572, 5);
  sqcRYGate(q, 0.29137581688915937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5299613622768797, 0);
  sqcRYGate(q, -2.9812490697297855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.992220364246463, 0);
  sqcRYGate(q, 1.7104120553246513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0318361571906562, 2);
  sqcRYGate(q, 1.870463272999964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3952316174376063, 2);
  sqcRYGate(q, -1.00053174008441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5641587877519785, 4);
  sqcRYGate(q, -2.8855402637115444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0291549823715798, 4);
  sqcRYGate(q, 1.9479747801980112, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5837576573193832, 6);
  sqcRYGate(q, 1.320595071394715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.633552607124022, 6);
  sqcRYGate(q, -2.8541427213515127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.765485348091203, 1);
  sqcRYGate(q, 1.140156679807772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4821473855473597, 1);
  sqcRYGate(q, -0.06732156493764206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.054595249546173, 3);
  sqcRYGate(q, 2.283594856180862, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0038816111920505223, 3);
  sqcRYGate(q, 0.16912190270913696, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2946296279245284, 5);
  sqcRYGate(q, -1.2861717792251275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.155006784753577, 5);
  sqcRYGate(q, 0.1360254773476741, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5235049583618311, 0);
  sqcRYGate(q, 2.3274585424700573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.113895828484912, 0);
  sqcRYGate(q, -1.6138193658022242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8367408798172222, 2);
  sqcRYGate(q, -1.0408786304194886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17951236956667946, 2);
  sqcRYGate(q, -2.471976507573608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5634560464409313, 4);
  sqcRYGate(q, -1.6401655823226315, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7632278539742674, 4);
  sqcRYGate(q, -2.149011464614091, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9601016750051, 6);
  sqcRYGate(q, 1.2210266261180474, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0261555807460154, 6);
  sqcRYGate(q, 2.853003067873141, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9309077496309547, 1);
  sqcRYGate(q, 2.231191535993198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9747368488257356, 1);
  sqcRYGate(q, 2.5336358846200535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9378147096931486, 3);
  sqcRYGate(q, -1.8912585531082238, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.692227892959363, 3);
  sqcRYGate(q, -2.620970357752725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.872821164206531, 5);
  sqcRYGate(q, 2.627819992251054, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.707158627712705, 5);
  sqcRYGate(q, 1.0958356318592073, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1352412949048514, 0);
  sqcRYGate(q, 2.495211003626816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1433696980858992, 0);
  sqcRYGate(q, -2.0307279610554705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7567342071556986, 2);
  sqcRYGate(q, -1.1189422968645488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30192965173524583, 2);
  sqcRYGate(q, -0.10238487171533528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.648177649550407, 4);
  sqcRYGate(q, -1.4359493680079707, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2660967259244642, 4);
  sqcRYGate(q, 3.13947697866498, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9244877843584995, 6);
  sqcRYGate(q, 0.133926523423181, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.816359807620242, 6);
  sqcRYGate(q, -0.4070633537935752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6933688636373615, 1);
  sqcRYGate(q, -0.09467206425418428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7349757569362803, 1);
  sqcRYGate(q, 1.2971103687936176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3258195655516563, 3);
  sqcRYGate(q, 2.5019318207319112, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6490643993429766, 3);
  sqcRYGate(q, -0.8128162230257785, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5670221262556174, 5);
  sqcRYGate(q, -1.3080263806386765, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4035302626016395, 5);
  sqcRYGate(q, 1.2441554732062725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09359458431676497, 0);
  sqcRYGate(q, -0.1142302893450289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0913175042100436, 0);
  sqcRYGate(q, -1.1434991300181183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3070098801752206, 2);
  sqcRYGate(q, -1.374282887580601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1414382027756145, 2);
  sqcRYGate(q, -0.018913921200654826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.862106034984745, 4);
  sqcRYGate(q, 2.8738685308710035, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11690686889410493, 4);
  sqcRYGate(q, -0.013906499975315439, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0732562691585574, 6);
  sqcRYGate(q, -0.6546965497246928, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17886260652643102, 6);
  sqcRYGate(q, 2.477718270528706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1407659523093647, 1);
  sqcRYGate(q, -0.4178124817495607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5929833728941585, 1);
  sqcRYGate(q, 1.51508962726498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9705186949833493, 3);
  sqcRYGate(q, 2.310619381702809, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8860649799599267, 3);
  sqcRYGate(q, -1.029465979861839, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9072387010173886, 5);
  sqcRYGate(q, -2.079866464735397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.666587356332709, 5);
  sqcRYGate(q, -2.791620151650299, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5363889317321782, 0);
  sqcRYGate(q, 2.346050835719983, 1);
  sqcRYGate(q, -1.0519765113985162, 2);
  sqcRYGate(q, 0.5548561883039916, 3);
  sqcRYGate(q, -3.006367919881425, 4);
  sqcRYGate(q, 2.9111270379447762, 5);
  sqcRYGate(q, 2.988507674788087, 6);
  sqcRYGate(q, 2.604609680033474, 7);

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
