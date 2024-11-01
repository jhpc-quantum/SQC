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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -4.3105335105874203e-05, 0);
  sqcRZGate(q, -1.8966034469242132, 0);
  sqcRYGate(q, 0.00023062686888941644, 1);
  sqcRZGate(q, 1.678205383647767, 1);
  sqcRYGate(q, -0.00014338045069628433, 2);
  sqcRZGate(q, -0.3987397414737873, 2);
  sqcRYGate(q, 0.6570399040521657, 3);
  sqcRZGate(q, -2.3669205549643504, 3);
  sqcRYGate(q, 0.5217144690850039, 4);
  sqcRZGate(q, 2.589875825215295, 4);
  sqcRYGate(q, 3.139780799029649, 5);
  sqcRZGate(q, -2.4753017651149767, 5);
  sqcRYGate(q, -3.14153487695321, 6);
  sqcRZGate(q, -2.645940744355657, 6);
  sqcRYGate(q, 0.0007920834552592737, 7);
  sqcRZGate(q, -0.6232528488026556, 7);
  sqcRYGate(q, 0.9940068397528572, 8);
  sqcRZGate(q, 0.6806733054952039, 8);
  sqcRYGate(q, -1.5708224143559353, 9);
  sqcRZGate(q, -1.632910701106642, 9);
  sqcRYGate(q, 1.8251083191717357, 10);
  sqcRZGate(q, -1.5544723371230056, 10);
  sqcRYGate(q, 1.570761585605113, 11);
  sqcRZGate(q, 1.5708948063922026, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6009438001846048, 0);
  sqcRZGate(q, -0.019378833822585827, 0);
  sqcRYGate(q, -1.5699124411093717, 1);
  sqcRZGate(q, -0.08917859365556334, 1);
  sqcRYGate(q, -1.5702920688671425, 2);
  sqcRZGate(q, -1.684853155255466, 2);
  sqcRYGate(q, 1.120682131881958, 3);
  sqcRZGate(q, 2.170276048060583, 3);
  sqcRYGate(q, 2.6655796028245446, 4);
  sqcRZGate(q, -0.5204722403829276, 4);
  sqcRYGate(q, -0.002309342794050373, 5);
  sqcRZGate(q, 2.837455751428218, 5);
  sqcRYGate(q, 1.5996314623539665, 6);
  sqcRZGate(q, 2.758135894003001, 6);
  sqcRYGate(q, 1.5706899199472764, 7);
  sqcRZGate(q, 2.9191561361897245, 7);
  sqcRYGate(q, 0.30249102853603116, 8);
  sqcRZGate(q, -2.576373666698765, 8);
  sqcRYGate(q, -0.00022081090109615786, 9);
  sqcRZGate(q, -3.079634916018669, 9);
  sqcRYGate(q, -1.490477441598463, 10);
  sqcRZGate(q, 1.7039385987597306, 10);
  sqcRYGate(q, -1.57014953763398, 11);
  sqcRZGate(q, -1.7219393756769357, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9814617255036087, 0);
  sqcRZGate(q, 0.547580597038773, 0);
  sqcRYGate(q, 2.923211621057222, 1);
  sqcRZGate(q, 3.0494766604315853, 1);
  sqcRYGate(q, 6.469108961579067e-05, 2);
  sqcRZGate(q, 1.6848384370472038, 2);
  sqcRYGate(q, 0.024756606525109248, 3);
  sqcRZGate(q, 0.5790860167619013, 3);
  sqcRYGate(q, -0.3779077383472611, 4);
  sqcRZGate(q, -1.333459156852986, 4);
  sqcRYGate(q, -0.0020135386148193222, 5);
  sqcRZGate(q, -1.0945282158044785, 5);
  sqcRYGate(q, -3.1415074982540294, 6);
  sqcRZGate(q, 3.074136408055161, 6);
  sqcRYGate(q, 0.00011825922149666368, 7);
  sqcRZGate(q, 0.22252604848878046, 7);
  sqcRYGate(q, -1.5711591160817653, 8);
  sqcRZGate(q, 2.387860943340393, 8);
  sqcRYGate(q, 1.5717627838166377, 9);
  sqcRZGate(q, 3.1412423685187822, 9);
  sqcRYGate(q, -0.00017639348611099386, 10);
  sqcRZGate(q, -1.712624818309846, 10);
  sqcRYGate(q, -1.1233550856838965, 11);
  sqcRZGate(q, 2.968713441984441, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.037725166605770306, 0);
  sqcRZGate(q, 1.0044625716812714, 0);
  sqcRYGate(q, -1.5719406997632384, 1);
  sqcRZGate(q, -0.5152521630430479, 1);
  sqcRYGate(q, 1.570340820377053, 2);
  sqcRZGate(q, 0.3289844336733386, 2);
  sqcRYGate(q, -1.5942879249183397, 3);
  sqcRZGate(q, 0.28113570636955565, 3);
  sqcRYGate(q, -1.5974397641449656, 4);
  sqcRZGate(q, -2.4367494154632166, 4);
  sqcRYGate(q, 1.5721182299693923, 5);
  sqcRZGate(q, 1.565921960640891, 5);
  sqcRYGate(q, -1.4372342783818741, 6);
  sqcRZGate(q, 2.0472534860427265, 6);
  sqcRYGate(q, -1.5706997389743629, 7);
  sqcRZGate(q, 2.1994408996728962, 7);
  sqcRYGate(q, -0.0008924852527013411, 8);
  sqcRZGate(q, 2.397431910741044, 8);
  sqcRYGate(q, -1.5712708047534383, 9);
  sqcRZGate(q, 1.528102380631954, 9);
  sqcRYGate(q, -0.1525966196527655, 10);
  sqcRZGate(q, -3.088296868839973, 10);
  sqcRYGate(q, 3.420924944563808e-05, 11);
  sqcRZGate(q, -2.9606184731503298, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.484522778967409, 0);
  sqcRZGate(q, -1.976956065119925, 0);
  sqcRYGate(q, 3.141398657007985, 1);
  sqcRZGate(q, 0.011104367836026974, 1);
  sqcRYGate(q, -1.5693196598532184, 2);
  sqcRZGate(q, 1.836601873396237, 2);
  sqcRYGate(q, 1.570742487772087, 3);
  sqcRZGate(q, 1.5708095507285789, 3);
  sqcRYGate(q, 1.5707106530679136, 4);
  sqcRZGate(q, 3.140040049116971, 4);
  sqcRYGate(q, 1.5818093121913748, 5);
  sqcRZGate(q, 3.141207222235025, 5);
  sqcRYGate(q, -1.5678446986733272, 6);
  sqcRZGate(q, 1.5061594522562807, 6);
  sqcRYGate(q, -1.5680796187779023, 7);
  sqcRZGate(q, -1.9984103493613494, 7);
  sqcRYGate(q, -0.028528359995339654, 8);
  sqcRZGate(q, -0.09038134501664262, 8);
  sqcRYGate(q, -1.5709065286882913, 9);
  sqcRZGate(q, -1.5712158868778934, 9);
  sqcRYGate(q, -1.5708265658523723, 10);
  sqcRZGate(q, -2.2344382833385374, 10);
  sqcRYGate(q, -1.5706441815429424, 11);
  sqcRZGate(q, 1.2428188774339262, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.009085162995554322, 0);
  sqcRZGate(q, -2.7374012048091823, 0);
  sqcRYGate(q, 3.1386421005863325, 1);
  sqcRZGate(q, 0.3581312534985814, 1);
  sqcRYGate(q, 1.5678374265454533, 2);
  sqcRZGate(q, -1.1800909217028215, 2);
  sqcRYGate(q, -1.5708694745112746, 3);
  sqcRZGate(q, -3.1244342722575897, 3);
  sqcRYGate(q, -2.8797384269824287, 4);
  sqcRZGate(q, 0.3634984843039329, 4);
  sqcRYGate(q, -1.571234944359114, 5);
  sqcRZGate(q, -3.1318716747581195, 5);
  sqcRYGate(q, -0.5380648302047776, 6);
  sqcRZGate(q, -2.1012164612877093, 6);
  sqcRYGate(q, 0.000349009465105965, 7);
  sqcRZGate(q, -1.1433169016088396, 7);
  sqcRYGate(q, -3.1413724062504986, 8);
  sqcRZGate(q, 2.862401975257207, 8);
  sqcRYGate(q, -2.552659753725921, 9);
  sqcRZGate(q, -0.02361854538455238, 9);
  sqcRYGate(q, -3.1289701615162357, 10);
  sqcRZGate(q, 1.516655059233552, 10);
  sqcRYGate(q, -3.1381348816567023, 11);
  sqcRZGate(q, 2.8138380892625903, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5522201069583792, 0);
  sqcRZGate(q, -3.14151013033047, 0);
  sqcRYGate(q, -1.5979936186170394, 1);
  sqcRZGate(q, 3.104898563957839, 1);
  sqcRYGate(q, 4.079105934595998e-06, 2);
  sqcRZGate(q, 0.23581379246917325, 2);
  sqcRYGate(q, 0.031684969826573095, 3);
  sqcRZGate(q, 3.124692636607213, 3);
  sqcRYGate(q, 3.1413617865509997, 4);
  sqcRZGate(q, 1.9406102033259636, 4);
  sqcRYGate(q, 1.5707262978506007, 5);
  sqcRZGate(q, -2.804769333055699, 5);
  sqcRYGate(q, -3.137583426931097, 6);
  sqcRZGate(q, 2.5324267642862957, 6);
  sqcRYGate(q, -1.5707968253407907, 7);
  sqcRZGate(q, 1.4919982015303244, 7);
  sqcRYGate(q, 0.007139722637679853, 8);
  sqcRZGate(q, -1.0673226824907598, 8);
  sqcRYGate(q, 3.1070247756692226, 9);
  sqcRZGate(q, -1.574675066097262, 9);
  sqcRYGate(q, -3.0177084764933007, 10);
  sqcRZGate(q, -2.5221912337572134, 10);
  sqcRYGate(q, -1.4474488084592902, 11);
  sqcRZGate(q, 1.0135290931526435, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5709455972557462, 0);
  sqcRZGate(q, 0.0075892611287056155, 0);
  sqcRYGate(q, 1.5707656928709746, 1);
  sqcRZGate(q, 0.012966074994401387, 1);
  sqcRYGate(q, 7.032029118825277e-05, 2);
  sqcRZGate(q, 2.508070961150757, 2);
  sqcRYGate(q, -2.287018917845354, 3);
  sqcRZGate(q, -0.04676279427406094, 3);
  sqcRYGate(q, 2.807684347488126, 4);
  sqcRZGate(q, -0.1720610370655295, 4);
  sqcRYGate(q, 3.137622163638465, 5);
  sqcRZGate(q, -0.082744239217055, 5);
  sqcRYGate(q, 1.5705036771872982, 6);
  sqcRZGate(q, -3.141327251313547, 6);
  sqcRYGate(q, 0.00012861327835711478, 7);
  sqcRZGate(q, -0.901569641487276, 7);
  sqcRYGate(q, 0.013774900238696841, 8);
  sqcRZGate(q, 1.3517262453140557, 8);
  sqcRYGate(q, 0.006239300859478547, 9);
  sqcRZGate(q, 1.5514305582590584, 9);
  sqcRYGate(q, 1.5707483826634359, 10);
  sqcRZGate(q, 0.09716110087798102, 10);
  sqcRYGate(q, 0.004472118554964928, 11);
  sqcRZGate(q, -1.0596418652648247, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.57016014904294, 0);
  sqcRZGate(q, -1.5689416421683022, 0);
  sqcRYGate(q, -3.1405536407773593, 1);
  sqcRZGate(q, -1.5605906957414408, 1);
  sqcRYGate(q, 2.751020239512875, 2);
  sqcRZGate(q, 3.1412321948973463, 2);
  sqcRYGate(q, 3.141503596918212, 3);
  sqcRZGate(q, 2.9393028137515897, 3);
  sqcRYGate(q, 0.0007347834938691406, 4);
  sqcRZGate(q, -1.0393634461366015, 4);
  sqcRYGate(q, -6.926174139199048e-05, 5);
  sqcRZGate(q, -2.722668065987849, 5);
  sqcRYGate(q, -1.5739745240588188, 6);
  sqcRZGate(q, -1.368080145755699, 6);
  sqcRYGate(q, -0.000416445546037795, 7);
  sqcRZGate(q, 1.194595406400204, 7);
  sqcRYGate(q, -0.008588085614692157, 8);
  sqcRZGate(q, 1.0192841796197607, 8);
  sqcRYGate(q, 2.659891111258074, 9);
  sqcRZGate(q, 9.822440024365164e-05, 9);
  sqcRYGate(q, 0.10109252345720066, 10);
  sqcRZGate(q, 2.8843935125070197, 10);
  sqcRYGate(q, -3.1396607882750005, 11);
  sqcRZGate(q, 3.097133908483828, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5714506880077064, 0);
  sqcRZGate(q, 1.173852789162938, 0);
  sqcRYGate(q, -1.5710895935222755, 1);
  sqcRZGate(q, -0.15236324946632163, 1);
  sqcRYGate(q, -1.2750483739814147, 2);
  sqcRZGate(q, -1.9677203851800649, 2);
  sqcRYGate(q, -3.1407090324548155, 3);
  sqcRZGate(q, 1.2639249929164373, 3);
  sqcRYGate(q, -0.009669531354439855, 4);
  sqcRZGate(q, -0.751680772843498, 4);
  sqcRYGate(q, 1.5709908408088151, 5);
  sqcRZGate(q, 2.990330110078256, 5);
  sqcRYGate(q, -1.5703836802499578, 6);
  sqcRZGate(q, -0.39707559089723926, 6);
  sqcRYGate(q, 3.1412565290319527, 7);
  sqcRZGate(q, 0.06350924519090154, 7);
  sqcRYGate(q, 0.0006123779051843351, 8);
  sqcRZGate(q, 1.7024213796010512, 8);
  sqcRYGate(q, 1.570758739512835, 9);
  sqcRZGate(q, -1.7222581409177617, 9);
  sqcRYGate(q, 1.5713885115787454, 10);
  sqcRZGate(q, 2.744248023184449, 10);
  sqcRYGate(q, 1.5716349509357044, 11);
  sqcRZGate(q, -1.7241476861446632, 11);

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
