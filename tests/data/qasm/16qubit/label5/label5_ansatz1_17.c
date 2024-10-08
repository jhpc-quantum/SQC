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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.5833049334818026, 0);
  sqcRZGate(q, 2.363743274306628, 0);
  sqcRYGate(q, -1.9611194829869403, 1);
  sqcRZGate(q, -0.07444238885999521, 1);
  sqcRYGate(q, -1.2866037908618633, 2);
  sqcRZGate(q, -1.1580118924959089, 2);
  sqcRYGate(q, 1.9267452562498466, 3);
  sqcRZGate(q, 1.0627309089132737, 3);
  sqcRYGate(q, 2.0557076561691376, 4);
  sqcRZGate(q, -2.163337908954984, 4);
  sqcRYGate(q, 0.7682136799695378, 5);
  sqcRZGate(q, 1.6353998948551152, 5);
  sqcRYGate(q, 3.1324658937233054, 6);
  sqcRZGate(q, 2.272247380902505, 6);
  sqcRYGate(q, -0.280004800143824, 7);
  sqcRZGate(q, -2.981419952722925, 7);
  sqcRYGate(q, 1.0423117396441652, 8);
  sqcRZGate(q, -0.33353031676220996, 8);
  sqcRYGate(q, -3.140597683994888, 9);
  sqcRZGate(q, 1.3860385787671037, 9);
  sqcRYGate(q, -2.290096183748524, 10);
  sqcRZGate(q, 2.7932807755718327, 10);
  sqcRYGate(q, 1.3539361020203273, 11);
  sqcRZGate(q, 1.8851230273504527, 11);
  sqcRYGate(q, 3.141243686419426, 12);
  sqcRZGate(q, 3.061679680795636, 12);
  sqcRYGate(q, 0.9889235721549046, 13);
  sqcRZGate(q, -1.3770260286274807, 13);
  sqcRYGate(q, -1.4704776688735985, 14);
  sqcRZGate(q, 0.45772591521448636, 14);
  sqcRYGate(q, 3.066329084941404, 15);
  sqcRZGate(q, -1.040690511828636, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.520631279000853, 0);
  sqcRZGate(q, 3.016417980437421, 0);
  sqcRYGate(q, -1.5020912860505922, 1);
  sqcRZGate(q, 2.072835583915869, 1);
  sqcRYGate(q, 1.5643637858279256, 2);
  sqcRZGate(q, -1.9743313726070664, 2);
  sqcRYGate(q, 1.35007460966692, 3);
  sqcRZGate(q, 2.104313731505895, 3);
  sqcRYGate(q, -2.543625108934249, 4);
  sqcRZGate(q, -0.769940886107543, 4);
  sqcRYGate(q, 0.34258430760031555, 5);
  sqcRZGate(q, -0.3303434540582897, 5);
  sqcRYGate(q, 0.0021385941810452124, 6);
  sqcRZGate(q, -1.2081213852182282, 6);
  sqcRYGate(q, 0.2329367054074023, 7);
  sqcRZGate(q, -2.9844395869754106, 7);
  sqcRYGate(q, 2.097012644649049, 8);
  sqcRZGate(q, -2.0884319508701426, 8);
  sqcRYGate(q, 1.9030549675956248, 9);
  sqcRZGate(q, -0.14907226347093142, 9);
  sqcRYGate(q, 1.2726882808359097, 10);
  sqcRZGate(q, -0.42702571606883755, 10);
  sqcRYGate(q, 1.587285152369896, 11);
  sqcRZGate(q, 2.1986629238840463, 11);
  sqcRYGate(q, 0.013874772438023264, 12);
  sqcRZGate(q, 3.034521457566404, 12);
  sqcRYGate(q, 2.656862872628973, 13);
  sqcRZGate(q, -0.9694848238790987, 13);
  sqcRYGate(q, -0.9038936461810856, 14);
  sqcRZGate(q, -1.5885710403810904, 14);
  sqcRYGate(q, -2.644108071437324, 15);
  sqcRZGate(q, -0.8156488249586493, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.2592143293717597, 0);
  sqcRZGate(q, 1.1390182395779913, 0);
  sqcRYGate(q, 1.0233160844447762, 1);
  sqcRZGate(q, -0.17646571913146578, 1);
  sqcRYGate(q, 1.4906900553754454, 2);
  sqcRZGate(q, 1.7536854472927814, 2);
  sqcRYGate(q, 1.3641779157704432, 3);
  sqcRZGate(q, -2.9470851362232056, 3);
  sqcRYGate(q, -2.873445441370955, 4);
  sqcRZGate(q, 1.4238063504246106, 4);
  sqcRYGate(q, 2.1833376955992034, 5);
  sqcRZGate(q, 3.086071422626669, 5);
  sqcRYGate(q, 0.004587281062252518, 6);
  sqcRZGate(q, -1.4364287037812398, 6);
  sqcRYGate(q, -0.26833143835599893, 7);
  sqcRZGate(q, 2.748189105405464, 7);
  sqcRYGate(q, 3.052628062400417, 8);
  sqcRZGate(q, -2.1404752868789556, 8);
  sqcRYGate(q, -1.3444637550830736, 9);
  sqcRZGate(q, -1.511201944231588, 9);
  sqcRYGate(q, -3.0028324230959162, 10);
  sqcRZGate(q, 2.8862923761718675, 10);
  sqcRYGate(q, -1.7755757727621462, 11);
  sqcRZGate(q, 1.8657298202517607, 11);
  sqcRYGate(q, 0.0034570554380393068, 12);
  sqcRZGate(q, -2.910978321186802, 12);
  sqcRYGate(q, 2.144265648747111, 13);
  sqcRZGate(q, -2.7976295112141547, 13);
  sqcRYGate(q, 1.9280054439734244, 14);
  sqcRZGate(q, -0.4738193478073575, 14);
  sqcRYGate(q, -0.05651788319800932, 15);
  sqcRZGate(q, -0.7598856553259958, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.386308838755385, 0);
  sqcRZGate(q, 2.0216352242362197, 0);
  sqcRYGate(q, 3.0433281481497274, 1);
  sqcRZGate(q, 1.892348051480094, 1);
  sqcRYGate(q, -1.8185604676163232, 2);
  sqcRZGate(q, 2.85210763599758, 2);
  sqcRYGate(q, 1.5389180360643022, 3);
  sqcRZGate(q, 2.0353081833253803, 3);
  sqcRYGate(q, 2.276956618690571, 4);
  sqcRZGate(q, 0.8176025989311189, 4);
  sqcRYGate(q, -0.33623943536491, 5);
  sqcRZGate(q, 0.7232939132178665, 5);
  sqcRYGate(q, 3.13400600205245, 6);
  sqcRZGate(q, 0.3999090032544237, 6);
  sqcRYGate(q, -0.026417690080284825, 7);
  sqcRZGate(q, 2.933743149560036, 7);
  sqcRYGate(q, -2.2002511012872805, 8);
  sqcRZGate(q, 1.4606501037727737, 8);
  sqcRYGate(q, -3.1396867056983817, 9);
  sqcRZGate(q, -2.3281498829440324, 9);
  sqcRYGate(q, 0.03566192085463449, 10);
  sqcRZGate(q, 0.009904586779412305, 10);
  sqcRYGate(q, -0.9878304636417097, 11);
  sqcRZGate(q, 2.401259612005946, 11);
  sqcRYGate(q, 3.1282249665211683, 12);
  sqcRZGate(q, 0.9994489938882158, 12);
  sqcRYGate(q, -1.2635787387250064, 13);
  sqcRZGate(q, 1.6478740661155173, 13);
  sqcRYGate(q, -0.4968059135627723, 14);
  sqcRZGate(q, -1.2274666285922544, 14);
  sqcRYGate(q, -3.053105209527923, 15);
  sqcRZGate(q, -2.9376395189463707, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.661328386109463, 0);
  sqcRZGate(q, 1.093834878661566, 0);
  sqcRYGate(q, -2.625196579364499, 1);
  sqcRZGate(q, 1.964914279836795, 1);
  sqcRYGate(q, 1.172074620475291, 2);
  sqcRZGate(q, -1.7221723262236681, 2);
  sqcRYGate(q, 1.616447407198005, 3);
  sqcRZGate(q, -0.7598776954148097, 3);
  sqcRYGate(q, -2.3159023665200955, 4);
  sqcRZGate(q, -0.26356560331989165, 4);
  sqcRYGate(q, -0.9944172803206515, 5);
  sqcRZGate(q, 2.337915734104698, 5);
  sqcRYGate(q, -3.134292431458038, 6);
  sqcRZGate(q, 0.9799746197870539, 6);
  sqcRYGate(q, 0.0016163850161621566, 7);
  sqcRZGate(q, 2.229324055315641, 7);
  sqcRYGate(q, -2.6406519489310445, 8);
  sqcRZGate(q, 3.0503000497702373, 8);
  sqcRYGate(q, 0.792580008595281, 9);
  sqcRZGate(q, -2.118794507019404, 9);
  sqcRYGate(q, -0.10205580479677802, 10);
  sqcRZGate(q, 2.253074594312224, 10);
  sqcRYGate(q, 0.9882105069113515, 11);
  sqcRZGate(q, -0.3633478184513211, 11);
  sqcRYGate(q, -0.002533011498877968, 12);
  sqcRZGate(q, 3.1029143133205124, 12);
  sqcRYGate(q, -0.6342507283318591, 13);
  sqcRZGate(q, 2.057416268555924, 13);
  sqcRYGate(q, 0.5535023319633025, 14);
  sqcRZGate(q, 0.5245112540769022, 14);
  sqcRYGate(q, 0.8392722885673933, 15);
  sqcRZGate(q, 3.056495827028434, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.371175059199972, 0);
  sqcRZGate(q, 2.8678197765127487, 0);
  sqcRYGate(q, -0.7412805849220344, 1);
  sqcRZGate(q, -1.3151430087510834, 1);
  sqcRYGate(q, 1.3423463453901299, 2);
  sqcRZGate(q, 2.899591735743484, 2);
  sqcRYGate(q, 2.2919923251421936, 3);
  sqcRZGate(q, 0.6912445648478459, 3);
  sqcRYGate(q, 3.110467492672358, 4);
  sqcRZGate(q, -0.919119111595835, 4);
  sqcRYGate(q, -0.08090342542646277, 5);
  sqcRZGate(q, -1.545718247411772, 5);
  sqcRYGate(q, -1.5699697540291615, 6);
  sqcRZGate(q, -1.569929728801444, 6);
  sqcRYGate(q, 2.01761106009232, 7);
  sqcRZGate(q, -0.7884811491913161, 7);
  sqcRYGate(q, 1.9527615378293277, 8);
  sqcRZGate(q, -0.9544268829781574, 8);
  sqcRYGate(q, -1.5367519753744758, 9);
  sqcRZGate(q, 1.3747417387156955, 9);
  sqcRYGate(q, -0.8880701979290491, 10);
  sqcRZGate(q, -2.7542288946275186, 10);
  sqcRYGate(q, 1.4450020769099274, 11);
  sqcRZGate(q, 0.6276564389303845, 11);
  sqcRYGate(q, -0.005309878837785018, 12);
  sqcRZGate(q, 0.35079459992801676, 12);
  sqcRYGate(q, 0.10654481072247624, 13);
  sqcRZGate(q, 1.7908860666318658, 13);
  sqcRYGate(q, -2.527478447532814, 14);
  sqcRZGate(q, 0.6000998973271257, 14);
  sqcRYGate(q, -0.18157505599978752, 15);
  sqcRZGate(q, 0.8598963040518004, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.1072595614599179, 0);
  sqcRZGate(q, 2.186015595548258, 0);
  sqcRYGate(q, -2.17693945618006, 1);
  sqcRZGate(q, -0.21577487936534645, 1);
  sqcRYGate(q, 2.2672622249656866, 2);
  sqcRZGate(q, -2.222740391650704, 2);
  sqcRYGate(q, 1.1526169339078614, 3);
  sqcRZGate(q, -1.0759311726458733, 3);
  sqcRYGate(q, 1.8919603802536988, 4);
  sqcRZGate(q, -0.2103558918908193, 4);
  sqcRYGate(q, 0.5819158516822407, 5);
  sqcRZGate(q, -0.005990455584600786, 5);
  sqcRYGate(q, -0.9000338605688524, 6);
  sqcRZGate(q, -0.0013147980107835694, 6);
  sqcRYGate(q, 3.0765321218733157, 7);
  sqcRZGate(q, -1.9604121528845286, 7);
  sqcRYGate(q, 3.1369745964205107, 8);
  sqcRZGate(q, -0.11875135034570344, 8);
  sqcRYGate(q, -1.6235800473630695, 9);
  sqcRZGate(q, -2.139607863704357, 9);
  sqcRYGate(q, 0.5400826961327194, 10);
  sqcRZGate(q, 0.2843798921168708, 10);
  sqcRYGate(q, -2.5343812254433553, 11);
  sqcRZGate(q, -0.6366660502112163, 11);
  sqcRYGate(q, 1.5925984056041103, 12);
  sqcRZGate(q, 3.094393141967671, 12);
  sqcRYGate(q, 0.3611239448060537, 13);
  sqcRZGate(q, -0.5747327312462307, 13);
  sqcRYGate(q, 0.3562056793541366, 14);
  sqcRZGate(q, 2.5221462433691517, 14);
  sqcRYGate(q, -2.160991405711225, 15);
  sqcRZGate(q, 2.3033424677251326, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.43409447673798, 0);
  sqcRZGate(q, 2.573329454457619, 0);
  sqcRYGate(q, 1.168626415655412, 1);
  sqcRZGate(q, -2.0103565010063633, 1);
  sqcRYGate(q, -1.4963605602139474, 2);
  sqcRZGate(q, -3.092970859723992, 2);
  sqcRYGate(q, 2.5723306856410937, 3);
  sqcRZGate(q, 0.028460765938507212, 3);
  sqcRYGate(q, -0.0046407538876282375, 4);
  sqcRZGate(q, -0.9396363723656164, 4);
  sqcRYGate(q, 2.1997790695142205, 5);
  sqcRZGate(q, 0.37390338570761283, 5);
  sqcRYGate(q, 1.5951798869736074, 6);
  sqcRZGate(q, 0.0012122397376557977, 6);
  sqcRYGate(q, 1.5839910421690035, 7);
  sqcRZGate(q, 0.8935009378061921, 7);
  sqcRYGate(q, 3.1170119558796765, 8);
  sqcRZGate(q, 3.0274763615790845, 8);
  sqcRYGate(q, -2.987258916002924, 9);
  sqcRZGate(q, 1.6810086841139542, 9);
  sqcRYGate(q, 2.7464726092243366, 10);
  sqcRZGate(q, -1.0584206498968167, 10);
  sqcRYGate(q, 0.5439162425749196, 11);
  sqcRZGate(q, 3.134977740753659, 11);
  sqcRYGate(q, -0.00042162449776776505, 12);
  sqcRZGate(q, 1.3542154190741196, 12);
  sqcRYGate(q, -0.016845835267811356, 13);
  sqcRZGate(q, -3.1229110626612284, 13);
  sqcRYGate(q, 2.7533136640208418, 14);
  sqcRZGate(q, 3.0123812590029195, 14);
  sqcRYGate(q, -2.1488506570465815, 15);
  sqcRZGate(q, 1.8504198081993095, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.7329061245774662, 0);
  sqcRZGate(q, -1.6253591287416482, 0);
  sqcRYGate(q, 1.8510195039291046, 1);
  sqcRZGate(q, -1.4308829015667972, 1);
  sqcRYGate(q, -0.8695837729417394, 2);
  sqcRZGate(q, -0.3319424421344551, 2);
  sqcRYGate(q, 0.64410287186102, 3);
  sqcRZGate(q, -1.1995070763522382, 3);
  sqcRYGate(q, 1.4143149415099288, 4);
  sqcRZGate(q, 0.9138638303333795, 4);
  sqcRYGate(q, 0.007660066079827523, 5);
  sqcRZGate(q, 0.5398095625996339, 5);
  sqcRYGate(q, -1.9128571704262072, 6);
  sqcRZGate(q, 3.1408039845215714, 6);
  sqcRYGate(q, 1.5582543347949915, 7);
  sqcRZGate(q, -0.675307820150719, 7);
  sqcRYGate(q, 0.5820991450641122, 8);
  sqcRZGate(q, -0.011874491581287392, 8);
  sqcRYGate(q, 1.542527553837287, 9);
  sqcRZGate(q, 1.2360059258670475, 9);
  sqcRYGate(q, 3.1333485235432605, 10);
  sqcRZGate(q, 3.1075842273582985, 10);
  sqcRYGate(q, 2.4927670066492147, 11);
  sqcRZGate(q, -1.4013674074881117, 11);
  sqcRYGate(q, -1.4691744722894544, 12);
  sqcRZGate(q, -2.07644680947275, 12);
  sqcRYGate(q, 1.6448652880970442, 13);
  sqcRZGate(q, -2.3061619985282076, 13);
  sqcRYGate(q, 2.0277264749045907, 14);
  sqcRZGate(q, -1.342597186860093, 14);
  sqcRYGate(q, 1.5238085727275104, 15);
  sqcRZGate(q, -2.9938765275878647, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.452978067195715, 0);
  sqcRZGate(q, 0.10074489429410162, 0);
  sqcRYGate(q, -2.0473996040719458, 1);
  sqcRZGate(q, 1.188640782905992, 1);
  sqcRYGate(q, -0.3845463770388297, 2);
  sqcRZGate(q, -1.194099432249234, 2);
  sqcRYGate(q, -3.141534907370096, 3);
  sqcRZGate(q, -0.43723721630542334, 3);
  sqcRYGate(q, 0.0033330847880490566, 4);
  sqcRZGate(q, -0.9138317251657525, 4);
  sqcRYGate(q, 3.1399856503118593, 5);
  sqcRZGate(q, -2.2267853014768226, 5);
  sqcRYGate(q, -1.5313743124469905, 6);
  sqcRZGate(q, 0.01037277377967235, 6);
  sqcRYGate(q, -0.1560890794813864, 7);
  sqcRZGate(q, -2.8743240399907313, 7);
  sqcRYGate(q, -1.5614915060132866, 8);
  sqcRZGate(q, -0.0001795067804039069, 8);
  sqcRYGate(q, -2.191449654282067, 9);
  sqcRZGate(q, 1.4168647033226003, 9);
  sqcRYGate(q, -3.111432076456886, 10);
  sqcRZGate(q, 1.856872464280344, 10);
  sqcRYGate(q, 3.137567479275151, 11);
  sqcRZGate(q, -1.4004001432960136, 11);
  sqcRYGate(q, 1.568868658258535, 12);
  sqcRZGate(q, 0.4971739576420325, 12);
  sqcRYGate(q, 3.039238762951762, 13);
  sqcRZGate(q, -3.114905053974197, 13);
  sqcRYGate(q, -1.2273565598671912, 14);
  sqcRZGate(q, -2.831457042076401, 14);
  sqcRYGate(q, -2.288056878575518, 15);
  sqcRZGate(q, -0.9901555462819843, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.330479917861726, 0);
  sqcRZGate(q, -2.8596040423227196, 0);
  sqcRYGate(q, 1.2915972947878718, 1);
  sqcRZGate(q, -0.35318778804273876, 1);
  sqcRYGate(q, -2.5312143862527265, 2);
  sqcRZGate(q, 0.6327917608104532, 2);
  sqcRYGate(q, -1.7224910729107812, 3);
  sqcRZGate(q, 0.7279820116267075, 3);
  sqcRYGate(q, 1.7223018438457318, 4);
  sqcRZGate(q, 2.3636158977261728, 4);
  sqcRYGate(q, 1.574731225797831, 5);
  sqcRZGate(q, -2.1877323199020546, 5);
  sqcRYGate(q, -0.12939569546019403, 6);
  sqcRZGate(q, -1.2010013599206792, 6);
  sqcRYGate(q, 3.1394972120768956, 7);
  sqcRZGate(q, 2.664988196245796, 7);
  sqcRYGate(q, 1.7517872951493165, 8);
  sqcRZGate(q, 2.6309497485622693, 8);
  sqcRYGate(q, 0.001884391668172114, 9);
  sqcRZGate(q, -1.3645351179056622, 9);
  sqcRYGate(q, 0.010705632860187999, 10);
  sqcRZGate(q, 2.9090606025508716, 10);
  sqcRYGate(q, -1.585021518261355, 11);
  sqcRZGate(q, 3.1394503778620177, 11);
  sqcRYGate(q, 3.1036376152234886, 12);
  sqcRZGate(q, 0.8552981610992177, 12);
  sqcRYGate(q, 1.4893677996202421, 13);
  sqcRZGate(q, 1.3543170266288436, 13);
  sqcRYGate(q, -0.03570187349061804, 14);
  sqcRZGate(q, 0.3530474848961275, 14);
  sqcRYGate(q, 3.032032752260981, 15);
  sqcRZGate(q, -1.7060537398931839, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3868772907528024, 0);
  sqcRZGate(q, 2.000591851135253, 0);
  sqcRYGate(q, 0.9293517652226115, 1);
  sqcRZGate(q, 0.0066773858244451026, 1);
  sqcRYGate(q, 1.9139322930439924, 2);
  sqcRZGate(q, -0.8088342338882671, 2);
  sqcRYGate(q, -0.2504742955532402, 3);
  sqcRZGate(q, 2.771123025070728, 3);
  sqcRYGate(q, -0.5903799866927006, 4);
  sqcRZGate(q, 2.010814488765463, 4);
  sqcRYGate(q, -0.009765893397384318, 5);
  sqcRZGate(q, -0.956567251633186, 5);
  sqcRYGate(q, 3.14108764584231, 6);
  sqcRZGate(q, -1.1899622933304608, 6);
  sqcRYGate(q, -1.6871041382617886, 7);
  sqcRZGate(q, -0.005018102653710167, 7);
  sqcRYGate(q, 3.133787738070195, 8);
  sqcRZGate(q, -0.5093836388120615, 8);
  sqcRYGate(q, 1.1099952419566919, 9);
  sqcRZGate(q, -3.111658348969436, 9);
  sqcRYGate(q, 0.13260122141630043, 10);
  sqcRZGate(q, -3.1387693843565123, 10);
  sqcRYGate(q, 0.05202648845678875, 11);
  sqcRZGate(q, 1.1787399563832122, 11);
  sqcRYGate(q, 0.0018475654137921397, 12);
  sqcRZGate(q, -0.4318728165170379, 12);
  sqcRYGate(q, 3.096717703946001, 13);
  sqcRZGate(q, 0.16537415818964685, 13);
  sqcRYGate(q, 1.6208896802073567, 14);
  sqcRZGate(q, -0.07148449655821443, 14);
  sqcRYGate(q, -0.08092515939392886, 15);
  sqcRZGate(q, -0.24389912119372192, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.5082938606638929, 0);
  sqcRZGate(q, 2.02006075057381, 0);
  sqcRYGate(q, 1.3956713583827276, 1);
  sqcRZGate(q, 0.09561124831101343, 1);
  sqcRYGate(q, 3.0884457984173546, 2);
  sqcRZGate(q, -0.5582962382898184, 2);
  sqcRYGate(q, 1.7007125867062636, 3);
  sqcRZGate(q, 3.1403579512533213, 3);
  sqcRYGate(q, -3.1409187939374186, 4);
  sqcRZGate(q, 2.0111275424226047, 4);
  sqcRYGate(q, 1.3002407198917094, 5);
  sqcRZGate(q, 0.01646245143884379, 5);
  sqcRYGate(q, 1.9892039864395261, 6);
  sqcRZGate(q, -0.0253761018816275, 6);
  sqcRYGate(q, 1.586065667357632, 7);
  sqcRZGate(q, 2.841554073935617, 7);
  sqcRYGate(q, -1.9961405084761354, 8);
  sqcRZGate(q, -0.987359550097433, 8);
  sqcRYGate(q, 1.5783458979891654, 9);
  sqcRZGate(q, -1.3063767099161243, 9);
  sqcRYGate(q, 1.5904185746717077, 10);
  sqcRZGate(q, -1.1387983421009686, 10);
  sqcRYGate(q, -3.1407665319489184, 11);
  sqcRZGate(q, 1.1964872348688995, 11);
  sqcRYGate(q, -0.37669794757618474, 12);
  sqcRZGate(q, -0.7514965752555973, 12);
  sqcRYGate(q, 3.0633207322525093, 13);
  sqcRZGate(q, -1.1788787391874271, 13);
  sqcRYGate(q, -2.718251283225439, 14);
  sqcRZGate(q, -0.7856320677521715, 14);
  sqcRYGate(q, 1.3594836838734148, 15);
  sqcRZGate(q, 2.6312397616595455, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.662622732556477, 0);
  sqcRZGate(q, 2.7322843252504874, 0);
  sqcRYGate(q, -1.8094782065847532, 1);
  sqcRZGate(q, 0.3887395476769697, 1);
  sqcRYGate(q, -0.010698504915697543, 2);
  sqcRZGate(q, -0.5848724234288447, 2);
  sqcRYGate(q, 2.055902529262207, 3);
  sqcRZGate(q, -2.2524954434291713, 3);
  sqcRYGate(q, 2.6822484840660374, 4);
  sqcRZGate(q, 0.00037606775343768106, 4);
  sqcRYGate(q, 0.22563012316872655, 5);
  sqcRZGate(q, -0.5922249405662576, 5);
  sqcRYGate(q, -0.12351151867574739, 6);
  sqcRZGate(q, 0.02573886742176956, 6);
  sqcRYGate(q, -0.0037051282761026982, 7);
  sqcRZGate(q, 0.9409222810768236, 7);
  sqcRYGate(q, -0.028926822882730793, 8);
  sqcRZGate(q, 1.2401355578961886, 8);
  sqcRYGate(q, -0.9648543291261271, 9);
  sqcRZGate(q, -0.5667041803872035, 9);
  sqcRYGate(q, 2.9682815676044836, 10);
  sqcRZGate(q, 1.8628803243655288, 10);
  sqcRYGate(q, 0.7762890445950741, 11);
  sqcRZGate(q, -0.06616668154728249, 11);
  sqcRYGate(q, -0.0021712746989628333, 12);
  sqcRZGate(q, 0.24697474010544077, 12);
  sqcRYGate(q, 2.072171628561135, 13);
  sqcRZGate(q, 0.45915764102834444, 13);
  sqcRYGate(q, -0.0019438625389893716, 14);
  sqcRZGate(q, -2.384471992817836, 14);
  sqcRYGate(q, -2.925350932538296, 15);
  sqcRZGate(q, 2.0032272055826237, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.9910581771152263, 0);
  sqcRZGate(q, 2.4418807195955536, 0);
  sqcRYGate(q, 2.1823495073579124, 1);
  sqcRZGate(q, 0.7153739462754816, 1);
  sqcRYGate(q, 1.2644105217132349, 2);
  sqcRZGate(q, 1.2469906498240155, 2);
  sqcRYGate(q, -0.016945430399820917, 3);
  sqcRZGate(q, -2.623154623826833, 3);
  sqcRYGate(q, -1.5676367551605959, 4);
  sqcRZGate(q, -0.01809410582413662, 4);
  sqcRYGate(q, -3.132886412317585, 5);
  sqcRZGate(q, -0.5810992688047647, 5);
  sqcRYGate(q, -0.8051506191927336, 6);
  sqcRZGate(q, 3.1414128381342192, 6);
  sqcRYGate(q, 0.03228975413934698, 7);
  sqcRZGate(q, -0.6426818639580079, 7);
  sqcRYGate(q, -3.135213847547264, 8);
  sqcRZGate(q, -3.0400817111133307, 8);
  sqcRYGate(q, 0.0016456108531501812, 9);
  sqcRZGate(q, 0.8933279449488566, 9);
  sqcRYGate(q, 3.129781415970596, 10);
  sqcRZGate(q, -0.13720116698697815, 10);
  sqcRYGate(q, 0.02604977748453562, 11);
  sqcRZGate(q, 0.20131090095050896, 11);
  sqcRYGate(q, 3.100225664263905, 12);
  sqcRZGate(q, 2.2643231422946304, 12);
  sqcRYGate(q, 2.0364506072377933, 13);
  sqcRZGate(q, 1.9656069803265206, 13);
  sqcRYGate(q, 2.459078345562931, 14);
  sqcRZGate(q, -0.5424382401193819, 14);
  sqcRYGate(q, -2.2602272466464175, 15);
  sqcRZGate(q, -0.7722161337932586, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.308406079352075, 0);
  sqcRZGate(q, -2.406482566947473, 0);
  sqcRYGate(q, 1.8396184919622698, 1);
  sqcRZGate(q, -0.7022190846307423, 1);
  sqcRYGate(q, 1.1855700211679712, 2);
  sqcRZGate(q, -0.9286015274271162, 2);
  sqcRYGate(q, 0.003457924913893358, 3);
  sqcRZGate(q, -1.4063856372508936, 3);
  sqcRYGate(q, -0.02541086431229278, 4);
  sqcRZGate(q, -3.1247972158347492, 4);
  sqcRYGate(q, -1.595395809197874, 5);
  sqcRZGate(q, 0.12049993376326817, 5);
  sqcRYGate(q, 2.002742448764019, 6);
  sqcRZGate(q, -3.139332068710677, 6);
  sqcRYGate(q, 0.5463014798326249, 7);
  sqcRZGate(q, -3.1408729799695783, 7);
  sqcRYGate(q, 0.1615437168300751, 8);
  sqcRZGate(q, 1.4579941987229148, 8);
  sqcRYGate(q, -1.9562032789871253, 9);
  sqcRZGate(q, -0.7163325464255057, 9);
  sqcRYGate(q, -1.6399640973510667, 10);
  sqcRZGate(q, -2.975944429327716, 10);
  sqcRYGate(q, -0.06774082765918896, 11);
  sqcRZGate(q, -0.08606651177765556, 11);
  sqcRYGate(q, -3.1195978099816593, 12);
  sqcRZGate(q, -1.7934411602886087, 12);
  sqcRYGate(q, 1.2988742653286243, 13);
  sqcRZGate(q, -0.6580307971173348, 13);
  sqcRYGate(q, 0.2962810091858161, 14);
  sqcRZGate(q, 2.9293927495380707, 14);
  sqcRYGate(q, -2.4386618926891224, 15);
  sqcRZGate(q, -0.9357589599029538, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.565953087209141, 0);
  sqcRZGate(q, -1.6213875923098342, 0);
  sqcRYGate(q, 3.0192565779356704, 1);
  sqcRZGate(q, -2.2694488225956024, 1);
  sqcRYGate(q, -0.001481582349888541, 2);
  sqcRZGate(q, 1.7693286336853022, 2);
  sqcRYGate(q, 1.639996423792736, 3);
  sqcRZGate(q, 2.6270024907465976, 3);
  sqcRYGate(q, -2.3106165091661683, 4);
  sqcRZGate(q, -0.0016817981968584304, 4);
  sqcRYGate(q, -3.039864588734129, 5);
  sqcRZGate(q, -3.0182313022662375, 5);
  sqcRYGate(q, -1.4811448139967824, 6);
  sqcRZGate(q, 2.321977580266866, 6);
  sqcRYGate(q, -1.1007984473391685, 7);
  sqcRZGate(q, -3.141161702415141, 7);
  sqcRYGate(q, 3.1415398833877703, 8);
  sqcRZGate(q, 0.6907664254135671, 8);
  sqcRYGate(q, 0.0015528283206615548, 9);
  sqcRZGate(q, 2.688611502013344, 9);
  sqcRYGate(q, 3.0522511167686437, 10);
  sqcRZGate(q, 2.832738437671755, 10);
  sqcRYGate(q, 1.557910732277529, 11);
  sqcRZGate(q, 0.03245496144689852, 11);
  sqcRYGate(q, -0.5568863587441494, 12);
  sqcRZGate(q, 2.344559180653414, 12);
  sqcRYGate(q, -1.2819553416578193, 13);
  sqcRZGate(q, -0.6996585364283172, 13);
  sqcRYGate(q, 0.0735784612686956, 14);
  sqcRZGate(q, 2.194714988416527, 14);
  sqcRYGate(q, 3.0956322002151295, 15);
  sqcRZGate(q, -0.3972915112633124, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.68500496542989, 0);
  sqcRZGate(q, -1.4441385624230867, 0);
  sqcRYGate(q, 1.8816451900767222, 1);
  sqcRZGate(q, -0.6019257366709168, 1);
  sqcRYGate(q, 0.0007156937959402754, 2);
  sqcRZGate(q, 2.2943492423133973, 2);
  sqcRYGate(q, 0.00012646975281960238, 3);
  sqcRZGate(q, 0.5175955353412036, 3);
  sqcRYGate(q, 0.7211546073858424, 4);
  sqcRZGate(q, -0.4029307512106506, 4);
  sqcRYGate(q, -0.4452658365590639, 5);
  sqcRZGate(q, 0.0067679104457338815, 5);
  sqcRYGate(q, -3.1410878757060927, 6);
  sqcRZGate(q, 2.321305914296314, 6);
  sqcRYGate(q, -1.5342581125203898, 7);
  sqcRZGate(q, -0.005295149042066073, 7);
  sqcRYGate(q, 0.001074526289377431, 8);
  sqcRZGate(q, -2.5175725639373754, 8);
  sqcRYGate(q, 1.8866032049320989, 9);
  sqcRZGate(q, -0.10804161941025203, 9);
  sqcRYGate(q, -3.128986926716533, 10);
  sqcRZGate(q, 2.8221877819249532, 10);
  sqcRYGate(q, -2.9206770540301017, 11);
  sqcRZGate(q, -0.628773321641388, 11);
  sqcRYGate(q, -0.09948303715528795, 12);
  sqcRZGate(q, -2.9383326408079067, 12);
  sqcRYGate(q, -3.140883078638433, 13);
  sqcRZGate(q, 0.7417102863865628, 13);
  sqcRYGate(q, -1.0551939080201849, 14);
  sqcRZGate(q, -2.734828653266041, 14);
  sqcRYGate(q, 2.346870413684149, 15);
  sqcRZGate(q, 0.29048398592842245, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.99664182721787, 0);
  sqcRZGate(q, -2.7991160256336807, 0);
  sqcRYGate(q, -0.011491430079393792, 1);
  sqcRZGate(q, 2.4429897228057413, 1);
  sqcRYGate(q, 2.1812880518750246, 2);
  sqcRZGate(q, -3.082728290770182, 2);
  sqcRYGate(q, -1.7642707780602809, 3);
  sqcRZGate(q, -3.133450054051403, 3);
  sqcRYGate(q, 0.00472314372910887, 4);
  sqcRZGate(q, -2.7380631119601624, 4);
  sqcRYGate(q, -2.3184197038638685, 5);
  sqcRZGate(q, 0.009677370026304645, 5);
  sqcRYGate(q, 0.638318289852216, 6);
  sqcRZGate(q, 0.0008758704586080755, 6);
  sqcRYGate(q, 1.066419040661359, 7);
  sqcRZGate(q, 2.775685101576354, 7);
  sqcRYGate(q, -2.9487889537243555, 8);
  sqcRZGate(q, -3.132942988217772, 8);
  sqcRYGate(q, -1.9805840503496155, 9);
  sqcRZGate(q, 0.009915289185303475, 9);
  sqcRYGate(q, -1.2438609135145118, 10);
  sqcRZGate(q, 0.01015842540105183, 10);
  sqcRYGate(q, -3.0532675597069288, 11);
  sqcRZGate(q, -0.6817141347190229, 11);
  sqcRYGate(q, 3.057201994527588, 12);
  sqcRZGate(q, -0.7322623112353535, 12);
  sqcRYGate(q, 2.972031999282049, 13);
  sqcRZGate(q, -1.8003803995970082, 13);
  sqcRYGate(q, -0.02953308236099502, 14);
  sqcRZGate(q, -0.32260424765453943, 14);
  sqcRYGate(q, 1.3532961296680455, 15);
  sqcRZGate(q, -0.8471248283473471, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.8055602674197182, 0);
  sqcRZGate(q, 2.264752900964564, 0);
  sqcRYGate(q, -2.0064158402335255, 1);
  sqcRZGate(q, -2.349431706531615, 1);
  sqcRYGate(q, -3.095652534105884, 2);
  sqcRZGate(q, 1.633926388444982, 2);
  sqcRYGate(q, 1.7053581802769253, 3);
  sqcRZGate(q, -1.570097577021195, 3);
  sqcRYGate(q, 0.788892654744917, 4);
  sqcRZGate(q, -1.5709327476522512, 4);
  sqcRYGate(q, -2.34111225034369, 5);
  sqcRZGate(q, -1.5921282471426808, 5);
  sqcRYGate(q, 0.4770272726502658, 6);
  sqcRZGate(q, 1.5705977539466334, 6);
  sqcRYGate(q, -0.0016385218229419962, 7);
  sqcRZGate(q, 1.9392758258817457, 7);
  sqcRYGate(q, 0.31786185333345607, 8);
  sqcRZGate(q, 1.5715133890671702, 8);
  sqcRYGate(q, -0.1042014545557537, 9);
  sqcRZGate(q, -1.5807921187164744, 9);
  sqcRYGate(q, 0.04784882188113346, 10);
  sqcRZGate(q, -1.5798155996265404, 10);
  sqcRYGate(q, -0.43584542148014993, 11);
  sqcRZGate(q, 1.5685599595743112, 11);
  sqcRYGate(q, 0.31171460068226864, 12);
  sqcRZGate(q, 1.788480968183264, 12);
  sqcRYGate(q, -3.1116156906386236, 13);
  sqcRZGate(q, -0.3395431119596474, 13);
  sqcRYGate(q, 1.9565643816452296, 14);
  sqcRZGate(q, 0.5314888009167795, 14);
  sqcRYGate(q, 0.0009501607580315411, 15);
  sqcRZGate(q, -0.6963003607239688, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.1590746780292086, 0);
  sqcRZGate(q, 0.43471448010295816, 0);
  sqcRYGate(q, -1.5718713625199534, 1);
  sqcRZGate(q, -3.020972195384377, 1);
  sqcRYGate(q, 1.570358610573644, 2);
  sqcRZGate(q, 2.9923239362702057, 2);
  sqcRYGate(q, 1.562926278889079, 3);
  sqcRZGate(q, 1.547417220441952, 3);
  sqcRYGate(q, -1.570710304001648, 4);
  sqcRZGate(q, -0.06764083509627601, 4);
  sqcRYGate(q, 1.548993511786604, 5);
  sqcRZGate(q, 2.336048321870377, 5);
  sqcRYGate(q, -1.5708399557355373, 6);
  sqcRZGate(q, 2.754753400435961, 6);
  sqcRYGate(q, -1.5746995378303863, 7);
  sqcRZGate(q, 1.6575929657805233, 7);
  sqcRYGate(q, -1.57284967900826, 8);
  sqcRZGate(q, -1.9123793962635602, 8);
  sqcRYGate(q, -1.571804608986753, 9);
  sqcRZGate(q, 0.6634414301184893, 9);
  sqcRYGate(q, -1.5694245570057033, 10);
  sqcRZGate(q, -1.3555325624637753, 10);
  sqcRYGate(q, 1.5755720871591716, 11);
  sqcRZGate(q, -3.0904352584759915, 11);
  sqcRYGate(q, 1.5677105016679969, 12);
  sqcRZGate(q, -2.272223799926513, 12);
  sqcRYGate(q, -1.6132517667130735, 13);
  sqcRZGate(q, -1.390964659505328, 13);
  sqcRYGate(q, -0.006052384487905904, 14);
  sqcRZGate(q, 2.4527092873324867, 14);
  sqcRYGate(q, 1.5955502003060342, 15);
  sqcRZGate(q, 0.6243068344290493, 15);

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
