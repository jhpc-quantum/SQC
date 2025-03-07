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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.572320942670464, 0);
  sqcRZGate(q, 0.45650868631907926, 0);
  sqcRYGate(q, -1.5707915343866605, 1);
  sqcRZGate(q, 0.5101963385272498, 1);
  sqcRYGate(q, 0.00030258163319957606, 2);
  sqcRZGate(q, 0.16933078417992964, 2);
  sqcRYGate(q, 0.0018555290825625903, 3);
  sqcRZGate(q, -1.6070812496796516, 3);
  sqcRYGate(q, 2.5697401508433177, 4);
  sqcRZGate(q, -2.7461973949978535, 4);
  sqcRYGate(q, 1.2023672183368284, 5);
  sqcRZGate(q, 1.8061636143936148, 5);
  sqcRYGate(q, 3.139415932362971, 6);
  sqcRZGate(q, -2.923384163709292, 6);
  sqcRYGate(q, 3.1407587539326904, 7);
  sqcRZGate(q, -0.17465107813495262, 7);
  sqcRYGate(q, -1.5679641792001453, 8);
  sqcRZGate(q, 0.2074607085047866, 8);
  sqcRYGate(q, 3.141304362017633, 9);
  sqcRZGate(q, -1.4585357126875542, 9);
  sqcRYGate(q, 0.02841844609118205, 10);
  sqcRZGate(q, 0.39378216332604227, 10);
  sqcRYGate(q, 1.5816683916379002, 11);
  sqcRZGate(q, 2.868604710149085, 11);
  sqcRYGate(q, 3.1370488162845795, 12);
  sqcRZGate(q, -2.1810980020750943, 12);
  sqcRYGate(q, -3.330687139237792e-05, 13);
  sqcRZGate(q, 2.4504441955255944, 13);
  sqcRYGate(q, -1.5826700825411812, 14);
  sqcRZGate(q, 1.890360840016709, 14);
  sqcRYGate(q, 1.5732260640068585, 15);
  sqcRZGate(q, -1.420485601860194, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.02139137178918455, 0);
  sqcRZGate(q, 2.8751506617699687, 0);
  sqcRYGate(q, -1.8436777314797703, 1);
  sqcRZGate(q, -2.0326528435442954, 1);
  sqcRYGate(q, -2.691199188646306, 2);
  sqcRZGate(q, -1.9278087776300579, 2);
  sqcRYGate(q, 1.5710378702634564, 3);
  sqcRZGate(q, 0.5311430995934573, 3);
  sqcRYGate(q, 0.17670716116481727, 4);
  sqcRZGate(q, -1.1588584229395762, 4);
  sqcRYGate(q, 2.0650105691922858, 5);
  sqcRZGate(q, -1.9928395641739338, 5);
  sqcRYGate(q, -5.808359243380682e-06, 6);
  sqcRZGate(q, 0.36853087450840327, 6);
  sqcRYGate(q, -3.141284608005638, 7);
  sqcRZGate(q, -2.842015294378835, 7);
  sqcRYGate(q, -0.0031540399064002855, 8);
  sqcRZGate(q, -0.2075330775739106, 8);
  sqcRYGate(q, 1.4702834827614677, 9);
  sqcRZGate(q, -2.2092460183655387, 9);
  sqcRYGate(q, -3.138942642778454, 10);
  sqcRZGate(q, -0.8009994649859022, 10);
  sqcRYGate(q, -0.010023568718651378, 11);
  sqcRZGate(q, -2.8723537962562276, 11);
  sqcRYGate(q, -1.9927560657531007, 12);
  sqcRZGate(q, -2.5177540533175304, 12);
  sqcRYGate(q, -1.521706961859476, 13);
  sqcRZGate(q, 2.4750162840476166, 13);
  sqcRYGate(q, -3.0940479716742835, 14);
  sqcRZGate(q, 2.2355950415442587, 14);
  sqcRYGate(q, -3.0648855822274874, 15);
  sqcRZGate(q, 0.19599204921112626, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -3.141125589265844, 0);
  sqcRZGate(q, -0.8378028996304696, 0);
  sqcRYGate(q, 1.5730865259224123, 1);
  sqcRZGate(q, -1.3651707703063534, 1);
  sqcRYGate(q, -3.1412971330351778, 2);
  sqcRZGate(q, -2.1923000094949003, 2);
  sqcRYGate(q, -3.141566985995146, 3);
  sqcRZGate(q, 1.8746439191986313, 3);
  sqcRYGate(q, 1.1023039430714354, 4);
  sqcRZGate(q, -2.8555062399325206, 4);
  sqcRYGate(q, 0.031684026333367754, 5);
  sqcRZGate(q, 2.6859424978913498, 5);
  sqcRYGate(q, -3.1399492942196807, 6);
  sqcRZGate(q, 2.9626595195851237, 6);
  sqcRYGate(q, -3.1414605461264653, 7);
  sqcRZGate(q, -1.4006902822261293, 7);
  sqcRYGate(q, -1.57076955189856, 8);
  sqcRZGate(q, 1.2260268883857937, 8);
  sqcRYGate(q, -1.6305030011227706, 9);
  sqcRZGate(q, 1.5222090184477919, 9);
  sqcRYGate(q, 3.141563230252566, 10);
  sqcRZGate(q, 2.207460752293814, 10);
  sqcRYGate(q, -1.5700326496989379, 11);
  sqcRZGate(q, -1.0138177843356555, 11);
  sqcRYGate(q, 3.138073451452945, 12);
  sqcRZGate(q, 0.958787927957231, 12);
  sqcRYGate(q, 4.217105310693019e-05, 13);
  sqcRZGate(q, -2.583807722857982, 13);
  sqcRYGate(q, -3.1098467133933108, 14);
  sqcRZGate(q, -0.3827128146972072, 14);
  sqcRYGate(q, -1.610667083278093, 15);
  sqcRZGate(q, 2.648979483371743, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5715632451611363, 0);
  sqcRZGate(q, -0.12252523254380332, 0);
  sqcRYGate(q, -0.47928303383870485, 1);
  sqcRZGate(q, 1.3228468576057768, 1);
  sqcRYGate(q, -1.769616134812, 2);
  sqcRZGate(q, -0.11152725560438892, 2);
  sqcRYGate(q, -3.140368147956072, 3);
  sqcRZGate(q, 0.05958999432253708, 3);
  sqcRYGate(q, 1.4052079041719399, 4);
  sqcRZGate(q, 2.0339322611727284, 4);
  sqcRYGate(q, 0.4341735354679758, 5);
  sqcRZGate(q, 0.7130728522134183, 5);
  sqcRYGate(q, -3.1406962379253303, 6);
  sqcRZGate(q, -2.8837835793165953, 6);
  sqcRYGate(q, -3.1415884493517954, 7);
  sqcRZGate(q, 1.2684265634829035, 7);
  sqcRYGate(q, 3.12902306262625, 8);
  sqcRZGate(q, 1.049035232904292, 8);
  sqcRYGate(q, -0.010900755959920794, 9);
  sqcRZGate(q, -1.522401494729121, 9);
  sqcRYGate(q, 1.5683709033170619, 10);
  sqcRZGate(q, 1.4248222554043268, 10);
  sqcRYGate(q, 3.141588311015631, 11);
  sqcRZGate(q, 0.5671653293799714, 11);
  sqcRYGate(q, -0.4423079387499911, 12);
  sqcRZGate(q, 1.9982366745645193, 12);
  sqcRYGate(q, 1.5714870615190462, 13);
  sqcRZGate(q, -2.8884100441462226, 13);
  sqcRYGate(q, 2.789798351080777, 14);
  sqcRZGate(q, -3.1006735291940832, 14);
  sqcRYGate(q, 3.096468101728618, 15);
  sqcRZGate(q, -2.558345954015842, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.532667260441877, 0);
  sqcRZGate(q, -0.15532722645283684, 0);
  sqcRYGate(q, 1.9971018363581186, 1);
  sqcRZGate(q, -1.515524730976683, 1);
  sqcRYGate(q, -1.6113132707120088, 2);
  sqcRZGate(q, 2.2691746948256295, 2);
  sqcRYGate(q, 1.1849922319253252, 3);
  sqcRZGate(q, -2.9843053308486787, 3);
  sqcRYGate(q, 2.159087699306895, 4);
  sqcRZGate(q, -2.3924176477345984, 4);
  sqcRYGate(q, 1.5567868131981228, 5);
  sqcRZGate(q, -0.017321190360882532, 5);
  sqcRYGate(q, -3.0755802240480152, 6);
  sqcRZGate(q, 0.7348351364289762, 6);
  sqcRYGate(q, 0.0007451400888370495, 7);
  sqcRZGate(q, -3.07704577972485, 7);
  sqcRYGate(q, -3.141579148345345, 8);
  sqcRZGate(q, 1.2367269979012816, 8);
  sqcRYGate(q, -1.6307616695278302, 9);
  sqcRZGate(q, 2.861690404357271, 9);
  sqcRYGate(q, -1.5699434551244842, 10);
  sqcRZGate(q, -1.5707750551709836, 10);
  sqcRYGate(q, 1.56603924942055, 11);
  sqcRZGate(q, -1.43128572052526, 11);
  sqcRYGate(q, 3.141592087801341, 12);
  sqcRZGate(q, 2.3228121188445154, 12);
  sqcRYGate(q, 0.00021592521290703107, 13);
  sqcRZGate(q, 2.9003398399664797, 13);
  sqcRYGate(q, -0.043967742480468947, 14);
  sqcRZGate(q, 0.8798919692031096, 14);
  sqcRYGate(q, -7.763098119895062e-07, 15);
  sqcRZGate(q, -0.6406864334674881, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.4470276990986244, 0);
  sqcRZGate(q, -2.096324909061793, 0);
  sqcRYGate(q, -1.598300994463217, 1);
  sqcRZGate(q, 1.7129993632056282, 1);
  sqcRYGate(q, -0.00012389181209310101, 2);
  sqcRZGate(q, -1.3753533931637785, 2);
  sqcRYGate(q, 3.140552881719572, 3);
  sqcRZGate(q, 0.21292235459438372, 3);
  sqcRYGate(q, 1.5638025280200016, 4);
  sqcRZGate(q, -1.6114182420305572, 4);
  sqcRYGate(q, 0.07392869302871041, 5);
  sqcRZGate(q, -3.1270400154660103, 5);
  sqcRYGate(q, 0.0021962352343791736, 6);
  sqcRZGate(q, 2.5810780808552143, 6);
  sqcRYGate(q, -5.490801451379923e-05, 7);
  sqcRZGate(q, -1.2082319441421465, 7);
  sqcRYGate(q, 3.137598795778983, 8);
  sqcRZGate(q, -2.0102515110978807, 8);
  sqcRYGate(q, 3.0781924880198637, 9);
  sqcRZGate(q, -1.2419272903933813, 9);
  sqcRYGate(q, -1.5707362092003945, 10);
  sqcRZGate(q, 0.6011254864120964, 10);
  sqcRYGate(q, -1.5699928567067412, 11);
  sqcRZGate(q, -1.6104394401891342, 11);
  sqcRYGate(q, -2.9982755371699623, 12);
  sqcRZGate(q, 1.543649713649292, 12);
  sqcRYGate(q, 1.5707953149273068, 13);
  sqcRZGate(q, -2.5061481794105336, 13);
  sqcRYGate(q, 1.3879040478229614, 14);
  sqcRZGate(q, 2.2047236052615546, 14);
  sqcRYGate(q, -1.416551945133666, 15);
  sqcRZGate(q, 2.560675740257486, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.26687583505225443, 0);
  sqcRZGate(q, 1.3792012238718865, 0);
  sqcRYGate(q, 1.5020522617280312, 1);
  sqcRZGate(q, 1.3786399179392772, 1);
  sqcRYGate(q, 0.0006460454005692284, 2);
  sqcRZGate(q, 2.299403838011764, 2);
  sqcRYGate(q, -1.6518799075891355, 3);
  sqcRZGate(q, -1.6636806711053007, 3);
  sqcRYGate(q, 1.625545666004399, 4);
  sqcRZGate(q, -0.7358074451443013, 4);
  sqcRYGate(q, 1.5134010845411796, 5);
  sqcRZGate(q, -0.18289664154545537, 5);
  sqcRYGate(q, -0.0004038459878641376, 6);
  sqcRZGate(q, -3.0133610750671154, 6);
  sqcRYGate(q, -3.1371539343209673, 7);
  sqcRZGate(q, -1.5465764660526364, 7);
  sqcRYGate(q, -0.07424702078532963, 8);
  sqcRZGate(q, 0.1825806289796623, 8);
  sqcRYGate(q, 0.08599146300796578, 9);
  sqcRZGate(q, -2.718307854762365, 9);
  sqcRYGate(q, 0.13907315155949523, 10);
  sqcRZGate(q, 0.20794132323510836, 10);
  sqcRYGate(q, -0.8240417067833031, 11);
  sqcRZGate(q, -1.08388879883229, 11);
  sqcRYGate(q, -1.6053866201018163, 12);
  sqcRZGate(q, 2.402296202951233, 12);
  sqcRYGate(q, 1.9518231949218379, 13);
  sqcRZGate(q, -1.9151571204657234, 13);
  sqcRYGate(q, 3.0255342629129944, 14);
  sqcRZGate(q, -2.6384055337964427, 14);
  sqcRYGate(q, -1.5673154306635506, 15);
  sqcRZGate(q, 1.3863729058516385, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.4998985915149472, 0);
  sqcRZGate(q, -1.486801975823701, 0);
  sqcRYGate(q, -0.3656575071777816, 1);
  sqcRZGate(q, 2.87921888655844, 1);
  sqcRYGate(q, -1.836970989213623e-05, 2);
  sqcRZGate(q, -2.2644665045710672, 2);
  sqcRYGate(q, 0.009341477145048849, 3);
  sqcRZGate(q, -1.1594381845903743, 3);
  sqcRYGate(q, 1.5670317594174197, 4);
  sqcRZGate(q, 0.18187074453774457, 4);
  sqcRYGate(q, -0.019634750990768637, 5);
  sqcRZGate(q, -1.3879459800096836, 5);
  sqcRYGate(q, -3.141462161452742, 6);
  sqcRZGate(q, -2.8467422234644886, 6);
  sqcRYGate(q, -3.140885040707605, 7);
  sqcRZGate(q, 2.3681910101533235, 7);
  sqcRYGate(q, 3.140219850524446, 8);
  sqcRZGate(q, -0.012635039183095949, 8);
  sqcRYGate(q, 0.06307102805263326, 9);
  sqcRZGate(q, -0.529934104933485, 9);
  sqcRYGate(q, -3.1400754020030983, 10);
  sqcRZGate(q, -2.783954726086666, 10);
  sqcRYGate(q, -0.003599370945948992, 11);
  sqcRZGate(q, 2.694485967801557, 11);
  sqcRYGate(q, -3.1415920787678138, 12);
  sqcRZGate(q, -0.03215375152132386, 12);
  sqcRYGate(q, -6.750275406197659e-06, 13);
  sqcRZGate(q, 1.8166240911240836, 13);
  sqcRYGate(q, -1.5700161180677865, 14);
  sqcRZGate(q, 0.5168938426494503, 14);
  sqcRYGate(q, -3.095461656039822, 15);
  sqcRZGate(q, -1.7447608378531816, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5934932274811509, 0);
  sqcRZGate(q, -2.1928117864495347, 0);
  sqcRYGate(q, -1.7840221079021923, 1);
  sqcRZGate(q, -0.7076414827922113, 1);
  sqcRYGate(q, -0.026816628516550978, 2);
  sqcRZGate(q, 2.5896775510761745, 2);
  sqcRYGate(q, 3.055976011564374, 3);
  sqcRZGate(q, -0.6830889270960548, 3);
  sqcRYGate(q, 0.073286088644684, 4);
  sqcRZGate(q, -3.1277577282911704, 4);
  sqcRYGate(q, -1.5798953326795253, 5);
  sqcRZGate(q, 1.5452580825487103, 5);
  sqcRYGate(q, 3.139076276031259, 6);
  sqcRZGate(q, -2.9555265189141515, 6);
  sqcRYGate(q, 3.137176534666124, 7);
  sqcRZGate(q, 1.8935762882327083, 7);
  sqcRYGate(q, -3.054145721377414, 8);
  sqcRZGate(q, 0.8182309288549838, 8);
  sqcRYGate(q, 0.10367164838414117, 9);
  sqcRZGate(q, -0.41157224458728076, 9);
  sqcRYGate(q, -2.980156471420516, 10);
  sqcRZGate(q, 1.755940977468061, 10);
  sqcRYGate(q, 1.62775669054467, 11);
  sqcRZGate(q, 2.9577147871441065, 11);
  sqcRYGate(q, -1.568591004178955, 12);
  sqcRZGate(q, 0.3297176987552547, 12);
  sqcRYGate(q, -1.9169894363846018, 13);
  sqcRZGate(q, 2.817183477651232, 13);
  sqcRYGate(q, 3.1228150500437297, 14);
  sqcRZGate(q, 2.4908546518835144, 14);
  sqcRYGate(q, -1.6582316513789506, 15);
  sqcRZGate(q, -1.1669341898564347, 15);

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
