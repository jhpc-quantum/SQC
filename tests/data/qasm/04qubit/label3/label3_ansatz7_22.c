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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.600283587114898, 0);
  sqcRYGate(q, -2.679466977416507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8389071945044286, 0);
  sqcRYGate(q, 2.71437732690665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0051305753655466, 0);
  sqcRYGate(q, -1.6848360515589864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.567761353450002, 0);
  sqcRYGate(q, 2.952772423665089, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0642726118517294, 0);
  sqcRYGate(q, -0.6858007903202054, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.384920867160658, 0);
  sqcRYGate(q, 2.351763497229318, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.69336664405616, 1);
  sqcRYGate(q, 2.7884048424277275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5595367587274835, 1);
  sqcRYGate(q, 2.261433976914271, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6441572469819851, 1);
  sqcRYGate(q, -2.059386412393106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1910588339293382, 1);
  sqcRYGate(q, 0.26423634822773856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9834670164376201, 2);
  sqcRYGate(q, -2.0754600593683605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2686792408122902, 2);
  sqcRYGate(q, -0.5949611156701401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.332524992783467, 0);
  sqcRYGate(q, -0.6273290314957007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0621823741828733, 0);
  sqcRYGate(q, -0.7778739926633271, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5323726214437263, 0);
  sqcRYGate(q, -0.29955716892354745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4797076439551042, 0);
  sqcRYGate(q, -0.91037529771186, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1036836830796677, 0);
  sqcRYGate(q, -2.6292547588600814, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.040447845945363, 0);
  sqcRYGate(q, -2.521203181193535, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.40880171675291804, 1);
  sqcRYGate(q, -2.5164002156555996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.993901099499168, 1);
  sqcRYGate(q, 1.7768676410583246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1692599618547885, 1);
  sqcRYGate(q, 1.020190240070804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8560117800551632, 1);
  sqcRYGate(q, 2.3853034376111277, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0437786048452287, 2);
  sqcRYGate(q, -3.0503582718142006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.244395227529185, 2);
  sqcRYGate(q, -2.898873572486142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6845021808248966, 0);
  sqcRYGate(q, -1.3882894427164494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1394203881213727, 0);
  sqcRYGate(q, -2.467225958619995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7636525597299917, 0);
  sqcRYGate(q, -1.1586070485469788, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3877904032666169, 0);
  sqcRYGate(q, -1.9199978534588906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2950540352733921, 0);
  sqcRYGate(q, -2.816910705928762, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.203188227154812, 0);
  sqcRYGate(q, -3.0307378730988583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.386132084235158, 1);
  sqcRYGate(q, 0.3531102204999011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7888936257102896, 1);
  sqcRYGate(q, 0.9188092340139162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32047279301620374, 1);
  sqcRYGate(q, 0.42864413189156014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8519170276345376, 1);
  sqcRYGate(q, 1.228066234481514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.316533998097341, 2);
  sqcRYGate(q, 2.934564435850823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8600977170616035, 2);
  sqcRYGate(q, -0.7705279317834138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.279836218461313, 0);
  sqcRYGate(q, 0.9244128388294497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5027428122354687, 0);
  sqcRYGate(q, 0.7185583549776179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.879122126901352, 0);
  sqcRYGate(q, -2.3619837431697346, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5675301914491213, 0);
  sqcRYGate(q, -0.2550818765028673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7799779596105457, 0);
  sqcRYGate(q, 0.8117742360786275, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0631716794567376, 0);
  sqcRYGate(q, 2.100839474535438, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.828873336494389, 1);
  sqcRYGate(q, 2.2993147704371206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7624788498701913, 1);
  sqcRYGate(q, 1.9944971864277585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.276935381421164, 1);
  sqcRYGate(q, -2.4961559759504217, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.534636109586928, 1);
  sqcRYGate(q, 2.302053264369773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5071949240632094, 2);
  sqcRYGate(q, -2.305884215913993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6939325580631923, 2);
  sqcRYGate(q, -1.368186148962645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1952626486446434, 0);
  sqcRYGate(q, 2.542247295520892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2359285092541312, 0);
  sqcRYGate(q, 2.386679103636442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1089631499159154, 0);
  sqcRYGate(q, -0.5092800400540334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2107842697188569, 0);
  sqcRYGate(q, 2.52849402757568, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.39415258363488, 0);
  sqcRYGate(q, 2.2637723575473467, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.026916096469069117, 0);
  sqcRYGate(q, 2.270167926466072, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6096529828880123, 1);
  sqcRYGate(q, 2.674969907244447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8417710401509315, 1);
  sqcRYGate(q, 0.3173397814233622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5034554552464017, 1);
  sqcRYGate(q, 2.2513387599536787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2962536542956373, 1);
  sqcRYGate(q, -1.4788944554691552, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.768264984529932, 2);
  sqcRYGate(q, -1.5353867224909603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27054240768273186, 2);
  sqcRYGate(q, 2.3074253903982758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8814451266138685, 0);
  sqcRYGate(q, -0.8566884554279293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6359866562015593, 0);
  sqcRYGate(q, -3.0285921882394553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7559908516956981, 0);
  sqcRYGate(q, 2.4043083873482534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5681488148943927, 0);
  sqcRYGate(q, 1.5422933283474463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.528827009616964, 0);
  sqcRYGate(q, -1.92956480146227, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3937812326026062, 0);
  sqcRYGate(q, -1.1191024348777796, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4577708681716733, 1);
  sqcRYGate(q, -1.3988483706719448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.751509167019885, 1);
  sqcRYGate(q, 1.0597545958656065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6390381219785009, 1);
  sqcRYGate(q, 2.3233415936536614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.30524177145695575, 1);
  sqcRYGate(q, -2.8426059608648124, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.023571776380449275, 2);
  sqcRYGate(q, -1.477997618469862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4787241301379275, 2);
  sqcRYGate(q, 0.7556386166287689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.788725239528331, 0);
  sqcRYGate(q, 2.919510676220074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4968931480969263, 0);
  sqcRYGate(q, 0.2612021822155462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0947106984346231, 0);
  sqcRYGate(q, -1.2063348463382573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.833042525425319, 0);
  sqcRYGate(q, 1.5259234785087568, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.063328477330083, 0);
  sqcRYGate(q, 3.1360641322563194, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9559289398995858, 0);
  sqcRYGate(q, 3.0327322740530236, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.73129796341655, 1);
  sqcRYGate(q, 1.944945272755909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.230124883507189, 1);
  sqcRYGate(q, 1.339958671998085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9222022931794633, 1);
  sqcRYGate(q, 0.11505447063566178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5804948091128246, 1);
  sqcRYGate(q, -2.6320846278260435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0309171835197266, 2);
  sqcRYGate(q, 1.375970203559055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4344219916324104, 2);
  sqcRYGate(q, 2.206166451270769, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.025201965683614, 0);
  sqcRYGate(q, -0.06830633645503781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8989197281175287, 0);
  sqcRYGate(q, -0.31194286668974414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8596111565173596, 0);
  sqcRYGate(q, 1.0273441477364458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.22107151601489347, 0);
  sqcRYGate(q, 2.9436840329648826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0986144897104229, 0);
  sqcRYGate(q, -0.862142943865543, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5007897937359873, 0);
  sqcRYGate(q, -2.6010159789850418, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.651916395592093, 1);
  sqcRYGate(q, 0.03129316532584236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7592298408550554, 1);
  sqcRYGate(q, 1.6927891143668328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.51791982799721, 1);
  sqcRYGate(q, -1.7605208709453726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.072687074739777, 1);
  sqcRYGate(q, -0.09120626997477733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.84284913516551, 2);
  sqcRYGate(q, 1.9477899759690427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1801824129771448, 2);
  sqcRYGate(q, -2.850808944424194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6844469768398564, 0);
  sqcRYGate(q, 1.0810365098206065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7080154598808406, 0);
  sqcRYGate(q, -1.6103747055373274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5566301206877884, 0);
  sqcRYGate(q, -0.3081328613917337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2789219342102749, 0);
  sqcRYGate(q, 0.7205631790871809, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8146173795585028, 0);
  sqcRYGate(q, -2.704036358567352, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4687338947083055, 0);
  sqcRYGate(q, 1.8205695572215437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.15022912194226348, 1);
  sqcRYGate(q, 0.5641101196013185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3350547484806592, 1);
  sqcRYGate(q, 0.9872151634450405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0517946206986806, 1);
  sqcRYGate(q, 1.4887067167749013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.251214889796704, 1);
  sqcRYGate(q, 2.8172091507101524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2038875769874418, 2);
  sqcRYGate(q, -0.934288167867777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1378106769577014, 2);
  sqcRYGate(q, -2.5091905228020646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0387678209657496, 0);
  sqcRYGate(q, 2.9177264659574575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.158729710198436, 0);
  sqcRYGate(q, 0.3651612545940504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.060352044177999845, 0);
  sqcRYGate(q, 0.36128671381095145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0368539796096643, 0);
  sqcRYGate(q, 2.1894272267647796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6389297543621733, 0);
  sqcRYGate(q, 1.86385689090052, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1309121749449766, 0);
  sqcRYGate(q, 0.8761000462888733, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6655883729263226, 1);
  sqcRYGate(q, -3.136892642183321, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6763975102839628, 1);
  sqcRYGate(q, -3.082308353619456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15523384675193877, 1);
  sqcRYGate(q, -2.1769599440587095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.08058346439386, 1);
  sqcRYGate(q, -2.0140165800264755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8987112436400686, 2);
  sqcRYGate(q, -0.3286224652310663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8305214549605339, 2);
  sqcRYGate(q, -2.039948360378831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.670969570150894, 0);
  sqcRYGate(q, -1.9759325842289306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6535050823837085, 0);
  sqcRYGate(q, -0.5015053430335072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.919566039791782, 0);
  sqcRYGate(q, -1.2209839804823401, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.000713040003428, 0);
  sqcRYGate(q, 0.008961626271604023, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.990934704481154, 0);
  sqcRYGate(q, 1.963706624052529, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5730069104008884, 0);
  sqcRYGate(q, -1.6467746131440721, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5270595336236994, 1);
  sqcRYGate(q, -1.5468923970272073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.508634037436711, 1);
  sqcRYGate(q, -1.2349071618738294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8522463912726277, 1);
  sqcRYGate(q, -0.743909629689834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3770496565436483, 1);
  sqcRYGate(q, 2.32274774658458, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24851409320100082, 2);
  sqcRYGate(q, -1.5552082454820522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08975675413568421, 2);
  sqcRYGate(q, 0.08660123554752733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5833462880586152, 0);
  sqcRYGate(q, 2.464951685594107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.612674514276324, 0);
  sqcRYGate(q, 1.1578646232549243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.75084704393476, 0);
  sqcRYGate(q, -2.209553619539794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3114545932008854, 0);
  sqcRYGate(q, 1.8712278725409837, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.15368682872729728, 0);
  sqcRYGate(q, 1.385429215617525, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.045798140200131, 0);
  sqcRYGate(q, 0.8993620055863172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0516957160198945, 1);
  sqcRYGate(q, 0.31793918087050516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.243441055394265, 1);
  sqcRYGate(q, 0.5979271999981723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.620403425563337, 1);
  sqcRYGate(q, -2.93016084325947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6140370584903048, 1);
  sqcRYGate(q, 1.9557914774724612, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3086288899598215, 2);
  sqcRYGate(q, -1.917866581333631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5784909060369094, 2);
  sqcRYGate(q, -0.5000569587376904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15175740224200407, 0);
  sqcRYGate(q, 1.6556955146332295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3610729284678076, 0);
  sqcRYGate(q, 2.2701738070732764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.639918635736912, 0);
  sqcRYGate(q, -1.2915772301098887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5414748441326166, 0);
  sqcRYGate(q, 0.3146527069635754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5855824006268797, 0);
  sqcRYGate(q, 1.4407015676460055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5558992337262323, 0);
  sqcRYGate(q, 0.789212544009156, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.24933277561119027, 1);
  sqcRYGate(q, -0.3326223726282801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0062865020976175, 1);
  sqcRYGate(q, 2.3834433738946035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2826730822242491, 1);
  sqcRYGate(q, -2.515642690342456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.081152691595191, 1);
  sqcRYGate(q, 1.7878110482859744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09744829555261483, 2);
  sqcRYGate(q, 2.247329569411881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4381838681216619, 2);
  sqcRYGate(q, -0.8308644299349632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8246338440302089, 0);
  sqcRYGate(q, 2.5068032629283583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17794612567375623, 0);
  sqcRYGate(q, -0.062413961201611044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.012931896339954285, 0);
  sqcRYGate(q, -2.8417831288434474, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.511330008109903, 0);
  sqcRYGate(q, 2.6565888280317114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9217907388535787, 0);
  sqcRYGate(q, 1.50437123731773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5421746640799612, 0);
  sqcRYGate(q, 1.8558372998527695, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0252109279454613, 1);
  sqcRYGate(q, 2.732684503782987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2954359932353268, 1);
  sqcRYGate(q, 1.638889500340837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8847472744695679, 1);
  sqcRYGate(q, -2.940415212889781, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1468570234538555, 1);
  sqcRYGate(q, 0.2695877784009209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6710673989455717, 2);
  sqcRYGate(q, 3.051421332549813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1635209592998246, 2);
  sqcRYGate(q, -1.6236514845947811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.431456539425831, 0);
  sqcRYGate(q, -0.2844678005641919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49035906154639636, 0);
  sqcRYGate(q, 1.1994654050608873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5427238995922963, 0);
  sqcRYGate(q, 0.32961986575527963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.20489161168816317, 0);
  sqcRYGate(q, -1.201302721807812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.504398856760849, 0);
  sqcRYGate(q, -3.133771829103032, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.86871300418694, 0);
  sqcRYGate(q, 1.1652276827588297, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9860314239739733, 1);
  sqcRYGate(q, 1.6685153947951572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8894072691878988, 1);
  sqcRYGate(q, -1.6840201186939734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01237354989591477, 1);
  sqcRYGate(q, 1.2649621900854298, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1718307372950707, 1);
  sqcRYGate(q, -1.261404280351548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3091613746766191, 2);
  sqcRYGate(q, -0.9569022229732141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7202684345342725, 2);
  sqcRYGate(q, -0.03590975629753356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9775030206753206, 0);
  sqcRYGate(q, 1.7355069183753837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8884390294507964, 0);
  sqcRYGate(q, -0.5328418265319677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12801438522093633, 0);
  sqcRYGate(q, 0.18951619818082396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3117351596453114, 0);
  sqcRYGate(q, -3.0208141599553247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2670395424666874, 0);
  sqcRYGate(q, -3.1149509348104933, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3046932742670272, 0);
  sqcRYGate(q, -2.407564849575923, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9800567528733413, 1);
  sqcRYGate(q, -1.024262258836457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9441984365101184, 1);
  sqcRYGate(q, 2.7577292040952677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.041972492277907, 1);
  sqcRYGate(q, -0.49239685528369453, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3069957277493014, 1);
  sqcRYGate(q, 0.18749968984252063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.044645483312261, 2);
  sqcRYGate(q, 1.915413918977265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4037952111934273, 2);
  sqcRYGate(q, -0.25136091016121576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5614316448529317, 0);
  sqcRYGate(q, 2.5945364424983235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5905082324558153, 0);
  sqcRYGate(q, -0.08559154854649288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9507015723975655, 0);
  sqcRYGate(q, 2.472252886995791, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8079458921184457, 0);
  sqcRYGate(q, 1.486181864090886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.079694805072243, 0);
  sqcRYGate(q, 1.9519200148330238, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0806872258112556, 0);
  sqcRYGate(q, -0.62143830405057, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.95203019109979, 1);
  sqcRYGate(q, 0.6712004593288974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3958639360191285, 1);
  sqcRYGate(q, 0.5018297062002803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7879531861059386, 1);
  sqcRYGate(q, -2.6363119840023628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.261054570437163, 1);
  sqcRYGate(q, -0.17107691666779345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.852192026140651, 2);
  sqcRYGate(q, 1.862762067148485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8178841779345166, 2);
  sqcRYGate(q, 1.5355941360514374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2831398248141037, 0);
  sqcRYGate(q, -1.8300643157563865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.018051421175325544, 0);
  sqcRYGate(q, -1.983671803466902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1404484120356129, 0);
  sqcRYGate(q, 1.3153613453834747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.280092274276468, 0);
  sqcRYGate(q, 0.62432158272417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.948393744353873, 0);
  sqcRYGate(q, 2.816772389722564, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7137755859366169, 0);
  sqcRYGate(q, 0.6228746489443493, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.542735040559244, 1);
  sqcRYGate(q, -1.423176264731086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3555716218826466, 1);
  sqcRYGate(q, -2.063312373343671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.040218265728348086, 1);
  sqcRYGate(q, -0.42905298650873736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0119272238328911, 1);
  sqcRYGate(q, 2.8996934176848916, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0802293485135523, 2);
  sqcRYGate(q, -0.6670350539985703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.369209824029757, 2);
  sqcRYGate(q, 2.5947633279147153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6881173833099687, 0);
  sqcRYGate(q, 0.06584786082684634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9714373492285369, 0);
  sqcRYGate(q, -1.183004781943458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.387478441385923, 0);
  sqcRYGate(q, 0.47463881306753275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4797323731047456, 0);
  sqcRYGate(q, 1.2907640951557289, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0752493140583765, 0);
  sqcRYGate(q, 1.8448755936250834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.222540303793493, 0);
  sqcRYGate(q, 1.8302924306211983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6823946026704193, 1);
  sqcRYGate(q, 0.29100760430934297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9145303843188476, 1);
  sqcRYGate(q, -1.0256725315771646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.379116755816475, 1);
  sqcRYGate(q, -2.437675416359972, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.20301587721269865, 1);
  sqcRYGate(q, -0.2151168771445784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0732358844193204, 2);
  sqcRYGate(q, 1.672633298348249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5870883651103016, 2);
  sqcRYGate(q, 0.3444448253259539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7241441051722152, 0);
  sqcRYGate(q, 1.66251583865816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9676877793091698, 0);
  sqcRYGate(q, -1.0804459419872305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0005867295271428931, 0);
  sqcRYGate(q, -0.7734137513867818, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.309222539474954, 0);
  sqcRYGate(q, -1.7591235675834371, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0054436647689745194, 0);
  sqcRYGate(q, -1.6947127161623436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8474755874553788, 0);
  sqcRYGate(q, -1.7698520686614447, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.496467332179024, 1);
  sqcRYGate(q, 1.1721590328700657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7768997055011955, 1);
  sqcRYGate(q, -1.5821285573658024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5561369283503976, 1);
  sqcRYGate(q, -1.1548424618988324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9528024972390444, 1);
  sqcRYGate(q, 2.8386230548349496, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.287329179634079, 2);
  sqcRYGate(q, 2.389386101595747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.424776048994198, 2);
  sqcRYGate(q, 0.45566707025640163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3759606786292782, 0);
  sqcRYGate(q, -0.7181582361970691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7666223530828953, 0);
  sqcRYGate(q, 2.6831864667751755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6658446283702897, 0);
  sqcRYGate(q, -2.160144551901011, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.38882279510446577, 0);
  sqcRYGate(q, -2.6885053522998885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5724791188004952, 0);
  sqcRYGate(q, 2.2273805665244995, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2428347473153893, 0);
  sqcRYGate(q, 1.2999608948396402, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5299868941711825, 1);
  sqcRYGate(q, -0.3680943375945906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.710778788996657, 1);
  sqcRYGate(q, -0.9071011365661185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9174469026564652, 1);
  sqcRYGate(q, 2.060647958710515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6495527760776945, 1);
  sqcRYGate(q, 1.5214532577206055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.855903235413558, 2);
  sqcRYGate(q, 0.8904395493464249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9162777331137963, 2);
  sqcRYGate(q, 1.8651175742831418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.39406764512448345, 0);
  sqcRYGate(q, 1.9545437315934338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.926102468324343, 0);
  sqcRYGate(q, 0.6152970936520443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7252382424634973, 0);
  sqcRYGate(q, -0.7696209561784035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5963642694132849, 0);
  sqcRYGate(q, -2.4846621261205777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7526211043882252, 0);
  sqcRYGate(q, -1.9748266119523232, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3025422730938798, 0);
  sqcRYGate(q, -1.1565352487444482, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.624146232762097, 1);
  sqcRYGate(q, 0.8668911539788046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9275727523299828, 1);
  sqcRYGate(q, -2.151383040073581, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8277360399431384, 1);
  sqcRYGate(q, 1.3830526664471048, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.324675961887046, 1);
  sqcRYGate(q, -1.8448409400360886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4713159414360424, 2);
  sqcRYGate(q, -1.636979687571297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04367582595033248, 2);
  sqcRYGate(q, -0.7733127258118574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37413953857950316, 0);
  sqcRYGate(q, 3.043431283480662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7293190648186725, 0);
  sqcRYGate(q, 0.32899211319873634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.613197255580685, 0);
  sqcRYGate(q, -2.6474047046396945, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2923202709139447, 0);
  sqcRYGate(q, -0.8535199397217277, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3962479883845607, 0);
  sqcRYGate(q, 3.1208917255141344, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.340116668444689, 0);
  sqcRYGate(q, 1.0532868475611306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8684696878114027, 1);
  sqcRYGate(q, 1.306128267623441, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44221259449241224, 1);
  sqcRYGate(q, -2.450444507756477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.160423558639084, 1);
  sqcRYGate(q, 0.7984387336666345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4363814119855586, 1);
  sqcRYGate(q, -1.3566309613589205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0170331851423633, 2);
  sqcRYGate(q, 2.1292528567877698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3435560903655022, 2);
  sqcRYGate(q, -1.8585152330244847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6408534136114205, 0);
  sqcRYGate(q, -0.9194115384060008, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.208051159165983, 0);
  sqcRYGate(q, -2.8846826376138424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.53595326673594, 0);
  sqcRYGate(q, 2.8252867308853875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.015349160877921, 0);
  sqcRYGate(q, 2.723840490327167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7869365850996706, 0);
  sqcRYGate(q, 1.3818197770017757, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.672124308586249, 0);
  sqcRYGate(q, -2.5180344933081504, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2897939894881514, 1);
  sqcRYGate(q, 1.2397722444253523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9765493921661174, 1);
  sqcRYGate(q, -0.08592767829079327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.31774523828712553, 1);
  sqcRYGate(q, -0.5404964954108102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.18916477459590833, 1);
  sqcRYGate(q, 0.9373561459537365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.13825926643832306, 2);
  sqcRYGate(q, 1.080504044936661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7488592693847236, 2);
  sqcRYGate(q, 2.0158948717822973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7150748475046917, 0);
  sqcRYGate(q, -0.5263550716739873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.873524208781275, 0);
  sqcRYGate(q, 0.6268488999197832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21598494987337194, 0);
  sqcRYGate(q, 2.229719236325552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0333863086913544, 0);
  sqcRYGate(q, 1.6168425230272112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.907514181741597, 0);
  sqcRYGate(q, 1.1778014218834825, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.33519878094296107, 0);
  sqcRYGate(q, 2.6053770282788746, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6153585599472815, 1);
  sqcRYGate(q, -1.3145078558054222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.461439430689355, 1);
  sqcRYGate(q, -1.8421411478515841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.681556615977347, 1);
  sqcRYGate(q, 2.433679759686627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3568533170838193, 1);
  sqcRYGate(q, 0.3928191941243755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3394707842108045, 2);
  sqcRYGate(q, -0.36295286775612734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8993947356945605, 2);
  sqcRYGate(q, 1.4412380629132997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0139181132475414, 0);
  sqcRYGate(q, 0.2025930858771119, 1);
  sqcRYGate(q, -2.293531732542503, 2);
  sqcRYGate(q, 0.29431068000594135, 3);

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
