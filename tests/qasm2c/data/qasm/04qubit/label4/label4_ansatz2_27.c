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

  sqcRYGate(q, 1.2439748478572215, 0);
  sqcRZGate(q, 2.4130473812608777, 0);
  sqcRYGate(q, 2.946863921305643, 1);
  sqcRZGate(q, 2.35372112879493, 1);
  sqcRYGate(q, -1.1789745703263197, 2);
  sqcRZGate(q, 0.11388317481388022, 2);
  sqcRYGate(q, 0.1887009760845153, 3);
  sqcRZGate(q, -2.7295102319238644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.19290922806326147, 0);
  sqcRZGate(q, 1.9149261629407954, 0);
  sqcRYGate(q, 2.2260746528071227, 1);
  sqcRZGate(q, 2.1721010976105513, 1);
  sqcRYGate(q, 3.080086858051717, 2);
  sqcRZGate(q, -0.8854498173344811, 2);
  sqcRYGate(q, -0.507658804657293, 3);
  sqcRZGate(q, -0.7889746946088857, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0992448033299107, 0);
  sqcRZGate(q, 1.5352290020528612, 0);
  sqcRYGate(q, 2.319973642900969, 1);
  sqcRZGate(q, -2.6210605964340914, 1);
  sqcRYGate(q, 1.2492056231868849, 2);
  sqcRZGate(q, 2.9165190875017206, 2);
  sqcRYGate(q, 0.24225290831976043, 3);
  sqcRZGate(q, -1.081853422628709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8946715006935817, 0);
  sqcRZGate(q, -0.16723980338858713, 0);
  sqcRYGate(q, -1.1761108892388732, 1);
  sqcRZGate(q, -0.5644692024849816, 1);
  sqcRYGate(q, -2.492083831559537, 2);
  sqcRZGate(q, -1.637483940103889, 2);
  sqcRYGate(q, -3.1011958907611126, 3);
  sqcRZGate(q, 2.8678334730432438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0892302361468116, 0);
  sqcRZGate(q, 2.5228654488293207, 0);
  sqcRYGate(q, -0.9315832003171047, 1);
  sqcRZGate(q, -2.9749025883054543, 1);
  sqcRYGate(q, -2.3208843379489954, 2);
  sqcRZGate(q, 1.724042341314323, 2);
  sqcRYGate(q, -2.3670660699581325, 3);
  sqcRZGate(q, 1.3335061687802716, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.347281509789249, 0);
  sqcRZGate(q, 0.9758023691036346, 0);
  sqcRYGate(q, -0.7925213473494694, 1);
  sqcRZGate(q, -2.094851494061494, 1);
  sqcRYGate(q, -0.7807491858640667, 2);
  sqcRZGate(q, 1.5032807362030807, 2);
  sqcRYGate(q, -1.7886910003347778, 3);
  sqcRZGate(q, -1.196920191025857, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1520584301468357, 0);
  sqcRZGate(q, -2.1051642147974747, 0);
  sqcRYGate(q, 0.7200398425378846, 1);
  sqcRZGate(q, -0.39066633416892754, 1);
  sqcRYGate(q, 0.5965164795926632, 2);
  sqcRZGate(q, -0.5180665623147518, 2);
  sqcRYGate(q, -0.1961728244105484, 3);
  sqcRZGate(q, -0.4327409955421411, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.762765746037255, 0);
  sqcRZGate(q, 2.8589721075374155, 0);
  sqcRYGate(q, -2.188868931238787, 1);
  sqcRZGate(q, -2.525974174018169, 1);
  sqcRYGate(q, 0.3005497666333206, 2);
  sqcRZGate(q, 2.398217888197792, 2);
  sqcRYGate(q, 0.5099616528597091, 3);
  sqcRZGate(q, -3.066647383964911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.805476174858063, 0);
  sqcRZGate(q, 1.0184667356328554, 0);
  sqcRYGate(q, -1.1254435419621942, 1);
  sqcRZGate(q, -0.30654620638369556, 1);
  sqcRYGate(q, 2.8730518344930513, 2);
  sqcRZGate(q, 0.015013897165498946, 2);
  sqcRYGate(q, 2.9411728720382424, 3);
  sqcRZGate(q, -0.256389192272856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.797310675046531, 0);
  sqcRZGate(q, -2.8609369987523614, 0);
  sqcRYGate(q, -0.12465995319583278, 1);
  sqcRZGate(q, 1.0893910022306497, 1);
  sqcRYGate(q, 2.375712940758798, 2);
  sqcRZGate(q, -0.6137150057752199, 2);
  sqcRYGate(q, 1.997653272607405, 3);
  sqcRZGate(q, -1.0021132261985937, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.058457888058472, 0);
  sqcRZGate(q, -0.9766040188955625, 0);
  sqcRYGate(q, -0.10223378927686166, 1);
  sqcRZGate(q, 3.037479016153601, 1);
  sqcRYGate(q, 1.7175271792871865, 2);
  sqcRZGate(q, -1.6405157473117828, 2);
  sqcRYGate(q, 1.1624946554077953, 3);
  sqcRZGate(q, -1.7095636508781986, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.08449729572760045, 0);
  sqcRZGate(q, -1.324126126483372, 0);
  sqcRYGate(q, -0.4085439461994901, 1);
  sqcRZGate(q, -1.663309186946128, 1);
  sqcRYGate(q, -2.6283108685402996, 2);
  sqcRZGate(q, 0.13027399245529203, 2);
  sqcRYGate(q, 2.821161553360738, 3);
  sqcRZGate(q, -0.9447480415083671, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9400168360054878, 0);
  sqcRZGate(q, -2.4677418570759326, 0);
  sqcRYGate(q, -2.1805909692641725, 1);
  sqcRZGate(q, -1.2834501505279032, 1);
  sqcRYGate(q, -2.2319271884529472, 2);
  sqcRZGate(q, 0.9327127969916407, 2);
  sqcRYGate(q, 2.546117610102733, 3);
  sqcRZGate(q, 0.47283387442116354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5923073894856516, 0);
  sqcRZGate(q, 2.9231947499168736, 0);
  sqcRYGate(q, 0.4202161658468029, 1);
  sqcRZGate(q, -0.7821367830627777, 1);
  sqcRYGate(q, 0.8726345681264203, 2);
  sqcRZGate(q, 2.4343870920800894, 2);
  sqcRYGate(q, 0.6398611455062406, 3);
  sqcRZGate(q, -2.6546409653340994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7031863972249432, 0);
  sqcRZGate(q, -0.2396027261396654, 0);
  sqcRYGate(q, -1.4648214836071647, 1);
  sqcRZGate(q, 0.08778200090532388, 1);
  sqcRYGate(q, -1.9340584137990577, 2);
  sqcRZGate(q, -2.1197829925261544, 2);
  sqcRYGate(q, 0.3686134914129795, 3);
  sqcRZGate(q, -2.9170275525729537, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2620717966238804, 0);
  sqcRZGate(q, -0.3759615558148772, 0);
  sqcRYGate(q, 1.9239050817768648, 1);
  sqcRZGate(q, -1.4563904249437876, 1);
  sqcRYGate(q, 0.5634914243989083, 2);
  sqcRZGate(q, 1.3526182024549787, 2);
  sqcRYGate(q, 0.3818066211677049, 3);
  sqcRZGate(q, 1.5683536153091497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7573550528985742, 0);
  sqcRZGate(q, -1.8595136368137029, 0);
  sqcRYGate(q, 2.2252985471559845, 1);
  sqcRZGate(q, -0.7211903160366324, 1);
  sqcRYGate(q, -0.2009692151745055, 2);
  sqcRZGate(q, 1.143678316173587, 2);
  sqcRYGate(q, -2.2420933502516105, 3);
  sqcRZGate(q, 0.5555161260729579, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6959048787861224, 0);
  sqcRZGate(q, -2.1531716385973083, 0);
  sqcRYGate(q, -2.47580776760782, 1);
  sqcRZGate(q, -2.0859720467737404, 1);
  sqcRYGate(q, 0.12320565204954548, 2);
  sqcRZGate(q, 3.0170844695242685, 2);
  sqcRYGate(q, -2.9803238958483393, 3);
  sqcRZGate(q, 0.9513064435114923, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2383617928416681, 0);
  sqcRZGate(q, 1.9204117197448667, 0);
  sqcRYGate(q, -1.0498094412386703, 1);
  sqcRZGate(q, -2.7035057959789195, 1);
  sqcRYGate(q, 1.0066137350362723, 2);
  sqcRZGate(q, -2.7003348419151854, 2);
  sqcRYGate(q, -0.7750701922365837, 3);
  sqcRZGate(q, 2.7469563749831134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1221397913791367, 0);
  sqcRZGate(q, -0.02846088780757938, 0);
  sqcRYGate(q, -2.912589118687864, 1);
  sqcRZGate(q, 1.024713152498418, 1);
  sqcRYGate(q, -1.662172716815685, 2);
  sqcRZGate(q, 0.946965433763733, 2);
  sqcRYGate(q, 2.2539356618016413, 3);
  sqcRZGate(q, -2.7340924800560336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6254829726727755, 0);
  sqcRZGate(q, -0.30636816528525646, 0);
  sqcRYGate(q, 3.108103750639208, 1);
  sqcRZGate(q, 0.6770287447650728, 1);
  sqcRYGate(q, -2.8934530805194623, 2);
  sqcRZGate(q, -1.7338397528991498, 2);
  sqcRYGate(q, 1.3051221555326995, 3);
  sqcRZGate(q, 2.3682183531602115, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3264988183584734, 0);
  sqcRZGate(q, -2.8417894719687844, 0);
  sqcRYGate(q, -2.8843603417065227, 1);
  sqcRZGate(q, -0.7252728495915131, 1);
  sqcRYGate(q, 1.319927932228625, 2);
  sqcRZGate(q, 2.0547047096817046, 2);
  sqcRYGate(q, 0.9957477247712879, 3);
  sqcRZGate(q, -1.350251545008292, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.11273322898935474, 0);
  sqcRZGate(q, 2.907116034835986, 0);
  sqcRYGate(q, -1.164403715532506, 1);
  sqcRZGate(q, -2.6249726032126977, 1);
  sqcRYGate(q, -3.0688803595531566, 2);
  sqcRZGate(q, -1.4976414016407338, 2);
  sqcRYGate(q, 0.2692832014431037, 3);
  sqcRZGate(q, -2.818055154795428, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.19936791364836942, 0);
  sqcRZGate(q, 0.9441488647071284, 0);
  sqcRYGate(q, 1.2427055023455482, 1);
  sqcRZGate(q, -1.3947689191306263, 1);
  sqcRYGate(q, -0.5300350623718009, 2);
  sqcRZGate(q, 0.4904440929182751, 2);
  sqcRYGate(q, 1.3989497918530285, 3);
  sqcRZGate(q, 3.0709944464508694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.101187347457976, 0);
  sqcRZGate(q, -1.000783453283726, 0);
  sqcRYGate(q, 2.239245045566193, 1);
  sqcRZGate(q, 1.1039779975255741, 1);
  sqcRYGate(q, 2.956721901332695, 2);
  sqcRZGate(q, -0.3625169017681529, 2);
  sqcRYGate(q, 2.0449697940609592, 3);
  sqcRZGate(q, 0.5212816051668387, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2704624298002605, 0);
  sqcRZGate(q, 0.313726692717245, 0);
  sqcRYGate(q, -2.847970733324579, 1);
  sqcRZGate(q, -0.03141626233134415, 1);
  sqcRYGate(q, -2.642553473569945, 2);
  sqcRZGate(q, 1.9821726115379028, 2);
  sqcRYGate(q, -0.7630427024143106, 3);
  sqcRZGate(q, -0.2778926088744731, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.608618339410369, 0);
  sqcRZGate(q, 2.371735281666176, 0);
  sqcRYGate(q, 3.1300681444493907, 1);
  sqcRZGate(q, 0.6895183020468802, 1);
  sqcRYGate(q, 0.9949496127329579, 2);
  sqcRZGate(q, -2.121234102396271, 2);
  sqcRYGate(q, -2.609346424006087, 3);
  sqcRZGate(q, 0.9667944523810643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6467172074065803, 0);
  sqcRZGate(q, -2.6541071719695104, 0);
  sqcRYGate(q, 0.5293027464442497, 1);
  sqcRZGate(q, -1.857330000468437, 1);
  sqcRYGate(q, -0.8668867043567294, 2);
  sqcRZGate(q, 1.0233795880304097, 2);
  sqcRYGate(q, 0.33169297821405497, 3);
  sqcRZGate(q, -1.9876057254420614, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.248148631850545, 0);
  sqcRZGate(q, -1.3319367576702943, 0);
  sqcRYGate(q, -2.7217782082086965, 1);
  sqcRZGate(q, 0.29064053964450304, 1);
  sqcRYGate(q, -2.489221169676413, 2);
  sqcRZGate(q, -2.347849012876925, 2);
  sqcRYGate(q, 1.8486066521520859, 3);
  sqcRZGate(q, 1.232675481323192, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6408714260774548, 0);
  sqcRZGate(q, -1.3135472520325622, 0);
  sqcRYGate(q, 1.088135644207014, 1);
  sqcRZGate(q, -0.27521147938100765, 1);
  sqcRYGate(q, -1.181538888001878, 2);
  sqcRZGate(q, -2.571022394945517, 2);
  sqcRYGate(q, -1.6393856700062104, 3);
  sqcRZGate(q, 1.3777567373248951, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.456083631482982, 0);
  sqcRZGate(q, 0.4416613095802442, 0);
  sqcRYGate(q, 0.9069788796890386, 1);
  sqcRZGate(q, -1.9581269740250729, 1);
  sqcRYGate(q, 2.130889264354189, 2);
  sqcRZGate(q, -2.4766790371182466, 2);
  sqcRYGate(q, 0.5411773385629308, 3);
  sqcRZGate(q, 1.5405846532811642, 3);

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
