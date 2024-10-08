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

  sqcRYGate(q, -1.244912051349554, 0);
  sqcRZGate(q, -1.4240917072718566, 0);
  sqcRYGate(q, -0.7347580499828205, 1);
  sqcRZGate(q, -2.5346528372880055, 1);
  sqcRYGate(q, 2.1704958196492115, 2);
  sqcRZGate(q, -0.46167128977641203, 2);
  sqcRYGate(q, -1.9989003874943552, 3);
  sqcRZGate(q, -2.8854130747551974, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.873593322695588, 0);
  sqcRZGate(q, -1.6828348445257257, 0);
  sqcRYGate(q, 2.535384911125146, 1);
  sqcRZGate(q, 1.1058929546382856, 1);
  sqcRYGate(q, -1.7639338878143649, 2);
  sqcRZGate(q, 0.9648309154972798, 2);
  sqcRYGate(q, -0.7740555900979275, 3);
  sqcRZGate(q, 0.8701147611745883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.174470501644234, 0);
  sqcRZGate(q, 1.794278581873932, 0);
  sqcRYGate(q, 2.7079600055323896, 1);
  sqcRZGate(q, -2.4361904964146466, 1);
  sqcRYGate(q, -0.8581140587821401, 2);
  sqcRZGate(q, 2.506791532812825, 2);
  sqcRYGate(q, -1.1670508729507356, 3);
  sqcRZGate(q, 1.3171007429600188, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4209123013113123, 0);
  sqcRZGate(q, -2.3300355607724814, 0);
  sqcRYGate(q, -0.5500730535592613, 1);
  sqcRZGate(q, 0.1372903452331453, 1);
  sqcRYGate(q, -2.9621898645405036, 2);
  sqcRZGate(q, 2.744335509323856, 2);
  sqcRYGate(q, 0.5670279698901379, 3);
  sqcRZGate(q, -0.952620677352814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2159265131440347, 0);
  sqcRZGate(q, -2.0288712329216594, 0);
  sqcRYGate(q, -1.545917788667768, 1);
  sqcRZGate(q, -1.705074390701495, 1);
  sqcRYGate(q, -3.067555774023379, 2);
  sqcRZGate(q, -1.8079575027802355, 2);
  sqcRYGate(q, -0.1189419299455512, 3);
  sqcRZGate(q, -0.2196150669494329, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4443355485314262, 0);
  sqcRZGate(q, 0.09477728302762499, 0);
  sqcRYGate(q, 2.403845771034995, 1);
  sqcRZGate(q, 2.6141480224687763, 1);
  sqcRYGate(q, -0.32259894038456327, 2);
  sqcRZGate(q, -0.2582737725086987, 2);
  sqcRYGate(q, 1.6214685695126008, 3);
  sqcRZGate(q, -0.6991560604067432, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.668662934309327, 0);
  sqcRZGate(q, 1.3528756545397567, 0);
  sqcRYGate(q, -3.0074076540947763, 1);
  sqcRZGate(q, 1.0511411443094496, 1);
  sqcRYGate(q, -1.886298702572006, 2);
  sqcRZGate(q, 2.7703411510290117, 2);
  sqcRYGate(q, 0.3741156253416786, 3);
  sqcRZGate(q, 0.6880012609154811, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8186175296754477, 0);
  sqcRZGate(q, 1.7616412056464297, 0);
  sqcRYGate(q, 1.7951972191290109, 1);
  sqcRZGate(q, -0.17385554149320814, 1);
  sqcRYGate(q, -0.6557953212468564, 2);
  sqcRZGate(q, 1.4660754272128955, 2);
  sqcRYGate(q, -1.4333336863111612, 3);
  sqcRZGate(q, -0.5844274878900373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.180864856876652, 0);
  sqcRZGate(q, 0.854523520878696, 0);
  sqcRYGate(q, 0.10617831988775278, 1);
  sqcRZGate(q, 2.2709035887864237, 1);
  sqcRYGate(q, 2.3821898091274556, 2);
  sqcRZGate(q, 1.8236186223049327, 2);
  sqcRYGate(q, 0.3135542201776325, 3);
  sqcRZGate(q, 2.663313881370575, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8340210936997634, 0);
  sqcRZGate(q, -1.6845876219873692, 0);
  sqcRYGate(q, -0.14492709508249657, 1);
  sqcRZGate(q, 0.47753221112291167, 1);
  sqcRYGate(q, -0.4006442328035025, 2);
  sqcRZGate(q, 0.8619562786079245, 2);
  sqcRYGate(q, -1.5288979867155827, 3);
  sqcRZGate(q, -2.007937258326641, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7798606761392, 0);
  sqcRZGate(q, 0.7118397010843369, 0);
  sqcRYGate(q, 0.15556285209628926, 1);
  sqcRZGate(q, 0.8804978662947504, 1);
  sqcRYGate(q, -1.5241992274263285, 2);
  sqcRZGate(q, 1.1766974716104133, 2);
  sqcRYGate(q, 3.062062334041513, 3);
  sqcRZGate(q, -2.099265533095294, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1262585334636874, 0);
  sqcRZGate(q, -2.802941854564372, 0);
  sqcRYGate(q, 1.471468336589413, 1);
  sqcRZGate(q, 2.303264632596712, 1);
  sqcRYGate(q, 1.3740066575941734, 2);
  sqcRZGate(q, 1.649857949972206, 2);
  sqcRYGate(q, -2.670189513439036, 3);
  sqcRZGate(q, -0.520043585090856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.010518153508199917, 0);
  sqcRZGate(q, 1.8997202908656963, 0);
  sqcRYGate(q, 1.5715988744735316, 1);
  sqcRZGate(q, -1.771351307849765, 1);
  sqcRYGate(q, -1.2945560775894753, 2);
  sqcRZGate(q, 1.3720860738176937, 2);
  sqcRYGate(q, 1.4866672701740788, 3);
  sqcRZGate(q, 1.3263893507844702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7172731558157602, 0);
  sqcRZGate(q, -0.3466283398979644, 0);
  sqcRYGate(q, -0.10673243025103174, 1);
  sqcRZGate(q, 0.33783936057444286, 1);
  sqcRYGate(q, 0.09690341058474417, 2);
  sqcRZGate(q, 2.3998490456805373, 2);
  sqcRYGate(q, 1.5318607627831087, 3);
  sqcRZGate(q, -1.272182414046608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.167303349273766, 0);
  sqcRZGate(q, -1.8838205088506943, 0);
  sqcRYGate(q, -1.3860830259466912, 1);
  sqcRZGate(q, 0.8542616432108154, 1);
  sqcRYGate(q, -2.9656649112412463, 2);
  sqcRZGate(q, 1.379703787283488, 2);
  sqcRYGate(q, 2.5208592571527646, 3);
  sqcRZGate(q, 0.3718881091863788, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.718563521471678, 0);
  sqcRZGate(q, -1.9418132163663016, 0);
  sqcRYGate(q, -2.42488500185577, 1);
  sqcRZGate(q, 1.8660138349305377, 1);
  sqcRYGate(q, 1.224630802301844, 2);
  sqcRZGate(q, 1.6758634514112885, 2);
  sqcRYGate(q, 1.0752962119528109, 3);
  sqcRZGate(q, 1.0428145175374928, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8507697429651474, 0);
  sqcRZGate(q, 2.1437242196521273, 0);
  sqcRYGate(q, -0.9776946807670633, 1);
  sqcRZGate(q, -0.5617130390964666, 1);
  sqcRYGate(q, -0.8391201360059283, 2);
  sqcRZGate(q, -0.9684569938945107, 2);
  sqcRYGate(q, 2.1075170068467513, 3);
  sqcRZGate(q, -0.3633983277907067, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.815632424771437, 0);
  sqcRZGate(q, 0.0325009433389201, 0);
  sqcRYGate(q, 0.14638916902560162, 1);
  sqcRZGate(q, 0.18138475763160766, 1);
  sqcRYGate(q, 1.202879680030076, 2);
  sqcRZGate(q, -2.3274814647737063, 2);
  sqcRYGate(q, -1.525076183191982, 3);
  sqcRZGate(q, -2.50317770320543, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.19857101143224545, 0);
  sqcRZGate(q, 0.49195175968871124, 0);
  sqcRYGate(q, 1.2276605597192327, 1);
  sqcRZGate(q, -0.41458942629100554, 1);
  sqcRYGate(q, 2.2228529394883436, 2);
  sqcRZGate(q, -1.6923310019468998, 2);
  sqcRYGate(q, -0.8160944669792911, 3);
  sqcRZGate(q, 0.956650140588863, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3240969269960328, 0);
  sqcRZGate(q, -2.3363281541582586, 0);
  sqcRYGate(q, 0.2681061257610624, 1);
  sqcRZGate(q, -0.9332356560198638, 1);
  sqcRYGate(q, 1.5165751280046393, 2);
  sqcRZGate(q, -2.0071866571295147, 2);
  sqcRYGate(q, -2.4029315458245897, 3);
  sqcRZGate(q, 2.8529078044888223, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8409578253408623, 0);
  sqcRZGate(q, 1.877689162609333, 0);
  sqcRYGate(q, -2.8013420967358584, 1);
  sqcRZGate(q, -0.3514097046437728, 1);
  sqcRYGate(q, 2.6004289415512982, 2);
  sqcRZGate(q, -2.8810332539541523, 2);
  sqcRYGate(q, -2.8693900835843453, 3);
  sqcRZGate(q, -1.5837971784072855, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3675451799235914, 0);
  sqcRZGate(q, 3.0602364909979944, 0);
  sqcRYGate(q, -0.48028599616189954, 1);
  sqcRZGate(q, -2.1063460223270116, 1);
  sqcRYGate(q, -0.8419530247411906, 2);
  sqcRZGate(q, -2.569498438507761, 2);
  sqcRYGate(q, -0.14891500487638698, 3);
  sqcRZGate(q, -2.381817708936959, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.305936368837191, 0);
  sqcRZGate(q, 2.7739748589570876, 0);
  sqcRYGate(q, 2.4298226726463064, 1);
  sqcRZGate(q, 2.409638243451648, 1);
  sqcRYGate(q, -0.7621663154950832, 2);
  sqcRZGate(q, -0.9653517790940225, 2);
  sqcRYGate(q, -1.9048893987743891, 3);
  sqcRZGate(q, -1.3378499295332462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7435326698825332, 0);
  sqcRZGate(q, 2.9460734280170664, 0);
  sqcRYGate(q, 0.006493838560952092, 1);
  sqcRZGate(q, 2.0375374440115372, 1);
  sqcRYGate(q, 0.23984804936920057, 2);
  sqcRZGate(q, -2.0062041655959018, 2);
  sqcRYGate(q, 0.3363266804595087, 3);
  sqcRZGate(q, 2.9543852601437943, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.259826285211269, 0);
  sqcRZGate(q, -1.7473862467603265, 0);
  sqcRYGate(q, -0.5545214837195989, 1);
  sqcRZGate(q, -2.029230257218899, 1);
  sqcRYGate(q, -3.063104129374855, 2);
  sqcRZGate(q, 2.699517300707072, 2);
  sqcRYGate(q, -1.8023335169325978, 3);
  sqcRZGate(q, 1.3179665938119312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9949609507284953, 0);
  sqcRZGate(q, 2.1564530900939785, 0);
  sqcRYGate(q, -0.36578327665149074, 1);
  sqcRZGate(q, -2.6565314039328487, 1);
  sqcRYGate(q, 0.38940414223570397, 2);
  sqcRZGate(q, -1.2792756218590382, 2);
  sqcRYGate(q, -2.2160278424038538, 3);
  sqcRZGate(q, -0.2985557621371715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4149313763641314, 0);
  sqcRZGate(q, 1.906935487982957, 0);
  sqcRYGate(q, -1.3172456115219262, 1);
  sqcRZGate(q, 2.7695896228047934, 1);
  sqcRYGate(q, 0.7765740607248688, 2);
  sqcRZGate(q, -0.6218023274303981, 2);
  sqcRYGate(q, 1.3689317278671198, 3);
  sqcRZGate(q, 1.0776378758992837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.1002397836742164, 0);
  sqcRZGate(q, 2.24961009302987, 0);
  sqcRYGate(q, 1.8257162510842373, 1);
  sqcRZGate(q, 0.06835879133876563, 1);
  sqcRYGate(q, -2.902046863795655, 2);
  sqcRZGate(q, 3.1262155824274855, 2);
  sqcRYGate(q, 2.34524804601472, 3);
  sqcRZGate(q, 1.9584650307178846, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2755926176973058, 0);
  sqcRZGate(q, 1.6810142039103106, 0);
  sqcRYGate(q, 1.8170499134353264, 1);
  sqcRZGate(q, -0.2874642984499296, 1);
  sqcRYGate(q, -1.0540961758625134, 2);
  sqcRZGate(q, 1.7202911442660742, 2);
  sqcRYGate(q, 2.406321142004581, 3);
  sqcRZGate(q, -2.4440079218210955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.105379582898733, 0);
  sqcRZGate(q, 1.911846162794082, 0);
  sqcRYGate(q, 0.7365369948018151, 1);
  sqcRZGate(q, 1.7663513616908806, 1);
  sqcRYGate(q, -2.877846196506565, 2);
  sqcRZGate(q, -2.6828857948968317, 2);
  sqcRYGate(q, 2.1420092856757793, 3);
  sqcRZGate(q, -2.49703056398782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5499048775360942, 0);
  sqcRZGate(q, 1.5793539912926375, 0);
  sqcRYGate(q, 0.31701431061586227, 1);
  sqcRZGate(q, 3.057927456382043, 1);
  sqcRYGate(q, -1.187260633257941, 2);
  sqcRZGate(q, 0.414482280572563, 2);
  sqcRYGate(q, -1.411565896815355, 3);
  sqcRZGate(q, -0.15352958745883868, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4577402068814282, 0);
  sqcRZGate(q, -0.32994751511299825, 0);
  sqcRYGate(q, -0.8647267878603566, 1);
  sqcRZGate(q, -2.2032426629902204, 1);
  sqcRYGate(q, 2.999239673162705, 2);
  sqcRZGate(q, 1.5558195223031817, 2);
  sqcRYGate(q, -1.6785076183316003, 3);
  sqcRZGate(q, -0.9815349433138413, 3);

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
