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

  sqcRYGate(q, 1.516947100031227, 0);
  sqcRZGate(q, -0.07896421382682722, 0);
  sqcRYGate(q, -0.47319222891954116, 1);
  sqcRZGate(q, -0.20254461460833628, 1);
  sqcRYGate(q, 2.3675994386100228, 2);
  sqcRZGate(q, 3.1407771069517376, 2);
  sqcRYGate(q, 1.4624388253075493, 3);
  sqcRZGate(q, 3.139864482375592, 3);
  sqcRYGate(q, 1.5683293690965876, 4);
  sqcRZGate(q, 3.0557072160285856, 4);
  sqcRYGate(q, -1.5711674683825043, 5);
  sqcRZGate(q, -1.5295262031042869, 5);
  sqcRYGate(q, 3.077973043880626, 6);
  sqcRZGate(q, -3.049565293321419, 6);
  sqcRYGate(q, -1.412036854484894, 7);
  sqcRZGate(q, -2.5282316229357242, 7);
  sqcRYGate(q, 0.05160480072488127, 8);
  sqcRZGate(q, 3.131104525435331, 8);
  sqcRYGate(q, 2.521992074424282, 9);
  sqcRZGate(q, -1.6195444604703368, 9);
  sqcRYGate(q, 1.7613883106513857, 10);
  sqcRZGate(q, -0.2706988484037407, 10);
  sqcRYGate(q, -2.833484671352147, 11);
  sqcRZGate(q, 0.6678162787476067, 11);
  sqcRYGate(q, 1.6148443510116373, 12);
  sqcRZGate(q, -2.547795484036212, 12);
  sqcRYGate(q, 1.4685314111310002, 13);
  sqcRZGate(q, 1.8259975655669713, 13);
  sqcRYGate(q, 2.8921459247289243, 14);
  sqcRZGate(q, -0.4219354740954806, 14);
  sqcRYGate(q, -2.2931330221567494, 15);
  sqcRZGate(q, 1.8770356478036296, 15);
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
  sqcRYGate(q, -1.1710276491705187, 0);
  sqcRZGate(q, -2.92438075154846, 0);
  sqcRYGate(q, 0.8703650745825274, 1);
  sqcRZGate(q, -0.4311644705481532, 1);
  sqcRYGate(q, -1.6853027644448613, 2);
  sqcRZGate(q, -0.011564968231255966, 2);
  sqcRYGate(q, -1.568940602956042, 3);
  sqcRZGate(q, 2.4718716784144434, 3);
  sqcRYGate(q, -1.2531687359489823, 4);
  sqcRZGate(q, -2.5969782628821827, 4);
  sqcRYGate(q, 1.1772781830281203, 5);
  sqcRZGate(q, -0.24168334033644445, 5);
  sqcRYGate(q, 1.5725882289028565, 6);
  sqcRZGate(q, 1.9746229103326094, 6);
  sqcRYGate(q, -0.14011949511333732, 7);
  sqcRZGate(q, -0.6058180057409297, 7);
  sqcRYGate(q, 3.137624637124776, 8);
  sqcRZGate(q, -0.8797988998902033, 8);
  sqcRYGate(q, 0.34968919028263407, 9);
  sqcRZGate(q, -1.6302310296485585, 9);
  sqcRYGate(q, -0.000440526127536112, 10);
  sqcRZGate(q, -0.06611522030683722, 10);
  sqcRYGate(q, 2.6722990343640056, 11);
  sqcRZGate(q, 1.4985992425367582, 11);
  sqcRYGate(q, -1.6925465671426592, 12);
  sqcRZGate(q, -1.9610131951772563, 12);
  sqcRYGate(q, 1.7452114231231117, 13);
  sqcRZGate(q, -0.4600455599717976, 13);
  sqcRYGate(q, -0.7504752630270968, 14);
  sqcRZGate(q, 0.046015822786772624, 14);
  sqcRYGate(q, -0.4684057518780582, 15);
  sqcRZGate(q, -0.7280027370585165, 15);
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
  sqcRYGate(q, -1.6801551448617078, 0);
  sqcRZGate(q, -3.109888606724784, 0);
  sqcRYGate(q, -0.042360681213889716, 1);
  sqcRZGate(q, -2.7246354692929904, 1);
  sqcRYGate(q, 1.5728119834778715, 2);
  sqcRZGate(q, -1.8277353376956595, 2);
  sqcRYGate(q, 1.0827858748988968, 3);
  sqcRZGate(q, 0.98041553168149, 3);
  sqcRYGate(q, 1.394980901985491, 4);
  sqcRZGate(q, 3.031805999999622, 4);
  sqcRYGate(q, 2.6425858067542585, 5);
  sqcRZGate(q, -0.2255403070494486, 5);
  sqcRYGate(q, 1.5580079253797718, 6);
  sqcRZGate(q, -2.2644748197598723, 6);
  sqcRYGate(q, 1.5694904196106962, 7);
  sqcRZGate(q, -2.6783953689901736, 7);
  sqcRYGate(q, 2.850894654804229, 8);
  sqcRZGate(q, -0.14346292515074552, 8);
  sqcRYGate(q, 0.619247388132746, 9);
  sqcRZGate(q, -0.9402153175103988, 9);
  sqcRYGate(q, -0.595351555178352, 10);
  sqcRZGate(q, -2.890445108612319, 10);
  sqcRYGate(q, 1.729842440647917, 11);
  sqcRZGate(q, -0.3323175779379603, 11);
  sqcRYGate(q, -0.20489857693195826, 12);
  sqcRZGate(q, 1.7002626905961957, 12);
  sqcRYGate(q, 1.67457403446403, 13);
  sqcRZGate(q, 0.8388647339415793, 13);
  sqcRYGate(q, -0.2572522800027634, 14);
  sqcRZGate(q, -0.9968390438031886, 14);
  sqcRYGate(q, -1.9668857355841007, 15);
  sqcRZGate(q, -1.8609970222552477, 15);
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
  sqcRYGate(q, -2.8474323736386276, 0);
  sqcRZGate(q, 0.053539191625879695, 0);
  sqcRYGate(q, -1.5848454210056522, 1);
  sqcRZGate(q, -2.266348704548361, 1);
  sqcRYGate(q, -1.7984603171092557, 2);
  sqcRZGate(q, -0.5592393274266537, 2);
  sqcRYGate(q, 0.9994603699873802, 3);
  sqcRZGate(q, 1.7294881408572862, 3);
  sqcRYGate(q, -2.4320709703723713, 4);
  sqcRZGate(q, -1.3429891947351944, 4);
  sqcRYGate(q, 1.5995735712954249, 5);
  sqcRZGate(q, 0.10889307226219812, 5);
  sqcRYGate(q, -3.1390617039110946, 6);
  sqcRZGate(q, -0.6270986681535031, 6);
  sqcRYGate(q, -1.061245665983256, 7);
  sqcRZGate(q, -1.0169264603474304, 7);
  sqcRYGate(q, 1.571850329637229, 8);
  sqcRZGate(q, -1.5775040092227628, 8);
  sqcRYGate(q, 3.0785566730470273, 9);
  sqcRZGate(q, 0.8535520783562909, 9);
  sqcRYGate(q, 0.042047291888276384, 10);
  sqcRZGate(q, -3.11747244226805, 10);
  sqcRYGate(q, -3.0442234531291374, 11);
  sqcRZGate(q, -1.9689943514011528, 11);
  sqcRYGate(q, 0.10300942179712091, 12);
  sqcRZGate(q, 2.9657495037545503, 12);
  sqcRYGate(q, 1.0792991651542527, 13);
  sqcRZGate(q, 2.19068070577331, 13);
  sqcRYGate(q, 1.1436418764696734, 14);
  sqcRZGate(q, 0.14116665317045773, 14);
  sqcRYGate(q, -0.13932754270710213, 15);
  sqcRZGate(q, 0.9645103164993435, 15);
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
  sqcRYGate(q, 1.5622318929676022, 0);
  sqcRZGate(q, -1.5921126189556214, 0);
  sqcRYGate(q, -2.800666003355081, 1);
  sqcRZGate(q, -2.0698244868393676, 1);
  sqcRYGate(q, 2.972780264834521, 2);
  sqcRZGate(q, 1.1755270611071094, 2);
  sqcRYGate(q, -1.6716328161599507, 3);
  sqcRZGate(q, -1.5582439578244003, 3);
  sqcRYGate(q, 3.0872387375347925, 4);
  sqcRZGate(q, 2.4451073390238895, 4);
  sqcRYGate(q, 0.3110778044704946, 5);
  sqcRZGate(q, 0.9893410247280494, 5);
  sqcRYGate(q, -1.9212818956352677, 6);
  sqcRZGate(q, 2.163725274318941, 6);
  sqcRYGate(q, -1.6381342131834353, 7);
  sqcRZGate(q, 1.9215356198803768, 7);
  sqcRYGate(q, 1.5767902975015433, 8);
  sqcRZGate(q, -1.4129978579072437, 8);
  sqcRYGate(q, 1.57200448917086, 9);
  sqcRZGate(q, -1.5600408917113722, 9);
  sqcRYGate(q, 0.6778247476900477, 10);
  sqcRZGate(q, 0.31782013735083214, 10);
  sqcRYGate(q, -0.8040944658428104, 11);
  sqcRZGate(q, 1.25076670240696, 11);
  sqcRYGate(q, -3.071574648554499, 12);
  sqcRZGate(q, -0.6204222007464081, 12);
  sqcRYGate(q, 0.452185056752648, 13);
  sqcRZGate(q, 1.4026260265516601, 13);
  sqcRYGate(q, 0.21207269659366368, 14);
  sqcRZGate(q, 2.4137720398600635, 14);
  sqcRYGate(q, 0.7210604761527099, 15);
  sqcRZGate(q, -0.45360959736860007, 15);
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
  sqcRYGate(q, -0.34231123082090775, 0);
  sqcRZGate(q, 0.8451261720762239, 0);
  sqcRYGate(q, 2.2897846799937605, 1);
  sqcRZGate(q, 1.5791600971209878, 1);
  sqcRYGate(q, 1.458127003767535, 2);
  sqcRZGate(q, 0.3905418153304456, 2);
  sqcRYGate(q, -1.4214266418325883, 3);
  sqcRZGate(q, -1.0560343111446546, 3);
  sqcRYGate(q, -2.643530490167772, 4);
  sqcRZGate(q, 2.1595730551193437, 4);
  sqcRYGate(q, 0.19818322321355902, 5);
  sqcRZGate(q, 0.4849883270441105, 5);
  sqcRYGate(q, 3.119067078194439, 6);
  sqcRZGate(q, -1.2477969452929987, 6);
  sqcRYGate(q, 1.4275069407512948, 7);
  sqcRZGate(q, -0.15045362981837052, 7);
  sqcRYGate(q, 3.115201923934034, 8);
  sqcRZGate(q, -0.8226108060159342, 8);
  sqcRYGate(q, 1.5854573291669476, 9);
  sqcRZGate(q, -2.9773796481127337, 9);
  sqcRYGate(q, -1.5730740074994567, 10);
  sqcRZGate(q, 1.5712981736414795, 10);
  sqcRYGate(q, 2.7762612885102937, 11);
  sqcRZGate(q, -0.224866985726126, 11);
  sqcRYGate(q, -3.1036056253977957, 12);
  sqcRZGate(q, 1.5550710881420997, 12);
  sqcRYGate(q, -0.6547163300057208, 13);
  sqcRZGate(q, -0.9686958213753547, 13);
  sqcRYGate(q, -2.132104257252425, 14);
  sqcRZGate(q, 0.08239697693805599, 14);
  sqcRYGate(q, -2.6377945203373248, 15);
  sqcRZGate(q, 1.6206405109727433, 15);
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
  sqcRYGate(q, 3.1179092664078336, 0);
  sqcRZGate(q, -1.4657068223609613, 0);
  sqcRYGate(q, -1.1522326911504006, 1);
  sqcRZGate(q, 1.7819325423973043, 1);
  sqcRYGate(q, 2.023032470050582, 2);
  sqcRZGate(q, 0.9886488725487946, 2);
  sqcRYGate(q, 2.001998506394285, 3);
  sqcRZGate(q, 2.037842123534319, 3);
  sqcRYGate(q, -1.42768264182266, 4);
  sqcRZGate(q, 0.37708643446311285, 4);
  sqcRYGate(q, 2.8084748720772024, 5);
  sqcRZGate(q, 1.7465071560760776, 5);
  sqcRYGate(q, 2.166185708995354, 6);
  sqcRZGate(q, 2.202651621024125, 6);
  sqcRYGate(q, -1.3407563566986938, 7);
  sqcRZGate(q, 2.9888886168248656, 7);
  sqcRYGate(q, -0.003924859625817234, 8);
  sqcRZGate(q, 1.2383232428458548, 8);
  sqcRYGate(q, -1.5587573267429207, 9);
  sqcRZGate(q, 1.5489322357721047, 9);
  sqcRYGate(q, 1.5695376642753853, 10);
  sqcRZGate(q, 3.0495118980779545, 10);
  sqcRYGate(q, 1.5720220385098937, 11);
  sqcRZGate(q, -0.005609909308231131, 11);
  sqcRYGate(q, 1.6200265883307283, 12);
  sqcRZGate(q, 0.19463654634173885, 12);
  sqcRYGate(q, -1.7308881210040348, 13);
  sqcRZGate(q, 2.7601696707565204, 13);
  sqcRYGate(q, 2.982325694823138, 14);
  sqcRZGate(q, -1.8463970283716031, 14);
  sqcRYGate(q, 1.605184989275411, 15);
  sqcRZGate(q, -1.6036438924482814, 15);
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
  sqcRYGate(q, -1.1820124624856394, 0);
  sqcRZGate(q, 2.564401478955303, 0);
  sqcRYGate(q, -1.7740036424937264, 1);
  sqcRZGate(q, 2.103911648580453, 1);
  sqcRYGate(q, -2.543665128328754, 2);
  sqcRZGate(q, -2.952697801385351, 2);
  sqcRYGate(q, -3.0967946982714887, 3);
  sqcRZGate(q, 0.4738559258401513, 3);
  sqcRYGate(q, -2.437072337316741, 4);
  sqcRZGate(q, -2.826461213584046, 4);
  sqcRYGate(q, -3.062136709817737, 5);
  sqcRZGate(q, -1.5096328148707276, 5);
  sqcRYGate(q, 0.002955596741740126, 6);
  sqcRZGate(q, -2.2287401650402208, 6);
  sqcRYGate(q, -2.7018580307147935, 7);
  sqcRZGate(q, 0.8118868865305107, 7);
  sqcRYGate(q, -3.14106063533544, 8);
  sqcRZGate(q, -1.2477634595100664, 8);
  sqcRYGate(q, -1.5694366320356066, 9);
  sqcRZGate(q, -1.5729387294198336, 9);
  sqcRYGate(q, 3.1405309895341227, 10);
  sqcRZGate(q, -1.9899561536603383, 10);
  sqcRYGate(q, -1.5511228941738544, 11);
  sqcRZGate(q, 1.575997020106137, 11);
  sqcRYGate(q, -1.5685533812067793, 12);
  sqcRZGate(q, 1.5733212050947831, 12);
  sqcRYGate(q, -1.5049292701174442, 13);
  sqcRZGate(q, 1.7572289156429775, 13);
  sqcRYGate(q, 2.6316979135782166, 14);
  sqcRZGate(q, -1.9948161553072827, 14);
  sqcRYGate(q, 1.658977535654728, 15);
  sqcRZGate(q, -0.6002159035116277, 15);
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
  sqcRYGate(q, -0.009716097054957904, 0);
  sqcRZGate(q, 0.6581981508781742, 0);
  sqcRYGate(q, -2.1763019250470945, 1);
  sqcRZGate(q, 2.428590297233869, 1);
  sqcRYGate(q, -2.06245659027254, 2);
  sqcRZGate(q, 1.9841528662861831, 2);
  sqcRYGate(q, -1.574777399264715, 3);
  sqcRZGate(q, 0.46107116189466524, 3);
  sqcRYGate(q, -1.4394171787474845, 4);
  sqcRZGate(q, -1.090091590234433, 4);
  sqcRYGate(q, 0.2190679585231752, 5);
  sqcRZGate(q, -2.4793763517848864, 5);
  sqcRYGate(q, -2.182532877919379, 6);
  sqcRZGate(q, 0.44821032758274587, 6);
  sqcRYGate(q, -0.4919940666322723, 7);
  sqcRZGate(q, -1.9029866469451333, 7);
  sqcRYGate(q, 0.2782636494188973, 8);
  sqcRZGate(q, -1.370643270373914, 8);
  sqcRYGate(q, 1.5948463632726089, 9);
  sqcRZGate(q, -2.6980643864039235, 9);
  sqcRYGate(q, 0.0032181802366118006, 10);
  sqcRZGate(q, 1.8706118751516154, 10);
  sqcRYGate(q, 1.6795335428694533, 11);
  sqcRZGate(q, 1.365386680770344, 11);
  sqcRYGate(q, -1.5766457426830645, 12);
  sqcRZGate(q, 1.6505858163315938, 12);
  sqcRYGate(q, 1.5713244777910527, 13);
  sqcRZGate(q, 3.138114285893131, 13);
  sqcRYGate(q, 1.6612082178606011, 14);
  sqcRZGate(q, 3.1130884457450207, 14);
  sqcRYGate(q, -0.49196247313482827, 15);
  sqcRZGate(q, -2.8131963332066103, 15);
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
  sqcRYGate(q, -1.3103856418615953, 0);
  sqcRZGate(q, 0.9592655937819664, 0);
  sqcRYGate(q, 0.821125787334375, 1);
  sqcRZGate(q, 2.3996505096272522, 1);
  sqcRYGate(q, 1.4594872182967888, 2);
  sqcRZGate(q, -0.016426426164290575, 2);
  sqcRYGate(q, -3.002603614907517, 3);
  sqcRZGate(q, 0.5378582568227447, 3);
  sqcRYGate(q, -0.5585641045463313, 4);
  sqcRZGate(q, -1.5362573701527849, 4);
  sqcRYGate(q, -1.884632270070106, 5);
  sqcRZGate(q, -0.5992967168971965, 5);
  sqcRYGate(q, -3.121238008251063, 6);
  sqcRZGate(q, -1.5855514918850426, 6);
  sqcRYGate(q, -1.6082201349772267, 7);
  sqcRZGate(q, 1.4940249409932316, 7);
  sqcRYGate(q, -3.135545016451085, 8);
  sqcRZGate(q, 0.857786877642419, 8);
  sqcRYGate(q, -1.5867427111527288, 9);
  sqcRZGate(q, 1.5623751628245417, 9);
  sqcRYGate(q, -0.16950516182042574, 10);
  sqcRZGate(q, 1.8492909236408046, 10);
  sqcRYGate(q, -3.1413580598163984, 11);
  sqcRZGate(q, -1.700454463108887, 11);
  sqcRYGate(q, 3.0525673407582787, 12);
  sqcRZGate(q, -1.555981285305993, 12);
  sqcRYGate(q, -1.5708846360570616, 13);
  sqcRZGate(q, -0.03478646025731092, 13);
  sqcRYGate(q, -1.5679297547668787, 14);
  sqcRZGate(q, -1.5696896313124267, 14);
  sqcRYGate(q, -0.19505485731604377, 15);
  sqcRZGate(q, -0.047383155580399065, 15);
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
  sqcRYGate(q, 3.139821565469414, 0);
  sqcRZGate(q, -2.495022902231782, 0);
  sqcRYGate(q, 1.5159135436896616, 1);
  sqcRZGate(q, -1.9828779216960521, 1);
  sqcRYGate(q, 2.2737463360633683, 2);
  sqcRZGate(q, -0.9494823648052986, 2);
  sqcRYGate(q, -0.2936973701454155, 3);
  sqcRZGate(q, -1.8911518679282224, 3);
  sqcRYGate(q, 3.073848558667544, 4);
  sqcRZGate(q, 1.5933771934725618, 4);
  sqcRYGate(q, 0.0037203219988268185, 5);
  sqcRZGate(q, 3.0456775925318706, 5);
  sqcRYGate(q, 0.1654576681847356, 6);
  sqcRZGate(q, -0.05495090074996068, 6);
  sqcRYGate(q, -1.2255903383653817, 7);
  sqcRZGate(q, 0.15124922629793597, 7);
  sqcRYGate(q, 3.1364877721102, 8);
  sqcRZGate(q, 1.9222086048918587, 8);
  sqcRYGate(q, 1.5785595003744222, 9);
  sqcRZGate(q, -2.2905989461967904, 9);
  sqcRYGate(q, 0.018117911389672336, 10);
  sqcRZGate(q, 1.7195918434913526, 10);
  sqcRYGate(q, -1.6816352957539973, 11);
  sqcRZGate(q, 1.954372114181436, 11);
  sqcRYGate(q, 0.029014434196093394, 12);
  sqcRZGate(q, 0.46087439295384675, 12);
  sqcRYGate(q, -0.16415679580421852, 13);
  sqcRZGate(q, -0.37731594496649196, 13);
  sqcRYGate(q, 1.575573285631171, 14);
  sqcRZGate(q, -2.7410889850853906, 14);
  sqcRYGate(q, -1.5708509876944587, 15);
  sqcRZGate(q, 2.319632958665318, 15);
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
  sqcRYGate(q, -2.202124289314776, 0);
  sqcRZGate(q, 0.9805602739091018, 0);
  sqcRYGate(q, -2.257986766102648, 1);
  sqcRZGate(q, 0.1323490253038333, 1);
  sqcRYGate(q, 2.2617488701927635, 2);
  sqcRZGate(q, 1.828867372706805, 2);
  sqcRYGate(q, -0.7159019649890999, 3);
  sqcRZGate(q, 0.6640140306806609, 3);
  sqcRYGate(q, -1.225096290831635, 4);
  sqcRZGate(q, -1.4695069789933788, 4);
  sqcRYGate(q, -0.9235687173208289, 5);
  sqcRZGate(q, 1.5315359615681663, 5);
  sqcRYGate(q, -2.2742708994884087, 6);
  sqcRZGate(q, -2.1151567893695775, 6);
  sqcRYGate(q, 0.3776975851301543, 7);
  sqcRZGate(q, 1.4165964962002164, 7);
  sqcRYGate(q, -0.8058035511820298, 8);
  sqcRZGate(q, -1.7112156254526543, 8);
  sqcRYGate(q, 1.209329136032144, 9);
  sqcRZGate(q, 1.9872358314126757, 9);
  sqcRYGate(q, -2.32302181733793, 10);
  sqcRZGate(q, 1.436556268640846, 10);
  sqcRYGate(q, -2.2846484884110194, 11);
  sqcRZGate(q, 1.3595458376499545, 11);
  sqcRYGate(q, -0.8392471938965862, 12);
  sqcRZGate(q, 0.8591103633899976, 12);
  sqcRYGate(q, 2.3492709287488904, 13);
  sqcRZGate(q, 0.8274506201940942, 13);
  sqcRYGate(q, -2.3251126702324867, 14);
  sqcRZGate(q, 1.421869497105975, 14);
  sqcRYGate(q, -1.2762446089340784, 15);
  sqcRZGate(q, 2.700103282172717, 15);

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
