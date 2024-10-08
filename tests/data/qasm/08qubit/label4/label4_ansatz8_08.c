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

  sqcRYGate(q, -1.1433346895262888, 0);
  sqcRYGate(q, 2.5438023832592904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.642759389340674, 0);
  sqcRYGate(q, 1.8956567675774085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3776171050049735, 2);
  sqcRYGate(q, 1.2288258175077056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8880788001224067, 2);
  sqcRYGate(q, -1.9038903956358304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4673812113496982, 4);
  sqcRYGate(q, 0.9903073457101037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.977895058535102, 4);
  sqcRYGate(q, -1.9967074201649293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8973657853645385, 6);
  sqcRYGate(q, 3.1032307430422117, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.086745633437358, 6);
  sqcRYGate(q, -2.9393376149574855, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8165307868052993, 0);
  sqcRYGate(q, -2.9076314762144557, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09922321395901612, 0);
  sqcRYGate(q, 0.6161366820790546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7428755481421667, 2);
  sqcRYGate(q, -1.6851601679002144, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4627779029265861, 2);
  sqcRYGate(q, 0.9959483395225479, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4926466658867668, 4);
  sqcRYGate(q, -2.848848699386138, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.719565701949286, 4);
  sqcRYGate(q, -1.8009389680175694, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1006337313257744, 1);
  sqcRYGate(q, 0.06798870450387096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4816476446181968, 1);
  sqcRYGate(q, -0.6180568713963375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.602269170131157, 3);
  sqcRYGate(q, -1.2990210183226907, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2425485814953463, 3);
  sqcRYGate(q, -0.9670841015317304, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1617710299956068, 5);
  sqcRYGate(q, 1.5315983610978279, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6347531244550444, 5);
  sqcRYGate(q, 0.31262795538907556, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7995472976485383, 0);
  sqcRYGate(q, -1.1666740342430613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7812483195445785, 0);
  sqcRYGate(q, 2.5200058359422246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9443795638638812, 2);
  sqcRYGate(q, 0.7539769710979788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8463328446607434, 2);
  sqcRYGate(q, 2.8462087174887336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3822646812079844, 4);
  sqcRYGate(q, -1.1230547095950876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.199391362741265, 4);
  sqcRYGate(q, 1.8759387946002253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.357052627862737, 6);
  sqcRYGate(q, 2.5995854382551147, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.020059830167901, 6);
  sqcRYGate(q, -2.371786855297566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5575648787368352, 0);
  sqcRYGate(q, 0.6867416458728064, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6291316880885716, 0);
  sqcRYGate(q, 2.0626610197321167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6729588070739139, 2);
  sqcRYGate(q, -1.853902702424791, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.903054755723645, 2);
  sqcRYGate(q, 1.8737183889986821, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.12353807389218209, 4);
  sqcRYGate(q, -1.162449652623916, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.180674541664969, 4);
  sqcRYGate(q, 1.9145520529132287, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5573733296114378, 1);
  sqcRYGate(q, -0.36055117037460105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.550130271831855, 1);
  sqcRYGate(q, -3.05375055695199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3019729335024302, 3);
  sqcRYGate(q, -1.5891443411844672, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8092010674233269, 3);
  sqcRYGate(q, 2.105668880079625, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7157911053990307, 5);
  sqcRYGate(q, -1.8962394383833585, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7681586029260907, 5);
  sqcRYGate(q, 2.6808729253917156, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.04668849066465608, 0);
  sqcRYGate(q, -0.8712333227183029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0341449252829813, 0);
  sqcRYGate(q, -0.4910366107832118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4513774216610442, 2);
  sqcRYGate(q, -2.9594809403214315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0167133284324157, 2);
  sqcRYGate(q, 2.2397525959293074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2394384512488875, 4);
  sqcRYGate(q, -1.5682813997556706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.308492584160201, 4);
  sqcRYGate(q, 1.186798818812954, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.588911078958734, 6);
  sqcRYGate(q, 1.579703959311817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9916918886054524, 6);
  sqcRYGate(q, -1.9027220197240098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6802216676824626, 0);
  sqcRYGate(q, 0.20486382716894358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8602867566358132, 0);
  sqcRYGate(q, 3.0095522505831744, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.411196126136927, 2);
  sqcRYGate(q, -2.295144147656836, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7279507415502825, 2);
  sqcRYGate(q, 2.889823464325122, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9490028407619022, 4);
  sqcRYGate(q, 0.29479026894815347, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8832492440851523, 4);
  sqcRYGate(q, -2.4352855214184914, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3243402440735611, 1);
  sqcRYGate(q, -2.0478158548276983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6698047379788004, 1);
  sqcRYGate(q, -2.9577045575563403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4790739278484262, 3);
  sqcRYGate(q, 1.3911970361579034, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.352945705780624, 3);
  sqcRYGate(q, -1.983691886607633, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.05329758609985386, 5);
  sqcRYGate(q, 1.544489857227672, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.026636494052267614, 5);
  sqcRYGate(q, 1.8115984217912597, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8400876074619346, 0);
  sqcRYGate(q, -1.0400524701090363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9766410931609457, 0);
  sqcRYGate(q, -0.3390339947057113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1506580452246249, 2);
  sqcRYGate(q, -2.8546082251715528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.823644086282163, 2);
  sqcRYGate(q, -2.6181542373701303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6461136453210115, 4);
  sqcRYGate(q, 0.9251979131542996, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.615306036184551, 4);
  sqcRYGate(q, -1.6098455363286712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5348706447368814, 6);
  sqcRYGate(q, 0.06600129988401422, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.683532111190503, 6);
  sqcRYGate(q, -2.2725374918650196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4852555956540814, 0);
  sqcRYGate(q, 0.7327693893781733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8526630048406452, 0);
  sqcRYGate(q, -1.7253092628341893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.31058629488669715, 2);
  sqcRYGate(q, 1.1823507682848895, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7591196438650298, 2);
  sqcRYGate(q, -1.3409188723135248, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6856345789752512, 4);
  sqcRYGate(q, 2.8652342764689522, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.304929215074339, 4);
  sqcRYGate(q, -2.425606650562553, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2391942625579047, 1);
  sqcRYGate(q, 1.701757364278927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38518516981316164, 1);
  sqcRYGate(q, 1.8259472824186371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.428018565314426, 3);
  sqcRYGate(q, -1.2484847884568473, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5450409270887544, 3);
  sqcRYGate(q, 2.248362089765209, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.02277549877527413, 5);
  sqcRYGate(q, -0.30708687734784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0272315242307624, 5);
  sqcRYGate(q, 1.8842422067262259, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.364478526634368, 0);
  sqcRYGate(q, 1.517625913382596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1732044210240895, 0);
  sqcRYGate(q, 0.40636160336174054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.908432100803049, 2);
  sqcRYGate(q, 1.0988292294699922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7447940450333848, 2);
  sqcRYGate(q, -1.487566148235281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7608188625278366, 4);
  sqcRYGate(q, -0.0639243282527714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1751660859030162, 4);
  sqcRYGate(q, 0.6007850791871787, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05538109903101924, 6);
  sqcRYGate(q, -2.378010552706809, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7427799281489954, 6);
  sqcRYGate(q, 1.4925584264227263, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.690877527968176, 0);
  sqcRYGate(q, 1.0395519825106678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.007217253434695633, 0);
  sqcRYGate(q, 0.946516712786253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.454920333168479, 2);
  sqcRYGate(q, -1.7951743395584077, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9998489768111478, 2);
  sqcRYGate(q, -1.6716871613307793, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6567485965036717, 4);
  sqcRYGate(q, 0.04038791037351121, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3966440867788115, 4);
  sqcRYGate(q, 2.922574785942781, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5180312387299111, 1);
  sqcRYGate(q, -1.6960781821516568, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.977325550773724, 1);
  sqcRYGate(q, 2.845868492452698, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.573778550735386, 3);
  sqcRYGate(q, 2.126759937230746, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4327006202654984, 3);
  sqcRYGate(q, -1.6892696429835192, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5523404840685657, 5);
  sqcRYGate(q, 2.4185642612451628, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.079668618729416, 5);
  sqcRYGate(q, -3.0630123494157564, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6197357582629701, 0);
  sqcRYGate(q, -0.9655978184616875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.254311945706718, 0);
  sqcRYGate(q, 1.9606947377173336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0852658155694501, 2);
  sqcRYGate(q, -2.014094029434786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.311174288782615, 2);
  sqcRYGate(q, -2.194869002578267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07669356639156089, 4);
  sqcRYGate(q, -1.3294505739229248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7707909382010668, 4);
  sqcRYGate(q, 0.9510180903962118, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7769873561874938, 6);
  sqcRYGate(q, 1.2571305813520213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3740485395405748, 6);
  sqcRYGate(q, -1.4332551041695565, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3096576251326315, 0);
  sqcRYGate(q, -0.3710757435173422, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9069346480265119, 0);
  sqcRYGate(q, -2.996617656455487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.07933288743438638, 2);
  sqcRYGate(q, -3.0068691023512377, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7461697141783676, 2);
  sqcRYGate(q, -1.854141437953281, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2511055863128901, 4);
  sqcRYGate(q, 1.9604236989446768, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5083143026842949, 4);
  sqcRYGate(q, 3.0624862918478217, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4766720642248974, 1);
  sqcRYGate(q, 1.9563690961152496, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.507693344167715, 1);
  sqcRYGate(q, 0.9451562921949418, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.916523943031146, 3);
  sqcRYGate(q, 1.5244420671176588, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.22964405070676142, 3);
  sqcRYGate(q, 1.1088462411005362, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7555463675695673, 5);
  sqcRYGate(q, 0.9788195630364696, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5506066125396185, 5);
  sqcRYGate(q, -0.067122638478871, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7882357837058382, 0);
  sqcRYGate(q, 3.0114918727965807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9343428682126422, 0);
  sqcRYGate(q, -1.409021720673987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46096702672228257, 2);
  sqcRYGate(q, -2.8263262182380213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8555245214903882, 2);
  sqcRYGate(q, -0.9691080856586609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7951943007306506, 4);
  sqcRYGate(q, 3.140242323002061, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.14940718611833992, 4);
  sqcRYGate(q, -0.7773065307384287, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.90515657306839, 6);
  sqcRYGate(q, 2.489895971193206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5307559711921725, 6);
  sqcRYGate(q, -1.9780823040488427, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8149039912380237, 0);
  sqcRYGate(q, 1.773792730517812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.771414146031173, 0);
  sqcRYGate(q, -1.5622026380411373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.86622861141085, 2);
  sqcRYGate(q, 2.015298480150795, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.843633313671766, 2);
  sqcRYGate(q, -0.08719898731557663, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2058520681079186, 4);
  sqcRYGate(q, 1.4891150284563066, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.23938695827861822, 4);
  sqcRYGate(q, -0.13605106942921008, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4707623092474806, 1);
  sqcRYGate(q, 0.8539617937024095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5978083376230865, 1);
  sqcRYGate(q, -1.343338019289904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0697888116917946, 3);
  sqcRYGate(q, -0.0754549630312864, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5444451404522216, 3);
  sqcRYGate(q, -3.027103173651744, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9950832007180606, 5);
  sqcRYGate(q, 0.6507420397073318, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3704406107134792, 5);
  sqcRYGate(q, -1.180576866741716, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0494937707350305, 0);
  sqcRYGate(q, -1.5039692417670292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.738643444943362, 0);
  sqcRYGate(q, -2.6976007066135406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9103596625853565, 2);
  sqcRYGate(q, -1.8016302801427706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1664762688279806, 2);
  sqcRYGate(q, 0.6230653986103842, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4940592006602087, 4);
  sqcRYGate(q, 1.643663843588297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2377229811666226, 4);
  sqcRYGate(q, -1.886259334399682, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5576616422166378, 6);
  sqcRYGate(q, 1.926347266114471, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2163730702968305, 6);
  sqcRYGate(q, 1.1336695433619757, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7288590115847626, 0);
  sqcRYGate(q, 0.8454890678416677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3016843217699234, 0);
  sqcRYGate(q, 1.902818751845422, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.206698250256837, 2);
  sqcRYGate(q, -2.6791967942060255, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1984747860648155, 2);
  sqcRYGate(q, 0.7888684678568341, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.8449816482158767, 4);
  sqcRYGate(q, 1.5595247848803437, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6097274409337103, 4);
  sqcRYGate(q, 0.23950556079603924, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.49211590174036773, 1);
  sqcRYGate(q, 0.9792235069454382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0952756751141173, 1);
  sqcRYGate(q, 1.1883467810952695, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1870913366988454, 3);
  sqcRYGate(q, 0.25116324561027503, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1387736227225105, 3);
  sqcRYGate(q, 0.7294693963555541, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.330778115565205, 5);
  sqcRYGate(q, -1.2230555147451598, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0140778309968423, 5);
  sqcRYGate(q, 3.0831496136975054, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8404622900979444, 0);
  sqcRYGate(q, 0.3794032934857645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0175595174510446, 0);
  sqcRYGate(q, -1.7370732840250511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.718799987423196, 2);
  sqcRYGate(q, -0.8612692555360644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6903640573357686, 2);
  sqcRYGate(q, -0.7442026721703763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.196525875724616, 4);
  sqcRYGate(q, -1.0756465161304212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9277155010792038, 4);
  sqcRYGate(q, 1.7360062045580607, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9123844749575944, 6);
  sqcRYGate(q, 1.8992418303340586, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2515298315303667, 6);
  sqcRYGate(q, 2.0114533359794295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8110071169776716, 0);
  sqcRYGate(q, 2.7031113542423935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5717274154020384, 0);
  sqcRYGate(q, 2.591870366658975, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12196675216891872, 2);
  sqcRYGate(q, -1.5319920944505054, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.20661075117426397, 2);
  sqcRYGate(q, 1.1378760121508285, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.36289546352172874, 4);
  sqcRYGate(q, 2.44778516454687, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.854065856393568, 4);
  sqcRYGate(q, -2.4592131286176113, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.142343865768978, 1);
  sqcRYGate(q, 2.576773873181718, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.676253880106481, 1);
  sqcRYGate(q, 0.5580598985517699, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3874628787340253, 3);
  sqcRYGate(q, -2.613854413662759, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.052899507306002, 3);
  sqcRYGate(q, -2.6760305028634113, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1550868232725953, 5);
  sqcRYGate(q, -2.807097032790869, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.493437660890251, 5);
  sqcRYGate(q, 1.624573542329993, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.993174138397657, 0);
  sqcRYGate(q, 0.016211714012374485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.591430215546355, 0);
  sqcRYGate(q, 0.03676210948675896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4896260810457016, 2);
  sqcRYGate(q, 0.06980100114366937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7742165257663425, 2);
  sqcRYGate(q, 2.0481902495274737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4292491212867589, 4);
  sqcRYGate(q, 2.8981281017829086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4736849592772703, 4);
  sqcRYGate(q, -0.9258404934650191, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2288370418507876, 6);
  sqcRYGate(q, -2.0648912871193907, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0720573801249205, 6);
  sqcRYGate(q, 0.27858325926020905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9304865707225134, 0);
  sqcRYGate(q, -0.44382323890844066, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5637816389706378, 0);
  sqcRYGate(q, -2.899157029715726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7697305527840084, 2);
  sqcRYGate(q, -2.477399746036623, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.122927627309471, 2);
  sqcRYGate(q, 3.117940591475944, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.43214553093156494, 4);
  sqcRYGate(q, -0.37292920898398485, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5287780540002351, 4);
  sqcRYGate(q, -2.3402357989697165, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5643751652995412, 1);
  sqcRYGate(q, 0.7093972507292732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.073965358175301, 1);
  sqcRYGate(q, -1.5784536051937106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5926495733637793, 3);
  sqcRYGate(q, -1.4025193720294356, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.143456911906462, 3);
  sqcRYGate(q, -2.11578549654804, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.15010481339479131, 5);
  sqcRYGate(q, -1.6918081912110274, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.26149838944402615, 5);
  sqcRYGate(q, -0.4553354624694981, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7689017435981684, 0);
  sqcRYGate(q, -0.2324594095270136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.67859728401765, 0);
  sqcRYGate(q, 0.6488187263626095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8018171454096787, 2);
  sqcRYGate(q, 2.690285129102807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0033742042957075, 2);
  sqcRYGate(q, -0.8961950444652683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9699044447322502, 4);
  sqcRYGate(q, -0.40668518786676966, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.548346747566156, 4);
  sqcRYGate(q, -2.3254723784459834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.227533179877009, 6);
  sqcRYGate(q, -0.5891140737376279, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.04637154620407741, 6);
  sqcRYGate(q, 1.691279140498748, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.306561543898937, 0);
  sqcRYGate(q, -0.6124209295501858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.812388053349252, 0);
  sqcRYGate(q, 1.3328827392541078, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8813211846841521, 2);
  sqcRYGate(q, 1.9621033542482784, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3471534353230739, 2);
  sqcRYGate(q, 1.2258909281392636, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.675902010444169, 4);
  sqcRYGate(q, -2.212559041839677, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.514287006960633, 4);
  sqcRYGate(q, -0.528769395861575, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2026801226917483, 1);
  sqcRYGate(q, -2.9114061639061877, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1361932445177367, 1);
  sqcRYGate(q, -0.24733019273164975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.08303747253027538, 3);
  sqcRYGate(q, -1.7014003557514406, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2125701617488898, 3);
  sqcRYGate(q, -0.1939942938100527, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9485373342843222, 5);
  sqcRYGate(q, 0.7505683769903095, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9239428912795817, 5);
  sqcRYGate(q, 0.882259921090526, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7413710403952174, 0);
  sqcRYGate(q, -0.441766627835702, 1);
  sqcRYGate(q, 0.6310298057696873, 2);
  sqcRYGate(q, -2.1072911193856783, 3);
  sqcRYGate(q, -1.3764210464938254, 4);
  sqcRYGate(q, -1.0298169436566154, 5);
  sqcRYGate(q, -2.1762701538356186, 6);
  sqcRYGate(q, 2.5248882753599453, 7);

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
