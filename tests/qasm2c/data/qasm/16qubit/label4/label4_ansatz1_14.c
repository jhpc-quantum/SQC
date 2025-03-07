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

  sqcRYGate(q, -2.5464777555123415, 0);
  sqcRZGate(q, -1.7251422498728122, 0);
  sqcRYGate(q, -1.3563594830895251, 1);
  sqcRZGate(q, -2.53620238002464, 1);
  sqcRYGate(q, -0.3501101873730491, 2);
  sqcRZGate(q, 2.4073715618604394, 2);
  sqcRYGate(q, 1.587063914689434, 3);
  sqcRZGate(q, 2.3615949508254634, 3);
  sqcRYGate(q, -1.6602023068318674, 4);
  sqcRZGate(q, 2.680972569193452, 4);
  sqcRYGate(q, -0.03779810641637284, 5);
  sqcRZGate(q, -0.8662809956146277, 5);
  sqcRYGate(q, -1.5725364352870572, 6);
  sqcRZGate(q, 1.5700943052284593, 6);
  sqcRYGate(q, -1.5778079721711546, 7);
  sqcRZGate(q, 0.13121610082413376, 7);
  sqcRYGate(q, 1.5751365291705204, 8);
  sqcRZGate(q, 0.6155698918591418, 8);
  sqcRYGate(q, -1.4374169128336538, 9);
  sqcRZGate(q, -2.1038891299472158, 9);
  sqcRYGate(q, -0.016140466519544216, 10);
  sqcRZGate(q, -0.36914208507877255, 10);
  sqcRYGate(q, -2.701198294808033, 11);
  sqcRZGate(q, 2.043567057262867, 11);
  sqcRYGate(q, 3.075073035524976, 12);
  sqcRZGate(q, 0.09525726680569768, 12);
  sqcRYGate(q, 1.1235693817187191, 13);
  sqcRZGate(q, -0.21922182206616903, 13);
  sqcRYGate(q, -2.01085518308657, 14);
  sqcRZGate(q, 0.7591736450669598, 14);
  sqcRYGate(q, -0.9304233414334986, 15);
  sqcRZGate(q, 0.31652761505680616, 15);
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
  sqcRYGate(q, 0.17321893406234334, 0);
  sqcRZGate(q, 0.7946127668903513, 0);
  sqcRYGate(q, -0.3272028982512838, 1);
  sqcRZGate(q, -0.017772293726896336, 1);
  sqcRYGate(q, 2.857712112131898, 2);
  sqcRZGate(q, -1.2728287987281952, 2);
  sqcRYGate(q, 3.13926682526259, 3);
  sqcRZGate(q, -2.426033652116319, 3);
  sqcRYGate(q, 3.1239721683130397, 4);
  sqcRZGate(q, -0.4577909535278372, 4);
  sqcRYGate(q, -3.1396830447539483, 5);
  sqcRZGate(q, -0.9596212513723689, 5);
  sqcRYGate(q, -1.4413311281720649, 6);
  sqcRZGate(q, -1.6611896730106843, 6);
  sqcRYGate(q, 1.5585697583510587, 7);
  sqcRZGate(q, -2.89217774214962, 7);
  sqcRYGate(q, -3.138814132028022, 8);
  sqcRZGate(q, -0.7834939917680531, 8);
  sqcRYGate(q, 2.172152740221313, 9);
  sqcRZGate(q, 1.2207626942789604, 9);
  sqcRYGate(q, -0.09088314626842796, 10);
  sqcRZGate(q, 1.621155003654212, 10);
  sqcRYGate(q, 0.6211780084296312, 11);
  sqcRZGate(q, 0.4854995606549197, 11);
  sqcRYGate(q, -2.7675813002034624, 12);
  sqcRZGate(q, 1.1110312254798167, 12);
  sqcRYGate(q, -1.6202385908499588, 13);
  sqcRZGate(q, 0.6946015239350691, 13);
  sqcRYGate(q, 0.5275054671509437, 14);
  sqcRZGate(q, 2.587877155437346, 14);
  sqcRYGate(q, 1.1336255593739297, 15);
  sqcRZGate(q, 2.3466606126705942, 15);
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
  sqcRYGate(q, 1.159909026766078, 0);
  sqcRZGate(q, 1.1116342803250001, 0);
  sqcRYGate(q, 0.1310308687689199, 1);
  sqcRZGate(q, 0.24685502960505218, 1);
  sqcRYGate(q, 2.190319634133372, 2);
  sqcRZGate(q, -0.9543419634483998, 2);
  sqcRYGate(q, 0.1774613277377952, 3);
  sqcRZGate(q, 3.114181290430532, 3);
  sqcRYGate(q, -1.6601613979944838, 4);
  sqcRZGate(q, 1.6042918833820794, 4);
  sqcRYGate(q, -1.6592675432300528, 5);
  sqcRZGate(q, 2.808274125030002, 5);
  sqcRYGate(q, -1.9710650064864716, 6);
  sqcRZGate(q, -2.7596266217012184, 6);
  sqcRYGate(q, 1.1413797811541464, 7);
  sqcRZGate(q, -1.0875151682811175, 7);
  sqcRYGate(q, 3.0076645071280828, 8);
  sqcRZGate(q, -2.1753716864253603, 8);
  sqcRYGate(q, -0.023937549845570703, 9);
  sqcRZGate(q, -0.5560641603006999, 9);
  sqcRYGate(q, -3.1407432756395743, 10);
  sqcRZGate(q, -0.5593289991081071, 10);
  sqcRYGate(q, 1.2309461891006483, 11);
  sqcRZGate(q, 2.5928461956937507, 11);
  sqcRYGate(q, -2.977117956057954, 12);
  sqcRZGate(q, -2.0288750897914127, 12);
  sqcRYGate(q, 0.770949519632869, 13);
  sqcRZGate(q, -0.300700336456831, 13);
  sqcRYGate(q, -2.317603563941364, 14);
  sqcRZGate(q, -2.467626524769689, 14);
  sqcRYGate(q, -0.9030611134746191, 15);
  sqcRZGate(q, -2.354918778900413, 15);
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
  sqcRYGate(q, -0.41069708946419564, 0);
  sqcRZGate(q, -0.21295549998290544, 0);
  sqcRYGate(q, 1.3628756746515132, 1);
  sqcRZGate(q, 2.7967099326800637, 1);
  sqcRYGate(q, 1.510331414954291, 2);
  sqcRZGate(q, 1.367143730807428, 2);
  sqcRYGate(q, 0.3977031454326948, 3);
  sqcRZGate(q, 3.0334679501454067, 3);
  sqcRYGate(q, -3.0843921248615276, 4);
  sqcRZGate(q, 0.7959585633637516, 4);
  sqcRYGate(q, 1.6882974705351819, 5);
  sqcRZGate(q, -2.8075475387650997, 5);
  sqcRYGate(q, -0.004787895887814919, 6);
  sqcRZGate(q, -1.5304726322804494, 6);
  sqcRYGate(q, -0.002087940572129021, 7);
  sqcRZGate(q, -0.5891997792239376, 7);
  sqcRYGate(q, -0.002684260357881385, 8);
  sqcRZGate(q, -1.6322157810321745, 8);
  sqcRYGate(q, -0.9130079217103688, 9);
  sqcRZGate(q, -0.08520681532577909, 9);
  sqcRYGate(q, -0.42612027601256486, 10);
  sqcRZGate(q, 2.354791285168694, 10);
  sqcRYGate(q, -0.6722327051819548, 11);
  sqcRZGate(q, -0.3993292713021051, 11);
  sqcRYGate(q, -3.1043270403998964, 12);
  sqcRZGate(q, 0.49632546466606275, 12);
  sqcRYGate(q, 2.8270317648975465, 13);
  sqcRZGate(q, -1.2058547421745711, 13);
  sqcRYGate(q, -2.177204560857483, 14);
  sqcRZGate(q, 1.6764353394343021, 14);
  sqcRYGate(q, -0.41968522035817213, 15);
  sqcRZGate(q, 1.825181542272941, 15);
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
  sqcRYGate(q, -0.05157696154288719, 0);
  sqcRZGate(q, 1.8486318798713226, 0);
  sqcRYGate(q, 2.9931343584945114, 1);
  sqcRZGate(q, 2.798039096423003, 1);
  sqcRYGate(q, 1.7784305246099068, 2);
  sqcRZGate(q, 0.7096466112042235, 2);
  sqcRYGate(q, 2.986631973953079, 3);
  sqcRZGate(q, 0.14393456334599708, 3);
  sqcRYGate(q, -0.4332488453813333, 4);
  sqcRZGate(q, 0.06285358677064692, 4);
  sqcRYGate(q, 1.4880856876338295, 5);
  sqcRZGate(q, 1.5392307692208425, 5);
  sqcRYGate(q, 1.5794389679995202, 6);
  sqcRZGate(q, -1.5788021794417686, 6);
  sqcRYGate(q, -1.3425750862836345, 7);
  sqcRZGate(q, -2.902371726670738, 7);
  sqcRYGate(q, 0.01673834891963004, 8);
  sqcRZGate(q, -1.9949490284921865, 8);
  sqcRYGate(q, 3.0697866486937193, 9);
  sqcRZGate(q, 1.7206984466148487, 9);
  sqcRYGate(q, 0.003992922634551199, 10);
  sqcRZGate(q, -1.8144012126737874, 10);
  sqcRYGate(q, 0.13801491561956958, 11);
  sqcRZGate(q, 1.13742387187422, 11);
  sqcRYGate(q, -3.0599107706374, 12);
  sqcRZGate(q, 2.9241641402838052, 12);
  sqcRYGate(q, -2.128995163279799, 13);
  sqcRZGate(q, 0.3012108386830219, 13);
  sqcRYGate(q, -2.291661868942815, 14);
  sqcRZGate(q, 2.2628340271307774, 14);
  sqcRYGate(q, 0.9431960256641014, 15);
  sqcRZGate(q, 0.581480329760781, 15);
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
  sqcRYGate(q, 3.119420619526218, 0);
  sqcRZGate(q, -0.754708977215087, 0);
  sqcRYGate(q, -1.9914641890152063, 1);
  sqcRZGate(q, 0.940038813964062, 1);
  sqcRYGate(q, 2.5517941061841514, 2);
  sqcRZGate(q, 1.456849628728669, 2);
  sqcRYGate(q, -1.4659193631979455, 3);
  sqcRZGate(q, -2.7505983149671773, 3);
  sqcRYGate(q, 1.5634810115232058, 4);
  sqcRZGate(q, -2.3408269653864675, 4);
  sqcRYGate(q, -1.4041725040692823, 5);
  sqcRZGate(q, -1.5682198958454268, 5);
  sqcRYGate(q, -2.7851099333451703, 6);
  sqcRZGate(q, 0.3727605248983803, 6);
  sqcRYGate(q, 3.1007697266079504, 7);
  sqcRZGate(q, 1.5352145120847682, 7);
  sqcRYGate(q, -0.537684552704289, 8);
  sqcRZGate(q, 0.5910743606439732, 8);
  sqcRYGate(q, 0.5884631794771122, 9);
  sqcRZGate(q, -0.339250058455324, 9);
  sqcRYGate(q, -1.897804789147406, 10);
  sqcRZGate(q, -0.13086300346171245, 10);
  sqcRYGate(q, -0.8303173128665913, 11);
  sqcRZGate(q, -1.8157922184079958, 11);
  sqcRYGate(q, -0.009490566153568913, 12);
  sqcRZGate(q, -1.2970979469415351, 12);
  sqcRYGate(q, -1.3112366439495737, 13);
  sqcRZGate(q, -1.6042818886622396, 13);
  sqcRYGate(q, 1.6124207607897698, 14);
  sqcRZGate(q, -2.3131234106791285, 14);
  sqcRYGate(q, 0.46984658001356916, 15);
  sqcRZGate(q, -1.094059415536151, 15);
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
  sqcRYGate(q, 0.22272145562565543, 0);
  sqcRZGate(q, 0.7107257670980697, 0);
  sqcRYGate(q, 0.42020992062774387, 1);
  sqcRZGate(q, -1.8106409494824725, 1);
  sqcRYGate(q, -3.1291646804891573, 2);
  sqcRZGate(q, 0.9583923308723284, 2);
  sqcRYGate(q, -0.4609776750638588, 3);
  sqcRZGate(q, -2.8360001968031834, 3);
  sqcRYGate(q, -0.44238158971221525, 4);
  sqcRZGate(q, 2.9042754448900947, 4);
  sqcRYGate(q, 1.56446027524556, 5);
  sqcRZGate(q, -1.5794700484175246, 5);
  sqcRYGate(q, 0.0014832999275242573, 6);
  sqcRZGate(q, 1.1943904895580955, 6);
  sqcRYGate(q, 0.038304909347374405, 7);
  sqcRZGate(q, -0.1583801070753113, 7);
  sqcRYGate(q, -1.7293116293481061, 8);
  sqcRZGate(q, -0.6441292078075858, 8);
  sqcRYGate(q, 1.6328043843099624, 9);
  sqcRZGate(q, -0.035452155260765394, 9);
  sqcRYGate(q, -0.011047502742112416, 10);
  sqcRZGate(q, 0.261967747866145, 10);
  sqcRYGate(q, -0.004930873653560042, 11);
  sqcRZGate(q, -1.291041836534446, 11);
  sqcRYGate(q, -3.0602509914543825, 12);
  sqcRZGate(q, -2.736939688123257, 12);
  sqcRYGate(q, 1.304487901718422, 13);
  sqcRZGate(q, 0.38308349345512155, 13);
  sqcRYGate(q, 0.24851879598453064, 14);
  sqcRZGate(q, -3.0117437055046916, 14);
  sqcRYGate(q, -1.8807190751573, 15);
  sqcRZGate(q, 1.9548751877881214, 15);
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
  sqcRYGate(q, -2.705851505480558, 0);
  sqcRZGate(q, 1.0358952994611874, 0);
  sqcRYGate(q, 0.4902923448321738, 1);
  sqcRZGate(q, -2.119866283613278, 1);
  sqcRYGate(q, 0.0026273605017926595, 2);
  sqcRZGate(q, 1.1284914020424512, 2);
  sqcRYGate(q, -0.04429550148880512, 3);
  sqcRZGate(q, -0.2957389466818113, 3);
  sqcRYGate(q, 2.5815281633471394, 4);
  sqcRZGate(q, -2.564961992235774, 4);
  sqcRYGate(q, 3.0792283697088556, 5);
  sqcRZGate(q, 2.5802667727386077, 5);
  sqcRYGate(q, -1.571178317970377, 6);
  sqcRZGate(q, -0.4592273758501042, 6);
  sqcRYGate(q, 3.139313033207165, 7);
  sqcRZGate(q, 1.4906334223443691, 7);
  sqcRYGate(q, 3.1323515979776904, 8);
  sqcRZGate(q, 2.4172015629542214, 8);
  sqcRYGate(q, 0.2717548362706506, 9);
  sqcRZGate(q, 1.637878814505009, 9);
  sqcRYGate(q, -1.4720513901610541, 10);
  sqcRZGate(q, 2.1037105075016083, 10);
  sqcRYGate(q, 2.8830995642674995, 11);
  sqcRZGate(q, 1.3461667115971554, 11);
  sqcRYGate(q, 1.3334326718566514, 12);
  sqcRZGate(q, -0.6914707225414586, 12);
  sqcRYGate(q, 1.141997141081621, 13);
  sqcRZGate(q, 1.808785745241617, 13);
  sqcRYGate(q, -0.5707187959987259, 14);
  sqcRZGate(q, -0.7405021303487216, 14);
  sqcRYGate(q, -1.0263689847307083, 15);
  sqcRZGate(q, 0.7399436870846632, 15);
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
  sqcRYGate(q, 0.5826131124050278, 0);
  sqcRZGate(q, -2.8076433978327198, 0);
  sqcRYGate(q, 1.426038048473118, 1);
  sqcRZGate(q, 0.42024123775023975, 1);
  sqcRYGate(q, 0.09446650068746099, 2);
  sqcRZGate(q, -0.5754375541401284, 2);
  sqcRYGate(q, 0.48908358765500726, 3);
  sqcRZGate(q, 2.945634651672127, 3);
  sqcRYGate(q, 1.4389854382789038, 4);
  sqcRZGate(q, 0.018655953793479632, 4);
  sqcRYGate(q, -3.1378834104913165, 5);
  sqcRZGate(q, -0.6232042967498707, 5);
  sqcRYGate(q, 3.1037629913248432, 6);
  sqcRZGate(q, -0.8396247841811393, 6);
  sqcRYGate(q, 1.5700548131821002, 7);
  sqcRZGate(q, -2.907202181861774, 7);
  sqcRYGate(q, 1.7181903964832266, 8);
  sqcRZGate(q, -0.9840205480901963, 8);
  sqcRYGate(q, -1.454607561634231, 9);
  sqcRZGate(q, 2.690264717331821, 9);
  sqcRYGate(q, 0.015587890553735273, 10);
  sqcRZGate(q, 2.1053270780404185, 10);
  sqcRYGate(q, 2.912116293271709, 11);
  sqcRZGate(q, -2.168801216924733, 11);
  sqcRYGate(q, -3.1145796191259207, 12);
  sqcRZGate(q, 0.3878778486889968, 12);
  sqcRYGate(q, 1.617559631030612, 13);
  sqcRZGate(q, 0.7562684969532523, 13);
  sqcRYGate(q, 1.9858457893831103, 14);
  sqcRZGate(q, -0.8110270819437804, 14);
  sqcRYGate(q, -1.9492808891771622, 15);
  sqcRZGate(q, 2.1196565655840045, 15);
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
  sqcRYGate(q, -2.975057724252581, 0);
  sqcRZGate(q, 2.511136740887957, 0);
  sqcRYGate(q, -1.1053704402647515, 1);
  sqcRZGate(q, 2.586259891074444, 1);
  sqcRYGate(q, -0.05306234870648119, 2);
  sqcRZGate(q, -2.534942378882862, 2);
  sqcRYGate(q, -0.0731957958576468, 3);
  sqcRZGate(q, -0.026239765450204414, 3);
  sqcRYGate(q, -1.9500549061448904, 4);
  sqcRZGate(q, -1.407003047391342, 4);
  sqcRYGate(q, 3.119546720370721, 5);
  sqcRZGate(q, -2.9259520805780754, 5);
  sqcRYGate(q, -0.008833472959886457, 6);
  sqcRZGate(q, -0.6286452419680117, 6);
  sqcRYGate(q, -3.07413073870442, 7);
  sqcRZGate(q, -1.3388125339655517, 7);
  sqcRYGate(q, -1.970217067675831, 8);
  sqcRZGate(q, -0.22261696541153989, 8);
  sqcRYGate(q, 3.1281936432926623, 9);
  sqcRZGate(q, -2.0587212637827084, 9);
  sqcRYGate(q, -1.6353129397945174, 10);
  sqcRZGate(q, -0.003090969150564971, 10);
  sqcRYGate(q, -3.1322718001183274, 11);
  sqcRZGate(q, -2.177097111421981, 11);
  sqcRYGate(q, -0.005845454704965835, 12);
  sqcRZGate(q, -2.3186203502270226, 12);
  sqcRYGate(q, -0.3143274470875419, 13);
  sqcRZGate(q, 2.823935469635389, 13);
  sqcRYGate(q, 2.9585964368219884, 14);
  sqcRZGate(q, -2.9689675269027087, 14);
  sqcRYGate(q, 1.514297392194087, 15);
  sqcRZGate(q, -0.9802784494868799, 15);
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
  sqcRYGate(q, 1.1793859591454154, 0);
  sqcRZGate(q, 2.8264208070708983, 0);
  sqcRYGate(q, 1.1386508351051852, 1);
  sqcRZGate(q, 0.3226119098309619, 1);
  sqcRYGate(q, -3.140095171461198, 2);
  sqcRZGate(q, -2.7719287654733082, 2);
  sqcRYGate(q, -3.0886369951311035, 3);
  sqcRZGate(q, -0.8133537162112896, 3);
  sqcRYGate(q, 0.5286500694921372, 4);
  sqcRZGate(q, -1.4795694476363435, 4);
  sqcRYGate(q, 0.019012275281118818, 5);
  sqcRZGate(q, -1.5030092236405235, 5);
  sqcRYGate(q, -0.020002573764646064, 6);
  sqcRZGate(q, 1.1256558450931538, 6);
  sqcRYGate(q, -0.5343916676847912, 7);
  sqcRZGate(q, 0.0016328229163695696, 7);
  sqcRYGate(q, -0.0031342254532482627, 8);
  sqcRZGate(q, -2.918553374424751, 8);
  sqcRYGate(q, 0.9412898950420878, 9);
  sqcRZGate(q, -3.1412334309249963, 9);
  sqcRYGate(q, 1.579467128889828, 10);
  sqcRZGate(q, -1.9332559629275572, 10);
  sqcRYGate(q, -1.6487494257443749, 11);
  sqcRZGate(q, 0.0033627992290161555, 11);
  sqcRYGate(q, 3.126518310395925, 12);
  sqcRZGate(q, 0.25606984356903784, 12);
  sqcRYGate(q, 2.95528856035274, 13);
  sqcRZGate(q, 2.246760559098954, 13);
  sqcRYGate(q, 3.116030672617063, 14);
  sqcRZGate(q, -0.7570668083680836, 14);
  sqcRYGate(q, 1.2680421634295012, 15);
  sqcRZGate(q, -1.1504042097778078, 15);
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
  sqcRYGate(q, -0.6310770711428297, 0);
  sqcRZGate(q, 2.4543928294262978, 0);
  sqcRYGate(q, 1.671761902796277, 1);
  sqcRZGate(q, 2.2458570231458985, 1);
  sqcRYGate(q, 3.0737450587659105, 2);
  sqcRZGate(q, 1.8687137508477492, 2);
  sqcRYGate(q, 3.138471380138659, 3);
  sqcRZGate(q, -1.038431055170359, 3);
  sqcRYGate(q, 1.0356895577109029, 4);
  sqcRZGate(q, -2.062126061342062, 4);
  sqcRYGate(q, -3.1396946780396804, 5);
  sqcRZGate(q, -1.207781850580463, 5);
  sqcRYGate(q, -1.6761993773652026, 6);
  sqcRZGate(q, 3.1362823884841453, 6);
  sqcRYGate(q, -1.5872807666593003, 7);
  sqcRZGate(q, 1.0670175925227197, 7);
  sqcRYGate(q, -1.9160253357166475, 8);
  sqcRZGate(q, 3.0778267541716438, 8);
  sqcRYGate(q, 1.12848161494274, 9);
  sqcRZGate(q, 0.05705598497572417, 9);
  sqcRYGate(q, -3.080450473028781, 10);
  sqcRZGate(q, 1.3914953596757647, 10);
  sqcRYGate(q, 1.5210869565372234, 11);
  sqcRZGate(q, -2.658861901413365, 11);
  sqcRYGate(q, -3.138600873231084, 12);
  sqcRZGate(q, 1.4912968591816973, 12);
  sqcRYGate(q, 0.2159033898233146, 13);
  sqcRZGate(q, -2.6559621086631973, 13);
  sqcRYGate(q, -3.1329417543813687, 14);
  sqcRZGate(q, 1.406140404364658, 14);
  sqcRYGate(q, 2.036685931783488, 15);
  sqcRZGate(q, -1.7516068025917546, 15);
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
  sqcRYGate(q, 2.3910834188066525, 0);
  sqcRZGate(q, -2.7016174316397352, 0);
  sqcRYGate(q, -2.93338566266518, 1);
  sqcRZGate(q, -2.3789989115532633, 1);
  sqcRYGate(q, -1.5589067826411453, 2);
  sqcRZGate(q, 3.089346827699639, 2);
  sqcRYGate(q, 1.007451557309044, 3);
  sqcRZGate(q, -3.027328071068839, 3);
  sqcRYGate(q, -0.9625131014114405, 4);
  sqcRZGate(q, 2.7826543128929675, 4);
  sqcRYGate(q, -1.616727009216448, 5);
  sqcRZGate(q, 0.30256009945855133, 5);
  sqcRYGate(q, 1.4433644589755499, 6);
  sqcRZGate(q, -0.001926164931027709, 6);
  sqcRYGate(q, 3.13713974567637, 7);
  sqcRZGate(q, 1.0635209604953375, 7);
  sqcRYGate(q, 1.7000738007297045, 8);
  sqcRZGate(q, -1.8186348653640572, 8);
  sqcRYGate(q, -3.077377205233414, 9);
  sqcRZGate(q, 0.0528268596722814, 9);
  sqcRYGate(q, 3.116719972233334, 10);
  sqcRZGate(q, -0.14741472697177563, 10);
  sqcRYGate(q, 3.111994620954612, 11);
  sqcRZGate(q, -2.6275623406802797, 11);
  sqcRYGate(q, 0.47719169218971835, 12);
  sqcRZGate(q, 3.1320118904198195, 12);
  sqcRYGate(q, -2.872073583264037, 13);
  sqcRZGate(q, 2.293231776223871, 13);
  sqcRYGate(q, -2.9683653938504273, 14);
  sqcRZGate(q, 1.415209379425854, 14);
  sqcRYGate(q, -1.485573079182604, 15);
  sqcRZGate(q, 2.506682369352154, 15);
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
  sqcRYGate(q, 1.235547317453723, 0);
  sqcRZGate(q, 2.505491328617261, 0);
  sqcRYGate(q, 0.02337033295912691, 1);
  sqcRZGate(q, 3.023125319682476, 1);
  sqcRYGate(q, 2.3644078110574966, 2);
  sqcRZGate(q, 0.0033468023519983557, 2);
  sqcRYGate(q, -0.604843349446532, 3);
  sqcRZGate(q, 3.1148050195821706, 3);
  sqcRYGate(q, -2.9336964582478107, 4);
  sqcRZGate(q, 0.8770604952552463, 4);
  sqcRYGate(q, -1.4595055953614118, 5);
  sqcRZGate(q, 2.9971586989546264, 5);
  sqcRYGate(q, -1.649099760195287, 6);
  sqcRZGate(q, 2.5331054979377057, 6);
  sqcRYGate(q, -1.9645298990118576, 7);
  sqcRZGate(q, 0.0002017756734305836, 7);
  sqcRYGate(q, -3.1399218176225725, 8);
  sqcRZGate(q, 1.932477560382624, 8);
  sqcRYGate(q, 1.3896813954058311, 9);
  sqcRZGate(q, -0.0006190328161707246, 9);
  sqcRYGate(q, -2.9523038547315794, 10);
  sqcRZGate(q, -0.2626059436410602, 10);
  sqcRYGate(q, 3.0111546271403333, 11);
  sqcRZGate(q, -3.1082749523167554, 11);
  sqcRYGate(q, 0.46590512366343434, 12);
  sqcRZGate(q, -2.0649677393057067, 12);
  sqcRYGate(q, -1.6564697604870435, 13);
  sqcRZGate(q, 0.006622402078996892, 13);
  sqcRYGate(q, 1.665651546802871, 14);
  sqcRZGate(q, -0.0006008951554213406, 14);
  sqcRYGate(q, -1.0605518797971931, 15);
  sqcRZGate(q, 1.406121131118406, 15);
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
  sqcRYGate(q, 2.7271462210506874, 0);
  sqcRZGate(q, -1.4840991142877253, 0);
  sqcRYGate(q, 0.769898621730265, 1);
  sqcRZGate(q, -1.4757882475861175, 1);
  sqcRYGate(q, -1.585076697021842, 2);
  sqcRZGate(q, -3.114142963526861, 2);
  sqcRYGate(q, 0.10121970960155302, 3);
  sqcRZGate(q, 1.2871301303989493, 3);
  sqcRYGate(q, 0.016763287339116455, 4);
  sqcRZGate(q, 3.080843324286487, 4);
  sqcRYGate(q, 3.120482058590736, 5);
  sqcRZGate(q, -0.1846571387825605, 5);
  sqcRYGate(q, -0.006189019076434655, 6);
  sqcRZGate(q, 0.6061123289042466, 6);
  sqcRYGate(q, -1.5424638664728096, 7);
  sqcRZGate(q, 0.0009233030775668282, 7);
  sqcRYGate(q, -3.0081280167188647, 8);
  sqcRZGate(q, -0.6083155289079623, 8);
  sqcRYGate(q, 1.528157508603019, 9);
  sqcRZGate(q, -3.1415691176357057, 9);
  sqcRYGate(q, 2.8943805020378925, 10);
  sqcRZGate(q, 1.0744779720042992, 10);
  sqcRYGate(q, -1.5043388668926052, 11);
  sqcRZGate(q, -0.47392896490491226, 11);
  sqcRYGate(q, 3.0484784401458374, 12);
  sqcRZGate(q, -2.1243382441545906, 12);
  sqcRYGate(q, 1.5798789223171943, 13);
  sqcRZGate(q, -1.2406208445642013, 13);
  sqcRYGate(q, 1.5640353686602415, 14);
  sqcRZGate(q, 0.02408316994878179, 14);
  sqcRYGate(q, -1.7163412285596609, 15);
  sqcRZGate(q, -1.0593542791752075, 15);
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
  sqcRYGate(q, -0.040512458933923405, 0);
  sqcRZGate(q, 2.4065095109378287, 0);
  sqcRYGate(q, -2.892240523740535, 1);
  sqcRZGate(q, 0.08717373621923542, 1);
  sqcRYGate(q, -0.5885175801574611, 2);
  sqcRZGate(q, -0.4831374815908983, 2);
  sqcRYGate(q, 0.0007990677763523024, 3);
  sqcRZGate(q, -1.2711563107040984, 3);
  sqcRYGate(q, -0.43730300247645454, 4);
  sqcRZGate(q, 0.46677921450363863, 4);
  sqcRYGate(q, 1.7994303276410097, 5);
  sqcRZGate(q, 2.8340008664062335, 5);
  sqcRYGate(q, -1.4612969012500692, 6);
  sqcRZGate(q, -3.1408461513307935, 6);
  sqcRYGate(q, -2.103584593675161, 7);
  sqcRZGate(q, -3.136963076907443, 7);
  sqcRYGate(q, -0.014608772349371442, 8);
  sqcRZGate(q, 1.2324917681809593, 8);
  sqcRYGate(q, 1.386459497562781, 9);
  sqcRZGate(q, -0.007669622494702015, 9);
  sqcRYGate(q, -3.115748814634036, 10);
  sqcRZGate(q, -2.2598496604937655, 10);
  sqcRYGate(q, -0.19006519968183966, 11);
  sqcRZGate(q, 0.5145083277208586, 11);
  sqcRYGate(q, -0.5158728763071446, 12);
  sqcRZGate(q, 1.7579297914068968, 12);
  sqcRYGate(q, 0.020978783771020915, 13);
  sqcRZGate(q, 2.100252196579885, 13);
  sqcRYGate(q, -0.21506311613935036, 14);
  sqcRZGate(q, -0.09180937923647825, 14);
  sqcRYGate(q, -0.7952127455692208, 15);
  sqcRZGate(q, 2.9633229457006327, 15);
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
  sqcRYGate(q, 1.4639714833903357, 0);
  sqcRZGate(q, -0.04555162319583488, 0);
  sqcRYGate(q, 0.016353550786537573, 1);
  sqcRZGate(q, -0.00030547820595929875, 1);
  sqcRYGate(q, -0.054019985768223755, 2);
  sqcRZGate(q, -1.1111394343225989, 2);
  sqcRYGate(q, -1.1669427691751002, 3);
  sqcRZGate(q, -1.5674899659319501, 3);
  sqcRYGate(q, -1.8373427410424619, 4);
  sqcRZGate(q, 1.5646025367938945, 4);
  sqcRYGate(q, -1.614981154776088, 5);
  sqcRZGate(q, -1.576321159389832, 5);
  sqcRYGate(q, -1.675534741599881, 6);
  sqcRZGate(q, 1.794298154457847, 6);
  sqcRYGate(q, -0.07204456541855121, 7);
  sqcRZGate(q, -1.576767380134382, 7);
  sqcRYGate(q, 1.7168650562507022, 8);
  sqcRZGate(q, 1.6306027923340318, 8);
  sqcRYGate(q, -2.9225555438912805, 9);
  sqcRZGate(q, 1.5651844074896903, 9);
  sqcRYGate(q, 3.12781415311715, 10);
  sqcRZGate(q, 1.5470293504880717, 10);
  sqcRYGate(q, -0.002292436161718925, 11);
  sqcRZGate(q, -1.62344538712089, 11);
  sqcRYGate(q, -3.033154060070394, 12);
  sqcRZGate(q, 0.14255269571080917, 12);
  sqcRYGate(q, 3.137759618441096, 13);
  sqcRZGate(q, 2.4308111915504114, 13);
  sqcRYGate(q, 0.03322333732347268, 14);
  sqcRZGate(q, 1.6949631004527665, 14);
  sqcRYGate(q, 3.059853375710491, 15);
  sqcRZGate(q, -2.587684859445212, 15);
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
  sqcRYGate(q, -1.4594699429000872, 0);
  sqcRZGate(q, -1.3117912277802195, 0);
  sqcRYGate(q, -1.5976086875618993, 1);
  sqcRZGate(q, -1.2129368045245137, 1);
  sqcRYGate(q, -1.415610542892444, 2);
  sqcRZGate(q, -1.3596045820140175, 2);
  sqcRYGate(q, 1.56503201573652, 3);
  sqcRZGate(q, 0.25590392633330533, 3);
  sqcRYGate(q, 1.5844426495095745, 4);
  sqcRZGate(q, -2.955235450065265, 4);
  sqcRYGate(q, -1.5699879077615233, 5);
  sqcRZGate(q, 0.38970410894805313, 5);
  sqcRYGate(q, 1.541566924635512, 6);
  sqcRZGate(q, -2.8369394669524906, 6);
  sqcRYGate(q, 1.5713059662630409, 7);
  sqcRZGate(q, 1.948758907774688, 7);
  sqcRYGate(q, 1.5623625297523995, 8);
  sqcRZGate(q, 0.17138225450064581, 8);
  sqcRYGate(q, 1.5702979111769357, 9);
  sqcRZGate(q, 1.4580543827488428, 9);
  sqcRYGate(q, -1.594315333703122, 10);
  sqcRZGate(q, -2.9994260431405046, 10);
  sqcRYGate(q, -1.484836773920067, 11);
  sqcRZGate(q, -2.6764994371325574, 11);
  sqcRYGate(q, -1.5417376379482377, 12);
  sqcRZGate(q, -1.9605524583436271, 12);
  sqcRYGate(q, 1.5909010994900488, 13);
  sqcRZGate(q, -1.075958394580737, 13);
  sqcRYGate(q, -1.4228638133264033, 14);
  sqcRZGate(q, 1.5451137376404873, 14);
  sqcRYGate(q, -0.9505231923885678, 15);
  sqcRZGate(q, 1.4430823842587124, 15);

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
