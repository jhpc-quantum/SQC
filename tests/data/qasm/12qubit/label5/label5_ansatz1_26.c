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

  sqcRYGate(q, 0.9306238285413708, 0);
  sqcRZGate(q, 1.512427929530876, 0);
  sqcRYGate(q, 1.4775885826510127, 1);
  sqcRZGate(q, -0.1192508387759273, 1);
  sqcRYGate(q, 1.468621049831902, 2);
  sqcRZGate(q, -0.23552002744284672, 2);
  sqcRYGate(q, -1.6762088264039954, 3);
  sqcRZGate(q, 0.03501316166234503, 3);
  sqcRYGate(q, -0.5311052991154694, 4);
  sqcRZGate(q, -1.2950842397646083, 4);
  sqcRYGate(q, -0.012332985179600575, 5);
  sqcRZGate(q, 1.5521937271723933, 5);
  sqcRYGate(q, 1.6437296841473263, 6);
  sqcRZGate(q, 0.9772951733292965, 6);
  sqcRYGate(q, 3.0528434149091077, 7);
  sqcRZGate(q, 0.06559157744035136, 7);
  sqcRYGate(q, 1.0306391214082846, 8);
  sqcRZGate(q, 0.2297414575830994, 8);
  sqcRYGate(q, 1.0515126644919779, 9);
  sqcRZGate(q, 1.4248591765158676, 9);
  sqcRYGate(q, -2.4365904062696764, 10);
  sqcRZGate(q, 0.479232306637817, 10);
  sqcRYGate(q, 0.11664291374040563, 11);
  sqcRZGate(q, -1.2302333216852492, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.414177795024342, 0);
  sqcRZGate(q, -1.8486699698020692, 0);
  sqcRYGate(q, -2.065357225038187, 1);
  sqcRZGate(q, -2.978794934145109, 1);
  sqcRYGate(q, 1.7353228906314229, 2);
  sqcRZGate(q, -2.135269089911987, 2);
  sqcRYGate(q, -2.7900991681906624, 3);
  sqcRZGate(q, 1.119155468062554, 3);
  sqcRYGate(q, 2.432528393633111, 4);
  sqcRZGate(q, 0.5136970127606615, 4);
  sqcRYGate(q, 3.1372601306804557, 5);
  sqcRZGate(q, 2.5177015164460497, 5);
  sqcRYGate(q, -1.540573863147053, 6);
  sqcRZGate(q, -0.93351632040243, 6);
  sqcRYGate(q, 1.1165637103479904, 7);
  sqcRZGate(q, 2.3316235034197423, 7);
  sqcRYGate(q, -0.38784162997283556, 8);
  sqcRZGate(q, 3.0234949570714904, 8);
  sqcRYGate(q, -0.9653742072970036, 9);
  sqcRZGate(q, 1.3295310905841198, 9);
  sqcRYGate(q, 0.9859252278677317, 10);
  sqcRZGate(q, -1.5240934631893195, 10);
  sqcRYGate(q, -2.769535163450569, 11);
  sqcRZGate(q, 2.5288963144861056, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.411860547225942, 0);
  sqcRZGate(q, -2.156952438314242, 0);
  sqcRYGate(q, -1.9384159995216754, 1);
  sqcRZGate(q, -0.868123782115716, 1);
  sqcRYGate(q, -1.6853274331728212, 2);
  sqcRZGate(q, 0.19537918342437363, 2);
  sqcRYGate(q, 2.6884034981968843, 3);
  sqcRZGate(q, 0.8317884363755934, 3);
  sqcRYGate(q, -1.4388643500522094, 4);
  sqcRZGate(q, -0.43481370787665613, 4);
  sqcRYGate(q, 0.006521487352655342, 5);
  sqcRZGate(q, 0.6800255622905914, 5);
  sqcRYGate(q, 0.08424623484916058, 6);
  sqcRZGate(q, 2.9037188481440275, 6);
  sqcRYGate(q, -2.1515141636976436, 7);
  sqcRZGate(q, -0.6241704006009616, 7);
  sqcRYGate(q, 2.24337711675411, 8);
  sqcRZGate(q, -1.9363250646049124, 8);
  sqcRYGate(q, -0.1257933458118945, 9);
  sqcRZGate(q, 2.0340393986939587, 9);
  sqcRYGate(q, -2.2167742818459906, 10);
  sqcRZGate(q, -1.6459724346995221, 10);
  sqcRYGate(q, -1.760199493397341, 11);
  sqcRZGate(q, 2.9069539952320405, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.4173160462174587, 0);
  sqcRZGate(q, 0.9614288293613784, 0);
  sqcRYGate(q, -0.5737908862097233, 1);
  sqcRZGate(q, 0.6225879691536793, 1);
  sqcRYGate(q, -2.4104407803921557, 2);
  sqcRZGate(q, -3.043184880508639, 2);
  sqcRYGate(q, -1.2950009764543196, 3);
  sqcRZGate(q, -2.340777612790808, 3);
  sqcRYGate(q, -0.5022420458541763, 4);
  sqcRZGate(q, 1.3286085976345403, 4);
  sqcRYGate(q, 3.1390691383983267, 5);
  sqcRZGate(q, 2.0955571078086956, 5);
  sqcRYGate(q, -0.4444436407957045, 6);
  sqcRZGate(q, 0.09185654337082991, 6);
  sqcRYGate(q, -1.8958708073568442, 7);
  sqcRZGate(q, 0.1490951799997697, 7);
  sqcRYGate(q, -2.3513591814671573, 8);
  sqcRZGate(q, 0.8634848111939768, 8);
  sqcRYGate(q, -2.45480777946838, 9);
  sqcRZGate(q, -1.9301198766101777, 9);
  sqcRYGate(q, 2.3527650567819225, 10);
  sqcRZGate(q, -1.4111576274004571, 10);
  sqcRYGate(q, 1.2635068670116365, 11);
  sqcRZGate(q, 0.0895073650411487, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5608167525247172, 0);
  sqcRZGate(q, 2.8917916772816166, 0);
  sqcRYGate(q, 0.7964538069784366, 1);
  sqcRZGate(q, -2.9025031858464208, 1);
  sqcRYGate(q, 1.380808616539263, 2);
  sqcRZGate(q, 3.05372560128479, 2);
  sqcRYGate(q, 1.0258525849949214, 3);
  sqcRZGate(q, 0.6389643092610395, 3);
  sqcRYGate(q, 0.13141270213330447, 4);
  sqcRZGate(q, 0.7819077911023813, 4);
  sqcRYGate(q, -1.562474985320957, 5);
  sqcRZGate(q, 1.183983574799631, 5);
  sqcRYGate(q, 0.25562518256325906, 6);
  sqcRZGate(q, 2.3470439637928266, 6);
  sqcRYGate(q, -1.9215889817142555, 7);
  sqcRZGate(q, -0.445505193515338, 7);
  sqcRYGate(q, 2.2814985686936278, 8);
  sqcRZGate(q, 0.8621167051288771, 8);
  sqcRYGate(q, -1.4981930494214983, 9);
  sqcRZGate(q, -2.976339472457412, 9);
  sqcRYGate(q, 1.9078009977423163, 10);
  sqcRZGate(q, 2.069119339699223, 10);
  sqcRYGate(q, 2.0123911194201334, 11);
  sqcRZGate(q, 0.7599765140153563, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.2027691622379315, 0);
  sqcRZGate(q, 1.1589247952332786, 0);
  sqcRYGate(q, -2.415673882849291, 1);
  sqcRZGate(q, 2.3919281024780332, 1);
  sqcRYGate(q, -0.14720617685263993, 2);
  sqcRZGate(q, 0.9580176778339933, 2);
  sqcRYGate(q, -1.5533181189852936, 3);
  sqcRZGate(q, -2.443413023608032, 3);
  sqcRYGate(q, -0.0004844704264016837, 4);
  sqcRZGate(q, -2.127373018080897, 4);
  sqcRYGate(q, 3.1304159967598166, 5);
  sqcRZGate(q, -0.415352788427648, 5);
  sqcRYGate(q, 0.006795166451121628, 6);
  sqcRZGate(q, -2.832711562975018, 6);
  sqcRYGate(q, 2.0667830281500637, 7);
  sqcRZGate(q, 2.9833041238593254, 7);
  sqcRYGate(q, -2.3708785433332014, 8);
  sqcRZGate(q, 3.105129004565889, 8);
  sqcRYGate(q, -1.0138988369632458, 9);
  sqcRZGate(q, -0.26671484278327334, 9);
  sqcRYGate(q, -1.9067040440173653, 10);
  sqcRZGate(q, -1.5955915013763553, 10);
  sqcRYGate(q, 0.5270479700850582, 11);
  sqcRZGate(q, -2.664417052717872, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.916976585265937, 0);
  sqcRZGate(q, -2.2713973348748815, 0);
  sqcRYGate(q, 1.5638280280896897, 1);
  sqcRZGate(q, -0.5640640452242706, 1);
  sqcRYGate(q, -1.330776464590681, 2);
  sqcRZGate(q, -1.182354536224735, 2);
  sqcRYGate(q, 3.1333427406885286, 3);
  sqcRZGate(q, 0.9743527893340027, 3);
  sqcRYGate(q, -1.0308611906431953, 4);
  sqcRZGate(q, 2.975024448032925, 4);
  sqcRYGate(q, 2.9768195086245495, 5);
  sqcRZGate(q, -0.01775300423826387, 5);
  sqcRYGate(q, 2.420851377537513, 6);
  sqcRZGate(q, 2.910295270937186, 6);
  sqcRYGate(q, 2.22404009721586, 7);
  sqcRZGate(q, 0.14923571962811058, 7);
  sqcRYGate(q, 2.6786870578876307, 8);
  sqcRZGate(q, 3.094576843169908, 8);
  sqcRYGate(q, 1.3551287652618855, 9);
  sqcRZGate(q, -2.60159119922723, 9);
  sqcRYGate(q, -1.8187440473172094, 10);
  sqcRZGate(q, 0.10397142653119894, 10);
  sqcRYGate(q, 0.24918161725085802, 11);
  sqcRZGate(q, -2.3798001359795165, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.87263602368292, 0);
  sqcRZGate(q, -2.7833110383381703, 0);
  sqcRYGate(q, 2.5423176902488613, 1);
  sqcRZGate(q, 2.1086903275797146, 1);
  sqcRYGate(q, -0.17224128122099547, 2);
  sqcRZGate(q, -2.575540697687204, 2);
  sqcRYGate(q, 1.4005416282306762, 3);
  sqcRZGate(q, -0.7191298814945251, 3);
  sqcRYGate(q, -0.0028509572905818514, 4);
  sqcRZGate(q, -0.11184707021252598, 4);
  sqcRYGate(q, -1.576832688341459, 5);
  sqcRZGate(q, 2.334062195714127, 5);
  sqcRYGate(q, -3.1324245881698443, 6);
  sqcRZGate(q, -0.3852871803507626, 6);
  sqcRYGate(q, 2.777726766025946, 7);
  sqcRZGate(q, 0.1467079206380584, 7);
  sqcRYGate(q, 1.9149286944859614, 8);
  sqcRZGate(q, 0.001113288085566263, 8);
  sqcRYGate(q, 0.3294128280967783, 9);
  sqcRZGate(q, 2.965675382244072, 9);
  sqcRYGate(q, -0.4184674129241559, 10);
  sqcRZGate(q, 2.096696296665794, 10);
  sqcRYGate(q, -1.7008034101687644, 11);
  sqcRZGate(q, 3.0382770509683183, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7138167320351274, 0);
  sqcRZGate(q, 2.3205899607387215, 0);
  sqcRYGate(q, -2.153351594030286, 1);
  sqcRZGate(q, -0.6911835645489077, 1);
  sqcRYGate(q, 1.2762934868871196, 2);
  sqcRZGate(q, -1.45268043683311, 2);
  sqcRYGate(q, -2.77310274965402, 3);
  sqcRZGate(q, -1.669644632271483, 3);
  sqcRYGate(q, 1.5878981102787706, 4);
  sqcRZGate(q, -0.9901583755165397, 4);
  sqcRYGate(q, 0.029628187649648474, 5);
  sqcRZGate(q, -0.0652816060315922, 5);
  sqcRYGate(q, 1.5676332575964889, 6);
  sqcRZGate(q, 3.099746966474952, 6);
  sqcRYGate(q, 1.3375130050755422, 7);
  sqcRZGate(q, -1.998336574398409, 7);
  sqcRYGate(q, -0.49485519116494275, 8);
  sqcRZGate(q, 0.36771826301734606, 8);
  sqcRYGate(q, -1.8698987619198506, 9);
  sqcRZGate(q, 0.7975012145458935, 9);
  sqcRYGate(q, -0.7569983691147594, 10);
  sqcRZGate(q, -1.1943173584924356, 10);
  sqcRYGate(q, 2.1512453953174875, 11);
  sqcRZGate(q, 0.37189615829892014, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.4849441117850968, 0);
  sqcRZGate(q, -1.4293161050264023, 0);
  sqcRYGate(q, 2.1370479877678776, 1);
  sqcRZGate(q, -1.9154434060366574, 1);
  sqcRYGate(q, -0.02727655158663378, 2);
  sqcRZGate(q, -1.4237296093906413, 2);
  sqcRYGate(q, -0.01047913641109588, 3);
  sqcRZGate(q, -0.19172925083827186, 3);
  sqcRYGate(q, 3.1390698512349253, 4);
  sqcRZGate(q, -0.014175527486982564, 4);
  sqcRYGate(q, -1.9246976051612128, 5);
  sqcRZGate(q, 1.180939698662826, 5);
  sqcRYGate(q, 0.2082779869213138, 6);
  sqcRZGate(q, -1.8623956988235948, 6);
  sqcRYGate(q, -1.51764040024144, 7);
  sqcRZGate(q, -0.009582515278973245, 7);
  sqcRYGate(q, 1.0306151674756652, 8);
  sqcRZGate(q, -2.3454487559942074, 8);
  sqcRYGate(q, 0.08344555382581031, 9);
  sqcRZGate(q, 2.442496525799735, 9);
  sqcRYGate(q, 0.15876864676373792, 10);
  sqcRZGate(q, 2.923456047726543, 10);
  sqcRYGate(q, -1.4591613751664303, 11);
  sqcRZGate(q, -0.9155355329379679, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.7302277831898705, 0);
  sqcRZGate(q, -1.0471393993459714, 0);
  sqcRYGate(q, 1.8232727400584283, 1);
  sqcRZGate(q, -1.165827564836901, 1);
  sqcRYGate(q, -0.4449479061299675, 2);
  sqcRZGate(q, 2.727662131179425, 2);
  sqcRYGate(q, -1.559129690308586, 3);
  sqcRZGate(q, 2.2447464901098235, 3);
  sqcRYGate(q, -0.005793249394111371, 4);
  sqcRZGate(q, 2.161711578146597, 4);
  sqcRYGate(q, 1.5801918135256348, 5);
  sqcRZGate(q, 1.6741429161775192, 5);
  sqcRYGate(q, -0.004707487906139285, 6);
  sqcRZGate(q, -2.8102768238572473, 6);
  sqcRYGate(q, 3.0843140771782167, 7);
  sqcRZGate(q, -0.009389517514716818, 7);
  sqcRYGate(q, 3.1406550563690288, 8);
  sqcRZGate(q, -2.1576254752224338, 8);
  sqcRYGate(q, 2.171366204903267, 9);
  sqcRZGate(q, -2.046517122964276, 9);
  sqcRYGate(q, 1.6700627817932936, 10);
  sqcRZGate(q, -2.839398564934217, 10);
  sqcRYGate(q, -0.5632742324818593, 11);
  sqcRZGate(q, 1.5204329881942338, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.125356040364439, 0);
  sqcRZGate(q, 2.279966098438307, 0);
  sqcRYGate(q, -1.7046405170949797, 1);
  sqcRZGate(q, -0.5748292555459065, 1);
  sqcRYGate(q, -0.9589607385842118, 2);
  sqcRZGate(q, -0.22035509949405246, 2);
  sqcRYGate(q, -0.002501021867934661, 3);
  sqcRZGate(q, -1.5431656138241046, 3);
  sqcRYGate(q, -0.003584189014969857, 4);
  sqcRZGate(q, -1.2030597032311634, 4);
  sqcRYGate(q, 2.2780277084125067, 5);
  sqcRZGate(q, -2.1917906444733606, 5);
  sqcRYGate(q, -1.5921559832221857, 6);
  sqcRZGate(q, -1.4695504124756553, 6);
  sqcRYGate(q, -1.5150322954514452, 7);
  sqcRZGate(q, -0.6579476098991188, 7);
  sqcRYGate(q, 1.8909333627644713, 8);
  sqcRZGate(q, 0.1859123688059823, 8);
  sqcRYGate(q, -2.9281202526753543, 9);
  sqcRZGate(q, -0.7195106918186394, 9);
  sqcRYGate(q, 2.4737923687972407, 10);
  sqcRZGate(q, 2.521948882559411, 10);
  sqcRYGate(q, -2.778560746031439, 11);
  sqcRZGate(q, 1.9068361957724678, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.868659830051189, 0);
  sqcRZGate(q, 2.3816741305893028, 0);
  sqcRYGate(q, 1.7353190473151225, 1);
  sqcRZGate(q, 0.5084927786473744, 1);
  sqcRYGate(q, 0.08288987562514259, 2);
  sqcRZGate(q, 0.6639981201093111, 2);
  sqcRYGate(q, -2.3645860506564724, 3);
  sqcRZGate(q, 2.4895707048667077, 3);
  sqcRYGate(q, -0.003910385884617007, 4);
  sqcRZGate(q, 1.6943905351446473, 4);
  sqcRYGate(q, -0.025999779156619773, 5);
  sqcRZGate(q, -0.8482282714900631, 5);
  sqcRYGate(q, -0.0330429275892099, 6);
  sqcRZGate(q, 1.2198804338087033, 6);
  sqcRYGate(q, -1.5806499636299813, 7);
  sqcRZGate(q, 1.1636310729947263, 7);
  sqcRYGate(q, -0.5107212350234444, 8);
  sqcRZGate(q, -2.0500029905490735, 8);
  sqcRYGate(q, -2.2367493749192056, 9);
  sqcRZGate(q, -2.106595624888512, 9);
  sqcRYGate(q, -1.045339814483917, 10);
  sqcRZGate(q, 1.7602739702705774, 10);
  sqcRYGate(q, 0.22362483629345586, 11);
  sqcRZGate(q, -2.1463145158367194, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.648445118658311, 0);
  sqcRZGate(q, -1.9015645343310281, 0);
  sqcRYGate(q, 1.1024918090963487, 1);
  sqcRZGate(q, 0.3386287453668349, 1);
  sqcRYGate(q, -2.775755627301231, 2);
  sqcRZGate(q, 1.1873815028835777, 2);
  sqcRYGate(q, 0.8159943790419986, 3);
  sqcRZGate(q, 2.913937168588909, 3);
  sqcRYGate(q, -0.13916890926817554, 4);
  sqcRZGate(q, -1.9430446278937952, 4);
  sqcRYGate(q, -0.06723458989218845, 5);
  sqcRZGate(q, 0.34993661041655466, 5);
  sqcRYGate(q, 2.289571684288242, 6);
  sqcRZGate(q, 3.062672798974688, 6);
  sqcRYGate(q, 1.5666489739965217, 7);
  sqcRZGate(q, 0.03074794123059199, 7);
  sqcRYGate(q, 1.9737086807746902, 8);
  sqcRZGate(q, -1.0259036382275866, 8);
  sqcRYGate(q, 2.7259747460578088, 9);
  sqcRZGate(q, 3.119579104183425, 9);
  sqcRYGate(q, -2.041267381504453, 10);
  sqcRZGate(q, -0.7179506217410885, 10);
  sqcRYGate(q, -0.14479670062242303, 11);
  sqcRZGate(q, -2.6735435124711784, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.418257021015023, 0);
  sqcRZGate(q, 1.9966472602127485, 0);
  sqcRYGate(q, 1.2299228913530325, 1);
  sqcRZGate(q, -0.8495934178352371, 1);
  sqcRYGate(q, -3.1021453726378962, 2);
  sqcRZGate(q, 2.530596192448194, 2);
  sqcRYGate(q, -0.02651921982991645, 3);
  sqcRZGate(q, -1.5627040794530584, 3);
  sqcRYGate(q, 3.1403135374639257, 4);
  sqcRZGate(q, 1.6919996654228149, 4);
  sqcRYGate(q, -0.005097882670598628, 5);
  sqcRZGate(q, -1.345223525101951, 5);
  sqcRYGate(q, 3.0897588431220777, 6);
  sqcRZGate(q, -3.04672218487924, 6);
  sqcRYGate(q, -0.014188392559933758, 7);
  sqcRZGate(q, 1.557543568043239, 7);
  sqcRYGate(q, 1.5715255077396786, 8);
  sqcRZGate(q, -3.1383648101206933, 8);
  sqcRYGate(q, -0.02404517284734009, 9);
  sqcRZGate(q, -1.7314525987001508, 9);
  sqcRYGate(q, 1.2482241945520403, 10);
  sqcRZGate(q, 1.761351016597664, 10);
  sqcRYGate(q, 0.1857889937128112, 11);
  sqcRZGate(q, 0.585339096254569, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4719731681500186, 0);
  sqcRZGate(q, -0.3236428714291043, 0);
  sqcRYGate(q, -0.8341302775729725, 1);
  sqcRZGate(q, 1.4545485959136517, 1);
  sqcRYGate(q, 2.5259741191496716, 2);
  sqcRZGate(q, -2.5906743100844682, 2);
  sqcRYGate(q, -1.6894848417992192, 3);
  sqcRZGate(q, -0.39254882460152446, 3);
  sqcRYGate(q, 1.2988236769970922, 4);
  sqcRZGate(q, -0.07685158614234311, 4);
  sqcRYGate(q, -1.115744617217822, 5);
  sqcRZGate(q, 2.589957964588014, 5);
  sqcRYGate(q, -1.5159104467132014, 6);
  sqcRZGate(q, -0.1788588682880417, 6);
  sqcRYGate(q, -1.5825351008375808, 7);
  sqcRZGate(q, 1.7220404182101605, 7);
  sqcRYGate(q, -2.45506874494641, 8);
  sqcRZGate(q, 2.2516287624989264, 8);
  sqcRYGate(q, -1.9337041848967442, 9);
  sqcRZGate(q, 3.0626010558463768, 9);
  sqcRYGate(q, -2.0519064192840726, 10);
  sqcRZGate(q, 2.1547883563872707, 10);
  sqcRYGate(q, -1.958544708191844, 11);
  sqcRZGate(q, 1.0343318872500316, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.9347077325481914, 0);
  sqcRZGate(q, -1.4578969517382454, 0);
  sqcRYGate(q, -0.5046622586855252, 1);
  sqcRZGate(q, 1.9610145696941599, 1);
  sqcRYGate(q, -2.9845170815765805, 2);
  sqcRZGate(q, -1.0486156115885672, 2);
  sqcRYGate(q, 2.320021224270523, 3);
  sqcRZGate(q, -1.719518632834828, 3);
  sqcRYGate(q, -0.127022506735063, 4);
  sqcRZGate(q, -1.3108779123274692, 4);
  sqcRYGate(q, -0.00013691266444744403, 5);
  sqcRZGate(q, 1.995336159216494, 5);
  sqcRYGate(q, -1.7377117803118092, 6);
  sqcRZGate(q, 0.002862718121564521, 6);
  sqcRYGate(q, 1.5740327196926174, 7);
  sqcRZGate(q, 1.2531421062636252, 7);
  sqcRYGate(q, 3.1392971098231954, 8);
  sqcRZGate(q, -0.2979762817851688, 8);
  sqcRYGate(q, 3.129561806473703, 9);
  sqcRZGate(q, 3.061728819038868, 9);
  sqcRYGate(q, 0.0007434801581247542, 10);
  sqcRZGate(q, 0.4910244877254622, 10);
  sqcRYGate(q, -1.9451299486875175, 11);
  sqcRZGate(q, 1.4851601714912777, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.0025541449392903425, 0);
  sqcRZGate(q, 2.9444183457213415, 0);
  sqcRYGate(q, 0.10768268152701845, 1);
  sqcRZGate(q, 1.088257402350219, 1);
  sqcRYGate(q, 3.140730786935818, 2);
  sqcRZGate(q, 1.5538112960355925, 2);
  sqcRYGate(q, 3.0563975297071257, 3);
  sqcRZGate(q, 1.7054145346647926, 3);
  sqcRYGate(q, -2.643704776614329, 4);
  sqcRZGate(q, 1.3717587152418647, 4);
  sqcRYGate(q, 3.1306561318045625, 5);
  sqcRZGate(q, 0.28714631796538287, 5);
  sqcRYGate(q, 1.5748294370578042, 6);
  sqcRZGate(q, -1.9829202236814032, 6);
  sqcRYGate(q, 0.04200799525226491, 7);
  sqcRZGate(q, -2.825073888434239, 7);
  sqcRYGate(q, -0.005136562825596158, 8);
  sqcRZGate(q, -0.595447787335293, 8);
  sqcRYGate(q, -1.9313516515337437, 9);
  sqcRZGate(q, -0.5283790033737424, 9);
  sqcRYGate(q, -0.7529447153061009, 10);
  sqcRZGate(q, -2.443551127768605, 10);
  sqcRYGate(q, 1.1449319570528687, 11);
  sqcRZGate(q, -2.4633361263627713, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.1703405695846325, 0);
  sqcRZGate(q, 1.2840192014650134, 0);
  sqcRYGate(q, -1.5312973277372448, 1);
  sqcRZGate(q, -0.0812024169272824, 1);
  sqcRYGate(q, -0.08396045875073543, 2);
  sqcRZGate(q, -1.8056700757925161, 2);
  sqcRYGate(q, 2.7180710629391784, 3);
  sqcRZGate(q, 2.93784914362268, 3);
  sqcRYGate(q, 3.1410264878117142, 4);
  sqcRZGate(q, 1.7516152463633259, 4);
  sqcRYGate(q, -0.0004644304617925715, 5);
  sqcRZGate(q, -0.22580161774457522, 5);
  sqcRYGate(q, -2.7210997450846515, 6);
  sqcRZGate(q, 1.2556002412275549, 6);
  sqcRYGate(q, 1.5734648309245751, 7);
  sqcRZGate(q, -2.6768557887867335, 7);
  sqcRYGate(q, -2.7246356528014415, 8);
  sqcRZGate(q, 0.0006663779877765439, 8);
  sqcRYGate(q, -3.087650787577472, 9);
  sqcRZGate(q, -0.6077910961229548, 9);
  sqcRYGate(q, 1.175426188749364, 10);
  sqcRZGate(q, -2.2877161981872587, 10);
  sqcRYGate(q, 2.8161319732930066, 11);
  sqcRZGate(q, -1.0720323090085524, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.6036069465974196, 0);
  sqcRZGate(q, -2.583199014549137, 0);
  sqcRYGate(q, 2.938165120788011, 1);
  sqcRZGate(q, -0.8927022548116446, 1);
  sqcRYGate(q, 0.007834417167611204, 2);
  sqcRZGate(q, -2.9558922542065345, 2);
  sqcRYGate(q, 2.091602691548835, 3);
  sqcRZGate(q, -0.8908210510101454, 3);
  sqcRYGate(q, 0.4034665108901043, 4);
  sqcRZGate(q, 1.3126498448310375, 4);
  sqcRYGate(q, 0.0010907471384934385, 5);
  sqcRZGate(q, 2.0998875701715756, 5);
  sqcRYGate(q, 1.2353177902118184, 6);
  sqcRZGate(q, 3.035454477582472, 6);
  sqcRYGate(q, -0.09950749811257235, 7);
  sqcRZGate(q, 2.438126490356515, 7);
  sqcRYGate(q, -1.5801811718208578, 8);
  sqcRZGate(q, -2.3813004240815308, 8);
  sqcRYGate(q, 0.003377726978373019, 9);
  sqcRZGate(q, 0.22986028342798576, 9);
  sqcRYGate(q, 0.49242444957571246, 10);
  sqcRZGate(q, 2.2017627019402886, 10);
  sqcRYGate(q, 1.6085919020338917, 11);
  sqcRZGate(q, 2.806335638257062, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.013661055332726, 0);
  sqcRZGate(q, 1.3777113819232198, 0);
  sqcRYGate(q, 1.2047057596272004, 1);
  sqcRZGate(q, -1.5312467548574762, 1);
  sqcRYGate(q, 0.002755183426984331, 2);
  sqcRZGate(q, -1.5133183583317784, 2);
  sqcRYGate(q, -3.1407528512437386, 3);
  sqcRZGate(q, -0.1558606788581749, 3);
  sqcRYGate(q, 3.138584697778871, 4);
  sqcRZGate(q, 2.8308601135825113, 4);
  sqcRYGate(q, 3.1227880320838612, 5);
  sqcRZGate(q, 2.2335658319841345, 5);
  sqcRYGate(q, 1.2537782056522637, 6);
  sqcRZGate(q, 1.863734636658269, 6);
  sqcRYGate(q, 3.138002216243567, 7);
  sqcRZGate(q, 2.599283922672498, 7);
  sqcRYGate(q, 0.0010966816649089495, 8);
  sqcRZGate(q, -2.5189996188407995, 8);
  sqcRYGate(q, 1.6326323031652468, 9);
  sqcRZGate(q, 1.7532445180512695, 9);
  sqcRYGate(q, 1.3605204993396043, 10);
  sqcRZGate(q, -1.3360376312036457, 10);
  sqcRYGate(q, 0.6426709071918365, 11);
  sqcRZGate(q, -0.21366705016238746, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.620357828496539, 0);
  sqcRZGate(q, -1.539957119059447, 0);
  sqcRYGate(q, -0.21601960183549815, 1);
  sqcRZGate(q, 2.4060649949006665, 1);
  sqcRYGate(q, 0.016949370089194282, 2);
  sqcRZGate(q, 2.6668820959595028, 2);
  sqcRYGate(q, -0.6712479402992129, 3);
  sqcRZGate(q, 1.701302404800533, 3);
  sqcRYGate(q, -1.1309514308331234, 4);
  sqcRZGate(q, 0.5895726495294868, 4);
  sqcRYGate(q, 2.354658738118161, 5);
  sqcRZGate(q, 2.9034250890696676, 5);
  sqcRYGate(q, -2.143890664254365, 6);
  sqcRZGate(q, -2.547840870774176, 6);
  sqcRYGate(q, -0.5089852678303265, 7);
  sqcRZGate(q, -2.982785874765274, 7);
  sqcRYGate(q, 1.521497271758749, 8);
  sqcRZGate(q, -2.815060184573803, 8);
  sqcRYGate(q, 0.0006313593529583796, 9);
  sqcRZGate(q, 2.5478929087730005, 9);
  sqcRYGate(q, 1.6204290243139106, 10);
  sqcRZGate(q, -1.4078663006097738, 10);
  sqcRYGate(q, 0.8696090488081456, 11);
  sqcRZGate(q, 1.5299767217248705, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.7599713696028374, 0);
  sqcRZGate(q, -2.0206083656536924, 0);
  sqcRYGate(q, 2.946137243080388, 1);
  sqcRZGate(q, -0.41329339865762965, 1);
  sqcRYGate(q, 0.000474039926062147, 2);
  sqcRZGate(q, -2.0907877663222356, 2);
  sqcRYGate(q, -0.1862609910911477, 3);
  sqcRZGate(q, -1.312814893213296, 3);
  sqcRYGate(q, -3.1296646644286827, 4);
  sqcRZGate(q, 1.9675701596480826, 4);
  sqcRYGate(q, -0.007652857091898632, 5);
  sqcRZGate(q, 0.9086978861014652, 5);
  sqcRYGate(q, 0.0074031248530515015, 6);
  sqcRZGate(q, 2.9462637696624348, 6);
  sqcRYGate(q, 3.1286260342703263, 7);
  sqcRZGate(q, 1.6000962872006204, 7);
  sqcRYGate(q, 3.140364039946189, 8);
  sqcRZGate(q, -0.9917365988111221, 8);
  sqcRYGate(q, 3.141235381696372, 9);
  sqcRZGate(q, -0.30555622795855364, 9);
  sqcRYGate(q, -1.7994382592383764, 10);
  sqcRZGate(q, -0.9437721080441275, 10);
  sqcRYGate(q, -0.8936573699247566, 11);
  sqcRZGate(q, 3.065738369004262, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.5546986170011263, 0);
  sqcRZGate(q, 1.4138063218814554, 0);
  sqcRYGate(q, -0.9362985435816746, 1);
  sqcRZGate(q, 1.6703921503824353, 1);
  sqcRYGate(q, 0.007491696029513051, 2);
  sqcRZGate(q, 1.6946978390266858, 2);
  sqcRYGate(q, -0.4139100068827877, 3);
  sqcRZGate(q, -1.228381051352757, 3);
  sqcRYGate(q, 2.177281382780607, 4);
  sqcRZGate(q, -0.8581059937546581, 4);
  sqcRYGate(q, 2.2029170637227535, 5);
  sqcRZGate(q, 2.015028386308568, 5);
  sqcRYGate(q, 2.9021659884845654, 6);
  sqcRZGate(q, -1.3893257342472618, 6);
  sqcRYGate(q, 2.8421771624282925, 7);
  sqcRZGate(q, -0.32025586112266247, 7);
  sqcRYGate(q, -0.19482481546217745, 8);
  sqcRZGate(q, -1.5113647250766622, 8);
  sqcRYGate(q, 1.5720830330239608, 9);
  sqcRZGate(q, -3.0108682923659726, 9);
  sqcRYGate(q, 0.0788639964238778, 10);
  sqcRZGate(q, 2.9557271463847297, 10);
  sqcRYGate(q, 1.5819982808362898, 11);
  sqcRZGate(q, -1.1298102550284999, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.3321139374397217, 0);
  sqcRZGate(q, 2.176558582382176, 0);
  sqcRYGate(q, -0.13675616390455847, 1);
  sqcRZGate(q, -1.8080035464663107, 1);
  sqcRYGate(q, 3.1406315592592815, 2);
  sqcRZGate(q, -0.7656242090234775, 2);
  sqcRYGate(q, 0.258383085844498, 3);
  sqcRZGate(q, 2.5174995965997975, 3);
  sqcRYGate(q, 3.1384527820693986, 4);
  sqcRZGate(q, 2.7729361700200457, 4);
  sqcRYGate(q, -0.5182280136966435, 5);
  sqcRZGate(q, 3.136828900282454, 5);
  sqcRYGate(q, -1.5594779708629156, 6);
  sqcRZGate(q, -3.137779236019607, 6);
  sqcRYGate(q, -1.8475786635525884, 7);
  sqcRZGate(q, -2.4109310119740504, 7);
  sqcRYGate(q, 0.6606792313193521, 8);
  sqcRZGate(q, -1.331352638843522, 8);
  sqcRYGate(q, -0.0011929473886417212, 9);
  sqcRZGate(q, 1.4399670586818973, 9);
  sqcRYGate(q, -1.5688820740190614, 10);
  sqcRZGate(q, -2.021200878198066, 10);
  sqcRYGate(q, -1.4298345171215212, 11);
  sqcRZGate(q, -0.9471295126330562, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.447056149568357, 0);
  sqcRZGate(q, 1.2353494637577125, 0);
  sqcRYGate(q, -1.1391416814895203, 1);
  sqcRZGate(q, -0.7509907699377973, 1);
  sqcRYGate(q, -0.007448648199396317, 2);
  sqcRZGate(q, 1.9987842423212228, 2);
  sqcRYGate(q, -2.0110496232212096, 3);
  sqcRZGate(q, 2.6605282149527403, 3);
  sqcRYGate(q, 1.5662108775307875, 4);
  sqcRZGate(q, -0.0013733841603125504, 4);
  sqcRYGate(q, -1.8787882756390557, 5);
  sqcRZGate(q, 3.1408724129714947, 5);
  sqcRYGate(q, -1.5703262820315753, 6);
  sqcRZGate(q, -0.14551920900587148, 6);
  sqcRYGate(q, 1.573507813704199, 7);
  sqcRZGate(q, 3.1370702636827055, 7);
  sqcRYGate(q, 0.000330509157207004, 8);
  sqcRZGate(q, -1.8141405113611242, 8);
  sqcRYGate(q, 1.5777019639784164, 9);
  sqcRZGate(q, -1.8839267708588892, 9);
  sqcRYGate(q, -1.3997282399300353, 10);
  sqcRZGate(q, 1.2296385431353882, 10);
  sqcRYGate(q, -1.5708492800353044, 11);
  sqcRZGate(q, -2.517778296649391, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.03933544232521857, 0);
  sqcRZGate(q, 0.6229084838425529, 0);
  sqcRYGate(q, -0.22913339267369892, 1);
  sqcRZGate(q, 0.06457544728861007, 1);
  sqcRYGate(q, 1.5738505185702465, 2);
  sqcRZGate(q, 3.135248648370116, 2);
  sqcRYGate(q, 1.5710709231851563, 3);
  sqcRZGate(q, -3.1415538428759917, 3);
  sqcRYGate(q, -1.8593405991295406, 4);
  sqcRZGate(q, -0.0019303346224255336, 4);
  sqcRYGate(q, 1.5694312595081203, 5);
  sqcRZGate(q, 3.13792412718222, 5);
  sqcRYGate(q, 0.004384103675349138, 6);
  sqcRZGate(q, 2.36788036722972, 6);
  sqcRYGate(q, 0.488019435251962, 7);
  sqcRZGate(q, 1.5639200276229848, 7);
  sqcRYGate(q, 0.9700561248217081, 8);
  sqcRZGate(q, -1.5838403869206426, 8);
  sqcRYGate(q, -0.0028581886852032667, 9);
  sqcRZGate(q, 0.3331487393716044, 9);
  sqcRYGate(q, -0.6996133687631036, 10);
  sqcRZGate(q, -1.9738249940432722, 10);
  sqcRYGate(q, 0.0033804778471062022, 11);
  sqcRZGate(q, -1.3034944395405939, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.7843796450616178, 0);
  sqcRZGate(q, -2.533039432045199, 0);
  sqcRYGate(q, -1.5946861823844198, 1);
  sqcRZGate(q, -3.141190112374338, 1);
  sqcRYGate(q, 1.574378197967854, 2);
  sqcRZGate(q, 2.4033291330423023, 2);
  sqcRYGate(q, -0.876673725165027, 3);
  sqcRZGate(q, 3.1409866232213015, 3);
  sqcRYGate(q, 2.252053646193232, 4);
  sqcRZGate(q, 3.141186284944668, 4);
  sqcRYGate(q, 2.1323869792140258, 5);
  sqcRZGate(q, -1.8316255061183808, 5);
  sqcRYGate(q, 0.48165636436999043, 6);
  sqcRZGate(q, 2.464792692017282, 6);
  sqcRYGate(q, -1.5834642886368613, 7);
  sqcRZGate(q, 0.16720405548748735, 7);
  sqcRYGate(q, -1.4810494613402878, 8);
  sqcRZGate(q, -2.8994077690497533, 8);
  sqcRYGate(q, -1.6056603140062347, 9);
  sqcRZGate(q, 1.5549330673841606, 9);
  sqcRYGate(q, 1.753204336640098, 10);
  sqcRZGate(q, -2.8038736210245734, 10);
  sqcRYGate(q, 2.0389853574021233, 11);
  sqcRZGate(q, 2.0860595501622967, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.550459206840424, 0);
  sqcRZGate(q, -3.140149102473624, 0);
  sqcRYGate(q, 1.5713200215585923, 1);
  sqcRZGate(q, 1.4933358658445421, 1);
  sqcRYGate(q, -3.14120016266378, 2);
  sqcRZGate(q, 0.8329423437921445, 2);
  sqcRYGate(q, 1.5720938349267062, 3);
  sqcRZGate(q, 1.570842137464905, 3);
  sqcRYGate(q, -1.2549032383911438, 4);
  sqcRZGate(q, -1.570374013160553, 4);
  sqcRYGate(q, 3.138439184937654, 5);
  sqcRZGate(q, -0.25872376915363043, 5);
  sqcRYGate(q, -0.0007158061720687914, 6);
  sqcRZGate(q, 3.108792305657517, 6);
  sqcRYGate(q, 0.0026538206715043334, 7);
  sqcRZGate(q, 2.242561805211208, 7);
  sqcRYGate(q, -0.0005895428853737136, 8);
  sqcRZGate(q, 3.069297046518424, 8);
  sqcRYGate(q, 3.1098182303592106, 9);
  sqcRZGate(q, 1.1915506919729415, 9);
  sqcRYGate(q, -2.684709615954602e-05, 10);
  sqcRZGate(q, -1.5081274268105433, 10);
  sqcRYGate(q, 0.2755478016291848, 11);
  sqcRZGate(q, -2.0713164384787524, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5723266430662102, 0);
  sqcRZGate(q, -1.0670186478133405, 0);
  sqcRYGate(q, 1.6646582428807128, 1);
  sqcRZGate(q, -2.6516661700608375, 1);
  sqcRYGate(q, 1.5710769934794375, 2);
  sqcRZGate(q, -2.6462142520742704, 2);
  sqcRYGate(q, -1.5710941499984363, 3);
  sqcRZGate(q, 2.468600123985357, 3);
  sqcRYGate(q, 1.5707112055992862, 4);
  sqcRZGate(q, -2.64649873541203, 4);
  sqcRYGate(q, 1.5769787339207957, 5);
  sqcRZGate(q, -0.2936428226355864, 5);
  sqcRYGate(q, -1.1962194901608212, 6);
  sqcRZGate(q, -0.762651532131537, 6);
  sqcRYGate(q, 3.1250862885344843, 7);
  sqcRZGate(q, -2.6980770715271234, 7);
  sqcRYGate(q, 0.0909007872924068, 8);
  sqcRZGate(q, -2.8136043512373914, 8);
  sqcRYGate(q, -3.104747512898968, 9);
  sqcRZGate(q, 2.379085984130672, 9);
  sqcRYGate(q, -0.43245589702208687, 10);
  sqcRZGate(q, 0.5396873175356166, 10);
  sqcRYGate(q, 1.1154370366135158, 11);
  sqcRZGate(q, -2.647135645165636, 11);

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
