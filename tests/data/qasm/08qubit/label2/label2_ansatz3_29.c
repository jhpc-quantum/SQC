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

  sqcRYGate(q, -2.1339351678129272, 0);
  sqcRZGate(q, 1.5017279975939273, 0);
  sqcRYGate(q, -0.2784196480717709, 1);
  sqcRZGate(q, -2.8613330603491645, 1);
  sqcRYGate(q, -2.5023156688451595, 2);
  sqcRZGate(q, -0.4058130018022341, 2);
  sqcRYGate(q, -0.2222846835401473, 3);
  sqcRZGate(q, -2.509070610096458, 3);
  sqcRYGate(q, -0.9720755663277324, 4);
  sqcRZGate(q, -0.14398243106424943, 4);
  sqcRYGate(q, -2.321131444913096, 5);
  sqcRZGate(q, 0.26946985632299825, 5);
  sqcRYGate(q, -2.754408537289613, 6);
  sqcRZGate(q, -0.030664339752927813, 6);
  sqcRYGate(q, 2.483253866840121, 7);
  sqcRZGate(q, 0.35328797194576994, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.361946426727767, 0);
  sqcRZGate(q, -2.2089918040893326, 0);
  sqcRYGate(q, 1.3061690599782505, 1);
  sqcRZGate(q, -1.8392088907596946, 1);
  sqcRYGate(q, -1.5248814998859372, 2);
  sqcRZGate(q, 0.07567887376849126, 2);
  sqcRYGate(q, -0.3780043714981416, 3);
  sqcRZGate(q, 0.38841006240592524, 3);
  sqcRYGate(q, -2.5100796904400813, 4);
  sqcRZGate(q, -2.8084933799833416, 4);
  sqcRYGate(q, 1.1851445313482871, 5);
  sqcRZGate(q, -1.7451865915953442, 5);
  sqcRYGate(q, -2.8421651507573085, 6);
  sqcRZGate(q, -3.0356469905597145, 6);
  sqcRYGate(q, 1.823703806371776, 7);
  sqcRZGate(q, 0.16733401133268266, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.1109312401669813, 0);
  sqcRZGate(q, 0.6614785776591835, 0);
  sqcRYGate(q, 0.8954978892705069, 1);
  sqcRZGate(q, 1.6449179858721674, 1);
  sqcRYGate(q, 1.4727355292206892, 2);
  sqcRZGate(q, -1.7200848800392978, 2);
  sqcRYGate(q, 1.8251574321284174, 3);
  sqcRZGate(q, 2.09726541491363, 3);
  sqcRYGate(q, -0.5704627399357634, 4);
  sqcRZGate(q, -0.7910911282290121, 4);
  sqcRYGate(q, -2.3859609772507016, 5);
  sqcRZGate(q, -1.4682077183013935, 5);
  sqcRYGate(q, 2.0504125246703158, 6);
  sqcRZGate(q, -0.8840425724757692, 6);
  sqcRYGate(q, 2.380397297805997, 7);
  sqcRZGate(q, -1.8949572193878328, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.0770487700626967, 0);
  sqcRZGate(q, -0.3325241773747214, 0);
  sqcRYGate(q, -0.22078745521244694, 1);
  sqcRZGate(q, 1.9405591642523186, 1);
  sqcRYGate(q, -2.8559377534925465, 2);
  sqcRZGate(q, 2.9118273339672123, 2);
  sqcRYGate(q, -1.380205871170339, 3);
  sqcRZGate(q, -0.8228137108587463, 3);
  sqcRYGate(q, -0.5730485695828761, 4);
  sqcRZGate(q, -1.4320305856305209, 4);
  sqcRYGate(q, -2.5153125670516556, 5);
  sqcRZGate(q, 0.9466943784050279, 5);
  sqcRYGate(q, -1.6775495885723006, 6);
  sqcRZGate(q, 2.4056696840905434, 6);
  sqcRYGate(q, -1.393112461345714, 7);
  sqcRZGate(q, -1.1006142416503497, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.95145367430877, 0);
  sqcRZGate(q, -2.108748818822624, 0);
  sqcRYGate(q, -1.056629585757877, 1);
  sqcRZGate(q, 1.6733373761068242, 1);
  sqcRYGate(q, -0.9979083966545357, 2);
  sqcRZGate(q, -0.8525978422619465, 2);
  sqcRYGate(q, -2.7375983758333207, 3);
  sqcRZGate(q, -2.2402954011363754, 3);
  sqcRYGate(q, 2.288200133355005, 4);
  sqcRZGate(q, -1.130647633441292, 4);
  sqcRYGate(q, 2.21354373687272, 5);
  sqcRZGate(q, 1.1276845377007927, 5);
  sqcRYGate(q, 0.6685967900483573, 6);
  sqcRZGate(q, 2.9158302969295646, 6);
  sqcRYGate(q, -0.6084678922580895, 7);
  sqcRZGate(q, 2.118766060622221, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.5259475498888526, 0);
  sqcRZGate(q, 1.3682201812555255, 0);
  sqcRYGate(q, 0.8583055840934763, 1);
  sqcRZGate(q, 0.5012956729135798, 1);
  sqcRYGate(q, -1.6180917234491947, 2);
  sqcRZGate(q, 0.27167703050071085, 2);
  sqcRYGate(q, 1.166509200712571, 3);
  sqcRZGate(q, -0.09267701652485362, 3);
  sqcRYGate(q, 2.396415581817724, 4);
  sqcRZGate(q, 1.9186747328329, 4);
  sqcRYGate(q, 2.2992001675059877, 5);
  sqcRZGate(q, -2.8137329066168246, 5);
  sqcRYGate(q, -1.6682483748813626, 6);
  sqcRZGate(q, -2.8100205299627246, 6);
  sqcRYGate(q, -0.5454384004207347, 7);
  sqcRZGate(q, 1.2035865094784848, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.362597137208143, 0);
  sqcRZGate(q, -0.719226934911731, 0);
  sqcRYGate(q, -2.8224648058166784, 1);
  sqcRZGate(q, -0.851526628217286, 1);
  sqcRYGate(q, -1.3127746351890206, 2);
  sqcRZGate(q, 0.5111894864082347, 2);
  sqcRYGate(q, 1.7138813514880447, 3);
  sqcRZGate(q, 3.0738460243433705, 3);
  sqcRYGate(q, -1.046368490909947, 4);
  sqcRZGate(q, -0.4590442293931946, 4);
  sqcRYGate(q, -1.7463741123886702, 5);
  sqcRZGate(q, 2.15977356313515, 5);
  sqcRYGate(q, 1.8531595228949111, 6);
  sqcRZGate(q, 2.8972518756504875, 6);
  sqcRYGate(q, -1.7538308092387282, 7);
  sqcRZGate(q, -2.1360578517472604, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.563666792741052, 0);
  sqcRZGate(q, 1.476676170029538, 0);
  sqcRYGate(q, -0.06978688832531432, 1);
  sqcRZGate(q, -1.4892197945827237, 1);
  sqcRYGate(q, 0.809819333187243, 2);
  sqcRZGate(q, 1.8973490037524694, 2);
  sqcRYGate(q, 2.863688214301562, 3);
  sqcRZGate(q, 3.0188297739542698, 3);
  sqcRYGate(q, -2.7879709381603246, 4);
  sqcRZGate(q, 2.497015867471913, 4);
  sqcRYGate(q, -2.615576962754264, 5);
  sqcRZGate(q, 3.0288993773486745, 5);
  sqcRYGate(q, 1.5390934916324346, 6);
  sqcRZGate(q, -1.0518996446569568, 6);
  sqcRYGate(q, 1.5239097042240377, 7);
  sqcRZGate(q, -2.9299388801658357, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.2647655517941076, 0);
  sqcRZGate(q, 3.0006292124694784, 0);
  sqcRYGate(q, 2.24760946423293, 1);
  sqcRZGate(q, 3.133350966757683, 1);
  sqcRYGate(q, -2.6295871440161216, 2);
  sqcRZGate(q, -0.41730680973452755, 2);
  sqcRYGate(q, -0.16161044105246258, 3);
  sqcRZGate(q, 0.9313454598844567, 3);
  sqcRYGate(q, 0.24830065700232137, 4);
  sqcRZGate(q, -1.1971971697592272, 4);
  sqcRYGate(q, -2.809687641112784, 5);
  sqcRZGate(q, -1.712084724040288, 5);
  sqcRYGate(q, -1.0947976399404078, 6);
  sqcRZGate(q, -0.07189741991250731, 6);
  sqcRYGate(q, 0.28295781433453054, 7);
  sqcRZGate(q, -1.6767873876456907, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4556276397008947, 0);
  sqcRZGate(q, -1.708705025701465, 0);
  sqcRYGate(q, 2.243102232132438, 1);
  sqcRZGate(q, -0.011296847502046072, 1);
  sqcRYGate(q, -1.0718252122292151, 2);
  sqcRZGate(q, -1.3198859777925689, 2);
  sqcRYGate(q, 2.493863950035245, 3);
  sqcRZGate(q, -2.0069725325299466, 3);
  sqcRYGate(q, -1.824834002569052, 4);
  sqcRZGate(q, -2.9191100732430475, 4);
  sqcRYGate(q, 2.0116146456502397, 5);
  sqcRZGate(q, 0.9501026269074541, 5);
  sqcRYGate(q, -0.045513080160974176, 6);
  sqcRZGate(q, -0.442549412268721, 6);
  sqcRYGate(q, 2.249675180894401, 7);
  sqcRZGate(q, 1.5274838003479418, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.0391035996780829, 0);
  sqcRZGate(q, -2.6182031863456063, 0);
  sqcRYGate(q, -0.06414046836894549, 1);
  sqcRZGate(q, -0.15259480979036008, 1);
  sqcRYGate(q, -2.3678444290049008, 2);
  sqcRZGate(q, 0.06723293644495598, 2);
  sqcRYGate(q, -1.3826870611346296, 3);
  sqcRZGate(q, 0.4620913305971212, 3);
  sqcRYGate(q, 1.0346942572142641, 4);
  sqcRZGate(q, 0.815930396502803, 4);
  sqcRYGate(q, -0.42004493898455486, 5);
  sqcRZGate(q, -1.3015694842749168, 5);
  sqcRYGate(q, -1.559035699913915, 6);
  sqcRZGate(q, 2.5504099078234193, 6);
  sqcRYGate(q, -0.17944701614611805, 7);
  sqcRZGate(q, -1.210862030294233, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.7218310568940094, 0);
  sqcRZGate(q, -0.6694723508790598, 0);
  sqcRYGate(q, -2.5702438144886575, 1);
  sqcRZGate(q, -2.702125080665637, 1);
  sqcRYGate(q, 2.983537867235004, 2);
  sqcRZGate(q, 0.47821304504550505, 2);
  sqcRYGate(q, -1.7285939431518367, 3);
  sqcRZGate(q, -1.7426212450719805, 3);
  sqcRYGate(q, -0.6738054568210687, 4);
  sqcRZGate(q, 1.9580967077496982, 4);
  sqcRYGate(q, 0.8473909688520357, 5);
  sqcRZGate(q, -0.317021897375211, 5);
  sqcRYGate(q, -3.090091888024115, 6);
  sqcRZGate(q, 2.733701427693188, 6);
  sqcRYGate(q, -2.240086550753543, 7);
  sqcRZGate(q, 1.3482444890134295, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.7866957177596214, 0);
  sqcRZGate(q, 1.2520716487419297, 0);
  sqcRYGate(q, 0.8384042442580666, 1);
  sqcRZGate(q, 1.39744004675826, 1);
  sqcRYGate(q, -0.26740249279504585, 2);
  sqcRZGate(q, 1.2473175525815965, 2);
  sqcRYGate(q, -0.8065529499595693, 3);
  sqcRZGate(q, 2.0924736103854062, 3);
  sqcRYGate(q, 0.747102590881879, 4);
  sqcRZGate(q, 2.7670980372612317, 4);
  sqcRYGate(q, 2.1521835767485746, 5);
  sqcRZGate(q, -1.4478460231890864, 5);
  sqcRYGate(q, 0.44109740226564514, 6);
  sqcRZGate(q, -2.232223865400494, 6);
  sqcRYGate(q, 2.0894101649504506, 7);
  sqcRZGate(q, -0.11797592262766264, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.2343322600191184, 0);
  sqcRZGate(q, -0.9357153840709218, 0);
  sqcRYGate(q, -2.0943541849405785, 1);
  sqcRZGate(q, -0.13646800234982326, 1);
  sqcRYGate(q, -2.4436088261743825, 2);
  sqcRZGate(q, 2.2442145768160864, 2);
  sqcRYGate(q, -0.8391311145891063, 3);
  sqcRZGate(q, 0.855970382748378, 3);
  sqcRYGate(q, 0.9820014796705802, 4);
  sqcRZGate(q, 1.7882120456367925, 4);
  sqcRYGate(q, -3.111832415842163, 5);
  sqcRZGate(q, 2.018224232868068, 5);
  sqcRYGate(q, 2.2976031992387065, 6);
  sqcRZGate(q, 1.5267670883052382, 6);
  sqcRYGate(q, 1.1658879157698445, 7);
  sqcRZGate(q, 1.666622279202384, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4815136242297396, 0);
  sqcRZGate(q, 2.7295559465685937, 0);
  sqcRYGate(q, 0.769444207786755, 1);
  sqcRZGate(q, 0.15924671225536446, 1);
  sqcRYGate(q, -2.367958782990323, 2);
  sqcRZGate(q, 3.0990892107505843, 2);
  sqcRYGate(q, 2.2902406427499264, 3);
  sqcRZGate(q, -0.9021298736812208, 3);
  sqcRYGate(q, -1.543961778862907, 4);
  sqcRZGate(q, 2.5029169757204244, 4);
  sqcRYGate(q, -2.0103222388295414, 5);
  sqcRZGate(q, 2.7908149659343833, 5);
  sqcRYGate(q, 0.5465667433139982, 6);
  sqcRZGate(q, 0.41892946528105857, 6);
  sqcRYGate(q, 1.5689910560237303, 7);
  sqcRZGate(q, -2.478535343909988, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.028242917879985, 0);
  sqcRZGate(q, 3.112155252114278, 0);
  sqcRYGate(q, -0.25364308496665156, 1);
  sqcRZGate(q, -0.43305984508366663, 1);
  sqcRYGate(q, 0.6065856286276107, 2);
  sqcRZGate(q, 1.0192556506101336, 2);
  sqcRYGate(q, -1.788173768819779, 3);
  sqcRZGate(q, 1.5546203515036185, 3);
  sqcRYGate(q, 1.7955072513469368, 4);
  sqcRZGate(q, -3.1311926698681534, 4);
  sqcRYGate(q, 0.7514811386168576, 5);
  sqcRZGate(q, 0.5216006686844681, 5);
  sqcRYGate(q, 0.9737975398054266, 6);
  sqcRZGate(q, -2.387927689157308, 6);
  sqcRYGate(q, 2.110543288323197, 7);
  sqcRZGate(q, -3.1114894049040793, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.4035087184741644, 0);
  sqcRZGate(q, -1.2712733628052575, 0);
  sqcRYGate(q, -1.4487361020267968, 1);
  sqcRZGate(q, 2.5360076805980096, 1);
  sqcRYGate(q, 1.0185353725704456, 2);
  sqcRZGate(q, -0.28092145912390976, 2);
  sqcRYGate(q, 0.7619537370596127, 3);
  sqcRZGate(q, 0.48859338677910136, 3);
  sqcRYGate(q, -1.4123259058618212, 4);
  sqcRZGate(q, -1.9127988126282673, 4);
  sqcRYGate(q, 0.8884397012924866, 5);
  sqcRZGate(q, -0.9476398902570677, 5);
  sqcRYGate(q, 0.8340308622578952, 6);
  sqcRZGate(q, -2.912697126476622, 6);
  sqcRYGate(q, 2.852267242712804, 7);
  sqcRZGate(q, -2.6787937068477596, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.5390272421818931, 0);
  sqcRZGate(q, -2.7998158037753886, 0);
  sqcRYGate(q, 2.8994034491254586, 1);
  sqcRZGate(q, 1.5305680581989796, 1);
  sqcRYGate(q, -0.1698369766140529, 2);
  sqcRZGate(q, 1.1611733244599112, 2);
  sqcRYGate(q, 3.0188675543841716, 3);
  sqcRZGate(q, -2.6454143473239267, 3);
  sqcRYGate(q, 1.698295965279322, 4);
  sqcRZGate(q, -1.1825608564211738, 4);
  sqcRYGate(q, -2.7504026895098566, 5);
  sqcRZGate(q, 0.380733356801017, 5);
  sqcRYGate(q, -2.0117269841336824, 6);
  sqcRZGate(q, 1.0454532429195345, 6);
  sqcRYGate(q, 2.7812975393518307, 7);
  sqcRZGate(q, 2.4067177275607814, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.28183220124118513, 0);
  sqcRZGate(q, -1.5796506084827213, 0);
  sqcRYGate(q, -1.3007784204681228, 1);
  sqcRZGate(q, 1.9240935067101086, 1);
  sqcRYGate(q, -0.5063188082404235, 2);
  sqcRZGate(q, 2.5371530125397967, 2);
  sqcRYGate(q, -3.0645565563471817, 3);
  sqcRZGate(q, -2.2726359709343704, 3);
  sqcRYGate(q, 2.384861569128487, 4);
  sqcRZGate(q, 1.878149074361594, 4);
  sqcRYGate(q, 1.6791624287098832, 5);
  sqcRZGate(q, -1.5487082338162714, 5);
  sqcRYGate(q, 2.5644664490732776, 6);
  sqcRZGate(q, -0.7781345319294432, 6);
  sqcRYGate(q, -0.26526267763980577, 7);
  sqcRZGate(q, 2.5350332153357242, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.065017174738524, 0);
  sqcRZGate(q, 2.050011165407118, 0);
  sqcRYGate(q, -1.8132972110541141, 1);
  sqcRZGate(q, 0.3635818529054058, 1);
  sqcRYGate(q, 1.1180969981861766, 2);
  sqcRZGate(q, -2.452708807949811, 2);
  sqcRYGate(q, 2.172907861761255, 3);
  sqcRZGate(q, 2.487560577999426, 3);
  sqcRYGate(q, -1.1950385109785393, 4);
  sqcRZGate(q, 0.9005253369100484, 4);
  sqcRYGate(q, -1.554727127625787, 5);
  sqcRZGate(q, 0.018050785675475467, 5);
  sqcRYGate(q, 1.121948926936236, 6);
  sqcRZGate(q, 0.17691245879363218, 6);
  sqcRYGate(q, -0.24093578698621013, 7);
  sqcRZGate(q, 2.988406459698769, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.037977810651885, 0);
  sqcRZGate(q, 1.861444609452347, 0);
  sqcRYGate(q, 1.881087176519774, 1);
  sqcRZGate(q, -1.0414962023699796, 1);
  sqcRYGate(q, -1.4431214098920004, 2);
  sqcRZGate(q, 0.29024022024424023, 2);
  sqcRYGate(q, -0.6353682388340729, 3);
  sqcRZGate(q, -1.6497647830859514, 3);
  sqcRYGate(q, -0.5545116421075278, 4);
  sqcRZGate(q, -2.622861043758175, 4);
  sqcRYGate(q, 0.8802958596557575, 5);
  sqcRZGate(q, 1.7347599827061002, 5);
  sqcRYGate(q, -2.2469561669861324, 6);
  sqcRZGate(q, 1.9964557281664819, 6);
  sqcRYGate(q, -0.7134613512113099, 7);
  sqcRZGate(q, -1.7764984087984264, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.2220714320544417, 0);
  sqcRZGate(q, -1.5501120819689376, 0);
  sqcRYGate(q, -2.2678733833630895, 1);
  sqcRZGate(q, -1.2583152704496587, 1);
  sqcRYGate(q, 1.0652981051742147, 2);
  sqcRZGate(q, 0.7129131178545098, 2);
  sqcRYGate(q, -0.1700802134175288, 3);
  sqcRZGate(q, -2.788913494594956, 3);
  sqcRYGate(q, -2.939458053075809, 4);
  sqcRZGate(q, -1.8267247233175035, 4);
  sqcRYGate(q, -1.719597607321326, 5);
  sqcRZGate(q, 3.029766299624142, 5);
  sqcRYGate(q, -2.119076853128672, 6);
  sqcRZGate(q, -0.5590040224443243, 6);
  sqcRYGate(q, 1.3926658624046846, 7);
  sqcRZGate(q, -1.8924384316832612, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.6831434801042757, 0);
  sqcRZGate(q, 1.9524692859215333, 0);
  sqcRYGate(q, -2.668106679719657, 1);
  sqcRZGate(q, 1.0385307520851375, 1);
  sqcRYGate(q, -1.7490123780551636, 2);
  sqcRZGate(q, 2.7163154043605, 2);
  sqcRYGate(q, -1.3125723982480073, 3);
  sqcRZGate(q, 0.10631053963493463, 3);
  sqcRYGate(q, 2.9099287492720434, 4);
  sqcRZGate(q, 0.32275308804546293, 4);
  sqcRYGate(q, -1.7250148606752678, 5);
  sqcRZGate(q, -0.07017520430565671, 5);
  sqcRYGate(q, -0.06746090353008552, 6);
  sqcRZGate(q, 1.2082124154317992, 6);
  sqcRYGate(q, 2.995967452787347, 7);
  sqcRZGate(q, -1.4418446656155037, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.5781134458725301, 0);
  sqcRZGate(q, 1.5121923924189822, 0);
  sqcRYGate(q, 2.4267473713968504, 1);
  sqcRZGate(q, 3.124347537617378, 1);
  sqcRYGate(q, 2.026775698715616, 2);
  sqcRZGate(q, 1.522683889283982, 2);
  sqcRYGate(q, 0.22136572416621847, 3);
  sqcRZGate(q, -2.1049657095751066, 3);
  sqcRYGate(q, 1.70667408030444, 4);
  sqcRZGate(q, 3.1133934252358535, 4);
  sqcRYGate(q, 1.1802932562415203, 5);
  sqcRZGate(q, 1.11526920181068, 5);
  sqcRYGate(q, 1.8157104624531568, 6);
  sqcRZGate(q, -2.71640591829945, 6);
  sqcRYGate(q, -1.6838639466889065, 7);
  sqcRZGate(q, -2.2031269805087828, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.5466293494782755, 0);
  sqcRZGate(q, 0.13838277470240978, 0);
  sqcRYGate(q, -0.3757559577660827, 1);
  sqcRZGate(q, -0.7142968292513449, 1);
  sqcRYGate(q, 0.603632754572749, 2);
  sqcRZGate(q, 1.742618810885741, 2);
  sqcRYGate(q, 0.6664288701185588, 3);
  sqcRZGate(q, 0.2114308338927977, 3);
  sqcRYGate(q, -2.8010243016746266, 4);
  sqcRZGate(q, -1.6866780840505162, 4);
  sqcRYGate(q, -0.14452382612765377, 5);
  sqcRZGate(q, -0.3397041562857251, 5);
  sqcRYGate(q, -2.1901437881337156, 6);
  sqcRZGate(q, -2.676014515580105, 6);
  sqcRYGate(q, 2.165728022400479, 7);
  sqcRZGate(q, 2.4448253740479258, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.738570713407314, 0);
  sqcRZGate(q, -2.2759435772950134, 0);
  sqcRYGate(q, -2.981927182577062, 1);
  sqcRZGate(q, 1.6574311073493755, 1);
  sqcRYGate(q, -2.8057112198135843, 2);
  sqcRZGate(q, -1.0370079344218626, 2);
  sqcRYGate(q, 2.8117722560291085, 3);
  sqcRZGate(q, -2.171382105460346, 3);
  sqcRYGate(q, -0.3439353504912077, 4);
  sqcRZGate(q, 0.8249365248874921, 4);
  sqcRYGate(q, -1.045560980085935, 5);
  sqcRZGate(q, -2.2903002285311826, 5);
  sqcRYGate(q, 1.0905076195157282, 6);
  sqcRZGate(q, -1.800684174709695, 6);
  sqcRYGate(q, 2.921536575807612, 7);
  sqcRZGate(q, -0.7168160251317524, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.0024254895971643, 0);
  sqcRZGate(q, 2.3847376078949623, 0);
  sqcRYGate(q, -2.60617633833967, 1);
  sqcRZGate(q, -1.7294443747486685, 1);
  sqcRYGate(q, -0.9140959866717325, 2);
  sqcRZGate(q, -0.38346016273725964, 2);
  sqcRYGate(q, 1.7440223786534421, 3);
  sqcRZGate(q, 0.49334624602847854, 3);
  sqcRYGate(q, -0.27225233212537153, 4);
  sqcRZGate(q, 0.38821533308833267, 4);
  sqcRYGate(q, 2.8916027179993735, 5);
  sqcRZGate(q, 1.7840264813185123, 5);
  sqcRYGate(q, 1.6497188645974723, 6);
  sqcRZGate(q, -0.577293036240957, 6);
  sqcRYGate(q, 0.7882305062466806, 7);
  sqcRZGate(q, 0.7737132137282765, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4226024495290108, 0);
  sqcRZGate(q, 1.670525610492706, 0);
  sqcRYGate(q, -2.354931995587148, 1);
  sqcRZGate(q, -1.3395967323846154, 1);
  sqcRYGate(q, 2.751696694135538, 2);
  sqcRZGate(q, -0.6094031416793086, 2);
  sqcRYGate(q, 1.5271110309266733, 3);
  sqcRZGate(q, 1.2809137187896968, 3);
  sqcRYGate(q, -1.8474452305511804, 4);
  sqcRZGate(q, -0.06956176974001771, 4);
  sqcRYGate(q, -2.8947591058405187, 5);
  sqcRZGate(q, -1.5254336661359467, 5);
  sqcRYGate(q, -2.4151553504076797, 6);
  sqcRZGate(q, -1.0984056037264502, 6);
  sqcRYGate(q, 0.1492886284508542, 7);
  sqcRZGate(q, -0.7802279399182446, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.0666129103951514, 0);
  sqcRZGate(q, 1.7466241125780528, 0);
  sqcRYGate(q, -1.8264440121315983, 1);
  sqcRZGate(q, 0.5490736620215202, 1);
  sqcRYGate(q, 0.38808847328361346, 2);
  sqcRZGate(q, -3.0974588523102864, 2);
  sqcRYGate(q, -1.6515457424029512, 3);
  sqcRZGate(q, -2.251341487948988, 3);
  sqcRYGate(q, -2.505739852357037, 4);
  sqcRZGate(q, 1.2768894857074937, 4);
  sqcRYGate(q, -0.7864295326638402, 5);
  sqcRZGate(q, -0.8317393199183627, 5);
  sqcRYGate(q, 1.23309000187846, 6);
  sqcRZGate(q, -1.397670522034863, 6);
  sqcRYGate(q, 0.8911624256271411, 7);
  sqcRZGate(q, -0.36435418619578464, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.7751726206487042, 0);
  sqcRZGate(q, 2.4527015328357464, 0);
  sqcRYGate(q, -1.954317447498312, 1);
  sqcRZGate(q, 1.186009728703182, 1);
  sqcRYGate(q, -1.021203100231972, 2);
  sqcRZGate(q, -0.251701728920624, 2);
  sqcRYGate(q, -2.501553743957952, 3);
  sqcRZGate(q, 2.541619533773591, 3);
  sqcRYGate(q, -0.5312825388375028, 4);
  sqcRZGate(q, 1.5842439358683285, 4);
  sqcRYGate(q, -0.311875637910446, 5);
  sqcRZGate(q, 1.894936402932231, 5);
  sqcRYGate(q, 1.6480579322764672, 6);
  sqcRZGate(q, 2.2978563048599323, 6);
  sqcRYGate(q, -0.5980134505913974, 7);
  sqcRZGate(q, 1.478459938463545, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.1072443662603293, 0);
  sqcRZGate(q, -2.9861179830443736, 0);
  sqcRYGate(q, 2.1716380113167526, 1);
  sqcRZGate(q, -1.6488628889881516, 1);
  sqcRYGate(q, -2.600851854131161, 2);
  sqcRZGate(q, -3.0048939743067393, 2);
  sqcRYGate(q, 1.6844676153061604, 3);
  sqcRZGate(q, 3.0222806563205427, 3);
  sqcRYGate(q, -0.11308880207147463, 4);
  sqcRZGate(q, 1.6682095685776215, 4);
  sqcRYGate(q, -0.8718529908741094, 5);
  sqcRZGate(q, 1.0027384734933595, 5);
  sqcRYGate(q, -0.6034712805488331, 6);
  sqcRZGate(q, -3.0935264496602515, 6);
  sqcRYGate(q, 3.047148092380731, 7);
  sqcRZGate(q, 2.956770339735306, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.9485912995668108, 0);
  sqcRZGate(q, 2.9040548203350265, 0);
  sqcRYGate(q, 1.0095092170683015, 1);
  sqcRZGate(q, 1.9907938677181876, 1);
  sqcRYGate(q, -1.2044309888298248, 2);
  sqcRZGate(q, -2.603132972235661, 2);
  sqcRYGate(q, -1.5217754659191673, 3);
  sqcRZGate(q, -0.5687619884259929, 3);
  sqcRYGate(q, -1.204889264681671, 4);
  sqcRZGate(q, -0.8356083571655548, 4);
  sqcRYGate(q, 1.7443980465435232, 5);
  sqcRZGate(q, -2.7715794999785714, 5);
  sqcRYGate(q, -0.713298223193216, 6);
  sqcRZGate(q, -0.24331154219050818, 6);
  sqcRYGate(q, 0.6590012599046773, 7);
  sqcRZGate(q, -2.1318243919190705, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.480667455986355, 0);
  sqcRZGate(q, -1.9441245397880969, 0);
  sqcRYGate(q, 0.028309660736265056, 1);
  sqcRZGate(q, 1.8519584523927985, 1);
  sqcRYGate(q, 0.07646387305532532, 2);
  sqcRZGate(q, 0.04532528239463307, 2);
  sqcRYGate(q, -0.45643795131564957, 3);
  sqcRZGate(q, 0.17790206624998553, 3);
  sqcRYGate(q, 0.17671171407472153, 4);
  sqcRZGate(q, -0.0882800009051774, 4);
  sqcRYGate(q, -1.2274056938483726, 5);
  sqcRZGate(q, 0.02689288361364397, 5);
  sqcRYGate(q, 0.9517039463324704, 6);
  sqcRZGate(q, -0.7956935050309148, 6);
  sqcRYGate(q, 0.6754197967358408, 7);
  sqcRZGate(q, -2.530618069862083, 7);

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
