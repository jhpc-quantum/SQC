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

  sqcRYGate(q, 1.044048528325022, 0);
  sqcRYGate(q, -2.7665207239037723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7014156862641157, 0);
  sqcRYGate(q, -2.3303681099493656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.498852440531571, 2);
  sqcRYGate(q, 2.6756157501404627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.519762452730603, 2);
  sqcRYGate(q, 2.1409925931419083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12835664632628074, 4);
  sqcRYGate(q, -0.394309950411249, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8340169096091898, 4);
  sqcRYGate(q, 1.2831069684505412, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3170824357428845, 6);
  sqcRYGate(q, -3.125060239769603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4175128316858028, 6);
  sqcRYGate(q, 2.721912263831977, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.754217221473354, 8);
  sqcRYGate(q, -0.10204591373208947, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7346033288112006, 8);
  sqcRYGate(q, 0.0049403197703626785, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9748003943174646, 10);
  sqcRYGate(q, 3.110833101227821, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4600513849903485, 10);
  sqcRYGate(q, 0.6123048694616684, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3122940500027522, 1);
  sqcRYGate(q, 1.278057818762191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.451544392805811, 1);
  sqcRYGate(q, -1.3380307720824909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7666481619050667, 3);
  sqcRYGate(q, -1.6683530192719593, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.012995860310743622, 3);
  sqcRYGate(q, 1.0027800123666013, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2222861354472836, 5);
  sqcRYGate(q, 2.948416595915607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5444674665634779, 5);
  sqcRYGate(q, -1.1230369753070326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5253394668551719, 7);
  sqcRYGate(q, -2.408655645600084, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6429177538155613, 7);
  sqcRYGate(q, 0.06983494348805408, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9083590956874896, 9);
  sqcRYGate(q, 1.3212147614572052, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9420981845512078, 9);
  sqcRYGate(q, 2.2172544242255388, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0432311274935158, 0);
  sqcRYGate(q, -2.727860645706491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5676103570857529, 0);
  sqcRYGate(q, 3.0452524714469615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7158893577250325, 2);
  sqcRYGate(q, -0.9887226257258099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5183074238751884, 2);
  sqcRYGate(q, 2.746118009346541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.90033480033709, 4);
  sqcRYGate(q, 0.009413930899273703, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5730037183671568, 4);
  sqcRYGate(q, 2.9454316383333308, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1320220137874606, 6);
  sqcRYGate(q, 2.3361947016346187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8751844900582124, 6);
  sqcRYGate(q, -1.697358559056149, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4155898550374415, 8);
  sqcRYGate(q, 1.2889811737194417, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9359651084083667, 8);
  sqcRYGate(q, 1.136387590717323, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.504409901663528, 10);
  sqcRYGate(q, 2.5063402851538776, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.44896606700846586, 10);
  sqcRYGate(q, 2.339622423090376, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.867293942601862, 1);
  sqcRYGate(q, 0.27810631208813424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5160198912202856, 1);
  sqcRYGate(q, 0.08283676094467296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1970115972252344, 3);
  sqcRYGate(q, -0.660506991193297, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.434435345150839, 3);
  sqcRYGate(q, 2.548694095251828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.29763125266958035, 5);
  sqcRYGate(q, -2.8641577858376155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0637174244769811, 5);
  sqcRYGate(q, -1.4917129065959003, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.959296554709208, 7);
  sqcRYGate(q, -2.1943026106629278, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2144154149455189, 7);
  sqcRYGate(q, 1.9744452802393497, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.953646305647575, 9);
  sqcRYGate(q, -2.0800292223093613, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.380413418854772, 9);
  sqcRYGate(q, -2.3522511748902466, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9003085390367016, 0);
  sqcRYGate(q, -0.3082767933026877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1874992489716831, 0);
  sqcRYGate(q, -1.967530592944905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11158285777357069, 2);
  sqcRYGate(q, 1.2806585543853135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9862064616985089, 2);
  sqcRYGate(q, 2.4036190975677982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05895856912935346, 4);
  sqcRYGate(q, -2.1676816818068776, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.004703375208070958, 4);
  sqcRYGate(q, -3.1399267400247117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.99925561777196, 6);
  sqcRYGate(q, 1.1654035148775401, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.59943670527979, 6);
  sqcRYGate(q, 0.7725118511381165, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3461172731628324, 8);
  sqcRYGate(q, 2.948356075117424, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8995871862118678, 8);
  sqcRYGate(q, 2.433524234244924, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.40679011139294374, 10);
  sqcRYGate(q, 0.9413720995202688, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5528996707084591, 10);
  sqcRYGate(q, 1.1833314668498796, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2331701147141692, 1);
  sqcRYGate(q, 0.11466914546798107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4291199254165532, 1);
  sqcRYGate(q, -1.7870701371393114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11052808347999665, 3);
  sqcRYGate(q, -2.12530250683295, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.128030533027426, 3);
  sqcRYGate(q, -0.6251448684152188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5126201339234604, 5);
  sqcRYGate(q, -1.1621398342003457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.20868614059952897, 5);
  sqcRYGate(q, -1.6485619534905895, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.623476399629243, 7);
  sqcRYGate(q, -1.4313776586751974, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.480184506110216, 7);
  sqcRYGate(q, -2.0921372633926167, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7382814300508579, 9);
  sqcRYGate(q, -1.7003767613177336, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9340395497027948, 9);
  sqcRYGate(q, 3.0734567427488093, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2133962464905315, 0);
  sqcRYGate(q, 1.072039323549327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6619453669611628, 0);
  sqcRYGate(q, -1.8988516028865998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8623095869695624, 2);
  sqcRYGate(q, -0.18194258452136067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3149326869009106, 2);
  sqcRYGate(q, -1.981493417954665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1297618032292736, 4);
  sqcRYGate(q, 2.6314634590785184, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1312328629659008, 4);
  sqcRYGate(q, 3.127466983708725, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5769515830471095, 6);
  sqcRYGate(q, -1.4851868022850998, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.31384796849921276, 6);
  sqcRYGate(q, -1.4174840617178237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4291233661847356, 8);
  sqcRYGate(q, 0.9482946067527046, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.792565240535422, 8);
  sqcRYGate(q, 1.2427005280705856, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.4971294358370013, 10);
  sqcRYGate(q, -0.3107965437502423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1993098630398196, 10);
  sqcRYGate(q, -2.8792267429390295, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4206412096068755, 1);
  sqcRYGate(q, -1.1621962322365498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8329038386555645, 1);
  sqcRYGate(q, -1.1238255160020039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5286608217452071, 3);
  sqcRYGate(q, 1.827974545072966, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9792319055365819, 3);
  sqcRYGate(q, -0.13881737615456555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.455829286677602, 5);
  sqcRYGate(q, -0.6954871685179703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.415437249741337, 5);
  sqcRYGate(q, 3.060943417611692, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1450494500720376, 7);
  sqcRYGate(q, 1.7620716086635584, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5701876143535756, 7);
  sqcRYGate(q, -0.9260690216037348, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.187930829320132, 9);
  sqcRYGate(q, 2.1466298481575112, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.231109035605169, 9);
  sqcRYGate(q, 2.212364153943364, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.317738498084515, 0);
  sqcRYGate(q, 1.759034744328126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.122554261010538, 0);
  sqcRYGate(q, 0.4526360833525778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1293812889675805, 2);
  sqcRYGate(q, 3.0273024715994077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.807500615988742, 2);
  sqcRYGate(q, -0.5965922452263543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2054918789639824, 4);
  sqcRYGate(q, -0.8970672217510822, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0031726047750071378, 4);
  sqcRYGate(q, -0.03523967469582369, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7115531502960573, 6);
  sqcRYGate(q, -1.4401860535006161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.994111549484542, 6);
  sqcRYGate(q, -1.8137065196396116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5581884946349334, 8);
  sqcRYGate(q, -0.5320198469630064, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6082824019268367, 8);
  sqcRYGate(q, 0.6025402390522653, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.650495852564625, 10);
  sqcRYGate(q, 1.4443968808967336, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1147890578814045, 10);
  sqcRYGate(q, -2.129879440625716, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.19873029858025737, 1);
  sqcRYGate(q, -2.8389370702102092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.72606925326271, 1);
  sqcRYGate(q, -1.785836797080366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0800710158803215, 3);
  sqcRYGate(q, -0.4261855736338376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2485032197394466, 3);
  sqcRYGate(q, 0.2873245984280168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9981836048657515, 5);
  sqcRYGate(q, 0.6961263827720562, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.471570690150441, 5);
  sqcRYGate(q, -1.5913275053501363, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.013547932552851, 7);
  sqcRYGate(q, 1.4601497465247526, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.385696620354266, 7);
  sqcRYGate(q, 0.18457450896470728, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0279412621347586, 9);
  sqcRYGate(q, -1.8603627008671761, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.239564249898665, 9);
  sqcRYGate(q, -0.9100850961132882, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5378734801218152, 0);
  sqcRYGate(q, -2.548937798283942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.487270588567383, 0);
  sqcRYGate(q, -0.6751480703013026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.21539323702635, 2);
  sqcRYGate(q, 0.6396692289903576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.009976525772680416, 2);
  sqcRYGate(q, 0.9371167998046727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6196093716287416, 4);
  sqcRYGate(q, 2.3073909570883506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4864396094404375, 4);
  sqcRYGate(q, 1.5657773695590382, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3576743634626385, 6);
  sqcRYGate(q, 2.317689334160695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0076054600515727, 6);
  sqcRYGate(q, -1.1647916728852108, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5422839548976075, 8);
  sqcRYGate(q, 2.362745823296133, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.03253813513772404, 8);
  sqcRYGate(q, 0.29870259361699303, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.461754546950334, 10);
  sqcRYGate(q, -1.3191202798633999, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3548214333860262, 10);
  sqcRYGate(q, 1.600239168558638, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8152473102377724, 1);
  sqcRYGate(q, 2.7869624377480466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9246696098414526, 1);
  sqcRYGate(q, -1.3769012692440736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0464111694364595, 3);
  sqcRYGate(q, -1.5649955079697149, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9620094316712517, 3);
  sqcRYGate(q, -1.545073139694553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.386163812262965, 5);
  sqcRYGate(q, -0.9873839596916145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0411046421980882, 5);
  sqcRYGate(q, -2.415110782050481, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21166710491053264, 7);
  sqcRYGate(q, 3.075089551496575, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4810252282997913, 7);
  sqcRYGate(q, -2.8719477900279187, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7504132105295187, 9);
  sqcRYGate(q, -2.9484023977872234, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3655324931053832, 9);
  sqcRYGate(q, 2.2453495519403677, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8920866767492779, 0);
  sqcRYGate(q, 1.1987495077764594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5073400812398166, 0);
  sqcRYGate(q, -2.8458636548552696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20975558924901877, 2);
  sqcRYGate(q, 1.6565014197133128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.57077540036786, 2);
  sqcRYGate(q, 0.939904069182498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5608644122003597, 4);
  sqcRYGate(q, -1.8092096445251808, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19395590530886886, 4);
  sqcRYGate(q, 0.16767039650944238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8389200188915186, 6);
  sqcRYGate(q, 0.5463953126209341, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.07350502257664, 6);
  sqcRYGate(q, 3.1349081204646723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7334607393553538, 8);
  sqcRYGate(q, 1.5319621120632378, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4647263282511793, 8);
  sqcRYGate(q, -2.6230939885077134, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5120034831259477, 10);
  sqcRYGate(q, -2.4439672643622985, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6169472627575283, 10);
  sqcRYGate(q, 1.4950801510882665, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1464148317740683, 1);
  sqcRYGate(q, 0.0037878254918124066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4818806213972324, 1);
  sqcRYGate(q, 3.113390895448625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9353991823421653, 3);
  sqcRYGate(q, -1.5762656161277155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0586491325650664, 3);
  sqcRYGate(q, -1.5285753585489916, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.331514806162024, 5);
  sqcRYGate(q, -1.9422193287033673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9014602547073984, 5);
  sqcRYGate(q, 2.4259326850254004, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.39324458260006206, 7);
  sqcRYGate(q, 2.8339726128610514, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1755145048630675, 7);
  sqcRYGate(q, -1.9229078672394653, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.625593614017224, 9);
  sqcRYGate(q, 0.2166923708195371, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.474254189419182, 9);
  sqcRYGate(q, 0.5033623621293357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.010079757520777975, 0);
  sqcRYGate(q, 2.79513237933825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6059247518190034, 0);
  sqcRYGate(q, -0.9602625881551097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5683953454660369, 2);
  sqcRYGate(q, 1.1544871088288584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1355289765045256, 2);
  sqcRYGate(q, 1.4310436633373937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5565347654721693, 4);
  sqcRYGate(q, 0.6394647996031075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1404341742511472, 4);
  sqcRYGate(q, 1.5691201259246155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.977734043894654, 6);
  sqcRYGate(q, -0.41797154831384553, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20973855698027677, 6);
  sqcRYGate(q, -3.116927500339756, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7562162578858125, 8);
  sqcRYGate(q, -2.9040035009071135, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0536559246192505, 8);
  sqcRYGate(q, 0.36988456216409027, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.13188423877105837, 10);
  sqcRYGate(q, -2.8275990094671752, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7030663500784105, 10);
  sqcRYGate(q, -1.4401854284059477, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.728872762449046, 1);
  sqcRYGate(q, 3.0902196331452725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6579967684680883, 1);
  sqcRYGate(q, -1.55501536805128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.571570933850919, 3);
  sqcRYGate(q, 0.5365843395530475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7929631794927468, 3);
  sqcRYGate(q, -1.5988421325994824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.898436711782902, 5);
  sqcRYGate(q, -1.1656734765325758, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08583126037385623, 5);
  sqcRYGate(q, 3.122877461726881, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1171297949032357, 7);
  sqcRYGate(q, 1.36633271029865, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.21158329349683264, 7);
  sqcRYGate(q, 0.944927315318961, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.529675548783445, 9);
  sqcRYGate(q, 1.8697145107676771, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0789969476514454, 9);
  sqcRYGate(q, 1.540699622490676, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.705689032123494, 0);
  sqcRYGate(q, -0.007252598486899183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5570246478312029, 0);
  sqcRYGate(q, 0.018829469355543083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19391094709505247, 2);
  sqcRYGate(q, 2.2501003061080764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1310500256044564, 2);
  sqcRYGate(q, 3.092959866173642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0348133490526294, 4);
  sqcRYGate(q, -1.9391086468911454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.007528723274069662, 4);
  sqcRYGate(q, 2.95705995913537, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.560025008915874, 6);
  sqcRYGate(q, 1.4126311888590741, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.017942133348253, 6);
  sqcRYGate(q, 3.09939204651489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7494131296837132, 8);
  sqcRYGate(q, 1.799252322949498, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.644290818535723, 8);
  sqcRYGate(q, -0.1275430212651063, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.786374990629358, 10);
  sqcRYGate(q, -3.0720949677444045, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8233486144874229, 10);
  sqcRYGate(q, -1.2278763695551085, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5904976418187182, 1);
  sqcRYGate(q, 2.975714057977673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.011648962163387289, 1);
  sqcRYGate(q, 2.990009302145845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2576734806615146, 3);
  sqcRYGate(q, 2.916308842877132, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5729273794248013, 3);
  sqcRYGate(q, 1.5442097149671703, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8632975596944448, 5);
  sqcRYGate(q, 1.9931005402657433, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8689559322622165, 5);
  sqcRYGate(q, -3.1413805956614933, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5622434142381847, 7);
  sqcRYGate(q, -2.0175612601577138, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8594920689216368, 7);
  sqcRYGate(q, -2.9919488683404234, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2084578503525814, 9);
  sqcRYGate(q, -1.9000487430329667, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9434160672706682, 9);
  sqcRYGate(q, -0.6987541080042857, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9368874921538701, 0);
  sqcRYGate(q, -2.525783281513568, 1);
  sqcRYGate(q, 2.6778685228586894, 2);
  sqcRYGate(q, 2.4035316109074305, 3);
  sqcRYGate(q, 0.36251795117624386, 4);
  sqcRYGate(q, 0.6969101916258547, 5);
  sqcRYGate(q, 0.31256007239016187, 6);
  sqcRYGate(q, -3.0404120166897743, 7);
  sqcRYGate(q, 0.284575490190035, 8);
  sqcRYGate(q, -1.4653398236317603, 9);
  sqcRYGate(q, 1.5311514102611508, 10);
  sqcRYGate(q, -1.6919095468129521, 11);

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
