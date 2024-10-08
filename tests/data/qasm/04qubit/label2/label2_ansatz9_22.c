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

  sqcRYGate(q, -3.013470547431691, 0);
  sqcRYGate(q, 3.1246694683839267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9026278403782184, 0);
  sqcRYGate(q, 1.1378153100878565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.016990649887438, 2);
  sqcRYGate(q, -0.10015079711653657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.619552814069476, 2);
  sqcRYGate(q, -1.4640394729505386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.496146841535746, 0);
  sqcRYGate(q, -1.7105435684078918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.680003491896252, 0);
  sqcRYGate(q, 2.0757573731342314, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9512759359964886, 1);
  sqcRYGate(q, 1.6687870609007651, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9918228008279026, 1);
  sqcRYGate(q, 0.12084532394452882, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.977173480697525, 0);
  sqcRYGate(q, -0.14759509152176226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0345484079026495, 0);
  sqcRYGate(q, -1.156032095905322, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6656094564036791, 1);
  sqcRYGate(q, 1.6082818940078163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5959335220286969, 1);
  sqcRYGate(q, 1.2772912697900807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0179968806877118, 0);
  sqcRYGate(q, 1.5464226091607707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1273190952861212, 0);
  sqcRYGate(q, -0.6548262519491299, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3321928827351854, 2);
  sqcRYGate(q, 0.4866989722042299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8645975897836937, 2);
  sqcRYGate(q, -1.746766130744934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5010776198337651, 0);
  sqcRYGate(q, -3.0254021099476667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09502836942277518, 0);
  sqcRYGate(q, 0.5323913241182625, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.015689328249821, 1);
  sqcRYGate(q, -0.9063378849624963, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5966452768191786, 1);
  sqcRYGate(q, 2.169342368059716, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6829475188934166, 0);
  sqcRYGate(q, 2.3420725665244726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.471662622612907, 0);
  sqcRYGate(q, -2.41711332849942, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5374209749512935, 1);
  sqcRYGate(q, 2.538203810698956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4480784714459976, 1);
  sqcRYGate(q, -2.295395350407921, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8655264434970764, 0);
  sqcRYGate(q, -1.425672532207515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4987252324668563, 0);
  sqcRYGate(q, 0.37767763652569997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3414575116787857, 2);
  sqcRYGate(q, 0.15566070404099808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3866130661608214, 2);
  sqcRYGate(q, -1.717506058052182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.837980279284594, 0);
  sqcRYGate(q, 1.5946847945819083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9070579373737337, 0);
  sqcRYGate(q, -2.463322585777286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4655491666092955, 1);
  sqcRYGate(q, 2.424193897859936, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9907964399429465, 1);
  sqcRYGate(q, -1.7103146182586473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7450750445145484, 0);
  sqcRYGate(q, 1.5757769597594509, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.963587130163261, 0);
  sqcRYGate(q, 1.8928474418617816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9806802701581115, 1);
  sqcRYGate(q, 0.7594296087726747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9562344529352123, 1);
  sqcRYGate(q, -1.520647800764812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9375708885394003, 0);
  sqcRYGate(q, -0.2746245487190878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.137774592310213, 0);
  sqcRYGate(q, 0.29699860378061604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.50544970431592, 2);
  sqcRYGate(q, -1.4696960642303445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09988604824267662, 2);
  sqcRYGate(q, -0.5602644466041027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3691698036774085, 0);
  sqcRYGate(q, -3.079203608451602, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3574705217018614, 0);
  sqcRYGate(q, -1.5605347168643535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10943077654426699, 1);
  sqcRYGate(q, 1.2715038724334442, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.452020152312169, 1);
  sqcRYGate(q, -1.2962457403416607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9214922979222209, 0);
  sqcRYGate(q, 0.13850284379730304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.021447835133439, 0);
  sqcRYGate(q, 1.5936332038502021, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5733952565778981, 1);
  sqcRYGate(q, -2.626303417177152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7375120736148424, 1);
  sqcRYGate(q, 1.628819073661795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2725952851865108, 0);
  sqcRYGate(q, 0.2619467925085397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.673401963012063, 0);
  sqcRYGate(q, 1.6160301598868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4345937396589523, 2);
  sqcRYGate(q, -2.071788923992557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7768311578188039, 2);
  sqcRYGate(q, -2.2074741581712933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8595052862173598, 0);
  sqcRYGate(q, 0.02759655276956237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9313545680381479, 0);
  sqcRYGate(q, -2.3560478378011402, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.933775802136431, 1);
  sqcRYGate(q, 0.27109643360731983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6801965636454093, 1);
  sqcRYGate(q, 0.785925672962585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9660453449862443, 0);
  sqcRYGate(q, -1.5895895566062777, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6296429270232629, 0);
  sqcRYGate(q, -0.2521969122444566, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3432296958371248, 1);
  sqcRYGate(q, -0.2158783955922247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.036259810093365, 1);
  sqcRYGate(q, 2.1188468722836795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15034561346915876, 0);
  sqcRYGate(q, -2.7045572474674118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8970492513676724, 0);
  sqcRYGate(q, -1.6605117318201756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9022301338883827, 2);
  sqcRYGate(q, 0.9802181174006644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28404598834954375, 2);
  sqcRYGate(q, 2.6567279306091263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1054846172582287, 0);
  sqcRYGate(q, 1.7254795938178964, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.652188118032487, 0);
  sqcRYGate(q, 2.41543949919201, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.015763138231242, 1);
  sqcRYGate(q, -1.9392121523157335, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.819034884483771, 1);
  sqcRYGate(q, -1.5708775371526693, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.015025869614947, 0);
  sqcRYGate(q, 1.3235216860830104, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.015711649527846, 0);
  sqcRYGate(q, 0.14090860635498012, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1542932211591248, 1);
  sqcRYGate(q, 1.1373454422425413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.30990697573999, 1);
  sqcRYGate(q, 1.1408790041495074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9826856100872612, 0);
  sqcRYGate(q, -0.5209033165197977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8039818270662247, 0);
  sqcRYGate(q, -1.0391878685470544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.346159472511325, 2);
  sqcRYGate(q, -2.471516852584067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37765213893713945, 2);
  sqcRYGate(q, -2.7065601475372114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2188137299647055, 0);
  sqcRYGate(q, -1.4942634191523378, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.83568132178389, 0);
  sqcRYGate(q, -0.8200944567596594, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8694586786064153, 1);
  sqcRYGate(q, -2.099014391177536, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.477297059841137, 1);
  sqcRYGate(q, -0.2959646363129558, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7585449151682613, 0);
  sqcRYGate(q, 1.4105829138877992, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7888107520023913, 0);
  sqcRYGate(q, -1.4243478801158806, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4501642009341262, 1);
  sqcRYGate(q, -2.4396942789463947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.630277790043107, 1);
  sqcRYGate(q, 2.5805529802538025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7825551133576267, 0);
  sqcRYGate(q, -0.6530933522940832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4341035325759073, 0);
  sqcRYGate(q, -1.0814728558873485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0136235293142732, 2);
  sqcRYGate(q, 1.4929376923198223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.954051473252905, 2);
  sqcRYGate(q, 1.911127977659735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3439340314788621, 0);
  sqcRYGate(q, -0.9412771043663992, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5894589100866647, 0);
  sqcRYGate(q, 1.0440852893908055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6530014765184693, 1);
  sqcRYGate(q, -0.8635913898130232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.304496401348464, 1);
  sqcRYGate(q, -0.07033840924628222, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6572159318544042, 0);
  sqcRYGate(q, -0.45228475946003655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.137541362876204, 0);
  sqcRYGate(q, -2.0785060247196876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5194643117308897, 1);
  sqcRYGate(q, 1.7565241539779954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4380528820469554, 1);
  sqcRYGate(q, -1.244193629686107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.180758768276992, 0);
  sqcRYGate(q, -0.41717248913674876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0616919971939356, 0);
  sqcRYGate(q, -0.4331078687355623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4488260477502478, 2);
  sqcRYGate(q, -3.022035495950474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8315826672706077, 2);
  sqcRYGate(q, -1.8473715923652243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8615322769464111, 0);
  sqcRYGate(q, 0.21958528526065188, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.244657123259242, 0);
  sqcRYGate(q, -1.2434583784167579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0703661170272225, 1);
  sqcRYGate(q, -2.7656314543664564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.713927103921385, 1);
  sqcRYGate(q, -1.8548984694222066, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8961232943537356, 0);
  sqcRYGate(q, -0.5874666544449418, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.002585236093167, 0);
  sqcRYGate(q, -2.59250092752862, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9385971450275195, 1);
  sqcRYGate(q, -1.1413943469325096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.576954556991355, 1);
  sqcRYGate(q, 0.8201193143568962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9990062801258018, 0);
  sqcRYGate(q, -2.5508543627940865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.397328547211355, 0);
  sqcRYGate(q, -2.6947621822898276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8280057214524756, 2);
  sqcRYGate(q, -0.8810707333206957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.838782005433421, 2);
  sqcRYGate(q, -0.4478137229697738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8506132216577234, 0);
  sqcRYGate(q, -2.844604956754265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1449080727927834, 0);
  sqcRYGate(q, 2.1247019155123597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7290867299100157, 1);
  sqcRYGate(q, -0.2809632355918025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.088154978918495, 1);
  sqcRYGate(q, -0.36806761156990403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4682117521502618, 0);
  sqcRYGate(q, -2.1292807784505623, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9666622435884102, 0);
  sqcRYGate(q, 0.39357626451237504, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.017828107764472863, 1);
  sqcRYGate(q, 1.5708535738958558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.29430679467091103, 1);
  sqcRYGate(q, 1.76489894515751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6521059485177505, 0);
  sqcRYGate(q, -1.6780280824111384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9175087053102898, 0);
  sqcRYGate(q, 2.910794229789977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.130068676524351, 2);
  sqcRYGate(q, 0.7041094556251678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5969536016676793, 2);
  sqcRYGate(q, 0.5186650065388019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.424913897057092, 0);
  sqcRYGate(q, -2.539980671259686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.04596104260632484, 0);
  sqcRYGate(q, 0.7893146245993634, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.025630793549258, 1);
  sqcRYGate(q, 1.6630370525790639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5208644207568005, 1);
  sqcRYGate(q, -1.6457635519570486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.014705400917128, 0);
  sqcRYGate(q, 0.8782732037570558, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6406615061930884, 0);
  sqcRYGate(q, 2.790335901707652, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7636240394234965, 1);
  sqcRYGate(q, -2.094227168352591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0271677588153194, 1);
  sqcRYGate(q, 1.9995928358028134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.966184658305486, 0);
  sqcRYGate(q, -0.1362330629850863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1392558079828827, 0);
  sqcRYGate(q, -3.0158488262534995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.395554642756137, 2);
  sqcRYGate(q, -1.001057878740058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6459376418937373, 2);
  sqcRYGate(q, 0.02372696570422071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.024374180441041, 0);
  sqcRYGate(q, -1.4765165811853693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.155186640797739, 0);
  sqcRYGate(q, -1.3593701387175035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.130256816794967, 1);
  sqcRYGate(q, -2.6329094897762477, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.320151010933297, 1);
  sqcRYGate(q, -0.9270105729618973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3989049620939134, 0);
  sqcRYGate(q, 1.727255439063872, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8504051656838704, 0);
  sqcRYGate(q, -0.9471950253559234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1206417346784943, 1);
  sqcRYGate(q, 2.259837314703095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.516539446619577, 1);
  sqcRYGate(q, -0.4727189216690035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6645194829203986, 0);
  sqcRYGate(q, -0.847494523642315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5981529242016266, 0);
  sqcRYGate(q, 0.34487821010217634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7078518581963076, 2);
  sqcRYGate(q, 2.1742089916545666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.38130838025516, 2);
  sqcRYGate(q, 2.611605453518566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.387234342963466, 0);
  sqcRYGate(q, 2.1374549682321575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6929610329946156, 0);
  sqcRYGate(q, -1.3637508591898462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1213335920389813, 1);
  sqcRYGate(q, 3.020787327789423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6208213362306791, 1);
  sqcRYGate(q, -1.1266022478909197, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1080604689752493, 0);
  sqcRYGate(q, 1.8790052605374197, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5600731450508558, 0);
  sqcRYGate(q, -2.7616289065197583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9693133407267034, 1);
  sqcRYGate(q, -1.3248037489286482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2069666913339336, 1);
  sqcRYGate(q, -0.6837472646853371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0171280108649983, 0);
  sqcRYGate(q, 0.5748788006219439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.542421256865089, 0);
  sqcRYGate(q, 0.4898549552140224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.847245515166445, 2);
  sqcRYGate(q, 1.6995382514768949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0454390029283642, 2);
  sqcRYGate(q, 0.7832552874567043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5310802767076845, 0);
  sqcRYGate(q, 0.5589415546071299, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3260849287626173, 0);
  sqcRYGate(q, 2.4966689198194434, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.22564657415616, 1);
  sqcRYGate(q, -2.350644239040859, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.33810109522970766, 1);
  sqcRYGate(q, -3.00714877394652, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.237488084450499, 0);
  sqcRYGate(q, 2.973005139531827, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9862664512982601, 0);
  sqcRYGate(q, -0.8456328513833032, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6629785913408472, 1);
  sqcRYGate(q, -2.2974582479249057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5523753483426654, 1);
  sqcRYGate(q, -0.6443992440876174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0766862401158521, 0);
  sqcRYGate(q, 0.19497903112256437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5566176927379742, 0);
  sqcRYGate(q, 0.2715112970219371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.490314377626192, 2);
  sqcRYGate(q, 2.913071772276602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4460541169746266, 2);
  sqcRYGate(q, -0.2928917362571562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7263072299357103, 0);
  sqcRYGate(q, 1.8648093489043382, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.966107219459972, 0);
  sqcRYGate(q, 1.3996135188993328, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0907319240600666, 1);
  sqcRYGate(q, 1.8804512944005367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0543142099565928, 1);
  sqcRYGate(q, -2.5804841419977422, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6517517059814573, 0);
  sqcRYGate(q, -2.2360989489257546, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5088985174470926, 0);
  sqcRYGate(q, -0.14598717267578998, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9969337956100899, 1);
  sqcRYGate(q, 2.143319784451349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.916707628260409, 1);
  sqcRYGate(q, -1.2353304114177224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5034519547668155, 0);
  sqcRYGate(q, 2.433887819710975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7257889783315044, 0);
  sqcRYGate(q, 0.8553980740101963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.803894403057611, 2);
  sqcRYGate(q, -0.4917692866162446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.455024154250684, 2);
  sqcRYGate(q, -1.843552901188153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36532645707500694, 0);
  sqcRYGate(q, -0.0061068999187171786, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6011573970952071, 0);
  sqcRYGate(q, -0.04685483237313741, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.368120535827043, 1);
  sqcRYGate(q, -2.2586877172669317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3986682834674218, 1);
  sqcRYGate(q, 2.1221351376313473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0920348707276313, 0);
  sqcRYGate(q, 0.1455000516365903, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0401423089499287, 0);
  sqcRYGate(q, 2.83189785668756, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2242011219690205, 1);
  sqcRYGate(q, 2.969301703456027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6470252583949305, 1);
  sqcRYGate(q, 1.8416329699378657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1998077161106933, 0);
  sqcRYGate(q, -2.614126999540427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8968302592024591, 0);
  sqcRYGate(q, -1.4634278032456702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0174771153818236, 2);
  sqcRYGate(q, 0.630335007123743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.832960038604991, 2);
  sqcRYGate(q, -1.438808971039621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6253091365929495, 0);
  sqcRYGate(q, -2.0355644037710428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3550819795165312, 0);
  sqcRYGate(q, -0.30190021484723756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0012916805185545, 1);
  sqcRYGate(q, 0.9777798464299441, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6341259767272369, 1);
  sqcRYGate(q, 1.067622998212492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.72796768035839, 0);
  sqcRYGate(q, -0.29963421168687915, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.028950266275638015, 0);
  sqcRYGate(q, -0.7749746981888856, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0262715226668635, 1);
  sqcRYGate(q, 0.39259849158403975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.29715524887271444, 1);
  sqcRYGate(q, -2.619795780426704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5477012698674186, 0);
  sqcRYGate(q, -1.4281120687154205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.651146564228531, 0);
  sqcRYGate(q, 3.0605015525699475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5706882087097809, 2);
  sqcRYGate(q, 1.2322668756767199, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1551315199603964, 2);
  sqcRYGate(q, 2.827241417841082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3405460781899663, 0);
  sqcRYGate(q, -1.0004634699423172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7870392575043033, 0);
  sqcRYGate(q, 1.1202456794049154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3865777982921754, 1);
  sqcRYGate(q, 0.025448952290395788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3417228463220248, 1);
  sqcRYGate(q, -1.2936047865358324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4375553217404256, 0);
  sqcRYGate(q, 3.0103724109521175, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0845395746479896, 0);
  sqcRYGate(q, -3.0562929449983782, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.241897468218436, 1);
  sqcRYGate(q, 3.03772189656153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.911133243052826, 1);
  sqcRYGate(q, -0.4648627539714143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7030931398600813, 0);
  sqcRYGate(q, -1.9598390075528638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.405995519353427, 0);
  sqcRYGate(q, 3.027578586580832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9903844796962513, 2);
  sqcRYGate(q, -1.076571372260072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4553310624509788, 2);
  sqcRYGate(q, -2.9120132780714427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9573315676828277, 0);
  sqcRYGate(q, 2.815377373000896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4817403761277985, 0);
  sqcRYGate(q, -2.492378513355527, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3922900880106956, 1);
  sqcRYGate(q, -0.09271906300013125, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0015116801248354, 1);
  sqcRYGate(q, -1.4418728860855268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0541226069303509, 0);
  sqcRYGate(q, -1.558352559028121, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6115571391575374, 0);
  sqcRYGate(q, 0.2459294892625101, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3632975607074993, 1);
  sqcRYGate(q, -2.551308767292274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6423268677596886, 1);
  sqcRYGate(q, 0.018818962158320695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5971951589486444, 0);
  sqcRYGate(q, -3.041581253689608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9701583710514092, 0);
  sqcRYGate(q, 2.3957642664722067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7103839311605937, 2);
  sqcRYGate(q, 2.420075133083813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.35084976981144145, 2);
  sqcRYGate(q, 1.8719661846329734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7532705287983763, 0);
  sqcRYGate(q, 1.7259825047477777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4725313707145924, 0);
  sqcRYGate(q, 0.1765656877687949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5313229191865885, 1);
  sqcRYGate(q, 0.6811216706830123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.09116092193966, 1);
  sqcRYGate(q, 1.7800269601862801, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.639261879699634, 0);
  sqcRYGate(q, 2.750890286560948, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.894632491187721, 0);
  sqcRYGate(q, 2.0241949642489203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0155677891743817, 1);
  sqcRYGate(q, 0.5670124027960712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.822687020442193, 1);
  sqcRYGate(q, 0.3725852125222602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2831006494047994, 0);
  sqcRYGate(q, 3.1281346781880774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7899188564293946, 0);
  sqcRYGate(q, 0.7174476598130253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.067733607302468, 2);
  sqcRYGate(q, 1.720895318672719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.492564117396491, 2);
  sqcRYGate(q, 0.11470143415952448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10580805778031653, 0);
  sqcRYGate(q, -0.4490151327405529, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6811031851858738, 0);
  sqcRYGate(q, -0.9321964128794689, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.29059731287055796, 1);
  sqcRYGate(q, -1.3037022163431204, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3467024167954749, 1);
  sqcRYGate(q, -2.483087211355951, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3926857498745894, 0);
  sqcRYGate(q, -2.853550925859077, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9502950065729159, 0);
  sqcRYGate(q, -1.1068569202310998, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1968392200784592, 1);
  sqcRYGate(q, 2.6516987948517774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.586115019816284, 1);
  sqcRYGate(q, 0.2270920937115924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.082718762609855, 0);
  sqcRYGate(q, -1.887020371556728, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24671370961044498, 0);
  sqcRYGate(q, 1.5830886479521613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9980739925995357, 2);
  sqcRYGate(q, 2.8789008485238408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9414241515527895, 2);
  sqcRYGate(q, -0.32185348916180967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1738366948078918, 0);
  sqcRYGate(q, -0.824600209546051, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4671252458634889, 0);
  sqcRYGate(q, -1.2532639703529485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1050029937348924, 1);
  sqcRYGate(q, -2.299364600987416, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0272297808753903, 1);
  sqcRYGate(q, -0.5878792500270626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.20536070891694, 0);
  sqcRYGate(q, -2.8886162084375906, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.651561571943984, 0);
  sqcRYGate(q, -0.40147676060379917, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6006271623576, 1);
  sqcRYGate(q, -1.7958262265603229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.229681191971495, 1);
  sqcRYGate(q, -2.299489128899996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4787637213562634, 0);
  sqcRYGate(q, 0.1543930091673298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.301051868825446, 0);
  sqcRYGate(q, 0.15656468574734017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.317686476980764, 2);
  sqcRYGate(q, 1.0719246792651642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6719123069833728, 2);
  sqcRYGate(q, -0.6364367637653539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1450717147397418, 0);
  sqcRYGate(q, 3.037611797371925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0848314731936826, 0);
  sqcRYGate(q, 1.3490026260741121, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.13944675659713113, 1);
  sqcRYGate(q, -0.3039975431469206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.19941163719403449, 1);
  sqcRYGate(q, 2.3668146494259528, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.176804348701931, 0);
  sqcRYGate(q, -2.7765750043783055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.436734950167569, 0);
  sqcRYGate(q, -0.00741631767035561, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.171497530837917, 1);
  sqcRYGate(q, 2.1891683596122697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35943422663851354, 1);
  sqcRYGate(q, 0.3700750993011105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5602895777314694, 0);
  sqcRYGate(q, -1.080865034128622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7065114661957326, 0);
  sqcRYGate(q, -2.2288090344691702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1404579913034523, 2);
  sqcRYGate(q, 0.8934488529427478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0776888956379764, 2);
  sqcRYGate(q, -1.4386649346017726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0495760650293517, 0);
  sqcRYGate(q, -0.46414379775368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5580124633753918, 0);
  sqcRYGate(q, 1.3176350934146874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2745707588395931, 1);
  sqcRYGate(q, 1.7301573152559568, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5060465391033259, 1);
  sqcRYGate(q, -2.0794633696791127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.583557872861264, 0);
  sqcRYGate(q, 0.1600696381589186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.28535615305135753, 0);
  sqcRYGate(q, 2.785194343403973, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9618960174918445, 1);
  sqcRYGate(q, -1.9117265738043134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1446095579805035, 1);
  sqcRYGate(q, 2.0700858530489494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11330864142050948, 0);
  sqcRYGate(q, 2.255520367114475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0348223361690945, 0);
  sqcRYGate(q, -1.125023061959618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6133066312227933, 2);
  sqcRYGate(q, -1.7501462132073682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6680662243922013, 2);
  sqcRYGate(q, 3.101231111188101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6058714665988, 0);
  sqcRYGate(q, 1.802989652188142, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3182283633987186, 0);
  sqcRYGate(q, 0.4711640173331951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8068698673396972, 1);
  sqcRYGate(q, 0.1955612018160311, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2260040344447098, 1);
  sqcRYGate(q, -0.2809976773876822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5849376181393358, 0);
  sqcRYGate(q, -0.33081248777546435, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4152593339274446, 0);
  sqcRYGate(q, -1.6450254801307773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8087725302866318, 1);
  sqcRYGate(q, 1.3631492230604547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04599398129416965, 1);
  sqcRYGate(q, -0.082227660724458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.752078698664292, 0);
  sqcRYGate(q, -2.6323676384606527, 1);
  sqcRYGate(q, -0.44913356385605585, 2);
  sqcRYGate(q, -1.7904877637947427, 3);

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
