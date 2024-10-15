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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -0.7891347558365834, 0);
  sqcRYGate(q, 1.5849548127444208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7123855622269373, 0);
  sqcRYGate(q, 3.0150034382273647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21567710389146555, 2);
  sqcRYGate(q, 0.3810152197355743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0994463172042774, 2);
  sqcRYGate(q, 1.2334166145099466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.703805377974665, 4);
  sqcRYGate(q, -0.9002984518917038, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.458477256524473, 4);
  sqcRYGate(q, 1.2244889755192658, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9912129700993315, 6);
  sqcRYGate(q, 1.6756271439848867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.24573078275500038, 6);
  sqcRYGate(q, 3.1294549100181266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6377072901777163, 8);
  sqcRYGate(q, -2.7894810037269764, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1840634871446971, 8);
  sqcRYGate(q, 2.679218461230835, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6933386271694548, 10);
  sqcRYGate(q, -1.203795179206759, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6818636667611688, 10);
  sqcRYGate(q, -1.226706047425519, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.569730526429332, 12);
  sqcRYGate(q, -1.8030214746139752, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0343093802137853, 12);
  sqcRYGate(q, -1.7611368468709099, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.8335668904292167, 14);
  sqcRYGate(q, -0.8675359231159441, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.7883600709745746, 14);
  sqcRYGate(q, 1.5473592360562947, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.28213209240199166, 16);
  sqcRYGate(q, 2.2231035895140563, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.359070549239503, 16);
  sqcRYGate(q, 2.34787193171353, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.456068125858823, 18);
  sqcRYGate(q, -2.989311024410989, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.3188561733473234, 18);
  sqcRYGate(q, -2.431194676209529, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.092192347886801, 1);
  sqcRYGate(q, 2.562385365449476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0797055184842883, 1);
  sqcRYGate(q, -0.010026579145024113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.722617718181905, 3);
  sqcRYGate(q, -2.969179201595804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1234183449879362, 3);
  sqcRYGate(q, 1.5909702707280793, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0418765751929433, 5);
  sqcRYGate(q, 0.8797289734167979, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4902149198471193, 5);
  sqcRYGate(q, -2.153476900867375, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7823981091102206, 7);
  sqcRYGate(q, 1.9916922058556459, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.23174261039192703, 7);
  sqcRYGate(q, 1.2898087165237477, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4969575806244526, 9);
  sqcRYGate(q, -0.4362402021565436, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3210494471899887, 9);
  sqcRYGate(q, 1.9823735773235986, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3510494938146422, 11);
  sqcRYGate(q, 0.7003110627317163, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.363880556834177, 11);
  sqcRYGate(q, -1.9132571195689012, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.1255415606361483, 13);
  sqcRYGate(q, -1.9826490784639577, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5185441080970616, 13);
  sqcRYGate(q, 2.6300617680663896, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8531927532903278, 15);
  sqcRYGate(q, 3.1327792343971197, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.003546144271511595, 15);
  sqcRYGate(q, 3.026125372634048, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.26815873451182165, 17);
  sqcRYGate(q, 0.41043640393969566, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.0531345909590106, 17);
  sqcRYGate(q, 2.3273597595532105, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.8033210889407933, 0);
  sqcRYGate(q, 0.4576796567030419, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0299895989784105, 0);
  sqcRYGate(q, -2.0074477580504118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5446903710683533, 2);
  sqcRYGate(q, -1.689125033542931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6029310571589956, 2);
  sqcRYGate(q, -0.4464729585867264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5421689446757556, 4);
  sqcRYGate(q, -1.9506246528253164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23888392806314596, 4);
  sqcRYGate(q, -3.0374211353845886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2019892666531297, 6);
  sqcRYGate(q, -1.7887649484900647, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03590460926024086, 6);
  sqcRYGate(q, 1.6430607116159708, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5380219701189317, 8);
  sqcRYGate(q, -1.3143397535469994, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5560315430284186, 8);
  sqcRYGate(q, -0.4591429965733633, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3146963573549824, 10);
  sqcRYGate(q, -0.6212366990956664, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.25224847632061975, 10);
  sqcRYGate(q, 2.5257502311838604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9762868180261064, 12);
  sqcRYGate(q, 2.704365581865816, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2820138385827973, 12);
  sqcRYGate(q, 3.0829499129454705, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5871033990410549, 14);
  sqcRYGate(q, -1.6359504826780302, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6724700138807618, 14);
  sqcRYGate(q, 2.172648641836436, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.06359613769898596, 16);
  sqcRYGate(q, -0.21712154180986948, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.074140410762592, 16);
  sqcRYGate(q, 0.03223240626620689, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.8434312784200682, 18);
  sqcRYGate(q, 3.0967004466345984, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.7606307555088598, 18);
  sqcRYGate(q, 3.0681023216849277, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.067451113039837, 1);
  sqcRYGate(q, -0.9227333637033213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.038461545782171765, 1);
  sqcRYGate(q, -0.0747993088827422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.554133589978566, 3);
  sqcRYGate(q, -0.42279492644001254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4463810224695414, 3);
  sqcRYGate(q, 1.9364404166226532, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5279185904997759, 5);
  sqcRYGate(q, -0.48293961716415124, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4066310919254619, 5);
  sqcRYGate(q, 1.6160658747502197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0835554453688518, 7);
  sqcRYGate(q, -1.2740063597282347, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5778987072204069, 7);
  sqcRYGate(q, 0.9747010408042502, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6953852521946295, 9);
  sqcRYGate(q, -1.7262447704885462, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.25939722207911, 9);
  sqcRYGate(q, -0.7284173832921788, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.08882004390106, 11);
  sqcRYGate(q, -2.076074678153066, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.8551391363734844, 11);
  sqcRYGate(q, -3.021658482499675, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6315196354901145, 13);
  sqcRYGate(q, 0.8520741509898313, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.020603248649697332, 13);
  sqcRYGate(q, 0.04011507381234303, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.245205165935772, 15);
  sqcRYGate(q, 0.6356497209419044, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.4761994192493448, 15);
  sqcRYGate(q, -1.576802044722176, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.42094323779044274, 17);
  sqcRYGate(q, -0.4894300681472786, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.816019735794951, 17);
  sqcRYGate(q, -1.3852861157852834, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.9744054633699114, 0);
  sqcRYGate(q, 0.23639247196375007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4127536377711476, 0);
  sqcRYGate(q, -3.0985131022797696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9288221550097244, 2);
  sqcRYGate(q, -2.9865294292781734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42758312641910834, 2);
  sqcRYGate(q, -0.10985015281976551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.603645740977864, 4);
  sqcRYGate(q, 0.4116453905514183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0849239587473583, 4);
  sqcRYGate(q, -1.5817721647906193, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9699395089597753, 6);
  sqcRYGate(q, 2.1328470367749985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.007568785615613471, 6);
  sqcRYGate(q, -2.991562850513606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16185298201703802, 8);
  sqcRYGate(q, -1.3916149232965713, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.265064883778799, 8);
  sqcRYGate(q, 0.27896079848199395, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6516082750810344, 10);
  sqcRYGate(q, -2.6498726474395644, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.30132190023485556, 10);
  sqcRYGate(q, -2.658087963910086, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.64818891920343, 12);
  sqcRYGate(q, 2.5124455299249453, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7836893765842756, 12);
  sqcRYGate(q, -0.09241696444545067, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.8664223291784934, 14);
  sqcRYGate(q, 2.7579567292957927, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.906647627265583, 14);
  sqcRYGate(q, -1.26736778560681, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5192542773465582, 16);
  sqcRYGate(q, 1.1955661029815334, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.648010729549668, 16);
  sqcRYGate(q, -2.651956221711477, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0802070466547935, 18);
  sqcRYGate(q, 2.1041002700652545, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.4851724788776988, 18);
  sqcRYGate(q, 2.9927400913922515, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.26699203966295126, 1);
  sqcRYGate(q, -1.525758988646083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.087535745393786, 1);
  sqcRYGate(q, -1.1536067312117106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7126565272452838, 3);
  sqcRYGate(q, -2.7117241243910692, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.139293575641474, 3);
  sqcRYGate(q, -1.614888312346677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.45355184262278925, 5);
  sqcRYGate(q, 0.34130527406881495, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9711429555936231, 5);
  sqcRYGate(q, 0.7138864915508059, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.532235050018893, 7);
  sqcRYGate(q, -2.5042688517705574, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8353976218854516, 7);
  sqcRYGate(q, 2.1350377730502244, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8415860178553096, 9);
  sqcRYGate(q, 2.5366437156761066, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9254623432550775, 9);
  sqcRYGate(q, 1.4846218459541838, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.768390119678887, 11);
  sqcRYGate(q, 1.2581537212644613, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.720036986968073, 11);
  sqcRYGate(q, -2.240873496296113, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7231846533043003, 13);
  sqcRYGate(q, -1.5253917198187859, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7848468839955096, 13);
  sqcRYGate(q, 1.6918032626255401, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.039493910009829, 15);
  sqcRYGate(q, -1.9161650905073244, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.006859455623194443, 15);
  sqcRYGate(q, -0.12169129254793187, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.311414499387975, 17);
  sqcRYGate(q, 1.3631368496631435, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.711839922561655, 17);
  sqcRYGate(q, 1.0343339669679887, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.0176247642905953, 0);
  sqcRYGate(q, 1.1372608502017387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6304467590114805, 0);
  sqcRYGate(q, 2.915626814212052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9227747815542369, 2);
  sqcRYGate(q, 1.5445730455757083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6675724005858847, 2);
  sqcRYGate(q, -1.5340678261065301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9324336004473136, 4);
  sqcRYGate(q, 1.4085775937595704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9798937859290637, 4);
  sqcRYGate(q, 0.49571464822169314, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.110170338140616, 6);
  sqcRYGate(q, 1.9895008071651425, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0005671645514054344, 6);
  sqcRYGate(q, 0.13380735652244752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7062377065265206, 8);
  sqcRYGate(q, 3.06631013277862, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.08177690894531153, 8);
  sqcRYGate(q, 0.5599688854292957, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3169180852649287, 10);
  sqcRYGate(q, 1.842913949112101, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2113328213562059, 10);
  sqcRYGate(q, -3.1297854471433935, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.266840267708062, 12);
  sqcRYGate(q, -1.623231789847937, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.037164373158959, 12);
  sqcRYGate(q, -0.018178932715867013, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4258506345071427, 14);
  sqcRYGate(q, 2.988914424531617, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0023348445678333, 14);
  sqcRYGate(q, 0.7467356281892696, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9575078161586057, 16);
  sqcRYGate(q, -0.8191461851299076, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.828160812923621, 16);
  sqcRYGate(q, 0.26045631385554596, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.9642741874414853, 18);
  sqcRYGate(q, 1.7389680758436448, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.4803366907981657, 18);
  sqcRYGate(q, -0.9149533463417546, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5334579573701552, 1);
  sqcRYGate(q, -0.008006581700137792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6607428817118137, 1);
  sqcRYGate(q, -1.5472487076511745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0980942457141745, 3);
  sqcRYGate(q, -1.6785641992419222, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1228943266787605, 3);
  sqcRYGate(q, 3.094362825743736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.922497946387474, 5);
  sqcRYGate(q, -1.6120448254397317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4852099171232744, 5);
  sqcRYGate(q, -0.18575431554310473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.43370555541428674, 7);
  sqcRYGate(q, 1.492935213592253, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.431878782126168, 7);
  sqcRYGate(q, 0.05931192878975633, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.257617323073082, 9);
  sqcRYGate(q, 0.3262552123397324, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3697769458749838, 9);
  sqcRYGate(q, 1.7413263585160967, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1702005036881813, 11);
  sqcRYGate(q, 0.9833677320093442, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.442366068565863, 11);
  sqcRYGate(q, 1.9844748936765004, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4037348806418244, 13);
  sqcRYGate(q, -1.3956845451255369, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4962107779407001, 13);
  sqcRYGate(q, -1.9158456376310973, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.073415781059694, 15);
  sqcRYGate(q, 2.7849585605873046, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.097611283644372, 15);
  sqcRYGate(q, -0.19568093150148425, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.8682882313455287, 17);
  sqcRYGate(q, -1.9199277008858175, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.6253027969949632, 17);
  sqcRYGate(q, -0.1829180057115373, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.41355003221820397, 0);
  sqcRYGate(q, 0.1013045095500963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.039088047950642, 0);
  sqcRYGate(q, 1.5091426950632376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9701857013944384, 2);
  sqcRYGate(q, -1.4306952969682063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.109721473813767, 2);
  sqcRYGate(q, -0.0007572821457371148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7907122728364335, 4);
  sqcRYGate(q, -1.9736588987073755, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.016313263169317402, 4);
  sqcRYGate(q, -2.652681029528997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.985419714671964, 6);
  sqcRYGate(q, 1.760440829931807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.12152732888228622, 6);
  sqcRYGate(q, 3.1121087876557607, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.29689337478027955, 8);
  sqcRYGate(q, -0.034359883991263156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5446039131157683, 8);
  sqcRYGate(q, -2.8539958631699625, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4885902428044457, 10);
  sqcRYGate(q, -1.072878204136073, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.10816925970859068, 10);
  sqcRYGate(q, -0.3472807123947872, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8599885794476333, 12);
  sqcRYGate(q, -0.0925146146146929, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.032811122912944, 12);
  sqcRYGate(q, 3.0658238097770916, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7350997957701441, 14);
  sqcRYGate(q, -1.8436107814113445, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4147256113586517, 14);
  sqcRYGate(q, 1.689440371174502, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.8779150224898986, 16);
  sqcRYGate(q, -2.337214474319767, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.03518033656824759, 16);
  sqcRYGate(q, -2.6469349457927365, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.0961658726360015, 18);
  sqcRYGate(q, 2.1974228827430164, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.9569690166713773, 18);
  sqcRYGate(q, 1.7970857340930824, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.5508602062432516, 1);
  sqcRYGate(q, -2.6676889296568134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6570478021456043, 1);
  sqcRYGate(q, 3.1347660610323733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09302560023262567, 3);
  sqcRYGate(q, -3.0077520528199844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8942501229254085, 3);
  sqcRYGate(q, 0.1006762351052135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6471391244490388, 5);
  sqcRYGate(q, -1.8845032451391122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.126548153314847, 5);
  sqcRYGate(q, 1.9186262523250486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2711165150636674, 7);
  sqcRYGate(q, -1.6238888711223627, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9927554962548997, 7);
  sqcRYGate(q, -3.11139998317369, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6059818824409695, 9);
  sqcRYGate(q, 1.7945966821445722, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.811718962198802, 9);
  sqcRYGate(q, 2.8641663315166634, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0071790187947393565, 11);
  sqcRYGate(q, -0.9966133428417399, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.689559003257771, 11);
  sqcRYGate(q, 2.7078707004552185, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.24020798620247627, 13);
  sqcRYGate(q, 0.4355513965227656, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.31133844912449504, 13);
  sqcRYGate(q, 0.36441880557957074, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.9777302847953866, 15);
  sqcRYGate(q, -2.060510618403545, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.14879802386579288, 15);
  sqcRYGate(q, 3.0216978178145992, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.5707711064526197, 17);
  sqcRYGate(q, 1.4557659950258242, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.6243891338611407, 17);
  sqcRYGate(q, 2.5992722727056043, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.04917986822255571, 0);
  sqcRYGate(q, 0.9351709691290271, 1);
  sqcRYGate(q, 1.568468021189468, 2);
  sqcRYGate(q, -1.4180939831183395, 3);
  sqcRYGate(q, 0.0759526080851387, 4);
  sqcRYGate(q, 1.6966182199144477, 5);
  sqcRYGate(q, 0.04106590713685802, 6);
  sqcRYGate(q, -1.9067884138009625, 7);
  sqcRYGate(q, -2.951928918850184, 8);
  sqcRYGate(q, 1.4808741039022526, 9);
  sqcRYGate(q, -3.0333049238279357, 10);
  sqcRYGate(q, 1.5150318860801235, 11);
  sqcRYGate(q, 1.9768714395944185, 12);
  sqcRYGate(q, 1.7064510676288704, 13);
  sqcRYGate(q, 3.0733020567300353, 14);
  sqcRYGate(q, 1.7813478302940535, 15);
  sqcRYGate(q, -2.9851532880807334, 16);
  sqcRYGate(q, -1.333279993644621, 17);
  sqcRYGate(q, 0.05092061594305263, 18);
  sqcRYGate(q, 1.1940231928676501, 19);

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
