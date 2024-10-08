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

  sqcRYGate(q, -0.5340921229175022, 0);
  sqcRYGate(q, 2.119198522000512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9109556286156754, 0);
  sqcRYGate(q, 0.9009131137188183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6959286707273247, 1);
  sqcRYGate(q, -0.33976879733501636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6927962258519855, 1);
  sqcRYGate(q, -1.9181057984752752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6500250538148086, 2);
  sqcRYGate(q, 1.364122230699309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6341519223819764, 2);
  sqcRYGate(q, -2.739908353190165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12921125336556827, 3);
  sqcRYGate(q, 2.489764673327932, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3318307817614319, 3);
  sqcRYGate(q, -1.8856135277604622, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1140818364836624, 4);
  sqcRYGate(q, 0.705328018024109, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.021043560989069676, 4);
  sqcRYGate(q, -2.75777418302418, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.018023946110494293, 5);
  sqcRYGate(q, -2.6351740608238527, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.626084170234813, 5);
  sqcRYGate(q, -1.099616021311281, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.48848035223720726, 6);
  sqcRYGate(q, -0.2691258311156739, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0173642263874623, 6);
  sqcRYGate(q, -2.0116771060768355, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12873472854854384, 0);
  sqcRYGate(q, -2.64353315821016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8381051969084887, 0);
  sqcRYGate(q, -2.414977929780395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.52439249512957, 1);
  sqcRYGate(q, 0.5289685775310228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8205604751723368, 1);
  sqcRYGate(q, 2.952715035383296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.997573187658801, 2);
  sqcRYGate(q, -2.641595436079881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22631979112169165, 2);
  sqcRYGate(q, -1.209091491837279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.302400361258027, 3);
  sqcRYGate(q, -1.4930867043629612, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8156379607001145, 3);
  sqcRYGate(q, -1.115837129933925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.21904447200834, 4);
  sqcRYGate(q, -0.8722900400357981, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.170672010232219, 4);
  sqcRYGate(q, 0.08442646301636654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6610023846719844, 5);
  sqcRYGate(q, -3.0855371713637907, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5173133959780924, 5);
  sqcRYGate(q, 2.9728125240470744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.696023035338085, 6);
  sqcRYGate(q, -2.0335349565613976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.21053540986299257, 6);
  sqcRYGate(q, 1.8297559327668855, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.023926153915043, 0);
  sqcRYGate(q, 0.8469181701907607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.132456065617837, 0);
  sqcRYGate(q, 2.7914508313187465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5850607707514888, 1);
  sqcRYGate(q, 1.6173270587091277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.723880670387089, 1);
  sqcRYGate(q, 1.2545034890085587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8890583356874266, 2);
  sqcRYGate(q, -2.263865835920428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6298881922309347, 2);
  sqcRYGate(q, 2.9292693606407405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3450013867494186, 3);
  sqcRYGate(q, 0.15376945707484993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5705781033502286, 3);
  sqcRYGate(q, -2.7932390794521846, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5367183834892033, 4);
  sqcRYGate(q, -1.3738873499284594, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.732522386026214, 4);
  sqcRYGate(q, -1.0506273197296778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8682546735106302, 5);
  sqcRYGate(q, -1.5144901461811893, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.79643715414086, 5);
  sqcRYGate(q, -0.1519597038606842, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9884691397909373, 6);
  sqcRYGate(q, 0.8358113168600783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1280776335905713, 6);
  sqcRYGate(q, 2.7423838707720734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3401391881240023, 0);
  sqcRYGate(q, -1.7705225412742853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4943096729809207, 0);
  sqcRYGate(q, -2.9885083590355803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.393254496528531, 1);
  sqcRYGate(q, -2.7569333592408065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1551610244752752, 1);
  sqcRYGate(q, -2.294120507696324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4320815573643433, 2);
  sqcRYGate(q, -2.7920170017158457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2940078316559065, 2);
  sqcRYGate(q, 0.3399922666127013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2988920499168355, 3);
  sqcRYGate(q, 1.340733594368625, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.09019218876080615, 3);
  sqcRYGate(q, -2.520742233082983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0420299868272576, 4);
  sqcRYGate(q, -1.3082537519576147, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.132659948578218, 4);
  sqcRYGate(q, 1.4291969879768063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2240327870474497, 5);
  sqcRYGate(q, -1.706748563598098, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2916284400392377, 5);
  sqcRYGate(q, 1.9908825702316495, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0159854019373435, 6);
  sqcRYGate(q, -2.376604122444128, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5100860692500317, 6);
  sqcRYGate(q, -1.6194114731637348, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7823925127480162, 0);
  sqcRYGate(q, 2.6763799490306437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9619666129912088, 0);
  sqcRYGate(q, 1.4678434645826863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.983311886141017, 1);
  sqcRYGate(q, -0.6851037648899972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6926882985301934, 1);
  sqcRYGate(q, -0.8485354447225308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.628862655867386, 2);
  sqcRYGate(q, 2.4286462300957306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7340083163495805, 2);
  sqcRYGate(q, -2.9459512344317735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.746769708145008, 3);
  sqcRYGate(q, -2.064598628513573, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8333091191379367, 3);
  sqcRYGate(q, -1.0368855744525822, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.069633566870775, 4);
  sqcRYGate(q, -0.5334996546587281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.88184204339594, 4);
  sqcRYGate(q, -0.9440995898206634, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17244323692462396, 5);
  sqcRYGate(q, -0.8281665914881061, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.797885326674445, 5);
  sqcRYGate(q, 1.215139405408487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9030129941972174, 6);
  sqcRYGate(q, 2.0619120779082296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.44819224981356637, 6);
  sqcRYGate(q, 0.9995054283035161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7191417450031475, 0);
  sqcRYGate(q, 3.083473800590161, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40183692720642267, 0);
  sqcRYGate(q, 1.9683964330382238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7728063609989726, 1);
  sqcRYGate(q, -0.28701359804338306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5839055491302005, 1);
  sqcRYGate(q, -1.183805769829299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24741070187175893, 2);
  sqcRYGate(q, -1.5093465497832381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.634294863398436, 2);
  sqcRYGate(q, 2.826552170986142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3220904280058003, 3);
  sqcRYGate(q, 2.8779029749490443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5598694396199035, 3);
  sqcRYGate(q, -2.0351734458233843, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.986735961145581, 4);
  sqcRYGate(q, -2.221249315845818, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.845541216368991, 4);
  sqcRYGate(q, -2.6919060836795987, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1326716292443053, 5);
  sqcRYGate(q, -0.7343186100593275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1224578289504006, 5);
  sqcRYGate(q, -0.4045873607060582, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.26415153907325806, 6);
  sqcRYGate(q, 2.909784374434292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9826289563605624, 6);
  sqcRYGate(q, 2.1361433446898075, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7013532997540377, 0);
  sqcRYGate(q, -0.918302848494292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3465415870481303, 0);
  sqcRYGate(q, -2.689511285070546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1081227289472526, 1);
  sqcRYGate(q, -1.2984795960795195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6772223548932507, 1);
  sqcRYGate(q, 1.3248934761805324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6813438884783012, 2);
  sqcRYGate(q, 1.1143873947540215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7223882773244368, 2);
  sqcRYGate(q, -2.1430333818846767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49971294905536023, 3);
  sqcRYGate(q, 3.1040436673899268, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5177479851096187, 3);
  sqcRYGate(q, -1.518411591912414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.25811902060599046, 4);
  sqcRYGate(q, 0.8550723925797694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.758324974772516, 4);
  sqcRYGate(q, 1.2144366050731916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.625284712286352, 5);
  sqcRYGate(q, 2.4669481703137897, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.433904846793966, 5);
  sqcRYGate(q, 1.670492570440115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7787624753659763, 6);
  sqcRYGate(q, -1.8123025805459747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.717452952198915, 6);
  sqcRYGate(q, 1.932946880853324, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8236768650484096, 0);
  sqcRYGate(q, 2.675524758396844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1238728319430695, 0);
  sqcRYGate(q, -2.7946865183251717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.245335484827663, 1);
  sqcRYGate(q, 2.2962431410214363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.458397787369834, 1);
  sqcRYGate(q, -2.661461070261278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41159991336651297, 2);
  sqcRYGate(q, 2.175174008051683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2607632899980947, 2);
  sqcRYGate(q, -1.8104222060441364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.180206006925765, 3);
  sqcRYGate(q, -1.2208592467066346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6311075578754907, 3);
  sqcRYGate(q, 1.960040238328661, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4341717934291278, 4);
  sqcRYGate(q, 0.32436279250724814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0431340442881227, 4);
  sqcRYGate(q, -0.8564851537627154, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6837475415909573, 5);
  sqcRYGate(q, 2.377497807798507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4537351756604234, 5);
  sqcRYGate(q, -0.18844502436801136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.971050770999355, 6);
  sqcRYGate(q, 2.0927671360843827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3361701340045347, 6);
  sqcRYGate(q, -2.415471660223617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0256708809275836, 0);
  sqcRYGate(q, 2.1563951515207718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6798348195053743, 0);
  sqcRYGate(q, 1.751476962401786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13096006619415937, 1);
  sqcRYGate(q, -0.7018190343165311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22127506072096015, 1);
  sqcRYGate(q, 1.6507090007039222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3803066090363838, 2);
  sqcRYGate(q, 1.2027354319512185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3023162115932774, 2);
  sqcRYGate(q, 1.6060188319137403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.892117540365253, 3);
  sqcRYGate(q, 1.4832455523572143, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0068292596025858, 3);
  sqcRYGate(q, 0.7935076638569105, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6402155960837246, 4);
  sqcRYGate(q, -1.5005962390733325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.905941825654572, 4);
  sqcRYGate(q, 0.43202600892117343, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6664562888478087, 5);
  sqcRYGate(q, 0.3595680562364729, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5968789698625794, 5);
  sqcRYGate(q, 0.28799581852082307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.060471972684024745, 6);
  sqcRYGate(q, -1.7918859025267269, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.155025716324805, 6);
  sqcRYGate(q, -1.5719733540103982, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1631545948449413, 0);
  sqcRYGate(q, 0.8496200148837885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4700536647884253, 0);
  sqcRYGate(q, -1.5757036161159945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.925000420671428, 1);
  sqcRYGate(q, 0.5264907647456868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6180058338466006, 1);
  sqcRYGate(q, 0.28314653592555583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10791495307527833, 2);
  sqcRYGate(q, -1.4430900788936538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7418163567237599, 2);
  sqcRYGate(q, -0.029621673500687354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41997400243487437, 3);
  sqcRYGate(q, -1.0105106098949275, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5347737674351372, 3);
  sqcRYGate(q, 3.0168523327272307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.41660331865070077, 4);
  sqcRYGate(q, 2.4212366166903982, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0791661939236612, 4);
  sqcRYGate(q, -0.8771385613922891, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0337544201097577, 5);
  sqcRYGate(q, -2.603320322509152, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.209715875634351, 5);
  sqcRYGate(q, 0.6693313856802469, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3672440997411697, 6);
  sqcRYGate(q, 2.1323595956062107, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3192463645092385, 6);
  sqcRYGate(q, 2.1601852490301128, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.098886386817643, 0);
  sqcRYGate(q, -1.8771973603407648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5366608826385022, 0);
  sqcRYGate(q, -0.30905769939940964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0909661189831037, 1);
  sqcRYGate(q, -1.378042321728121, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9897995930986068, 1);
  sqcRYGate(q, -0.9281177056523129, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7690300565333016, 2);
  sqcRYGate(q, -0.661223698168298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4711910101868533, 2);
  sqcRYGate(q, -2.166452837745459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6482044177443411, 3);
  sqcRYGate(q, -0.742601022876566, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9690037201237772, 3);
  sqcRYGate(q, 0.01068027160188122, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2349466828469249, 4);
  sqcRYGate(q, -0.7468314172045396, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17016874451880334, 4);
  sqcRYGate(q, -0.3101797077507152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1567369414540458, 5);
  sqcRYGate(q, -3.0788941890477424, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4691651544736617, 5);
  sqcRYGate(q, 2.8837234214821157, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8190927934545682, 6);
  sqcRYGate(q, 0.007809814160697037, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8804391643963765, 6);
  sqcRYGate(q, -2.1362002414032, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8586765205958165, 0);
  sqcRYGate(q, -0.8448059932499161, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04816450774096558, 0);
  sqcRYGate(q, 1.330194850543734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3345452437671095, 1);
  sqcRYGate(q, 1.8171758247654264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.886487619066733, 1);
  sqcRYGate(q, 1.929755302268575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1070331475402244, 2);
  sqcRYGate(q, 1.5346330207376253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.779628162227925, 2);
  sqcRYGate(q, 1.6632033587910158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7540379019371581, 3);
  sqcRYGate(q, -0.24063810423811294, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5988597717983548, 3);
  sqcRYGate(q, 1.9579010854397825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5589325841506845, 4);
  sqcRYGate(q, 0.7840611315351721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5989236555806733, 4);
  sqcRYGate(q, 0.9162847299462147, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5417206665466643, 5);
  sqcRYGate(q, 2.2449400203887584, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.980519164703439, 5);
  sqcRYGate(q, 0.07373545611486153, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.031371567263152, 6);
  sqcRYGate(q, -1.425787116016127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1244799876146852, 6);
  sqcRYGate(q, 1.3007904343590955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23264631716864503, 0);
  sqcRYGate(q, 2.586941425482417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1815122130760742, 0);
  sqcRYGate(q, -0.08387050632586401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7680163309407444, 1);
  sqcRYGate(q, -2.894154440530247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1029036731708288, 1);
  sqcRYGate(q, 1.5554592466139816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.456609957511291, 2);
  sqcRYGate(q, 1.1465052084585934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9552609243844055, 2);
  sqcRYGate(q, -1.9958840300118843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0855639014185456, 3);
  sqcRYGate(q, 0.1879683643945096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2490024892365312, 3);
  sqcRYGate(q, 2.9889753448305227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9588208372260416, 4);
  sqcRYGate(q, -2.690784967168547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8987179693747755, 4);
  sqcRYGate(q, -2.4409391533246207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1334559247564657, 5);
  sqcRYGate(q, -2.6819278782565656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8020693669531282, 5);
  sqcRYGate(q, -1.9068507406263526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4296773835763108, 6);
  sqcRYGate(q, 0.6214392185188995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.804202186048866, 6);
  sqcRYGate(q, 2.2243942684347533, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2189835060792484, 0);
  sqcRYGate(q, -1.429604138721024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.339957512352891, 0);
  sqcRYGate(q, -0.5459791893326087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0475133088596618, 1);
  sqcRYGate(q, 2.4664602653830565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9201909377397577, 1);
  sqcRYGate(q, 2.5929505170279152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21494970738663532, 2);
  sqcRYGate(q, 1.9959056994457829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6256993985347954, 2);
  sqcRYGate(q, 3.1177857178423216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.740646513268911, 3);
  sqcRYGate(q, 3.0685962679947316, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.991308286220299, 3);
  sqcRYGate(q, 2.2489400009737057, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.310895848368272, 4);
  sqcRYGate(q, -0.3343324751718113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.18177337134937588, 4);
  sqcRYGate(q, -0.7336079170862924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.477064164569117, 5);
  sqcRYGate(q, 1.6769992786659156, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.480760780353546, 5);
  sqcRYGate(q, 0.28025765069094616, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.836842238812831, 6);
  sqcRYGate(q, 0.7873546602340715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.036419757544438, 6);
  sqcRYGate(q, -1.8938618869573904, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2282882412403255, 0);
  sqcRYGate(q, -0.9857058399467417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.507251423335358, 0);
  sqcRYGate(q, -2.6867246269887444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4975083152661737, 1);
  sqcRYGate(q, -1.304729257172517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6162063377314115, 1);
  sqcRYGate(q, -3.0141118925711776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16785073832127112, 2);
  sqcRYGate(q, 2.390013556086332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5748287555033835, 2);
  sqcRYGate(q, -0.10734968469075802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.740522001603711, 3);
  sqcRYGate(q, -1.8719959372308623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.657303897021235, 3);
  sqcRYGate(q, -1.0639697625772708, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0792242122065696, 4);
  sqcRYGate(q, 0.6771389419578775, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0689347636392017, 4);
  sqcRYGate(q, -1.073715509180416, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4334464879309277, 5);
  sqcRYGate(q, -0.14280776470901993, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7971784609791754, 5);
  sqcRYGate(q, 1.9145743852911492, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.26241796860822486, 6);
  sqcRYGate(q, 0.4824330225163092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5960490284410263, 6);
  sqcRYGate(q, 2.2357208215380266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.11068204110400433, 0);
  sqcRYGate(q, -0.16497403667564295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8866527765706438, 0);
  sqcRYGate(q, -2.866547067293016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.127225278429859, 1);
  sqcRYGate(q, 1.852036050347139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1662064713406082, 1);
  sqcRYGate(q, -1.6404892461339822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44156166700879484, 2);
  sqcRYGate(q, -2.4094732217152863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8476843553233611, 2);
  sqcRYGate(q, 0.6437796399038271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.045292370935137605, 3);
  sqcRYGate(q, 0.06140537827779049, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9923713250658515, 3);
  sqcRYGate(q, -0.6165745789659951, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.934243682017491, 4);
  sqcRYGate(q, 3.1274208990106156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.025358844510619427, 4);
  sqcRYGate(q, -0.8780088845990964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.054486623239483015, 5);
  sqcRYGate(q, 2.867923550458029, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6542764026565089, 5);
  sqcRYGate(q, -1.9184861185802145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.141236448598276, 6);
  sqcRYGate(q, -1.912738754421022, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.010970321913118057, 6);
  sqcRYGate(q, 0.1471657589423616, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6680334595416428, 0);
  sqcRYGate(q, 2.1052019501090657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9301662292347528, 0);
  sqcRYGate(q, 2.4557012664558817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7176416885747496, 1);
  sqcRYGate(q, 1.4853610062421483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1734709758234938, 1);
  sqcRYGate(q, -3.0433950859523984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0084691237546077, 2);
  sqcRYGate(q, 3.037617599534823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3452286363359947, 2);
  sqcRYGate(q, -1.701286799495767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.118329481017452, 3);
  sqcRYGate(q, 1.2591339437971483, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7643013756471069, 3);
  sqcRYGate(q, 0.33573239198312976, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0169247620373118, 4);
  sqcRYGate(q, -3.0636602909811064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.306664186110451, 4);
  sqcRYGate(q, 0.9577785887683179, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0404142209820026, 5);
  sqcRYGate(q, 1.6930999526526165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1860056278663067, 5);
  sqcRYGate(q, 0.6209787187488824, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2611062259704144, 6);
  sqcRYGate(q, 2.7059582937761912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1201093634143047, 6);
  sqcRYGate(q, -1.53409904096074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.876907240491799, 0);
  sqcRYGate(q, -2.803372545345943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6390234320491714, 0);
  sqcRYGate(q, 0.06025065782944505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6897647711783605, 1);
  sqcRYGate(q, 1.9502091834663577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19518164055015447, 1);
  sqcRYGate(q, -1.8631623421042112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03709511220627109, 2);
  sqcRYGate(q, -0.7165816319591221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06884258829889234, 2);
  sqcRYGate(q, 1.3975704811927212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.417845939034576, 3);
  sqcRYGate(q, 0.3553849065554935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3643758285936756, 3);
  sqcRYGate(q, 1.3775349556736922, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.920617194116015, 4);
  sqcRYGate(q, -0.5734558760663828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.763115847802144, 4);
  sqcRYGate(q, 0.8319308119201746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.172943059781379, 5);
  sqcRYGate(q, 2.149100937891626, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7442850496703668, 5);
  sqcRYGate(q, -3.115007666161524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07346351237297923, 6);
  sqcRYGate(q, 0.6737321060613839, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8425378896248734, 6);
  sqcRYGate(q, 0.016072870333485607, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9620902704249694, 0);
  sqcRYGate(q, 0.6065116249399428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2420095624690282, 0);
  sqcRYGate(q, -0.6082173334689548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3251123660034203, 1);
  sqcRYGate(q, -2.990916237582568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0337800631594756, 1);
  sqcRYGate(q, -2.0873445082339432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.012637469793011, 2);
  sqcRYGate(q, 2.6923529784514253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2106847121541069, 2);
  sqcRYGate(q, 2.2891354104518826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1744423975123685, 3);
  sqcRYGate(q, 1.5165524152960534, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.829044462588682, 3);
  sqcRYGate(q, 2.9394082682143554, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5527489563430663, 4);
  sqcRYGate(q, -1.4863514726247375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.814134867951096, 4);
  sqcRYGate(q, -1.377195537409463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.979653317497057, 5);
  sqcRYGate(q, 0.7012729348283984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0737119715402983, 5);
  sqcRYGate(q, 2.776049697703511, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.215664958043088, 6);
  sqcRYGate(q, 3.0847886131817304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8082766524252447, 6);
  sqcRYGate(q, 0.5787433040866662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9783492046384783, 0);
  sqcRYGate(q, -2.7512364048975497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.849607605970089, 0);
  sqcRYGate(q, 0.9790897468712496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1713526016052738, 1);
  sqcRYGate(q, -0.6363624875716206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5123472947619616, 1);
  sqcRYGate(q, -2.448293698190813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.49823051414426184, 2);
  sqcRYGate(q, 1.4054736636050968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3055774539765967, 2);
  sqcRYGate(q, -1.4263592755233578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7226401012908386, 3);
  sqcRYGate(q, 2.037325183790415, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.585491334667624, 3);
  sqcRYGate(q, -2.88927550604138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.042294415013572, 4);
  sqcRYGate(q, 0.08924268411539758, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.479658641017315, 4);
  sqcRYGate(q, -1.0165389075377043, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.053990669872465, 5);
  sqcRYGate(q, -0.08912895020937837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6931504060915588, 5);
  sqcRYGate(q, -2.002698978424574, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6691495212768315, 6);
  sqcRYGate(q, 3.000029323299081, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6807530235815697, 6);
  sqcRYGate(q, -0.9283866658309312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18573636128957965, 0);
  sqcRYGate(q, 1.0107206305214431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8651939182740445, 0);
  sqcRYGate(q, -1.8409469925735626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.738745480183377, 1);
  sqcRYGate(q, 0.7533151746561231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6631696361413493, 1);
  sqcRYGate(q, 2.2723635752851887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7166981156856467, 2);
  sqcRYGate(q, 0.7503189423664818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.000353788071185, 2);
  sqcRYGate(q, 1.4275467223304699, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6370011418187151, 3);
  sqcRYGate(q, 2.6715990177141955, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0800813589272513, 3);
  sqcRYGate(q, -2.2042330598462008, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.067188165234656, 4);
  sqcRYGate(q, -2.3422835501656065, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4936945546170437, 4);
  sqcRYGate(q, 2.0601286601531013, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.877698488549967, 5);
  sqcRYGate(q, -3.1264741016736437, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3649146265209264, 5);
  sqcRYGate(q, -0.14634836375877336, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.289690419372294, 6);
  sqcRYGate(q, -2.8515164397794384, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.329096090792124, 6);
  sqcRYGate(q, -1.0637770047625974, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2195423148142055, 0);
  sqcRYGate(q, 2.7180499522233403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6740602421681448, 0);
  sqcRYGate(q, -2.638911225597155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6953256222375233, 1);
  sqcRYGate(q, 2.572393426063806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.819411014561028, 1);
  sqcRYGate(q, -1.8185730098115196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5194230799433457, 2);
  sqcRYGate(q, 2.4103530831106657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.11465388445647, 2);
  sqcRYGate(q, 1.2221212432005362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33152036129604756, 3);
  sqcRYGate(q, -0.10932013287991982, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.12471590890279884, 3);
  sqcRYGate(q, -1.15628837177863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3226163501986743, 4);
  sqcRYGate(q, 1.653347776568828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6884395122629524, 4);
  sqcRYGate(q, -0.08070274388176044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3409337622430413, 5);
  sqcRYGate(q, -1.0122886938402251, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.509493352441954, 5);
  sqcRYGate(q, -0.875193225521007, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.287970364759361, 6);
  sqcRYGate(q, 2.5205681994191074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0793936445646017, 6);
  sqcRYGate(q, 0.6307612445170232, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.999245827237309, 0);
  sqcRYGate(q, -3.0175523227296432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0692102293097165, 0);
  sqcRYGate(q, 1.809045258069399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0057343044107014, 1);
  sqcRYGate(q, -2.6033379157740097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2988324102363595, 1);
  sqcRYGate(q, 2.8593029292146115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9759986197439527, 2);
  sqcRYGate(q, -0.25617763915780073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4322491507384396, 2);
  sqcRYGate(q, 0.42336126898415666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.55404056937902, 3);
  sqcRYGate(q, 1.203372232829813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9729705433851925, 3);
  sqcRYGate(q, -1.548886915068734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7586162228606024, 4);
  sqcRYGate(q, -2.0086047339996553, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0443182789209366, 4);
  sqcRYGate(q, -0.5891613089011862, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0308260467651618, 5);
  sqcRYGate(q, 1.3788647505382856, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.793429508941718, 5);
  sqcRYGate(q, 2.1940149266250772, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.628195695823825, 6);
  sqcRYGate(q, -2.1238106685617333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6971796425518574, 6);
  sqcRYGate(q, -1.3204011215069986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.010986270617445724, 0);
  sqcRYGate(q, -0.8609013226233876, 1);
  sqcRYGate(q, -2.7861068985774797, 2);
  sqcRYGate(q, 1.4124197002314167, 3);
  sqcRYGate(q, 2.58406205479716, 4);
  sqcRYGate(q, 1.6763755614172868, 5);
  sqcRYGate(q, -0.17824713325955616, 6);
  sqcRYGate(q, 0.05966396952372755, 7);

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
