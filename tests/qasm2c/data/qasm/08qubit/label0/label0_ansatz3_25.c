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

  sqcRYGate(q, 1.2932427098159245, 0);
  sqcRZGate(q, 2.068718076530207, 0);
  sqcRYGate(q, 1.631518820880748, 1);
  sqcRZGate(q, 2.9698571129213693, 1);
  sqcRYGate(q, 1.5648430146341779, 2);
  sqcRZGate(q, -0.818634952750391, 2);
  sqcRYGate(q, 1.7711464066986808, 3);
  sqcRZGate(q, 1.0964032786869709, 3);
  sqcRYGate(q, -1.2979171590705914, 4);
  sqcRZGate(q, 0.38243904149539354, 4);
  sqcRYGate(q, 0.08850562849205709, 5);
  sqcRZGate(q, -0.94922525488973, 5);
  sqcRYGate(q, 0.8911857654267993, 6);
  sqcRZGate(q, 1.7781829037264192, 6);
  sqcRYGate(q, -2.4515899365860356, 7);
  sqcRZGate(q, 1.4044113924052324, 7);
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
  sqcRYGate(q, -2.827462438065719, 0);
  sqcRZGate(q, -0.7689264502227421, 0);
  sqcRYGate(q, -1.5418758732899296, 1);
  sqcRZGate(q, -2.8348063595579025, 1);
  sqcRYGate(q, 0.25706336903705207, 2);
  sqcRZGate(q, -3.09380587171981, 2);
  sqcRYGate(q, -0.903024256065619, 3);
  sqcRZGate(q, -2.350704933101948, 3);
  sqcRYGate(q, 0.8972897174724517, 4);
  sqcRZGate(q, -0.8801323555611154, 4);
  sqcRYGate(q, 2.6342657960110403, 5);
  sqcRZGate(q, 2.4768662131396733, 5);
  sqcRYGate(q, -0.5929198575028396, 6);
  sqcRZGate(q, -0.35316182553635694, 6);
  sqcRYGate(q, 2.9909293693651833, 7);
  sqcRZGate(q, -0.4194765963304681, 7);
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
  sqcRYGate(q, 2.1407974735314594, 0);
  sqcRZGate(q, -2.9056045820298384, 0);
  sqcRYGate(q, -1.0695733363540099, 1);
  sqcRZGate(q, -0.290396493438859, 1);
  sqcRYGate(q, 2.150756068216299, 2);
  sqcRZGate(q, 0.13596499076906443, 2);
  sqcRYGate(q, 1.0722799537978072, 3);
  sqcRZGate(q, 1.7286050479426738, 3);
  sqcRYGate(q, 0.6696684757098876, 4);
  sqcRZGate(q, -2.605440679681023, 4);
  sqcRYGate(q, -1.0508987104560945, 5);
  sqcRZGate(q, 2.3413303515603934, 5);
  sqcRYGate(q, -1.4555551954972117, 6);
  sqcRZGate(q, 2.5078128271540234, 6);
  sqcRYGate(q, -1.599245980857196, 7);
  sqcRZGate(q, -2.525062395556815, 7);
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
  sqcRYGate(q, 0.6248057505141732, 0);
  sqcRZGate(q, 2.9700153013126736, 0);
  sqcRYGate(q, -1.0276317680218425, 1);
  sqcRZGate(q, -0.486625324753498, 1);
  sqcRYGate(q, 1.513374276931688, 2);
  sqcRZGate(q, 2.095247517727798, 2);
  sqcRYGate(q, 1.4193184162434154, 3);
  sqcRZGate(q, -1.4854847397814934, 3);
  sqcRYGate(q, -1.1561603997632401, 4);
  sqcRZGate(q, 1.6287444809193081, 4);
  sqcRYGate(q, -2.9277971119489643, 5);
  sqcRZGate(q, -2.5031149169910556, 5);
  sqcRYGate(q, 3.083527675679085, 6);
  sqcRZGate(q, 2.106834673642867, 6);
  sqcRYGate(q, -1.1968333448571524, 7);
  sqcRZGate(q, -2.138014996847879, 7);
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
  sqcRYGate(q, -0.9146029792159655, 0);
  sqcRZGate(q, 0.24215618475339087, 0);
  sqcRYGate(q, -2.36344035207372, 1);
  sqcRZGate(q, -3.0018319870567147, 1);
  sqcRYGate(q, 1.9164361030348847, 2);
  sqcRZGate(q, -2.6236176356429497, 2);
  sqcRYGate(q, 2.454124383552838, 3);
  sqcRZGate(q, -0.45065461365967163, 3);
  sqcRYGate(q, -0.7560032148291331, 4);
  sqcRZGate(q, -1.4617045898897425, 4);
  sqcRYGate(q, 1.0784518350478685, 5);
  sqcRZGate(q, 0.16713019826843173, 5);
  sqcRYGate(q, -1.9604019421138952, 6);
  sqcRZGate(q, -0.34674655364893425, 6);
  sqcRYGate(q, -0.19864057821104897, 7);
  sqcRZGate(q, 2.7122282908019133, 7);
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
  sqcRYGate(q, 3.033218843099253, 0);
  sqcRZGate(q, -2.685915800697533, 0);
  sqcRYGate(q, -2.905249546628516, 1);
  sqcRZGate(q, -1.8588242579593366, 1);
  sqcRYGate(q, -1.9682888828187153, 2);
  sqcRZGate(q, -0.5727788791715681, 2);
  sqcRYGate(q, 0.6947635275924258, 3);
  sqcRZGate(q, 1.573700895164844, 3);
  sqcRYGate(q, -2.334507022950626, 4);
  sqcRZGate(q, -1.6494863413780942, 4);
  sqcRYGate(q, 0.03570651657250888, 5);
  sqcRZGate(q, 0.18777740199197634, 5);
  sqcRYGate(q, -0.2934967103278273, 6);
  sqcRZGate(q, 1.495365924486039, 6);
  sqcRYGate(q, 0.6396161065695587, 7);
  sqcRZGate(q, 2.1619205778717827, 7);
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
  sqcRYGate(q, 0.6585448874067822, 0);
  sqcRZGate(q, -1.0900111633242129, 0);
  sqcRYGate(q, 1.4526796407538056, 1);
  sqcRZGate(q, 3.0811574095829273, 1);
  sqcRYGate(q, 2.9319092593287714, 2);
  sqcRZGate(q, 1.7596166756506477, 2);
  sqcRYGate(q, 2.325738332169589, 3);
  sqcRZGate(q, -1.2008058742911, 3);
  sqcRYGate(q, 1.747531336842574, 4);
  sqcRZGate(q, 2.102050092875671, 4);
  sqcRYGate(q, 2.9297841507903617, 5);
  sqcRZGate(q, 1.7531461520491147, 5);
  sqcRYGate(q, -1.8197176157565238, 6);
  sqcRZGate(q, 1.6993666675095738, 6);
  sqcRYGate(q, -2.048008616998805, 7);
  sqcRZGate(q, -0.8909547483494579, 7);
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
  sqcRYGate(q, -1.5861532956576792, 0);
  sqcRZGate(q, 2.6817366534999127, 0);
  sqcRYGate(q, 2.1648382081642215, 1);
  sqcRZGate(q, -1.3944566698772265, 1);
  sqcRYGate(q, 1.2203268332259691, 2);
  sqcRZGate(q, 0.45160828679889686, 2);
  sqcRYGate(q, -3.048865858207009, 3);
  sqcRZGate(q, 1.3108601267288993, 3);
  sqcRYGate(q, 2.760987241322436, 4);
  sqcRZGate(q, -0.5353819483871511, 4);
  sqcRYGate(q, 0.7020676484390709, 5);
  sqcRZGate(q, 1.6803475595721622, 5);
  sqcRYGate(q, 1.0550332903137747, 6);
  sqcRZGate(q, 2.001498185584133, 6);
  sqcRYGate(q, 2.272076928474788, 7);
  sqcRZGate(q, -0.4214321404623745, 7);
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
  sqcRYGate(q, -2.80540529864256, 0);
  sqcRZGate(q, 2.529779383056272, 0);
  sqcRYGate(q, 1.077179375358245, 1);
  sqcRZGate(q, 1.9418572466343083, 1);
  sqcRYGate(q, -1.898003156566923, 2);
  sqcRZGate(q, -3.0727096322170846, 2);
  sqcRYGate(q, 1.3823686074504862, 3);
  sqcRZGate(q, 1.4859816662961323, 3);
  sqcRYGate(q, 1.105978388828655, 4);
  sqcRZGate(q, 0.7375408207270633, 4);
  sqcRYGate(q, -2.046864049660374, 5);
  sqcRZGate(q, 0.04104750698289296, 5);
  sqcRYGate(q, 1.102722568962534, 6);
  sqcRZGate(q, 2.476344082860415, 6);
  sqcRYGate(q, 3.033581354702041, 7);
  sqcRZGate(q, -1.3531430761669787, 7);
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
  sqcRYGate(q, 2.517714455716049, 0);
  sqcRZGate(q, 0.2861264212425615, 0);
  sqcRYGate(q, 1.5769111946492815, 1);
  sqcRZGate(q, -1.5579287292102915, 1);
  sqcRYGate(q, -1.3043057458991694, 2);
  sqcRZGate(q, -1.3131996951730505, 2);
  sqcRYGate(q, -0.6319462357319204, 3);
  sqcRZGate(q, -0.08704146271208493, 3);
  sqcRYGate(q, -1.6456172625812284, 4);
  sqcRZGate(q, -0.5428452907494621, 4);
  sqcRYGate(q, -1.2819234474903922, 5);
  sqcRZGate(q, 2.096697358064322, 5);
  sqcRYGate(q, 1.9700489051223498, 6);
  sqcRZGate(q, -3.0355443464466436, 6);
  sqcRYGate(q, -2.9491306076930224, 7);
  sqcRZGate(q, 0.23726434828605128, 7);
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
  sqcRYGate(q, 0.3025042437801382, 0);
  sqcRZGate(q, -1.112251320070464, 0);
  sqcRYGate(q, -1.1704622101471163, 1);
  sqcRZGate(q, 2.0630897054789226, 1);
  sqcRYGate(q, 2.672890335874989, 2);
  sqcRZGate(q, -1.910225004028187, 2);
  sqcRYGate(q, 1.1883882922476419, 3);
  sqcRZGate(q, -2.87814067464212, 3);
  sqcRYGate(q, 1.098863188876043, 4);
  sqcRZGate(q, 1.8769202206906828, 4);
  sqcRYGate(q, -1.2776997637289167, 5);
  sqcRZGate(q, 2.003557385973806, 5);
  sqcRYGate(q, -1.361593316289044, 6);
  sqcRZGate(q, -2.285664673676866, 6);
  sqcRYGate(q, -1.8818856587652508, 7);
  sqcRZGate(q, 1.8576129964416197, 7);
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
  sqcRYGate(q, -1.781898529411025, 0);
  sqcRZGate(q, -0.4009088904399247, 0);
  sqcRYGate(q, 1.9753507099986063, 1);
  sqcRZGate(q, 0.2543247190963005, 1);
  sqcRYGate(q, 1.3204313694352718, 2);
  sqcRZGate(q, -2.723027435030497, 2);
  sqcRYGate(q, -1.970730422965914, 3);
  sqcRZGate(q, -1.8384578595665246, 3);
  sqcRYGate(q, 2.7126019245674313, 4);
  sqcRZGate(q, 0.8716625205193403, 4);
  sqcRYGate(q, -2.185726880311193, 5);
  sqcRZGate(q, 1.4344239198651136, 5);
  sqcRYGate(q, -2.707761551241192, 6);
  sqcRZGate(q, 1.5414008198215832, 6);
  sqcRYGate(q, 2.2079263742709365, 7);
  sqcRZGate(q, -0.7695827882090122, 7);
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
  sqcRYGate(q, 2.9701726327135263, 0);
  sqcRZGate(q, 2.628523285852583, 0);
  sqcRYGate(q, 0.3597323192659676, 1);
  sqcRZGate(q, -2.8164841034212835, 1);
  sqcRYGate(q, -2.187785596005665, 2);
  sqcRZGate(q, -2.488596139736707, 2);
  sqcRYGate(q, 2.9776972409613385, 3);
  sqcRZGate(q, 2.863023980974875, 3);
  sqcRYGate(q, -2.3678090614724687, 4);
  sqcRZGate(q, 2.639130802908273, 4);
  sqcRYGate(q, 2.0346503620653706, 5);
  sqcRZGate(q, 2.710198645886615, 5);
  sqcRYGate(q, 0.9774766966766393, 6);
  sqcRZGate(q, 1.8340334687744313, 6);
  sqcRYGate(q, -1.4021527424365976, 7);
  sqcRZGate(q, -2.4310373535226955, 7);
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
  sqcRYGate(q, 2.49953884424768, 0);
  sqcRZGate(q, 0.19227281107625505, 0);
  sqcRYGate(q, 1.2484696947712193, 1);
  sqcRZGate(q, 1.0888254916885236, 1);
  sqcRYGate(q, -1.2167410006302584, 2);
  sqcRZGate(q, 3.027482387792943, 2);
  sqcRYGate(q, -2.230379862850879, 3);
  sqcRZGate(q, 1.2160634188505206, 3);
  sqcRYGate(q, -2.3604179640443603, 4);
  sqcRZGate(q, -1.6628776624391082, 4);
  sqcRYGate(q, -3.007581204967474, 5);
  sqcRZGate(q, -2.508274863642262, 5);
  sqcRYGate(q, -0.5601850723670933, 6);
  sqcRZGate(q, 2.077768150619148, 6);
  sqcRYGate(q, 2.6253423646254466, 7);
  sqcRZGate(q, -2.9219609014646974, 7);
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
  sqcRYGate(q, -0.9016836648249004, 0);
  sqcRZGate(q, -2.9188079078831732, 0);
  sqcRYGate(q, -0.10080251774225203, 1);
  sqcRZGate(q, -1.1090137342908735, 1);
  sqcRYGate(q, -1.6428158008641622, 2);
  sqcRZGate(q, 1.9478675215954189, 2);
  sqcRYGate(q, -0.9479184030852172, 3);
  sqcRZGate(q, -2.7051893802290725, 3);
  sqcRYGate(q, 0.40573824281636117, 4);
  sqcRZGate(q, -1.0821402621357452, 4);
  sqcRYGate(q, -0.7708096233058992, 5);
  sqcRZGate(q, -2.951234352305576, 5);
  sqcRYGate(q, 2.536255033620379, 6);
  sqcRZGate(q, 0.6652066638931237, 6);
  sqcRYGate(q, 1.893671663255031, 7);
  sqcRZGate(q, 0.7731684133791407, 7);
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
  sqcRYGate(q, -2.3201218155314844, 0);
  sqcRZGate(q, 0.6367747921369881, 0);
  sqcRYGate(q, 1.962679446088332, 1);
  sqcRZGate(q, -0.9042270464010729, 1);
  sqcRYGate(q, -2.316577483898902, 2);
  sqcRZGate(q, 0.8061691333229881, 2);
  sqcRYGate(q, 1.9323705186523057, 3);
  sqcRZGate(q, 2.463673100571463, 3);
  sqcRYGate(q, -1.5121014767315095, 4);
  sqcRZGate(q, -0.3158822715236438, 4);
  sqcRYGate(q, 1.8119415521554707, 5);
  sqcRZGate(q, -2.6476375381497523, 5);
  sqcRYGate(q, 2.9160691162894534, 6);
  sqcRZGate(q, 0.5789887169158742, 6);
  sqcRYGate(q, 1.625645232701078, 7);
  sqcRZGate(q, -1.7029051948626726, 7);
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
  sqcRYGate(q, 0.7479027836341068, 0);
  sqcRZGate(q, -1.8895206298683602, 0);
  sqcRYGate(q, -0.5021191388557699, 1);
  sqcRZGate(q, 1.4399113648744928, 1);
  sqcRYGate(q, 1.0027620046871544, 2);
  sqcRZGate(q, 1.3132324314190718, 2);
  sqcRYGate(q, 2.8215012480821766, 3);
  sqcRZGate(q, -0.33557224853498635, 3);
  sqcRYGate(q, -0.4490964775125371, 4);
  sqcRZGate(q, -1.976983058568476, 4);
  sqcRYGate(q, 1.0806304490490204, 5);
  sqcRZGate(q, -1.2165249220213052, 5);
  sqcRYGate(q, -0.2133789945545397, 6);
  sqcRZGate(q, -0.0470349374221728, 6);
  sqcRYGate(q, 1.2968726809112496, 7);
  sqcRZGate(q, -2.1251749437683918, 7);
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
  sqcRYGate(q, -1.7257655532553728, 0);
  sqcRZGate(q, -2.686939498230978, 0);
  sqcRYGate(q, -0.494040534664693, 1);
  sqcRZGate(q, -1.0753233875584722, 1);
  sqcRYGate(q, 0.717409703487964, 2);
  sqcRZGate(q, 0.1066692333008721, 2);
  sqcRYGate(q, -2.531929152881182, 3);
  sqcRZGate(q, 0.4040760412887856, 3);
  sqcRYGate(q, -1.1364513634921096, 4);
  sqcRZGate(q, -1.2991600751834698, 4);
  sqcRYGate(q, 2.2951120591342113, 5);
  sqcRZGate(q, 0.7595306458725597, 5);
  sqcRYGate(q, 3.0908355202789433, 6);
  sqcRZGate(q, -2.9765006163802217, 6);
  sqcRYGate(q, -0.5866110125600601, 7);
  sqcRZGate(q, -0.8633372751746652, 7);
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
  sqcRYGate(q, -1.452897364894228, 0);
  sqcRZGate(q, -2.5187728919388817, 0);
  sqcRYGate(q, -1.2981009111684836, 1);
  sqcRZGate(q, -0.5959367591875343, 1);
  sqcRYGate(q, -0.2294419438208557, 2);
  sqcRZGate(q, -2.648525380986669, 2);
  sqcRYGate(q, -1.1569478510856923, 3);
  sqcRZGate(q, 2.5687518941885625, 3);
  sqcRYGate(q, 2.7621994125753537, 4);
  sqcRZGate(q, 1.0572129822424472, 4);
  sqcRYGate(q, -2.845599028106088, 5);
  sqcRZGate(q, 1.4494197188739646, 5);
  sqcRYGate(q, 0.5676731276836343, 6);
  sqcRZGate(q, -0.5461569450020267, 6);
  sqcRYGate(q, 0.8027632609527605, 7);
  sqcRZGate(q, -0.46091149256386016, 7);
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
  sqcRYGate(q, 0.641096016304567, 0);
  sqcRZGate(q, 0.6235394849962868, 0);
  sqcRYGate(q, 2.1990785493314045, 1);
  sqcRZGate(q, -1.1511057854736508, 1);
  sqcRYGate(q, -2.1826487106417076, 2);
  sqcRZGate(q, -2.0618106075519362, 2);
  sqcRYGate(q, 1.9908086692954932, 3);
  sqcRZGate(q, -1.02320380540651, 3);
  sqcRYGate(q, 2.9858303945968934, 4);
  sqcRZGate(q, 2.982789097088711, 4);
  sqcRYGate(q, 2.456695762387783, 5);
  sqcRZGate(q, 0.14294220493540077, 5);
  sqcRYGate(q, -1.9463471555012049, 6);
  sqcRZGate(q, -2.226134985205694, 6);
  sqcRYGate(q, -2.4672526535750645, 7);
  sqcRZGate(q, 1.7778026237896267, 7);
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
  sqcRYGate(q, 2.40442028052659, 0);
  sqcRZGate(q, -3.032674154794644, 0);
  sqcRYGate(q, 2.007149110576851, 1);
  sqcRZGate(q, -2.0497967711037415, 1);
  sqcRYGate(q, -2.6703926035487853, 2);
  sqcRZGate(q, 0.9050805540652328, 2);
  sqcRYGate(q, 1.952067895897152, 3);
  sqcRZGate(q, 2.4925697629253833, 3);
  sqcRYGate(q, -1.458874271104965, 4);
  sqcRZGate(q, 0.8718830165217392, 4);
  sqcRYGate(q, 0.8561899471137536, 5);
  sqcRZGate(q, -2.543342714879398, 5);
  sqcRYGate(q, -1.4305899217113094, 6);
  sqcRZGate(q, -1.658906427450984, 6);
  sqcRYGate(q, -1.2393896379047487, 7);
  sqcRZGate(q, -3.0117646853492688, 7);
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
  sqcRYGate(q, 1.5857965768972686, 0);
  sqcRZGate(q, 1.9521929081535863, 0);
  sqcRYGate(q, -1.6019970133322294, 1);
  sqcRZGate(q, -0.5362561675273048, 1);
  sqcRYGate(q, -2.1274193060789406, 2);
  sqcRZGate(q, -2.531374675040484, 2);
  sqcRYGate(q, 0.47212785987620265, 3);
  sqcRZGate(q, 2.3410864000072324, 3);
  sqcRYGate(q, -1.6173221488229195, 4);
  sqcRZGate(q, -0.9108752152827259, 4);
  sqcRYGate(q, -1.4830242700863394, 5);
  sqcRZGate(q, -0.9167993007824151, 5);
  sqcRYGate(q, 0.4245973615502907, 6);
  sqcRZGate(q, 2.983211576759563, 6);
  sqcRYGate(q, -1.7280006757461486, 7);
  sqcRZGate(q, -1.9313383535457, 7);
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
  sqcRYGate(q, 0.908580362479424, 0);
  sqcRZGate(q, 1.9955476774545087, 0);
  sqcRYGate(q, -0.6068052222186895, 1);
  sqcRZGate(q, 1.256209050013699, 1);
  sqcRYGate(q, -1.9812579903690617, 2);
  sqcRZGate(q, -0.8116481864095428, 2);
  sqcRYGate(q, 1.3637218695705924, 3);
  sqcRZGate(q, 2.244955488631967, 3);
  sqcRYGate(q, 1.555164892443318, 4);
  sqcRZGate(q, 2.839620140435322, 4);
  sqcRYGate(q, -0.6663636559161022, 5);
  sqcRZGate(q, -0.241450527487222, 5);
  sqcRYGate(q, 0.17677727133795204, 6);
  sqcRZGate(q, 0.31062003704875174, 6);
  sqcRYGate(q, 0.4779390348425139, 7);
  sqcRZGate(q, 2.2365576170594625, 7);
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
  sqcRYGate(q, -2.974035989118957, 0);
  sqcRZGate(q, -1.1123128886892817, 0);
  sqcRYGate(q, -2.4786583870639363, 1);
  sqcRZGate(q, 1.374600450587689, 1);
  sqcRYGate(q, 2.311158413013113, 2);
  sqcRZGate(q, 2.7894218212766337, 2);
  sqcRYGate(q, -2.0324382620977426, 3);
  sqcRZGate(q, -1.6966099906278063, 3);
  sqcRYGate(q, -1.1942941499689663, 4);
  sqcRZGate(q, 2.119488398742167, 4);
  sqcRYGate(q, -1.4583381695184128, 5);
  sqcRZGate(q, -1.0492416329943133, 5);
  sqcRYGate(q, -1.0639844647909946, 6);
  sqcRZGate(q, -0.41642538525592354, 6);
  sqcRYGate(q, -2.109922614749604, 7);
  sqcRZGate(q, 1.1503229590984363, 7);
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
  sqcRYGate(q, 0.5774815814336343, 0);
  sqcRZGate(q, -0.636357971929007, 0);
  sqcRYGate(q, -1.19107584324931, 1);
  sqcRZGate(q, -1.884310194906555, 1);
  sqcRYGate(q, 0.2360813090556312, 2);
  sqcRZGate(q, 3.0204469565939425, 2);
  sqcRYGate(q, -0.5399318406192335, 3);
  sqcRZGate(q, 1.6959090503354117, 3);
  sqcRYGate(q, 1.9367058695139958, 4);
  sqcRZGate(q, 3.0818034127662393, 4);
  sqcRYGate(q, 1.7171826269007209, 5);
  sqcRZGate(q, -3.1011286129308546, 5);
  sqcRYGate(q, -1.2601555750284472, 6);
  sqcRZGate(q, 2.194298851517378, 6);
  sqcRYGate(q, 2.1376190176303274, 7);
  sqcRZGate(q, 1.5071895932572814, 7);
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
  sqcRYGate(q, -1.7224480910776838, 0);
  sqcRZGate(q, 2.514165460005702, 0);
  sqcRYGate(q, -1.203170708238833, 1);
  sqcRZGate(q, -1.0122564527461508, 1);
  sqcRYGate(q, 0.8008746558393538, 2);
  sqcRZGate(q, -0.4124861122966427, 2);
  sqcRYGate(q, 1.3730864561840237, 3);
  sqcRZGate(q, -1.4486145697287596, 3);
  sqcRYGate(q, -1.2803600451207886, 4);
  sqcRZGate(q, -2.1038727305568665, 4);
  sqcRYGate(q, 2.8926897519279575, 5);
  sqcRZGate(q, -1.7846578706750327, 5);
  sqcRYGate(q, -3.073499025123756, 6);
  sqcRZGate(q, 1.0030631954632532, 6);
  sqcRYGate(q, 0.7278732823991243, 7);
  sqcRZGate(q, 0.26354626893326805, 7);
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
  sqcRYGate(q, 0.40852053321874865, 0);
  sqcRZGate(q, -1.498185952492114, 0);
  sqcRYGate(q, -2.29674521646702, 1);
  sqcRZGate(q, -2.0227879558869146, 1);
  sqcRYGate(q, 1.7033586547032524, 2);
  sqcRZGate(q, 0.7953053319534167, 2);
  sqcRYGate(q, 2.556055797429145, 3);
  sqcRZGate(q, -1.9610074481903874, 3);
  sqcRYGate(q, 0.8921188520700856, 4);
  sqcRZGate(q, 0.8885778577432761, 4);
  sqcRYGate(q, 2.230614213224791, 5);
  sqcRZGate(q, 1.7954648272619345, 5);
  sqcRYGate(q, 1.2319613439657466, 6);
  sqcRZGate(q, -0.10867650451819168, 6);
  sqcRYGate(q, -1.4890019990811778, 7);
  sqcRZGate(q, 3.0649308409816927, 7);
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
  sqcRYGate(q, -0.5429103192988203, 0);
  sqcRZGate(q, 1.1378432472743079, 0);
  sqcRYGate(q, 1.8863773542566147, 1);
  sqcRZGate(q, -2.0962085990561903, 1);
  sqcRYGate(q, -2.8664446951468348, 2);
  sqcRZGate(q, -2.9507829850910907, 2);
  sqcRYGate(q, -2.595313347642304, 3);
  sqcRZGate(q, 1.5039737607186687, 3);
  sqcRYGate(q, -1.2161620392023123, 4);
  sqcRZGate(q, 0.023485803783331996, 4);
  sqcRYGate(q, -1.913819887736591, 5);
  sqcRZGate(q, -0.36031501275911115, 5);
  sqcRYGate(q, -0.34431661542600445, 6);
  sqcRZGate(q, -1.9302935468278335, 6);
  sqcRYGate(q, 1.087927168232512, 7);
  sqcRZGate(q, -1.5109476683878709, 7);
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
  sqcRYGate(q, -0.8861052773172268, 0);
  sqcRZGate(q, -0.8893578440922527, 0);
  sqcRYGate(q, 0.9096212129233532, 1);
  sqcRZGate(q, -2.2015157449012146, 1);
  sqcRYGate(q, -0.09850776205682205, 2);
  sqcRZGate(q, 1.730636700352594, 2);
  sqcRYGate(q, 0.5942951489837718, 3);
  sqcRZGate(q, -1.1932874804317954, 3);
  sqcRYGate(q, 2.9135907015482405, 4);
  sqcRZGate(q, -2.8374972907780602, 4);
  sqcRYGate(q, -2.2538463909382793, 5);
  sqcRZGate(q, -1.1734661072076928, 5);
  sqcRYGate(q, -0.6368842821037415, 6);
  sqcRZGate(q, 1.9585058743943773, 6);
  sqcRYGate(q, -1.294177946174175, 7);
  sqcRZGate(q, -1.7845721626012612, 7);

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
