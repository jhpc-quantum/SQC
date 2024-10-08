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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.134773284700719, 0);
  sqcRZGate(q, 0.0002176235356419198, 0);
  sqcRYGate(q, 1.5766069297410619, 1);
  sqcRZGate(q, 0.12321192249684643, 1);
  sqcRYGate(q, -1.5707037242178659, 2);
  sqcRZGate(q, 0.001153037752487762, 2);
  sqcRYGate(q, -1.5706721022874408, 3);
  sqcRZGate(q, 3.1392631571642795, 3);
  sqcRYGate(q, -3.13836377938636, 4);
  sqcRZGate(q, 2.583755027903755, 4);
  sqcRYGate(q, 2.235998601667228, 5);
  sqcRZGate(q, -0.7818545814570341, 5);
  sqcRYGate(q, -3.1290273400816977, 6);
  sqcRZGate(q, -2.698565304817426, 6);
  sqcRYGate(q, 1.5740084941946544, 7);
  sqcRZGate(q, -1.5771519088462302, 7);
  sqcRYGate(q, 1.5696055587360827, 8);
  sqcRZGate(q, -3.1402249753019915, 8);
  sqcRYGate(q, -1.5392472981458365, 9);
  sqcRZGate(q, 1.7288939790694497, 9);
  sqcRYGate(q, 0.0015966224935077948, 10);
  sqcRZGate(q, -2.1440393242931295, 10);
  sqcRYGate(q, 3.040966873834751, 11);
  sqcRZGate(q, -2.226802032551423, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5715481726129779, 0);
  sqcRZGate(q, -0.29025903073059683, 0);
  sqcRYGate(q, -0.0015157017515274873, 1);
  sqcRZGate(q, 3.0182478103758794, 1);
  sqcRYGate(q, 2.5113073678909483, 2);
  sqcRZGate(q, 0.011419427430985783, 2);
  sqcRYGate(q, -1.5709777211575802, 3);
  sqcRZGate(q, -1.9184300552505302, 3);
  sqcRYGate(q, 3.0151289108992785e-05, 4);
  sqcRZGate(q, 0.5271515584969535, 4);
  sqcRYGate(q, -3.1387398760401353, 5);
  sqcRZGate(q, -1.457079268058849, 5);
  sqcRYGate(q, 1.570169518349281, 6);
  sqcRZGate(q, -3.120007179532262, 6);
  sqcRYGate(q, -0.19693873326309624, 7);
  sqcRZGate(q, 0.7204750576271557, 7);
  sqcRYGate(q, -1.5711760954684504, 8);
  sqcRZGate(q, -1.4101374201888004, 8);
  sqcRYGate(q, 0.4605525526349982, 9);
  sqcRZGate(q, 2.295778135272703, 9);
  sqcRYGate(q, -0.4304960014115906, 10);
  sqcRZGate(q, 2.149536662183638, 10);
  sqcRYGate(q, 3.1329845273263355, 11);
  sqcRZGate(q, 0.9400317588804556, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.3575279320237448, 0);
  sqcRZGate(q, -1.3252414538403823, 0);
  sqcRYGate(q, 1.5744753635720934, 1);
  sqcRZGate(q, 3.1386452658005943, 1);
  sqcRYGate(q, -2.136342041121201, 2);
  sqcRZGate(q, -1.5619306530569013, 2);
  sqcRYGate(q, 1.5704255804316025, 3);
  sqcRZGate(q, 3.141590369243645, 3);
  sqcRYGate(q, 1.570942941443481, 4);
  sqcRZGate(q, -3.0812738629786973, 4);
  sqcRYGate(q, -0.0003394779972132731, 5);
  sqcRZGate(q, 2.425470207792102, 5);
  sqcRYGate(q, -1.556965531186174, 6);
  sqcRZGate(q, 3.0991833435892393, 6);
  sqcRYGate(q, -3.107435642572904, 7);
  sqcRZGate(q, 2.0700935994046574, 7);
  sqcRYGate(q, -1.5450532377498138, 8);
  sqcRZGate(q, 1.7040904152685057, 8);
  sqcRYGate(q, 1.5642877019858057, 9);
  sqcRZGate(q, -3.141544007911134, 9);
  sqcRYGate(q, 3.057662484769438, 10);
  sqcRZGate(q, 2.1629506011106336, 10);
  sqcRYGate(q, -0.10381492307646399, 11);
  sqcRZGate(q, 1.842732680819834, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.1087212387294683, 0);
  sqcRZGate(q, 1.2907555743508663, 0);
  sqcRYGate(q, -1.5670074659757045, 1);
  sqcRZGate(q, -0.12650335231968857, 1);
  sqcRYGate(q, 1.57148703415562, 2);
  sqcRZGate(q, 1.5119467671656093, 2);
  sqcRYGate(q, 1.5707454020286464, 3);
  sqcRZGate(q, 2.2828739493259587, 3);
  sqcRYGate(q, -3.141561087928624, 4);
  sqcRZGate(q, -0.05801929749387803, 4);
  sqcRYGate(q, 2.9127608264813643, 5);
  sqcRZGate(q, -2.9132326160981843, 5);
  sqcRYGate(q, 0.010923855348918073, 6);
  sqcRZGate(q, -1.6826856748572503, 6);
  sqcRYGate(q, -0.00869876878437914, 7);
  sqcRZGate(q, -2.9196321159736667, 7);
  sqcRYGate(q, -1.5303704123602557, 8);
  sqcRZGate(q, -3.117166105172865, 8);
  sqcRYGate(q, 1.3816141814054033, 9);
  sqcRZGate(q, -0.004637503805363806, 9);
  sqcRYGate(q, -1.6400486356974606, 10);
  sqcRZGate(q, 3.133663326117773, 10);
  sqcRYGate(q, -3.13954072677969, 11);
  sqcRZGate(q, 1.9659046699652665, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5759538565382518, 0);
  sqcRZGate(q, 2.6998778826835177, 0);
  sqcRYGate(q, 0.00014972046985433092, 1);
  sqcRZGate(q, -2.534093588673447, 1);
  sqcRYGate(q, 1.5698884660077619, 2);
  sqcRZGate(q, -1.5721418502429725, 2);
  sqcRYGate(q, -2.9437456394542557e-06, 3);
  sqcRZGate(q, 2.5444836369834123, 3);
  sqcRYGate(q, -3.138573003465219, 4);
  sqcRZGate(q, 1.4638625288950526, 4);
  sqcRYGate(q, -3.04642459148012, 5);
  sqcRZGate(q, -1.6850870561965163, 5);
  sqcRYGate(q, -3.136079192848199, 6);
  sqcRZGate(q, 1.8381527917992413, 6);
  sqcRYGate(q, 1.8307415639424223, 7);
  sqcRZGate(q, -2.2963683805744304, 7);
  sqcRYGate(q, 1.0821687446897874, 8);
  sqcRZGate(q, 1.5621984221619365, 8);
  sqcRYGate(q, -1.5672862594800923, 9);
  sqcRZGate(q, 1.6025354549360395, 9);
  sqcRYGate(q, 2.041456153564779, 10);
  sqcRZGate(q, -3.1238660902207434, 10);
  sqcRYGate(q, -0.057335377560643275, 11);
  sqcRZGate(q, -0.13831259482278835, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.04043383780623432, 0);
  sqcRZGate(q, 0.8374834274362515, 0);
  sqcRYGate(q, -1.5707460395944253, 1);
  sqcRZGate(q, 0.0063137291856068326, 1);
  sqcRYGate(q, -1.570912774741614, 2);
  sqcRZGate(q, 1.9796007913614553, 2);
  sqcRYGate(q, 1.5705057853791735, 3);
  sqcRZGate(q, 1.5704107881057792, 3);
  sqcRYGate(q, 3.1359833437855418, 4);
  sqcRZGate(q, 0.01123439851013952, 4);
  sqcRYGate(q, 0.18252728060810033, 5);
  sqcRZGate(q, -0.5248458803191017, 5);
  sqcRYGate(q, -0.0006616795585765445, 6);
  sqcRZGate(q, -0.12555815672235465, 6);
  sqcRYGate(q, -3.1264548516630017, 7);
  sqcRZGate(q, 1.819399197137019, 7);
  sqcRYGate(q, 1.5692349862661388, 8);
  sqcRZGate(q, 0.05517542277679114, 8);
  sqcRYGate(q, -0.3876495526683268, 9);
  sqcRZGate(q, -1.5486336865709391, 9);
  sqcRYGate(q, 1.9932714953303217, 10);
  sqcRZGate(q, 3.12314765663221, 10);
  sqcRYGate(q, 0.33586183422847515, 11);
  sqcRZGate(q, -1.4244563739861826, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.1412503479940184, 0);
  sqcRZGate(q, 0.011384861981961867, 0);
  sqcRYGate(q, 2.758803953256778, 1);
  sqcRZGate(q, -1.5989207286791434, 1);
  sqcRYGate(q, -3.1272616138004987, 2);
  sqcRZGate(q, -1.1626284521420647, 2);
  sqcRYGate(q, 1.535313924602207, 3);
  sqcRZGate(q, 0.02443429790647489, 3);
  sqcRYGate(q, 1.390444742148052, 4);
  sqcRZGate(q, -2.825638769622733, 4);
  sqcRYGate(q, 3.141589319117902, 5);
  sqcRZGate(q, -2.0800864196496196, 5);
  sqcRYGate(q, -3.117637490928289, 6);
  sqcRZGate(q, 0.3001192565849413, 6);
  sqcRYGate(q, -0.09340148656723864, 7);
  sqcRZGate(q, -1.372272493413844, 7);
  sqcRYGate(q, -1.7901690749411003, 8);
  sqcRZGate(q, 3.1404322354715086, 8);
  sqcRYGate(q, 2.7712642675255728, 9);
  sqcRZGate(q, 2.0151694316649795, 9);
  sqcRYGate(q, -1.5712098335665097, 10);
  sqcRZGate(q, 3.1081749834549735, 10);
  sqcRYGate(q, -1.6383351957574879, 11);
  sqcRZGate(q, 1.032817255240737, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5335355723900097, 0);
  sqcRZGate(q, 2.8740885266122334, 0);
  sqcRYGate(q, -0.022833383432344867, 1);
  sqcRZGate(q, -3.1075558315872365, 1);
  sqcRYGate(q, 1.5709435464943773, 2);
  sqcRZGate(q, -0.17330419275602424, 2);
  sqcRYGate(q, 0.04191203200915261, 3);
  sqcRZGate(q, -0.0247138658379491, 3);
  sqcRYGate(q, 0.0004093543089590884, 4);
  sqcRZGate(q, 2.8250293276701246, 4);
  sqcRYGate(q, 0.023807247840249346, 5);
  sqcRZGate(q, -1.3496501837405699, 5);
  sqcRYGate(q, -3.0476398381159253, 6);
  sqcRZGate(q, -3.1355540696953983, 6);
  sqcRYGate(q, 0.008760450901778617, 7);
  sqcRZGate(q, -1.1647729952183654, 7);
  sqcRYGate(q, 0.16562201601270132, 8);
  sqcRZGate(q, -1.554034127197518, 8);
  sqcRYGate(q, -3.109089643884899, 9);
  sqcRZGate(q, -0.5731256090153147, 9);
  sqcRYGate(q, -3.121873914415935, 10);
  sqcRZGate(q, -1.6029469723459915, 10);
  sqcRYGate(q, -1.5703384290906772, 11);
  sqcRZGate(q, -1.5735651199828036, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.140242067026879, 0);
  sqcRZGate(q, 0.0010557485482305395, 0);
  sqcRYGate(q, 1.5700929691520038, 1);
  sqcRZGate(q, -1.2875846962337547, 1);
  sqcRYGate(q, -3.1413391758950926, 2);
  sqcRZGate(q, 1.6663066631703802, 2);
  sqcRYGate(q, -1.5711911060638504, 3);
  sqcRZGate(q, -1.3005996483200084, 3);
  sqcRYGate(q, -1.569442947267816, 4);
  sqcRZGate(q, 1.848528658999008, 4);
  sqcRYGate(q, -0.0017729220722744188, 5);
  sqcRZGate(q, -1.6900118033282878, 5);
  sqcRYGate(q, -1.5519062366258778, 6);
  sqcRZGate(q, 1.8627278133294674, 6);
  sqcRYGate(q, -1.6445299888889728, 7);
  sqcRZGate(q, 2.131992375511866, 7);
  sqcRYGate(q, -1.6295084692138744, 8);
  sqcRZGate(q, 2.171965800985755, 8);
  sqcRYGate(q, 0.0014286831303866876, 9);
  sqcRZGate(q, -1.8110493306114233, 9);
  sqcRYGate(q, 1.5713149055877818, 10);
  sqcRZGate(q, 0.3620910780601899, 10);
  sqcRYGate(q, 1.5701602105936914, 11);
  sqcRZGate(q, 0.23662024477731158, 11);

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
