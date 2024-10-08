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

  sqcRYGate(q, 0.3363660313700025, 0);
  sqcRZGate(q, 1.4159719030392175, 0);
  sqcRYGate(q, 2.293044435774546, 1);
  sqcRZGate(q, 0.5884121777440894, 1);
  sqcRYGate(q, 0.027904162976033042, 2);
  sqcRZGate(q, -1.0847092056153778, 2);
  sqcRYGate(q, 0.022544170054516147, 3);
  sqcRZGate(q, -1.5251267334625735, 3);
  sqcRYGate(q, 0.18660868811941356, 4);
  sqcRZGate(q, 2.16331123535503, 4);
  sqcRYGate(q, 2.2648781830008806, 5);
  sqcRZGate(q, 0.24175995426917746, 5);
  sqcRYGate(q, 2.813667467783557, 6);
  sqcRZGate(q, -1.3489277400727078, 6);
  sqcRYGate(q, 1.2618694059186728, 7);
  sqcRZGate(q, -2.058054126730364, 7);
  sqcRYGate(q, 0.8180060906196482, 8);
  sqcRZGate(q, 1.5966882364496464, 8);
  sqcRYGate(q, -3.1366806588633858, 9);
  sqcRZGate(q, 0.05592747245382011, 9);
  sqcRYGate(q, -0.013762373613726453, 10);
  sqcRZGate(q, 2.271454699624625, 10);
  sqcRYGate(q, 0.8108935665888488, 11);
  sqcRZGate(q, -0.1138816708344705, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.10174734828321252, 0);
  sqcRZGate(q, 2.3243436005542226, 0);
  sqcRYGate(q, 2.618995325959988, 1);
  sqcRZGate(q, -1.640075380519832, 1);
  sqcRYGate(q, -3.0696905362236566, 2);
  sqcRZGate(q, -0.9561812698691989, 2);
  sqcRYGate(q, -3.1338917016745858, 3);
  sqcRZGate(q, 1.42111735066079, 3);
  sqcRYGate(q, -3.068787625595182, 4);
  sqcRZGate(q, -1.351654691826645, 4);
  sqcRYGate(q, -1.4873829896731539, 5);
  sqcRZGate(q, 3.028618487702405, 5);
  sqcRYGate(q, 1.5879923323454312, 6);
  sqcRZGate(q, -1.3441318037054932, 6);
  sqcRYGate(q, 0.693719932305028, 7);
  sqcRZGate(q, -0.5875774183517954, 7);
  sqcRYGate(q, -2.5493958381647954, 8);
  sqcRZGate(q, 3.0646839044349425, 8);
  sqcRYGate(q, -2.9731664657568864, 9);
  sqcRZGate(q, 3.084589557952233, 9);
  sqcRYGate(q, 2.487065392367331, 10);
  sqcRZGate(q, 1.7345164049928568, 10);
  sqcRYGate(q, 0.9463159787880656, 11);
  sqcRZGate(q, 2.1665450077495545, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.8161856218790415, 0);
  sqcRZGate(q, -1.4473438131306846, 0);
  sqcRYGate(q, 0.9130297845747019, 1);
  sqcRZGate(q, -1.772948741983254, 1);
  sqcRYGate(q, 3.1041782265158204, 2);
  sqcRZGate(q, -0.3568000152960083, 2);
  sqcRYGate(q, -0.029114620567094462, 3);
  sqcRZGate(q, 0.45470440421002084, 3);
  sqcRYGate(q, 1.9726053582971097, 4);
  sqcRZGate(q, 0.11221069625748441, 4);
  sqcRYGate(q, 2.394315304698472, 5);
  sqcRZGate(q, 1.5319947556439868, 5);
  sqcRYGate(q, -0.28173969595963744, 6);
  sqcRZGate(q, 2.766929007978224, 6);
  sqcRYGate(q, 0.008601247526497637, 7);
  sqcRZGate(q, -1.8156015620720485, 7);
  sqcRYGate(q, 0.1922889525046272, 8);
  sqcRZGate(q, -1.4093066154778278, 8);
  sqcRYGate(q, -3.1411127946017317, 9);
  sqcRZGate(q, -2.361520918936422, 9);
  sqcRYGate(q, -3.1165359588916037, 10);
  sqcRZGate(q, 1.6489169556736967, 10);
  sqcRYGate(q, 2.787571652154835, 11);
  sqcRZGate(q, -3.1006899638498786, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.7756141579919705, 0);
  sqcRZGate(q, -0.3241860249157427, 0);
  sqcRYGate(q, 0.009220222262362299, 1);
  sqcRZGate(q, -0.6508246461295297, 1);
  sqcRYGate(q, 0.0033217840756943028, 2);
  sqcRZGate(q, 0.04211028450996171, 2);
  sqcRYGate(q, -3.131396004886169, 3);
  sqcRZGate(q, 2.6722507637719257, 3);
  sqcRYGate(q, -1.0879846066848742, 4);
  sqcRZGate(q, -0.17641372367287203, 4);
  sqcRYGate(q, 0.1636530651989449, 5);
  sqcRZGate(q, 1.8603523074660504, 5);
  sqcRYGate(q, -3.0811843941326926, 6);
  sqcRZGate(q, -0.2047692130767084, 6);
  sqcRYGate(q, 2.535195747373584, 7);
  sqcRZGate(q, 2.1209207650150437, 7);
  sqcRYGate(q, 0.24491481325037925, 8);
  sqcRZGate(q, 2.156067140767875, 8);
  sqcRYGate(q, 1.9537189736367315, 9);
  sqcRZGate(q, 1.144799031080421, 9);
  sqcRYGate(q, -1.6780103411251117, 10);
  sqcRZGate(q, -1.3273152071940357, 10);
  sqcRYGate(q, -1.4979692268108025, 11);
  sqcRZGate(q, -1.2372752225267414, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4536366632990836, 0);
  sqcRZGate(q, -0.39195125257295954, 0);
  sqcRYGate(q, -1.5169253153854365, 1);
  sqcRZGate(q, -1.0724021319089296, 1);
  sqcRYGate(q, 3.0328971407802583, 2);
  sqcRZGate(q, 0.17071537418738725, 2);
  sqcRYGate(q, 0.35016815500675685, 3);
  sqcRZGate(q, 2.2879862905989126, 3);
  sqcRYGate(q, 2.0316651215106347, 4);
  sqcRZGate(q, -1.4167949999073812, 4);
  sqcRYGate(q, -2.862597864094731, 5);
  sqcRZGate(q, 0.7619294871059292, 5);
  sqcRYGate(q, 0.3376059973404102, 6);
  sqcRZGate(q, -0.5748535076622179, 6);
  sqcRYGate(q, 0.0005504516524522043, 7);
  sqcRZGate(q, 2.4392818730522703, 7);
  sqcRYGate(q, -3.0785544985824207, 8);
  sqcRZGate(q, -0.8691685195998602, 8);
  sqcRYGate(q, -0.0054564742189281736, 9);
  sqcRZGate(q, -0.948954438168923, 9);
  sqcRYGate(q, -0.003976784262272659, 10);
  sqcRZGate(q, 0.1667180860628381, 10);
  sqcRYGate(q, 1.4769440107071579, 11);
  sqcRZGate(q, 2.112448928172091, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.0874722060868693, 0);
  sqcRZGate(q, 1.236533733077362, 0);
  sqcRYGate(q, 0.030416817547617825, 1);
  sqcRZGate(q, 0.0011452174725887377, 1);
  sqcRYGate(q, -3.107120794999735, 2);
  sqcRZGate(q, 1.171005972483394, 2);
  sqcRYGate(q, -0.014289655804285317, 3);
  sqcRZGate(q, -0.8275275238664758, 3);
  sqcRYGate(q, -1.685241630385551, 4);
  sqcRZGate(q, -2.069273155775881, 4);
  sqcRYGate(q, 0.10644962287958126, 5);
  sqcRZGate(q, 2.9483628217602207, 5);
  sqcRYGate(q, -2.891333578949682, 6);
  sqcRZGate(q, 1.4519309277282146, 6);
  sqcRYGate(q, 1.3502111099795742, 7);
  sqcRZGate(q, -1.98099903675151, 7);
  sqcRYGate(q, -0.7241551052367061, 8);
  sqcRZGate(q, 1.8538304907937544, 8);
  sqcRYGate(q, 2.0337820898539993, 9);
  sqcRZGate(q, 1.8416013388034376, 9);
  sqcRYGate(q, 0.616045333020665, 10);
  sqcRZGate(q, 1.7144638050289744, 10);
  sqcRYGate(q, -2.7622926354109483, 11);
  sqcRZGate(q, -1.869407068951129, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.9464612503033127, 0);
  sqcRZGate(q, -0.245450107555275, 0);
  sqcRYGate(q, -1.8348133149591923, 1);
  sqcRZGate(q, -2.8658641645144325, 1);
  sqcRYGate(q, 2.631437288082049, 2);
  sqcRZGate(q, -0.016199091757881406, 2);
  sqcRYGate(q, -0.16924694463631632, 3);
  sqcRZGate(q, -1.0945342245415803, 3);
  sqcRYGate(q, -0.7131275814096243, 4);
  sqcRZGate(q, 0.9633013452312708, 4);
  sqcRYGate(q, -1.9980429669555455, 5);
  sqcRZGate(q, -2.8599826654918226, 5);
  sqcRYGate(q, 0.11926912657639477, 6);
  sqcRZGate(q, 2.1845292636555405, 6);
  sqcRYGate(q, 0.028731709780020154, 7);
  sqcRZGate(q, 3.0247196082042236, 7);
  sqcRYGate(q, 0.0018534964138341437, 8);
  sqcRZGate(q, -0.6721479283859509, 8);
  sqcRYGate(q, 0.004804568491129757, 9);
  sqcRZGate(q, 0.11110937095443271, 9);
  sqcRYGate(q, 3.140015399024142, 10);
  sqcRZGate(q, 3.098024986234549, 10);
  sqcRYGate(q, -0.3674424212824909, 11);
  sqcRZGate(q, -0.0718130013102991, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.1724519223368193, 0);
  sqcRZGate(q, -1.2127351639758361, 0);
  sqcRYGate(q, -0.1923270607068235, 1);
  sqcRZGate(q, -0.2708145696015491, 1);
  sqcRYGate(q, -3.133775328890458, 2);
  sqcRZGate(q, -1.896554009192081, 2);
  sqcRYGate(q, -0.1705725823302977, 3);
  sqcRZGate(q, -0.1482656879740319, 3);
  sqcRYGate(q, 0.014481313698439757, 4);
  sqcRZGate(q, 0.7286578795785229, 4);
  sqcRYGate(q, 3.0987696701548253, 5);
  sqcRZGate(q, 0.7649697149113507, 5);
  sqcRYGate(q, 0.26834764757896656, 6);
  sqcRZGate(q, -0.6339354151665262, 6);
  sqcRYGate(q, -1.2893185717129225, 7);
  sqcRZGate(q, -0.24624110778407182, 7);
  sqcRYGate(q, -0.46119000619290684, 8);
  sqcRZGate(q, -1.1119694765571653, 8);
  sqcRYGate(q, -0.7008024237308373, 9);
  sqcRZGate(q, 0.12367813520182569, 9);
  sqcRYGate(q, 2.577164422761431, 10);
  sqcRZGate(q, 0.2674682062286138, 10);
  sqcRYGate(q, 0.6804733621907936, 11);
  sqcRZGate(q, 1.7798992982955846, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.02779880466302902, 0);
  sqcRZGate(q, 2.2137920851526083, 0);
  sqcRYGate(q, -2.0671626996170005, 1);
  sqcRZGate(q, -2.9291261596871117, 1);
  sqcRYGate(q, -3.026221721319529, 2);
  sqcRZGate(q, -1.3488562214312914, 2);
  sqcRYGate(q, -0.6889398463225175, 3);
  sqcRZGate(q, 2.8191280529484914, 3);
  sqcRYGate(q, 1.997549658991577, 4);
  sqcRZGate(q, 1.326058697346621, 4);
  sqcRYGate(q, 3.1414289440794634, 5);
  sqcRZGate(q, 0.3423725170455354, 5);
  sqcRYGate(q, 3.0580556261862193, 6);
  sqcRZGate(q, -1.7158264919484125, 6);
  sqcRYGate(q, -0.03894390995286104, 7);
  sqcRZGate(q, 1.6550058485630776, 7);
  sqcRYGate(q, -3.070323220946041, 8);
  sqcRZGate(q, -2.8897933136975413, 8);
  sqcRYGate(q, -0.1509742048017655, 9);
  sqcRZGate(q, 0.5275639056897319, 9);
  sqcRYGate(q, 3.132731861003758, 10);
  sqcRZGate(q, 0.9164135277753326, 10);
  sqcRYGate(q, -1.3205091954902868, 11);
  sqcRZGate(q, 2.0599810854369496, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.3463893773196762, 0);
  sqcRZGate(q, 2.118827606605711, 0);
  sqcRYGate(q, -0.11527378990948468, 1);
  sqcRZGate(q, -2.3601310065849543, 1);
  sqcRYGate(q, -0.013889015515688996, 2);
  sqcRZGate(q, 1.9521680433843365, 2);
  sqcRYGate(q, 3.0606263821312263, 3);
  sqcRZGate(q, 2.7207091934123397, 3);
  sqcRYGate(q, 1.677810456404897, 4);
  sqcRZGate(q, 0.4515944771532441, 4);
  sqcRYGate(q, -3.138984271268659, 5);
  sqcRZGate(q, 2.465060893028709, 5);
  sqcRYGate(q, -2.7009471084417145, 6);
  sqcRZGate(q, -2.451493563329951, 6);
  sqcRYGate(q, -1.5472192459121805, 7);
  sqcRZGate(q, 2.5027773326952554, 7);
  sqcRYGate(q, -0.04825171750441492, 8);
  sqcRZGate(q, -2.194080657552947, 8);
  sqcRYGate(q, 0.6189562249569367, 9);
  sqcRZGate(q, -1.6868217296372794, 9);
  sqcRYGate(q, -2.506316086825697, 10);
  sqcRZGate(q, 0.816643098792075, 10);
  sqcRYGate(q, -1.887599395653096, 11);
  sqcRZGate(q, -2.2825161714781093, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.561288585008362, 0);
  sqcRZGate(q, -2.1369917582498523, 0);
  sqcRYGate(q, -1.9444903375198164, 1);
  sqcRZGate(q, 0.8761174125855639, 1);
  sqcRYGate(q, 0.004553921152848066, 2);
  sqcRZGate(q, 2.469966442178387, 2);
  sqcRYGate(q, 1.955064254702119, 3);
  sqcRZGate(q, -2.516112012046238, 3);
  sqcRYGate(q, -0.010659490625950166, 4);
  sqcRZGate(q, 0.9668958284320553, 4);
  sqcRYGate(q, 3.135297823371816, 5);
  sqcRZGate(q, -1.658150542184618, 5);
  sqcRYGate(q, 0.007598182071313353, 6);
  sqcRZGate(q, -1.5802843947084395, 6);
  sqcRYGate(q, 0.016906124585248213, 7);
  sqcRZGate(q, -2.5247705678449894, 7);
  sqcRYGate(q, -3.1405570106848963, 8);
  sqcRZGate(q, 2.738345956533873, 8);
  sqcRYGate(q, -1.5605145255808361, 9);
  sqcRZGate(q, 1.5630097145913215, 9);
  sqcRYGate(q, 1.5825653433525027, 10);
  sqcRZGate(q, 1.5754704248499365, 10);
  sqcRYGate(q, -2.1233869282185562, 11);
  sqcRZGate(q, 1.9145835653796608, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.9529831496363217, 0);
  sqcRZGate(q, 1.6042191594916357, 0);
  sqcRYGate(q, 2.691953908229394, 1);
  sqcRZGate(q, -2.9387949293751876, 1);
  sqcRYGate(q, 3.1132708141429606, 2);
  sqcRZGate(q, -1.6549568498310392, 2);
  sqcRYGate(q, -2.924183492122536, 3);
  sqcRZGate(q, -2.8034290835275386, 3);
  sqcRYGate(q, -2.5378765127221175, 4);
  sqcRZGate(q, 1.380529668667285, 4);
  sqcRYGate(q, -2.928950069828749, 5);
  sqcRZGate(q, -0.5070864711594982, 5);
  sqcRYGate(q, -0.32204155032877235, 6);
  sqcRZGate(q, -2.6351348528761576, 6);
  sqcRYGate(q, -3.1294848826566484, 7);
  sqcRZGate(q, -0.18611683995167283, 7);
  sqcRYGate(q, 0.003461726882007632, 8);
  sqcRZGate(q, 1.9089527756161866, 8);
  sqcRYGate(q, -1.5591939823067964, 9);
  sqcRZGate(q, 2.9184307498980657, 9);
  sqcRYGate(q, -1.570009673064986, 10);
  sqcRZGate(q, 1.9346248293519541, 10);
  sqcRYGate(q, -1.7056854379962774, 11);
  sqcRZGate(q, -0.6412944749919781, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.006649461622074248, 0);
  sqcRZGate(q, -0.06481880216873036, 0);
  sqcRYGate(q, 1.381338196663152, 1);
  sqcRZGate(q, -0.3083151255461418, 1);
  sqcRYGate(q, -1.5194509799972342, 2);
  sqcRZGate(q, -0.5232796441992758, 2);
  sqcRYGate(q, -0.11904201791281827, 3);
  sqcRZGate(q, -1.1481467426021863, 3);
  sqcRYGate(q, 1.051353624485927, 4);
  sqcRZGate(q, 2.2375435734267923, 4);
  sqcRYGate(q, -3.1265701240261383, 5);
  sqcRZGate(q, 1.1937012746857742, 5);
  sqcRYGate(q, -0.006409614608609893, 6);
  sqcRZGate(q, 1.227344546248224, 6);
  sqcRYGate(q, -3.1266412042502445, 7);
  sqcRZGate(q, 1.8524078721428063, 7);
  sqcRYGate(q, -0.8007162837990814, 8);
  sqcRZGate(q, -1.5132302479327355, 8);
  sqcRYGate(q, -1.5019230126998633, 9);
  sqcRZGate(q, 2.41592593104727, 9);
  sqcRYGate(q, 2.8610006421177996, 10);
  sqcRZGate(q, -2.7196061438772925, 10);
  sqcRYGate(q, -2.9969781399455906, 11);
  sqcRZGate(q, -2.2910151784354325, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.0559696093634314, 0);
  sqcRZGate(q, 0.8039041883644679, 0);
  sqcRYGate(q, 0.47274368090984015, 1);
  sqcRZGate(q, 1.145086824804566, 1);
  sqcRYGate(q, 1.0944404025238916, 2);
  sqcRZGate(q, -2.6236158589358602, 2);
  sqcRYGate(q, 1.5273102027232495, 3);
  sqcRZGate(q, 1.065125153173655, 3);
  sqcRYGate(q, -0.7331671002956603, 4);
  sqcRZGate(q, -0.7539352954308345, 4);
  sqcRYGate(q, -2.0779873131440567, 5);
  sqcRZGate(q, 2.9386120889446494, 5);
  sqcRYGate(q, 1.480325053593337, 6);
  sqcRZGate(q, 3.054174158033306, 6);
  sqcRYGate(q, 2.8784973594530774, 7);
  sqcRZGate(q, 2.4994622221107203, 7);
  sqcRYGate(q, -3.0926078211927406, 8);
  sqcRZGate(q, -3.1333812288911025, 8);
  sqcRYGate(q, 3.1407473111659705, 9);
  sqcRZGate(q, 0.5188575868203777, 9);
  sqcRYGate(q, -3.12952573351339, 10);
  sqcRZGate(q, 2.4063252069564096, 10);
  sqcRYGate(q, 1.4233981630539796, 11);
  sqcRZGate(q, -1.4675351435882886, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.1306227607512804, 0);
  sqcRZGate(q, 1.050775584253766, 0);
  sqcRYGate(q, 1.6782492577860504, 1);
  sqcRZGate(q, -2.9482451698453267, 1);
  sqcRYGate(q, 1.669871679994504, 2);
  sqcRZGate(q, -0.040771162794032804, 2);
  sqcRYGate(q, 3.1234848898703307, 3);
  sqcRZGate(q, 0.49106102378179683, 3);
  sqcRYGate(q, 0.07798344088616638, 4);
  sqcRZGate(q, 1.7316810675160215, 4);
  sqcRYGate(q, -3.1362891454333464, 5);
  sqcRZGate(q, 0.4264536764705902, 5);
  sqcRYGate(q, 3.0904482906069903, 6);
  sqcRZGate(q, -2.5868151443876024, 6);
  sqcRYGate(q, 3.1116334924120066, 7);
  sqcRZGate(q, -2.428340916539308, 7);
  sqcRYGate(q, 2.3760409614758076, 8);
  sqcRZGate(q, 2.9593360587966697, 8);
  sqcRYGate(q, 1.6539701889031606, 9);
  sqcRZGate(q, -1.4862000962567574, 9);
  sqcRYGate(q, 0.34876822846230837, 10);
  sqcRZGate(q, 1.2483465378950522, 10);
  sqcRYGate(q, -0.2926289354321251, 11);
  sqcRZGate(q, 2.8463239952921597, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.07898706768473222, 0);
  sqcRZGate(q, 3.0801892406146414, 0);
  sqcRYGate(q, 1.3375805218951227, 1);
  sqcRZGate(q, 2.9640278910568267, 1);
  sqcRYGate(q, 1.446488001209116, 2);
  sqcRZGate(q, -0.7048898871948239, 2);
  sqcRYGate(q, -1.617719250466976, 3);
  sqcRZGate(q, 1.2116149723565561, 3);
  sqcRYGate(q, 2.3226692520533248, 4);
  sqcRZGate(q, -3.1242638336812503, 4);
  sqcRYGate(q, 0.5553374077315993, 5);
  sqcRZGate(q, 0.2714662605760507, 5);
  sqcRYGate(q, -2.848921188090337, 6);
  sqcRZGate(q, 2.3246832004554556, 6);
  sqcRYGate(q, 2.7581934698544694, 7);
  sqcRZGate(q, -2.811950911469125, 7);
  sqcRYGate(q, 0.4611882094354662, 8);
  sqcRZGate(q, -2.9150957405992712, 8);
  sqcRYGate(q, 2.9736507689084717, 9);
  sqcRZGate(q, 0.6688061876059186, 9);
  sqcRYGate(q, -0.16742929384885122, 10);
  sqcRZGate(q, -1.6806610362341523, 10);
  sqcRYGate(q, -2.19570163156581, 11);
  sqcRZGate(q, 2.965573046346219, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1989018660397002, 0);
  sqcRZGate(q, 2.4669469791032532, 0);
  sqcRYGate(q, -1.6508122813262922, 1);
  sqcRZGate(q, 0.005340816327620068, 1);
  sqcRYGate(q, 1.5592504631442399, 2);
  sqcRZGate(q, 3.0168549879666062, 2);
  sqcRYGate(q, 3.14079676488921, 3);
  sqcRZGate(q, -0.4046304584369522, 3);
  sqcRYGate(q, 3.083675727306255, 4);
  sqcRZGate(q, -1.5367457749008109, 4);
  sqcRYGate(q, 0.00022455518361219617, 5);
  sqcRZGate(q, -0.01753084713049661, 5);
  sqcRYGate(q, -0.012912619383249613, 6);
  sqcRZGate(q, 0.822981795346953, 6);
  sqcRYGate(q, 0.029750752234423545, 7);
  sqcRZGate(q, -1.9365410206443523, 7);
  sqcRYGate(q, -0.054384452474058875, 8);
  sqcRZGate(q, -2.728040381617428, 8);
  sqcRYGate(q, -0.048107898181015685, 9);
  sqcRZGate(q, -0.6371219231240622, 9);
  sqcRYGate(q, 1.4205948976606475, 10);
  sqcRZGate(q, 1.684078176327045, 10);
  sqcRYGate(q, 0.31457779009548514, 11);
  sqcRZGate(q, 1.1468337444366121, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.14713595677378866, 0);
  sqcRZGate(q, 0.9198997386100863, 0);
  sqcRYGate(q, 2.222366394157598, 1);
  sqcRZGate(q, -1.4853134975053173, 1);
  sqcRYGate(q, 0.41083283172190915, 2);
  sqcRZGate(q, 2.639603911995784, 2);
  sqcRYGate(q, 0.31322931866155734, 3);
  sqcRZGate(q, 0.5181028683461457, 3);
  sqcRYGate(q, -0.6009875858363367, 4);
  sqcRZGate(q, 2.9964037323580466, 4);
  sqcRYGate(q, 1.836948091533808, 5);
  sqcRZGate(q, 1.016426505574027, 5);
  sqcRYGate(q, 2.292339987897429, 6);
  sqcRZGate(q, 1.4965969388830997, 6);
  sqcRYGate(q, -1.4679173440397557, 7);
  sqcRZGate(q, -1.5816299026321508, 7);
  sqcRYGate(q, 2.2647402283617577, 8);
  sqcRZGate(q, 2.9367844254287987, 8);
  sqcRYGate(q, -0.5476524732995738, 9);
  sqcRZGate(q, -2.785179330606132, 9);
  sqcRYGate(q, -0.4923255496459046, 10);
  sqcRZGate(q, 0.26893827195322917, 10);
  sqcRYGate(q, 1.3070092162974234, 11);
  sqcRZGate(q, 0.1662914779274669, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.383640006978834, 0);
  sqcRZGate(q, -0.700946328485828, 0);
  sqcRYGate(q, -3.1318884893644108, 1);
  sqcRZGate(q, 0.30758480563971996, 1);
  sqcRYGate(q, -3.1010759895547895, 2);
  sqcRZGate(q, 0.4311052122606496, 2);
  sqcRYGate(q, -3.139789425277378, 3);
  sqcRZGate(q, -1.167529109762075, 3);
  sqcRYGate(q, 0.002638714184049818, 4);
  sqcRZGate(q, -2.8334687998939736, 4);
  sqcRYGate(q, 3.1103120139540237, 5);
  sqcRZGate(q, -2.2754240329429614, 5);
  sqcRYGate(q, 3.1410107085304952, 6);
  sqcRZGate(q, 1.5355610730743998, 6);
  sqcRYGate(q, -0.009328412050368051, 7);
  sqcRZGate(q, -2.003610552229047, 7);
  sqcRYGate(q, -0.009522699000928725, 8);
  sqcRZGate(q, 0.29800008173502945, 8);
  sqcRYGate(q, -0.024618282466398078, 9);
  sqcRZGate(q, -0.5446686359668849, 9);
  sqcRYGate(q, -2.9275821632067407, 10);
  sqcRZGate(q, 2.364098047417806, 10);
  sqcRYGate(q, 0.1600060665545895, 11);
  sqcRZGate(q, 1.4873180741017087, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.1938280458440046, 0);
  sqcRZGate(q, -2.7005380113990762, 0);
  sqcRYGate(q, -0.07515810405318145, 1);
  sqcRZGate(q, -1.1414832572935847, 1);
  sqcRYGate(q, -0.04388302346485577, 2);
  sqcRZGate(q, -1.6025594537820114, 2);
  sqcRYGate(q, 1.5776168904740748, 3);
  sqcRZGate(q, 2.2498325783226445, 3);
  sqcRYGate(q, 2.5711842030870535, 4);
  sqcRZGate(q, 1.6953620035610277, 4);
  sqcRYGate(q, -2.7395482741234396, 5);
  sqcRZGate(q, 2.2372271705365665, 5);
  sqcRYGate(q, -1.4392043238465764, 6);
  sqcRZGate(q, 0.47698171284262253, 6);
  sqcRYGate(q, -1.239690271895953, 7);
  sqcRZGate(q, 1.8002663712521345, 7);
  sqcRYGate(q, -0.6641613538626238, 8);
  sqcRZGate(q, 1.8377065497795038, 8);
  sqcRYGate(q, -0.40872217569142055, 9);
  sqcRZGate(q, -1.7557875467286408, 9);
  sqcRYGate(q, -2.8625870671675986, 10);
  sqcRZGate(q, -0.33820447220848443, 10);
  sqcRYGate(q, -0.9645428323165488, 11);
  sqcRZGate(q, 0.11014390962318006, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.1823698153763376, 0);
  sqcRZGate(q, 0.08825634656905386, 0);
  sqcRYGate(q, 0.35274211902465774, 1);
  sqcRZGate(q, -0.18309517294112257, 1);
  sqcRYGate(q, -3.014437053772151, 2);
  sqcRZGate(q, -0.5398787626685202, 2);
  sqcRYGate(q, 3.1304237739056173, 3);
  sqcRZGate(q, -2.020232982478282, 3);
  sqcRYGate(q, -0.012422124009895619, 4);
  sqcRZGate(q, 3.063359751030318, 4);
  sqcRYGate(q, 1.7473721766087695, 5);
  sqcRZGate(q, 3.1281810784447757, 5);
  sqcRYGate(q, -3.1292141053588955, 6);
  sqcRZGate(q, -2.189388121270346, 6);
  sqcRYGate(q, -3.1395202126160355, 7);
  sqcRZGate(q, 2.2099891831009226, 7);
  sqcRYGate(q, 3.1281546069680126, 8);
  sqcRZGate(q, -1.9819005274391408, 8);
  sqcRYGate(q, -2.9257190087058182, 9);
  sqcRZGate(q, 0.8353881364079814, 9);
  sqcRYGate(q, 1.827749988994779, 10);
  sqcRZGate(q, -0.685987259398563, 10);
  sqcRYGate(q, -0.7762577850193768, 11);
  sqcRZGate(q, 1.5311305725244688, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.3800295627340091, 0);
  sqcRZGate(q, -1.4754749293030764, 0);
  sqcRYGate(q, -2.2896501796277957, 1);
  sqcRZGate(q, 0.8950594118050672, 1);
  sqcRYGate(q, 1.8806003664424573, 2);
  sqcRZGate(q, -0.9623343500884705, 2);
  sqcRYGate(q, 0.015448378367189262, 3);
  sqcRZGate(q, 2.158284954028094, 3);
  sqcRYGate(q, -3.1027981259591573, 4);
  sqcRZGate(q, -1.2589776441400966, 4);
  sqcRYGate(q, -1.2098248854163414, 5);
  sqcRZGate(q, 0.004977917319748393, 5);
  sqcRYGate(q, -1.5427314135233507, 6);
  sqcRZGate(q, 3.030454778240835, 6);
  sqcRYGate(q, -3.137362207968221, 7);
  sqcRZGate(q, 2.4929756386171356, 7);
  sqcRYGate(q, 3.072494349965956, 8);
  sqcRZGate(q, 1.5708129413648957, 8);
  sqcRYGate(q, 0.769469576752444, 9);
  sqcRZGate(q, -0.6143480822328451, 9);
  sqcRYGate(q, 0.5494436311450412, 10);
  sqcRZGate(q, -2.578284694339564, 10);
  sqcRYGate(q, -1.1518884331656176, 11);
  sqcRZGate(q, 1.5730196307887596, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.815468108742643, 0);
  sqcRZGate(q, 1.6238109291785792, 0);
  sqcRYGate(q, -0.21226310816898408, 1);
  sqcRZGate(q, -3.0974468760983953, 1);
  sqcRYGate(q, -0.00027126148124168026, 2);
  sqcRZGate(q, 1.1421420879574622, 2);
  sqcRYGate(q, 0.0006283046034214479, 3);
  sqcRZGate(q, 2.8601955989414103, 3);
  sqcRYGate(q, 3.132657520814244, 4);
  sqcRZGate(q, -1.047469768345354, 4);
  sqcRYGate(q, 1.7404609783898914, 5);
  sqcRZGate(q, -1.600445754987663, 5);
  sqcRYGate(q, -0.0015971835278181248, 6);
  sqcRZGate(q, -0.8150424312139304, 6);
  sqcRYGate(q, 0.006512509579479213, 7);
  sqcRZGate(q, -0.746929412301661, 7);
  sqcRYGate(q, 3.140668871511383, 8);
  sqcRZGate(q, 1.4203378843823833, 8);
  sqcRYGate(q, 3.108834093976075, 9);
  sqcRZGate(q, 1.6134532324631592, 9);
  sqcRYGate(q, 1.3807882577840707, 10);
  sqcRZGate(q, -2.6154435656733814, 10);
  sqcRYGate(q, -1.8075593732936213, 11);
  sqcRZGate(q, -0.27113732044175626, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.7862081436383188, 0);
  sqcRZGate(q, -2.9888526295890245, 0);
  sqcRYGate(q, 0.43551458322017667, 1);
  sqcRZGate(q, 0.820243751581628, 1);
  sqcRYGate(q, -1.5531579473857724, 2);
  sqcRZGate(q, -1.5960990974382332, 2);
  sqcRYGate(q, -3.084897577638414, 3);
  sqcRZGate(q, 0.6018322905478222, 3);
  sqcRYGate(q, -1.4613219556793011, 4);
  sqcRZGate(q, -2.507378119799226, 4);
  sqcRYGate(q, -1.8198128406143026, 5);
  sqcRZGate(q, 3.029892692044465, 5);
  sqcRYGate(q, -0.9110308926831763, 6);
  sqcRZGate(q, 1.9704247306896705, 6);
  sqcRYGate(q, -1.6787656098815307, 7);
  sqcRZGate(q, -0.6875972250180866, 7);
  sqcRYGate(q, -0.02061710734397249, 8);
  sqcRZGate(q, 2.2707378044498596, 8);
  sqcRYGate(q, -0.7533711670480709, 9);
  sqcRZGate(q, -1.2470227920308075, 9);
  sqcRYGate(q, -1.939153037034526, 10);
  sqcRZGate(q, 1.2140104260187934, 10);
  sqcRYGate(q, 2.8523163423652, 11);
  sqcRZGate(q, -0.6522286860914157, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.707251882466215, 0);
  sqcRZGate(q, -0.37968673390955276, 0);
  sqcRYGate(q, -2.757216046798571, 1);
  sqcRZGate(q, 0.1632409370157762, 1);
  sqcRYGate(q, -0.8073747056983515, 2);
  sqcRZGate(q, 1.5610502602353196, 2);
  sqcRYGate(q, -3.135527746127638, 3);
  sqcRZGate(q, -1.7749619938962038, 3);
  sqcRYGate(q, -3.139275208332755, 4);
  sqcRZGate(q, 2.2555382563061013, 4);
  sqcRYGate(q, -0.013307129264641837, 5);
  sqcRZGate(q, 1.6050121517929412, 5);
  sqcRYGate(q, -3.110531465096131, 6);
  sqcRZGate(q, -3.0955356066244692, 6);
  sqcRYGate(q, -3.1377568131983247, 7);
  sqcRZGate(q, -0.20982303590460677, 7);
  sqcRYGate(q, -0.0074976980685359145, 8);
  sqcRZGate(q, -3.1101298874514156, 8);
  sqcRYGate(q, -3.096241492635295, 9);
  sqcRZGate(q, 2.752435117123873, 9);
  sqcRYGate(q, 0.2049979977430763, 10);
  sqcRZGate(q, 0.2872136615457158, 10);
  sqcRYGate(q, 1.3250932484229008, 11);
  sqcRZGate(q, -1.290512574798128, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.02024637649575198, 0);
  sqcRZGate(q, -2.455401370249177, 0);
  sqcRYGate(q, -1.6100750816183114, 1);
  sqcRZGate(q, -1.2965076887668527, 1);
  sqcRYGate(q, 0.3524317270652319, 2);
  sqcRZGate(q, 0.33784730381936473, 2);
  sqcRYGate(q, -1.5628577205418805, 3);
  sqcRZGate(q, -1.2609152717637873, 3);
  sqcRYGate(q, 1.4819833731115393, 4);
  sqcRZGate(q, 0.24199525569415622, 4);
  sqcRYGate(q, -1.5382876915986872, 5);
  sqcRZGate(q, 0.0327567823814598, 5);
  sqcRYGate(q, -1.271277478199404, 6);
  sqcRZGate(q, -2.769499712354375, 6);
  sqcRYGate(q, 0.13453428566979045, 7);
  sqcRZGate(q, -3.1288517186305507, 7);
  sqcRYGate(q, 2.946021375350086, 8);
  sqcRZGate(q, -2.4398363257267217, 8);
  sqcRYGate(q, -2.865471568620768, 9);
  sqcRZGate(q, 1.3202466426737067, 9);
  sqcRYGate(q, 1.2344843494818027, 10);
  sqcRZGate(q, 2.1051419242039815, 10);
  sqcRYGate(q, 1.881871800912033, 11);
  sqcRZGate(q, -1.7870272365046436, 11);

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
