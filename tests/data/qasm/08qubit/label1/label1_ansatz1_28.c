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

  sqcRYGate(q, -0.305938977802127, 0);
  sqcRZGate(q, -1.2901559552373412, 0);
  sqcRYGate(q, -0.4473347894025599, 1);
  sqcRZGate(q, 1.0264988415765472, 1);
  sqcRYGate(q, -0.4390800978370173, 2);
  sqcRZGate(q, -0.915957389155678, 2);
  sqcRYGate(q, -0.14970965969733552, 3);
  sqcRZGate(q, 2.3452203312176683, 3);
  sqcRYGate(q, 2.014538333855379, 4);
  sqcRZGate(q, -2.4861597796792507, 4);
  sqcRYGate(q, 1.0258340561371684, 5);
  sqcRZGate(q, 0.6671710641730147, 5);
  sqcRYGate(q, 1.6760007600904965, 6);
  sqcRZGate(q, -2.8451050439057917, 6);
  sqcRYGate(q, 0.11921089005977414, 7);
  sqcRZGate(q, -1.435945065605127, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8395753478011536, 0);
  sqcRZGate(q, -1.9789402673105052, 0);
  sqcRYGate(q, -3.124151623757926, 1);
  sqcRZGate(q, 1.9754540294177496, 1);
  sqcRYGate(q, 2.9053084650988708, 2);
  sqcRZGate(q, -0.7955729665083942, 2);
  sqcRYGate(q, 1.2585232996790545, 3);
  sqcRZGate(q, 2.494788536049991, 3);
  sqcRYGate(q, 1.268892714427495, 4);
  sqcRZGate(q, 2.6089317757348303, 4);
  sqcRYGate(q, 0.5135383996591854, 5);
  sqcRZGate(q, -0.5831826730094711, 5);
  sqcRYGate(q, 2.4244586754021427, 6);
  sqcRZGate(q, -0.9350428694256455, 6);
  sqcRYGate(q, -2.686151769255016, 7);
  sqcRZGate(q, 0.4575636167563992, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.16253280948690207, 0);
  sqcRZGate(q, 1.1973928476347524, 0);
  sqcRYGate(q, 0.7647961148427039, 1);
  sqcRZGate(q, 2.5624397086199706, 1);
  sqcRYGate(q, 2.5443365181798763, 2);
  sqcRZGate(q, 2.026255395796497, 2);
  sqcRYGate(q, -2.0118504334839784, 3);
  sqcRZGate(q, 2.364585160504843, 3);
  sqcRYGate(q, -0.11638281990285382, 4);
  sqcRZGate(q, 1.0448478588783354, 4);
  sqcRYGate(q, 2.371129090582475, 5);
  sqcRZGate(q, -1.2880887189794603, 5);
  sqcRYGate(q, -0.5636664665060547, 6);
  sqcRZGate(q, 2.4649652375801767, 6);
  sqcRYGate(q, -2.1141065700729884, 7);
  sqcRZGate(q, -2.030549950980083, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6663540025183794, 0);
  sqcRZGate(q, 1.4693029244871043, 0);
  sqcRYGate(q, -0.02677000002446306, 1);
  sqcRZGate(q, -2.177081292732587, 1);
  sqcRYGate(q, -3.0017967187886323, 2);
  sqcRZGate(q, -0.1430154127747345, 2);
  sqcRYGate(q, 1.2568138760800507, 3);
  sqcRZGate(q, -1.1103535365863346, 3);
  sqcRYGate(q, -0.3513287587598351, 4);
  sqcRZGate(q, 3.0057616415416226, 4);
  sqcRYGate(q, 0.10048994584311809, 5);
  sqcRZGate(q, 2.471646670576521, 5);
  sqcRYGate(q, -0.10318194845997741, 6);
  sqcRZGate(q, -2.40453779594057, 6);
  sqcRYGate(q, -0.992293794838629, 7);
  sqcRZGate(q, -1.3406677536761558, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7014010059021307, 0);
  sqcRZGate(q, -2.5606423417900857, 0);
  sqcRYGate(q, 2.477801670933095, 1);
  sqcRZGate(q, 2.7123874834857453, 1);
  sqcRYGate(q, -2.254600565198496, 2);
  sqcRZGate(q, 1.5173052039321142, 2);
  sqcRYGate(q, 3.0505813917883406, 3);
  sqcRZGate(q, -2.137179547703208, 3);
  sqcRYGate(q, 2.0562619234286803, 4);
  sqcRZGate(q, 0.3554790836279233, 4);
  sqcRYGate(q, 0.7019262259329127, 5);
  sqcRZGate(q, 2.9283436560071716, 5);
  sqcRYGate(q, -2.667307531601318, 6);
  sqcRZGate(q, 0.7320627548749147, 6);
  sqcRYGate(q, -1.596966982450894, 7);
  sqcRZGate(q, -0.5169649333887625, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3094242621097223, 0);
  sqcRZGate(q, 2.75894090174483, 0);
  sqcRYGate(q, 0.479814812437275, 1);
  sqcRZGate(q, -0.08443420777070189, 1);
  sqcRYGate(q, 2.814182386524071, 2);
  sqcRZGate(q, 2.0944233129254513, 2);
  sqcRYGate(q, 0.0033921380190641923, 3);
  sqcRZGate(q, 1.5467906996545686, 3);
  sqcRYGate(q, -2.712020170298583, 4);
  sqcRZGate(q, 1.77568919375738, 4);
  sqcRYGate(q, 0.023610219982208733, 5);
  sqcRZGate(q, -0.44009751038948863, 5);
  sqcRYGate(q, 0.0792739409139143, 6);
  sqcRZGate(q, 0.46504043720290333, 6);
  sqcRYGate(q, 2.3145714667174357, 7);
  sqcRZGate(q, 2.009628285964561, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8047975588407851, 0);
  sqcRZGate(q, -2.760535740531726, 0);
  sqcRYGate(q, -0.06684005351917932, 1);
  sqcRZGate(q, -2.717123047200878, 1);
  sqcRYGate(q, 0.4579678743216107, 2);
  sqcRZGate(q, 0.3140152487078476, 2);
  sqcRYGate(q, -0.37621326276040773, 3);
  sqcRZGate(q, 1.5975711018323864, 3);
  sqcRYGate(q, -2.4508939217175643, 4);
  sqcRZGate(q, 0.04459472397443687, 4);
  sqcRYGate(q, -1.9973246692331188, 5);
  sqcRZGate(q, -0.6757518036384136, 5);
  sqcRYGate(q, 2.586340397273096, 6);
  sqcRZGate(q, 2.853738322066907, 6);
  sqcRYGate(q, -0.9607234902935935, 7);
  sqcRZGate(q, -2.3033688961997614, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1875820021147403, 0);
  sqcRZGate(q, -2.8721914386628997, 0);
  sqcRYGate(q, -2.4332766396798235, 1);
  sqcRZGate(q, -2.630801838614909, 1);
  sqcRYGate(q, -0.21814224738066557, 2);
  sqcRZGate(q, -2.9446204929587667, 2);
  sqcRYGate(q, 0.10025723378297614, 3);
  sqcRZGate(q, 1.268143834372803, 3);
  sqcRYGate(q, -0.07278787090503347, 4);
  sqcRZGate(q, -1.5614488237086306, 4);
  sqcRYGate(q, 0.013558859178289367, 5);
  sqcRZGate(q, 0.25293654805583865, 5);
  sqcRYGate(q, -2.9456605436350336, 6);
  sqcRZGate(q, -1.3703869157936857, 6);
  sqcRYGate(q, 2.7935247893797643, 7);
  sqcRZGate(q, 0.30576269074689666, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4288767881478145, 0);
  sqcRZGate(q, -1.90879216797566, 0);
  sqcRYGate(q, -0.3238930200694818, 1);
  sqcRZGate(q, -1.213196193393081, 1);
  sqcRYGate(q, -0.6971937414348444, 2);
  sqcRZGate(q, 1.7258765522191406, 2);
  sqcRYGate(q, -0.8225338096340158, 3);
  sqcRZGate(q, -1.218463151642184, 3);
  sqcRYGate(q, 2.1133507319029596, 4);
  sqcRZGate(q, 0.03264217326164065, 4);
  sqcRYGate(q, -0.5569416949261257, 5);
  sqcRZGate(q, 1.9829528237121998, 5);
  sqcRYGate(q, 1.0978678992705158, 6);
  sqcRZGate(q, -0.8749986993530038, 6);
  sqcRYGate(q, -2.3336729188793393, 7);
  sqcRZGate(q, -1.6020824067975719, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8200124986584747, 0);
  sqcRZGate(q, -1.8932431062447241, 0);
  sqcRYGate(q, 2.856350652860677, 1);
  sqcRZGate(q, 2.1114539379265818, 1);
  sqcRYGate(q, 2.8620155888049306, 2);
  sqcRZGate(q, -0.07341542426941802, 2);
  sqcRYGate(q, -2.2222878512772173, 3);
  sqcRZGate(q, 1.029458412242814, 3);
  sqcRYGate(q, -2.8798310403672875, 4);
  sqcRZGate(q, -2.1554565825218823, 4);
  sqcRYGate(q, 2.8322223734415353, 5);
  sqcRZGate(q, -1.5716417637563627, 5);
  sqcRYGate(q, -1.6519486154135095, 6);
  sqcRZGate(q, -1.838129506461998, 6);
  sqcRYGate(q, -0.1413707866667835, 7);
  sqcRZGate(q, -1.1113598914686238, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.902630783392728, 0);
  sqcRZGate(q, -0.0659370022012027, 0);
  sqcRYGate(q, -0.3840898023053736, 1);
  sqcRZGate(q, -2.0260994623823128, 1);
  sqcRYGate(q, 0.09535938115736986, 2);
  sqcRZGate(q, 0.9464203116294128, 2);
  sqcRYGate(q, 3.065244586927665, 3);
  sqcRZGate(q, 1.223720194199804, 3);
  sqcRYGate(q, -3.068491933722441, 4);
  sqcRZGate(q, -2.4073431104841134, 4);
  sqcRYGate(q, -2.867592757665353, 5);
  sqcRZGate(q, -2.5527711406520797, 5);
  sqcRYGate(q, -2.428200391286393, 6);
  sqcRZGate(q, 0.7544996190607921, 6);
  sqcRYGate(q, 3.1067622718201733, 7);
  sqcRZGate(q, -2.8772683764128715, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1124379396643693, 0);
  sqcRZGate(q, 0.2947657871416541, 0);
  sqcRYGate(q, 3.1060452171891635, 1);
  sqcRZGate(q, -1.9312942621870235, 1);
  sqcRYGate(q, -1.6957625829774974, 2);
  sqcRZGate(q, 1.760410629301943, 2);
  sqcRYGate(q, 1.3738758575182675, 3);
  sqcRZGate(q, -1.1849988840986496, 3);
  sqcRYGate(q, -0.37970304631867435, 4);
  sqcRZGate(q, 1.4531476656621, 4);
  sqcRYGate(q, -0.2877181253867649, 5);
  sqcRZGate(q, 1.7381456109751836, 5);
  sqcRYGate(q, 1.8096405713375772, 6);
  sqcRZGate(q, -2.6839989575840293, 6);
  sqcRYGate(q, -3.032711907326118, 7);
  sqcRZGate(q, 1.8391939473726584, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.108180659384272, 0);
  sqcRZGate(q, -0.10919470719394386, 0);
  sqcRYGate(q, -0.0696949256218543, 1);
  sqcRZGate(q, -0.8298141882928356, 1);
  sqcRYGate(q, 2.5794377025743325, 2);
  sqcRZGate(q, 1.448690393144803, 2);
  sqcRYGate(q, -0.016562671202994095, 3);
  sqcRZGate(q, -0.7961498826215596, 3);
  sqcRYGate(q, 0.09806780072101623, 4);
  sqcRZGate(q, -1.31388207281678, 4);
  sqcRYGate(q, -0.7177711245030279, 5);
  sqcRZGate(q, -2.5249022357240234, 5);
  sqcRYGate(q, -1.9652089489147357, 6);
  sqcRZGate(q, -2.046764388122414, 6);
  sqcRYGate(q, -2.8157024408640643, 7);
  sqcRZGate(q, 1.4931715868963786, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.240185368375709, 0);
  sqcRZGate(q, -2.5573803565835767, 0);
  sqcRYGate(q, 2.529379372549484, 1);
  sqcRZGate(q, 0.01435528105133352, 1);
  sqcRYGate(q, -2.5325164393118484, 2);
  sqcRZGate(q, 1.7032848200185076, 2);
  sqcRYGate(q, -0.42954101049384263, 3);
  sqcRZGate(q, 2.3169085944175993, 3);
  sqcRYGate(q, -0.22651907866329812, 4);
  sqcRZGate(q, 1.5333063124414839, 4);
  sqcRYGate(q, -2.169758238789557, 5);
  sqcRZGate(q, 1.0021018001256643, 5);
  sqcRYGate(q, -2.418385747365843, 6);
  sqcRZGate(q, -1.2495143601692806, 6);
  sqcRYGate(q, 2.9692057284340345, 7);
  sqcRZGate(q, -1.4934120955200871, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7707131399671285, 0);
  sqcRZGate(q, -2.7446620056845172, 0);
  sqcRYGate(q, 3.0332757204578615, 1);
  sqcRZGate(q, 0.39891753886702824, 1);
  sqcRYGate(q, -0.5835880696486724, 2);
  sqcRZGate(q, 2.3792514590341405, 2);
  sqcRYGate(q, -0.09245390158625799, 3);
  sqcRZGate(q, 0.1755775361320327, 3);
  sqcRYGate(q, -0.12207525694792276, 4);
  sqcRZGate(q, -1.0194878188090002, 4);
  sqcRYGate(q, 2.0543440427985167, 5);
  sqcRZGate(q, -2.7407163339275775, 5);
  sqcRYGate(q, -1.3469747676354038, 6);
  sqcRZGate(q, -1.8248385504815563, 6);
  sqcRYGate(q, -2.8131267823551944, 7);
  sqcRZGate(q, 0.9050142803863928, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.114429803394489, 0);
  sqcRZGate(q, 3.072365490962488, 0);
  sqcRYGate(q, 0.024580808236421177, 1);
  sqcRZGate(q, 2.220349131160983, 1);
  sqcRYGate(q, 1.8359075051121216, 2);
  sqcRZGate(q, 2.5306450131455778, 2);
  sqcRYGate(q, -2.995214687353089, 3);
  sqcRZGate(q, 2.5075453328289963, 3);
  sqcRYGate(q, -2.178580906709231, 4);
  sqcRZGate(q, -0.9383939747729882, 4);
  sqcRYGate(q, 2.5913925609432593, 5);
  sqcRZGate(q, 1.2054555142883214, 5);
  sqcRYGate(q, -2.804990152230899, 6);
  sqcRZGate(q, -0.7307397318394423, 6);
  sqcRYGate(q, 0.30659971466201963, 7);
  sqcRZGate(q, 1.6099793404544906, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8123623396446256, 0);
  sqcRZGate(q, 1.7037908473865415, 0);
  sqcRYGate(q, -0.07491131291526809, 1);
  sqcRZGate(q, 0.5503639477952644, 1);
  sqcRYGate(q, -0.2939939627240208, 2);
  sqcRZGate(q, 1.3721735418361447, 2);
  sqcRYGate(q, 0.019460304152209524, 3);
  sqcRZGate(q, 1.214698080339603, 3);
  sqcRYGate(q, 0.09808123596319845, 4);
  sqcRZGate(q, 3.0362600595249734, 4);
  sqcRYGate(q, -1.6839702236326828, 5);
  sqcRZGate(q, 1.2814392731074777, 5);
  sqcRYGate(q, -0.2009867702405037, 6);
  sqcRZGate(q, -2.8769502069367787, 6);
  sqcRYGate(q, 1.6406317642285821, 7);
  sqcRZGate(q, -1.4714293066989637, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.327355557204477, 0);
  sqcRZGate(q, 1.4773081746400882, 0);
  sqcRYGate(q, 1.8323006639084294, 1);
  sqcRZGate(q, 2.3842042734118993, 1);
  sqcRYGate(q, -2.0017485057835036, 2);
  sqcRZGate(q, 1.0320702815013907, 2);
  sqcRYGate(q, -0.728945490999547, 3);
  sqcRZGate(q, -0.7748160622131194, 3);
  sqcRYGate(q, 3.1057661534713588, 4);
  sqcRZGate(q, -2.386371542608967, 4);
  sqcRYGate(q, 2.9358243432485494, 5);
  sqcRZGate(q, -1.2209357961005916, 5);
  sqcRYGate(q, -2.9981639932476294, 6);
  sqcRZGate(q, 1.510243692290416, 6);
  sqcRYGate(q, -2.7623936374134255, 7);
  sqcRZGate(q, -0.22972965101364992, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4501972977456825, 0);
  sqcRZGate(q, -1.5485989800993076, 0);
  sqcRYGate(q, 2.0793613227121712, 1);
  sqcRZGate(q, 2.2326591805644833, 1);
  sqcRYGate(q, -0.3998115206502373, 2);
  sqcRZGate(q, 2.590476389370851, 2);
  sqcRYGate(q, -2.998199414486293, 3);
  sqcRZGate(q, 2.6989893738563464, 3);
  sqcRYGate(q, -0.00022071890223163138, 4);
  sqcRZGate(q, 1.199508480740758, 4);
  sqcRYGate(q, -2.5802765093081415, 5);
  sqcRZGate(q, -1.9909501901280882, 5);
  sqcRYGate(q, 0.2548695568559225, 6);
  sqcRZGate(q, -1.4048074862500004, 6);
  sqcRYGate(q, 2.6133823906180775, 7);
  sqcRZGate(q, -1.9740064998650917, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.14178541514098342, 0);
  sqcRZGate(q, 2.4683809674048414, 0);
  sqcRYGate(q, -2.56030976406147, 1);
  sqcRZGate(q, 1.8720428400246714, 1);
  sqcRYGate(q, -2.9846937242924754, 2);
  sqcRZGate(q, 2.705018712257985, 2);
  sqcRYGate(q, 0.5520858305113439, 3);
  sqcRZGate(q, 2.4067461668620593, 3);
  sqcRYGate(q, -0.5812057009364419, 4);
  sqcRZGate(q, -2.772401881639885, 4);
  sqcRYGate(q, 2.227680404108753, 5);
  sqcRZGate(q, -1.6934110292324955, 5);
  sqcRYGate(q, -3.040883403695799, 6);
  sqcRZGate(q, -3.1158906188932187, 6);
  sqcRYGate(q, 3.0946847164457676, 7);
  sqcRZGate(q, -1.6696616404266766, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8094601399565013, 0);
  sqcRZGate(q, -1.9570434214191634, 0);
  sqcRYGate(q, 2.5218206942011383, 1);
  sqcRZGate(q, -2.348640696087899, 1);
  sqcRYGate(q, 2.8465139508471133, 2);
  sqcRZGate(q, 2.5146264841724064, 2);
  sqcRYGate(q, 3.1135139629967106, 3);
  sqcRZGate(q, -0.1631907038956605, 3);
  sqcRYGate(q, -0.020393317520698062, 4);
  sqcRZGate(q, 2.1224368870223427, 4);
  sqcRYGate(q, -0.3286911381808757, 5);
  sqcRZGate(q, -0.286079931743914, 5);
  sqcRYGate(q, -2.1075173670498635, 6);
  sqcRZGate(q, -0.6018271254665816, 6);
  sqcRYGate(q, 0.3724968108324172, 7);
  sqcRZGate(q, 2.448444868684927, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2328253393657365, 0);
  sqcRZGate(q, -2.358173319295038, 0);
  sqcRYGate(q, 2.911473787364578, 1);
  sqcRZGate(q, -0.8923531007641676, 1);
  sqcRYGate(q, -0.42220613224811726, 2);
  sqcRZGate(q, -0.35094681103364794, 2);
  sqcRYGate(q, -3.1166879279465243, 3);
  sqcRZGate(q, 0.857455012260214, 3);
  sqcRYGate(q, 1.8892174041082694, 4);
  sqcRZGate(q, 0.13857602112551692, 4);
  sqcRYGate(q, -1.909243496356951, 5);
  sqcRZGate(q, -0.3548580058978788, 5);
  sqcRYGate(q, 0.6689779760156762, 6);
  sqcRZGate(q, -1.3745547230255157, 6);
  sqcRYGate(q, 3.1044170625333565, 7);
  sqcRZGate(q, 1.6122314563067761, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8338741638430602, 0);
  sqcRZGate(q, -1.7606941552067623, 0);
  sqcRYGate(q, 1.5338372547533838, 1);
  sqcRZGate(q, 2.651051555341617, 1);
  sqcRYGate(q, -0.11813452508074018, 2);
  sqcRZGate(q, -0.27422832026549643, 2);
  sqcRYGate(q, 2.757188920176871, 3);
  sqcRZGate(q, -0.396782129021533, 3);
  sqcRYGate(q, -0.06142920689083642, 4);
  sqcRZGate(q, 0.8459662153253689, 4);
  sqcRYGate(q, 0.10101642984929614, 5);
  sqcRZGate(q, 0.2945069709654623, 5);
  sqcRYGate(q, 1.6430530058540687, 6);
  sqcRZGate(q, -0.8773048913501974, 6);
  sqcRYGate(q, 2.0608280691531826, 7);
  sqcRZGate(q, 2.923450470346946, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2642020063793606, 0);
  sqcRZGate(q, 0.5548700388366434, 0);
  sqcRYGate(q, -1.8535405124244673, 1);
  sqcRZGate(q, -2.9523170305169755, 1);
  sqcRYGate(q, -0.42259855386322775, 2);
  sqcRZGate(q, -2.6949700835006265, 2);
  sqcRYGate(q, 2.1148152303151027, 3);
  sqcRZGate(q, -2.154774760139952, 3);
  sqcRYGate(q, -0.9117467826467225, 4);
  sqcRZGate(q, -0.8243761513108562, 4);
  sqcRYGate(q, -2.953427860259418, 5);
  sqcRZGate(q, 2.286899054704266, 5);
  sqcRYGate(q, 0.48158199451456396, 6);
  sqcRZGate(q, 1.9575622232440795, 6);
  sqcRYGate(q, 0.24535352947411837, 7);
  sqcRZGate(q, -0.3239030509512002, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5519538061986271, 0);
  sqcRZGate(q, 2.1213353106755974, 0);
  sqcRYGate(q, -2.3452495397906747, 1);
  sqcRZGate(q, 0.9221660272442093, 1);
  sqcRYGate(q, -2.297888327163917, 2);
  sqcRZGate(q, 0.1293462243148218, 2);
  sqcRYGate(q, -0.11397117818074243, 3);
  sqcRZGate(q, -2.3703928357570154, 3);
  sqcRYGate(q, -3.1185637431583486, 4);
  sqcRZGate(q, -1.345321479852609, 4);
  sqcRYGate(q, -0.035922204046374695, 5);
  sqcRZGate(q, -1.2740791552812776, 5);
  sqcRYGate(q, -2.9290265675347396, 6);
  sqcRZGate(q, 2.7946822690597726, 6);
  sqcRYGate(q, 1.801882979403635, 7);
  sqcRZGate(q, -0.32556286602751067, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2355268624120326, 0);
  sqcRZGate(q, 0.5209706931484777, 0);
  sqcRYGate(q, 0.14075734619525912, 1);
  sqcRZGate(q, 2.306896532212398, 1);
  sqcRYGate(q, 2.554251736672976, 2);
  sqcRZGate(q, -2.582600764809752, 2);
  sqcRYGate(q, 2.697784296758084, 3);
  sqcRZGate(q, -2.458156559564515, 3);
  sqcRYGate(q, -1.7346575286226422, 4);
  sqcRZGate(q, -0.06538623137512711, 4);
  sqcRYGate(q, 2.6957049249630463, 5);
  sqcRZGate(q, -1.8135233775197852, 5);
  sqcRYGate(q, 0.46565219642462985, 6);
  sqcRZGate(q, 0.3856369241302833, 6);
  sqcRYGate(q, 3.137497162991954, 7);
  sqcRZGate(q, -0.21743495363598925, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3612951646821747, 0);
  sqcRZGate(q, -2.1171290081568137, 0);
  sqcRYGate(q, 1.160515958639782, 1);
  sqcRZGate(q, 1.925713059921204, 1);
  sqcRYGate(q, -0.13150723652871577, 2);
  sqcRZGate(q, -0.5617804585475017, 2);
  sqcRYGate(q, -3.122336929768995, 3);
  sqcRZGate(q, 0.9060960643613205, 3);
  sqcRYGate(q, 3.1294882682188634, 4);
  sqcRZGate(q, -0.46336409858310407, 4);
  sqcRYGate(q, 0.1188892670981671, 5);
  sqcRZGate(q, -0.23946347154159395, 5);
  sqcRYGate(q, 1.0773109008203425, 6);
  sqcRZGate(q, -2.0747636194553776, 6);
  sqcRYGate(q, 1.5952930235533636, 7);
  sqcRZGate(q, -0.5563442833904437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.097545101744879, 0);
  sqcRZGate(q, 1.7015259092799928, 0);
  sqcRYGate(q, -0.0634555843246103, 1);
  sqcRZGate(q, -1.860035933051063, 1);
  sqcRYGate(q, -1.1855061313482278, 2);
  sqcRZGate(q, -0.31835031661603547, 2);
  sqcRYGate(q, 0.5891155836724674, 3);
  sqcRZGate(q, 0.03829403870947681, 3);
  sqcRYGate(q, 1.779970745500696, 4);
  sqcRZGate(q, 0.6259193595479491, 4);
  sqcRYGate(q, 2.0377085236573214, 5);
  sqcRZGate(q, 0.14343702086787324, 5);
  sqcRYGate(q, -1.1751965740332122, 6);
  sqcRZGate(q, -1.5820932642572991, 6);
  sqcRYGate(q, 0.30138660889521596, 7);
  sqcRZGate(q, 1.8945516128835782, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.12159347305833552, 0);
  sqcRZGate(q, -2.2867957090400712, 0);
  sqcRYGate(q, 1.3665451578217223, 1);
  sqcRZGate(q, 1.2005580777518512, 1);
  sqcRYGate(q, 2.1376018505585894, 2);
  sqcRZGate(q, -1.9184926541153162, 2);
  sqcRYGate(q, 3.088348329602379, 3);
  sqcRZGate(q, 0.35275962358010654, 3);
  sqcRYGate(q, -0.03174620642574232, 4);
  sqcRZGate(q, -0.10400198257671889, 4);
  sqcRYGate(q, 3.127964612445958, 5);
  sqcRZGate(q, -0.993948268738194, 5);
  sqcRYGate(q, 1.4558290933872788, 6);
  sqcRZGate(q, -2.034372187672659, 6);
  sqcRYGate(q, 1.078989051658956, 7);
  sqcRZGate(q, 0.35621136216894805, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.834064753962924, 0);
  sqcRZGate(q, -0.4136075585815622, 0);
  sqcRYGate(q, -0.29048387404627435, 1);
  sqcRZGate(q, -1.445787685163376, 1);
  sqcRYGate(q, 1.0806440955807104, 2);
  sqcRZGate(q, 0.17126808375193203, 2);
  sqcRYGate(q, -3.052045251116461, 3);
  sqcRZGate(q, 1.9252967346982972, 3);
  sqcRYGate(q, -1.4373950340721402, 4);
  sqcRZGate(q, 2.9008951729011243, 4);
  sqcRYGate(q, -1.6100712912412716, 5);
  sqcRZGate(q, 2.7189153164588267, 5);
  sqcRYGate(q, 3.115100140329295, 6);
  sqcRZGate(q, 1.287040903732132, 6);
  sqcRYGate(q, 2.935615671425906, 7);
  sqcRZGate(q, 0.04773571103745752, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4624548139677591, 0);
  sqcRZGate(q, 3.096004677110434, 0);
  sqcRYGate(q, 0.048049082864449894, 1);
  sqcRZGate(q, -1.7085296846802598, 1);
  sqcRYGate(q, 0.23522515071637784, 2);
  sqcRZGate(q, -3.0129322153631564, 2);
  sqcRYGate(q, -0.06382325728811791, 3);
  sqcRZGate(q, -2.0977753912538892, 3);
  sqcRYGate(q, 3.1099873625996017, 4);
  sqcRZGate(q, -0.15221278517749948, 4);
  sqcRYGate(q, -3.097018618548356, 5);
  sqcRZGate(q, -1.8873249872637827, 5);
  sqcRYGate(q, -1.7506929272359444, 6);
  sqcRZGate(q, -1.1037139316584188, 6);
  sqcRYGate(q, 0.19557885712777442, 7);
  sqcRZGate(q, -0.27138253375612287, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4904938916698376, 0);
  sqcRZGate(q, 1.5755756004825827, 0);
  sqcRYGate(q, -1.2276299010779272, 1);
  sqcRZGate(q, -0.6809765687958569, 1);
  sqcRYGate(q, 2.2646682248635654, 2);
  sqcRZGate(q, 2.0153704359293787, 2);
  sqcRYGate(q, -1.3678194043750693, 3);
  sqcRZGate(q, 1.8734242164459554, 3);
  sqcRYGate(q, 1.776954348084859, 4);
  sqcRZGate(q, 0.09178125321571488, 4);
  sqcRYGate(q, -0.1984162185132886, 5);
  sqcRZGate(q, 2.1189010216847888, 5);
  sqcRYGate(q, 1.3031377072743295, 6);
  sqcRZGate(q, -0.7760476538220863, 6);
  sqcRYGate(q, -3.0032814392845997, 7);
  sqcRZGate(q, 2.1331550572898452, 7);

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
