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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.07604649914260991, 0);
  sqcRYGate(q, -2.5407035333292907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0471053428330236, 0);
  sqcRYGate(q, -1.400226376938164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6639440430767776, 1);
  sqcRYGate(q, -1.6649678669672134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.169440741100134, 1);
  sqcRYGate(q, 2.810961709034887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9265858450493296, 2);
  sqcRYGate(q, -0.6505966962081215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05613839858516355, 2);
  sqcRYGate(q, -0.6659929822317568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6213218514342387, 0);
  sqcRYGate(q, -2.36193348652905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2693202821707636, 0);
  sqcRYGate(q, -1.4523876209475253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8714594836597573, 1);
  sqcRYGate(q, 2.721132200334281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.929239506627744, 1);
  sqcRYGate(q, 0.8145600317738371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0174247027872503, 2);
  sqcRYGate(q, -0.45581880377815975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.914630765185393, 2);
  sqcRYGate(q, 1.3880867765589364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7774861855161754, 0);
  sqcRYGate(q, -2.7207930652862338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8610037539528275, 0);
  sqcRYGate(q, 2.082685659937974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1753363459627062, 1);
  sqcRYGate(q, 1.9223116704672192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9583236365879619, 1);
  sqcRYGate(q, -0.9017606542829786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3727981239768523, 2);
  sqcRYGate(q, 0.17991698306761794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.100977502924497, 2);
  sqcRYGate(q, -0.44248944268736956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.809125879987331, 0);
  sqcRYGate(q, 0.015443346252276124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14757760284707366, 0);
  sqcRYGate(q, 2.8692890055920803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0708412847064015, 1);
  sqcRYGate(q, 1.8047059990864183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.723576887680137, 1);
  sqcRYGate(q, -0.1999538281836063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1875967254667867, 2);
  sqcRYGate(q, 0.13541440667625498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5836625058423124, 2);
  sqcRYGate(q, 0.6515774816805466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0668950989512904, 0);
  sqcRYGate(q, 0.5043434036174234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.264479153089986, 0);
  sqcRYGate(q, 0.9102735481472993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.729072958526059, 1);
  sqcRYGate(q, -2.395422490467251, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5847691733063058, 1);
  sqcRYGate(q, 2.957062054544138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.376412179084185, 2);
  sqcRYGate(q, 2.6796094401106774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5974895949598222, 2);
  sqcRYGate(q, -2.9770906162836512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3729969827023263, 0);
  sqcRYGate(q, -2.6357599688730073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.983664282128227, 0);
  sqcRYGate(q, 1.442285468999946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.697210051180202, 1);
  sqcRYGate(q, 2.3051989597851175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1559471810852947, 1);
  sqcRYGate(q, 2.24868144850039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7117481421566607, 2);
  sqcRYGate(q, 0.7710693697570542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7875396620463049, 2);
  sqcRYGate(q, 1.6870606652197029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1016394429525076, 0);
  sqcRYGate(q, 0.9943698951932838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4824561675611511, 0);
  sqcRYGate(q, -0.3723766611034506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0350337403471874, 1);
  sqcRYGate(q, -2.3132356522018305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7211728170561257, 1);
  sqcRYGate(q, 1.887753292754444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.19299898561929, 2);
  sqcRYGate(q, 2.608607213753343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2898566721228013, 2);
  sqcRYGate(q, -0.8436565460224674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.776829724752589, 0);
  sqcRYGate(q, 2.0000264296743575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1764882252593276, 0);
  sqcRYGate(q, -2.671780228992423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6443058765147125, 1);
  sqcRYGate(q, -0.3635607466515998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5311520544907307, 1);
  sqcRYGate(q, 2.4980461195454837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.865181008886254, 2);
  sqcRYGate(q, -1.1042917786636544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.173872960822916, 2);
  sqcRYGate(q, -1.5625820017402055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.602369203867754, 0);
  sqcRYGate(q, -0.2750663011818796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7917445554696083, 0);
  sqcRYGate(q, -2.3975385239037954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.008068524449436, 1);
  sqcRYGate(q, -1.3937714011316555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17739702903993138, 1);
  sqcRYGate(q, 2.524269108697526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02692255668762815, 2);
  sqcRYGate(q, -0.2574481379101039, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.185766547670256, 2);
  sqcRYGate(q, 2.521370221306645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11536287135343422, 0);
  sqcRYGate(q, -0.736580611488535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3434260948593097, 0);
  sqcRYGate(q, 1.8887048311933867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.872080431828741, 1);
  sqcRYGate(q, -1.4389165167997495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9746720797255918, 1);
  sqcRYGate(q, 0.7896597488250653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9527932504852599, 2);
  sqcRYGate(q, 2.153969029704065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.039638150844268, 2);
  sqcRYGate(q, -1.9757104868828241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9645097864069302, 0);
  sqcRYGate(q, 0.0530749637465904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6239624013908793, 0);
  sqcRYGate(q, 2.3179900257170116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9937751257029648, 1);
  sqcRYGate(q, -3.120927146892807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30062957961359255, 1);
  sqcRYGate(q, -0.17708440151776442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09210918698740392, 2);
  sqcRYGate(q, 0.5301972398896257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.853861473765077, 2);
  sqcRYGate(q, -2.0524150740775564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2660011954906865, 0);
  sqcRYGate(q, -2.2551269096425184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9419016629806614, 0);
  sqcRYGate(q, 0.7268077842113856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9321030563150943, 1);
  sqcRYGate(q, -3.1313157675794594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10425952439861617, 1);
  sqcRYGate(q, 1.470176680797974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.107603209092214, 2);
  sqcRYGate(q, -0.3856303781620675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.680687557559327, 2);
  sqcRYGate(q, 0.346598425231992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21693921927727186, 0);
  sqcRYGate(q, -1.0928620514932028, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7508376004168609, 0);
  sqcRYGate(q, 1.2463235015131096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29795479385248697, 1);
  sqcRYGate(q, 1.6261301100016896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.043510930061339, 1);
  sqcRYGate(q, -0.25215461316393917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5096193389741188, 2);
  sqcRYGate(q, -2.5100544745158873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6240403417511693, 2);
  sqcRYGate(q, 2.3009779053249755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4555021168018821, 0);
  sqcRYGate(q, -0.4279037484494119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7589432741160445, 0);
  sqcRYGate(q, -2.4115078202985716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6873254944111316, 1);
  sqcRYGate(q, 2.7777374834008923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6065190902646743, 1);
  sqcRYGate(q, -1.4726486716758806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.263638180809831, 2);
  sqcRYGate(q, 2.0414513454464878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4944958357365805, 2);
  sqcRYGate(q, -1.7259616743194133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6938280004545265, 0);
  sqcRYGate(q, -0.45497618866230394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2213117200657922, 0);
  sqcRYGate(q, 0.36316201079216004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5274882317750693, 1);
  sqcRYGate(q, 1.6349502063423609, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4169395106545278, 1);
  sqcRYGate(q, -1.0405105622445723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8361212319652794, 2);
  sqcRYGate(q, 0.19126301275434246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.073732245136587, 2);
  sqcRYGate(q, -1.3655805008611068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9446086182205116, 0);
  sqcRYGate(q, 1.7756507859345803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.443937641341159, 0);
  sqcRYGate(q, -2.150195050452342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.954576402531186, 1);
  sqcRYGate(q, -2.729794343371755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3391514793029928, 1);
  sqcRYGate(q, 0.7406659257161373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.41239186112012605, 2);
  sqcRYGate(q, -2.071515320417727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19334071006332643, 2);
  sqcRYGate(q, 1.9862553595757495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.73424422285066, 0);
  sqcRYGate(q, -2.9621176461590126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.044239339748489, 0);
  sqcRYGate(q, -0.8022814491947284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8730801082160763, 1);
  sqcRYGate(q, -2.100981559913471, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4079029565203287, 1);
  sqcRYGate(q, -2.8908205566092775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4175898255661652, 2);
  sqcRYGate(q, -1.6807494674646986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2478554981003047, 2);
  sqcRYGate(q, -2.8768429092998224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26392280312078, 0);
  sqcRYGate(q, -2.891414286292919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.065139868116225, 0);
  sqcRYGate(q, 0.10773070036680732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9805576353326666, 1);
  sqcRYGate(q, 0.08667081498371676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.939075864891876, 1);
  sqcRYGate(q, -0.46974067888396626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7740612473323422, 2);
  sqcRYGate(q, 2.617711475661316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2367814252320608, 2);
  sqcRYGate(q, 1.0520259964529188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5746080305313344, 0);
  sqcRYGate(q, -0.9416723568057881, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8840801753083056, 0);
  sqcRYGate(q, -0.5559409803113513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5165102303746374, 1);
  sqcRYGate(q, -1.3829396637075315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.555723473541839, 1);
  sqcRYGate(q, 2.169887588026522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5289560730092817, 2);
  sqcRYGate(q, -1.131026289556754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3873412455372693, 2);
  sqcRYGate(q, -2.492176606113184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2983454437087483, 0);
  sqcRYGate(q, -1.6959382137102486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8632976770792158, 0);
  sqcRYGate(q, 1.8132799014240586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3874513620635113, 1);
  sqcRYGate(q, -1.2831671981800001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.42779021064079453, 1);
  sqcRYGate(q, 0.07590995048687375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.116531715662516, 2);
  sqcRYGate(q, 0.7764967497817832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.114196287082075, 2);
  sqcRYGate(q, -1.1817083756027413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.029937591144213, 0);
  sqcRYGate(q, 0.9303216311385275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.510217066584415, 0);
  sqcRYGate(q, -0.056786190342363874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1924275694685662, 1);
  sqcRYGate(q, -2.254205051232989, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.27142206406953484, 1);
  sqcRYGate(q, -1.923909126058617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.44664901151101777, 2);
  sqcRYGate(q, -1.804099885124856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.98709304999847, 2);
  sqcRYGate(q, 2.672634532593767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.235975834057701, 0);
  sqcRYGate(q, 2.518661355740594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3284538774551438, 0);
  sqcRYGate(q, 1.1071483852821034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.916363988803707, 1);
  sqcRYGate(q, 0.07672750023064012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6703164572043407, 1);
  sqcRYGate(q, 0.0704271560086948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8116111938934463, 2);
  sqcRYGate(q, 2.1452410958988786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.165171207819127, 2);
  sqcRYGate(q, 0.4795049955931505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3788939932449944, 0);
  sqcRYGate(q, 1.1347577988050848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5324690263484917, 0);
  sqcRYGate(q, -1.4592296135011802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18569907996675908, 1);
  sqcRYGate(q, -1.9174613955402966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3454486466374629, 1);
  sqcRYGate(q, -0.8471523298139703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15487691812222876, 2);
  sqcRYGate(q, -2.946626496236521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5608466414771183, 2);
  sqcRYGate(q, -0.5243594865709065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4926090624404558, 0);
  sqcRYGate(q, 2.1018802344470213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0061125827599584, 0);
  sqcRYGate(q, -1.195964991442636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8060802713525305, 1);
  sqcRYGate(q, 1.4517485465442368, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.792368398612412, 1);
  sqcRYGate(q, 1.7957951677147912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38438104977946524, 2);
  sqcRYGate(q, -1.801404917662021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.784131580807736, 2);
  sqcRYGate(q, 0.8341447113058545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.252759100681844, 0);
  sqcRYGate(q, 0.25505481557086096, 1);
  sqcRYGate(q, -0.969570252422737, 2);
  sqcRYGate(q, -2.7431008957549596, 3);

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
