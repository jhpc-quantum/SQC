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

  sqcRYGate(q, -2.190168163734696, 0);
  sqcRYGate(q, 1.125976259383898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4659369555930244, 0);
  sqcRYGate(q, 1.0957025934546385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.691938499141807, 2);
  sqcRYGate(q, -1.643487894643001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9056174733168287, 2);
  sqcRYGate(q, -2.505862305138727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0758420389150296, 4);
  sqcRYGate(q, -0.734660525973274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.051210586726337, 4);
  sqcRYGate(q, -0.2257195455161245, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4201111332212529, 6);
  sqcRYGate(q, -0.9836289356293265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.055289361369416305, 6);
  sqcRYGate(q, 0.24371835641793016, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9122284605449869, 1);
  sqcRYGate(q, 1.7188028464443554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.381948910455396, 1);
  sqcRYGate(q, 0.8534222874274544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17774294511054567, 3);
  sqcRYGate(q, -0.3822113310648915, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2045040384449015, 3);
  sqcRYGate(q, -3.0690772002711224, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.03443752193139, 5);
  sqcRYGate(q, -2.5569175378176734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7240489496763625, 5);
  sqcRYGate(q, 0.23973737659082797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2539850041643967, 0);
  sqcRYGate(q, 3.066299570267721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.050912714834474, 0);
  sqcRYGate(q, 1.613736821716163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.455495686586303, 2);
  sqcRYGate(q, 2.955662215733353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8361791825824125, 2);
  sqcRYGate(q, 1.5193167072177403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6221483196753326, 4);
  sqcRYGate(q, 0.6288796808891626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0987851557920099, 4);
  sqcRYGate(q, 3.0067303173642355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.708292605678379, 6);
  sqcRYGate(q, -0.7167502305010505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.47617398075606227, 6);
  sqcRYGate(q, 0.900242056111077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.279154519838129, 1);
  sqcRYGate(q, -3.080023269979231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2809052482029006, 1);
  sqcRYGate(q, -2.016216119893369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7558359567116857, 3);
  sqcRYGate(q, -0.7130933223980254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.120354140539927, 3);
  sqcRYGate(q, 2.2746369455867845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6767662051913454, 5);
  sqcRYGate(q, 2.8545832964715085, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.282255739637428, 5);
  sqcRYGate(q, -0.5629891617845519, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7952584886769296, 0);
  sqcRYGate(q, -0.9351383854072441, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5297374666431165, 0);
  sqcRYGate(q, 2.881688748178937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1866686967773143, 2);
  sqcRYGate(q, 1.2130162452037294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8404552279239303, 2);
  sqcRYGate(q, -3.136318746621128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.688382866182886, 4);
  sqcRYGate(q, -2.401712800930018, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8668602918407142, 4);
  sqcRYGate(q, 2.534780457916379, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7221022743966081, 6);
  sqcRYGate(q, -2.5282783787571144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6022913456640344, 6);
  sqcRYGate(q, 0.48198848928038324, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5441803150373827, 1);
  sqcRYGate(q, -2.1922459755208026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.414002287667587, 1);
  sqcRYGate(q, -2.5821093818275123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5796785714543689, 3);
  sqcRYGate(q, -0.7712685165929952, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0946454108578365, 3);
  sqcRYGate(q, -2.4624574296717885, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1288174636738868, 5);
  sqcRYGate(q, 1.295826840425019, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3068284677224535, 5);
  sqcRYGate(q, -1.1078033821703166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9921245963419145, 0);
  sqcRYGate(q, -0.5302833193271654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.997383295033308, 0);
  sqcRYGate(q, -2.8105561721399295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4661088896533272, 2);
  sqcRYGate(q, -2.404302089100637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6903497685629684, 2);
  sqcRYGate(q, 2.4809935197945667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.196104564877558, 4);
  sqcRYGate(q, -3.03697411127503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.18942828846633475, 4);
  sqcRYGate(q, -0.3040168543664965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5590888331945156, 6);
  sqcRYGate(q, -2.9311278903176654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9851672110245993, 6);
  sqcRYGate(q, -1.706861505890929, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.951976712171817, 1);
  sqcRYGate(q, -3.111977523943361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7990425265062011, 1);
  sqcRYGate(q, 1.349527154282077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.113271052377516, 3);
  sqcRYGate(q, -2.3555402308802456, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.494882682818703, 3);
  sqcRYGate(q, -0.285297234002921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9825822556160088, 5);
  sqcRYGate(q, 2.463048648269062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4998521228720119, 5);
  sqcRYGate(q, -0.9774034017600749, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1786906133503907, 0);
  sqcRYGate(q, -1.3523814077638017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.119412525893539, 0);
  sqcRYGate(q, 0.8105318398890758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.828427182197017, 2);
  sqcRYGate(q, -2.7486183414249665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9710203503344886, 2);
  sqcRYGate(q, 2.5296432418996755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.071923679195933, 4);
  sqcRYGate(q, 0.34235134658435407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8401228660750473, 4);
  sqcRYGate(q, -1.5087446937378575, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7419547811874767, 6);
  sqcRYGate(q, -2.4168273377184537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9866692019032209, 6);
  sqcRYGate(q, 2.508591694779332, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.230853373186063, 1);
  sqcRYGate(q, 1.9356600855325239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5628380200778619, 1);
  sqcRYGate(q, -1.753141800406079, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.38659790966371604, 3);
  sqcRYGate(q, 0.5779756096884396, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6032297954306713, 3);
  sqcRYGate(q, -3.025968393196917, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.960114449865096, 5);
  sqcRYGate(q, 0.506423530982179, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7660768734740417, 5);
  sqcRYGate(q, -0.7656665105284413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5833685097519954, 0);
  sqcRYGate(q, -0.9937674212271403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2199546646958614, 0);
  sqcRYGate(q, 0.8040491066643981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3009325749931115, 2);
  sqcRYGate(q, -1.1142429619822334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25531745803632866, 2);
  sqcRYGate(q, -0.5190582242234463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7282679015833589, 4);
  sqcRYGate(q, 0.8535326799569284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.36649717418489297, 4);
  sqcRYGate(q, 1.4223269945114827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7987178421116483, 6);
  sqcRYGate(q, 2.7540575038398605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5021576068146292, 6);
  sqcRYGate(q, -0.7591638056252021, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.450308509039775, 1);
  sqcRYGate(q, -1.7416117367604258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1448007879657691, 1);
  sqcRYGate(q, -2.535291916198848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.110324196713285, 3);
  sqcRYGate(q, 1.1713906411495836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.46544464796258, 3);
  sqcRYGate(q, -1.347654643754492, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8648912491604923, 5);
  sqcRYGate(q, 2.150590379074798, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7000688343161166, 5);
  sqcRYGate(q, -2.5236626352711156, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.28889219502178065, 0);
  sqcRYGate(q, -0.7524922096755269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.72847196533895, 0);
  sqcRYGate(q, 0.07232195478846666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.683314404802564, 2);
  sqcRYGate(q, 1.320294939837006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5268974990243886, 2);
  sqcRYGate(q, 1.8670981895412433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3464793993857715, 4);
  sqcRYGate(q, -2.0405401248864665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.065449989124625, 4);
  sqcRYGate(q, -2.4257919538989836, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0521435080678434, 6);
  sqcRYGate(q, 2.6985994992107765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1665555141694182, 6);
  sqcRYGate(q, -0.31178989961378356, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5991114338164727, 1);
  sqcRYGate(q, -1.0280495987103868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23525352331239907, 1);
  sqcRYGate(q, 1.4404335636322507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.592985902978692, 3);
  sqcRYGate(q, -2.241616363030463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6299930726474354, 3);
  sqcRYGate(q, 0.3659348734914999, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.526024162694323, 5);
  sqcRYGate(q, 1.0855813468008844, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.849760505872804, 5);
  sqcRYGate(q, -0.5130178768040938, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2616882174384196, 0);
  sqcRYGate(q, -3.1207948363030247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.669920101092275, 0);
  sqcRYGate(q, -1.9582760509106272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3894569951942808, 2);
  sqcRYGate(q, -0.3199389916401501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6311445626378147, 2);
  sqcRYGate(q, 1.7257977737019552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9688006356400303, 4);
  sqcRYGate(q, -0.7450178608150994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0204308405831866, 4);
  sqcRYGate(q, 0.9066413744905604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.113167620064413, 6);
  sqcRYGate(q, 0.8554117741011292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4508131582106358, 6);
  sqcRYGate(q, 0.6119973659773139, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05064166341023402, 1);
  sqcRYGate(q, -1.8174364629196775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.206143014765477, 1);
  sqcRYGate(q, -3.025431851190041, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.823528261320996, 3);
  sqcRYGate(q, 1.308767869364801, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7463721876562968, 3);
  sqcRYGate(q, -1.6230970135112428, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0030139134482681748, 5);
  sqcRYGate(q, -1.1359596076840248, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11731671489566688, 5);
  sqcRYGate(q, -0.5386108490881192, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.709858687218339, 0);
  sqcRYGate(q, -2.6793710202810095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6200618707554533, 0);
  sqcRYGate(q, -2.5354097135815574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9914100084942374, 2);
  sqcRYGate(q, -2.035914679361829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3406203219267887, 2);
  sqcRYGate(q, 0.9654785407676518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5194607369205917, 4);
  sqcRYGate(q, 1.7041305459105223, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2525759436790551, 4);
  sqcRYGate(q, 0.17501655910672653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13120811194994506, 6);
  sqcRYGate(q, 0.8037781870195486, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.738941676523396, 6);
  sqcRYGate(q, -2.013162635384587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8994683917512322, 1);
  sqcRYGate(q, 1.0156247326781553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5476708810091333, 1);
  sqcRYGate(q, -3.0943690200385525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.014917694812828, 3);
  sqcRYGate(q, -0.32308398828069684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5043683164511403, 3);
  sqcRYGate(q, -0.8220507370463448, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.952155020803588, 5);
  sqcRYGate(q, 1.7835635163013381, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7557626797147283, 5);
  sqcRYGate(q, -0.9227110825560052, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0778509868673223, 0);
  sqcRYGate(q, 0.36808450357695277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7891562668867218, 0);
  sqcRYGate(q, -1.1986958858871297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5166265012436573, 2);
  sqcRYGate(q, -0.23611564883942826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2595351909025625, 2);
  sqcRYGate(q, -1.6079397324384874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47819802995232585, 4);
  sqcRYGate(q, -0.41024749514133774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.232332379794661, 4);
  sqcRYGate(q, 0.32966973533091704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2853414776028775, 6);
  sqcRYGate(q, 1.6794681247337282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0132382372853868, 6);
  sqcRYGate(q, 1.3077892781804823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4334271077426761, 1);
  sqcRYGate(q, -1.3454702293385175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.760635927049537, 1);
  sqcRYGate(q, 0.8253961079517733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2157719746220175, 3);
  sqcRYGate(q, -1.604137933118213, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8106387052784747, 3);
  sqcRYGate(q, -3.080788587423688, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0928277246927083, 5);
  sqcRYGate(q, -0.4830717421798436, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6062489090376557, 5);
  sqcRYGate(q, 2.227910564710112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2220348840708604, 0);
  sqcRYGate(q, -0.925176212688455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2155944000840608, 0);
  sqcRYGate(q, -2.194809736071308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4650116140268965, 2);
  sqcRYGate(q, 2.6458111997152427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.079154943793255, 2);
  sqcRYGate(q, 2.2794609132344714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.522972775801639, 4);
  sqcRYGate(q, 2.2452818882443033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3205011932491777, 4);
  sqcRYGate(q, 2.072773534235438, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7718044019226704, 6);
  sqcRYGate(q, -2.7512586313476977, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0024983165793975, 6);
  sqcRYGate(q, 0.7300293140032731, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.117416972905573, 1);
  sqcRYGate(q, 0.09989226490144887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9292995770467813, 1);
  sqcRYGate(q, 1.002550932183228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0580372657245376, 3);
  sqcRYGate(q, 2.6214756922546987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6946231658529154, 3);
  sqcRYGate(q, -0.07476389171699704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3651661076773165, 5);
  sqcRYGate(q, 2.5935474558108194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4667034040046296, 5);
  sqcRYGate(q, 2.0200512618326756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8976939335328464, 0);
  sqcRYGate(q, -2.6474172785389904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.985595712836759, 0);
  sqcRYGate(q, 2.2238877805583974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09452566197163838, 2);
  sqcRYGate(q, -1.6053983393506783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7083434858962825, 2);
  sqcRYGate(q, 2.941253869065874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.311333707050058, 4);
  sqcRYGate(q, -1.5093400016132152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7455362392082425, 4);
  sqcRYGate(q, -1.7808119856049862, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7328571163118046, 6);
  sqcRYGate(q, -2.615061278104391, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4270396245627555, 6);
  sqcRYGate(q, -1.2197912229902645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.97333772509758, 1);
  sqcRYGate(q, -0.8084906688106015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4908062292836516, 1);
  sqcRYGate(q, 2.8946492649192668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8234190006786681, 3);
  sqcRYGate(q, -0.00921011457772751, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6013006518514972, 3);
  sqcRYGate(q, 1.2434300183374205, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5931362400559976, 5);
  sqcRYGate(q, 0.26531321602620095, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5085060673654533, 5);
  sqcRYGate(q, -1.8271495614404776, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8456267796218714, 0);
  sqcRYGate(q, -0.05810602657443374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5102651582336515, 0);
  sqcRYGate(q, -1.7173416680151314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0686452976214875, 2);
  sqcRYGate(q, -2.6896975674604358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38380324011171246, 2);
  sqcRYGate(q, -2.961626949126141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8804138848542502, 4);
  sqcRYGate(q, -3.1036657606612703, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8227333830714542, 4);
  sqcRYGate(q, -1.993835612804726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8165203931273477, 6);
  sqcRYGate(q, 2.325999368239235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.349262834385379, 6);
  sqcRYGate(q, -1.5125931719163184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.176239194422908, 1);
  sqcRYGate(q, -2.152712570612266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6135945135737804, 1);
  sqcRYGate(q, -1.964633303526278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.915747080611899, 3);
  sqcRYGate(q, -2.1059066645806714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5093450597054172, 3);
  sqcRYGate(q, 0.4501223553292996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6039582573923831, 5);
  sqcRYGate(q, -1.2474141784926003, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.093651597011905, 5);
  sqcRYGate(q, -0.7405088581478729, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.458366780732554, 0);
  sqcRYGate(q, 2.4677369791456214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.565453068324707, 0);
  sqcRYGate(q, -1.2332990913293405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1335922148579551, 2);
  sqcRYGate(q, 2.3388856540034655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.988941120516765, 2);
  sqcRYGate(q, 0.4501069006471061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.403947610030576, 4);
  sqcRYGate(q, -0.26602060827839874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0914254364347205, 4);
  sqcRYGate(q, -2.2780605318100697, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3125377118360255, 6);
  sqcRYGate(q, -0.8995755010391122, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1475243029270628, 6);
  sqcRYGate(q, 2.481607193162686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7121936673813187, 1);
  sqcRYGate(q, 2.113064338989644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.131323085485284, 1);
  sqcRYGate(q, -0.6078147850333673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9194281480087343, 3);
  sqcRYGate(q, 2.8314495563354987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7153558367677707, 3);
  sqcRYGate(q, -1.6287891804650036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.726849952131439, 5);
  sqcRYGate(q, -0.6818269807170653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9020711393129224, 5);
  sqcRYGate(q, -1.9188174197939016, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0980721192231078, 0);
  sqcRYGate(q, -1.7199142275480497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2444658103242823, 0);
  sqcRYGate(q, -0.5394935594770657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8321290681677143, 2);
  sqcRYGate(q, -2.3653663950016623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.721798988838936, 2);
  sqcRYGate(q, -1.7839795051945746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9113245906690466, 4);
  sqcRYGate(q, 0.7820251873868612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8224160033421097, 4);
  sqcRYGate(q, -1.9528901577095459, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8361160953797526, 6);
  sqcRYGate(q, -2.007991436510876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.49043722831177, 6);
  sqcRYGate(q, 2.188734383398428, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.38776077518105, 1);
  sqcRYGate(q, -2.856439675909165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8464594650446671, 1);
  sqcRYGate(q, 1.3915439862759813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2058472742415076, 3);
  sqcRYGate(q, -0.6798959145228176, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5804081602985617, 3);
  sqcRYGate(q, 2.6290209209605027, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.41352994025525, 5);
  sqcRYGate(q, 0.5180428166092572, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9662970732502074, 5);
  sqcRYGate(q, -1.8688551046497226, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5997069779003954, 0);
  sqcRYGate(q, -1.3042692001652019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6740595365522585, 0);
  sqcRYGate(q, 0.03800229784176512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46078949514178563, 2);
  sqcRYGate(q, -0.06260988480083868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6494645990849977, 2);
  sqcRYGate(q, 1.1855379226042588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6217231046261693, 4);
  sqcRYGate(q, -1.0527709160795533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8664161834146142, 4);
  sqcRYGate(q, 1.6422111550803293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7217190983158708, 6);
  sqcRYGate(q, 1.9426932846324068, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1543319876498217, 6);
  sqcRYGate(q, -1.2699020757084656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.807794909296039, 1);
  sqcRYGate(q, 0.24255318684194205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.286096567407066, 1);
  sqcRYGate(q, -2.2524288532164505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30470048872561756, 3);
  sqcRYGate(q, 2.2292416984864363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.091783922947097, 3);
  sqcRYGate(q, -1.10969404193809, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2063764976304328, 5);
  sqcRYGate(q, -0.29887278340093903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5209545720394075, 5);
  sqcRYGate(q, -3.022419746406468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.41480148559379, 0);
  sqcRYGate(q, 0.9865224424818546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4868890284098253, 0);
  sqcRYGate(q, 2.6769201540344048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4945417639039942, 2);
  sqcRYGate(q, 0.7371947225516182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18616672533092513, 2);
  sqcRYGate(q, -2.3824828976261325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7040678752013125, 4);
  sqcRYGate(q, -0.5110211229186943, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.221771886482859, 4);
  sqcRYGate(q, 1.9466585459134276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5944433114593808, 6);
  sqcRYGate(q, -2.6459049022199395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5582670784671846, 6);
  sqcRYGate(q, -0.275697018183898, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6397612328138873, 1);
  sqcRYGate(q, -1.3078395649506005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8388823087658102, 1);
  sqcRYGate(q, -2.07848823551189, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6206988486139249, 3);
  sqcRYGate(q, 1.344805656283488, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.667849745900036, 3);
  sqcRYGate(q, -2.466005778401158, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9884046218389858, 5);
  sqcRYGate(q, -1.7675596596655425, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.739644046768916, 5);
  sqcRYGate(q, -0.09506307863427833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.31582349864282655, 0);
  sqcRYGate(q, 2.129924586836297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4168813518582066, 0);
  sqcRYGate(q, -2.1295821666415655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.625242044331426, 2);
  sqcRYGate(q, -1.3250741869294187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.367818927676168, 2);
  sqcRYGate(q, 2.3564124241127833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6582489997821286, 4);
  sqcRYGate(q, -0.9304889181882114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.622593923370811, 4);
  sqcRYGate(q, -1.1588515643863468, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.802403221412695, 6);
  sqcRYGate(q, -1.3949750424486138, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.076142949369486, 6);
  sqcRYGate(q, 0.8618072075649071, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.394157091887593, 1);
  sqcRYGate(q, -2.9575847361648466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.018329931828116, 1);
  sqcRYGate(q, 1.5604247074211457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2836626102590047, 3);
  sqcRYGate(q, -1.363385855561016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8403402205442941, 3);
  sqcRYGate(q, 2.995330718667686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.130544627823931, 5);
  sqcRYGate(q, 1.7606447136827557, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9497412458086734, 5);
  sqcRYGate(q, -0.639853040490487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4350013892736126, 0);
  sqcRYGate(q, -0.7947122833900053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7267508748636367, 0);
  sqcRYGate(q, -2.2318852901707964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22211471948550282, 2);
  sqcRYGate(q, -2.721645181061057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6277523135642045, 2);
  sqcRYGate(q, -0.255139217309162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5294014823229685, 4);
  sqcRYGate(q, -0.6806399757034907, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5285520032206955, 4);
  sqcRYGate(q, -1.53458320068503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5394658380622537, 6);
  sqcRYGate(q, -0.7389400007787321, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.319685427333103, 6);
  sqcRYGate(q, 3.1381819109235845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0315058433728983, 1);
  sqcRYGate(q, -0.7874869633276775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6597393200963506, 1);
  sqcRYGate(q, -1.3675810447042187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2059262803452302, 3);
  sqcRYGate(q, -2.777065630905352, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7059812137287858, 3);
  sqcRYGate(q, 1.9269465954018423, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8218366905523895, 5);
  sqcRYGate(q, 1.004619657450809, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.534959617462639, 5);
  sqcRYGate(q, 0.9497956396473999, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6980461810359473, 0);
  sqcRYGate(q, 0.6672295129568058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5695864366103525, 0);
  sqcRYGate(q, 1.940569895184609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1372951073905457, 2);
  sqcRYGate(q, -1.413781948454674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1287462934054067, 2);
  sqcRYGate(q, 1.7860720218512824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.795522490817474, 4);
  sqcRYGate(q, 2.166257613822033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1204970291289367, 4);
  sqcRYGate(q, 0.16539185510955962, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.020701477910099797, 6);
  sqcRYGate(q, -1.8984037880102085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0493605080156336, 6);
  sqcRYGate(q, 0.5124759447976405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9180096510228495, 1);
  sqcRYGate(q, 0.08948367725666628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.495413668715208, 1);
  sqcRYGate(q, 2.2654443919833716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.121470818746126, 3);
  sqcRYGate(q, -0.35263093631882186, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3305391835594653, 3);
  sqcRYGate(q, 3.067318315713253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9203701481728928, 5);
  sqcRYGate(q, -1.469790004475687, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5395352057620446, 5);
  sqcRYGate(q, 2.3617405993197234, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8856379319725614, 0);
  sqcRYGate(q, 1.8506356754952957, 1);
  sqcRYGate(q, -0.4144179571322484, 2);
  sqcRYGate(q, 0.01858593886988391, 3);
  sqcRYGate(q, -0.21247612338278718, 4);
  sqcRYGate(q, 1.0327530249206744, 5);
  sqcRYGate(q, -1.4663445584948582, 6);
  sqcRYGate(q, -1.7727268500491826, 7);

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
