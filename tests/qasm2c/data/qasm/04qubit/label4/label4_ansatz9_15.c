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

  sqcRYGate(q, -1.5789360029993047, 0);
  sqcRYGate(q, -1.1189276948328366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19077542405447537, 0);
  sqcRYGate(q, -2.8033047377616476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7760802410953525, 2);
  sqcRYGate(q, -2.099554507395104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5282005359262314, 2);
  sqcRYGate(q, 1.732211715660256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5782918440573785, 0);
  sqcRYGate(q, -3.0361896866540157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8816290115418285, 0);
  sqcRYGate(q, 0.45077539029598845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5256474004542158, 1);
  sqcRYGate(q, 2.3775471794389165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4394963744330891, 1);
  sqcRYGate(q, 0.9492563486787171, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06055301354104015, 0);
  sqcRYGate(q, 1.5351986656406913, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8140240381655788, 0);
  sqcRYGate(q, 2.67616482888711, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.03591533106773426, 1);
  sqcRYGate(q, -0.08867765791936369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4353846830861503, 1);
  sqcRYGate(q, 2.2542250808650923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5803054765619827, 0);
  sqcRYGate(q, 1.3169667951834987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4872556749697052, 0);
  sqcRYGate(q, -2.0296191002445365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1994972721845194, 2);
  sqcRYGate(q, -1.9411939821135284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3835662582360732, 2);
  sqcRYGate(q, 1.4936752131256528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6386567530770986, 0);
  sqcRYGate(q, -1.5448567098360484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9907606073984345, 0);
  sqcRYGate(q, 0.2537680689949404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.195420397397284, 1);
  sqcRYGate(q, 1.5062749211993511, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.141543890803315, 1);
  sqcRYGate(q, 1.4605707329782063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9224271472533436, 0);
  sqcRYGate(q, -2.206074642997292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.43337610065386395, 0);
  sqcRYGate(q, 2.302571491470044, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.934202652772623, 1);
  sqcRYGate(q, 0.1785917281869438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0009218544733756, 1);
  sqcRYGate(q, 2.387696362672137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19947636566893076, 0);
  sqcRYGate(q, 0.1566588062515999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9635682353014228, 0);
  sqcRYGate(q, -0.29909619177631086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7885072718528552, 2);
  sqcRYGate(q, 3.1200636240287145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.075303112022072, 2);
  sqcRYGate(q, -1.38232421800778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.024852033251484332, 0);
  sqcRYGate(q, 3.0725538485371366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9110747210872088, 0);
  sqcRYGate(q, 2.109205581275175, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8549303297167263, 1);
  sqcRYGate(q, -1.4187190121381992, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1187498001435507, 1);
  sqcRYGate(q, 2.121747311785284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.20200236188522133, 0);
  sqcRYGate(q, -1.2378041534426192, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.004274411292866986, 0);
  sqcRYGate(q, -0.04131680398863161, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0377635506467753, 1);
  sqcRYGate(q, -2.2170830467115774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1370094380592066, 1);
  sqcRYGate(q, -2.9994801098534043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5497603673360496, 0);
  sqcRYGate(q, 1.3574279812352597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4909576294373137, 0);
  sqcRYGate(q, -2.753453070666324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.683705082997293, 2);
  sqcRYGate(q, 0.39809043284024354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8760555003410626, 2);
  sqcRYGate(q, 1.2345746181843191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5778495392685632, 0);
  sqcRYGate(q, 1.1822569801582703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5267840560899538, 0);
  sqcRYGate(q, 0.41070238938245546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8629470255924652, 1);
  sqcRYGate(q, 0.9721636885904691, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8830540286678867, 1);
  sqcRYGate(q, -2.321021600375168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1323364238741842, 0);
  sqcRYGate(q, 1.6987958409359045, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5026091328134683, 0);
  sqcRYGate(q, -1.7563173006403705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5803514492761297, 1);
  sqcRYGate(q, -1.7903483134476668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6528925348728816, 1);
  sqcRYGate(q, -2.5017830204075087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9487230773017234, 0);
  sqcRYGate(q, -0.6718014818407037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7816607971046858, 0);
  sqcRYGate(q, 0.18426929287327143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.385106372150311, 2);
  sqcRYGate(q, -2.518575645771683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9341514057230182, 2);
  sqcRYGate(q, 2.8802378693300668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.659432955861158, 0);
  sqcRYGate(q, -1.7986161470650337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4816070912169739, 0);
  sqcRYGate(q, -2.5678909461794523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4906072467823748, 1);
  sqcRYGate(q, -3.1143222922325817, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7481714626467554, 1);
  sqcRYGate(q, 2.114408866078101, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0140298487837374, 0);
  sqcRYGate(q, 2.1134757646718114, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9869486655126734, 0);
  sqcRYGate(q, 2.3354071144941355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.22374318075521982, 1);
  sqcRYGate(q, 2.5380902854702514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.670666105982192, 1);
  sqcRYGate(q, -1.2769546181459281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6621629671778919, 0);
  sqcRYGate(q, -2.7926125233403893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8036049914244303, 0);
  sqcRYGate(q, 2.3541927112099312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5278635723812721, 2);
  sqcRYGate(q, -2.703400866720579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5126210201639205, 2);
  sqcRYGate(q, 2.91501059161466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5729027557431596, 0);
  sqcRYGate(q, 0.8347468172477148, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1333253267144365, 0);
  sqcRYGate(q, -0.9410856274337515, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.206980572241207, 1);
  sqcRYGate(q, 0.3029382322124432, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9934127413550282, 1);
  sqcRYGate(q, 0.7171321151157082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7270003179612772, 0);
  sqcRYGate(q, 0.793576862380208, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8018812596936256, 0);
  sqcRYGate(q, 1.1896974689514268, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3092981566987058, 1);
  sqcRYGate(q, 1.615554927555637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8396030725352022, 1);
  sqcRYGate(q, -1.874443983422277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.96502293328808, 0);
  sqcRYGate(q, 3.1283552384215794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4460816937505442, 0);
  sqcRYGate(q, 3.001112000466683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.897480257371015, 2);
  sqcRYGate(q, 1.7133625409251805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9112684483670529, 2);
  sqcRYGate(q, -1.959642964111577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6041038482723695, 0);
  sqcRYGate(q, 3.110115292573938, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.207611445278235, 0);
  sqcRYGate(q, 1.9640401586070109, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3399316840264355, 1);
  sqcRYGate(q, -1.79405253815386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4628737027670935, 1);
  sqcRYGate(q, -0.8667252465631169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.108753679477311, 0);
  sqcRYGate(q, 0.9696334152607216, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.12214057537812917, 0);
  sqcRYGate(q, -1.3515718076677516, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.717600938534453, 1);
  sqcRYGate(q, -1.6853757784275443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4559689287010551, 1);
  sqcRYGate(q, -2.33158866367313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2092480742767284, 0);
  sqcRYGate(q, -2.779794846446426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5373846170653714, 0);
  sqcRYGate(q, 1.8739282407338054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9862206502989315, 2);
  sqcRYGate(q, -0.9211625819728635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38449640479206365, 2);
  sqcRYGate(q, -2.9671233860958632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2587651378770177, 0);
  sqcRYGate(q, -2.296979402359828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3848067603546691, 0);
  sqcRYGate(q, 2.5354951208313397, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24096667019791876, 1);
  sqcRYGate(q, -0.9914357015360774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49077172066572317, 1);
  sqcRYGate(q, 1.283849592783329, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8319064886328285, 0);
  sqcRYGate(q, -0.7004507490114806, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8812480577412087, 0);
  sqcRYGate(q, -2.888274242872847, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0949379676413407, 1);
  sqcRYGate(q, -1.135638897552385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.549744413714942, 1);
  sqcRYGate(q, -2.3451998241349568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4544748446724913, 0);
  sqcRYGate(q, -1.8853089123963462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12246055324473663, 0);
  sqcRYGate(q, 0.55636406649554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6146802315249695, 2);
  sqcRYGate(q, 1.034406402249778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6902479499884357, 2);
  sqcRYGate(q, -0.16479996994442606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1616903317615161, 0);
  sqcRYGate(q, -3.1219893451071323, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05906676418254805, 0);
  sqcRYGate(q, -0.782463636250423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5261966655528276, 1);
  sqcRYGate(q, -0.40747029059089707, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.675079891859009, 1);
  sqcRYGate(q, -3.075795233548674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7186075069720514, 0);
  sqcRYGate(q, 0.7880475111060337, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2431073722054897, 0);
  sqcRYGate(q, 0.3834905149301754, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.884573120899562, 1);
  sqcRYGate(q, 1.5048129167756668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7179108702732986, 1);
  sqcRYGate(q, -0.4737207925663078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6174370220941476, 0);
  sqcRYGate(q, -2.3780947546516025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0072677214002352, 0);
  sqcRYGate(q, -0.6209110443956449, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9572600437534495, 2);
  sqcRYGate(q, -0.25226662363638575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.679947375940481, 2);
  sqcRYGate(q, 3.114443345000266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5027706076879959, 0);
  sqcRYGate(q, -3.017303841343396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.948643290620236, 0);
  sqcRYGate(q, -2.809061659495732, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2557805789230567, 1);
  sqcRYGate(q, 1.342265938638274, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9844116998688954, 1);
  sqcRYGate(q, 1.8700164018315655, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17645205189292307, 0);
  sqcRYGate(q, 0.8910506117549976, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5834774320029703, 0);
  sqcRYGate(q, -2.3358298189413165, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.46889414318129635, 1);
  sqcRYGate(q, 2.0917134901881766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5428675821634474, 1);
  sqcRYGate(q, -1.0083330216683066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.45452860812731, 0);
  sqcRYGate(q, -2.7075386434928266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.076256986948268, 0);
  sqcRYGate(q, 0.27860739257013745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2988826060372802, 2);
  sqcRYGate(q, 2.472207176509296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0314106995935974, 2);
  sqcRYGate(q, -1.8485673381255159, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.673395309224994, 0);
  sqcRYGate(q, 0.24952766497923573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.35520604172822057, 0);
  sqcRYGate(q, -1.785509735376773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7814511303187803, 1);
  sqcRYGate(q, 0.5927408194226542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1165590068742217, 1);
  sqcRYGate(q, -0.6084951056078856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6936550654529663, 0);
  sqcRYGate(q, 2.3413695282732, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.885802705824145, 0);
  sqcRYGate(q, 1.6518353532131143, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.257815531993283, 1);
  sqcRYGate(q, 2.8869201556126813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1280238565336442, 1);
  sqcRYGate(q, -2.867345316023777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6074916530511459, 0);
  sqcRYGate(q, -2.1753712557105036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3707679121054541, 0);
  sqcRYGate(q, 0.9358735977940164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37077339407668997, 2);
  sqcRYGate(q, 2.390807268581051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.600130212159031, 2);
  sqcRYGate(q, -0.3386613798180305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8805651819413363, 0);
  sqcRYGate(q, 1.516525775946092, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0347657744879921, 0);
  sqcRYGate(q, 1.1173843312189442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3768108494285205, 1);
  sqcRYGate(q, -0.8908402299752405, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.576798417839802, 1);
  sqcRYGate(q, 2.5003050738173447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1633742393366666, 0);
  sqcRYGate(q, 2.9328880727484643, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6076658829337115, 0);
  sqcRYGate(q, 1.4038413333672217, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.987990705163342, 1);
  sqcRYGate(q, -1.3757979490970706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.049466893392295, 1);
  sqcRYGate(q, 2.2924946217398494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08995980540978796, 0);
  sqcRYGate(q, -2.665140919278176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.41640651751326, 0);
  sqcRYGate(q, -2.312320142484483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7161438936560778, 2);
  sqcRYGate(q, 0.5304530823482878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2183941504675215, 2);
  sqcRYGate(q, 0.6427012461034431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5283410954425216, 0);
  sqcRYGate(q, -2.9971460524833207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9312929031466046, 0);
  sqcRYGate(q, 1.6012933014180035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6796441847336077, 1);
  sqcRYGate(q, -0.3335398040963898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3456364127694158, 1);
  sqcRYGate(q, -1.4042434548154095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3839155499553772, 0);
  sqcRYGate(q, -2.8084768252912653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.880943444223286, 0);
  sqcRYGate(q, 0.6826062379093729, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5696699124504692, 1);
  sqcRYGate(q, -0.252105118067509, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.149423655450508, 1);
  sqcRYGate(q, 0.599310459446988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6175424675096961, 0);
  sqcRYGate(q, -1.7929979150111086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0901395409487318, 0);
  sqcRYGate(q, -2.5372150680763195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8607350292427542, 2);
  sqcRYGate(q, 0.3768126294976657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0880126056699937, 2);
  sqcRYGate(q, 0.020698322028401342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0763333573170075, 0);
  sqcRYGate(q, 1.2839604940564913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7287530970188048, 0);
  sqcRYGate(q, 1.2174207549569598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8184237507474723, 1);
  sqcRYGate(q, -1.7063715385372802, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.250330145569764, 1);
  sqcRYGate(q, -2.0464822063017984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.248953296931223, 0);
  sqcRYGate(q, 1.459674215257257, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7471865741816999, 0);
  sqcRYGate(q, 2.602776262543602, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.217779021435792, 1);
  sqcRYGate(q, -1.440309859130269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.964395472484945, 1);
  sqcRYGate(q, -2.995481162405247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.136066266613371, 0);
  sqcRYGate(q, -0.5818244686629077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7989184131283543, 0);
  sqcRYGate(q, 2.949315272208121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16550316391984232, 2);
  sqcRYGate(q, -0.019325898121830498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1081643209150283, 2);
  sqcRYGate(q, -0.4579188684927269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20960696474467236, 0);
  sqcRYGate(q, 2.498552159584724, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.843888719697649, 0);
  sqcRYGate(q, 2.218108242507716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2949094814195208, 1);
  sqcRYGate(q, 0.7774771835618848, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.554746940203991, 1);
  sqcRYGate(q, 0.9816245236381721, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.031339293952406, 0);
  sqcRYGate(q, -0.5347447655276939, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2656223360045159, 0);
  sqcRYGate(q, 1.152244642694182, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8452858761639275, 1);
  sqcRYGate(q, -0.5936246441798632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9635323412617722, 1);
  sqcRYGate(q, 3.081512324204742, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9898772706180603, 0);
  sqcRYGate(q, 2.8918243324298927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3575888559878435, 0);
  sqcRYGate(q, -0.765184316481867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30213104482560826, 2);
  sqcRYGate(q, -3.0168646939852732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1706097278468723, 2);
  sqcRYGate(q, 2.4395918343454834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.525499206906953, 0);
  sqcRYGate(q, -2.2168035147557457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.196018322918884, 0);
  sqcRYGate(q, -0.5722827816046526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9551942612749478, 1);
  sqcRYGate(q, 0.9766891281788561, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9751503667533248, 1);
  sqcRYGate(q, 1.4847155235758223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5587635337879059, 0);
  sqcRYGate(q, 0.3159977366960203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7193362154514373, 0);
  sqcRYGate(q, 2.3554370566256044, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8932569166684083, 1);
  sqcRYGate(q, 2.547639504237548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7226150478457418, 1);
  sqcRYGate(q, 3.094431241054688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38418727560174853, 0);
  sqcRYGate(q, 1.1505888844684824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4740730759775058, 0);
  sqcRYGate(q, 2.301242546011001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2525572630368877, 2);
  sqcRYGate(q, 1.7735482142326982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.725395123390074, 2);
  sqcRYGate(q, -1.9431009612882213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6931165101009311, 0);
  sqcRYGate(q, 1.0172453535351282, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5911667099984935, 0);
  sqcRYGate(q, -0.8402765114289394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3901333452684872, 1);
  sqcRYGate(q, 2.9447488879729615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6304296724786056, 1);
  sqcRYGate(q, -0.5283426660691539, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5510932348050508, 0);
  sqcRYGate(q, -0.9267846425286592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.945912091945609, 0);
  sqcRYGate(q, 0.10763812503586907, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5795212774080527, 1);
  sqcRYGate(q, -2.8870451992190973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3970608592734557, 1);
  sqcRYGate(q, -1.4266502488204642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07584970459842566, 0);
  sqcRYGate(q, -2.8767116311418173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17495527084448437, 0);
  sqcRYGate(q, 0.1253654949658971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.113271455222738, 2);
  sqcRYGate(q, 1.7957166739200454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9419594880293412, 2);
  sqcRYGate(q, -2.276321907928372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.566392297149059, 0);
  sqcRYGate(q, 0.48189944410642593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0720384869542965, 0);
  sqcRYGate(q, -2.5559170386771504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07554806091787736, 1);
  sqcRYGate(q, 0.5990863716338967, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.995743301612439, 1);
  sqcRYGate(q, -0.14326645473334537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4891815202880734, 0);
  sqcRYGate(q, 1.2911342737624176, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9199806923152236, 0);
  sqcRYGate(q, 0.9377421583191247, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.290969418161465, 1);
  sqcRYGate(q, -1.0134796936410462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0534884278772427, 1);
  sqcRYGate(q, 0.25549928514769776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3694586978261061, 0);
  sqcRYGate(q, 0.6770574581584963, 1);
  sqcRYGate(q, -1.3810302314559628, 2);
  sqcRYGate(q, 0.6158584214751269, 3);

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
