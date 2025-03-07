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

  sqcRYGate(q, 0.00019911324163033263, 0);
  sqcRZGate(q, -1.2547697132268842, 0);
  sqcRYGate(q, -1.0734593028847708, 1);
  sqcRZGate(q, -3.1412388650327703, 1);
  sqcRYGate(q, -2.97048701900582, 2);
  sqcRZGate(q, -3.1338819610107578, 2);
  sqcRYGate(q, -1.5675868327433322, 3);
  sqcRZGate(q, 3.09551549580355, 3);
  sqcRYGate(q, 7.916140966823802e-05, 4);
  sqcRZGate(q, -0.9241582580739868, 4);
  sqcRYGate(q, -6.41903663112231e-06, 5);
  sqcRZGate(q, 0.5979888340186582, 5);
  sqcRYGate(q, -6.189097861941661e-05, 6);
  sqcRZGate(q, 2.0755265756964443, 6);
  sqcRYGate(q, -3.140769586718454, 7);
  sqcRZGate(q, 3.030073429383323, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.0006167122643777894, 0);
  sqcRZGate(q, 1.9785756502665297, 0);
  sqcRYGate(q, -1.5772548337003784, 1);
  sqcRZGate(q, -0.5786283978468462, 1);
  sqcRYGate(q, 1.5702171766125406, 2);
  sqcRZGate(q, 1.6742818730695008, 2);
  sqcRYGate(q, 0.007560396904697342, 3);
  sqcRZGate(q, -0.11971846255423181, 3);
  sqcRYGate(q, -1.5698261978190626, 4);
  sqcRZGate(q, -1.0125468723494107, 4);
  sqcRYGate(q, 1.5708265516371238, 5);
  sqcRZGate(q, -0.003000193503546693, 5);
  sqcRYGate(q, -1.571211462547863, 6);
  sqcRZGate(q, 1.573008047983628, 6);
  sqcRYGate(q, -1.57076604310934, 7);
  sqcRZGate(q, 0.08913009070089473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5690558704609807, 0);
  sqcRZGate(q, 1.5001376997445997, 0);
  sqcRYGate(q, -2.81339773708006, 1);
  sqcRZGate(q, -0.6070894473407229, 1);
  sqcRYGate(q, -3.0633323892110322, 2);
  sqcRZGate(q, 1.8305090168736735, 2);
  sqcRYGate(q, 0.5041914520986022, 3);
  sqcRZGate(q, 0.12018032950029549, 3);
  sqcRYGate(q, 3.1415670909426883, 4);
  sqcRZGate(q, 0.8032021172659992, 4);
  sqcRYGate(q, 2.836214188299467, 5);
  sqcRZGate(q, -1.5738185845807724, 5);
  sqcRYGate(q, 1.5697406386926112, 6);
  sqcRZGate(q, 1.4088949673843718, 6);
  sqcRYGate(q, 1.3682339474487282, 7);
  sqcRZGate(q, -1.0614552344803547, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0001707251474615544, 0);
  sqcRZGate(q, 1.040771480889223, 0);
  sqcRYGate(q, 1.6807129384513104, 1);
  sqcRZGate(q, -1.4777879432668923, 1);
  sqcRYGate(q, -0.20854679066454007, 2);
  sqcRZGate(q, -0.34248954398710213, 2);
  sqcRYGate(q, 1.1103759189878915, 3);
  sqcRZGate(q, 1.526028266745394, 3);
  sqcRYGate(q, 0.0021550638359011387, 4);
  sqcRZGate(q, 1.3256824476891054, 4);
  sqcRYGate(q, -0.6460984634197064, 5);
  sqcRZGate(q, -1.5684587468727804, 5);
  sqcRYGate(q, 0.0043868889110609734, 6);
  sqcRZGate(q, -0.28002375573521654, 6);
  sqcRYGate(q, 2.175677076129611, 7);
  sqcRZGate(q, -1.8744099530081082, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.0348036756878685e-05, 0);
  sqcRZGate(q, -2.0530113137381916, 0);
  sqcRYGate(q, 2.9425341664588487, 1);
  sqcRZGate(q, -1.535459440734946, 1);
  sqcRYGate(q, -3.057753318406121, 2);
  sqcRZGate(q, 1.3542532866673422, 2);
  sqcRYGate(q, -1.1882925659526058, 3);
  sqcRZGate(q, -0.7797716505316047, 3);
  sqcRYGate(q, 1.6436086289968033, 4);
  sqcRZGate(q, -1.570683093143777, 4);
  sqcRYGate(q, -2.989779559920286, 5);
  sqcRZGate(q, 1.5736348141526335, 5);
  sqcRYGate(q, 0.0003955306082721424, 6);
  sqcRZGate(q, -0.7273416927745214, 6);
  sqcRYGate(q, -0.20107772440077554, 7);
  sqcRZGate(q, -0.9753779380160525, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.8422763546394575e-05, 0);
  sqcRZGate(q, -0.4163786384400451, 0);
  sqcRYGate(q, -1.4351640418010163, 1);
  sqcRZGate(q, -2.2630127964037445, 1);
  sqcRYGate(q, -2.1881144876571237, 2);
  sqcRZGate(q, -2.8453081423223514, 2);
  sqcRYGate(q, -2.9164172857653368, 3);
  sqcRZGate(q, -0.7426147825985023, 3);
  sqcRYGate(q, 2.6755298192517554, 4);
  sqcRZGate(q, 1.5697550442875632, 4);
  sqcRYGate(q, -2.658897768795352, 5);
  sqcRZGate(q, 3.1011236787671113, 5);
  sqcRYGate(q, 5.724129282480561e-05, 6);
  sqcRZGate(q, 1.0021198314483382, 6);
  sqcRYGate(q, 1.5722786611875703, 7);
  sqcRZGate(q, -0.7323447396472105, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5691729633962772, 0);
  sqcRZGate(q, -3.140030434352981, 0);
  sqcRYGate(q, -3.1355154176035795, 1);
  sqcRZGate(q, 1.4748204317100762, 1);
  sqcRYGate(q, -1.4032210503457616, 2);
  sqcRZGate(q, -1.101485121473447, 2);
  sqcRYGate(q, -1.335275167105166, 3);
  sqcRZGate(q, 2.1038719475445955, 3);
  sqcRYGate(q, -2.8073003383717867, 4);
  sqcRZGate(q, -1.571986961481561, 4);
  sqcRYGate(q, 3.1409903068371414, 5);
  sqcRZGate(q, 1.5298197680339998, 5);
  sqcRYGate(q, -1.5676484658436616, 6);
  sqcRZGate(q, 0.6539585826174037, 6);
  sqcRYGate(q, 0.08301694886296929, 7);
  sqcRZGate(q, -0.9162750395509862, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5707742780876304, 0);
  sqcRZGate(q, 3.141183045594611, 0);
  sqcRYGate(q, -0.0005552155064521003, 1);
  sqcRZGate(q, -0.20812460133311195, 1);
  sqcRYGate(q, 3.1348891787599893, 2);
  sqcRZGate(q, -1.5579946164549066, 2);
  sqcRYGate(q, -0.000658952756565174, 3);
  sqcRZGate(q, -1.1463586810153579, 3);
  sqcRYGate(q, -1.6012030524236083, 4);
  sqcRZGate(q, 0.255759101994991, 4);
  sqcRYGate(q, -1.570848810614686, 5);
  sqcRZGate(q, -1.6006169657038598, 5);
  sqcRYGate(q, 3.1413757654073198, 6);
  sqcRZGate(q, 2.2289737836822487, 6);
  sqcRYGate(q, 1.5708005333387904, 7);
  sqcRZGate(q, 1.570688407553998, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5999511488626368, 0);
  sqcRZGate(q, 0.5488447636463716, 0);
  sqcRYGate(q, -1.5439317750509234, 1);
  sqcRZGate(q, 0.4499791376061339, 1);
  sqcRYGate(q, -1.5406503520767272, 2);
  sqcRZGate(q, -0.6123289849701542, 2);
  sqcRYGate(q, -1.5508470276681925, 3);
  sqcRZGate(q, -2.2634199953951817, 3);
  sqcRYGate(q, -0.1182920966437252, 4);
  sqcRZGate(q, 2.4068245774872956, 4);
  sqcRYGate(q, -1.5124230127096752, 5);
  sqcRZGate(q, -1.570626604807373, 5);
  sqcRYGate(q, -1.601354827721106, 6);
  sqcRZGate(q, -2.1111872325800096, 6);
  sqcRYGate(q, -1.438860943338554, 7);
  sqcRZGate(q, -1.5709035922218273, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.141522549908823, 0);
  sqcRZGate(q, -2.3154287723337252, 0);
  sqcRYGate(q, -3.1415006503242786, 1);
  sqcRZGate(q, 0.44209142200634255, 1);
  sqcRYGate(q, -3.1415247401981636, 2);
  sqcRZGate(q, 2.5259404084454005, 2);
  sqcRYGate(q, -3.1415026027135022, 3);
  sqcRZGate(q, 0.8933416463275027, 3);
  sqcRYGate(q, 0.00020543970854697697, 4);
  sqcRZGate(q, -1.096885356934774, 4);
  sqcRYGate(q, -1.5709299780539234, 5);
  sqcRZGate(q, 1.413919356201487, 5);
  sqcRYGate(q, -0.00021781865478837602, 6);
  sqcRZGate(q, -1.8405136474629558, 6);
  sqcRYGate(q, -1.570915094411229, 7);
  sqcRZGate(q, -1.8490623304986695, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1326542955911565, 0);
  sqcRZGate(q, 2.3662024633764163, 0);
  sqcRYGate(q, -1.5926734096358581, 1);
  sqcRZGate(q, 2.089365541816507, 1);
  sqcRYGate(q, 1.5793849324337337, 2);
  sqcRZGate(q, -1.052656495007767, 2);
  sqcRYGate(q, -1.5486379742296381, 3);
  sqcRZGate(q, -1.0522297685058328, 3);
  sqcRYGate(q, -1.6428862326470322, 4);
  sqcRZGate(q, 2.088175272024781, 4);
  sqcRYGate(q, 0.14474296130573105, 5);
  sqcRZGate(q, -2.4678614253165176, 5);
  sqcRYGate(q, 0.006673217138433463, 6);
  sqcRZGate(q, -0.24296767501760771, 6);
  sqcRYGate(q, -0.03701524884185229, 7);
  sqcRZGate(q, -0.7745122386638115, 7);

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
