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

  sqcRYGate(q, -1.0719589647535825, 0);
  sqcRZGate(q, 1.714409224646207, 0);
  sqcRYGate(q, 0.683312627135165, 1);
  sqcRZGate(q, 1.8701022824867417, 1);
  sqcRYGate(q, 3.134374875181928, 2);
  sqcRZGate(q, -0.7630730424225637, 2);
  sqcRYGate(q, 0.011293368977506539, 3);
  sqcRZGate(q, 2.7985880975379263, 3);
  sqcRYGate(q, 0.4915446896768737, 4);
  sqcRZGate(q, -2.2417972754769715, 4);
  sqcRYGate(q, -0.0003961733214756791, 5);
  sqcRZGate(q, 1.533164320089556, 5);
  sqcRYGate(q, 0.004457100601601746, 6);
  sqcRZGate(q, 2.55442627984872, 6);
  sqcRYGate(q, 1.9066023497176765, 7);
  sqcRZGate(q, -0.4041734515487805, 7);
  sqcRYGate(q, -1.756790970354035, 8);
  sqcRZGate(q, -0.972113783421988, 8);
  sqcRYGate(q, 3.130222393555829, 9);
  sqcRZGate(q, 0.9337218848789108, 9);
  sqcRYGate(q, -6.273016592217573e-05, 10);
  sqcRZGate(q, 0.04787268421798145, 10);
  sqcRYGate(q, -0.9379487954309732, 11);
  sqcRZGate(q, -2.772935405001742, 11);
  sqcRYGate(q, 0.016221330330929724, 12);
  sqcRZGate(q, 3.0971943456412787, 12);
  sqcRYGate(q, 0.47791013620512857, 13);
  sqcRZGate(q, -0.19822131299365467, 13);
  sqcRYGate(q, -2.86575742367421, 14);
  sqcRZGate(q, -2.581363236592766, 14);
  sqcRYGate(q, 1.372242610589372, 15);
  sqcRZGate(q, 1.8840953916279402, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.0853682316040052, 0);
  sqcRZGate(q, 0.669648025965789, 0);
  sqcRYGate(q, 2.7891161950269696, 1);
  sqcRZGate(q, -0.6900709309138787, 1);
  sqcRYGate(q, 0.010681655086645916, 2);
  sqcRZGate(q, -0.6611477050692196, 2);
  sqcRYGate(q, 1.5968889603448924, 3);
  sqcRZGate(q, 1.286582711271894, 3);
  sqcRYGate(q, -2.3826058813063904, 4);
  sqcRZGate(q, 2.8016656210341195, 4);
  sqcRYGate(q, 3.140197500066454, 5);
  sqcRZGate(q, -2.877169571304355, 5);
  sqcRYGate(q, 1.5695263177165464, 6);
  sqcRZGate(q, -2.5024312915806273, 6);
  sqcRYGate(q, -1.852200939296337, 7);
  sqcRZGate(q, -0.397439641108272, 7);
  sqcRYGate(q, -0.822552796932805, 8);
  sqcRZGate(q, 2.5553556320212203, 8);
  sqcRYGate(q, -1.5876158123060184, 9);
  sqcRZGate(q, 0.2727361105192445, 9);
  sqcRYGate(q, 3.1411156931209003, 10);
  sqcRZGate(q, -0.3341965783675337, 10);
  sqcRYGate(q, 2.561389147889294, 11);
  sqcRZGate(q, -1.8755594100303326, 11);
  sqcRYGate(q, -2.825360248073834, 12);
  sqcRZGate(q, 0.812449083077765, 12);
  sqcRYGate(q, 2.877256016124513, 13);
  sqcRZGate(q, 0.13462036794605492, 13);
  sqcRYGate(q, 0.24380284180044068, 14);
  sqcRZGate(q, -2.8292190824617833, 14);
  sqcRYGate(q, 2.799781724548906, 15);
  sqcRZGate(q, -2.2956663450302326, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.4230081506161314, 0);
  sqcRZGate(q, -1.9275788970580523, 0);
  sqcRYGate(q, 2.933418306258106, 1);
  sqcRZGate(q, -1.2611315400590266, 1);
  sqcRYGate(q, 0.001073963326218079, 2);
  sqcRZGate(q, 2.269600336373202, 2);
  sqcRYGate(q, -0.01713139227227879, 3);
  sqcRZGate(q, 2.500053393345179, 3);
  sqcRYGate(q, -3.130302350850334, 4);
  sqcRZGate(q, -2.7076727402648193, 4);
  sqcRYGate(q, -1.5721328500198242, 5);
  sqcRZGate(q, 2.2210820397824276, 5);
  sqcRYGate(q, 0.001697914887939708, 6);
  sqcRZGate(q, -2.3097087952049886, 6);
  sqcRYGate(q, 0.006568697545211441, 7);
  sqcRZGate(q, 2.7361190859555364, 7);
  sqcRYGate(q, -1.6396276666441345, 8);
  sqcRZGate(q, 1.5584655314646005, 8);
  sqcRYGate(q, 1.9559233037160118, 9);
  sqcRZGate(q, 0.4618085365023138, 9);
  sqcRYGate(q, 3.1334690873283297, 10);
  sqcRZGate(q, -1.7914189486707306, 10);
  sqcRYGate(q, -2.873042344043346, 11);
  sqcRZGate(q, 2.5724429567355687, 11);
  sqcRYGate(q, 0.000816901747339556, 12);
  sqcRZGate(q, 2.275381484792721, 12);
  sqcRYGate(q, 3.0932402317075613, 13);
  sqcRZGate(q, -2.121018803582479, 13);
  sqcRYGate(q, -0.26816728961188563, 14);
  sqcRZGate(q, 0.348632709663009, 14);
  sqcRYGate(q, 2.0918346945642043, 15);
  sqcRZGate(q, -1.390110533208233, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.531528277436647, 0);
  sqcRZGate(q, 2.149597179872878, 0);
  sqcRYGate(q, 2.7675656732123053, 1);
  sqcRZGate(q, 0.5679434105372189, 1);
  sqcRYGate(q, -3.120362836218679, 2);
  sqcRZGate(q, -0.3735172893129439, 2);
  sqcRYGate(q, 0.23212065456169223, 3);
  sqcRZGate(q, -0.6649371153882468, 3);
  sqcRYGate(q, -1.5754139644421379, 4);
  sqcRZGate(q, -0.8313470105235116, 4);
  sqcRYGate(q, 2.46236410417211e-05, 5);
  sqcRZGate(q, -2.498788147259801, 5);
  sqcRYGate(q, 2.1520965338126126, 6);
  sqcRZGate(q, -3.1306369856420075, 6);
  sqcRYGate(q, -0.6570064845516743, 7);
  sqcRZGate(q, 0.6965109140265046, 7);
  sqcRYGate(q, -1.076361482730297, 8);
  sqcRZGate(q, 0.26092729910789986, 8);
  sqcRYGate(q, 2.784963542246037, 9);
  sqcRZGate(q, -1.4893017677907896, 9);
  sqcRYGate(q, -3.1405094688932857, 10);
  sqcRZGate(q, 0.38802391569698585, 10);
  sqcRYGate(q, -3.1163742264458993, 11);
  sqcRZGate(q, 2.5470012113822014, 11);
  sqcRYGate(q, -3.05995861175376, 12);
  sqcRZGate(q, -2.8412976012223834, 12);
  sqcRYGate(q, -1.3490892486989594, 13);
  sqcRZGate(q, -3.1209516547897445, 13);
  sqcRYGate(q, -3.0415609990345835, 14);
  sqcRZGate(q, 2.522964452742757, 14);
  sqcRYGate(q, -1.8080992572761252, 15);
  sqcRZGate(q, 0.06461669744460051, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.673567611490826, 0);
  sqcRZGate(q, 2.653303661125365, 0);
  sqcRYGate(q, -1.2556385376994834, 1);
  sqcRZGate(q, 2.2780797263368853, 1);
  sqcRYGate(q, -0.0022650716631957835, 2);
  sqcRZGate(q, -1.1322041890095562, 2);
  sqcRYGate(q, 0.9634149956578293, 3);
  sqcRZGate(q, -3.12703751383711, 3);
  sqcRYGate(q, 0.00409618756252289, 4);
  sqcRZGate(q, -1.452973472887013, 4);
  sqcRYGate(q, -2.859935833792973, 5);
  sqcRZGate(q, -1.1584367483952986, 5);
  sqcRYGate(q, -0.008105666651142762, 6);
  sqcRZGate(q, 0.36028821064784067, 6);
  sqcRYGate(q, -3.141554161206499, 7);
  sqcRZGate(q, -2.2254053546079717, 7);
  sqcRYGate(q, 0.7881991940250979, 8);
  sqcRZGate(q, 1.243743064415164, 8);
  sqcRYGate(q, -0.38730831876316596, 9);
  sqcRZGate(q, -0.5083370761215396, 9);
  sqcRYGate(q, -3.133018159000412, 10);
  sqcRZGate(q, -0.9468706551334636, 10);
  sqcRYGate(q, -0.31295149014905255, 11);
  sqcRZGate(q, -1.3300221674484325, 11);
  sqcRYGate(q, 3.1246223165895737, 12);
  sqcRZGate(q, 1.6788692984807128, 12);
  sqcRYGate(q, -0.1288642208211425, 13);
  sqcRZGate(q, 2.8288204148731997, 13);
  sqcRYGate(q, -1.4424245574835217, 14);
  sqcRZGate(q, -2.6389796232238836, 14);
  sqcRYGate(q, -3.103321642194983, 15);
  sqcRZGate(q, 0.7724172193066323, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.0059125485967897, 0);
  sqcRZGate(q, 2.446314050982005, 0);
  sqcRYGate(q, -2.11829183684653, 1);
  sqcRZGate(q, 2.7016536671887867, 1);
  sqcRYGate(q, -0.227410340996685, 2);
  sqcRZGate(q, -1.7411906246014972, 2);
  sqcRYGate(q, -1.3609778333355491, 3);
  sqcRZGate(q, 2.4532592135128968, 3);
  sqcRYGate(q, -3.130511566159277, 4);
  sqcRZGate(q, 1.9054214167497263, 4);
  sqcRYGate(q, -0.307200593100017, 5);
  sqcRZGate(q, -1.6255952943817193, 5);
  sqcRYGate(q, 3.115282909362076, 6);
  sqcRZGate(q, -2.387303071124726, 6);
  sqcRYGate(q, -2.180002230112425, 7);
  sqcRZGate(q, -1.1902684958094598, 7);
  sqcRYGate(q, -1.859121679162017, 8);
  sqcRZGate(q, 0.051070023937778805, 8);
  sqcRYGate(q, -2.0814477477218283, 9);
  sqcRZGate(q, 2.963050963362737, 9);
  sqcRYGate(q, 0.006324765720305489, 10);
  sqcRZGate(q, -0.19439363298074064, 10);
  sqcRYGate(q, 0.21737365412633786, 11);
  sqcRZGate(q, 0.9955574646210597, 11);
  sqcRYGate(q, -1.3992552418406703, 12);
  sqcRZGate(q, -2.7854506462922664, 12);
  sqcRYGate(q, 0.3795213666541814, 13);
  sqcRZGate(q, 1.5485197586629265, 13);
  sqcRYGate(q, 3.0548079353983115, 14);
  sqcRZGate(q, -3.0160808097688956, 14);
  sqcRYGate(q, 1.4392978999567276, 15);
  sqcRZGate(q, -1.437628948582284, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.744994135241795, 0);
  sqcRZGate(q, -0.6400749346793788, 0);
  sqcRYGate(q, -2.715710956441153, 1);
  sqcRZGate(q, -0.05514661377099728, 1);
  sqcRYGate(q, 0.05312160008285094, 2);
  sqcRZGate(q, 1.7643375064869904, 2);
  sqcRYGate(q, -0.7737649895054126, 3);
  sqcRZGate(q, -0.8233269135185722, 3);
  sqcRYGate(q, -0.8510684039103413, 4);
  sqcRZGate(q, 0.2042002431632195, 4);
  sqcRYGate(q, 0.6732055963561687, 5);
  sqcRZGate(q, -1.499719307152696, 5);
  sqcRYGate(q, -0.036259433975290634, 6);
  sqcRZGate(q, -2.4036180903660807, 6);
  sqcRYGate(q, 0.0003688294488345046, 7);
  sqcRZGate(q, -2.6426047471298526, 7);
  sqcRYGate(q, 1.361183665543477, 8);
  sqcRZGate(q, 2.8367754310274047, 8);
  sqcRYGate(q, -2.345630175839008, 9);
  sqcRZGate(q, -1.9068780250290507, 9);
  sqcRYGate(q, 3.129194748453283, 10);
  sqcRZGate(q, -1.0981380104822922, 10);
  sqcRYGate(q, 0.01962384266459161, 11);
  sqcRZGate(q, -0.3105750641698331, 11);
  sqcRYGate(q, 3.138463467802478, 12);
  sqcRZGate(q, 1.5296887559325374, 12);
  sqcRYGate(q, -0.021635125320546934, 13);
  sqcRZGate(q, -1.5027698896765374, 13);
  sqcRYGate(q, 0.2527841588706927, 14);
  sqcRZGate(q, 0.11270894381749529, 14);
  sqcRYGate(q, 1.8977604068224392, 15);
  sqcRZGate(q, 1.0067281168500894, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.402491695449322, 0);
  sqcRZGate(q, -1.989449747647063, 0);
  sqcRYGate(q, -2.282989025000412, 1);
  sqcRZGate(q, 0.17289453394305937, 1);
  sqcRYGate(q, -2.993041298616767, 2);
  sqcRZGate(q, -1.0532789818933153, 2);
  sqcRYGate(q, -3.134852865725506, 3);
  sqcRZGate(q, -0.46611151501047027, 3);
  sqcRYGate(q, -3.1282972624073144, 4);
  sqcRZGate(q, -1.8396848356933164, 4);
  sqcRYGate(q, 2.988472588593259, 5);
  sqcRZGate(q, -1.5258882494743147, 5);
  sqcRYGate(q, -2.9282434405519164, 6);
  sqcRZGate(q, -1.7366982668665638, 6);
  sqcRYGate(q, 0.01639522498320058, 7);
  sqcRZGate(q, -2.466261027837638, 7);
  sqcRYGate(q, -2.6438485110597947, 8);
  sqcRZGate(q, -0.9961323453219214, 8);
  sqcRYGate(q, -1.243490275881312, 9);
  sqcRZGate(q, 0.7182040488536826, 9);
  sqcRYGate(q, 0.003030698962910684, 10);
  sqcRZGate(q, -1.2087582246687967, 10);
  sqcRYGate(q, -0.629958349821943, 11);
  sqcRZGate(q, -3.1298749238613586, 11);
  sqcRYGate(q, 0.9718975372537635, 12);
  sqcRZGate(q, 2.5117867070354936, 12);
  sqcRYGate(q, 0.5720620600362043, 13);
  sqcRZGate(q, 2.955972895987847, 13);
  sqcRYGate(q, -2.62191601018299, 14);
  sqcRZGate(q, -0.41048744424493555, 14);
  sqcRYGate(q, -1.9599951336053776, 15);
  sqcRZGate(q, 1.3234046565868225, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.7761106390834014, 0);
  sqcRZGate(q, -1.4636424088845905, 0);
  sqcRYGate(q, 0.6430399173808938, 1);
  sqcRZGate(q, 2.322258966300695, 1);
  sqcRYGate(q, -3.105592316516352, 2);
  sqcRZGate(q, -1.901303064282744, 2);
  sqcRYGate(q, -3.094707893446418, 3);
  sqcRZGate(q, 0.8923052443078968, 3);
  sqcRYGate(q, -0.138882202307558, 4);
  sqcRZGate(q, 1.5044938670462553, 4);
  sqcRYGate(q, -0.970502549063949, 5);
  sqcRZGate(q, -1.310928740121178, 5);
  sqcRYGate(q, 0.396849287022918, 6);
  sqcRZGate(q, -0.2185585960241909, 6);
  sqcRYGate(q, -0.017159729856219854, 7);
  sqcRZGate(q, -2.7713315902103637, 7);
  sqcRYGate(q, 2.130671626260708, 8);
  sqcRZGate(q, 1.977139144848492, 8);
  sqcRYGate(q, -2.874975445864119, 9);
  sqcRZGate(q, -1.7554257857531574, 9);
  sqcRYGate(q, -0.0011132981012593746, 10);
  sqcRZGate(q, -0.5176079500208554, 10);
  sqcRYGate(q, 3.126383736235043, 11);
  sqcRZGate(q, -0.9818530752905791, 11);
  sqcRYGate(q, -0.06135422532678714, 12);
  sqcRZGate(q, 2.044863558089186, 12);
  sqcRYGate(q, 2.999609930205198, 13);
  sqcRZGate(q, 2.971893887493911, 13);
  sqcRYGate(q, -2.4360374439044055, 14);
  sqcRZGate(q, -1.2137347674138064, 14);
  sqcRYGate(q, 2.245989125707663, 15);
  sqcRZGate(q, -3.1151968317870624, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0101515783149217, 0);
  sqcRZGate(q, 0.6741106150067155, 0);
  sqcRYGate(q, 1.0867205159875302, 1);
  sqcRZGate(q, -2.318155716186355, 1);
  sqcRYGate(q, -1.7178719847254973, 2);
  sqcRZGate(q, 0.011196668358004848, 2);
  sqcRYGate(q, -0.002335878316803708, 3);
  sqcRZGate(q, -0.9442066511490192, 3);
  sqcRYGate(q, 3.0663801725596005, 4);
  sqcRZGate(q, 2.8965273940289933, 4);
  sqcRYGate(q, -0.1803335387317366, 5);
  sqcRZGate(q, 2.503281104685166, 5);
  sqcRYGate(q, 0.16522653223456574, 6);
  sqcRZGate(q, -2.4601871009899665, 6);
  sqcRYGate(q, 1.2385597719771064, 7);
  sqcRZGate(q, 0.27759058324259644, 7);
  sqcRYGate(q, 1.5878006792763864, 8);
  sqcRZGate(q, -1.6665717087947851, 8);
  sqcRYGate(q, -2.0675390421167816, 9);
  sqcRZGate(q, -3.044380200267499, 9);
  sqcRYGate(q, -3.139809952038603, 10);
  sqcRZGate(q, 0.9317724046174698, 10);
  sqcRYGate(q, -0.08265755702384503, 11);
  sqcRZGate(q, 0.8123112528586032, 11);
  sqcRYGate(q, -1.879600104352649, 12);
  sqcRZGate(q, -3.0762633668348602, 12);
  sqcRYGate(q, 0.22526663917980816, 13);
  sqcRZGate(q, 2.679670781109065, 13);
  sqcRYGate(q, 0.2345632183162346, 14);
  sqcRZGate(q, 2.655840091607677, 14);
  sqcRYGate(q, 1.8230603608288511, 15);
  sqcRZGate(q, -0.17933167073707693, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.53025462793598, 0);
  sqcRZGate(q, 2.2906873819063764, 0);
  sqcRYGate(q, -0.5897135479156805, 1);
  sqcRZGate(q, 2.5579624393916243, 1);
  sqcRYGate(q, -0.18354799071798045, 2);
  sqcRZGate(q, -2.765247080573241, 2);
  sqcRYGate(q, 3.1330503277092507, 3);
  sqcRZGate(q, 0.6290638530303232, 3);
  sqcRYGate(q, -0.20632676937718486, 4);
  sqcRZGate(q, 1.7568832850436398, 4);
  sqcRYGate(q, 1.502606160886521, 5);
  sqcRZGate(q, 0.06843580718649632, 5);
  sqcRYGate(q, 3.0568882207836565, 6);
  sqcRZGate(q, -3.0829460550060603, 6);
  sqcRYGate(q, 1.4832930174025067, 7);
  sqcRZGate(q, 0.569823179784951, 7);
  sqcRYGate(q, 0.970592427976956, 8);
  sqcRZGate(q, -0.9040462238294604, 8);
  sqcRYGate(q, 2.765612766882465, 9);
  sqcRZGate(q, -3.0101576056500616, 9);
  sqcRYGate(q, -1.55153972815312, 10);
  sqcRZGate(q, 0.1747058708516635, 10);
  sqcRYGate(q, 0.04820948592966747, 11);
  sqcRZGate(q, 2.182094163520717, 11);
  sqcRYGate(q, -3.1237163492814473, 12);
  sqcRZGate(q, 0.9796544257536226, 12);
  sqcRYGate(q, -0.014979499239238692, 13);
  sqcRZGate(q, -2.3238599145764294, 13);
  sqcRYGate(q, -0.8459599335124439, 14);
  sqcRZGate(q, 0.013865688366159647, 14);
  sqcRYGate(q, 0.9731830150209887, 15);
  sqcRZGate(q, -1.124618778474252, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.6547378275415809, 0);
  sqcRZGate(q, 0.8020690946161501, 0);
  sqcRYGate(q, 0.229772943096461, 1);
  sqcRZGate(q, 1.4122842328949066, 1);
  sqcRYGate(q, 0.4899144292654937, 2);
  sqcRZGate(q, -1.9549610343389752, 2);
  sqcRYGate(q, -1.19329401011313, 3);
  sqcRZGate(q, -1.8004760568492715, 3);
  sqcRYGate(q, -0.5126073080608656, 4);
  sqcRZGate(q, -0.05440114881620417, 4);
  sqcRYGate(q, 0.11805020949770295, 5);
  sqcRZGate(q, -2.8196862183472766, 5);
  sqcRYGate(q, 0.0069977512620635375, 6);
  sqcRZGate(q, -2.655036300097604, 6);
  sqcRYGate(q, 0.3368583958819773, 7);
  sqcRZGate(q, -1.9779296698410795, 7);
  sqcRYGate(q, 1.7493304755907058, 8);
  sqcRZGate(q, 2.211423649416557, 8);
  sqcRYGate(q, 3.127875680628229, 9);
  sqcRZGate(q, -3.038887509311537, 9);
  sqcRYGate(q, 0.036570811561872134, 10);
  sqcRZGate(q, 2.3990056998248663, 10);
  sqcRYGate(q, 1.5316944024115944, 11);
  sqcRZGate(q, 2.188167265404584, 11);
  sqcRYGate(q, 2.6693851965613153, 12);
  sqcRZGate(q, 2.915874873394527, 12);
  sqcRYGate(q, 0.07753253815629435, 13);
  sqcRZGate(q, -2.473225285609948, 13);
  sqcRYGate(q, 2.9721185220125936, 14);
  sqcRZGate(q, -1.0152156322409833, 14);
  sqcRYGate(q, -1.2088214968961042, 15);
  sqcRZGate(q, -2.4562197212896466, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.408183703962072, 0);
  sqcRZGate(q, 2.400184417971214, 0);
  sqcRYGate(q, 1.0097737659431782, 1);
  sqcRZGate(q, -2.1254937010387067, 1);
  sqcRYGate(q, -3.1383138574768528, 2);
  sqcRZGate(q, -0.9308946507600754, 2);
  sqcRYGate(q, 3.1413936332180894, 3);
  sqcRZGate(q, 2.148978707491564, 3);
  sqcRYGate(q, -2.3349985966028934, 4);
  sqcRZGate(q, 0.04741755867394998, 4);
  sqcRYGate(q, 3.001145460924637, 5);
  sqcRZGate(q, -1.822863589205455, 5);
  sqcRYGate(q, 2.8875997606454464, 6);
  sqcRZGate(q, 3.0547520632228253, 6);
  sqcRYGate(q, -0.023471896335459062, 7);
  sqcRZGate(q, -0.5642852054639262, 7);
  sqcRYGate(q, 0.9713900150106021, 8);
  sqcRZGate(q, -2.7725648766272366, 8);
  sqcRYGate(q, 2.999008923059098, 9);
  sqcRZGate(q, 1.249742041142943, 9);
  sqcRYGate(q, 2.9744467411714095, 10);
  sqcRZGate(q, -1.3884952885427009, 10);
  sqcRYGate(q, -3.130695449955556, 11);
  sqcRZGate(q, -1.9090063195980758, 11);
  sqcRYGate(q, -1.17251663315814, 12);
  sqcRZGate(q, 0.4489709413133101, 12);
  sqcRYGate(q, -2.4739149254227657, 13);
  sqcRZGate(q, 2.4919557806249553, 13);
  sqcRYGate(q, 2.176829825553398, 14);
  sqcRZGate(q, 2.5108138975698817, 14);
  sqcRYGate(q, 1.2528616964779797, 15);
  sqcRZGate(q, 2.5400670842048427, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4752477077052824, 0);
  sqcRZGate(q, -3.1274266120678216, 0);
  sqcRYGate(q, 0.9224980637643683, 1);
  sqcRZGate(q, -1.5379081078544212, 1);
  sqcRYGate(q, -0.48664188637112726, 2);
  sqcRZGate(q, 0.6982045102430796, 2);
  sqcRYGate(q, -3.0629967953068435, 3);
  sqcRZGate(q, -1.5170258174425002, 3);
  sqcRYGate(q, -2.6666915371460638, 4);
  sqcRZGate(q, -0.39033091430679967, 4);
  sqcRYGate(q, 0.38373821772690336, 5);
  sqcRZGate(q, 0.3410167105629403, 5);
  sqcRYGate(q, 3.117149775481095, 6);
  sqcRZGate(q, 0.7371521145108574, 6);
  sqcRYGate(q, 0.026989907505155328, 7);
  sqcRZGate(q, -0.9058827531595038, 7);
  sqcRYGate(q, -1.8294767473276752, 8);
  sqcRZGate(q, 1.1730883472381732, 8);
  sqcRYGate(q, -0.02507703026406194, 9);
  sqcRZGate(q, 0.9893139069045068, 9);
  sqcRYGate(q, -0.4372602004349577, 10);
  sqcRZGate(q, -0.6563102210179484, 10);
  sqcRYGate(q, 0.13983403056026678, 11);
  sqcRZGate(q, -2.085007959539632, 11);
  sqcRYGate(q, -0.05998814971223357, 12);
  sqcRZGate(q, -0.3855867857817943, 12);
  sqcRYGate(q, -0.012003696459736979, 13);
  sqcRZGate(q, 0.8763006057215965, 13);
  sqcRYGate(q, 1.005372177206065, 14);
  sqcRZGate(q, 0.8331362641338771, 14);
  sqcRYGate(q, -1.5548806221687173, 15);
  sqcRZGate(q, 1.7024244928506382, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.6331553823582832, 0);
  sqcRZGate(q, 1.622954333073313, 0);
  sqcRYGate(q, -1.5420470479618391, 1);
  sqcRZGate(q, -2.0547337352662196, 1);
  sqcRYGate(q, -2.46551571770063, 2);
  sqcRZGate(q, 2.6666377245799504, 2);
  sqcRYGate(q, -1.4260659351584746, 3);
  sqcRZGate(q, 0.7542479940082379, 3);
  sqcRYGate(q, 2.687034557126387, 4);
  sqcRZGate(q, 2.797109737429008, 4);
  sqcRYGate(q, 1.4704509457904846, 5);
  sqcRZGate(q, 0.25718306582748784, 5);
  sqcRYGate(q, -3.129884974729753, 6);
  sqcRZGate(q, 2.64237970264243, 6);
  sqcRYGate(q, -1.2598928597876098, 7);
  sqcRZGate(q, 0.21989765192490981, 7);
  sqcRYGate(q, 3.071699756138687, 8);
  sqcRZGate(q, 0.47206065286678983, 8);
  sqcRYGate(q, -0.3382653794401846, 9);
  sqcRZGate(q, -3.065388032204568, 9);
  sqcRYGate(q, 2.973498570269106, 10);
  sqcRZGate(q, 2.2069623469742847, 10);
  sqcRYGate(q, -2.9270974882392795, 11);
  sqcRZGate(q, 1.3818115411696028, 11);
  sqcRYGate(q, -0.4059191531385942, 12);
  sqcRZGate(q, -2.730934313520186, 12);
  sqcRYGate(q, -0.004471959172164475, 13);
  sqcRZGate(q, -0.8887040141914815, 13);
  sqcRYGate(q, 0.1084494109051401, 14);
  sqcRZGate(q, -1.167404981795574, 14);
  sqcRYGate(q, -2.9295747508063856, 15);
  sqcRZGate(q, -0.27413846482807275, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.03007445414892374, 0);
  sqcRZGate(q, -0.0257223013812089, 0);
  sqcRYGate(q, 0.4062537371596564, 1);
  sqcRZGate(q, -1.010692518730659, 1);
  sqcRYGate(q, 0.015510691054199555, 2);
  sqcRZGate(q, -2.414765167310918, 2);
  sqcRYGate(q, -3.128496051976062, 3);
  sqcRZGate(q, -0.8325506215764642, 3);
  sqcRYGate(q, -3.094887044469272, 4);
  sqcRZGate(q, 1.213780915155115, 4);
  sqcRYGate(q, 2.8435617405977593, 5);
  sqcRZGate(q, 0.9819525917502531, 5);
  sqcRYGate(q, -0.010046761071783391, 6);
  sqcRZGate(q, 1.9810639454356234, 6);
  sqcRYGate(q, -2.9098758270387495, 7);
  sqcRZGate(q, 0.031018674599785672, 7);
  sqcRYGate(q, -3.0736423164754494, 8);
  sqcRZGate(q, 2.4565924557588397, 8);
  sqcRYGate(q, 1.1014425828017869, 9);
  sqcRZGate(q, -0.9237588860501134, 9);
  sqcRYGate(q, -1.3716856544134866, 10);
  sqcRZGate(q, 2.779191405203373, 10);
  sqcRYGate(q, -0.012644723980241857, 11);
  sqcRZGate(q, -1.408799757864733, 11);
  sqcRYGate(q, 0.0773458738988273, 12);
  sqcRZGate(q, 2.9705892335078077, 12);
  sqcRYGate(q, 1.5750997060444183, 13);
  sqcRZGate(q, 3.05807503174621, 13);
  sqcRYGate(q, 0.8821379846322299, 14);
  sqcRZGate(q, 2.580096271877206, 14);
  sqcRYGate(q, 0.2555381950391462, 15);
  sqcRZGate(q, 0.027170537003405215, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.0601499884367793, 0);
  sqcRZGate(q, 0.10128587508794773, 0);
  sqcRYGate(q, -3.1195917744199733, 1);
  sqcRZGate(q, 2.78493435780126, 1);
  sqcRYGate(q, 1.6501477518839909, 2);
  sqcRZGate(q, -0.31436644451181994, 2);
  sqcRYGate(q, 1.4832266693356997, 3);
  sqcRZGate(q, 2.7046067718098183, 3);
  sqcRYGate(q, -1.342551257976628, 4);
  sqcRZGate(q, -1.6210788770259614, 4);
  sqcRYGate(q, -2.1739438017504997, 5);
  sqcRZGate(q, 0.7584578054930057, 5);
  sqcRYGate(q, -3.099787659731411, 6);
  sqcRZGate(q, 1.9814679613480912, 6);
  sqcRYGate(q, 1.8546166607450876, 7);
  sqcRZGate(q, -1.4772929558906784, 7);
  sqcRYGate(q, 2.145000486128831, 8);
  sqcRZGate(q, 1.8498694037745071, 8);
  sqcRYGate(q, -1.751311392649055, 9);
  sqcRZGate(q, -0.008291270021394244, 9);
  sqcRYGate(q, 0.010688900381547092, 10);
  sqcRZGate(q, 0.704880656509574, 10);
  sqcRYGate(q, 3.0235645019744966, 11);
  sqcRZGate(q, 0.7132994046796446, 11);
  sqcRYGate(q, -2.985598058327392, 12);
  sqcRZGate(q, -3.0024027310998016, 12);
  sqcRYGate(q, -2.9184941233624255, 13);
  sqcRZGate(q, -0.1407039879255665, 13);
  sqcRYGate(q, 1.5691304877008756, 14);
  sqcRZGate(q, -1.0071107262508106, 14);
  sqcRYGate(q, 0.8498263146877783, 15);
  sqcRZGate(q, 0.4633609967524591, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.47518995142182585, 0);
  sqcRZGate(q, -0.13035216145420755, 0);
  sqcRYGate(q, 0.036191301081114347, 1);
  sqcRZGate(q, -0.9361421959733541, 1);
  sqcRYGate(q, 0.014844579312849326, 2);
  sqcRZGate(q, -2.828270460404456, 2);
  sqcRYGate(q, 0.005546466439922071, 3);
  sqcRZGate(q, 2.609141498753807, 3);
  sqcRYGate(q, -0.009278809183116379, 4);
  sqcRZGate(q, -0.2950039940175176, 4);
  sqcRYGate(q, -3.080353239901952, 5);
  sqcRZGate(q, 1.197397861542333, 5);
  sqcRYGate(q, -0.5576581819028337, 6);
  sqcRZGate(q, 1.0589900488803075, 6);
  sqcRYGate(q, -0.0069102951320143555, 7);
  sqcRZGate(q, 1.3891918896579531, 7);
  sqcRYGate(q, 0.0023204999424258203, 8);
  sqcRZGate(q, -1.8535032178966573, 8);
  sqcRYGate(q, -0.032801990712780324, 9);
  sqcRZGate(q, 0.08005430624321173, 9);
  sqcRYGate(q, 3.1291216023515553, 10);
  sqcRZGate(q, 0.7206663421757754, 10);
  sqcRYGate(q, -0.9637948311209932, 11);
  sqcRZGate(q, -0.036154346294626806, 11);
  sqcRYGate(q, -3.0908778576040743, 12);
  sqcRZGate(q, -1.654798422370283, 12);
  sqcRYGate(q, 1.325810062095646, 13);
  sqcRZGate(q, -2.7872101040221655, 13);
  sqcRYGate(q, -0.06507887791106005, 14);
  sqcRZGate(q, -1.438275946167969, 14);
  sqcRYGate(q, 1.5775475228585378, 15);
  sqcRZGate(q, 2.374597751851172, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5888349404280175, 0);
  sqcRZGate(q, -1.3196214826828463, 0);
  sqcRYGate(q, 3.106714083771692, 1);
  sqcRZGate(q, -0.6134920859810303, 1);
  sqcRYGate(q, -3.0786702726463777, 2);
  sqcRZGate(q, 1.2089415453358006, 2);
  sqcRYGate(q, -1.1394619412460267, 3);
  sqcRZGate(q, -2.637111050715146, 3);
  sqcRYGate(q, -2.086390193601508, 4);
  sqcRZGate(q, 1.5878479688457625, 4);
  sqcRYGate(q, 0.020304620462140443, 5);
  sqcRZGate(q, 3.021276359729549, 5);
  sqcRYGate(q, -0.013197041280692545, 6);
  sqcRZGate(q, -1.8839580869021582, 6);
  sqcRYGate(q, 3.1088669269290006, 7);
  sqcRZGate(q, -0.9051058979338311, 7);
  sqcRYGate(q, 0.9957615942508253, 8);
  sqcRZGate(q, 0.5075992827790587, 8);
  sqcRYGate(q, 1.3263878224922552, 9);
  sqcRZGate(q, -0.9184788824950562, 9);
  sqcRYGate(q, 0.0008154235724022739, 10);
  sqcRZGate(q, 2.62362613400065, 10);
  sqcRYGate(q, -3.115391222883678, 11);
  sqcRZGate(q, 0.07807261284039323, 11);
  sqcRYGate(q, -0.005439008671696222, 12);
  sqcRZGate(q, -1.0403153182889229, 12);
  sqcRYGate(q, -1.0610641212971714, 13);
  sqcRZGate(q, 1.2736198832950256, 13);
  sqcRYGate(q, 0.6361598922986961, 14);
  sqcRZGate(q, 1.281994348755882, 14);
  sqcRYGate(q, 3.1358787569572124, 15);
  sqcRZGate(q, -1.2723688905523813, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.05828860964279527, 0);
  sqcRZGate(q, -1.8285201667096362, 0);
  sqcRYGate(q, 0.78498567983757, 1);
  sqcRZGate(q, -0.87553362756396, 1);
  sqcRYGate(q, 3.1350261728411506, 2);
  sqcRZGate(q, 2.527703326215102, 2);
  sqcRYGate(q, 3.1125307739202284, 3);
  sqcRZGate(q, 0.7206171351994543, 3);
  sqcRYGate(q, -3.1218927145532964, 4);
  sqcRZGate(q, -0.9688671906935341, 4);
  sqcRYGate(q, 0.377642294345102, 5);
  sqcRZGate(q, -0.6070736294874329, 5);
  sqcRYGate(q, 1.863747685746107, 6);
  sqcRZGate(q, -0.012533275443741942, 6);
  sqcRYGate(q, 0.3252680318959733, 7);
  sqcRZGate(q, 1.7339140938440925, 7);
  sqcRYGate(q, -2.1832743238280203, 8);
  sqcRZGate(q, 3.1096756051499557, 8);
  sqcRYGate(q, 1.152935013165924, 9);
  sqcRZGate(q, -1.7014050133826237, 9);
  sqcRYGate(q, 1.3552791104491162, 10);
  sqcRZGate(q, -0.5355979732794982, 10);
  sqcRYGate(q, -2.1658519827472436, 11);
  sqcRZGate(q, -0.14170348267841426, 11);
  sqcRYGate(q, 3.0954368217641144, 12);
  sqcRZGate(q, -1.1315883261034985, 12);
  sqcRYGate(q, -0.00982550207413097, 13);
  sqcRZGate(q, 0.9603173298589428, 13);
  sqcRYGate(q, -0.2042890784637134, 14);
  sqcRZGate(q, -2.6920405704661325, 14);
  sqcRYGate(q, 0.009280209035125215, 15);
  sqcRZGate(q, -2.160761804889005, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1326060320335167, 0);
  sqcRZGate(q, -0.0006204104216962492, 0);
  sqcRYGate(q, 0.005103259654512193, 1);
  sqcRZGate(q, -0.36123320990154867, 1);
  sqcRYGate(q, -0.45178425494195995, 2);
  sqcRZGate(q, 1.6417619582354421, 2);
  sqcRYGate(q, -2.7441541455686393, 3);
  sqcRZGate(q, 0.08930497835801296, 3);
  sqcRYGate(q, 3.131966361683624, 4);
  sqcRZGate(q, 0.9039503992299074, 4);
  sqcRYGate(q, 3.057969968533006, 5);
  sqcRZGate(q, 2.7277374961611085, 5);
  sqcRYGate(q, -0.0003764739582818134, 6);
  sqcRZGate(q, 0.58528589651769, 6);
  sqcRYGate(q, 0.0013449998078014502, 7);
  sqcRZGate(q, -1.301853025453677, 7);
  sqcRYGate(q, -0.3699747815138541, 8);
  sqcRZGate(q, 0.15070335776425825, 8);
  sqcRYGate(q, 0.02263867102597583, 9);
  sqcRZGate(q, 0.7960191088117217, 9);
  sqcRYGate(q, -0.8194984408120123, 10);
  sqcRZGate(q, -0.7872765754532127, 10);
  sqcRYGate(q, 1.067861223179924, 11);
  sqcRZGate(q, -2.3568013470582025, 11);
  sqcRYGate(q, 3.0019127057885364, 12);
  sqcRZGate(q, 2.6452383314141863, 12);
  sqcRYGate(q, -0.7280439940617, 13);
  sqcRZGate(q, 0.23751453473153106, 13);
  sqcRYGate(q, -1.0420890062125068, 14);
  sqcRZGate(q, -0.5879475133446572, 14);
  sqcRYGate(q, 0.9905559608641957, 15);
  sqcRZGate(q, -3.1050254918588784, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.510668426509246, 0);
  sqcRZGate(q, 0.5485544514316079, 0);
  sqcRYGate(q, -0.801528757928433, 1);
  sqcRZGate(q, 1.0564856972227863, 1);
  sqcRYGate(q, 3.123191721218592, 2);
  sqcRZGate(q, -2.8024893048723767, 2);
  sqcRYGate(q, -0.005651711798936532, 3);
  sqcRZGate(q, 1.192319074193169, 3);
  sqcRYGate(q, 3.12088286975992, 4);
  sqcRZGate(q, 0.9997266128145598, 4);
  sqcRYGate(q, -0.19457664721991375, 5);
  sqcRZGate(q, 1.0887134157542233, 5);
  sqcRYGate(q, -0.9557056509013511, 6);
  sqcRZGate(q, 2.7544505034269156, 6);
  sqcRYGate(q, 2.396833242295544, 7);
  sqcRZGate(q, -0.42648847944708873, 7);
  sqcRYGate(q, -2.1582525441935845, 8);
  sqcRZGate(q, -1.0639644304243603, 8);
  sqcRYGate(q, 3.074511726083153, 9);
  sqcRZGate(q, -0.8817295473219451, 9);
  sqcRYGate(q, -0.046223914875269896, 10);
  sqcRZGate(q, 2.0736414869999154, 10);
  sqcRYGate(q, 3.104346880702946, 11);
  sqcRZGate(q, 2.4877880580600227, 11);
  sqcRYGate(q, -3.1047266822911195, 12);
  sqcRZGate(q, -1.0796781329583636, 12);
  sqcRYGate(q, -3.1239587267794864, 13);
  sqcRZGate(q, -0.6035485986637015, 13);
  sqcRYGate(q, 3.0254282259169893, 14);
  sqcRZGate(q, -1.8308353255018126, 14);
  sqcRYGate(q, 3.138973898397019, 15);
  sqcRZGate(q, 1.0226295280112723, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.457975863578957, 0);
  sqcRZGate(q, -2.738767203456525, 0);
  sqcRYGate(q, -1.1753860951333728, 1);
  sqcRZGate(q, 1.4949177716482536, 1);
  sqcRYGate(q, 3.032901630049911, 2);
  sqcRZGate(q, -0.5643021261810267, 2);
  sqcRYGate(q, -0.1988181587111617, 3);
  sqcRZGate(q, -2.7320645280889653, 3);
  sqcRYGate(q, -1.5363723491182188, 4);
  sqcRZGate(q, 1.272954731313131, 4);
  sqcRYGate(q, 1.438181177088006, 5);
  sqcRZGate(q, 1.757097216334189, 5);
  sqcRYGate(q, -0.6889251368739302, 6);
  sqcRZGate(q, 0.6415293527076978, 6);
  sqcRYGate(q, 0.9179190816447466, 7);
  sqcRZGate(q, -2.2179288775263952, 7);
  sqcRYGate(q, -2.6336799683687566, 8);
  sqcRZGate(q, -2.4702231970792075, 8);
  sqcRYGate(q, -2.5243042370401216, 9);
  sqcRZGate(q, -2.714339191356248, 9);
  sqcRYGate(q, -1.6672083663702697, 10);
  sqcRZGate(q, -1.0759320592633261, 10);
  sqcRYGate(q, -1.3381961417367316, 11);
  sqcRZGate(q, -0.40365954754620137, 11);
  sqcRYGate(q, -2.9689222346480046, 12);
  sqcRZGate(q, -1.4391503632071914, 12);
  sqcRYGate(q, -0.07707178896282585, 13);
  sqcRZGate(q, -2.2388362383700953, 13);
  sqcRYGate(q, -1.7067892001539395, 14);
  sqcRZGate(q, 1.2981924714556436, 14);
  sqcRYGate(q, 1.8544988672294869, 15);
  sqcRZGate(q, -0.24821295591915593, 15);

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
