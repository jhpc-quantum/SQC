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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.731950374848236, 0);
  sqcRYGate(q, 1.0095962421938955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3437868086375593, 0);
  sqcRYGate(q, -2.911872705305792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2051072485943699, 2);
  sqcRYGate(q, 1.2045079897970874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4325932558689001, 2);
  sqcRYGate(q, -2.4934271491286943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9121342920402343, 4);
  sqcRYGate(q, 2.999585848134599, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.066439378016418, 4);
  sqcRYGate(q, -0.09346198650934934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.18117839667084468, 6);
  sqcRYGate(q, 1.8363246798633204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.929426195607315, 6);
  sqcRYGate(q, 2.870902059497242, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.517229512465994, 8);
  sqcRYGate(q, 0.07392598811671296, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.639093312261786, 8);
  sqcRYGate(q, -1.5510664100060523, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8339091372950168, 10);
  sqcRYGate(q, -1.5165204923471345, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2640908964130497, 10);
  sqcRYGate(q, -0.12256646016690453, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.41751899454849317, 12);
  sqcRYGate(q, 2.349977319167385, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0451005780260694, 12);
  sqcRYGate(q, -0.6862799082709188, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.442261529698964, 14);
  sqcRYGate(q, -2.3450379453010504, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.41589354906375, 14);
  sqcRYGate(q, -1.8166834372408238, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5505978023300613, 0);
  sqcRYGate(q, -1.9714626750023696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7052558300840084, 0);
  sqcRYGate(q, -2.288209943253467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.049803186415480066, 2);
  sqcRYGate(q, -2.4958146153591128, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.747343274782463, 2);
  sqcRYGate(q, 3.1413034041413823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.941307651417696, 4);
  sqcRYGate(q, 0.8558212895470634, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.00968865021699, 4);
  sqcRYGate(q, 2.0163614831407934, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9713157129324346, 6);
  sqcRYGate(q, 0.02149407071603715, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.08681041260719646, 6);
  sqcRYGate(q, 0.007841063973464136, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.92162938695967, 8);
  sqcRYGate(q, 0.11262501608410602, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.605540169021295, 8);
  sqcRYGate(q, -2.6113794571738547, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5203775970319997, 10);
  sqcRYGate(q, -2.394477521620562, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1299226227778876, 10);
  sqcRYGate(q, 0.02191789012359486, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.4378306966069685, 12);
  sqcRYGate(q, 1.1955167255890489, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.0121727972068502, 12);
  sqcRYGate(q, 2.200224508553373, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.4976560648307884, 1);
  sqcRYGate(q, 2.8398453413475218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.04758313377151425, 1);
  sqcRYGate(q, 3.1415029597489066, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1785715354418365, 3);
  sqcRYGate(q, -2.988117780684614, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0521909939037606, 3);
  sqcRYGate(q, 0.995868230234169, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5524741336479364, 5);
  sqcRYGate(q, 2.626361488204174, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5761801452462718, 5);
  sqcRYGate(q, 1.5717089197955172, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.402283732703199, 7);
  sqcRYGate(q, -0.2911466312668929, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0477158477557076, 7);
  sqcRYGate(q, 0.10412504534186513, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.469662977014587, 9);
  sqcRYGate(q, 0.6600282295832063, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.6960865368035276, 9);
  sqcRYGate(q, -0.24101800903775447, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.9737528331036307, 11);
  sqcRYGate(q, -2.150968749310262, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.06174152630116923, 11);
  sqcRYGate(q, 3.094284346667757, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.607472801074903, 13);
  sqcRYGate(q, -0.6874337719493626, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.787877149698873, 13);
  sqcRYGate(q, 2.5040879837439065, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.650104419574551, 0);
  sqcRYGate(q, 1.468282433430568, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.663089838005871, 0);
  sqcRYGate(q, 1.4773435981379799, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6521770533928186, 1);
  sqcRYGate(q, 2.5838239732796766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.027610194393511, 1);
  sqcRYGate(q, 2.2042746348663114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.344074638497611, 2);
  sqcRYGate(q, -1.7118296984128447, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.000323265102903188, 2);
  sqcRYGate(q, 3.1412366211646865, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.776320895619164, 3);
  sqcRYGate(q, 2.468016463154366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0008286821764391448, 3);
  sqcRYGate(q, 3.141581677437751, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.584008794452912, 4);
  sqcRYGate(q, -0.11108100354403483, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.3519215106987993, 4);
  sqcRYGate(q, -2.915911688232658, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.17612580178253423, 5);
  sqcRYGate(q, -1.0617926800694102, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.305087957625816, 5);
  sqcRYGate(q, -2.2263720012910504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2056774967309676, 6);
  sqcRYGate(q, 2.727755153409485, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.1400885422480393, 6);
  sqcRYGate(q, 3.1400977062070474, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.3815035569146008, 7);
  sqcRYGate(q, -1.1819450173059178, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.139095618231935, 7);
  sqcRYGate(q, 3.137171238460287, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0394914089809442, 8);
  sqcRYGate(q, -2.8825786072192616, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -2.0405663577196025, 8);
  sqcRYGate(q, -1.3354631316321746, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.461862758327569, 9);
  sqcRYGate(q, -1.2545223423359848, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.121793222638626, 9);
  sqcRYGate(q, -3.125817729994908, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9426027958337209, 10);
  sqcRYGate(q, 1.5494149543983304, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.06480116523313395, 10);
  sqcRYGate(q, -3.0902562694404647, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 1.369895923301648, 11);
  sqcRYGate(q, 2.194133315910886, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.06646012792227118, 11);
  sqcRYGate(q, 3.0718027411223314, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.4593487449448608, 12);
  sqcRYGate(q, 1.2074705176739795, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.8374345534597406, 12);
  sqcRYGate(q, 1.4732822577488465, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.38760902908630257, 13);
  sqcRYGate(q, 0.485047511507152, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.15707144492745115, 13);
  sqcRYGate(q, -2.934888263763322, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.2182553704852697, 0);
  sqcRYGate(q, -0.6429106722239695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0822371592928182, 0);
  sqcRYGate(q, -0.9641179251884934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1966358697876478, 2);
  sqcRYGate(q, -1.4622673099819021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.667342072540043, 2);
  sqcRYGate(q, 1.445401035470307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.379507122502247, 4);
  sqcRYGate(q, -0.11415679316432126, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4707676837824897, 4);
  sqcRYGate(q, 2.444666487022248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.09710408574377018, 6);
  sqcRYGate(q, 0.6813420546339172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3070429425168423, 6);
  sqcRYGate(q, 0.17104457384244487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.596289043525367, 8);
  sqcRYGate(q, -0.9189637400357702, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.120148253682084, 8);
  sqcRYGate(q, -2.3883302902163, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.468925270158047, 10);
  sqcRYGate(q, -1.8881950607639972, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7961312973474586, 10);
  sqcRYGate(q, -0.8089751509702475, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6929968515929232, 12);
  sqcRYGate(q, 2.929470589632421, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.38541191569411204, 12);
  sqcRYGate(q, 1.3410518194010774, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1932317984318115, 14);
  sqcRYGate(q, 1.7631397678413911, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.128951638324354, 14);
  sqcRYGate(q, -1.0021993879499835, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.18743582582385174, 0);
  sqcRYGate(q, 0.2042812352969161, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4392180142670981, 0);
  sqcRYGate(q, 1.6951345728183205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7733718841103716, 2);
  sqcRYGate(q, 0.7935674279784335, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1415350135733497, 2);
  sqcRYGate(q, -0.00016821483748330476, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.047007216350507, 4);
  sqcRYGate(q, 0.11773993112941146, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0771524763284424, 4);
  sqcRYGate(q, -3.112216818075811, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8654895122325915, 6);
  sqcRYGate(q, 1.2771490718191405, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.9693591565412776, 6);
  sqcRYGate(q, 0.001667027682546763, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6117857092588357, 8);
  sqcRYGate(q, 3.117535727975248, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.2940561201282632, 8);
  sqcRYGate(q, 3.009453300529491, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.06983084930699805, 10);
  sqcRYGate(q, 1.9014048994937258, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.7043258216920147, 10);
  sqcRYGate(q, 0.3021092568347586, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.7057073645249156, 12);
  sqcRYGate(q, 0.23489445104167217, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.22180505466137668, 12);
  sqcRYGate(q, -0.8174157755068894, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.3596283608874578, 1);
  sqcRYGate(q, 0.07380901752262314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3560434012954668, 1);
  sqcRYGate(q, -1.5489559787602973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4779695325310698, 3);
  sqcRYGate(q, 2.5542412828611982, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0024075885603079537, 3);
  sqcRYGate(q, 2.2504076576291454, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.23445015055455443, 5);
  sqcRYGate(q, -1.7969716871636043, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5874752519798925, 5);
  sqcRYGate(q, 0.4775704620112321, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.4193121713207333, 7);
  sqcRYGate(q, 0.7276945094117281, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.005215469652940464, 7);
  sqcRYGate(q, 3.1258353803621097, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.6176589572124112, 9);
  sqcRYGate(q, -1.9556779618121514, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1365140244978105, 9);
  sqcRYGate(q, 3.139180030066837, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.4542418517481808, 11);
  sqcRYGate(q, -0.5488841176134133, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.006144022401096, 11);
  sqcRYGate(q, -2.7589242877084565, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.4533774874248793, 13);
  sqcRYGate(q, 2.1230338259634234, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.1207903202056717, 13);
  sqcRYGate(q, 3.123199780175754, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.47126722525713666, 0);
  sqcRYGate(q, -2.6119100469939194, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.127366565412669, 0);
  sqcRYGate(q, 3.1210174464344207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3700586776328567, 1);
  sqcRYGate(q, -0.2733099807148981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7712994423507828, 1);
  sqcRYGate(q, 1.2352702441585404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.108197708492618, 2);
  sqcRYGate(q, -0.2319130070728019, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.138879789658473, 2);
  sqcRYGate(q, -3.1409551177577772, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.3779638276726516, 3);
  sqcRYGate(q, -2.933351688190154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.140971334627555, 3);
  sqcRYGate(q, 0.0019729911154628965, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.20914883680604188, 4);
  sqcRYGate(q, 2.9171383500211814, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.851823007457897, 4);
  sqcRYGate(q, 1.1132764163576852, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.7874644347316084, 5);
  sqcRYGate(q, 2.1839241869850072, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.131490488680751, 5);
  sqcRYGate(q, 1.032187161826232, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5832148257507574, 6);
  sqcRYGate(q, 2.949683901171996, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.7653717251291049, 6);
  sqcRYGate(q, -0.029794315514992675, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.7516802667467393, 7);
  sqcRYGate(q, -2.9075412708363584, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.121468810609521, 7);
  sqcRYGate(q, -0.00019820587124108613, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8796204806290815, 8);
  sqcRYGate(q, -0.285551422612684, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.401519220549308, 8);
  sqcRYGate(q, 0.23142750956229846, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.715314536801053, 9);
  sqcRYGate(q, -2.7709816231370406, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.110086077774744, 9);
  sqcRYGate(q, 3.1135756190673978, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5558834699080824, 10);
  sqcRYGate(q, -0.34914878001091226, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.7645213992834329, 10);
  sqcRYGate(q, 0.1387388444572988, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 1.167996740639083, 11);
  sqcRYGate(q, 2.5335837780590094, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9590321801127527, 11);
  sqcRYGate(q, -2.0890294535389637, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2142881192099084, 12);
  sqcRYGate(q, 0.3884798097509241, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.11186488962434227, 12);
  sqcRYGate(q, 0.4620484895735806, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.41013246812708726, 13);
  sqcRYGate(q, -0.4125200336149933, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.034297855666969, 13);
  sqcRYGate(q, 2.3756760976090003, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1163916971043273, 0);
  sqcRYGate(q, -2.2906842820090296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7337663760227588, 0);
  sqcRYGate(q, 1.9044885483206666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12975546886794556, 2);
  sqcRYGate(q, 2.3029618255818405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37535245704874143, 2);
  sqcRYGate(q, -2.933297730363139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7958574431042932, 4);
  sqcRYGate(q, 0.8488485488821071, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.826363574297053, 4);
  sqcRYGate(q, 1.5614305342336552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.135901044607128, 6);
  sqcRYGate(q, -2.046455723339089, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9899598286808735, 6);
  sqcRYGate(q, 0.3492101688167901, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9467231679863808, 8);
  sqcRYGate(q, -2.6186472534458614, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.101031401278144, 8);
  sqcRYGate(q, 0.09524120488264298, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8854310305283601, 10);
  sqcRYGate(q, 0.4391484945878569, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.529883485399196, 10);
  sqcRYGate(q, -3.1117978246214997, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4397891908896447, 12);
  sqcRYGate(q, -1.3027453845019075, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.813999912327307, 12);
  sqcRYGate(q, 2.9523099502932006, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.2474762579853478, 14);
  sqcRYGate(q, -0.14357078555971398, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.4225648915915281, 14);
  sqcRYGate(q, -2.6595868157971436, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8561671665670261, 0);
  sqcRYGate(q, -2.8906071400371567, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.38488548201161077, 0);
  sqcRYGate(q, -0.1552530300200876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2301599283156195, 2);
  sqcRYGate(q, -0.6869262544297801, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.28552167373, 2);
  sqcRYGate(q, -2.4583463270873542, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0206293221435963, 4);
  sqcRYGate(q, 1.5756584965611005, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1415659570768386, 4);
  sqcRYGate(q, -3.1412082575319635, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8121447126012056, 6);
  sqcRYGate(q, -1.9692769063960702, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1384027305776168, 6);
  sqcRYGate(q, -0.001411875126808404, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.924781575078773, 8);
  sqcRYGate(q, -2.7567123283092, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.246919009421908, 8);
  sqcRYGate(q, 3.136093641570973, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.07953106622473, 10);
  sqcRYGate(q, -0.9276574081857479, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.722243219061464, 10);
  sqcRYGate(q, -0.31372147856144667, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.6918302116381905, 12);
  sqcRYGate(q, -2.457017296666091, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.465193645641189, 12);
  sqcRYGate(q, -0.45543254605197725, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.8533009410815122, 1);
  sqcRYGate(q, 0.09912743366032657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.050401478948682, 1);
  sqcRYGate(q, -1.0578736679385852, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4068314108789246, 3);
  sqcRYGate(q, 0.589559970852354, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5646885874778818, 3);
  sqcRYGate(q, 2.820682681082698, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6934183576564484, 5);
  sqcRYGate(q, 1.7746422550910417, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6638443435477118, 5);
  sqcRYGate(q, 2.3534951673923654, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.06836142592286798, 7);
  sqcRYGate(q, 2.934918345790655, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.96918172447426, 7);
  sqcRYGate(q, 0.004662552043295243, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.5353900114232452, 9);
  sqcRYGate(q, -3.076163184193126, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.030869914090153827, 9);
  sqcRYGate(q, 0.003153219045702106, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.93757364357361, 11);
  sqcRYGate(q, 0.7113292460934316, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.4911130040218623, 11);
  sqcRYGate(q, -0.939324206954617, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.535672851407214, 13);
  sqcRYGate(q, 0.5897326905250799, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.3163906458358117, 13);
  sqcRYGate(q, 3.140545859002276, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.5790758882973961, 0);
  sqcRYGate(q, -0.8024928956791424, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 7.913146640525781e-05, 0);
  sqcRYGate(q, 2.942174927736903, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4860123229094426, 1);
  sqcRYGate(q, 1.1234961061610278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.792384138376721, 1);
  sqcRYGate(q, 0.060617538049811515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.41940328950811, 2);
  sqcRYGate(q, 1.499270575923279, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -9.090765793118294e-05, 2);
  sqcRYGate(q, -3.141433979783249, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.9840830387061636, 3);
  sqcRYGate(q, -0.5500983818859149, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.570956402258921, 3);
  sqcRYGate(q, 1.5700770928763088, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7928170825637464, 4);
  sqcRYGate(q, 2.3142255747141047, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.9531203176115293, 4);
  sqcRYGate(q, -2.535656470271353, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.44877775762547323, 5);
  sqcRYGate(q, -3.1406556229856184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.77074250889408, 5);
  sqcRYGate(q, -0.5107201646425015, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7984835892117269, 6);
  sqcRYGate(q, 2.8984431614378345, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -3.123692406782333, 6);
  sqcRYGate(q, 3.137257490388326, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.6136870738644902, 7);
  sqcRYGate(q, 0.20331181843013724, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1415022305655786, 7);
  sqcRYGate(q, 0.00044232842446776093, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5019053940175244, 8);
  sqcRYGate(q, -1.831255604243896, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.0390600203653193, 8);
  sqcRYGate(q, -2.664848988017953, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.7929475206301093, 9);
  sqcRYGate(q, 1.0925784003882428, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.005437126012031612, 9);
  sqcRYGate(q, -0.04042271099076881, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6788738538248653, 10);
  sqcRYGate(q, 0.8834195646214352, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.46516590160452914, 10);
  sqcRYGate(q, -2.938012545360729, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.0070104850580792, 11);
  sqcRYGate(q, 0.29019616958430916, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5595747886553664, 11);
  sqcRYGate(q, -2.630651988674363, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.4294035730641386, 12);
  sqcRYGate(q, 1.7298930331326314, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 1.21433965158235, 12);
  sqcRYGate(q, -1.6475281283755248, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.578823828306198, 13);
  sqcRYGate(q, 0.4537707855705544, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9639122933037276, 13);
  sqcRYGate(q, 0.8684320010977621, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.591537079913735, 0);
  sqcRYGate(q, 1.0555230761165313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5035299305085164, 0);
  sqcRYGate(q, 1.6040793568725156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1777475497973198, 2);
  sqcRYGate(q, 1.7018365130951416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7660797724772328, 2);
  sqcRYGate(q, -1.2891436859446541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.510248748976931, 4);
  sqcRYGate(q, 3.018142877326569, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8643751610987218, 4);
  sqcRYGate(q, -1.9706811620253637, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.633529234990772, 6);
  sqcRYGate(q, 1.2071570342782723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.621677199786618, 6);
  sqcRYGate(q, -0.7375628681619556, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.100803835195853, 8);
  sqcRYGate(q, -2.009110572820853, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.016867944295849036, 8);
  sqcRYGate(q, 3.1347578135038656, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5115204163441381, 10);
  sqcRYGate(q, 2.1514215107586496, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0958063941157663, 10);
  sqcRYGate(q, 0.1664107702780342, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7984000056349885, 12);
  sqcRYGate(q, -2.501224514343687, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.138004744860485, 12);
  sqcRYGate(q, 3.136908703892399, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.76501007349959, 14);
  sqcRYGate(q, -1.8712389495683306, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.140944241555471, 14);
  sqcRYGate(q, -0.04653700430790447, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2761844200325532, 0);
  sqcRYGate(q, -2.635658337060818, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7995937960711026, 0);
  sqcRYGate(q, 0.6239728057536107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.91084668913671, 2);
  sqcRYGate(q, 0.05890090084382038, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.00023744437027802998, 2);
  sqcRYGate(q, 0.0011002799197949997, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6943469175791628, 4);
  sqcRYGate(q, -2.4225043308918797, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3148899881425624, 4);
  sqcRYGate(q, -2.531818440577284, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1475931777267279, 6);
  sqcRYGate(q, 0.05999963220981108, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.137307521668023, 6);
  sqcRYGate(q, 0.0015523543111317652, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.1177666538796658, 8);
  sqcRYGate(q, 2.670983774970094, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.04335025251823377, 8);
  sqcRYGate(q, 0.07877713739482416, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5619063448202153, 10);
  sqcRYGate(q, -0.24274452499553956, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.111711269156506, 10);
  sqcRYGate(q, 1.3985423590286352, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.4893906760802071, 12);
  sqcRYGate(q, 0.24306094103692552, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.0019522778699849752, 12);
  sqcRYGate(q, 1.7664453665399817, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.8873377555753317, 1);
  sqcRYGate(q, -0.707608879526223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.001040794117883047, 1);
  sqcRYGate(q, 2.725302456046383, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2078380112946308, 3);
  sqcRYGate(q, 2.324010933413539, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0110481941569844e-05, 3);
  sqcRYGate(q, -0.00014149408112565755, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5092361719507986, 5);
  sqcRYGate(q, 1.1944856049672083, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.575358845944646, 5);
  sqcRYGate(q, -0.21354614747739611, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.38119163984502175, 7);
  sqcRYGate(q, -1.9816655498888296, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.27355046115202675, 7);
  sqcRYGate(q, 3.122715542084728, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.1802889095036146, 9);
  sqcRYGate(q, 1.2604483639427781, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.139537051611374, 9);
  sqcRYGate(q, -3.139759245761225, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.24030866622358626, 11);
  sqcRYGate(q, -1.2253194001711387, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.6173118938930635, 11);
  sqcRYGate(q, 1.6243404114387454, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.2155141353569086, 13);
  sqcRYGate(q, -1.4460378659047093, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.6595011561557439, 13);
  sqcRYGate(q, 1.0894570604452665, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.04546891102451, 0);
  sqcRYGate(q, 2.553343397630444, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9586734746210056, 0);
  sqcRYGate(q, -1.2948835455525258, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7553957817892374, 1);
  sqcRYGate(q, 3.125419262546257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.025772065639626085, 1);
  sqcRYGate(q, -0.03411057038207321, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4792422027009393, 2);
  sqcRYGate(q, 1.3334840674127832, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.07414569533968329, 2);
  sqcRYGate(q, -0.001097972505329281, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.8636379159033469, 3);
  sqcRYGate(q, 2.4809553616472892, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1406726061652157, 3);
  sqcRYGate(q, 3.1411231577691083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4829020723469988, 4);
  sqcRYGate(q, -1.808884529431278, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.009947052930338705, 4);
  sqcRYGate(q, 2.6201441029961563, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.196035487576112, 5);
  sqcRYGate(q, -1.8258231500499789, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1399034028836685, 5);
  sqcRYGate(q, 3.1382936190299278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1215287284718425, 6);
  sqcRYGate(q, -1.6940644013795874, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -3.0556935863783723, 6);
  sqcRYGate(q, -3.0909526453678917, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.9636210273117343, 7);
  sqcRYGate(q, -1.4944894845116456, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1413624679372587, 7);
  sqcRYGate(q, -3.107397284423665, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3373309453307844, 8);
  sqcRYGate(q, -1.4710334592955192, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.226714955032497, 8);
  sqcRYGate(q, 1.6969977546872874, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.9868810145408737, 9);
  sqcRYGate(q, 0.7540423671856878, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0003286961038755365, 9);
  sqcRYGate(q, -3.140242849708473, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3957459126875595, 10);
  sqcRYGate(q, -0.0258107790090866, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.4941867304603824, 10);
  sqcRYGate(q, -1.5042083468695793, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.2179862968536757, 11);
  sqcRYGate(q, -0.9179701669496055, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.091143476632087, 11);
  sqcRYGate(q, -3.1277820963747485, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.37879273267652, 12);
  sqcRYGate(q, 0.7336618442931044, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.970602664548482, 12);
  sqcRYGate(q, -2.262330166982406, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.6329177955481838, 13);
  sqcRYGate(q, -1.8584337341699833, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.722324848036517, 13);
  sqcRYGate(q, 1.6453658500792523, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6460687353307792, 0);
  sqcRYGate(q, -2.562067192492043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.011801637370884244, 0);
  sqcRYGate(q, 0.2650625383829093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.72729382388985, 2);
  sqcRYGate(q, -1.2263043718126285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21499478645439016, 2);
  sqcRYGate(q, 3.095984219991269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.101454548239355, 4);
  sqcRYGate(q, -0.8224756968581126, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.667211267460103, 4);
  sqcRYGate(q, -1.6029105004919622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.383640945626569, 6);
  sqcRYGate(q, 0.24502693644541207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1168491481311094, 6);
  sqcRYGate(q, -0.04717312123309103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42632800953811856, 8);
  sqcRYGate(q, -2.936237468484904, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7710746039812063, 8);
  sqcRYGate(q, 0.7833232755324513, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.13009017005492898, 10);
  sqcRYGate(q, 0.48470874817728943, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6044382712957947, 10);
  sqcRYGate(q, -1.3535486276365551, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6965438534295796, 12);
  sqcRYGate(q, -1.898955206993425, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5722585369269213, 12);
  sqcRYGate(q, 1.3599733991564378, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5777048006029677, 14);
  sqcRYGate(q, 1.3626836467446664, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2021744612879001, 14);
  sqcRYGate(q, 0.03358454712062708, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7368381921367213, 0);
  sqcRYGate(q, 0.8791907289032012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2893295409865617, 0);
  sqcRYGate(q, -2.651184592491766, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40949987041987534, 2);
  sqcRYGate(q, -3.033275451702101, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.05513665842280592, 2);
  sqcRYGate(q, -3.1330775540692577, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1610320996227608, 4);
  sqcRYGate(q, -0.390589415844368, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.00975967559950523, 4);
  sqcRYGate(q, 0.006553406065313894, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9136589003498452, 6);
  sqcRYGate(q, 0.6962526148350746, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1352285742074844, 6);
  sqcRYGate(q, 0.001203868731146862, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.1968818810634634, 8);
  sqcRYGate(q, -1.946411914560561, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.0034247626770573802, 8);
  sqcRYGate(q, -0.11892975362612734, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.6385841127750056, 10);
  sqcRYGate(q, 2.7799984853906023, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.9644472301522002, 10);
  sqcRYGate(q, 3.1096225603538645, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.904701882168851, 12);
  sqcRYGate(q, 1.485357932253053, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.2814363265309203, 12);
  sqcRYGate(q, -0.6372728779295187, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.147417044428301, 1);
  sqcRYGate(q, 1.3710045915845293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9470820871614665, 1);
  sqcRYGate(q, -3.059022825851179, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5282869845736332, 3);
  sqcRYGate(q, 2.9881346439133263, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.141543014598054, 3);
  sqcRYGate(q, 0.004468553959592114, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6048161308172646, 5);
  sqcRYGate(q, -1.7764940163315837, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.05833738937588761, 5);
  sqcRYGate(q, -0.05442522583611847, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.44996861587089926, 7);
  sqcRYGate(q, -1.7166858376142897, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.04196931125878828, 7);
  sqcRYGate(q, 3.1220731564439514, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.525238928772651, 9);
  sqcRYGate(q, -3.046076983640868, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.037424449054682396, 9);
  sqcRYGate(q, -3.1313828682230977, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6311931008209615, 11);
  sqcRYGate(q, 2.067429055296971, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1101844497360416, 11);
  sqcRYGate(q, -3.019738780100812, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.0562800895180047, 13);
  sqcRYGate(q, 1.0171794117980388, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.4908361562035495, 13);
  sqcRYGate(q, 2.928520885670016, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.8900710154458547, 0);
  sqcRYGate(q, 0.7457707587593152, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.024880756480514, 0);
  sqcRYGate(q, 3.036819401062734, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.34426307057998, 1);
  sqcRYGate(q, -2.757752504096092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4192627799916537, 1);
  sqcRYGate(q, 2.9795924921566663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7970606092493986, 2);
  sqcRYGate(q, -1.4439781161924614, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.003061557771675716, 2);
  sqcRYGate(q, -3.1415062199571633, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.013346605925525069, 3);
  sqcRYGate(q, 0.91737692179693, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.39006804151923197, 3);
  sqcRYGate(q, 3.0166844680671656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.811994684968562, 4);
  sqcRYGate(q, 1.7757881009384295, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.007466405500112572, 4);
  sqcRYGate(q, 0.0001513348514449776, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.7157488695640426, 5);
  sqcRYGate(q, 3.0149816918455152, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09988096713685081, 5);
  sqcRYGate(q, 1.9654520209957305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.930103577180825, 6);
  sqcRYGate(q, -1.1018125430995407, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.1045341351732976, 6);
  sqcRYGate(q, 0.05118946479746006, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.9296312994289879, 7);
  sqcRYGate(q, 2.4133717681672207, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.107482400498676, 7);
  sqcRYGate(q, -2.981377552302373, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.34550368243189666, 8);
  sqcRYGate(q, -2.9255711124066757, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.010711110594793204, 8);
  sqcRYGate(q, 3.0942777885136508, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.1094741788686136, 9);
  sqcRYGate(q, -1.5876780656055935, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9020198083216227, 9);
  sqcRYGate(q, -3.0922021147394845, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5951461789993313, 10);
  sqcRYGate(q, 0.023332552841317106, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.013133828210933451, 10);
  sqcRYGate(q, -3.0702291900368195, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.1289294607957494, 11);
  sqcRYGate(q, -1.535062597470751, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.0980270753925554, 11);
  sqcRYGate(q, 2.7909963478660886, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9739628769625583, 12);
  sqcRYGate(q, 2.301386888436086, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.38350040208509, 12);
  sqcRYGate(q, 3.0801739104797146, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.014242161974280448, 13);
  sqcRYGate(q, -0.3654056540626618, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0158814519817705, 13);
  sqcRYGate(q, 0.5836245329434785, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7603630893170554, 0);
  sqcRYGate(q, 0.4644450705932215, 1);
  sqcRYGate(q, -1.2210697959111139, 2);
  sqcRYGate(q, 2.9795738466753363, 3);
  sqcRYGate(q, -1.2338328729092467, 4);
  sqcRYGate(q, -0.13073356214493073, 5);
  sqcRYGate(q, 3.1023531022001096, 6);
  sqcRYGate(q, -0.0029647410172204407, 7);
  sqcRYGate(q, 2.9599771712360847, 8);
  sqcRYGate(q, -1.6905079526550244, 9);
  sqcRYGate(q, -3.124996047311591, 10);
  sqcRYGate(q, -3.0926403784687904, 11);
  sqcRYGate(q, 0.3833144551103099, 12);
  sqcRYGate(q, 2.8275402873534445, 13);
  sqcRYGate(q, 0.44390164670286675, 14);
  sqcRYGate(q, -3.1215670575914407, 15);

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
