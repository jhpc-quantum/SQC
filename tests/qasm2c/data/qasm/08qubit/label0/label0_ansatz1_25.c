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

  sqcRYGate(q, -2.148835531385159, 0);
  sqcRZGate(q, -1.4286812822649664, 0);
  sqcRYGate(q, -2.8945990754161457, 1);
  sqcRZGate(q, -1.2809349354235118, 1);
  sqcRYGate(q, -0.0002276474631561519, 2);
  sqcRZGate(q, 0.33701671273104505, 2);
  sqcRYGate(q, -2.8187342276046747, 3);
  sqcRZGate(q, 3.1415358102376407, 3);
  sqcRYGate(q, -3.1410686609870426, 4);
  sqcRZGate(q, 1.2676341734682195, 4);
  sqcRYGate(q, 2.74306360539263, 5);
  sqcRZGate(q, 1.0414446656199945, 5);
  sqcRYGate(q, 2.3053502322777693, 6);
  sqcRZGate(q, 0.6621277490633473, 6);
  sqcRYGate(q, 0.8669065020280349, 7);
  sqcRZGate(q, -1.8848250909081212, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8621342691710676, 0);
  sqcRZGate(q, -1.1569217500972773, 0);
  sqcRYGate(q, -2.764999906936889, 1);
  sqcRZGate(q, -0.8293663087448819, 1);
  sqcRYGate(q, -1.013637650215137, 2);
  sqcRZGate(q, -1.3073504948781647, 2);
  sqcRYGate(q, -0.32278143509549917, 3);
  sqcRZGate(q, 1.9941136592867479, 3);
  sqcRYGate(q, -0.13323219525325486, 4);
  sqcRZGate(q, -0.5363448991693591, 4);
  sqcRYGate(q, -1.5358733520561736, 5);
  sqcRZGate(q, 3.1222115427965385, 5);
  sqcRYGate(q, -3.0832941372735037, 6);
  sqcRZGate(q, 3.1391353306365994, 6);
  sqcRYGate(q, 2.78942164016381, 7);
  sqcRZGate(q, -1.78832141284209, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7018090910634385, 0);
  sqcRZGate(q, 2.910739587836014, 0);
  sqcRYGate(q, 0.973307649084461, 1);
  sqcRZGate(q, -2.413830456495853, 1);
  sqcRYGate(q, -1.8843914124395562, 2);
  sqcRZGate(q, 0.5736224097901692, 2);
  sqcRYGate(q, 8.712863254523029e-05, 3);
  sqcRZGate(q, 0.5504535868678512, 3);
  sqcRYGate(q, -1.9069162706894458, 4);
  sqcRZGate(q, 1.940618308199303, 4);
  sqcRYGate(q, 0.5452773950514933, 5);
  sqcRZGate(q, 1.5018387695013014, 5);
  sqcRYGate(q, 0.030111933859937545, 6);
  sqcRZGate(q, -1.6860387773434882, 6);
  sqcRYGate(q, -2.9811996405842804, 7);
  sqcRZGate(q, 3.018932435850163, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0732196362333264, 0);
  sqcRZGate(q, -2.656156186806582, 0);
  sqcRYGate(q, 0.9210772783241108, 1);
  sqcRZGate(q, -2.846823473200965, 1);
  sqcRYGate(q, -1.2392056290088636, 2);
  sqcRZGate(q, -0.3536952035270727, 2);
  sqcRYGate(q, -2.32293066315734, 3);
  sqcRZGate(q, -2.3877294247102583, 3);
  sqcRYGate(q, 3.0556564091420504, 4);
  sqcRZGate(q, 0.22708772051018755, 4);
  sqcRYGate(q, 0.816906990820291, 5);
  sqcRZGate(q, 0.5190465215408115, 5);
  sqcRYGate(q, -2.861678896007924, 6);
  sqcRZGate(q, 0.23591924247408258, 6);
  sqcRYGate(q, 0.8962042156679242, 7);
  sqcRZGate(q, -1.1248029755746238, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.683628212188142, 0);
  sqcRZGate(q, 2.674970307353762, 0);
  sqcRYGate(q, 0.8462219770786241, 1);
  sqcRZGate(q, -2.730093371471079, 1);
  sqcRYGate(q, 2.978326245180907, 2);
  sqcRZGate(q, -1.6858045268508492, 2);
  sqcRYGate(q, -2.4421053970387318e-05, 3);
  sqcRZGate(q, 2.547560597769131, 3);
  sqcRYGate(q, -3.1415027954497057, 4);
  sqcRZGate(q, 1.3219599140021465, 4);
  sqcRYGate(q, -0.1724617625095277, 5);
  sqcRZGate(q, 1.2321622652762492, 5);
  sqcRYGate(q, 0.46677003487268925, 6);
  sqcRZGate(q, -1.8958358269800302, 6);
  sqcRYGate(q, -2.6544809370350464, 7);
  sqcRZGate(q, -0.6711457651059956, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.36775077586795746, 0);
  sqcRZGate(q, -1.7602421805934174, 0);
  sqcRYGate(q, -1.3967433278173225, 1);
  sqcRZGate(q, -2.0612455111257377, 1);
  sqcRYGate(q, 2.866443749275011, 2);
  sqcRZGate(q, -1.7743047391366895, 2);
  sqcRYGate(q, 2.235781255835388, 3);
  sqcRZGate(q, -0.7002480351150964, 3);
  sqcRYGate(q, -1.5611495288819524, 4);
  sqcRZGate(q, 0.9031745550935959, 4);
  sqcRYGate(q, 0.2530373774472904, 5);
  sqcRZGate(q, -1.2060135925227042, 5);
  sqcRYGate(q, 1.9530099735606452, 6);
  sqcRZGate(q, -2.5995154857118785, 6);
  sqcRYGate(q, 0.1628392700334933, 7);
  sqcRZGate(q, 1.8780268704917633, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2910872750563427, 0);
  sqcRZGate(q, -2.971032336922734, 0);
  sqcRYGate(q, -1.852614526028884, 1);
  sqcRZGate(q, -3.0781452065226027, 1);
  sqcRYGate(q, 1.6892651904825335, 2);
  sqcRZGate(q, -0.17116572011855474, 2);
  sqcRYGate(q, -3.709452509946915e-06, 3);
  sqcRZGate(q, 1.5489895108420146, 3);
  sqcRYGate(q, 0.025501007532071185, 4);
  sqcRZGate(q, 1.6908177385235996, 4);
  sqcRYGate(q, 1.0329538635023672, 5);
  sqcRZGate(q, 2.5220981054729346, 5);
  sqcRYGate(q, 3.126498287944273, 6);
  sqcRZGate(q, -0.6358155621057966, 6);
  sqcRYGate(q, -1.9887306584132671, 7);
  sqcRZGate(q, -2.340773597874571, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8969308453742411, 0);
  sqcRZGate(q, -1.738158441991155, 0);
  sqcRYGate(q, 0.45665864432795905, 1);
  sqcRZGate(q, -2.9499602484360468, 1);
  sqcRYGate(q, -2.2612830378539686, 2);
  sqcRZGate(q, 2.4393187270617505, 2);
  sqcRYGate(q, -3.1226184352654953, 3);
  sqcRZGate(q, 1.3769343974039039, 3);
  sqcRYGate(q, 2.821708936038399, 4);
  sqcRZGate(q, 2.4314112208747267, 4);
  sqcRYGate(q, 0.7772295635167268, 5);
  sqcRZGate(q, -0.007473994372756642, 5);
  sqcRYGate(q, -3.065671702597955, 6);
  sqcRZGate(q, -1.5427832703922322, 6);
  sqcRYGate(q, -0.1996683927474896, 7);
  sqcRZGate(q, -2.9572686610565793, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8330541774470417, 0);
  sqcRZGate(q, 3.011081347893757, 0);
  sqcRYGate(q, -1.8031751738990351, 1);
  sqcRZGate(q, -2.084096478870624, 1);
  sqcRYGate(q, 0.6969505243956462, 2);
  sqcRZGate(q, -0.6406207041820631, 2);
  sqcRYGate(q, -3.140905307189669, 3);
  sqcRZGate(q, -2.171382781914531, 3);
  sqcRYGate(q, 0.007610661166576084, 4);
  sqcRZGate(q, 2.6344177371093944, 4);
  sqcRYGate(q, 3.0236736534719713, 5);
  sqcRZGate(q, -2.6757231580404666, 5);
  sqcRYGate(q, -2.5823591729332245, 6);
  sqcRZGate(q, -2.63297513312725, 6);
  sqcRYGate(q, -0.6100973098129893, 7);
  sqcRZGate(q, -2.2905393228686393, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6083392914208074, 0);
  sqcRZGate(q, -0.4029981545084258, 0);
  sqcRYGate(q, -0.04314814810907652, 1);
  sqcRZGate(q, -0.15578411247498503, 1);
  sqcRYGate(q, -2.2845986853246045, 2);
  sqcRZGate(q, 0.19400152534819703, 2);
  sqcRYGate(q, 1.3619775691063174, 3);
  sqcRZGate(q, 1.9168446906757426, 3);
  sqcRYGate(q, -3.132712312744948, 4);
  sqcRZGate(q, -0.8236807803791644, 4);
  sqcRYGate(q, 2.016881066926941, 5);
  sqcRZGate(q, -0.30252577632452476, 5);
  sqcRYGate(q, -1.7530639117106226, 6);
  sqcRZGate(q, -3.0161534656444133, 6);
  sqcRYGate(q, 0.9153891680268322, 7);
  sqcRZGate(q, 2.620742559794625, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.99967646514915, 0);
  sqcRZGate(q, 0.9573374987962084, 0);
  sqcRYGate(q, 2.4872772953965128, 1);
  sqcRZGate(q, 2.161126783806398, 1);
  sqcRYGate(q, 0.05564771719833109, 2);
  sqcRZGate(q, 2.3045430648457956, 2);
  sqcRYGate(q, -0.0007495456941282323, 3);
  sqcRZGate(q, 0.4329874519770609, 3);
  sqcRYGate(q, 1.9795353575087775, 4);
  sqcRZGate(q, -0.5060639486613655, 4);
  sqcRYGate(q, 0.235211382334545, 5);
  sqcRZGate(q, 2.566736394868936, 5);
  sqcRYGate(q, -1.1223160324961894, 6);
  sqcRZGate(q, 2.1314530899239195, 6);
  sqcRYGate(q, 2.6157823043657853, 7);
  sqcRZGate(q, -1.030174220789652, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9211336277265594, 0);
  sqcRZGate(q, 0.7954745979898831, 0);
  sqcRYGate(q, 0.3402682965448349, 1);
  sqcRZGate(q, -1.4161668386581783, 1);
  sqcRYGate(q, 2.615576741582754, 2);
  sqcRZGate(q, 2.66586161477186, 2);
  sqcRYGate(q, -0.0024797966697054363, 3);
  sqcRZGate(q, -2.717605032346665, 3);
  sqcRYGate(q, 0.35620558882863185, 4);
  sqcRZGate(q, -2.5967088671903737, 4);
  sqcRYGate(q, -0.05290808413140176, 5);
  sqcRZGate(q, 0.53525641736952, 5);
  sqcRYGate(q, 0.45661449236707874, 6);
  sqcRZGate(q, -0.3153057434635791, 6);
  sqcRYGate(q, 0.4773765679186344, 7);
  sqcRZGate(q, -0.800345001706142, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4987496050349476, 0);
  sqcRZGate(q, -2.0298880429656467, 0);
  sqcRYGate(q, 0.02134911442675321, 1);
  sqcRZGate(q, 0.8229840651067555, 1);
  sqcRYGate(q, -0.09087935434773708, 2);
  sqcRZGate(q, 3.0585764073479704, 2);
  sqcRYGate(q, 0.003653763820134312, 3);
  sqcRZGate(q, -2.7856637851664616, 3);
  sqcRYGate(q, -1.0850719088196783, 4);
  sqcRZGate(q, 0.9130014076418763, 4);
  sqcRYGate(q, -0.8472807605536292, 5);
  sqcRZGate(q, 2.769387630167368, 5);
  sqcRYGate(q, 0.46857257758911103, 6);
  sqcRZGate(q, -1.1263199265438582, 6);
  sqcRYGate(q, 3.0812890285607573, 7);
  sqcRZGate(q, -2.476513674051355, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8285764439660308, 0);
  sqcRZGate(q, 0.6618650291509071, 0);
  sqcRYGate(q, -1.9434734085022258, 1);
  sqcRZGate(q, 0.3350454880687366, 1);
  sqcRYGate(q, -2.341036493518502, 2);
  sqcRZGate(q, 1.3816895176825996, 2);
  sqcRYGate(q, 1.3478471364459206, 3);
  sqcRZGate(q, -1.568737534614785, 3);
  sqcRYGate(q, 3.02559186150284, 4);
  sqcRZGate(q, 1.2642971764428825, 4);
  sqcRYGate(q, -0.9432341936743356, 5);
  sqcRZGate(q, 3.054255647775338, 5);
  sqcRYGate(q, -2.9264016052787456, 6);
  sqcRZGate(q, 2.1889020069974796, 6);
  sqcRYGate(q, -3.065084845921836, 7);
  sqcRZGate(q, 2.328127117395653, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3656644600928226, 0);
  sqcRZGate(q, -1.51265690383922, 0);
  sqcRYGate(q, -0.007049454823603101, 1);
  sqcRZGate(q, -2.5295117115893158, 1);
  sqcRYGate(q, -0.001204787102296656, 2);
  sqcRZGate(q, 2.5541105970484024, 2);
  sqcRYGate(q, 3.131789818464879, 3);
  sqcRZGate(q, -1.3672156927094612, 3);
  sqcRYGate(q, 2.12236647599226, 4);
  sqcRZGate(q, 0.04420543473135423, 4);
  sqcRYGate(q, 0.8501597703392062, 5);
  sqcRZGate(q, 1.5536871131331018, 5);
  sqcRYGate(q, -2.4912645020553112, 6);
  sqcRZGate(q, 1.663997589019928, 6);
  sqcRYGate(q, -2.07467996664345, 7);
  sqcRZGate(q, -1.5610280130218501, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.444066651234668, 0);
  sqcRZGate(q, 0.27797685755995427, 0);
  sqcRYGate(q, 1.0978956450585804, 1);
  sqcRZGate(q, 1.4769764347505276, 1);
  sqcRYGate(q, -3.102607260876237, 2);
  sqcRZGate(q, -2.425256747423513, 2);
  sqcRYGate(q, 2.1538880991010454, 3);
  sqcRZGate(q, -0.08119444674848238, 3);
  sqcRYGate(q, 2.2788623211912222, 4);
  sqcRZGate(q, 3.0604580136906177, 4);
  sqcRYGate(q, 0.03592881501108458, 5);
  sqcRZGate(q, 2.923645148635988, 5);
  sqcRYGate(q, 1.9157544643633682, 6);
  sqcRZGate(q, 2.1399011435426427, 6);
  sqcRYGate(q, -2.5546144116710674, 7);
  sqcRZGate(q, -0.33217050860214137, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6468658615634126, 0);
  sqcRZGate(q, -1.1690724950602114, 0);
  sqcRYGate(q, -0.06470288239676414, 1);
  sqcRZGate(q, -0.973683120574364, 1);
  sqcRYGate(q, -0.0001341150548031241, 2);
  sqcRZGate(q, 0.44815283855526894, 2);
  sqcRYGate(q, 1.5375100876610759, 3);
  sqcRZGate(q, -0.0787719967802868, 3);
  sqcRYGate(q, -0.0871047503318236, 4);
  sqcRZGate(q, 0.4368993863422839, 4);
  sqcRYGate(q, 2.330136576692675, 5);
  sqcRZGate(q, -0.7780206524496275, 5);
  sqcRYGate(q, 0.1796070621870136, 6);
  sqcRZGate(q, 1.0125810506823045, 6);
  sqcRYGate(q, -2.0303129096952546, 7);
  sqcRZGate(q, 0.5651820783227037, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9025805583854023, 0);
  sqcRZGate(q, 3.022555356076926, 0);
  sqcRYGate(q, -1.8435114135637534, 1);
  sqcRZGate(q, 3.072465508523904, 1);
  sqcRYGate(q, -1.9692938551848622, 2);
  sqcRZGate(q, 1.8357760394559697, 2);
  sqcRYGate(q, 2.297437292780913, 3);
  sqcRZGate(q, 2.7825138304795365, 3);
  sqcRYGate(q, -2.366305844257818, 4);
  sqcRZGate(q, -3.060306152795154, 4);
  sqcRYGate(q, 0.6072578534520652, 5);
  sqcRZGate(q, 3.0450740134290726, 5);
  sqcRYGate(q, 0.1401727481670223, 6);
  sqcRZGate(q, -1.758566682796256, 6);
  sqcRYGate(q, 1.6695064968879496, 7);
  sqcRZGate(q, 0.369739028290651, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8386291051100203, 0);
  sqcRZGate(q, 0.2698422572769852, 0);
  sqcRYGate(q, -0.013800834629572378, 1);
  sqcRZGate(q, -2.2552494080354766, 1);
  sqcRYGate(q, -3.1216069523419936, 2);
  sqcRZGate(q, -0.9067436280279024, 2);
  sqcRYGate(q, 0.0058327405476249275, 3);
  sqcRZGate(q, -2.121982167208529, 3);
  sqcRYGate(q, -2.3909039769977625, 4);
  sqcRZGate(q, 0.2064890457806099, 4);
  sqcRYGate(q, 2.065407403061011, 5);
  sqcRZGate(q, -1.4001707125537477, 5);
  sqcRYGate(q, 0.08188857648374182, 6);
  sqcRZGate(q, -0.47240362236542305, 6);
  sqcRYGate(q, 2.024372515483382, 7);
  sqcRZGate(q, -2.520985899026984, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2654747390128303, 0);
  sqcRZGate(q, -2.945909766862944, 0);
  sqcRYGate(q, -0.9168457970325942, 1);
  sqcRZGate(q, 1.785335965197301, 1);
  sqcRYGate(q, 1.5902432902052788, 2);
  sqcRZGate(q, 1.4078227164620163, 2);
  sqcRYGate(q, -3.1258594117627165, 3);
  sqcRZGate(q, -1.4474160883028677, 3);
  sqcRYGate(q, 2.928506910338921, 4);
  sqcRZGate(q, -3.1415656377547423, 4);
  sqcRYGate(q, -3.1057251833698993, 5);
  sqcRZGate(q, -1.3152875665182988, 5);
  sqcRYGate(q, -1.2506232248038338, 6);
  sqcRZGate(q, -2.7302481021823355, 6);
  sqcRYGate(q, -0.7473429706082192, 7);
  sqcRZGate(q, -0.2534561442994946, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.112704304774641, 0);
  sqcRZGate(q, 2.3765093182884773, 0);
  sqcRYGate(q, -0.034918469582042755, 1);
  sqcRZGate(q, 2.6114368973612367, 1);
  sqcRYGate(q, 2.2666902585930417, 2);
  sqcRZGate(q, 2.1975858648591284, 2);
  sqcRYGate(q, -0.0004779925406942717, 3);
  sqcRZGate(q, -3.0552232076416574, 3);
  sqcRYGate(q, 2.6109484321923975, 4);
  sqcRZGate(q, 1.769695071425123, 4);
  sqcRYGate(q, 1.7917388007093695, 5);
  sqcRZGate(q, 0.9206293428095257, 5);
  sqcRYGate(q, -2.970690790856007, 6);
  sqcRZGate(q, 0.2913093289970963, 6);
  sqcRYGate(q, 0.04723279627414797, 7);
  sqcRZGate(q, -1.7748858722772891, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.45565984836084, 0);
  sqcRZGate(q, 1.1151150602216164, 0);
  sqcRYGate(q, -3.128990254366982, 1);
  sqcRZGate(q, -2.4472934510592173, 1);
  sqcRYGate(q, -0.13967891907309937, 2);
  sqcRZGate(q, -1.5196799811032247, 2);
  sqcRYGate(q, 0.0004626640578209162, 3);
  sqcRZGate(q, 2.9965149089790195, 3);
  sqcRYGate(q, -2.3831204340732763, 4);
  sqcRZGate(q, -0.9106105142513039, 4);
  sqcRYGate(q, 1.9145997622898703, 5);
  sqcRZGate(q, 0.5417491775507453, 5);
  sqcRYGate(q, -2.222233808702569, 6);
  sqcRZGate(q, 2.462400496198598, 6);
  sqcRYGate(q, 1.836645509780906, 7);
  sqcRZGate(q, 0.3211929991261267, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5386946836553534, 0);
  sqcRZGate(q, -0.4236829812091863, 0);
  sqcRYGate(q, -0.1520059039639854, 1);
  sqcRZGate(q, -2.169939571233071, 1);
  sqcRYGate(q, -2.175157635522476, 2);
  sqcRZGate(q, -2.45090225229214, 2);
  sqcRYGate(q, -3.1408684640046873, 3);
  sqcRZGate(q, 0.5119596841989019, 3);
  sqcRYGate(q, -3.1377178202556952, 4);
  sqcRZGate(q, 0.1203438560230345, 4);
  sqcRYGate(q, 3.0975867018882637, 5);
  sqcRZGate(q, 2.8785943646299477, 5);
  sqcRYGate(q, 3.1204650651543857, 6);
  sqcRZGate(q, 3.030120318135726, 6);
  sqcRYGate(q, -2.9150433508320885, 7);
  sqcRZGate(q, 1.962929551550848, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3967306059712742, 0);
  sqcRZGate(q, -3.0415692935283207, 0);
  sqcRYGate(q, 2.1326506309900237, 1);
  sqcRZGate(q, 3.036657261111286, 1);
  sqcRYGate(q, -0.3594354967567144, 2);
  sqcRZGate(q, 2.9295188636731977, 2);
  sqcRYGate(q, 0.007645694835499484, 3);
  sqcRZGate(q, -0.04152836654402772, 3);
  sqcRYGate(q, -1.4934683645855238, 4);
  sqcRZGate(q, -1.407021960024679, 4);
  sqcRYGate(q, -2.1219687660779236, 5);
  sqcRZGate(q, -0.7764997646723205, 5);
  sqcRYGate(q, 0.69622557009267, 6);
  sqcRZGate(q, -1.1773600230422785, 6);
  sqcRYGate(q, 1.8687411313054143, 7);
  sqcRZGate(q, 1.528841482531236, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0425670050328, 0);
  sqcRZGate(q, 0.8491767488625735, 0);
  sqcRYGate(q, 1.8557197574140298, 1);
  sqcRZGate(q, -1.3582967536446713, 1);
  sqcRYGate(q, -0.8890424471592934, 2);
  sqcRZGate(q, 1.130993197538129, 2);
  sqcRYGate(q, 3.1004342375236864, 3);
  sqcRZGate(q, -1.8632461486732783, 3);
  sqcRYGate(q, 0.04957032188888633, 4);
  sqcRZGate(q, 2.162487389628059, 4);
  sqcRYGate(q, 1.8026817000899091, 5);
  sqcRZGate(q, 2.137649314197965, 5);
  sqcRYGate(q, -2.242098936378558, 6);
  sqcRZGate(q, -1.904838523336249, 6);
  sqcRYGate(q, 1.3098858771138984, 7);
  sqcRZGate(q, 2.192681656495073, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8271617278682677, 0);
  sqcRZGate(q, -2.185707051489506, 0);
  sqcRYGate(q, -2.7007707325320123, 1);
  sqcRZGate(q, 1.4684899175862973, 1);
  sqcRYGate(q, -0.02304214374786362, 2);
  sqcRZGate(q, -2.3740083767024247, 2);
  sqcRYGate(q, -7.515703125597925e-05, 3);
  sqcRZGate(q, 0.8730299709463695, 3);
  sqcRYGate(q, -1.8705293507058358, 4);
  sqcRZGate(q, -2.091740332037987, 4);
  sqcRYGate(q, -1.8109129239022836, 5);
  sqcRZGate(q, 0.055335960256706666, 5);
  sqcRYGate(q, -1.4682845920139815, 6);
  sqcRZGate(q, -2.2542951175005896, 6);
  sqcRYGate(q, -1.5264808245402746, 7);
  sqcRZGate(q, -0.306999999251109, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8002957912400636, 0);
  sqcRZGate(q, 1.1022323892236985, 0);
  sqcRYGate(q, 3.047440970349899, 1);
  sqcRZGate(q, -2.0930087278130216, 1);
  sqcRYGate(q, -0.3189082645754102, 2);
  sqcRZGate(q, -0.21780349760606973, 2);
  sqcRYGate(q, -0.006754658856234095, 3);
  sqcRZGate(q, -1.014669700784153, 3);
  sqcRYGate(q, -3.134107759942895, 4);
  sqcRZGate(q, 1.0207338517086022, 4);
  sqcRYGate(q, -0.012174462128839252, 5);
  sqcRZGate(q, 2.9893295362268217, 5);
  sqcRYGate(q, 2.2083759158920726, 6);
  sqcRZGate(q, -3.1074328982545794, 6);
  sqcRYGate(q, -1.663613366821206, 7);
  sqcRZGate(q, -1.334219195571371, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9609731246268463, 0);
  sqcRZGate(q, 1.95576115575341, 0);
  sqcRYGate(q, -1.7853606446738162, 1);
  sqcRZGate(q, -3.000788907266985, 1);
  sqcRYGate(q, 0.021723804166533762, 2);
  sqcRZGate(q, 2.7171536503130866, 2);
  sqcRYGate(q, 3.140668363142268, 3);
  sqcRZGate(q, -1.569026756778624, 3);
  sqcRYGate(q, 0.9319984919966204, 4);
  sqcRZGate(q, 1.5927978530087827, 4);
  sqcRYGate(q, -1.6934717013005143, 5);
  sqcRZGate(q, -2.883566302780648, 5);
  sqcRYGate(q, -1.4338467603997447, 6);
  sqcRZGate(q, -3.077452070822882, 6);
  sqcRYGate(q, -1.4034561565451185, 7);
  sqcRZGate(q, 0.6159898224891778, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8770095687807062, 0);
  sqcRZGate(q, -2.8627627565859926, 0);
  sqcRYGate(q, -3.096739670737286, 1);
  sqcRZGate(q, 0.5603682173784544, 1);
  sqcRYGate(q, 2.562839833784847, 2);
  sqcRZGate(q, 2.769357015375615, 2);
  sqcRYGate(q, 3.1367293600350457, 3);
  sqcRZGate(q, 1.909852330354628, 3);
  sqcRYGate(q, 0.01573628711924721, 4);
  sqcRZGate(q, 0.10874977380287974, 4);
  sqcRYGate(q, -0.2388400612100917, 5);
  sqcRZGate(q, 1.2105846831245262, 5);
  sqcRYGate(q, 2.0102344234668656, 6);
  sqcRZGate(q, 1.9312375409324534, 6);
  sqcRYGate(q, -3.056204600890981, 7);
  sqcRZGate(q, 2.4036741316647094, 7);

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
