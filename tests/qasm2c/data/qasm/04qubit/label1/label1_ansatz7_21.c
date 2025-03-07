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

  sqcRYGate(q, -1.8350205204638748, 0);
  sqcRYGate(q, 2.8801283063803305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7341738097004018, 0);
  sqcRYGate(q, -0.9628507928397632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.666196756166281, 0);
  sqcRYGate(q, -2.16986093383502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4649039443653171, 0);
  sqcRYGate(q, -2.244619935931294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4446452837770138, 0);
  sqcRYGate(q, -1.3696928239350614, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.34135031398711563, 0);
  sqcRYGate(q, 2.4398926761202993, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9039115485128164, 1);
  sqcRYGate(q, -1.4352638054664872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9102526000246003, 1);
  sqcRYGate(q, -2.5317678826654255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2984521192227523, 1);
  sqcRYGate(q, 0.3826866303172993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3541423864539333, 1);
  sqcRYGate(q, 1.7004727156571409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7865844265525351, 2);
  sqcRYGate(q, 2.05099271161919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3109006185775645, 2);
  sqcRYGate(q, -2.3856464124224726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19141606145555218, 0);
  sqcRYGate(q, -0.035484061995767924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8080460909202132, 0);
  sqcRYGate(q, 1.1859683276205635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4054373341050193, 0);
  sqcRYGate(q, 0.031889245254427934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1220611590667744, 0);
  sqcRYGate(q, 0.359305282244458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9791351131455923, 0);
  sqcRYGate(q, -0.4433919861758408, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4916902512031154, 0);
  sqcRYGate(q, 3.0132610494098553, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8202209134034724, 1);
  sqcRYGate(q, 2.108616594500142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7023468463405117, 1);
  sqcRYGate(q, -3.099877757391555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4489007343377187, 1);
  sqcRYGate(q, 2.1841226398431193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5138486412101623, 1);
  sqcRYGate(q, -2.734892704700371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1379128658768343, 2);
  sqcRYGate(q, -1.9494905216034533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5301095474757203, 2);
  sqcRYGate(q, -0.7718671238723419, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5062808134102683, 0);
  sqcRYGate(q, -1.3065976718987944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2868210657147108, 0);
  sqcRYGate(q, -2.44720009470846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2684064953775805, 0);
  sqcRYGate(q, 2.163808081857108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1622607048098033, 0);
  sqcRYGate(q, 0.8769576153394159, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8798240345560527, 0);
  sqcRYGate(q, -1.7913818594311202, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.008556645560512114, 0);
  sqcRYGate(q, 0.28834723557491504, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3437238048630953, 1);
  sqcRYGate(q, -1.580059331707309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4405982031281925, 1);
  sqcRYGate(q, -0.3702207440941594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3666667085894686, 1);
  sqcRYGate(q, 1.5874276149448288, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.42569696028752, 1);
  sqcRYGate(q, 2.4548239829767913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6153226715103299, 2);
  sqcRYGate(q, -1.7051371314868025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5035823785671059, 2);
  sqcRYGate(q, -0.1771409362812793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.732783315298085, 0);
  sqcRYGate(q, -2.2394646393604707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6093336245825701, 0);
  sqcRYGate(q, -1.8448078774911236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.949215045477749, 0);
  sqcRYGate(q, -1.8357117057151753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.268046334077888, 0);
  sqcRYGate(q, -0.9091382910592825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.037764872036897046, 0);
  sqcRYGate(q, 1.4351907991688968, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5166178229628864, 0);
  sqcRYGate(q, -2.3837558167672297, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3152868504631758, 1);
  sqcRYGate(q, 0.64654898609556, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4292710113429062, 1);
  sqcRYGate(q, -2.2777791965572676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2913764642124335, 1);
  sqcRYGate(q, 2.2485318403238823, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5476173379131315, 1);
  sqcRYGate(q, 1.6428444565630382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0140446549076607, 2);
  sqcRYGate(q, -0.9067521985066148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7947399708487811, 2);
  sqcRYGate(q, 0.9878434107624869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5473088472401042, 0);
  sqcRYGate(q, 2.1431055802143586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40149723594291054, 0);
  sqcRYGate(q, -1.0643800101182452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.683623030952513, 0);
  sqcRYGate(q, -0.6276587501903734, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8693050082404425, 0);
  sqcRYGate(q, -2.15552969834952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4117509947436819, 0);
  sqcRYGate(q, 1.4366141456772563, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5169260907208737, 0);
  sqcRYGate(q, 0.6164655111631118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.40026027681183035, 1);
  sqcRYGate(q, -1.3209678364781317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3809200191152675, 1);
  sqcRYGate(q, 2.0061002513643995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8273533946359387, 1);
  sqcRYGate(q, -1.1696587593570495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.29399360328535057, 1);
  sqcRYGate(q, -3.043629729021082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0891038719870332, 2);
  sqcRYGate(q, -2.4381278717068877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9563067158689763, 2);
  sqcRYGate(q, -2.874385694218516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8497982344000135, 0);
  sqcRYGate(q, -0.5366748034888266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.333429677487075, 0);
  sqcRYGate(q, 0.0012809007224580502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.061549074853964, 0);
  sqcRYGate(q, 0.8018393312292772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0621279317684795, 0);
  sqcRYGate(q, -1.6423547116451795, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9806403977973783, 0);
  sqcRYGate(q, 0.3833144607551864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0694712152332566, 0);
  sqcRYGate(q, -0.5828304019906332, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.30836702684017553, 1);
  sqcRYGate(q, -2.879328815285712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3416123220861045, 1);
  sqcRYGate(q, 2.348868880576324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3814334003189757, 1);
  sqcRYGate(q, -1.1393538733392647, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2170229646382735, 1);
  sqcRYGate(q, -0.06911617806964401, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7061866787713544, 2);
  sqcRYGate(q, -2.643124443879827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20823333726014415, 2);
  sqcRYGate(q, -2.5130264048137523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8758663514166609, 0);
  sqcRYGate(q, 2.7094139639168304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.734205903336692, 0);
  sqcRYGate(q, 2.6833950005340204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9748348709725887, 0);
  sqcRYGate(q, -2.065587971218915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.01730873654622335, 0);
  sqcRYGate(q, -2.841456307291674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.22337868094469523, 0);
  sqcRYGate(q, -3.021243575493021, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.119155643165004, 0);
  sqcRYGate(q, -2.2037168692894764, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3718218491296263, 1);
  sqcRYGate(q, 1.8092441325246036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9825736256794784, 1);
  sqcRYGate(q, -0.6537781401940747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1984671338881094, 1);
  sqcRYGate(q, -1.4047846870538028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.635465789965826, 1);
  sqcRYGate(q, 1.692298845865868, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6850733036892969, 2);
  sqcRYGate(q, 0.0792072300891045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1258594432616027, 2);
  sqcRYGate(q, 3.058329580204443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6233790239353567, 0);
  sqcRYGate(q, -1.5372199695339062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5741449279036637, 0);
  sqcRYGate(q, 1.8450374639084195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0519690770706984, 0);
  sqcRYGate(q, -1.8895648290732017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1454180836779595, 0);
  sqcRYGate(q, -2.1666694345865265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4664136645148634, 0);
  sqcRYGate(q, -0.04773388100137499, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.804181566760456, 0);
  sqcRYGate(q, 1.278972393824525, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4492843054474234, 1);
  sqcRYGate(q, -0.5194774741797624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7714885933351905, 1);
  sqcRYGate(q, 2.139949004707976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4502816671291532, 1);
  sqcRYGate(q, -1.5181487886712235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9099881374036709, 1);
  sqcRYGate(q, -0.4264389771831585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0580869787940888, 2);
  sqcRYGate(q, -2.981028848251808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3692906793453843, 2);
  sqcRYGate(q, 3.087295283328206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9080744989024983, 0);
  sqcRYGate(q, -3.04876970920233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0292710229592306, 0);
  sqcRYGate(q, -2.15046032735885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.270185721656179, 0);
  sqcRYGate(q, -2.9436489099823477, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9541501015346396, 0);
  sqcRYGate(q, -0.12771722044063694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.061501237672142, 0);
  sqcRYGate(q, -0.265827367751692, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.15624138868805026, 0);
  sqcRYGate(q, -2.3529209154093524, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.358746843578734, 1);
  sqcRYGate(q, 2.941851489571399, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7751197122462417, 1);
  sqcRYGate(q, -0.49576020896702655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24509017586705045, 1);
  sqcRYGate(q, 1.3604892229657721, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5142705056246784, 1);
  sqcRYGate(q, 0.5654992653153066, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0402688006058416, 2);
  sqcRYGate(q, -1.0813211351301657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9394220378635796, 2);
  sqcRYGate(q, -0.9971142670804147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8914400776802296, 0);
  sqcRYGate(q, -2.0228891690325144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08479466050252199, 0);
  sqcRYGate(q, 2.177451474820096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16743870276920833, 0);
  sqcRYGate(q, 1.9218988140024038, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1545693099213894, 0);
  sqcRYGate(q, -2.238599911460434, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3051531104869207, 0);
  sqcRYGate(q, 2.7628761302026503, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.633266407541632, 0);
  sqcRYGate(q, 0.08822650085245508, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.880781744923195, 1);
  sqcRYGate(q, -2.426804471832696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4406982765181411, 1);
  sqcRYGate(q, -0.46492842735370665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.044047961783097, 1);
  sqcRYGate(q, -2.661324604563665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0896551002753023, 1);
  sqcRYGate(q, 2.340884847000246, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9962411917594144, 2);
  sqcRYGate(q, 2.2936277358933945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2472443489112053, 2);
  sqcRYGate(q, -3.020825041444371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3788661747676602, 0);
  sqcRYGate(q, 2.2886875495875794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3401464045159841, 0);
  sqcRYGate(q, 2.992432029064727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03855735031698836, 0);
  sqcRYGate(q, 0.14389261307658044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0303656077943373, 0);
  sqcRYGate(q, 1.907820308034153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.131470799839506, 0);
  sqcRYGate(q, 0.40753141535523696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.727127943786707, 0);
  sqcRYGate(q, -2.806823632269183, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1719148555357704, 1);
  sqcRYGate(q, -1.7193750185026542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5484946233601757, 1);
  sqcRYGate(q, -2.7275980581386916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.052855558867306, 1);
  sqcRYGate(q, -0.3276196760381438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6945735472594508, 1);
  sqcRYGate(q, -2.2596568781821684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.445951909367734, 2);
  sqcRYGate(q, -2.8917936513440394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7433212614050646, 2);
  sqcRYGate(q, 0.6287058828698724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.954581049121769, 0);
  sqcRYGate(q, -0.32562712052776344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9582446331635313, 0);
  sqcRYGate(q, 1.175510055586777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16928971428016037, 0);
  sqcRYGate(q, -2.054957998657428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0241254982685506, 0);
  sqcRYGate(q, -1.5465515896330775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1298975947825378, 0);
  sqcRYGate(q, 0.6120627055856606, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1543151323713576, 0);
  sqcRYGate(q, -2.3116448881003446, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6482767765365133, 1);
  sqcRYGate(q, -1.4232917308874349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.619004975770358, 1);
  sqcRYGate(q, -2.1273570957041192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7156363036788767, 1);
  sqcRYGate(q, 2.1845205342960368, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.41915171190235956, 1);
  sqcRYGate(q, 0.4561405050624879, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5303971663938434, 2);
  sqcRYGate(q, -2.5146226549210207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5037368854775766, 2);
  sqcRYGate(q, -3.068773958462476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3380604057583674, 0);
  sqcRYGate(q, -1.2573271506545654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3091994280906913, 0);
  sqcRYGate(q, -0.9847977571625945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5764134683322568, 0);
  sqcRYGate(q, 0.5186568834049057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6507975138042752, 0);
  sqcRYGate(q, 0.9268738021451032, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9075094495930465, 0);
  sqcRYGate(q, -0.9349301330045758, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08452375100334475, 0);
  sqcRYGate(q, 3.091887483129666, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.219355806479988, 1);
  sqcRYGate(q, -0.9446524673078738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.021814736718573258, 1);
  sqcRYGate(q, -0.989084977683648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9880343846972311, 1);
  sqcRYGate(q, -2.8604036753488895, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5791275629141052, 1);
  sqcRYGate(q, -1.7206976814187944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5263921764761864, 2);
  sqcRYGate(q, -1.952657917859856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6446633824939347, 2);
  sqcRYGate(q, 2.8761932584057357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7247394879170719, 0);
  sqcRYGate(q, 0.10664248090712915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.953778211324864, 0);
  sqcRYGate(q, -2.017310400081387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.011550644690115242, 0);
  sqcRYGate(q, -0.904729906468149, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.03253768831816, 0);
  sqcRYGate(q, 1.289698491014963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.99372627977636, 0);
  sqcRYGate(q, 3.0284470667039414, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.41404834342819535, 0);
  sqcRYGate(q, -1.8790259275355492, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2319240669966831, 1);
  sqcRYGate(q, -2.168498653382039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8658512982308366, 1);
  sqcRYGate(q, -0.4788082302637847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7510381568788684, 1);
  sqcRYGate(q, -1.870722453002329, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8158591059578548, 1);
  sqcRYGate(q, -0.5177901847675289, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.39041725982581166, 2);
  sqcRYGate(q, 1.2660909609594118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4398579314684605, 2);
  sqcRYGate(q, 1.4519333739343923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40863933323462465, 0);
  sqcRYGate(q, 0.369626804948318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.051851701517822, 0);
  sqcRYGate(q, 0.47194041485378424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2815276891852188, 0);
  sqcRYGate(q, 0.5937954784779099, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9272856672322778, 0);
  sqcRYGate(q, -0.3062927093039898, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.521962756887654, 0);
  sqcRYGate(q, -1.1155354508490323, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1360441154128227, 0);
  sqcRYGate(q, 1.0523338594175324, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4954961930981678, 1);
  sqcRYGate(q, -0.35722225820903164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8053977351668613, 1);
  sqcRYGate(q, 1.0976489736963497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.718408771549199, 1);
  sqcRYGate(q, -1.0875024853379944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4634214638163825, 1);
  sqcRYGate(q, 2.339269862239795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8584632822858504, 2);
  sqcRYGate(q, 2.1073355408864103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5083476541031543, 2);
  sqcRYGate(q, -0.2874505694906357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2980719907466989, 0);
  sqcRYGate(q, -3.0018684038789654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.474178525731162, 0);
  sqcRYGate(q, 1.117605571022307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6160858408631561, 0);
  sqcRYGate(q, -1.790954811039791, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7550626108321246, 0);
  sqcRYGate(q, -0.6673745202543113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18714002818784412, 0);
  sqcRYGate(q, -0.006201554365959262, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6277250507872303, 0);
  sqcRYGate(q, 1.0479601256539837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8056124940827223, 1);
  sqcRYGate(q, -0.21624277917591944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.681687626762315, 1);
  sqcRYGate(q, 3.001614955206064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6532578764158337, 1);
  sqcRYGate(q, 1.8053343459275564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0464490860885807, 1);
  sqcRYGate(q, -0.6670745032215654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5526951855567237, 2);
  sqcRYGate(q, -1.802514074028344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10983876963989019, 2);
  sqcRYGate(q, -1.5975625824963133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4481954598242138, 0);
  sqcRYGate(q, 2.628570845021062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.678931250379307, 0);
  sqcRYGate(q, 2.848097015818284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2754263269821915, 0);
  sqcRYGate(q, -0.5755149572250263, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.928836697081103, 0);
  sqcRYGate(q, -1.478032421104995, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.765627539372515, 0);
  sqcRYGate(q, -1.073945698521329, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1262213523112776, 0);
  sqcRYGate(q, -0.3944210970625059, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9102691329192869, 1);
  sqcRYGate(q, -1.996099867588672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8101360962815933, 1);
  sqcRYGate(q, 0.3907241378159246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2235401410674402, 1);
  sqcRYGate(q, -2.061505768629473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9405258977626457, 1);
  sqcRYGate(q, 0.835655004930134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2188431783119569, 2);
  sqcRYGate(q, 1.9253044024464536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6100888405168385, 2);
  sqcRYGate(q, 2.669620288435886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2305136237547734, 0);
  sqcRYGate(q, 1.4262007645290942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4336004254287076, 0);
  sqcRYGate(q, -2.368409644670628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7407868672023703, 0);
  sqcRYGate(q, -0.37014066165684234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6015161952925719, 0);
  sqcRYGate(q, -1.309541814700978, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.242115591806417, 0);
  sqcRYGate(q, 2.5816566438445125, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3815268406480294, 0);
  sqcRYGate(q, 0.7411480576205705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.822636899329426, 1);
  sqcRYGate(q, 1.6876497359701657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6212089662349163, 1);
  sqcRYGate(q, 1.2691946496199729, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8249067206166985, 1);
  sqcRYGate(q, -2.6386186790817674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9192337910669046, 1);
  sqcRYGate(q, -0.5648541704350891, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6083929323101107, 2);
  sqcRYGate(q, -0.25084669947796734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6414538700368109, 2);
  sqcRYGate(q, 2.4118031792683134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5429323890579607, 0);
  sqcRYGate(q, -1.5470184768931476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0817798126687928, 0);
  sqcRYGate(q, 0.2950245143822636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1871429084127647, 0);
  sqcRYGate(q, -0.5050812604397348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5683449135605503, 0);
  sqcRYGate(q, -2.5176877260394424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1758909308734124, 0);
  sqcRYGate(q, -2.33851217240876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.818165443345685, 0);
  sqcRYGate(q, 0.07292917415528472, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.871151421662396, 1);
  sqcRYGate(q, -0.007995809964747226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9611388125565364, 1);
  sqcRYGate(q, -2.0999529142513356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2103677721712574, 1);
  sqcRYGate(q, -2.7649131423844193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.608105164484372, 1);
  sqcRYGate(q, 0.7413282473001774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.914800993021512, 2);
  sqcRYGate(q, 2.203353382175275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5385885102488728, 2);
  sqcRYGate(q, 2.1303465298532123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0392046262528636, 0);
  sqcRYGate(q, -0.22782354844397457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9695071484958, 0);
  sqcRYGate(q, 0.20992212299240887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.32131235216809556, 0);
  sqcRYGate(q, -0.05084759072971412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4240982398530697, 0);
  sqcRYGate(q, -2.2454201047838946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8250959577970285, 0);
  sqcRYGate(q, -0.9759086092658559, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8578030941557022, 0);
  sqcRYGate(q, -1.0822622183982922, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.552687166548597, 1);
  sqcRYGate(q, -1.1970959036256017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5113481430516078, 1);
  sqcRYGate(q, 1.4693383144188914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6999269410521439, 1);
  sqcRYGate(q, 2.436959457736345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0812935295319526, 1);
  sqcRYGate(q, -2.3384737139870753, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6649841954845002, 2);
  sqcRYGate(q, -1.1418987799399734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7998554804249677, 2);
  sqcRYGate(q, -0.04942189919835993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.552646306321149, 0);
  sqcRYGate(q, 1.524686706636408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.155141411691094, 0);
  sqcRYGate(q, 0.05887870303100012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.427482311520656, 0);
  sqcRYGate(q, -1.1030333553553697, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.52236608841532, 0);
  sqcRYGate(q, 0.29415735256642894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8439062858469795, 0);
  sqcRYGate(q, 0.949265562424431, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.37121151224539234, 0);
  sqcRYGate(q, 0.5925409371495796, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.06693222665661125, 1);
  sqcRYGate(q, -2.8625302587138624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2268020248139173, 1);
  sqcRYGate(q, -1.9023369884222232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9411205867354173, 1);
  sqcRYGate(q, 0.7225439911852152, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7957213419466178, 1);
  sqcRYGate(q, 0.10229620475642665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.832341364305217, 2);
  sqcRYGate(q, -1.5836803341074048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9455610411149893, 2);
  sqcRYGate(q, -3.1075133469060674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.00115729619899715, 0);
  sqcRYGate(q, -2.4858495593203482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09006088644279986, 0);
  sqcRYGate(q, 0.7246890147982956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02367404283378667, 0);
  sqcRYGate(q, 0.15885922705860894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3312221074963348, 0);
  sqcRYGate(q, -1.0754815527765313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3327877434805626, 0);
  sqcRYGate(q, -1.357504580829355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.431205110545383, 0);
  sqcRYGate(q, -1.8894211190331733, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.07667667114826462, 1);
  sqcRYGate(q, 0.33734620825713063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8324635837372814, 1);
  sqcRYGate(q, -3.0849198938705964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5764357725874913, 1);
  sqcRYGate(q, -1.116856655347111, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9873320276577564, 1);
  sqcRYGate(q, -1.0315166148311432, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5052696576872608, 2);
  sqcRYGate(q, -2.208161348412701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.796644784993882, 2);
  sqcRYGate(q, -1.953179962039249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24470518813285214, 0);
  sqcRYGate(q, 2.0871039884491753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3732281937260449, 0);
  sqcRYGate(q, -2.3344606446098948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4737262693336115, 0);
  sqcRYGate(q, -2.03103493525647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.046832367212281234, 0);
  sqcRYGate(q, -2.211603962790995, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.828550497631909, 0);
  sqcRYGate(q, -0.5216133396886827, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.32424400329093017, 0);
  sqcRYGate(q, 2.5669272043363565, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2468038620683268, 1);
  sqcRYGate(q, 1.1326706442058194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.517092063853851, 1);
  sqcRYGate(q, -0.21930621202923992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9320784641504534, 1);
  sqcRYGate(q, 1.7532833454578516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0352419797540184, 1);
  sqcRYGate(q, -0.29753048929367054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8269057423975665, 2);
  sqcRYGate(q, -0.03507391238650256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.373174634649216, 2);
  sqcRYGate(q, -0.04607705245614557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3765524534557194, 0);
  sqcRYGate(q, 1.8176816863052592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9631037921987864, 0);
  sqcRYGate(q, 2.3942472287275613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2762629647894386, 0);
  sqcRYGate(q, -1.37097139846043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.97743543869891, 0);
  sqcRYGate(q, 3.065776717381552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.016596381315360943, 0);
  sqcRYGate(q, -2.099476720840607, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7335788410256135, 0);
  sqcRYGate(q, -2.2682236584696893, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2107192051731515, 1);
  sqcRYGate(q, -0.5770381158399267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3502738422378782, 1);
  sqcRYGate(q, -0.09273725783151837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8591538798455343, 1);
  sqcRYGate(q, 0.555258818764396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.40188794362044167, 1);
  sqcRYGate(q, 2.9036561163665273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9956322102899934, 2);
  sqcRYGate(q, 0.6021544260447502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7453031606424423, 2);
  sqcRYGate(q, -0.5561101222917386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4950623145448647, 0);
  sqcRYGate(q, -0.040811884316475755, 1);
  sqcRYGate(q, 0.7523399976914181, 2);
  sqcRYGate(q, 2.8115190795272884, 3);

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
