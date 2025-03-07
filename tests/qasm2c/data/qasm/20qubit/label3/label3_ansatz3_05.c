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

  sqcRYGate(q, -3.0562524397741626, 0);
  sqcRZGate(q, -2.191886148437952, 0);
  sqcRYGate(q, 1.150506844026115, 1);
  sqcRZGate(q, 1.2965157895320782, 1);
  sqcRYGate(q, 3.140177398252886, 2);
  sqcRZGate(q, 2.995667839328446, 2);
  sqcRYGate(q, 2.098273156876817, 3);
  sqcRZGate(q, 2.6292100686552256, 3);
  sqcRYGate(q, -1.4889906521391936, 4);
  sqcRZGate(q, 0.5793162505984618, 4);
  sqcRYGate(q, 3.141038923113396, 5);
  sqcRZGate(q, 1.5812838710077326, 5);
  sqcRYGate(q, -0.48559452769961814, 6);
  sqcRZGate(q, 1.1612117810936682, 6);
  sqcRYGate(q, -1.120426678999669, 7);
  sqcRZGate(q, -1.1167609003263703, 7);
  sqcRYGate(q, -2.0343982579260813, 8);
  sqcRZGate(q, 0.07669254943838619, 8);
  sqcRYGate(q, -0.09089798000575033, 9);
  sqcRZGate(q, 2.915080650544792, 9);
  sqcRYGate(q, -0.033138780199412396, 10);
  sqcRZGate(q, -1.118351383340766, 10);
  sqcRYGate(q, -2.64763644525045, 11);
  sqcRZGate(q, 0.2678204862615372, 11);
  sqcRYGate(q, -3.1316834819745947, 12);
  sqcRZGate(q, 1.057438825735343, 12);
  sqcRYGate(q, -0.24555949462503343, 13);
  sqcRZGate(q, 0.10061392417984827, 13);
  sqcRYGate(q, -0.331126525512321, 14);
  sqcRZGate(q, 2.9841574436132317, 14);
  sqcRYGate(q, -2.9275458425351903, 15);
  sqcRZGate(q, -0.35262517064256743, 15);
  sqcRYGate(q, -3.021488926612292, 16);
  sqcRZGate(q, -0.1765019575280144, 16);
  sqcRYGate(q, 1.6075448065713414, 17);
  sqcRZGate(q, -2.9254008131124154, 17);
  sqcRYGate(q, 2.7806484943378167, 18);
  sqcRZGate(q, -1.476549246978462, 18);
  sqcRYGate(q, -0.3762052391813937, 19);
  sqcRZGate(q, 2.3831250675227333, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.900757226699789, 0);
  sqcRZGate(q, -2.682761229479733, 0);
  sqcRYGate(q, -1.8515648167343448, 1);
  sqcRZGate(q, -2.1960821550744587, 1);
  sqcRYGate(q, 1.5706431788196333, 2);
  sqcRZGate(q, -1.653195106734475, 2);
  sqcRYGate(q, 1.202455023398118, 3);
  sqcRZGate(q, -0.13329739782511882, 3);
  sqcRYGate(q, 0.008242936536921874, 4);
  sqcRZGate(q, -0.7033185178522237, 4);
  sqcRYGate(q, -1.5855862530615727, 5);
  sqcRZGate(q, 2.4103011268481067, 5);
  sqcRYGate(q, -0.0014467868273069229, 6);
  sqcRZGate(q, 1.8125734381000038, 6);
  sqcRYGate(q, 0.1796078128034026, 7);
  sqcRZGate(q, 0.23822590007809344, 7);
  sqcRYGate(q, 1.784749908797977, 8);
  sqcRZGate(q, -0.21415822063344425, 8);
  sqcRYGate(q, -0.004836980007683975, 9);
  sqcRZGate(q, 0.043714401422563214, 9);
  sqcRYGate(q, 0.6966905507383254, 10);
  sqcRZGate(q, -0.2641630395554264, 10);
  sqcRYGate(q, -2.0399329132421036, 11);
  sqcRZGate(q, -0.112662146829119, 11);
  sqcRYGate(q, 3.1172866731460402, 12);
  sqcRZGate(q, -1.8721756147568511, 12);
  sqcRYGate(q, -0.23578610227957864, 13);
  sqcRZGate(q, -3.0320536776117035, 13);
  sqcRYGate(q, -2.8346667901252234, 14);
  sqcRZGate(q, 1.833131448776502, 14);
  sqcRYGate(q, -0.8372593555784089, 15);
  sqcRZGate(q, 0.3597285660041431, 15);
  sqcRYGate(q, -0.15837465759875824, 16);
  sqcRZGate(q, 3.1014219347900354, 16);
  sqcRYGate(q, 1.4853144730167531, 17);
  sqcRZGate(q, 0.9631382333119706, 17);
  sqcRYGate(q, 1.5093223125473265, 18);
  sqcRZGate(q, -1.7613890007460853, 18);
  sqcRYGate(q, -1.6649428132580972, 19);
  sqcRZGate(q, -1.1855771116462965, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5705857466832907, 0);
  sqcRZGate(q, -0.001687109808496956, 0);
  sqcRYGate(q, 2.6839126883027093, 1);
  sqcRZGate(q, -1.141523709960973, 1);
  sqcRYGate(q, -0.001170226686440239, 2);
  sqcRZGate(q, -3.0588646562455377, 2);
  sqcRYGate(q, -0.4824660244525531, 3);
  sqcRZGate(q, 1.8911687502042813, 3);
  sqcRYGate(q, -1.3194972368184301, 4);
  sqcRZGate(q, 1.8879356604201096, 4);
  sqcRYGate(q, -3.1374447093559796, 5);
  sqcRZGate(q, 1.7521745844217325, 5);
  sqcRYGate(q, 0.07788270978731608, 6);
  sqcRZGate(q, -2.798014094994013, 6);
  sqcRYGate(q, 1.5729111414744725, 7);
  sqcRZGate(q, -3.1273271868611148, 7);
  sqcRYGate(q, 0.3344353398008448, 8);
  sqcRZGate(q, -2.485882666186985, 8);
  sqcRYGate(q, -0.8018443309955003, 9);
  sqcRZGate(q, -1.3550358874671191, 9);
  sqcRYGate(q, -0.021026863905747817, 10);
  sqcRZGate(q, -0.8784127440310012, 10);
  sqcRYGate(q, 0.018389476262082753, 11);
  sqcRZGate(q, 1.7992124509655891, 11);
  sqcRYGate(q, -3.134154074180948, 12);
  sqcRZGate(q, 2.029350572545403, 12);
  sqcRYGate(q, -0.06382394564885807, 13);
  sqcRZGate(q, 2.3989996780862155, 13);
  sqcRYGate(q, 1.627994537751288, 14);
  sqcRZGate(q, 1.3956297850790924, 14);
  sqcRYGate(q, -2.5099766659552443, 15);
  sqcRZGate(q, 3.1332173550387625, 15);
  sqcRYGate(q, 1.529691136613204, 16);
  sqcRZGate(q, -1.0594228885189727, 16);
  sqcRYGate(q, -2.1405055059833415, 17);
  sqcRZGate(q, -2.539219224508595, 17);
  sqcRYGate(q, -1.773099837740169, 18);
  sqcRZGate(q, -3.0241777846171956, 18);
  sqcRYGate(q, -2.840002274455287, 19);
  sqcRZGate(q, -1.9167839739217714, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.6042921099691505, 0);
  sqcRZGate(q, 1.5578786873909811, 0);
  sqcRYGate(q, 1.571802285166946, 1);
  sqcRZGate(q, -1.5700348399314217, 1);
  sqcRYGate(q, 1.5722863491849886, 2);
  sqcRZGate(q, -1.53807149277843, 2);
  sqcRYGate(q, 1.7409466228510917, 3);
  sqcRZGate(q, -2.736072071052835, 3);
  sqcRYGate(q, 3.10864079852393, 4);
  sqcRZGate(q, 2.269327116674554, 4);
  sqcRYGate(q, 0.013392193353203297, 5);
  sqcRZGate(q, -2.7400283657505273, 5);
  sqcRYGate(q, 0.01188340977276603, 6);
  sqcRZGate(q, -3.032644147320711, 6);
  sqcRYGate(q, -0.22923637121399576, 7);
  sqcRZGate(q, 1.5480404951961715, 7);
  sqcRYGate(q, -3.085500024398409, 8);
  sqcRZGate(q, -2.231351859671529, 8);
  sqcRYGate(q, -2.6207698226124183, 9);
  sqcRZGate(q, 2.9461165786456815, 9);
  sqcRYGate(q, -1.3212101204611741, 10);
  sqcRZGate(q, -2.9772669065382598, 10);
  sqcRYGate(q, 1.6920704563803142, 11);
  sqcRZGate(q, -1.1997416298307604, 11);
  sqcRYGate(q, 3.125619040325457, 12);
  sqcRZGate(q, -1.721025899601633, 12);
  sqcRYGate(q, 3.140037275309959, 13);
  sqcRZGate(q, 1.6218724276766454, 13);
  sqcRYGate(q, 1.5819365861717731, 14);
  sqcRZGate(q, 3.087265472785494, 14);
  sqcRYGate(q, -1.5840710198892218, 15);
  sqcRZGate(q, -0.8117097203663004, 15);
  sqcRYGate(q, -3.0071211712962334, 16);
  sqcRZGate(q, -0.10383891869390728, 16);
  sqcRYGate(q, 0.030895221317836834, 17);
  sqcRZGate(q, 2.107410623905898, 17);
  sqcRYGate(q, -2.4953076012988777, 18);
  sqcRZGate(q, -1.7872797391661017, 18);
  sqcRYGate(q, -2.790941163184162, 19);
  sqcRZGate(q, 2.374967135124522, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.0846508805042143, 0);
  sqcRZGate(q, -1.5842908891479937, 0);
  sqcRYGate(q, -1.5671648728353347, 1);
  sqcRZGate(q, 1.3866550353508782, 1);
  sqcRYGate(q, 1.849829637729559, 2);
  sqcRZGate(q, 1.5862241355775994, 2);
  sqcRYGate(q, -3.0733909884472252, 3);
  sqcRZGate(q, 1.0366545422703144, 3);
  sqcRYGate(q, -1.5716747975646819, 4);
  sqcRZGate(q, 1.5727085799283866, 4);
  sqcRYGate(q, -3.141442213240431, 5);
  sqcRZGate(q, 1.320285791028999, 5);
  sqcRYGate(q, -1.5533786531744855, 6);
  sqcRZGate(q, 2.5171508134690392, 6);
  sqcRYGate(q, -0.7591872475414414, 7);
  sqcRZGate(q, 0.3012707620358791, 7);
  sqcRYGate(q, 0.25862755218464883, 8);
  sqcRZGate(q, 0.1926824657796919, 8);
  sqcRYGate(q, -2.8580565267489737, 9);
  sqcRZGate(q, -0.8029475158002324, 9);
  sqcRYGate(q, -3.131964169901332, 10);
  sqcRZGate(q, -0.44717809793638974, 10);
  sqcRYGate(q, -0.01600149629814762, 11);
  sqcRZGate(q, -0.3573945237455801, 11);
  sqcRYGate(q, 3.0483129533603344, 12);
  sqcRZGate(q, -2.1724029608272772, 12);
  sqcRYGate(q, -0.10615815926024563, 13);
  sqcRZGate(q, -1.3100708276934308, 13);
  sqcRYGate(q, -1.6093779695916135, 14);
  sqcRZGate(q, 1.4528189062921069, 14);
  sqcRYGate(q, -0.21963971023287276, 15);
  sqcRZGate(q, -1.0477515136139492, 15);
  sqcRYGate(q, -1.586108808492842, 16);
  sqcRZGate(q, -1.8606101414032041, 16);
  sqcRYGate(q, -0.0017959829179471682, 17);
  sqcRZGate(q, 0.7024418896605389, 17);
  sqcRYGate(q, -1.3719920755895332, 18);
  sqcRZGate(q, -2.5582646570313763, 18);
  sqcRYGate(q, -3.1301317492475076, 19);
  sqcRZGate(q, 1.7155795452107485, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5694082215913303, 0);
  sqcRZGate(q, -2.3750402107633533, 0);
  sqcRYGate(q, -2.113719191745818, 1);
  sqcRZGate(q, 0.06378925839075812, 1);
  sqcRYGate(q, -1.2883167294656233, 2);
  sqcRZGate(q, -3.0806632215449135, 2);
  sqcRYGate(q, -0.000696371437644038, 3);
  sqcRZGate(q, -2.5715758882858677, 3);
  sqcRYGate(q, -0.892635652179653, 4);
  sqcRZGate(q, 3.141230427012014, 4);
  sqcRYGate(q, 0.009669306643410466, 5);
  sqcRZGate(q, -2.2899159589076774, 5);
  sqcRYGate(q, 3.1408669193307626, 6);
  sqcRZGate(q, 0.9748828405761363, 6);
  sqcRYGate(q, 0.028440346029277086, 7);
  sqcRZGate(q, 2.7930166177318805, 7);
  sqcRYGate(q, 0.1792385767540561, 8);
  sqcRZGate(q, 0.542497283124833, 8);
  sqcRYGate(q, -2.7237595702442627, 9);
  sqcRZGate(q, -3.1053126612023694, 9);
  sqcRYGate(q, -1.518055591220707, 10);
  sqcRZGate(q, -0.12986500455644065, 10);
  sqcRYGate(q, -1.5645463809622704, 11);
  sqcRZGate(q, -0.16894245807250158, 11);
  sqcRYGate(q, -1.6432558327121072, 12);
  sqcRZGate(q, 0.8513954308724947, 12);
  sqcRYGate(q, 1.7388830136616473, 13);
  sqcRZGate(q, -3.0173469715479864, 13);
  sqcRYGate(q, -1.759102768106957, 14);
  sqcRZGate(q, -3.130191116583627, 14);
  sqcRYGate(q, -1.7043463274307484, 15);
  sqcRZGate(q, -1.2647235578192753, 15);
  sqcRYGate(q, 0.9743810877543087, 16);
  sqcRZGate(q, -1.4946200372773142, 16);
  sqcRYGate(q, 1.510545990090284, 17);
  sqcRZGate(q, -1.4886763649633998, 17);
  sqcRYGate(q, 1.4234573240445414, 18);
  sqcRZGate(q, -0.09809572087345006, 18);
  sqcRYGate(q, 2.5036465105522985, 19);
  sqcRZGate(q, -2.9490721195082332, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5704125537360216, 0);
  sqcRZGate(q, 2.9181161187305253, 0);
  sqcRYGate(q, 1.4577450518084172, 1);
  sqcRZGate(q, 1.7208031544462947, 1);
  sqcRYGate(q, -1.567596165619861, 2);
  sqcRZGate(q, 1.5702151964176485, 2);
  sqcRYGate(q, 0.2569124697596194, 3);
  sqcRZGate(q, -2.1822655117467553, 3);
  sqcRYGate(q, 1.558824942171972, 4);
  sqcRZGate(q, 0.037684541622095225, 4);
  sqcRYGate(q, -0.000780555555874076, 5);
  sqcRZGate(q, -1.6879924298533275, 5);
  sqcRYGate(q, 1.5334136274702765, 6);
  sqcRZGate(q, -0.04790187199430384, 6);
  sqcRYGate(q, 1.653998880287778, 7);
  sqcRZGate(q, -0.9725144298166858, 7);
  sqcRYGate(q, 3.1087478812967038, 8);
  sqcRZGate(q, -0.45257771037491773, 8);
  sqcRYGate(q, 3.1330597089196184, 9);
  sqcRZGate(q, 0.434535711088144, 9);
  sqcRYGate(q, 0.3589015072039956, 10);
  sqcRZGate(q, 2.954467889413114, 10);
  sqcRYGate(q, 2.8845298393472025, 11);
  sqcRZGate(q, 2.632332290774257, 11);
  sqcRYGate(q, -3.1346229002801596, 12);
  sqcRZGate(q, -2.3033813394572515, 12);
  sqcRYGate(q, -0.040040797621595785, 13);
  sqcRZGate(q, 3.004172419323825, 13);
  sqcRYGate(q, 0.4454046043166419, 14);
  sqcRZGate(q, -2.0943190448433495, 14);
  sqcRYGate(q, -2.8527029281623886, 15);
  sqcRZGate(q, -0.04507414447956304, 15);
  sqcRYGate(q, -0.4103655109446649, 16);
  sqcRZGate(q, -2.7395314810424654, 16);
  sqcRYGate(q, 3.0675086582014837, 17);
  sqcRZGate(q, -3.026224405946591, 17);
  sqcRYGate(q, -1.6463362583685095, 18);
  sqcRZGate(q, 0.3273457052886011, 18);
  sqcRYGate(q, 1.3921306896373906, 19);
  sqcRZGate(q, -1.4538145356228418, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.014321126746325973, 0);
  sqcRZGate(q, 3.0251643601971345, 0);
  sqcRYGate(q, -1.571728989617822, 1);
  sqcRZGate(q, -1.339196595893539, 1);
  sqcRYGate(q, -1.5551680959351932, 2);
  sqcRZGate(q, 1.010483013693622, 2);
  sqcRYGate(q, 1.5646283750124272, 3);
  sqcRZGate(q, 0.003260895998501212, 3);
  sqcRYGate(q, -0.0008814516137032421, 4);
  sqcRZGate(q, -0.036771688295259966, 4);
  sqcRYGate(q, 3.1411243799024944, 5);
  sqcRZGate(q, 2.5335673175903177, 5);
  sqcRYGate(q, -0.052778493819819694, 6);
  sqcRZGate(q, 2.9572225609477623, 6);
  sqcRYGate(q, 0.0005086684448292189, 7);
  sqcRZGate(q, 2.704332557777069, 7);
  sqcRYGate(q, 3.006849918090255, 8);
  sqcRZGate(q, 3.1111002115474555, 8);
  sqcRYGate(q, 0.13009111403792417, 9);
  sqcRZGate(q, 0.1912482578721698, 9);
  sqcRYGate(q, 3.1412251917044545, 10);
  sqcRZGate(q, 2.5329618255565993, 10);
  sqcRYGate(q, -0.004791670212506633, 11);
  sqcRZGate(q, 1.146036659344229, 11);
  sqcRYGate(q, 1.5024556479131386, 12);
  sqcRZGate(q, 0.42808466657545724, 12);
  sqcRYGate(q, -1.3994293437811756, 13);
  sqcRZGate(q, 0.6036373919067346, 13);
  sqcRYGate(q, -2.999185770098116, 14);
  sqcRZGate(q, 1.46379833556011, 14);
  sqcRYGate(q, 3.0801954955725934, 15);
  sqcRZGate(q, 2.4401830341769806, 15);
  sqcRYGate(q, -0.010645621895784885, 16);
  sqcRZGate(q, 2.5315139372393425, 16);
  sqcRYGate(q, 3.134241891156058, 17);
  sqcRZGate(q, 1.7657707819548774, 17);
  sqcRYGate(q, -0.9063951624010311, 18);
  sqcRZGate(q, -1.9349682422786554, 18);
  sqcRYGate(q, 1.7422796575632473, 19);
  sqcRZGate(q, 2.7633190179438833, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.007209886013181803, 0);
  sqcRZGate(q, 1.287991910479506, 0);
  sqcRYGate(q, -0.01245269750855311, 1);
  sqcRZGate(q, -0.8286404826950358, 1);
  sqcRYGate(q, 3.14143832234638, 2);
  sqcRZGate(q, 1.9589269408259777, 2);
  sqcRYGate(q, -1.5585046352618213, 3);
  sqcRZGate(q, 2.5446605721015336, 3);
  sqcRYGate(q, 1.551246495933837, 4);
  sqcRZGate(q, 0.9475189113745596, 4);
  sqcRYGate(q, 3.070678637370036, 5);
  sqcRZGate(q, -1.9006230778779003, 5);
  sqcRYGate(q, -3.0837523868028724, 6);
  sqcRZGate(q, -2.4311088001289756, 6);
  sqcRYGate(q, 3.0754964682559605, 7);
  sqcRZGate(q, -0.37948015989729544, 7);
  sqcRYGate(q, -1.5438507226865177, 8);
  sqcRZGate(q, -0.647866348111696, 8);
  sqcRYGate(q, 1.5629970698075137, 9);
  sqcRZGate(q, 2.5846190479062168, 9);
  sqcRYGate(q, 1.5907522823743445, 10);
  sqcRZGate(q, -0.6479457235107119, 10);
  sqcRYGate(q, 1.621701549720361, 11);
  sqcRZGate(q, 2.590441343912744, 11);
  sqcRYGate(q, 1.572629723886069, 12);
  sqcRZGate(q, 2.501022418880116, 12);
  sqcRYGate(q, -1.560902530001859, 13);
  sqcRZGate(q, -0.5737947342237719, 13);
  sqcRYGate(q, 1.5709476567865546, 14);
  sqcRZGate(q, 2.4315439757048156, 14);
  sqcRYGate(q, -1.6023451655621281, 15);
  sqcRZGate(q, 2.5404851413306324, 15);
  sqcRYGate(q, 0.8955310215633336, 16);
  sqcRZGate(q, -2.2624402708961737, 16);
  sqcRYGate(q, -0.765760763159194, 17);
  sqcRZGate(q, -2.286763602948346, 17);
  sqcRYGate(q, -2.8066031082388174, 18);
  sqcRZGate(q, -2.3173750287889354, 18);
  sqcRYGate(q, -1.6318037434192973, 19);
  sqcRZGate(q, -0.4264683689649448, 19);

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
