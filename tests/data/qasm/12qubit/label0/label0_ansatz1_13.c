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

  sqcRYGate(q, 1.7711893980064133, 0);
  sqcRZGate(q, 1.5382637327490958, 0);
  sqcRYGate(q, 0.19794771277866943, 1);
  sqcRZGate(q, -2.679723223276104, 1);
  sqcRYGate(q, -0.7870623059987336, 2);
  sqcRZGate(q, -2.798812166186781, 2);
  sqcRYGate(q, 0.0005946668670295807, 3);
  sqcRZGate(q, -0.6648454289613238, 3);
  sqcRYGate(q, 2.375919323176831, 4);
  sqcRZGate(q, -2.268270134201022, 4);
  sqcRYGate(q, -1.4909928174776044, 5);
  sqcRZGate(q, 0.4716546160208314, 5);
  sqcRYGate(q, -2.0566812938646555, 6);
  sqcRZGate(q, -2.22799854669291, 6);
  sqcRYGate(q, 2.433104685082353, 7);
  sqcRZGate(q, -0.552536691911948, 7);
  sqcRYGate(q, 3.079605684326256, 8);
  sqcRZGate(q, 1.3234281860993098, 8);
  sqcRYGate(q, 0.28788239968587437, 9);
  sqcRZGate(q, -3.0782321059032864, 9);
  sqcRYGate(q, 2.4610340725825117, 10);
  sqcRZGate(q, -0.7188895095181438, 10);
  sqcRYGate(q, -0.7976867165795328, 11);
  sqcRZGate(q, -1.6112388362927317, 11);
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
  sqcRYGate(q, 2.8510020988967755, 0);
  sqcRZGate(q, 1.4860459652502342, 0);
  sqcRYGate(q, -2.5634033639403815, 1);
  sqcRZGate(q, 2.8932184652192627, 1);
  sqcRYGate(q, -0.17862270107830253, 2);
  sqcRZGate(q, -1.972272485425053, 2);
  sqcRYGate(q, -3.140352802847593, 3);
  sqcRZGate(q, -3.017371875687129, 3);
  sqcRYGate(q, 0.04743376415779944, 4);
  sqcRZGate(q, 2.3227153708783774, 4);
  sqcRYGate(q, 2.7923311401689213, 5);
  sqcRZGate(q, -2.6427079829672313, 5);
  sqcRYGate(q, -0.002836610736167699, 6);
  sqcRZGate(q, 1.5529643036972436, 6);
  sqcRYGate(q, -3.1408349103708697, 7);
  sqcRZGate(q, -2.5899346250989606, 7);
  sqcRYGate(q, -0.07784004897621788, 8);
  sqcRZGate(q, -1.4112500099242729, 8);
  sqcRYGate(q, 2.719948628510107, 9);
  sqcRZGate(q, 2.7028371490187117, 9);
  sqcRYGate(q, -0.23149545157757156, 10);
  sqcRZGate(q, -1.847625826647155, 10);
  sqcRYGate(q, -0.27776558665937257, 11);
  sqcRZGate(q, -1.4947355970523166, 11);
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
  sqcRYGate(q, 2.2806132919940847, 0);
  sqcRZGate(q, -0.8867891621390088, 0);
  sqcRYGate(q, 0.26809939167222474, 1);
  sqcRZGate(q, -1.1105523682191152, 1);
  sqcRYGate(q, 0.14807660754241866, 2);
  sqcRZGate(q, -1.7815998577923795, 2);
  sqcRYGate(q, -3.140697594955891, 3);
  sqcRZGate(q, -0.8348625467325657, 3);
  sqcRYGate(q, -1.0793684921176654, 4);
  sqcRZGate(q, -1.2774333522977468, 4);
  sqcRYGate(q, 0.4879349486299938, 5);
  sqcRZGate(q, -2.0209866023933882, 5);
  sqcRYGate(q, 1.2362408127916487, 6);
  sqcRZGate(q, 0.6115365546873388, 6);
  sqcRYGate(q, -0.5643763674197311, 7);
  sqcRZGate(q, -1.884268468458222, 7);
  sqcRYGate(q, -0.0900058456440389, 8);
  sqcRZGate(q, -0.9266451333703367, 8);
  sqcRYGate(q, 0.6910566317271281, 9);
  sqcRZGate(q, -2.5982508293861133, 9);
  sqcRYGate(q, 0.5509806476859607, 10);
  sqcRZGate(q, 3.1253381179140187, 10);
  sqcRYGate(q, 2.670591908182122, 11);
  sqcRZGate(q, 0.026377465565591507, 11);
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
  sqcRYGate(q, 2.9266742297529924, 0);
  sqcRZGate(q, -2.8389489457676595, 0);
  sqcRYGate(q, -1.3286633198595825, 1);
  sqcRZGate(q, 0.0837007896825762, 1);
  sqcRYGate(q, -0.7664537053743805, 2);
  sqcRZGate(q, -2.989357140160945, 2);
  sqcRYGate(q, 0.006458660625296986, 3);
  sqcRZGate(q, -1.2885305666679343, 3);
  sqcRYGate(q, -1.4598170818795402, 4);
  sqcRZGate(q, -0.096011536203898, 4);
  sqcRYGate(q, 2.6744123069130694, 5);
  sqcRZGate(q, -0.9856778281287422, 5);
  sqcRYGate(q, 3.112440484017478, 6);
  sqcRZGate(q, 1.3822201516887898, 6);
  sqcRYGate(q, 2.125485193550176, 7);
  sqcRZGate(q, 0.0706177944569859, 7);
  sqcRYGate(q, 2.6395419990624247, 8);
  sqcRZGate(q, -1.216824587910265, 8);
  sqcRYGate(q, -0.815921123602847, 9);
  sqcRZGate(q, 1.9876911505566799, 9);
  sqcRYGate(q, -0.8867653139411251, 10);
  sqcRZGate(q, 1.7304495095121952, 10);
  sqcRYGate(q, 0.6757994111734899, 11);
  sqcRZGate(q, 2.346049695783056, 11);
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
  sqcRYGate(q, 2.54244757475653, 0);
  sqcRZGate(q, -0.5932195550099324, 0);
  sqcRYGate(q, 0.34181787587625667, 1);
  sqcRZGate(q, -0.07288641258453558, 1);
  sqcRYGate(q, 2.9631513451013, 2);
  sqcRZGate(q, -0.8142978774213782, 2);
  sqcRYGate(q, -1.403591571791785, 3);
  sqcRZGate(q, -1.2676737144582937, 3);
  sqcRYGate(q, 0.9074599883308425, 4);
  sqcRZGate(q, -2.360051257622774, 4);
  sqcRYGate(q, 0.31099711433010757, 5);
  sqcRZGate(q, -2.8754511431182634, 5);
  sqcRYGate(q, -2.8402892787431044, 6);
  sqcRZGate(q, 1.6740528721782697, 6);
  sqcRYGate(q, -0.10830237822166489, 7);
  sqcRZGate(q, -0.07285642720522398, 7);
  sqcRYGate(q, 0.001129825072716557, 8);
  sqcRZGate(q, -2.5585975198987048, 8);
  sqcRYGate(q, -3.1307345590066897, 9);
  sqcRZGate(q, -1.2652994474826857, 9);
  sqcRYGate(q, -2.8132276978639283, 10);
  sqcRZGate(q, 2.684069345296642, 10);
  sqcRYGate(q, -0.8732469728581452, 11);
  sqcRZGate(q, 1.5899665731573174, 11);
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
  sqcRYGate(q, -0.9451092926766584, 0);
  sqcRZGate(q, 2.010075288377905, 0);
  sqcRYGate(q, -1.9280505146847693, 1);
  sqcRZGate(q, 0.4556573768915762, 1);
  sqcRYGate(q, -2.4664064869274305, 2);
  sqcRZGate(q, 2.3711251695910596, 2);
  sqcRYGate(q, -2.7922028690660015, 3);
  sqcRZGate(q, -0.927114421484466, 3);
  sqcRYGate(q, -3.1371663071031555, 4);
  sqcRZGate(q, 2.945005094370884, 4);
  sqcRYGate(q, 3.1275267091447607, 5);
  sqcRZGate(q, -3.1089352145134135, 5);
  sqcRYGate(q, -3.1128003301275164, 6);
  sqcRZGate(q, 1.6296357863419662, 6);
  sqcRYGate(q, -1.0643085747783174, 7);
  sqcRZGate(q, 0.5497507039146505, 7);
  sqcRYGate(q, 0.2752159222437243, 8);
  sqcRZGate(q, -1.254214973466305, 8);
  sqcRYGate(q, -1.139036122718065, 9);
  sqcRZGate(q, -0.4315235261016195, 9);
  sqcRYGate(q, 0.0660933848894052, 10);
  sqcRZGate(q, -2.192383541945513, 10);
  sqcRYGate(q, -1.4637995738168517, 11);
  sqcRZGate(q, 1.40420851071383, 11);
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
  sqcRYGate(q, 1.5909616255421497, 0);
  sqcRZGate(q, 2.7655976097268207, 0);
  sqcRYGate(q, 0.013926037193281568, 1);
  sqcRZGate(q, 3.092175961976839, 1);
  sqcRYGate(q, 3.1098787381100435, 2);
  sqcRZGate(q, -0.8669726195447698, 2);
  sqcRYGate(q, 0.8143879660052589, 3);
  sqcRZGate(q, 1.557859748751599, 3);
  sqcRYGate(q, 3.0713705364412136, 4);
  sqcRZGate(q, 1.3692517671284612, 4);
  sqcRYGate(q, 0.44219353775018905, 5);
  sqcRZGate(q, -0.93279834393343, 5);
  sqcRYGate(q, 1.747317091019668, 6);
  sqcRZGate(q, -0.7151055666900835, 6);
  sqcRYGate(q, 2.2647004580599033, 7);
  sqcRZGate(q, 1.372445610276654, 7);
  sqcRYGate(q, -1.3347209964065812, 8);
  sqcRZGate(q, -2.9743935099281043, 8);
  sqcRYGate(q, 2.694261849176381, 9);
  sqcRZGate(q, 3.1403738665705725, 9);
  sqcRYGate(q, -2.93739732074949, 10);
  sqcRZGate(q, 0.06768101891939442, 10);
  sqcRYGate(q, -1.2273100905525283, 11);
  sqcRZGate(q, -0.08706291140878519, 11);
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
  sqcRYGate(q, 1.3793916428930766, 0);
  sqcRZGate(q, 3.1269334079855025, 0);
  sqcRYGate(q, 2.9329257921083234, 1);
  sqcRZGate(q, 2.2197211175450913, 1);
  sqcRYGate(q, -0.04266142727678712, 2);
  sqcRZGate(q, 0.16061666840496946, 2);
  sqcRYGate(q, 0.4767433945894081, 3);
  sqcRZGate(q, -0.4327985484709388, 3);
  sqcRYGate(q, -0.003619925065017071, 4);
  sqcRZGate(q, 1.531793882187845, 4);
  sqcRYGate(q, 0.2814543891351562, 5);
  sqcRZGate(q, 1.335388596610211, 5);
  sqcRYGate(q, 3.1269123858580365, 6);
  sqcRZGate(q, -0.721704720231334, 6);
  sqcRYGate(q, -0.30845795318135044, 7);
  sqcRZGate(q, 2.266514791332872, 7);
  sqcRYGate(q, -0.08761598235392802, 8);
  sqcRZGate(q, 0.4214413516155737, 8);
  sqcRYGate(q, 0.0007901240633139871, 9);
  sqcRZGate(q, 3.0671930001014482, 9);
  sqcRYGate(q, 3.1366969779864955, 10);
  sqcRZGate(q, -2.5527576858182393, 10);
  sqcRYGate(q, 1.8553383578081943, 11);
  sqcRZGate(q, 2.8841880887133415, 11);
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
  sqcRYGate(q, 1.6135145279322574, 0);
  sqcRZGate(q, -0.44549147567985997, 0);
  sqcRYGate(q, 0.0006822284868699824, 1);
  sqcRZGate(q, 2.632247829783132, 1);
  sqcRYGate(q, -2.639647906569558, 2);
  sqcRZGate(q, -0.05555237379749055, 2);
  sqcRYGate(q, 1.8727783889373293, 3);
  sqcRZGate(q, -0.154019183136162, 3);
  sqcRYGate(q, -1.2945693011686767, 4);
  sqcRZGate(q, -0.2985495450923498, 4);
  sqcRYGate(q, 0.10523590384715711, 5);
  sqcRZGate(q, -1.7724251996883669, 5);
  sqcRYGate(q, 2.8741513416727127, 6);
  sqcRZGate(q, -0.5043316036215528, 6);
  sqcRYGate(q, 2.122758109600171, 7);
  sqcRZGate(q, 2.596476576624918, 7);
  sqcRYGate(q, -1.249083502337041, 8);
  sqcRZGate(q, -0.5598428695001333, 8);
  sqcRYGate(q, 2.6910389339809666, 9);
  sqcRZGate(q, -3.0665742176058464, 9);
  sqcRYGate(q, 0.04280722748119756, 10);
  sqcRZGate(q, -2.9703976401462633, 10);
  sqcRYGate(q, 0.7654112998966517, 11);
  sqcRZGate(q, 2.75177276682142, 11);
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
  sqcRYGate(q, -1.8500093431884352, 0);
  sqcRZGate(q, -1.7840588658195462, 0);
  sqcRYGate(q, -2.403412755794623, 1);
  sqcRZGate(q, -0.8615368113313231, 1);
  sqcRYGate(q, 2.3744982986687218, 2);
  sqcRZGate(q, 2.157178602541997, 2);
  sqcRYGate(q, -0.12392910887830859, 3);
  sqcRZGate(q, 3.0439476258000946, 3);
  sqcRYGate(q, -0.018326809342582972, 4);
  sqcRZGate(q, 0.31663848243206527, 4);
  sqcRYGate(q, -3.14117199961474, 5);
  sqcRZGate(q, -3.003881814663239, 5);
  sqcRYGate(q, 3.096435702678484, 6);
  sqcRZGate(q, -0.5949113837480733, 6);
  sqcRYGate(q, -1.2375840179076443, 7);
  sqcRZGate(q, -0.8770763223993089, 7);
  sqcRYGate(q, 0.35454126774011396, 8);
  sqcRZGate(q, -1.4577167382122036, 8);
  sqcRYGate(q, -0.41161365881121986, 9);
  sqcRZGate(q, -0.5474103486199624, 9);
  sqcRYGate(q, 0.05562479025240741, 10);
  sqcRZGate(q, 0.8333648966011855, 10);
  sqcRYGate(q, -2.0200258886340334, 11);
  sqcRZGate(q, -2.759214983221209, 11);
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
  sqcRYGate(q, 0.3719583672746879, 0);
  sqcRZGate(q, -2.0306969198011604, 0);
  sqcRYGate(q, 3.1270720944871355, 1);
  sqcRZGate(q, -1.8999812001908394, 1);
  sqcRYGate(q, -0.014885307443226916, 2);
  sqcRZGate(q, 0.9930223212756192, 2);
  sqcRYGate(q, -1.310658429417428, 3);
  sqcRZGate(q, 3.0990198906683664, 3);
  sqcRYGate(q, 2.2846668101520073, 4);
  sqcRZGate(q, 0.32178460961969874, 4);
  sqcRYGate(q, 0.6687517850794, 5);
  sqcRZGate(q, 0.22013820691882593, 5);
  sqcRYGate(q, 2.948163932410543, 6);
  sqcRZGate(q, 2.7648233458085354, 6);
  sqcRYGate(q, 0.22588203702308007, 7);
  sqcRZGate(q, -1.8418652580004962, 7);
  sqcRYGate(q, -3.125941393337605, 8);
  sqcRZGate(q, 1.7622862282139895, 8);
  sqcRYGate(q, -0.14837573580698835, 9);
  sqcRZGate(q, -0.430601814722177, 9);
  sqcRYGate(q, -1.6215619852524195, 10);
  sqcRZGate(q, 0.26907596522646576, 10);
  sqcRYGate(q, -0.6066757067460524, 11);
  sqcRZGate(q, -3.007616360815255, 11);
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
  sqcRYGate(q, 2.5521408974487176, 0);
  sqcRZGate(q, -1.1251740239464816, 0);
  sqcRYGate(q, -0.8103702446152479, 1);
  sqcRZGate(q, 1.8096614748251476, 1);
  sqcRYGate(q, -2.6337826685638643, 2);
  sqcRZGate(q, -1.5169519145106776, 2);
  sqcRYGate(q, -0.34714060778422473, 3);
  sqcRZGate(q, 0.4145847212456424, 3);
  sqcRYGate(q, -0.5067815629227459, 4);
  sqcRZGate(q, 0.44200501412532384, 4);
  sqcRYGate(q, -3.024640185432129, 5);
  sqcRZGate(q, 2.8482635234754583, 5);
  sqcRYGate(q, -0.04190763658199658, 6);
  sqcRZGate(q, -0.6530567673649433, 6);
  sqcRYGate(q, -0.7950156270775455, 7);
  sqcRZGate(q, 3.004865631640365, 7);
  sqcRYGate(q, -0.37920840510361664, 8);
  sqcRZGate(q, 1.2695073177596525, 8);
  sqcRYGate(q, -0.25150862880516556, 9);
  sqcRZGate(q, 2.4785184698824665, 9);
  sqcRYGate(q, -2.0921550351356837, 10);
  sqcRZGate(q, -1.7697109905661013, 10);
  sqcRYGate(q, -1.726468417708199, 11);
  sqcRZGate(q, -1.5419047339536167, 11);
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
  sqcRYGate(q, -0.8235233053946172, 0);
  sqcRZGate(q, -2.4153336139121797, 0);
  sqcRYGate(q, 1.762752471635375, 1);
  sqcRZGate(q, -0.8769183340324797, 1);
  sqcRYGate(q, 1.092912996002461, 2);
  sqcRZGate(q, -1.5577404118237652, 2);
  sqcRYGate(q, -3.0537303251816277, 3);
  sqcRZGate(q, 3.058967921418723, 3);
  sqcRYGate(q, 3.1053938159993386, 4);
  sqcRZGate(q, 0.46664755880712644, 4);
  sqcRYGate(q, 3.126017218801654, 5);
  sqcRZGate(q, -1.1569476205637648, 5);
  sqcRYGate(q, -0.024833190753311918, 6);
  sqcRZGate(q, -2.261335463089636, 6);
  sqcRYGate(q, 1.107916141168668, 7);
  sqcRZGate(q, -1.3633350983035546, 7);
  sqcRYGate(q, -3.116896547510491, 8);
  sqcRZGate(q, -0.10648351798135637, 8);
  sqcRYGate(q, -0.15307283016961826, 9);
  sqcRZGate(q, -1.475991300991235, 9);
  sqcRYGate(q, 3.0250746669816566, 10);
  sqcRZGate(q, 2.052963953449856, 10);
  sqcRYGate(q, 0.41257282139793544, 11);
  sqcRZGate(q, 1.7043352240746745, 11);
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
  sqcRYGate(q, -2.0034344423238144, 0);
  sqcRZGate(q, -2.286867578867639, 0);
  sqcRYGate(q, -2.030075021670764, 1);
  sqcRZGate(q, 0.2029696667016854, 1);
  sqcRYGate(q, 0.006128119382285746, 2);
  sqcRZGate(q, -3.122976902794843, 2);
  sqcRYGate(q, 0.009244374439298184, 3);
  sqcRZGate(q, -1.0998826973012794, 3);
  sqcRYGate(q, -2.595618188965551, 4);
  sqcRZGate(q, -2.522730331290916, 4);
  sqcRYGate(q, -3.1274524341190366, 5);
  sqcRZGate(q, 0.31886452907596935, 5);
  sqcRYGate(q, -0.0409862266883398, 6);
  sqcRZGate(q, 2.331634720030032, 6);
  sqcRYGate(q, 1.7343036589981542, 7);
  sqcRZGate(q, -0.28759943742965155, 7);
  sqcRYGate(q, -3.081115493140918, 8);
  sqcRZGate(q, -1.6105781821812766, 8);
  sqcRYGate(q, -2.9152686435866317, 9);
  sqcRZGate(q, -1.5502834807456654, 9);
  sqcRYGate(q, -1.882271702874025, 10);
  sqcRZGate(q, 2.292093017592154, 10);
  sqcRYGate(q, 1.128935985578195, 11);
  sqcRZGate(q, -2.2184706225272395, 11);
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
  sqcRYGate(q, -2.3127174526579304, 0);
  sqcRZGate(q, 2.3511231011741778, 0);
  sqcRYGate(q, -0.058070939211864125, 1);
  sqcRZGate(q, 2.9121693585772963, 1);
  sqcRYGate(q, -0.04509599893616873, 2);
  sqcRZGate(q, 1.7042337917445742, 2);
  sqcRYGate(q, -2.2010721635353665, 3);
  sqcRZGate(q, 2.9156414777732005, 3);
  sqcRYGate(q, 0.21716969651176132, 4);
  sqcRZGate(q, -3.0653269118508133, 4);
  sqcRYGate(q, -1.40879012102948, 5);
  sqcRZGate(q, -0.6641600969752735, 5);
  sqcRYGate(q, 0.01860874542431823, 6);
  sqcRZGate(q, -1.2720270820173616, 6);
  sqcRYGate(q, 2.990231132491584, 7);
  sqcRZGate(q, -1.1992035828487728, 7);
  sqcRYGate(q, 0.023329393126403572, 8);
  sqcRZGate(q, -1.9339026491524063, 8);
  sqcRYGate(q, -2.250263312129368, 9);
  sqcRZGate(q, -0.8208237774979601, 9);
  sqcRYGate(q, 2.5956798258117586, 10);
  sqcRZGate(q, -0.5859546432188255, 10);
  sqcRYGate(q, -0.12598102510893572, 11);
  sqcRZGate(q, 0.6193928288317867, 11);
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
  sqcRYGate(q, -1.4079917279582674, 0);
  sqcRZGate(q, 1.5842604587915996, 0);
  sqcRYGate(q, 2.06249705460227, 1);
  sqcRZGate(q, -1.6470474723308333, 1);
  sqcRYGate(q, 3.125487158730324, 2);
  sqcRZGate(q, 0.3670093750937032, 2);
  sqcRYGate(q, 3.141589191779542, 3);
  sqcRZGate(q, -0.3349922625000103, 3);
  sqcRYGate(q, 0.007177668785849357, 4);
  sqcRZGate(q, -2.028751661512154, 4);
  sqcRYGate(q, -3.118813507052281, 5);
  sqcRZGate(q, 2.0310095119661704, 5);
  sqcRYGate(q, -0.006130946646076829, 6);
  sqcRZGate(q, -2.985274295995474, 6);
  sqcRYGate(q, 1.0015448861285954, 7);
  sqcRZGate(q, 2.9699202801215754, 7);
  sqcRYGate(q, 0.13424901946043344, 8);
  sqcRZGate(q, -2.478527799368119, 8);
  sqcRYGate(q, 3.139974002087642, 9);
  sqcRZGate(q, -1.0086065297225824, 9);
  sqcRYGate(q, 3.019076445417279, 10);
  sqcRZGate(q, 1.0921127242356785, 10);
  sqcRYGate(q, -0.4206049571419708, 11);
  sqcRZGate(q, 2.2114010986656734, 11);
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
  sqcRYGate(q, -0.5829147367810096, 0);
  sqcRZGate(q, -1.0883607873613848, 0);
  sqcRYGate(q, -0.24343904605104427, 1);
  sqcRZGate(q, 1.0423727244203727, 1);
  sqcRYGate(q, 1.89463434457054, 2);
  sqcRZGate(q, -1.0736703058010555, 2);
  sqcRYGate(q, 2.356759565861731, 3);
  sqcRZGate(q, -0.539680336693964, 3);
  sqcRYGate(q, 3.0026239275038735, 4);
  sqcRZGate(q, 0.42908175637266405, 4);
  sqcRYGate(q, 1.9710005727449378, 5);
  sqcRZGate(q, -2.8746160717603018, 5);
  sqcRYGate(q, -3.1261563613766676, 6);
  sqcRZGate(q, -0.5348443567472609, 6);
  sqcRYGate(q, 0.06941215816848878, 7);
  sqcRZGate(q, -0.5368576408999122, 7);
  sqcRYGate(q, -2.1360343485945164, 8);
  sqcRZGate(q, 2.8987961408968768, 8);
  sqcRYGate(q, -0.43327150259378566, 9);
  sqcRZGate(q, 0.6129440401818281, 9);
  sqcRYGate(q, 0.08999050092035996, 10);
  sqcRZGate(q, -0.8388496645487793, 10);
  sqcRYGate(q, 1.637216820455744, 11);
  sqcRZGate(q, 3.1295243767714953, 11);

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
