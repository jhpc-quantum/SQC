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

  sqcRYGate(q, 2.612811218624191, 0);
  sqcRYGate(q, 1.2651696907849057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6655091723066295, 0);
  sqcRYGate(q, -1.3016308673998926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3191847743845182, 2);
  sqcRYGate(q, 2.1451519684723523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5659685062069552, 2);
  sqcRYGate(q, 2.5711247682283616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4064658718221574, 4);
  sqcRYGate(q, -2.6638330998583166, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4166225214184608, 4);
  sqcRYGate(q, -0.7343282575810804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2895898954210145, 6);
  sqcRYGate(q, -2.8993113735559968, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4874920681717962, 6);
  sqcRYGate(q, 3.0148408639082604, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4731851237339177, 0);
  sqcRYGate(q, 0.1741549300277479, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.393204200614941, 0);
  sqcRYGate(q, -2.5155233931917835, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9108579392908132, 2);
  sqcRYGate(q, -2.9329454247841, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0724227910885613, 2);
  sqcRYGate(q, 1.1241998278068905, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1354197318007633, 4);
  sqcRYGate(q, 0.3743772028116756, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0581099001660186, 4);
  sqcRYGate(q, 2.492239399664506, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1984310414882806, 1);
  sqcRYGate(q, 1.0236879411302897, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5938160092901525, 1);
  sqcRYGate(q, 1.4381407322177884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13897525558552637, 3);
  sqcRYGate(q, -1.910341301180443, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1552641805473467, 3);
  sqcRYGate(q, 0.3938851585532497, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.986418011497564, 5);
  sqcRYGate(q, 0.7422299569917725, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.25878333692996414, 5);
  sqcRYGate(q, 0.6812293834541919, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.509079332360108, 0);
  sqcRYGate(q, -0.36672093850827725, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0285740104542307, 0);
  sqcRYGate(q, -1.436792326582002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.756845857039314, 1);
  sqcRYGate(q, -3.087299707544465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.978986247455035, 1);
  sqcRYGate(q, -0.8706793959755313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.036304579937581, 2);
  sqcRYGate(q, -1.8321211793311747, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.097010554906734, 2);
  sqcRYGate(q, 0.5345832567425024, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.518437048089045, 3);
  sqcRYGate(q, -2.1294218622390844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8320070760523867, 3);
  sqcRYGate(q, 0.4733961120984702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.460149045434341, 4);
  sqcRYGate(q, 1.4595731216393117, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.975631952250656, 4);
  sqcRYGate(q, -0.6693657650846067, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.3143750477001825, 5);
  sqcRYGate(q, 2.2366843208936666, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.836165576367315, 5);
  sqcRYGate(q, -0.056105371802320086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.42890842384089056, 0);
  sqcRYGate(q, -2.84094732615171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5466688355126526, 0);
  sqcRYGate(q, 1.2312338428188685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.948062987797921, 2);
  sqcRYGate(q, -0.07752919416089554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0133393616028417, 2);
  sqcRYGate(q, 1.7804692421927828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2786452442269507, 4);
  sqcRYGate(q, -1.837260324298878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3853964859642618, 4);
  sqcRYGate(q, 0.6981095933624681, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.225967472062507, 6);
  sqcRYGate(q, -2.1556233699547307, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5677682410616516, 6);
  sqcRYGate(q, -0.7675532258802045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.033126229724288, 0);
  sqcRYGate(q, 1.1098014298019223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28708232825718927, 0);
  sqcRYGate(q, -1.0067095783444822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.440349927311718, 2);
  sqcRYGate(q, -2.927085953291011, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.370975674610684, 2);
  sqcRYGate(q, -0.42541195692736483, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2978125039776147, 4);
  sqcRYGate(q, 0.44761608623488114, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6157658615717847, 4);
  sqcRYGate(q, 0.7611261561071502, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6584214654503266, 1);
  sqcRYGate(q, -2.517620803291211, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5608685723487499, 1);
  sqcRYGate(q, -0.28847815152056694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.25989384338072963, 3);
  sqcRYGate(q, 1.6642283418084052, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5704186982903723, 3);
  sqcRYGate(q, -2.610264812598837, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1080089028010178, 5);
  sqcRYGate(q, -1.8178086389218266, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.71210927789836, 5);
  sqcRYGate(q, 2.1581726631477247, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.04475905194847183, 0);
  sqcRYGate(q, -2.343695392314954, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6371065895313661, 0);
  sqcRYGate(q, -1.2789117139840114, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1111942077389925, 1);
  sqcRYGate(q, -1.5690532366735601, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5774294757801517, 1);
  sqcRYGate(q, 2.1648386038587857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9774713687581833, 2);
  sqcRYGate(q, -0.6197478843134233, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.876539883485969, 2);
  sqcRYGate(q, 1.1648058688150282, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.1184617431647066, 3);
  sqcRYGate(q, -3.0634510891135087, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2071355876612797, 3);
  sqcRYGate(q, 2.1696626072760505, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0069560565679460925, 4);
  sqcRYGate(q, 1.7845331608004351, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.1898210221220635, 4);
  sqcRYGate(q, -1.4776965827124542, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.42068356418284836, 5);
  sqcRYGate(q, 1.6193058365613515, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.03549090424950929, 5);
  sqcRYGate(q, 0.9887361952755153, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.979353076127417, 0);
  sqcRYGate(q, -1.6067377723145189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.786056503656953, 0);
  sqcRYGate(q, 2.9549293181778795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.270898305805251, 2);
  sqcRYGate(q, 0.43786867641447225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6466617861395805, 2);
  sqcRYGate(q, 1.4066205397265494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45621174148448773, 4);
  sqcRYGate(q, 2.9081808675534613, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5415039950616691, 4);
  sqcRYGate(q, 2.201423257014743, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.626536108026901, 6);
  sqcRYGate(q, -0.5599146375080705, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2208677900145113, 6);
  sqcRYGate(q, -0.5351183824835691, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.169407084504037, 0);
  sqcRYGate(q, -1.5849987605923985, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.46424129687216364, 0);
  sqcRYGate(q, -2.8538347300186326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0488321627330253, 2);
  sqcRYGate(q, 2.5755965010530297, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5529297822549295, 2);
  sqcRYGate(q, -1.6560747952731871, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.130542111929094, 4);
  sqcRYGate(q, 0.5408701754800039, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.550331081976046, 4);
  sqcRYGate(q, 2.6275839167530726, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5400805967717934, 1);
  sqcRYGate(q, 1.0439148231406445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7804045464507965, 1);
  sqcRYGate(q, 1.3820557118257133, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3626142466670572, 3);
  sqcRYGate(q, -1.5456710495588124, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5412490957447313, 3);
  sqcRYGate(q, -0.9162130472980358, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.117421441924717, 5);
  sqcRYGate(q, -3.06143713294131, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6730562431459433, 5);
  sqcRYGate(q, 2.9559157357497603, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1791691554041215, 0);
  sqcRYGate(q, 1.7335093310432137, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.26083979362386434, 0);
  sqcRYGate(q, 2.2842754932516622, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8841926382288987, 1);
  sqcRYGate(q, -0.06476993546724158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6027341701397146, 1);
  sqcRYGate(q, -0.015229200628045447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9997050063774278, 2);
  sqcRYGate(q, 1.1557976263854641, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.4244737842682653, 2);
  sqcRYGate(q, -2.4344831177679263, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.709764268200855, 3);
  sqcRYGate(q, 2.228199166548578, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.27651265159208616, 3);
  sqcRYGate(q, 1.3028723508420486, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8958069974676004, 4);
  sqcRYGate(q, -2.072645245625327, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.4092752814952436, 4);
  sqcRYGate(q, 0.48754366627487133, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.0026790735078337, 5);
  sqcRYGate(q, -0.39011441224212656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7198528243357076, 5);
  sqcRYGate(q, -3.0237869521385576, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5149930629336902, 0);
  sqcRYGate(q, 0.8313840460267721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30768926736266566, 0);
  sqcRYGate(q, -2.5101871229584463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0679302630757586, 2);
  sqcRYGate(q, 2.8754720381871155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7660172195474524, 2);
  sqcRYGate(q, -1.0133220187635736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1602830195020273, 4);
  sqcRYGate(q, -2.6623030997374433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9201836245907242, 4);
  sqcRYGate(q, 0.6174463686350631, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5231438613612678, 6);
  sqcRYGate(q, -0.0973014427032406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.201712301250769, 6);
  sqcRYGate(q, 0.31085429771351425, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7629558773910794, 0);
  sqcRYGate(q, 1.6776519837273156, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4483600830888856, 0);
  sqcRYGate(q, -0.8940821695605746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7209966106946988, 2);
  sqcRYGate(q, 0.3081437299584264, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8346542292798733, 2);
  sqcRYGate(q, 0.20388567909105237, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.702849488383898, 4);
  sqcRYGate(q, 1.675517630999436, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9057566317227206, 4);
  sqcRYGate(q, 2.719803864304758, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.23405027750977417, 1);
  sqcRYGate(q, 1.5001794197164158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4693975137405758, 1);
  sqcRYGate(q, 1.3840316519762315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5618056981644111, 3);
  sqcRYGate(q, -3.087713905337876, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.483994803655745, 3);
  sqcRYGate(q, 0.44565129038782625, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.031177955791997114, 5);
  sqcRYGate(q, 2.4122125255428264, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.344251663225163, 5);
  sqcRYGate(q, -2.5393406252137183, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8469930985966876, 0);
  sqcRYGate(q, 2.876703398128225, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.616044491845429, 0);
  sqcRYGate(q, 1.147469580546904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.138032432627354, 1);
  sqcRYGate(q, -0.5237375685434239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.005422118470123, 1);
  sqcRYGate(q, 2.1996062747761567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03888926425213439, 2);
  sqcRYGate(q, 1.6182225438209326, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.138930544341374, 2);
  sqcRYGate(q, 1.9367809862434513, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.3219241151968753, 3);
  sqcRYGate(q, -0.06162298491200513, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0909175806811287, 3);
  sqcRYGate(q, -1.5745257796141852, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.918218440785373, 4);
  sqcRYGate(q, -1.8332884152140725, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.5581147256348267, 4);
  sqcRYGate(q, 2.093407982146611, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.923102561920153, 5);
  sqcRYGate(q, -2.8577788540305993, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.904231107201631, 5);
  sqcRYGate(q, -2.3774530283508417, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2954882412021025, 0);
  sqcRYGate(q, 1.1692795156853104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.447260668039391, 0);
  sqcRYGate(q, 0.035958935000470364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3720462371680497, 2);
  sqcRYGate(q, -2.791711066647994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.873523157970936, 2);
  sqcRYGate(q, 1.7776480971908113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3873785076866647, 4);
  sqcRYGate(q, -2.9753353440536365, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6492864997022, 4);
  sqcRYGate(q, -1.2233447212372406, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6147128189901097, 6);
  sqcRYGate(q, 1.1369981887753031, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.571681325868231, 6);
  sqcRYGate(q, -2.6384915588548874, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.28000051574668383, 0);
  sqcRYGate(q, -2.3083368757562504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4224780943813673, 0);
  sqcRYGate(q, 1.7919774591368205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.086385787876978, 2);
  sqcRYGate(q, 1.081678099609099, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.12699679465138117, 2);
  sqcRYGate(q, 2.410429103765924, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.011481593615757, 4);
  sqcRYGate(q, 2.344453040230268, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4166369553771938, 4);
  sqcRYGate(q, 1.46833879345688, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2730457853918162, 1);
  sqcRYGate(q, -1.6169948051653442, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.666060765465783, 1);
  sqcRYGate(q, -1.6451020685337168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9749008296837256, 3);
  sqcRYGate(q, 2.196720518160158, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1974377012504087, 3);
  sqcRYGate(q, 2.9376343425618003, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3005347051886305, 5);
  sqcRYGate(q, -2.690332301148222, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.925377709059399, 5);
  sqcRYGate(q, 0.25505223949176675, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.946990837620121, 0);
  sqcRYGate(q, 0.47011035936971357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0586651578395907, 0);
  sqcRYGate(q, -1.6138396697715207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7862075333590846, 1);
  sqcRYGate(q, -0.6181310731017566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.655558257423803, 1);
  sqcRYGate(q, -0.5789479208701276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8059527534043662, 2);
  sqcRYGate(q, 0.5079797684292224, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.5878774729078624, 2);
  sqcRYGate(q, 0.3428220037334162, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.1436062781912213, 3);
  sqcRYGate(q, -2.281350259434893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.687396302556321, 3);
  sqcRYGate(q, 0.817026536307579, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.38443067995537383, 4);
  sqcRYGate(q, 0.2660384105577676, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.096626340640298, 4);
  sqcRYGate(q, 2.4011354511563487, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0275865247832083, 5);
  sqcRYGate(q, -0.933520552843617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8016641189002316, 5);
  sqcRYGate(q, -2.7698176063803577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3176446025075856, 0);
  sqcRYGate(q, 0.7555371974941711, 1);
  sqcRYGate(q, 2.69319118225486, 2);
  sqcRYGate(q, -1.3798343695853372, 3);
  sqcRYGate(q, -0.9871940367025269, 4);
  sqcRYGate(q, -2.06544567838845, 5);
  sqcRYGate(q, -0.2703764443936463, 6);
  sqcRYGate(q, 2.109016378731198, 7);

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
