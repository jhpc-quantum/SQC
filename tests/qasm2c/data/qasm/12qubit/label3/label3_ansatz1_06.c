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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.1800406260124312, 0);
  sqcRZGate(q, 0.6341253547747687, 0);
  sqcRYGate(q, -1.775305985592329, 1);
  sqcRZGate(q, 2.795988231511291, 1);
  sqcRYGate(q, -0.380189097291665, 2);
  sqcRZGate(q, -2.6022004193098427, 2);
  sqcRYGate(q, 6.243934454031163e-05, 3);
  sqcRZGate(q, 0.42237436886340707, 3);
  sqcRYGate(q, 1.5712908526702685, 4);
  sqcRZGate(q, -3.1226621669902985, 4);
  sqcRYGate(q, 1.570514158349435, 5);
  sqcRZGate(q, 0.9305099278412472, 5);
  sqcRYGate(q, -1.4757234041178282, 6);
  sqcRZGate(q, -2.7373397631485172, 6);
  sqcRYGate(q, -1.573896369982553, 7);
  sqcRZGate(q, 3.104736825145199, 7);
  sqcRYGate(q, -2.0751978772199764, 8);
  sqcRZGate(q, -0.05892510581641108, 8);
  sqcRYGate(q, -1.3269782525088163, 9);
  sqcRZGate(q, 0.07993960216547441, 9);
  sqcRYGate(q, 2.0007952819350905, 10);
  sqcRZGate(q, -3.0437381335862734, 10);
  sqcRYGate(q, -3.0314139985294624, 11);
  sqcRZGate(q, -3.053236559172747, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.2922177737088603, 0);
  sqcRZGate(q, -2.9275497212823205, 0);
  sqcRYGate(q, -0.9699691211124177, 1);
  sqcRZGate(q, -1.7777163134669332, 1);
  sqcRYGate(q, 2.975569693840765, 2);
  sqcRZGate(q, -2.310369487983364, 2);
  sqcRYGate(q, 1.570824721390359, 3);
  sqcRZGate(q, -3.1113496192821173, 3);
  sqcRYGate(q, -1.569712392667453, 4);
  sqcRZGate(q, 1.255085646831457, 4);
  sqcRYGate(q, -1.5698804237095825, 5);
  sqcRZGate(q, -0.20766934155449152, 5);
  sqcRYGate(q, -3.1400995151542803, 6);
  sqcRZGate(q, -2.840463045901276, 6);
  sqcRYGate(q, -1.6562508877633375, 7);
  sqcRZGate(q, 3.069685793494873, 7);
  sqcRYGate(q, -1.6493720844131285, 8);
  sqcRZGate(q, -0.11683173626103648, 8);
  sqcRYGate(q, 1.6420152636616336, 9);
  sqcRZGate(q, -2.9701647798235506, 9);
  sqcRYGate(q, 1.508951934737122, 10);
  sqcRZGate(q, 0.05340965558661681, 10);
  sqcRYGate(q, -2.8679638817830546, 11);
  sqcRZGate(q, -0.4743552176130424, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.860634242191445, 0);
  sqcRZGate(q, 3.0746791233090014, 0);
  sqcRYGate(q, 0.6334007270401527, 1);
  sqcRZGate(q, -1.2443640985165862, 1);
  sqcRYGate(q, 1.5706106488611413, 2);
  sqcRZGate(q, 1.2972857328717502, 2);
  sqcRYGate(q, 0.39295717952976017, 3);
  sqcRZGate(q, -0.02748992072744228, 3);
  sqcRYGate(q, 1.3686965840415133, 4);
  sqcRZGate(q, 2.5658267511510133, 4);
  sqcRYGate(q, -3.141166223410794, 5);
  sqcRZGate(q, -1.5617930818176449, 5);
  sqcRYGate(q, 3.1415665733936264, 6);
  sqcRZGate(q, 3.020307921115278, 6);
  sqcRYGate(q, -1.398729556692507, 7);
  sqcRZGate(q, 2.9395414332204632, 7);
  sqcRYGate(q, -2.809819340720347, 8);
  sqcRZGate(q, -0.09727413802319605, 8);
  sqcRYGate(q, -1.3340950968604077, 9);
  sqcRZGate(q, -3.095352131614381, 9);
  sqcRYGate(q, 2.177296615821092, 10);
  sqcRZGate(q, -0.253602543721052, 10);
  sqcRYGate(q, 0.04080302372366518, 11);
  sqcRZGate(q, 3.0342203467911744, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.620836113528804, 0);
  sqcRZGate(q, 2.152460057409812, 0);
  sqcRYGate(q, -1.5709950765841807, 1);
  sqcRZGate(q, -0.05007896139440682, 1);
  sqcRYGate(q, -0.04181338350692132, 2);
  sqcRZGate(q, -1.1899644128118574, 2);
  sqcRYGate(q, -2.8898529575661205, 3);
  sqcRZGate(q, -1.5635588600566184, 3);
  sqcRYGate(q, -3.1415544470545878, 4);
  sqcRZGate(q, -0.5190994451475592, 4);
  sqcRYGate(q, 3.141435211430029, 5);
  sqcRZGate(q, 1.5670753894281786, 5);
  sqcRYGate(q, -1.57054653414228, 6);
  sqcRZGate(q, 1.5680889096310535, 6);
  sqcRYGate(q, 1.6796124968739963, 7);
  sqcRZGate(q, 0.0035024887423222855, 7);
  sqcRYGate(q, -1.7090444862370715, 8);
  sqcRZGate(q, -2.834921854908245, 8);
  sqcRYGate(q, 1.9123117537404575, 9);
  sqcRZGate(q, 0.029214953052745685, 9);
  sqcRYGate(q, -0.11358219102438866, 10);
  sqcRZGate(q, 0.24259296740018585, 10);
  sqcRYGate(q, 0.009891076488314885, 11);
  sqcRZGate(q, -1.28176557002819, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5710621337111952, 0);
  sqcRZGate(q, -1.2370479094847573, 0);
  sqcRYGate(q, 1.305861231340021, 1);
  sqcRZGate(q, -2.03872230060583, 1);
  sqcRYGate(q, 0.39085535720713604, 2);
  sqcRZGate(q, -1.7461575324344696, 2);
  sqcRYGate(q, 1.5916580976758317, 3);
  sqcRZGate(q, 1.2403644529757212, 3);
  sqcRYGate(q, -1.6998504491482411, 4);
  sqcRZGate(q, 0.22526094305993127, 4);
  sqcRYGate(q, -3.1413921812432926, 5);
  sqcRZGate(q, -0.23106530728636354, 5);
  sqcRYGate(q, -1.5709282120613743, 6);
  sqcRZGate(q, -0.009392949127287055, 6);
  sqcRYGate(q, 1.5709484370403937, 7);
  sqcRZGate(q, -3.119941581367947, 7);
  sqcRYGate(q, 1.4449023491426496, 8);
  sqcRZGate(q, 3.1061436930242565, 8);
  sqcRYGate(q, 1.3646448266545104, 9);
  sqcRZGate(q, -1.1064907145029075, 9);
  sqcRYGate(q, 1.6338830031498732, 10);
  sqcRZGate(q, 1.8840331846099616, 10);
  sqcRYGate(q, -3.1381021041020993, 11);
  sqcRZGate(q, -1.871256527873653, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3476011108851171, 0);
  sqcRZGate(q, 2.061056179335342, 0);
  sqcRYGate(q, -1.4669363005668878, 1);
  sqcRZGate(q, -0.23690133489512807, 1);
  sqcRYGate(q, 1.580435013863097, 2);
  sqcRZGate(q, -2.3429598678438595, 2);
  sqcRYGate(q, 1.3495264972081928, 3);
  sqcRZGate(q, 3.07989717047652, 3);
  sqcRYGate(q, 1.5693503719873256, 4);
  sqcRZGate(q, -3.125989202076514, 4);
  sqcRYGate(q, -1.932100405709649, 5);
  sqcRZGate(q, -0.05479024613041972, 5);
  sqcRYGate(q, -0.054429631230106246, 6);
  sqcRZGate(q, -2.594160485495538, 6);
  sqcRYGate(q, -1.571461612356658, 7);
  sqcRZGate(q, 3.09005758199674, 7);
  sqcRYGate(q, -1.5707058989629668, 8);
  sqcRZGate(q, 3.1403708484555106, 8);
  sqcRYGate(q, 1.579412837058923, 9);
  sqcRZGate(q, 1.5566625879057474, 9);
  sqcRYGate(q, 1.765574757567713, 10);
  sqcRZGate(q, 0.9111710881902524, 10);
  sqcRYGate(q, -1.193447959010733, 11);
  sqcRZGate(q, 3.1335748052917687, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.00019935398967539094, 0);
  sqcRZGate(q, -1.5423438897208817, 0);
  sqcRYGate(q, 1.6863926253587354, 1);
  sqcRZGate(q, 1.5382207849158303, 1);
  sqcRYGate(q, 1.792430174638846, 2);
  sqcRZGate(q, -1.8842386279485435, 2);
  sqcRYGate(q, 1.5705134154092546, 3);
  sqcRZGate(q, -3.1396530398393865, 3);
  sqcRYGate(q, -2.1845997112254496, 4);
  sqcRZGate(q, -0.16361979845070973, 4);
  sqcRYGate(q, 0.6833289799608392, 5);
  sqcRZGate(q, 0.05750466153243874, 5);
  sqcRYGate(q, -3.1359932554340473, 6);
  sqcRZGate(q, 0.547844535331589, 6);
  sqcRYGate(q, 3.124690684296468, 7);
  sqcRZGate(q, -0.11317746453295553, 7);
  sqcRYGate(q, 1.5708497594060384, 8);
  sqcRZGate(q, 3.1346796924325373, 8);
  sqcRYGate(q, 1.5697452553843727, 9);
  sqcRZGate(q, 1.574877371489304, 9);
  sqcRYGate(q, 0.13308481554987595, 10);
  sqcRZGate(q, 0.06826596666902689, 10);
  sqcRYGate(q, 1.634478982379344, 11);
  sqcRZGate(q, -0.00013473824033738424, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.6255008013907046, 0);
  sqcRZGate(q, -0.6960130629490882, 0);
  sqcRYGate(q, -2.9577566255254326, 1);
  sqcRZGate(q, -0.017007857775726443, 1);
  sqcRYGate(q, -1.5708071522368146, 2);
  sqcRZGate(q, 0.02875802221937995, 2);
  sqcRYGate(q, -0.08165337549843876, 3);
  sqcRZGate(q, -3.1128618088094706, 3);
  sqcRYGate(q, -0.006604646384523322, 4);
  sqcRZGate(q, 0.16345158686202052, 4);
  sqcRYGate(q, -3.086233012666297, 5);
  sqcRZGate(q, 0.057194811292330734, 5);
  sqcRYGate(q, -3.0677432660816977, 6);
  sqcRZGate(q, 2.05780185452695, 6);
  sqcRYGate(q, -0.04277298940891683, 7);
  sqcRZGate(q, 0.061522828793767914, 7);
  sqcRYGate(q, 0.17383475045645108, 8);
  sqcRZGate(q, 1.5781670137148958, 8);
  sqcRYGate(q, 1.5716749823830847, 9);
  sqcRZGate(q, -2.939509503509846, 9);
  sqcRYGate(q, 1.5708359560447822, 10);
  sqcRZGate(q, -1.5674851865050383, 10);
  sqcRYGate(q, -1.502046325047795, 11);
  sqcRZGate(q, 0.0019182403218120925, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.141294135143103, 0);
  sqcRZGate(q, 1.4737606942046508, 0);
  sqcRYGate(q, -1.570793508597583, 1);
  sqcRZGate(q, 0.012738452049244823, 1);
  sqcRYGate(q, -1.538027295854489, 2);
  sqcRZGate(q, -3.1393842067371382, 2);
  sqcRYGate(q, -3.123002889381145, 3);
  sqcRZGate(q, -3.098602914255522, 3);
  sqcRYGate(q, 0.9329904159149276, 4);
  sqcRZGate(q, 0.04549287511682554, 4);
  sqcRYGate(q, 0.6888274024074059, 5);
  sqcRZGate(q, -0.05135071555639178, 5);
  sqcRYGate(q, -3.138373445090466, 6);
  sqcRZGate(q, -1.1114181375644252, 6);
  sqcRYGate(q, -1.837489519553766, 7);
  sqcRZGate(q, 1.5602362184031846, 7);
  sqcRYGate(q, -1.5706370841899346, 8);
  sqcRZGate(q, 2.5159422156499502, 8);
  sqcRYGate(q, 3.13883041925856, 9);
  sqcRZGate(q, 1.7880471382744565, 9);
  sqcRYGate(q, 1.5707033677114814, 10);
  sqcRZGate(q, -3.1210654743476565, 10);
  sqcRYGate(q, -1.5714025039245634, 11);
  sqcRZGate(q, 0.9597787502019005, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5806199608013523, 0);
  sqcRZGate(q, 0.023210126020213554, 0);
  sqcRYGate(q, -2.5019336359339635, 1);
  sqcRZGate(q, 1.5739373172610458, 1);
  sqcRYGate(q, 1.0991651410706356, 2);
  sqcRZGate(q, -1.5741879312924016, 2);
  sqcRYGate(q, -2.506793658339519, 3);
  sqcRZGate(q, 1.5727112666919316, 3);
  sqcRYGate(q, -2.7414199971032893, 4);
  sqcRZGate(q, -1.5180553712488687, 4);
  sqcRYGate(q, -2.5128471650616313, 5);
  sqcRZGate(q, -1.5714727838207943, 5);
  sqcRYGate(q, -0.9493229750110208, 6);
  sqcRZGate(q, 1.5866131971696118, 6);
  sqcRYGate(q, 0.9613668804889315, 7);
  sqcRZGate(q, -1.5591103316611838, 7);
  sqcRYGate(q, -1.587153207315695, 8);
  sqcRZGate(q, -3.139089165717242, 8);
  sqcRYGate(q, 0.6103794120092214, 9);
  sqcRZGate(q, 1.5635368722475333, 9);
  sqcRYGate(q, 2.195167930073775, 10);
  sqcRZGate(q, 1.585415653656073, 10);
  sqcRYGate(q, 1.5797250080543352, 11);
  sqcRZGate(q, 0.004734041297756281, 11);

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
