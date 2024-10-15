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

  sqcRYGate(q, -0.8943699166712369, 0);
  sqcRZGate(q, -0.13934794897004463, 0);
  sqcRYGate(q, -3.0109275327197507, 1);
  sqcRZGate(q, 0.6707579266501226, 1);
  sqcRYGate(q, 1.9320233761191303, 2);
  sqcRZGate(q, -1.335962181493922, 2);
  sqcRYGate(q, -2.528695940085699, 3);
  sqcRZGate(q, -0.4701179611582695, 3);
  sqcRYGate(q, 1.2025251838397004, 4);
  sqcRZGate(q, -2.8184795767542097, 4);
  sqcRYGate(q, 1.765822372546141, 5);
  sqcRZGate(q, 0.8238039616170418, 5);
  sqcRYGate(q, -1.175628217659804, 6);
  sqcRZGate(q, -2.6458082400388188, 6);
  sqcRYGate(q, -2.0853244488650997, 7);
  sqcRZGate(q, -0.5217499470768168, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.805821951143169, 0);
  sqcRZGate(q, 0.16747562175369168, 0);
  sqcRYGate(q, 1.6666764489411603, 1);
  sqcRZGate(q, -1.3711132578057716, 1);
  sqcRYGate(q, -1.1142225931261196, 2);
  sqcRZGate(q, -2.7717311054675435, 2);
  sqcRYGate(q, 1.783696575148471, 3);
  sqcRZGate(q, -1.945798632428395, 3);
  sqcRYGate(q, -2.0035763255723955, 4);
  sqcRZGate(q, 2.3462349281556967, 4);
  sqcRYGate(q, -1.5260879210876828, 5);
  sqcRZGate(q, -2.9213388934636333, 5);
  sqcRYGate(q, 1.2881676011549033, 6);
  sqcRZGate(q, 2.0481560499711002, 6);
  sqcRYGate(q, -1.354742437861824, 7);
  sqcRZGate(q, 2.29055256035807, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.868972549003519, 0);
  sqcRZGate(q, 0.5472781497870841, 0);
  sqcRYGate(q, 1.29820664258151, 1);
  sqcRZGate(q, 0.985957951129115, 1);
  sqcRYGate(q, 1.5388629133498801, 2);
  sqcRZGate(q, 1.9644770706614751, 2);
  sqcRYGate(q, 0.3244958418630897, 3);
  sqcRZGate(q, -2.058932316203473, 3);
  sqcRYGate(q, -2.320419943896845, 4);
  sqcRZGate(q, -0.09841786302925114, 4);
  sqcRYGate(q, 1.088135342965907, 5);
  sqcRZGate(q, 1.2146765989401134, 5);
  sqcRYGate(q, -0.2301064839866731, 6);
  sqcRZGate(q, -0.9752915316640713, 6);
  sqcRYGate(q, 1.9443892074553757, 7);
  sqcRZGate(q, 0.47861006012573265, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.680034427186374, 0);
  sqcRZGate(q, -0.7419893879131969, 0);
  sqcRYGate(q, -0.9616155652873806, 1);
  sqcRZGate(q, 1.8947359487113256, 1);
  sqcRYGate(q, -0.5060989994290912, 2);
  sqcRZGate(q, 1.1822347976957188, 2);
  sqcRYGate(q, -0.7574650783736301, 3);
  sqcRZGate(q, -0.7906649370919734, 3);
  sqcRYGate(q, -2.4783192400983576, 4);
  sqcRZGate(q, -0.40572171314326333, 4);
  sqcRYGate(q, 0.7869057198289413, 5);
  sqcRZGate(q, 1.0128916870087217, 5);
  sqcRYGate(q, 1.6865619638583205, 6);
  sqcRZGate(q, -0.8750271697276878, 6);
  sqcRYGate(q, 2.0153172203384084, 7);
  sqcRZGate(q, 2.6586227710511934, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8031269360437114, 0);
  sqcRZGate(q, 1.1670282612859904, 0);
  sqcRYGate(q, -1.5628492261393616, 1);
  sqcRZGate(q, -2.4839838572859043, 1);
  sqcRYGate(q, 2.318833423757702, 2);
  sqcRZGate(q, -0.10526999003235675, 2);
  sqcRYGate(q, 1.9568348195123448, 3);
  sqcRZGate(q, 1.7612298199879248, 3);
  sqcRYGate(q, 1.479816614588504, 4);
  sqcRZGate(q, 2.683481762893835, 4);
  sqcRYGate(q, -0.9082820398283976, 5);
  sqcRZGate(q, -0.8030773937865291, 5);
  sqcRYGate(q, -0.6615391693853186, 6);
  sqcRZGate(q, 0.1319677486524924, 6);
  sqcRYGate(q, 1.8028791382017104, 7);
  sqcRZGate(q, -2.430767274222323, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.1262474926135688, 0);
  sqcRZGate(q, -0.28677671160511053, 0);
  sqcRYGate(q, -1.123269287238809, 1);
  sqcRZGate(q, -1.166243877080743, 1);
  sqcRYGate(q, 1.5363117110297928, 2);
  sqcRZGate(q, 1.4841744990602486, 2);
  sqcRYGate(q, -0.35256761191776026, 3);
  sqcRZGate(q, -1.974716548738507, 3);
  sqcRYGate(q, -2.601453256671034, 4);
  sqcRZGate(q, 1.341071489251428, 4);
  sqcRYGate(q, -0.06954858810607033, 5);
  sqcRZGate(q, -0.7542768633255372, 5);
  sqcRYGate(q, -2.599837786607222, 6);
  sqcRZGate(q, -1.274993705010663, 6);
  sqcRYGate(q, -0.6506383913974897, 7);
  sqcRZGate(q, -1.747315222415315, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3235456613851788, 0);
  sqcRZGate(q, -0.8671628102013242, 0);
  sqcRYGate(q, 1.747593846837676, 1);
  sqcRZGate(q, -0.9868664663209241, 1);
  sqcRYGate(q, 1.5362408634095328, 2);
  sqcRZGate(q, -1.204562274050187, 2);
  sqcRYGate(q, -0.3955081142417563, 3);
  sqcRZGate(q, -3.002768984279949, 3);
  sqcRYGate(q, -1.5052535053853928, 4);
  sqcRZGate(q, -0.9789861914002819, 4);
  sqcRYGate(q, 2.3109748667143672, 5);
  sqcRZGate(q, 1.6114632024988769, 5);
  sqcRYGate(q, -1.6132886170526124, 6);
  sqcRZGate(q, 1.8952162018917351, 6);
  sqcRYGate(q, 2.3572158731271187, 7);
  sqcRZGate(q, 2.1147327212514258, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4257948520453905, 0);
  sqcRZGate(q, 1.2087514709720848, 0);
  sqcRYGate(q, 1.6278363549482187, 1);
  sqcRZGate(q, 0.5935996499760319, 1);
  sqcRYGate(q, -2.1647382728262947, 2);
  sqcRZGate(q, 1.0841145998298538, 2);
  sqcRYGate(q, 1.7681780669835847, 3);
  sqcRZGate(q, 1.9018974577863386, 3);
  sqcRYGate(q, 2.044913495562344, 4);
  sqcRZGate(q, 1.4223255282674603, 4);
  sqcRYGate(q, 1.2384885988316852, 5);
  sqcRZGate(q, 0.5399696506174593, 5);
  sqcRYGate(q, 2.4537759535663834, 6);
  sqcRZGate(q, -0.7212088924043187, 6);
  sqcRYGate(q, 1.374253054612429, 7);
  sqcRZGate(q, -2.244527477470231, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.865613301943271, 0);
  sqcRZGate(q, 2.4963762944276007, 0);
  sqcRYGate(q, 2.1513307490903237, 1);
  sqcRZGate(q, -0.7248335865370941, 1);
  sqcRYGate(q, 2.230797129984847, 2);
  sqcRZGate(q, -2.721413761379726, 2);
  sqcRYGate(q, -0.6304823756811819, 3);
  sqcRZGate(q, -2.4209149159488508, 3);
  sqcRYGate(q, -0.19018861393605135, 4);
  sqcRZGate(q, 3.0197718522910137, 4);
  sqcRYGate(q, -1.7532136762652453, 5);
  sqcRZGate(q, 2.087658193155476, 5);
  sqcRYGate(q, 1.5601865133221162, 6);
  sqcRZGate(q, -2.2923219579487797, 6);
  sqcRYGate(q, -1.8369558420685792, 7);
  sqcRZGate(q, 0.13602105867142278, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5319698745758699, 0);
  sqcRZGate(q, 2.071309128496096, 0);
  sqcRYGate(q, 1.9667979648476086, 1);
  sqcRZGate(q, 2.873662726828071, 1);
  sqcRYGate(q, -0.8448092320915502, 2);
  sqcRZGate(q, -2.85082496562596, 2);
  sqcRYGate(q, -2.8416878875708904, 3);
  sqcRZGate(q, -0.05581435969426263, 3);
  sqcRYGate(q, 1.050180886514212, 4);
  sqcRZGate(q, -0.5342691747746571, 4);
  sqcRYGate(q, -2.900592764696545, 5);
  sqcRZGate(q, -1.163008186528769, 5);
  sqcRYGate(q, 2.1016369289291315, 6);
  sqcRZGate(q, 0.12471397219568114, 6);
  sqcRYGate(q, 0.5315335672034021, 7);
  sqcRZGate(q, 2.404220881274376, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2341937146182778, 0);
  sqcRZGate(q, -0.18045327352329016, 0);
  sqcRYGate(q, 2.176113414128417, 1);
  sqcRZGate(q, 2.58964419939241, 1);
  sqcRYGate(q, -0.9069656430063855, 2);
  sqcRZGate(q, 2.827729686512834, 2);
  sqcRYGate(q, -2.110169511199752, 3);
  sqcRZGate(q, -2.054808009338074, 3);
  sqcRYGate(q, 2.430249484743841, 4);
  sqcRZGate(q, 0.4463907318023519, 4);
  sqcRYGate(q, -3.0548156348600726, 5);
  sqcRZGate(q, -1.4553601501525684, 5);
  sqcRYGate(q, 1.3090144478302552, 6);
  sqcRZGate(q, 1.8508815828018228, 6);
  sqcRYGate(q, -1.9119522099382245, 7);
  sqcRZGate(q, 1.1604857226347094, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3525397502772645, 0);
  sqcRZGate(q, 2.7613817477487883, 0);
  sqcRYGate(q, 2.2854170224284327, 1);
  sqcRZGate(q, 1.190236537339719, 1);
  sqcRYGate(q, -1.5516414243145364, 2);
  sqcRZGate(q, 2.2683513138575004, 2);
  sqcRYGate(q, -2.1329513713608415, 3);
  sqcRZGate(q, 1.3720170796100433, 3);
  sqcRYGate(q, 2.8734737663784067, 4);
  sqcRZGate(q, -1.7353758819237148, 4);
  sqcRYGate(q, -2.480850520384571, 5);
  sqcRZGate(q, -1.050406094304564, 5);
  sqcRYGate(q, -1.6927160233345644, 6);
  sqcRZGate(q, -2.285369364066868, 6);
  sqcRYGate(q, 1.4187293966101282, 7);
  sqcRZGate(q, 1.8819967544344154, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5832872030004523, 0);
  sqcRZGate(q, -0.9695275705617079, 0);
  sqcRYGate(q, 1.7476056044556048, 1);
  sqcRZGate(q, -2.936712781070923, 1);
  sqcRYGate(q, -2.0532298706045164, 2);
  sqcRZGate(q, -1.7704939723432416, 2);
  sqcRYGate(q, -2.357743569673862, 3);
  sqcRZGate(q, 1.007999066570373, 3);
  sqcRYGate(q, -3.020792102119095, 4);
  sqcRZGate(q, 0.7211777224688083, 4);
  sqcRYGate(q, 1.86862078286369, 5);
  sqcRZGate(q, 0.24572894727585975, 5);
  sqcRYGate(q, -1.116415439106847, 6);
  sqcRZGate(q, -2.3793972031184616, 6);
  sqcRYGate(q, 1.1867300030054269, 7);
  sqcRZGate(q, 0.4902985067850842, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4246740025000657, 0);
  sqcRZGate(q, -0.533557767872265, 0);
  sqcRYGate(q, 1.947730204661844, 1);
  sqcRZGate(q, -0.6247468678790424, 1);
  sqcRYGate(q, -2.0718733924435986, 2);
  sqcRZGate(q, 2.142246328987719, 2);
  sqcRYGate(q, 2.753674636101501, 3);
  sqcRZGate(q, 1.7103027884538502, 3);
  sqcRYGate(q, 2.375868887632071, 4);
  sqcRZGate(q, 1.538888770986702, 4);
  sqcRYGate(q, -2.7630169543666887, 5);
  sqcRZGate(q, -1.2525194403237725, 5);
  sqcRYGate(q, 1.074822203392248, 6);
  sqcRZGate(q, 2.4598438188519336, 6);
  sqcRYGate(q, 0.4937957598303842, 7);
  sqcRZGate(q, -1.2004572545936387, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.063425781410958, 0);
  sqcRZGate(q, -1.0537878498664093, 0);
  sqcRYGate(q, 1.3881344466448526, 1);
  sqcRZGate(q, 1.2337376875774595, 1);
  sqcRYGate(q, -3.0142853950097543, 2);
  sqcRZGate(q, 1.428288557836384, 2);
  sqcRYGate(q, 2.558474732996989, 3);
  sqcRZGate(q, 1.396547290344006, 3);
  sqcRYGate(q, 1.69226366983769, 4);
  sqcRZGate(q, 1.9242582915444009, 4);
  sqcRYGate(q, 1.9875524249608203, 5);
  sqcRZGate(q, 1.602367267080824, 5);
  sqcRYGate(q, 2.302907514089032, 6);
  sqcRZGate(q, 2.793071998670533, 6);
  sqcRYGate(q, 1.353788545895192, 7);
  sqcRZGate(q, -0.7324192216008781, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0382585796333053, 0);
  sqcRZGate(q, -1.0406959266719298, 0);
  sqcRYGate(q, -2.1409098412266676, 1);
  sqcRZGate(q, 3.013780332923141, 1);
  sqcRYGate(q, 1.3812016930034112, 2);
  sqcRZGate(q, 2.429040108036898, 2);
  sqcRYGate(q, -0.9683848368076662, 3);
  sqcRZGate(q, 3.0957013555406476, 3);
  sqcRYGate(q, -1.0749557078922798, 4);
  sqcRZGate(q, 2.0480749783365653, 4);
  sqcRYGate(q, 0.40065942365721813, 5);
  sqcRZGate(q, -0.6176003601433366, 5);
  sqcRYGate(q, 1.1104383310121295, 6);
  sqcRZGate(q, -1.0621432900148529, 6);
  sqcRYGate(q, -2.260742495148656, 7);
  sqcRZGate(q, -1.890065203979281, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5310210621822167, 0);
  sqcRZGate(q, 1.3336231825575595, 0);
  sqcRYGate(q, 2.628845273025021, 1);
  sqcRZGate(q, 0.02811580665068902, 1);
  sqcRYGate(q, 2.7491888432800415, 2);
  sqcRZGate(q, 2.685294720377506, 2);
  sqcRYGate(q, 0.9296691080563715, 3);
  sqcRZGate(q, -1.633969733767766, 3);
  sqcRYGate(q, 1.527487396685227, 4);
  sqcRZGate(q, 1.7783730528696389, 4);
  sqcRYGate(q, -0.22222011465405356, 5);
  sqcRZGate(q, 2.18308136551346, 5);
  sqcRYGate(q, 1.8136259166965747, 6);
  sqcRZGate(q, -2.477751022134642, 6);
  sqcRYGate(q, 0.20408601293404074, 7);
  sqcRZGate(q, 1.3704185103378252, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8588378151830993, 0);
  sqcRZGate(q, -2.497374000185125, 0);
  sqcRYGate(q, 2.5145993577265076, 1);
  sqcRZGate(q, 1.962424198925783, 1);
  sqcRYGate(q, -1.3780041956090514, 2);
  sqcRZGate(q, 3.10491419356551, 2);
  sqcRYGate(q, 1.6841816964721943, 3);
  sqcRZGate(q, -0.5559135629535872, 3);
  sqcRYGate(q, -0.888432912529475, 4);
  sqcRZGate(q, -2.7330893804356817, 4);
  sqcRYGate(q, -2.384226089470108, 5);
  sqcRZGate(q, -2.9520294702569703, 5);
  sqcRYGate(q, 0.28229634037594026, 6);
  sqcRZGate(q, 0.7307964280985564, 6);
  sqcRYGate(q, 0.7258797972999587, 7);
  sqcRZGate(q, 1.493448733467134, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.579051907866135, 0);
  sqcRZGate(q, 0.3747616414245396, 0);
  sqcRYGate(q, 0.9170052515011278, 1);
  sqcRZGate(q, 1.8435418886144084, 1);
  sqcRYGate(q, -2.6130040899310276, 2);
  sqcRZGate(q, 0.30437217351614615, 2);
  sqcRYGate(q, 1.0432981120479892, 3);
  sqcRZGate(q, -2.589864020524813, 3);
  sqcRYGate(q, 1.0304599150167046, 4);
  sqcRZGate(q, -1.6888139005440381, 4);
  sqcRYGate(q, 2.6956884132771695, 5);
  sqcRZGate(q, -2.0911310546673576, 5);
  sqcRYGate(q, -2.136493807736091, 6);
  sqcRZGate(q, -0.4244300910195846, 6);
  sqcRYGate(q, -2.5809038831553663, 7);
  sqcRZGate(q, 0.002813118643762991, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.779261771400945, 0);
  sqcRZGate(q, 2.5147589196464466, 0);
  sqcRYGate(q, 1.4709508772507853, 1);
  sqcRZGate(q, 0.9846319956860627, 1);
  sqcRYGate(q, -1.8477988986247862, 2);
  sqcRZGate(q, -0.25540379841035604, 2);
  sqcRYGate(q, 1.2783460200427292, 3);
  sqcRZGate(q, 2.805226689604178, 3);
  sqcRYGate(q, 0.39591404689578036, 4);
  sqcRZGate(q, 1.6548768462495094, 4);
  sqcRYGate(q, -2.893047317638347, 5);
  sqcRZGate(q, 3.024413259764412, 5);
  sqcRYGate(q, 2.307744982176687, 6);
  sqcRZGate(q, -1.7443517530585864, 6);
  sqcRYGate(q, 0.8704029831431915, 7);
  sqcRZGate(q, -2.140609430602508, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.225485037549226, 0);
  sqcRZGate(q, 1.7190710935615536, 0);
  sqcRYGate(q, -1.914763947854742, 1);
  sqcRZGate(q, -1.0549707045835144, 1);
  sqcRYGate(q, 0.7147402615127687, 2);
  sqcRZGate(q, 1.9604825025822743, 2);
  sqcRYGate(q, -1.1158077567500246, 3);
  sqcRZGate(q, -0.94600114135915, 3);
  sqcRYGate(q, 2.0098472072226947, 4);
  sqcRZGate(q, -0.3964002550368315, 4);
  sqcRYGate(q, -1.8090261155464502, 5);
  sqcRZGate(q, 0.3160880542902626, 5);
  sqcRYGate(q, 1.6750983616171136, 6);
  sqcRZGate(q, -2.954775220024882, 6);
  sqcRYGate(q, 2.6457811541960625, 7);
  sqcRZGate(q, 0.8911966124677626, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.151893525975667, 0);
  sqcRZGate(q, 0.7703115897278741, 0);
  sqcRYGate(q, -2.520711782862374, 1);
  sqcRZGate(q, -1.8545085474292309, 1);
  sqcRYGate(q, 3.0090691990448484, 2);
  sqcRZGate(q, 1.831133337248566, 2);
  sqcRYGate(q, 1.361952816577829, 3);
  sqcRZGate(q, -2.0502414713446075, 3);
  sqcRYGate(q, -1.822475209998971, 4);
  sqcRZGate(q, -1.1207917424924227, 4);
  sqcRYGate(q, -1.2444704641624382, 5);
  sqcRZGate(q, -2.246701181559422, 5);
  sqcRYGate(q, 0.07890121867159738, 6);
  sqcRZGate(q, -2.151082727761829, 6);
  sqcRYGate(q, 1.540794436902405, 7);
  sqcRZGate(q, -2.0348136314986798, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0487456279875196, 0);
  sqcRZGate(q, 0.7392865783004101, 0);
  sqcRYGate(q, 2.5457248465729925, 1);
  sqcRZGate(q, -2.007700488140272, 1);
  sqcRYGate(q, 1.6464784102008716, 2);
  sqcRZGate(q, 0.7637491338604339, 2);
  sqcRYGate(q, -2.4562497363114786, 3);
  sqcRZGate(q, 0.0064131384324097596, 3);
  sqcRYGate(q, -1.930561088742986, 4);
  sqcRZGate(q, -0.577587800235063, 4);
  sqcRYGate(q, 0.26591396125964906, 5);
  sqcRZGate(q, -2.1373218564313365, 5);
  sqcRYGate(q, 0.5666366408778716, 6);
  sqcRZGate(q, 0.07363186206006045, 6);
  sqcRYGate(q, 1.0947321974408175, 7);
  sqcRZGate(q, 1.6837148387552308, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.662055839869799, 0);
  sqcRZGate(q, -1.450646120554124, 0);
  sqcRYGate(q, -2.5305463413258327, 1);
  sqcRZGate(q, 2.6029142586381746, 1);
  sqcRYGate(q, 2.4637901864506713, 2);
  sqcRZGate(q, -2.1282490063281365, 2);
  sqcRYGate(q, -1.4103080841936686, 3);
  sqcRZGate(q, -2.077257606138671, 3);
  sqcRYGate(q, 1.356352932542877, 4);
  sqcRZGate(q, 1.14440785106468, 4);
  sqcRYGate(q, 1.6062611476770243, 5);
  sqcRZGate(q, 2.8171946856655454, 5);
  sqcRYGate(q, -0.655770991074009, 6);
  sqcRZGate(q, 1.8224873165623299, 6);
  sqcRYGate(q, -0.4577966153032864, 7);
  sqcRZGate(q, 0.5427292284100688, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.588973861241256, 0);
  sqcRZGate(q, -2.8412874853428765, 0);
  sqcRYGate(q, -1.3231635477235573, 1);
  sqcRZGate(q, -1.3920952503988306, 1);
  sqcRYGate(q, -2.9101974024684756, 2);
  sqcRZGate(q, 2.163344903393779, 2);
  sqcRYGate(q, -1.8676105251479025, 3);
  sqcRZGate(q, -3.0516704655966898, 3);
  sqcRYGate(q, -0.8071879200927308, 4);
  sqcRZGate(q, -1.575891541694555, 4);
  sqcRYGate(q, -2.369939566388119, 5);
  sqcRZGate(q, -2.3085619969396607, 5);
  sqcRYGate(q, -2.7870060052452965, 6);
  sqcRZGate(q, -1.3331474043656293, 6);
  sqcRYGate(q, 2.5326883607192934, 7);
  sqcRZGate(q, -2.2995132835597536, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.516245616649285, 0);
  sqcRZGate(q, 2.4176858834450345, 0);
  sqcRYGate(q, 0.24751464894121847, 1);
  sqcRZGate(q, -0.7197174806796901, 1);
  sqcRYGate(q, -1.4991349152285727, 2);
  sqcRZGate(q, 1.9169155763169359, 2);
  sqcRYGate(q, -1.7662856267221647, 3);
  sqcRZGate(q, 2.492271000952898, 3);
  sqcRYGate(q, -0.5639763637111713, 4);
  sqcRZGate(q, -0.15619276217075753, 4);
  sqcRYGate(q, 1.6600204906390017, 5);
  sqcRZGate(q, 1.3730517792537895, 5);
  sqcRYGate(q, -1.3780082132783793, 6);
  sqcRZGate(q, 2.9782985834909983, 6);
  sqcRYGate(q, 1.9818532734615821, 7);
  sqcRZGate(q, -2.7985345231268592, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.451513744914149, 0);
  sqcRZGate(q, -1.3919127263505982, 0);
  sqcRYGate(q, 0.4559099121537956, 1);
  sqcRZGate(q, -3.0986271724322165, 1);
  sqcRYGate(q, -0.019347749433440406, 2);
  sqcRZGate(q, 1.5605933273328818, 2);
  sqcRYGate(q, 2.5939920687376676, 3);
  sqcRZGate(q, 3.0697900870477706, 3);
  sqcRYGate(q, 0.6196369529086331, 4);
  sqcRZGate(q, -2.401395052207067, 4);
  sqcRYGate(q, -2.6377702459276953, 5);
  sqcRZGate(q, 2.2733477272416875, 5);
  sqcRYGate(q, 2.213371043098787, 6);
  sqcRZGate(q, 0.7921346175264398, 6);
  sqcRYGate(q, -1.7709536610721142, 7);
  sqcRZGate(q, -1.9375132690469858, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.657533836005528, 0);
  sqcRZGate(q, 2.9310368731456666, 0);
  sqcRYGate(q, -1.0074631605316124, 1);
  sqcRZGate(q, -2.739404529473493, 1);
  sqcRYGate(q, -2.12575682791072, 2);
  sqcRZGate(q, -1.9188463588516853, 2);
  sqcRYGate(q, 2.7561243784383818, 3);
  sqcRZGate(q, -3.0987070766895046, 3);
  sqcRYGate(q, -2.134657384814066, 4);
  sqcRZGate(q, 2.5538493052747975, 4);
  sqcRYGate(q, -0.7180083169765679, 5);
  sqcRZGate(q, 2.6421565149375006, 5);
  sqcRYGate(q, -1.5578392599280366, 6);
  sqcRZGate(q, 2.943029596388798, 6);
  sqcRYGate(q, -2.2050454588349773, 7);
  sqcRZGate(q, -1.1019808561899396, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.274441040199762, 0);
  sqcRZGate(q, 2.4404245786045236, 0);
  sqcRYGate(q, 2.81276488185882, 1);
  sqcRZGate(q, -1.3639449477256806, 1);
  sqcRYGate(q, -1.2804464407621134, 2);
  sqcRZGate(q, 2.227337941527952, 2);
  sqcRYGate(q, 0.0592970891556079, 3);
  sqcRZGate(q, 2.0467957404440096, 3);
  sqcRYGate(q, -2.639411298514544, 4);
  sqcRZGate(q, 2.5124754253950616, 4);
  sqcRYGate(q, -2.207685444444913, 5);
  sqcRZGate(q, 0.335145258279896, 5);
  sqcRYGate(q, -1.118379503654223, 6);
  sqcRZGate(q, 2.4433779278743475, 6);
  sqcRYGate(q, -1.1364707222485917, 7);
  sqcRZGate(q, 1.991684536226424, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6890596565260543, 0);
  sqcRZGate(q, 1.3053180420826953, 0);
  sqcRYGate(q, 1.1782771275931467, 1);
  sqcRZGate(q, 1.460042760307192, 1);
  sqcRYGate(q, 2.9598143810149713, 2);
  sqcRZGate(q, 2.320731275921767, 2);
  sqcRYGate(q, -2.5183953909533026, 3);
  sqcRZGate(q, 2.025947215139782, 3);
  sqcRYGate(q, 3.042176981625365, 4);
  sqcRZGate(q, -0.671290441518103, 4);
  sqcRYGate(q, 2.369772606212258, 5);
  sqcRZGate(q, 0.49751861912852746, 5);
  sqcRYGate(q, -2.28357151512406, 6);
  sqcRZGate(q, 0.6710321349039037, 6);
  sqcRYGate(q, 1.8771792625136159, 7);
  sqcRZGate(q, -0.07034172577669118, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0089952652263223, 0);
  sqcRZGate(q, 0.6385970961256318, 0);
  sqcRYGate(q, -1.4899780031936496, 1);
  sqcRZGate(q, 0.0008948872256523044, 1);
  sqcRYGate(q, -2.4874010549574317, 2);
  sqcRZGate(q, -2.5175068982190942, 2);
  sqcRYGate(q, 2.1090062381630146, 3);
  sqcRZGate(q, -3.041801978356841, 3);
  sqcRYGate(q, -0.3305008267683105, 4);
  sqcRZGate(q, -2.209175780068067, 4);
  sqcRYGate(q, 2.6169753841851717, 5);
  sqcRZGate(q, 0.5213289111303564, 5);
  sqcRYGate(q, -1.6696460980229273, 6);
  sqcRZGate(q, 0.3368937865332988, 6);
  sqcRYGate(q, 0.8066745612134056, 7);
  sqcRZGate(q, 1.900222745213438, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0009821893258004, 0);
  sqcRZGate(q, 2.487951877546147, 0);
  sqcRYGate(q, 1.309021734032792, 1);
  sqcRZGate(q, 0.9271713823462624, 1);
  sqcRYGate(q, 2.5749917570646566, 2);
  sqcRZGate(q, 0.4591977567020775, 2);
  sqcRYGate(q, -1.3312270318731159, 3);
  sqcRZGate(q, -0.2120924638250825, 3);
  sqcRYGate(q, -2.7059019739536345, 4);
  sqcRZGate(q, 2.0106668505407743, 4);
  sqcRYGate(q, 2.6170794211444868, 5);
  sqcRZGate(q, -2.319675911531203, 5);
  sqcRYGate(q, 2.212496873298438, 6);
  sqcRZGate(q, 0.14536462427467156, 6);
  sqcRYGate(q, -1.3858552968135898, 7);
  sqcRZGate(q, 1.3143069394072195, 7);

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
