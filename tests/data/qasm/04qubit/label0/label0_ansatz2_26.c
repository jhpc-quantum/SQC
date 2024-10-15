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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.4448158354646132, 0);
  sqcRZGate(q, 2.0475546154493847, 0);
  sqcRYGate(q, 1.4109302828396642, 1);
  sqcRZGate(q, 0.37368788740548015, 1);
  sqcRYGate(q, -2.268524599792724, 2);
  sqcRZGate(q, -2.9462148924463443, 2);
  sqcRYGate(q, 1.7309787826192462, 3);
  sqcRZGate(q, -2.4335427801494998, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.838512094144886, 0);
  sqcRZGate(q, -0.989843344900088, 0);
  sqcRYGate(q, -0.8945607462481827, 1);
  sqcRZGate(q, 0.6622215929438435, 1);
  sqcRYGate(q, 0.9935557438936422, 2);
  sqcRZGate(q, 0.6012831684780815, 2);
  sqcRYGate(q, 1.7676896616847717, 3);
  sqcRZGate(q, 2.7758029328874665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5778155524811144, 0);
  sqcRZGate(q, -1.403377209405629, 0);
  sqcRYGate(q, -2.4462739554656836, 1);
  sqcRZGate(q, -1.5045705658387885, 1);
  sqcRYGate(q, -2.468720037454098, 2);
  sqcRZGate(q, 0.7544413201491799, 2);
  sqcRYGate(q, 0.19612233004707372, 3);
  sqcRZGate(q, 2.306712452074781, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6523099643790036, 0);
  sqcRZGate(q, 0.8764322260244102, 0);
  sqcRYGate(q, -2.2329695727130483, 1);
  sqcRZGate(q, -1.6889222045729602, 1);
  sqcRYGate(q, -0.37979378464667324, 2);
  sqcRZGate(q, -1.7278280056386564, 2);
  sqcRYGate(q, -0.31129271171577305, 3);
  sqcRZGate(q, -1.3069460328987865, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9196507053121056, 0);
  sqcRZGate(q, 0.40075149829108536, 0);
  sqcRYGate(q, 0.28249600123583585, 1);
  sqcRZGate(q, 2.127638084376203, 1);
  sqcRYGate(q, -0.24650959300083033, 2);
  sqcRZGate(q, -1.6660985732326952, 2);
  sqcRYGate(q, 1.1959158932061253, 3);
  sqcRZGate(q, 0.8971979892386034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0298516416449197, 0);
  sqcRZGate(q, -2.991123929122202, 0);
  sqcRYGate(q, 1.8589138137034116, 1);
  sqcRZGate(q, -0.8793884946018335, 1);
  sqcRYGate(q, 2.5106992421766625, 2);
  sqcRZGate(q, 0.3783999754096994, 2);
  sqcRYGate(q, -2.4346785507383455, 3);
  sqcRZGate(q, 0.05541267924548432, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.900003522986901, 0);
  sqcRZGate(q, -2.824261091137709, 0);
  sqcRYGate(q, 0.9831212981810227, 1);
  sqcRZGate(q, -0.48435338782903564, 1);
  sqcRYGate(q, -2.7670167403812798, 2);
  sqcRZGate(q, 2.466654052214878, 2);
  sqcRYGate(q, -1.9078304583072851, 3);
  sqcRZGate(q, 2.22093452196673, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.043132929080313, 0);
  sqcRZGate(q, -2.1991003833725458, 0);
  sqcRYGate(q, 2.921173007928446, 1);
  sqcRZGate(q, 1.691517509557496, 1);
  sqcRYGate(q, -1.1020862238228568, 2);
  sqcRZGate(q, -1.4844755091572424, 2);
  sqcRYGate(q, -3.0390655583379353, 3);
  sqcRZGate(q, -0.9783953637794108, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.5053110012215978, 0);
  sqcRZGate(q, 1.7174859086297938, 0);
  sqcRYGate(q, -2.865538614095215, 1);
  sqcRZGate(q, -1.877866884365478, 1);
  sqcRYGate(q, -0.14363109584686562, 2);
  sqcRZGate(q, -1.5535969674443861, 2);
  sqcRYGate(q, 2.1424501487791785, 3);
  sqcRZGate(q, -0.28982682260965575, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.12327735551355623, 0);
  sqcRZGate(q, -2.8685352016719152, 0);
  sqcRYGate(q, 1.2762651146001645, 1);
  sqcRZGate(q, 0.14816351083824691, 1);
  sqcRYGate(q, -2.0495119154265944, 2);
  sqcRZGate(q, 2.830545538173314, 2);
  sqcRYGate(q, 0.8584984501401874, 3);
  sqcRZGate(q, 0.38055310140105286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0186572568946508, 0);
  sqcRZGate(q, 1.875982039672091, 0);
  sqcRYGate(q, 2.522373256619384, 1);
  sqcRZGate(q, -2.9635404389486415, 1);
  sqcRYGate(q, -2.947691563059873, 2);
  sqcRZGate(q, 1.967892236659, 2);
  sqcRYGate(q, -0.6512725903639445, 3);
  sqcRZGate(q, 1.2818796756882918, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.04471222874798148, 0);
  sqcRZGate(q, -0.13791217457545987, 0);
  sqcRYGate(q, -0.7466830941569063, 1);
  sqcRZGate(q, 0.817460240233251, 1);
  sqcRYGate(q, -2.2447288731131865, 2);
  sqcRZGate(q, 0.6764985578337969, 2);
  sqcRYGate(q, -0.4749971871215619, 3);
  sqcRZGate(q, -1.3505547415526993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7501674462977169, 0);
  sqcRZGate(q, -2.8739498395983114, 0);
  sqcRYGate(q, 2.475249686765776, 1);
  sqcRZGate(q, 0.5112503357774028, 1);
  sqcRYGate(q, 3.115600850790646, 2);
  sqcRZGate(q, -1.0767797721953458, 2);
  sqcRYGate(q, -0.0020545535269249626, 3);
  sqcRZGate(q, -2.817412468252543, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2143992359296711, 0);
  sqcRZGate(q, -2.3490178156089896, 0);
  sqcRYGate(q, 0.6846354383715515, 1);
  sqcRZGate(q, 1.1271801210511037, 1);
  sqcRYGate(q, 2.288814935743456, 2);
  sqcRZGate(q, 1.7038789863242085, 2);
  sqcRYGate(q, 1.6443587118222789, 3);
  sqcRZGate(q, 1.4813803161706236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.3658770144870291, 0);
  sqcRZGate(q, 0.11727518301382833, 0);
  sqcRYGate(q, 0.6823304768336405, 1);
  sqcRZGate(q, 2.280253719857297, 1);
  sqcRYGate(q, 0.1392855633948145, 2);
  sqcRZGate(q, 0.8163675486980496, 2);
  sqcRYGate(q, 2.598222394691322, 3);
  sqcRZGate(q, 0.20364963175074816, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3918391689782315, 0);
  sqcRZGate(q, -2.3470061869998546, 0);
  sqcRYGate(q, 0.41226568772567257, 1);
  sqcRZGate(q, 1.856693184500286, 1);
  sqcRYGate(q, 2.810397805129114, 2);
  sqcRZGate(q, 1.0917135292077418, 2);
  sqcRYGate(q, 2.477566536626902, 3);
  sqcRZGate(q, 0.6019592362112132, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9833885881560698, 0);
  sqcRZGate(q, 2.538295537530544, 0);
  sqcRYGate(q, 0.5773529036775317, 1);
  sqcRZGate(q, -2.5094007229539446, 1);
  sqcRYGate(q, 0.6991942118203407, 2);
  sqcRZGate(q, 2.179152629787855, 2);
  sqcRYGate(q, -0.6806998159708608, 3);
  sqcRZGate(q, -0.05212384996094421, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6497796296632794, 0);
  sqcRZGate(q, -1.0778832493956179, 0);
  sqcRYGate(q, -1.3471797663214993, 1);
  sqcRZGate(q, 2.0028593031558697, 1);
  sqcRYGate(q, 0.12203827731360305, 2);
  sqcRZGate(q, 2.496641686563324, 2);
  sqcRYGate(q, -0.7062741130140688, 3);
  sqcRZGate(q, -3.0061191005833146, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0983084761419986, 0);
  sqcRZGate(q, 1.6122564147121994, 0);
  sqcRYGate(q, -0.8530845065904116, 1);
  sqcRZGate(q, 0.29433262656309195, 1);
  sqcRYGate(q, 1.0427274650668414, 2);
  sqcRZGate(q, 2.1841387857909114, 2);
  sqcRYGate(q, 2.9466745665000205, 3);
  sqcRZGate(q, 1.3876156809838782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2677904832039664, 0);
  sqcRZGate(q, 1.6312317773027196, 0);
  sqcRYGate(q, -1.82706632440055, 1);
  sqcRZGate(q, -0.09320328284472978, 1);
  sqcRYGate(q, -3.0629124490848327, 2);
  sqcRZGate(q, -2.578232758167651, 2);
  sqcRYGate(q, -0.5435983955309148, 3);
  sqcRZGate(q, 0.6120772803261483, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7028872607230918, 0);
  sqcRZGate(q, -0.24708026785885814, 0);
  sqcRYGate(q, -0.3413025624743647, 1);
  sqcRZGate(q, -2.1820063258721474, 1);
  sqcRYGate(q, -0.5542620526450026, 2);
  sqcRZGate(q, -2.5079008158149017, 2);
  sqcRYGate(q, 0.1772417097688131, 3);
  sqcRZGate(q, 0.3542534533538992, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2655521937829861, 0);
  sqcRZGate(q, 0.5536527986758418, 0);
  sqcRYGate(q, -2.3865330382181758, 1);
  sqcRZGate(q, -0.27828218697912993, 1);
  sqcRYGate(q, -2.0763733493627727, 2);
  sqcRZGate(q, 1.941655433041273, 2);
  sqcRYGate(q, 2.048328958433263, 3);
  sqcRZGate(q, 0.013742281074239138, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1309122818145747, 0);
  sqcRZGate(q, 0.5781041895745113, 0);
  sqcRYGate(q, 2.29285492527369, 1);
  sqcRZGate(q, 0.02479763711952288, 1);
  sqcRYGate(q, -1.6326206447609248, 2);
  sqcRZGate(q, -0.6579257034957777, 2);
  sqcRYGate(q, 0.34265708249916926, 3);
  sqcRZGate(q, -0.5899757259594649, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5034393417419345, 0);
  sqcRZGate(q, 1.249334817206447, 0);
  sqcRYGate(q, 1.4491777270563098, 1);
  sqcRZGate(q, 1.278645132524887, 1);
  sqcRYGate(q, -2.4283559244790354, 2);
  sqcRZGate(q, -2.756901118572522, 2);
  sqcRYGate(q, -2.266178373298969, 3);
  sqcRZGate(q, 2.234528013313869, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.76172686125652, 0);
  sqcRZGate(q, 2.0715927725987635, 0);
  sqcRYGate(q, -2.288260107486295, 1);
  sqcRZGate(q, -2.0823437759869146, 1);
  sqcRYGate(q, 0.07165510455242519, 2);
  sqcRZGate(q, -1.9412562209402244, 2);
  sqcRYGate(q, -1.4423134808333429, 3);
  sqcRZGate(q, -0.8742432290109922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6027610987042635, 0);
  sqcRZGate(q, -2.7993457033997395, 0);
  sqcRYGate(q, -1.6313280902488572, 1);
  sqcRZGate(q, -2.795866629258888, 1);
  sqcRYGate(q, 2.658340917462492, 2);
  sqcRZGate(q, 0.6132530691156545, 2);
  sqcRYGate(q, -0.7646857439720064, 3);
  sqcRZGate(q, 1.7224006764571813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.943679085329155, 0);
  sqcRZGate(q, 1.3245453422533586, 0);
  sqcRYGate(q, -0.42690274752099877, 1);
  sqcRZGate(q, 0.04673338269620286, 1);
  sqcRYGate(q, -1.7765380749311293, 2);
  sqcRZGate(q, 1.3739277835387442, 2);
  sqcRYGate(q, 1.9330968243710636, 3);
  sqcRZGate(q, -0.042825973723453294, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9396443041469238, 0);
  sqcRZGate(q, 1.5798410164735048, 0);
  sqcRYGate(q, -1.5135087210684852, 1);
  sqcRZGate(q, 2.760488602599672, 1);
  sqcRYGate(q, 0.06087609309139364, 2);
  sqcRZGate(q, -3.045988559973335, 2);
  sqcRYGate(q, 1.2836860271149815, 3);
  sqcRZGate(q, -2.575108259667469, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.141293775705, 0);
  sqcRZGate(q, 2.5836270240807804, 0);
  sqcRYGate(q, -1.1969049602996558, 1);
  sqcRZGate(q, -1.3711092994687615, 1);
  sqcRYGate(q, 0.2624972800512593, 2);
  sqcRZGate(q, 2.3521716625088547, 2);
  sqcRYGate(q, 2.3583793746953243, 3);
  sqcRZGate(q, -0.6998101768904598, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.2684455202429326, 0);
  sqcRZGate(q, 1.803967889191082, 0);
  sqcRYGate(q, 2.6951594351584456, 1);
  sqcRZGate(q, 1.2642844460994103, 1);
  sqcRYGate(q, -2.41527246498947, 2);
  sqcRZGate(q, -1.51800053252389, 2);
  sqcRYGate(q, 2.398347028036712, 3);
  sqcRZGate(q, -1.719171081553366, 3);

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
