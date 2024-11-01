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

  sqcRYGate(q, -0.23829471328462404, 0);
  sqcRZGate(q, 1.9526849328476845, 0);
  sqcRYGate(q, -3.1339461254987127, 1);
  sqcRZGate(q, 1.2006760011848028, 1);
  sqcRYGate(q, 3.1258697107463203, 2);
  sqcRZGate(q, 2.308575740036729, 2);
  sqcRYGate(q, 2.4161373023934036, 3);
  sqcRZGate(q, -0.9300157521896413, 3);
  sqcRYGate(q, -3.137206587470639, 4);
  sqcRZGate(q, -0.31183974043834234, 4);
  sqcRYGate(q, -0.7027318067966049, 5);
  sqcRZGate(q, 0.22004326295519772, 5);
  sqcRYGate(q, 1.5548436762252116, 6);
  sqcRZGate(q, -3.006350582385169, 6);
  sqcRYGate(q, 2.538540583138814, 7);
  sqcRZGate(q, -1.7582585217697748, 7);
  sqcRYGate(q, 0.8925489192206113, 8);
  sqcRZGate(q, -2.838722831282382, 8);
  sqcRYGate(q, 0.012198859134192677, 9);
  sqcRZGate(q, -0.8231210304049773, 9);
  sqcRYGate(q, -1.3503458319685615, 10);
  sqcRZGate(q, 1.8236123498657566, 10);
  sqcRYGate(q, -2.914878693224008, 11);
  sqcRZGate(q, 2.413861691110804, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.3987204786616307, 0);
  sqcRZGate(q, 0.26590199701170464, 0);
  sqcRYGate(q, -3.1396506353736515, 1);
  sqcRZGate(q, 2.1320633221513456, 1);
  sqcRYGate(q, 3.1362647612176953, 2);
  sqcRZGate(q, -2.16880476401197, 2);
  sqcRYGate(q, -0.614791099601347, 3);
  sqcRZGate(q, 3.1061635598927424, 3);
  sqcRYGate(q, 0.0010181829959576092, 4);
  sqcRZGate(q, 2.036665692613802, 4);
  sqcRYGate(q, 1.6940540842148528, 5);
  sqcRZGate(q, 0.9671006206580294, 5);
  sqcRYGate(q, -1.5616094655249957, 6);
  sqcRZGate(q, 2.2935784700071142, 6);
  sqcRYGate(q, 1.4878203618856491, 7);
  sqcRZGate(q, -1.6859067694357162, 7);
  sqcRYGate(q, 0.027954460933291035, 8);
  sqcRZGate(q, -2.3919120137323295, 8);
  sqcRYGate(q, -0.25630103215888206, 9);
  sqcRZGate(q, -1.4542813251689237, 9);
  sqcRYGate(q, 0.7591978903742147, 10);
  sqcRZGate(q, 0.8639980576162314, 10);
  sqcRYGate(q, -2.084364400590128, 11);
  sqcRZGate(q, -0.22970155077023527, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.46691207614305785, 0);
  sqcRZGate(q, -2.9820799504158235, 0);
  sqcRYGate(q, 2.893077624091555, 1);
  sqcRZGate(q, -0.8747750869196684, 1);
  sqcRYGate(q, 0.29638002573397143, 2);
  sqcRZGate(q, -0.23131080168544868, 2);
  sqcRYGate(q, -1.5274696001798433, 3);
  sqcRZGate(q, 0.0638506201984718, 3);
  sqcRYGate(q, 3.1234097121671214, 4);
  sqcRZGate(q, -1.3876498964409043, 4);
  sqcRYGate(q, -1.617408374394568, 5);
  sqcRZGate(q, 2.767912283336496, 5);
  sqcRYGate(q, 0.01191862840603708, 6);
  sqcRZGate(q, 2.451681476923168, 6);
  sqcRYGate(q, 0.10856994329692193, 7);
  sqcRZGate(q, -1.4619995558820602, 7);
  sqcRYGate(q, 0.023485082777618516, 8);
  sqcRZGate(q, 2.4176990420062037, 8);
  sqcRYGate(q, -0.02516680681214844, 9);
  sqcRZGate(q, -2.899340167120708, 9);
  sqcRYGate(q, -2.460355435792491, 10);
  sqcRZGate(q, -1.0158428946315585, 10);
  sqcRYGate(q, -2.7218467839156646, 11);
  sqcRZGate(q, 1.5919769264296466, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1955856416901065, 0);
  sqcRZGate(q, 2.8282272202641154, 0);
  sqcRYGate(q, 1.623828568802845, 1);
  sqcRZGate(q, 2.073987659187593, 1);
  sqcRYGate(q, 1.9039670539724183, 2);
  sqcRZGate(q, 0.6313107043966371, 2);
  sqcRYGate(q, 3.1348476356816204, 3);
  sqcRZGate(q, 2.3897218398918847, 3);
  sqcRYGate(q, -0.0038421890700846006, 4);
  sqcRZGate(q, -1.2108283417554, 4);
  sqcRYGate(q, 0.8350582336565644, 5);
  sqcRZGate(q, -1.2938237161193191, 5);
  sqcRYGate(q, 0.3159210413167702, 6);
  sqcRZGate(q, 3.065681810190016, 6);
  sqcRYGate(q, 1.0848638823382863, 7);
  sqcRZGate(q, -1.3930387418609316, 7);
  sqcRYGate(q, 0.017226499738588787, 8);
  sqcRZGate(q, -2.6029792574665946, 8);
  sqcRYGate(q, 2.7588800721338784, 9);
  sqcRZGate(q, -1.2147337515179162, 9);
  sqcRYGate(q, 1.3421465661585275, 10);
  sqcRZGate(q, -2.005039273521208, 10);
  sqcRYGate(q, -1.8209797117029858, 11);
  sqcRZGate(q, -2.331531995015098, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.2349026760238813, 0);
  sqcRZGate(q, -0.3994133395530708, 0);
  sqcRYGate(q, 0.401084350771224, 1);
  sqcRZGate(q, 1.764617879792747, 1);
  sqcRYGate(q, -2.2816582156767726, 2);
  sqcRZGate(q, -2.1857119175095674, 2);
  sqcRYGate(q, 3.1402537585135613, 3);
  sqcRZGate(q, -0.953362824452576, 3);
  sqcRYGate(q, 0.0038778083387084787, 4);
  sqcRZGate(q, -2.507034129314777, 4);
  sqcRYGate(q, -1.696546755707975, 5);
  sqcRZGate(q, -1.0769027563036528, 5);
  sqcRYGate(q, -1.506962469306519, 6);
  sqcRZGate(q, -0.4752213165514486, 6);
  sqcRYGate(q, 0.05033540610870611, 7);
  sqcRZGate(q, -1.6876933958240299, 7);
  sqcRYGate(q, -3.139705526892574, 8);
  sqcRZGate(q, 2.85304586245546, 8);
  sqcRYGate(q, -0.1376319864102582, 9);
  sqcRZGate(q, 0.8945648815988267, 9);
  sqcRYGate(q, 2.6474104620277243, 10);
  sqcRZGate(q, -1.1796342381646827, 10);
  sqcRYGate(q, -2.2569933279010472, 11);
  sqcRZGate(q, 1.7964479859451936, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.647200712560927, 0);
  sqcRZGate(q, -0.6589436766555608, 0);
  sqcRYGate(q, -0.05785435733305899, 1);
  sqcRZGate(q, -2.201254723311691, 1);
  sqcRYGate(q, -0.12537222249947153, 2);
  sqcRZGate(q, -1.78459236675935, 2);
  sqcRYGate(q, -2.7219438012034223, 3);
  sqcRZGate(q, -2.0916324330979847, 3);
  sqcRYGate(q, -1.8229817914209345, 4);
  sqcRZGate(q, 0.3032733825566484, 4);
  sqcRYGate(q, -1.130728630332494, 5);
  sqcRZGate(q, -2.959549310619119, 5);
  sqcRYGate(q, -2.6183095083738372, 6);
  sqcRZGate(q, -1.9896015068843298, 6);
  sqcRYGate(q, 1.7082193214441224, 7);
  sqcRZGate(q, -2.6859172184133406, 7);
  sqcRYGate(q, 0.09445316403584947, 8);
  sqcRZGate(q, -0.14745459934994096, 8);
  sqcRYGate(q, -2.151915454048938, 9);
  sqcRZGate(q, -1.4626657953159707, 9);
  sqcRYGate(q, 1.8308994115789972, 10);
  sqcRZGate(q, 3.059755879244553, 10);
  sqcRYGate(q, 1.9861686683404747, 11);
  sqcRZGate(q, -2.499515060332842, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.0512214439080365, 0);
  sqcRZGate(q, 0.2059770778186664, 0);
  sqcRYGate(q, 1.7562923129612211, 1);
  sqcRZGate(q, 2.62381255132047, 1);
  sqcRYGate(q, -1.372876905388297, 2);
  sqcRZGate(q, 2.8044109454630712, 2);
  sqcRYGate(q, 0.002503027054029161, 3);
  sqcRZGate(q, -2.4335761500358934, 3);
  sqcRYGate(q, 3.1386033461282805, 4);
  sqcRZGate(q, -0.9843957644516839, 4);
  sqcRYGate(q, -3.13341603976744, 5);
  sqcRZGate(q, 0.03977906527071876, 5);
  sqcRYGate(q, -0.005107353380426021, 6);
  sqcRZGate(q, -0.12881150137992226, 6);
  sqcRYGate(q, -0.019959133125720285, 7);
  sqcRZGate(q, -0.39858946642138104, 7);
  sqcRYGate(q, -3.1095744844236006, 8);
  sqcRZGate(q, -2.911754476024556, 8);
  sqcRYGate(q, -0.343687609321604, 9);
  sqcRZGate(q, 0.042432256152378216, 9);
  sqcRYGate(q, -1.4927966781492656, 10);
  sqcRZGate(q, 0.28333261138174387, 10);
  sqcRYGate(q, 0.9846978008143162, 11);
  sqcRZGate(q, -0.2544165849084619, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.3324209013172084, 0);
  sqcRZGate(q, 1.6885999323674414, 0);
  sqcRYGate(q, -0.6313971167132697, 1);
  sqcRZGate(q, -2.947865884144537, 1);
  sqcRYGate(q, -2.177749591195421, 2);
  sqcRZGate(q, -3.1096302600339953, 2);
  sqcRYGate(q, -1.2589769561324682, 3);
  sqcRZGate(q, -2.1616399005619193, 3);
  sqcRYGate(q, -1.24320454531441, 4);
  sqcRZGate(q, 2.403044614107692, 4);
  sqcRYGate(q, -1.6719496025253822, 5);
  sqcRZGate(q, 2.08684800368158, 5);
  sqcRYGate(q, 2.797225942438241, 6);
  sqcRZGate(q, 2.016906746088827, 6);
  sqcRYGate(q, 2.106848602792905, 7);
  sqcRZGate(q, 0.36418990258583595, 7);
  sqcRYGate(q, 1.7272450462079272, 8);
  sqcRZGate(q, 2.281002721780909, 8);
  sqcRYGate(q, 1.6026526880335625, 9);
  sqcRZGate(q, -2.1029073183851645, 9);
  sqcRYGate(q, 2.147292713466773, 10);
  sqcRZGate(q, 2.2649346797477765, 10);
  sqcRYGate(q, 1.1070309228922672, 11);
  sqcRZGate(q, -2.0293797265618245, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.4068049565162952, 0);
  sqcRZGate(q, 1.5986602829196468, 0);
  sqcRYGate(q, -2.956064992706728, 1);
  sqcRZGate(q, 2.7663221355809533, 1);
  sqcRYGate(q, -1.2337201102376159, 2);
  sqcRZGate(q, 2.988440277259349, 2);
  sqcRYGate(q, -0.011122605536357353, 3);
  sqcRZGate(q, -2.17435443330287, 3);
  sqcRYGate(q, -0.003494198443863804, 4);
  sqcRZGate(q, 0.4200948691700898, 4);
  sqcRYGate(q, -3.126776946220557, 5);
  sqcRZGate(q, 1.150250581103549, 5);
  sqcRYGate(q, 3.139720554840158, 6);
  sqcRZGate(q, -0.9694997222025223, 6);
  sqcRYGate(q, 3.1336299981177915, 7);
  sqcRZGate(q, 1.56087739433304, 7);
  sqcRYGate(q, 3.1267470250233895, 8);
  sqcRZGate(q, -2.3349851611072805, 8);
  sqcRYGate(q, 2.1099060154578835, 9);
  sqcRZGate(q, 1.1191034098737083, 9);
  sqcRYGate(q, -2.5478196824929755, 10);
  sqcRZGate(q, -0.938052308689632, 10);
  sqcRYGate(q, -2.8736844163009283, 11);
  sqcRZGate(q, -2.1202233396814245, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4915447259741474, 0);
  sqcRZGate(q, 1.3393719354386788, 0);
  sqcRYGate(q, 1.9673673687210513, 1);
  sqcRZGate(q, -1.2161230283325435, 1);
  sqcRYGate(q, 0.8426709705515867, 2);
  sqcRZGate(q, -0.21181992482451317, 2);
  sqcRYGate(q, -1.4129027012684299, 3);
  sqcRZGate(q, 2.9975308440164397, 3);
  sqcRYGate(q, 2.24688086263329, 4);
  sqcRZGate(q, -1.8813527806488857, 4);
  sqcRYGate(q, -1.5563214423367506, 5);
  sqcRZGate(q, -0.38103402317960333, 5);
  sqcRYGate(q, 0.31371901404986047, 6);
  sqcRZGate(q, -2.031522733838905, 6);
  sqcRYGate(q, -0.002908665111701382, 7);
  sqcRZGate(q, 2.716655377011435, 7);
  sqcRYGate(q, 1.2849103622129459, 8);
  sqcRZGate(q, -2.577636632460924, 8);
  sqcRYGate(q, -0.5745177811596865, 9);
  sqcRZGate(q, -0.3395139587065872, 9);
  sqcRYGate(q, 1.071082417566756, 10);
  sqcRZGate(q, 0.055536145524920984, 10);
  sqcRYGate(q, -1.5793693013066772, 11);
  sqcRZGate(q, 2.7989633964666596, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.9172637954804927, 0);
  sqcRZGate(q, -0.1449026364298276, 0);
  sqcRYGate(q, 2.9643858922156565, 1);
  sqcRZGate(q, 0.8837203320156114, 1);
  sqcRYGate(q, 2.9620216496097345, 2);
  sqcRZGate(q, -0.2811822044661638, 2);
  sqcRYGate(q, 0.019161322775181764, 3);
  sqcRZGate(q, -1.2309114548938647, 3);
  sqcRYGate(q, -0.0004444321923759986, 4);
  sqcRZGate(q, -2.1572075365109384, 4);
  sqcRYGate(q, 3.134537259099995, 5);
  sqcRZGate(q, -2.3176508861577467, 5);
  sqcRYGate(q, -0.0018960166208108478, 6);
  sqcRZGate(q, -0.5965408575239005, 6);
  sqcRYGate(q, -0.005746230035547799, 7);
  sqcRZGate(q, 2.788410268210631, 7);
  sqcRYGate(q, -3.1198088154466044, 8);
  sqcRZGate(q, 1.991399703387824, 8);
  sqcRYGate(q, 0.2403303767497527, 9);
  sqcRZGate(q, 0.3871057141121209, 9);
  sqcRYGate(q, 2.8437218073631083, 10);
  sqcRZGate(q, -3.0095777844481932, 10);
  sqcRYGate(q, 1.6887198094970115, 11);
  sqcRZGate(q, 1.8408659563869891, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.7028296406210632, 0);
  sqcRZGate(q, -0.12549954433676636, 0);
  sqcRYGate(q, -2.0672549464775587, 1);
  sqcRZGate(q, 2.397728530448177, 1);
  sqcRYGate(q, 0.9367803776276151, 2);
  sqcRZGate(q, -2.9650654288714335, 2);
  sqcRYGate(q, 2.330983459533431, 3);
  sqcRZGate(q, -0.4828690465022699, 3);
  sqcRYGate(q, 0.8562527441839218, 4);
  sqcRZGate(q, -2.5499826697813166, 4);
  sqcRYGate(q, -2.9882521509147293, 5);
  sqcRZGate(q, -1.4012147840685873, 5);
  sqcRYGate(q, -2.111332416470455, 6);
  sqcRZGate(q, 2.003349932362748, 6);
  sqcRYGate(q, 1.6637448903144747, 7);
  sqcRZGate(q, 1.741925785496779, 7);
  sqcRYGate(q, -1.0976830398726642, 8);
  sqcRZGate(q, -1.284995841561594, 8);
  sqcRYGate(q, 2.967439218087893, 9);
  sqcRZGate(q, -0.40819808625607035, 9);
  sqcRYGate(q, -2.7251269521077544, 10);
  sqcRZGate(q, -2.139427292750165, 10);
  sqcRYGate(q, -0.3842711815527916, 11);
  sqcRZGate(q, 2.6787227916634535, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.364082196017882, 0);
  sqcRZGate(q, 2.3359724747576847, 0);
  sqcRYGate(q, -0.8110561029255453, 1);
  sqcRZGate(q, -2.2179074863241253, 1);
  sqcRYGate(q, -1.180004917782942, 2);
  sqcRZGate(q, 1.2877819618508621, 2);
  sqcRYGate(q, 0.005713026734849969, 3);
  sqcRZGate(q, 1.827104431062747, 3);
  sqcRYGate(q, 0.0008890415036768241, 4);
  sqcRZGate(q, -2.3688411720623366, 4);
  sqcRYGate(q, -0.0006327702435010156, 5);
  sqcRZGate(q, 2.543362719780444, 5);
  sqcRYGate(q, 0.016944105680384958, 6);
  sqcRZGate(q, 1.0366532494544654, 6);
  sqcRYGate(q, -0.003754506666062428, 7);
  sqcRZGate(q, -2.155617666767567, 7);
  sqcRYGate(q, 0.0218381443770701, 8);
  sqcRZGate(q, -2.133076139882669, 8);
  sqcRYGate(q, 2.988512099184561, 9);
  sqcRZGate(q, 0.0647448903926166, 9);
  sqcRYGate(q, -2.4209783517372685, 10);
  sqcRZGate(q, -1.2942293372836875, 10);
  sqcRYGate(q, -1.3037711843827253, 11);
  sqcRZGate(q, 1.652483851924396, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.4001780328198125, 0);
  sqcRZGate(q, -1.4358100583881066, 0);
  sqcRYGate(q, -1.871114865963776, 1);
  sqcRZGate(q, -0.09112474301144056, 1);
  sqcRYGate(q, 0.5471791650994043, 2);
  sqcRZGate(q, 2.8102105910449158, 2);
  sqcRYGate(q, -1.731783476557899, 3);
  sqcRZGate(q, 1.9953581797162547, 3);
  sqcRYGate(q, 0.48827324931770294, 4);
  sqcRZGate(q, 1.5992728403838883, 4);
  sqcRYGate(q, -1.3835672717109926, 5);
  sqcRZGate(q, 1.6326779495145889, 5);
  sqcRYGate(q, -2.953321616292943, 6);
  sqcRZGate(q, 1.1476788832672842, 6);
  sqcRYGate(q, -0.34837052904377064, 7);
  sqcRZGate(q, 2.574597988248115, 7);
  sqcRYGate(q, 1.938347646403874, 8);
  sqcRZGate(q, 2.100054719992026, 8);
  sqcRYGate(q, 2.963827636766729, 9);
  sqcRZGate(q, -1.7582607870816915, 9);
  sqcRYGate(q, -1.4050138694188279, 10);
  sqcRZGate(q, -0.6686882011609807, 10);
  sqcRYGate(q, -0.3921902330626129, 11);
  sqcRZGate(q, -1.8156835624432799, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.6339690934670328, 0);
  sqcRZGate(q, -1.7261068120084857, 0);
  sqcRYGate(q, 1.6357141914372368, 1);
  sqcRZGate(q, -0.37692786304165743, 1);
  sqcRYGate(q, -0.39250075200197737, 2);
  sqcRZGate(q, -0.5584631657317756, 2);
  sqcRYGate(q, 0.011655809626759606, 3);
  sqcRZGate(q, -0.6328759180696725, 3);
  sqcRYGate(q, -0.0064698481014557885, 4);
  sqcRZGate(q, 0.947231094709348, 4);
  sqcRYGate(q, -0.02270322790230045, 5);
  sqcRZGate(q, 1.2946851238817572, 5);
  sqcRYGate(q, 0.0052672711969341535, 6);
  sqcRZGate(q, 0.11919121508602083, 6);
  sqcRYGate(q, 3.1367419776795904, 7);
  sqcRZGate(q, -3.044843982611726, 7);
  sqcRYGate(q, 3.1127348347118367, 8);
  sqcRZGate(q, 2.7967071846315363, 8);
  sqcRYGate(q, -0.30736373827614466, 9);
  sqcRZGate(q, 0.3410135273158046, 9);
  sqcRYGate(q, 2.5084057896540903, 10);
  sqcRZGate(q, -2.663848759512894, 10);
  sqcRYGate(q, 1.5190889421131817, 11);
  sqcRZGate(q, 3.0115187548302145, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.3714809346926843, 0);
  sqcRZGate(q, -0.7387292857292131, 0);
  sqcRYGate(q, -2.3609935135243836, 1);
  sqcRZGate(q, 2.6696342494166556, 1);
  sqcRYGate(q, 0.5517377490487214, 2);
  sqcRZGate(q, 1.4540704694756483, 2);
  sqcRYGate(q, 2.641434409139524, 3);
  sqcRZGate(q, 1.4109942930455501, 3);
  sqcRYGate(q, 3.013091567793224, 4);
  sqcRZGate(q, 1.6971001490451707, 4);
  sqcRYGate(q, 1.6412739303885768, 5);
  sqcRZGate(q, 1.3215619603904076, 5);
  sqcRYGate(q, 1.5371111827511013, 6);
  sqcRZGate(q, -2.5191251511209938, 6);
  sqcRYGate(q, -0.44356620521424034, 7);
  sqcRZGate(q, -2.1645552893923306, 7);
  sqcRYGate(q, -2.336324426342455, 8);
  sqcRZGate(q, 1.1761736066856967, 8);
  sqcRYGate(q, 1.4794118233332763, 9);
  sqcRZGate(q, -2.765682062748339, 9);
  sqcRYGate(q, -1.928643842518642, 10);
  sqcRZGate(q, 0.30843538514435137, 10);
  sqcRYGate(q, 0.11025550641033366, 11);
  sqcRZGate(q, 0.5952423767484177, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.842561992110137, 0);
  sqcRZGate(q, -0.30575014146970975, 0);
  sqcRYGate(q, 1.722349140157423, 1);
  sqcRZGate(q, -0.7743096003994072, 1);
  sqcRYGate(q, -2.928042325342516, 2);
  sqcRZGate(q, 0.8218376034272916, 2);
  sqcRYGate(q, 0.013415207865245443, 3);
  sqcRZGate(q, 2.646446656956367, 3);
  sqcRYGate(q, -0.002497755779845789, 4);
  sqcRZGate(q, 3.0812233358022962, 4);
  sqcRYGate(q, -3.103335948850998, 5);
  sqcRZGate(q, 1.6611131349867554, 5);
  sqcRYGate(q, 0.019003070314466797, 6);
  sqcRZGate(q, 0.7830691909976482, 6);
  sqcRYGate(q, 3.12782407091062, 7);
  sqcRZGate(q, 2.346341821511549, 7);
  sqcRYGate(q, 0.0041046938991238235, 8);
  sqcRZGate(q, 0.9561040465217739, 8);
  sqcRYGate(q, -2.7158307270889224, 9);
  sqcRZGate(q, -2.512284950627179, 9);
  sqcRYGate(q, 0.6439647084466699, 10);
  sqcRZGate(q, 0.5790860784509233, 10);
  sqcRYGate(q, -0.4353711765476111, 11);
  sqcRZGate(q, 2.0219939001360956, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.7138258507370674, 0);
  sqcRZGate(q, 1.1912975106600205, 0);
  sqcRYGate(q, 3.065428399075749, 1);
  sqcRZGate(q, 0.12037357686650461, 1);
  sqcRYGate(q, 0.0911760754509802, 2);
  sqcRZGate(q, -2.7419548286986046, 2);
  sqcRYGate(q, -1.6090399733517202, 3);
  sqcRZGate(q, 2.2895322955978314, 3);
  sqcRYGate(q, -1.3896484816645644, 4);
  sqcRZGate(q, -2.0865847126977166, 4);
  sqcRYGate(q, 0.9470337928410774, 5);
  sqcRZGate(q, 3.0799990208444816, 5);
  sqcRYGate(q, 0.6612310375695767, 6);
  sqcRZGate(q, -2.4337276221129773, 6);
  sqcRYGate(q, 1.7532328577285197, 7);
  sqcRZGate(q, 2.0651369198560325, 7);
  sqcRYGate(q, 0.9348896531950667, 8);
  sqcRZGate(q, -0.1741852886369509, 8);
  sqcRYGate(q, 1.363180383768736, 9);
  sqcRZGate(q, -2.862263208442415, 9);
  sqcRYGate(q, 1.4607939355205308, 10);
  sqcRZGate(q, 0.47745648554394565, 10);
  sqcRYGate(q, -1.5077449927810127, 11);
  sqcRZGate(q, -1.9263021206377964, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.7580053720774416, 0);
  sqcRZGate(q, -0.6531249032824464, 0);
  sqcRYGate(q, 0.21535496890861694, 1);
  sqcRZGate(q, 1.8441166796550796, 1);
  sqcRYGate(q, 0.6596246882203145, 2);
  sqcRZGate(q, 0.9451541233041159, 2);
  sqcRYGate(q, 0.029633344179330834, 3);
  sqcRZGate(q, -0.8172256946489567, 3);
  sqcRYGate(q, 0.002312540243106216, 4);
  sqcRZGate(q, 0.4142034393782197, 4);
  sqcRYGate(q, 0.03526244443422222, 5);
  sqcRZGate(q, 3.1157246962676033, 5);
  sqcRYGate(q, -3.1080956131294646, 6);
  sqcRZGate(q, 1.7103585700033748, 6);
  sqcRYGate(q, -0.0009509098309196471, 7);
  sqcRZGate(q, 2.549011974655538, 7);
  sqcRYGate(q, -3.1298749745497214, 8);
  sqcRZGate(q, -2.1264967940909303, 8);
  sqcRYGate(q, -0.281658321060414, 9);
  sqcRZGate(q, 1.6230960868336215, 9);
  sqcRYGate(q, 0.40939457911732735, 10);
  sqcRZGate(q, -0.45566816595748294, 10);
  sqcRYGate(q, 0.6349727041563246, 11);
  sqcRZGate(q, -1.1829443490831555, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.8008735469551919, 0);
  sqcRZGate(q, -1.6795812975744235, 0);
  sqcRYGate(q, -2.001257786966911, 1);
  sqcRZGate(q, 0.8215724054630842, 1);
  sqcRYGate(q, -0.5694757417210248, 2);
  sqcRZGate(q, 1.3162514918190613, 2);
  sqcRYGate(q, 2.222700955957465, 3);
  sqcRZGate(q, -2.079097519638, 3);
  sqcRYGate(q, -1.416691340440267, 4);
  sqcRZGate(q, -0.304094265457258, 4);
  sqcRYGate(q, 2.535376845294887, 5);
  sqcRZGate(q, 1.1368281432612772, 5);
  sqcRYGate(q, -3.047096605227924, 6);
  sqcRZGate(q, 3.032254145513924, 6);
  sqcRYGate(q, -1.6150542071482947, 7);
  sqcRZGate(q, 2.6388938237096404, 7);
  sqcRYGate(q, 1.6775218343147609, 8);
  sqcRZGate(q, 1.4570912407049157, 8);
  sqcRYGate(q, -0.07066951960061958, 9);
  sqcRZGate(q, -1.0162198226676464, 9);
  sqcRYGate(q, 2.661795254556823, 10);
  sqcRZGate(q, -1.439486487087378, 10);
  sqcRYGate(q, -1.4194566897694447, 11);
  sqcRZGate(q, 1.2604661639625525, 11);

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
