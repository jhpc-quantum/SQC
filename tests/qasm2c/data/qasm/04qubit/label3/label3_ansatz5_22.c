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

  sqcRYGate(q, -0.32817643536435176, 0);
  sqcRYGate(q, 0.7064768134006082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7692906915295783, 0);
  sqcRYGate(q, -0.5076434762632829, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7162269897439323, 2);
  sqcRYGate(q, -2.494570141652209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7511727503258593, 2);
  sqcRYGate(q, -1.2579338331294772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.018086139758481, 1);
  sqcRYGate(q, 2.8855560175404724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.140835891692211, 1);
  sqcRYGate(q, 0.7074905049351133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0732200195126813, 0);
  sqcRYGate(q, -3.051034512410713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6157977779698225, 0);
  sqcRYGate(q, 0.8606013740804058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3981162523609258, 2);
  sqcRYGate(q, 1.6619810486869309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40628791195195196, 2);
  sqcRYGate(q, 2.9860283522188733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.634413064445876, 1);
  sqcRYGate(q, 1.12451934227976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4677393842269675, 1);
  sqcRYGate(q, 2.5721415583896903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.953065071880984, 0);
  sqcRYGate(q, -2.4165283080098803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3309598918033976, 0);
  sqcRYGate(q, -0.4998340597917077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.018217378109596893, 2);
  sqcRYGate(q, -2.7908726059250646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6904550700494329, 2);
  sqcRYGate(q, -0.29749441201702087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9030891787254383, 1);
  sqcRYGate(q, -1.6681474230517248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2442128946619375, 1);
  sqcRYGate(q, 2.3791458847119014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0858470510408251, 0);
  sqcRYGate(q, -1.7334283906332697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3050854858919658, 0);
  sqcRYGate(q, 2.350004037173495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0638444329965608, 2);
  sqcRYGate(q, -1.0677334553293045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06325967592560407, 2);
  sqcRYGate(q, -1.2568161697562406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.122341569606208, 1);
  sqcRYGate(q, 2.043784905379155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8075020833853993, 1);
  sqcRYGate(q, 0.2136974018821327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0863581401444686, 0);
  sqcRYGate(q, 0.35039248417481517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.461407014687613, 0);
  sqcRYGate(q, -2.5173810954832034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1023263132533705, 2);
  sqcRYGate(q, -0.2568615813832898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9954499637944147, 2);
  sqcRYGate(q, 1.2362736939188186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2601644102782323, 1);
  sqcRYGate(q, -2.1331989524609964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.932928686252711, 1);
  sqcRYGate(q, 3.126668788329295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8939955401395316, 0);
  sqcRYGate(q, -1.5941444524732757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6879556579216333, 0);
  sqcRYGate(q, -2.174338265555193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.272165668297525, 2);
  sqcRYGate(q, -1.550393579754532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2389725201207087, 2);
  sqcRYGate(q, 2.8448955079008704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4355844739222876, 1);
  sqcRYGate(q, -0.20579985376132548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2006596931812146, 1);
  sqcRYGate(q, -2.645312442262359, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.471415938044725, 0);
  sqcRYGate(q, -0.28987063720299755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9410608530692184, 0);
  sqcRYGate(q, -2.305719386769997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2955833129685424, 2);
  sqcRYGate(q, -1.535612439470633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.676537534873238, 2);
  sqcRYGate(q, 2.514405744276271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.047277296290409325, 1);
  sqcRYGate(q, 0.11956584359909508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3538231300675484, 1);
  sqcRYGate(q, -1.7019380434407285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07521566031321747, 0);
  sqcRYGate(q, 1.6408767863177687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8028507836602589, 0);
  sqcRYGate(q, -2.468177746945283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.914799462534561, 2);
  sqcRYGate(q, -0.5987496320918966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6949710152727893, 2);
  sqcRYGate(q, -0.4789013672945659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.62691431911717, 1);
  sqcRYGate(q, 1.0959381932880694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0513492417458945, 1);
  sqcRYGate(q, -0.17499559198319123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8720207130501558, 0);
  sqcRYGate(q, -1.989139998864945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.030883774150718857, 0);
  sqcRYGate(q, 1.10499595677041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16736942392724294, 2);
  sqcRYGate(q, 0.5899455586904196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3653366941148115, 2);
  sqcRYGate(q, 1.8452984258154173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7467403238455957, 1);
  sqcRYGate(q, -2.9621262996053894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9957300588395039, 1);
  sqcRYGate(q, -1.540555704295969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3478682445637764, 0);
  sqcRYGate(q, 2.8452698401354697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1694711485343463, 0);
  sqcRYGate(q, 0.7033950651251564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6714817974444189, 2);
  sqcRYGate(q, 2.4045363282525316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7769240325941724, 2);
  sqcRYGate(q, 0.9924594599755314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.218469712237874, 1);
  sqcRYGate(q, 1.1748033456512301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.029051972647554433, 1);
  sqcRYGate(q, 1.3720703154109124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6631660909052688, 0);
  sqcRYGate(q, -2.6175236222275506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7363506084470993, 0);
  sqcRYGate(q, -1.8903128281560004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4357117377311632, 2);
  sqcRYGate(q, -0.6085926875177573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2341261293680024, 2);
  sqcRYGate(q, -1.4621287573062798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.722199242410329, 1);
  sqcRYGate(q, -0.6453720136431844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6190952053846832, 1);
  sqcRYGate(q, 2.8895797970354753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7326370745515548, 0);
  sqcRYGate(q, 2.435995767755751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.425683706318707, 0);
  sqcRYGate(q, -0.5615059908543332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8372626644097574, 2);
  sqcRYGate(q, 0.6885200455934649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1995337252748175, 2);
  sqcRYGate(q, 1.2406895689048418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6134432978044737, 1);
  sqcRYGate(q, 0.4943488182030782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1889453534589636, 1);
  sqcRYGate(q, 0.9438047818654738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6140892913013856, 0);
  sqcRYGate(q, 2.0402398891609543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6417840456513284, 0);
  sqcRYGate(q, -1.4772563281583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5868434147823083, 2);
  sqcRYGate(q, -0.9900472210006449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23281402796518527, 2);
  sqcRYGate(q, -0.8304596426205713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.761250611300727, 1);
  sqcRYGate(q, 1.9054794409143534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2225329305790176, 1);
  sqcRYGate(q, 2.125869769656097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.627628342798459, 0);
  sqcRYGate(q, 0.6939687295530007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.667282336468082, 0);
  sqcRYGate(q, -2.339578202096662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.00974521892823965, 2);
  sqcRYGate(q, 2.6594378447979263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.802341722024889, 2);
  sqcRYGate(q, 2.842355680393647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5731680494884817, 1);
  sqcRYGate(q, -1.6620651330846958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19066200956588342, 1);
  sqcRYGate(q, -2.8299461716332597, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6271820314175844, 0);
  sqcRYGate(q, -2.1654623976449288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5957034799247289, 0);
  sqcRYGate(q, 2.90457497985322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.596110289409114, 2);
  sqcRYGate(q, 2.7079056543942843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.028707843810567, 2);
  sqcRYGate(q, -0.44852511910982285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.928103469868447, 1);
  sqcRYGate(q, -2.4048494317449167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1233712192891887, 1);
  sqcRYGate(q, -2.3541569537277565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5803653892879419, 0);
  sqcRYGate(q, -2.8180798557489513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5323871365380901, 0);
  sqcRYGate(q, -2.5103990620528767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7065720088819836, 2);
  sqcRYGate(q, 1.9657574212894189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8831448163283161, 2);
  sqcRYGate(q, -2.160614790842783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.190465400165388, 1);
  sqcRYGate(q, -3.0478784409209307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.665335678206672, 1);
  sqcRYGate(q, -1.3209074513401227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0996588204396598, 0);
  sqcRYGate(q, 0.6241889406617908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.385690119500626, 0);
  sqcRYGate(q, 1.9136845266563678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8385857216470374, 2);
  sqcRYGate(q, -2.0686839817988476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.34246665527115, 2);
  sqcRYGate(q, 2.2730674007147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2450275520661584, 1);
  sqcRYGate(q, 2.606449114402313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3775826228553956, 1);
  sqcRYGate(q, 0.718128646913207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7759672688839707, 0);
  sqcRYGate(q, 2.4529776180525293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4836100270189283, 0);
  sqcRYGate(q, -1.1944275574938663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.921542631869564, 2);
  sqcRYGate(q, 1.3996222884606393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7783744033591633, 2);
  sqcRYGate(q, -2.7674396748196215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7209476898304366, 1);
  sqcRYGate(q, -1.87028263982221, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4524613858141089, 1);
  sqcRYGate(q, -0.11403671111871193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7900444043881434, 0);
  sqcRYGate(q, -2.292718885092773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3087186749701676, 0);
  sqcRYGate(q, -2.5727798961708643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.188320309523516, 2);
  sqcRYGate(q, -1.8445645786283675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.101776319600008, 2);
  sqcRYGate(q, -3.1011928871609515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0796112647293838, 1);
  sqcRYGate(q, -2.1768127874725636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7991786527973394, 1);
  sqcRYGate(q, -1.3274550431065257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6935498875626327, 0);
  sqcRYGate(q, -2.9220910876087185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3365522857072127, 0);
  sqcRYGate(q, -2.7154308350639695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.018930447132093, 2);
  sqcRYGate(q, 1.0815859486645887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1886202088806572, 2);
  sqcRYGate(q, -1.7443877935425194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.496068522145236, 1);
  sqcRYGate(q, 0.5144095885925914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.331800895965259, 1);
  sqcRYGate(q, 0.045998149444718195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3413109159957814, 0);
  sqcRYGate(q, -0.09347837609517931, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6312245246633225, 0);
  sqcRYGate(q, -0.24793771321870928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.621029322516622, 2);
  sqcRYGate(q, -1.6396384280574234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03796878056564236, 2);
  sqcRYGate(q, -0.8392101599293325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5740960344593233, 1);
  sqcRYGate(q, 2.2824006727952604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3503386473550875, 1);
  sqcRYGate(q, 1.8343704433673231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13982722192146257, 0);
  sqcRYGate(q, 1.3497078671102836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5981953010189627, 0);
  sqcRYGate(q, -0.4702915850730261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0815484586566553, 2);
  sqcRYGate(q, -1.565629957894467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7131949679708467, 2);
  sqcRYGate(q, -1.7371059607832395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2708286087420033, 1);
  sqcRYGate(q, -1.9921519317651946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28166836132630824, 1);
  sqcRYGate(q, 0.8709870536347948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.978449148586088, 0);
  sqcRYGate(q, 1.809517782088303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9492525425296885, 0);
  sqcRYGate(q, -1.6460645569647028, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4521925832090536, 2);
  sqcRYGate(q, -2.8555165516375904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.539965052245089, 2);
  sqcRYGate(q, -1.3349174027099626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.84873694812747, 1);
  sqcRYGate(q, -1.8476143907030687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.632997591171292, 1);
  sqcRYGate(q, -1.9268518034500568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7709720368135935, 0);
  sqcRYGate(q, 1.4064526803160833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4088429490173013, 0);
  sqcRYGate(q, 2.3845846707459404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.773659158083485, 2);
  sqcRYGate(q, -2.787765368426378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5269282161772049, 2);
  sqcRYGate(q, 1.6863791805016655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9699726621040207, 1);
  sqcRYGate(q, 3.108367613986106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.729731715461612, 1);
  sqcRYGate(q, -0.6279588596469692, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3848330095017132, 0);
  sqcRYGate(q, -1.5107201014964773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0603582873137665, 0);
  sqcRYGate(q, -3.071435059241926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5959677922363738, 2);
  sqcRYGate(q, -2.930967024176362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.048693125549513, 2);
  sqcRYGate(q, 0.09775147250175235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8279854255966987, 1);
  sqcRYGate(q, 1.137915421687583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3769904047307464, 1);
  sqcRYGate(q, -1.9869722342609872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9230466271639233, 0);
  sqcRYGate(q, 0.9689354679170403, 1);
  sqcRYGate(q, 1.0187431697789167, 2);
  sqcRYGate(q, 0.2515799068683524, 3);

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
