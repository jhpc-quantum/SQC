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

  sqcRYGate(q, -1.3410528526156222, 0);
  sqcRYGate(q, 1.5710808394986424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7191053317167406, 0);
  sqcRYGate(q, 1.1373068967225795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1470745348855615, 1);
  sqcRYGate(q, 1.0215303758363348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2695091744432128, 1);
  sqcRYGate(q, 0.1980546609005025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2958518233281113, 2);
  sqcRYGate(q, 1.2214759743453358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.556241388953084, 2);
  sqcRYGate(q, -0.7371235720939572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5116436125177948, 3);
  sqcRYGate(q, 2.652083620272514, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3247476966039073, 3);
  sqcRYGate(q, 1.987054552031811, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.49520717592454966, 4);
  sqcRYGate(q, 3.042516213099964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.526803753616199, 4);
  sqcRYGate(q, 0.843420171479712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3161022443368253, 5);
  sqcRYGate(q, 0.649701081107669, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5618356586371513, 5);
  sqcRYGate(q, -0.6806467195451502, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.253091242999091, 6);
  sqcRYGate(q, 2.2814971081180273, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2457049519189052, 6);
  sqcRYGate(q, -1.0933781882053422, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9257758019161394, 7);
  sqcRYGate(q, 0.6100485107846172, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.095190047971828, 7);
  sqcRYGate(q, 0.02156040336452656, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8382515451645174, 8);
  sqcRYGate(q, -0.7438654655592679, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5907201331377312, 8);
  sqcRYGate(q, -1.6639504189331942, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1602346855389296, 9);
  sqcRYGate(q, -0.026765630541499164, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0192415965790513, 9);
  sqcRYGate(q, 1.4753229279895308, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8676427515029084, 10);
  sqcRYGate(q, 0.3185067252131238, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8307565825323007, 10);
  sqcRYGate(q, -0.5399779655975603, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6673255486886578, 0);
  sqcRYGate(q, 1.674828195846588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.018976579315047815, 0);
  sqcRYGate(q, -0.13487259746786234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.187768405828276, 1);
  sqcRYGate(q, 0.3258135441250296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.283442878381616, 1);
  sqcRYGate(q, 2.100412536618563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6081826693865, 2);
  sqcRYGate(q, 1.9923912262808605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0900138164158524, 2);
  sqcRYGate(q, -1.9488632150999479, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11670576088058948, 3);
  sqcRYGate(q, -0.4412327746848277, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2714430726863447, 3);
  sqcRYGate(q, 2.702682498486572, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0560057075478, 4);
  sqcRYGate(q, 1.136275716393432, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43894819963102505, 4);
  sqcRYGate(q, 1.8198744991080942, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8708235737798211, 5);
  sqcRYGate(q, 1.9825497567677586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.39178593824075897, 5);
  sqcRYGate(q, 0.723654668025914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9610498555975533, 6);
  sqcRYGate(q, 0.4055806744018238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.952856547116908, 6);
  sqcRYGate(q, -0.9145043471044197, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5004131058727799, 7);
  sqcRYGate(q, 0.15723744832776898, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.02504739805109857, 7);
  sqcRYGate(q, 0.024819226027123165, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9631343628813738, 8);
  sqcRYGate(q, -2.9838608226038446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.116376285058929, 8);
  sqcRYGate(q, -2.070938024792551, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4496768079399005, 9);
  sqcRYGate(q, 1.8406628038434498, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7415788566469708, 9);
  sqcRYGate(q, -3.1254688992171227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.082324011552963, 10);
  sqcRYGate(q, 1.2393859906775004, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2801102171426955, 10);
  sqcRYGate(q, -1.2799728252037879, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.10129549723632537, 0);
  sqcRYGate(q, -1.828773424354293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7039501895111384, 0);
  sqcRYGate(q, -1.4717098459343436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.726526717662404, 1);
  sqcRYGate(q, 2.929707970213982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9765846069855018, 1);
  sqcRYGate(q, 0.009572542358742398, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7683614980261181, 2);
  sqcRYGate(q, -2.8585158129383226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8351793818213338, 2);
  sqcRYGate(q, -1.9361572266153162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5238259129142677, 3);
  sqcRYGate(q, -2.208360689831904, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.143514526764089, 3);
  sqcRYGate(q, 1.9313589808884626, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4656905682489318, 4);
  sqcRYGate(q, 2.6792229435342567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2868070914495304, 4);
  sqcRYGate(q, -2.886611040227981, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4102513806458505, 5);
  sqcRYGate(q, -1.5648539983416423, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03635992100190144, 5);
  sqcRYGate(q, 0.8775215324292418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5332532592502703, 6);
  sqcRYGate(q, 1.043728481098833, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.761163546122598, 6);
  sqcRYGate(q, 0.5827081293308123, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.476978069154569, 7);
  sqcRYGate(q, 0.8128148193258813, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.11589753070009927, 7);
  sqcRYGate(q, 0.0486635288055869, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3882146530107247, 8);
  sqcRYGate(q, -3.0544830683643114, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7030100638088672, 8);
  sqcRYGate(q, 1.7405470268929892, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.313643425319402, 9);
  sqcRYGate(q, -2.7496846371784684, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6596903474967744, 9);
  sqcRYGate(q, -1.6001386607626378, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.821733649007237, 10);
  sqcRYGate(q, 2.506560252695019, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6363297381604898, 10);
  sqcRYGate(q, 2.631936853670034, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0687958705009142, 0);
  sqcRYGate(q, 0.23300157303417457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.636204366658637, 0);
  sqcRYGate(q, 1.5143805197098699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.448573396251048, 1);
  sqcRYGate(q, -2.8060603728200935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4810298751569535, 1);
  sqcRYGate(q, 2.05543181776998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.922275098968914, 2);
  sqcRYGate(q, 1.6835257322703736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.704318915402704, 2);
  sqcRYGate(q, 1.2758101979723082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.862394369584127, 3);
  sqcRYGate(q, 1.2534074790009608, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.347150567553312, 3);
  sqcRYGate(q, -0.4577306144771409, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.449436819416849, 4);
  sqcRYGate(q, 3.0275784410317685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6160677402470398, 4);
  sqcRYGate(q, -1.9846446973277194, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9837299191410196, 5);
  sqcRYGate(q, -1.4034074885286745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4215534954263848, 5);
  sqcRYGate(q, 2.4741827179104208, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.738062328200873, 6);
  sqcRYGate(q, 2.089295514734461, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6048111380090617, 6);
  sqcRYGate(q, 1.1969785500538066, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3911536434314256, 7);
  sqcRYGate(q, 1.7998196538575, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.393562790502998, 7);
  sqcRYGate(q, 3.1031550290076617, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7353078559446766, 8);
  sqcRYGate(q, -1.1383437769283384, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.096394303755905, 8);
  sqcRYGate(q, 2.552668981220522, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2706619860728505, 9);
  sqcRYGate(q, -1.28456357520977, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.455408420143272, 9);
  sqcRYGate(q, -2.12276569460834, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7607523324107757, 10);
  sqcRYGate(q, -1.7068407287044352, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.453655679940024, 10);
  sqcRYGate(q, 0.22629995677943704, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.433955105247972, 0);
  sqcRYGate(q, 0.8795789326915081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1753708629038933, 0);
  sqcRYGate(q, 0.839153583862785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6469715175249573, 1);
  sqcRYGate(q, -2.7938407571647677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5834731480948756, 1);
  sqcRYGate(q, 1.5365794698639261, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5966665957606017, 2);
  sqcRYGate(q, 2.924411250459794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0459995288431037, 2);
  sqcRYGate(q, 1.6337006541207963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1407117916459946, 3);
  sqcRYGate(q, 0.12920916198405044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.324106953523993, 3);
  sqcRYGate(q, -2.560203662270619, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1194237877884377, 4);
  sqcRYGate(q, 2.0662203339978715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0571392029481848, 4);
  sqcRYGate(q, 2.973136286224766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0566199504338278, 5);
  sqcRYGate(q, -2.8823473695474937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.15097772548356492, 5);
  sqcRYGate(q, 2.0514683337252135, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5372070281488446, 6);
  sqcRYGate(q, 2.999681150724871, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.36313631148279324, 6);
  sqcRYGate(q, -1.755359402631372, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.33820613991181414, 7);
  sqcRYGate(q, -0.05958775313034348, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.13305544409195, 7);
  sqcRYGate(q, 0.04562009611274931, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1958643184118816, 8);
  sqcRYGate(q, 0.7128252657307561, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9144437852337275, 8);
  sqcRYGate(q, 0.3306607701206498, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1636429301083853, 9);
  sqcRYGate(q, -3.032218725070882, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5153439573028598, 9);
  sqcRYGate(q, 0.5792707764957419, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0230414270356314, 10);
  sqcRYGate(q, -1.3763334942423755, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4637673406940703, 10);
  sqcRYGate(q, 2.7841721635815966, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4520731851517046, 0);
  sqcRYGate(q, -2.3386466385564946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3280384638591478, 0);
  sqcRYGate(q, 1.9417032323555004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0273561147285757, 1);
  sqcRYGate(q, -2.7789951186902946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0160996396552262, 1);
  sqcRYGate(q, 1.3363580145113387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.127095110595726, 2);
  sqcRYGate(q, 0.1930783559378506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22390096821618746, 2);
  sqcRYGate(q, -0.45616120268819765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3587272162349695, 3);
  sqcRYGate(q, 0.7427278104197174, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5534732442536687, 3);
  sqcRYGate(q, -2.302537222982391, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5773309078439794, 4);
  sqcRYGate(q, -2.026427766022694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.134889657729258, 4);
  sqcRYGate(q, 2.800345697075749, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0250691377453687, 5);
  sqcRYGate(q, 2.9454315444455452, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03166780986559026, 5);
  sqcRYGate(q, 1.5560066085217665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7484113263540393, 6);
  sqcRYGate(q, -0.48026912282796325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.322210200146934, 6);
  sqcRYGate(q, 0.9049899875752093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.830534046337812, 7);
  sqcRYGate(q, 2.4216502081568305, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.12987842720471932, 7);
  sqcRYGate(q, 0.6584392155517813, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.17938595083696643, 8);
  sqcRYGate(q, 1.4366522303320783, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3419744596567018, 8);
  sqcRYGate(q, -3.0269229107994873, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9979557866371405, 9);
  sqcRYGate(q, 2.8080980227387773, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.821306241697354, 9);
  sqcRYGate(q, 2.5093274123037825, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0952124974314144, 10);
  sqcRYGate(q, 0.8228641438732158, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5055281709003987, 10);
  sqcRYGate(q, 1.572695901339249, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.20142148326688947, 0);
  sqcRYGate(q, 2.9549623316547775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.354461946683613, 0);
  sqcRYGate(q, 0.3756393660934385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7295067533448777, 1);
  sqcRYGate(q, -2.9229048678581275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4366377415335776, 1);
  sqcRYGate(q, 0.9980315066770737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9113156719022664, 2);
  sqcRYGate(q, 2.4375794665396953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6876571207062439, 2);
  sqcRYGate(q, 2.9731335618189174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3491657102725645, 3);
  sqcRYGate(q, 3.0648927917996116, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4228003054348174, 3);
  sqcRYGate(q, 0.5626103663205244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0005522804393951475, 4);
  sqcRYGate(q, -2.6521786745360143, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0910390999713213, 4);
  sqcRYGate(q, -2.8162888710040517, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9686414762355824, 5);
  sqcRYGate(q, -0.2780782207463909, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.137113683072699, 5);
  sqcRYGate(q, -0.9153316180453492, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5752514744364867, 6);
  sqcRYGate(q, 1.639299614839676, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5869231276435434, 6);
  sqcRYGate(q, 0.11902430544095209, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22674365975929717, 7);
  sqcRYGate(q, 2.5292638630517787, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4866192926688178, 7);
  sqcRYGate(q, -2.154426271849679, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0954445437416975, 8);
  sqcRYGate(q, 0.20399988692114854, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3372617107664233, 8);
  sqcRYGate(q, 3.0885042451968587, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5396813629871238, 9);
  sqcRYGate(q, -0.25610884139009293, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8514944813099743, 9);
  sqcRYGate(q, 1.9701780264149802, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.19917482448194956, 10);
  sqcRYGate(q, -0.2656479009718149, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.753499102672528, 10);
  sqcRYGate(q, 0.09684189674723291, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1634771032029674, 0);
  sqcRYGate(q, 1.8785047821998335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8326563118781642, 0);
  sqcRYGate(q, 2.1535886756734364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1831686226035982, 1);
  sqcRYGate(q, 0.4496014744992266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.663939446320837, 1);
  sqcRYGate(q, -1.1257938620477028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6077942915926213, 2);
  sqcRYGate(q, -0.2190093123150945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0558390937312665, 2);
  sqcRYGate(q, 1.4364820438297747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5260556745874103, 3);
  sqcRYGate(q, 0.832741802397226, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6342920641621559, 3);
  sqcRYGate(q, 0.8377612174161015, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0181195676561514, 4);
  sqcRYGate(q, -1.1116730406803832, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.059550667704483, 4);
  sqcRYGate(q, 0.11900140778058418, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8093474357855293, 5);
  sqcRYGate(q, 2.630792710878552, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.019074873638654566, 5);
  sqcRYGate(q, -2.3914309429918594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0954169083603449, 6);
  sqcRYGate(q, -0.7195453516973869, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.010111940071721419, 6);
  sqcRYGate(q, 0.0368176383552726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0617020226107927, 7);
  sqcRYGate(q, -2.7431239091753707, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0225936560529156, 7);
  sqcRYGate(q, -1.3125596035135398, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6906877561279829, 8);
  sqcRYGate(q, -2.8049792697314455, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5048348592035883, 8);
  sqcRYGate(q, 2.263216559678437, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2064693204786217, 9);
  sqcRYGate(q, 0.7579731466106516, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.986007002571432, 9);
  sqcRYGate(q, 1.8510255746841147, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3158891470794156, 10);
  sqcRYGate(q, 1.256870632468051, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4800804758978426, 10);
  sqcRYGate(q, -1.6624765599444522, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9424581685323377, 0);
  sqcRYGate(q, -0.08061684869212916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6778667920314043, 0);
  sqcRYGate(q, -2.0230188170392176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8348991816043165, 1);
  sqcRYGate(q, -1.2670497245875314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0667318451294265, 1);
  sqcRYGate(q, -0.12977459030654082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2926184540577315, 2);
  sqcRYGate(q, -0.7943676074125019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8871994799304224, 2);
  sqcRYGate(q, -0.19955763438196072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.749230328244864, 3);
  sqcRYGate(q, -2.4150019032456016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7616434332155064, 3);
  sqcRYGate(q, 2.9054629878119167, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8070528786344421, 4);
  sqcRYGate(q, 1.9639726176236891, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3582726257783912, 4);
  sqcRYGate(q, 3.048935517809799, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7345963024843276, 5);
  sqcRYGate(q, 1.888426236836532, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9422099267921666, 5);
  sqcRYGate(q, 1.9268291337891883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7292234581487429, 6);
  sqcRYGate(q, -1.7873545344582584, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8078274682678916, 6);
  sqcRYGate(q, 2.804594334714489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.116388086784803, 7);
  sqcRYGate(q, -1.7327873222558727, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7528453891250377, 7);
  sqcRYGate(q, 3.112991690911912, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0508171524138343, 8);
  sqcRYGate(q, 1.5322794653403937, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0638252299764699, 8);
  sqcRYGate(q, -2.3429472155380275, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1957429725748838, 9);
  sqcRYGate(q, -1.0954685221066056, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7395759427118547, 9);
  sqcRYGate(q, -2.0363226400692778, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8816622176218083, 10);
  sqcRYGate(q, 1.5975412830201776, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0722941456668718, 10);
  sqcRYGate(q, -2.6442512723112146, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.473182441412739, 0);
  sqcRYGate(q, -1.5085802454540744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6198484676338392, 0);
  sqcRYGate(q, -1.0868818527234454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28843116229676813, 1);
  sqcRYGate(q, 2.683667351002119, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9438086273283677, 1);
  sqcRYGate(q, -2.2431553797915367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7748001727540494, 2);
  sqcRYGate(q, 2.5934718050431473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.962990190870257, 2);
  sqcRYGate(q, -1.9705898621040088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.284935206322593, 3);
  sqcRYGate(q, -0.4981194494476169, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8355921619863627, 3);
  sqcRYGate(q, 2.419067346615416, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4805262086528814, 4);
  sqcRYGate(q, -1.5286358536005111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6627549313831915, 4);
  sqcRYGate(q, 2.751737643057889, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.302111724426858, 5);
  sqcRYGate(q, 1.3274374893029837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1025636691647533, 5);
  sqcRYGate(q, 2.7928725618168073, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.768940045942072, 6);
  sqcRYGate(q, -0.31218133292748274, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.098306357270196, 6);
  sqcRYGate(q, -1.1370595799352214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2632863142945494, 7);
  sqcRYGate(q, -1.4031494865225458, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4823789324854664, 7);
  sqcRYGate(q, -1.5839841080007968, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8407263141817247, 8);
  sqcRYGate(q, 2.265831663182584, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7722862412103493, 8);
  sqcRYGate(q, 0.038849900256975545, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.05651183032668161, 9);
  sqcRYGate(q, 2.3884219670868094, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.272407813915052, 9);
  sqcRYGate(q, -1.6436428438439468, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2416532810970127, 10);
  sqcRYGate(q, -2.8447032031379305, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1120951103861172, 10);
  sqcRYGate(q, 0.6344283446294172, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2533208093458508, 0);
  sqcRYGate(q, -2.733209978184311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4429600372572846, 0);
  sqcRYGate(q, 2.627910050638686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4288254193972425, 1);
  sqcRYGate(q, 2.0098781890396458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2232216877867357, 1);
  sqcRYGate(q, -1.038835694056555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0085148622664422, 2);
  sqcRYGate(q, -2.106735945590546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0042521439959602, 2);
  sqcRYGate(q, 2.7461195737932806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2231506374191063, 3);
  sqcRYGate(q, 1.833366752439863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.18383760072874336, 3);
  sqcRYGate(q, 0.06723992862167186, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5453779603156312, 4);
  sqcRYGate(q, 0.7089997587946827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2021607332934847, 4);
  sqcRYGate(q, 0.3062105304572417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.637049410277716, 5);
  sqcRYGate(q, -0.3047935374073294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.061246143651369, 5);
  sqcRYGate(q, 1.579113250320499, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.03812658481890205, 6);
  sqcRYGate(q, -3.115068846666885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3199277796606825, 6);
  sqcRYGate(q, 0.0315860691623886, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.058280628076074, 7);
  sqcRYGate(q, -2.3012177842337476, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5443364913171926, 7);
  sqcRYGate(q, 1.7459480654212252, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6418294193688363, 8);
  sqcRYGate(q, 2.5294174307594153, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4397142494070962, 8);
  sqcRYGate(q, -1.5441268586952503, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5821516577819905, 9);
  sqcRYGate(q, -0.07287328483579358, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0134424006356233, 9);
  sqcRYGate(q, -1.5609616592446374, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0655467055315824, 10);
  sqcRYGate(q, 1.9404529047103223, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5499216640335645, 10);
  sqcRYGate(q, 1.3532564686799047, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5808690784774884, 0);
  sqcRYGate(q, 1.5648229848444577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.472861818582786, 0);
  sqcRYGate(q, -1.2592289421522485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8493468804147795, 1);
  sqcRYGate(q, -2.954557871569229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.423808331426198, 1);
  sqcRYGate(q, -0.6955854838011472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.882867896824937, 2);
  sqcRYGate(q, 1.0807085906152918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8305337654209866, 2);
  sqcRYGate(q, -1.6074111955538877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.038262115056397, 3);
  sqcRYGate(q, -2.670642451444462, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0175468253875826, 3);
  sqcRYGate(q, -0.5034570399818206, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.519235575945559, 4);
  sqcRYGate(q, -2.906198829819039, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.27427760750762786, 4);
  sqcRYGate(q, -3.0945401098597234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9145357276250059, 5);
  sqcRYGate(q, -1.653774848923115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.092608256554438, 5);
  sqcRYGate(q, 2.647972449222954, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5742088245048214, 6);
  sqcRYGate(q, -0.008121354847115951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9555926155651484, 6);
  sqcRYGate(q, 1.533692444066543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2961797909159527, 7);
  sqcRYGate(q, -2.1999243325857263, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0384035846684077, 7);
  sqcRYGate(q, -1.5625988311328176, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9982733539573085, 8);
  sqcRYGate(q, -2.1663805164640983, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1897850446895929, 8);
  sqcRYGate(q, 1.5741219660457793, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.73712826850364, 9);
  sqcRYGate(q, 0.0364385312224913, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7823833257510504, 9);
  sqcRYGate(q, -3.0626375466135958, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0187145222732834, 10);
  sqcRYGate(q, -2.3018906526230642, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9056808230846185, 10);
  sqcRYGate(q, -2.5565475987946016, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9448889804978635, 0);
  sqcRYGate(q, -1.7503673501022117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4081699121824767, 0);
  sqcRYGate(q, 0.850547914882841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4379376313704488, 1);
  sqcRYGate(q, 1.9834065051420913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6993813211788529, 1);
  sqcRYGate(q, 1.491387522811517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6437849589773892, 2);
  sqcRYGate(q, 1.878140165692805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33086199697035507, 2);
  sqcRYGate(q, 0.03546456940125356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7973579276663336, 3);
  sqcRYGate(q, -0.8487686521381717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.12799517921672954, 3);
  sqcRYGate(q, 2.4769472075136854, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.391225784572435, 4);
  sqcRYGate(q, 2.4488025347875593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6926227523269706, 4);
  sqcRYGate(q, -3.0851049239593635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5486173142853357, 5);
  sqcRYGate(q, -1.987046467736719, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01319171126952235, 5);
  sqcRYGate(q, 3.130678016011236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2415144322039524, 6);
  sqcRYGate(q, 1.5726963150514999, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4219116461026268, 6);
  sqcRYGate(q, 3.1332430707743657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1401031906380057, 7);
  sqcRYGate(q, 3.09730307510339, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5866897046631563, 7);
  sqcRYGate(q, 1.546284176191854, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.1696497746746397, 8);
  sqcRYGate(q, 2.7112373080040038, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5629280133098895, 8);
  sqcRYGate(q, -1.5739971882566695, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.09990050805381795, 9);
  sqcRYGate(q, 2.162794770072434, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.008866938898128446, 9);
  sqcRYGate(q, 1.5902735861342476, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.76801176729198, 10);
  sqcRYGate(q, 0.24811861569667573, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.02888138490782912, 10);
  sqcRYGate(q, 1.5721172422964846, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.290335315723806, 0);
  sqcRYGate(q, 0.3894276036637673, 1);
  sqcRYGate(q, -2.034799427933056, 2);
  sqcRYGate(q, 0.017156149290805448, 3);
  sqcRYGate(q, 1.9480035387131123, 4);
  sqcRYGate(q, 0.7840778925006767, 5);
  sqcRYGate(q, -2.2468541928831423, 6);
  sqcRYGate(q, 0.8955167133472557, 7);
  sqcRYGate(q, 2.5487927718811627, 8);
  sqcRYGate(q, 2.321269529623855, 9);
  sqcRYGate(q, -2.1604348545650254, 10);
  sqcRYGate(q, -1.2696190406395285, 11);

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
