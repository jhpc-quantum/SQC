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

  sqcRYGate(q, 3.1386178408506225, 0);
  sqcRZGate(q, 1.7334012488339638, 0);
  sqcRYGate(q, -2.891234713369487, 1);
  sqcRZGate(q, -1.7844936841951116, 1);
  sqcRYGate(q, -2.8967073544851276, 2);
  sqcRZGate(q, -1.4706887117003216, 2);
  sqcRYGate(q, -1.826223460489284, 3);
  sqcRZGate(q, -2.580706517295399, 3);
  sqcRYGate(q, 0.8157715076937226, 4);
  sqcRZGate(q, 2.0115088762623197, 4);
  sqcRYGate(q, -2.2954068806914423, 5);
  sqcRZGate(q, 3.1344909458714696, 5);
  sqcRYGate(q, -1.028247564439173, 6);
  sqcRZGate(q, -2.9991925040130476, 6);
  sqcRYGate(q, -1.1687407122866853, 7);
  sqcRZGate(q, 1.3300045420741187, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4667220923157622, 0);
  sqcRZGate(q, -0.36931718973846367, 0);
  sqcRYGate(q, -1.8821525699138402, 1);
  sqcRZGate(q, -0.4504492457407199, 1);
  sqcRYGate(q, 1.7101975543376842, 2);
  sqcRZGate(q, 1.0569966006363887, 2);
  sqcRYGate(q, 0.813887999462314, 3);
  sqcRZGate(q, -2.261027775802851, 3);
  sqcRYGate(q, -1.6831111370148748, 4);
  sqcRZGate(q, -0.9478963843864356, 4);
  sqcRYGate(q, 0.22012456360593455, 5);
  sqcRZGate(q, -1.3362625493940692, 5);
  sqcRYGate(q, 2.627146479331735, 6);
  sqcRZGate(q, 1.609224480328384, 6);
  sqcRYGate(q, 1.0242088740080755, 7);
  sqcRZGate(q, -2.612857868092361, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0028532602870861012, 0);
  sqcRZGate(q, -2.759879660156151, 0);
  sqcRYGate(q, -1.627445977794226, 1);
  sqcRZGate(q, -0.0005024041133270302, 1);
  sqcRYGate(q, 0.5201498643088937, 2);
  sqcRZGate(q, 1.9994362080893513, 2);
  sqcRYGate(q, 2.8979194487558506, 3);
  sqcRZGate(q, 2.6031400112119303, 3);
  sqcRYGate(q, 1.4147152502508942, 4);
  sqcRZGate(q, 1.8126495032619667, 4);
  sqcRYGate(q, 0.8288603091376041, 5);
  sqcRZGate(q, 0.9243030261859185, 5);
  sqcRYGate(q, -1.832372931156434, 6);
  sqcRZGate(q, 0.11179291854479345, 6);
  sqcRYGate(q, -1.5601879469027986, 7);
  sqcRZGate(q, 1.1604696180074854, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0874339140601474, 0);
  sqcRZGate(q, 2.687304510810437, 0);
  sqcRYGate(q, -0.9910017766360854, 1);
  sqcRZGate(q, 2.071230120439862, 1);
  sqcRYGate(q, 0.0013605632074750824, 2);
  sqcRZGate(q, -2.159989858021457, 2);
  sqcRYGate(q, -0.49253371651026656, 3);
  sqcRZGate(q, 1.72245226515372, 3);
  sqcRYGate(q, 0.15610361733830846, 4);
  sqcRZGate(q, -1.7163763709860398, 4);
  sqcRYGate(q, 0.03134480193680478, 5);
  sqcRZGate(q, -2.537030242648567, 5);
  sqcRYGate(q, -2.3387390230423124, 6);
  sqcRZGate(q, 3.073511391127206, 6);
  sqcRYGate(q, -1.8374612463159807, 7);
  sqcRZGate(q, -1.7901725664405665, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.139652133442975, 0);
  sqcRZGate(q, 1.1194180453995775, 0);
  sqcRYGate(q, -0.24175533017747508, 1);
  sqcRZGate(q, -2.0821594075517815, 1);
  sqcRYGate(q, 1.9141955638976313, 2);
  sqcRZGate(q, 1.8725970265397187, 2);
  sqcRYGate(q, 0.8337081345721123, 3);
  sqcRZGate(q, -0.2715218684763891, 3);
  sqcRYGate(q, 1.5331851396354605, 4);
  sqcRZGate(q, -0.03565729510711968, 4);
  sqcRYGate(q, 1.6475685361049015, 5);
  sqcRZGate(q, 0.8752010264861134, 5);
  sqcRYGate(q, 1.1565163884632546, 6);
  sqcRZGate(q, 1.552809671826907, 6);
  sqcRYGate(q, -1.5543395392579462, 7);
  sqcRZGate(q, -0.27908391541993094, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5796486490710926, 0);
  sqcRZGate(q, -1.670469529565026, 0);
  sqcRYGate(q, 1.589471129646883, 1);
  sqcRZGate(q, -1.572374769588759, 1);
  sqcRYGate(q, 0.00016015167936084927, 2);
  sqcRZGate(q, -0.32093768834221414, 2);
  sqcRYGate(q, 1.564345659023991, 3);
  sqcRZGate(q, 2.558992627909065, 3);
  sqcRYGate(q, -1.7834092264094172, 4);
  sqcRZGate(q, 0.70293768469464, 4);
  sqcRYGate(q, 1.1631148124666542, 5);
  sqcRZGate(q, 0.927309850829908, 5);
  sqcRYGate(q, 1.5115915215169853, 6);
  sqcRZGate(q, 1.9391027677529689, 6);
  sqcRYGate(q, 2.2562010113442303, 7);
  sqcRZGate(q, 1.4446751256401846, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.919874746669511, 0);
  sqcRZGate(q, 1.4831477631403285, 0);
  sqcRYGate(q, 1.5719316934181828, 1);
  sqcRZGate(q, 0.4446195647997008, 1);
  sqcRYGate(q, 1.6060998306071064, 2);
  sqcRZGate(q, -0.7553000057676066, 2);
  sqcRYGate(q, 1.809844882927031, 3);
  sqcRZGate(q, -2.566155997298183, 3);
  sqcRYGate(q, -2.1787587859000115, 4);
  sqcRZGate(q, -0.3397133544847284, 4);
  sqcRYGate(q, 2.504368836427985, 5);
  sqcRZGate(q, -1.4538208608961218, 5);
  sqcRYGate(q, -1.1855990577854552, 6);
  sqcRZGate(q, 0.4497268544308, 6);
  sqcRYGate(q, 1.5372857236207818, 7);
  sqcRZGate(q, -1.0587944145487649, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7438550635882026, 0);
  sqcRZGate(q, -1.3789101182648018, 0);
  sqcRYGate(q, -3.03149547515304, 1);
  sqcRZGate(q, 0.012831217512993105, 1);
  sqcRYGate(q, -0.7213271651047154, 2);
  sqcRZGate(q, 1.7323828781344077, 2);
  sqcRYGate(q, 2.320374913886195, 3);
  sqcRZGate(q, -0.07737891143370527, 3);
  sqcRYGate(q, 1.3753645808819164, 4);
  sqcRZGate(q, -0.7349199190125485, 4);
  sqcRYGate(q, -1.7021935481848636, 5);
  sqcRZGate(q, -2.39885519678557, 5);
  sqcRYGate(q, -2.4452884321061483, 6);
  sqcRZGate(q, -2.75719065552087, 6);
  sqcRYGate(q, -2.925999573361755, 7);
  sqcRZGate(q, -2.100369532512361, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.569430206757401, 0);
  sqcRZGate(q, -0.2305230467191182, 0);
  sqcRYGate(q, -0.0007396233382461046, 1);
  sqcRZGate(q, 3.131673084822783, 1);
  sqcRYGate(q, -3.1407343516393254, 2);
  sqcRZGate(q, -2.3326734060692367, 2);
  sqcRYGate(q, 2.2215186541566307, 3);
  sqcRZGate(q, -2.3395124847880466, 3);
  sqcRYGate(q, 2.7853215445316097, 4);
  sqcRZGate(q, 0.8064195712486306, 4);
  sqcRYGate(q, 1.2573672052774816, 5);
  sqcRZGate(q, -2.299234285574642, 5);
  sqcRYGate(q, -2.22970471611543, 6);
  sqcRZGate(q, 2.264865821132668, 6);
  sqcRYGate(q, 3.13086608637363, 7);
  sqcRZGate(q, 0.03168807158099437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7886935518868685, 0);
  sqcRZGate(q, -2.6787792630328178, 0);
  sqcRYGate(q, -1.5710442430779572, 1);
  sqcRZGate(q, -1.5649113581737186, 1);
  sqcRYGate(q, 3.0466286766331105, 2);
  sqcRZGate(q, -1.7154027680955082, 2);
  sqcRYGate(q, 2.195985239132347, 3);
  sqcRZGate(q, -1.671120023952299, 3);
  sqcRYGate(q, -2.0774421476965266, 4);
  sqcRZGate(q, 1.8124544073636049, 4);
  sqcRYGate(q, 1.9886092247799128, 5);
  sqcRZGate(q, 2.458566770350521, 5);
  sqcRYGate(q, -2.8797447318329783, 6);
  sqcRZGate(q, -2.4437291051531, 6);
  sqcRYGate(q, 2.630251276307928, 7);
  sqcRZGate(q, -1.8931467385304575, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2678513800665412, 0);
  sqcRZGate(q, -0.226053501521829, 0);
  sqcRYGate(q, 2.989851146831471, 1);
  sqcRZGate(q, 0.08475803282559903, 1);
  sqcRYGate(q, 1.5704399332660044, 2);
  sqcRZGate(q, -1.5704750446981632, 2);
  sqcRYGate(q, -0.6845914276983156, 3);
  sqcRZGate(q, 1.0648418599539176, 3);
  sqcRYGate(q, -0.2121916516566685, 4);
  sqcRZGate(q, 3.021627066964152, 4);
  sqcRYGate(q, -1.769710916455126, 5);
  sqcRZGate(q, -0.783429400926832, 5);
  sqcRYGate(q, -1.036435739478963, 6);
  sqcRZGate(q, -2.660304570427943, 6);
  sqcRYGate(q, -3.1352155130517767, 7);
  sqcRZGate(q, 3.0309078253970565, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5013434707737, 0);
  sqcRZGate(q, 0.013971618398268121, 0);
  sqcRYGate(q, -3.141490186589355, 1);
  sqcRZGate(q, 0.07906671928609743, 1);
  sqcRYGate(q, 1.5711057497529488, 2);
  sqcRZGate(q, -1.783038178294091, 2);
  sqcRYGate(q, -1.5707958312365644, 3);
  sqcRZGate(q, -1.570391671624552, 3);
  sqcRYGate(q, -1.2838298077050077, 4);
  sqcRZGate(q, 1.1777140472658567, 4);
  sqcRYGate(q, -1.7570513897765767, 5);
  sqcRZGate(q, 1.9092568824478304, 5);
  sqcRYGate(q, 2.039193407572788, 6);
  sqcRZGate(q, 2.57909397812338, 6);
  sqcRYGate(q, 1.430719901608895, 7);
  sqcRZGate(q, -1.8284442067440683, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.930280227300666, 0);
  sqcRZGate(q, 0.018510652912543616, 0);
  sqcRYGate(q, -1.5703375753913287, 1);
  sqcRZGate(q, 1.2194564230734928, 1);
  sqcRYGate(q, 0.0004434525407299716, 2);
  sqcRZGate(q, -0.7971723949985631, 2);
  sqcRYGate(q, 1.3306925373786027, 3);
  sqcRZGate(q, -0.0039259430712770115, 3);
  sqcRYGate(q, 3.141506751182649, 4);
  sqcRZGate(q, -1.2333262753794092, 4);
  sqcRYGate(q, -2.3877517977965885, 5);
  sqcRZGate(q, -2.6716093172202067, 5);
  sqcRYGate(q, -0.7671700760081492, 6);
  sqcRZGate(q, 1.5839137533372059, 6);
  sqcRYGate(q, -3.1349785457019337, 7);
  sqcRZGate(q, -1.3110697143614152, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5706643415429493, 0);
  sqcRZGate(q, -1.8016290038706875, 0);
  sqcRYGate(q, 0.6775099418138683, 1);
  sqcRZGate(q, 1.3616962271423354, 1);
  sqcRYGate(q, 2.68247805944431, 2);
  sqcRZGate(q, 1.4600899519610318, 2);
  sqcRYGate(q, -0.13134970491631037, 3);
  sqcRZGate(q, -1.5677028146721133, 3);
  sqcRYGate(q, 2.6305611751531646, 4);
  sqcRZGate(q, 2.361235514255593, 4);
  sqcRYGate(q, 0.8472059491562014, 5);
  sqcRZGate(q, -2.143324088440682, 5);
  sqcRYGate(q, 1.4146094796770285, 6);
  sqcRZGate(q, 0.8292083487774554, 6);
  sqcRYGate(q, -0.5704101981316896, 7);
  sqcRZGate(q, -1.367654772837026, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.00016480773160143514, 0);
  sqcRZGate(q, 0.539263408432741, 0);
  sqcRYGate(q, 1.7554717989324091, 1);
  sqcRZGate(q, -2.5851195139819088, 1);
  sqcRYGate(q, 0.000818610841974099, 2);
  sqcRZGate(q, 0.8347457106462368, 2);
  sqcRYGate(q, 1.5715705506075948, 3);
  sqcRZGate(q, -1.6524910708854046, 3);
  sqcRYGate(q, -1.5707938516144502, 4);
  sqcRZGate(q, -2.201511764555232, 4);
  sqcRYGate(q, -0.21988043519575662, 5);
  sqcRZGate(q, -2.143715826269258, 5);
  sqcRYGate(q, -1.608641645867843, 6);
  sqcRZGate(q, 2.63264272029755, 6);
  sqcRYGate(q, 0.014098517011432974, 7);
  sqcRZGate(q, -3.1007940792917186, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.571001611000165, 0);
  sqcRZGate(q, -1.5707719604790542, 0);
  sqcRYGate(q, 2.809429787505355, 1);
  sqcRZGate(q, 1.8698744513653924, 1);
  sqcRYGate(q, -1.570621376397674, 2);
  sqcRZGate(q, -3.141287876293784, 2);
  sqcRYGate(q, 1.6738024215849059, 3);
  sqcRZGate(q, -1.1662492794946002, 3);
  sqcRYGate(q, -0.0007077339995014142, 4);
  sqcRZGate(q, 0.63034474329808, 4);
  sqcRYGate(q, 1.571075112512494, 5);
  sqcRZGate(q, 3.141360443011278, 5);
  sqcRYGate(q, -0.09436476642454306, 6);
  sqcRZGate(q, 1.4240853981717996, 6);
  sqcRYGate(q, 2.45018105595967, 7);
  sqcRZGate(q, -2.8592469069128432, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.570526923222615, 0);
  sqcRZGate(q, 3.1413628203643293, 0);
  sqcRYGate(q, 1.3609283105736205, 1);
  sqcRZGate(q, 0.3754597654011862, 1);
  sqcRYGate(q, -1.5708676013244969, 2);
  sqcRZGate(q, -0.05707090677268885, 2);
  sqcRYGate(q, 0.15577379630531285, 3);
  sqcRZGate(q, -0.6785322848402314, 3);
  sqcRYGate(q, -1.569802282034871, 4);
  sqcRZGate(q, -2.802779130009205, 4);
  sqcRYGate(q, 1.0475062390368057, 5);
  sqcRZGate(q, -2.092702118066031, 5);
  sqcRYGate(q, -3.1414143471683236, 6);
  sqcRZGate(q, -0.34106758921080704, 6);
  sqcRYGate(q, -0.009941533562808065, 7);
  sqcRZGate(q, -1.7424516222678295, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.933718408804598, 0);
  sqcRZGate(q, 0.851918239511579, 0);
  sqcRYGate(q, -7.550869813898274e-05, 1);
  sqcRZGate(q, -1.2930911180895333, 1);
  sqcRYGate(q, -0.0002171181913324105, 2);
  sqcRZGate(q, -0.1338625796791004, 2);
  sqcRYGate(q, -0.28122964447726595, 3);
  sqcRZGate(q, -0.9331444581123778, 3);
  sqcRYGate(q, -2.187634052494249, 4);
  sqcRZGate(q, 1.0744894319750997, 4);
  sqcRYGate(q, -3.1411869614570103, 5);
  sqcRZGate(q, -0.5219552161634482, 5);
  sqcRYGate(q, -0.8627054475710331, 6);
  sqcRZGate(q, 0.42505907760822476, 6);
  sqcRYGate(q, -2.607482650577599, 7);
  sqcRZGate(q, -1.2451578934313385, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.141150489479703, 0);
  sqcRZGate(q, -0.7187387776119956, 0);
  sqcRYGate(q, 0.7406705339976086, 1);
  sqcRZGate(q, 2.905430696697618, 1);
  sqcRYGate(q, 1.5706964892187605, 2);
  sqcRZGate(q, 3.1409741370371522, 2);
  sqcRYGate(q, 1.953939727730221, 3);
  sqcRZGate(q, 1.200475585789856, 3);
  sqcRYGate(q, -1.5712977885130597, 4);
  sqcRZGate(q, -3.1405535545845202, 4);
  sqcRYGate(q, -1.5707977983047603, 5);
  sqcRZGate(q, 1.2970455537307184, 5);
  sqcRYGate(q, 0.00012673282807081613, 6);
  sqcRZGate(q, -1.2828293252420078, 6);
  sqcRYGate(q, 1.5711281643742563, 7);
  sqcRZGate(q, -1.5683320764977877, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5709243825675818, 0);
  sqcRZGate(q, -2.9782921364350052, 0);
  sqcRYGate(q, -0.0012227284719146761, 1);
  sqcRZGate(q, 2.758065578300137, 1);
  sqcRYGate(q, -1.5705595739781353, 2);
  sqcRZGate(q, -0.45051666998971596, 2);
  sqcRYGate(q, -0.8245509648103924, 3);
  sqcRZGate(q, 1.6271753002079676, 3);
  sqcRYGate(q, 1.5701403704192665, 4);
  sqcRZGate(q, -2.130099501054861, 4);
  sqcRYGate(q, 1.4396190672384916, 5);
  sqcRZGate(q, -2.8396930857866525, 5);
  sqcRYGate(q, -2.945298473822078e-05, 6);
  sqcRZGate(q, -3.0377637248490577, 6);
  sqcRYGate(q, -1.567842933078323, 7);
  sqcRZGate(q, 2.165637463576184, 7);

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
