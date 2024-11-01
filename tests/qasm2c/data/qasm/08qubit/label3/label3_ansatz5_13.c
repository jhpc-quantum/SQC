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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.215537105379923, 0);
  sqcRYGate(q, -0.9724882407050922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.83626568081037, 0);
  sqcRYGate(q, 2.553569659189355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4475226271040886, 2);
  sqcRYGate(q, -0.12486129365936183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5608554962809733, 2);
  sqcRYGate(q, -0.3051788812760785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3355507834565123, 4);
  sqcRYGate(q, 0.9470859390941035, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4569271611778776, 4);
  sqcRYGate(q, 2.648721620413082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0892229606535848, 6);
  sqcRYGate(q, -0.8233237453733803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.377608549933683, 6);
  sqcRYGate(q, -2.186824076072736, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4978452050306856, 1);
  sqcRYGate(q, 0.9737750496441537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5010747429372593, 1);
  sqcRYGate(q, 1.5344414130287163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4555423933439258, 3);
  sqcRYGate(q, 1.3399379494218167, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5129655515829954, 3);
  sqcRYGate(q, -0.9526262877076319, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0836338144323534, 5);
  sqcRYGate(q, -1.9102131127366102, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7218364341153833, 5);
  sqcRYGate(q, 1.671469905424367, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0479693970581563, 0);
  sqcRYGate(q, 2.331612602966927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.030087148066478164, 0);
  sqcRYGate(q, -1.6509518825257503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8138794750767486, 2);
  sqcRYGate(q, 0.7200212507039492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.212120047066301, 2);
  sqcRYGate(q, -2.6926259410384237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08015651208301328, 4);
  sqcRYGate(q, -3.0993703555926824, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.905437329028794, 4);
  sqcRYGate(q, 1.3308805487413744, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5215401193897626, 6);
  sqcRYGate(q, 2.7899307059641796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5315594970945368, 6);
  sqcRYGate(q, 1.2201171227391034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20470579694461222, 1);
  sqcRYGate(q, -2.80187239754982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35963512839949946, 1);
  sqcRYGate(q, 2.291623107828687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8729513077312556, 3);
  sqcRYGate(q, -2.211339729461803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03535724142745605, 3);
  sqcRYGate(q, -0.7348086361654145, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.961821290611616, 5);
  sqcRYGate(q, 1.8723611157104196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.47628422837472517, 5);
  sqcRYGate(q, 2.1866146108772497, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.815711214662545, 0);
  sqcRYGate(q, -1.469408979455352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5676970176026659, 0);
  sqcRYGate(q, 1.4488796640260562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5351396872780334, 2);
  sqcRYGate(q, -2.86136975165962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3605374721324992, 2);
  sqcRYGate(q, -2.7434567608994196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4507232627314073, 4);
  sqcRYGate(q, 1.1803566666878753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7932897915925903, 4);
  sqcRYGate(q, 0.09538083328244211, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.078661022549283, 6);
  sqcRYGate(q, -2.7903786003422737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.152118880227839, 6);
  sqcRYGate(q, -1.0610883824586663, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1892658354384853, 1);
  sqcRYGate(q, 2.5212196638996187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.781747914953586, 1);
  sqcRYGate(q, -1.4867474192948327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22396999658834107, 3);
  sqcRYGate(q, -2.279077340799068, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9543155767652403, 3);
  sqcRYGate(q, 0.7975328459793526, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17833263778361477, 5);
  sqcRYGate(q, 1.6024883129680443, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1596114861599318, 5);
  sqcRYGate(q, -0.33207435802227747, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.746231694928364, 0);
  sqcRYGate(q, -1.1790469975546145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10330038393917373, 0);
  sqcRYGate(q, 0.20781257360763425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.779266420073427, 2);
  sqcRYGate(q, -0.8166848114189822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34139115604547143, 2);
  sqcRYGate(q, 1.8144807726890644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7391041431666565, 4);
  sqcRYGate(q, 0.5759725838531253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9773601799990255, 4);
  sqcRYGate(q, -1.5510333874121738, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.141466344190417, 6);
  sqcRYGate(q, -0.9787664935483936, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.85696468160599, 6);
  sqcRYGate(q, -2.872297426810591, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.24391620619793497, 1);
  sqcRYGate(q, 0.29548086918433375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9161700308760183, 1);
  sqcRYGate(q, 0.12521079079239783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5998295901997117, 3);
  sqcRYGate(q, -1.6425337260086068, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.008542889564885137, 3);
  sqcRYGate(q, -1.8706117634675437, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.099476229160094, 5);
  sqcRYGate(q, -1.5280345555282, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2809358410429459, 5);
  sqcRYGate(q, 0.11070469011962901, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.080364596287684, 0);
  sqcRYGate(q, -2.4701832857396475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0984310997577627, 0);
  sqcRYGate(q, 1.540511940238879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1782770042328865, 2);
  sqcRYGate(q, 1.13003497615039, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2569514858194955, 2);
  sqcRYGate(q, 0.4989654136450958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03329846647496648, 4);
  sqcRYGate(q, 1.7055562510433822, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9899892005230815, 4);
  sqcRYGate(q, -2.1156114918962965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9243360569496626, 6);
  sqcRYGate(q, -2.1268340179642875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1658722765481102, 6);
  sqcRYGate(q, -2.7363591953001394, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1425495374961409, 1);
  sqcRYGate(q, 0.35488066361600157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6182636074915526, 1);
  sqcRYGate(q, 2.0474004255039127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.49821263076636413, 3);
  sqcRYGate(q, 1.6472768041788548, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.000128352016161, 3);
  sqcRYGate(q, 2.140175797770846, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.497564712646696, 5);
  sqcRYGate(q, -1.7002863688989294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.058938917582295, 5);
  sqcRYGate(q, -0.06439541406102545, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.09627580967617, 0);
  sqcRYGate(q, -2.152442429165062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.896969980410503, 0);
  sqcRYGate(q, -2.7643332599152752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9748343204111665, 2);
  sqcRYGate(q, 2.859954586826566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0466722162548905, 2);
  sqcRYGate(q, -2.4008534639645074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7606894169466338, 4);
  sqcRYGate(q, -2.020841127191109, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2607407491488702, 4);
  sqcRYGate(q, 2.4075690147398197, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.834638541807667, 6);
  sqcRYGate(q, -0.9388005512267424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9031968644483976, 6);
  sqcRYGate(q, -0.08330023100270534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0860709840182697, 1);
  sqcRYGate(q, -0.17368575370205908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.081514132451228, 1);
  sqcRYGate(q, 0.5150492752061029, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4798830606367108, 3);
  sqcRYGate(q, 0.25503016288720676, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2484709747327667, 3);
  sqcRYGate(q, -0.9128313664782759, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.776062686178664, 5);
  sqcRYGate(q, 1.467148313082787, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3589231524087895, 5);
  sqcRYGate(q, 2.890519346742973, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.816942528368364, 0);
  sqcRYGate(q, 0.022127717576332806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5695248474639919, 0);
  sqcRYGate(q, 0.0713857744156705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.019495179886439118, 2);
  sqcRYGate(q, 2.4934076871864543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4356160406349208, 2);
  sqcRYGate(q, 2.4621969862893764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05212443668585082, 4);
  sqcRYGate(q, 0.6818430972291033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.008770769337111, 4);
  sqcRYGate(q, 2.343890503464218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.203969848562263, 6);
  sqcRYGate(q, -1.4569973274261132, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5697438197674707, 6);
  sqcRYGate(q, -0.08669962744426486, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5302552917328995, 1);
  sqcRYGate(q, -0.6218129695943552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.422293162627864, 1);
  sqcRYGate(q, 0.6362037650236525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5516601449137979, 3);
  sqcRYGate(q, 0.5257204802267479, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7519267328442623, 3);
  sqcRYGate(q, 2.446076591560925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1890475714823308, 5);
  sqcRYGate(q, -1.1191544819094172, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.80597444942004, 5);
  sqcRYGate(q, 3.063392841242061, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0663873016995944, 0);
  sqcRYGate(q, 0.49926825220204507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0732424007891783, 0);
  sqcRYGate(q, 2.0469485956225544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3427844234988235, 2);
  sqcRYGate(q, -2.398220162472272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3053480405395153, 2);
  sqcRYGate(q, -0.1170961673781612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.997147302597341, 4);
  sqcRYGate(q, -0.5458465357846879, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4788420614083395, 4);
  sqcRYGate(q, -2.2187967079674937, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8994042747588741, 6);
  sqcRYGate(q, -0.6969478886273331, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.417587013788753, 6);
  sqcRYGate(q, 1.7750229247328202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6345256051083425, 1);
  sqcRYGate(q, -1.3114320750141992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5704320913433258, 1);
  sqcRYGate(q, 0.4750410624971302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.124244926786169, 3);
  sqcRYGate(q, 0.8702732718754129, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.036182193175136, 3);
  sqcRYGate(q, 2.686069529725235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9031360143511739, 5);
  sqcRYGate(q, -0.48835027157511457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6442654456988466, 5);
  sqcRYGate(q, 1.7778460017341011, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3941220467023876, 0);
  sqcRYGate(q, 0.7239344858119275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6221887626778945, 0);
  sqcRYGate(q, 3.1163052181987947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.519959207591241, 2);
  sqcRYGate(q, -1.9354308511378955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09271827516193731, 2);
  sqcRYGate(q, 0.33839441099704765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6196809922955611, 4);
  sqcRYGate(q, 3.0769373010398953, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2576764702361216, 4);
  sqcRYGate(q, -1.245926779980679, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3189534969601007, 6);
  sqcRYGate(q, 2.6000927702552135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9426757003521997, 6);
  sqcRYGate(q, 0.1760264308174534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.856464308259728, 1);
  sqcRYGate(q, 2.507863403242583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9466706234860276, 1);
  sqcRYGate(q, -3.138683731167727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.014590236505227, 3);
  sqcRYGate(q, 2.143967790397017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1789944692002186, 3);
  sqcRYGate(q, -0.5214461739725538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.47909430539747155, 5);
  sqcRYGate(q, -0.11319272028845173, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3261073926991918, 5);
  sqcRYGate(q, 2.0401317428151358, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.785893277131051, 0);
  sqcRYGate(q, 2.2177031421038014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3133558776669287, 0);
  sqcRYGate(q, -2.7562610040793785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9422366004417944, 2);
  sqcRYGate(q, 2.195436474672211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.804177707384936, 2);
  sqcRYGate(q, -1.793919259018729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4595094932053752, 4);
  sqcRYGate(q, 0.2880813719815416, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5814794876148572, 4);
  sqcRYGate(q, 1.0136624887047505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.869109806666529, 6);
  sqcRYGate(q, -1.090438010809538, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7202969911089812, 6);
  sqcRYGate(q, -2.4501081269354072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7025462229307097, 1);
  sqcRYGate(q, 1.2483057430003777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0820667687056735, 1);
  sqcRYGate(q, -0.756263095292443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.547560971065463, 3);
  sqcRYGate(q, 2.488110018777652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8778215488723369, 3);
  sqcRYGate(q, 0.28777334269429833, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.314707828942658, 5);
  sqcRYGate(q, -1.3725955053649077, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6911297532110567, 5);
  sqcRYGate(q, -1.3391037416329636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8879020402671669, 0);
  sqcRYGate(q, 0.5389067145499631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9718688992623277, 0);
  sqcRYGate(q, 1.3442042345042422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.965078547713835, 2);
  sqcRYGate(q, 1.474812064447721, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1323305998703215, 2);
  sqcRYGate(q, -2.7463338829037913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1991366824280747, 4);
  sqcRYGate(q, -0.8666749483322757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.56062215535747, 4);
  sqcRYGate(q, 2.7557689989338483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.231610280705336, 6);
  sqcRYGate(q, -2.446411933339065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5118776642452844, 6);
  sqcRYGate(q, -2.70206117723008, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.532892359630266, 1);
  sqcRYGate(q, -2.2497626926039134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3583493365367465, 1);
  sqcRYGate(q, 0.9851634146716993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3434623433982777, 3);
  sqcRYGate(q, 0.3201962652579517, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5191536494704133, 3);
  sqcRYGate(q, -1.6127802158761277, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3163279135681493, 5);
  sqcRYGate(q, 1.72437188270091, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4590032784956795, 5);
  sqcRYGate(q, -2.4343694235701245, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07969414819861242, 0);
  sqcRYGate(q, 0.03157476516156432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3786061867761708, 0);
  sqcRYGate(q, 2.5228750715437296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8586502425656, 2);
  sqcRYGate(q, 0.16778203579789908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2209010546022428, 2);
  sqcRYGate(q, -1.4620103275667662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6621890645860256, 4);
  sqcRYGate(q, 1.3471206790980075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.154892460327937, 4);
  sqcRYGate(q, 0.31494128001189914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8909216498575443, 6);
  sqcRYGate(q, 1.1009608168747187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1704957981542, 6);
  sqcRYGate(q, 0.5047232607300443, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.476020674675019, 1);
  sqcRYGate(q, 1.9497219523603162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4208644075610044, 1);
  sqcRYGate(q, -2.571411667987823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.842473991217485, 3);
  sqcRYGate(q, 3.035798077451574, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6065058409885906, 3);
  sqcRYGate(q, 1.8568777157629124, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.016286048683681723, 5);
  sqcRYGate(q, 2.34413581991073, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2173812957066232, 5);
  sqcRYGate(q, 1.074537404803434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8001015870547676, 0);
  sqcRYGate(q, 0.9143262466387192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9736266597317904, 0);
  sqcRYGate(q, 2.646573593271277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0036606109898534, 2);
  sqcRYGate(q, 2.130875902550948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8604316330136714, 2);
  sqcRYGate(q, 2.3705185647643447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.605076389476261, 4);
  sqcRYGate(q, -2.4534912165324663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.328651806684481, 4);
  sqcRYGate(q, -3.138139095834033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0753657116141127, 6);
  sqcRYGate(q, -0.4419860158293334, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.067528030618368, 6);
  sqcRYGate(q, 0.275368430921655, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.033542151091091, 1);
  sqcRYGate(q, 0.5777695731136259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5789346940010694, 1);
  sqcRYGate(q, -1.642419666918058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.985822963871338, 3);
  sqcRYGate(q, 0.8486778824158243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5972682337822736, 3);
  sqcRYGate(q, 1.743314687241254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6352005867374819, 5);
  sqcRYGate(q, -1.4545198336937695, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5741498629585298, 5);
  sqcRYGate(q, -1.7485815931373132, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.687340288316494, 0);
  sqcRYGate(q, -0.9260712376209392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45067319506614023, 0);
  sqcRYGate(q, -2.1960229005832064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8782619572182117, 2);
  sqcRYGate(q, -1.705538907187956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1194010684975148, 2);
  sqcRYGate(q, -2.1021991285929302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.849225891733331, 4);
  sqcRYGate(q, 0.11857205284970058, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.500556263277234, 4);
  sqcRYGate(q, -0.062371937184910735, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.116209123720119, 6);
  sqcRYGate(q, 2.479749569817572, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2205418533184351, 6);
  sqcRYGate(q, -1.7905932430862865, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.818879003516253, 1);
  sqcRYGate(q, 0.7907920396223211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11103587469913201, 1);
  sqcRYGate(q, 0.9247047700096791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5732462443712203, 3);
  sqcRYGate(q, 2.7364803826279993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7331356823131311, 3);
  sqcRYGate(q, -2.615598747886973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.94843603955326, 5);
  sqcRYGate(q, -0.6463925305658101, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6970619879879996, 5);
  sqcRYGate(q, 0.3773517813866134, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6074574322875044, 0);
  sqcRYGate(q, -1.7101472225264056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23190486375862845, 0);
  sqcRYGate(q, -1.4912868276808653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7832854492703136, 2);
  sqcRYGate(q, -1.6593981574344907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2866555433036595, 2);
  sqcRYGate(q, 0.11760738692651733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8486437310968964, 4);
  sqcRYGate(q, 0.6722508203656572, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7893479756068364, 4);
  sqcRYGate(q, 2.9290244349257013, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.778231943611271, 6);
  sqcRYGate(q, -0.4620051771191367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2216220136674267, 6);
  sqcRYGate(q, -0.859937240208569, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5716308507000933, 1);
  sqcRYGate(q, -2.973231220432602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.997951891183447, 1);
  sqcRYGate(q, -1.1046807632919533, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0730733052826644, 3);
  sqcRYGate(q, -2.146582902399989, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.210317903281579, 3);
  sqcRYGate(q, -1.262615757854155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.770495432995035, 5);
  sqcRYGate(q, 0.49789308301343643, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8593195056073247, 5);
  sqcRYGate(q, -3.0286614279077684, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.001863219770323, 0);
  sqcRYGate(q, -0.7935434194080012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9524302739095898, 0);
  sqcRYGate(q, 0.438548129275099, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14961819215765398, 2);
  sqcRYGate(q, 1.0553572701812775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4529180569094118, 2);
  sqcRYGate(q, 1.6442303146913098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34638023998034156, 4);
  sqcRYGate(q, 2.1416312192480893, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.468300528498025, 4);
  sqcRYGate(q, 1.0731693087543785, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6735803398513602, 6);
  sqcRYGate(q, -0.15027902677985094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.29819772195046224, 6);
  sqcRYGate(q, 1.0971978889255722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6931553323413081, 1);
  sqcRYGate(q, 2.1742899079688227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1815546165144113, 1);
  sqcRYGate(q, 2.157699746332726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5915300190493651, 3);
  sqcRYGate(q, 0.11406315470026983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.09794130891218344, 3);
  sqcRYGate(q, 0.33904909627378654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16304938735231073, 5);
  sqcRYGate(q, -1.3987082255642056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7629664022764509, 5);
  sqcRYGate(q, 1.786791730692312, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6509627783046044, 0);
  sqcRYGate(q, -1.7779572566189483, 1);
  sqcRYGate(q, -0.7161837143862088, 2);
  sqcRYGate(q, -3.07828818370811, 3);
  sqcRYGate(q, -2.725361720431622, 4);
  sqcRYGate(q, 1.3761081398069033, 5);
  sqcRYGate(q, 2.7902830949369495, 6);
  sqcRYGate(q, 0.9059449233281311, 7);

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
