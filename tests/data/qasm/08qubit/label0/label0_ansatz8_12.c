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

  sqcRYGate(q, -0.41797251855365475, 0);
  sqcRYGate(q, 0.11281856224875109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.517903903456375, 0);
  sqcRYGate(q, 0.03281046908028884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5043887769791773, 2);
  sqcRYGate(q, 1.0358043206197325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4785456090864981, 2);
  sqcRYGate(q, 2.422765121718306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.081728299685346, 4);
  sqcRYGate(q, -0.32308980619286665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13063579827737468, 4);
  sqcRYGate(q, 0.2591651856239361, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4647916225983595, 6);
  sqcRYGate(q, 1.5603039024141012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.596221723770048, 6);
  sqcRYGate(q, -0.009394628934036742, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6595816898296905, 0);
  sqcRYGate(q, 2.7093654404298024, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3006931956997967, 0);
  sqcRYGate(q, 1.570754707155884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1114109326543171, 2);
  sqcRYGate(q, -3.1378395846656733, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5435275308557073, 2);
  sqcRYGate(q, 1.5967700380270236, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8270024853048716, 4);
  sqcRYGate(q, 2.5452886052119847, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.248954470009974, 4);
  sqcRYGate(q, 1.2953007511877672, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1064541180583147, 1);
  sqcRYGate(q, -2.8099272852505135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0541553922343017, 1);
  sqcRYGate(q, 2.7499470634870353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5130606737054784, 3);
  sqcRYGate(q, -0.5884013817176807, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3142834622260757, 3);
  sqcRYGate(q, 2.431291336696439, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8892587915729847, 5);
  sqcRYGate(q, -3.047591320251529, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8403110142141287, 5);
  sqcRYGate(q, 2.025879474876197, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1924039714259203, 0);
  sqcRYGate(q, -3.0059724764188243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9404054843154732, 0);
  sqcRYGate(q, 1.6530355774747507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8789694052124046, 2);
  sqcRYGate(q, 2.2667551321578463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6571180955878182, 2);
  sqcRYGate(q, 2.3187923314765455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9787099762251457, 4);
  sqcRYGate(q, -1.3030073995333407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1191122544308585, 4);
  sqcRYGate(q, 0.9811553292236105, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0037926435744273, 6);
  sqcRYGate(q, 1.1202913779768189, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0528753224339198, 6);
  sqcRYGate(q, -1.4708418216047656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4481438015044814, 0);
  sqcRYGate(q, 2.138029319188905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4670608880654195, 0);
  sqcRYGate(q, 1.2365622246156702, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9352444774128185, 2);
  sqcRYGate(q, -2.450026844363589, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.0895060801556416, 2);
  sqcRYGate(q, -1.4728401513590645, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.753382066612018, 4);
  sqcRYGate(q, -0.06329114842236372, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.942592671779563, 4);
  sqcRYGate(q, 3.060055574330631, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.946748800731375, 1);
  sqcRYGate(q, 0.2864321207398777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.436653902394289, 1);
  sqcRYGate(q, -1.6902270310567653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9343985620086803, 3);
  sqcRYGate(q, 2.4928096799843336, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9191434180050213, 3);
  sqcRYGate(q, -2.979517142765252, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9688394300022143, 5);
  sqcRYGate(q, 0.703960806184536, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9917882402043219, 5);
  sqcRYGate(q, 3.0688261878236145, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8101991178835483, 0);
  sqcRYGate(q, 1.4121939821607405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4367126851930885, 0);
  sqcRYGate(q, -0.12429377584338434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.069162956327399, 2);
  sqcRYGate(q, 2.2574916987731575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1880550658076885, 2);
  sqcRYGate(q, 0.5770799102148754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.593441287288655, 4);
  sqcRYGate(q, -0.9142310996617785, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6484790334450734, 4);
  sqcRYGate(q, 1.8402552108050934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.22460732292309699, 6);
  sqcRYGate(q, -1.8600996932440284, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4307230835166043, 6);
  sqcRYGate(q, 0.09658737018178432, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.42122916929110055, 0);
  sqcRYGate(q, -2.0101373484322473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.47037584811804556, 0);
  sqcRYGate(q, -2.631948197461624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3043094587546493, 2);
  sqcRYGate(q, -2.910695241072238, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.139396927827371, 2);
  sqcRYGate(q, 1.4878469363146076, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7070012050588637, 4);
  sqcRYGate(q, 1.675907993861217, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.23504499615505153, 4);
  sqcRYGate(q, -0.17495713739135563, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.27173765237238, 1);
  sqcRYGate(q, 1.673548474525366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2396201315922166, 1);
  sqcRYGate(q, 1.8955409024181877, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5704846372909298, 3);
  sqcRYGate(q, 0.5650300292419788, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.17382900489869876, 3);
  sqcRYGate(q, 1.1640012599740892, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.425868824721535, 5);
  sqcRYGate(q, 2.2446374718458726, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.820044709925201, 5);
  sqcRYGate(q, 1.5152714810603216, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7825648310481843, 0);
  sqcRYGate(q, -1.1827079998742174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6271365415233897, 0);
  sqcRYGate(q, 1.5715355897979713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.788993549373989, 2);
  sqcRYGate(q, -2.5872799223970495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6444238421138275, 2);
  sqcRYGate(q, 2.5531325920714583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.259396881187488, 4);
  sqcRYGate(q, 2.8441860093113713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.25451591937569606, 4);
  sqcRYGate(q, -0.4112090946996515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2996224461603383, 6);
  sqcRYGate(q, -2.9022559246239195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1609205959749822, 6);
  sqcRYGate(q, -0.5173358164805049, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.601401571920836, 0);
  sqcRYGate(q, 0.42183224736301905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.32291400334196935, 0);
  sqcRYGate(q, -1.3348437892942497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.98665405860322, 2);
  sqcRYGate(q, -1.0802372992606752, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2116104522631677, 2);
  sqcRYGate(q, 1.2041758099313196, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.601162596253251, 4);
  sqcRYGate(q, 2.234743468553874, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5084393323467928, 4);
  sqcRYGate(q, -1.325683571693988, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5567526406047341, 1);
  sqcRYGate(q, 2.483459885448988, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.535692147506202, 1);
  sqcRYGate(q, -2.5789521934960935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1639938811366353, 3);
  sqcRYGate(q, -1.2928032330467056, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9341091646664264, 3);
  sqcRYGate(q, 1.5319453385406216, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.008660366579961044, 5);
  sqcRYGate(q, -0.11053152359007713, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0534590171881693, 5);
  sqcRYGate(q, -0.4339688328364479, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2089308880215162, 0);
  sqcRYGate(q, -0.40202245054527364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1778756970946187, 0);
  sqcRYGate(q, -0.9201667898036366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8610401252466735, 2);
  sqcRYGate(q, -1.3447357457743774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6711019883413365, 2);
  sqcRYGate(q, -0.8312433287890625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8657293268511932, 4);
  sqcRYGate(q, 1.1120992628216515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9840497060925872, 4);
  sqcRYGate(q, -0.17510604467812196, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.101684594438684, 6);
  sqcRYGate(q, -1.7209745612205662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4048450448063222, 6);
  sqcRYGate(q, -0.4679102763364112, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7720448031903944, 0);
  sqcRYGate(q, 0.603318573239016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1248636154914897, 0);
  sqcRYGate(q, 1.3781365250510618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.388232202046114, 2);
  sqcRYGate(q, -0.7499046344741717, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.570509649493034, 2);
  sqcRYGate(q, 2.074478000445497, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3499554641603497, 4);
  sqcRYGate(q, -0.11605147239254167, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5832176956580062, 4);
  sqcRYGate(q, -1.4958507347013867, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1418408038140906, 1);
  sqcRYGate(q, 1.6702116699762843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0381139829112547, 1);
  sqcRYGate(q, 2.1764425865644954, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5976994391224744, 3);
  sqcRYGate(q, -2.8806786760069483, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.22846974382445634, 3);
  sqcRYGate(q, 1.068909521316912, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2397325445954683, 5);
  sqcRYGate(q, -2.3526692764903694, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8993824625219533, 5);
  sqcRYGate(q, 0.13033927105806065, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1316678768447133, 0);
  sqcRYGate(q, -1.472843775881898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1340495024084274, 0);
  sqcRYGate(q, -0.7697729551066417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2689420163789542, 2);
  sqcRYGate(q, -0.5686268224906436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9230308354758474, 2);
  sqcRYGate(q, -1.663349109526741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9453984642058673, 4);
  sqcRYGate(q, 0.2196508939891082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.744696912977421, 4);
  sqcRYGate(q, 0.9905793699404076, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9282449069770404, 6);
  sqcRYGate(q, 0.5684545598803213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.44255941006413685, 6);
  sqcRYGate(q, 3.0967397675830304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0317687377784309, 0);
  sqcRYGate(q, 1.1654865925813331, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10735868060147169, 0);
  sqcRYGate(q, -2.5482652323001145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.077589076226129, 2);
  sqcRYGate(q, -0.8231577908318058, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7911664419629227, 2);
  sqcRYGate(q, -2.4441864084340112, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.277131145559572, 4);
  sqcRYGate(q, -2.4372735092583784, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7188071686488112, 4);
  sqcRYGate(q, 0.039071121387550534, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2240516889172423, 1);
  sqcRYGate(q, 0.5337530672613642, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1489154386478528, 1);
  sqcRYGate(q, 2.4196052093353084, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0991805944055115, 3);
  sqcRYGate(q, -1.749763863776497, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.865002075986065, 3);
  sqcRYGate(q, 2.9831444404828815, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.23156886802264123, 5);
  sqcRYGate(q, 1.8213054862988942, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0580888573763643, 5);
  sqcRYGate(q, -2.264880729164335, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.568719302177851, 0);
  sqcRYGate(q, 3.058411552988166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.982342033231708, 0);
  sqcRYGate(q, 1.108675339911679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8441617963833976, 2);
  sqcRYGate(q, -2.9056269520017155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.10888856311768, 2);
  sqcRYGate(q, 0.6857568787331614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.131828244293406, 4);
  sqcRYGate(q, 0.2691925496198966, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9852495532895762, 4);
  sqcRYGate(q, 1.8463259197167574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9448569445703976, 6);
  sqcRYGate(q, 0.14422041027114307, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7786832480737272, 6);
  sqcRYGate(q, 0.5722870029076635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6414667091732529, 0);
  sqcRYGate(q, -0.34723097828237753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3846845334689684, 0);
  sqcRYGate(q, -1.5012014728966365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.40037767378007433, 2);
  sqcRYGate(q, 1.6888381285296923, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4603983470714814, 2);
  sqcRYGate(q, -1.1303889499725477, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.303042193302949, 4);
  sqcRYGate(q, -1.4564796791093357, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.596721444812737, 4);
  sqcRYGate(q, 2.641759142840833, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1248948084121961, 1);
  sqcRYGate(q, -1.907534839925324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.494239284945636, 1);
  sqcRYGate(q, 0.993159329147023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.163109821663359, 3);
  sqcRYGate(q, -0.058386203390823316, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7024219324626464, 3);
  sqcRYGate(q, 2.61605565293373, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.626736483536188, 5);
  sqcRYGate(q, -0.7861256870415513, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.106499621098295, 5);
  sqcRYGate(q, 0.10197708961957244, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.08268062135925369, 0);
  sqcRYGate(q, -2.7443269394178085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0396960666645807, 0);
  sqcRYGate(q, 3.070080539831486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44315288192398183, 2);
  sqcRYGate(q, 2.7852568301626763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9175667244618184, 2);
  sqcRYGate(q, -1.3269797442728997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30210422792627156, 4);
  sqcRYGate(q, 3.040204429161444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21504314599636487, 4);
  sqcRYGate(q, 0.10226711598233111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7448272763777983, 6);
  sqcRYGate(q, -2.478436325882683, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7459781109778738, 6);
  sqcRYGate(q, 3.071374797849914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5063395560383663, 0);
  sqcRYGate(q, 2.8878473024465405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7050015643735157, 0);
  sqcRYGate(q, 1.6802789494794586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.49329903071131703, 2);
  sqcRYGate(q, -0.0023237504999231717, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.03720129540066, 2);
  sqcRYGate(q, 1.7506948464050085, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.18953934272647888, 4);
  sqcRYGate(q, 2.758182227257129, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.351563108603092, 4);
  sqcRYGate(q, -0.28907594158003663, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4882801116888054, 1);
  sqcRYGate(q, 1.1321036053602227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2274252034629543, 1);
  sqcRYGate(q, 0.2096404367167933, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6624469472998635, 3);
  sqcRYGate(q, 2.679643365815682, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9594808854978223, 3);
  sqcRYGate(q, -2.6835395981965515, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.692878335679673, 5);
  sqcRYGate(q, 2.7469241239139053, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.027657520810566, 5);
  sqcRYGate(q, -0.42460450209492606, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0259227040307, 0);
  sqcRYGate(q, 2.3879294305127923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8965754893324736, 0);
  sqcRYGate(q, -1.1520343084386342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.26668979997683, 2);
  sqcRYGate(q, 0.8568031092338213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.824044731052602, 2);
  sqcRYGate(q, 1.047516222285818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8620390986468982, 4);
  sqcRYGate(q, 0.1128048027188292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1263148963328486, 4);
  sqcRYGate(q, -0.6557054185978056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5633532649727764, 6);
  sqcRYGate(q, 2.3039493970276914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.17795246321466, 6);
  sqcRYGate(q, 1.9773687503418413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6885974586226987, 0);
  sqcRYGate(q, 0.7155188529917326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.548278196680811, 0);
  sqcRYGate(q, 2.411290555590391, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0256796787101994, 2);
  sqcRYGate(q, -2.1110726019645156, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5753192677803973, 2);
  sqcRYGate(q, -1.3076015415340416, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7700977189710068, 4);
  sqcRYGate(q, -2.1585438324487267, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.587935313259289, 4);
  sqcRYGate(q, -0.527273251416119, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.074176162885254, 1);
  sqcRYGate(q, -0.04563425273311983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0406963884071363, 1);
  sqcRYGate(q, -2.476511182687623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5590414859784647, 3);
  sqcRYGate(q, -0.8049952112935513, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7245447816641916, 3);
  sqcRYGate(q, 1.0041043803743248, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4419021081251544, 5);
  sqcRYGate(q, -1.7954464307736553, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2156325314312335, 5);
  sqcRYGate(q, -2.4830391524302615, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.47005911782371124, 0);
  sqcRYGate(q, 1.5980744529302138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0646821539007734, 0);
  sqcRYGate(q, -0.7658495270341203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.62187452084482, 2);
  sqcRYGate(q, 0.27314871995092116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.203076464094041, 2);
  sqcRYGate(q, -1.4584656186212428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.39966362265856786, 4);
  sqcRYGate(q, 2.891026780318016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9806133059501692, 4);
  sqcRYGate(q, 1.3711134634930167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6939363501518852, 6);
  sqcRYGate(q, 1.2391213243490993, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4402094283679172, 6);
  sqcRYGate(q, 2.7182925329616143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7710187322334345, 0);
  sqcRYGate(q, -1.449247561209825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9735266215421836, 0);
  sqcRYGate(q, -1.8018139506504711, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.690372275985343, 2);
  sqcRYGate(q, -0.7854929596557233, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0792390315711602, 2);
  sqcRYGate(q, -2.5499112171710547, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5312393578025736, 4);
  sqcRYGate(q, -0.9565644362490043, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4396752354219335, 4);
  sqcRYGate(q, -2.9642512315526464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.720345352310629, 1);
  sqcRYGate(q, 1.0147886808793665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4008299256328804, 1);
  sqcRYGate(q, -1.6354860751618434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8685003136604306, 3);
  sqcRYGate(q, -1.666194056207302, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.346860694049262, 3);
  sqcRYGate(q, 0.5708229272831558, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.720488644895037, 5);
  sqcRYGate(q, 1.8544437285636135, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0833433829706522, 5);
  sqcRYGate(q, -1.4013727318617306, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4258662846516883, 0);
  sqcRYGate(q, -0.2740404999269682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9105630279461137, 0);
  sqcRYGate(q, 2.2604549550643647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5544936226526116, 2);
  sqcRYGate(q, -2.7302563930593164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5899908985148064, 2);
  sqcRYGate(q, -0.6696246145794452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4560953966318628, 4);
  sqcRYGate(q, 2.811531028530737, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.14127870127461065, 4);
  sqcRYGate(q, 0.11736713787558184, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9752554807163621, 6);
  sqcRYGate(q, -1.9984532911466077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2298720405364056, 6);
  sqcRYGate(q, 3.108964346184621, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.720405228419314, 0);
  sqcRYGate(q, -0.26751307347634623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4660402554140062, 0);
  sqcRYGate(q, 2.8076752651159724, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5301050830187188, 2);
  sqcRYGate(q, 0.9416175173491911, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.425454014843334, 2);
  sqcRYGate(q, -2.075494064828644, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1204563943084906, 4);
  sqcRYGate(q, 2.3352158726205916, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.23415674167463615, 4);
  sqcRYGate(q, 0.7499576232282065, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.057578183924074, 1);
  sqcRYGate(q, 1.9197264508133502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2785045324942423, 1);
  sqcRYGate(q, 2.9305035417345446, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.815534227285783, 3);
  sqcRYGate(q, 1.2150933469389118, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.19572706719921398, 3);
  sqcRYGate(q, -2.3130714076562384, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.25991729881587017, 5);
  sqcRYGate(q, -1.3428398499606882, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.096905472181495, 5);
  sqcRYGate(q, 2.2622396828366877, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5682608712637264, 0);
  sqcRYGate(q, 0.08870576837028121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7254346853908316, 0);
  sqcRYGate(q, 1.6242929315843215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.25276009516364, 2);
  sqcRYGate(q, 0.3820677227990079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.815885657894781, 2);
  sqcRYGate(q, 2.934846177379196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2443703504018977, 4);
  sqcRYGate(q, -0.3575738910683697, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.129331470700135, 4);
  sqcRYGate(q, -2.389164998273246, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.057754515100454, 6);
  sqcRYGate(q, -0.6910820111485627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5370255468948502, 6);
  sqcRYGate(q, -1.9030894301443562, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9674140041025588, 0);
  sqcRYGate(q, -1.7442797011921911, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.060479806758259, 0);
  sqcRYGate(q, -2.725978723769935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1455844550430492, 2);
  sqcRYGate(q, -2.261784272692494, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.475297279134512, 2);
  sqcRYGate(q, -2.604839844266901, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9592450585498296, 4);
  sqcRYGate(q, -1.3705177565215958, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.463401794395326, 4);
  sqcRYGate(q, -2.7243829042460463, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3887906956011986, 1);
  sqcRYGate(q, 2.004941685151482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5181048357560529, 1);
  sqcRYGate(q, 1.2239081817285675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.710671107162676, 3);
  sqcRYGate(q, 0.24010634621709137, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.125140242773182, 3);
  sqcRYGate(q, -0.08548140693156735, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8357652331843153, 5);
  sqcRYGate(q, 1.5466170603667297, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0259603457361677, 5);
  sqcRYGate(q, -0.9506661654771236, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.26469243697082057, 0);
  sqcRYGate(q, -1.529232639552466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2301186772475243, 0);
  sqcRYGate(q, -1.8320292103354323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3969610483525192, 2);
  sqcRYGate(q, -1.0061757868733086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.036360481482858, 2);
  sqcRYGate(q, -2.439385559150958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4220982301542255, 4);
  sqcRYGate(q, 0.13603052599371335, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2545085665360194, 4);
  sqcRYGate(q, -0.59662289696994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.971179324936386, 6);
  sqcRYGate(q, -0.2889708549458945, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6602518920432447, 6);
  sqcRYGate(q, 1.2189135058678646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1844195311717334, 0);
  sqcRYGate(q, 1.6152818891887177, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.098447355883855, 0);
  sqcRYGate(q, -0.4971060983450677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24893262795025278, 2);
  sqcRYGate(q, 1.6510299844428644, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.23295760218220174, 2);
  sqcRYGate(q, -3.0737695441759914, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.885594084539547, 4);
  sqcRYGate(q, 2.3180643656017694, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.009155898367144444, 4);
  sqcRYGate(q, -1.0024677390645342, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0065739032863577, 1);
  sqcRYGate(q, -2.482916181947801, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6897396524070203, 1);
  sqcRYGate(q, -1.3570721405307729, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.15127173393953036, 3);
  sqcRYGate(q, -1.4807577491740949, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.165595041856239, 3);
  sqcRYGate(q, 2.7954032478861786, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.708151892579474, 5);
  sqcRYGate(q, -0.03691651588786015, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8592112951650871, 5);
  sqcRYGate(q, -0.3498142041505656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5981569329651499, 0);
  sqcRYGate(q, -2.1900941856940266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.139882446736224, 0);
  sqcRYGate(q, -1.9497313180937865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7797330933852864, 2);
  sqcRYGate(q, -1.1011434695646134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5796939340683513, 2);
  sqcRYGate(q, 2.3194496336890005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9632348728689695, 4);
  sqcRYGate(q, 2.885389518188428, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2794438841049045, 4);
  sqcRYGate(q, -1.1932925273794384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.019433245867203797, 6);
  sqcRYGate(q, 0.3781375723970566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.705716986442958, 6);
  sqcRYGate(q, -1.642697206536886, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.649211152405408, 0);
  sqcRYGate(q, -1.7781804717047214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7309101891839002, 0);
  sqcRYGate(q, 1.1207003354928318, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3778724846878703, 2);
  sqcRYGate(q, -1.5712918566446612, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6759692291016766, 2);
  sqcRYGate(q, 1.5103894003789833, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.010653636248068, 4);
  sqcRYGate(q, 3.07563968964028, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.3363805181760827, 4);
  sqcRYGate(q, -2.452572981162037, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.517118875660707, 1);
  sqcRYGate(q, 1.5214970487706783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9612549564095234, 1);
  sqcRYGate(q, 0.9620859344928681, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.589977136737815, 3);
  sqcRYGate(q, 2.354874926137579, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.0306361585330075, 3);
  sqcRYGate(q, -1.9154836035905127, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2366078780134364, 5);
  sqcRYGate(q, -0.0033428820038281515, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8434395591000925, 5);
  sqcRYGate(q, -1.033038263404336, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4701811425900382, 0);
  sqcRYGate(q, -0.6333725749455085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.54033814031302, 0);
  sqcRYGate(q, -2.384227504370393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9705681738375085, 2);
  sqcRYGate(q, -1.0016651089074262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.307713963362028, 2);
  sqcRYGate(q, -0.596199985472107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.060189130935866864, 4);
  sqcRYGate(q, -2.868527371496962, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.664409917537085, 4);
  sqcRYGate(q, -2.6779064525525254, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2411641185447424, 6);
  sqcRYGate(q, -1.0436092478924737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1228843564461224, 6);
  sqcRYGate(q, 2.8255250968587258, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.000492108308638, 0);
  sqcRYGate(q, 2.8282778615039397, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4729877882558726, 0);
  sqcRYGate(q, 0.3543416323845072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8874496934634397, 2);
  sqcRYGate(q, -1.2185859722496701, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9063038109719135, 2);
  sqcRYGate(q, -2.875275096318018, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2100102379086355, 4);
  sqcRYGate(q, -3.017877220970684, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2420000015390873, 4);
  sqcRYGate(q, 1.9367908002406153, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9499740604006819, 1);
  sqcRYGate(q, 1.4592357519263217, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5554132921623283, 1);
  sqcRYGate(q, 0.7792386068506911, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24541242331019422, 3);
  sqcRYGate(q, 2.435672137709721, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5211191580139272, 3);
  sqcRYGate(q, 0.9619700822836573, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.1614255839435027, 5);
  sqcRYGate(q, -1.552132978561903, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.12670918244505733, 5);
  sqcRYGate(q, -0.5652840299471821, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2723215461023565, 0);
  sqcRYGate(q, 1.6792739600236433, 1);
  sqcRYGate(q, -2.4523677123326886, 2);
  sqcRYGate(q, 0.4001595067972819, 3);
  sqcRYGate(q, 2.922999311529598, 4);
  sqcRYGate(q, -0.7522316334593699, 5);
  sqcRYGate(q, 0.04068111972537694, 6);
  sqcRYGate(q, 2.340761047835339, 7);

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
