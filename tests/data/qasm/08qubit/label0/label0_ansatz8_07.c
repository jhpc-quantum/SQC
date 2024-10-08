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

  sqcRYGate(q, 2.4402954714803546, 0);
  sqcRYGate(q, -1.9518627600908192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5079346635028532, 0);
  sqcRYGate(q, 2.0102600656686875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0739207813710796, 2);
  sqcRYGate(q, -2.239195264619161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4485393409624636, 2);
  sqcRYGate(q, -1.6227167223733732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.341186337563791, 4);
  sqcRYGate(q, -2.5219520504508797, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7995042970113744, 4);
  sqcRYGate(q, -2.0248556506325834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.970300305859329, 6);
  sqcRYGate(q, -0.39255034104783776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9980173833096173, 6);
  sqcRYGate(q, 2.1706652732331495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2216523539591062, 0);
  sqcRYGate(q, -1.6208591322131884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8131282969753756, 0);
  sqcRYGate(q, 1.2544543474015442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26546087262091733, 2);
  sqcRYGate(q, -0.5379671436600253, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.0013310799194777, 2);
  sqcRYGate(q, -0.2880397159140564, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8021776689469284, 4);
  sqcRYGate(q, 0.5774922981265502, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7510609205052862, 4);
  sqcRYGate(q, 0.9726681474395987, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.029982650653522406, 1);
  sqcRYGate(q, -1.991072113101286, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.093485574856764, 1);
  sqcRYGate(q, 1.6839833815797383, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.148693299230626, 3);
  sqcRYGate(q, -0.9665400348710573, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1067646714334831, 3);
  sqcRYGate(q, 1.3700810772936463, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.29861435286985927, 5);
  sqcRYGate(q, 1.3409783911497568, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.471024120929901, 5);
  sqcRYGate(q, -3.001579153144652, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.154446616529831, 0);
  sqcRYGate(q, 0.46159704979826893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1532265556664645, 0);
  sqcRYGate(q, 2.582577207203977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38894866730876476, 2);
  sqcRYGate(q, 0.6757693070125406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.259035958254378, 2);
  sqcRYGate(q, -1.2754418488909434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48099391967264443, 4);
  sqcRYGate(q, -1.8261997945077886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2944859419014954, 4);
  sqcRYGate(q, -1.0360511626352977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.020452371740596, 6);
  sqcRYGate(q, -0.21357636375140238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.829934079346019, 6);
  sqcRYGate(q, 0.6753851604623273, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09300479151682889, 0);
  sqcRYGate(q, 1.7624359776364176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0734237510212292, 0);
  sqcRYGate(q, 1.475753610783137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7650195102116237, 2);
  sqcRYGate(q, -1.3563442378790844, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7599151920318903, 2);
  sqcRYGate(q, -1.1147285644989164, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1282828350476435, 4);
  sqcRYGate(q, -2.2499724126932983, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.068574660388853, 4);
  sqcRYGate(q, -0.5186743988958904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.223147018574369, 1);
  sqcRYGate(q, 0.7270290371002526, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3705128466439245, 1);
  sqcRYGate(q, 2.6992807284302933, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17943925391705753, 3);
  sqcRYGate(q, -2.0503713252404543, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5268437851643286, 3);
  sqcRYGate(q, -2.8419237823481494, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.25664709223563964, 5);
  sqcRYGate(q, 0.38613991961471106, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.42607208878454816, 5);
  sqcRYGate(q, 1.933829287599982, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.657050558593006, 0);
  sqcRYGate(q, 0.14676402318182646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9214841678435517, 0);
  sqcRYGate(q, 2.493938592793298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8676800993199999, 2);
  sqcRYGate(q, -0.5774968670806597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9296073494024815, 2);
  sqcRYGate(q, -2.0119280763833443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4791649776911731, 4);
  sqcRYGate(q, -1.5963156183440121, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.033670364618441, 4);
  sqcRYGate(q, -1.1470151763100347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9608611084824565, 6);
  sqcRYGate(q, 0.8143214818505013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.569766948955585, 6);
  sqcRYGate(q, 1.68207949692221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2621193517205462, 0);
  sqcRYGate(q, 2.3623334617801413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3639283244347684, 0);
  sqcRYGate(q, -2.5675037968172694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.943886288810468, 2);
  sqcRYGate(q, 1.6760108324378982, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.406916290262245, 2);
  sqcRYGate(q, -1.3353059079738052, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.900856679618782, 4);
  sqcRYGate(q, 2.3452613857338043, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.733978477433347, 4);
  sqcRYGate(q, 2.7849618689374913, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.09538129542027421, 1);
  sqcRYGate(q, -1.5443053437005727, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8193354585520587, 1);
  sqcRYGate(q, 0.34025746293599823, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5051648466767953, 3);
  sqcRYGate(q, -2.1397768317683052, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2570374986541966, 3);
  sqcRYGate(q, -3.1010509849245325, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5767461340980875, 5);
  sqcRYGate(q, 0.43239315512619036, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3495223576127824, 5);
  sqcRYGate(q, 2.559262575735312, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1399903580751345, 0);
  sqcRYGate(q, -2.9746975129291138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2805225098800691, 0);
  sqcRYGate(q, 2.1048665501993113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.544671361280806, 2);
  sqcRYGate(q, 1.5982192123843129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7480065102788072, 2);
  sqcRYGate(q, 1.9806020532238122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1221807280163607, 4);
  sqcRYGate(q, 0.6201313208849479, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8404188367360512, 4);
  sqcRYGate(q, 0.8800646756128533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0574377127936057, 6);
  sqcRYGate(q, -2.5282050051569027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.00995851989837514, 6);
  sqcRYGate(q, -3.106654279775073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4484467906414407, 0);
  sqcRYGate(q, 0.5972389975716563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5733182259434315, 0);
  sqcRYGate(q, -2.4363306897388872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4757527726299124, 2);
  sqcRYGate(q, 2.1199404594238676, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4509935079699616, 2);
  sqcRYGate(q, 1.8058438595875606, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.46282224765612406, 4);
  sqcRYGate(q, 1.545868459979979, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.499476630112178, 4);
  sqcRYGate(q, -1.1433920173090932, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1315291433835046, 1);
  sqcRYGate(q, -1.0216450295431603, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8034767612582274, 1);
  sqcRYGate(q, -2.7818736504250334, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.912329846684699, 3);
  sqcRYGate(q, 0.9954893518811885, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3058918293245967, 3);
  sqcRYGate(q, -2.299176147598807, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9198408262813595, 5);
  sqcRYGate(q, -2.070261740706049, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.17714631759730934, 5);
  sqcRYGate(q, -2.7722276603846465, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.031800193684062, 0);
  sqcRYGate(q, 2.6084271752296675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6913483049621885, 0);
  sqcRYGate(q, 0.08120988130553021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0303152625487426, 2);
  sqcRYGate(q, -0.802247983863132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7330516769376365, 2);
  sqcRYGate(q, -0.8244009289159787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.651345175642246, 4);
  sqcRYGate(q, -2.956639908753358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44381947688173895, 4);
  sqcRYGate(q, -0.10337952650479032, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3626054571978994, 6);
  sqcRYGate(q, -0.06415703615061491, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4210837329944708, 6);
  sqcRYGate(q, -1.728863680467778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4556739283151687, 0);
  sqcRYGate(q, -0.8889384920230574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.044290387152029674, 0);
  sqcRYGate(q, -0.8893135969539161, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0051025289380293, 2);
  sqcRYGate(q, -1.6965649901816668, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.028957275429715, 2);
  sqcRYGate(q, -1.1254259398875455, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.08757258408879567, 4);
  sqcRYGate(q, -2.9303221124763663, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5117748608149922, 4);
  sqcRYGate(q, -0.9263340618618958, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.550245658466172, 1);
  sqcRYGate(q, 1.260505450176861, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5238017506097314, 1);
  sqcRYGate(q, -2.7031676820559603, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5164282668589437, 3);
  sqcRYGate(q, -1.3075814925291747, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7394647566360641, 3);
  sqcRYGate(q, 0.12891977963354506, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.478320628792591, 5);
  sqcRYGate(q, 0.5547306607939776, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5571856139715647, 5);
  sqcRYGate(q, 1.3786185766855574, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.707254335480016, 0);
  sqcRYGate(q, 0.03464831967990367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.920887191557367, 0);
  sqcRYGate(q, 1.1418476858161015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23398029917150487, 2);
  sqcRYGate(q, 1.6702654896767322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0954717064982673, 2);
  sqcRYGate(q, -0.5712374128739031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9819914714841786, 4);
  sqcRYGate(q, -3.1021417160097426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.093244087590785, 4);
  sqcRYGate(q, 0.03265093017267696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.155805753699239, 6);
  sqcRYGate(q, -1.9145842374636524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.969261674405407, 6);
  sqcRYGate(q, -0.04318684606944664, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.854219700551247, 0);
  sqcRYGate(q, 1.7793953085432754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1371701298813557, 0);
  sqcRYGate(q, -0.19905643266557593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2820602234045424, 2);
  sqcRYGate(q, -1.78141506797458, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.860431590514021, 2);
  sqcRYGate(q, 1.9189859279605805, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4334041277156953, 4);
  sqcRYGate(q, -2.779050469434665, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9425531208383904, 4);
  sqcRYGate(q, 2.7113268973124622, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.120838806652999, 1);
  sqcRYGate(q, 0.4574060130114174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5794604374167269, 1);
  sqcRYGate(q, -0.34145631114650604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.306368745504616, 3);
  sqcRYGate(q, 0.5436922331168627, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.31155078554862303, 3);
  sqcRYGate(q, 1.358637320398115, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6993140534449767, 5);
  sqcRYGate(q, -2.090170052477388, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.13960271129954396, 5);
  sqcRYGate(q, 2.490499233365939, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8118881124430266, 0);
  sqcRYGate(q, 0.6805579760202329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0436250805268683, 0);
  sqcRYGate(q, -2.4625508910026626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.01021032295265, 2);
  sqcRYGate(q, 2.7965899333165396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15133634148063832, 2);
  sqcRYGate(q, 2.5828041187190425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.850459824359327, 4);
  sqcRYGate(q, -0.06723728303128444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5455009068899175, 4);
  sqcRYGate(q, -2.2591791091904887, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.933235721399547, 6);
  sqcRYGate(q, 0.7399066006845186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8663771081415979, 6);
  sqcRYGate(q, 2.881903529828306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8650735491960349, 0);
  sqcRYGate(q, -2.248109607177647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2684149236990856, 0);
  sqcRYGate(q, -1.6468146030102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.273349589008306, 2);
  sqcRYGate(q, 1.1527871453843013, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.017297597998891412, 2);
  sqcRYGate(q, 1.0756290149092536, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7761749736045644, 4);
  sqcRYGate(q, -0.6507082021057897, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3961091397650804, 4);
  sqcRYGate(q, -1.295304024857706, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3625527827110497, 1);
  sqcRYGate(q, -3.060898032003604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9908914588249127, 1);
  sqcRYGate(q, 0.5613165803089673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1518599384589265, 3);
  sqcRYGate(q, -1.3910902605765934, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.296028712941551, 3);
  sqcRYGate(q, -1.2509032374729292, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.33762975922335237, 5);
  sqcRYGate(q, 1.8789062394294043, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5562698936504766, 5);
  sqcRYGate(q, -0.4550999806047394, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.944664573512127, 0);
  sqcRYGate(q, 0.7502086915532624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3329880816142188, 0);
  sqcRYGate(q, 1.6995696402705243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9107588849185977, 2);
  sqcRYGate(q, -0.161426792575036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9375784124115008, 2);
  sqcRYGate(q, 0.2497435941448078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04384658607840096, 4);
  sqcRYGate(q, -3.020239819735132, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1469594524833506, 4);
  sqcRYGate(q, 2.4954704208672664, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9648120615226353, 6);
  sqcRYGate(q, 1.2893974070262706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3557357191638957, 6);
  sqcRYGate(q, 1.5207144123617677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1641656859581466, 0);
  sqcRYGate(q, 0.22581910344996103, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1752283216609887, 0);
  sqcRYGate(q, -2.475996173675423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0522041803667426, 2);
  sqcRYGate(q, -0.07361957177459823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.474057265168455, 2);
  sqcRYGate(q, -1.0656063994451315, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5360338869685322, 4);
  sqcRYGate(q, -0.25517829794672187, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6564330089384143, 4);
  sqcRYGate(q, -2.0299827273283757, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.956354420891978, 1);
  sqcRYGate(q, 2.9184071763343784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.056695982411912586, 1);
  sqcRYGate(q, -2.3450545008666777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3895628049488367, 3);
  sqcRYGate(q, -0.8497647291955301, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.885749291074994, 3);
  sqcRYGate(q, -0.506884147749938, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.434684383708003, 5);
  sqcRYGate(q, -1.1428282755458954, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9089312799333221, 5);
  sqcRYGate(q, -1.3019394717806683, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.718443151649216, 0);
  sqcRYGate(q, -0.5399237052170437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8651491487938385, 0);
  sqcRYGate(q, -0.4694266208024444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.243556151966011, 2);
  sqcRYGate(q, 1.0871767595763089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43022936728853745, 2);
  sqcRYGate(q, 1.7981198232636793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9923766576956519, 4);
  sqcRYGate(q, 2.3737404028460185, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5134873676352225, 4);
  sqcRYGate(q, -0.8395477688563178, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21686477773236496, 6);
  sqcRYGate(q, -0.8025701609409074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8257789763567454, 6);
  sqcRYGate(q, -2.6499294727152485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4339207370822407, 0);
  sqcRYGate(q, 2.0362227377193616, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.793976645638712, 0);
  sqcRYGate(q, -0.30940298452351456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.35630272301093074, 2);
  sqcRYGate(q, 2.066823512414267, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3337775486050587, 2);
  sqcRYGate(q, -2.3056616704445623, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.24074716168696672, 4);
  sqcRYGate(q, -1.9931846587797253, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9592984677245529, 4);
  sqcRYGate(q, -1.7778417578209709, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5362176344399572, 1);
  sqcRYGate(q, -2.435487887848032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6569888097002421, 1);
  sqcRYGate(q, 2.733145585323118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.598811119347463, 3);
  sqcRYGate(q, -0.9689222890769046, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2776373159959498, 3);
  sqcRYGate(q, 1.7826254636572878, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.25940144302712, 5);
  sqcRYGate(q, -1.4487014351627403, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3773558523191607, 5);
  sqcRYGate(q, 0.44663257383068444, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.408183040004698, 0);
  sqcRYGate(q, -2.0686517670988303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1871437617548002, 0);
  sqcRYGate(q, 1.3911161972467303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1640703151640508, 2);
  sqcRYGate(q, 1.790340994371208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6509976546758611, 2);
  sqcRYGate(q, 2.7100280958812806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4370819081059762, 4);
  sqcRYGate(q, 2.684274471924084, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11268685986151272, 4);
  sqcRYGate(q, 2.3321729340037844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8763792497573668, 6);
  sqcRYGate(q, -2.2193033802350364, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8019843542729217, 6);
  sqcRYGate(q, -0.1607015263676317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3805981425129206, 0);
  sqcRYGate(q, -1.5014261073997286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2235646314440698, 0);
  sqcRYGate(q, -1.6996750989061127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1223424250567016, 2);
  sqcRYGate(q, -2.411847357925298, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1434270973620153, 2);
  sqcRYGate(q, -2.6856858231757608, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.891801292534771, 4);
  sqcRYGate(q, -1.3299204599430343, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7495307678595285, 4);
  sqcRYGate(q, 0.34497734761588994, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4914904433783427, 1);
  sqcRYGate(q, -2.1379247353502002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9046410379017655, 1);
  sqcRYGate(q, -2.8160008624549113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5590900111411408, 3);
  sqcRYGate(q, 2.25008100994993, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4170936429235467, 3);
  sqcRYGate(q, 2.4420542044042777, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9108173899616427, 5);
  sqcRYGate(q, -2.339562317039439, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3305328804041874, 5);
  sqcRYGate(q, -2.755301570398365, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1174405685563107, 0);
  sqcRYGate(q, -0.8962750127862273, 1);
  sqcRYGate(q, -2.6791538393408847, 2);
  sqcRYGate(q, 0.8316151271716802, 3);
  sqcRYGate(q, 2.0691683196668915, 4);
  sqcRYGate(q, 1.23172242001346, 5);
  sqcRYGate(q, -0.9777703369273436, 6);
  sqcRYGate(q, 1.743548607801726, 7);

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
