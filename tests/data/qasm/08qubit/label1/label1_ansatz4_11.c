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

  sqcRYGate(q, -3.04676965305592, 0);
  sqcRZGate(q, 1.9901407483454534, 0);
  sqcRYGate(q, -3.1399529956507144, 1);
  sqcRZGate(q, -2.1068070436943804, 1);
  sqcRYGate(q, -1.8269162404649366, 2);
  sqcRZGate(q, -0.1159252152964937, 2);
  sqcRYGate(q, -1.0280561427074861, 3);
  sqcRZGate(q, 1.803263650773144, 3);
  sqcRYGate(q, 3.1315314745017737, 4);
  sqcRZGate(q, -0.1725348077971116, 4);
  sqcRYGate(q, -0.0011518464934994806, 5);
  sqcRZGate(q, -0.47541312828621035, 5);
  sqcRYGate(q, -0.7264058332647956, 6);
  sqcRZGate(q, 0.03634266064808612, 6);
  sqcRYGate(q, -0.6792212542432664, 7);
  sqcRZGate(q, 2.814994086645882, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8176616326899486, 0);
  sqcRZGate(q, -2.0554922432493328, 0);
  sqcRYGate(q, 0.23727503662517704, 1);
  sqcRZGate(q, 0.6530286084667454, 1);
  sqcRYGate(q, -1.4865756553068763, 2);
  sqcRZGate(q, 2.144627741837188, 2);
  sqcRYGate(q, 0.26480403999006796, 3);
  sqcRZGate(q, -0.005247981952025359, 3);
  sqcRYGate(q, -3.1369228733934498, 4);
  sqcRZGate(q, 1.2139946353267828, 4);
  sqcRYGate(q, 3.099878605753499, 5);
  sqcRZGate(q, -2.7406573609268388, 5);
  sqcRYGate(q, -0.012535346866155983, 6);
  sqcRZGate(q, -0.20453391210865934, 6);
  sqcRYGate(q, 1.4451948159110888, 7);
  sqcRZGate(q, 0.4548869203584689, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0449854820256732, 0);
  sqcRZGate(q, -2.671524720196301, 0);
  sqcRYGate(q, -2.0019808044824545, 1);
  sqcRZGate(q, 0.8786854419822641, 1);
  sqcRYGate(q, -1.1831041263490167, 2);
  sqcRZGate(q, 3.0112398113136125, 2);
  sqcRYGate(q, -1.6723711705076898, 3);
  sqcRZGate(q, -0.005525915687726979, 3);
  sqcRYGate(q, -1.4436108804129901, 4);
  sqcRZGate(q, -1.5433194410416908, 4);
  sqcRYGate(q, 0.4609942924107067, 5);
  sqcRZGate(q, 3.0401436782779214, 5);
  sqcRYGate(q, 0.5804210770554037, 6);
  sqcRZGate(q, 1.0475911424929005, 6);
  sqcRYGate(q, 0.257323934839955, 7);
  sqcRZGate(q, -2.5567641848957097, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5551540054701558, 0);
  sqcRZGate(q, 1.5000284190179978, 0);
  sqcRYGate(q, 0.5309921951558172, 1);
  sqcRZGate(q, 1.1541147516452224, 1);
  sqcRYGate(q, -1.5697673967805008, 2);
  sqcRZGate(q, -0.2556884346878754, 2);
  sqcRYGate(q, -1.2460653449391703, 3);
  sqcRZGate(q, 2.7432418622996595, 3);
  sqcRYGate(q, 0.004916306513112659, 4);
  sqcRZGate(q, -3.0289991162114815, 4);
  sqcRYGate(q, -0.002652237720413661, 5);
  sqcRZGate(q, -2.1401339573355953, 5);
  sqcRYGate(q, 0.11057943487530399, 6);
  sqcRZGate(q, 1.3276761325295425, 6);
  sqcRYGate(q, 0.317889373713578, 7);
  sqcRZGate(q, 0.007913041975334087, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.18210236154967002, 0);
  sqcRZGate(q, 0.6408727163382784, 0);
  sqcRYGate(q, -1.1098260034037581, 1);
  sqcRZGate(q, -2.369300839044506, 1);
  sqcRYGate(q, 1.343441167122299, 2);
  sqcRZGate(q, 2.991920015600461, 2);
  sqcRYGate(q, -2.066186205791592, 3);
  sqcRZGate(q, -1.4307018926775292, 3);
  sqcRYGate(q, -0.28527436571537806, 4);
  sqcRZGate(q, 2.2682904101971753, 4);
  sqcRYGate(q, 1.8704196315056807, 5);
  sqcRZGate(q, 0.27007628783458887, 5);
  sqcRYGate(q, -2.1947181904886257, 6);
  sqcRZGate(q, -1.8456789846714212, 6);
  sqcRYGate(q, 0.8944968588732962, 7);
  sqcRZGate(q, -3.0480918071102927, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1587033842139514, 0);
  sqcRZGate(q, 2.3746184424559686, 0);
  sqcRYGate(q, 2.247963249478341, 1);
  sqcRZGate(q, -2.515388669528669, 1);
  sqcRYGate(q, 3.13690000036227, 2);
  sqcRZGate(q, 1.9588913922727578, 2);
  sqcRYGate(q, 0.0006656064587173427, 3);
  sqcRZGate(q, 0.869086482768279, 3);
  sqcRYGate(q, 3.1384998036079006, 4);
  sqcRZGate(q, 1.1021980969842593, 4);
  sqcRYGate(q, -3.120174325523232, 5);
  sqcRZGate(q, 2.5403913059626735, 5);
  sqcRYGate(q, 2.466922883135648, 6);
  sqcRZGate(q, -1.365026950924837, 6);
  sqcRYGate(q, 0.2244366975726638, 7);
  sqcRZGate(q, 2.2299005909314156, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7530113955696957, 0);
  sqcRZGate(q, 0.6379301401599616, 0);
  sqcRYGate(q, 2.8265880220894353, 1);
  sqcRZGate(q, -0.7746335972805445, 1);
  sqcRYGate(q, -1.768136571310957, 2);
  sqcRZGate(q, 1.629874752115226, 2);
  sqcRYGate(q, 1.3213624239556696, 3);
  sqcRZGate(q, 1.925555490787861, 3);
  sqcRYGate(q, -0.16470284867643328, 4);
  sqcRZGate(q, -0.2869760961919638, 4);
  sqcRYGate(q, 0.730170928422681, 5);
  sqcRZGate(q, -2.4436114248455314, 5);
  sqcRYGate(q, 0.6787570391719996, 6);
  sqcRZGate(q, -0.07999564804087973, 6);
  sqcRYGate(q, 1.2817515381003382, 7);
  sqcRZGate(q, 2.6535731345152413, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3080763110746725, 0);
  sqcRZGate(q, -0.5785634991096611, 0);
  sqcRYGate(q, 1.0190063330663937, 1);
  sqcRZGate(q, 1.6889185349506761, 1);
  sqcRYGate(q, 0.03556805644198757, 2);
  sqcRZGate(q, -0.6498740532507821, 2);
  sqcRYGate(q, 3.126585285986433, 3);
  sqcRZGate(q, 0.5772241737932716, 3);
  sqcRYGate(q, 3.140256195069617, 4);
  sqcRZGate(q, -0.011730235758229684, 4);
  sqcRYGate(q, -0.0025616887763337814, 5);
  sqcRZGate(q, 1.930440178757661, 5);
  sqcRYGate(q, 0.8910843677862735, 6);
  sqcRZGate(q, 0.13550004891023004, 6);
  sqcRYGate(q, 1.0563235267354951, 7);
  sqcRZGate(q, -0.08894862225523602, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8842946412545717, 0);
  sqcRZGate(q, -2.269834089966669, 0);
  sqcRYGate(q, -2.3163370518475355, 1);
  sqcRZGate(q, -2.7182767271372796, 1);
  sqcRYGate(q, -1.9995752124368051, 2);
  sqcRZGate(q, -2.4335065539980323, 2);
  sqcRYGate(q, 2.5389664665224907, 3);
  sqcRZGate(q, 0.23124976815494352, 3);
  sqcRYGate(q, -0.18673296775647372, 4);
  sqcRZGate(q, -1.2453512260552086, 4);
  sqcRYGate(q, -3.0388321550091963, 5);
  sqcRZGate(q, -1.6588252118509315, 5);
  sqcRYGate(q, 2.63888677376759, 6);
  sqcRZGate(q, 0.6328858356084561, 6);
  sqcRYGate(q, 0.1261142819211063, 7);
  sqcRZGate(q, 3.046831808660322, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.835946669601239, 0);
  sqcRZGate(q, -1.5197221999361337, 0);
  sqcRYGate(q, 0.3783904835857861, 1);
  sqcRZGate(q, -2.5707958960349044, 1);
  sqcRYGate(q, -3.1340300776330747, 2);
  sqcRZGate(q, 0.3283019337197847, 2);
  sqcRYGate(q, 3.08596116055048, 3);
  sqcRZGate(q, 1.4121650550741167, 3);
  sqcRYGate(q, 0.00045567820164915673, 4);
  sqcRZGate(q, 2.794553237530994, 4);
  sqcRYGate(q, -0.0014895354328308128, 5);
  sqcRZGate(q, 3.0151424142100782, 5);
  sqcRYGate(q, 0.8103030024186516, 6);
  sqcRZGate(q, 2.9288104659754666, 6);
  sqcRYGate(q, -1.7892816914555327, 7);
  sqcRZGate(q, -1.901013851352557, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4520696423223171, 0);
  sqcRZGate(q, -0.42867768436563114, 0);
  sqcRYGate(q, 2.4599334547144562, 1);
  sqcRZGate(q, 1.1137233576668155, 1);
  sqcRYGate(q, -2.9965876109260163, 2);
  sqcRZGate(q, 2.710337587518216, 2);
  sqcRYGate(q, -2.2747565313970988, 3);
  sqcRZGate(q, -2.060872047038684, 3);
  sqcRYGate(q, 1.5546108146337585, 4);
  sqcRZGate(q, -2.975628617946314, 4);
  sqcRYGate(q, 0.8433299038895256, 5);
  sqcRZGate(q, 2.173900806944647, 5);
  sqcRYGate(q, -0.33821528297834735, 6);
  sqcRZGate(q, 1.53053597873586, 6);
  sqcRYGate(q, 2.087764057659233, 7);
  sqcRZGate(q, -1.5097332985787588, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.22041517636293467, 0);
  sqcRZGate(q, 1.901114460862349, 0);
  sqcRYGate(q, -0.5793834415621684, 1);
  sqcRZGate(q, -0.6045714396800158, 1);
  sqcRYGate(q, -1.477513227720811, 2);
  sqcRZGate(q, -1.8133250122465547, 2);
  sqcRYGate(q, -0.24166111665706447, 3);
  sqcRZGate(q, -0.2365502772114665, 3);
  sqcRYGate(q, -0.0009343518215864712, 4);
  sqcRZGate(q, -3.094873628157149, 4);
  sqcRYGate(q, 4.19424859749995e-05, 5);
  sqcRZGate(q, 0.963262097926926, 5);
  sqcRYGate(q, -1.6213579059731975, 6);
  sqcRZGate(q, 1.577264500387811, 6);
  sqcRYGate(q, -2.9121093169280483, 7);
  sqcRZGate(q, -2.8182223694512167, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2530086652151485, 0);
  sqcRZGate(q, 0.6077801801724917, 0);
  sqcRYGate(q, -2.8744530802967945, 1);
  sqcRZGate(q, 1.5660775311199835, 1);
  sqcRYGate(q, 2.665377652869802, 2);
  sqcRZGate(q, -1.8677569645757852, 2);
  sqcRYGate(q, -3.1042522274405338, 3);
  sqcRZGate(q, -2.1308200379501887, 3);
  sqcRYGate(q, 0.000504346561805669, 4);
  sqcRZGate(q, 2.405916017473062, 4);
  sqcRYGate(q, -1.5821291976433918, 5);
  sqcRZGate(q, 0.5730396421927928, 5);
  sqcRYGate(q, 3.1022173564364373, 6);
  sqcRZGate(q, -0.10872105508177553, 6);
  sqcRYGate(q, 1.432397762927974, 7);
  sqcRZGate(q, -0.2795285296185367, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0859793684040572, 0);
  sqcRZGate(q, -1.3348895473312312, 0);
  sqcRYGate(q, -1.6434561257955542, 1);
  sqcRZGate(q, 0.04614650293162103, 1);
  sqcRYGate(q, 0.0831298025462811, 2);
  sqcRZGate(q, -1.6433525654636434, 2);
  sqcRYGate(q, 0.03818218296055072, 3);
  sqcRZGate(q, 1.5603884702201727, 3);
  sqcRYGate(q, 3.1021760197545802, 4);
  sqcRZGate(q, -1.691511364844867, 4);
  sqcRYGate(q, -0.0011215097492884851, 5);
  sqcRZGate(q, 2.577744189741602, 5);
  sqcRYGate(q, -1.571270780577084, 6);
  sqcRZGate(q, 3.1322592854204103, 6);
  sqcRYGate(q, -1.5675403836156976, 7);
  sqcRZGate(q, 0.005172148001824084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.110499109507544, 0);
  sqcRZGate(q, 1.2957724091005514, 0);
  sqcRYGate(q, -0.06513105574083641, 1);
  sqcRZGate(q, -1.1905164777384316, 1);
  sqcRYGate(q, 1.6037490594923407, 2);
  sqcRZGate(q, 1.7237802482096214, 2);
  sqcRYGate(q, -1.57779358717027, 3);
  sqcRZGate(q, -1.862142350875702, 3);
  sqcRYGate(q, 0.04019451427560178, 4);
  sqcRZGate(q, -1.7797809094775534, 4);
  sqcRYGate(q, 1.5631303984721594, 5);
  sqcRZGate(q, -0.08958000675223055, 5);
  sqcRYGate(q, -1.5735798439545898, 6);
  sqcRZGate(q, -0.29539386492464537, 6);
  sqcRYGate(q, -1.5715439430348646, 7);
  sqcRZGate(q, 2.7508468253310747, 7);

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
