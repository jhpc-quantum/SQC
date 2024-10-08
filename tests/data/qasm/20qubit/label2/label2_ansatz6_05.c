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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.506778451806341, 0);
  sqcRYGate(q, -0.9323357740104316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1879993465622116, 0);
  sqcRYGate(q, -1.0286198467950847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.771147468100331, 1);
  sqcRYGate(q, -0.4793217473567015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3302305047637044, 1);
  sqcRYGate(q, -0.7041255791447245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1125222541489546, 2);
  sqcRYGate(q, -1.893310720285493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8780291511935783, 2);
  sqcRYGate(q, 2.8821597503465823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.019082421253236313, 3);
  sqcRYGate(q, -1.527124285288599, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9125843742852995, 3);
  sqcRYGate(q, 0.0037920259167953797, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7456562314043045, 4);
  sqcRYGate(q, 1.8167344529698655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.051391959026028, 4);
  sqcRYGate(q, 1.011458356333441, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1960055821172595, 5);
  sqcRYGate(q, -2.6861715488569295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4452102366354906, 5);
  sqcRYGate(q, 0.06266372171244293, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.04930780165250291, 6);
  sqcRYGate(q, -2.355235919030965, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0829289696281608, 6);
  sqcRYGate(q, -3.122652232833736, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8317867157913423, 7);
  sqcRYGate(q, -2.474906440032176, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3543853818615161, 7);
  sqcRYGate(q, -1.9069257534106685, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0218778017825747, 8);
  sqcRYGate(q, 2.5377376008402788, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3154183409242837, 8);
  sqcRYGate(q, -1.0937624970267144, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2072659061285873, 9);
  sqcRYGate(q, 1.048480466577072, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.138606049615979, 9);
  sqcRYGate(q, 3.139559216265921, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7602135573226336, 10);
  sqcRYGate(q, 1.672498288115837, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.256419427765666, 10);
  sqcRYGate(q, -2.8169656022190184, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.11656213259425831, 11);
  sqcRYGate(q, 1.4133538126165504, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.8477537174415133, 11);
  sqcRYGate(q, -0.9710061162430444, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.5026655409567029, 12);
  sqcRYGate(q, 1.1851550733175573, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3091221427586369, 12);
  sqcRYGate(q, 0.6617796637295585, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.982291192656823, 13);
  sqcRYGate(q, 0.07329898119491397, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7628243018890233, 13);
  sqcRYGate(q, -0.031696967122807757, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.9011014781698443, 14);
  sqcRYGate(q, -0.40852400448533643, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.012947309374193403, 14);
  sqcRYGate(q, -0.24616088814667791, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6446042612172418, 15);
  sqcRYGate(q, -1.6363286441322864, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.5872162942796537, 15);
  sqcRYGate(q, 0.050991788037435086, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.768731179026342, 16);
  sqcRYGate(q, -1.3293694480483398, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.430464443700308, 16);
  sqcRYGate(q, 0.40012678033098015, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.0796857035151914, 17);
  sqcRYGate(q, 2.0910499157246947, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.8939569553176976, 17);
  sqcRYGate(q, -2.753583369709863, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.997092640403914, 18);
  sqcRYGate(q, 2.0707826453125184, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.55348528440775, 18);
  sqcRYGate(q, 3.0718321802557353, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.569954499680667, 0);
  sqcRYGate(q, 1.8896855829122527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9619473393918893, 0);
  sqcRYGate(q, -3.053641261586045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1709534516951718, 1);
  sqcRYGate(q, -1.055162740312972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9829080882634482, 1);
  sqcRYGate(q, 0.6960826884137621, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3704548913102874, 2);
  sqcRYGate(q, 2.933767822408405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2251874413230603, 2);
  sqcRYGate(q, 3.098415300668891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.007743706693602, 3);
  sqcRYGate(q, 0.5201807732923633, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.14105154987996, 3);
  sqcRYGate(q, -0.0006975977504479759, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9459470208666153, 4);
  sqcRYGate(q, -2.37203878114004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.652539731387837, 4);
  sqcRYGate(q, 0.8929307234833754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6846281501125917, 5);
  sqcRYGate(q, -1.5519622174527141, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.832668268055984, 5);
  sqcRYGate(q, 1.5018274271767886, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.479186594452728, 6);
  sqcRYGate(q, 0.6144283202239381, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4422321347576759, 6);
  sqcRYGate(q, 3.1219306735870287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.615465740313471, 7);
  sqcRYGate(q, 0.7273567478628638, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2198839994627137, 7);
  sqcRYGate(q, 0.49450748648589293, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2942993819643305, 8);
  sqcRYGate(q, -2.3443832687841297, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6705289161801397, 8);
  sqcRYGate(q, 0.48052198998765583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3180401495144909, 9);
  sqcRYGate(q, -2.4678072629740564, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5169347016523131, 9);
  sqcRYGate(q, 1.0182575868289314, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.179355161309739, 10);
  sqcRYGate(q, 1.7655257745277468, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.24924220108619383, 10);
  sqcRYGate(q, 3.1330390017395287, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3309418609456176, 11);
  sqcRYGate(q, 1.1846355407322244, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7297221080546246, 11);
  sqcRYGate(q, -0.7250718354502448, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.621260475188229, 12);
  sqcRYGate(q, 0.6028998082621708, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1289667298472326, 12);
  sqcRYGate(q, 1.4159394155482143, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9799491356812501, 13);
  sqcRYGate(q, 0.5108371461548712, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.438423177566433, 13);
  sqcRYGate(q, 3.0901741281875075, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1521828471447946, 14);
  sqcRYGate(q, 0.8806426915115014, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.26851620542227433, 14);
  sqcRYGate(q, 3.1235579835655147, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9429627684392226, 15);
  sqcRYGate(q, 1.7859052133987483, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.008635300915812, 15);
  sqcRYGate(q, -0.10502416330913998, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.6212736536908754, 16);
  sqcRYGate(q, 2.4107243511146614, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.9142051691959923, 16);
  sqcRYGate(q, 1.7794936514264117, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.3712800162590026, 17);
  sqcRYGate(q, -0.9580813864644508, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.4223540640711309, 17);
  sqcRYGate(q, -3.013945154334755, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.32162362409427, 18);
  sqcRYGate(q, 1.6238906078377893, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.03944177426704876, 18);
  sqcRYGate(q, 1.0504358124987538, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.860894840654364, 0);
  sqcRYGate(q, 0.7451187285407294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.973330726737878, 0);
  sqcRYGate(q, 1.2631986128232624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7325397360370998, 1);
  sqcRYGate(q, 2.0220503156801275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08431515772821374, 1);
  sqcRYGate(q, -2.571529868733466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1198603964970912, 2);
  sqcRYGate(q, -2.2107392396171606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.514339230573655, 2);
  sqcRYGate(q, -2.866114071448736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8199157841715226, 3);
  sqcRYGate(q, 0.7676530960185719, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.018340880891313027, 3);
  sqcRYGate(q, -3.020708715940227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.432958558655149, 4);
  sqcRYGate(q, 1.024264876038284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1101585370061129, 4);
  sqcRYGate(q, 0.059288423738717004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.974503074190529, 5);
  sqcRYGate(q, 2.354675893765934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0781017117905654, 5);
  sqcRYGate(q, -0.13128616484936886, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.182706298547732, 6);
  sqcRYGate(q, -0.0857240578018419, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6812024553955005, 6);
  sqcRYGate(q, -3.131979147988815, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.476749124808756, 7);
  sqcRYGate(q, -0.18824524084361718, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0608939865214122, 7);
  sqcRYGate(q, -0.32639833678321667, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7633607307618246, 8);
  sqcRYGate(q, -3.112423134922889, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0024571936244512926, 8);
  sqcRYGate(q, 3.1298003344133467, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.089941847773356, 9);
  sqcRYGate(q, 0.0907603414989658, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2704328556757387, 9);
  sqcRYGate(q, 2.0524809877298855, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8655058640666419, 10);
  sqcRYGate(q, -0.0020647741676471654, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1119186702768387, 10);
  sqcRYGate(q, -3.0965988036872623, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.451347888503045, 11);
  sqcRYGate(q, 0.08126902486691279, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8427414550469634, 11);
  sqcRYGate(q, 0.9984915202348974, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.768421269907524, 12);
  sqcRYGate(q, 2.299171663118011, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1398871087774864, 12);
  sqcRYGate(q, 0.20952673662946564, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7136266509730316, 13);
  sqcRYGate(q, 0.04588452140799074, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2629831022482496, 13);
  sqcRYGate(q, -3.120848443503896, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.0238508813270855, 14);
  sqcRYGate(q, -0.41982077781246846, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7792615932426814, 14);
  sqcRYGate(q, -1.6525291364578794, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.323216720537181, 15);
  sqcRYGate(q, 1.2511895843242504, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.8063415463229209, 15);
  sqcRYGate(q, -0.06646196587276608, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.8753708787850936, 16);
  sqcRYGate(q, 0.867941356758418, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.04801281893080933, 16);
  sqcRYGate(q, 2.1004359468672646, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.1454435451181437, 17);
  sqcRYGate(q, -2.6867988732044608, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.9441308418071768, 17);
  sqcRYGate(q, 0.3199083300330692, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.0543673216635137, 18);
  sqcRYGate(q, 2.922351724261423, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.692779413540829, 18);
  sqcRYGate(q, -0.17847904342082455, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.569446198939146, 0);
  sqcRYGate(q, -0.3656232218750564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6574734760019172, 0);
  sqcRYGate(q, -0.7036242693161482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2031564417505, 1);
  sqcRYGate(q, -1.9374763186884303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08458688042409877, 1);
  sqcRYGate(q, 0.8837926894109264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1658779311617096, 2);
  sqcRYGate(q, 1.1718411768088612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5650093532296168, 2);
  sqcRYGate(q, 2.945774303607284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7638826633076716, 3);
  sqcRYGate(q, -1.415224462789433, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1285610025047794, 3);
  sqcRYGate(q, 2.619277588135023, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.69470320405092, 4);
  sqcRYGate(q, 0.4687378047020306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6892828070572756, 4);
  sqcRYGate(q, 3.0855930605012465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5034194679935475, 5);
  sqcRYGate(q, 0.6948243676305239, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.03996966388293388, 5);
  sqcRYGate(q, -2.8978583919264977, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9714477694659234, 6);
  sqcRYGate(q, 1.5800552962024224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0792446135745797, 6);
  sqcRYGate(q, 0.10626521272533918, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9298329312627076, 7);
  sqcRYGate(q, 1.891295649710293, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4190089012105071, 7);
  sqcRYGate(q, 0.5464778451767556, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8110494662895658, 8);
  sqcRYGate(q, -1.3603016097929206, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7981276938295034, 8);
  sqcRYGate(q, -0.13989259001489823, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7081943136150293, 9);
  sqcRYGate(q, 0.8543786954643693, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.912433194520403, 9);
  sqcRYGate(q, 2.9847025367500803, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.731753099598695, 10);
  sqcRYGate(q, 0.7344448621251048, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.487556766965642, 10);
  sqcRYGate(q, -2.3508502211492943, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7798446529701977, 11);
  sqcRYGate(q, 0.5955264465343388, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8174070687379755, 11);
  sqcRYGate(q, -1.8317891599866827, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.5042288983849854, 12);
  sqcRYGate(q, 0.01176523757111081, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.26409778364828806, 12);
  sqcRYGate(q, -3.119356367056348, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8605661713216115, 13);
  sqcRYGate(q, -2.6950559441111457, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.003272589279137544, 13);
  sqcRYGate(q, 0.013902067466389733, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.709705201466513, 14);
  sqcRYGate(q, -0.7171328864840998, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8219412764687677, 14);
  sqcRYGate(q, 0.6601055702863627, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8634749394236518, 15);
  sqcRYGate(q, -2.407406050378136, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.843643479273763, 15);
  sqcRYGate(q, -0.2802376255591117, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.970015911645345, 16);
  sqcRYGate(q, 2.190058969745618, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.7124540497409457, 16);
  sqcRYGate(q, -3.125997552329638, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.6061336772535446, 17);
  sqcRYGate(q, 1.0939450519242258, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.5927696818962125, 17);
  sqcRYGate(q, 0.2665759759379762, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.654875319917668, 18);
  sqcRYGate(q, -2.6731726269113376, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.299996953582201, 18);
  sqcRYGate(q, -0.4034905793001089, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.3469065688383455, 0);
  sqcRYGate(q, 2.1013848418426564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9785704022673682, 0);
  sqcRYGate(q, 2.2896221726698083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9549858144840515, 1);
  sqcRYGate(q, 2.71799534523781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.013265679873694924, 1);
  sqcRYGate(q, 1.522150935301334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.29218443306336106, 2);
  sqcRYGate(q, 0.06105318116472258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.836392615145784, 2);
  sqcRYGate(q, -0.16189698646806416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3507308885452898, 3);
  sqcRYGate(q, 1.7205861700970386, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9261516355897137, 3);
  sqcRYGate(q, 3.0128078327159997, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8852893787411715, 4);
  sqcRYGate(q, -1.4619212796632484, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2210420571655318, 4);
  sqcRYGate(q, 2.83986947191221, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6009330008955622, 5);
  sqcRYGate(q, -2.047195616898463, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9395659862497703, 5);
  sqcRYGate(q, -0.0009817667709256482, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.327688743667425, 6);
  sqcRYGate(q, -1.0517507091669325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.387269790991316, 6);
  sqcRYGate(q, 0.13652892703502406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18508520901851888, 7);
  sqcRYGate(q, 2.497526050064509, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1271598898794917, 7);
  sqcRYGate(q, 0.030806964844344087, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6162311232474453, 8);
  sqcRYGate(q, 0.512181695646086, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7440655945214865, 8);
  sqcRYGate(q, 2.6642100732274616, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.162493111123328, 9);
  sqcRYGate(q, 1.4936048715327592, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6052731069120035, 9);
  sqcRYGate(q, 3.1367781700390984, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5721733663012891, 10);
  sqcRYGate(q, 0.07130672714773154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.13384731933911, 10);
  sqcRYGate(q, -0.17661156503865882, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.012949477879118262, 11);
  sqcRYGate(q, -2.7803890332631185, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.24172692718516942, 11);
  sqcRYGate(q, -1.4650370731469617, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0420394199991732, 12);
  sqcRYGate(q, -0.8979950611805446, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.20396045150302555, 12);
  sqcRYGate(q, 1.092764274668067, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.894284649627128, 13);
  sqcRYGate(q, -2.198953102996933, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.030609715609806437, 13);
  sqcRYGate(q, -3.139888526489423, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8554884945967807, 14);
  sqcRYGate(q, 2.73030484923994, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2121661309594618, 14);
  sqcRYGate(q, -1.0069196932536828, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1271376303444987, 15);
  sqcRYGate(q, 2.8774886954890144, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.24854015249500883, 15);
  sqcRYGate(q, -2.5609469280565658, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.2181456480917241, 16);
  sqcRYGate(q, -1.8762723767009346, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.0304399076081, 16);
  sqcRYGate(q, -2.7195937765577027, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.39852076590539287, 17);
  sqcRYGate(q, -2.826679608386068, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.012868308410967977, 17);
  sqcRYGate(q, -3.1369237792200524, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.1013933013368966, 18);
  sqcRYGate(q, 2.91099556421795, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.1872436338018373, 18);
  sqcRYGate(q, 0.5618106657799616, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.9257760197966967, 0);
  sqcRYGate(q, 2.6228433775880755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0763733868316927, 0);
  sqcRYGate(q, -1.5622894959908784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5076823486587556, 1);
  sqcRYGate(q, -1.9681547837264706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.107828688048246, 1);
  sqcRYGate(q, 2.969069917549198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.99815068351394, 2);
  sqcRYGate(q, -0.7386060535519814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1617121723939885, 2);
  sqcRYGate(q, -3.036658864555196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6651908889485144, 3);
  sqcRYGate(q, 1.8087378590340828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0333435204191272, 3);
  sqcRYGate(q, -2.9170600088649863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6984469219504144, 4);
  sqcRYGate(q, 2.8854311567008066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.008653128231156479, 4);
  sqcRYGate(q, 0.2570389608568038, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.078889176308343, 5);
  sqcRYGate(q, -1.16919981332441, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.093474188470935, 5);
  sqcRYGate(q, 0.026588674351980104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.073391960137419, 6);
  sqcRYGate(q, -0.7159930376332575, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.360666302822217, 6);
  sqcRYGate(q, -2.6685591403892994, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3583693912557087, 7);
  sqcRYGate(q, -0.3138987545134632, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.126219249045636, 7);
  sqcRYGate(q, -3.1258593739243747, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9362397566314682, 8);
  sqcRYGate(q, -2.789933918803092, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1375813701872044, 8);
  sqcRYGate(q, 2.101953540042322, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2610686363473937, 9);
  sqcRYGate(q, 1.5889358619248144, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5398961936611792, 9);
  sqcRYGate(q, -0.04597580448584012, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9241269320815926, 10);
  sqcRYGate(q, 1.8250013769649231, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.562060490290332, 10);
  sqcRYGate(q, -0.22756451406453237, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.26129957394632763, 11);
  sqcRYGate(q, -0.7175601339581623, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.055621853560696, 11);
  sqcRYGate(q, 0.051269532266121506, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.0191467928343363, 12);
  sqcRYGate(q, -0.5532154641002579, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.027617455970104565, 12);
  sqcRYGate(q, -1.9389477309150436, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2118569383572493, 13);
  sqcRYGate(q, 0.7282904873249149, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.03695208872438549, 13);
  sqcRYGate(q, 0.04696701514869783, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0204920050914905, 14);
  sqcRYGate(q, 0.5876081059910835, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7578548722923228, 14);
  sqcRYGate(q, 2.945906069448444, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4292183543700107, 15);
  sqcRYGate(q, 0.9627021576869838, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.0363159946063423, 15);
  sqcRYGate(q, -3.0978321396241624, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.8537553514338769, 16);
  sqcRYGate(q, -0.5561822022033134, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.869973523724645, 16);
  sqcRYGate(q, -2.747383478754398, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.6378179576846925, 17);
  sqcRYGate(q, 0.21238635513902623, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.6752190933663615, 17);
  sqcRYGate(q, 3.1173818010010432, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -3.118710208241771, 18);
  sqcRYGate(q, 1.0534926008194407, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.2978147690640207, 18);
  sqcRYGate(q, -2.8333692702319535, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8186792289147158, 0);
  sqcRYGate(q, -1.670916464095025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6959293945029614, 0);
  sqcRYGate(q, -0.9872068566817919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1354917795742283, 1);
  sqcRYGate(q, -2.3226239837122282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9944936583401054, 1);
  sqcRYGate(q, -0.042605488002303675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1815379450568742, 2);
  sqcRYGate(q, -2.28650589375502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18201625788066167, 2);
  sqcRYGate(q, 2.9504439551871893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1537199599077055, 3);
  sqcRYGate(q, 1.2924332441028312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.148119784763419, 3);
  sqcRYGate(q, 0.8234301284276314, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6455921611437617, 4);
  sqcRYGate(q, 0.3303099421857973, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9037682147388586, 4);
  sqcRYGate(q, 2.0417580472778036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21666748541768044, 5);
  sqcRYGate(q, 0.14414055762601752, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.782931116987812, 5);
  sqcRYGate(q, 0.05300769188963281, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8062599037186615, 6);
  sqcRYGate(q, -2.781693463820307, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.021193914096800645, 6);
  sqcRYGate(q, 0.8698046567970321, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5998304344513796, 7);
  sqcRYGate(q, -2.739333557022388, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.030164461384401493, 7);
  sqcRYGate(q, 0.04632163915755666, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0560386097503631, 8);
  sqcRYGate(q, -1.6612742427508875, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.662584988772799, 8);
  sqcRYGate(q, -0.8202781116887299, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5437781798461527, 9);
  sqcRYGate(q, 1.9809437047644645, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7411535766200317, 9);
  sqcRYGate(q, 0.06757114162120571, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1611430703427334, 10);
  sqcRYGate(q, -2.09155437710864, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.134729364556505, 10);
  sqcRYGate(q, 0.05177994333557745, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8413878559512593, 11);
  sqcRYGate(q, -0.9163218437307536, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.9661730531221853, 11);
  sqcRYGate(q, -0.04059505595428625, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.3794015017847485, 12);
  sqcRYGate(q, -0.586989343283801, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.4308567212138108, 12);
  sqcRYGate(q, 1.2948943114219262, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7628839798519227, 13);
  sqcRYGate(q, -0.36130056429938223, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1240770208991027, 13);
  sqcRYGate(q, 2.1675624427696647, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.067529131833427, 14);
  sqcRYGate(q, -0.2688308516755017, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.438788163890224, 14);
  sqcRYGate(q, -0.006131728583167018, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.717291483077827, 15);
  sqcRYGate(q, -2.6841362274451703, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.3994108703406338, 15);
  sqcRYGate(q, 0.7612850975313812, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.8195548754963757, 16);
  sqcRYGate(q, 0.09824684342991467, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.028885918379796035, 16);
  sqcRYGate(q, 2.9392897432030383, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.29795594723261093, 17);
  sqcRYGate(q, -0.7727199703545427, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.023699179299518924, 17);
  sqcRYGate(q, 3.1258515677223246, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.37735199964927313, 18);
  sqcRYGate(q, -0.7784412977976405, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5187130545710827, 18);
  sqcRYGate(q, -1.3311406682847848, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.593191159304869, 0);
  sqcRYGate(q, 2.214269811566009, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.081474561622136, 0);
  sqcRYGate(q, 0.5083552615836896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5704861175279448, 1);
  sqcRYGate(q, 0.12205576798436935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03519466857688976, 1);
  sqcRYGate(q, -0.24145548496628189, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2940650183337825, 2);
  sqcRYGate(q, -0.80699615619685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6193066610975695, 2);
  sqcRYGate(q, -2.5064457881110997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3720496240173086, 3);
  sqcRYGate(q, -3.0714697989271826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0008988809877923387, 3);
  sqcRYGate(q, -0.08549004922362019, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6842979880148554, 4);
  sqcRYGate(q, -0.6019459746460676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.001992429274592311, 4);
  sqcRYGate(q, -0.5240387607516749, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3155464989347345, 5);
  sqcRYGate(q, -1.6049419902980269, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7102304596115978, 5);
  sqcRYGate(q, 3.0710788529984168, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8489816294489144, 6);
  sqcRYGate(q, -2.6242798317746048, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.07429673639365, 6);
  sqcRYGate(q, -2.0320297811391415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6733286005253305, 7);
  sqcRYGate(q, -1.9239766161884493, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.113236178819478, 7);
  sqcRYGate(q, 0.0034739393627614135, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1809165434890891, 8);
  sqcRYGate(q, 2.8482502316231204, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.04590538646364983, 8);
  sqcRYGate(q, 2.5278001240113226, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7070442010217581, 9);
  sqcRYGate(q, 0.2092828279164598, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3188698272655137, 9);
  sqcRYGate(q, 3.132565723435837, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.017157996002092446, 10);
  sqcRYGate(q, -2.336556030713288, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4743717500066182, 10);
  sqcRYGate(q, -1.562542244400633, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.809533191808705, 11);
  sqcRYGate(q, -0.5716062613734549, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.024854859887371534, 11);
  sqcRYGate(q, -0.024839633573174383, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6699699219207096, 12);
  sqcRYGate(q, 2.1792796284775435, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.09909810583633, 12);
  sqcRYGate(q, -3.0776066106663302, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1533328489841326, 13);
  sqcRYGate(q, -1.3288039963713694, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.04061238690712, 13);
  sqcRYGate(q, -2.1323602932229715, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9386846018441524, 14);
  sqcRYGate(q, -1.8560040329987988, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9292272976533988, 14);
  sqcRYGate(q, 1.6695388003086564, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.40687201199748646, 15);
  sqcRYGate(q, 0.6617427949644776, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.7067513514600243, 15);
  sqcRYGate(q, -0.03938644259059735, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.431352679033795, 16);
  sqcRYGate(q, -0.5185075049144343, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.0286234179320832, 16);
  sqcRYGate(q, -1.455061265786102, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.5145708878794157, 17);
  sqcRYGate(q, 1.416310977337898, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.7195297920185153, 17);
  sqcRYGate(q, -0.05987871117113771, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.791609106017686, 18);
  sqcRYGate(q, 1.8037071967388352, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.37565719448291085, 18);
  sqcRYGate(q, -1.4203380997348916, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.9332848675963731, 0);
  sqcRYGate(q, -1.739950178891678, 1);
  sqcRYGate(q, 3.0282902530586555, 2);
  sqcRYGate(q, -3.0728488342605687, 3);
  sqcRYGate(q, -0.4226045584826882, 4);
  sqcRYGate(q, 0.5867204069486471, 5);
  sqcRYGate(q, 0.020273969293373995, 6);
  sqcRYGate(q, -1.5164913903566895, 7);
  sqcRYGate(q, -3.081086084710525, 8);
  sqcRYGate(q, 1.5154684348258085, 9);
  sqcRYGate(q, -0.17792468517799886, 10);
  sqcRYGate(q, 0.2891264316150366, 11);
  sqcRYGate(q, -2.814463525979845, 12);
  sqcRYGate(q, -0.04520015662810877, 13);
  sqcRYGate(q, -1.07645355504891, 14);
  sqcRYGate(q, -0.3329995391158134, 15);
  sqcRYGate(q, -0.3065104432023524, 16);
  sqcRYGate(q, 0.740409039387024, 17);
  sqcRYGate(q, 1.246182886685782, 18);
  sqcRYGate(q, 1.6317600163906336, 19);

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
