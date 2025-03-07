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

  sqcRYGate(q, -2.117507438030642, 0);
  sqcRZGate(q, 3.0641499889843025, 0);
  sqcRYGate(q, -2.3473713387520125, 1);
  sqcRZGate(q, 2.2951649395948657, 1);
  sqcRYGate(q, -2.2157148941792935, 2);
  sqcRZGate(q, 1.3040878256536246, 2);
  sqcRYGate(q, -2.017068027970123, 3);
  sqcRZGate(q, 0.7905578583390778, 3);
  sqcRYGate(q, 2.658100937234111, 4);
  sqcRZGate(q, -1.8119368205512005, 4);
  sqcRYGate(q, -2.7391824749440294, 5);
  sqcRZGate(q, 1.7093360731896308, 5);
  sqcRYGate(q, -2.3216338932809926, 6);
  sqcRZGate(q, 0.8921213720081803, 6);
  sqcRYGate(q, -0.29570002580939736, 7);
  sqcRZGate(q, 2.1101766275432445, 7);
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
  sqcRYGate(q, 0.9139900599472804, 0);
  sqcRZGate(q, -1.424087422998453, 0);
  sqcRYGate(q, 1.988826968842984, 1);
  sqcRZGate(q, 2.735019045725733, 1);
  sqcRYGate(q, 1.9658764839447818, 2);
  sqcRZGate(q, -2.5035937057690685, 2);
  sqcRYGate(q, -2.840022511075121, 3);
  sqcRZGate(q, 0.6085815354714939, 3);
  sqcRYGate(q, 0.8161579547916241, 4);
  sqcRZGate(q, 1.9116948351169913, 4);
  sqcRYGate(q, 2.121629097833524, 5);
  sqcRZGate(q, 3.1356941755965155, 5);
  sqcRYGate(q, 0.863448714546128, 6);
  sqcRZGate(q, 0.7785984087806733, 6);
  sqcRYGate(q, 1.41492798639217, 7);
  sqcRZGate(q, -1.4781762738166195, 7);
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
  sqcRYGate(q, -2.3619783283422136, 0);
  sqcRZGate(q, 1.123997043735652, 0);
  sqcRYGate(q, 2.8804531563925386, 1);
  sqcRZGate(q, -1.3842061322662669, 1);
  sqcRYGate(q, -0.6824982493568418, 2);
  sqcRZGate(q, -2.272514189212795, 2);
  sqcRYGate(q, -2.373007632193223, 3);
  sqcRZGate(q, 0.006836115765948669, 3);
  sqcRYGate(q, -2.650765103285855, 4);
  sqcRZGate(q, -2.0880851297548593, 4);
  sqcRYGate(q, -0.7560752365801119, 5);
  sqcRZGate(q, 1.2718710910779152, 5);
  sqcRYGate(q, -0.7404286686664197, 6);
  sqcRZGate(q, -1.1210954746729813, 6);
  sqcRYGate(q, -0.7904602137780883, 7);
  sqcRZGate(q, -1.8935966929078543, 7);
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
  sqcRYGate(q, 1.5162833690593631, 0);
  sqcRZGate(q, 1.2616478753778864, 0);
  sqcRYGate(q, -2.008807816300543, 1);
  sqcRZGate(q, -1.2000347223195789, 1);
  sqcRYGate(q, 1.1262078393659634, 2);
  sqcRZGate(q, 1.7857504263984447, 2);
  sqcRYGate(q, -2.2151743006523636, 3);
  sqcRZGate(q, 0.822587344323394, 3);
  sqcRYGate(q, 0.1535279419578197, 4);
  sqcRZGate(q, -2.57781311787113, 4);
  sqcRYGate(q, 1.6289732487362723, 5);
  sqcRZGate(q, -1.7110473756227618, 5);
  sqcRYGate(q, -2.4988737554465668, 6);
  sqcRZGate(q, 1.5993722894775182, 6);
  sqcRYGate(q, -0.6886837905855234, 7);
  sqcRZGate(q, -1.4696068549814765, 7);
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
  sqcRYGate(q, 0.7354275355197087, 0);
  sqcRZGate(q, -2.6153339183632127, 0);
  sqcRYGate(q, 1.6527138551397431, 1);
  sqcRZGate(q, 0.8715451537187161, 1);
  sqcRYGate(q, 1.1237883770994224, 2);
  sqcRZGate(q, -1.0598501286903694, 2);
  sqcRYGate(q, 1.752821589128815, 3);
  sqcRZGate(q, 2.4395557094983102, 3);
  sqcRYGate(q, -2.280393592506559, 4);
  sqcRZGate(q, -0.6986846149275046, 4);
  sqcRYGate(q, 1.9725265101136111, 5);
  sqcRZGate(q, 0.9669429688981834, 5);
  sqcRYGate(q, 1.0117773243491015, 6);
  sqcRZGate(q, -2.385249918818154, 6);
  sqcRYGate(q, 2.836284880233842, 7);
  sqcRZGate(q, -1.0738152472658673, 7);
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
  sqcRYGate(q, -1.255424507578148, 0);
  sqcRZGate(q, 0.7219960257277895, 0);
  sqcRYGate(q, -2.7475485946831726, 1);
  sqcRZGate(q, 1.0341611499097982, 1);
  sqcRYGate(q, -0.3288170178391701, 2);
  sqcRZGate(q, 1.1497880701061505, 2);
  sqcRYGate(q, -1.282276523778432, 3);
  sqcRZGate(q, 0.44933749849211946, 3);
  sqcRYGate(q, 0.5759487610848222, 4);
  sqcRZGate(q, -2.169424248820898, 4);
  sqcRYGate(q, -0.7208707356254518, 5);
  sqcRZGate(q, -0.21474816871225766, 5);
  sqcRYGate(q, 0.6922144344183874, 6);
  sqcRZGate(q, -0.2024236769519446, 6);
  sqcRYGate(q, -0.5436844398152498, 7);
  sqcRZGate(q, -1.7600228025147395, 7);
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
  sqcRYGate(q, -1.6815756784445162, 0);
  sqcRZGate(q, 1.9561676225541058, 0);
  sqcRYGate(q, 1.8617065668972632, 1);
  sqcRZGate(q, 0.4665598421345273, 1);
  sqcRYGate(q, -2.5716809630901047, 2);
  sqcRZGate(q, 0.9290211135523682, 2);
  sqcRYGate(q, -2.784848853488637, 3);
  sqcRZGate(q, 1.6229120240907067, 3);
  sqcRYGate(q, -0.6669993867839297, 4);
  sqcRZGate(q, 0.41924080236089367, 4);
  sqcRYGate(q, 2.8143804029702393, 5);
  sqcRZGate(q, -0.8005812744489537, 5);
  sqcRYGate(q, 1.347344523406953, 6);
  sqcRZGate(q, -1.0934641828134657, 6);
  sqcRYGate(q, 2.261226520803186, 7);
  sqcRZGate(q, -2.944765258798225, 7);
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
  sqcRYGate(q, 0.3517238543279343, 0);
  sqcRZGate(q, -0.4713781128744863, 0);
  sqcRYGate(q, 0.5406132367344192, 1);
  sqcRZGate(q, -0.657622004156111, 1);
  sqcRYGate(q, 1.884964646071881, 2);
  sqcRZGate(q, 1.841950276867852, 2);
  sqcRYGate(q, 1.624704743623151, 3);
  sqcRZGate(q, 1.5005739696456475, 3);
  sqcRYGate(q, 1.554878795092596, 4);
  sqcRZGate(q, -2.9923694455587238, 4);
  sqcRYGate(q, 1.2637322472855343, 5);
  sqcRZGate(q, -0.5220194705443384, 5);
  sqcRYGate(q, 1.6345443062524085, 6);
  sqcRZGate(q, -2.648313105586244, 6);
  sqcRYGate(q, 0.8142755613539892, 7);
  sqcRZGate(q, -1.7361059300986659, 7);
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
  sqcRYGate(q, -2.0615828109467382, 0);
  sqcRZGate(q, 1.200829322453001, 0);
  sqcRYGate(q, -1.13805089956821, 1);
  sqcRZGate(q, 0.548179169438651, 1);
  sqcRYGate(q, -2.449471991209761, 2);
  sqcRZGate(q, -1.0630912551122493, 2);
  sqcRYGate(q, 3.118324008837072, 3);
  sqcRZGate(q, -0.09755125802533458, 3);
  sqcRYGate(q, -1.2297232770807087, 4);
  sqcRZGate(q, -1.868928506930592, 4);
  sqcRYGate(q, -2.258479194974334, 5);
  sqcRZGate(q, 2.841196526092822, 5);
  sqcRYGate(q, -0.647395655807845, 6);
  sqcRZGate(q, -2.095021357195357, 6);
  sqcRYGate(q, -2.371692745428162, 7);
  sqcRZGate(q, 0.6227187570112713, 7);
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
  sqcRYGate(q, 2.4595731029000434, 0);
  sqcRZGate(q, -0.14593878265223822, 0);
  sqcRYGate(q, -0.4535744668890597, 1);
  sqcRZGate(q, 0.8841923492213394, 1);
  sqcRYGate(q, 0.7590996059464947, 2);
  sqcRZGate(q, 2.6079901402170145, 2);
  sqcRYGate(q, -1.4400420972304386, 3);
  sqcRZGate(q, 0.9764302014060056, 3);
  sqcRYGate(q, 0.212061447357069, 4);
  sqcRZGate(q, -0.679700663777779, 4);
  sqcRYGate(q, -1.214883607236973, 5);
  sqcRZGate(q, 3.07865908491481, 5);
  sqcRYGate(q, -1.6728457321398984, 6);
  sqcRZGate(q, -1.3220535181405229, 6);
  sqcRYGate(q, 1.6732357395836521, 7);
  sqcRZGate(q, 1.0356645945630476, 7);
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
  sqcRYGate(q, 1.1602268081719496, 0);
  sqcRZGate(q, 2.2570683980160657, 0);
  sqcRYGate(q, 0.7907068289368571, 1);
  sqcRZGate(q, 2.410765821412487, 1);
  sqcRYGate(q, -1.8157116329961909, 2);
  sqcRZGate(q, 2.031216396637361, 2);
  sqcRYGate(q, -0.5342877260505208, 3);
  sqcRZGate(q, -2.850172729414658, 3);
  sqcRYGate(q, 0.8486513848628502, 4);
  sqcRZGate(q, 0.3888999679705889, 4);
  sqcRYGate(q, 1.8482914386068083, 5);
  sqcRZGate(q, -2.5744872157625123, 5);
  sqcRYGate(q, 1.500334211639645, 6);
  sqcRZGate(q, -2.505999864143138, 6);
  sqcRYGate(q, -1.0674079510244274, 7);
  sqcRZGate(q, -2.4779040676229895, 7);
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
  sqcRYGate(q, -0.5728961621240333, 0);
  sqcRZGate(q, -0.28608750977553576, 0);
  sqcRYGate(q, -2.114423683978343, 1);
  sqcRZGate(q, -0.8821718028718416, 1);
  sqcRYGate(q, -0.6148604440045804, 2);
  sqcRZGate(q, -2.9419600060426903, 2);
  sqcRYGate(q, -1.5904963895969713, 3);
  sqcRZGate(q, -1.6992674868443656, 3);
  sqcRYGate(q, -0.4319286352555176, 4);
  sqcRZGate(q, 0.5404070177535282, 4);
  sqcRYGate(q, -0.1353660058465063, 5);
  sqcRZGate(q, -0.03460334128759353, 5);
  sqcRYGate(q, -1.4131726690924078, 6);
  sqcRZGate(q, -2.197687497270289, 6);
  sqcRYGate(q, 2.259505161617583, 7);
  sqcRZGate(q, 0.45601439111088626, 7);
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
  sqcRYGate(q, -2.3487172328930943, 0);
  sqcRZGate(q, 0.880642541340223, 0);
  sqcRYGate(q, 2.690197678497636, 1);
  sqcRZGate(q, -0.13763788415801487, 1);
  sqcRYGate(q, -2.3647125797656896, 2);
  sqcRZGate(q, -1.6365316056475185, 2);
  sqcRYGate(q, -1.1339180631453942, 3);
  sqcRZGate(q, 1.8139844517365364, 3);
  sqcRYGate(q, 0.6868557369648445, 4);
  sqcRZGate(q, 1.1723690077360773, 4);
  sqcRYGate(q, -2.2090075162148244, 5);
  sqcRZGate(q, 2.973845172893849, 5);
  sqcRYGate(q, 2.6770439526757874, 6);
  sqcRZGate(q, -1.4306910685490708, 6);
  sqcRYGate(q, -0.746404029236885, 7);
  sqcRZGate(q, -2.916733458315881, 7);
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
  sqcRYGate(q, 1.7829458785629542, 0);
  sqcRZGate(q, 1.735071497466853, 0);
  sqcRYGate(q, -2.828632346446834, 1);
  sqcRZGate(q, -2.125314848240735, 1);
  sqcRYGate(q, 0.4939862496194661, 2);
  sqcRZGate(q, 2.611308096180426, 2);
  sqcRYGate(q, -2.9598871161972067, 3);
  sqcRZGate(q, -2.3739916885093555, 3);
  sqcRYGate(q, -0.19706229053265734, 4);
  sqcRZGate(q, 2.87412057606086, 4);
  sqcRYGate(q, -1.6953732275896205, 5);
  sqcRZGate(q, -2.581663453583507, 5);
  sqcRYGate(q, 0.7285931241629555, 6);
  sqcRZGate(q, 2.9178915000919403, 6);
  sqcRYGate(q, 2.2102710169803084, 7);
  sqcRZGate(q, -2.540848713688061, 7);
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
  sqcRYGate(q, 1.2080828858511872, 0);
  sqcRZGate(q, -1.8528106532248634, 0);
  sqcRYGate(q, -2.0656646535271026, 1);
  sqcRZGate(q, 1.1790377936799281, 1);
  sqcRYGate(q, 2.3451274940275266, 2);
  sqcRZGate(q, 1.2528611562725143, 2);
  sqcRYGate(q, -0.714891154808666, 3);
  sqcRZGate(q, -0.11673840502179722, 3);
  sqcRYGate(q, 1.6875995188079536, 4);
  sqcRZGate(q, 1.5454888687650719, 4);
  sqcRYGate(q, -1.6247881929735521, 5);
  sqcRZGate(q, -2.9438783304197216, 5);
  sqcRYGate(q, -0.8185407214901944, 6);
  sqcRZGate(q, -2.0723216632353605, 6);
  sqcRYGate(q, -1.527688116304989, 7);
  sqcRZGate(q, -0.3582445962211502, 7);
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
  sqcRYGate(q, 0.7793976796824519, 0);
  sqcRZGate(q, 0.42936300971707964, 0);
  sqcRYGate(q, 2.601815510180302, 1);
  sqcRZGate(q, -0.6406414757471852, 1);
  sqcRYGate(q, 2.3451593165323064, 2);
  sqcRZGate(q, 2.863014545375126, 2);
  sqcRYGate(q, -0.6491944262580023, 3);
  sqcRZGate(q, 1.0626168320498133, 3);
  sqcRYGate(q, -1.671792916042679, 4);
  sqcRZGate(q, -1.841975484778034, 4);
  sqcRYGate(q, 2.4337186256507297, 5);
  sqcRZGate(q, -0.2279539500463957, 5);
  sqcRYGate(q, 1.054929912231906, 6);
  sqcRZGate(q, 1.6093469399320675, 6);
  sqcRYGate(q, -0.6712650343252822, 7);
  sqcRZGate(q, -1.0664321005928796, 7);
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
  sqcRYGate(q, -2.0354722264424847, 0);
  sqcRZGate(q, -2.0510113915744026, 0);
  sqcRYGate(q, -2.3130834073313093, 1);
  sqcRZGate(q, 0.342767399365842, 1);
  sqcRYGate(q, -1.9453679221101219, 2);
  sqcRZGate(q, 2.254679669533404, 2);
  sqcRYGate(q, -3.035096230981681, 3);
  sqcRZGate(q, -1.2522304985172825, 3);
  sqcRYGate(q, 2.993364461358244, 4);
  sqcRZGate(q, -1.7858115133764096, 4);
  sqcRYGate(q, 0.6661488274532825, 5);
  sqcRZGate(q, -1.3751231057760194, 5);
  sqcRYGate(q, 0.7639924561579075, 6);
  sqcRZGate(q, 1.0742166843127767, 6);
  sqcRYGate(q, 2.1824788203131273, 7);
  sqcRZGate(q, 0.4067764377030542, 7);
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
  sqcRYGate(q, 2.7902022630046988, 0);
  sqcRZGate(q, 0.25119340421091413, 0);
  sqcRYGate(q, 0.713181849153643, 1);
  sqcRZGate(q, -1.9598722912960955, 1);
  sqcRYGate(q, -0.014146966884221526, 2);
  sqcRZGate(q, -1.167677097295824, 2);
  sqcRYGate(q, 1.4483722411091124, 3);
  sqcRZGate(q, -0.8338132956433038, 3);
  sqcRYGate(q, -1.6276153173923715, 4);
  sqcRZGate(q, 2.2754801480577456, 4);
  sqcRYGate(q, -0.2635651635260654, 5);
  sqcRZGate(q, 1.8239170796179778, 5);
  sqcRYGate(q, 1.5349554062494, 6);
  sqcRZGate(q, -1.7277478878002985, 6);
  sqcRYGate(q, 0.1498229966798561, 7);
  sqcRZGate(q, 0.38144404096352424, 7);
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
  sqcRYGate(q, -2.7202373720799806, 0);
  sqcRZGate(q, 2.338469144483266, 0);
  sqcRYGate(q, -1.7621363357350663, 1);
  sqcRZGate(q, 1.9263210231120864, 1);
  sqcRYGate(q, 2.31741887861513, 2);
  sqcRZGate(q, 1.4603534727904062, 2);
  sqcRYGate(q, 2.0005933391572857, 3);
  sqcRZGate(q, -2.9479785921529387, 3);
  sqcRYGate(q, -2.76489696321123, 4);
  sqcRZGate(q, -2.7040550760133533, 4);
  sqcRYGate(q, 1.7445055297324474, 5);
  sqcRZGate(q, 2.8320400785781072, 5);
  sqcRYGate(q, 0.32310779146595936, 6);
  sqcRZGate(q, -0.9050582404221253, 6);
  sqcRYGate(q, 2.972908492211362, 7);
  sqcRZGate(q, 3.135759198395703, 7);
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
  sqcRYGate(q, -1.311652639644043, 0);
  sqcRZGate(q, 2.0087416207619686, 0);
  sqcRYGate(q, 2.646426086035232, 1);
  sqcRZGate(q, -1.8962976816636194, 1);
  sqcRYGate(q, -2.0558125056125407, 2);
  sqcRZGate(q, -0.05646797781024925, 2);
  sqcRYGate(q, -1.667242430940674, 3);
  sqcRZGate(q, 3.025632423962437, 3);
  sqcRYGate(q, 1.1931118036882185, 4);
  sqcRZGate(q, 1.9470497600744219, 4);
  sqcRYGate(q, -2.528991375917931, 5);
  sqcRZGate(q, 3.0185955716788957, 5);
  sqcRYGate(q, 0.7163870046724966, 6);
  sqcRZGate(q, -1.9755647841928117, 6);
  sqcRYGate(q, 1.489030142009246, 7);
  sqcRZGate(q, -1.113774034172641, 7);
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
  sqcRYGate(q, 2.8607951110791205, 0);
  sqcRZGate(q, 1.7397840071464885, 0);
  sqcRYGate(q, 1.0883713846510605, 1);
  sqcRZGate(q, -1.8079886568790804, 1);
  sqcRYGate(q, -1.1651559604503472, 2);
  sqcRZGate(q, 0.07919558952097903, 2);
  sqcRYGate(q, -1.110022843397127, 3);
  sqcRZGate(q, -2.5800400523963076, 3);
  sqcRYGate(q, -2.712527533518406, 4);
  sqcRZGate(q, 0.10490992698842483, 4);
  sqcRYGate(q, 0.5990083920974243, 5);
  sqcRZGate(q, -2.0994068372644543, 5);
  sqcRYGate(q, -1.381370518290533, 6);
  sqcRZGate(q, -2.6155671999400183, 6);
  sqcRYGate(q, 0.9317427929239877, 7);
  sqcRZGate(q, 1.483366409624228, 7);
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
  sqcRYGate(q, -1.3590482216669082, 0);
  sqcRZGate(q, -3.0617373933091026, 0);
  sqcRYGate(q, 0.8256099898132411, 1);
  sqcRZGate(q, -0.9696104043982139, 1);
  sqcRYGate(q, -0.9987927966063652, 2);
  sqcRZGate(q, 0.7094404096168268, 2);
  sqcRYGate(q, -2.5738215874730446, 3);
  sqcRZGate(q, 2.7089968448311943, 3);
  sqcRYGate(q, -2.944999998684346, 4);
  sqcRZGate(q, -1.412722610031648, 4);
  sqcRYGate(q, -1.656921293723984, 5);
  sqcRZGate(q, 2.7461185604297373, 5);
  sqcRYGate(q, 1.0924921217704338, 6);
  sqcRZGate(q, 1.9422837402196282, 6);
  sqcRYGate(q, 2.5117025924310807, 7);
  sqcRZGate(q, 2.71446822737763, 7);
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
  sqcRYGate(q, -1.4832857118060083, 0);
  sqcRZGate(q, -2.069054525251961, 0);
  sqcRYGate(q, -2.277552680547517, 1);
  sqcRZGate(q, -2.8310900205250586, 1);
  sqcRYGate(q, 1.2605084511807123, 2);
  sqcRZGate(q, -1.9778456076697832, 2);
  sqcRYGate(q, 2.4036681370957016, 3);
  sqcRZGate(q, 0.7895972894799534, 3);
  sqcRYGate(q, -1.3823895382167137, 4);
  sqcRZGate(q, -1.3017304357870867, 4);
  sqcRYGate(q, 0.5691299808018849, 5);
  sqcRZGate(q, 0.5425175281622937, 5);
  sqcRYGate(q, -0.7957418748102008, 6);
  sqcRZGate(q, -1.1277237382116514, 6);
  sqcRYGate(q, 0.16014902415664814, 7);
  sqcRZGate(q, -1.5311415551670935, 7);
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
  sqcRYGate(q, -1.8263829002060168, 0);
  sqcRZGate(q, 2.852186906844523, 0);
  sqcRYGate(q, 2.5438690375789834, 1);
  sqcRZGate(q, -1.8746810825269, 1);
  sqcRYGate(q, -1.0039895861778356, 2);
  sqcRZGate(q, 1.131869565737453, 2);
  sqcRYGate(q, 1.45129179923061, 3);
  sqcRZGate(q, -2.8246843977332072, 3);
  sqcRYGate(q, 1.2020721652886328, 4);
  sqcRZGate(q, 2.653457001567756, 4);
  sqcRYGate(q, -2.898347412699544, 5);
  sqcRZGate(q, -2.970301495650329, 5);
  sqcRYGate(q, -2.5037399342119757, 6);
  sqcRZGate(q, 2.707353919552919, 6);
  sqcRYGate(q, -0.9705351667539412, 7);
  sqcRZGate(q, 1.5947983707485691, 7);
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
  sqcRYGate(q, 1.73859208348796, 0);
  sqcRZGate(q, 1.1592229261229963, 0);
  sqcRYGate(q, -1.5447589456923283, 1);
  sqcRZGate(q, 1.6012436644516275, 1);
  sqcRYGate(q, 2.0502839918123064, 2);
  sqcRZGate(q, 0.41296263626242513, 2);
  sqcRYGate(q, 0.831153874773058, 3);
  sqcRZGate(q, -1.8842904890842316, 3);
  sqcRYGate(q, -1.4744000570204587, 4);
  sqcRZGate(q, 2.8570981616469577, 4);
  sqcRYGate(q, 0.6538515132779912, 5);
  sqcRZGate(q, 3.1122953531331774, 5);
  sqcRYGate(q, -0.5597567491306403, 6);
  sqcRZGate(q, 0.17665064237745565, 6);
  sqcRYGate(q, -0.5711878160598767, 7);
  sqcRZGate(q, -1.8457331520801843, 7);
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
  sqcRYGate(q, 0.3782074642243585, 0);
  sqcRZGate(q, 2.367668788801988, 0);
  sqcRYGate(q, 1.4065736310790944, 1);
  sqcRZGate(q, 2.893110264525669, 1);
  sqcRYGate(q, 2.575437382719113, 2);
  sqcRZGate(q, 1.7367200049129086, 2);
  sqcRYGate(q, 0.38524579440851725, 3);
  sqcRZGate(q, -0.9545533241685484, 3);
  sqcRYGate(q, 1.6653277362473258, 4);
  sqcRZGate(q, 0.34485392575775775, 4);
  sqcRYGate(q, -2.1740820105072154, 5);
  sqcRZGate(q, -1.0675870751274281, 5);
  sqcRYGate(q, 0.7148773733023202, 6);
  sqcRZGate(q, -2.19141660934734, 6);
  sqcRYGate(q, -0.6609223396968017, 7);
  sqcRZGate(q, 2.7519770046298775, 7);
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
  sqcRYGate(q, -0.31216234963414696, 0);
  sqcRZGate(q, 2.6981443012576607, 0);
  sqcRYGate(q, -1.3824316781120833, 1);
  sqcRZGate(q, 0.41789100813257457, 1);
  sqcRYGate(q, 1.1013185715600313, 2);
  sqcRZGate(q, -0.3975455435487696, 2);
  sqcRYGate(q, -0.8600209172739933, 3);
  sqcRZGate(q, 0.4626236208282736, 3);
  sqcRYGate(q, 1.5161528438688707, 4);
  sqcRZGate(q, 0.5901572330814053, 4);
  sqcRYGate(q, 1.8686450458991963, 5);
  sqcRZGate(q, -1.3775103346229953, 5);
  sqcRYGate(q, -2.1032087258326966, 6);
  sqcRZGate(q, -1.339839747825913, 6);
  sqcRYGate(q, -0.6815368240004561, 7);
  sqcRZGate(q, 2.74336076112184, 7);

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
