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

  sqcRYGate(q, -0.07278681046383452, 0);
  sqcRZGate(q, -2.198568884458182, 0);
  sqcRYGate(q, 0.00806138898392202, 1);
  sqcRZGate(q, -0.5614455440009706, 1);
  sqcRYGate(q, -1.5987124270163442, 2);
  sqcRZGate(q, 2.770977496189727, 2);
  sqcRYGate(q, 2.3234151098635483, 3);
  sqcRZGate(q, -2.0822859167102354, 3);
  sqcRYGate(q, 0.7192153810374535, 4);
  sqcRZGate(q, 1.529565285857121, 4);
  sqcRYGate(q, 1.856441370053199, 5);
  sqcRZGate(q, 1.7656877160937077, 5);
  sqcRYGate(q, -3.0490352243578487, 6);
  sqcRZGate(q, 2.372806184534927, 6);
  sqcRYGate(q, -2.8820873447538036, 7);
  sqcRZGate(q, 2.303777949883572, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9819094413302003, 0);
  sqcRZGate(q, 1.9295096167561043, 0);
  sqcRYGate(q, -0.06852114829351308, 1);
  sqcRZGate(q, 0.8131379563712251, 1);
  sqcRYGate(q, 1.575596578334198, 2);
  sqcRZGate(q, 1.062597455721399, 2);
  sqcRYGate(q, 1.1066123173378621, 3);
  sqcRZGate(q, -0.34471604675995815, 3);
  sqcRYGate(q, 2.794229716007881, 4);
  sqcRZGate(q, 1.8251444093557845, 4);
  sqcRYGate(q, -0.44008563920128113, 5);
  sqcRZGate(q, 1.6485883810412236, 5);
  sqcRYGate(q, 2.8958828345312404, 6);
  sqcRZGate(q, 1.157361152064074, 6);
  sqcRYGate(q, 1.5102309367994913, 7);
  sqcRZGate(q, 2.038140625833994, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1794563110232847, 0);
  sqcRZGate(q, 3.0813583780068288, 0);
  sqcRYGate(q, -3.005640698628384, 1);
  sqcRZGate(q, -1.3468736803558379, 1);
  sqcRYGate(q, -0.05744171896286908, 2);
  sqcRZGate(q, -2.124101196386788, 2);
  sqcRYGate(q, 0.9113626429184646, 3);
  sqcRZGate(q, 2.11003366137139, 3);
  sqcRYGate(q, -2.7019031331532615, 4);
  sqcRZGate(q, -0.5934437964328887, 4);
  sqcRYGate(q, -2.2327116891677568, 5);
  sqcRZGate(q, -2.5269075718887084, 5);
  sqcRYGate(q, 2.2486628567509115, 6);
  sqcRZGate(q, 0.020220179907723457, 6);
  sqcRYGate(q, -2.7861491227626947, 7);
  sqcRZGate(q, -1.0844722015908055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.08613699926097255, 0);
  sqcRZGate(q, -2.4429456873363886, 0);
  sqcRYGate(q, 0.06703068949042912, 1);
  sqcRZGate(q, -3.0498731590529697, 1);
  sqcRYGate(q, -0.005701496959644281, 2);
  sqcRZGate(q, -0.7628099764974835, 2);
  sqcRYGate(q, -0.04405979352814984, 3);
  sqcRZGate(q, -2.7719068073203794, 3);
  sqcRYGate(q, 1.0060676826951702, 4);
  sqcRZGate(q, 1.8663400823481107, 4);
  sqcRYGate(q, 2.8432370404285763, 5);
  sqcRZGate(q, 0.03776807155651252, 5);
  sqcRYGate(q, -2.7864164822934665, 6);
  sqcRZGate(q, 1.8788379362367413, 6);
  sqcRYGate(q, 1.5336151266763363, 7);
  sqcRZGate(q, 3.0823454565031287, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0618990418198977, 0);
  sqcRZGate(q, 1.8155103310143115, 0);
  sqcRYGate(q, -1.4800300994958728, 1);
  sqcRZGate(q, -2.6819798659849687, 1);
  sqcRYGate(q, 0.11880725572770653, 2);
  sqcRZGate(q, 1.2386954366131173, 2);
  sqcRYGate(q, -2.753693733117168, 3);
  sqcRZGate(q, 1.4206396366892886, 3);
  sqcRYGate(q, 0.07568314452262039, 4);
  sqcRZGate(q, 2.0538228712810334, 4);
  sqcRYGate(q, -2.167355368791079, 5);
  sqcRZGate(q, 0.0890099567385274, 5);
  sqcRYGate(q, 0.013589606054360104, 6);
  sqcRZGate(q, -0.06511855970486909, 6);
  sqcRYGate(q, -1.8154437858914845, 7);
  sqcRZGate(q, 2.7663421266292265, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9098926449273281, 0);
  sqcRZGate(q, 0.43017207919061917, 0);
  sqcRYGate(q, 1.531075405676937, 1);
  sqcRZGate(q, 2.5038624948272923, 1);
  sqcRYGate(q, -2.588519238665851, 2);
  sqcRZGate(q, -1.044930821873905, 2);
  sqcRYGate(q, -0.9380085179287062, 3);
  sqcRZGate(q, 1.3742697247808318, 3);
  sqcRYGate(q, 0.8733736892943291, 4);
  sqcRZGate(q, 2.2682190629983516, 4);
  sqcRYGate(q, 0.31880218054859416, 5);
  sqcRZGate(q, 2.314548300063022, 5);
  sqcRYGate(q, 0.2852127597064902, 6);
  sqcRZGate(q, 1.3007579020799382, 6);
  sqcRYGate(q, 0.5725201506368655, 7);
  sqcRZGate(q, -2.826607764914092, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.17598929656838277, 0);
  sqcRZGate(q, -2.0316692122749713, 0);
  sqcRYGate(q, -0.12972134814185263, 1);
  sqcRZGate(q, -2.398404924876194, 1);
  sqcRYGate(q, -3.0986399999863043, 2);
  sqcRZGate(q, -2.706532612441753, 2);
  sqcRYGate(q, 0.006126025114709811, 3);
  sqcRZGate(q, -2.53435581894297, 3);
  sqcRYGate(q, -0.873349975073337, 4);
  sqcRZGate(q, -2.7814056989946176, 4);
  sqcRYGate(q, 0.26204447828799804, 5);
  sqcRZGate(q, -1.810519156945957, 5);
  sqcRYGate(q, 1.609319923940663, 6);
  sqcRZGate(q, -0.35227945092401225, 6);
  sqcRYGate(q, 2.5225660915542223, 7);
  sqcRZGate(q, 2.211576112217151, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8802702578715436, 0);
  sqcRZGate(q, -1.111372724409466, 0);
  sqcRYGate(q, 1.2932518660235726, 1);
  sqcRZGate(q, 0.9602854509312745, 1);
  sqcRYGate(q, -1.4934985110748835, 2);
  sqcRZGate(q, 2.581358336755441, 2);
  sqcRYGate(q, 2.780115965432675, 3);
  sqcRZGate(q, 1.7263684224104743, 3);
  sqcRYGate(q, -2.3911470901642993, 4);
  sqcRZGate(q, -1.0555008193944522, 4);
  sqcRYGate(q, -0.17341040398154295, 5);
  sqcRZGate(q, 1.4287321372940855, 5);
  sqcRYGate(q, 3.1343777703066222, 6);
  sqcRZGate(q, 2.238703062775648, 6);
  sqcRYGate(q, 1.9895928069468987, 7);
  sqcRZGate(q, 0.5418791663552511, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4741644984138134, 0);
  sqcRZGate(q, 1.3356167283212546, 0);
  sqcRYGate(q, -3.125269379607941, 1);
  sqcRZGate(q, 1.3013430034273332, 1);
  sqcRYGate(q, -1.0228409118373163, 2);
  sqcRZGate(q, 0.00485646828610519, 2);
  sqcRYGate(q, 1.5694924121293086, 3);
  sqcRZGate(q, 1.9796856327153973, 3);
  sqcRYGate(q, 0.1688087128107035, 4);
  sqcRZGate(q, -1.5771767417376754, 4);
  sqcRYGate(q, -0.1413460756303282, 5);
  sqcRZGate(q, 2.9560857006264887, 5);
  sqcRYGate(q, 0.7128936718437962, 6);
  sqcRZGate(q, 1.6953459517118912, 6);
  sqcRYGate(q, 0.49043064815115667, 7);
  sqcRZGate(q, -0.7550167871688245, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9054474503976468, 0);
  sqcRZGate(q, -1.8542631613186247, 0);
  sqcRYGate(q, 1.7057920714201131, 1);
  sqcRZGate(q, 0.2681246695442323, 1);
  sqcRYGate(q, 0.09540361323002614, 2);
  sqcRZGate(q, -2.4923167239507307, 2);
  sqcRYGate(q, 3.137476263395615, 3);
  sqcRZGate(q, 0.40733056693197905, 3);
  sqcRYGate(q, -1.5675603295030673, 4);
  sqcRZGate(q, -1.5743215599191318, 4);
  sqcRYGate(q, -0.008034694440765655, 5);
  sqcRZGate(q, -2.020358723146834, 5);
  sqcRYGate(q, 3.104731910820616, 6);
  sqcRZGate(q, -1.2709624948492833, 6);
  sqcRYGate(q, -3.0788231061660833, 7);
  sqcRZGate(q, 0.005349440387406264, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.44069736805681714, 0);
  sqcRZGate(q, -2.594690224342554, 0);
  sqcRYGate(q, -2.43479547490377, 1);
  sqcRZGate(q, 2.2209472217953596, 1);
  sqcRYGate(q, 2.978609877113782, 2);
  sqcRZGate(q, -1.7055869071257508, 2);
  sqcRYGate(q, 1.5695811441612375, 3);
  sqcRZGate(q, -0.14542673357862665, 3);
  sqcRYGate(q, 1.574900175461952, 4);
  sqcRZGate(q, -0.4167583211195103, 4);
  sqcRYGate(q, 1.5705998448237963, 5);
  sqcRZGate(q, -0.0037390889957462647, 5);
  sqcRYGate(q, 2.8849582389059893, 6);
  sqcRZGate(q, 0.0382242454748557, 6);
  sqcRYGate(q, 1.511602316046945, 7);
  sqcRZGate(q, 0.018470461676500138, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1211752038289142, 0);
  sqcRZGate(q, 0.5244174349416982, 0);
  sqcRYGate(q, -1.1720445536774788, 1);
  sqcRZGate(q, -2.7535131288108166, 1);
  sqcRYGate(q, -1.1716842799582357, 2);
  sqcRZGate(q, 2.4006243367072813, 2);
  sqcRYGate(q, 3.0751798464750393, 3);
  sqcRZGate(q, -1.1116201608235592, 3);
  sqcRYGate(q, -0.44559006110197713, 4);
  sqcRZGate(q, 1.4860945117657836, 4);
  sqcRYGate(q, -1.5608291009241155, 5);
  sqcRZGate(q, 1.0780982797598435, 5);
  sqcRYGate(q, -1.5645141395021744, 6);
  sqcRZGate(q, 0.2803505479828958, 6);
  sqcRYGate(q, 3.0168513052555554, 7);
  sqcRZGate(q, 1.8930177167184092, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.004563680899928492, 0);
  sqcRZGate(q, 0.5286265437799722, 0);
  sqcRYGate(q, -3.086473549464963, 1);
  sqcRZGate(q, -2.032760863863416, 1);
  sqcRYGate(q, -0.011529394242438151, 2);
  sqcRZGate(q, -0.924918195267887, 2);
  sqcRYGate(q, 3.1401224066660793, 3);
  sqcRZGate(q, 0.06307752287486146, 3);
  sqcRYGate(q, -0.3321286755820764, 4);
  sqcRZGate(q, -0.028946165854224933, 4);
  sqcRYGate(q, 3.030664963156183, 5);
  sqcRZGate(q, 0.7662332011398849, 5);
  sqcRYGate(q, 3.1188100885150725, 6);
  sqcRZGate(q, -1.885625144975219, 6);
  sqcRYGate(q, -2.9067763369438016, 7);
  sqcRZGate(q, -2.183240420022913, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.06879511981047826, 0);
  sqcRZGate(q, -1.6527476665343108, 0);
  sqcRYGate(q, 0.8251143371603645, 1);
  sqcRZGate(q, -0.03308781036727218, 1);
  sqcRYGate(q, -2.147984000354718, 2);
  sqcRZGate(q, 3.13211824733377, 2);
  sqcRYGate(q, 0.4679042716436115, 3);
  sqcRZGate(q, -2.137778891180978, 3);
  sqcRYGate(q, -2.7372308839729653, 4);
  sqcRZGate(q, -2.9740572629397586, 4);
  sqcRYGate(q, -1.5949351160297947, 5);
  sqcRZGate(q, -3.1412302461025785, 5);
  sqcRYGate(q, 0.0037547822146812852, 6);
  sqcRZGate(q, -0.9739902819439636, 6);
  sqcRYGate(q, 3.139777190595517, 7);
  sqcRZGate(q, -2.1412779799055883, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.624459973525737, 0);
  sqcRZGate(q, 2.8519600849489595, 0);
  sqcRYGate(q, -0.03184306690529404, 1);
  sqcRZGate(q, 2.048270741516953, 1);
  sqcRYGate(q, 7.17422328833095e-05, 2);
  sqcRZGate(q, 1.7830108656851111, 2);
  sqcRYGate(q, -3.1394050594709593, 3);
  sqcRZGate(q, 0.8292191922185365, 3);
  sqcRYGate(q, 3.1390511165844495, 4);
  sqcRZGate(q, -2.525422292730607, 4);
  sqcRYGate(q, 0.34754659229797563, 5);
  sqcRZGate(q, -1.00274380915058, 5);
  sqcRYGate(q, 2.583299065214525, 6);
  sqcRZGate(q, -1.5374183521208753, 6);
  sqcRYGate(q, 2.9069001629400297, 7);
  sqcRZGate(q, 1.8884756447689182, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3394392737131282, 0);
  sqcRZGate(q, -2.8777882852558254, 0);
  sqcRYGate(q, -0.9219127773647626, 1);
  sqcRZGate(q, 1.523273731172698, 1);
  sqcRYGate(q, -1.8854013181467664, 2);
  sqcRZGate(q, -1.3377424344730287, 2);
  sqcRYGate(q, 2.7072677322699996, 3);
  sqcRZGate(q, 2.5333329030685428, 3);
  sqcRYGate(q, 0.5591687099817736, 4);
  sqcRZGate(q, -0.4652041917107568, 4);
  sqcRYGate(q, 3.0653075492678807, 5);
  sqcRZGate(q, -2.5718811930475796, 5);
  sqcRYGate(q, 3.0006089928991138, 6);
  sqcRZGate(q, 0.033764607677849945, 6);
  sqcRYGate(q, -1.8408625905317215, 7);
  sqcRZGate(q, 0.4349626324071263, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.18882927389720142, 0);
  sqcRZGate(q, 1.3326556146522714, 0);
  sqcRYGate(q, 1.5437964692616746, 1);
  sqcRZGate(q, 0.3290840644240695, 1);
  sqcRYGate(q, -1.5555477017321744, 2);
  sqcRZGate(q, -3.0581666728729524, 2);
  sqcRYGate(q, -3.1231313703802495, 3);
  sqcRZGate(q, -2.742984507951226, 3);
  sqcRYGate(q, -0.00011541197868680797, 4);
  sqcRZGate(q, 0.022152257695531752, 4);
  sqcRYGate(q, 1.573527929210476, 5);
  sqcRZGate(q, 1.6469318354801956, 5);
  sqcRYGate(q, 1.574233831164263, 6);
  sqcRZGate(q, 1.6023797291909476, 6);
  sqcRYGate(q, 0.00836013770215225, 7);
  sqcRZGate(q, 2.4975581522259196, 7);

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
