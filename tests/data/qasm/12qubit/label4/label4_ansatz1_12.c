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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.7120365373724418, 0);
  sqcRZGate(q, -3.099360175459564, 0);
  sqcRYGate(q, 0.04824282429632465, 1);
  sqcRZGate(q, -0.7724560760182957, 1);
  sqcRYGate(q, -2.0801751943707973, 2);
  sqcRZGate(q, 0.016829608834294518, 2);
  sqcRYGate(q, -0.01844423099718906, 3);
  sqcRZGate(q, 2.0106060722395704, 3);
  sqcRYGate(q, 2.534020453979344, 4);
  sqcRZGate(q, 0.07501452821394626, 4);
  sqcRYGate(q, 1.629429145081722, 5);
  sqcRZGate(q, 0.021471678170392416, 5);
  sqcRYGate(q, 3.141563567967017, 6);
  sqcRZGate(q, 0.9912736677862499, 6);
  sqcRYGate(q, -1.5702658114611978, 7);
  sqcRZGate(q, 1.5693849128531523, 7);
  sqcRYGate(q, 1.5708694060009707, 8);
  sqcRZGate(q, -0.40797713352209464, 8);
  sqcRYGate(q, -2.649327652153765, 9);
  sqcRZGate(q, -0.47068729210411525, 9);
  sqcRYGate(q, 3.0493011366479967, 10);
  sqcRZGate(q, 1.14741960418855, 10);
  sqcRYGate(q, 1.4895654290931253, 11);
  sqcRZGate(q, -3.011625190277131, 11);
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
  sqcRYGate(q, -0.5481752173958627, 0);
  sqcRZGate(q, 1.5542474672206907, 0);
  sqcRYGate(q, 2.834771634396886, 1);
  sqcRZGate(q, 0.5258410122492605, 1);
  sqcRYGate(q, -1.0544543263089259, 2);
  sqcRZGate(q, -1.0826470320264043, 2);
  sqcRYGate(q, 2.1112400064833277, 3);
  sqcRZGate(q, 0.022006546196936465, 3);
  sqcRYGate(q, 3.105901541937523, 4);
  sqcRZGate(q, -1.6061899186332547, 4);
  sqcRYGate(q, 1.5058075622419524, 5);
  sqcRZGate(q, 1.5537135024338449, 5);
  sqcRYGate(q, -1.5562072504762003, 6);
  sqcRZGate(q, -0.0010979778879143254, 6);
  sqcRYGate(q, -1.1654796688640527, 7);
  sqcRZGate(q, -2.137297056324175, 7);
  sqcRYGate(q, -1.6310598748161773, 8);
  sqcRZGate(q, -1.2431077490827676, 8);
  sqcRYGate(q, 3.132222842247538, 9);
  sqcRZGate(q, -1.5105958311215233, 9);
  sqcRYGate(q, 0.7788639595313276, 10);
  sqcRZGate(q, 0.6087297854304525, 10);
  sqcRYGate(q, -1.5079000806865688, 11);
  sqcRZGate(q, 1.6608067427986253, 11);
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
  sqcRYGate(q, -2.182515334250332, 0);
  sqcRZGate(q, 3.011989081177427, 0);
  sqcRYGate(q, -1.1462723108558797, 1);
  sqcRZGate(q, -1.2278514332627868, 1);
  sqcRYGate(q, 1.5573300416013982, 2);
  sqcRZGate(q, 1.5649948825241227, 2);
  sqcRYGate(q, -1.4581341911944128, 3);
  sqcRZGate(q, -0.2613393322666609, 3);
  sqcRYGate(q, -0.6555743134416998, 4);
  sqcRZGate(q, 2.7329870640371823, 4);
  sqcRYGate(q, 3.1303951351503985, 5);
  sqcRZGate(q, -3.0620759891972367, 5);
  sqcRYGate(q, 0.6624913917928438, 6);
  sqcRZGate(q, -0.8228499773812796, 6);
  sqcRYGate(q, 0.02213086055488725, 7);
  sqcRZGate(q, -2.108338845936942, 7);
  sqcRYGate(q, 1.2182009753888314, 8);
  sqcRZGate(q, 1.5904393448053415, 8);
  sqcRYGate(q, 0.25213062042655926, 9);
  sqcRZGate(q, -2.47605873460507, 9);
  sqcRYGate(q, -3.1363191475216725, 10);
  sqcRZGate(q, -2.0406793278427506, 10);
  sqcRYGate(q, 3.007929775766196, 11);
  sqcRZGate(q, -2.8304061844991097, 11);
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
  sqcRYGate(q, 2.920266276073642, 0);
  sqcRZGate(q, -1.2343323520707419, 0);
  sqcRYGate(q, -3.137320271205869, 1);
  sqcRZGate(q, 0.8295284198618686, 1);
  sqcRYGate(q, 1.4664382335244734, 2);
  sqcRZGate(q, -0.3017106808153258, 2);
  sqcRYGate(q, -3.141184267245393, 3);
  sqcRZGate(q, 0.9586756037515434, 3);
  sqcRYGate(q, 3.133833513535447, 4);
  sqcRZGate(q, 2.739841013684204, 4);
  sqcRYGate(q, 0.47214729778472364, 5);
  sqcRZGate(q, 1.1518831117794344, 5);
  sqcRYGate(q, 0.013852707647173725, 6);
  sqcRZGate(q, -1.5009542581593944, 6);
  sqcRYGate(q, 0.0024638026515706405, 7);
  sqcRZGate(q, -1.1987664058587573, 7);
  sqcRYGate(q, -3.1409376001711253, 8);
  sqcRZGate(q, -1.8286318153520857, 8);
  sqcRYGate(q, 0.02055818773555641, 9);
  sqcRZGate(q, -2.6125865928109313, 9);
  sqcRYGate(q, -2.2654412602391862, 10);
  sqcRZGate(q, -2.8833024228779602, 10);
  sqcRYGate(q, -3.107966053750978, 11);
  sqcRZGate(q, 0.46569298436682693, 11);
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
  sqcRYGate(q, 1.7432985010398658, 0);
  sqcRZGate(q, -1.9161409537585745, 0);
  sqcRYGate(q, -2.755192909054325, 1);
  sqcRZGate(q, -1.236340025874541, 1);
  sqcRYGate(q, 3.0834156008478044, 2);
  sqcRZGate(q, -2.28997634447372, 2);
  sqcRYGate(q, 1.378636999985888, 3);
  sqcRZGate(q, -0.0020013269036045504, 3);
  sqcRYGate(q, -0.71997151772052, 4);
  sqcRZGate(q, 1.6527731256831235, 4);
  sqcRYGate(q, -3.1149537078083265, 5);
  sqcRZGate(q, 1.0430568408182728, 5);
  sqcRYGate(q, 3.1400278807181445, 6);
  sqcRZGate(q, -0.7633166818385924, 6);
  sqcRYGate(q, -0.02502071891752511, 7);
  sqcRZGate(q, -1.1643846496723542, 7);
  sqcRYGate(q, -2.696411248160427, 8);
  sqcRZGate(q, -0.4567452561085155, 8);
  sqcRYGate(q, 1.7216093643803958, 9);
  sqcRZGate(q, -1.9460133789217322, 9);
  sqcRYGate(q, 1.6502128731929415, 10);
  sqcRZGate(q, -0.5355075879970652, 10);
  sqcRYGate(q, 0.1360638745427655, 11);
  sqcRZGate(q, 1.0512116790094863, 11);
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
  sqcRYGate(q, -2.978290902255979, 0);
  sqcRZGate(q, -3.043025162001203, 0);
  sqcRYGate(q, 0.11409321777612469, 1);
  sqcRZGate(q, 3.1402670384113365, 1);
  sqcRYGate(q, -0.0009762275700913037, 2);
  sqcRZGate(q, 1.9032428878392222, 2);
  sqcRYGate(q, 1.5938623274061636, 3);
  sqcRZGate(q, -2.9463442851761292, 3);
  sqcRYGate(q, -1.5715649661678746, 4);
  sqcRZGate(q, 0.24833428931627033, 4);
  sqcRYGate(q, 1.9188058285242313, 5);
  sqcRZGate(q, -0.03993884262189251, 5);
  sqcRYGate(q, -1.5426022629638094, 6);
  sqcRZGate(q, -1.5649684740854701, 6);
  sqcRYGate(q, -3.1411737977794076, 7);
  sqcRZGate(q, 0.4484213222408027, 7);
  sqcRYGate(q, 3.1389800346689145, 8);
  sqcRZGate(q, 0.14976765593344954, 8);
  sqcRYGate(q, 0.007473677720268083, 9);
  sqcRZGate(q, -2.3486574969273177, 9);
  sqcRYGate(q, -2.789280062903669, 10);
  sqcRZGate(q, 1.0463274122751158, 10);
  sqcRYGate(q, -1.1373130128068611, 11);
  sqcRZGate(q, 0.12594623422358445, 11);
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
  sqcRYGate(q, -1.8013932036431781, 0);
  sqcRZGate(q, 3.067794419738156, 0);
  sqcRYGate(q, -1.3677782056731191, 1);
  sqcRZGate(q, -1.0177778971524543, 1);
  sqcRYGate(q, 1.0350010322126364, 2);
  sqcRZGate(q, -3.1379668823699594, 2);
  sqcRYGate(q, 3.1361540076552004, 3);
  sqcRZGate(q, -2.8388162188160284, 3);
  sqcRYGate(q, -0.007263173820791557, 4);
  sqcRZGate(q, 1.3204324241508543, 4);
  sqcRYGate(q, -1.5699065809288606, 5);
  sqcRZGate(q, 3.134950414466461, 5);
  sqcRYGate(q, -1.570365838898744, 6);
  sqcRZGate(q, 0.0013914363234625643, 6);
  sqcRYGate(q, 3.1408311150874884, 7);
  sqcRZGate(q, 2.413649872267087, 7);
  sqcRYGate(q, 0.7892183016942047, 8);
  sqcRZGate(q, -1.6222087637392066, 8);
  sqcRYGate(q, 0.41882781469551456, 9);
  sqcRZGate(q, 1.1175707516987403, 9);
  sqcRYGate(q, 0.002003800488345142, 10);
  sqcRZGate(q, -2.103210403292437, 10);
  sqcRYGate(q, 1.5980709701255646, 11);
  sqcRZGate(q, 1.8191831601601522, 11);
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
  sqcRYGate(q, -1.5408655934189828, 0);
  sqcRZGate(q, 3.0552574197181306, 0);
  sqcRYGate(q, -3.048836362409224, 1);
  sqcRZGate(q, 0.7900070808887584, 1);
  sqcRYGate(q, 0.4874117843799527, 2);
  sqcRZGate(q, -1.5667171702469624, 2);
  sqcRYGate(q, -0.06292526942184537, 3);
  sqcRZGate(q, 2.955477946292168, 3);
  sqcRYGate(q, 1.5686996639154875, 4);
  sqcRZGate(q, 1.6375789863944956, 4);
  sqcRYGate(q, 2.070325397701509, 5);
  sqcRZGate(q, -0.005099613218454202, 5);
  sqcRYGate(q, -1.5753545101882125, 6);
  sqcRZGate(q, -3.1310150206379452, 6);
  sqcRYGate(q, 1.571551716859391, 7);
  sqcRZGate(q, -3.1332018498080627, 7);
  sqcRYGate(q, 1.5623469479033476, 8);
  sqcRZGate(q, -1.203367187733614, 8);
  sqcRYGate(q, 0.08215050027225601, 9);
  sqcRZGate(q, 1.4427499013691896, 9);
  sqcRYGate(q, -1.4387285412436688, 10);
  sqcRZGate(q, -2.5830894233782526, 10);
  sqcRYGate(q, -1.9876066659274008, 11);
  sqcRZGate(q, -2.5180940035475072, 11);
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
  sqcRYGate(q, -2.179915313363641, 0);
  sqcRZGate(q, -1.1816960922679038, 0);
  sqcRYGate(q, -1.559574709458545, 1);
  sqcRZGate(q, -2.0806768755731966, 1);
  sqcRYGate(q, 1.5561580828606294, 2);
  sqcRZGate(q, 1.160742257317425, 2);
  sqcRYGate(q, 1.1057835902997013, 3);
  sqcRZGate(q, -2.695164463559095, 3);
  sqcRYGate(q, 0.00018029207859652753, 4);
  sqcRZGate(q, -1.639397209124298, 4);
  sqcRYGate(q, 1.745635431348049, 5);
  sqcRZGate(q, -3.080843281419832, 5);
  sqcRYGate(q, 0.040366906308229034, 6);
  sqcRZGate(q, 3.1189748159452564, 6);
  sqcRYGate(q, -1.572346243584878, 7);
  sqcRZGate(q, 0.6841857596251177, 7);
  sqcRYGate(q, -3.0692301207408166, 8);
  sqcRZGate(q, -2.7734254203458977, 8);
  sqcRYGate(q, 3.141566661507326, 9);
  sqcRZGate(q, 0.37527335845680027, 9);
  sqcRYGate(q, -3.135478463412257, 10);
  sqcRZGate(q, -0.6766188433805863, 10);
  sqcRYGate(q, 2.0972350245802573, 11);
  sqcRZGate(q, -2.8467623360539087, 11);
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
  sqcRYGate(q, -0.03826462731964231, 0);
  sqcRZGate(q, -2.622253150606317, 0);
  sqcRYGate(q, 2.539840151354123, 1);
  sqcRZGate(q, -0.5817330832295042, 1);
  sqcRYGate(q, -2.8471496717364237, 2);
  sqcRZGate(q, 2.3856315909569896, 2);
  sqcRYGate(q, 1.5648160263966944, 3);
  sqcRZGate(q, 1.0882631686091269, 3);
  sqcRYGate(q, -1.5706388821730348, 4);
  sqcRZGate(q, -0.001087083895308895, 4);
  sqcRYGate(q, 0.4123408529094988, 5);
  sqcRZGate(q, 3.0865730298790233, 5);
  sqcRYGate(q, 0.12024685848524157, 6);
  sqcRZGate(q, -0.007365975085535541, 6);
  sqcRYGate(q, 9.532884334895186e-05, 7);
  sqcRZGate(q, 2.4574535492210936, 7);
  sqcRYGate(q, -2.5625050314892377, 8);
  sqcRZGate(q, -1.6871005743958172, 8);
  sqcRYGate(q, 2.7645540850933665, 9);
  sqcRZGate(q, 1.9755100102417775, 9);
  sqcRYGate(q, -0.43467657617347033, 10);
  sqcRZGate(q, -2.4682586635900323, 10);
  sqcRYGate(q, -1.8088027346830415, 11);
  sqcRZGate(q, -1.0339066277055, 11);
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
  sqcRYGate(q, 0.17862925595493273, 0);
  sqcRZGate(q, -2.630543919729613, 0);
  sqcRYGate(q, 1.3788779199061953, 1);
  sqcRZGate(q, 3.0763761896769726, 1);
  sqcRYGate(q, 0.005019826432328418, 2);
  sqcRZGate(q, 2.504715364074754, 2);
  sqcRYGate(q, -0.001674462056066554, 3);
  sqcRZGate(q, -2.9943861194539543, 3);
  sqcRYGate(q, -2.185755293282269, 4);
  sqcRZGate(q, -1.158483340441962, 4);
  sqcRYGate(q, -1.5762037626913985, 5);
  sqcRZGate(q, 3.141298932646759, 5);
  sqcRYGate(q, 0.1969346286176613, 6);
  sqcRZGate(q, 1.8121378911640158, 6);
  sqcRYGate(q, -1.5599533366027407, 7);
  sqcRZGate(q, -3.1327355233591145, 7);
  sqcRYGate(q, 0.49223510995132874, 8);
  sqcRZGate(q, -1.7450064223788726, 8);
  sqcRYGate(q, 0.0008563834042938366, 9);
  sqcRZGate(q, -1.5854307525191746, 9);
  sqcRYGate(q, 3.122820762897636, 10);
  sqcRZGate(q, 1.0479789451132722, 10);
  sqcRYGate(q, -0.1558303435068593, 11);
  sqcRZGate(q, 1.0610272558687994, 11);
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
  sqcRYGate(q, -3.137036491033964, 0);
  sqcRZGate(q, -1.4661512639491963, 0);
  sqcRYGate(q, 0.9586449397867076, 1);
  sqcRZGate(q, -2.853986878969108, 1);
  sqcRYGate(q, 2.8564590279488415, 2);
  sqcRZGate(q, 1.5443652447785683, 2);
  sqcRYGate(q, 0.0003166272335497416, 3);
  sqcRZGate(q, 0.33316520550193385, 3);
  sqcRYGate(q, -3.138937339445083, 4);
  sqcRZGate(q, 1.8977258620012858, 4);
  sqcRYGate(q, -1.6151125889421551, 5);
  sqcRZGate(q, 1.2315332111345103, 5);
  sqcRYGate(q, -1.329298855991599, 6);
  sqcRZGate(q, 3.140261050497444, 6);
  sqcRYGate(q, -2.0895758150538697, 7);
  sqcRZGate(q, 2.9358511705544754, 7);
  sqcRYGate(q, -0.021366695857864215, 8);
  sqcRZGate(q, 1.4057928165385913, 8);
  sqcRYGate(q, -1.5725307592877238, 9);
  sqcRZGate(q, -1.5764013600100872, 9);
  sqcRYGate(q, -0.4621222132876569, 10);
  sqcRZGate(q, -1.1111445611009159, 10);
  sqcRYGate(q, -1.334083447345936, 11);
  sqcRZGate(q, -0.08292324229024484, 11);
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
  sqcRYGate(q, -1.6385928816982638, 0);
  sqcRZGate(q, 0.09250641608518517, 0);
  sqcRYGate(q, -2.9117315624400795, 1);
  sqcRZGate(q, -1.3144022934897688, 1);
  sqcRYGate(q, 1.572044620116144, 2);
  sqcRZGate(q, -1.570630859854353, 2);
  sqcRYGate(q, -1.572233237429681, 3);
  sqcRZGate(q, -2.3085373184415943, 3);
  sqcRYGate(q, 1.51844845699301, 4);
  sqcRZGate(q, 0.3663833212359017, 4);
  sqcRYGate(q, -1.9618234678370463, 5);
  sqcRZGate(q, 0.20317275008119662, 5);
  sqcRYGate(q, 0.015836836306597733, 6);
  sqcRZGate(q, 1.0275227679939067, 6);
  sqcRYGate(q, -0.00032552711094613324, 7);
  sqcRZGate(q, -2.691208084589059, 7);
  sqcRYGate(q, -0.15619588987030397, 8);
  sqcRZGate(q, -3.017462487391531, 8);
  sqcRYGate(q, 1.5710839890597295, 9);
  sqcRZGate(q, 0.621255154042712, 9);
  sqcRYGate(q, -0.803768607923148, 10);
  sqcRZGate(q, 2.5513084827497003, 10);
  sqcRYGate(q, 1.0482996841256265, 11);
  sqcRZGate(q, -1.35252004389226, 11);
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
  sqcRYGate(q, 1.5710833463246647, 0);
  sqcRZGate(q, 1.5743001656101447, 0);
  sqcRYGate(q, 1.5703530445480787, 1);
  sqcRZGate(q, 1.5704392320183587, 1);
  sqcRYGate(q, -1.5708704188888278, 2);
  sqcRZGate(q, -2.215290363578011, 2);
  sqcRYGate(q, 3.1277655283563597, 3);
  sqcRZGate(q, -2.400169256005606, 3);
  sqcRYGate(q, -3.141458040803808, 4);
  sqcRZGate(q, -1.3334391198611826, 4);
  sqcRYGate(q, -0.0023249671613010552, 5);
  sqcRZGate(q, 2.9380256264669846, 5);
  sqcRYGate(q, 0.0006568208180715795, 6);
  sqcRZGate(q, 2.06890603646508, 6);
  sqcRYGate(q, 0.0012170317696837871, 7);
  sqcRZGate(q, 2.703295847685747, 7);
  sqcRYGate(q, 3.141022843422706, 8);
  sqcRZGate(q, -0.17707680640193268, 8);
  sqcRYGate(q, -0.0002615640635079686, 9);
  sqcRZGate(q, 0.9488383980850222, 9);
  sqcRYGate(q, 1.571112926619704, 10);
  sqcRZGate(q, -3.1406946740458883, 10);
  sqcRYGate(q, -0.006915713714162474, 11);
  sqcRZGate(q, -0.3708722943177168, 11);
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
  sqcRYGate(q, 0.8033165815048688, 0);
  sqcRZGate(q, 0.0004729230456783639, 0);
  sqcRYGate(q, -1.5704995897113143, 1);
  sqcRZGate(q, 0.34437351966444574, 1);
  sqcRYGate(q, -0.0006256682200076469, 2);
  sqcRZGate(q, -0.9262674335769772, 2);
  sqcRYGate(q, -0.0006306863636006077, 3);
  sqcRZGate(q, -1.4794665384291135, 3);
  sqcRYGate(q, 3.054811365272554, 4);
  sqcRZGate(q, -0.12386346554735628, 4);
  sqcRYGate(q, -1.1795759405953357, 5);
  sqcRZGate(q, -0.3394771153267796, 5);
  sqcRYGate(q, 0.01650236245171577, 6);
  sqcRZGate(q, -0.8159411354079611, 6);
  sqcRYGate(q, 3.1415265029094637, 7);
  sqcRZGate(q, -1.7693840168816526, 7);
  sqcRYGate(q, -0.14095383249580964, 8);
  sqcRZGate(q, -1.7454482688590662, 8);
  sqcRYGate(q, -1.5709022211561057, 9);
  sqcRZGate(q, 0.0025095057100627356, 9);
  sqcRYGate(q, -2.428790761078927, 10);
  sqcRZGate(q, -1.626210451545467, 10);
  sqcRYGate(q, -1.5699954380552088, 11);
  sqcRZGate(q, -3.1415243131280053, 11);
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
  sqcRYGate(q, 1.5710890219964864, 0);
  sqcRZGate(q, 2.287282249579808, 0);
  sqcRYGate(q, -0.0015084865352905652, 1);
  sqcRZGate(q, -1.2687270492038003, 1);
  sqcRYGate(q, -0.8145371270728347, 2);
  sqcRZGate(q, 2.2870993726391995, 2);
  sqcRYGate(q, 1.5811988073789653, 3);
  sqcRZGate(q, 0.637823336536256, 3);
  sqcRYGate(q, 1.5709297016739334, 4);
  sqcRZGate(q, 2.2878292976964514, 4);
  sqcRYGate(q, 1.5715135321223273, 5);
  sqcRZGate(q, 0.02846601009943496, 5);
  sqcRYGate(q, 2.7798041964376767, 6);
  sqcRZGate(q, -0.11659916617838115, 6);
  sqcRYGate(q, 1.5628555387748575, 7);
  sqcRZGate(q, 1.1738888312190234, 7);
  sqcRYGate(q, 1.5709695803541381, 8);
  sqcRZGate(q, 0.7099889498452301, 8);
  sqcRYGate(q, -1.5693577874894915, 9);
  sqcRZGate(q, -0.9139110363222054, 9);
  sqcRYGate(q, 3.1227516952325707, 10);
  sqcRZGate(q, 2.225106362465698, 10);
  sqcRYGate(q, 1.5729107095074035, 11);
  sqcRZGate(q, 2.226941747428625, 11);

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
