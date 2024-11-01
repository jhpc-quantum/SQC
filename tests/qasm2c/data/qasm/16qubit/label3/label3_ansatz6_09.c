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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.5494715938527993, 0);
  sqcRYGate(q, -1.9071212181210502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8470976139132897, 0);
  sqcRYGate(q, 2.4144771917926553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8820899064243106, 1);
  sqcRYGate(q, -3.1023930562515045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1821092557118282, 1);
  sqcRYGate(q, 0.24684257050685032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2459128127037022, 2);
  sqcRYGate(q, -1.3623054060189348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3837748408389414, 2);
  sqcRYGate(q, 0.22961430329109778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5044526323156653, 3);
  sqcRYGate(q, 1.0976146548567653, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8587810381201888, 3);
  sqcRYGate(q, 1.8714868556035373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1795967400771143, 4);
  sqcRYGate(q, -0.2406144275549309, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4365575133528135, 4);
  sqcRYGate(q, 1.893128070255105, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0031827250466487, 5);
  sqcRYGate(q, 1.7352225017936818, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.743414904623388, 5);
  sqcRYGate(q, -0.6454542191005155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.38001038633892, 6);
  sqcRYGate(q, -1.002446947275612, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.970624084425376, 6);
  sqcRYGate(q, 1.357872994142057, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1438024729889005, 7);
  sqcRYGate(q, -2.288104918867368, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1301318697842597, 7);
  sqcRYGate(q, 0.01595735686267119, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.064144189326294, 8);
  sqcRYGate(q, 2.8406983501122265, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9736869865239757, 8);
  sqcRYGate(q, 3.0702793418795093, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.911855445865507, 9);
  sqcRYGate(q, 0.580424339243466, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9344968976313437, 9);
  sqcRYGate(q, 1.2082916738598568, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.037981301826405, 10);
  sqcRYGate(q, 1.3592462546352433, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2090409259569594, 10);
  sqcRYGate(q, 3.056545228593129, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.18883650571087962, 11);
  sqcRYGate(q, -1.6109658509745506, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8348787214512947, 11);
  sqcRYGate(q, -3.131939199544972, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7208204816186468, 12);
  sqcRYGate(q, 0.4477664715830043, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.07991353622996564, 12);
  sqcRYGate(q, -2.825362961404006, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5739919534128486, 13);
  sqcRYGate(q, 1.3197469200805005, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.2016236518665604, 13);
  sqcRYGate(q, -0.2104623819622148, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1745366595755407, 14);
  sqcRYGate(q, 1.0460803468690567, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.7877406752052534, 14);
  sqcRYGate(q, -0.3068023241769158, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.222666076299273, 0);
  sqcRYGate(q, 3.024548578617768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2786659520938066, 0);
  sqcRYGate(q, -1.559977198260404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06191773821546942, 1);
  sqcRYGate(q, 0.17048774827988833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3002775355457196, 1);
  sqcRYGate(q, 2.346572471138102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.671737999443608, 2);
  sqcRYGate(q, -2.5871920076751453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1657419910444708, 2);
  sqcRYGate(q, 2.067631985016659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7751768584148317, 3);
  sqcRYGate(q, -0.32788849258625685, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.701727667518611, 3);
  sqcRYGate(q, -0.5963946912241348, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0641398821890613, 4);
  sqcRYGate(q, 2.758291860494956, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.644170153383459, 4);
  sqcRYGate(q, -1.2896251326281645, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.592922311385086, 5);
  sqcRYGate(q, 1.2528188542870504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3256605136938582, 5);
  sqcRYGate(q, -2.4400037764808693, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.48714291606636095, 6);
  sqcRYGate(q, 2.6026544866731935, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3878960398949864, 6);
  sqcRYGate(q, 1.997622758282999, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6710371421162709, 7);
  sqcRYGate(q, 1.9702214186247768, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.593303744375896, 7);
  sqcRYGate(q, 0.019634568510971562, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3969557205496983, 8);
  sqcRYGate(q, -1.1466738792717595, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.490885335407599, 8);
  sqcRYGate(q, -2.424691354287107, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.593495895176354, 9);
  sqcRYGate(q, -0.8249279681760164, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2902504988423116, 9);
  sqcRYGate(q, 1.9818438908433347, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9801314921529457, 10);
  sqcRYGate(q, -0.506539601048063, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8931557120545737, 10);
  sqcRYGate(q, 0.16771323594273735, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0736050303640154, 11);
  sqcRYGate(q, 2.9017244914729154, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.009103254807045593, 11);
  sqcRYGate(q, 0.04796425316091924, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.2180328652059997, 12);
  sqcRYGate(q, -1.1201570078700964, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.13128046383912473, 12);
  sqcRYGate(q, 0.053958039838168936, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9961684812793843, 13);
  sqcRYGate(q, 1.2885394828815562, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.38660930354363465, 13);
  sqcRYGate(q, 1.7007461105019765, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.263951827048315, 14);
  sqcRYGate(q, 0.28039008341384486, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.508977236344669, 14);
  sqcRYGate(q, 2.2481578940141356, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9864246262446301, 0);
  sqcRYGate(q, 1.867446414440215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.649952908536898, 0);
  sqcRYGate(q, -1.9014137776436542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7362112951045213, 1);
  sqcRYGate(q, 0.9728357613214325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1745276490346603, 1);
  sqcRYGate(q, 1.2173063547629743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07208376554141172, 2);
  sqcRYGate(q, 0.2903737548036017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.78366040484945, 2);
  sqcRYGate(q, -2.0687129277087197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9265939700769126, 3);
  sqcRYGate(q, -1.1976404261040763, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2728933532218556, 3);
  sqcRYGate(q, -2.9563845961398427, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1715019336631176, 4);
  sqcRYGate(q, 2.273310355496604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4232025932418919, 4);
  sqcRYGate(q, -1.1813741805746325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.923222150572606, 5);
  sqcRYGate(q, -2.11298326816551, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.497826955850458, 5);
  sqcRYGate(q, -1.088261125174278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7104324455818575, 6);
  sqcRYGate(q, 1.506071685863472, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.004543358193879854, 6);
  sqcRYGate(q, 2.120530739084302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05746858983230882, 7);
  sqcRYGate(q, 0.6938908319067555, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7368816450887024, 7);
  sqcRYGate(q, 0.4607311060670994, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.021690060627933, 8);
  sqcRYGate(q, -2.093320723032131, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3784855420228403, 8);
  sqcRYGate(q, -1.0860266583188758, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8686413541386324, 9);
  sqcRYGate(q, -0.38204281648064686, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9572625905128263, 9);
  sqcRYGate(q, -1.692376736463558, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.576121376586251, 10);
  sqcRYGate(q, 0.06542898307057055, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7687615776307597, 10);
  sqcRYGate(q, 0.23309637648264833, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.16431545431284, 11);
  sqcRYGate(q, 0.32678169429460097, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9760051500426986, 11);
  sqcRYGate(q, -0.026554991559076223, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6412513346165334, 12);
  sqcRYGate(q, -0.7408547607014127, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1366842857617767, 12);
  sqcRYGate(q, 0.04335781541476702, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3040378656099394, 13);
  sqcRYGate(q, 2.7216454113997797, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.3016195225982923, 13);
  sqcRYGate(q, -0.5289046932674885, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.825198848293706, 14);
  sqcRYGate(q, -1.9255638227419762, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.812287978645363, 14);
  sqcRYGate(q, 1.6380530271602138, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.030085519217858077, 0);
  sqcRYGate(q, -3.074615692724498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4850416488076366, 0);
  sqcRYGate(q, -2.2798764298252623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3921464015981704, 1);
  sqcRYGate(q, 1.2654972443182189, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2843096898563475, 1);
  sqcRYGate(q, 2.1657989144898933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3466400868769346, 2);
  sqcRYGate(q, -0.5015621061039636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3845521792766995, 2);
  sqcRYGate(q, -1.0956230126004316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.034864853358824, 3);
  sqcRYGate(q, -3.0005751867244106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4577783997581539, 3);
  sqcRYGate(q, 2.3779026541822623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.564110113351038, 4);
  sqcRYGate(q, -0.22029431273912486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7039080820414765, 4);
  sqcRYGate(q, -2.062196364560637, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.238517682066752, 5);
  sqcRYGate(q, -2.1140010277366477, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.50781427172423, 5);
  sqcRYGate(q, -0.0894850180877178, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.946250463273783, 6);
  sqcRYGate(q, -2.2142336876890782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.02503269815571122, 6);
  sqcRYGate(q, 0.005049810096480569, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.560038593594948, 7);
  sqcRYGate(q, 1.025474107273178, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6373514786920031, 7);
  sqcRYGate(q, -0.39569295449030756, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4486535893810677, 8);
  sqcRYGate(q, -0.1480817511944049, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.634762331266563, 8);
  sqcRYGate(q, 2.1804789357720287, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.643943715516571, 9);
  sqcRYGate(q, -2.1708501042785837, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3252346502664149, 9);
  sqcRYGate(q, -1.2411641193222196, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0177083593186644, 10);
  sqcRYGate(q, 0.19227798399511276, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0713387298864716, 10);
  sqcRYGate(q, -1.4670454840887501, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.044237064900279, 11);
  sqcRYGate(q, 0.36383375625126213, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.5726117566412512, 11);
  sqcRYGate(q, -1.6075842897953558, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5584391268864604, 12);
  sqcRYGate(q, 0.49044372383367446, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.004417507071793173, 12);
  sqcRYGate(q, 3.0789682667072134, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3095603457941811, 13);
  sqcRYGate(q, 0.7157828979339794, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8419763222220115, 13);
  sqcRYGate(q, -2.6261353748074425, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9338141339827091, 14);
  sqcRYGate(q, 0.8224452311045996, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.178877083657924, 14);
  sqcRYGate(q, 3.066125734902284, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6176889844171614, 0);
  sqcRYGate(q, 3.0220835581978194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9897864329112532, 0);
  sqcRYGate(q, 0.8731861386686538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4101807908983277, 1);
  sqcRYGate(q, -1.6764475168135407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.011852937706008149, 1);
  sqcRYGate(q, 1.7460990705513506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2679732554664773, 2);
  sqcRYGate(q, -0.6379492173621272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0591294621104907, 2);
  sqcRYGate(q, 2.413435749082246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2044313816444028, 3);
  sqcRYGate(q, 2.516276328563313, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7048485264984332, 3);
  sqcRYGate(q, 1.084588939016279, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.811458375351676, 4);
  sqcRYGate(q, -0.16696771091930174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0624529727887417, 4);
  sqcRYGate(q, 1.764588173337125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8844307598138438, 5);
  sqcRYGate(q, -0.3627954376791526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.828548728676832, 5);
  sqcRYGate(q, -1.2528259575753586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3642231581245314, 6);
  sqcRYGate(q, 2.011651253524338, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.003644145541308898, 6);
  sqcRYGate(q, -3.1277194123488377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.051820277206363, 7);
  sqcRYGate(q, 1.8995637871272364, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5987273696395565, 7);
  sqcRYGate(q, -0.09082274245071591, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8809566451714437, 8);
  sqcRYGate(q, -1.4178402138334967, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6772750372792196, 8);
  sqcRYGate(q, -2.5839410002323024, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7096721804589432, 9);
  sqcRYGate(q, 1.3797500543296857, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4314528862021774, 9);
  sqcRYGate(q, 0.08400796691853205, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7451973051737355, 10);
  sqcRYGate(q, -1.5454255155432293, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8046191147821664, 10);
  sqcRYGate(q, 0.04796974775950957, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.1470195813101481, 11);
  sqcRYGate(q, 1.7679231368607966, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.29348593519373, 11);
  sqcRYGate(q, 3.090192026277545, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.3202868354003652, 12);
  sqcRYGate(q, 1.1239961899534574, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1792239505801607, 12);
  sqcRYGate(q, 1.2489849558109805, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6735547894134162, 13);
  sqcRYGate(q, -0.6101375178814177, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.12352289592851219, 13);
  sqcRYGate(q, 1.3145108263290455, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0198021104426847, 14);
  sqcRYGate(q, 0.8239560358516114, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9567832755021097, 14);
  sqcRYGate(q, -1.696115593445839, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.1283909398379933, 0);
  sqcRYGate(q, -0.32514990936386207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9302513649687583, 0);
  sqcRYGate(q, 1.7832210389338234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2048250992385538, 1);
  sqcRYGate(q, 1.3509757603696007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41462635021237404, 1);
  sqcRYGate(q, -2.1098420873499504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6352786054305377, 2);
  sqcRYGate(q, 1.6612607037018607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4983738723479272, 2);
  sqcRYGate(q, 2.5077824730385823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9097844830515505, 3);
  sqcRYGate(q, -2.5670675493824557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7019459976871234, 3);
  sqcRYGate(q, 2.9228453299981294, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9597148247921251, 4);
  sqcRYGate(q, -1.582153560116241, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2406902294713493, 4);
  sqcRYGate(q, 1.32048330376218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0474186455675945, 5);
  sqcRYGate(q, -0.9879694066696557, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.763720184167172, 5);
  sqcRYGate(q, -1.1757749927035377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.47172988788091175, 6);
  sqcRYGate(q, -1.850015183486785, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08263611669817304, 6);
  sqcRYGate(q, -0.01149347863774608, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.379563014206765, 7);
  sqcRYGate(q, -2.9125638521387724, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7419450950824542, 7);
  sqcRYGate(q, -1.7450752607410396, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.21486205043946288, 8);
  sqcRYGate(q, -1.6409016196851796, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0471257978768955, 8);
  sqcRYGate(q, -2.969290557791605, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1165325073507668, 9);
  sqcRYGate(q, 2.509348075583924, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1364279779575237, 9);
  sqcRYGate(q, -1.5667672609179357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.00018346458498452733, 10);
  sqcRYGate(q, 2.877252100521247, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.930479084639936, 10);
  sqcRYGate(q, -2.728124834736707, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3015979120516825, 11);
  sqcRYGate(q, 0.07451405996404326, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5566955953996902, 11);
  sqcRYGate(q, 3.076127006062869, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.414554308165351, 12);
  sqcRYGate(q, -1.6156059820615483, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1136491877664874, 12);
  sqcRYGate(q, 2.9715712220627193, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.833956790149758, 13);
  sqcRYGate(q, -1.3017985248158186, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.224948748717642, 13);
  sqcRYGate(q, 0.4283654455541272, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.976283087584658, 14);
  sqcRYGate(q, -2.316075124378452, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8691336809166303, 14);
  sqcRYGate(q, -2.7334350932859532, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8874185007339557, 0);
  sqcRYGate(q, -0.503579109481116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.007768174359936708, 0);
  sqcRYGate(q, -1.304232946737694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0229392820205585, 1);
  sqcRYGate(q, -1.917701469001723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5317462270138485, 1);
  sqcRYGate(q, -1.7507848103310286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.644346666838919, 2);
  sqcRYGate(q, -0.030714089125235374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6724999534228734, 2);
  sqcRYGate(q, 1.798138890388457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.324392406473831, 3);
  sqcRYGate(q, 1.354317579088634, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.425170932116032, 3);
  sqcRYGate(q, -1.8322874848421788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5997597930378386, 4);
  sqcRYGate(q, 1.5952104375461227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9701232347243001, 4);
  sqcRYGate(q, 2.280133635680835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5110298462907388, 5);
  sqcRYGate(q, -2.341964986100837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.169640921519768, 5);
  sqcRYGate(q, -2.0678109033849426, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2628165317141944, 6);
  sqcRYGate(q, -0.12331713418299195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5389198846912295, 6);
  sqcRYGate(q, 0.005064194120226517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.391391076813085, 7);
  sqcRYGate(q, -2.8507937972088513, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3753006593647465, 7);
  sqcRYGate(q, -0.15721993236445275, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6116773277640818, 8);
  sqcRYGate(q, -3.0775240844888625, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6549908802079965, 8);
  sqcRYGate(q, -0.05895559096145979, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6533928876520854, 9);
  sqcRYGate(q, 1.5702792839335962, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3836025400366276, 9);
  sqcRYGate(q, -3.141398903779342, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3355968221855055, 10);
  sqcRYGate(q, -1.86933228278835, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.133738745803461, 10);
  sqcRYGate(q, 2.707125980838681, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2770465577214403, 11);
  sqcRYGate(q, 2.278840525907401, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4749032841539842, 11);
  sqcRYGate(q, -0.26650547612758935, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.057241744886477305, 12);
  sqcRYGate(q, 1.392584296621786, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1223188909055946, 12);
  sqcRYGate(q, 0.3950822139411394, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.529072950255376, 13);
  sqcRYGate(q, -1.2595019037982655, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.5945406090650804, 13);
  sqcRYGate(q, 0.08835717973852919, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.002800301039555642, 14);
  sqcRYGate(q, -0.5066286147423513, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.12021991816814026, 14);
  sqcRYGate(q, -1.035889771185179, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8440920462051985, 0);
  sqcRYGate(q, -0.04537568338885567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9129858848970294, 0);
  sqcRYGate(q, 1.9379480633433548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3967030034080147, 1);
  sqcRYGate(q, -0.6153324593349795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9775218042680452, 1);
  sqcRYGate(q, 0.9791060334159886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0341084947349044, 2);
  sqcRYGate(q, -1.4192884831577128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15392092825915601, 2);
  sqcRYGate(q, -0.5938655922079943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5445392547167427, 3);
  sqcRYGate(q, 2.000039839563425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3133359102831323, 3);
  sqcRYGate(q, -1.0522261443426362, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.018755813286906, 4);
  sqcRYGate(q, 0.9696326315702724, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.660679674637197, 4);
  sqcRYGate(q, -0.7130422181933191, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5178098265919475, 5);
  sqcRYGate(q, 0.6063087535327732, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1415542405908328, 5);
  sqcRYGate(q, 1.5945139279473217, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3917768784636197, 6);
  sqcRYGate(q, 3.1364320025110946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6879907015622693, 6);
  sqcRYGate(q, -0.012505370822173845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3140405573717953, 7);
  sqcRYGate(q, 2.3080540393740923, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1349427407888726, 7);
  sqcRYGate(q, -1.4534985850265443, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.054633628911588, 8);
  sqcRYGate(q, 0.6533883934461515, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.989128309885281, 8);
  sqcRYGate(q, -1.3265686532059169, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0020556500454543, 9);
  sqcRYGate(q, -2.9426200954848176, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5050747167594558, 9);
  sqcRYGate(q, -3.0294269055942946, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7157321703070807, 10);
  sqcRYGate(q, 0.8783313303353333, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1112400467056336, 10);
  sqcRYGate(q, -0.1261221259656562, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6488827310393385, 11);
  sqcRYGate(q, 1.3449564180284543, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.899076966539905, 11);
  sqcRYGate(q, 1.5490063442762585, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.648513541287717, 12);
  sqcRYGate(q, -2.806608318614413, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2590635064200233, 12);
  sqcRYGate(q, 0.5319705293581414, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.062829200278261, 13);
  sqcRYGate(q, -2.143933940297776, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9738511468143782, 13);
  sqcRYGate(q, -1.1136988369439813, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6283298703883569, 14);
  sqcRYGate(q, -0.23091916714042338, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0936011745988394, 14);
  sqcRYGate(q, -1.7033080189512944, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.557278196907356, 0);
  sqcRYGate(q, 1.7627525747275605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04030019382351124, 0);
  sqcRYGate(q, 2.666911020283552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.716231274936859, 1);
  sqcRYGate(q, 0.7508961941544999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.259074054421311, 1);
  sqcRYGate(q, 2.9385968395395174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7610066139816954, 2);
  sqcRYGate(q, 1.209755550535209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18722538006769351, 2);
  sqcRYGate(q, 2.783896514836058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8579951379186777, 3);
  sqcRYGate(q, -0.5097583252345826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.117736054440742, 3);
  sqcRYGate(q, -1.636664819051941, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8315370462109293, 4);
  sqcRYGate(q, -1.898808741462771, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.625952937802111, 4);
  sqcRYGate(q, -1.7511160727270934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2636882661266897, 5);
  sqcRYGate(q, 0.6622387655137185, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.004367743956183947, 5);
  sqcRYGate(q, 1.3522132731445833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.736733231245216, 6);
  sqcRYGate(q, -3.1350535719453068, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3890661977448602, 6);
  sqcRYGate(q, 1.6103647168464938, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.387349133362366, 7);
  sqcRYGate(q, 3.0943501770038955, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.422789024962042, 7);
  sqcRYGate(q, 0.30531969499801903, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.574558150723088, 8);
  sqcRYGate(q, 1.069329032046583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.023732348111968924, 8);
  sqcRYGate(q, -1.8781661573184556, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6810724587210268, 9);
  sqcRYGate(q, -1.5928820410108886, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1161849300533246, 9);
  sqcRYGate(q, 1.5314724210761002, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3721673703291444, 10);
  sqcRYGate(q, -2.2902108003516375, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.006804294670882172, 10);
  sqcRYGate(q, 3.03867128137236, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1168153804623047, 11);
  sqcRYGate(q, -2.7647779389021885, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.1114445313327947, 11);
  sqcRYGate(q, -1.5289264118337655, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.5032310998187124, 12);
  sqcRYGate(q, -1.9076352691190348, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.02152471648878329, 12);
  sqcRYGate(q, -0.02924063962606182, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.10243823433835164, 13);
  sqcRYGate(q, 1.9314448892841254, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.630820967463748, 13);
  sqcRYGate(q, -1.5668745726196116, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.45316486931940325, 14);
  sqcRYGate(q, -0.09792517403091949, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.648118121342013, 14);
  sqcRYGate(q, 2.250988340930774, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.9654431602816693, 0);
  sqcRYGate(q, -2.6729750990005297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5699118431733696, 0);
  sqcRYGate(q, -0.0021584103685237267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3547014742112715, 1);
  sqcRYGate(q, 1.156709007619919, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3787750813403008, 1);
  sqcRYGate(q, 0.4265100859773696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9913881177890862, 2);
  sqcRYGate(q, 1.321465301337969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10738936022670664, 2);
  sqcRYGate(q, 0.544631786475823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2766841430764329, 3);
  sqcRYGate(q, -1.9883151007138402, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6410807129875882, 3);
  sqcRYGate(q, 1.1421914765715417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3924362390184397, 4);
  sqcRYGate(q, -1.0553210555211923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.453314032922381, 4);
  sqcRYGate(q, 1.997251908465235, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.158799412608495, 5);
  sqcRYGate(q, 0.009586600106036137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0197172638694214, 5);
  sqcRYGate(q, 0.019902050878783606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5815360007382389, 6);
  sqcRYGate(q, 2.5169491367083703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.134640789406577, 6);
  sqcRYGate(q, -1.89099145205574, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6225455602965577, 7);
  sqcRYGate(q, 1.5752742547333929, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.427071896472636, 7);
  sqcRYGate(q, -0.3022290386282851, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1348551446615693, 8);
  sqcRYGate(q, 1.553821976877236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6933101458491473, 8);
  sqcRYGate(q, 1.5611174973032247, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5551658266154709, 9);
  sqcRYGate(q, 1.5666011483808118, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2785682809026435, 9);
  sqcRYGate(q, -1.564958185132351, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7813648078262823, 10);
  sqcRYGate(q, -0.3285367375893041, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.017166246270068797, 10);
  sqcRYGate(q, 0.9265252130371088, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8832337607747196, 11);
  sqcRYGate(q, -0.7302607274008213, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.1901778573696356, 11);
  sqcRYGate(q, 2.8063060979023224, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.555509746868191, 12);
  sqcRYGate(q, -0.8795305919635146, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4169102208464954, 12);
  sqcRYGate(q, -1.5647126838822316, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7445738097214014, 13);
  sqcRYGate(q, -0.11056327674806239, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0857150327374612, 13);
  sqcRYGate(q, 1.548441896970176, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.2996457782202462, 14);
  sqcRYGate(q, 2.7399979781047015, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0440257853078396, 14);
  sqcRYGate(q, -3.100370851612738, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.0772489126141336, 0);
  sqcRYGate(q, -1.8017509476238398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7501607723653416, 0);
  sqcRYGate(q, 2.646157881524709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6048121560330744, 1);
  sqcRYGate(q, 2.271437518193516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4775554346449724, 1);
  sqcRYGate(q, -1.015442701339035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.786990420844897, 2);
  sqcRYGate(q, 1.1361205978871582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6035718132450967, 2);
  sqcRYGate(q, 1.670513969750056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5572093314219794, 3);
  sqcRYGate(q, -0.41361963813855374, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.08305543642569548, 3);
  sqcRYGate(q, 2.911622316958421, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3415797182412033, 4);
  sqcRYGate(q, 2.8435605450790886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8984024678582827, 4);
  sqcRYGate(q, -2.0945189897299805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8934658369135886, 5);
  sqcRYGate(q, 1.4348567854432517, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.057629954566228, 5);
  sqcRYGate(q, 0.012185786504360863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5058638040482633, 6);
  sqcRYGate(q, 1.05680533663236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1318462681936795, 6);
  sqcRYGate(q, 2.435262583815013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8706698855046371, 7);
  sqcRYGate(q, 0.5273696196809814, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.001257048099535858, 7);
  sqcRYGate(q, 3.1309044852041352, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1184225882944387, 8);
  sqcRYGate(q, -1.5546783352697178, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8542148200728876, 8);
  sqcRYGate(q, 1.126275542993505, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6607584261629516, 9);
  sqcRYGate(q, 1.5380945051863677, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.733919693470426, 9);
  sqcRYGate(q, 0.001063096377428457, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0889225304304593, 10);
  sqcRYGate(q, 3.1040905688717126, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6218144461137385, 10);
  sqcRYGate(q, 0.960552458601621, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5393529243896915, 11);
  sqcRYGate(q, 1.5235949631853423, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.771288259695601, 11);
  sqcRYGate(q, 1.5665855310206729, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6318372264546346, 12);
  sqcRYGate(q, 1.5310642705997148, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.647023805138244, 12);
  sqcRYGate(q, -1.577985034809332, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.42123536672728, 13);
  sqcRYGate(q, 1.6368894650878112, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6396876557142983, 13);
  sqcRYGate(q, 1.5628164359962646, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.9569137387940567, 14);
  sqcRYGate(q, 0.8095398527099285, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.414219523076789, 14);
  sqcRYGate(q, -1.655894978004138, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0221090601545415, 0);
  sqcRYGate(q, -1.5771136940723336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1586418912185978, 0);
  sqcRYGate(q, 1.2671487152826817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5812907774055618, 1);
  sqcRYGate(q, 0.07568731355137093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9146043817292585, 1);
  sqcRYGate(q, 0.03612014604880098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04418841968441696, 2);
  sqcRYGate(q, -0.6461180081144957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5691076333885672, 2);
  sqcRYGate(q, 1.61838039729078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4543805219870694, 3);
  sqcRYGate(q, 0.7571369021943113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.32893422571508035, 3);
  sqcRYGate(q, 2.763095826813723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0835582153330359, 4);
  sqcRYGate(q, 2.212019310391659, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1852208912471287, 4);
  sqcRYGate(q, -2.054225657574303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4385814836454847, 5);
  sqcRYGate(q, -1.456717480983227, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.987387380469702, 5);
  sqcRYGate(q, -3.1180745165324706, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03179910772776346, 6);
  sqcRYGate(q, -2.959643642263632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5109078083726637, 6);
  sqcRYGate(q, 1.4764334319724064, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2423748793701406, 7);
  sqcRYGate(q, 1.5661389179156733, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6635139159872803, 7);
  sqcRYGate(q, 3.129695240848019, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0022704006850537053, 8);
  sqcRYGate(q, -3.0482180715171454, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5850116786859056, 8);
  sqcRYGate(q, 1.5170682403923519, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7298629882222243, 9);
  sqcRYGate(q, 3.0254179756288706, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1377744408650745, 9);
  sqcRYGate(q, 3.1405710984807227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9654768521300356, 10);
  sqcRYGate(q, 1.4663954815282247, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1048574100366375, 10);
  sqcRYGate(q, 3.1401839425143363, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0282773066578432, 11);
  sqcRYGate(q, -1.6175426257130834, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2194571837179669, 11);
  sqcRYGate(q, -1.5707558412519926, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1209427353733163, 12);
  sqcRYGate(q, 1.567072617290791, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7358340024402885, 12);
  sqcRYGate(q, -1.5880584318107136, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.103044467203863, 13);
  sqcRYGate(q, 1.5598824504938955, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5797993910865358, 13);
  sqcRYGate(q, 1.5663819911863701, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.003388144528940623, 14);
  sqcRYGate(q, 2.5840003156006106, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.02247258439975308, 14);
  sqcRYGate(q, 1.58238988531033, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2949527932149363, 0);
  sqcRYGate(q, 1.7339009230015696, 1);
  sqcRYGate(q, -2.15578304011357, 2);
  sqcRYGate(q, 1.848635222514778, 3);
  sqcRYGate(q, -0.608119103350195, 4);
  sqcRYGate(q, 1.0999964172673145, 5);
  sqcRYGate(q, -2.5443058027704337, 6);
  sqcRYGate(q, -1.1587849883586898, 7);
  sqcRYGate(q, 2.7404336583980946, 8);
  sqcRYGate(q, -2.0841095537888323, 9);
  sqcRYGate(q, 3.002541269534799, 10);
  sqcRYGate(q, -1.5108060024791028, 11);
  sqcRYGate(q, 1.4298011121237628, 12);
  sqcRYGate(q, 2.939642092499836, 13);
  sqcRYGate(q, -1.8467979469678966, 14);
  sqcRYGate(q, 0.4695627448099059, 15);

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
