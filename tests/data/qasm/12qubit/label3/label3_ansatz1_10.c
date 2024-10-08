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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.2890587929335837, 0);
  sqcRZGate(q, 2.600432952581985, 0);
  sqcRYGate(q, -3.112928644699085, 1);
  sqcRZGate(q, 1.4913037297294487, 1);
  sqcRYGate(q, -3.129636532769779, 2);
  sqcRZGate(q, 0.7228230507130923, 2);
  sqcRYGate(q, -0.03077262981213077, 3);
  sqcRZGate(q, 3.0875899353303455, 3);
  sqcRYGate(q, -1.5728735371486122, 4);
  sqcRZGate(q, -1.577792974156064, 4);
  sqcRYGate(q, -1.5421812571044136, 5);
  sqcRZGate(q, 0.10597917763128928, 5);
  sqcRYGate(q, 3.1071753405085483, 6);
  sqcRZGate(q, 1.6320496613256026, 6);
  sqcRYGate(q, -0.9192118718350917, 7);
  sqcRZGate(q, 0.015649746898382284, 7);
  sqcRYGate(q, -0.35495368048641757, 8);
  sqcRZGate(q, 1.1698167007731708, 8);
  sqcRYGate(q, -1.5027628649468934, 9);
  sqcRZGate(q, -2.408585156684895, 9);
  sqcRYGate(q, 0.15613193676849324, 10);
  sqcRZGate(q, 2.5554532054656676, 10);
  sqcRYGate(q, 0.6541693481330643, 11);
  sqcRZGate(q, -3.0511088827788084, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1227886449814215, 0);
  sqcRZGate(q, 2.6302233181639636, 0);
  sqcRYGate(q, 1.5723102883627993, 1);
  sqcRZGate(q, 1.8092309253261103, 1);
  sqcRYGate(q, 1.5861652599061886, 2);
  sqcRZGate(q, 0.03877487805034454, 2);
  sqcRYGate(q, -1.6577117792508511, 3);
  sqcRZGate(q, 0.004848983832037707, 3);
  sqcRYGate(q, -2.0473792681196876, 4);
  sqcRZGate(q, 3.076669945518357, 4);
  sqcRYGate(q, -1.6304579274832613, 5);
  sqcRZGate(q, -3.0133739870334577, 5);
  sqcRYGate(q, 3.0807964569720583, 6);
  sqcRZGate(q, 1.2510163504957443, 6);
  sqcRYGate(q, 1.8679896987084605, 7);
  sqcRZGate(q, 1.2144103006928058, 7);
  sqcRYGate(q, -3.093500905799223, 8);
  sqcRZGate(q, 1.3953258701339664, 8);
  sqcRYGate(q, 3.13525584098297, 9);
  sqcRZGate(q, 1.8333627956217047, 9);
  sqcRYGate(q, 1.4637370023084388, 10);
  sqcRZGate(q, 0.444209539096601, 10);
  sqcRYGate(q, 1.596541591201144, 11);
  sqcRZGate(q, 1.7554154640829776, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5676562428786092, 0);
  sqcRZGate(q, 0.041101941311889316, 0);
  sqcRYGate(q, 2.9886574798313443, 1);
  sqcRZGate(q, 2.5084856492522096, 1);
  sqcRYGate(q, -0.34980232921104193, 2);
  sqcRZGate(q, -2.313546610918856, 2);
  sqcRYGate(q, -1.5711531795272051, 3);
  sqcRZGate(q, -0.002565746367308997, 3);
  sqcRYGate(q, -1.6230946722486967, 4);
  sqcRZGate(q, 2.917031014328095, 4);
  sqcRYGate(q, -3.061254078833504, 5);
  sqcRZGate(q, -1.427271720083805, 5);
  sqcRYGate(q, 1.571019708395351, 6);
  sqcRZGate(q, -1.5645048800870587, 6);
  sqcRYGate(q, 1.462611810952243, 7);
  sqcRZGate(q, 1.250703401228355, 7);
  sqcRYGate(q, -2.6892820595912355, 8);
  sqcRZGate(q, 1.3842399315587535, 8);
  sqcRYGate(q, -0.5609454996939385, 9);
  sqcRZGate(q, -2.674908856033992, 9);
  sqcRYGate(q, 1.750076954411348, 10);
  sqcRZGate(q, -3.10093740310361, 10);
  sqcRYGate(q, 0.05564762486905739, 11);
  sqcRZGate(q, -3.0723141032181807, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.030735695006978175, 0);
  sqcRZGate(q, -2.0473928024030146, 0);
  sqcRYGate(q, 2.8804138146142253, 1);
  sqcRZGate(q, 2.137496610331718, 1);
  sqcRYGate(q, 1.5258029079774467, 2);
  sqcRZGate(q, 3.093567285561689, 2);
  sqcRYGate(q, -1.575040350753376, 3);
  sqcRZGate(q, 0.9630403307221719, 3);
  sqcRYGate(q, 0.0001813133027410866, 4);
  sqcRZGate(q, 0.1985343878987313, 4);
  sqcRYGate(q, 1.5836187554436592, 5);
  sqcRZGate(q, -0.0691000634877691, 5);
  sqcRYGate(q, -1.574182751112862, 6);
  sqcRZGate(q, 1.8825809650126315, 6);
  sqcRYGate(q, -1.5705975195480892, 7);
  sqcRZGate(q, -1.5132601607810088, 7);
  sqcRYGate(q, -1.575588528263865, 8);
  sqcRZGate(q, 0.39717853060209124, 8);
  sqcRYGate(q, 1.5885505005894258, 9);
  sqcRZGate(q, 1.5746065867573762, 9);
  sqcRYGate(q, 1.4521639979557917, 10);
  sqcRZGate(q, 0.9023205441024875, 10);
  sqcRYGate(q, 0.7066563918907125, 11);
  sqcRZGate(q, -1.6227721801280952, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.008657948381779667, 0);
  sqcRZGate(q, -3.135176623809626, 0);
  sqcRYGate(q, -1.309738615479422, 1);
  sqcRZGate(q, 3.129062348313576, 1);
  sqcRYGate(q, -1.569394924447503, 2);
  sqcRZGate(q, -0.797316916544335, 2);
  sqcRYGate(q, -1.5642925451218266, 3);
  sqcRZGate(q, -0.8197074835389581, 3);
  sqcRYGate(q, 1.428489670395259, 4);
  sqcRZGate(q, -3.004513883199493, 4);
  sqcRYGate(q, -1.567235404345892, 5);
  sqcRZGate(q, 3.0036933957440133, 5);
  sqcRYGate(q, 3.134051984756277, 6);
  sqcRZGate(q, 0.34335998439627613, 6);
  sqcRYGate(q, -3.0459457360836497, 7);
  sqcRZGate(q, -1.8306253431710549, 7);
  sqcRYGate(q, 0.2708371355497734, 8);
  sqcRZGate(q, -1.551365431464708, 8);
  sqcRYGate(q, 1.5693283802860292, 9);
  sqcRZGate(q, 3.102032753980385, 9);
  sqcRYGate(q, 0.1149765071617761, 10);
  sqcRZGate(q, -2.166721636043399, 10);
  sqcRYGate(q, 1.0227203575036246, 11);
  sqcRZGate(q, -1.783863039360182, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.5530211284390827, 0);
  sqcRZGate(q, -1.2146983736153514, 0);
  sqcRYGate(q, 1.5779768647512409, 1);
  sqcRZGate(q, 1.3167625946896484, 1);
  sqcRYGate(q, 3.138321124489431, 2);
  sqcRZGate(q, 0.09520556973555651, 2);
  sqcRYGate(q, 0.002605966717802378, 3);
  sqcRZGate(q, -0.7388870546453727, 3);
  sqcRYGate(q, 1.6633999191385511, 4);
  sqcRZGate(q, 0.019403308489982507, 4);
  sqcRYGate(q, -0.09342141952830676, 5);
  sqcRZGate(q, 1.6801848394608094, 5);
  sqcRYGate(q, 1.5907068725767868, 6);
  sqcRZGate(q, 1.5597735790309366, 6);
  sqcRYGate(q, 0.0022728581623177035, 7);
  sqcRZGate(q, 1.890428138970222, 7);
  sqcRYGate(q, 1.5255187951271347, 8);
  sqcRZGate(q, -0.0001456386579175308, 8);
  sqcRYGate(q, -1.5094033513947045, 9);
  sqcRZGate(q, -1.8608992491893623, 9);
  sqcRYGate(q, 2.3623162156892468, 10);
  sqcRZGate(q, -1.221900579694685, 10);
  sqcRYGate(q, -1.2631597807726962, 11);
  sqcRZGate(q, -0.0906056109614708, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1410644030738757, 0);
  sqcRZGate(q, -1.2118439849986433, 0);
  sqcRYGate(q, 0.9801669460140952, 1);
  sqcRZGate(q, 1.350174785521106, 1);
  sqcRYGate(q, -0.4982050721226986, 2);
  sqcRZGate(q, -2.726431428385467, 2);
  sqcRYGate(q, 3.12358860775689, 3);
  sqcRZGate(q, -1.5563964041328369, 3);
  sqcRYGate(q, -0.15623405554208336, 4);
  sqcRZGate(q, -1.5740747811962972, 4);
  sqcRYGate(q, -0.5552784947016838, 5);
  sqcRZGate(q, -2.2345136189131445, 5);
  sqcRYGate(q, -1.5864124941934143, 6);
  sqcRZGate(q, -0.1445135693825801, 6);
  sqcRYGate(q, -0.1805854783591334, 7);
  sqcRZGate(q, -1.5755794306011692, 7);
  sqcRYGate(q, -0.09252105147864942, 8);
  sqcRZGate(q, -0.0083985138789263, 8);
  sqcRYGate(q, -3.102448731596534, 9);
  sqcRZGate(q, 0.21274823271887564, 9);
  sqcRYGate(q, 1.661643125760869, 10);
  sqcRZGate(q, -2.8106267881094302, 10);
  sqcRYGate(q, 0.7078497337812664, 11);
  sqcRZGate(q, -0.8030271892988035, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.3365023776806133, 0);
  sqcRZGate(q, 2.6104867319560237, 0);
  sqcRYGate(q, 3.135063303660409, 1);
  sqcRZGate(q, -2.155508821382595, 1);
  sqcRYGate(q, 1.57118254627502, 2);
  sqcRZGate(q, -3.141481335577643, 2);
  sqcRYGate(q, -1.568669444547134, 3);
  sqcRZGate(q, -1.582645722113353, 3);
  sqcRYGate(q, 2.9825638750521137, 4);
  sqcRZGate(q, -1.5799301097319285, 4);
  sqcRYGate(q, 3.134266579809915, 5);
  sqcRZGate(q, -2.27272025988064, 5);
  sqcRYGate(q, -3.1311960770356957, 6);
  sqcRZGate(q, -0.14251991030073796, 6);
  sqcRYGate(q, -1.5601486711577899, 7);
  sqcRZGate(q, 1.7891296663740786, 7);
  sqcRYGate(q, -1.517261062172458, 8);
  sqcRZGate(q, -3.0402365989912514, 8);
  sqcRYGate(q, 1.4226494474264038, 9);
  sqcRZGate(q, -3.140114544671022, 9);
  sqcRYGate(q, 0.9269686278096376, 10);
  sqcRZGate(q, 2.7511612759151687, 10);
  sqcRYGate(q, 2.9312947242764045, 11);
  sqcRZGate(q, 3.138230000684911, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5702455112851084, 0);
  sqcRZGate(q, 1.5702984062541097, 0);
  sqcRYGate(q, -1.5705505956495824, 1);
  sqcRZGate(q, -1.571090655091288, 1);
  sqcRYGate(q, -1.5731318657759579, 2);
  sqcRZGate(q, 0.0016503350566402656, 2);
  sqcRYGate(q, 1.5179440838755156, 3);
  sqcRZGate(q, -3.1414488034047237, 3);
  sqcRYGate(q, -0.00048748359719397166, 4);
  sqcRZGate(q, -1.634820338325408, 4);
  sqcRYGate(q, 2.113692503640801, 5);
  sqcRZGate(q, -1.6410730871205432, 5);
  sqcRYGate(q, 1.572074526404692, 6);
  sqcRZGate(q, 1.1938693197331063, 6);
  sqcRYGate(q, 0.4030179047345299, 7);
  sqcRZGate(q, -0.2418241208386709, 7);
  sqcRYGate(q, -1.759911430810039, 8);
  sqcRZGate(q, -2.6846726460686248, 8);
  sqcRYGate(q, -3.1257478152269873, 9);
  sqcRZGate(q, -1.5550951455851667, 9);
  sqcRYGate(q, 0.0036141463255141555, 10);
  sqcRZGate(q, -1.1815724165672075, 10);
  sqcRYGate(q, -1.8420895947051283, 11);
  sqcRZGate(q, 2.978165086341583, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3000026452705105, 0);
  sqcRZGate(q, -3.140486757457804, 0);
  sqcRYGate(q, 1.5707940833860556, 1);
  sqcRZGate(q, 1.1160597093472555, 1);
  sqcRYGate(q, 1.6377900025980212, 2);
  sqcRZGate(q, -1.6512408501101028, 2);
  sqcRYGate(q, 1.5489228177146845, 3);
  sqcRZGate(q, -0.008959744214506932, 3);
  sqcRYGate(q, -0.010478552965951238, 4);
  sqcRZGate(q, 1.6316518425188848, 4);
  sqcRYGate(q, 1.6198384033924142, 5);
  sqcRZGate(q, 1.6266097039444825, 5);
  sqcRYGate(q, -2.9592348572956286, 6);
  sqcRZGate(q, 2.958584968064191, 6);
  sqcRYGate(q, -0.25390623908724397, 7);
  sqcRZGate(q, 0.42960468960590875, 7);
  sqcRYGate(q, 0.005333310636320476, 8);
  sqcRZGate(q, 2.6577806424197754, 8);
  sqcRYGate(q, 0.24176385244663243, 9);
  sqcRZGate(q, 1.6973048175367635, 9);
  sqcRYGate(q, -1.5352517990998793, 10);
  sqcRZGate(q, 1.2214678633394564, 10);
  sqcRYGate(q, 3.0580251834153245, 11);
  sqcRZGate(q, -1.2735137236053902, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5702642909011901, 0);
  sqcRZGate(q, -3.0174250657943142, 0);
  sqcRYGate(q, -3.0291675693909275, 1);
  sqcRZGate(q, 2.708903145738566, 1);
  sqcRYGate(q, -1.567717839733887, 2);
  sqcRZGate(q, 2.6887221286500473, 2);
  sqcRYGate(q, 0.9144136618084797, 3);
  sqcRZGate(q, -3.136597647028051, 3);
  sqcRYGate(q, -3.128842664585763, 4);
  sqcRZGate(q, -2.25456291446777, 4);
  sqcRYGate(q, 0.004353825597426564, 5);
  sqcRZGate(q, 3.0799801403132823, 5);
  sqcRYGate(q, 0.02564249657324602, 6);
  sqcRZGate(q, 2.942447189371413, 6);
  sqcRYGate(q, 0.4288085122919263, 7);
  sqcRZGate(q, 2.704307284198449, 7);
  sqcRYGate(q, -1.3781519621683724, 8);
  sqcRZGate(q, 0.22679212312762154, 8);
  sqcRYGate(q, -0.009625284857533457, 9);
  sqcRZGate(q, 3.008529094592831, 9);
  sqcRYGate(q, -3.137016713264747, 10);
  sqcRZGate(q, 2.3639117351646544, 10);
  sqcRYGate(q, 1.1762534554248951, 11);
  sqcRZGate(q, 0.32688349718357484, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.2940693416380915, 0);
  sqcRZGate(q, 0.5475935692664182, 0);
  sqcRYGate(q, 3.086717081495884, 1);
  sqcRZGate(q, -1.552944238607081, 1);
  sqcRYGate(q, 3.1405840436794943, 2);
  sqcRZGate(q, -1.9979845379224956, 2);
  sqcRYGate(q, -1.6416919525497917, 3);
  sqcRZGate(q, 0.2207317842458458, 3);
  sqcRYGate(q, 3.132295647605411, 4);
  sqcRZGate(q, 2.3585456856266904, 4);
  sqcRYGate(q, 1.6139779507610772, 5);
  sqcRZGate(q, -0.04825174840927193, 5);
  sqcRYGate(q, 1.4611557821412804, 6);
  sqcRZGate(q, -1.5366832204442566, 6);
  sqcRYGate(q, 1.8727634889344997, 7);
  sqcRZGate(q, 3.0824850269142763, 7);
  sqcRYGate(q, 0.22295384032357693, 8);
  sqcRZGate(q, -0.9830720984387727, 8);
  sqcRYGate(q, 1.7372411195280861, 9);
  sqcRZGate(q, -2.424775978169123, 9);
  sqcRYGate(q, -0.7132653235267629, 10);
  sqcRZGate(q, 0.13016667589160846, 10);
  sqcRYGate(q, 1.4239540256561083, 11);
  sqcRZGate(q, -1.5146137307402097, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.0008662094306179924, 0);
  sqcRZGate(q, -2.0926917304668944, 0);
  sqcRYGate(q, -1.582965447955557, 1);
  sqcRZGate(q, 3.0907333675743427, 1);
  sqcRYGate(q, 1.5725875306947268, 2);
  sqcRZGate(q, 1.6141695338462712, 2);
  sqcRYGate(q, 0.16147397654026513, 3);
  sqcRZGate(q, 2.199069363655111, 3);
  sqcRYGate(q, -0.012547173692539992, 4);
  sqcRZGate(q, 1.1045873325287392, 4);
  sqcRYGate(q, 1.5713040976655694, 5);
  sqcRZGate(q, 0.1836576882143746, 5);
  sqcRYGate(q, 0.07433066284845848, 6);
  sqcRZGate(q, -1.3370363024163385, 6);
  sqcRYGate(q, 3.0739012890119195, 7);
  sqcRZGate(q, -0.16881730026711897, 7);
  sqcRYGate(q, -0.005097769733677315, 8);
  sqcRZGate(q, -0.7474415368071945, 8);
  sqcRYGate(q, -0.01103635456357921, 9);
  sqcRZGate(q, 0.7636574450970901, 9);
  sqcRYGate(q, -1.5721778373856772, 10);
  sqcRZGate(q, 1.646186191600452, 10);
  sqcRYGate(q, -1.7591350758453854, 11);
  sqcRZGate(q, -0.38763043756923826, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.669062997221709, 0);
  sqcRZGate(q, 0.9420490695997598, 0);
  sqcRYGate(q, -1.4807981955703873, 1);
  sqcRZGate(q, 0.904759433152828, 1);
  sqcRYGate(q, 1.670726028344502, 2);
  sqcRZGate(q, 0.8935884566507234, 2);
  sqcRYGate(q, -0.13780953118038755, 3);
  sqcRZGate(q, -3.088348225750265, 3);
  sqcRYGate(q, 3.019124917647632, 4);
  sqcRZGate(q, -2.821714006613595, 4);
  sqcRYGate(q, 0.09907610680523132, 5);
  sqcRZGate(q, 0.7189572795112794, 5);
  sqcRYGate(q, -0.10788968254764252, 6);
  sqcRZGate(q, -2.445845389697267, 6);
  sqcRYGate(q, 1.8181933745259604, 7);
  sqcRZGate(q, -0.7409057909304447, 7);
  sqcRYGate(q, -1.5031983679750498, 8);
  sqcRZGate(q, 1.1924556862999136, 8);
  sqcRYGate(q, -1.666765574661181, 9);
  sqcRZGate(q, -2.243766704708465, 9);
  sqcRYGate(q, 1.6708631092231396, 10);
  sqcRZGate(q, 2.298560225569027, 10);
  sqcRYGate(q, -1.6624425034496098, 11);
  sqcRZGate(q, -2.2368561998398295, 11);

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
