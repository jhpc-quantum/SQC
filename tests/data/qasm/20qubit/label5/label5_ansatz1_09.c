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

  sqcRYGate(q, -1.8964531978481798, 0);
  sqcRZGate(q, -2.3925593092499806, 0);
  sqcRYGate(q, -3.1307001249377038, 1);
  sqcRZGate(q, -1.2800087724850486, 1);
  sqcRYGate(q, -2.2121467449680625, 2);
  sqcRZGate(q, -1.2034145152452274, 2);
  sqcRYGate(q, -2.093449624464732, 3);
  sqcRZGate(q, -1.5978335148862859, 3);
  sqcRYGate(q, -3.1324360032926144, 4);
  sqcRZGate(q, -1.647812140068864, 4);
  sqcRYGate(q, 1.668724135650013, 5);
  sqcRZGate(q, -1.770984088566416, 5);
  sqcRYGate(q, 1.6515925523715858, 6);
  sqcRZGate(q, 2.89330021681774, 6);
  sqcRYGate(q, -0.04259972123399662, 7);
  sqcRZGate(q, -1.0284473819939635, 7);
  sqcRYGate(q, 0.15627935566226053, 8);
  sqcRZGate(q, -3.0730764377308555, 8);
  sqcRYGate(q, -0.638546752074328, 9);
  sqcRZGate(q, 0.00473114284076015, 9);
  sqcRYGate(q, 1.565991802424425, 10);
  sqcRZGate(q, -0.7693054354710472, 10);
  sqcRYGate(q, 1.5649204418710347, 11);
  sqcRZGate(q, 0.19300322467595973, 11);
  sqcRYGate(q, -0.0009177276701402586, 12);
  sqcRZGate(q, -1.5411514350257585, 12);
  sqcRYGate(q, -1.5673330120859852, 13);
  sqcRZGate(q, 0.6355808757752115, 13);
  sqcRYGate(q, -1.573572539939371, 14);
  sqcRZGate(q, 1.6213629020347224, 14);
  sqcRYGate(q, -1.5099164903241977, 15);
  sqcRZGate(q, -0.6006612885304792, 15);
  sqcRYGate(q, -0.2330038857163482, 16);
  sqcRZGate(q, 1.414777419646776, 16);
  sqcRYGate(q, -2.5118808812168543, 17);
  sqcRZGate(q, -2.4115061112707434, 17);
  sqcRYGate(q, -2.7504055880235025, 18);
  sqcRZGate(q, -1.6672373960683065, 18);
  sqcRYGate(q, -0.13330866420706133, 19);
  sqcRZGate(q, -0.7726417525194571, 19);
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
  sqcRYGate(q, -1.637041308603468, 0);
  sqcRZGate(q, 0.5194442749829093, 0);
  sqcRYGate(q, 1.605740182535735, 1);
  sqcRZGate(q, 2.9546298924344394, 1);
  sqcRYGate(q, -0.6425217802800353, 2);
  sqcRZGate(q, -0.42894288980564266, 2);
  sqcRYGate(q, -1.5560398828213973, 3);
  sqcRZGate(q, 0.5155449915207065, 3);
  sqcRYGate(q, 1.692043875701991, 4);
  sqcRZGate(q, -1.2139604762543916, 4);
  sqcRYGate(q, -2.009374467024008, 5);
  sqcRZGate(q, -2.53152869106962, 5);
  sqcRYGate(q, -0.6841108838053368, 6);
  sqcRZGate(q, 1.1588545239727575, 6);
  sqcRYGate(q, 1.612681897946142, 7);
  sqcRZGate(q, -0.7779135825304628, 7);
  sqcRYGate(q, 2.622201988022828, 8);
  sqcRZGate(q, 2.0299376626177006, 8);
  sqcRYGate(q, 0.9289106787349019, 9);
  sqcRZGate(q, 2.9435618834445245, 9);
  sqcRYGate(q, 0.06618161151592959, 10);
  sqcRZGate(q, 2.469590604548634, 10);
  sqcRYGate(q, -1.6708604492506, 11);
  sqcRZGate(q, -1.9549829755107366, 11);
  sqcRYGate(q, -1.5103138806147118, 12);
  sqcRZGate(q, -0.13345068916000627, 12);
  sqcRYGate(q, 3.1394902151694155, 13);
  sqcRZGate(q, 3.099208629704235, 13);
  sqcRYGate(q, 1.6367114146081805, 14);
  sqcRZGate(q, 1.5731383821742024, 14);
  sqcRYGate(q, -0.08999373371487414, 15);
  sqcRZGate(q, -2.5532745756380595, 15);
  sqcRYGate(q, 3.063392042406326, 16);
  sqcRZGate(q, 3.037153187222365, 16);
  sqcRYGate(q, 1.6455980346209993, 17);
  sqcRZGate(q, 1.8400402051414249, 17);
  sqcRYGate(q, -1.9911839214646814, 18);
  sqcRZGate(q, -1.6822556953424284, 18);
  sqcRYGate(q, 1.1543273729597603, 19);
  sqcRZGate(q, 2.530546180958449, 19);
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
  sqcRYGate(q, -2.701344317013537, 0);
  sqcRZGate(q, -2.621915186955658, 0);
  sqcRYGate(q, 0.03490584467008695, 1);
  sqcRZGate(q, 1.967094236404649, 1);
  sqcRYGate(q, -1.5774309172532344, 2);
  sqcRZGate(q, 2.5934823727697838, 2);
  sqcRYGate(q, 0.5131095296739767, 3);
  sqcRZGate(q, -3.1384255922628173, 3);
  sqcRYGate(q, 1.7010742285791902, 4);
  sqcRZGate(q, 1.3104186906345516, 4);
  sqcRYGate(q, -0.9120896589761047, 5);
  sqcRZGate(q, 0.6957867211412028, 5);
  sqcRYGate(q, 0.45132864432644837, 6);
  sqcRZGate(q, -0.37793231107065356, 6);
  sqcRYGate(q, 3.135016003869859, 7);
  sqcRZGate(q, 0.8724209206745055, 7);
  sqcRYGate(q, 0.0004855542930375378, 8);
  sqcRZGate(q, -1.2058814948335577, 8);
  sqcRYGate(q, -1.0149913817413836, 9);
  sqcRZGate(q, -2.605624927480771, 9);
  sqcRYGate(q, 0.031323431463691875, 10);
  sqcRZGate(q, -1.2630203470388057, 10);
  sqcRYGate(q, 1.57613816417214, 11);
  sqcRZGate(q, -0.799066347198876, 11);
  sqcRYGate(q, -0.002850766449811637, 12);
  sqcRZGate(q, 2.801454985072343, 12);
  sqcRYGate(q, -2.529545202331007, 13);
  sqcRZGate(q, -0.015706353840638343, 13);
  sqcRYGate(q, -1.57551910166993, 14);
  sqcRZGate(q, 0.6062959392224148, 14);
  sqcRYGate(q, -0.657949564086047, 15);
  sqcRZGate(q, -2.200806394391558, 15);
  sqcRYGate(q, 1.4881727377563216, 16);
  sqcRZGate(q, 2.8713392106141824, 16);
  sqcRYGate(q, 0.41507460155968484, 17);
  sqcRZGate(q, 2.034404288586824, 17);
  sqcRYGate(q, 0.010687078463343597, 18);
  sqcRZGate(q, -1.3722639745014718, 18);
  sqcRYGate(q, -2.4259841587901834, 19);
  sqcRZGate(q, 1.110083804905571, 19);
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
  sqcRYGate(q, 1.3280649280617496, 0);
  sqcRZGate(q, -2.071032882621961, 0);
  sqcRYGate(q, -1.5411650745774468, 1);
  sqcRZGate(q, 1.6626147779339293, 1);
  sqcRYGate(q, -1.669653362357246, 2);
  sqcRZGate(q, 2.8892294135595313, 2);
  sqcRYGate(q, 1.8786754302849353, 3);
  sqcRZGate(q, 0.0025243745108429754, 3);
  sqcRYGate(q, 0.05714281299535609, 4);
  sqcRZGate(q, 2.8669602781126815, 4);
  sqcRYGate(q, 0.004489157961448775, 5);
  sqcRZGate(q, -2.094514298737841, 5);
  sqcRYGate(q, 3.0037548462369923, 6);
  sqcRZGate(q, 0.575808835549141, 6);
  sqcRYGate(q, 0.9531627696788152, 7);
  sqcRZGate(q, -1.0206782623643074, 7);
  sqcRYGate(q, 2.2974372837672035, 8);
  sqcRZGate(q, 3.122121444764873, 8);
  sqcRYGate(q, 0.08705431554337206, 9);
  sqcRZGate(q, -0.43662585085453465, 9);
  sqcRYGate(q, 0.7777687411099681, 10);
  sqcRZGate(q, 1.5765619827543897, 10);
  sqcRYGate(q, -0.2332986431146229, 11);
  sqcRZGate(q, 0.7962250797670345, 11);
  sqcRYGate(q, 1.1193844729239837, 12);
  sqcRZGate(q, -2.62446900300269, 12);
  sqcRYGate(q, -2.342008588714334, 13);
  sqcRZGate(q, -0.9878400939280425, 13);
  sqcRYGate(q, 1.5338685853246403, 14);
  sqcRZGate(q, -1.6472489056351076, 14);
  sqcRYGate(q, 1.6281484585538064, 15);
  sqcRZGate(q, -1.9799066206942335, 15);
  sqcRYGate(q, 1.6137611118539672, 16);
  sqcRZGate(q, 0.09635283018687357, 16);
  sqcRYGate(q, 1.1873311438725098, 17);
  sqcRZGate(q, -0.09747861371706978, 17);
  sqcRYGate(q, -0.5316588453357122, 18);
  sqcRZGate(q, 1.9016255943211322, 18);
  sqcRYGate(q, -1.0973309717898103, 19);
  sqcRZGate(q, 0.6326739927892185, 19);
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
  sqcRYGate(q, 1.7250625979229, 0);
  sqcRZGate(q, 2.8771001526265354, 0);
  sqcRYGate(q, 2.833610333722504, 1);
  sqcRZGate(q, -0.8845463612279819, 1);
  sqcRYGate(q, 1.7506968215147527, 2);
  sqcRZGate(q, 1.165559430345034, 2);
  sqcRYGate(q, -2.0009314127896896, 3);
  sqcRZGate(q, 0.002202418214983126, 3);
  sqcRYGate(q, 0.0013753677517103213, 4);
  sqcRZGate(q, 1.9987840172728015, 4);
  sqcRYGate(q, -3.0630811596021563, 5);
  sqcRZGate(q, -3.133157006229551, 5);
  sqcRYGate(q, 1.3958541797819528, 6);
  sqcRZGate(q, 1.3574813837833795, 6);
  sqcRYGate(q, 0.0021549085183004283, 7);
  sqcRZGate(q, 1.08094212816354, 7);
  sqcRYGate(q, -3.140110574952731, 8);
  sqcRZGate(q, -0.9900528890870008, 8);
  sqcRYGate(q, 1.4824259831146316, 9);
  sqcRZGate(q, 3.0155719185425913, 9);
  sqcRYGate(q, 1.5736900856136744, 10);
  sqcRZGate(q, -1.5798718599716575, 10);
  sqcRYGate(q, -0.019431291960066006, 11);
  sqcRZGate(q, -1.5817729467000332, 11);
  sqcRYGate(q, 3.135867102178356, 12);
  sqcRZGate(q, -2.6311292825319725, 12);
  sqcRYGate(q, -0.00018186700702041544, 13);
  sqcRZGate(q, -0.35223938621791906, 13);
  sqcRYGate(q, -1.5487809433074187, 14);
  sqcRZGate(q, 1.5666491270715168, 14);
  sqcRYGate(q, 0.9774569933493842, 15);
  sqcRZGate(q, 0.9139401978427656, 15);
  sqcRYGate(q, 2.8319236018512797, 16);
  sqcRZGate(q, -1.2878079182069175, 16);
  sqcRYGate(q, 0.8693029648947741, 17);
  sqcRZGate(q, 0.5722571175639191, 17);
  sqcRYGate(q, -2.9818738339221986, 18);
  sqcRZGate(q, 1.062205214075906, 18);
  sqcRYGate(q, 3.058646674426894, 19);
  sqcRZGate(q, 0.6788237115928215, 19);
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
  sqcRYGate(q, 2.9883114738095555, 0);
  sqcRZGate(q, -0.14599405886744776, 0);
  sqcRYGate(q, -3.1139187515925126, 1);
  sqcRZGate(q, -0.9099544595115825, 1);
  sqcRYGate(q, 2.844446979291173, 2);
  sqcRZGate(q, -2.0776924186425303, 2);
  sqcRYGate(q, -0.7078308032924925, 3);
  sqcRZGate(q, -3.1415696385417258, 3);
  sqcRYGate(q, 1.5874506543955846, 4);
  sqcRZGate(q, -1.2597245793881733, 4);
  sqcRYGate(q, -0.009278126172886158, 5);
  sqcRZGate(q, -0.8327525028484528, 5);
  sqcRYGate(q, -1.5805837376890786, 6);
  sqcRZGate(q, 1.6719694181641913, 6);
  sqcRYGate(q, 2.3729801137556494, 7);
  sqcRZGate(q, -1.2768928872669432, 7);
  sqcRYGate(q, 1.3573550511404167, 8);
  sqcRZGate(q, -1.7726026342027164, 8);
  sqcRYGate(q, -1.6068925122833106, 9);
  sqcRZGate(q, -1.4084592178963902, 9);
  sqcRYGate(q, 1.6007228415202137, 10);
  sqcRZGate(q, 0.47297958779190996, 10);
  sqcRYGate(q, -1.5687912511222848, 11);
  sqcRZGate(q, 1.5343047368090068, 11);
  sqcRYGate(q, -1.125749797520415, 12);
  sqcRZGate(q, 3.0844555229879047, 12);
  sqcRYGate(q, 3.1320809129600367, 13);
  sqcRZGate(q, 2.4303641994762257, 13);
  sqcRYGate(q, -1.567871603624, 14);
  sqcRZGate(q, -2.2683819248536112, 14);
  sqcRYGate(q, -0.014062658257316231, 15);
  sqcRZGate(q, 2.900727129819308, 15);
  sqcRYGate(q, -3.100906220465996, 16);
  sqcRZGate(q, -0.555273023316998, 16);
  sqcRYGate(q, 0.055877479917394446, 17);
  sqcRZGate(q, -3.0629499521279433, 17);
  sqcRYGate(q, 0.007462670125929052, 18);
  sqcRZGate(q, -0.12446291060556992, 18);
  sqcRYGate(q, 2.1570491451624765, 19);
  sqcRZGate(q, -1.781380514198417, 19);
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
  sqcRYGate(q, -1.1554785292005774, 0);
  sqcRZGate(q, -3.0203594513066934, 0);
  sqcRYGate(q, 0.2967734924328154, 1);
  sqcRZGate(q, 0.4001452428303982, 1);
  sqcRYGate(q, -0.040935979596351924, 2);
  sqcRZGate(q, 0.2552649627284547, 2);
  sqcRYGate(q, -2.6913673981983437, 3);
  sqcRZGate(q, -0.9959140620521945, 3);
  sqcRYGate(q, 0.005958541317877319, 4);
  sqcRZGate(q, 0.4870786136614233, 4);
  sqcRYGate(q, 0.0008703660113136279, 5);
  sqcRZGate(q, 1.069201440988913, 5);
  sqcRYGate(q, -1.5804091923189576, 6);
  sqcRZGate(q, 1.1910166575429162, 6);
  sqcRYGate(q, -1.5585021022105743, 7);
  sqcRZGate(q, 1.5812787479556798, 7);
  sqcRYGate(q, 0.0013602155633787303, 8);
  sqcRZGate(q, 2.7295973385387993, 8);
  sqcRYGate(q, -0.01917931276260809, 9);
  sqcRZGate(q, 0.12408293106145883, 9);
  sqcRYGate(q, -0.17872630479340668, 10);
  sqcRZGate(q, 3.0991406835429585, 10);
  sqcRYGate(q, 1.8570669884639948, 11);
  sqcRZGate(q, -1.6197495873776016, 11);
  sqcRYGate(q, -1.4471302823630308, 12);
  sqcRZGate(q, -2.3090591351323595, 12);
  sqcRYGate(q, 0.010363035827164245, 13);
  sqcRZGate(q, 0.10176475568485992, 13);
  sqcRYGate(q, -0.1150001969024608, 14);
  sqcRZGate(q, -2.3745272673520663, 14);
  sqcRYGate(q, -1.5797750071257477, 15);
  sqcRZGate(q, 1.568759667998081, 15);
  sqcRYGate(q, 0.009919431425790215, 16);
  sqcRZGate(q, -1.2750587877222401, 16);
  sqcRYGate(q, 2.235866956664826, 17);
  sqcRZGate(q, 1.823661594032477, 17);
  sqcRYGate(q, 1.359300905531179, 18);
  sqcRZGate(q, -2.404628458553011, 18);
  sqcRYGate(q, -0.5824967213509175, 19);
  sqcRZGate(q, -1.2879177988347472, 19);
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
  sqcRYGate(q, 1.2398227120834935, 0);
  sqcRZGate(q, 0.5685519398585455, 0);
  sqcRYGate(q, -0.004477822650906127, 1);
  sqcRZGate(q, -3.1034579336374475, 1);
  sqcRYGate(q, -1.8371302611846814, 2);
  sqcRZGate(q, -1.390168804640742, 2);
  sqcRYGate(q, -0.008811744473247174, 3);
  sqcRZGate(q, 0.9820998396940864, 3);
  sqcRYGate(q, 0.1365100669636722, 4);
  sqcRZGate(q, -2.3257041764341992, 4);
  sqcRYGate(q, -1.478962609980166, 5);
  sqcRZGate(q, -0.0007193426830642836, 5);
  sqcRYGate(q, 1.5801296534960967, 6);
  sqcRZGate(q, -1.5659271533503656, 6);
  sqcRYGate(q, -1.5745272533607653, 7);
  sqcRZGate(q, 2.3956992080011297, 7);
  sqcRYGate(q, 0.0002469166779617282, 8);
  sqcRZGate(q, 2.5213949482172353, 8);
  sqcRYGate(q, -3.042230113265921, 9);
  sqcRZGate(q, 0.08366143940387613, 9);
  sqcRYGate(q, 3.0275434099815834, 10);
  sqcRZGate(q, 1.9987079004736108, 10);
  sqcRYGate(q, 0.004571367045361541, 11);
  sqcRZGate(q, 1.523844004662363, 11);
  sqcRYGate(q, -3.13844643726653, 12);
  sqcRZGate(q, -2.5321929570453507, 12);
  sqcRYGate(q, 1.0745875069519786, 13);
  sqcRZGate(q, -2.665248244242144, 13);
  sqcRYGate(q, 2.7846336880243387, 14);
  sqcRZGate(q, -0.7730681207887065, 14);
  sqcRYGate(q, 2.3258796737856837, 15);
  sqcRZGate(q, -1.179908597841246, 15);
  sqcRYGate(q, 0.21956824540554054, 16);
  sqcRZGate(q, 0.42650534436653637, 16);
  sqcRYGate(q, -1.861023575465413, 17);
  sqcRZGate(q, 0.2124382479886967, 17);
  sqcRYGate(q, 3.045632431437441, 18);
  sqcRZGate(q, 0.5985983949108289, 18);
  sqcRYGate(q, 0.14694313527714087, 19);
  sqcRZGate(q, -0.20624122613217694, 19);
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
  sqcRYGate(q, -0.32098006569170323, 0);
  sqcRZGate(q, -2.001171204287333, 0);
  sqcRYGate(q, 0.015217099953604318, 1);
  sqcRZGate(q, 1.1022349807543137, 1);
  sqcRYGate(q, -2.9429926840087632, 2);
  sqcRZGate(q, -1.058831775584136, 2);
  sqcRYGate(q, -2.613948927628401, 3);
  sqcRZGate(q, -2.322359442537896, 3);
  sqcRYGate(q, 1.5116428325396178, 4);
  sqcRZGate(q, -0.008356945970890097, 4);
  sqcRYGate(q, 2.2667397773982687, 5);
  sqcRZGate(q, 0.00022208930671732845, 5);
  sqcRYGate(q, -1.9928965397538754, 6);
  sqcRZGate(q, -3.136099658716282, 6);
  sqcRYGate(q, -1.5639982838522721, 7);
  sqcRZGate(q, 1.5837664231758586, 7);
  sqcRYGate(q, 1.5384824290976877, 8);
  sqcRZGate(q, 0.007317786685998584, 8);
  sqcRYGate(q, 3.1402506615073493, 9);
  sqcRZGate(q, 2.9350647628369044, 9);
  sqcRYGate(q, 1.44347659628929, 10);
  sqcRZGate(q, -2.8929291872696044, 10);
  sqcRYGate(q, -0.28895063356776973, 11);
  sqcRZGate(q, 1.6529949940936686, 11);
  sqcRYGate(q, -3.1413867931408026, 12);
  sqcRZGate(q, -0.18854935801694148, 12);
  sqcRYGate(q, -0.00921944441453526, 13);
  sqcRZGate(q, 1.0172214977435754, 13);
  sqcRYGate(q, 3.1379244887736957, 14);
  sqcRZGate(q, 2.109391869926879, 14);
  sqcRYGate(q, 0.013488325895601783, 15);
  sqcRZGate(q, -0.189544487474083, 15);
  sqcRYGate(q, -2.4055369944956633, 16);
  sqcRZGate(q, -3.1381094185257052, 16);
  sqcRYGate(q, 3.129186088285208, 17);
  sqcRZGate(q, -2.9334350808769014, 17);
  sqcRYGate(q, -1.4501766987388924, 18);
  sqcRZGate(q, -0.7321063229695133, 18);
  sqcRYGate(q, -2.3175946631802984, 19);
  sqcRZGate(q, 0.2238473682021923, 19);
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
  sqcRYGate(q, 1.6093024809131125, 0);
  sqcRZGate(q, -2.0545977794379606, 0);
  sqcRYGate(q, 1.9432660512493225, 1);
  sqcRZGate(q, 3.126182883701046, 1);
  sqcRYGate(q, -2.063324735084903, 2);
  sqcRZGate(q, 0.36216780660448966, 2);
  sqcRYGate(q, -3.14143997794378, 3);
  sqcRZGate(q, -2.3127392672720273, 3);
  sqcRYGate(q, 0.8011910145442567, 4);
  sqcRZGate(q, 0.049136367976626745, 4);
  sqcRYGate(q, 2.4506564063334886, 5);
  sqcRZGate(q, 3.1400444973766906, 5);
  sqcRYGate(q, -1.7680153800994114, 6);
  sqcRZGate(q, 0.00190404912078113, 6);
  sqcRYGate(q, -1.4497469560351828, 7);
  sqcRZGate(q, 3.140597280982812, 7);
  sqcRYGate(q, -2.0987201252264747, 8);
  sqcRZGate(q, -0.0030726790309421105, 8);
  sqcRYGate(q, 1.545150666144579, 9);
  sqcRZGate(q, -3.1414218965779646, 9);
  sqcRYGate(q, -1.6112174306101195, 10);
  sqcRZGate(q, -2.663353237087836, 10);
  sqcRYGate(q, 0.39991861805438766, 11);
  sqcRZGate(q, 0.5167893891526667, 11);
  sqcRYGate(q, 0.4866567441752929, 12);
  sqcRZGate(q, 0.1726529204833387, 12);
  sqcRYGate(q, 2.335458633940556, 13);
  sqcRZGate(q, 1.1512474265246482, 13);
  sqcRYGate(q, -1.6969920558494733, 14);
  sqcRZGate(q, -2.4855075812439646, 14);
  sqcRYGate(q, -3.139586989516007, 15);
  sqcRZGate(q, 1.7934087937105572, 15);
  sqcRYGate(q, 1.5360230941449033, 16);
  sqcRZGate(q, 2.5672623656326534, 16);
  sqcRYGate(q, -2.630990971790004, 17);
  sqcRZGate(q, 0.012494773029937178, 17);
  sqcRYGate(q, 0.03746101661389378, 18);
  sqcRZGate(q, 0.7604568450414089, 18);
  sqcRYGate(q, 1.9850224575342086, 19);
  sqcRZGate(q, -2.8601502452320045, 19);
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
  sqcRYGate(q, 2.0323664974923488, 0);
  sqcRZGate(q, 3.115656818714382, 0);
  sqcRYGate(q, 1.711373717796529, 1);
  sqcRZGate(q, 0.000513880921193453, 1);
  sqcRYGate(q, -3.0357452706008456, 2);
  sqcRZGate(q, 0.0905627681289624, 2);
  sqcRYGate(q, -1.8739331439228781, 3);
  sqcRZGate(q, -0.06932911273793517, 3);
  sqcRYGate(q, 0.030119975478593398, 4);
  sqcRZGate(q, 1.9251146027315835, 4);
  sqcRYGate(q, 2.3082092164591104, 5);
  sqcRZGate(q, 3.1412400676432446, 5);
  sqcRYGate(q, 1.370724831134613, 6);
  sqcRZGate(q, 0.00025173627410022024, 6);
  sqcRYGate(q, -1.3537760914387205, 7);
  sqcRZGate(q, -3.14087155780584, 7);
  sqcRYGate(q, -0.6307072454937503, 8);
  sqcRZGate(q, 0.004962778456641705, 8);
  sqcRYGate(q, -1.8944443662168875, 9);
  sqcRZGate(q, 0.04026146324195334, 9);
  sqcRYGate(q, 1.1313739898578956, 10);
  sqcRZGate(q, 2.310951006889451, 10);
  sqcRYGate(q, -3.1290798153298542, 11);
  sqcRZGate(q, -2.424643843170452, 11);
  sqcRYGate(q, 0.39970617633681904, 12);
  sqcRZGate(q, 2.9510550246566862, 12);
  sqcRYGate(q, -1.7760896449788641, 13);
  sqcRZGate(q, 3.1406711374863128, 13);
  sqcRYGate(q, 1.8897236886032438, 14);
  sqcRZGate(q, -0.0028870945924230895, 14);
  sqcRYGate(q, -0.8707131737210467, 15);
  sqcRZGate(q, 3.130225810373341, 15);
  sqcRYGate(q, 2.9891922651557374, 16);
  sqcRZGate(q, -0.6471532428870734, 16);
  sqcRYGate(q, -1.7207251947374242, 17);
  sqcRZGate(q, -0.005643383920638456, 17);
  sqcRYGate(q, 1.0537982747359944, 18);
  sqcRZGate(q, 0.2305184804613276, 18);
  sqcRYGate(q, -3.0956647416329504, 19);
  sqcRZGate(q, -2.61703891080358, 19);
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
  sqcRYGate(q, 3.1343944585525376, 0);
  sqcRZGate(q, -1.9858437330382746, 0);
  sqcRYGate(q, 0.7967146643782209, 1);
  sqcRZGate(q, -1.5662022981149573, 1);
  sqcRYGate(q, -1.7790565070687947, 2);
  sqcRZGate(q, 1.5917724905945088, 2);
  sqcRYGate(q, 0.0405085573742419, 3);
  sqcRZGate(q, 1.6376738685396302, 3);
  sqcRYGate(q, -0.003879433563678702, 4);
  sqcRZGate(q, -0.40088357665516566, 4);
  sqcRYGate(q, -1.7473625123542624, 5);
  sqcRZGate(q, -1.5705626318483747, 5);
  sqcRYGate(q, -1.470841725777873, 6);
  sqcRZGate(q, 1.5709148413759884, 6);
  sqcRYGate(q, -2.0205525078407702, 7);
  sqcRZGate(q, 1.571453722996007, 7);
  sqcRYGate(q, -2.3579105877424937, 8);
  sqcRZGate(q, 1.5478494961651643, 8);
  sqcRYGate(q, -0.0433774706352974, 9);
  sqcRZGate(q, 1.5278215330710954, 9);
  sqcRYGate(q, 3.130601163545868, 10);
  sqcRZGate(q, 0.06451530070941745, 10);
  sqcRYGate(q, -3.112706422078538, 11);
  sqcRZGate(q, 1.7781986228700717, 11);
  sqcRYGate(q, 0.6642397439877172, 12);
  sqcRZGate(q, 1.5605581650040197, 12);
  sqcRYGate(q, 1.6397372145157745, 13);
  sqcRZGate(q, 1.5689497626055822, 13);
  sqcRYGate(q, -1.3413742927669405, 14);
  sqcRZGate(q, -1.5737983676824552, 14);
  sqcRYGate(q, -2.782916944178307, 15);
  sqcRZGate(q, -1.5746756316545705, 15);
  sqcRYGate(q, 2.090918239105159, 16);
  sqcRZGate(q, 1.5577963183955983, 16);
  sqcRYGate(q, 2.222527780155409, 17);
  sqcRZGate(q, -1.5779939586591025, 17);
  sqcRYGate(q, -0.3902638674048502, 18);
  sqcRZGate(q, 1.4324996826302898, 18);
  sqcRYGate(q, 2.6603644396554316, 19);
  sqcRZGate(q, -1.4112475532429078, 19);
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
  sqcRYGate(q, -0.12296117479416324, 0);
  sqcRZGate(q, -1.506174256137034, 0);
  sqcRYGate(q, -1.5712997725821225, 1);
  sqcRZGate(q, -0.06081752000004552, 1);
  sqcRYGate(q, -1.5713754903476458, 2);
  sqcRZGate(q, -1.92612480357458, 2);
  sqcRYGate(q, -1.5709267162191791, 3);
  sqcRZGate(q, -1.0430733085810422, 3);
  sqcRYGate(q, 1.576169868005614, 4);
  sqcRZGate(q, 2.7498349360515872, 4);
  sqcRYGate(q, -1.5710617866896683, 5);
  sqcRZGate(q, 1.1006940445070894, 5);
  sqcRYGate(q, -1.5698047620928097, 6);
  sqcRZGate(q, -1.9419856875577446, 6);
  sqcRYGate(q, -1.5703127274145796, 7);
  sqcRZGate(q, -0.43657403279466855, 7);
  sqcRYGate(q, -1.579109109328643, 8);
  sqcRZGate(q, -1.6399776935471984, 8);
  sqcRYGate(q, -1.5706956871113789, 9);
  sqcRZGate(q, 0.6212703921334723, 9);
  sqcRYGate(q, 0.5983392378417777, 10);
  sqcRZGate(q, 1.9549124631142025, 10);
  sqcRYGate(q, 1.5667707902418668, 11);
  sqcRZGate(q, 2.8105535724293937, 11);
  sqcRYGate(q, 1.5779268316781727, 12);
  sqcRZGate(q, 1.335498745809449, 12);
  sqcRYGate(q, 1.5705166121402632, 13);
  sqcRZGate(q, -1.8552052706045858, 13);
  sqcRYGate(q, 1.5792104864966916, 14);
  sqcRZGate(q, 1.512466494370922, 14);
  sqcRYGate(q, 1.5687981481784874, 15);
  sqcRZGate(q, 1.4481652186620666, 15);
  sqcRYGate(q, 1.5937797064269024, 16);
  sqcRZGate(q, 2.5528489007320205, 16);
  sqcRYGate(q, 1.5735204684302235, 17);
  sqcRZGate(q, -3.1119866076750866, 17);
  sqcRYGate(q, -1.6566336225271145, 18);
  sqcRZGate(q, -3.084722216198638, 18);
  sqcRYGate(q, -1.5824249851455559, 19);
  sqcRZGate(q, 0.7644227327512412, 19);

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
