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

  sqcRYGate(q, -0.34948955834487183, 0);
  sqcRYGate(q, 0.03978702789820687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1636891381403747, 0);
  sqcRYGate(q, -1.0464112684773375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01892592388296575, 1);
  sqcRYGate(q, -2.5605119218631747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2102594814933654, 1);
  sqcRYGate(q, 0.21696859370411745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6892549442446668, 2);
  sqcRYGate(q, 1.9915071669391018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1142172597029565, 2);
  sqcRYGate(q, -1.227180627034845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5194955153208143, 3);
  sqcRYGate(q, -1.0423250565158415, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.018576430023013, 3);
  sqcRYGate(q, 1.8263422437157963, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9809675913256246, 4);
  sqcRYGate(q, 2.987262865618148, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4174963864359986, 4);
  sqcRYGate(q, -0.7408336867075674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.573328556356842, 5);
  sqcRYGate(q, 0.36256143132273255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6193822330108034, 5);
  sqcRYGate(q, 0.6723918993985207, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8817894496085936, 6);
  sqcRYGate(q, -1.4582447575404833, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1243092566723396, 6);
  sqcRYGate(q, -2.6976040334023987, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8747058331111649, 0);
  sqcRYGate(q, 2.4523815720798288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7050420748865207, 0);
  sqcRYGate(q, -1.5799988209563594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.020760229814841907, 1);
  sqcRYGate(q, 0.8216910570583584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.327857306310977, 1);
  sqcRYGate(q, -1.2428857266830606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4151788592253887, 2);
  sqcRYGate(q, 0.9707536296700077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9264567133151258, 2);
  sqcRYGate(q, -0.7611855407547568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8262628532380314, 3);
  sqcRYGate(q, 0.13677100645072215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4008941344518826, 3);
  sqcRYGate(q, -1.1003768975541985, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3363204054178124, 4);
  sqcRYGate(q, -1.7342348777356307, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44002514788866876, 4);
  sqcRYGate(q, 1.3015671714661248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.37675183665082934, 5);
  sqcRYGate(q, 0.7289824613878964, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0090262432356623, 5);
  sqcRYGate(q, 0.49740833886647173, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.534928383784065, 6);
  sqcRYGate(q, -2.358772152869064, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0932281431432653, 6);
  sqcRYGate(q, -1.8008205068923577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1276148814392073, 0);
  sqcRYGate(q, 0.057010095859928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.603850167478822, 0);
  sqcRYGate(q, -2.6906911114761263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.802877126541392, 1);
  sqcRYGate(q, -2.3415181003265717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.002432120508664148, 1);
  sqcRYGate(q, -2.1092916237850323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2328343303734437, 2);
  sqcRYGate(q, 2.3842738362521065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42194735537727396, 2);
  sqcRYGate(q, -1.5680085191360011, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7442178807969135, 3);
  sqcRYGate(q, 1.7646468962595059, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6497843864179957, 3);
  sqcRYGate(q, 1.2401097832184957, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3999662614013633, 4);
  sqcRYGate(q, -0.8545147015778709, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5974608444732468, 4);
  sqcRYGate(q, -0.14672792278577262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2651009379842146, 5);
  sqcRYGate(q, -2.8436670621043114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9308274022472638, 5);
  sqcRYGate(q, -1.9909383312977627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6278806872953334, 6);
  sqcRYGate(q, -0.6602526903573969, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.521951616016212, 6);
  sqcRYGate(q, 1.4163842255368344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.194604730690858, 0);
  sqcRYGate(q, 2.250148182597409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0330411067331733, 0);
  sqcRYGate(q, 0.11992679230308245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.311084640613745, 1);
  sqcRYGate(q, -1.7264225740117884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18558106624422205, 1);
  sqcRYGate(q, -2.3543184008346247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1724282214768396, 2);
  sqcRYGate(q, 1.2902104162920698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6074068903825408, 2);
  sqcRYGate(q, -0.4514411820820765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9604946810134587, 3);
  sqcRYGate(q, -1.324909813448634, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.260603725002868, 3);
  sqcRYGate(q, 2.709695184889405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2296930246907502, 4);
  sqcRYGate(q, 0.3798740119865479, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.903909885392643, 4);
  sqcRYGate(q, 3.044258209654379, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1587517464864305, 5);
  sqcRYGate(q, 2.154452241639671, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.572036556742401, 5);
  sqcRYGate(q, -1.290366425457301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.291844786416489, 6);
  sqcRYGate(q, -2.1596845930835675, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5683468142334105, 6);
  sqcRYGate(q, -0.10168845183146676, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4441211059225636, 0);
  sqcRYGate(q, 1.9570706375867182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4348631605719704, 0);
  sqcRYGate(q, -2.7318355478824343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.506770716953315, 1);
  sqcRYGate(q, -1.1200860510863047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2413191272105477, 1);
  sqcRYGate(q, -1.1144375230733894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9149262648254739, 2);
  sqcRYGate(q, -1.9034577824711407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5588072164165846, 2);
  sqcRYGate(q, 1.3488732475650087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16868476572648722, 3);
  sqcRYGate(q, 1.9699722880565789, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.049880959660858, 3);
  sqcRYGate(q, -2.2792205187150394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.137689919469251, 4);
  sqcRYGate(q, -2.882382388651379, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.577241593354443, 4);
  sqcRYGate(q, 1.1061465561362516, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1660441164929018, 5);
  sqcRYGate(q, 1.3930872006105546, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6156504214187668, 5);
  sqcRYGate(q, -1.4902746434425904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.029485437888065912, 6);
  sqcRYGate(q, 2.0662753339894424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6445004335268568, 6);
  sqcRYGate(q, 2.807376754911351, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7747665043896861, 0);
  sqcRYGate(q, -2.705256433832205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8247167403679465, 0);
  sqcRYGate(q, -2.4424421003305254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6622763195682486, 1);
  sqcRYGate(q, 1.449041446338875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8048090177861125, 1);
  sqcRYGate(q, -0.21340847386979167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5001000530940658, 2);
  sqcRYGate(q, -1.1636807516682761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5179597614501743, 2);
  sqcRYGate(q, -2.1386371982479564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25051660287978184, 3);
  sqcRYGate(q, 0.7330019789097967, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7441550498042417, 3);
  sqcRYGate(q, 0.6122349103315701, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9878271784749453, 4);
  sqcRYGate(q, -1.8528829156390967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2253759494998013, 4);
  sqcRYGate(q, 1.4500919968178303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.034770392504644, 5);
  sqcRYGate(q, 2.7115547475745436, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.859795671389131, 5);
  sqcRYGate(q, -2.916759441358039, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3762127261772314, 6);
  sqcRYGate(q, 0.12330810692952471, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.418662556149199, 6);
  sqcRYGate(q, 2.8176786394435176, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2281038766646866, 0);
  sqcRYGate(q, -2.1869347495531892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7357167914428187, 0);
  sqcRYGate(q, -1.0931078258722042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5573449021106045, 1);
  sqcRYGate(q, 2.489004749464827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28931102133131165, 1);
  sqcRYGate(q, 0.027539712581007517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0882257962274062, 2);
  sqcRYGate(q, 2.8503560655790934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7845709332490387, 2);
  sqcRYGate(q, -2.614117694132714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6570425562757989, 3);
  sqcRYGate(q, -0.7206812697688976, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.602458684977364, 3);
  sqcRYGate(q, -0.6316571681197285, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2464017794629039, 4);
  sqcRYGate(q, 1.8145226891294222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3819941830204248, 4);
  sqcRYGate(q, -0.1727450856437528, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.27307309789612993, 5);
  sqcRYGate(q, 0.8196685337238083, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.36810499249353, 5);
  sqcRYGate(q, -0.1774634950479248, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0659052918078165, 6);
  sqcRYGate(q, -1.291038228811529, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.943586880188402, 6);
  sqcRYGate(q, -1.0155336987155317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3757694612983804, 0);
  sqcRYGate(q, -0.7635761075076797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9420418111199389, 0);
  sqcRYGate(q, 3.0039916553370754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1057309327189202, 1);
  sqcRYGate(q, -3.1023212723200606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.004422996247593713, 1);
  sqcRYGate(q, -2.082008602159574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3406472485299785, 2);
  sqcRYGate(q, -2.33825909299706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3637405050417577, 2);
  sqcRYGate(q, 0.5678319644840545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9511584548834024, 3);
  sqcRYGate(q, 1.6760044019226845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9653980385217478, 3);
  sqcRYGate(q, -0.9012269342665126, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.120200338496143, 4);
  sqcRYGate(q, -1.5546079859542514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.418421690415236, 4);
  sqcRYGate(q, 2.806300221340042, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7639742447013733, 5);
  sqcRYGate(q, 2.7676310897044445, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9655431117786035, 5);
  sqcRYGate(q, 0.8189360587323593, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5628175982587433, 6);
  sqcRYGate(q, 0.9918274943794065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7151970830892446, 6);
  sqcRYGate(q, 1.1628781284267076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.146620106079364, 0);
  sqcRYGate(q, -1.246227807529127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8786215152495163, 0);
  sqcRYGate(q, 0.25801640092706624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.772965095888075, 1);
  sqcRYGate(q, 3.0214755981355514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6005425691874908, 1);
  sqcRYGate(q, -1.2824152441324796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.847085783353764, 2);
  sqcRYGate(q, 2.1011629231237046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0003466869388022431, 2);
  sqcRYGate(q, -2.6930945967223114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.099998250276183, 3);
  sqcRYGate(q, -0.6676291155340923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1409983663956313, 3);
  sqcRYGate(q, -1.710514654877204, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.14327738843355586, 4);
  sqcRYGate(q, -2.951077173398281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.673173504549353, 4);
  sqcRYGate(q, -1.1132966598587928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2489854116774532, 5);
  sqcRYGate(q, 2.487621362800711, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4667950608729752, 5);
  sqcRYGate(q, -1.3820200740886937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.385475971082065, 6);
  sqcRYGate(q, -1.618674187283161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5277531944600833, 6);
  sqcRYGate(q, 1.1050345501603926, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9049207732885733, 0);
  sqcRYGate(q, 1.1369525757016452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2188752604366027, 0);
  sqcRYGate(q, -1.5217247119319732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8917782062384757, 1);
  sqcRYGate(q, -0.39277850978090917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9381781840546495, 1);
  sqcRYGate(q, 1.3160487850798959, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1171082902042584, 2);
  sqcRYGate(q, 2.028464460639137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7124837456566333, 2);
  sqcRYGate(q, 0.6943044897308995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4778174233282693, 3);
  sqcRYGate(q, -2.302448750140412, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7396182619630796, 3);
  sqcRYGate(q, -1.6834106553257204, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.591762470167411, 4);
  sqcRYGate(q, -0.3948041745350968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.434120032848192, 4);
  sqcRYGate(q, 1.5789782568230644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4360302972089238, 5);
  sqcRYGate(q, -2.3598515672616256, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8094960411016467, 5);
  sqcRYGate(q, 1.3382928958305043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14056154378540509, 6);
  sqcRYGate(q, 0.7999981520004518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5895578516520128, 6);
  sqcRYGate(q, 2.1459328761141867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5517614018983963, 0);
  sqcRYGate(q, -1.7468098462368342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.616222523620372, 0);
  sqcRYGate(q, 0.6828813129854403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4094249891660464, 1);
  sqcRYGate(q, -2.0688498676675073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9811615200882473, 1);
  sqcRYGate(q, 1.116057676208801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3943329492660292, 2);
  sqcRYGate(q, 0.9337623319307502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1114674733637104, 2);
  sqcRYGate(q, 3.1031205307520047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6040961233858608, 3);
  sqcRYGate(q, -1.2248050545599558, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.391246846982305, 3);
  sqcRYGate(q, 0.5298490402310704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8252705929958369, 4);
  sqcRYGate(q, 0.8228272786944741, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6008503616682197, 4);
  sqcRYGate(q, -2.8579723268013555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9496266394252264, 5);
  sqcRYGate(q, 1.6556284961758712, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6446180950315192, 5);
  sqcRYGate(q, 1.2099361182339088, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8046765889293783, 6);
  sqcRYGate(q, -2.8383710695104036, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9325130105409185, 6);
  sqcRYGate(q, -0.24534010641594106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.67138074395452, 0);
  sqcRYGate(q, -1.7435341358108971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.946140901442873, 0);
  sqcRYGate(q, 0.8630777978351354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.42332976960814, 1);
  sqcRYGate(q, -1.745954592618221, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.697236457962964, 1);
  sqcRYGate(q, 2.0728526300929815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.51046043000332, 2);
  sqcRYGate(q, 3.1307578554094233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1185889782866516, 2);
  sqcRYGate(q, 2.3304865809925412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9952046622825481, 3);
  sqcRYGate(q, -2.190372834303211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.376489586226239, 3);
  sqcRYGate(q, 1.7059066198059547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6031219361103126, 4);
  sqcRYGate(q, -2.099918032186868, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4187718335997974, 4);
  sqcRYGate(q, -0.015370210874252666, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1992837099060867, 5);
  sqcRYGate(q, -0.3706748718397947, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.326313871887673, 5);
  sqcRYGate(q, 0.43934381154568586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.269776584132285, 6);
  sqcRYGate(q, 0.1110882535648978, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3855129376060251, 6);
  sqcRYGate(q, -2.6795231766146155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7326409942296026, 0);
  sqcRYGate(q, -2.495568142361832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3698138282135713, 0);
  sqcRYGate(q, 1.845557473928406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2680591280862226, 1);
  sqcRYGate(q, 1.5827764529581498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18613912403919564, 1);
  sqcRYGate(q, -2.8554682222109267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.147059935244773, 2);
  sqcRYGate(q, 2.8640823818882395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9577288007799254, 2);
  sqcRYGate(q, 1.9071910057690642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4212935521565127, 3);
  sqcRYGate(q, 2.8309329014627127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.20543640880692937, 3);
  sqcRYGate(q, -2.3892317296234364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.507697192042067, 4);
  sqcRYGate(q, 0.36678770273890066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2657723625144754, 4);
  sqcRYGate(q, 0.5392553769573732, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5812644305559482, 5);
  sqcRYGate(q, -2.446274684487492, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.821388326649313, 5);
  sqcRYGate(q, -2.289129250935264, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.137000509032579, 6);
  sqcRYGate(q, -0.7015059172241263, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7240195182520663, 6);
  sqcRYGate(q, 1.9263111693811812, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0594770911049207, 0);
  sqcRYGate(q, 2.4685802889863733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.314655266750904, 0);
  sqcRYGate(q, 2.642605157944004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6683490042387557, 1);
  sqcRYGate(q, 1.9320578136779905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1477983116577937, 1);
  sqcRYGate(q, 0.9476875704216337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02065982065096385, 2);
  sqcRYGate(q, 0.7848910840143599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03573460991385602, 2);
  sqcRYGate(q, -0.7811525276726236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.114930524747303, 3);
  sqcRYGate(q, -0.9214740773088312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9978913871525195, 3);
  sqcRYGate(q, 1.9301851668327679, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.21415839713255871, 4);
  sqcRYGate(q, 3.1119219670122344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.479696132464297, 4);
  sqcRYGate(q, 0.9026326790003774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3054760089576805, 5);
  sqcRYGate(q, -0.5761000659045612, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6000623292717201, 5);
  sqcRYGate(q, 2.1472215075633194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.630032593452366, 6);
  sqcRYGate(q, -0.6413991055981345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6577375302252518, 6);
  sqcRYGate(q, -1.6049109115517581, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.17040301482418221, 0);
  sqcRYGate(q, -1.8002574130281863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.581583706102525, 0);
  sqcRYGate(q, -0.8426279374145103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4502921695764592, 1);
  sqcRYGate(q, -1.1646168746743566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4917478730788318, 1);
  sqcRYGate(q, -0.7537305925032514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.919231765563526, 2);
  sqcRYGate(q, 2.841993630268245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.349397252240856, 2);
  sqcRYGate(q, 3.0673190342291075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0573851271350811, 3);
  sqcRYGate(q, -2.9513000451695093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.15458311242626088, 3);
  sqcRYGate(q, -0.14050680769024118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.805086439965823, 4);
  sqcRYGate(q, -0.8474246434659752, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.13490257408351, 4);
  sqcRYGate(q, 1.4126524171472292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.329341000585553, 5);
  sqcRYGate(q, 2.070986990920507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3419852448310134, 5);
  sqcRYGate(q, -1.4520547700969635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2550675720192456, 6);
  sqcRYGate(q, -0.7286192955935382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.767652677792311, 6);
  sqcRYGate(q, -2.0977014098091233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.253573150149925, 0);
  sqcRYGate(q, 0.9161360028824834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04401011673146957, 0);
  sqcRYGate(q, 0.7273081924785045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1295168219949971, 1);
  sqcRYGate(q, 2.52992585989109, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6997299442646865, 1);
  sqcRYGate(q, 0.7833601627509434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0051892743075541, 2);
  sqcRYGate(q, 0.9618656884384444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7569739233690957, 2);
  sqcRYGate(q, 1.747862502476045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6239531401588376, 3);
  sqcRYGate(q, -2.2995861617102515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.984233036741907, 3);
  sqcRYGate(q, 0.07811861283708588, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15188320980363298, 4);
  sqcRYGate(q, 0.22988845788887013, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.117272477697576, 4);
  sqcRYGate(q, 1.775108074199786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6634833931700568, 5);
  sqcRYGate(q, 0.10315201940588174, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9039559538531902, 5);
  sqcRYGate(q, -1.116940916198577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3717325443517565, 6);
  sqcRYGate(q, -0.320614337872283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.372364148610459, 6);
  sqcRYGate(q, -3.123659855634415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0706643291370077, 0);
  sqcRYGate(q, 1.209569099255182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.271860633609273, 0);
  sqcRYGate(q, -1.5243352708680848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6748993809809787, 1);
  sqcRYGate(q, -2.9033526752592973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8946629707099626, 1);
  sqcRYGate(q, 1.447035153081365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6183786478723822, 2);
  sqcRYGate(q, -0.08448449851797091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5663961251900602, 2);
  sqcRYGate(q, 1.0066158892815196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8241755270619913, 3);
  sqcRYGate(q, -0.6857998241676322, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.11277510891920617, 3);
  sqcRYGate(q, -1.0761045409724426, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.42730068558616424, 4);
  sqcRYGate(q, -1.1238864755090665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4507990110353814, 4);
  sqcRYGate(q, -2.9292852060103347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06579593562360633, 5);
  sqcRYGate(q, -2.4554824306926246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7098324931844253, 5);
  sqcRYGate(q, -0.6029784674247041, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.639614005379861, 6);
  sqcRYGate(q, 0.9246741699606853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1850076617883127, 6);
  sqcRYGate(q, -3.003059547531316, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8014164007266773, 0);
  sqcRYGate(q, 0.7828508326424632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7980145433410533, 0);
  sqcRYGate(q, -2.9685153821309402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9313487579556341, 1);
  sqcRYGate(q, 1.461667798241435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49035008907829886, 1);
  sqcRYGate(q, -2.0259800704218773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9179569460099284, 2);
  sqcRYGate(q, 0.23044705713165214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2433889937260269, 2);
  sqcRYGate(q, -2.0129298870366323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8952514697210834, 3);
  sqcRYGate(q, 1.1061810419353728, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2938193003542749, 3);
  sqcRYGate(q, 2.5949362239417533, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8721045624667418, 4);
  sqcRYGate(q, 2.1692949214533943, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2076769866771118, 4);
  sqcRYGate(q, -2.745864412924311, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.02639338821968, 5);
  sqcRYGate(q, 1.8588666686947168, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5187779596773598, 5);
  sqcRYGate(q, 2.0568926822383737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7551327545571909, 6);
  sqcRYGate(q, 1.1915144295095743, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3179397769646726, 6);
  sqcRYGate(q, -1.2960907131272326, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.04381379097478756, 0);
  sqcRYGate(q, 1.1963681098987715, 1);
  sqcRYGate(q, 1.2734918792569436, 2);
  sqcRYGate(q, 1.842787775866759, 3);
  sqcRYGate(q, 1.0080488338439757, 4);
  sqcRYGate(q, -1.400696729761838, 5);
  sqcRYGate(q, -1.911899470727243, 6);
  sqcRYGate(q, 0.8629525045865707, 7);

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
