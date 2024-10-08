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

  sqcRYGate(q, -0.49282427533039996, 0);
  sqcRZGate(q, 2.8578225103535124, 0);
  sqcRYGate(q, 2.1788984601637447, 1);
  sqcRZGate(q, -2.8264773272145147, 1);
  sqcRYGate(q, -2.4752068947744488, 2);
  sqcRZGate(q, 1.3216303219708259, 2);
  sqcRYGate(q, -2.5382863872933035, 3);
  sqcRZGate(q, -0.8947817652093881, 3);
  sqcRYGate(q, -0.7780253372212808, 4);
  sqcRZGate(q, -2.6082774093497822, 4);
  sqcRYGate(q, 0.8956087151211571, 5);
  sqcRZGate(q, -1.2991788018769699, 5);
  sqcRYGate(q, -0.7888317985500332, 6);
  sqcRZGate(q, 0.9810014354462424, 6);
  sqcRYGate(q, 2.3890346610693642, 7);
  sqcRZGate(q, 0.4773039676658008, 7);
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
  sqcRYGate(q, -2.427724472379776, 0);
  sqcRZGate(q, -2.0014079448173963, 0);
  sqcRYGate(q, -2.3308638194775453, 1);
  sqcRZGate(q, -0.8406768241621567, 1);
  sqcRYGate(q, 0.9948785026701037, 2);
  sqcRZGate(q, -1.6451833762481574, 2);
  sqcRYGate(q, -0.7161324545939239, 3);
  sqcRZGate(q, 2.966828511252683, 3);
  sqcRYGate(q, 0.870625179783419, 4);
  sqcRZGate(q, 1.6146521438352432, 4);
  sqcRYGate(q, -1.5421478718875674, 5);
  sqcRZGate(q, -0.45415472487400693, 5);
  sqcRYGate(q, 2.489131024745093, 6);
  sqcRZGate(q, 2.8294140204431284, 6);
  sqcRYGate(q, 0.2328523263184712, 7);
  sqcRZGate(q, -2.5103594316750106, 7);
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
  sqcRYGate(q, -1.410526347615919, 0);
  sqcRZGate(q, 0.6696403158364121, 0);
  sqcRYGate(q, 1.683657343294063, 1);
  sqcRZGate(q, 0.6061148793532318, 1);
  sqcRYGate(q, 1.3015569444123125, 2);
  sqcRZGate(q, -2.2594601714843976, 2);
  sqcRYGate(q, -1.1166555187820375, 3);
  sqcRZGate(q, -3.0666283599449113, 3);
  sqcRYGate(q, 2.674977272141435, 4);
  sqcRZGate(q, -0.5717740796366675, 4);
  sqcRYGate(q, -2.7270845045738104, 5);
  sqcRZGate(q, 1.9451891367167198, 5);
  sqcRYGate(q, 1.47568776712428, 6);
  sqcRZGate(q, -1.7266953665867906, 6);
  sqcRYGate(q, -2.8049158993201595, 7);
  sqcRZGate(q, -2.210112475948453, 7);
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
  sqcRYGate(q, -0.6943987078993281, 0);
  sqcRZGate(q, -0.38698252735006555, 0);
  sqcRYGate(q, -1.8404352680518454, 1);
  sqcRZGate(q, 1.8111609290912085, 1);
  sqcRYGate(q, 2.5402776284726585, 2);
  sqcRZGate(q, 0.30074405424808526, 2);
  sqcRYGate(q, -2.2795215915928972, 3);
  sqcRZGate(q, -2.2591716959881447, 3);
  sqcRYGate(q, -2.2105661219653108, 4);
  sqcRZGate(q, -2.8755278589194213, 4);
  sqcRYGate(q, -2.0441569219268345, 5);
  sqcRZGate(q, 2.0078479160331044, 5);
  sqcRYGate(q, -2.202409166750094, 6);
  sqcRZGate(q, 0.08234908904545168, 6);
  sqcRYGate(q, 0.22933984794629375, 7);
  sqcRZGate(q, 1.3970724807837174, 7);
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
  sqcRYGate(q, 0.9643898051368026, 0);
  sqcRZGate(q, -2.3041261893263667, 0);
  sqcRYGate(q, 2.667528765055616, 1);
  sqcRZGate(q, 1.862016385859482, 1);
  sqcRYGate(q, -2.544314218415901, 2);
  sqcRZGate(q, 1.1720577109171615, 2);
  sqcRYGate(q, 2.8834480637160596, 3);
  sqcRZGate(q, -2.5405698953364615, 3);
  sqcRYGate(q, -2.163050098580971, 4);
  sqcRZGate(q, -2.707711307345844, 4);
  sqcRYGate(q, -1.7685064890480566, 5);
  sqcRZGate(q, -0.05789149606280509, 5);
  sqcRYGate(q, 2.793909813542675, 6);
  sqcRZGate(q, 0.7773021584611055, 6);
  sqcRYGate(q, 0.7512523067905539, 7);
  sqcRZGate(q, -2.789128030639828, 7);
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
  sqcRYGate(q, 2.6766762544454896, 0);
  sqcRZGate(q, -0.5913243034804988, 0);
  sqcRYGate(q, 2.257290627425922, 1);
  sqcRZGate(q, 0.5694312402816585, 1);
  sqcRYGate(q, 2.8364041758666048, 2);
  sqcRZGate(q, -2.563029589797169, 2);
  sqcRYGate(q, 2.863979548276489, 3);
  sqcRZGate(q, 1.9790623132580458, 3);
  sqcRYGate(q, -2.7655762739261167, 4);
  sqcRZGate(q, 1.8230156308631429, 4);
  sqcRYGate(q, 0.7699612229944296, 5);
  sqcRZGate(q, -0.8594423105569051, 5);
  sqcRYGate(q, 1.3255811838641005, 6);
  sqcRZGate(q, 1.223532003940334, 6);
  sqcRYGate(q, -0.5168023119007747, 7);
  sqcRZGate(q, 1.5017496304173132, 7);
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
  sqcRYGate(q, -1.4180939335612082, 0);
  sqcRZGate(q, -1.6606825100938185, 0);
  sqcRYGate(q, -2.5615313005200573, 1);
  sqcRZGate(q, 0.3878576253859593, 1);
  sqcRYGate(q, -1.1499683347277825, 2);
  sqcRZGate(q, -0.2879738408602748, 2);
  sqcRYGate(q, -1.5681500597476514, 3);
  sqcRZGate(q, 1.9634025894944482, 3);
  sqcRYGate(q, 0.8184420201343022, 4);
  sqcRZGate(q, 1.6004654218888763, 4);
  sqcRYGate(q, 0.8247133621332002, 5);
  sqcRZGate(q, -2.597422277560935, 5);
  sqcRYGate(q, -2.3046991003349215, 6);
  sqcRZGate(q, -0.5166218874327891, 6);
  sqcRYGate(q, 2.2638403710732984, 7);
  sqcRZGate(q, -0.59860063622669, 7);
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
  sqcRYGate(q, -0.6841389463677015, 0);
  sqcRZGate(q, 0.7799110132051719, 0);
  sqcRYGate(q, -1.1161898498844423, 1);
  sqcRZGate(q, -2.4721258128616235, 1);
  sqcRYGate(q, -1.2472514023918642, 2);
  sqcRZGate(q, -0.6303031337857341, 2);
  sqcRYGate(q, -2.467177398622528, 3);
  sqcRZGate(q, 2.5217476586060044, 3);
  sqcRYGate(q, 0.5774855497418692, 4);
  sqcRZGate(q, -3.0998853804480926, 4);
  sqcRYGate(q, 1.020647506227007, 5);
  sqcRZGate(q, -0.6027645629945081, 5);
  sqcRYGate(q, 1.4608703596155812, 6);
  sqcRZGate(q, 2.7529025664715037, 6);
  sqcRYGate(q, 0.1476335199358951, 7);
  sqcRZGate(q, -0.7821775665190707, 7);
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
  sqcRYGate(q, 2.0351489351175442, 0);
  sqcRZGate(q, 2.280555038582146, 0);
  sqcRYGate(q, -1.5013712732927917, 1);
  sqcRZGate(q, 2.5123229010053207, 1);
  sqcRYGate(q, -1.1722679289461446, 2);
  sqcRZGate(q, -1.5825480229972602, 2);
  sqcRYGate(q, 2.97945151302523, 3);
  sqcRZGate(q, 1.8956481115028763, 3);
  sqcRYGate(q, -0.6386566794649742, 4);
  sqcRZGate(q, 3.0548111951044006, 4);
  sqcRYGate(q, 2.7014624788961803, 5);
  sqcRZGate(q, -0.88520527327289, 5);
  sqcRYGate(q, 0.8202345677525081, 6);
  sqcRZGate(q, -0.4509744595895967, 6);
  sqcRYGate(q, 0.28124969841511677, 7);
  sqcRZGate(q, 2.9164999208775972, 7);
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
  sqcRYGate(q, -0.8826622092776439, 0);
  sqcRZGate(q, -2.8074035124637797, 0);
  sqcRYGate(q, -0.26440875034829414, 1);
  sqcRZGate(q, 1.9374666540576715, 1);
  sqcRYGate(q, 2.7579705325190824, 2);
  sqcRZGate(q, -0.3955403022085815, 2);
  sqcRYGate(q, -2.5508714281983997, 3);
  sqcRZGate(q, -2.3482949604382273, 3);
  sqcRYGate(q, 0.2739836447170967, 4);
  sqcRZGate(q, -0.8174374064663352, 4);
  sqcRYGate(q, -1.1347297095538433, 5);
  sqcRZGate(q, 3.0920823017736723, 5);
  sqcRYGate(q, -2.257492262807582, 6);
  sqcRZGate(q, 0.6290124522477303, 6);
  sqcRYGate(q, -2.73633863713956, 7);
  sqcRZGate(q, 2.048839426824701, 7);
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
  sqcRYGate(q, -2.4749626887180005, 0);
  sqcRZGate(q, 2.4238230365621702, 0);
  sqcRYGate(q, 0.2995973472467277, 1);
  sqcRZGate(q, -0.6056051050371308, 1);
  sqcRYGate(q, -2.8719388859100032, 2);
  sqcRZGate(q, 1.8722731661635104, 2);
  sqcRYGate(q, 0.6770983883352528, 3);
  sqcRZGate(q, 2.295367978390293, 3);
  sqcRYGate(q, -2.527489774420255, 4);
  sqcRZGate(q, -2.1379185312372853, 4);
  sqcRYGate(q, 2.024114549047672, 5);
  sqcRZGate(q, 2.8308405617602377, 5);
  sqcRYGate(q, -2.143828901048515, 6);
  sqcRZGate(q, -0.014430911638907938, 6);
  sqcRYGate(q, 2.279343962203585, 7);
  sqcRZGate(q, 0.7467154025297652, 7);
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
  sqcRYGate(q, -2.120858765804358, 0);
  sqcRZGate(q, -1.946620366274798, 0);
  sqcRYGate(q, 0.994661493745908, 1);
  sqcRZGate(q, 1.7583382123574958, 1);
  sqcRYGate(q, 1.4386947723546089, 2);
  sqcRZGate(q, -2.967797215948817, 2);
  sqcRYGate(q, -2.6839391387661915, 3);
  sqcRZGate(q, 2.7206547445752944, 3);
  sqcRYGate(q, 1.6876052863562396, 4);
  sqcRZGate(q, 1.5283251556280406, 4);
  sqcRYGate(q, -1.3662037131379006, 5);
  sqcRZGate(q, 2.570084014992808, 5);
  sqcRYGate(q, 0.8008207112972388, 6);
  sqcRZGate(q, -2.6638521468244796, 6);
  sqcRYGate(q, 2.3718615019792604, 7);
  sqcRZGate(q, 3.065011139968619, 7);
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
  sqcRYGate(q, 0.8880087793338702, 0);
  sqcRZGate(q, 1.9558179906321769, 0);
  sqcRYGate(q, 2.6416240950875287, 1);
  sqcRZGate(q, 2.03180522101335, 1);
  sqcRYGate(q, -1.213531809836315, 2);
  sqcRZGate(q, -2.9923054462543615, 2);
  sqcRYGate(q, -2.055762475717538, 3);
  sqcRZGate(q, -2.0585668173793756, 3);
  sqcRYGate(q, -2.496762538959864, 4);
  sqcRZGate(q, 1.070395035527164, 4);
  sqcRYGate(q, -1.8696505485474058, 5);
  sqcRZGate(q, -2.5507493863371526, 5);
  sqcRYGate(q, -1.967070679112119, 6);
  sqcRZGate(q, 0.6205457405630943, 6);
  sqcRYGate(q, 0.6555102246350182, 7);
  sqcRZGate(q, 2.8467495625158747, 7);
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
  sqcRYGate(q, 1.4434327053206042, 0);
  sqcRZGate(q, -2.0941356979020487, 0);
  sqcRYGate(q, -1.9828830961821016, 1);
  sqcRZGate(q, -1.2671250282743063, 1);
  sqcRYGate(q, -0.6962482948974804, 2);
  sqcRZGate(q, 2.944214344885235, 2);
  sqcRYGate(q, -2.6143173677064087, 3);
  sqcRZGate(q, -0.1565471725252916, 3);
  sqcRYGate(q, 2.7526958968627615, 4);
  sqcRZGate(q, -1.847033665551338, 4);
  sqcRYGate(q, -1.3644622417305223, 5);
  sqcRZGate(q, 1.5291000138241408, 5);
  sqcRYGate(q, -2.0418866073291966, 6);
  sqcRZGate(q, -0.4238928143682532, 6);
  sqcRYGate(q, 1.2537931483476905, 7);
  sqcRZGate(q, 2.0574338418018763, 7);
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
  sqcRYGate(q, -2.1772572174183193, 0);
  sqcRZGate(q, 0.214514627953041, 0);
  sqcRYGate(q, 2.4959484803269416, 1);
  sqcRZGate(q, 1.395573760433325, 1);
  sqcRYGate(q, -0.6793244241339503, 2);
  sqcRZGate(q, -1.8471739369361142, 2);
  sqcRYGate(q, 1.1821618469999349, 3);
  sqcRZGate(q, 1.010108573048456, 3);
  sqcRYGate(q, -2.200631546629447, 4);
  sqcRZGate(q, -2.0660605834783867, 4);
  sqcRYGate(q, 0.3285629254474749, 5);
  sqcRZGate(q, 0.4492036512412545, 5);
  sqcRYGate(q, -0.903590605824653, 6);
  sqcRZGate(q, -1.1770000741796796, 6);
  sqcRYGate(q, 1.0158047644119785, 7);
  sqcRZGate(q, -1.1229966051511797, 7);
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
  sqcRYGate(q, 1.2786359958261713, 0);
  sqcRZGate(q, -0.9702716353643783, 0);
  sqcRYGate(q, 0.2512825148401765, 1);
  sqcRZGate(q, -3.081942707864056, 1);
  sqcRYGate(q, -2.4429431717774017, 2);
  sqcRZGate(q, -0.38484334419466587, 2);
  sqcRYGate(q, -1.9845591342495768, 3);
  sqcRZGate(q, -1.2585243937781359, 3);
  sqcRYGate(q, 1.164673123487911, 4);
  sqcRZGate(q, -1.1286843480145277, 4);
  sqcRYGate(q, 1.7914313331050709, 5);
  sqcRZGate(q, 2.670430645705149, 5);
  sqcRYGate(q, 2.64537354582144, 6);
  sqcRZGate(q, 0.8990359988804976, 6);
  sqcRYGate(q, 1.057093711098226, 7);
  sqcRZGate(q, 1.418130536107113, 7);
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
  sqcRYGate(q, -1.5036005687343792, 0);
  sqcRZGate(q, 0.9407179709619671, 0);
  sqcRYGate(q, 2.1287243753939937, 1);
  sqcRZGate(q, -2.256934561751293, 1);
  sqcRYGate(q, 0.30174343778518453, 2);
  sqcRZGate(q, 1.6336713784361856, 2);
  sqcRYGate(q, -0.3583622520102887, 3);
  sqcRZGate(q, 1.782601302702879, 3);
  sqcRYGate(q, -1.6589327646401344, 4);
  sqcRZGate(q, 1.3811111358442805, 4);
  sqcRYGate(q, 2.6277306809500445, 5);
  sqcRZGate(q, 1.8484803443652442, 5);
  sqcRYGate(q, 2.574773592529187, 6);
  sqcRZGate(q, -1.3851389822985425, 6);
  sqcRYGate(q, -2.8438445705352864, 7);
  sqcRZGate(q, -0.39485607825727886, 7);
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
  sqcRYGate(q, -0.17783846181948082, 0);
  sqcRZGate(q, 2.6111204277555915, 0);
  sqcRYGate(q, 1.1332133219232134, 1);
  sqcRZGate(q, -1.743276407381252, 1);
  sqcRYGate(q, -2.64548131689441, 2);
  sqcRZGate(q, 2.73775214754127, 2);
  sqcRYGate(q, -0.3060639352588274, 3);
  sqcRZGate(q, -1.9435337727422262, 3);
  sqcRYGate(q, -2.0193250460437495, 4);
  sqcRZGate(q, -2.897759097433004, 4);
  sqcRYGate(q, 2.302050741122424, 5);
  sqcRZGate(q, -2.4293535669623254, 5);
  sqcRYGate(q, -2.605253235570993, 6);
  sqcRZGate(q, 0.15050058648552433, 6);
  sqcRYGate(q, 2.223837836002881, 7);
  sqcRZGate(q, 0.9305232583835403, 7);
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
  sqcRYGate(q, 0.15981306762094238, 0);
  sqcRZGate(q, -3.074294809301218, 0);
  sqcRYGate(q, -2.843066464903398, 1);
  sqcRZGate(q, 2.6465593274580046, 1);
  sqcRYGate(q, -0.7903865725812453, 2);
  sqcRZGate(q, -1.8174552898389378, 2);
  sqcRYGate(q, 2.2606553800637252, 3);
  sqcRZGate(q, -1.6288359941642483, 3);
  sqcRYGate(q, 1.8315774205121673, 4);
  sqcRZGate(q, -1.971401904600886, 4);
  sqcRYGate(q, -2.8784250587824336, 5);
  sqcRZGate(q, 0.12721900291368696, 5);
  sqcRYGate(q, -0.3409667065609687, 6);
  sqcRZGate(q, 2.696067254742872, 6);
  sqcRYGate(q, -2.4908505630423714, 7);
  sqcRZGate(q, 0.6069965539323201, 7);
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
  sqcRYGate(q, -0.8190748065537345, 0);
  sqcRZGate(q, -1.1783110393282668, 0);
  sqcRYGate(q, 1.006969715400654, 1);
  sqcRZGate(q, -2.4244991262933575, 1);
  sqcRYGate(q, 0.4008110426424462, 2);
  sqcRZGate(q, -2.070059634840268, 2);
  sqcRYGate(q, -2.1812516517424774, 3);
  sqcRZGate(q, 2.1742979794637236, 3);
  sqcRYGate(q, 1.4017075977421818, 4);
  sqcRZGate(q, -1.277356281952516, 4);
  sqcRYGate(q, 2.2725596118879903, 5);
  sqcRZGate(q, 0.07039867231285274, 5);
  sqcRYGate(q, 3.085831086018904, 6);
  sqcRZGate(q, 2.388652820399179, 6);
  sqcRYGate(q, -1.485847864111534, 7);
  sqcRZGate(q, -2.2273041101408655, 7);
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
  sqcRYGate(q, 2.161007173330902, 0);
  sqcRZGate(q, 2.2297012075800726, 0);
  sqcRYGate(q, 0.7720380120951351, 1);
  sqcRZGate(q, 1.201507404999738, 1);
  sqcRYGate(q, 2.786189356614005, 2);
  sqcRZGate(q, -0.47701154133026336, 2);
  sqcRYGate(q, 1.5776055626227057, 3);
  sqcRZGate(q, -0.4949093555041123, 3);
  sqcRYGate(q, -1.1577531621186565, 4);
  sqcRZGate(q, 0.6430024163024016, 4);
  sqcRYGate(q, 0.5526716888614692, 5);
  sqcRZGate(q, -1.0860122299866246, 5);
  sqcRYGate(q, 1.9456278944211771, 6);
  sqcRZGate(q, 0.9463325074150363, 6);
  sqcRYGate(q, 2.062043317573956, 7);
  sqcRZGate(q, -2.481189707397045, 7);
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
  sqcRYGate(q, -0.5048489495173287, 0);
  sqcRZGate(q, 1.7162368864223687, 0);
  sqcRYGate(q, 0.22017852780254435, 1);
  sqcRZGate(q, -1.0720869410466944, 1);
  sqcRYGate(q, -2.720679393825506, 2);
  sqcRZGate(q, -1.7725019888892486, 2);
  sqcRYGate(q, -0.4174719954047265, 3);
  sqcRZGate(q, -0.017399584241458415, 3);
  sqcRYGate(q, 2.2365843116957658, 4);
  sqcRZGate(q, 1.199223424550258, 4);
  sqcRYGate(q, 3.0578956341982932, 5);
  sqcRZGate(q, -2.106101021899686, 5);
  sqcRYGate(q, -1.8390683413725988, 6);
  sqcRZGate(q, -0.9020697531163516, 6);
  sqcRYGate(q, -2.5482787167897536, 7);
  sqcRZGate(q, -3.0438176846983924, 7);
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
  sqcRYGate(q, -1.025470208590815, 0);
  sqcRZGate(q, 2.335600909073134, 0);
  sqcRYGate(q, 2.4861159884707966, 1);
  sqcRZGate(q, -0.0017916622766618315, 1);
  sqcRYGate(q, -0.49618398979676037, 2);
  sqcRZGate(q, 0.5446241109664766, 2);
  sqcRYGate(q, 1.617214362416874, 3);
  sqcRZGate(q, 2.6028833029417573, 3);
  sqcRYGate(q, 0.2085100567348679, 4);
  sqcRZGate(q, -1.9287701706080778, 4);
  sqcRYGate(q, 0.8301369426366412, 5);
  sqcRZGate(q, -0.12790433505914223, 5);
  sqcRYGate(q, -1.6337411560185835, 6);
  sqcRZGate(q, 1.5025456811005695, 6);
  sqcRYGate(q, 1.1684473765373036, 7);
  sqcRZGate(q, -0.34732323228485384, 7);
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
  sqcRYGate(q, 1.5889520584342318, 0);
  sqcRZGate(q, 2.1623920455984793, 0);
  sqcRYGate(q, 0.21519323400450763, 1);
  sqcRZGate(q, -0.8198213611791115, 1);
  sqcRYGate(q, -2.795288591772302, 2);
  sqcRZGate(q, -1.2861047463186237, 2);
  sqcRYGate(q, 1.6326982893769113, 3);
  sqcRZGate(q, 3.0174207276763387, 3);
  sqcRYGate(q, -1.161984506655899, 4);
  sqcRZGate(q, -1.3140882657676192, 4);
  sqcRYGate(q, -2.1427416097033287, 5);
  sqcRZGate(q, -2.349109566987575, 5);
  sqcRYGate(q, 2.439340450997075, 6);
  sqcRZGate(q, -1.9070397724655623, 6);
  sqcRYGate(q, -3.0641657402739946, 7);
  sqcRZGate(q, -2.9043574408083255, 7);

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
