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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.331177212111716, 0);
  sqcRYGate(q, -2.01909182199185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6921541395478004, 0);
  sqcRYGate(q, -2.5776865318003064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.868049455164639, 1);
  sqcRYGate(q, 2.5943125869903914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.981684255094449, 1);
  sqcRYGate(q, -1.575976285733904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.025123693330709, 2);
  sqcRYGate(q, -2.086926316024009, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9541521818330772, 2);
  sqcRYGate(q, -0.8534724079720808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2537603917889326, 3);
  sqcRYGate(q, -2.7356298564342563, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2668949191936516, 3);
  sqcRYGate(q, -1.5605476984212514, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0314489349570266, 4);
  sqcRYGate(q, -0.9915131803164589, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8085650699158693, 4);
  sqcRYGate(q, -0.5376111798526036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.35709277120800126, 5);
  sqcRYGate(q, 2.4291750848254594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8233347849299317, 5);
  sqcRYGate(q, -1.642863004063495, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6206115994614043, 6);
  sqcRYGate(q, 3.081885453935173, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0270233807026914, 6);
  sqcRYGate(q, -2.0118897042226584, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1521064317193894, 7);
  sqcRYGate(q, 2.1683727242822117, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5663408079967778, 7);
  sqcRYGate(q, -0.4510999178472055, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2387403547547278, 8);
  sqcRYGate(q, 2.339648263531293, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8527154661001912, 8);
  sqcRYGate(q, 0.6906987425261504, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.39432201789648685, 9);
  sqcRYGate(q, 0.6675303328962348, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7976719862878374, 9);
  sqcRYGate(q, 0.5111092913756106, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.010108641465946, 10);
  sqcRYGate(q, -0.8290593159260997, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6828515655578737, 10);
  sqcRYGate(q, -3.01528609196432, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7259447803308028, 0);
  sqcRYGate(q, 1.162416183459469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8072562569486332, 0);
  sqcRYGate(q, 1.8300376632319093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4055133580050798, 1);
  sqcRYGate(q, 1.415046806454105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14468038023474308, 1);
  sqcRYGate(q, 1.5825693238307155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5959214723363777, 2);
  sqcRYGate(q, -0.24355179785174808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.120489779002323, 2);
  sqcRYGate(q, 0.018514884454925162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30227715863930626, 3);
  sqcRYGate(q, 0.6418137438349614, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.058141823930583, 3);
  sqcRYGate(q, -1.3744253980441847, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.086533412589849, 4);
  sqcRYGate(q, 1.6825101412955632, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4892926556026058, 4);
  sqcRYGate(q, 0.9447766824897547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6372502708717012, 5);
  sqcRYGate(q, 1.1474240486909393, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6476279938696214, 5);
  sqcRYGate(q, -0.5941280808434515, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7926580412082258, 6);
  sqcRYGate(q, 0.3501997861826114, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10000315857142451, 6);
  sqcRYGate(q, -2.8105892685607685, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.167819879309099, 7);
  sqcRYGate(q, 2.3596889188507038, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3093617944711372, 7);
  sqcRYGate(q, -3.073060144610704, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.518199427733947, 8);
  sqcRYGate(q, 0.08783582286477642, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4747825505941812, 8);
  sqcRYGate(q, 0.23156477953165489, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2070174450798115, 9);
  sqcRYGate(q, -2.7512355780166255, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8761878515571064, 9);
  sqcRYGate(q, -2.983871762222321, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.2270711464272465, 10);
  sqcRYGate(q, 1.9341525900794476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2149629915320626, 10);
  sqcRYGate(q, -3.076085618068067, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3191149015672545, 0);
  sqcRYGate(q, 1.5461077175577822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.910661961603131, 0);
  sqcRYGate(q, -2.650224346555377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4188212910401716, 1);
  sqcRYGate(q, 0.9499534608308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7082902210518867, 1);
  sqcRYGate(q, 0.36402664058590867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5568221472810142, 2);
  sqcRYGate(q, -3.0211624873213263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07249908135509994, 2);
  sqcRYGate(q, -3.0859441663243774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.237261550788135, 3);
  sqcRYGate(q, 0.9786668681825228, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0503314613831336, 3);
  sqcRYGate(q, -1.0937112432785585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8032503461730212, 4);
  sqcRYGate(q, -0.16566404473782104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1345335750565413, 4);
  sqcRYGate(q, 0.917188050471692, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3276567642753079, 5);
  sqcRYGate(q, 0.38251339401560214, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2664380868625482, 5);
  sqcRYGate(q, 0.14382380805327022, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06087349169119967, 6);
  sqcRYGate(q, 0.35705347689218137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.709991323500931, 6);
  sqcRYGate(q, 0.8566936435295256, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4774062535963657, 7);
  sqcRYGate(q, -0.27064569549305556, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0148606953698436, 7);
  sqcRYGate(q, 0.34033494267617714, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.652351232113514, 8);
  sqcRYGate(q, 2.9166357024109115, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1772448011329804, 8);
  sqcRYGate(q, 0.37487437886431385, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.639333964041386, 9);
  sqcRYGate(q, 0.6010676665521613, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.02934834794336043, 9);
  sqcRYGate(q, -2.9068006884686777, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7644278069366109, 10);
  sqcRYGate(q, -1.074844898173272, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0335545535985071, 10);
  sqcRYGate(q, 0.4850949710700884, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.776342259222891, 0);
  sqcRYGate(q, 1.9658157263763676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2905649445084055, 0);
  sqcRYGate(q, -2.1481684039550437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8088587318189493, 1);
  sqcRYGate(q, -0.8584439871405367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.240890830790229, 1);
  sqcRYGate(q, -0.7063244084207456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.081351297670948, 2);
  sqcRYGate(q, 3.0005223987691005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0924779467930827, 2);
  sqcRYGate(q, -2.2528908213115852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7597923630839255, 3);
  sqcRYGate(q, 2.2422236178074337, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0982461574041964, 3);
  sqcRYGate(q, -3.1107024164797354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2274746087185483, 4);
  sqcRYGate(q, -3.085400663190645, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3322329846229795, 4);
  sqcRYGate(q, 1.5583956186776717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.677208600299988, 5);
  sqcRYGate(q, -2.6182945602232577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9242514771334696, 5);
  sqcRYGate(q, -2.9706137536532764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4129722425032523, 6);
  sqcRYGate(q, -1.723958089280817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0248639212061255, 6);
  sqcRYGate(q, 0.07558004464017987, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.49974545512331, 7);
  sqcRYGate(q, -2.631974223031982, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4269575420375933, 7);
  sqcRYGate(q, -2.3168699288290617, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.05551299013071, 8);
  sqcRYGate(q, -0.2631768182116314, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8175602692355515, 8);
  sqcRYGate(q, -2.517591406420547, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7629117168655357, 9);
  sqcRYGate(q, 0.8573263363413083, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8646145955095688, 9);
  sqcRYGate(q, 0.5057778980847205, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.352984444895156, 10);
  sqcRYGate(q, 0.7459404510299456, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.038607783154263935, 10);
  sqcRYGate(q, 3.1177483489517606, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.46943550484811, 0);
  sqcRYGate(q, -3.1403782676656213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.019373243550414, 0);
  sqcRYGate(q, -1.8493680358818967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5421267893675377, 1);
  sqcRYGate(q, -0.43348944402758605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.714333914449608, 1);
  sqcRYGate(q, -2.3573410037360025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5990002482245855, 2);
  sqcRYGate(q, -1.3365603597052838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0641297818926354, 2);
  sqcRYGate(q, 0.49783011607722827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4339304054579576, 3);
  sqcRYGate(q, -1.819493044581134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1288439431442634, 3);
  sqcRYGate(q, -0.009217070062262795, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.59666407502177, 4);
  sqcRYGate(q, -1.7831261056480143, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.238943398874956, 4);
  sqcRYGate(q, 1.7042761444573737, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4780553791089484, 5);
  sqcRYGate(q, -0.5138068564400626, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0716901588700782, 5);
  sqcRYGate(q, -3.138544512076901, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9418347396939293, 6);
  sqcRYGate(q, 3.0376197502510185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2621749334582617, 6);
  sqcRYGate(q, 0.7067934957798496, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8969443103020529, 7);
  sqcRYGate(q, -1.251202706467223, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.07959122472070314, 7);
  sqcRYGate(q, 0.12485734107664564, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.386645613996452, 8);
  sqcRYGate(q, -0.6728595499091661, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.46675837504874, 8);
  sqcRYGate(q, 0.4474610356957465, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2154198713971627, 9);
  sqcRYGate(q, 1.5098268392667817, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.699723138153522, 9);
  sqcRYGate(q, 0.9419146950624686, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.408034689835612, 10);
  sqcRYGate(q, 1.2874905655295361, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4034859753143363, 10);
  sqcRYGate(q, -3.0941902837794615, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0497792677327595, 0);
  sqcRYGate(q, 1.4791025293738143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5213573622646059, 0);
  sqcRYGate(q, -1.450603226035546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5270846038840395, 1);
  sqcRYGate(q, -1.669645571805064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.488382963891392, 1);
  sqcRYGate(q, -2.0533096616296946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4195766457786962, 2);
  sqcRYGate(q, -1.5216566018216868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7879500947092475, 2);
  sqcRYGate(q, 1.091922183300325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.236478622960246, 3);
  sqcRYGate(q, 1.8224455529966113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.118425523417115, 3);
  sqcRYGate(q, 0.14842006870883467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4782237863537553, 4);
  sqcRYGate(q, -0.7140177619482841, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9015224107563302, 4);
  sqcRYGate(q, 0.5150846884878881, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1333870025328805, 5);
  sqcRYGate(q, 1.710886007103094, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.10268317046617259, 5);
  sqcRYGate(q, -3.1191600531964476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8317194463662982, 6);
  sqcRYGate(q, -0.943250910588004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8751416965492544, 6);
  sqcRYGate(q, -2.491827363360899, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.16795262353432872, 7);
  sqcRYGate(q, -2.4230037599054235, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.35213324738781987, 7);
  sqcRYGate(q, 0.08586042803380106, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6827487232723282, 8);
  sqcRYGate(q, -1.9709377194314666, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3884909218344754, 8);
  sqcRYGate(q, 2.9226033791568318, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0874893004745694, 9);
  sqcRYGate(q, 3.0930315426196877, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5280378238473187, 9);
  sqcRYGate(q, -1.2617965453328779, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4723604661755383, 10);
  sqcRYGate(q, -2.6321796253908905, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5882008043962497, 10);
  sqcRYGate(q, -2.629564882927157, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9448727846240637, 0);
  sqcRYGate(q, 1.5972354023380078, 1);
  sqcRYGate(q, 1.6312405657067632, 2);
  sqcRYGate(q, -1.275643401684614, 3);
  sqcRYGate(q, -1.3961808589268914, 4);
  sqcRYGate(q, 2.441038309210353, 5);
  sqcRYGate(q, 2.7166263789165486, 6);
  sqcRYGate(q, -1.9109708629344904, 7);
  sqcRYGate(q, -1.6361871043954543, 8);
  sqcRYGate(q, -1.5137521482704566, 9);
  sqcRYGate(q, 1.5662041552191799, 10);
  sqcRYGate(q, -1.5645837846645012, 11);

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
