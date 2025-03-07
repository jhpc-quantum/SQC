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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.6996213806399267, 0);
  sqcRZGate(q, -1.8419066619317437, 0);
  sqcRYGate(q, -0.010087014650624225, 1);
  sqcRZGate(q, -1.7800350310396384, 1);
  sqcRYGate(q, -2.011413579822878, 2);
  sqcRZGate(q, -2.852231534058807, 2);
  sqcRYGate(q, -2.381398554862884, 3);
  sqcRZGate(q, 1.9155323177598937, 3);
  sqcRYGate(q, 0.09492019682053152, 4);
  sqcRZGate(q, 1.3198910971402291, 4);
  sqcRYGate(q, -6.21990831444208e-05, 5);
  sqcRZGate(q, 2.7754999811487195, 5);
  sqcRYGate(q, -1.5676412619168887, 6);
  sqcRZGate(q, 1.5681044141765579, 6);
  sqcRYGate(q, 2.7044651941373283, 7);
  sqcRZGate(q, 2.6929299447120294, 7);
  sqcRYGate(q, -0.00014347410614550416, 8);
  sqcRZGate(q, 0.15430569070840594, 8);
  sqcRYGate(q, 2.961003496460258, 9);
  sqcRZGate(q, 3.0652040825616855, 9);
  sqcRYGate(q, -3.139322018773583, 10);
  sqcRZGate(q, 1.346809492734355, 10);
  sqcRYGate(q, -1.0701118006231374, 11);
  sqcRZGate(q, -1.5848475119882408, 11);
  sqcRYGate(q, -3.126265648374156, 12);
  sqcRZGate(q, 1.297344723492075, 12);
  sqcRYGate(q, -1.4589705106029625, 13);
  sqcRZGate(q, 2.5539609089898643, 13);
  sqcRYGate(q, -1.5846846607630347, 14);
  sqcRZGate(q, 1.7897792579660154, 14);
  sqcRYGate(q, 1.5719621172682514, 15);
  sqcRZGate(q, 0.01730944496379827, 15);
  sqcRYGate(q, 1.4401087621986552, 16);
  sqcRZGate(q, -1.622225036396185, 16);
  sqcRYGate(q, -0.19319981108854148, 17);
  sqcRZGate(q, 0.6279140054179768, 17);
  sqcRYGate(q, -3.1415137416393044, 18);
  sqcRZGate(q, -1.7817162041706178, 18);
  sqcRYGate(q, -1.5261297425949767, 19);
  sqcRZGate(q, -2.932905173222156, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.5181164362396355, 0);
  sqcRZGate(q, 2.5302221905603925, 0);
  sqcRYGate(q, 1.5852108717027544, 1);
  sqcRZGate(q, 1.5711748587643761, 1);
  sqcRYGate(q, 0.38330676663801216, 2);
  sqcRZGate(q, -1.3763117379886785, 2);
  sqcRYGate(q, 2.6012368667436854, 3);
  sqcRZGate(q, 2.811057910934454, 3);
  sqcRYGate(q, -6.459340680109449e-06, 4);
  sqcRZGate(q, 1.9363958523622817, 4);
  sqcRYGate(q, -3.1831707379819834e-05, 5);
  sqcRZGate(q, -2.994481564425614, 5);
  sqcRYGate(q, 0.252834408562582, 6);
  sqcRZGate(q, 1.5745509314144766, 6);
  sqcRYGate(q, -3.141033845881097, 7);
  sqcRZGate(q, 0.8571769854662872, 7);
  sqcRYGate(q, 2.4252759918412963, 8);
  sqcRZGate(q, 2.0392347383293767, 8);
  sqcRYGate(q, 0.6985139090636655, 9);
  sqcRZGate(q, -1.7207592287199986, 9);
  sqcRYGate(q, 3.1395256879709907, 10);
  sqcRZGate(q, 2.314209096784073, 10);
  sqcRYGate(q, -1.5865459371942539, 11);
  sqcRZGate(q, -0.047842805061197424, 11);
  sqcRYGate(q, 1.9865169978513687e-05, 12);
  sqcRZGate(q, 1.721171005249533, 12);
  sqcRYGate(q, 0.015310469450777103, 13);
  sqcRZGate(q, 1.6964352561238167, 13);
  sqcRYGate(q, 0.022674946096949082, 14);
  sqcRZGate(q, -1.49182592713289, 14);
  sqcRYGate(q, 1.546969355405554, 15);
  sqcRZGate(q, -1.5222336715707128, 15);
  sqcRYGate(q, 1.2590742558666463, 16);
  sqcRZGate(q, 2.6416029554401472, 16);
  sqcRYGate(q, -0.8801027417246431, 17);
  sqcRZGate(q, 2.346295673764034, 17);
  sqcRYGate(q, 0.0002539984568032949, 18);
  sqcRZGate(q, -2.2699260463245894, 18);
  sqcRYGate(q, -1.4777782103957726, 19);
  sqcRZGate(q, 2.057549100085082, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.004102385481202549, 0);
  sqcRZGate(q, 2.2583786028237736, 0);
  sqcRYGate(q, 0.6876110969348996, 1);
  sqcRZGate(q, 0.35234189089224877, 1);
  sqcRYGate(q, -0.6951870590658427, 2);
  sqcRZGate(q, -2.5835844467155806, 2);
  sqcRYGate(q, -0.004457083151793384, 3);
  sqcRZGate(q, -1.005608364497065, 3);
  sqcRYGate(q, 0.09808933797866715, 4);
  sqcRZGate(q, -2.38861963627578, 4);
  sqcRYGate(q, 3.141584332788978, 5);
  sqcRZGate(q, -1.7899149730501271, 5);
  sqcRYGate(q, -1.5682036707255724, 6);
  sqcRZGate(q, 1.2733445591260082, 6);
  sqcRYGate(q, 1.5917722920236264, 7);
  sqcRZGate(q, 2.157397201664181, 7);
  sqcRYGate(q, 0.003685331919335659, 8);
  sqcRZGate(q, -0.12886228195108804, 8);
  sqcRYGate(q, 3.134166405528709, 9);
  sqcRZGate(q, 1.6484793552666137, 9);
  sqcRYGate(q, -2.3021890436740255, 10);
  sqcRZGate(q, 0.9363688902219122, 10);
  sqcRYGate(q, 1.4284591336029084, 11);
  sqcRZGate(q, 0.026288533713648473, 11);
  sqcRYGate(q, -0.02331166071331392, 12);
  sqcRZGate(q, -0.329867696816944, 12);
  sqcRYGate(q, 0.002952718598466575, 13);
  sqcRZGate(q, 1.412847163433933, 13);
  sqcRYGate(q, -1.584483183707195, 14);
  sqcRZGate(q, -1.476753493573237, 14);
  sqcRYGate(q, -1.5985458262417724, 15);
  sqcRZGate(q, -3.133990147984048, 15);
  sqcRYGate(q, 0.8675132448511285, 16);
  sqcRZGate(q, 1.9745790678349522, 16);
  sqcRYGate(q, -0.07064278252266921, 17);
  sqcRZGate(q, 3.0863768301045953, 17);
  sqcRYGate(q, 3.1408292663017066, 18);
  sqcRZGate(q, -2.4462517826048567, 18);
  sqcRYGate(q, 1.5452999568456365, 19);
  sqcRZGate(q, -1.3537348272740075, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.3619939219246713, 0);
  sqcRZGate(q, 1.920132726142756, 0);
  sqcRYGate(q, 0.07332087449352659, 1);
  sqcRZGate(q, -0.9126751666487944, 1);
  sqcRYGate(q, 0.1077901591784906, 2);
  sqcRZGate(q, 2.1526009123323946, 2);
  sqcRYGate(q, -0.8212181930796845, 3);
  sqcRZGate(q, 2.446103694884462, 3);
  sqcRYGate(q, -3.135819863252654, 4);
  sqcRZGate(q, -0.3833108822755476, 4);
  sqcRYGate(q, -1.5670760716185006, 5);
  sqcRZGate(q, 1.5655871515394157, 5);
  sqcRYGate(q, -1.5716714316909721, 6);
  sqcRZGate(q, 1.498590588882334, 6);
  sqcRYGate(q, -1.5745844235369342, 7);
  sqcRZGate(q, 1.4041513655956415, 7);
  sqcRYGate(q, 3.139857725572474, 8);
  sqcRZGate(q, 2.330103242604957, 8);
  sqcRYGate(q, 2.8503570717476077, 9);
  sqcRZGate(q, 1.725969236015619, 9);
  sqcRYGate(q, -3.126374557736965, 10);
  sqcRZGate(q, -2.936441455390022, 10);
  sqcRYGate(q, 1.4310440953182413, 11);
  sqcRZGate(q, 1.0679464929537346, 11);
  sqcRYGate(q, -1.5698803949668285, 12);
  sqcRZGate(q, -1.5719572751742705, 12);
  sqcRYGate(q, -0.004262424283940721, 13);
  sqcRZGate(q, -1.1127800207518295, 13);
  sqcRYGate(q, 3.1293901810132607, 14);
  sqcRZGate(q, 1.7386815096000916, 14);
  sqcRYGate(q, -1.5793863605183933, 15);
  sqcRZGate(q, 3.1378973652685125, 15);
  sqcRYGate(q, -0.005078843413615154, 16);
  sqcRZGate(q, 0.6125347495053164, 16);
  sqcRYGate(q, 0.43434323315103535, 17);
  sqcRZGate(q, -2.9226919685648376, 17);
  sqcRYGate(q, 2.8735088548614844e-06, 18);
  sqcRZGate(q, 2.312198827369036, 18);
  sqcRYGate(q, 2.457345531189984, 19);
  sqcRZGate(q, -1.2448471997343165, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.006448163478648183, 0);
  sqcRZGate(q, 1.9965973281930038, 0);
  sqcRYGate(q, -3.1375309361549366, 1);
  sqcRZGate(q, 1.0043858646684143, 1);
  sqcRYGate(q, 1.006062647550066, 2);
  sqcRZGate(q, -0.9611217407321284, 2);
  sqcRYGate(q, 1.559649076345227, 3);
  sqcRZGate(q, -1.7187137894394242, 3);
  sqcRYGate(q, 0.025614840726489948, 4);
  sqcRZGate(q, 0.03182455264398728, 4);
  sqcRYGate(q, 1.5466980162403525, 5);
  sqcRZGate(q, -2.6811084332033994, 5);
  sqcRYGate(q, 0.26108019295027163, 6);
  sqcRZGate(q, 1.6434323552006151, 6);
  sqcRYGate(q, 3.134576039209949, 7);
  sqcRZGate(q, -1.6504879879396555, 7);
  sqcRYGate(q, -2.562364250429623, 8);
  sqcRZGate(q, 1.650178873964905, 8);
  sqcRYGate(q, 0.14854157206849133, 9);
  sqcRZGate(q, -0.11440887434141114, 9);
  sqcRYGate(q, 3.141006794925767, 10);
  sqcRZGate(q, -1.0286176165251362, 10);
  sqcRYGate(q, 2.620390301280876, 11);
  sqcRZGate(q, 1.4275981946600793, 11);
  sqcRYGate(q, -1.6578899948404997, 12);
  sqcRZGate(q, -3.089384719910299, 12);
  sqcRYGate(q, -1.570932687561528, 13);
  sqcRZGate(q, 3.1355324765518695, 13);
  sqcRYGate(q, 1.570723782425613, 14);
  sqcRZGate(q, 0.01734962949658395, 14);
  sqcRYGate(q, 1.4967241864287182, 15);
  sqcRZGate(q, 0.8109808948731105, 15);
  sqcRYGate(q, 2.4542017396928704, 16);
  sqcRZGate(q, 1.8068147598028155, 16);
  sqcRYGate(q, 0.43420734652372067, 17);
  sqcRZGate(q, 2.491468134946099, 17);
  sqcRYGate(q, 3.1411489831053325, 18);
  sqcRZGate(q, 3.099974303324039, 18);
  sqcRYGate(q, 1.5499443701566396, 19);
  sqcRZGate(q, 0.2568405459598919, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.1275526124126682, 0);
  sqcRZGate(q, 1.2991249281316222, 0);
  sqcRYGate(q, -1.5706993027159066, 1);
  sqcRZGate(q, 2.700837603276565, 1);
  sqcRYGate(q, 0.3700520925895825, 2);
  sqcRZGate(q, 2.839791969500737, 2);
  sqcRYGate(q, 1.5716211822267372, 3);
  sqcRZGate(q, -1.5762774911144788, 3);
  sqcRYGate(q, 0.007954320255761626, 4);
  sqcRZGate(q, -0.014634600500812316, 4);
  sqcRYGate(q, -3.1354203529174627, 5);
  sqcRZGate(q, 0.46972625843581556, 5);
  sqcRYGate(q, -1.5671851221397668, 6);
  sqcRZGate(q, 2.858725305767191, 6);
  sqcRYGate(q, 3.1369870383813105, 7);
  sqcRZGate(q, 0.714228003097392, 7);
  sqcRYGate(q, 1.5807183660173292, 8);
  sqcRZGate(q, 1.5792777717177713, 8);
  sqcRYGate(q, 0.04513803745328839, 9);
  sqcRZGate(q, 2.866021506315139, 9);
  sqcRYGate(q, -0.007161699032717017, 10);
  sqcRZGate(q, 0.8381365490106694, 10);
  sqcRYGate(q, -1.5683380567651637, 11);
  sqcRZGate(q, -1.5690249706689565, 11);
  sqcRYGate(q, -1.6570484595792996, 12);
  sqcRZGate(q, 1.575125182073873, 12);
  sqcRYGate(q, 3.0901690796818584, 13);
  sqcRZGate(q, 3.1335022982693834, 13);
  sqcRYGate(q, 0.08718204945754772, 14);
  sqcRZGate(q, -2.2473594326998283, 14);
  sqcRYGate(q, 0.12054710733308571, 15);
  sqcRZGate(q, -0.1663389304189211, 15);
  sqcRYGate(q, -1.569670589542902, 16);
  sqcRZGate(q, -3.139048423849551, 16);
  sqcRYGate(q, 0.7641801105137453, 17);
  sqcRZGate(q, 2.067376562816787, 17);
  sqcRYGate(q, -0.00022848606171077537, 18);
  sqcRZGate(q, 0.8992814439035703, 18);
  sqcRYGate(q, -3.068015964870137, 19);
  sqcRZGate(q, 1.0893289923143434, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.037647337233843, 0);
  sqcRZGate(q, -0.9430910441051591, 0);
  sqcRYGate(q, 1.575567089153783, 1);
  sqcRZGate(q, -2.9925582577660537, 1);
  sqcRYGate(q, -0.007515011487632578, 2);
  sqcRZGate(q, 1.7495311977007075, 2);
  sqcRYGate(q, -1.5652339618646038, 3);
  sqcRZGate(q, 1.5656977568592456, 3);
  sqcRYGate(q, -1.5716488442999483, 4);
  sqcRZGate(q, -0.034161960544467185, 4);
  sqcRYGate(q, 3.0943665204326116, 5);
  sqcRZGate(q, 0.01397493688383261, 5);
  sqcRYGate(q, 1.6063625193231028, 6);
  sqcRZGate(q, 1.8259419586239198, 6);
  sqcRYGate(q, -0.006207483318223914, 7);
  sqcRZGate(q, 1.0467296305280582, 7);
  sqcRYGate(q, -3.12369322056064, 8);
  sqcRZGate(q, 0.0690110920166499, 8);
  sqcRYGate(q, 0.06876329766817779, 9);
  sqcRZGate(q, 1.9368428933820412, 9);
  sqcRYGate(q, -0.000462059274131457, 10);
  sqcRZGate(q, -0.4265901436501377, 10);
  sqcRYGate(q, -1.5690862381362853, 11);
  sqcRZGate(q, -2.118609604766769, 11);
  sqcRYGate(q, -1.5686442868370225, 12);
  sqcRZGate(q, 3.0498918129836072, 12);
  sqcRYGate(q, 3.029642989305952, 13);
  sqcRZGate(q, -3.0332543185161214, 13);
  sqcRYGate(q, 0.002035710738988659, 14);
  sqcRZGate(q, -2.484493380100734, 14);
  sqcRYGate(q, 3.100095047552451, 15);
  sqcRZGate(q, -0.2545011233519121, 15);
  sqcRYGate(q, -0.26074230888676114, 16);
  sqcRZGate(q, -1.5701971752390977, 16);
  sqcRYGate(q, -1.572817641363467, 17);
  sqcRZGate(q, -1.5711390692389706, 17);
  sqcRYGate(q, 3.09891152471167, 18);
  sqcRZGate(q, -1.5152078926144281, 18);
  sqcRYGate(q, 0.06576785594092982, 19);
  sqcRZGate(q, 0.9107400577331148, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.0035327324037929915, 0);
  sqcRZGate(q, -0.6140421550579421, 0);
  sqcRYGate(q, 0.02965468576527197, 1);
  sqcRZGate(q, 2.430805303268956, 1);
  sqcRYGate(q, 1.5386014107966168, 2);
  sqcRZGate(q, -3.1332235306031033, 2);
  sqcRYGate(q, 1.5729904535955759, 3);
  sqcRZGate(q, -3.0698949679664316, 3);
  sqcRYGate(q, 3.1405390981799983, 4);
  sqcRZGate(q, -1.6053161800883708, 4);
  sqcRYGate(q, 1.5461584416435417, 5);
  sqcRZGate(q, -3.140889338986831, 5);
  sqcRYGate(q, -3.133827990072659, 6);
  sqcRZGate(q, -1.3010279684844335, 6);
  sqcRYGate(q, -3.1395119104005333, 7);
  sqcRZGate(q, 2.47625597030265, 7);
  sqcRYGate(q, 0.3728145688591411, 8);
  sqcRZGate(q, -0.0764749003153579, 8);
  sqcRYGate(q, -3.0999248303213354, 9);
  sqcRZGate(q, 2.307013634454021, 9);
  sqcRYGate(q, 1.4017812862535188, 10);
  sqcRZGate(q, 2.7803846894945226, 10);
  sqcRYGate(q, -0.616872701534548, 11);
  sqcRZGate(q, 2.1626140598832264, 11);
  sqcRYGate(q, -1.5270654164148192, 12);
  sqcRZGate(q, 2.601830770607669, 12);
  sqcRYGate(q, 0.02670843359033381, 13);
  sqcRZGate(q, -1.7252276086135343, 13);
  sqcRYGate(q, -0.7782787772803461, 14);
  sqcRZGate(q, -0.0016595151319562058, 14);
  sqcRYGate(q, 3.1402909662066456, 15);
  sqcRZGate(q, -1.641000213242811, 15);
  sqcRYGate(q, -1.5733882047755614, 16);
  sqcRZGate(q, 1.1673378949362894, 16);
  sqcRYGate(q, 1.5726740069866487, 17);
  sqcRZGate(q, -2.986337627568312, 17);
  sqcRYGate(q, -3.1414285549395, 18);
  sqcRZGate(q, -2.227869618810323, 18);
  sqcRYGate(q, 1.5702459866114546, 19);
  sqcRZGate(q, -0.0003981753971121905, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.4764351061711887, 0);
  sqcRZGate(q, 3.063268357119694, 0);
  sqcRYGate(q, -0.002594958215581351, 1);
  sqcRZGate(q, -2.6770857922953484, 1);
  sqcRYGate(q, 1.2458933764733262, 2);
  sqcRZGate(q, 1.7619382643290766, 2);
  sqcRYGate(q, -0.05476804367009969, 3);
  sqcRZGate(q, 0.06874986234066142, 3);
  sqcRYGate(q, 2.1437373613140043, 4);
  sqcRZGate(q, -1.2599093505299055, 4);
  sqcRYGate(q, -1.5464013752979264, 5);
  sqcRZGate(q, -0.00317274238512244, 5);
  sqcRYGate(q, -1.407701616266963, 6);
  sqcRZGate(q, -2.89458984521778, 6);
  sqcRYGate(q, 0.001964291165327481, 7);
  sqcRZGate(q, -2.13763089421885, 7);
  sqcRYGate(q, -0.09788795190899435, 8);
  sqcRZGate(q, 3.1332511181308322, 8);
  sqcRYGate(q, 0.08449775794613856, 9);
  sqcRZGate(q, -2.3964843170799432, 9);
  sqcRYGate(q, -0.262219259227021, 10);
  sqcRZGate(q, 1.4419259872005603, 10);
  sqcRYGate(q, 3.141418058613744, 11);
  sqcRZGate(q, -1.2495008185962755, 11);
  sqcRYGate(q, 3.1360029050222415, 12);
  sqcRZGate(q, 0.9295037659441381, 12);
  sqcRYGate(q, -0.05047142955388928, 13);
  sqcRZGate(q, -0.3830150757244279, 13);
  sqcRYGate(q, 1.5692177824304316, 14);
  sqcRZGate(q, -2.6524957631443726, 14);
  sqcRYGate(q, -3.141164140402415, 15);
  sqcRZGate(q, 2.9697213197134342, 15);
  sqcRYGate(q, -1.7761883170105353, 16);
  sqcRZGate(q, -3.026971284196021, 16);
  sqcRYGate(q, -3.1291879734364114, 17);
  sqcRZGate(q, -0.85756824054856, 17);
  sqcRYGate(q, -0.9200610877984432, 18);
  sqcRZGate(q, -1.6308801916060351, 18);
  sqcRYGate(q, -1.5716416536251279, 19);
  sqcRZGate(q, -2.084260802685532, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.568352944899041, 0);
  sqcRZGate(q, 1.557096165257728, 0);
  sqcRYGate(q, 3.087690751715861, 1);
  sqcRZGate(q, -0.09712205362831441, 1);
  sqcRYGate(q, -1.5929307358786415, 2);
  sqcRZGate(q, -2.4548419566527713, 2);
  sqcRYGate(q, 0.12476148654866837, 3);
  sqcRZGate(q, -0.1834734987982749, 3);
  sqcRYGate(q, -3.1411549948168482, 4);
  sqcRZGate(q, -1.275784619672085, 4);
  sqcRYGate(q, 1.704756265190228, 5);
  sqcRZGate(q, 2.846247935355955, 5);
  sqcRYGate(q, -0.13429209574594303, 6);
  sqcRZGate(q, 0.0544742034308765, 6);
  sqcRYGate(q, 0.1957119243321479, 7);
  sqcRZGate(q, 1.658394925727755, 7);
  sqcRYGate(q, -1.585555145109029, 8);
  sqcRZGate(q, -1.7559276248543831, 8);
  sqcRYGate(q, -1.5278547641907594, 9);
  sqcRZGate(q, -2.052056072942621, 9);
  sqcRYGate(q, -3.0304154603667977, 10);
  sqcRZGate(q, 0.6497176385190073, 10);
  sqcRYGate(q, 1.5173978488419744, 11);
  sqcRZGate(q, -3.0123094916937756, 11);
  sqcRYGate(q, -3.140836575396926, 12);
  sqcRZGate(q, 1.8640141745761944, 12);
  sqcRYGate(q, -3.1231461541435004, 13);
  sqcRZGate(q, 2.7229645171061896, 13);
  sqcRYGate(q, -2.9090757794525657, 14);
  sqcRZGate(q, 2.9625601941223185, 14);
  sqcRYGate(q, 2.589017691784174, 15);
  sqcRZGate(q, -0.10518465809104514, 15);
  sqcRYGate(q, 0.8984514352473987, 16);
  sqcRZGate(q, -0.048660566682819706, 16);
  sqcRYGate(q, 3.11792146083187, 17);
  sqcRZGate(q, 1.2917926686350263, 17);
  sqcRYGate(q, -0.6131634339652232, 18);
  sqcRZGate(q, -1.4500887710705896, 18);
  sqcRYGate(q, 0.000432185660480755, 19);
  sqcRZGate(q, 0.1743244550738083, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.629558089247404, 0);
  sqcRZGate(q, 0.12182704212690877, 0);
  sqcRYGate(q, -2.5661147282109464, 1);
  sqcRZGate(q, -1.5179484030535502, 1);
  sqcRYGate(q, -0.18835971517335978, 2);
  sqcRZGate(q, 0.9103444965947085, 2);
  sqcRYGate(q, -2.180305909784395, 3);
  sqcRZGate(q, 1.6739282137681875, 3);
  sqcRYGate(q, -1.6452420966611685, 4);
  sqcRZGate(q, 1.0740699335003259, 4);
  sqcRYGate(q, -3.1277887355084224, 5);
  sqcRZGate(q, 2.824658047046017, 5);
  sqcRYGate(q, 0.26570877015486966, 6);
  sqcRZGate(q, -1.5539106878630475, 6);
  sqcRYGate(q, 2.9717456089749805, 7);
  sqcRZGate(q, 1.586534573579273, 7);
  sqcRYGate(q, -0.02524789528921989, 8);
  sqcRZGate(q, 0.17492649892142212, 8);
  sqcRYGate(q, -0.003631736643404694, 9);
  sqcRZGate(q, -1.0859096693254278, 9);
  sqcRYGate(q, 3.0505993876697595, 10);
  sqcRZGate(q, 2.7864718031480256, 10);
  sqcRYGate(q, -0.051837715540361096, 11);
  sqcRZGate(q, -0.049432352036782326, 11);
  sqcRYGate(q, -0.004874308526803719, 12);
  sqcRZGate(q, -2.294002829537793, 12);
  sqcRYGate(q, 3.019247151159794, 13);
  sqcRZGate(q, 2.1235902983477004, 13);
  sqcRYGate(q, 1.5712372764295452, 14);
  sqcRZGate(q, 0.0005442346400279517, 14);
  sqcRYGate(q, -0.00024598159029741234, 15);
  sqcRZGate(q, 1.0338153745613365, 15);
  sqcRYGate(q, -1.9344155973253851, 16);
  sqcRZGate(q, 1.7180614963646148, 16);
  sqcRYGate(q, -0.04518072730755218, 17);
  sqcRZGate(q, 2.249610372622355, 17);
  sqcRYGate(q, -0.7760755866718111, 18);
  sqcRZGate(q, -1.2654638511949938, 18);
  sqcRYGate(q, 0.00781808048659115, 19);
  sqcRZGate(q, 0.6428841116175181, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.07385841721160524, 0);
  sqcRZGate(q, 2.5860206098145477, 0);
  sqcRYGate(q, -2.968843017667232, 1);
  sqcRZGate(q, 0.028760476026773014, 1);
  sqcRYGate(q, 0.004027589633976979, 2);
  sqcRZGate(q, 2.179156024019899, 2);
  sqcRYGate(q, -3.1201943628996816, 3);
  sqcRZGate(q, 0.15752428720587996, 3);
  sqcRYGate(q, -3.141575873059587, 4);
  sqcRZGate(q, -0.4992042032976744, 4);
  sqcRYGate(q, -3.100688500633462, 5);
  sqcRZGate(q, -1.5828136953364436, 5);
  sqcRYGate(q, -3.0331054396518167, 6);
  sqcRZGate(q, -0.7010436342200084, 6);
  sqcRYGate(q, 0.29538003849426325, 7);
  sqcRZGate(q, -1.8826707937402558, 7);
  sqcRYGate(q, 1.551158957619953, 8);
  sqcRZGate(q, 0.8520394522140832, 8);
  sqcRYGate(q, 1.5691719747002555, 9);
  sqcRZGate(q, -0.006122948684689433, 9);
  sqcRYGate(q, -1.3463079241712146, 10);
  sqcRZGate(q, -1.6770296421478073, 10);
  sqcRYGate(q, 1.5400485606510643, 11);
  sqcRZGate(q, -2.534756531050491, 11);
  sqcRYGate(q, -3.138689295647327, 12);
  sqcRZGate(q, 1.2400169389828215, 12);
  sqcRYGate(q, -0.039388681177721985, 13);
  sqcRZGate(q, 2.5964123851708885, 13);
  sqcRYGate(q, -2.3951450561673, 14);
  sqcRZGate(q, 1.5739754914702493, 14);
  sqcRYGate(q, -3.1404791415358675, 15);
  sqcRZGate(q, 0.7509707314365094, 15);
  sqcRYGate(q, -1.570456606048948, 16);
  sqcRZGate(q, 1.5664515333775644, 16);
  sqcRYGate(q, -0.016984227373171387, 17);
  sqcRZGate(q, 2.9267207265390134, 17);
  sqcRYGate(q, -2.961172120805052, 18);
  sqcRZGate(q, 2.6143517380245584, 18);
  sqcRYGate(q, -0.0008880486485223216, 19);
  sqcRZGate(q, -0.548333434935714, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.074728874283166, 0);
  sqcRZGate(q, 2.1326975479720067, 0);
  sqcRYGate(q, -1.5854842806491733, 1);
  sqcRZGate(q, -2.7232268055554356, 1);
  sqcRYGate(q, 2.956800116160523, 2);
  sqcRZGate(q, 0.009099466543823976, 2);
  sqcRYGate(q, -1.5965487437679604, 3);
  sqcRZGate(q, 0.03641006113659518, 3);
  sqcRYGate(q, 1.5618185096601058, 4);
  sqcRZGate(q, 0.8878705232200277, 4);
  sqcRYGate(q, 1.5791233692977817, 5);
  sqcRZGate(q, 2.5592767577937274, 5);
  sqcRYGate(q, 0.007135918141250919, 6);
  sqcRZGate(q, -1.4739003756967934, 6);
  sqcRYGate(q, -0.010989433675684168, 7);
  sqcRZGate(q, -1.879298770531717, 7);
  sqcRYGate(q, 3.1398555069832135, 8);
  sqcRZGate(q, 0.18753224554298858, 8);
  sqcRYGate(q, 3.1337641994461634, 9);
  sqcRZGate(q, -2.176009677906635, 9);
  sqcRYGate(q, -0.000693767909934806, 10);
  sqcRZGate(q, -0.5276818396230114, 10);
  sqcRYGate(q, 3.136367207667554, 11);
  sqcRZGate(q, -3.0423982049380434, 11);
  sqcRYGate(q, 1.5721378523497878, 12);
  sqcRZGate(q, -0.6437048840501748, 12);
  sqcRYGate(q, -1.5640293766990672, 13);
  sqcRZGate(q, 1.0283079204881478, 13);
  sqcRYGate(q, -1.5671233120577979, 14);
  sqcRZGate(q, -2.357494531838718, 14);
  sqcRYGate(q, 3.1366445989424405, 15);
  sqcRZGate(q, -2.3019198168587804, 15);
  sqcRYGate(q, 1.5744035693224925, 16);
  sqcRZGate(q, -2.431129863447618, 16);
  sqcRYGate(q, 3.1366982718725627, 17);
  sqcRZGate(q, -2.1893162784226137, 17);
  sqcRYGate(q, -3.1368924530776625, 18);
  sqcRZGate(q, -1.7211232542125643, 18);
  sqcRYGate(q, -3.1301903021852215, 19);
  sqcRZGate(q, 1.5174071556819948, 19);

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
