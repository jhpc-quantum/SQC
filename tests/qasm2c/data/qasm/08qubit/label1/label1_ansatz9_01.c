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

  sqcRYGate(q, -2.5113498024399674, 0);
  sqcRYGate(q, -2.5009882083017185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4192006976497014, 0);
  sqcRYGate(q, 1.3802776549505358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37084661665222024, 2);
  sqcRYGate(q, -1.5635374756659586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07047055991591271, 2);
  sqcRYGate(q, 0.8070224449297759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.778779900621738, 4);
  sqcRYGate(q, 0.612722204478537, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16147109235375354, 4);
  sqcRYGate(q, -1.2245761424091945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2862610909905046, 6);
  sqcRYGate(q, 2.5786440220464684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8827954142210657, 6);
  sqcRYGate(q, 1.6712949971477586, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.598382250673212, 0);
  sqcRYGate(q, -2.175809948904739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40151415187410583, 0);
  sqcRYGate(q, -1.8200371360707883, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.30213624151594076, 2);
  sqcRYGate(q, -1.352305003579798, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4361591334380845, 2);
  sqcRYGate(q, 2.6473146192250248, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3142313324122865, 4);
  sqcRYGate(q, -2.6805972052990197, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.922628110345164, 4);
  sqcRYGate(q, 1.3388729122703984, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8188977979555129, 1);
  sqcRYGate(q, -2.250624216844339, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.329410036542173, 1);
  sqcRYGate(q, 1.9924830343440265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7134492671570154, 3);
  sqcRYGate(q, 1.8992697626177009, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9117257459298411, 3);
  sqcRYGate(q, 1.6327666763641528, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2868810725261457, 5);
  sqcRYGate(q, -2.009474797897658, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.20132768189771258, 5);
  sqcRYGate(q, 0.6309832349180464, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7418283330307731, 0);
  sqcRYGate(q, -0.16045995290135093, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.173664207465481, 0);
  sqcRYGate(q, 2.2586605997063094, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.581100577891597, 1);
  sqcRYGate(q, 0.21699282353378993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1578949117705983, 1);
  sqcRYGate(q, 1.1799489334122288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.28677437605462686, 2);
  sqcRYGate(q, 0.8204916284409953, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.7680158265045983, 2);
  sqcRYGate(q, -1.6810629138802045, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.439576831082879, 3);
  sqcRYGate(q, -2.381447345552119, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4435185755036768, 3);
  sqcRYGate(q, -2.6937995642802064, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3049476113775487, 4);
  sqcRYGate(q, -2.648968228119986, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.2741900416704723, 4);
  sqcRYGate(q, -0.2498057039355013, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.9553701346764427, 5);
  sqcRYGate(q, -2.681967898302142, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4087194091693966, 5);
  sqcRYGate(q, 2.524615474673051, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.036854633769006, 0);
  sqcRYGate(q, 1.5829980866886455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3833065640156068, 0);
  sqcRYGate(q, -0.5437064560184334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6756859236420993, 2);
  sqcRYGate(q, 1.8401385984088061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5118793596892943, 2);
  sqcRYGate(q, 2.220792410425438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.993349516397819, 4);
  sqcRYGate(q, -0.3732546407271198, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2183038262107884, 4);
  sqcRYGate(q, -1.7983852621867975, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1621615715183804, 6);
  sqcRYGate(q, 1.343786987528186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.26776698262846227, 6);
  sqcRYGate(q, -1.1125069677843233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0598385481777193, 0);
  sqcRYGate(q, -0.9900242740794933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7211211276773302, 0);
  sqcRYGate(q, 2.348034329788503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8761957055441654, 2);
  sqcRYGate(q, -1.0850304073155341, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8073048746207003, 2);
  sqcRYGate(q, -2.3367279298817873, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.107620503444621, 4);
  sqcRYGate(q, -0.18176039438203206, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8785305329796778, 4);
  sqcRYGate(q, 1.7322101046016505, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5625917030294341, 1);
  sqcRYGate(q, -2.3565476492318984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8783397381252425, 1);
  sqcRYGate(q, -1.019823928466895, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0288582343266723, 3);
  sqcRYGate(q, 2.9462308443454988, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.737964614394711, 3);
  sqcRYGate(q, -1.3553909085455413, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.34496156155425783, 5);
  sqcRYGate(q, -0.4420350272771649, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.870520543324919, 5);
  sqcRYGate(q, -2.096614957431984, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6656756239255266, 0);
  sqcRYGate(q, 0.15642757514290118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2251068449491873, 0);
  sqcRYGate(q, 2.1083249507532056, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8071822776562467, 1);
  sqcRYGate(q, -2.736215986644008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.144353419288795, 1);
  sqcRYGate(q, -0.575777910074924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6013676988554617, 2);
  sqcRYGate(q, 3.015421302856909, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2663801696136017, 2);
  sqcRYGate(q, -1.5041216185338968, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.6370768505719759, 3);
  sqcRYGate(q, -0.2582169042249802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6531708890369234, 3);
  sqcRYGate(q, 2.24862627312237, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.023730329450963, 4);
  sqcRYGate(q, 1.5231695266400802, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6822290537796345, 4);
  sqcRYGate(q, -1.6034218335867136, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.13741337408043847, 5);
  sqcRYGate(q, -0.8727432935887469, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7049294636693997, 5);
  sqcRYGate(q, 1.1813621902488465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.57391803404984, 0);
  sqcRYGate(q, -0.941072395027411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.232441037013004, 0);
  sqcRYGate(q, -0.4182022362814432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4765878201467695, 2);
  sqcRYGate(q, -1.406723551570058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9781288689226784, 2);
  sqcRYGate(q, 1.6683081299286098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5624303247095672, 4);
  sqcRYGate(q, 1.1861365483705715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7911829746907224, 4);
  sqcRYGate(q, 2.041520414351642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9619079432998383, 6);
  sqcRYGate(q, 2.4001624171253266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.508268822977291, 6);
  sqcRYGate(q, 2.434471635489782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.052926143748146, 0);
  sqcRYGate(q, -1.3297436781871215, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6762169420598614, 0);
  sqcRYGate(q, -2.6901485159060914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1057289613348726, 2);
  sqcRYGate(q, -2.859451861977252, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1094991600755444, 2);
  sqcRYGate(q, 1.7237553212372552, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2690512117792547, 4);
  sqcRYGate(q, -2.1852388551023916, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.550240332629119, 4);
  sqcRYGate(q, -1.605586355507372, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.1399044383407326, 1);
  sqcRYGate(q, 1.826087094729103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9526481935663234, 1);
  sqcRYGate(q, -0.40862248694206726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.327877327300814, 3);
  sqcRYGate(q, 2.5463658603573993, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5609465007930883, 3);
  sqcRYGate(q, 0.3276239176453302, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.220518053776254, 5);
  sqcRYGate(q, 1.8263348989699144, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.829717379414589, 5);
  sqcRYGate(q, 2.9061666550759497, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.007233026105274654, 0);
  sqcRYGate(q, -2.9067198887968457, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8026115001821346, 0);
  sqcRYGate(q, 0.41557165439350846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6425870230577653, 1);
  sqcRYGate(q, -0.183903030180657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4011683823382766, 1);
  sqcRYGate(q, -2.00649435989781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7997953385431433, 2);
  sqcRYGate(q, 2.5233518024641564, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.462234057969464, 2);
  sqcRYGate(q, 2.1432247925482453, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1115737747024588, 3);
  sqcRYGate(q, 2.1642807528282186, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.659726887672044, 3);
  sqcRYGate(q, -2.574573658473886, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.106033089861856, 4);
  sqcRYGate(q, -0.20664160457397615, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.929669496502204, 4);
  sqcRYGate(q, 0.9695697964216956, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.576235163094385, 5);
  sqcRYGate(q, 1.5647862603668246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0359308413990236, 5);
  sqcRYGate(q, 0.20024024953377642, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.452450329301781, 0);
  sqcRYGate(q, -1.7052618250627685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8820403258123424, 0);
  sqcRYGate(q, -1.948815204936062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.159931975022916, 2);
  sqcRYGate(q, -2.069378516556358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5065886252827176, 2);
  sqcRYGate(q, -1.4861755494152153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4109734845463344, 4);
  sqcRYGate(q, 1.1406040699807953, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.31733831002893176, 4);
  sqcRYGate(q, 1.7306740224972175, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.629439044892752, 6);
  sqcRYGate(q, -1.093337310752144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.21487246356456, 6);
  sqcRYGate(q, -2.5069376276635986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2945168661060638, 0);
  sqcRYGate(q, 2.830335708280954, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.48558491818638, 0);
  sqcRYGate(q, 2.7613054692988506, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.567571749718309, 2);
  sqcRYGate(q, 2.810247808941717, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8543709548553003, 2);
  sqcRYGate(q, 0.44968185826551166, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7124645344185225, 4);
  sqcRYGate(q, -1.027209634897587, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3411579900404351, 4);
  sqcRYGate(q, -1.302046337671264, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4341621600786585, 1);
  sqcRYGate(q, 2.7282298044000157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.203399335613113, 1);
  sqcRYGate(q, -2.4536239064576164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.89558492034577, 3);
  sqcRYGate(q, -3.0456479286490583, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6737730768353374, 3);
  sqcRYGate(q, 0.9499612310165099, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.665970831154873, 5);
  sqcRYGate(q, -2.835281750336894, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.593376100330549, 5);
  sqcRYGate(q, 2.044941631361657, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0773408052907811, 0);
  sqcRYGate(q, 0.5329595885987052, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5977936317809973, 0);
  sqcRYGate(q, -2.6331376831068267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2850992953423699, 1);
  sqcRYGate(q, -0.20548415584384921, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.958221288927515, 1);
  sqcRYGate(q, -3.103972097890537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.012300495573270178, 2);
  sqcRYGate(q, 0.43890225473955996, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7605498539639572, 2);
  sqcRYGate(q, -1.7941143109639448, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.582922388445217, 3);
  sqcRYGate(q, -0.18904880484491393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.39553923547898595, 3);
  sqcRYGate(q, 2.7257844366772406, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4284027567874576, 4);
  sqcRYGate(q, -2.9004645246832244, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.6109565886153576, 4);
  sqcRYGate(q, -2.672193505037614, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.412813201673961, 5);
  sqcRYGate(q, 1.7159266934626662, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8533379932976408, 5);
  sqcRYGate(q, -1.4055249051162253, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1333299872404545, 0);
  sqcRYGate(q, 2.0007146613903712, 1);
  sqcRYGate(q, 0.3281259035118644, 2);
  sqcRYGate(q, -0.30792006514543857, 3);
  sqcRYGate(q, -2.0390442344860715, 4);
  sqcRYGate(q, 1.322729688618501, 5);
  sqcRYGate(q, -2.0273254783132604, 6);
  sqcRYGate(q, -2.5243484173473143, 7);

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
