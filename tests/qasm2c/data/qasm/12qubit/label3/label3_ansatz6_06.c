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

  sqcRYGate(q, -0.9276226686690136, 0);
  sqcRYGate(q, 2.467941761474197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0267738639670616, 0);
  sqcRYGate(q, -2.8705436416146286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0690110466718377, 1);
  sqcRYGate(q, 0.8124982760371593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6126798076026789, 1);
  sqcRYGate(q, -2.571044098412026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8728374727284707, 2);
  sqcRYGate(q, 2.5777528175694706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6697737176613985, 2);
  sqcRYGate(q, 2.421738799142961, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5882990344708875, 3);
  sqcRYGate(q, 0.9193173589044674, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1840175327049378, 3);
  sqcRYGate(q, -0.2686262709639236, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3900399639511947, 4);
  sqcRYGate(q, -2.6075328875017614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5967319252471035, 4);
  sqcRYGate(q, -1.2580065175943849, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1493397426950898, 5);
  sqcRYGate(q, -2.8228835989740473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6628562661723145, 5);
  sqcRYGate(q, -3.1404727732630655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0087266604787453, 6);
  sqcRYGate(q, -2.494245246521271, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.049706580079959, 6);
  sqcRYGate(q, 0.8886350022708038, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5731389839566314, 7);
  sqcRYGate(q, 1.7768330692708247, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9545631320826826, 7);
  sqcRYGate(q, -1.838034693064495, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5912211103215825, 8);
  sqcRYGate(q, -1.0748550806878938, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.37459892755196456, 8);
  sqcRYGate(q, 1.4577784889024992, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.857159382494941, 9);
  sqcRYGate(q, -1.1330678155849165, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6445135160591897, 9);
  sqcRYGate(q, 1.2408892802024791, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1465722081061376, 10);
  sqcRYGate(q, 0.9215250749865457, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.752503577925645, 10);
  sqcRYGate(q, -2.6671954843288566, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0086267892903216, 0);
  sqcRYGate(q, 1.730598590116461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.183356479414706, 0);
  sqcRYGate(q, 1.9459082708976405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2091355482754038, 1);
  sqcRYGate(q, 2.8510646428216626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7568695851554887, 1);
  sqcRYGate(q, -2.51023662809744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7195653090533088, 2);
  sqcRYGate(q, -0.7093468089436454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7773255021834489, 2);
  sqcRYGate(q, -2.0848712627098505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.037500698213246204, 3);
  sqcRYGate(q, 2.7587299930060825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2283769457275815, 3);
  sqcRYGate(q, -2.4046860037131697, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07432765178273293, 4);
  sqcRYGate(q, -2.8291938531101604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6956347162625747, 4);
  sqcRYGate(q, 1.9516042778753888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.401188063541123, 5);
  sqcRYGate(q, 1.2546410677883602, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1716603972162634, 5);
  sqcRYGate(q, -3.1401036030549836, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7953345880654605, 6);
  sqcRYGate(q, 1.9711458954908692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6611129533173195, 6);
  sqcRYGate(q, -2.8401446315671373, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.250029922690989, 7);
  sqcRYGate(q, -1.579366543676536, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.330449293008196, 7);
  sqcRYGate(q, 0.002808156649071414, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6348747289596124, 8);
  sqcRYGate(q, -1.815691935486635, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.33572310017116946, 8);
  sqcRYGate(q, -0.42911654071793937, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.736849245336117, 9);
  sqcRYGate(q, -0.12897098225574766, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8220917434585582, 9);
  sqcRYGate(q, -2.6218330365253135, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.794764511366854, 10);
  sqcRYGate(q, -2.9852420066434724, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4407127101534254, 10);
  sqcRYGate(q, -1.3233694872504211, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.27096120505884, 0);
  sqcRYGate(q, 2.5472821566996764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0026122021176618, 0);
  sqcRYGate(q, 1.472575753657112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38670374909103916, 1);
  sqcRYGate(q, 0.5881197624269757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.425154213616553, 1);
  sqcRYGate(q, 0.8041496730395101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3839187889618407, 2);
  sqcRYGate(q, 1.901489994972718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08166706473507901, 2);
  sqcRYGate(q, -0.05628805670944295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.764859610591246, 3);
  sqcRYGate(q, 2.2459212662128216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.48131889652219, 3);
  sqcRYGate(q, 1.4926505732062179, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13109334452772625, 4);
  sqcRYGate(q, -1.5884026988748459, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.01445638290260387, 4);
  sqcRYGate(q, -1.4528071979937358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7135131580052363, 5);
  sqcRYGate(q, -2.3744252042981318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.428351270205404, 5);
  sqcRYGate(q, 0.3458597986256332, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2356091065049524, 6);
  sqcRYGate(q, 1.8115285929300489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5450813704104407, 6);
  sqcRYGate(q, 1.9305168781235669, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.97414701586386, 7);
  sqcRYGate(q, -0.7821721065009322, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5261442987961802, 7);
  sqcRYGate(q, -3.0575079328620958, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.700920380247545, 8);
  sqcRYGate(q, 1.8599081311958898, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7333669411357626, 8);
  sqcRYGate(q, 2.6829267401817534, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8556245639868574, 9);
  sqcRYGate(q, 1.8795029392411378, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0804739992734738, 9);
  sqcRYGate(q, 1.8813965550369618, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9362432637493631, 10);
  sqcRYGate(q, 0.9405411167031351, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.894248042345728, 10);
  sqcRYGate(q, 2.7393285012322357, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.31428497191724597, 0);
  sqcRYGate(q, -1.020409868697283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2617704084750683, 0);
  sqcRYGate(q, -1.1488627616484532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8413203213561253, 1);
  sqcRYGate(q, -3.0414130900487457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8518959578547047, 1);
  sqcRYGate(q, 1.6494849194130914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04319416789468544, 2);
  sqcRYGate(q, -2.8801218783423033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6583115076942843, 2);
  sqcRYGate(q, -2.415475758666082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5739767564743063, 3);
  sqcRYGate(q, 2.104806477116071, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.11178543112524421, 3);
  sqcRYGate(q, -1.5685158437800073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3600578897607515, 4);
  sqcRYGate(q, -1.6308171774284892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6655899647875063, 4);
  sqcRYGate(q, 0.01730457747537617, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.598895154542587, 5);
  sqcRYGate(q, -2.5733471579751654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0673218043824848, 5);
  sqcRYGate(q, 1.6116870521851079, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.201935134916723, 6);
  sqcRYGate(q, -0.5825490379095358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10106089462526757, 6);
  sqcRYGate(q, -1.6346878226904848, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9952855600387664, 7);
  sqcRYGate(q, -1.617221791974334, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.486286023042666, 7);
  sqcRYGate(q, 2.564549206080206, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2046894808022093, 8);
  sqcRYGate(q, 1.754836716559537, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4332480062233044, 8);
  sqcRYGate(q, -2.5979346825013896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5468731497758155, 9);
  sqcRYGate(q, -2.154560545115932, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8917940458135134, 9);
  sqcRYGate(q, 0.9974828559958757, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5915553682133536, 10);
  sqcRYGate(q, -1.4116266437974903, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7825815619726999, 10);
  sqcRYGate(q, 1.5152844905956346, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.27890422634826084, 0);
  sqcRYGate(q, -2.7419269432940157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.108288981703162, 0);
  sqcRYGate(q, -0.4291399289865252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3702434870197013, 1);
  sqcRYGate(q, -1.2010700382643524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03554546891297505, 1);
  sqcRYGate(q, 1.0370961073680864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9851168846317788, 2);
  sqcRYGate(q, -0.975019229797052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.492371567882864, 2);
  sqcRYGate(q, -1.5671188759069847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3363264762224167, 3);
  sqcRYGate(q, -3.054363173380611, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.141834168073786, 3);
  sqcRYGate(q, -1.8319844442406417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6602680000699024, 4);
  sqcRYGate(q, -1.522568937266862, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9672678846927367, 4);
  sqcRYGate(q, -2.5266676987381445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9942360587065373, 5);
  sqcRYGate(q, -2.191425246759823, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1192528801179487, 5);
  sqcRYGate(q, 3.121965336188946, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9576911016626255, 6);
  sqcRYGate(q, -1.31642239558788, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0550126301672016, 6);
  sqcRYGate(q, 0.039161751884427394, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.901200144147987, 7);
  sqcRYGate(q, -2.850968029555253, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.027861245813017, 7);
  sqcRYGate(q, 0.30533179312539094, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9767313923389915, 8);
  sqcRYGate(q, -0.07903494985995341, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.995339771100238, 8);
  sqcRYGate(q, 2.742163027320788, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6548016002878585, 9);
  sqcRYGate(q, -1.614068131929981, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1627420771499484, 9);
  sqcRYGate(q, 1.2108608923607027, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.11306853239366398, 10);
  sqcRYGate(q, -1.6743136914755428, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4968741607886615, 10);
  sqcRYGate(q, 1.5482780590930227, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7801006092466443, 0);
  sqcRYGate(q, 2.391109664358854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9656319034490326, 0);
  sqcRYGate(q, 0.11906477065234268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16496818064664878, 1);
  sqcRYGate(q, 2.6576228531670227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01021132922814072, 1);
  sqcRYGate(q, -1.7039327025872184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0483370808816375, 2);
  sqcRYGate(q, 1.9176393799594482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.451868043251604, 2);
  sqcRYGate(q, -0.8043223190727781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8493163673825244, 3);
  sqcRYGate(q, 1.6082869277366019, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1789709493331264, 3);
  sqcRYGate(q, 0.00045599003891982903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0823563053950904, 4);
  sqcRYGate(q, 2.3395257821934576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0885799647352643, 4);
  sqcRYGate(q, 0.6711046248915847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23789855198957796, 5);
  sqcRYGate(q, -2.7351222617960875, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.014388604298182261, 5);
  sqcRYGate(q, -1.5236172352356459, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.006325825523710466, 6);
  sqcRYGate(q, -0.4442417119468036, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.60206525055772, 6);
  sqcRYGate(q, -3.1397250840858946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9973136704719534, 7);
  sqcRYGate(q, 1.7606036770317743, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1235277914967625, 7);
  sqcRYGate(q, -3.115507973331963, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6483329678695693, 8);
  sqcRYGate(q, 2.417837105012113, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.2838673324678114, 8);
  sqcRYGate(q, 1.6465137112515738, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6736954227813499, 9);
  sqcRYGate(q, 0.37531076391600227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6324309931896839, 9);
  sqcRYGate(q, -1.541269467692859, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9940672115416427, 10);
  sqcRYGate(q, 1.4788594032595728, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9934166062776368, 10);
  sqcRYGate(q, -0.17675192475174395, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9151966119717201, 0);
  sqcRYGate(q, 1.591591900862323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.838350514174488, 0);
  sqcRYGate(q, -2.911767152352042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.881264848715784, 1);
  sqcRYGate(q, -0.46517975881044304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5892788057294247, 1);
  sqcRYGate(q, -0.15257890043742872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.030746998194872505, 2);
  sqcRYGate(q, -0.4962382348655163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5557523305506353, 2);
  sqcRYGate(q, -1.5778915083133935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.013716385303932377, 3);
  sqcRYGate(q, -0.3506181248870485, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5626134146351085, 3);
  sqcRYGate(q, 1.5342647645539698, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07145536969665223, 4);
  sqcRYGate(q, 1.7396649067777694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0073174339399075805, 4);
  sqcRYGate(q, 3.0273375302203283, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8186798111897857, 5);
  sqcRYGate(q, 0.14489252754827664, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5018229520731141, 5);
  sqcRYGate(q, 1.6742945184505655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2088958390377407, 6);
  sqcRYGate(q, 0.19973522467569804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7382949611886832, 6);
  sqcRYGate(q, 3.0338347942011312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.624649047419842, 7);
  sqcRYGate(q, 2.0652892233631075, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1379192941252954, 7);
  sqcRYGate(q, 0.04567995502849076, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.204476326991964, 8);
  sqcRYGate(q, 1.5418204944185416, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9379377594261458, 8);
  sqcRYGate(q, -1.9063364235592197, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9273969148860125, 9);
  sqcRYGate(q, 1.9971449965431045, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6551386421848546, 9);
  sqcRYGate(q, -1.2914148227851494, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.005981502692138, 10);
  sqcRYGate(q, -0.9683607140655015, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7356108613993357, 10);
  sqcRYGate(q, 1.9548075565982161, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.23514452889734372, 0);
  sqcRYGate(q, 1.8789522077070977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.428475126416607, 0);
  sqcRYGate(q, 1.3371206983350081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.264777214239478, 1);
  sqcRYGate(q, 1.374442765847049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03514052668447931, 1);
  sqcRYGate(q, 0.13750429028015088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5001757759517806, 2);
  sqcRYGate(q, -0.018244961743135057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.580874398299021, 2);
  sqcRYGate(q, 1.5703293633217303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15181143258029284, 3);
  sqcRYGate(q, -0.08347235247149687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6914706531672499, 3);
  sqcRYGate(q, 0.04376342259834805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.66700010893012, 4);
  sqcRYGate(q, 0.9971286398891639, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.017295963803257486, 4);
  sqcRYGate(q, 0.03891781262229601, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1792917053333372, 5);
  sqcRYGate(q, -1.9795096251064994, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09108664604109862, 5);
  sqcRYGate(q, 0.15671365579340968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9155255441788084, 6);
  sqcRYGate(q, -1.336523012602591, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2980816335707575, 6);
  sqcRYGate(q, -1.5062936622369243, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9413053807996277, 7);
  sqcRYGate(q, -1.23333105027133, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0008927889323473437, 7);
  sqcRYGate(q, -2.0381379575432694, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8693628331888066, 8);
  sqcRYGate(q, 1.0110537384666765, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.39486198554500324, 8);
  sqcRYGate(q, -0.0970716658202786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.30331170363533655, 9);
  sqcRYGate(q, 3.018541283573208, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4702698829265037, 9);
  sqcRYGate(q, 2.05239276331125, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5461502542103696, 10);
  sqcRYGate(q, -0.3580783673218829, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.23231475158830545, 10);
  sqcRYGate(q, -1.5682764152411905, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3703425158599403, 0);
  sqcRYGate(q, -2.2887234848194775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6821662190577813, 0);
  sqcRYGate(q, -2.3782067388573096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3946264883506123, 1);
  sqcRYGate(q, -1.5634968484230845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5637166951589725, 1);
  sqcRYGate(q, -1.567135517882079, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1380844843131888, 2);
  sqcRYGate(q, -1.1120736160087883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.130048436260273, 2);
  sqcRYGate(q, 1.5720337802878424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5188374558920597, 3);
  sqcRYGate(q, 2.3394037588856507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9793271592244204, 3);
  sqcRYGate(q, 1.5942120200645857, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.956412089391927, 4);
  sqcRYGate(q, -0.10634975768904198, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0809983815874062, 4);
  sqcRYGate(q, -3.1344817574884734, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05434548527305871, 5);
  sqcRYGate(q, 3.027636249401902, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5706294448274187, 5);
  sqcRYGate(q, -0.028780754485832855, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.023745791757923768, 6);
  sqcRYGate(q, 0.04174766537355179, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.14280414248192397, 6);
  sqcRYGate(q, 3.129662045250089, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0401798817271293, 7);
  sqcRYGate(q, -0.9878757720535287, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5710530022324374, 7);
  sqcRYGate(q, -1.9876711212008562, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5709368229696432, 8);
  sqcRYGate(q, 2.105230022175266, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5713757224684182, 8);
  sqcRYGate(q, -0.8995899736551074, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.572696122147268, 9);
  sqcRYGate(q, 0.24501722576059937, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5684192957462542, 9);
  sqcRYGate(q, -1.2860599253008376, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5704990817166564, 10);
  sqcRYGate(q, -0.09223169864511391, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.571198735704666, 10);
  sqcRYGate(q, -1.563753202825354, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0158001878022374, 0);
  sqcRYGate(q, 2.9901194680138365, 1);
  sqcRYGate(q, 3.109888204892316, 2);
  sqcRYGate(q, 1.4038166365131612, 3);
  sqcRYGate(q, 2.7377143884742727, 4);
  sqcRYGate(q, 1.150933222614011, 5);
  sqcRYGate(q, 1.418921675008506, 6);
  sqcRYGate(q, 1.3861458310287311, 7);
  sqcRYGate(q, -1.7103407141905649, 8);
  sqcRYGate(q, -1.7226388756008388, 9);
  sqcRYGate(q, -1.7099550046028817, 10);
  sqcRYGate(q, -1.722478962683299, 11);

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
