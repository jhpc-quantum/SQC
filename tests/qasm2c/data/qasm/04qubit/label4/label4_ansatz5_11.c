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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.625423421773209, 0);
  sqcRYGate(q, -1.8152210394293897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4789898350255308, 0);
  sqcRYGate(q, 0.6072262007778998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.28903170311548, 2);
  sqcRYGate(q, 2.4881981356748475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.288982431176325, 2);
  sqcRYGate(q, 2.3285762085378523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9505925241391749, 1);
  sqcRYGate(q, 2.8729501509164295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3798617917296399, 1);
  sqcRYGate(q, 2.220662774737066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6185478080415043, 0);
  sqcRYGate(q, 2.780769286825912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3821370514867994, 0);
  sqcRYGate(q, 1.6984471363115063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9990521314886873, 2);
  sqcRYGate(q, -0.14000454547943075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.750676838099891, 2);
  sqcRYGate(q, 1.8802952973715232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.089068292863568, 1);
  sqcRYGate(q, 2.6158627198000652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8652276901985694, 1);
  sqcRYGate(q, -2.873140344711653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.427639041367697, 0);
  sqcRYGate(q, 2.5160249972817343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.493576976746023, 0);
  sqcRYGate(q, -3.0251473111678626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.593624321570976, 2);
  sqcRYGate(q, 1.3374148349802066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.88845718666633, 2);
  sqcRYGate(q, 2.301309521398451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0674104376370286, 1);
  sqcRYGate(q, -2.366409312594541, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9269214881852708, 1);
  sqcRYGate(q, -0.10340250583260269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8756671685875599, 0);
  sqcRYGate(q, -2.938242980402452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9348633140004778, 0);
  sqcRYGate(q, 0.12311472990766158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0518535914436953, 2);
  sqcRYGate(q, -1.797702294804938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5469280510297018, 2);
  sqcRYGate(q, -2.9929331787774003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0516361291421923, 1);
  sqcRYGate(q, -2.4900180395633402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2259415553889372, 1);
  sqcRYGate(q, -2.168415128308661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07299832611889842, 0);
  sqcRYGate(q, -1.1172213907739255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1018463816857547, 0);
  sqcRYGate(q, 3.0010884842367593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4542649481530454, 2);
  sqcRYGate(q, 1.6060681160511807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0606791217341915, 2);
  sqcRYGate(q, 0.4460426889901209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4734920433030636, 1);
  sqcRYGate(q, -0.8256917510930284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8783828074301234, 1);
  sqcRYGate(q, 1.3665618150641352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1628221334747062, 0);
  sqcRYGate(q, -0.03924969737532802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9731899189529596, 0);
  sqcRYGate(q, 1.0678650568805335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9855848285557585, 2);
  sqcRYGate(q, -1.3653098255909963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5770455200000377, 2);
  sqcRYGate(q, -2.6098055499250106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1085670187470935, 1);
  sqcRYGate(q, 0.6453591061461141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7836453329493036, 1);
  sqcRYGate(q, 2.262679885410243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03561900615556989, 0);
  sqcRYGate(q, 1.8953170404213866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.080558792507593, 0);
  sqcRYGate(q, 1.2509061426649808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8337371090141827, 2);
  sqcRYGate(q, -0.06446285630279709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8187556225692467, 2);
  sqcRYGate(q, -2.330136273346269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7407526226464656, 1);
  sqcRYGate(q, 2.3796264819718895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7936854941075246, 1);
  sqcRYGate(q, 1.3684909659655746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6815913439553585, 0);
  sqcRYGate(q, -1.173851518136658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5598104826122651, 0);
  sqcRYGate(q, -2.5455763838748613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.076261327504704, 2);
  sqcRYGate(q, -3.0143615853571117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5996157904177186, 2);
  sqcRYGate(q, -1.3896191362041295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8284285401991179, 1);
  sqcRYGate(q, -1.8939958197916331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4097018861168442, 1);
  sqcRYGate(q, 2.248397971831576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7909758246532901, 0);
  sqcRYGate(q, 0.15959001199542017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9782198626103673, 0);
  sqcRYGate(q, 0.7373578178466764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6628483638014401, 2);
  sqcRYGate(q, 1.8230677233956978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.38293752919602575, 2);
  sqcRYGate(q, -2.666720631990359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3420911419290906, 1);
  sqcRYGate(q, -2.961351557201056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.27996420287465895, 1);
  sqcRYGate(q, -1.2702942218743694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5835901003969619, 0);
  sqcRYGate(q, 1.638799439293699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1656946227491316, 0);
  sqcRYGate(q, -2.9450928968687746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5707394920649383, 2);
  sqcRYGate(q, 2.2699222227059543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6988962257992752, 2);
  sqcRYGate(q, -0.7811100813013407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6659589672754955, 1);
  sqcRYGate(q, 0.4908511653354069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.901027721052794, 1);
  sqcRYGate(q, 1.2490256207323356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.688491472174216, 0);
  sqcRYGate(q, 2.0941717059817284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.803555075040632, 0);
  sqcRYGate(q, 1.4193403217905782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7127836892995933, 2);
  sqcRYGate(q, -2.9339964538979566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.568349494287026, 2);
  sqcRYGate(q, 2.287459405069431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11766358406334465, 1);
  sqcRYGate(q, -3.0424708213792675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04472723793755495, 1);
  sqcRYGate(q, -0.04724277537100807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0750611748801877, 0);
  sqcRYGate(q, 0.025735510366978073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6422274926893159, 0);
  sqcRYGate(q, -3.067610801387285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9099357181657277, 2);
  sqcRYGate(q, -0.2964058587686507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5687820201355747, 2);
  sqcRYGate(q, 2.1245316473497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7405206805635469, 1);
  sqcRYGate(q, -0.3098515688391401, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.607241260425366, 1);
  sqcRYGate(q, -2.6703849318582242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.135616975157789, 0);
  sqcRYGate(q, -2.747286843670317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6975269652975591, 0);
  sqcRYGate(q, 1.2172884165735525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6623014004353713, 2);
  sqcRYGate(q, -2.6759618990796543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7583682003488621, 2);
  sqcRYGate(q, -0.09003305710672826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.140334008860921, 1);
  sqcRYGate(q, 0.48658214362132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0329343111775584, 1);
  sqcRYGate(q, 0.6824192704499279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5219292219170704, 0);
  sqcRYGate(q, -1.0518677690359157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.062918079696035, 0);
  sqcRYGate(q, -1.959728695764997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6297315509983104, 2);
  sqcRYGate(q, -1.3018902637020844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6721214046899919, 2);
  sqcRYGate(q, 0.5540674800556094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4138316968716422, 1);
  sqcRYGate(q, -0.1632206485441685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4773483043186902, 1);
  sqcRYGate(q, 2.185899004682592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3875785673269436, 0);
  sqcRYGate(q, -0.049850212274576755, 1);
  sqcRYGate(q, -0.8535961938990927, 2);
  sqcRYGate(q, -1.6170311698696997, 3);

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
