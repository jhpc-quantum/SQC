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

  sqcRYGate(q, 3.14136795047528, 0);
  sqcRZGate(q, -0.25601733428515355, 0);
  sqcRYGate(q, -1.008314182015634, 1);
  sqcRZGate(q, -3.0619172458136683, 1);
  sqcRYGate(q, 3.0845054069482174, 2);
  sqcRZGate(q, -1.0993013888210246, 2);
  sqcRYGate(q, 0.8495987013725168, 3);
  sqcRZGate(q, -2.5441649052006223, 3);
  sqcRYGate(q, -1.3398456725462184, 4);
  sqcRZGate(q, -0.5285133509593093, 4);
  sqcRYGate(q, -3.0554198345848227, 5);
  sqcRZGate(q, -0.1639563033066544, 5);
  sqcRYGate(q, 0.5832380940920795, 6);
  sqcRZGate(q, -1.681884438373705, 6);
  sqcRYGate(q, -0.2394145304090376, 7);
  sqcRZGate(q, -0.6096892472259383, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3551630002778178, 0);
  sqcRZGate(q, -2.084814607135648, 0);
  sqcRYGate(q, -0.9767401516008422, 1);
  sqcRZGate(q, -1.1040734030973782, 1);
  sqcRYGate(q, -2.074198254944781, 2);
  sqcRZGate(q, 2.5643532637832855, 2);
  sqcRYGate(q, 3.1404918245086195, 3);
  sqcRZGate(q, -2.0290121743695684, 3);
  sqcRYGate(q, 0.0015516179859824675, 4);
  sqcRZGate(q, -2.293878746893094, 4);
  sqcRYGate(q, -0.08850770076953651, 5);
  sqcRZGate(q, 1.9862608326164832, 5);
  sqcRYGate(q, -0.8857731753576665, 6);
  sqcRZGate(q, 1.447563855554809, 6);
  sqcRYGate(q, 1.1936460014620458, 7);
  sqcRZGate(q, 0.4550761202816549, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.27547062067587685, 0);
  sqcRZGate(q, 0.02652766360923309, 0);
  sqcRYGate(q, 0.00037469045587990024, 1);
  sqcRZGate(q, -2.4447509897285977, 1);
  sqcRYGate(q, 0.902065637967755, 2);
  sqcRZGate(q, -0.6845392945430939, 2);
  sqcRYGate(q, -1.6530760567239045, 3);
  sqcRZGate(q, -1.296642733693221, 3);
  sqcRYGate(q, 2.2910441880873056, 4);
  sqcRZGate(q, 0.606521426454478, 4);
  sqcRYGate(q, -2.040520419013933, 5);
  sqcRZGate(q, -1.802951709481076, 5);
  sqcRYGate(q, 0.1165072265023785, 6);
  sqcRZGate(q, 2.8718464622626114, 6);
  sqcRYGate(q, -0.35392185437142176, 7);
  sqcRZGate(q, 1.116621169558439, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4071626573287688, 0);
  sqcRZGate(q, 2.4137742769073576, 0);
  sqcRYGate(q, 2.41504961520309, 1);
  sqcRZGate(q, -0.11806750717934007, 1);
  sqcRYGate(q, -1.8310601654006085, 2);
  sqcRZGate(q, 1.0967807138052814, 2);
  sqcRYGate(q, 6.776553986576062e-05, 3);
  sqcRZGate(q, 2.36480477221862, 3);
  sqcRYGate(q, -2.902832056705477, 4);
  sqcRZGate(q, -0.2041496137335044, 4);
  sqcRYGate(q, 3.0832471430540878, 5);
  sqcRZGate(q, 0.8820499772471436, 5);
  sqcRYGate(q, -2.05938320144453, 6);
  sqcRZGate(q, -0.5274723887709358, 6);
  sqcRYGate(q, -0.572522818351545, 7);
  sqcRZGate(q, 2.6317256773215374, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8406163449786639, 0);
  sqcRZGate(q, -1.6358127560047344, 0);
  sqcRYGate(q, 2.769241968378623, 1);
  sqcRZGate(q, 0.7312679269703422, 1);
  sqcRYGate(q, -0.38179887370265525, 2);
  sqcRZGate(q, 0.9182469577596313, 2);
  sqcRYGate(q, -0.9169627352448612, 3);
  sqcRZGate(q, -0.46854812601008494, 3);
  sqcRYGate(q, 2.781194636120717, 4);
  sqcRZGate(q, -1.2190857247094513, 4);
  sqcRYGate(q, -1.3862641543028915, 5);
  sqcRZGate(q, 2.6067210470045734, 5);
  sqcRYGate(q, 0.27600267773018483, 6);
  sqcRZGate(q, -0.41867881695347803, 6);
  sqcRYGate(q, 0.1155947159678628, 7);
  sqcRZGate(q, 1.493004035642993, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9275254782129463, 0);
  sqcRZGate(q, 2.0483330647716773, 0);
  sqcRYGate(q, 2.778871970426874, 1);
  sqcRZGate(q, -0.7578134342231485, 1);
  sqcRYGate(q, -0.00016584901294702803, 2);
  sqcRZGate(q, -2.2663334574206786, 2);
  sqcRYGate(q, -3.1408654101161897, 3);
  sqcRZGate(q, 0.7285144678621572, 3);
  sqcRYGate(q, -2.4682748555416603, 4);
  sqcRZGate(q, 2.788409924648885, 4);
  sqcRYGate(q, -2.4279095494919707, 5);
  sqcRZGate(q, 0.09134376989961747, 5);
  sqcRYGate(q, 0.6220510271853614, 6);
  sqcRZGate(q, -1.8469206196715788, 6);
  sqcRYGate(q, 2.065804267525194, 7);
  sqcRZGate(q, 2.5303018355584466, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8551598815419579, 0);
  sqcRZGate(q, -2.687323253158421, 0);
  sqcRYGate(q, -0.4524227716947484, 1);
  sqcRZGate(q, 2.4879552196182857, 1);
  sqcRYGate(q, 1.350910375989578, 2);
  sqcRZGate(q, 2.348631652115007, 2);
  sqcRYGate(q, 0.39964993287252, 3);
  sqcRZGate(q, -0.48431041245257794, 3);
  sqcRYGate(q, -2.9824672596743835, 4);
  sqcRZGate(q, -1.956368270133714, 4);
  sqcRYGate(q, 1.858083981430578, 5);
  sqcRZGate(q, 2.694029420870885, 5);
  sqcRYGate(q, -3.0325746143002887, 6);
  sqcRZGate(q, -1.2041612472040168, 6);
  sqcRYGate(q, -0.590958781146154, 7);
  sqcRZGate(q, -1.3535274881018635, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8434774602214883, 0);
  sqcRZGate(q, 0.4267506139054546, 0);
  sqcRYGate(q, -3.0016987366489354, 1);
  sqcRZGate(q, 1.9561153143803551, 1);
  sqcRYGate(q, 7.029884517795182e-05, 2);
  sqcRZGate(q, -1.8852703099786279, 2);
  sqcRYGate(q, 0.0018593750157704198, 3);
  sqcRZGate(q, 1.3701482822648432, 3);
  sqcRYGate(q, -2.6177509578473166, 4);
  sqcRZGate(q, 1.1863610351905463, 4);
  sqcRYGate(q, 0.46492437200089093, 5);
  sqcRZGate(q, 2.242277425327135, 5);
  sqcRYGate(q, -3.0513877114896975, 6);
  sqcRZGate(q, 1.398064301731501, 6);
  sqcRYGate(q, 2.992410702771383, 7);
  sqcRZGate(q, -0.4583630330103299, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9922843815460785, 0);
  sqcRZGate(q, -2.3170789747300513, 0);
  sqcRYGate(q, -0.19793801344105957, 1);
  sqcRZGate(q, 0.006257376980066454, 1);
  sqcRYGate(q, -0.5383626494383558, 2);
  sqcRZGate(q, 0.2293800654853664, 2);
  sqcRYGate(q, -1.796168252592118, 3);
  sqcRZGate(q, -2.28525504722493, 3);
  sqcRYGate(q, -1.5145802176139078, 4);
  sqcRZGate(q, -1.669929385410843, 4);
  sqcRYGate(q, 2.2128135559001256, 5);
  sqcRZGate(q, -2.4038402435633035, 5);
  sqcRYGate(q, 0.6809710324741207, 6);
  sqcRZGate(q, -1.1559381691642292, 6);
  sqcRYGate(q, 2.063604125510415, 7);
  sqcRZGate(q, 2.122206494802981, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7072692828980918, 0);
  sqcRZGate(q, 3.0669087382848885, 0);
  sqcRYGate(q, 0.1738501748515242, 1);
  sqcRZGate(q, -1.3070760607371605, 1);
  sqcRYGate(q, -0.00038588800344729885, 2);
  sqcRZGate(q, 0.22590344503527665, 2);
  sqcRYGate(q, 3.1406306349340847, 3);
  sqcRZGate(q, 1.4647199074262582, 3);
  sqcRYGate(q, -2.571905240339652, 4);
  sqcRZGate(q, 2.99877162535469, 4);
  sqcRYGate(q, 0.22286297929563845, 5);
  sqcRZGate(q, -0.5767852761880851, 5);
  sqcRYGate(q, 0.5613826405590739, 6);
  sqcRZGate(q, -2.6321422346083985, 6);
  sqcRYGate(q, -3.0784186020928828, 7);
  sqcRZGate(q, -0.6432956307155404, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6595451098729541, 0);
  sqcRZGate(q, 1.2921812444523608, 0);
  sqcRYGate(q, 0.46694667706983317, 1);
  sqcRZGate(q, 2.8989600583217263, 1);
  sqcRYGate(q, -2.232720924619559, 2);
  sqcRZGate(q, -2.2842591440991, 2);
  sqcRYGate(q, -2.371195573018762, 3);
  sqcRZGate(q, 2.3460963626095674, 3);
  sqcRYGate(q, -2.843972388746113, 4);
  sqcRZGate(q, -1.0129140437539734, 4);
  sqcRYGate(q, 1.752951585524879, 5);
  sqcRZGate(q, -2.3791916918051226, 5);
  sqcRYGate(q, -1.1380388723186678, 6);
  sqcRZGate(q, 2.3066080799444313, 6);
  sqcRYGate(q, -0.6082279871485294, 7);
  sqcRZGate(q, -1.733482894365344, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3286809549543719, 0);
  sqcRZGate(q, -1.7870628581983885, 0);
  sqcRYGate(q, 0.10104902125511973, 1);
  sqcRZGate(q, -0.07382815070650996, 1);
  sqcRYGate(q, 0.0006920293306365011, 2);
  sqcRZGate(q, -0.39026536662433103, 2);
  sqcRYGate(q, -0.0004695797921838718, 3);
  sqcRZGate(q, 2.143830993686799, 3);
  sqcRYGate(q, 2.865033370993857, 4);
  sqcRZGate(q, -0.791987077617162, 4);
  sqcRYGate(q, -2.083840737286303, 5);
  sqcRZGate(q, -1.664067956617004, 5);
  sqcRYGate(q, 1.2103501417478144, 6);
  sqcRZGate(q, -1.7689792847788885, 6);
  sqcRYGate(q, 0.2684756572423728, 7);
  sqcRZGate(q, -2.2397035634896874, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6222888367311601, 0);
  sqcRZGate(q, 1.5112311018239737, 0);
  sqcRYGate(q, -1.2603168897577202, 1);
  sqcRZGate(q, 0.5332746220510227, 1);
  sqcRYGate(q, 1.3303930578783978, 2);
  sqcRZGate(q, 0.9692781743382166, 2);
  sqcRYGate(q, 2.8880941718260678, 3);
  sqcRZGate(q, -2.948002664913782, 3);
  sqcRYGate(q, -3.105567787370003, 4);
  sqcRZGate(q, -1.8440466610454331, 4);
  sqcRYGate(q, 2.509633484277007, 5);
  sqcRZGate(q, -2.6912703511147282, 5);
  sqcRYGate(q, 0.1807903138194295, 6);
  sqcRZGate(q, 0.6441725759341873, 6);
  sqcRYGate(q, -1.5992904594585111, 7);
  sqcRZGate(q, 1.712830964870586, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.12554503837411, 0);
  sqcRZGate(q, 1.6842708161041224, 0);
  sqcRYGate(q, -0.2699404951520213, 1);
  sqcRZGate(q, -0.6102888997331561, 1);
  sqcRYGate(q, 0.0011755321102358762, 2);
  sqcRZGate(q, -2.4520076397931736, 2);
  sqcRYGate(q, -1.211740952767829, 3);
  sqcRZGate(q, 0.02432530717902061, 3);
  sqcRYGate(q, -1.490030452637962, 4);
  sqcRZGate(q, -1.9888207099721154, 4);
  sqcRYGate(q, 2.01874588690122, 5);
  sqcRZGate(q, 0.5159944094679565, 5);
  sqcRYGate(q, -3.0308753060811537, 6);
  sqcRZGate(q, -1.2354473730131152, 6);
  sqcRYGate(q, -2.3282984174792323, 7);
  sqcRZGate(q, -0.032440821291738864, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0124526439072747, 0);
  sqcRZGate(q, 1.649906217056885, 0);
  sqcRYGate(q, -1.967676363748736, 1);
  sqcRZGate(q, -2.9104351059234372, 1);
  sqcRYGate(q, 0.002403237562750684, 2);
  sqcRZGate(q, 2.1567024045806686, 2);
  sqcRYGate(q, 2.9099339841032967, 3);
  sqcRZGate(q, -3.10026362083397, 3);
  sqcRYGate(q, -0.010057945199304362, 4);
  sqcRZGate(q, 1.38672252878683, 4);
  sqcRYGate(q, -1.437086086996958, 5);
  sqcRZGate(q, -0.3619945620691472, 5);
  sqcRYGate(q, -2.714089964411362, 6);
  sqcRZGate(q, 0.697865664265148, 6);
  sqcRYGate(q, -1.693095698902897, 7);
  sqcRZGate(q, -0.7652420460219522, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0272565878600624, 0);
  sqcRZGate(q, -2.690269375379776, 0);
  sqcRYGate(q, 2.403285596830515, 1);
  sqcRZGate(q, 2.280380658096524, 1);
  sqcRYGate(q, 0.0006853953586360406, 2);
  sqcRZGate(q, 1.3834376089820406, 2);
  sqcRYGate(q, -1.2295520778285525, 3);
  sqcRZGate(q, 2.6534074558051697, 3);
  sqcRYGate(q, -2.415794983096107, 4);
  sqcRZGate(q, 0.3274413835760223, 4);
  sqcRYGate(q, 0.6566900064898684, 5);
  sqcRZGate(q, 2.7820951351820997, 5);
  sqcRYGate(q, 1.706253722395286, 6);
  sqcRZGate(q, 2.9803648452911977, 6);
  sqcRYGate(q, 1.8031010812931816, 7);
  sqcRZGate(q, 2.2512811274895768, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.366656273419763, 0);
  sqcRZGate(q, -0.8580847486993652, 0);
  sqcRYGate(q, 0.07510109124310661, 1);
  sqcRZGate(q, -0.9899810453763436, 1);
  sqcRYGate(q, 0.004497465977460813, 2);
  sqcRZGate(q, 0.22228816284833752, 2);
  sqcRYGate(q, 2.3910155122269647, 3);
  sqcRZGate(q, -0.9485330612767512, 3);
  sqcRYGate(q, 1.5556075057967778, 4);
  sqcRZGate(q, 2.56624518166353, 4);
  sqcRYGate(q, 2.8458448133450824, 5);
  sqcRZGate(q, 2.623335794674284, 5);
  sqcRYGate(q, 0.215250622029064, 6);
  sqcRZGate(q, 1.7473092088619078, 6);
  sqcRYGate(q, -1.4892169609250603, 7);
  sqcRZGate(q, 2.5049556934792103, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7949313997602792, 0);
  sqcRZGate(q, 1.7875317515572045, 0);
  sqcRYGate(q, -2.2362599913810985, 1);
  sqcRZGate(q, 0.08554034692929194, 1);
  sqcRYGate(q, -0.0021885015495461957, 2);
  sqcRZGate(q, 0.8277252032067178, 2);
  sqcRYGate(q, 3.064359427773554, 3);
  sqcRZGate(q, 1.606163153200673, 3);
  sqcRYGate(q, -0.014689227745829037, 4);
  sqcRZGate(q, 0.6021316408046481, 4);
  sqcRYGate(q, 1.3100480534768464, 5);
  sqcRZGate(q, -1.457750151600602, 5);
  sqcRYGate(q, -0.3179938894887702, 6);
  sqcRZGate(q, -1.2111633881679982, 6);
  sqcRYGate(q, 0.659358212289835, 7);
  sqcRZGate(q, -0.07099950102942731, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.762372315757334, 0);
  sqcRZGate(q, -1.307860625277407, 0);
  sqcRYGate(q, 0.10680765155898529, 1);
  sqcRZGate(q, 1.9350105456898223, 1);
  sqcRYGate(q, 0.004968110666796249, 2);
  sqcRZGate(q, -3.085996433788085, 2);
  sqcRYGate(q, 2.4843778210641676, 3);
  sqcRZGate(q, -1.5416499183167574, 3);
  sqcRYGate(q, -3.1207017746507297, 4);
  sqcRZGate(q, 1.6181466301090164, 4);
  sqcRYGate(q, -3.081063567596814, 5);
  sqcRZGate(q, -1.8664333100848036, 5);
  sqcRYGate(q, -0.029764196997079242, 6);
  sqcRZGate(q, 0.20249097150224016, 6);
  sqcRYGate(q, -0.014030058978026004, 7);
  sqcRZGate(q, 1.3709164547624257, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.37528636038678986, 0);
  sqcRZGate(q, -1.5050944156065766, 0);
  sqcRYGate(q, 2.515068942369115, 1);
  sqcRZGate(q, 2.6126794383380907, 1);
  sqcRYGate(q, -2.591025341450964, 2);
  sqcRZGate(q, -1.380454454524079, 2);
  sqcRYGate(q, -2.505554116438729, 3);
  sqcRZGate(q, -1.7307559121026455, 3);
  sqcRYGate(q, 0.6043394317846644, 4);
  sqcRZGate(q, 2.2404096000027742, 4);
  sqcRYGate(q, -1.5992569708103987, 5);
  sqcRZGate(q, 2.119718203899107, 5);
  sqcRYGate(q, 3.00751399318439, 6);
  sqcRZGate(q, 0.037287554265606156, 6);
  sqcRYGate(q, -1.194665568772848, 7);
  sqcRZGate(q, -1.4631307967725602, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.06883643643061, 0);
  sqcRZGate(q, -1.8414775528768428, 0);
  sqcRYGate(q, -0.0016949909580452414, 1);
  sqcRZGate(q, 0.9410222490571821, 1);
  sqcRYGate(q, 3.1400366272061437, 2);
  sqcRZGate(q, -0.3699630846832669, 2);
  sqcRYGate(q, -0.0014096105333365474, 3);
  sqcRZGate(q, 1.7283103762210088, 3);
  sqcRYGate(q, -0.9983543582116713, 4);
  sqcRZGate(q, 0.8040756833544842, 4);
  sqcRYGate(q, 0.4526822426413002, 5);
  sqcRZGate(q, -2.9046074339804338, 5);
  sqcRYGate(q, 0.10711403996223103, 6);
  sqcRZGate(q, -1.8726409946527354, 6);
  sqcRYGate(q, 2.5747699241474384, 7);
  sqcRZGate(q, -0.7520925107691142, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0763501988405046, 0);
  sqcRZGate(q, 1.230523899896712, 0);
  sqcRYGate(q, 0.27034981212394704, 1);
  sqcRZGate(q, 2.999922917559798, 1);
  sqcRYGate(q, -0.925616998871118, 2);
  sqcRZGate(q, 0.7076865292430211, 2);
  sqcRYGate(q, 0.5700683535923737, 3);
  sqcRZGate(q, 0.5652684678976625, 3);
  sqcRYGate(q, -3.0744274589604053, 4);
  sqcRZGate(q, 0.5453128935156403, 4);
  sqcRYGate(q, -3.0733741602976963, 5);
  sqcRZGate(q, 0.23013445749180425, 5);
  sqcRYGate(q, 0.29017702569345083, 6);
  sqcRZGate(q, 1.6597636600764574, 6);
  sqcRYGate(q, 1.8045585612149164, 7);
  sqcRZGate(q, 1.3562145491900757, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1188417586804755, 0);
  sqcRZGate(q, -0.28596348413662476, 0);
  sqcRYGate(q, -0.0870917684306153, 1);
  sqcRZGate(q, -3.0980208462713548, 1);
  sqcRYGate(q, 0.01960786580026783, 2);
  sqcRZGate(q, -1.7305711160272486, 2);
  sqcRYGate(q, 0.011411324663733713, 3);
  sqcRZGate(q, -2.080444130143431, 3);
  sqcRYGate(q, 1.0026957690210416, 4);
  sqcRZGate(q, -2.055510967919954, 4);
  sqcRYGate(q, -0.4515330498853949, 5);
  sqcRZGate(q, -1.2370287160439553, 5);
  sqcRYGate(q, 2.982111730744039, 6);
  sqcRZGate(q, -1.6770144690041768, 6);
  sqcRYGate(q, 0.019399412098965563, 7);
  sqcRZGate(q, -2.1423928627237965, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9949057035397227, 0);
  sqcRZGate(q, 3.0893219119314077, 0);
  sqcRYGate(q, 1.4402746842208236, 1);
  sqcRZGate(q, -0.6823333433614734, 1);
  sqcRYGate(q, 0.6984992938567091, 2);
  sqcRZGate(q, -1.497077567950348, 2);
  sqcRYGate(q, -2.9799258366529777, 3);
  sqcRZGate(q, 2.5453366174288323, 3);
  sqcRYGate(q, -0.1444178335501642, 4);
  sqcRZGate(q, 2.664166319712302, 4);
  sqcRYGate(q, -2.605768806914924, 5);
  sqcRZGate(q, 0.9251700424031972, 5);
  sqcRYGate(q, 2.5663017982112697, 6);
  sqcRZGate(q, 1.8551747880924088, 6);
  sqcRYGate(q, -2.7499254945507947, 7);
  sqcRZGate(q, 0.5228873247231103, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5177563471078823, 0);
  sqcRZGate(q, 1.4054534868524484, 0);
  sqcRYGate(q, -0.07209656663776354, 1);
  sqcRZGate(q, 2.4432990877740437, 1);
  sqcRYGate(q, 3.1344798600167008, 2);
  sqcRZGate(q, -3.0636753597594075, 2);
  sqcRYGate(q, -0.01047806200356986, 3);
  sqcRZGate(q, -3.0995202269997764, 3);
  sqcRYGate(q, 0.25061453163726455, 4);
  sqcRZGate(q, -2.629552797249458, 4);
  sqcRYGate(q, -2.8733960317129257, 5);
  sqcRZGate(q, -1.7021617870411243, 5);
  sqcRYGate(q, 0.05806322676341297, 6);
  sqcRZGate(q, 1.383964366721961, 6);
  sqcRYGate(q, -0.06752657230663693, 7);
  sqcRZGate(q, -1.166337938133583, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.481522784228173, 0);
  sqcRZGate(q, 1.1197695011860236, 0);
  sqcRYGate(q, 2.220431286884285, 1);
  sqcRZGate(q, 1.2205325847900281, 1);
  sqcRYGate(q, -0.7371777849227527, 2);
  sqcRZGate(q, -0.22566024400194987, 2);
  sqcRYGate(q, 0.8118158637705272, 3);
  sqcRZGate(q, -0.6047183418189174, 3);
  sqcRYGate(q, -1.1710909384515649, 4);
  sqcRZGate(q, 1.5385593339493242, 4);
  sqcRYGate(q, -1.929238558185613, 5);
  sqcRZGate(q, -1.9630368840636125, 5);
  sqcRYGate(q, 0.25640001139569524, 6);
  sqcRZGate(q, 2.288752513545912, 6);
  sqcRYGate(q, 1.9613804338192713, 7);
  sqcRZGate(q, 1.211717736128162, 7);

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
