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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.2938868874046188, 0);
  sqcRZGate(q, 0.6381075600209004, 0);
  sqcRYGate(q, 2.9117989262050616, 1);
  sqcRZGate(q, -1.7953531925903272, 1);
  sqcRYGate(q, 2.4635029772136234, 2);
  sqcRZGate(q, 2.860944469114232, 2);
  sqcRYGate(q, -3.141564580766741, 3);
  sqcRZGate(q, -0.24945675669411482, 3);
  sqcRYGate(q, -1.2358291855456116, 4);
  sqcRZGate(q, -0.10726753387396548, 4);
  sqcRYGate(q, -0.024572187315151872, 5);
  sqcRZGate(q, -3.015570190333455, 5);
  sqcRYGate(q, 8.410337316042742e-06, 6);
  sqcRZGate(q, -0.4893980070641263, 6);
  sqcRYGate(q, 1.5600964109052156, 7);
  sqcRZGate(q, 1.0995798146139304, 7);
  sqcRYGate(q, -1.5574299063789305, 8);
  sqcRZGate(q, -0.034052755244216464, 8);
  sqcRYGate(q, -0.0005121421818863325, 9);
  sqcRZGate(q, 2.945275083799461, 9);
  sqcRYGate(q, 0.9956257582433894, 10);
  sqcRZGate(q, -0.703078922256001, 10);
  sqcRYGate(q, 0.010088462210739939, 11);
  sqcRZGate(q, -0.41731890529525906, 11);
  sqcRYGate(q, 3.0782949104890034, 12);
  sqcRZGate(q, -0.07496700780322728, 12);
  sqcRYGate(q, -1.8233165377856042, 13);
  sqcRZGate(q, -1.7907740892060415, 13);
  sqcRYGate(q, 3.040531470875601, 14);
  sqcRZGate(q, -2.043367118948864, 14);
  sqcRYGate(q, -0.04790166658267747, 15);
  sqcRZGate(q, -2.1189593673666742, 15);
  sqcRYGate(q, -1.5709153338061905, 16);
  sqcRZGate(q, -1.6310714433523077, 16);
  sqcRYGate(q, 0.33901749014521343, 17);
  sqcRZGate(q, 1.942095372572104, 17);
  sqcRYGate(q, -2.6234676433667024, 18);
  sqcRZGate(q, 0.3947911904988093, 18);
  sqcRYGate(q, 1.5149649097638118, 19);
  sqcRZGate(q, 2.4958056551354595, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.7112956713735556, 0);
  sqcRZGate(q, 1.2496099504128493, 0);
  sqcRYGate(q, 1.573187033576863, 1);
  sqcRZGate(q, 2.173475179708567, 1);
  sqcRYGate(q, -0.7596422777346657, 2);
  sqcRZGate(q, -2.8880302690362787, 2);
  sqcRYGate(q, -1.9518081036394728, 3);
  sqcRZGate(q, 1.456151491623217, 3);
  sqcRYGate(q, 1.815380742054196, 4);
  sqcRZGate(q, -3.0420603237152415, 4);
  sqcRYGate(q, -0.009095287014378648, 5);
  sqcRZGate(q, 0.7385532875870515, 5);
  sqcRYGate(q, -1.5708089604128037, 6);
  sqcRZGate(q, -0.7093147615011316, 6);
  sqcRYGate(q, 1.0508182508535509, 7);
  sqcRZGate(q, 0.6679153268581801, 7);
  sqcRYGate(q, -2.4971078729740306, 8);
  sqcRZGate(q, -0.6945127710883074, 8);
  sqcRYGate(q, -3.1238113264483807, 9);
  sqcRZGate(q, -2.5902700352501187, 9);
  sqcRYGate(q, -2.3948574530327056, 10);
  sqcRZGate(q, -1.8231276203667397, 10);
  sqcRYGate(q, 2.0702347606266316, 11);
  sqcRZGate(q, 0.7863209193882609, 11);
  sqcRYGate(q, -0.8251219220407755, 12);
  sqcRZGate(q, 0.2350558676039105, 12);
  sqcRYGate(q, -1.6407549444288572, 13);
  sqcRZGate(q, 1.0522080968125014, 13);
  sqcRYGate(q, 3.1361511727035634, 14);
  sqcRZGate(q, 1.2017475396327784, 14);
  sqcRYGate(q, -0.003008060918111762, 15);
  sqcRZGate(q, -0.13791307913709347, 15);
  sqcRYGate(q, 2.5262350045094832, 16);
  sqcRZGate(q, -0.5095819643466406, 16);
  sqcRYGate(q, -0.2009724294552192, 17);
  sqcRZGate(q, -1.5304702893751936, 17);
  sqcRYGate(q, 0.38914415962745696, 18);
  sqcRZGate(q, 1.9265181515016465, 18);
  sqcRYGate(q, 0.5105971787672102, 19);
  sqcRZGate(q, -1.9360207696183074, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.96346735152007, 0);
  sqcRZGate(q, 0.8467810631851689, 0);
  sqcRYGate(q, 2.917668573013994, 1);
  sqcRZGate(q, -0.6931179201460451, 1);
  sqcRYGate(q, 0.0002943432337402841, 2);
  sqcRZGate(q, 2.9460286552403354, 2);
  sqcRYGate(q, 3.1393814520961305, 3);
  sqcRZGate(q, 1.4566683185544747, 3);
  sqcRYGate(q, -3.1407579602954527, 4);
  sqcRZGate(q, 2.4099117673446804, 4);
  sqcRYGate(q, -1.5707791657609398, 5);
  sqcRZGate(q, 0.4121871488706875, 5);
  sqcRYGate(q, -0.21861134101030455, 6);
  sqcRZGate(q, -0.01376375598684866, 6);
  sqcRYGate(q, -2.4980603317546097, 7);
  sqcRZGate(q, -0.2352588584588311, 7);
  sqcRYGate(q, 0.7270993160651011, 8);
  sqcRZGate(q, 2.441965797789724, 8);
  sqcRYGate(q, 3.138317997998006, 9);
  sqcRZGate(q, -2.4609963735350977, 9);
  sqcRYGate(q, 2.724618915493718, 10);
  sqcRZGate(q, -0.04008223557249923, 10);
  sqcRYGate(q, 0.0001423389197983127, 11);
  sqcRZGate(q, -0.5842575643287844, 11);
  sqcRYGate(q, 1.3090973190513253, 12);
  sqcRZGate(q, 0.0021746969146647643, 12);
  sqcRYGate(q, -2.4132419028294025, 13);
  sqcRZGate(q, -1.2307455212447183, 13);
  sqcRYGate(q, 0.21025252510384107, 14);
  sqcRZGate(q, 0.46824878589185626, 14);
  sqcRYGate(q, 3.0923725202247168, 15);
  sqcRZGate(q, 0.05275382487639849, 15);
  sqcRYGate(q, -1.8419852200168334, 16);
  sqcRZGate(q, -1.5231828373047416, 16);
  sqcRYGate(q, -2.804469802843714, 17);
  sqcRZGate(q, -2.241032880110155, 17);
  sqcRYGate(q, -2.4645054081124647, 18);
  sqcRZGate(q, 2.6141735833933706, 18);
  sqcRYGate(q, 2.026454020596053, 19);
  sqcRZGate(q, 0.29835254379386544, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.8554290081340048, 0);
  sqcRZGate(q, -2.6962536405950557, 0);
  sqcRYGate(q, -1.6295928875033985, 1);
  sqcRZGate(q, -1.3550719772787385, 1);
  sqcRYGate(q, -2.337013759950385, 2);
  sqcRZGate(q, 2.9968139551602535, 2);
  sqcRYGate(q, -1.9516080035620131, 3);
  sqcRZGate(q, -2.5634187956071752, 3);
  sqcRYGate(q, -1.5707788892427283, 4);
  sqcRZGate(q, -1.7606347387400074, 4);
  sqcRYGate(q, 0.42509764175986675, 5);
  sqcRZGate(q, 3.0778607472885917, 5);
  sqcRYGate(q, 1.4648029174824257, 6);
  sqcRZGate(q, 2.68742476100354, 6);
  sqcRYGate(q, -0.36296088832037476, 7);
  sqcRZGate(q, -1.1636761526431147, 7);
  sqcRYGate(q, -2.8462860949085047, 8);
  sqcRZGate(q, 0.05491096787578531, 8);
  sqcRYGate(q, 1.6802079518664055, 9);
  sqcRZGate(q, -0.5949985759592611, 9);
  sqcRYGate(q, -2.7728944863444154, 10);
  sqcRZGate(q, 1.2583752216862676, 10);
  sqcRYGate(q, 3.137480372713179, 11);
  sqcRZGate(q, 1.5517738913858956, 11);
  sqcRYGate(q, -1.028346543590575, 12);
  sqcRZGate(q, -3.1410710354808775, 12);
  sqcRYGate(q, -0.00037843160491914774, 13);
  sqcRZGate(q, 1.7360729519998623, 13);
  sqcRYGate(q, 0.008024418219214624, 14);
  sqcRZGate(q, 3.096022433141242, 14);
  sqcRYGate(q, 3.133038802878764, 15);
  sqcRZGate(q, 2.62552036597841, 15);
  sqcRYGate(q, 2.938727668048659, 16);
  sqcRZGate(q, 0.13599145765127396, 16);
  sqcRYGate(q, 2.991701390436962, 17);
  sqcRZGate(q, 2.2102045094011125, 17);
  sqcRYGate(q, -3.0587916231165235, 18);
  sqcRZGate(q, 2.3402182679359806, 18);
  sqcRYGate(q, 1.7574480484808606, 19);
  sqcRZGate(q, -1.273427627433867, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.8495176284354381, 0);
  sqcRZGate(q, -2.3858491443198595, 0);
  sqcRYGate(q, -0.18574893812149895, 1);
  sqcRZGate(q, 2.6388803768595475, 1);
  sqcRYGate(q, 1.5424320839879755, 2);
  sqcRZGate(q, 0.1355030211532322, 2);
  sqcRYGate(q, -1.5704769710896729, 3);
  sqcRZGate(q, 0.34698545520469504, 3);
  sqcRYGate(q, -2.44294331233203, 4);
  sqcRZGate(q, -1.0644927246318474, 4);
  sqcRYGate(q, 0.1156304752268417, 5);
  sqcRZGate(q, -0.700113627731815, 5);
  sqcRYGate(q, -3.0391987539802687, 6);
  sqcRZGate(q, 2.848985609667253, 6);
  sqcRYGate(q, -0.008457356053726883, 7);
  sqcRZGate(q, -1.1693578577211179, 7);
  sqcRYGate(q, 0.0008698625187895105, 8);
  sqcRZGate(q, -2.704734415873119, 8);
  sqcRYGate(q, -3.140627837997465, 9);
  sqcRZGate(q, -2.082237729870144, 9);
  sqcRYGate(q, 0.8135234725120684, 10);
  sqcRZGate(q, -0.8144452021246957, 10);
  sqcRYGate(q, 0.0001820468426450006, 11);
  sqcRZGate(q, -0.950502878645599, 11);
  sqcRYGate(q, 1.8310227347647237, 12);
  sqcRZGate(q, -1.6648726399228266, 12);
  sqcRYGate(q, -1.7449501402896062, 13);
  sqcRZGate(q, 1.2436940742326033, 13);
  sqcRYGate(q, 2.9075026697878776, 14);
  sqcRZGate(q, 1.983006304498346, 14);
  sqcRYGate(q, 3.1271232861204963, 15);
  sqcRZGate(q, -0.32178507824809527, 15);
  sqcRYGate(q, 2.538546917491559, 16);
  sqcRZGate(q, -2.9448029298703053, 16);
  sqcRYGate(q, 1.7664061247164546, 17);
  sqcRZGate(q, 1.8179949697432765, 17);
  sqcRYGate(q, -2.803287326682987, 18);
  sqcRZGate(q, -2.206710825082701, 18);
  sqcRYGate(q, 3.1313279273094707, 19);
  sqcRZGate(q, 2.154108106578905, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.8150589801859645, 0);
  sqcRZGate(q, 0.44365352389725204, 0);
  sqcRYGate(q, -0.10573346743154134, 1);
  sqcRZGate(q, 0.6984178438040068, 1);
  sqcRYGate(q, -1.5732875123159662, 2);
  sqcRZGate(q, -3.085205510277692, 2);
  sqcRYGate(q, 3.1415344616918692, 3);
  sqcRZGate(q, 1.897561054997562, 3);
  sqcRYGate(q, 0.004287941531424925, 4);
  sqcRZGate(q, -1.8757163404853607, 4);
  sqcRYGate(q, 3.02112387576329, 5);
  sqcRZGate(q, 0.09504062856861421, 5);
  sqcRYGate(q, -1.9894820097011374, 6);
  sqcRZGate(q, 0.6191372854615548, 6);
  sqcRYGate(q, 0.9009065884979117, 7);
  sqcRZGate(q, 1.002928312053378, 7);
  sqcRYGate(q, 0.43236353262693694, 8);
  sqcRZGate(q, -0.2933832469547193, 8);
  sqcRYGate(q, 2.250619617386503, 9);
  sqcRZGate(q, -2.1847564004156084, 9);
  sqcRYGate(q, 0.7894139801394973, 10);
  sqcRZGate(q, 0.9159851401662121, 10);
  sqcRYGate(q, 1.209392233006736, 11);
  sqcRZGate(q, -1.3844846999648608, 11);
  sqcRYGate(q, 0.059688102011766865, 12);
  sqcRZGate(q, -1.2349161999795144, 12);
  sqcRYGate(q, 1.8447612675113594, 13);
  sqcRZGate(q, -2.5134318767598907, 13);
  sqcRYGate(q, 0.09625367532328853, 14);
  sqcRZGate(q, 2.5420107283686635, 14);
  sqcRYGate(q, 3.11646822918389, 15);
  sqcRZGate(q, 1.3528945986230356, 15);
  sqcRYGate(q, 0.3306164911821533, 16);
  sqcRZGate(q, 0.2348043537880802, 16);
  sqcRYGate(q, 0.8532879810839383, 17);
  sqcRZGate(q, -1.2605284356254944, 17);
  sqcRYGate(q, -0.14514488973390982, 18);
  sqcRZGate(q, 0.5394801018100929, 18);
  sqcRYGate(q, -2.0561103833931207, 19);
  sqcRZGate(q, 2.229953842716842, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.458479150579229, 0);
  sqcRZGate(q, -3.052619587017558, 0);
  sqcRYGate(q, 0.31685965031980856, 1);
  sqcRZGate(q, -2.892158540823628, 1);
  sqcRYGate(q, -1.526728323300138, 2);
  sqcRZGate(q, -1.7313442566517239, 2);
  sqcRYGate(q, 1.9498598652011347, 3);
  sqcRZGate(q, -2.196931210470212, 3);
  sqcRYGate(q, 2.848721270256314, 4);
  sqcRZGate(q, -2.3597463891956116, 4);
  sqcRYGate(q, 2.5335035892490763, 5);
  sqcRZGate(q, -2.905125657302866, 5);
  sqcRYGate(q, 2.9185639723386347, 6);
  sqcRZGate(q, -2.9610282846519715, 6);
  sqcRYGate(q, 1.0901386920932028, 7);
  sqcRZGate(q, 0.12952015698898608, 7);
  sqcRYGate(q, 2.248204003118679, 8);
  sqcRZGate(q, -1.4532948141295856, 8);
  sqcRYGate(q, -0.2116663286940048, 9);
  sqcRZGate(q, -0.21088524483703883, 9);
  sqcRYGate(q, -1.2299910784849075, 10);
  sqcRZGate(q, -0.07882174690478304, 10);
  sqcRYGate(q, 3.1415713727800147, 11);
  sqcRZGate(q, 1.2711620436729119, 11);
  sqcRYGate(q, 0.0034377201461453536, 12);
  sqcRZGate(q, 0.05242464225777603, 12);
  sqcRYGate(q, 2.902839694609624, 13);
  sqcRZGate(q, -0.4322177881363308, 13);
  sqcRYGate(q, 1.5759780648246995, 14);
  sqcRZGate(q, 1.2211358585023744, 14);
  sqcRYGate(q, -0.9076945532506979, 15);
  sqcRZGate(q, 1.5545997224889527, 15);
  sqcRYGate(q, -0.19458463439705476, 16);
  sqcRZGate(q, 1.7521314891938766, 16);
  sqcRYGate(q, 1.1671072440020385, 17);
  sqcRZGate(q, -0.6707127054981611, 17);
  sqcRYGate(q, -3.138367382650643, 18);
  sqcRZGate(q, 1.378777161551742, 18);
  sqcRYGate(q, -1.6815512455511152, 19);
  sqcRZGate(q, 1.244948488913657, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9833952095125067, 0);
  sqcRZGate(q, 3.0022920822998613, 0);
  sqcRYGate(q, -2.7581622998413398, 1);
  sqcRZGate(q, -2.560726291971411, 1);
  sqcRYGate(q, -0.006607376465405355, 2);
  sqcRZGate(q, 1.4111947891660042, 2);
  sqcRYGate(q, -0.002799879079269837, 3);
  sqcRZGate(q, -0.9176447145543439, 3);
  sqcRYGate(q, 2.345970322431804, 4);
  sqcRZGate(q, 0.04018489483555409, 4);
  sqcRYGate(q, 1.5040489566596023, 5);
  sqcRZGate(q, -1.2278599328495021, 5);
  sqcRYGate(q, -3.0042826766001016, 6);
  sqcRZGate(q, -1.3142317665013072, 6);
  sqcRYGate(q, -0.0035311625534735214, 7);
  sqcRZGate(q, 0.4534540397959326, 7);
  sqcRYGate(q, -3.139946640647217, 8);
  sqcRZGate(q, 1.4194550307989973, 8);
  sqcRYGate(q, -0.7608533135315049, 9);
  sqcRZGate(q, 0.8158198791305018, 9);
  sqcRYGate(q, 0.16767740899132288, 10);
  sqcRZGate(q, -0.452323642853579, 10);
  sqcRYGate(q, 2.3002060565000932, 11);
  sqcRZGate(q, -0.44003490202491335, 11);
  sqcRYGate(q, -0.7654399258916346, 12);
  sqcRZGate(q, -1.756718528464541, 12);
  sqcRYGate(q, -0.06187243631114647, 13);
  sqcRZGate(q, 1.2705853339708355, 13);
  sqcRYGate(q, -3.140923296935063, 14);
  sqcRZGate(q, -1.846847962580456, 14);
  sqcRYGate(q, -0.00027452676130224063, 15);
  sqcRZGate(q, -1.5468661019562993, 15);
  sqcRYGate(q, 3.1111967050620914, 16);
  sqcRZGate(q, 0.9052601110670371, 16);
  sqcRYGate(q, 2.336086360528682, 17);
  sqcRZGate(q, -0.7470614507332788, 17);
  sqcRYGate(q, -0.463371573276632, 18);
  sqcRZGate(q, 0.17533210275771224, 18);
  sqcRYGate(q, 0.21042423047251457, 19);
  sqcRZGate(q, 0.38989249646896257, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.280330822834549, 0);
  sqcRZGate(q, -0.2375967529738263, 0);
  sqcRYGate(q, 1.8377913517154902, 1);
  sqcRZGate(q, 1.6141943227514206, 1);
  sqcRYGate(q, -2.693397676063385, 2);
  sqcRZGate(q, 2.622715527273672, 2);
  sqcRYGate(q, -0.1555938236818024, 3);
  sqcRZGate(q, -1.3916028518065393, 3);
  sqcRYGate(q, -1.416001965197096, 4);
  sqcRZGate(q, 0.7597921201720091, 4);
  sqcRYGate(q, -2.19848988710508, 5);
  sqcRZGate(q, -0.02360551492817543, 5);
  sqcRYGate(q, -0.048726648369696875, 6);
  sqcRZGate(q, -1.8326219957332175, 6);
  sqcRYGate(q, 0.9654355235816505, 7);
  sqcRZGate(q, -3.0194487742552534, 7);
  sqcRYGate(q, 3.0179944435973596, 8);
  sqcRZGate(q, -0.8563635207712931, 8);
  sqcRYGate(q, 2.1749132689748465, 9);
  sqcRZGate(q, -0.27405810610387693, 9);
  sqcRYGate(q, -0.014871703076005716, 10);
  sqcRZGate(q, 0.7781988746422288, 10);
  sqcRYGate(q, -0.25137757111083564, 11);
  sqcRZGate(q, -2.4814941334738854, 11);
  sqcRYGate(q, -1.5707777446561748, 12);
  sqcRZGate(q, -1.621684971428862, 12);
  sqcRYGate(q, -2.1502049952195215, 13);
  sqcRZGate(q, -2.6514341776042403, 13);
  sqcRYGate(q, -1.594911380783671, 14);
  sqcRZGate(q, -2.0672629235663615, 14);
  sqcRYGate(q, 0.9383690667050294, 15);
  sqcRZGate(q, 0.34853766093318495, 15);
  sqcRYGate(q, -0.32787806511882955, 16);
  sqcRZGate(q, 0.9899109178044259, 16);
  sqcRYGate(q, -0.6571367038458985, 17);
  sqcRZGate(q, 0.6791343853658631, 17);
  sqcRYGate(q, 0.054739356866173046, 18);
  sqcRZGate(q, -2.345778461969586, 18);
  sqcRYGate(q, 2.358229047671121, 19);
  sqcRZGate(q, 1.529114534282735, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.789143688864989, 0);
  sqcRZGate(q, -2.9424851096062477, 0);
  sqcRYGate(q, 1.4280951780833009, 1);
  sqcRZGate(q, 2.9748393541495903, 1);
  sqcRYGate(q, -3.1123799921647506, 2);
  sqcRZGate(q, -0.1373069187884548, 2);
  sqcRYGate(q, -0.00029886583234262076, 3);
  sqcRZGate(q, 2.806195343191161, 3);
  sqcRYGate(q, 3.0041837418027164, 4);
  sqcRZGate(q, 0.898429191349443, 4);
  sqcRYGate(q, 2.737585336955068, 5);
  sqcRZGate(q, 0.008874490889525077, 5);
  sqcRYGate(q, -3.087309622557385, 6);
  sqcRZGate(q, -0.041102124621184684, 6);
  sqcRYGate(q, -3.134839249455806, 7);
  sqcRZGate(q, 1.2906254732106408, 7);
  sqcRYGate(q, 0.009800769782589923, 8);
  sqcRZGate(q, -0.32005879625232553, 8);
  sqcRYGate(q, -1.1451607226083595, 9);
  sqcRZGate(q, -2.0711116341037865, 9);
  sqcRYGate(q, 3.109799305516901, 10);
  sqcRZGate(q, -2.6067974107113403, 10);
  sqcRYGate(q, 0.2481270486955045, 11);
  sqcRZGate(q, 0.4305395859696224, 11);
  sqcRYGate(q, -0.026867602903292334, 12);
  sqcRZGate(q, 3.140190724174002, 12);
  sqcRYGate(q, -1.5707949749393055, 13);
  sqcRZGate(q, -2.5802094869408623, 13);
  sqcRYGate(q, -0.021852189552129364, 14);
  sqcRZGate(q, 1.569880287722342, 14);
  sqcRYGate(q, 0.01869920562905375, 15);
  sqcRZGate(q, 2.587890307159048, 15);
  sqcRYGate(q, -0.5096363378137613, 16);
  sqcRZGate(q, 0.3578683219672356, 16);
  sqcRYGate(q, -2.8148250842181963, 17);
  sqcRZGate(q, 1.0407000390304468, 17);
  sqcRYGate(q, -2.9666072668798953, 18);
  sqcRZGate(q, 0.6500513684022192, 18);
  sqcRYGate(q, 1.347603999232905, 19);
  sqcRZGate(q, -1.1042647142137323, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.3231528902918825, 0);
  sqcRZGate(q, -3.1342560238949324, 0);
  sqcRYGate(q, 2.889237881314811, 1);
  sqcRZGate(q, -1.2386325773704323, 1);
  sqcRYGate(q, -1.7290552468318663, 2);
  sqcRZGate(q, -1.1704858211031723, 2);
  sqcRYGate(q, 3.0795831499613873, 3);
  sqcRZGate(q, -1.91005270401064, 3);
  sqcRYGate(q, 0.8970677714656796, 4);
  sqcRZGate(q, 2.734460770588608, 4);
  sqcRYGate(q, -0.6233384608244236, 5);
  sqcRZGate(q, 1.8649324498316853, 5);
  sqcRYGate(q, -0.4209276581210819, 6);
  sqcRZGate(q, -0.46019308416744686, 6);
  sqcRYGate(q, 0.543151613757761, 7);
  sqcRZGate(q, -1.4254277122729748, 7);
  sqcRYGate(q, -2.34618812087948, 8);
  sqcRZGate(q, 1.535483905085442, 8);
  sqcRYGate(q, -2.2277759201766276, 9);
  sqcRZGate(q, 2.361016349688901, 9);
  sqcRYGate(q, -0.0028170443526792286, 10);
  sqcRZGate(q, 2.3135272670777822, 10);
  sqcRYGate(q, -2.8674149282171926, 11);
  sqcRZGate(q, -0.8048629611880008, 11);
  sqcRYGate(q, -2.6506860565015646, 12);
  sqcRZGate(q, -1.6517016799941588, 12);
  sqcRYGate(q, 2.3361806422636446, 13);
  sqcRZGate(q, 2.3954984661597845, 13);
  sqcRYGate(q, 1.5708690755234365, 14);
  sqcRZGate(q, -2.971055099552463, 14);
  sqcRYGate(q, -3.0549592386130975, 15);
  sqcRZGate(q, 0.1059638674935984, 15);
  sqcRYGate(q, 1.6896526277908404, 16);
  sqcRZGate(q, -3.0317746508020442, 16);
  sqcRYGate(q, -1.5616909652652686, 17);
  sqcRZGate(q, -1.1480232558279677, 17);
  sqcRYGate(q, -1.7688419676687077, 18);
  sqcRZGate(q, 1.7778725542830276, 18);
  sqcRYGate(q, -0.6812560598118491, 19);
  sqcRZGate(q, 2.545635114012095, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.8450070226387396, 0);
  sqcRZGate(q, 0.21633613922147263, 0);
  sqcRYGate(q, -0.5417790327161542, 1);
  sqcRZGate(q, -1.4992763255144463, 1);
  sqcRYGate(q, 0.006586787950970739, 2);
  sqcRZGate(q, 1.3187567396871769, 2);
  sqcRYGate(q, 3.0951306624043227, 3);
  sqcRZGate(q, -3.0523769533438827, 3);
  sqcRYGate(q, 0.1959170839599194, 4);
  sqcRZGate(q, 2.529866972235921, 4);
  sqcRYGate(q, 3.0021268124446134, 5);
  sqcRZGate(q, -0.8740441225198091, 5);
  sqcRYGate(q, -0.06619238657351811, 6);
  sqcRZGate(q, 0.24899539773439303, 6);
  sqcRYGate(q, 3.1392726634754573, 7);
  sqcRZGate(q, 0.7544106996279991, 7);
  sqcRYGate(q, -2.0479040003268674, 8);
  sqcRZGate(q, -3.140664760219851, 8);
  sqcRYGate(q, -0.08200765060521154, 9);
  sqcRZGate(q, 2.4727612890789565, 9);
  sqcRYGate(q, -0.04472107797645528, 10);
  sqcRZGate(q, 2.8433860819432444, 10);
  sqcRYGate(q, 2.4457094328008795, 11);
  sqcRZGate(q, -1.3013593576681712, 11);
  sqcRYGate(q, -0.009421984300851172, 12);
  sqcRZGate(q, 3.0923544255571063, 12);
  sqcRYGate(q, 3.0888055354272494, 13);
  sqcRZGate(q, 1.110362045299584, 13);
  sqcRYGate(q, 2.8956125249366975, 14);
  sqcRZGate(q, 1.675902395227616, 14);
  sqcRYGate(q, 1.570796301910462, 15);
  sqcRZGate(q, 1.0192767355190178, 15);
  sqcRYGate(q, -1.123711947498006, 16);
  sqcRZGate(q, -0.47328537927221237, 16);
  sqcRYGate(q, 0.14611993831153214, 17);
  sqcRZGate(q, 1.0969402261289956, 17);
  sqcRYGate(q, 1.8729177330804374, 18);
  sqcRZGate(q, 2.095036296698485, 18);
  sqcRYGate(q, 0.8069729912238861, 19);
  sqcRZGate(q, 0.4060503930558397, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.6021434488183469, 0);
  sqcRZGate(q, -0.6296927485842223, 0);
  sqcRYGate(q, 0.8135555804514986, 1);
  sqcRZGate(q, -0.8946772092793415, 1);
  sqcRYGate(q, 0.05456011213155657, 2);
  sqcRZGate(q, -0.18595813590072208, 2);
  sqcRYGate(q, 0.15573685971958007, 3);
  sqcRZGate(q, -1.9865540755936095, 3);
  sqcRYGate(q, 0.9083804679124068, 4);
  sqcRZGate(q, 0.6623625817571803, 4);
  sqcRYGate(q, 0.08372390080201715, 5);
  sqcRZGate(q, 3.0822749010510795, 5);
  sqcRYGate(q, 0.8103743939690968, 6);
  sqcRZGate(q, 2.426007164318776, 6);
  sqcRYGate(q, -0.06320572076990348, 7);
  sqcRZGate(q, -3.1037100282129098, 7);
  sqcRYGate(q, 2.139690360710521, 8);
  sqcRZGate(q, 0.016627329724279605, 8);
  sqcRYGate(q, 3.000995474263773, 9);
  sqcRZGate(q, 0.07180968169300514, 9);
  sqcRYGate(q, 0.07707120803671774, 10);
  sqcRZGate(q, 1.1652998442235523, 10);
  sqcRYGate(q, 0.5178539733128339, 11);
  sqcRZGate(q, -2.43352462184632, 11);
  sqcRYGate(q, -2.4696948830624508, 12);
  sqcRZGate(q, 0.08556732338789794, 12);
  sqcRYGate(q, 3.058138998530575, 13);
  sqcRZGate(q, 1.9372664371833825, 13);
  sqcRYGate(q, 3.1382757291854606, 14);
  sqcRZGate(q, -3.0241000115413885, 14);
  sqcRYGate(q, 0.015543063622264814, 15);
  sqcRZGate(q, 0.6026091538384692, 15);
  sqcRYGate(q, -1.5707926228034346, 16);
  sqcRZGate(q, 0.4971060265160743, 16);
  sqcRYGate(q, 2.906138491174036, 17);
  sqcRZGate(q, 1.2972296584281908, 17);
  sqcRYGate(q, -0.18412465031415082, 18);
  sqcRZGate(q, -2.987817998886647, 18);
  sqcRYGate(q, 3.076051539294825, 19);
  sqcRZGate(q, 0.5527768409132436, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.0129878929072538, 0);
  sqcRZGate(q, -0.8007275488418824, 0);
  sqcRYGate(q, -0.7061053032380018, 1);
  sqcRZGate(q, 1.7664582245262033, 1);
  sqcRYGate(q, 2.9817430252120203, 2);
  sqcRZGate(q, 0.22863046741106086, 2);
  sqcRYGate(q, 0.08102837726847323, 3);
  sqcRZGate(q, 2.7699292175235195, 3);
  sqcRYGate(q, -1.6749661303735355, 4);
  sqcRZGate(q, -2.6829945380211426, 4);
  sqcRYGate(q, -0.027311947508363858, 5);
  sqcRZGate(q, -1.0703965103321185, 5);
  sqcRYGate(q, 3.1178412190125684, 6);
  sqcRZGate(q, -0.3600541896695644, 6);
  sqcRYGate(q, 3.137731814597681, 7);
  sqcRZGate(q, -0.06159971204553604, 7);
  sqcRYGate(q, -1.084235906576591, 8);
  sqcRZGate(q, -2.4161494050226455, 8);
  sqcRYGate(q, -0.8356039968612352, 9);
  sqcRZGate(q, 1.3781995412675734, 9);
  sqcRYGate(q, 3.1396208233451164, 10);
  sqcRZGate(q, 0.837311558849164, 10);
  sqcRYGate(q, -3.131592337322867, 11);
  sqcRZGate(q, 3.079093381485073, 11);
  sqcRYGate(q, -0.010394731326935691, 12);
  sqcRZGate(q, -1.669928350741249, 12);
  sqcRYGate(q, -0.029177143464080135, 13);
  sqcRZGate(q, 1.6630433666776883, 13);
  sqcRYGate(q, 0.059807805095519306, 14);
  sqcRZGate(q, 1.9284971549666832, 14);
  sqcRYGate(q, -1.613468955982774, 15);
  sqcRZGate(q, 2.962474346754373, 15);
  sqcRYGate(q, -0.1687626530663832, 16);
  sqcRZGate(q, 0.6605499665167696, 16);
  sqcRYGate(q, -1.5707961222264863, 17);
  sqcRZGate(q, -3.0288257481567036, 17);
  sqcRYGate(q, -2.0883723323213395, 18);
  sqcRZGate(q, 0.3012196207758438, 18);
  sqcRYGate(q, 2.3923366022701953, 19);
  sqcRZGate(q, -0.41055644727847546, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.410569992843137, 0);
  sqcRZGate(q, -2.5796679591614606, 0);
  sqcRYGate(q, 0.7676192200034269, 1);
  sqcRZGate(q, 0.5354594352465482, 1);
  sqcRYGate(q, 1.8317163428189485, 2);
  sqcRZGate(q, 3.0966527386220566, 2);
  sqcRYGate(q, -0.015101908600624547, 3);
  sqcRZGate(q, 1.2903935368729367, 3);
  sqcRYGate(q, -0.8155212833362431, 4);
  sqcRZGate(q, 2.245826129960985, 4);
  sqcRYGate(q, -3.02638317065382, 5);
  sqcRZGate(q, -0.3812028944370106, 5);
  sqcRYGate(q, 1.9796207196808213, 6);
  sqcRZGate(q, -0.07297394619322262, 6);
  sqcRYGate(q, 1.0827757978077583, 7);
  sqcRZGate(q, -1.9654945662101788, 7);
  sqcRYGate(q, 0.7147849489717222, 8);
  sqcRZGate(q, -2.7866692577665746, 8);
  sqcRYGate(q, 2.967665290117275, 9);
  sqcRZGate(q, 0.6040886722860002, 9);
  sqcRYGate(q, 1.6612786141403664, 10);
  sqcRZGate(q, 2.198830953531835, 10);
  sqcRYGate(q, 0.6600519921799223, 11);
  sqcRZGate(q, 0.9825092462324807, 11);
  sqcRYGate(q, 1.8066748281695064, 12);
  sqcRZGate(q, 0.914232148621954, 12);
  sqcRYGate(q, -0.07144560430322205, 13);
  sqcRZGate(q, 0.4298762341330404, 13);
  sqcRYGate(q, 2.3959470902277284, 14);
  sqcRZGate(q, 0.27866808724608605, 14);
  sqcRYGate(q, -0.12885877182032954, 15);
  sqcRZGate(q, -2.3638410536117513, 15);
  sqcRYGate(q, 0.004761106308352581, 16);
  sqcRZGate(q, 0.9610961440150847, 16);
  sqcRYGate(q, 3.1358667272375853, 17);
  sqcRZGate(q, -3.0329102801695638, 17);
  sqcRYGate(q, -1.5707950209831596, 18);
  sqcRZGate(q, 2.9543444310602824, 18);
  sqcRYGate(q, 2.943954420791901, 19);
  sqcRZGate(q, 2.2731166791196635, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.03417950008963456, 0);
  sqcRZGate(q, 2.330495136533043, 0);
  sqcRYGate(q, -3.07728983304856, 1);
  sqcRZGate(q, -1.3663608431046017, 1);
  sqcRYGate(q, 2.7717587112357163, 2);
  sqcRZGate(q, -1.628756543862515, 2);
  sqcRYGate(q, -0.020475346127442097, 3);
  sqcRZGate(q, -2.0899304028329384, 3);
  sqcRYGate(q, 0.7864123328878403, 4);
  sqcRZGate(q, -2.0181171077434845, 4);
  sqcRYGate(q, -3.1243380689004936, 5);
  sqcRZGate(q, -0.21737686771466952, 5);
  sqcRYGate(q, -0.016401473896843655, 6);
  sqcRZGate(q, 0.35233102855330056, 6);
  sqcRYGate(q, 0.05286635954206531, 7);
  sqcRZGate(q, 1.6296574635500003, 7);
  sqcRYGate(q, 0.04059672384996826, 8);
  sqcRZGate(q, -2.235966630326052, 8);
  sqcRYGate(q, 3.114527594480665, 9);
  sqcRZGate(q, -1.7200662588792373, 9);
  sqcRYGate(q, -0.05247212923776079, 10);
  sqcRZGate(q, -2.8179847705762615, 10);
  sqcRYGate(q, 0.04344904411480787, 11);
  sqcRZGate(q, -0.8015429183124687, 11);
  sqcRYGate(q, -2.960477316116012, 12);
  sqcRZGate(q, -2.117918886323065, 12);
  sqcRYGate(q, 3.07253699200756, 13);
  sqcRZGate(q, 3.0814714685812925, 13);
  sqcRYGate(q, -2.870600480951714, 14);
  sqcRZGate(q, -2.210840599845631, 14);
  sqcRYGate(q, 3.1303345755602394, 15);
  sqcRZGate(q, 3.0834725807256986, 15);
  sqcRYGate(q, 3.0444877159019645, 16);
  sqcRZGate(q, 1.9001814407611903, 16);
  sqcRYGate(q, 1.7263670415134733, 17);
  sqcRZGate(q, -2.631897475235834, 17);
  sqcRYGate(q, -2.4237469285761106, 18);
  sqcRZGate(q, 2.5905253730638487, 18);
  sqcRYGate(q, -1.5707980743824141, 19);
  sqcRZGate(q, 1.302169755365879, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.6499763331272185, 0);
  sqcRZGate(q, -0.34126211738630485, 0);
  sqcRYGate(q, -0.22655935979058395, 1);
  sqcRZGate(q, 1.7655633053183042, 1);
  sqcRYGate(q, -1.2682058883702858, 2);
  sqcRZGate(q, 0.14376940273513306, 2);
  sqcRYGate(q, 1.9783332578295576, 3);
  sqcRZGate(q, -0.8747780111735569, 3);
  sqcRYGate(q, -2.720543123336572, 4);
  sqcRZGate(q, 0.750763301790686, 4);
  sqcRYGate(q, -1.186966389018138, 5);
  sqcRZGate(q, 2.35968867223538, 5);
  sqcRYGate(q, 0.30363595286585227, 6);
  sqcRZGate(q, 0.6460384227653542, 6);
  sqcRYGate(q, 3.0969858612536956, 7);
  sqcRZGate(q, 1.3808563164648122, 7);
  sqcRYGate(q, -1.5791241159569864, 8);
  sqcRZGate(q, 0.27224048055860006, 8);
  sqcRYGate(q, -1.3163275017162162, 9);
  sqcRZGate(q, -2.077474306437412, 9);
  sqcRYGate(q, 0.9033214655809575, 10);
  sqcRZGate(q, -2.91269953527052, 10);
  sqcRYGate(q, 0.8274376942896818, 11);
  sqcRZGate(q, -2.695691766848393, 11);
  sqcRYGate(q, 1.0225302358972164, 12);
  sqcRZGate(q, -0.029762538504851457, 12);
  sqcRYGate(q, -2.1519930175276727, 13);
  sqcRZGate(q, 0.10922478066871566, 13);
  sqcRYGate(q, 1.0228733648411392, 14);
  sqcRZGate(q, -1.810713716265143, 14);
  sqcRYGate(q, -1.9445730419483211, 15);
  sqcRZGate(q, -2.8009513333437424, 15);
  sqcRYGate(q, -0.3733759569417909, 16);
  sqcRZGate(q, -2.63387824209336, 16);
  sqcRYGate(q, 0.6548110081002445, 17);
  sqcRZGate(q, 1.3904845942560398, 17);
  sqcRYGate(q, 1.7198695643665463, 18);
  sqcRZGate(q, -1.4686696549453817, 18);
  sqcRYGate(q, -2.7290501953550934, 19);
  sqcRZGate(q, -0.1267907566667406, 19);

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
