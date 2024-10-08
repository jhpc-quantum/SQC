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

  sqcRYGate(q, 2.494636941993055, 0);
  sqcRZGate(q, -0.34024548321792114, 0);
  sqcRYGate(q, -1.88738750429307, 1);
  sqcRZGate(q, 1.0864915984767078, 1);
  sqcRYGate(q, 0.14129862034667193, 2);
  sqcRZGate(q, 2.050714122353384, 2);
  sqcRYGate(q, 0.38394103232584387, 3);
  sqcRZGate(q, 2.5013638726619805, 3);
  sqcRYGate(q, 2.4387012699479036, 4);
  sqcRZGate(q, 1.4178771847769878, 4);
  sqcRYGate(q, -3.1267614174600804, 5);
  sqcRZGate(q, -2.9897573460610016, 5);
  sqcRYGate(q, 2.5216491760147237, 6);
  sqcRZGate(q, 2.9887479788094957, 6);
  sqcRYGate(q, 3.034558399246027, 7);
  sqcRZGate(q, 2.8020610529928596, 7);
  sqcRYGate(q, -2.300311444030899, 8);
  sqcRZGate(q, 2.5723018164843157, 8);
  sqcRYGate(q, 1.0856379402777399, 9);
  sqcRZGate(q, -3.0192995677499552, 9);
  sqcRYGate(q, -0.3003498531646463, 10);
  sqcRZGate(q, 2.131935211402091, 10);
  sqcRYGate(q, -2.9157123787226507, 11);
  sqcRZGate(q, 2.8756674876114925, 11);
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
  sqcRYGate(q, -0.11758114922817484, 0);
  sqcRZGate(q, 0.1570139270610671, 0);
  sqcRYGate(q, 2.6751795712337194, 1);
  sqcRZGate(q, 2.388084751191821, 1);
  sqcRYGate(q, 0.6932873832885647, 2);
  sqcRZGate(q, 2.3543874032232313, 2);
  sqcRYGate(q, 2.8668317716644984, 3);
  sqcRZGate(q, 1.7572620396124583, 3);
  sqcRYGate(q, -0.40568859045253447, 4);
  sqcRZGate(q, 2.7962381253011714, 4);
  sqcRYGate(q, 0.0062204063639444635, 5);
  sqcRZGate(q, 0.41284978153112445, 5);
  sqcRYGate(q, -2.2729409118867356, 6);
  sqcRZGate(q, 2.4553468940727594, 6);
  sqcRYGate(q, 1.293758148944569, 7);
  sqcRZGate(q, -2.637006646054852, 7);
  sqcRYGate(q, -0.01864527364006552, 8);
  sqcRZGate(q, 1.528760770234625, 8);
  sqcRYGate(q, -3.115201324446804, 9);
  sqcRZGate(q, 0.11626939222633405, 9);
  sqcRYGate(q, 0.007276989726502592, 10);
  sqcRZGate(q, -2.2270079900868334, 10);
  sqcRYGate(q, -2.3897767178570417, 11);
  sqcRZGate(q, -1.3178669972188388, 11);
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
  sqcRYGate(q, 0.20317594237282227, 0);
  sqcRZGate(q, -2.6438240189018787, 0);
  sqcRYGate(q, 2.59902192038193, 1);
  sqcRZGate(q, -2.439905430621584, 1);
  sqcRYGate(q, -2.2650142382807847, 2);
  sqcRZGate(q, 1.3232351533596356, 2);
  sqcRYGate(q, -2.0659711221643318, 3);
  sqcRZGate(q, -1.5880477062751002, 3);
  sqcRYGate(q, -2.4475527351375157, 4);
  sqcRZGate(q, -2.2199564375037157, 4);
  sqcRYGate(q, 3.134358819209999, 5);
  sqcRZGate(q, 1.3191359029016727, 5);
  sqcRYGate(q, -2.5768179416766603, 6);
  sqcRZGate(q, -2.8770881674064475, 6);
  sqcRYGate(q, -2.8819110163210993, 7);
  sqcRZGate(q, 0.10119288116417646, 7);
  sqcRYGate(q, 2.481400207500964, 8);
  sqcRZGate(q, 1.213794748881295, 8);
  sqcRYGate(q, 1.1000631123984757, 9);
  sqcRZGate(q, -2.691048162884028, 9);
  sqcRYGate(q, 1.1488420463482623, 10);
  sqcRZGate(q, -0.34273623650736773, 10);
  sqcRYGate(q, 2.4645719288329624, 11);
  sqcRZGate(q, -0.5939789253843639, 11);
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
  sqcRYGate(q, 3.1379473581293675, 0);
  sqcRZGate(q, -2.8481215290640343, 0);
  sqcRYGate(q, 0.9868751053101535, 1);
  sqcRZGate(q, 0.1320389722297257, 1);
  sqcRYGate(q, 0.28857186958289865, 2);
  sqcRZGate(q, -1.009811493248506, 2);
  sqcRYGate(q, -2.4381109930324993, 3);
  sqcRZGate(q, 0.18509708211545256, 3);
  sqcRYGate(q, -1.5279033086357408, 4);
  sqcRZGate(q, 2.4063376563567607, 4);
  sqcRYGate(q, 0.21989361593237056, 5);
  sqcRZGate(q, 1.6497026311548035, 5);
  sqcRYGate(q, -0.30792932268692197, 6);
  sqcRZGate(q, 2.5484064675976383, 6);
  sqcRYGate(q, -2.0272433304156796, 7);
  sqcRZGate(q, 0.6943779116500622, 7);
  sqcRYGate(q, -1.5927107774245786, 8);
  sqcRZGate(q, -0.15020962421783207, 8);
  sqcRYGate(q, 3.110808736317936, 9);
  sqcRZGate(q, -1.3232528054135646, 9);
  sqcRYGate(q, -0.9825621864506582, 10);
  sqcRZGate(q, -3.0822150860360655, 10);
  sqcRYGate(q, 3.0229660979858965, 11);
  sqcRZGate(q, -2.0233563435823823, 11);
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
  sqcRYGate(q, 2.421932602608914, 0);
  sqcRZGate(q, -1.4702327686925587, 0);
  sqcRYGate(q, -1.1699116681422712, 1);
  sqcRZGate(q, -0.665589895345336, 1);
  sqcRYGate(q, -0.03660612835641697, 2);
  sqcRZGate(q, 1.7839710650544138, 2);
  sqcRYGate(q, -1.1112883843204262, 3);
  sqcRZGate(q, -3.1060022440733803, 3);
  sqcRYGate(q, 0.03874607877125114, 4);
  sqcRZGate(q, 2.4810093480882958, 4);
  sqcRYGate(q, 0.007183553690652822, 5);
  sqcRZGate(q, 1.8776954422773438, 5);
  sqcRYGate(q, -2.0667559945499114, 6);
  sqcRZGate(q, 0.34554355789227215, 6);
  sqcRYGate(q, -0.18060917502362409, 7);
  sqcRZGate(q, -0.15090080945036724, 7);
  sqcRYGate(q, -2.267418018811257, 8);
  sqcRZGate(q, -1.8505449383048447, 8);
  sqcRYGate(q, 1.0153536910284613, 9);
  sqcRZGate(q, 0.3207829098323123, 9);
  sqcRYGate(q, 2.7166974031137054, 10);
  sqcRZGate(q, -0.6213719697410437, 10);
  sqcRYGate(q, 1.3846865778693953, 11);
  sqcRZGate(q, -1.4195938572681663, 11);
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
  sqcRYGate(q, -1.7093219269175606, 0);
  sqcRZGate(q, -1.7022514101723007, 0);
  sqcRYGate(q, 0.3170574496418608, 1);
  sqcRZGate(q, -0.3991463759509349, 1);
  sqcRYGate(q, 0.2954033560780051, 2);
  sqcRZGate(q, 1.7760976284134005, 2);
  sqcRYGate(q, -2.784165375989244, 3);
  sqcRZGate(q, 1.834882646817056, 3);
  sqcRYGate(q, 1.491806989395351, 4);
  sqcRZGate(q, 1.267893186016591, 4);
  sqcRYGate(q, 0.11093173159550855, 5);
  sqcRZGate(q, 2.9458105312725187, 5);
  sqcRYGate(q, -2.464237096731199, 6);
  sqcRZGate(q, -0.878996763978865, 6);
  sqcRYGate(q, 3.115678677755148, 7);
  sqcRZGate(q, -0.39678787381939684, 7);
  sqcRYGate(q, 1.5597650224433728, 8);
  sqcRZGate(q, 0.9248009485281825, 8);
  sqcRYGate(q, -0.7890650720492709, 9);
  sqcRZGate(q, -2.0238605775501943, 9);
  sqcRYGate(q, -2.7283259259621797, 10);
  sqcRZGate(q, -3.017543131216545, 10);
  sqcRYGate(q, -0.4933512028637672, 11);
  sqcRZGate(q, -2.05734519043107, 11);
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
  sqcRYGate(q, 1.9256090737040106, 0);
  sqcRZGate(q, -2.6986510304422473, 0);
  sqcRYGate(q, -0.14512345958339207, 1);
  sqcRZGate(q, 0.690387421809918, 1);
  sqcRYGate(q, 2.911249364760049, 2);
  sqcRZGate(q, 1.3379059318306314, 2);
  sqcRYGate(q, -2.3480693345381143, 3);
  sqcRZGate(q, -2.176383375487031, 3);
  sqcRYGate(q, -0.01694562180236936, 4);
  sqcRZGate(q, 0.4281269850586132, 4);
  sqcRYGate(q, 2.9151727194334938, 5);
  sqcRZGate(q, -2.761508132962222, 5);
  sqcRYGate(q, -0.5971626406171272, 6);
  sqcRZGate(q, 0.8970160094189865, 6);
  sqcRYGate(q, 1.540027463490645, 7);
  sqcRZGate(q, -2.6100781721390622, 7);
  sqcRYGate(q, 3.0144949793616327, 8);
  sqcRZGate(q, -0.8169125698112731, 8);
  sqcRYGate(q, 2.2076019168750864, 9);
  sqcRZGate(q, 0.4934395466552867, 9);
  sqcRYGate(q, -1.7860017131644592, 10);
  sqcRZGate(q, 1.3906549929417684, 10);
  sqcRYGate(q, 1.855411038932833, 11);
  sqcRZGate(q, -0.5863411862829562, 11);
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
  sqcRYGate(q, 2.7256925990122833, 0);
  sqcRZGate(q, 2.033454637717314, 0);
  sqcRYGate(q, 1.044409871502535, 1);
  sqcRZGate(q, 2.057720160794136, 1);
  sqcRYGate(q, -2.633754773271088, 2);
  sqcRZGate(q, 2.1506488411125817, 2);
  sqcRYGate(q, -2.313953810838325, 3);
  sqcRZGate(q, 0.7264982629308953, 3);
  sqcRYGate(q, -3.0804622853576773, 4);
  sqcRZGate(q, -2.813832032686738, 4);
  sqcRYGate(q, -0.09117483548401681, 5);
  sqcRZGate(q, -0.35826519481458075, 5);
  sqcRYGate(q, -1.605518336967671, 6);
  sqcRZGate(q, 1.414467222312704, 6);
  sqcRYGate(q, 1.2742692250989656, 7);
  sqcRZGate(q, -3.073432289749772, 7);
  sqcRYGate(q, -2.8767708531503344, 8);
  sqcRZGate(q, -2.2898575604005957, 8);
  sqcRYGate(q, -0.37936183735142864, 9);
  sqcRZGate(q, 2.670000594260301, 9);
  sqcRYGate(q, 1.5763370203915419, 10);
  sqcRZGate(q, -2.8049678974560552, 10);
  sqcRYGate(q, -0.8448528046477985, 11);
  sqcRZGate(q, -1.300657921234783, 11);
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
  sqcRYGate(q, 1.2286634394310987, 0);
  sqcRZGate(q, 1.5599419678199278, 0);
  sqcRYGate(q, -1.6397194520487612, 1);
  sqcRZGate(q, 0.3720855960707743, 1);
  sqcRYGate(q, 1.2040563109431277, 2);
  sqcRZGate(q, -0.6382081641976383, 2);
  sqcRYGate(q, -1.74629710912786, 3);
  sqcRZGate(q, -1.296769950054002, 3);
  sqcRYGate(q, 3.0298107845994897, 4);
  sqcRZGate(q, 3.061212606275322, 4);
  sqcRYGate(q, -1.5849212209534693, 5);
  sqcRZGate(q, 2.877750071025734, 5);
  sqcRYGate(q, -1.7883577398414214, 6);
  sqcRZGate(q, -2.9345189457922656, 6);
  sqcRYGate(q, 1.3216429036061728, 7);
  sqcRZGate(q, -3.0910400225655152, 7);
  sqcRYGate(q, 2.7157915339245995, 8);
  sqcRZGate(q, -0.1291475095789245, 8);
  sqcRYGate(q, 2.651479724390496, 9);
  sqcRZGate(q, -1.952280755908751, 9);
  sqcRYGate(q, 0.08286650968385656, 10);
  sqcRZGate(q, 1.0510336077993532, 10);
  sqcRYGate(q, -0.7480060311149107, 11);
  sqcRZGate(q, -2.830260475073531, 11);
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
  sqcRYGate(q, -0.5904190821941926, 0);
  sqcRZGate(q, 3.137600153052486, 0);
  sqcRYGate(q, -1.4649887735154614, 1);
  sqcRZGate(q, 2.3360161350602624, 1);
  sqcRYGate(q, -1.4614811282601963, 2);
  sqcRZGate(q, -2.558350119580932, 2);
  sqcRYGate(q, -0.10832464386311205, 3);
  sqcRZGate(q, 2.7198795324012526, 3);
  sqcRYGate(q, -1.574335073998335, 4);
  sqcRZGate(q, 1.0440227224055336, 4);
  sqcRYGate(q, 0.8390317113478538, 5);
  sqcRZGate(q, -0.8682887547632049, 5);
  sqcRYGate(q, -0.41643745319382486, 6);
  sqcRZGate(q, -2.8373189231989984, 6);
  sqcRYGate(q, -1.26741295882118, 7);
  sqcRZGate(q, 1.6948689235255985, 7);
  sqcRYGate(q, -0.434269169234895, 8);
  sqcRZGate(q, 1.1304499962487002, 8);
  sqcRYGate(q, 0.1844140939995835, 9);
  sqcRZGate(q, -2.745288684293135, 9);
  sqcRYGate(q, 0.10486296715624667, 10);
  sqcRZGate(q, -1.7680576640033778, 10);
  sqcRYGate(q, 1.8738981309928473, 11);
  sqcRZGate(q, -0.3280095432843462, 11);
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
  sqcRYGate(q, 2.0552109036745043, 0);
  sqcRZGate(q, 2.954797247356698, 0);
  sqcRYGate(q, -0.9170972426895763, 1);
  sqcRZGate(q, -0.04470292910034068, 1);
  sqcRYGate(q, -0.7336006400403012, 2);
  sqcRZGate(q, 0.6243885854378949, 2);
  sqcRYGate(q, -0.37570554705045117, 3);
  sqcRZGate(q, 0.5456604532121068, 3);
  sqcRYGate(q, -1.9361227440788982, 4);
  sqcRZGate(q, -0.3518537105626615, 4);
  sqcRYGate(q, 1.8467269255783278, 5);
  sqcRZGate(q, 2.4321517416616034, 5);
  sqcRYGate(q, -0.06538299164541166, 6);
  sqcRZGate(q, 0.4763675641343985, 6);
  sqcRYGate(q, 0.5220872694639898, 7);
  sqcRZGate(q, -2.2375195851735925, 7);
  sqcRYGate(q, -0.020838704916154943, 8);
  sqcRZGate(q, -1.4259240029174762, 8);
  sqcRYGate(q, 1.6960796108517764, 9);
  sqcRZGate(q, -2.2645827803836864, 9);
  sqcRYGate(q, -3.137401948648785, 10);
  sqcRZGate(q, 2.7449717028208065, 10);
  sqcRYGate(q, 0.27041071967823793, 11);
  sqcRZGate(q, 0.06176646170557247, 11);
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
  sqcRYGate(q, 0.47796098733260717, 0);
  sqcRZGate(q, -1.7672540947552544, 0);
  sqcRYGate(q, -0.446114327455712, 1);
  sqcRZGate(q, 1.778539568610773, 1);
  sqcRYGate(q, 2.1744606346413704, 2);
  sqcRZGate(q, -0.19698333588273823, 2);
  sqcRYGate(q, -3.118791322827058, 3);
  sqcRZGate(q, -1.2122458763372084, 3);
  sqcRYGate(q, 3.1359794225870723, 4);
  sqcRZGate(q, -0.37538652170730735, 4);
  sqcRYGate(q, 3.113254881461453, 5);
  sqcRZGate(q, -1.7615977753402994, 5);
  sqcRYGate(q, 0.4932421944291631, 6);
  sqcRZGate(q, 0.9599043615648774, 6);
  sqcRYGate(q, 1.9395123354413455, 7);
  sqcRZGate(q, -0.21197575953480993, 7);
  sqcRYGate(q, -1.7916774010414809, 8);
  sqcRZGate(q, -0.7843744428062598, 8);
  sqcRYGate(q, 0.4503360541301955, 9);
  sqcRZGate(q, -1.2736449446277875, 9);
  sqcRYGate(q, 0.8447504192728011, 10);
  sqcRZGate(q, -1.8713896951960374, 10);
  sqcRYGate(q, 2.3582599229800825, 11);
  sqcRZGate(q, 1.0524453382610388, 11);
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
  sqcRYGate(q, -2.9481347130348974, 0);
  sqcRZGate(q, 0.4591203460203994, 0);
  sqcRYGate(q, 0.04212336693832963, 1);
  sqcRZGate(q, -0.08059345385964596, 1);
  sqcRYGate(q, -0.4970812127494821, 2);
  sqcRZGate(q, -1.4698864232309785, 2);
  sqcRYGate(q, -0.3792030457875475, 3);
  sqcRZGate(q, -2.3920523407186383, 3);
  sqcRYGate(q, -1.188350477162558, 4);
  sqcRZGate(q, -1.1170635969354175, 4);
  sqcRYGate(q, 2.3450580741714844, 5);
  sqcRZGate(q, 0.688683786554399, 5);
  sqcRYGate(q, -0.20789213865016623, 6);
  sqcRZGate(q, 2.2953277222689303, 6);
  sqcRYGate(q, -3.1131750483615566, 7);
  sqcRZGate(q, 0.9556820256834779, 7);
  sqcRYGate(q, 0.26323511676161715, 8);
  sqcRZGate(q, 1.2687096154135613, 8);
  sqcRYGate(q, 3.061475825861185, 9);
  sqcRZGate(q, 2.048061399716989, 9);
  sqcRYGate(q, -1.1710157256903968, 10);
  sqcRZGate(q, -1.9313694150561964, 10);
  sqcRYGate(q, -2.1599898518536467, 11);
  sqcRZGate(q, -1.5298084582637437, 11);
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
  sqcRYGate(q, -0.25727544007624653, 0);
  sqcRZGate(q, -2.574934357811605, 0);
  sqcRYGate(q, -2.422007134572955, 1);
  sqcRZGate(q, -2.221014905845247, 1);
  sqcRYGate(q, -1.971968416391598, 2);
  sqcRZGate(q, -0.43785894505607353, 2);
  sqcRYGate(q, 0.39907447801822293, 3);
  sqcRZGate(q, 0.42944140067511977, 3);
  sqcRYGate(q, 2.572545646154458, 4);
  sqcRZGate(q, 3.1329744055330897, 4);
  sqcRYGate(q, -1.7299676266317192, 5);
  sqcRZGate(q, -0.9828826284857651, 5);
  sqcRYGate(q, -2.7559651165847496, 6);
  sqcRZGate(q, 2.8030564141674517, 6);
  sqcRYGate(q, -2.9911999003507765, 7);
  sqcRZGate(q, -1.7146880082467864, 7);
  sqcRYGate(q, -1.1605056700166403, 8);
  sqcRZGate(q, 2.7918616466192288, 8);
  sqcRYGate(q, 1.963445961153937, 9);
  sqcRZGate(q, -0.8481532073138389, 9);
  sqcRYGate(q, -1.8385331301599397, 10);
  sqcRZGate(q, -0.7111585007955004, 10);
  sqcRYGate(q, 3.1282929143361855, 11);
  sqcRZGate(q, -2.755413719773063, 11);
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
  sqcRYGate(q, 0.9796125925969966, 0);
  sqcRZGate(q, -2.8950342044794466, 0);
  sqcRYGate(q, 0.8194590125256572, 1);
  sqcRZGate(q, 0.2817591562481984, 1);
  sqcRYGate(q, 3.1106337628498593, 2);
  sqcRZGate(q, 1.3550770179627163, 2);
  sqcRYGate(q, -0.0926592900698881, 3);
  sqcRZGate(q, -1.573363919404808, 3);
  sqcRYGate(q, -1.5692535987869465, 4);
  sqcRZGate(q, -3.1349829685576722, 4);
  sqcRYGate(q, -3.139730177401989, 5);
  sqcRZGate(q, -2.566072948155516, 5);
  sqcRYGate(q, 1.5146558988596635, 6);
  sqcRZGate(q, 2.8031505386127846, 6);
  sqcRYGate(q, 1.862699352764844, 7);
  sqcRZGate(q, -0.11680011397124891, 7);
  sqcRYGate(q, -0.021518838309704694, 8);
  sqcRZGate(q, -0.6335228071295462, 8);
  sqcRYGate(q, 3.0616845689583174, 9);
  sqcRZGate(q, -0.22486388028897214, 9);
  sqcRYGate(q, -1.9638150576870776, 10);
  sqcRZGate(q, -1.627680501652207, 10);
  sqcRYGate(q, 2.5807991075651033, 11);
  sqcRZGate(q, 0.29783644771524936, 11);
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
  sqcRYGate(q, -0.8436125720617699, 0);
  sqcRZGate(q, 2.4846664411077386, 0);
  sqcRYGate(q, -2.2080342322637234, 1);
  sqcRZGate(q, -0.5813804751639887, 1);
  sqcRYGate(q, 0.11379843013991753, 2);
  sqcRZGate(q, -2.581198204546425, 2);
  sqcRYGate(q, 0.0006802329089596881, 3);
  sqcRZGate(q, 2.310314460125409, 3);
  sqcRYGate(q, 2.5677557314923276, 4);
  sqcRZGate(q, 1.489112087526082, 4);
  sqcRYGate(q, 0.1260336433324838, 5);
  sqcRZGate(q, 1.0616574336264077, 5);
  sqcRYGate(q, -0.08909943633445541, 6);
  sqcRZGate(q, 0.48022939935676945, 6);
  sqcRYGate(q, -0.28984297326371017, 7);
  sqcRZGate(q, 1.6182028291623212, 7);
  sqcRYGate(q, -1.0631345494773408, 8);
  sqcRZGate(q, 2.809573396780673, 8);
  sqcRYGate(q, 1.2994431203661683, 9);
  sqcRZGate(q, -1.67708021055849, 9);
  sqcRYGate(q, -1.1006508026060455, 10);
  sqcRZGate(q, -1.4038264586246338, 10);
  sqcRYGate(q, -0.005413878164723939, 11);
  sqcRZGate(q, -3.1017914265585724, 11);
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
  sqcRYGate(q, 2.616826155855458, 0);
  sqcRZGate(q, -0.6979557582183782, 0);
  sqcRYGate(q, 0.9066852779013674, 1);
  sqcRZGate(q, -1.4733298027047406, 1);
  sqcRYGate(q, 1.0211167636686076, 2);
  sqcRZGate(q, 2.501183503331722, 2);
  sqcRYGate(q, -2.0228140112515502, 3);
  sqcRZGate(q, -1.780877030015106, 3);
  sqcRYGate(q, -2.9399648651387578, 4);
  sqcRZGate(q, -1.6587279100580359, 4);
  sqcRYGate(q, 2.2586140395330343, 5);
  sqcRZGate(q, 3.0051436700574095, 5);
  sqcRYGate(q, 1.5119547863032858, 6);
  sqcRZGate(q, -3.1404612033716006, 6);
  sqcRYGate(q, -1.808968778215326, 7);
  sqcRZGate(q, 1.4387859331397728, 7);
  sqcRYGate(q, 0.021336674815065848, 8);
  sqcRZGate(q, 1.572314410691086, 8);
  sqcRYGate(q, 0.12260324999664025, 9);
  sqcRZGate(q, 0.9273985471313351, 9);
  sqcRYGate(q, -2.126312706679565, 10);
  sqcRZGate(q, 2.50479345946445, 10);
  sqcRYGate(q, -1.5322553953738376, 11);
  sqcRZGate(q, -1.762253997461138, 11);
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
  sqcRYGate(q, -1.2339889284972605, 0);
  sqcRZGate(q, 2.426527515006749, 0);
  sqcRYGate(q, 0.7984224341304663, 1);
  sqcRZGate(q, 0.18044454456598924, 1);
  sqcRYGate(q, -3.0810808901845244, 2);
  sqcRZGate(q, -1.3696212668407473, 2);
  sqcRYGate(q, 0.00653955480064561, 3);
  sqcRZGate(q, -2.396000878802395, 3);
  sqcRYGate(q, 3.1170710310750223, 4);
  sqcRZGate(q, 2.8141382799081516, 4);
  sqcRYGate(q, -0.03702551433500578, 5);
  sqcRZGate(q, 1.6015802757873725, 5);
  sqcRYGate(q, 0.8129146092316988, 6);
  sqcRZGate(q, 0.4091344039339093, 6);
  sqcRYGate(q, -1.7209091229141356, 7);
  sqcRZGate(q, 0.6078050786403063, 7);
  sqcRYGate(q, 1.4733526399596573, 8);
  sqcRZGate(q, -1.8256880397273878, 8);
  sqcRYGate(q, -1.7672187237494459, 9);
  sqcRZGate(q, -2.1833918614371672, 9);
  sqcRYGate(q, -2.050246171378735, 10);
  sqcRZGate(q, -1.2076907217566015, 10);
  sqcRYGate(q, 0.0002549766535198117, 11);
  sqcRZGate(q, 1.0237623187130231, 11);
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
  sqcRYGate(q, -0.36317718898915174, 0);
  sqcRZGate(q, 0.35311746896087287, 0);
  sqcRYGate(q, 1.1434286822275537, 1);
  sqcRZGate(q, -0.8610007442025256, 1);
  sqcRYGate(q, 1.6245957007353364, 2);
  sqcRZGate(q, 2.8477141171307196, 2);
  sqcRYGate(q, 1.0041643473301773, 3);
  sqcRZGate(q, -1.4551704324323298, 3);
  sqcRYGate(q, -1.508085804976391, 4);
  sqcRZGate(q, 1.2018743676782728, 4);
  sqcRYGate(q, 3.0918347256900893, 5);
  sqcRZGate(q, 2.4465013070248447, 5);
  sqcRYGate(q, -0.018619330517223552, 6);
  sqcRZGate(q, 2.6610855695603024, 6);
  sqcRYGate(q, -2.4038559400094597, 7);
  sqcRZGate(q, 0.3557969046435074, 7);
  sqcRYGate(q, -0.8593069151415483, 8);
  sqcRZGate(q, -0.2568289699536228, 8);
  sqcRYGate(q, -1.1047145066314288, 9);
  sqcRZGate(q, 0.08773610866634546, 9);
  sqcRYGate(q, -2.76564353559933, 10);
  sqcRZGate(q, -1.5172685715372598, 10);
  sqcRYGate(q, 2.12726547756598, 11);
  sqcRZGate(q, -1.5967786901675827, 11);
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
  sqcRYGate(q, -1.307498591130277, 0);
  sqcRZGate(q, 0.25257802746197516, 0);
  sqcRYGate(q, -0.04432823104230056, 1);
  sqcRZGate(q, -2.795434893834766, 1);
  sqcRYGate(q, -1.4047468636383282, 2);
  sqcRZGate(q, -0.19816473904727622, 2);
  sqcRYGate(q, -2.0505995270915633, 3);
  sqcRZGate(q, -3.1314103136314637, 3);
  sqcRYGate(q, 3.1143050850144562, 4);
  sqcRZGate(q, -1.6064143098141013, 4);
  sqcRYGate(q, -3.1211886144616625, 5);
  sqcRZGate(q, 1.2572895749453599, 5);
  sqcRYGate(q, 0.646455571002846, 6);
  sqcRZGate(q, -2.960879433057051, 6);
  sqcRYGate(q, 0.4702203901783851, 7);
  sqcRZGate(q, 0.13502292548995457, 7);
  sqcRYGate(q, 3.139774155122987, 8);
  sqcRZGate(q, -0.25467159726988253, 8);
  sqcRYGate(q, -1.4934706690532904, 9);
  sqcRZGate(q, -1.0689853146782733, 9);
  sqcRYGate(q, 0.1849894613944203, 10);
  sqcRZGate(q, 1.934252411120081, 10);
  sqcRYGate(q, 0.006519532434640318, 11);
  sqcRZGate(q, 1.676296538377582, 11);
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
  sqcRYGate(q, -1.5027820236305847, 0);
  sqcRZGate(q, -1.8413425096705314, 0);
  sqcRYGate(q, 2.964908909174315, 1);
  sqcRZGate(q, 2.3163671987594867, 1);
  sqcRYGate(q, -1.2955626169221315, 2);
  sqcRZGate(q, 0.03780590083574786, 2);
  sqcRYGate(q, 1.506245145491004, 3);
  sqcRZGate(q, 2.888807685649323, 3);
  sqcRYGate(q, 3.132786346953885, 4);
  sqcRZGate(q, -1.702477637211243, 4);
  sqcRYGate(q, 3.11108731450869, 5);
  sqcRZGate(q, -0.023524196859476376, 5);
  sqcRYGate(q, -1.2506407397147055, 6);
  sqcRZGate(q, 2.789276225946482, 6);
  sqcRYGate(q, 1.576257572949878, 7);
  sqcRZGate(q, 0.9040607231247678, 7);
  sqcRYGate(q, -1.5204299812812394, 8);
  sqcRZGate(q, -1.7078396199418784, 8);
  sqcRYGate(q, 2.4229406180320416, 9);
  sqcRZGate(q, -1.6001349416408877, 9);
  sqcRYGate(q, -3.055838395848197, 10);
  sqcRZGate(q, -0.9432809997349088, 10);
  sqcRYGate(q, -3.087328240871254, 11);
  sqcRZGate(q, 2.9678251520641084, 11);
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
  sqcRYGate(q, -1.5446411057860616, 0);
  sqcRZGate(q, -2.6573067203181755, 0);
  sqcRYGate(q, -2.7798286982513627, 1);
  sqcRZGate(q, -3.105252563675448, 1);
  sqcRYGate(q, 2.5927319188401228, 2);
  sqcRZGate(q, 0.04056580848169747, 2);
  sqcRYGate(q, -1.134610921261623, 3);
  sqcRZGate(q, -2.751557293614645, 3);
  sqcRYGate(q, -3.0412005881675266, 4);
  sqcRZGate(q, 2.3491947918126854, 4);
  sqcRYGate(q, -1.6949386942511562, 5);
  sqcRZGate(q, 1.4696029301678655, 5);
  sqcRYGate(q, -0.4907261413954765, 6);
  sqcRZGate(q, 2.061335098405995, 6);
  sqcRYGate(q, 0.37559578006673966, 7);
  sqcRZGate(q, 0.9887722340361644, 7);
  sqcRYGate(q, -0.35685919915621744, 8);
  sqcRZGate(q, -2.2875970965229393, 8);
  sqcRYGate(q, -0.5984535673394964, 9);
  sqcRZGate(q, 0.13574527863291996, 9);
  sqcRYGate(q, -3.005127782841183, 10);
  sqcRZGate(q, 0.7371018215405015, 10);
  sqcRYGate(q, -0.010640681703143922, 11);
  sqcRZGate(q, 2.7126186661195884, 11);
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
  sqcRYGate(q, 1.8732129200166794, 0);
  sqcRZGate(q, 0.5701947631963256, 0);
  sqcRYGate(q, 2.7462444300822493, 1);
  sqcRZGate(q, -2.8860925272433766, 1);
  sqcRYGate(q, -2.7194478889009592, 2);
  sqcRZGate(q, -2.338457885819678, 2);
  sqcRYGate(q, 3.0437576968240725, 3);
  sqcRZGate(q, 0.14694715369384173, 3);
  sqcRYGate(q, 3.1415229277099845, 4);
  sqcRZGate(q, -2.1271629477639613, 4);
  sqcRYGate(q, -1.2345971921251182, 5);
  sqcRZGate(q, -2.7691653802709992, 5);
  sqcRYGate(q, 3.1379304474719296, 6);
  sqcRZGate(q, -3.0554375598369434, 6);
  sqcRYGate(q, 3.1377749489126145, 7);
  sqcRZGate(q, 0.8778628051926795, 7);
  sqcRYGate(q, 0.06698830618300988, 8);
  sqcRZGate(q, -2.2208066744333754, 8);
  sqcRYGate(q, 0.909842990873436, 9);
  sqcRZGate(q, 3.0033352081308036, 9);
  sqcRYGate(q, 1.246282430648957, 10);
  sqcRZGate(q, 2.7383552213907496, 10);
  sqcRYGate(q, -1.2845862380290276, 11);
  sqcRZGate(q, 2.8373004583139485, 11);
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
  sqcRYGate(q, 2.6448447932602424, 0);
  sqcRZGate(q, -0.856998401570291, 0);
  sqcRYGate(q, 1.4519144324910982, 1);
  sqcRZGate(q, 2.560134513905155, 1);
  sqcRYGate(q, 0.28196442283433854, 2);
  sqcRZGate(q, -2.3062212754594604, 2);
  sqcRYGate(q, -2.008404748520925, 3);
  sqcRZGate(q, -1.601440004246245, 3);
  sqcRYGate(q, -3.1378430484303426, 4);
  sqcRZGate(q, 2.850887277211179, 4);
  sqcRYGate(q, -1.8894005562231149, 5);
  sqcRZGate(q, 1.0018629757806388, 5);
  sqcRYGate(q, 2.825289984051551, 6);
  sqcRZGate(q, 1.0974936332859169, 6);
  sqcRYGate(q, -2.769842412888532, 7);
  sqcRZGate(q, 0.010902474443816422, 7);
  sqcRYGate(q, 1.3450496277722794, 8);
  sqcRZGate(q, -1.574680820182105, 8);
  sqcRYGate(q, -0.8522401730154741, 9);
  sqcRZGate(q, 2.4379220594414064, 9);
  sqcRYGate(q, -2.1974071421107815, 10);
  sqcRZGate(q, -2.6953676203216403, 10);
  sqcRYGate(q, -3.137209448339337, 11);
  sqcRZGate(q, -0.26347388523087195, 11);
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
  sqcRYGate(q, 1.5488798916246216, 0);
  sqcRZGate(q, -2.67693957483292, 0);
  sqcRYGate(q, -0.03986157681769775, 1);
  sqcRZGate(q, -0.547534968015345, 1);
  sqcRYGate(q, 1.3005311638649053, 2);
  sqcRZGate(q, 1.469602736551555, 2);
  sqcRYGate(q, 0.07000625611770239, 3);
  sqcRZGate(q, 2.09100197487985, 3);
  sqcRYGate(q, -3.072562191229772, 4);
  sqcRZGate(q, -3.051906231283549, 4);
  sqcRYGate(q, -1.245535107321399, 5);
  sqcRZGate(q, 1.3655294105504787, 5);
  sqcRYGate(q, -2.9125077022093704, 6);
  sqcRZGate(q, -0.415834913611497, 6);
  sqcRYGate(q, 1.5470746070593133, 7);
  sqcRZGate(q, 1.6063596614963258, 7);
  sqcRYGate(q, 3.055071653214867, 8);
  sqcRZGate(q, 2.3998856867104816, 8);
  sqcRYGate(q, 0.022494907816969167, 9);
  sqcRZGate(q, 1.874986125960044, 9);
  sqcRYGate(q, 0.8110608374432999, 10);
  sqcRZGate(q, -1.046239265882572, 10);
  sqcRYGate(q, -1.427687136430066, 11);
  sqcRZGate(q, -2.5724100543729778, 11);
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
  sqcRYGate(q, -2.0576506844034124, 0);
  sqcRZGate(q, 0.8190502397928233, 0);
  sqcRYGate(q, 1.498335139429221, 1);
  sqcRZGate(q, 1.6121436769834192, 1);
  sqcRYGate(q, 1.5979707817579831, 2);
  sqcRZGate(q, 1.4364502102912642, 2);
  sqcRYGate(q, 1.544449957382768, 3);
  sqcRZGate(q, -1.7345183681807592, 3);
  sqcRYGate(q, 0.7546528719766847, 4);
  sqcRZGate(q, 2.7683162966074133, 4);
  sqcRYGate(q, -1.4889100454546007, 5);
  sqcRZGate(q, -0.19002102254155415, 5);
  sqcRYGate(q, 1.0387743794609408, 6);
  sqcRZGate(q, 3.073596606688755, 6);
  sqcRYGate(q, -1.5755020933654789, 7);
  sqcRZGate(q, 2.2014522879209917, 7);
  sqcRYGate(q, -3.1135764110935686, 8);
  sqcRZGate(q, 0.3371022263518473, 8);
  sqcRYGate(q, -2.738586780204268, 9);
  sqcRZGate(q, 2.6368449654860084, 9);
  sqcRYGate(q, 2.764917061290395, 10);
  sqcRZGate(q, 0.14996066571455327, 10);
  sqcRYGate(q, 0.0071890838632322485, 11);
  sqcRZGate(q, 2.3879553633079005, 11);
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
  sqcRYGate(q, -3.004935371362986, 0);
  sqcRZGate(q, -1.1032728318490328, 0);
  sqcRYGate(q, -1.7888278443278836, 1);
  sqcRZGate(q, -0.24053171208678847, 1);
  sqcRYGate(q, 3.120556019736374, 2);
  sqcRZGate(q, 1.1947701946463347, 2);
  sqcRYGate(q, 2.7612067610997584, 3);
  sqcRZGate(q, 1.5692312151017056, 3);
  sqcRYGate(q, -0.006127113132930795, 4);
  sqcRZGate(q, -2.8284482816435994, 4);
  sqcRYGate(q, 3.09063363028375, 5);
  sqcRZGate(q, -0.10240986977423332, 5);
  sqcRYGate(q, 1.5476210180206138, 6);
  sqcRZGate(q, 3.1357275349941403, 6);
  sqcRYGate(q, -0.0012799108211914495, 7);
  sqcRZGate(q, -2.2000130411680097, 7);
  sqcRYGate(q, -0.012836928028452377, 8);
  sqcRZGate(q, -2.6923496615074627, 8);
  sqcRYGate(q, 1.462269343297927, 9);
  sqcRZGate(q, 3.008060348073194, 9);
  sqcRYGate(q, -0.42430110838909224, 10);
  sqcRZGate(q, 2.2561474338770116, 10);
  sqcRYGate(q, -2.823304439572758, 11);
  sqcRZGate(q, -2.5590552397408004, 11);
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
  sqcRYGate(q, 1.8556972846958895, 0);
  sqcRZGate(q, 0.04947189216429671, 0);
  sqcRYGate(q, 2.423689795444581, 1);
  sqcRZGate(q, 2.5283924351199114, 1);
  sqcRYGate(q, -0.025633613792657058, 2);
  sqcRZGate(q, 1.6627108767637138, 2);
  sqcRYGate(q, -1.5978996389485909, 3);
  sqcRZGate(q, -0.7927642411560747, 3);
  sqcRYGate(q, -0.7261819845411198, 4);
  sqcRZGate(q, -3.1089713880384995, 4);
  sqcRYGate(q, -1.5707087587321675, 5);
  sqcRZGate(q, 1.5888881113581883, 5);
  sqcRYGate(q, 1.0114886487989074, 6);
  sqcRZGate(q, -1.14235955518176, 6);
  sqcRYGate(q, 1.9575752759121068, 7);
  sqcRZGate(q, 1.1969637545878848, 7);
  sqcRYGate(q, -0.004998133841546899, 8);
  sqcRZGate(q, -1.7022193991787677, 8);
  sqcRYGate(q, 2.7117157068661677, 9);
  sqcRZGate(q, -0.3913937528116582, 9);
  sqcRYGate(q, -1.3618312532765777, 10);
  sqcRZGate(q, -2.360042568838009, 10);
  sqcRYGate(q, -3.13113362190997, 11);
  sqcRZGate(q, -2.8733171111620583, 11);
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
  sqcRYGate(q, -1.3803137299361712, 0);
  sqcRZGate(q, 2.70985834196264, 0);
  sqcRYGate(q, -2.4296438042909188, 1);
  sqcRZGate(q, 0.1265413854894799, 1);
  sqcRYGate(q, -1.6432354553910207, 2);
  sqcRZGate(q, 1.5665688545884497, 2);
  sqcRYGate(q, -2.6580289045793175, 3);
  sqcRZGate(q, -1.647715331647393, 3);
  sqcRYGate(q, 1.574619202166747, 4);
  sqcRZGate(q, 1.156315677787641, 4);
  sqcRYGate(q, 1.639348631668196, 5);
  sqcRZGate(q, 0.7850250954108894, 5);
  sqcRYGate(q, -2.9459593221283624, 6);
  sqcRZGate(q, -1.5964198910512208, 6);
  sqcRYGate(q, 1.6264508003321785, 7);
  sqcRZGate(q, 1.0759015518025656, 7);
  sqcRYGate(q, 0.24664388445560625, 8);
  sqcRZGate(q, 1.7019645395429348, 8);
  sqcRYGate(q, 2.646871526013401, 9);
  sqcRZGate(q, 0.6205369525478445, 9);
  sqcRYGate(q, -0.3515979998086118, 10);
  sqcRZGate(q, 0.7646654658638891, 10);
  sqcRYGate(q, -2.9350793062663914, 11);
  sqcRZGate(q, -0.7684205067731474, 11);
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
  sqcRYGate(q, -0.2542987553154845, 0);
  sqcRZGate(q, -2.3996673634295154, 0);
  sqcRYGate(q, -1.4945980878580034, 1);
  sqcRZGate(q, -1.5209218295305669, 1);
  sqcRYGate(q, 2.1549895095031317, 2);
  sqcRZGate(q, -1.601933777947772, 2);
  sqcRYGate(q, 1.570091246483556, 3);
  sqcRZGate(q, 0.007920913367036597, 3);
  sqcRYGate(q, 3.132993565321397, 4);
  sqcRZGate(q, -3.0957953808637106, 4);
  sqcRYGate(q, -3.139135318979419, 5);
  sqcRZGate(q, 0.13925935854034394, 5);
  sqcRYGate(q, 3.1346642602844277, 6);
  sqcRZGate(q, -1.9245000877124074, 6);
  sqcRYGate(q, -3.1198756237338254, 7);
  sqcRZGate(q, -0.5769260456547524, 7);
  sqcRYGate(q, 0.04584559332521662, 8);
  sqcRZGate(q, 0.30010423359322125, 8);
  sqcRYGate(q, 3.098398505668353, 9);
  sqcRZGate(q, -0.7132201452978781, 9);
  sqcRYGate(q, 0.842591458130256, 10);
  sqcRZGate(q, -2.4554524158984634, 10);
  sqcRYGate(q, -3.1324057122364026, 11);
  sqcRZGate(q, -1.648550837428032, 11);
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
  sqcRYGate(q, -0.11447479269733397, 0);
  sqcRZGate(q, -2.4318858418019262, 0);
  sqcRYGate(q, -1.544587165003711, 1);
  sqcRZGate(q, -1.49815033731307, 1);
  sqcRYGate(q, 1.5726583754246155, 2);
  sqcRZGate(q, -1.5695681072546388, 2);
  sqcRYGate(q, 0.14327305607090168, 3);
  sqcRZGate(q, -2.8190263564388887, 3);
  sqcRYGate(q, -1.5608185129149177, 4);
  sqcRZGate(q, -1.3998976225773234, 4);
  sqcRYGate(q, -0.03998062234267774, 5);
  sqcRZGate(q, -1.8471196071519125, 5);
  sqcRYGate(q, -1.9501116798565867, 6);
  sqcRZGate(q, 0.6282892636964222, 6);
  sqcRYGate(q, -0.3095823679039454, 7);
  sqcRZGate(q, -0.49379701434476503, 7);
  sqcRYGate(q, 0.578055567278541, 8);
  sqcRZGate(q, -0.1738578073787354, 8);
  sqcRYGate(q, -1.5279168304877562, 9);
  sqcRZGate(q, 1.096930810893311, 9);
  sqcRYGate(q, 2.2772086801383757, 10);
  sqcRZGate(q, -2.7953554008355384, 10);
  sqcRYGate(q, -0.2101403158494387, 11);
  sqcRZGate(q, -2.6055629503244115, 11);
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
  sqcRYGate(q, 0.0024966281611662985, 0);
  sqcRZGate(q, -1.9166324664135637, 0);
  sqcRYGate(q, -1.5714312293213692, 1);
  sqcRZGate(q, 2.6272822266618294, 1);
  sqcRYGate(q, -1.5704633215319161, 2);
  sqcRZGate(q, 0.8789476976171452, 2);
  sqcRYGate(q, -4.410699629531222e-05, 3);
  sqcRZGate(q, 2.597525577853383, 3);
  sqcRYGate(q, 3.086400955650103, 4);
  sqcRZGate(q, 3.0724855000122178, 4);
  sqcRYGate(q, 3.1386070176080296, 5);
  sqcRZGate(q, 1.2374904769493638, 5);
  sqcRYGate(q, 0.003389448441710714, 6);
  sqcRZGate(q, -2.6441473348565303, 6);
  sqcRYGate(q, 3.0850529024214923, 7);
  sqcRZGate(q, -1.0350336100301565, 7);
  sqcRYGate(q, -0.01926919372149908, 8);
  sqcRZGate(q, 1.6320011139119357, 8);
  sqcRYGate(q, -3.115753663746886, 9);
  sqcRZGate(q, -2.37409633966932, 9);
  sqcRYGate(q, -1.694497047356446, 10);
  sqcRZGate(q, -2.435297185759298, 10);
  sqcRYGate(q, -3.133491498790377, 11);
  sqcRZGate(q, -2.312290840402868, 11);
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
  sqcRYGate(q, -0.49886935082573025, 0);
  sqcRZGate(q, -2.2761685862816736, 0);
  sqcRYGate(q, 1.6796736943227317, 1);
  sqcRZGate(q, -0.5439352692329836, 1);
  sqcRYGate(q, -2.644303723660646, 2);
  sqcRZGate(q, 0.8643046858489091, 2);
  sqcRYGate(q, -1.087127935777584, 3);
  sqcRZGate(q, 1.271393475908262, 3);
  sqcRYGate(q, 2.2037919383295734, 4);
  sqcRZGate(q, -2.0808107042417134, 4);
  sqcRYGate(q, 0.4989093639283487, 5);
  sqcRZGate(q, 0.7818802198043833, 5);
  sqcRYGate(q, 2.4747470653992667, 6);
  sqcRZGate(q, -2.5600920947815515, 6);
  sqcRYGate(q, -0.5548788514501375, 7);
  sqcRZGate(q, -2.497693697763438, 7);
  sqcRYGate(q, -1.8948040598321327, 8);
  sqcRZGate(q, -1.2203151073624494, 8);
  sqcRYGate(q, 1.7183159008596398, 9);
  sqcRZGate(q, -2.370537111285341, 9);
  sqcRYGate(q, 1.5145544288361288, 10);
  sqcRZGate(q, -1.6003220289715545, 10);
  sqcRYGate(q, -2.389490908832549, 11);
  sqcRZGate(q, -2.3873488094854136, 11);

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
