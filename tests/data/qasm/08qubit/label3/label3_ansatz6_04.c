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

  sqcRYGate(q, -2.8647773869110007, 0);
  sqcRYGate(q, -1.6223164897541382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.910221442429402, 0);
  sqcRYGate(q, 0.862128614464684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5173959572735076, 1);
  sqcRYGate(q, 2.7309185250699066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.382407451568553, 1);
  sqcRYGate(q, 0.48607983950941325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.646891095559409, 2);
  sqcRYGate(q, -3.03582579305833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.863306931481418, 2);
  sqcRYGate(q, 2.9059005881040063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0848412716251412, 3);
  sqcRYGate(q, 2.64451070276315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1009843342274612, 3);
  sqcRYGate(q, -1.944810545509032, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9298405026158423, 4);
  sqcRYGate(q, -1.0819176321244217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4739553859967596, 4);
  sqcRYGate(q, 1.7859208983515948, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.114578189716526, 5);
  sqcRYGate(q, 1.6922780063703051, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7830733301733153, 5);
  sqcRYGate(q, -0.49482736557922724, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.060835041190397, 6);
  sqcRYGate(q, 2.8957944939467097, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.14182040809392935, 6);
  sqcRYGate(q, 1.0112048217530578, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6048133978350254, 0);
  sqcRYGate(q, -2.299223351968715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07321677750143252, 0);
  sqcRYGate(q, 0.05816156474507839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7094389581499954, 1);
  sqcRYGate(q, 0.06216669916803408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5491824243406445, 1);
  sqcRYGate(q, 2.244942921109466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.763381249183212, 2);
  sqcRYGate(q, -0.34594546382371494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1856046073362645, 2);
  sqcRYGate(q, -2.9641180905329536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11235985291150477, 3);
  sqcRYGate(q, -0.11649096872209785, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.587326204049155, 3);
  sqcRYGate(q, 1.9428461375184358, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8439732728670886, 4);
  sqcRYGate(q, -2.8812215932944842, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.267972326154113, 4);
  sqcRYGate(q, 0.7714688127123273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0256970283889109, 5);
  sqcRYGate(q, -0.5101532667369151, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5274443695222784, 5);
  sqcRYGate(q, -0.15475852597885265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3195796767915242, 6);
  sqcRYGate(q, -0.6039998394278436, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0266898415648784, 6);
  sqcRYGate(q, 2.822352604122301, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6123034912793104, 0);
  sqcRYGate(q, -3.055361371482691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.002814824116036727, 0);
  sqcRYGate(q, 1.5354919286575945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3743856344821133, 1);
  sqcRYGate(q, 0.519191686485752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.612922482451288, 1);
  sqcRYGate(q, -0.7571230959741363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4543700231134347, 2);
  sqcRYGate(q, -0.5031437287126019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.25665658834132, 2);
  sqcRYGate(q, 2.8268696689792554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8576506482788075, 3);
  sqcRYGate(q, 0.17515005585860846, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.415270401947069, 3);
  sqcRYGate(q, -2.4109401485421262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.009632490501555761, 4);
  sqcRYGate(q, -1.403163174638442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.384437865168801, 4);
  sqcRYGate(q, 1.4362625485034268, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.954215803331021, 5);
  sqcRYGate(q, 2.58631809659129, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5417881207503283, 5);
  sqcRYGate(q, 0.19196815308470186, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1288776093045847, 6);
  sqcRYGate(q, 2.35601402243481, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.576500788762499, 6);
  sqcRYGate(q, 2.2959963664408716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.018150776729052076, 0);
  sqcRYGate(q, 2.6275784616236595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1413440279717038, 0);
  sqcRYGate(q, -2.2699196797693557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20216701876037957, 1);
  sqcRYGate(q, 1.4566482019705906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4566390525073291, 1);
  sqcRYGate(q, -1.7992092486744717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5921010903393409, 2);
  sqcRYGate(q, 0.9589249726737963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8165119079715497, 2);
  sqcRYGate(q, 1.552554327085729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6088249697310406, 3);
  sqcRYGate(q, -0.41730683037755717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5006747310745112, 3);
  sqcRYGate(q, 0.23369509345954498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3700726914221575, 4);
  sqcRYGate(q, -1.423206131624014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.754541597106504, 4);
  sqcRYGate(q, 1.6703010626765973, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.063798447242391, 5);
  sqcRYGate(q, 0.8079892907374564, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.358330106077714, 5);
  sqcRYGate(q, 2.6286668901652575, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.734809921208103, 6);
  sqcRYGate(q, -2.316883818423016, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5747742473983666, 6);
  sqcRYGate(q, 2.8692018552154543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.939571105809414, 0);
  sqcRYGate(q, -2.2993838612360467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.005067441970166217, 0);
  sqcRYGate(q, 0.0087162845729587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0867402606987841, 1);
  sqcRYGate(q, -0.9042866117960923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.885763520063672, 1);
  sqcRYGate(q, 2.8706603547228684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2619249172878337, 2);
  sqcRYGate(q, 0.9240043101261861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8703281552019444, 2);
  sqcRYGate(q, 0.5926114304093061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5130357034048041, 3);
  sqcRYGate(q, -1.8525591108810577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.160247087378315, 3);
  sqcRYGate(q, 0.8596385932518972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.297069153956686, 4);
  sqcRYGate(q, -0.3986655258778091, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.225401328117238, 4);
  sqcRYGate(q, 2.1935818524502992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28446321360303156, 5);
  sqcRYGate(q, -2.7699746401795267, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7160201806850335, 5);
  sqcRYGate(q, 1.621544514866874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.914627945661887, 6);
  sqcRYGate(q, -2.2263302906916205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1612850234607492, 6);
  sqcRYGate(q, -1.691123254193894, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.67407971704716, 0);
  sqcRYGate(q, -0.9034320611557961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5701299519776128, 0);
  sqcRYGate(q, 3.132006996295646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0027941977357150167, 1);
  sqcRYGate(q, -1.5640919342573418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5689065775107025, 1);
  sqcRYGate(q, 1.5835021027948555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.004660098796716916, 2);
  sqcRYGate(q, 1.0341454927382552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5596663403948339, 2);
  sqcRYGate(q, -3.003239934684868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5712587049244195, 3);
  sqcRYGate(q, 1.2843406179058467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1409300864521636, 3);
  sqcRYGate(q, -1.5067624307862104, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4244087523513733, 4);
  sqcRYGate(q, -1.481400000876804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2055090271970745, 4);
  sqcRYGate(q, 3.1137719642661774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0627439835788195, 5);
  sqcRYGate(q, -0.4054115811654137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6299326036101967, 5);
  sqcRYGate(q, -2.789653472634759, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1648545892381765, 6);
  sqcRYGate(q, -2.993391474935627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3008658087969427, 6);
  sqcRYGate(q, 2.7356423310789624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10800211732456153, 0);
  sqcRYGate(q, 1.1905358056269835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5705354108259701, 0);
  sqcRYGate(q, 2.8278945757218996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0291671752271143, 1);
  sqcRYGate(q, -1.5646523907520704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7982609710173527, 1);
  sqcRYGate(q, 0.14753641475009882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5695876860803928, 2);
  sqcRYGate(q, 0.18108782330085316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.071246018888999, 2);
  sqcRYGate(q, -3.080459170523821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17886282275996826, 3);
  sqcRYGate(q, -0.4489997980735394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5703019320983005, 3);
  sqcRYGate(q, -0.16884638295632115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.570771580809282, 4);
  sqcRYGate(q, 1.0717619912573344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5699873242747273, 4);
  sqcRYGate(q, 3.0137453398134557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5715379602973785, 5);
  sqcRYGate(q, -1.787917460105036, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5705168968489422, 5);
  sqcRYGate(q, 2.1533356089587414, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8800110305769118, 6);
  sqcRYGate(q, -0.049873233012285745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5701512671828395, 6);
  sqcRYGate(q, -3.141329831032092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5557479900948334, 0);
  sqcRYGate(q, -1.4496316177113862, 1);
  sqcRYGate(q, -1.5634659597905831, 2);
  sqcRYGate(q, -1.5622063073796655, 3);
  sqcRYGate(q, -1.5615639083507584, 4);
  sqcRYGate(q, 1.5773130672659785, 5);
  sqcRYGate(q, -2.871879705344909, 6);
  sqcRYGate(q, -1.5648920270518043, 7);

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
