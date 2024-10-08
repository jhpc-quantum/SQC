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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.153997695802138, 0);
  sqcRYGate(q, -0.10979793057793064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.458829433227251, 0);
  sqcRYGate(q, -2.2108813173337314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.899224861048463, 2);
  sqcRYGate(q, -1.6801666798481996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7474775176712048, 2);
  sqcRYGate(q, 0.6702619193698736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8509355880336136, 4);
  sqcRYGate(q, 1.9959523063075593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3653389975645283, 4);
  sqcRYGate(q, -2.0004480305468872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1743643379995614, 6);
  sqcRYGate(q, 1.1713037664069752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3893182958879056, 6);
  sqcRYGate(q, 2.2975688761567072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8822660470451384, 1);
  sqcRYGate(q, -0.6023636088075863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3522814894043054, 1);
  sqcRYGate(q, -1.968078562094673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7347163241202012, 3);
  sqcRYGate(q, 2.157603343076736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9380578083775695, 3);
  sqcRYGate(q, 2.2661374955801774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0744668657376526, 5);
  sqcRYGate(q, 0.9046468881399168, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.868896879503717, 5);
  sqcRYGate(q, 1.3262038408318633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09676677839151893, 0);
  sqcRYGate(q, 1.03947041242785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10745529593122632, 0);
  sqcRYGate(q, 3.1243433652327393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1920237062845498, 2);
  sqcRYGate(q, 2.24932875833614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.387272788612131, 2);
  sqcRYGate(q, -0.5940354525795855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2244759392610057, 4);
  sqcRYGate(q, 0.8828095878828792, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0194185954204777, 4);
  sqcRYGate(q, -1.2874211646703098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9575718358653944, 6);
  sqcRYGate(q, 3.068310780220129, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6808377720802854, 6);
  sqcRYGate(q, 0.5479695503013513, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0250127440995778, 1);
  sqcRYGate(q, 1.824340444439943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6738287108390411, 1);
  sqcRYGate(q, -1.4881079996414586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.702897385486792, 3);
  sqcRYGate(q, 2.568735893948333, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8463401494232894, 3);
  sqcRYGate(q, -1.1468453963196046, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4476156788851764, 5);
  sqcRYGate(q, 0.18545005036688222, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.656845272969792, 5);
  sqcRYGate(q, 1.1059672636109814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.205912739835853, 0);
  sqcRYGate(q, 0.3314526398526123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0359544609762943, 0);
  sqcRYGate(q, -0.362137260536687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3987522891808515, 2);
  sqcRYGate(q, -3.0005325057306305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.434838303119473, 2);
  sqcRYGate(q, 2.046973064819422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4450976264201296, 4);
  sqcRYGate(q, -2.7221219096868343, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.028999342640434, 4);
  sqcRYGate(q, -1.6390799711841544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8460144163970167, 6);
  sqcRYGate(q, -1.9110905495836068, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03214889873948845, 6);
  sqcRYGate(q, -0.49149642059152404, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.18254024321719, 1);
  sqcRYGate(q, -1.2312102171224861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.961984245661641, 1);
  sqcRYGate(q, 1.2703984540798476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2768353845001323, 3);
  sqcRYGate(q, 2.4271508593545197, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8701593848223375, 3);
  sqcRYGate(q, -2.249170732732142, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7995264108871767, 5);
  sqcRYGate(q, 1.705528839858742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.640749668641681, 5);
  sqcRYGate(q, 2.3229224717702985, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.366449113628696, 0);
  sqcRYGate(q, -1.4211758980073574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.885781818804678, 0);
  sqcRYGate(q, 1.9120078851744715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8721932034531226, 2);
  sqcRYGate(q, 2.1364313517858013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.410325798887542, 2);
  sqcRYGate(q, 0.3794062886928999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7879283269295398, 4);
  sqcRYGate(q, -0.129997337455392, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7575051479140321, 4);
  sqcRYGate(q, 1.9163632991515256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.38679851031690665, 6);
  sqcRYGate(q, 3.0710592244652903, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.077472868289073, 6);
  sqcRYGate(q, 1.409999021674273, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.11812449072106812, 1);
  sqcRYGate(q, -0.6097242108530296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4141524269141112, 1);
  sqcRYGate(q, -0.3141371994114682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2550980352288894, 3);
  sqcRYGate(q, 1.914671816598915, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.35198776478281013, 3);
  sqcRYGate(q, 2.0032049655959403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.690973843467676, 5);
  sqcRYGate(q, -2.8860647484081867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2796958198028223, 5);
  sqcRYGate(q, -3.0154205432624948, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4415714114706832, 0);
  sqcRYGate(q, 1.276617723421035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7600874090670895, 0);
  sqcRYGate(q, -2.1607505829759805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9487682810933737, 2);
  sqcRYGate(q, -2.3698556127351997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4222639189200177, 2);
  sqcRYGate(q, -2.0555445732945508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7785986081779974, 4);
  sqcRYGate(q, -1.3846509757445047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4860911633006988, 4);
  sqcRYGate(q, -2.3077744259790736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3484028769003857, 6);
  sqcRYGate(q, -2.6579640193833804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2248870660027817, 6);
  sqcRYGate(q, -1.0319750447711522, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.14332536589840167, 1);
  sqcRYGate(q, -3.0788776141523813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5021047860551446, 1);
  sqcRYGate(q, -0.38200026609657217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23777857113577927, 3);
  sqcRYGate(q, -0.7673949561748233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1542426653033082, 3);
  sqcRYGate(q, 0.7409141610998979, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6372417495780254, 5);
  sqcRYGate(q, 0.9896738368007404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.97257383723111, 5);
  sqcRYGate(q, -1.8197321188663764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7005414690785765, 0);
  sqcRYGate(q, -0.20524241699889956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4442699423619188, 0);
  sqcRYGate(q, 0.20222890435852392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6632697249047073, 2);
  sqcRYGate(q, 0.5556466446025833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.795841965612095, 2);
  sqcRYGate(q, 1.4676333468057212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.811384047638925, 4);
  sqcRYGate(q, -0.29151910577835854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.138836730866746, 4);
  sqcRYGate(q, 1.5059288299538567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6608240484864034, 6);
  sqcRYGate(q, 0.6051702765844144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6720170015833196, 6);
  sqcRYGate(q, -0.7795385697355101, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.15471244254300487, 1);
  sqcRYGate(q, 0.952690505019941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8077609570136577, 1);
  sqcRYGate(q, -2.174433734212216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0680219249204175, 3);
  sqcRYGate(q, -1.112552833300223, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.41369751896152596, 3);
  sqcRYGate(q, 2.3457244608307817, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5794961174656774, 5);
  sqcRYGate(q, 3.100474290457025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1582290111885074, 5);
  sqcRYGate(q, 3.0404710313007874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.30182014012494274, 0);
  sqcRYGate(q, -2.270734386307965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5920283509573707, 0);
  sqcRYGate(q, -0.8728741395326702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8075930336482529, 2);
  sqcRYGate(q, 0.6608090837221596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0351664178631227, 2);
  sqcRYGate(q, 0.5869611418189725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8161615889459117, 4);
  sqcRYGate(q, -1.4280690211933997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.29980275993815564, 4);
  sqcRYGate(q, 0.07647903625243421, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2418867089758356, 6);
  sqcRYGate(q, -1.8139981813229893, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7806411798258057, 6);
  sqcRYGate(q, -2.8330310865274537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8460152740920543, 1);
  sqcRYGate(q, 1.5125380072125905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.98263477560282, 1);
  sqcRYGate(q, -0.6438623401399347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9037717211266452, 3);
  sqcRYGate(q, 1.819073831816614, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8688166821552903, 3);
  sqcRYGate(q, -1.9212952995100736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4730843749312357, 5);
  sqcRYGate(q, 1.0958614563525562, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5784761041113775, 5);
  sqcRYGate(q, 1.070486776474125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.448405842373263, 0);
  sqcRYGate(q, -1.642958216180928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3076861419391362, 0);
  sqcRYGate(q, -0.7260731320712992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7840237219816073, 2);
  sqcRYGate(q, -3.0684378559111702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4643593854846277, 2);
  sqcRYGate(q, -2.176227322254352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0009526355069323, 4);
  sqcRYGate(q, 1.9583520514153034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04062061988872557, 4);
  sqcRYGate(q, -1.5896834516021103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8889704383132351, 6);
  sqcRYGate(q, -0.7007217509909114, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.492196172172142, 6);
  sqcRYGate(q, 0.5327146094929063, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1171275799192717, 1);
  sqcRYGate(q, 0.7722036704175688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.315229976384029, 1);
  sqcRYGate(q, -2.023232077875895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9628793493323249, 3);
  sqcRYGate(q, -0.6295529692869763, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6141166763459598, 3);
  sqcRYGate(q, -1.8740380262481118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.315423530363702, 5);
  sqcRYGate(q, 1.8216582683528924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5021060343337931, 5);
  sqcRYGate(q, -0.7879640151000483, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.767440383489776, 0);
  sqcRYGate(q, 0.3923417395990106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.242058450271073, 0);
  sqcRYGate(q, 2.955574653961082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1230831120523197, 2);
  sqcRYGate(q, -3.1226516631254295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8390885471351794, 2);
  sqcRYGate(q, -2.6312268270155803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4936433926359693, 4);
  sqcRYGate(q, 1.1533049738518084, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5684234752050767, 4);
  sqcRYGate(q, -1.6853071713830279, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1625514602715117, 6);
  sqcRYGate(q, -0.578281814146792, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.690452982896887, 6);
  sqcRYGate(q, -1.3014682944023672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3256115843055731, 1);
  sqcRYGate(q, -1.39115671316147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0359262014400263, 1);
  sqcRYGate(q, 0.886625884027211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12230401728976671, 3);
  sqcRYGate(q, -1.3953140224128837, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7264870459429025, 3);
  sqcRYGate(q, -0.09219661733248638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3902011471635483, 5);
  sqcRYGate(q, 0.4412968650435796, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5587247777133104, 5);
  sqcRYGate(q, 0.9114822323610099, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8629178734318551, 0);
  sqcRYGate(q, -1.6181160636851495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5504981465042749, 0);
  sqcRYGate(q, 2.596906625702385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.852648648144983, 2);
  sqcRYGate(q, -0.8275261576060766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.465951861751879, 2);
  sqcRYGate(q, -3.0523473407921085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4769698123468924, 4);
  sqcRYGate(q, -2.799288648200964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3875524964637527, 4);
  sqcRYGate(q, 1.2038418365903114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.014724389451553974, 6);
  sqcRYGate(q, 1.090998153693186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7863807622488563, 6);
  sqcRYGate(q, 0.9229968106521654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.694823794030131, 1);
  sqcRYGate(q, -2.862607862598125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.654960904439104, 1);
  sqcRYGate(q, -2.654768022512988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4593757271966508, 3);
  sqcRYGate(q, 0.7912028660227559, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6229714972719984, 3);
  sqcRYGate(q, -2.6866142937367674, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7819619196538263, 5);
  sqcRYGate(q, 1.6661010736712252, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7180884779685424, 5);
  sqcRYGate(q, 0.31765007223621655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3258325313191535, 0);
  sqcRYGate(q, -2.8387635782092815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2084676741203806, 0);
  sqcRYGate(q, 3.050681349457704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4536318093486527, 2);
  sqcRYGate(q, -0.041944993360476523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7676024092756708, 2);
  sqcRYGate(q, -3.020108020407041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.025679672377226032, 4);
  sqcRYGate(q, -2.545040031008592, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0198270219707575, 4);
  sqcRYGate(q, 0.15502085658389275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1068699264710182, 6);
  sqcRYGate(q, -0.7147589613716724, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4272157920391144, 6);
  sqcRYGate(q, -0.9749938540528788, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.732488888830976, 1);
  sqcRYGate(q, 0.6348320415908102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.545962364296102, 1);
  sqcRYGate(q, 1.2802360526901946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.345248680644653, 3);
  sqcRYGate(q, 1.5510204969218009, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.801918650437068, 3);
  sqcRYGate(q, 1.3683036827928903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.555723058648608, 5);
  sqcRYGate(q, -1.8409218355688255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.35105408003175764, 5);
  sqcRYGate(q, 3.0480640041713305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.057082635916811, 0);
  sqcRYGate(q, -2.6284267478921035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.992660864273458, 0);
  sqcRYGate(q, 2.604565779652177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6557601545875409, 2);
  sqcRYGate(q, -0.9735654702189054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.261423275157382, 2);
  sqcRYGate(q, 1.7060800519979584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.536299742209303, 4);
  sqcRYGate(q, 1.5120417450299009, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.18432919478802604, 4);
  sqcRYGate(q, -1.3776836253959654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2752039699883477, 6);
  sqcRYGate(q, 0.5996170682393424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0355543956231719, 6);
  sqcRYGate(q, 2.8098032282866403, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2900667957492752, 1);
  sqcRYGate(q, -0.9359723576040402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8700021550317354, 1);
  sqcRYGate(q, -1.9328191974473565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.448961364269673, 3);
  sqcRYGate(q, -0.5358349797903363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1462867453061794, 3);
  sqcRYGate(q, 1.493434167816574, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4044057283401141, 5);
  sqcRYGate(q, -0.29698322600460525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.092895848140973, 5);
  sqcRYGate(q, -3.0989685211786178, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3761596181462545, 0);
  sqcRYGate(q, -1.132033832665969, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.555704183780401, 0);
  sqcRYGate(q, -2.528890216104911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6104515156216483, 2);
  sqcRYGate(q, -1.4579469844898678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8102185836973814, 2);
  sqcRYGate(q, 2.2373870453062605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.686134699190498, 4);
  sqcRYGate(q, -1.6660935477232002, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.010298498472162, 4);
  sqcRYGate(q, 2.3655789816271264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.033871351600541, 6);
  sqcRYGate(q, 0.6517946840740311, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.372454137641234, 6);
  sqcRYGate(q, 0.8427848592089817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3295481962052023, 1);
  sqcRYGate(q, -1.868021489930869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.368899182041194, 1);
  sqcRYGate(q, 1.0820256224043217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.511847871199587, 3);
  sqcRYGate(q, 2.5445129259838066, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8789577717127162, 3);
  sqcRYGate(q, -0.580705659342744, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.276495321928447, 5);
  sqcRYGate(q, 2.6253172397506725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1338830124365122, 5);
  sqcRYGate(q, 0.7702722413552439, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16546510660937838, 0);
  sqcRYGate(q, 0.9265023078285172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8969091795633, 0);
  sqcRYGate(q, 0.7933932798044196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2681893462408445, 2);
  sqcRYGate(q, -1.6225941458781976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5446759426299153, 2);
  sqcRYGate(q, 1.8427712154636713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5756886595827209, 4);
  sqcRYGate(q, -1.4955408936471442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6592216472491543, 4);
  sqcRYGate(q, -1.7255531243435298, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4925826645051138, 6);
  sqcRYGate(q, -3.0702818360880255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4627206724884179, 6);
  sqcRYGate(q, 2.1518542756422203, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4074487850539223, 1);
  sqcRYGate(q, 0.25103727849478275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7674239403477587, 1);
  sqcRYGate(q, 0.9706212136023646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.894607682025176, 3);
  sqcRYGate(q, 2.7634893535051015, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1748136815930563, 3);
  sqcRYGate(q, -1.874753151086126, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9164937492680414, 5);
  sqcRYGate(q, -0.524416635147638, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2866050899662471, 5);
  sqcRYGate(q, 1.4835909213436047, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.719183752220554, 0);
  sqcRYGate(q, -0.019759922653392437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8028225659112858, 0);
  sqcRYGate(q, 1.8270821609729957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3791939579618537, 2);
  sqcRYGate(q, -2.450777917154169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3443534356987814, 2);
  sqcRYGate(q, 0.3214249291305622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4501812388767976, 4);
  sqcRYGate(q, -2.993999944388085, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9560910344169566, 4);
  sqcRYGate(q, 0.08554317085691616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8163331922446515, 6);
  sqcRYGate(q, -0.9659058287310882, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4909957973246221, 6);
  sqcRYGate(q, 1.7983139669298662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.608792780722417, 1);
  sqcRYGate(q, -1.3370094982273102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7791137284805218, 1);
  sqcRYGate(q, 1.5487294694328293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.661275103363845, 3);
  sqcRYGate(q, 3.067352942591742, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.050578441153084, 3);
  sqcRYGate(q, -2.98705167906428, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7659969456008309, 5);
  sqcRYGate(q, -0.3914778747306606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4671388119968196, 5);
  sqcRYGate(q, -0.7699731393282558, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7995173337768505, 0);
  sqcRYGate(q, -0.746396867657392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5315077443392671, 0);
  sqcRYGate(q, -0.9007406962971451, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6329697302756263, 2);
  sqcRYGate(q, 2.0476540091688014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.126357021228571, 2);
  sqcRYGate(q, -0.49024288254308335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8651340842908217, 4);
  sqcRYGate(q, -0.3027981538532302, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.807903134859358, 4);
  sqcRYGate(q, 1.6683790816844615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9885458425735835, 6);
  sqcRYGate(q, 2.5966584662406604, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08862180666073272, 6);
  sqcRYGate(q, -0.5670091776359415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5389550965471278, 1);
  sqcRYGate(q, -2.3727843656148853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1895252935776393, 1);
  sqcRYGate(q, -2.2212736951369907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4394440098987014, 3);
  sqcRYGate(q, -0.4432565225912466, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4803680485527942, 3);
  sqcRYGate(q, -2.8581428786670275, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8244448486019139, 5);
  sqcRYGate(q, 3.0899197898872433, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2206467993724504, 5);
  sqcRYGate(q, -0.7130875699115737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0458116913696047, 0);
  sqcRYGate(q, 2.8076247340193254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.015826341611045, 0);
  sqcRYGate(q, 2.9004422879026963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7221924509667281, 2);
  sqcRYGate(q, 0.7896309908303917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2145380688397482, 2);
  sqcRYGate(q, 3.0379579932012453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7657420935671913, 4);
  sqcRYGate(q, -2.6128445055079883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6276120875548106, 4);
  sqcRYGate(q, -2.2640996464994103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.43076627755403424, 6);
  sqcRYGate(q, 2.6725929994581024, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6908465440433161, 6);
  sqcRYGate(q, 1.471093850565759, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.21376969497419562, 1);
  sqcRYGate(q, -1.1941971763586925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.116591594581772, 1);
  sqcRYGate(q, 1.6557405510465288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6418688698434567, 3);
  sqcRYGate(q, 0.22021995843385506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9871818989639713, 3);
  sqcRYGate(q, -1.4207062780487403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7342053502119157, 5);
  sqcRYGate(q, 2.7999755683968295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0696109327553454, 5);
  sqcRYGate(q, -2.77460532320002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.104829434909134, 0);
  sqcRYGate(q, -2.1336586809066613, 1);
  sqcRYGate(q, 2.071231758905311, 2);
  sqcRYGate(q, -2.068058357948426, 3);
  sqcRYGate(q, 2.0476034605809477, 4);
  sqcRYGate(q, -2.593532540658537, 5);
  sqcRYGate(q, 1.7853501708684174, 6);
  sqcRYGate(q, -0.10100236243695893, 7);

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
