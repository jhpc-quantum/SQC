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

  sqcRYGate(q, -2.4078091589279995, 0);
  sqcRZGate(q, -2.5929807447126, 0);
  sqcRYGate(q, 0.18616441225485134, 1);
  sqcRZGate(q, 0.6607245096160982, 1);
  sqcRYGate(q, 1.5089726441065971, 2);
  sqcRZGate(q, -3.1007440366457284, 2);
  sqcRYGate(q, 0.4262996995566449, 3);
  sqcRZGate(q, 2.223087713986083, 3);
  sqcRYGate(q, 0.8755416040506028, 4);
  sqcRZGate(q, -1.7466999781790116, 4);
  sqcRYGate(q, -0.5394417987295839, 5);
  sqcRZGate(q, -1.3896973077910204, 5);
  sqcRYGate(q, -0.4654531072623697, 6);
  sqcRZGate(q, 2.3412255148287993, 6);
  sqcRYGate(q, -0.7524727424538877, 7);
  sqcRZGate(q, 2.970760066152953, 7);
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
  sqcRYGate(q, -0.9280261410184395, 0);
  sqcRZGate(q, 1.813727568310128, 0);
  sqcRYGate(q, -2.28163848615568, 1);
  sqcRZGate(q, 0.8472817072594453, 1);
  sqcRYGate(q, 2.4028005749069097, 2);
  sqcRZGate(q, -1.6349768708994048, 2);
  sqcRYGate(q, -1.3828871045653806, 3);
  sqcRZGate(q, -0.6781138786827885, 3);
  sqcRYGate(q, 2.5218014655552654, 4);
  sqcRZGate(q, 1.4030678937391776, 4);
  sqcRYGate(q, -1.519333048427792, 5);
  sqcRZGate(q, -0.656090208396713, 5);
  sqcRYGate(q, 0.7987314912554488, 6);
  sqcRZGate(q, 3.1198780840009577, 6);
  sqcRYGate(q, 1.2352432577873058, 7);
  sqcRZGate(q, 2.9584095995665582, 7);
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
  sqcRYGate(q, -0.2355519787184304, 0);
  sqcRZGate(q, 1.6722545555594515, 0);
  sqcRYGate(q, 0.734485117319797, 1);
  sqcRZGate(q, 2.1974685061843617, 1);
  sqcRYGate(q, 0.4264550305404244, 2);
  sqcRZGate(q, -1.7694758647292463, 2);
  sqcRYGate(q, -2.028850279065992, 3);
  sqcRZGate(q, 0.6736053927126873, 3);
  sqcRYGate(q, 0.17938606951402036, 4);
  sqcRZGate(q, 2.2375703449116546, 4);
  sqcRYGate(q, 0.5608880993355588, 5);
  sqcRZGate(q, 2.988549955716566, 5);
  sqcRYGate(q, -1.6903276110577736, 6);
  sqcRZGate(q, 2.4886569303374175, 6);
  sqcRYGate(q, -0.29540874112618837, 7);
  sqcRZGate(q, 1.031033823811498, 7);
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
  sqcRYGate(q, -0.8979792579964938, 0);
  sqcRZGate(q, -1.1051223291310697, 0);
  sqcRYGate(q, -2.276678762920172, 1);
  sqcRZGate(q, -1.628753650667751, 1);
  sqcRYGate(q, 0.9835717853658476, 2);
  sqcRZGate(q, 0.11433520214594672, 2);
  sqcRYGate(q, 0.6423476011499227, 3);
  sqcRZGate(q, -1.503160690554011, 3);
  sqcRYGate(q, -0.12589117318509935, 4);
  sqcRZGate(q, 1.216784965009383, 4);
  sqcRYGate(q, -2.4170524812926466, 5);
  sqcRZGate(q, 3.0594795970889295, 5);
  sqcRYGate(q, -0.4637789630655762, 6);
  sqcRZGate(q, 0.5330718127534421, 6);
  sqcRYGate(q, 0.3877150127450074, 7);
  sqcRZGate(q, 2.2631055285340778, 7);
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
  sqcRYGate(q, 2.21215272582854, 0);
  sqcRZGate(q, -1.4920725164330781, 0);
  sqcRYGate(q, -0.7576137022227468, 1);
  sqcRZGate(q, 2.0642780257825097, 1);
  sqcRYGate(q, -3.1175639363007344, 2);
  sqcRZGate(q, -2.896004262742068, 2);
  sqcRYGate(q, -1.1706210720894719, 3);
  sqcRZGate(q, -2.4778140206225743, 3);
  sqcRYGate(q, -2.0630530289065128, 4);
  sqcRZGate(q, 2.7100413140731265, 4);
  sqcRYGate(q, -1.065639981527453, 5);
  sqcRZGate(q, -2.4770243293491965, 5);
  sqcRYGate(q, -1.9109737187120093, 6);
  sqcRZGate(q, -1.6170151802215909, 6);
  sqcRYGate(q, -2.9339063769826272, 7);
  sqcRZGate(q, -2.888670536264784, 7);
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
  sqcRYGate(q, -0.9075797226956795, 0);
  sqcRZGate(q, -3.100157433640596, 0);
  sqcRYGate(q, 1.3349696080373459, 1);
  sqcRZGate(q, -1.6120536527887221, 1);
  sqcRYGate(q, -1.2003120206116678, 2);
  sqcRZGate(q, -0.46295984661356704, 2);
  sqcRYGate(q, 2.3503477980762586, 3);
  sqcRZGate(q, 2.8749359187666244, 3);
  sqcRYGate(q, -0.29540143896712845, 4);
  sqcRZGate(q, 0.3018099916326893, 4);
  sqcRYGate(q, 0.19062685330107063, 5);
  sqcRZGate(q, 1.946512647440949, 5);
  sqcRYGate(q, -0.7045347576459856, 6);
  sqcRZGate(q, -2.6178756025987004, 6);
  sqcRYGate(q, 3.0120284860223627, 7);
  sqcRZGate(q, -0.14662950353170154, 7);
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
  sqcRYGate(q, 0.22145055244968323, 0);
  sqcRZGate(q, -1.273863454703452, 0);
  sqcRYGate(q, 0.7611268553247477, 1);
  sqcRZGate(q, -2.3433433476507814, 1);
  sqcRYGate(q, -1.5680831067815744, 2);
  sqcRZGate(q, -1.9978738612237121, 2);
  sqcRYGate(q, -0.3698034118568088, 3);
  sqcRZGate(q, -2.1563352862891567, 3);
  sqcRYGate(q, -0.28274995033821954, 4);
  sqcRZGate(q, 0.4389446901674264, 4);
  sqcRYGate(q, 0.45008753871861007, 5);
  sqcRZGate(q, -0.03572118923757815, 5);
  sqcRYGate(q, -2.369552334267255, 6);
  sqcRZGate(q, 0.522811613620692, 6);
  sqcRYGate(q, -2.403892551587073, 7);
  sqcRZGate(q, 1.0993244190976208, 7);
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
  sqcRYGate(q, -2.823604486454222, 0);
  sqcRZGate(q, 2.649011242509448, 0);
  sqcRYGate(q, 1.0188320576593648, 1);
  sqcRZGate(q, 0.8117117040391673, 1);
  sqcRYGate(q, 1.1255454564082648, 2);
  sqcRZGate(q, 0.12222804471382553, 2);
  sqcRYGate(q, 2.969039588026232, 3);
  sqcRZGate(q, 1.5143000191056926, 3);
  sqcRYGate(q, 0.6947451968387117, 4);
  sqcRZGate(q, 2.975635131118076, 4);
  sqcRYGate(q, -1.4892922617154198, 5);
  sqcRZGate(q, -1.972170263856264, 5);
  sqcRYGate(q, -1.3136898663864056, 6);
  sqcRZGate(q, -1.7646830962933961, 6);
  sqcRYGate(q, -1.1210618888195913, 7);
  sqcRZGate(q, -2.7898180904630756, 7);
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
  sqcRYGate(q, 0.30266233151694166, 0);
  sqcRZGate(q, 2.2716823094870966, 0);
  sqcRYGate(q, 2.8908862637323263, 1);
  sqcRZGate(q, -3.1089132442949734, 1);
  sqcRYGate(q, 1.2430907998931886, 2);
  sqcRZGate(q, -0.9621581744825948, 2);
  sqcRYGate(q, 0.9683298751499858, 3);
  sqcRZGate(q, -2.380055851640189, 3);
  sqcRYGate(q, -0.20996766827122215, 4);
  sqcRZGate(q, 3.0546428104065835, 4);
  sqcRYGate(q, -1.785999470506117, 5);
  sqcRZGate(q, 2.917750912763189, 5);
  sqcRYGate(q, -1.0233802791252726, 6);
  sqcRZGate(q, -0.27063358194143045, 6);
  sqcRYGate(q, 0.3778592686968638, 7);
  sqcRZGate(q, 1.0738624566401669, 7);
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
  sqcRYGate(q, 1.5194861129176556, 0);
  sqcRZGate(q, 2.5134268342994663, 0);
  sqcRYGate(q, -2.017287834169327, 1);
  sqcRZGate(q, 1.6259491505914632, 1);
  sqcRYGate(q, 1.9908197324210075, 2);
  sqcRZGate(q, 2.611308397680824, 2);
  sqcRYGate(q, 2.878155109010035, 3);
  sqcRZGate(q, -1.3640966241010868, 3);
  sqcRYGate(q, 2.6636570537205895, 4);
  sqcRZGate(q, 2.0410731153092194, 4);
  sqcRYGate(q, 0.909240506909647, 5);
  sqcRZGate(q, 0.3297451220779329, 5);
  sqcRYGate(q, 2.258034076967427, 6);
  sqcRZGate(q, 1.0442075523706178, 6);
  sqcRYGate(q, 2.3190446532777367, 7);
  sqcRZGate(q, 1.163870160205212, 7);
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
  sqcRYGate(q, -2.562244429620933, 0);
  sqcRZGate(q, 2.765155301142107, 0);
  sqcRYGate(q, -0.41857045752456434, 1);
  sqcRZGate(q, -1.7658313039632434, 1);
  sqcRYGate(q, 2.0452674801953163, 2);
  sqcRZGate(q, -1.5370562355692519, 2);
  sqcRYGate(q, -0.8763794238754429, 3);
  sqcRZGate(q, -2.7504441629921645, 3);
  sqcRYGate(q, 2.410249362450885, 4);
  sqcRZGate(q, -0.9115944202744851, 4);
  sqcRYGate(q, 1.873189305728741, 5);
  sqcRZGate(q, 2.449352148210778, 5);
  sqcRYGate(q, 1.7006531272504901, 6);
  sqcRZGate(q, 1.9726588407362975, 6);
  sqcRYGate(q, -1.6668104137244062, 7);
  sqcRZGate(q, -1.6049546765167302, 7);
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
  sqcRYGate(q, 2.489470908894987, 0);
  sqcRZGate(q, 3.04833927654457, 0);
  sqcRYGate(q, 1.7565556404469966, 1);
  sqcRZGate(q, -0.02619244019962515, 1);
  sqcRYGate(q, 3.0417167384068855, 2);
  sqcRZGate(q, -2.3107782456214343, 2);
  sqcRYGate(q, -2.855586350939343, 3);
  sqcRZGate(q, -0.6214124414258653, 3);
  sqcRYGate(q, -0.6283956600145295, 4);
  sqcRZGate(q, -2.3407374661443088, 4);
  sqcRYGate(q, -1.4657533507484315, 5);
  sqcRZGate(q, 2.757420016783001, 5);
  sqcRYGate(q, 1.0402454898001974, 6);
  sqcRZGate(q, 1.1171808582079492, 6);
  sqcRYGate(q, 0.1425410729994594, 7);
  sqcRZGate(q, -0.9662967070925541, 7);
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
  sqcRYGate(q, 1.2513932512152603, 0);
  sqcRZGate(q, -0.8076811979559976, 0);
  sqcRYGate(q, -1.448182526367881, 1);
  sqcRZGate(q, -1.140014894491436, 1);
  sqcRYGate(q, 1.9642885996232637, 2);
  sqcRZGate(q, -1.307929797303948, 2);
  sqcRYGate(q, -2.0860627376197947, 3);
  sqcRZGate(q, -0.1548578787234626, 3);
  sqcRYGate(q, 1.8004126618843588, 4);
  sqcRZGate(q, -2.724016102936168, 4);
  sqcRYGate(q, 2.744031525236287, 5);
  sqcRZGate(q, 2.6542408064425898, 5);
  sqcRYGate(q, -2.7604016704395096, 6);
  sqcRZGate(q, 0.5188339934635087, 6);
  sqcRYGate(q, 2.9699434913862244, 7);
  sqcRZGate(q, -1.406705570836412, 7);
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
  sqcRYGate(q, 3.084464073445558, 0);
  sqcRZGate(q, 1.3811764783193679, 0);
  sqcRYGate(q, 2.639693581229129, 1);
  sqcRZGate(q, -2.218319450150244, 1);
  sqcRYGate(q, -0.39262313201534466, 2);
  sqcRZGate(q, -2.3607973468287202, 2);
  sqcRYGate(q, 0.966869996655807, 3);
  sqcRZGate(q, 1.5961120900166654, 3);
  sqcRYGate(q, -1.259993825848106, 4);
  sqcRZGate(q, -2.43317844921598, 4);
  sqcRYGate(q, 0.2798173318976316, 5);
  sqcRZGate(q, 2.2602269754399202, 5);
  sqcRYGate(q, -2.617024924235392, 6);
  sqcRZGate(q, 2.741105322929155, 6);
  sqcRYGate(q, 2.9285282937778714, 7);
  sqcRZGate(q, -3.1352823817000095, 7);
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
  sqcRYGate(q, -2.159448825781935, 0);
  sqcRZGate(q, 1.5967644183162086, 0);
  sqcRYGate(q, -1.112388833020358, 1);
  sqcRZGate(q, -1.0304356988043895, 1);
  sqcRYGate(q, -2.1404571640250687, 2);
  sqcRZGate(q, -1.7122462162735628, 2);
  sqcRYGate(q, -2.83350393947792, 3);
  sqcRZGate(q, 0.042768433504298604, 3);
  sqcRYGate(q, -2.999599422754996, 4);
  sqcRZGate(q, 2.7708232487620483, 4);
  sqcRYGate(q, 1.8088094395811858, 5);
  sqcRZGate(q, 1.7439349217660458, 5);
  sqcRYGate(q, -1.4253890029021623, 6);
  sqcRZGate(q, -2.6230704723640312, 6);
  sqcRYGate(q, 2.463217550602724, 7);
  sqcRZGate(q, 2.0175472661692715, 7);
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
  sqcRYGate(q, -2.8176432584075455, 0);
  sqcRZGate(q, -2.1062537962379384, 0);
  sqcRYGate(q, -0.6131138362114575, 1);
  sqcRZGate(q, -3.0049891100851522, 1);
  sqcRYGate(q, 1.7553640593475155, 2);
  sqcRZGate(q, 0.49990134305147116, 2);
  sqcRYGate(q, -1.2560691991540451, 3);
  sqcRZGate(q, -1.654252834212885, 3);
  sqcRYGate(q, 0.8392977842615769, 4);
  sqcRZGate(q, -1.5795675347181213, 4);
  sqcRYGate(q, 1.4387682464276388, 5);
  sqcRZGate(q, 1.48484915982778, 5);
  sqcRYGate(q, 0.3919473444879902, 6);
  sqcRZGate(q, 2.3384509720108086, 6);
  sqcRYGate(q, -1.6370333450075294, 7);
  sqcRZGate(q, 2.4005592165394325, 7);
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
  sqcRYGate(q, -2.735351268248524, 0);
  sqcRZGate(q, -1.5263638005954312, 0);
  sqcRYGate(q, -0.900856997302891, 1);
  sqcRZGate(q, -2.9082940170982265, 1);
  sqcRYGate(q, -0.05469212639210142, 2);
  sqcRZGate(q, 2.055417332066086, 2);
  sqcRYGate(q, 1.8358112454143907, 3);
  sqcRZGate(q, 2.48119192711351, 3);
  sqcRYGate(q, 0.25689769744406826, 4);
  sqcRZGate(q, -0.1117723584094481, 4);
  sqcRYGate(q, 2.3831510108192444, 5);
  sqcRZGate(q, -0.10739163861107888, 5);
  sqcRYGate(q, 2.9900157860830223, 6);
  sqcRZGate(q, 2.8538124386340313, 6);
  sqcRYGate(q, -0.11307593600693709, 7);
  sqcRZGate(q, 2.7963704645517855, 7);
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
  sqcRYGate(q, 2.612006324632827, 0);
  sqcRZGate(q, -2.1654741877488073, 0);
  sqcRYGate(q, -0.25946169049492546, 1);
  sqcRZGate(q, -2.465526640193726, 1);
  sqcRYGate(q, -2.528949677688847, 2);
  sqcRZGate(q, -1.2716924495247377, 2);
  sqcRYGate(q, 0.7015038233876145, 3);
  sqcRZGate(q, 1.2474013309433825, 3);
  sqcRYGate(q, -0.7829511802524802, 4);
  sqcRZGate(q, -0.0009390825197971437, 4);
  sqcRYGate(q, 0.15724198300266326, 5);
  sqcRZGate(q, -2.828279824912951, 5);
  sqcRYGate(q, 1.1689623246513356, 6);
  sqcRZGate(q, 1.3738865401121483, 6);
  sqcRYGate(q, 1.2172251817175601, 7);
  sqcRZGate(q, -2.4688281087503086, 7);
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
  sqcRYGate(q, -3.130362470528542, 0);
  sqcRZGate(q, 2.7920092642151033, 0);
  sqcRYGate(q, -1.2230268765705328, 1);
  sqcRZGate(q, 2.0487366861360865, 1);
  sqcRYGate(q, 0.4876535377568221, 2);
  sqcRZGate(q, -2.1695785138163854, 2);
  sqcRYGate(q, -0.30000363161149624, 3);
  sqcRZGate(q, -2.6880869331116823, 3);
  sqcRYGate(q, 2.0118974068414563, 4);
  sqcRZGate(q, -2.9218223107676127, 4);
  sqcRYGate(q, 1.644594673987621, 5);
  sqcRZGate(q, -1.4541308155705857, 5);
  sqcRYGate(q, 0.4469943800393764, 6);
  sqcRZGate(q, 1.1254633106491918, 6);
  sqcRYGate(q, 2.298509703623185, 7);
  sqcRZGate(q, -1.6451366732210717, 7);
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
  sqcRYGate(q, 2.3464434073953497, 0);
  sqcRZGate(q, 2.3555536215638266, 0);
  sqcRYGate(q, 3.0651652466793275, 1);
  sqcRZGate(q, 0.3508322845186074, 1);
  sqcRYGate(q, 0.15730907028226504, 2);
  sqcRZGate(q, -2.0133910187387336, 2);
  sqcRYGate(q, -2.508560991411618, 3);
  sqcRZGate(q, 1.5254182244446126, 3);
  sqcRYGate(q, -0.7711279120865774, 4);
  sqcRZGate(q, -2.371229084589203, 4);
  sqcRYGate(q, -3.026029166314012, 5);
  sqcRZGate(q, -3.04902158000211, 5);
  sqcRYGate(q, 0.18647839189505497, 6);
  sqcRZGate(q, 2.681402673058071, 6);
  sqcRYGate(q, -2.9636829293572493, 7);
  sqcRZGate(q, 1.75307827880469, 7);
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
  sqcRYGate(q, 2.372103587232509, 0);
  sqcRZGate(q, 1.3371737025120656, 0);
  sqcRYGate(q, 1.6297787860538033, 1);
  sqcRZGate(q, 3.1399953838951813, 1);
  sqcRYGate(q, 1.4928287318921005, 2);
  sqcRZGate(q, -0.48836932183129994, 2);
  sqcRYGate(q, 1.5350032585441375, 3);
  sqcRZGate(q, 0.3055150006098373, 3);
  sqcRYGate(q, 2.058027656320629, 4);
  sqcRZGate(q, 1.0477773084860882, 4);
  sqcRYGate(q, 1.6753014016295174, 5);
  sqcRZGate(q, -1.0052143202864008, 5);
  sqcRYGate(q, 2.4026009043569414, 6);
  sqcRZGate(q, -1.3551850622772734, 6);
  sqcRYGate(q, 1.3847912675782212, 7);
  sqcRZGate(q, 3.1159401207452393, 7);
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
  sqcRYGate(q, -1.287610669682416, 0);
  sqcRZGate(q, 1.297111999135668, 0);
  sqcRYGate(q, 2.7665336943774386, 1);
  sqcRZGate(q, 1.661054419529865, 1);
  sqcRYGate(q, -2.742248353084625, 2);
  sqcRZGate(q, 0.5204869549838094, 2);
  sqcRYGate(q, -1.5005014961944394, 3);
  sqcRZGate(q, -2.3865753750654757, 3);
  sqcRYGate(q, 1.8699155185462584, 4);
  sqcRZGate(q, 0.32609897349006184, 4);
  sqcRYGate(q, -1.7820527681929323, 5);
  sqcRZGate(q, -2.356544194440463, 5);
  sqcRYGate(q, 0.8893032320858183, 6);
  sqcRZGate(q, -2.6304521023935523, 6);
  sqcRYGate(q, -0.7808760881478919, 7);
  sqcRZGate(q, 1.4830200928047592, 7);
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
  sqcRYGate(q, 0.4342389937300691, 0);
  sqcRZGate(q, 2.021757197132554, 0);
  sqcRYGate(q, -1.9016240577220134, 1);
  sqcRZGate(q, 1.1690713327566609, 1);
  sqcRYGate(q, -0.7729391164303155, 2);
  sqcRZGate(q, -2.7839566370654274, 2);
  sqcRYGate(q, 1.227133511869174, 3);
  sqcRZGate(q, 1.6654536151122012, 3);
  sqcRYGate(q, -0.9162479882942112, 4);
  sqcRZGate(q, -0.7158723474202207, 4);
  sqcRYGate(q, -3.0483161613796965, 5);
  sqcRZGate(q, -0.5315012126035015, 5);
  sqcRYGate(q, 0.6326974640607528, 6);
  sqcRZGate(q, -0.6905993256124053, 6);
  sqcRYGate(q, 0.6652878426230789, 7);
  sqcRZGate(q, 2.7254991482406443, 7);
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
  sqcRYGate(q, 0.2843662942451213, 0);
  sqcRZGate(q, 0.8030468225874321, 0);
  sqcRYGate(q, 1.8787092836544819, 1);
  sqcRZGate(q, 2.506375679695148, 1);
  sqcRYGate(q, -0.24598418577631637, 2);
  sqcRZGate(q, -2.3777957146615596, 2);
  sqcRYGate(q, -0.33850225912121523, 3);
  sqcRZGate(q, -0.1475430950211912, 3);
  sqcRYGate(q, 0.9194092078858733, 4);
  sqcRZGate(q, 3.0567577624254487, 4);
  sqcRYGate(q, -1.4516400450859062, 5);
  sqcRZGate(q, 1.2525016106843985, 5);
  sqcRYGate(q, 0.7717261824983446, 6);
  sqcRZGate(q, -0.7559046477184276, 6);
  sqcRYGate(q, -1.470637009923787, 7);
  sqcRZGate(q, -1.643128463912999, 7);
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
  sqcRYGate(q, -1.41676100485525, 0);
  sqcRZGate(q, 1.888011343907138, 0);
  sqcRYGate(q, 2.9502415949770753, 1);
  sqcRZGate(q, 0.988319878612736, 1);
  sqcRYGate(q, -1.3509833539124028, 2);
  sqcRZGate(q, -1.4241722250397473, 2);
  sqcRYGate(q, 2.3738741602659386, 3);
  sqcRZGate(q, -1.0053847348958576, 3);
  sqcRYGate(q, 0.46524188670684796, 4);
  sqcRZGate(q, 0.12633754334073288, 4);
  sqcRYGate(q, 0.04643932562316578, 5);
  sqcRZGate(q, 1.8697920387820544, 5);
  sqcRYGate(q, 2.609755831360348, 6);
  sqcRZGate(q, -1.1389428364811454, 6);
  sqcRYGate(q, 1.351400566002396, 7);
  sqcRZGate(q, 1.2813609113681386, 7);
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
  sqcRYGate(q, -0.4384764319373888, 0);
  sqcRZGate(q, -0.3547881652807554, 0);
  sqcRYGate(q, 0.17147684264345625, 1);
  sqcRZGate(q, 2.959002350743042, 1);
  sqcRYGate(q, 2.275650064630172, 2);
  sqcRZGate(q, -1.9883372827834365, 2);
  sqcRYGate(q, 2.3529584313711873, 3);
  sqcRZGate(q, -1.8418892618188711, 3);
  sqcRYGate(q, -1.6580109326895558, 4);
  sqcRZGate(q, -2.317818540584505, 4);
  sqcRYGate(q, -2.920393925906968, 5);
  sqcRZGate(q, 2.1036946890265193, 5);
  sqcRYGate(q, -1.3261699097453903, 6);
  sqcRZGate(q, 0.41828875180017605, 6);
  sqcRYGate(q, -0.3356953457690763, 7);
  sqcRZGate(q, -1.3539389322806432, 7);
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
  sqcRYGate(q, -2.4901204707107647, 0);
  sqcRZGate(q, 1.7825447612445928, 0);
  sqcRYGate(q, 2.517961984752387, 1);
  sqcRZGate(q, -0.8187929486865199, 1);
  sqcRYGate(q, 0.30660370705318074, 2);
  sqcRZGate(q, -0.9995030345247188, 2);
  sqcRYGate(q, -0.8784836565123335, 3);
  sqcRZGate(q, -1.0457381232424363, 3);
  sqcRYGate(q, -1.3629368499262124, 4);
  sqcRZGate(q, 0.7113127078614746, 4);
  sqcRYGate(q, -0.25714176125919813, 5);
  sqcRZGate(q, -2.678870724543787, 5);
  sqcRYGate(q, -0.5908121315207768, 6);
  sqcRZGate(q, -1.0846039261320874, 6);
  sqcRYGate(q, 2.6507639228679984, 7);
  sqcRZGate(q, 1.811646329027167, 7);
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
  sqcRYGate(q, 2.7077863455562188, 0);
  sqcRZGate(q, 3.08904394110631, 0);
  sqcRYGate(q, 2.126628485434129, 1);
  sqcRZGate(q, 1.1086772761476418, 1);
  sqcRYGate(q, -0.81622010831434, 2);
  sqcRZGate(q, 1.4313427099996219, 2);
  sqcRYGate(q, -1.52315555292472, 3);
  sqcRZGate(q, -2.12293640728281, 3);
  sqcRYGate(q, 0.9029865605651352, 4);
  sqcRZGate(q, 1.1933951728386694, 4);
  sqcRYGate(q, 2.311998424788809, 5);
  sqcRZGate(q, 0.7432667620564359, 5);
  sqcRYGate(q, 1.8547898773267355, 6);
  sqcRZGate(q, -0.13260388861988928, 6);
  sqcRYGate(q, -0.7568672559262521, 7);
  sqcRZGate(q, -2.8821808348315883, 7);
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
  sqcRYGate(q, -1.9018309443225643, 0);
  sqcRZGate(q, -0.451950844964097, 0);
  sqcRYGate(q, 2.293303987200008, 1);
  sqcRZGate(q, 2.2493088939076062, 1);
  sqcRYGate(q, -2.1379585096424694, 2);
  sqcRZGate(q, -1.6710523450972916, 2);
  sqcRYGate(q, 2.7380879836199594, 3);
  sqcRZGate(q, 2.0145074131020717, 3);
  sqcRYGate(q, -2.303536731384292, 4);
  sqcRZGate(q, 0.9990328183775663, 4);
  sqcRYGate(q, 1.5194433009495265, 5);
  sqcRZGate(q, 1.2284300355684987, 5);
  sqcRYGate(q, 0.6906921616330655, 6);
  sqcRZGate(q, 0.3973964846553319, 6);
  sqcRYGate(q, -2.3827871090548856, 7);
  sqcRZGate(q, 2.7466490595462862, 7);
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
  sqcRYGate(q, -1.3071851267794667, 0);
  sqcRZGate(q, -1.3867102883398825, 0);
  sqcRYGate(q, -1.6876293252074044, 1);
  sqcRZGate(q, 1.3666598675251214, 1);
  sqcRYGate(q, 1.4697176728795665, 2);
  sqcRZGate(q, 2.235755767835677, 2);
  sqcRYGate(q, -3.0613750774907973, 3);
  sqcRZGate(q, 0.04157254997084347, 3);
  sqcRYGate(q, 1.6653259321424305, 4);
  sqcRZGate(q, -0.998716743514258, 4);
  sqcRYGate(q, -0.3398099717228291, 5);
  sqcRZGate(q, -0.8735472247364432, 5);
  sqcRYGate(q, -0.8677880007095762, 6);
  sqcRZGate(q, -0.5713348285813993, 6);
  sqcRYGate(q, -1.5289404637290573, 7);
  sqcRZGate(q, 2.9375838867189055, 7);
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
  sqcRYGate(q, 0.9148921012452931, 0);
  sqcRZGate(q, -0.12082973523140074, 0);
  sqcRYGate(q, -1.9228079014052852, 1);
  sqcRZGate(q, 0.8488330444990178, 1);
  sqcRYGate(q, 1.592961336675871, 2);
  sqcRZGate(q, 2.031386490819256, 2);
  sqcRYGate(q, 0.4093371178881335, 3);
  sqcRZGate(q, -2.125854279828654, 3);
  sqcRYGate(q, 2.3623629659752066, 4);
  sqcRZGate(q, -1.6515966748966402, 4);
  sqcRYGate(q, -0.6357404620912062, 5);
  sqcRZGate(q, -1.0013368945067482, 5);
  sqcRYGate(q, 2.7799035704088944, 6);
  sqcRZGate(q, 2.474908110431052, 6);
  sqcRYGate(q, 1.7842453590354115, 7);
  sqcRZGate(q, -0.7098074813715954, 7);
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
  sqcRYGate(q, -2.3146709064322017, 0);
  sqcRZGate(q, -0.2866773457397803, 0);
  sqcRYGate(q, -0.18685502746467206, 1);
  sqcRZGate(q, 1.6360949876807611, 1);
  sqcRYGate(q, -1.5731890365996015, 2);
  sqcRZGate(q, 2.914692914571511, 2);
  sqcRYGate(q, -0.7199157440830739, 3);
  sqcRZGate(q, -2.585361495964415, 3);
  sqcRYGate(q, 1.5020958389554737, 4);
  sqcRZGate(q, -2.878626297180786, 4);
  sqcRYGate(q, -0.6455099258677395, 5);
  sqcRZGate(q, 2.6932782960210364, 5);
  sqcRYGate(q, -1.2605403158774129, 6);
  sqcRZGate(q, 2.0125685077009123, 6);
  sqcRYGate(q, 2.0544776213353675, 7);
  sqcRZGate(q, 0.9759094623385138, 7);

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
