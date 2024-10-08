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

  sqcRYGate(q, 1.0388907740399222, 0);
  sqcRYGate(q, 1.2221676607507304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.637089898162296, 0);
  sqcRYGate(q, -3.0615009315177746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.512018435434094, 2);
  sqcRYGate(q, 3.0483170289356236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.430052077830748, 2);
  sqcRYGate(q, -2.6496906168641328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2137787413963252, 0);
  sqcRYGate(q, -2.3914102969071696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4742656686505162, 0);
  sqcRYGate(q, 2.914296963294757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6421704199778007, 1);
  sqcRYGate(q, 1.881675345080328, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5892850824550298, 1);
  sqcRYGate(q, -2.273778367576746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9855393811958093, 0);
  sqcRYGate(q, -2.3700835078151563, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7373180755404314, 0);
  sqcRYGate(q, 0.7021598138955144, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4015011980067876, 1);
  sqcRYGate(q, 2.3046334129976054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7154173574918579, 1);
  sqcRYGate(q, 2.8711128309586615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4927085689876316, 0);
  sqcRYGate(q, 2.5436693639035206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6825920213023873, 0);
  sqcRYGate(q, -2.0185983692674316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1394510739193993, 2);
  sqcRYGate(q, -0.026965752205999505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5468106011581595, 2);
  sqcRYGate(q, -0.5730224879759119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18215952248097966, 0);
  sqcRYGate(q, 0.23874161176418074, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5620590226761388, 0);
  sqcRYGate(q, 1.2027951160054773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8764502893945575, 1);
  sqcRYGate(q, 2.482868234678786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1066495321864833, 1);
  sqcRYGate(q, 1.24719724245762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2301862112743676, 0);
  sqcRYGate(q, 1.490234387196515, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6715862580325548, 0);
  sqcRYGate(q, 1.1351119843728885, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7707713201088184, 1);
  sqcRYGate(q, 0.5347402514260127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.124560689927275, 1);
  sqcRYGate(q, 2.5384134215931375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.725956489717543, 0);
  sqcRYGate(q, -1.9354014287786532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3711071636394442, 0);
  sqcRYGate(q, -2.626942815246844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23392609926478694, 2);
  sqcRYGate(q, -2.5157613444899285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.611233445407061, 2);
  sqcRYGate(q, -2.3735699968796378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.119124914914957, 0);
  sqcRYGate(q, -1.8191597296798445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8308938475324994, 0);
  sqcRYGate(q, 0.49544808423932, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4612873633755878, 1);
  sqcRYGate(q, -0.04808390055194658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8093715284958467, 1);
  sqcRYGate(q, -2.022105714854077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2318111679512587, 0);
  sqcRYGate(q, -1.5440031147857551, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6956273223070735, 0);
  sqcRYGate(q, 2.018977357616347, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5842737586143922, 1);
  sqcRYGate(q, 1.0655076118498084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.24555525625205, 1);
  sqcRYGate(q, -1.8072307402480545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8307241780294214, 0);
  sqcRYGate(q, 2.018154079653245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6265546549257065, 0);
  sqcRYGate(q, 3.0427485802080696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.718535901417085, 2);
  sqcRYGate(q, -2.3571633654962905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.956453907040046, 2);
  sqcRYGate(q, 1.4951775621219463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33834592882503073, 0);
  sqcRYGate(q, 1.7360461644593905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6052807563231046, 0);
  sqcRYGate(q, -0.8766295506887003, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0262635551255226, 1);
  sqcRYGate(q, -1.1658467004987294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.051938181763167, 1);
  sqcRYGate(q, 1.3715271966123952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9974222672091715, 0);
  sqcRYGate(q, -1.0395468713022444, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.27401433155750166, 0);
  sqcRYGate(q, -0.19251453810423708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5308898322492417, 1);
  sqcRYGate(q, -2.75537887475225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15136963276212345, 1);
  sqcRYGate(q, -0.33942233238134845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0266229693005133, 0);
  sqcRYGate(q, -0.7339492323098109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5538865009231055, 0);
  sqcRYGate(q, 1.5320056065616203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1895570458409566, 2);
  sqcRYGate(q, 0.14435264744299126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.668458424650722, 2);
  sqcRYGate(q, 1.4121183790219043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9451366390498652, 0);
  sqcRYGate(q, -2.217777111858017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1125771731685847, 0);
  sqcRYGate(q, 2.5611239023973638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.01364737677634764, 1);
  sqcRYGate(q, 2.5779068561147365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9508978107452508, 1);
  sqcRYGate(q, -1.3467707190316853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9023050565897837, 0);
  sqcRYGate(q, 1.4106780630222104, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6148695043134265, 0);
  sqcRYGate(q, 1.0800763133777265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5090097213920517, 1);
  sqcRYGate(q, 1.6495930084002906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8918199651892198, 1);
  sqcRYGate(q, -1.354366148626558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5752727014399135, 0);
  sqcRYGate(q, -2.127499492903959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6172180161295214, 0);
  sqcRYGate(q, -0.16797755495864838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8168679320792096, 2);
  sqcRYGate(q, -2.902088834636381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9922456645331077, 2);
  sqcRYGate(q, 1.573074327169322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3455097446872732, 0);
  sqcRYGate(q, -0.6187068069452906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5495391417531749, 0);
  sqcRYGate(q, -1.968652385371251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3472236784045846, 1);
  sqcRYGate(q, 1.9163024819573353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5056805144390514, 1);
  sqcRYGate(q, -0.22418730543422605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2158606291303444, 0);
  sqcRYGate(q, 1.1002543534588876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8407334484047224, 0);
  sqcRYGate(q, -2.757767896233186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6999080651609944, 1);
  sqcRYGate(q, 1.3650238315818177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.985090077397946, 1);
  sqcRYGate(q, -1.196913896000237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4955961503815853, 0);
  sqcRYGate(q, 3.1297780658630825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6479582831928594, 0);
  sqcRYGate(q, -0.43513806356831675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1906844953540108, 2);
  sqcRYGate(q, 2.1190596913726694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0373091209974161, 2);
  sqcRYGate(q, -1.8636604711179485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03193338552433361, 0);
  sqcRYGate(q, -2.4977801302350637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4642619603867952, 0);
  sqcRYGate(q, -1.5989175217034306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8701584351169567, 1);
  sqcRYGate(q, -0.6644005280514413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2538431984261122, 1);
  sqcRYGate(q, 1.5788084127547537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7283130860832823, 0);
  sqcRYGate(q, 1.3385622588669672, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3910190848448618, 0);
  sqcRYGate(q, -0.21139718803335303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0384345848894627, 1);
  sqcRYGate(q, -2.6846228459672528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6047227899438468, 1);
  sqcRYGate(q, 1.7394665421015567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9132195005985049, 0);
  sqcRYGate(q, 1.1897024913705248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.147686984681285, 0);
  sqcRYGate(q, -0.8236550792438416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.574765277326951, 2);
  sqcRYGate(q, -2.04569221400717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8385876069091136, 2);
  sqcRYGate(q, -1.818310873287664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1920239516851714, 0);
  sqcRYGate(q, 1.8105748474349117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.331191179168765, 0);
  sqcRYGate(q, 0.8331278262984947, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.004805971850367, 1);
  sqcRYGate(q, -0.4736767489595257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.763356937361911, 1);
  sqcRYGate(q, 0.7682174476990058, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1391654277436185, 0);
  sqcRYGate(q, 0.5558224875500539, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.444809046210101, 0);
  sqcRYGate(q, 2.37063478695822, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7351634644122877, 1);
  sqcRYGate(q, -2.612579937336788, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0849995928072784, 1);
  sqcRYGate(q, -2.5478139786338017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.038713113106261604, 0);
  sqcRYGate(q, -1.0686969008365912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.838181809373497, 0);
  sqcRYGate(q, 0.45433070989561397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6167561863835472, 2);
  sqcRYGate(q, -1.2206128095382356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25002122200579424, 2);
  sqcRYGate(q, -2.998287480520545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1447867272253247, 0);
  sqcRYGate(q, -0.12555844946690708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.465580082432761, 0);
  sqcRYGate(q, -0.6343607391225179, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3084492448541134, 1);
  sqcRYGate(q, -2.8565039685561366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3495974955535166, 1);
  sqcRYGate(q, -2.9188498061227324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2568218512852054, 0);
  sqcRYGate(q, -2.4239028248238443, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.28308972038067454, 0);
  sqcRYGate(q, -2.758034705839659, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.997276049085114, 1);
  sqcRYGate(q, 0.6029162005189637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.648425952757828, 1);
  sqcRYGate(q, -2.378858919337797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.257296760579906, 0);
  sqcRYGate(q, 0.9357374331089847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.142584724078624, 0);
  sqcRYGate(q, -1.9545913754304374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.158244753824338, 2);
  sqcRYGate(q, 2.2575496339691923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7391126258316499, 2);
  sqcRYGate(q, -2.505266277118637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.962784349045788, 0);
  sqcRYGate(q, -1.0135483518886375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.772342999735333, 0);
  sqcRYGate(q, -0.18140750786091003, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7037883339618096, 1);
  sqcRYGate(q, -1.6381361491579876, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0943708814476492, 1);
  sqcRYGate(q, -0.707386091964092, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4876552520724609, 0);
  sqcRYGate(q, -1.1647984711725021, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14928471374360797, 0);
  sqcRYGate(q, 0.1806857152036234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2325403400934881, 1);
  sqcRYGate(q, -1.0713203593694889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3961606114623435, 1);
  sqcRYGate(q, -1.6380435577946875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4027616434898436, 0);
  sqcRYGate(q, 0.43705313311148775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6459596137874772, 0);
  sqcRYGate(q, 0.31088651057588973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8117780006906403, 2);
  sqcRYGate(q, 0.42771669053125677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8992403775819646, 2);
  sqcRYGate(q, 2.954891998407527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.938854759494835, 0);
  sqcRYGate(q, -2.495664695733659, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6411897102730304, 0);
  sqcRYGate(q, 1.7078545831675285, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6712623842853551, 1);
  sqcRYGate(q, -1.2955043962738861, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.776000965727452, 1);
  sqcRYGate(q, -2.580328367474017, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8383402793319743, 0);
  sqcRYGate(q, 0.6566756485696111, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8269637281418588, 0);
  sqcRYGate(q, 2.02945295036269, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.609096793900921, 1);
  sqcRYGate(q, 0.5989203032630606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7641131894265705, 1);
  sqcRYGate(q, 0.9076049893719035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5757477962798836, 0);
  sqcRYGate(q, 1.3689996370613675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.31883426681723304, 0);
  sqcRYGate(q, 1.6183171553679223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.93531492639317, 2);
  sqcRYGate(q, 0.5502227801125998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3443898464683708, 2);
  sqcRYGate(q, -1.8875533645624705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2934979787358885, 0);
  sqcRYGate(q, -2.846905261125584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08263211990551156, 0);
  sqcRYGate(q, 2.0773338532992924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5204290663493678, 1);
  sqcRYGate(q, -0.9284141793770143, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6815821364461085, 1);
  sqcRYGate(q, -0.18550794118576341, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21664407203331937, 0);
  sqcRYGate(q, -0.5983293003267812, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.18407417218776, 0);
  sqcRYGate(q, 1.5331674968020828, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.38323754534886945, 1);
  sqcRYGate(q, -0.17125472495568506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1999775291477617, 1);
  sqcRYGate(q, -1.9667595977421513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.172088134653605, 0);
  sqcRYGate(q, -2.550969971000685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9881462273013093, 0);
  sqcRYGate(q, 2.6690885278694134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7561998157983432, 2);
  sqcRYGate(q, -0.07815720074001348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6713972699520379, 2);
  sqcRYGate(q, 0.8024009719427951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4902231147991405, 0);
  sqcRYGate(q, -1.0059908579159405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4333493500279033, 0);
  sqcRYGate(q, 2.0673511982481454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6419462373452323, 1);
  sqcRYGate(q, -2.8063285139586904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3079651909925818, 1);
  sqcRYGate(q, -1.5222665308783212, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7812089895677325, 0);
  sqcRYGate(q, 3.018611885586937, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0692544418396787, 0);
  sqcRYGate(q, -0.5406748221232537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6961821042487648, 1);
  sqcRYGate(q, 0.3309626619096449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.730849488650891, 1);
  sqcRYGate(q, -1.3310767986066538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6233222742791862, 0);
  sqcRYGate(q, -1.44973716840823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26228712340401295, 0);
  sqcRYGate(q, -1.1851085432075603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9386392413884637, 2);
  sqcRYGate(q, -0.6809440533858164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8176521251975126, 2);
  sqcRYGate(q, -2.866043104147203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8225571743144355, 0);
  sqcRYGate(q, 2.8092629758832315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.014184557675884337, 0);
  sqcRYGate(q, 1.361710838188096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1386379212945252, 1);
  sqcRYGate(q, 2.3099246112966507, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1737948910391604, 1);
  sqcRYGate(q, -2.824304627198229, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6326531734223684, 0);
  sqcRYGate(q, -2.662111069848769, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.41214359684916074, 0);
  sqcRYGate(q, 0.763957694066554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.21349127588830896, 1);
  sqcRYGate(q, 3.006539390343613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9760690127461857, 1);
  sqcRYGate(q, -1.3483137304012391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3442324066845002, 0);
  sqcRYGate(q, 2.3026405100100753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7363453478750737, 0);
  sqcRYGate(q, -1.99647822031127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1523582399980206, 2);
  sqcRYGate(q, -1.6141564810453004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17135974211163418, 2);
  sqcRYGate(q, 2.2767741724064683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4108023162945527, 0);
  sqcRYGate(q, -0.24835928918201172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5354949776094813, 0);
  sqcRYGate(q, -2.7410973148271602, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.362884660938934, 1);
  sqcRYGate(q, 2.4134630589295387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.660534435923336, 1);
  sqcRYGate(q, -2.073515840708602, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.163734041447828, 0);
  sqcRYGate(q, 2.239180629715292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9913617370284054, 0);
  sqcRYGate(q, -0.22348742444759043, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7497877964232919, 1);
  sqcRYGate(q, 0.43558378561336486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.006692871805397, 1);
  sqcRYGate(q, 2.790256954209005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3510922740082414, 0);
  sqcRYGate(q, -2.9729999980641817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2509246022405094, 0);
  sqcRYGate(q, 1.7522247786366423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5311167332059679, 2);
  sqcRYGate(q, -2.4174993758080427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9861179479229758, 2);
  sqcRYGate(q, -0.36676518362746896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6942253784251635, 0);
  sqcRYGate(q, 2.2824231295257547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.06216863396260757, 0);
  sqcRYGate(q, 2.467290413405364, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.090866366394733, 1);
  sqcRYGate(q, 2.9912300490228283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7613438202573293, 1);
  sqcRYGate(q, -1.1684128497527646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1307526116290214, 0);
  sqcRYGate(q, -1.8046109391835676, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3184957758491687, 0);
  sqcRYGate(q, 1.0737468646330584, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6474071575202889, 1);
  sqcRYGate(q, -2.068585720477196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3056318888555682, 1);
  sqcRYGate(q, 3.0561840556244335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8807814191667367, 0);
  sqcRYGate(q, -0.36821264758793565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7519515908724945, 0);
  sqcRYGate(q, -2.9859648001428827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1297638127362135, 2);
  sqcRYGate(q, 0.8771591313173187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4650777153963361, 2);
  sqcRYGate(q, 0.9375796665806329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2105323593933726, 0);
  sqcRYGate(q, -1.9212735457320649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2668559195801885, 0);
  sqcRYGate(q, 0.36697090513305036, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0514956945593612, 1);
  sqcRYGate(q, -3.0804579314763525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.611630260064544, 1);
  sqcRYGate(q, 1.5015646474621656, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.619175333632648, 0);
  sqcRYGate(q, -0.07389929437820049, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5440783086001302, 0);
  sqcRYGate(q, 1.009231651418304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8169875027010525, 1);
  sqcRYGate(q, 2.277240249569079, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45348388415792007, 1);
  sqcRYGate(q, -0.11035571051469954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.153634151312823, 0);
  sqcRYGate(q, 0.10900370690794166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.314233100734957, 0);
  sqcRYGate(q, -0.38116991285586177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9353398078144979, 2);
  sqcRYGate(q, -2.4314631370161894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3800053765338556, 2);
  sqcRYGate(q, -0.6724893324375323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6869660774202866, 0);
  sqcRYGate(q, 0.980659702903055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.298045895399782, 0);
  sqcRYGate(q, 1.5353684707492603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.206277989728732, 1);
  sqcRYGate(q, 1.0268891662256747, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0424734638646007, 1);
  sqcRYGate(q, 0.6835962507835717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7611224453443418, 0);
  sqcRYGate(q, -0.4630861188972464, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6690334388304275, 0);
  sqcRYGate(q, 1.5838877656962211, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1422946947903627, 1);
  sqcRYGate(q, -1.9534313914859314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1362310174310402, 1);
  sqcRYGate(q, 0.7354160839818823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.714328649073587, 0);
  sqcRYGate(q, 0.13179408498019815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0728247016175785, 0);
  sqcRYGate(q, 2.3642734426652736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4908062731409268, 2);
  sqcRYGate(q, 0.6184832765508068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0735140813289448, 2);
  sqcRYGate(q, 1.6451918867041133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.103723764139537, 0);
  sqcRYGate(q, 3.0503477142203024, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5087186441869901, 0);
  sqcRYGate(q, -2.265514587943237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.412732517939852, 1);
  sqcRYGate(q, 0.6354412595651588, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.657649799355853, 1);
  sqcRYGate(q, -0.31483758597966655, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6445284576450279, 0);
  sqcRYGate(q, -1.0224289302085738, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5491816609035536, 0);
  sqcRYGate(q, -1.833113328337383, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1026579830802574, 1);
  sqcRYGate(q, -2.1273563946336402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0832402247816715, 1);
  sqcRYGate(q, 0.834477218103543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6137919781745538, 0);
  sqcRYGate(q, 2.0763697641994456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6749148334381787, 0);
  sqcRYGate(q, 1.8512131798813414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4406627464132524, 2);
  sqcRYGate(q, 1.1191912031342717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8914774504850946, 2);
  sqcRYGate(q, -1.5562072881926454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1611387020865288, 0);
  sqcRYGate(q, -2.111002528003193, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0538912192601644, 0);
  sqcRYGate(q, 1.7647041770995051, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.589333116289966, 1);
  sqcRYGate(q, 0.2902375942051092, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8302203493700056, 1);
  sqcRYGate(q, 2.6552021577828984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6126725038873464, 0);
  sqcRYGate(q, -0.641077507510785, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8726085199011946, 0);
  sqcRYGate(q, 2.0210067367128186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4841335572000816, 1);
  sqcRYGate(q, -1.7821036096674234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9339569894121826, 1);
  sqcRYGate(q, 1.771064973235436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5671279178631514, 0);
  sqcRYGate(q, -2.3900122610256127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.66036645426658, 0);
  sqcRYGate(q, 0.8634190688348697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9822716588300873, 2);
  sqcRYGate(q, 2.9618810053062403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2903837063393038, 2);
  sqcRYGate(q, 0.20813703780542614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.692027945601316, 0);
  sqcRYGate(q, 1.6253275273576806, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.23521219739529647, 0);
  sqcRYGate(q, -0.4391010380231748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5944178178240254, 1);
  sqcRYGate(q, 0.42266246722884854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0927697859566057, 1);
  sqcRYGate(q, -0.11456697025605707, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8716111722586892, 0);
  sqcRYGate(q, -0.5741565827470891, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8991340571663475, 0);
  sqcRYGate(q, -0.8117177059228267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9672179312442515, 1);
  sqcRYGate(q, 1.4898079972377327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2908374021034659, 1);
  sqcRYGate(q, 1.1699686088886292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.159521504675732, 0);
  sqcRYGate(q, -3.118381871289063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5472322262671059, 0);
  sqcRYGate(q, -1.2755706383578982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.07313683752446, 2);
  sqcRYGate(q, 2.9499043981272792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9737187440588952, 2);
  sqcRYGate(q, 0.15984650858837846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7138778869888496, 0);
  sqcRYGate(q, 1.973070398868397, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11181480543123119, 0);
  sqcRYGate(q, 2.066474176592492, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.630316116919152, 1);
  sqcRYGate(q, 2.0158769791960482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8915065638832689, 1);
  sqcRYGate(q, -2.2501279465741355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5318403539770866, 0);
  sqcRYGate(q, 0.584707061114532, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.052447735690227, 0);
  sqcRYGate(q, 2.142995220454128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.972968783658227, 1);
  sqcRYGate(q, -2.4186914770083923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.038838786322417704, 1);
  sqcRYGate(q, -0.6415111886847535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.403858236764897, 0);
  sqcRYGate(q, -1.562363114234376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8013083776564898, 0);
  sqcRYGate(q, 2.7372045668110427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7180328744047149, 2);
  sqcRYGate(q, -1.4996291539777085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8870227621879598, 2);
  sqcRYGate(q, 0.18274702582679822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7096283028939618, 0);
  sqcRYGate(q, 1.5155889988355462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.06387939132874, 0);
  sqcRYGate(q, 0.22337044414079207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.535216758864668, 1);
  sqcRYGate(q, -1.0671456875866054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.930250653156778, 1);
  sqcRYGate(q, 2.384369434742547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3504092477252825, 0);
  sqcRYGate(q, -1.8092016212855833, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6816028092770154, 0);
  sqcRYGate(q, -1.6647625905917183, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6851108262876044, 1);
  sqcRYGate(q, -0.31968305912030726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1303283326733675, 1);
  sqcRYGate(q, 0.9510527449896405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.488898379961191, 0);
  sqcRYGate(q, -2.306129427436295, 1);
  sqcRYGate(q, -0.6499252720167585, 2);
  sqcRYGate(q, -0.4006893621170281, 3);

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
