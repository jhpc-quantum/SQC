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

  sqcRYGate(q, 0.05125552760582419, 0);
  sqcRYGate(q, -1.3484911852314712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2581730112058356, 0);
  sqcRYGate(q, 0.03286289823065692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1439254761261859, 2);
  sqcRYGate(q, -1.162427257805639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5429225991676149, 2);
  sqcRYGate(q, 3.000401071503064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7887423121817833, 4);
  sqcRYGate(q, -2.325343162272315, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2926889682780756, 4);
  sqcRYGate(q, -0.228848250382463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17718455090432048, 6);
  sqcRYGate(q, -1.7050711542098307, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.24649231387961124, 6);
  sqcRYGate(q, -0.9761040191197914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7535338869629074, 0);
  sqcRYGate(q, -1.9839410379551303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9419038385191723, 0);
  sqcRYGate(q, -0.4412428924087068, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4494794802988284, 2);
  sqcRYGate(q, -0.3953990415145394, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.377365056427393, 2);
  sqcRYGate(q, 1.5220173227149068, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2509184578050094, 4);
  sqcRYGate(q, -0.7993382801550686, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.07964893486140312, 4);
  sqcRYGate(q, -0.7877698235301589, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4635514708830142, 1);
  sqcRYGate(q, -0.7723917724011126, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7388616865243804, 1);
  sqcRYGate(q, -0.4013706684548932, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9029546930539425, 3);
  sqcRYGate(q, 0.13314953456051887, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9247558133174338, 3);
  sqcRYGate(q, -2.281445176385093, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.43405507046780123, 5);
  sqcRYGate(q, 0.7570377491490032, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.052016568695967, 5);
  sqcRYGate(q, 1.391418545085238, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2860257236928456, 0);
  sqcRYGate(q, -1.7499738482359992, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9940459818154963, 0);
  sqcRYGate(q, 0.2697777507175436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.763607641138121, 1);
  sqcRYGate(q, -1.2760466938025539, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.029807212614590923, 1);
  sqcRYGate(q, 3.0751106089895477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0917023416565197, 2);
  sqcRYGate(q, 2.5761257818774768, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3760831801876303, 2);
  sqcRYGate(q, 2.7371182597122647, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.0008794322040804, 3);
  sqcRYGate(q, 1.3329261603507592, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.13962366579348, 3);
  sqcRYGate(q, -0.355647982984741, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7229814916838713, 4);
  sqcRYGate(q, -2.471162443626133, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.8934986433270318, 4);
  sqcRYGate(q, 1.5605941182407146, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.603393959622773, 5);
  sqcRYGate(q, 3.106818811574264, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4019458767035191, 5);
  sqcRYGate(q, -2.471585564036601, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5882839883172277, 0);
  sqcRYGate(q, -2.5449199076996663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3870130178433246, 0);
  sqcRYGate(q, 0.4025980822282605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5865722568157921, 2);
  sqcRYGate(q, -0.28666021164546407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7357332411271313, 2);
  sqcRYGate(q, -2.1610185267221396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2718092995791467, 4);
  sqcRYGate(q, 1.639132249588505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7886326338138936, 4);
  sqcRYGate(q, -2.289912014877843, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.334838593963826, 6);
  sqcRYGate(q, 0.9239554788335536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8684311036087842, 6);
  sqcRYGate(q, -1.7794794473826157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9747610809472844, 0);
  sqcRYGate(q, -2.123171308737816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2565364471354312, 0);
  sqcRYGate(q, 2.8106806551993033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.313483278628337, 2);
  sqcRYGate(q, -2.4585722476533776, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4133192623556403, 2);
  sqcRYGate(q, -2.8411255765742887, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5078334484457465, 4);
  sqcRYGate(q, 0.658622005759093, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7704950563789053, 4);
  sqcRYGate(q, 0.19268880429803104, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5731945986116882, 1);
  sqcRYGate(q, 2.1971050430317494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.023420533292335, 1);
  sqcRYGate(q, 2.2665023199509644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0159821046998498, 3);
  sqcRYGate(q, 2.3965014311727626, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9281396754696845, 3);
  sqcRYGate(q, -0.030857561874952633, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1228870994243505, 5);
  sqcRYGate(q, -0.7942993909934862, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6717503335193509, 5);
  sqcRYGate(q, -1.123203831347257, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6972661229134074, 0);
  sqcRYGate(q, 3.1149122013903625, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.097119955315614, 0);
  sqcRYGate(q, 2.1054430733141536, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8209818481761113, 1);
  sqcRYGate(q, -1.0205327201192338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7926469455559535, 1);
  sqcRYGate(q, -2.0237504004234923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7894074885975626, 2);
  sqcRYGate(q, 1.7049158664577364, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.955209361537984, 2);
  sqcRYGate(q, 0.08036303786543578, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.4231858934051114, 3);
  sqcRYGate(q, -1.4276827566236863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2518447338206986, 3);
  sqcRYGate(q, -1.6640168560227035, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7793251602378976, 4);
  sqcRYGate(q, -0.7460340497271498, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.668644159789876, 4);
  sqcRYGate(q, 0.8358177937659149, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.749853309215031, 5);
  sqcRYGate(q, -1.9674822914711338, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6928174482275002, 5);
  sqcRYGate(q, -2.295453511677084, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3539971590338699, 0);
  sqcRYGate(q, -1.825076409247348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9211559537005929, 0);
  sqcRYGate(q, 2.4087194621320602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45038992168161324, 2);
  sqcRYGate(q, 0.7253742106189401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8758573506421392, 2);
  sqcRYGate(q, -1.9668022991005438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3881714450866935, 4);
  sqcRYGate(q, 2.7512918149056698, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1726298461780997, 4);
  sqcRYGate(q, 0.15332526523874268, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9805716610980983, 6);
  sqcRYGate(q, -1.6193009859965983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.693417114114193, 6);
  sqcRYGate(q, 2.796031830073592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0535257767631767, 0);
  sqcRYGate(q, 2.9973995269626004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.00377632385045068, 0);
  sqcRYGate(q, 2.5627316155099122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.750869888862356, 2);
  sqcRYGate(q, 1.003985446044541, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.278314294512576, 2);
  sqcRYGate(q, 2.108196676092039, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.253422270437425, 4);
  sqcRYGate(q, 3.034241621715236, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5100740053304182, 4);
  sqcRYGate(q, 0.3719223491497399, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7423512914223358, 1);
  sqcRYGate(q, -2.6852828092621155, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.785576567596358, 1);
  sqcRYGate(q, -0.5276358943202366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.26459714726686034, 3);
  sqcRYGate(q, -2.5058307621857963, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8762077994818529, 3);
  sqcRYGate(q, 2.3954621299767487, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9546479862411417, 5);
  sqcRYGate(q, -2.5838761217462856, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5439232909755187, 5);
  sqcRYGate(q, -0.6385227299679279, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8939488116683125, 0);
  sqcRYGate(q, 0.893882382291343, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0401645106720094, 0);
  sqcRYGate(q, 2.36928521866469, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.276821708262551, 1);
  sqcRYGate(q, 1.0907659692423364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.774000648553143, 1);
  sqcRYGate(q, 2.84867744693114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.936622330608697, 2);
  sqcRYGate(q, 0.5199631935794278, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.238991401738045, 2);
  sqcRYGate(q, -3.1190610832299104, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.3842877015706034, 3);
  sqcRYGate(q, 1.7251726671291545, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2307818613457977, 3);
  sqcRYGate(q, 2.071574860217053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4850840117086097, 4);
  sqcRYGate(q, 0.5902305792156898, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6157722532566257, 4);
  sqcRYGate(q, -1.891274922039261, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.9171717038548293, 5);
  sqcRYGate(q, -1.0595071747833975, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4457652892241075, 5);
  sqcRYGate(q, 2.230023094688123, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3216372357688306, 0);
  sqcRYGate(q, 2.0101057078282984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20297600403176294, 0);
  sqcRYGate(q, 2.6842274609768237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07325403899149752, 2);
  sqcRYGate(q, 1.6034475720732246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4840949819461424, 2);
  sqcRYGate(q, -1.2466952753317557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.149591909598648, 4);
  sqcRYGate(q, -0.6263350967043885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.25294750493463297, 4);
  sqcRYGate(q, 0.46858999343252705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6496256384182273, 6);
  sqcRYGate(q, -2.2358914856782093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7996680090457202, 6);
  sqcRYGate(q, 1.519942814160645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3088272452710337, 0);
  sqcRYGate(q, 0.6348729858624864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1781389225810996, 0);
  sqcRYGate(q, -1.1612437239483047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.575014274634565, 2);
  sqcRYGate(q, 0.6098758555110857, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0227543579032665, 2);
  sqcRYGate(q, 0.9677219102881198, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4956236338306965, 4);
  sqcRYGate(q, -0.32535461908965946, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6919391816351286, 4);
  sqcRYGate(q, 0.2852740733872129, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.18381787947602599, 1);
  sqcRYGate(q, 1.2573338262930898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.249317735280103, 1);
  sqcRYGate(q, 2.4242894192678333, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5717346718396425, 3);
  sqcRYGate(q, -2.906224733418435, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8837065055374927, 3);
  sqcRYGate(q, 1.0238125950052304, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.193341798169315, 5);
  sqcRYGate(q, -1.9059383665652965, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8394093462872603, 5);
  sqcRYGate(q, 2.185987882934014, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.22490837068774597, 0);
  sqcRYGate(q, -2.93077261038596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.907898888508812, 0);
  sqcRYGate(q, 0.059111494354700804, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2065626515927406, 1);
  sqcRYGate(q, -2.816241185770555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.849739295852207, 1);
  sqcRYGate(q, 1.9537630354274151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9367518739413363, 2);
  sqcRYGate(q, 0.8720734063481342, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.340143247434624, 2);
  sqcRYGate(q, 1.4198949972431532, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.5874146931866124, 3);
  sqcRYGate(q, 0.6021128205358348, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7982689048571832, 3);
  sqcRYGate(q, -2.474111055671788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.423733148275701, 4);
  sqcRYGate(q, 2.6733390025447004, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.7175385115597696, 4);
  sqcRYGate(q, 2.7901250632950094, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.9002732574032062, 5);
  sqcRYGate(q, 0.3645565901572052, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06228628832686223, 5);
  sqcRYGate(q, -0.8667245473514682, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.30926097735672364, 0);
  sqcRYGate(q, 2.7632909622704314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9757872961897363, 0);
  sqcRYGate(q, -0.8516608954008869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.013430431044557375, 2);
  sqcRYGate(q, 0.3828066523932016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5022109077389398, 2);
  sqcRYGate(q, 1.1959581059383548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8876265580078333, 4);
  sqcRYGate(q, -0.2870648025612752, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6270589539856233, 4);
  sqcRYGate(q, 2.779425845621925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.781802092709279, 6);
  sqcRYGate(q, -0.17042697645802668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.952909105450808, 6);
  sqcRYGate(q, -1.634775798395534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6920502343926058, 0);
  sqcRYGate(q, 1.8614140018136687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8896739254580366, 0);
  sqcRYGate(q, -2.8156362828757784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3525929752221715, 2);
  sqcRYGate(q, 1.2710425673571797, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0402731862762065, 2);
  sqcRYGate(q, 0.6954446827444709, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5212353856265866, 4);
  sqcRYGate(q, -0.8042620284405286, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.07354576033672522, 4);
  sqcRYGate(q, 2.2009402656325965, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5994565374174092, 1);
  sqcRYGate(q, -0.910947910902001, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7800404859917406, 1);
  sqcRYGate(q, -0.42122971829026046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06495734612171178, 3);
  sqcRYGate(q, 3.0807434331788115, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6031830153391038, 3);
  sqcRYGate(q, 3.054579363892054, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.231286728432029, 5);
  sqcRYGate(q, -2.410049445805936, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.128111650687612, 5);
  sqcRYGate(q, -1.6002109241642146, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1123201130768465, 0);
  sqcRYGate(q, 1.8663101862084368, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0956814039694631, 0);
  sqcRYGate(q, -1.3415143770709461, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0625826253090924, 1);
  sqcRYGate(q, 0.027261452405667675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5559298473549568, 1);
  sqcRYGate(q, 0.445977602125617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13558225958143724, 2);
  sqcRYGate(q, 1.421022555875855, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.889992189039205, 2);
  sqcRYGate(q, -2.529889710922161, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.161921588090296, 3);
  sqcRYGate(q, -1.4537782429662043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0715383698993666, 3);
  sqcRYGate(q, -2.8168935358924125, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.014706640175545, 4);
  sqcRYGate(q, 0.4693636215987589, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.8628781632018425, 4);
  sqcRYGate(q, -0.8175271086444683, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.04797616182341, 5);
  sqcRYGate(q, -1.221716148806224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3471449099548973, 5);
  sqcRYGate(q, -0.7107481851275352, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3568638059645171, 0);
  sqcRYGate(q, -2.3807803446695384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.071037113180119, 0);
  sqcRYGate(q, 2.132501944701418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.139686701241259, 2);
  sqcRYGate(q, 3.0275829435880324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4283957203240236, 2);
  sqcRYGate(q, -1.5959049242891779, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7190940793697145, 4);
  sqcRYGate(q, 1.5449803069675596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.672605078348014, 4);
  sqcRYGate(q, 2.4370941649833595, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7193888908328976, 6);
  sqcRYGate(q, -2.8510266550443633, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.38614843545170996, 6);
  sqcRYGate(q, -0.497347951128818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5533929001103886, 0);
  sqcRYGate(q, -0.5963443520709271, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6161602176420908, 0);
  sqcRYGate(q, -3.047526362289093, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4809608797325293, 2);
  sqcRYGate(q, -1.8947723100084077, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7704863857773372, 2);
  sqcRYGate(q, -0.7892792231855669, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6735146487564319, 4);
  sqcRYGate(q, 0.3222157866434517, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5820184351008798, 4);
  sqcRYGate(q, 0.5634740371369296, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.541954008661313, 1);
  sqcRYGate(q, -1.8087598270690455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2929095442113425, 1);
  sqcRYGate(q, -2.590905641479571, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6617193488745658, 3);
  sqcRYGate(q, -2.246360059558011, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4552549697218513, 3);
  sqcRYGate(q, 0.6119167328647613, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7715509441572133, 5);
  sqcRYGate(q, -1.8857430848627017, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.055476782130263, 5);
  sqcRYGate(q, 1.6579101905700027, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.86042972598145, 0);
  sqcRYGate(q, -0.39582881850235696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0454930875219883, 0);
  sqcRYGate(q, 2.6901012172744463, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0122957863203896, 1);
  sqcRYGate(q, -0.061296142132565276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.015162399292245804, 1);
  sqcRYGate(q, -2.983267510641465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5605109151881007, 2);
  sqcRYGate(q, 2.428820885433226, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7850233876958252, 2);
  sqcRYGate(q, -3.0490088285834442, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.512952901382005, 3);
  sqcRYGate(q, 2.602287154585214, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9591320488174055, 3);
  sqcRYGate(q, 1.0958104287523058, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8212858863701616, 4);
  sqcRYGate(q, 2.463576720469724, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.031353202214146, 4);
  sqcRYGate(q, -0.8950481152749584, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.34934323126036865, 5);
  sqcRYGate(q, -2.3040529194390653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5363570875036648, 5);
  sqcRYGate(q, -2.404811107059359, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.81975588925729, 0);
  sqcRYGate(q, -3.0208577426059504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5961853017351353, 0);
  sqcRYGate(q, 1.2860896616918438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.049521603491596, 2);
  sqcRYGate(q, -1.5479592579151848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.574749353671945, 2);
  sqcRYGate(q, 1.478419383547986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.850377755523537, 4);
  sqcRYGate(q, 2.917397511686342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9764160612023217, 4);
  sqcRYGate(q, 2.576573650423081, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9233010622006494, 6);
  sqcRYGate(q, 2.0680866757183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5591932446886494, 6);
  sqcRYGate(q, -2.744494772192371, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4975618412575187, 0);
  sqcRYGate(q, -2.9554596515973413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7384624925506715, 0);
  sqcRYGate(q, 0.18445933701287134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.594099437636988, 2);
  sqcRYGate(q, 1.996306902737552, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.22144582498258003, 2);
  sqcRYGate(q, 0.9138406745320141, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.618634673034478, 4);
  sqcRYGate(q, 0.19395544193540992, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3875420026125624, 4);
  sqcRYGate(q, -1.9138318854709082, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.723721521227041, 1);
  sqcRYGate(q, -0.30210188533595694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.021957788940814, 1);
  sqcRYGate(q, -1.9672655668637842, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8407446932749494, 3);
  sqcRYGate(q, -0.698391462095027, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.776509166798791, 3);
  sqcRYGate(q, -1.0690017515438157, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5249935214086294, 5);
  sqcRYGate(q, -1.07130381712297, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.785096251745004, 5);
  sqcRYGate(q, -2.388202544935869, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8186951116287815, 0);
  sqcRYGate(q, -0.42473650916120465, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2448818059223905, 0);
  sqcRYGate(q, 2.0446982819983095, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6967786207618003, 1);
  sqcRYGate(q, 1.3859017712826311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.601327045884413, 1);
  sqcRYGate(q, -0.6535257435951571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03822108482896346, 2);
  sqcRYGate(q, -2.6454681411177234, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3466501176286074, 2);
  sqcRYGate(q, -0.17237292307937846, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.7103790159802967, 3);
  sqcRYGate(q, -0.29755845124424063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7649007895407345, 3);
  sqcRYGate(q, 0.5182799389717916, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4235397140065085, 4);
  sqcRYGate(q, 0.25564010594409137, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.5773669290450436, 4);
  sqcRYGate(q, -0.7297514102376783, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2255810004976437, 5);
  sqcRYGate(q, -2.868365952904573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21199254098795173, 5);
  sqcRYGate(q, 2.930470186513209, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.970230115370579, 0);
  sqcRYGate(q, -0.9175935358310472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4143312943244386, 0);
  sqcRYGate(q, 0.7571039564058762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2151282243372323, 2);
  sqcRYGate(q, -2.63766575202092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6159928507494782, 2);
  sqcRYGate(q, 2.947946935068357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9411529944521317, 4);
  sqcRYGate(q, 3.1190058230165207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2822190790555359, 4);
  sqcRYGate(q, -2.3777502995432944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.023308514791160435, 6);
  sqcRYGate(q, 0.16582169333485108, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3482910681693991, 6);
  sqcRYGate(q, 1.4215254321730004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5542199556325267, 0);
  sqcRYGate(q, -1.9493681931213411, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0211160265149752, 0);
  sqcRYGate(q, -0.501031681449517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6174383944996036, 2);
  sqcRYGate(q, 2.511964741699378, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.794024241140148, 2);
  sqcRYGate(q, 0.3048398680623973, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.819155995870764, 4);
  sqcRYGate(q, -0.3120683244051126, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3763908071906146, 4);
  sqcRYGate(q, 1.5290490870326454, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.223237661193989, 1);
  sqcRYGate(q, 3.1050700554477983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4057412879614348, 1);
  sqcRYGate(q, -1.6522224525838154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.338623881821285, 3);
  sqcRYGate(q, -2.556058121307513, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.09484010653101116, 3);
  sqcRYGate(q, -1.566008870407531, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2438656161296047, 5);
  sqcRYGate(q, 1.4191199521676794, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2539328287487794, 5);
  sqcRYGate(q, 0.40314547473954737, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.164342574450015, 0);
  sqcRYGate(q, 0.5762382393196654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3356721129123086, 0);
  sqcRYGate(q, -0.6750666515339172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.26879684835952594, 1);
  sqcRYGate(q, 0.5256681153085001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8282873871591994, 1);
  sqcRYGate(q, 0.6142141560432252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0762329320944577, 2);
  sqcRYGate(q, -1.1108973077792728, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.528548025593772, 2);
  sqcRYGate(q, 1.4810592995948149, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.781840462824337, 3);
  sqcRYGate(q, 1.5079056494354797, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9678705055783476, 3);
  sqcRYGate(q, 2.437333861830211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3111619741005063, 4);
  sqcRYGate(q, -0.904760183597146, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.561777519032204, 4);
  sqcRYGate(q, 1.9827329152819297, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.18674767162711037, 5);
  sqcRYGate(q, 1.3607078287901988, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1627588982405967, 5);
  sqcRYGate(q, 0.2909180412343249, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5318094574959112, 0);
  sqcRYGate(q, -2.2580801975337064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.712767201347646, 0);
  sqcRYGate(q, 2.1478651730988148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4702790595647215, 2);
  sqcRYGate(q, 2.9001017083045184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5090152243885813, 2);
  sqcRYGate(q, 2.971698202521509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5927732944719093, 4);
  sqcRYGate(q, 3.0106789331380726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6391796658711186, 4);
  sqcRYGate(q, 2.615233995277726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7285438958437753, 6);
  sqcRYGate(q, -0.9272823569669476, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.19040576924763458, 6);
  sqcRYGate(q, -3.0232855023284646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5478205560726168, 0);
  sqcRYGate(q, -2.629139206695705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0568030439441563, 0);
  sqcRYGate(q, -2.018947639095436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5687648297351682, 2);
  sqcRYGate(q, 3.097468460725286, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.21232282253750778, 2);
  sqcRYGate(q, -1.5038925071017708, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2788058801714197, 4);
  sqcRYGate(q, -1.4512035461092736, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9577600724675597, 4);
  sqcRYGate(q, 2.394611746137074, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.747928254159119, 1);
  sqcRYGate(q, -0.3981278706175795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9996699710669281, 1);
  sqcRYGate(q, -2.4680263819199486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8652024624417574, 3);
  sqcRYGate(q, 1.5096610883490804, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9617626794084226, 3);
  sqcRYGate(q, 1.9359535944278357, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4811112068294063, 5);
  sqcRYGate(q, -0.4044414783556999, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7928356080379884, 5);
  sqcRYGate(q, 0.3837698269142567, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.328032380650731, 0);
  sqcRYGate(q, -2.550474158439803, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3690089979291793, 0);
  sqcRYGate(q, -0.4720954381821052, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1991290921878484, 1);
  sqcRYGate(q, -2.8398047029302664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7501017709996004, 1);
  sqcRYGate(q, 3.1248219906670687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20058751609982475, 2);
  sqcRYGate(q, 2.449292263853826, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.904078799863925, 2);
  sqcRYGate(q, -2.4488294882356243, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.6098784412311421, 3);
  sqcRYGate(q, -1.792283357765716, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1707446344756198, 3);
  sqcRYGate(q, -3.0182216535247512, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8039530428806813, 4);
  sqcRYGate(q, -3.1301340694508317, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.7439871318531333, 4);
  sqcRYGate(q, -0.6021075293303334, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.118857409283395, 5);
  sqcRYGate(q, -2.585633574965335, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.525787841973916, 5);
  sqcRYGate(q, -1.4076690028677747, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8463340130786731, 0);
  sqcRYGate(q, -1.3642927776084024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8934894309405763, 0);
  sqcRYGate(q, -1.073596334074538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11237439073302626, 2);
  sqcRYGate(q, 1.5541187932445373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1479175736426581, 2);
  sqcRYGate(q, -1.5758446922877658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9627090226213215, 4);
  sqcRYGate(q, 2.3012146981176413, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9939228186264515, 4);
  sqcRYGate(q, -2.243010575433636, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8071287283124876, 6);
  sqcRYGate(q, -1.122629970904196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.679835092703756, 6);
  sqcRYGate(q, 0.777089945628811, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.597716423586363, 0);
  sqcRYGate(q, 0.7546387891905683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5884767734004122, 0);
  sqcRYGate(q, 2.701969122961442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.065138228532878, 2);
  sqcRYGate(q, -2.9508840064757376, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7087732337247046, 2);
  sqcRYGate(q, 1.198973397754889, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.416979264172958, 4);
  sqcRYGate(q, -2.029761709938912, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.834198083756275, 4);
  sqcRYGate(q, -0.05591541933531019, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8602608040164653, 1);
  sqcRYGate(q, -0.0073623571173788704, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.774424506699324, 1);
  sqcRYGate(q, -2.257899402561465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.623179066704446, 3);
  sqcRYGate(q, 0.9024639963742185, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3255536985771688, 3);
  sqcRYGate(q, -2.5920248667642602, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6603677689073617, 5);
  sqcRYGate(q, -1.9562655280374575, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8923780550414669, 5);
  sqcRYGate(q, -2.082096675439536, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2884275530949258, 0);
  sqcRYGate(q, 1.1711442199203574, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.412042493412077, 0);
  sqcRYGate(q, 0.012914237817545525, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.026409966977103, 1);
  sqcRYGate(q, 0.5458213820511869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10424891116085178, 1);
  sqcRYGate(q, -1.611173338430259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.626328900568637, 2);
  sqcRYGate(q, 2.4381078975012525, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5930809154862677, 2);
  sqcRYGate(q, 2.892739863536016, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5207704875723516, 3);
  sqcRYGate(q, 0.4029944583499807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2094357617202016, 3);
  sqcRYGate(q, 0.46885776001464574, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2463333947906161, 4);
  sqcRYGate(q, 2.6576165043608255, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.344596933154721, 4);
  sqcRYGate(q, 2.4724396959138293, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.3603095053974448, 5);
  sqcRYGate(q, -2.366567801719822, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.031572719373634, 5);
  sqcRYGate(q, -0.2297242719348239, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06211709507314112, 0);
  sqcRYGate(q, -0.7074388871264764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3007638351464399, 0);
  sqcRYGate(q, 0.7697608159335676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9484207039517023, 2);
  sqcRYGate(q, -2.1213763741873395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44161954097458267, 2);
  sqcRYGate(q, 2.953991420730115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3218755840839185, 4);
  sqcRYGate(q, -2.5781609332935633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.139148153479898, 4);
  sqcRYGate(q, -1.432813644808017, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4771474785058234, 6);
  sqcRYGate(q, 1.903379257692059, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.19917241179498024, 6);
  sqcRYGate(q, 2.11811695110608, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.916224715420257, 0);
  sqcRYGate(q, 3.0826911869298828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.964041891072236, 0);
  sqcRYGate(q, -0.4140607610516691, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8148072365431794, 2);
  sqcRYGate(q, 0.5819408403771041, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6152544905977075, 2);
  sqcRYGate(q, 1.3168350090737668, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.680621425087387, 4);
  sqcRYGate(q, -2.2461522435810446, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7014776077176766, 4);
  sqcRYGate(q, -0.628038849836857, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0046811217995417, 1);
  sqcRYGate(q, 2.2363020965201703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2759021163147772, 1);
  sqcRYGate(q, 1.7069636464591866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6436286948480974, 3);
  sqcRYGate(q, -1.9961914770102234, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.031077160598611, 3);
  sqcRYGate(q, -1.6629970846312467, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0639826917497004, 5);
  sqcRYGate(q, -1.9701375006799442, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.1114913250680138, 5);
  sqcRYGate(q, -0.09276976678314748, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9636004002019534, 0);
  sqcRYGate(q, -2.5700865702532303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.20887458471195935, 0);
  sqcRYGate(q, -1.7288589026438685, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7029405845435823, 1);
  sqcRYGate(q, 1.6649151463534249, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7018484834017187, 1);
  sqcRYGate(q, -2.489701341873256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.392148617463509, 2);
  sqcRYGate(q, 3.0391201639025773, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.1217873968525268, 2);
  sqcRYGate(q, -0.784696219631023, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.2413372879579345, 3);
  sqcRYGate(q, -2.65740611472941, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0579632224757702, 3);
  sqcRYGate(q, -0.21365529136877548, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2466075809422492, 4);
  sqcRYGate(q, -2.1206785600299694, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.4434606886693295, 4);
  sqcRYGate(q, 0.006453447096606446, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.8511762304193115, 5);
  sqcRYGate(q, 0.43681229522892906, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.022016425541299, 5);
  sqcRYGate(q, -1.8459767791683301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9860399048249652, 0);
  sqcRYGate(q, -0.968128644073481, 1);
  sqcRYGate(q, -0.6832474064162459, 2);
  sqcRYGate(q, 0.5587845992447141, 3);
  sqcRYGate(q, 2.664530624195632, 4);
  sqcRYGate(q, -0.15794759448252796, 5);
  sqcRYGate(q, -0.7707914069816288, 6);
  sqcRYGate(q, -0.14204182822671285, 7);

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
