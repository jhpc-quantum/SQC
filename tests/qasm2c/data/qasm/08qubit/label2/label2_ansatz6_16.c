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

  sqcRYGate(q, -2.708618948749011, 0);
  sqcRYGate(q, 1.7742222816299407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4791510123037732, 0);
  sqcRYGate(q, -2.8123145936421103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5466740017575867, 1);
  sqcRYGate(q, -1.2269979168048784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0613802226269302, 1);
  sqcRYGate(q, 1.320931194421311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7598731144171609, 2);
  sqcRYGate(q, -3.0975372619109818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8596309329807914, 2);
  sqcRYGate(q, 0.2224735737185588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7108359023507091, 3);
  sqcRYGate(q, -1.857337231624972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.47982330926836525, 3);
  sqcRYGate(q, -2.7728680619601818, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.27143108060132615, 4);
  sqcRYGate(q, -1.4368429349143153, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0674491760086857, 4);
  sqcRYGate(q, 2.7334456815269736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.434332368018872, 5);
  sqcRYGate(q, 0.9577956741179653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.46249664918248, 5);
  sqcRYGate(q, -2.841891142909101, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.488407602235737, 6);
  sqcRYGate(q, -1.0564901320194018, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.316811205824143, 6);
  sqcRYGate(q, -2.1082039288130776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.850354546351196, 0);
  sqcRYGate(q, 1.3648714928752248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3578666026294, 0);
  sqcRYGate(q, -1.4012471548862782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5265756007724365, 1);
  sqcRYGate(q, -0.04300427310488342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4898114635106494, 1);
  sqcRYGate(q, -1.4952014995232892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.792900901660746, 2);
  sqcRYGate(q, 0.47473465976515605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6799444755897714, 2);
  sqcRYGate(q, -0.4194448631615071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.342518458895639, 3);
  sqcRYGate(q, 2.35054941617403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1497806741238996, 3);
  sqcRYGate(q, -2.033761483940858, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.530877330282063, 4);
  sqcRYGate(q, -1.867393535241466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8314621198028965, 4);
  sqcRYGate(q, -2.0022503117547306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.986424454774031, 5);
  sqcRYGate(q, 2.835506473791919, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9441319006441347, 5);
  sqcRYGate(q, -0.04355954211976649, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12037342038936615, 6);
  sqcRYGate(q, -1.6001240436515318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5994532706860412, 6);
  sqcRYGate(q, 1.0704567730477237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.021536821355255, 0);
  sqcRYGate(q, -0.8730280910171526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1482269216290533, 0);
  sqcRYGate(q, -1.2978935102318232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.131277983808845, 1);
  sqcRYGate(q, -3.0275979490174816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2925209298698357, 1);
  sqcRYGate(q, -2.5119546652380746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5934464568717495, 2);
  sqcRYGate(q, 0.004053652595583426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1757266848310595, 2);
  sqcRYGate(q, -0.3680134967004688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9952729061790073, 3);
  sqcRYGate(q, 2.2344006321689296, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4491860753054635, 3);
  sqcRYGate(q, 0.950416742377783, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7219291796697581, 4);
  sqcRYGate(q, -1.0762614951278475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8258388219504407, 4);
  sqcRYGate(q, -1.9767905972372415, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6503904816965274, 5);
  sqcRYGate(q, 2.811961756136849, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.881467505004366, 5);
  sqcRYGate(q, 2.9881016246530723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9988231046449005, 6);
  sqcRYGate(q, 0.1783791745752888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5633324508649458, 6);
  sqcRYGate(q, -1.8986282155673668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.275357617971463, 0);
  sqcRYGate(q, 1.3988001365732377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2440003980032757, 0);
  sqcRYGate(q, 0.5411102160757126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4188937029893993, 1);
  sqcRYGate(q, 0.3987752787922309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5660872037374327, 1);
  sqcRYGate(q, -2.416921492054394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5570346840336642, 2);
  sqcRYGate(q, 2.145863468812195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10276380077595636, 2);
  sqcRYGate(q, -0.6282998274542422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6006136214123009, 3);
  sqcRYGate(q, -2.3384559552706565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9752635448924689, 3);
  sqcRYGate(q, 1.862779559229017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4017532028502424, 4);
  sqcRYGate(q, -1.6518477012193358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5706323020489132, 4);
  sqcRYGate(q, 2.277377738040653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5781189143973098, 5);
  sqcRYGate(q, -3.132559745043944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.45996837563536225, 5);
  sqcRYGate(q, -1.302914052174418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17009724542737048, 6);
  sqcRYGate(q, 2.3497967926002907, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2557990849276153, 6);
  sqcRYGate(q, 0.8480527014108281, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.543929808777988, 0);
  sqcRYGate(q, 0.456940113262946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6080479271019562, 0);
  sqcRYGate(q, 2.1400510716584336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4103207971071381, 1);
  sqcRYGate(q, -2.115070981344734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.617070882116061, 1);
  sqcRYGate(q, 1.910626564338763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5428050880423276, 2);
  sqcRYGate(q, 0.5240777930324445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.437390186879409, 2);
  sqcRYGate(q, 1.8274335410320086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3557207094817645, 3);
  sqcRYGate(q, 0.8999201438062389, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3397103620370676, 3);
  sqcRYGate(q, 1.7362671311211342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.38489676810063767, 4);
  sqcRYGate(q, -2.7423396642163977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7560244090014767, 4);
  sqcRYGate(q, -0.41971327803102765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3824868935817056, 5);
  sqcRYGate(q, -3.0420132493348366, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6906165693029096, 5);
  sqcRYGate(q, 1.3743868338361978, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7843021873595166, 6);
  sqcRYGate(q, 2.12080160873386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3253625299419385, 6);
  sqcRYGate(q, -2.761671132346695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6031534527550728, 0);
  sqcRYGate(q, 2.693033246513649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7531446523030079, 0);
  sqcRYGate(q, 2.973316236306293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.45812066325294, 1);
  sqcRYGate(q, -2.791730009018878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.632486769770325, 1);
  sqcRYGate(q, -1.4357684906437242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6499321735847753, 2);
  sqcRYGate(q, -1.589611406225904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0473270661322853, 2);
  sqcRYGate(q, 1.5152903714516486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0317831819775867, 3);
  sqcRYGate(q, -0.2854051909162614, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.176154040374527, 3);
  sqcRYGate(q, 2.3144307584588364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6508550680132291, 4);
  sqcRYGate(q, -2.26968626471926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.862659566104422, 4);
  sqcRYGate(q, 1.6172278123874646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8789938398540507, 5);
  sqcRYGate(q, 1.3844358374637136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6293175581907033, 5);
  sqcRYGate(q, -0.5796487058074824, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4639130771271407, 6);
  sqcRYGate(q, -0.9291197164952028, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1445080773965719, 6);
  sqcRYGate(q, 2.2017680555141146, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.547126651664038, 0);
  sqcRYGate(q, 0.751144109806908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.01720062975513, 0);
  sqcRYGate(q, -2.8341453153778517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7904106901242862, 1);
  sqcRYGate(q, 2.7259136236290864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.840369798645777, 1);
  sqcRYGate(q, -2.2016663866091806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9657085251652884, 2);
  sqcRYGate(q, -1.1308625695077912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9703558981424627, 2);
  sqcRYGate(q, 1.6289513675028342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6810310690243855, 3);
  sqcRYGate(q, -2.985079799269501, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5852214482800697, 3);
  sqcRYGate(q, -0.9407282654186815, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8080629123085399, 4);
  sqcRYGate(q, 2.6891081877832113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3777116229212396, 4);
  sqcRYGate(q, 2.1505971335646024, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0000868682532693, 5);
  sqcRYGate(q, 0.5702702271520614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.038572619760434, 5);
  sqcRYGate(q, -1.3723579800295032, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2050298653374971, 6);
  sqcRYGate(q, 0.9479412456513706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5728713146388564, 6);
  sqcRYGate(q, -2.9925983879957903, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.21695325059074566, 0);
  sqcRYGate(q, -1.1668559298983852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8419547853539786, 0);
  sqcRYGate(q, -0.5931222102735539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21494187130917844, 1);
  sqcRYGate(q, -0.5051168537078449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2204618089566925, 1);
  sqcRYGate(q, -1.1773452885449307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1957227522548957, 2);
  sqcRYGate(q, -0.8031366599056425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5172981241521455, 2);
  sqcRYGate(q, -0.926894156606526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.566499484032281, 3);
  sqcRYGate(q, 2.9667299951378836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.38273833719151445, 3);
  sqcRYGate(q, 2.2360220946590017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.48824295703076, 4);
  sqcRYGate(q, 1.4797341628930916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.24297788595595826, 4);
  sqcRYGate(q, 2.8019722695988754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0876416677638576, 5);
  sqcRYGate(q, 0.23474597166113892, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0736124382763201, 5);
  sqcRYGate(q, 0.230783254236683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2372663360289247, 6);
  sqcRYGate(q, 1.9673979031352795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.814629135851798, 6);
  sqcRYGate(q, 1.9347588928250734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.47744123514941883, 0);
  sqcRYGate(q, 2.2840826648649157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3851354815307717, 0);
  sqcRYGate(q, 1.2976730046305773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.00071415798947, 1);
  sqcRYGate(q, 2.212858716757265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0943337280612333, 1);
  sqcRYGate(q, 0.23357803523025936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8461560274218058, 2);
  sqcRYGate(q, 1.8948146625996474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0027274027527766, 2);
  sqcRYGate(q, -2.62673586977449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6922099325501256, 3);
  sqcRYGate(q, 0.454179885222735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6946523727035891, 3);
  sqcRYGate(q, 2.0628148067756307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9849371392509774, 4);
  sqcRYGate(q, -3.0540151153818407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.677778727915685, 4);
  sqcRYGate(q, 3.0284613893498737, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.300753630843561, 5);
  sqcRYGate(q, -0.706601372505011, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0950290364630764, 5);
  sqcRYGate(q, 2.760805825122179, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3702273355648664, 6);
  sqcRYGate(q, 1.8625050570674455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3321809129902746, 6);
  sqcRYGate(q, 1.606488552417865, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.43796403482830826, 0);
  sqcRYGate(q, -2.66748452990158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.919773099761185, 0);
  sqcRYGate(q, 2.5349542477738423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14577838048944436, 1);
  sqcRYGate(q, -0.7077719536638938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1891788145795088, 1);
  sqcRYGate(q, 0.7087919363675734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.724466532376437, 2);
  sqcRYGate(q, -0.4465679387658007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9875698747171073, 2);
  sqcRYGate(q, -1.4712464386428803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3758897898943427, 3);
  sqcRYGate(q, 0.5633490911311385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1163974209342804, 3);
  sqcRYGate(q, 2.3157441953493385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.534424646517368, 4);
  sqcRYGate(q, 1.2048675166399962, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.475598327755843, 4);
  sqcRYGate(q, -1.7754557554662986, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.25053924461922783, 5);
  sqcRYGate(q, 1.499802184183782, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4726378937196447, 5);
  sqcRYGate(q, 1.4416565692464163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6256454954840105, 6);
  sqcRYGate(q, -3.005458333865584, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31630249697965174, 6);
  sqcRYGate(q, -2.0205060390723206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7397524928173348, 0);
  sqcRYGate(q, -2.838548595780184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0012861405744271082, 0);
  sqcRYGate(q, 2.8830886790534143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.015454570200033822, 1);
  sqcRYGate(q, 1.3151462187148413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0528098254089835, 1);
  sqcRYGate(q, -2.4285634257171336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.555145146783141, 2);
  sqcRYGate(q, -2.40914260366326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6248278187745377, 2);
  sqcRYGate(q, 2.9826532345831716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2585612239358577, 3);
  sqcRYGate(q, 0.3194620189951234, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5970071567769768, 3);
  sqcRYGate(q, 0.3092034506403643, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6601817278853471, 4);
  sqcRYGate(q, -0.3423284045547086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2268653315543028, 4);
  sqcRYGate(q, 1.208866185608571, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5709510722820639, 5);
  sqcRYGate(q, 3.0766916294704068, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4269090978507597, 5);
  sqcRYGate(q, -1.874219576731222, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9145656526409125, 6);
  sqcRYGate(q, -2.022259482285235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.696227341436699, 6);
  sqcRYGate(q, -0.09893774307818236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5392307085686718, 0);
  sqcRYGate(q, -2.221925152978347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8307143759619815, 0);
  sqcRYGate(q, 0.5955274977941796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.27950220150757943, 1);
  sqcRYGate(q, 1.1459918252378039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2218023559602162, 1);
  sqcRYGate(q, -1.0415623127356453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.32005967370513594, 2);
  sqcRYGate(q, -2.438701509495989, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7178563524356014, 2);
  sqcRYGate(q, -2.770470785775668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.182700163138537, 3);
  sqcRYGate(q, 1.7368683805926828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1170105811531048, 3);
  sqcRYGate(q, -0.8989938933399948, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5596319931086089, 4);
  sqcRYGate(q, -2.3707996384131924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8256418207651216, 4);
  sqcRYGate(q, -1.2929323360313845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.157271535769624, 5);
  sqcRYGate(q, -1.7998631582530014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7826989762431441, 5);
  sqcRYGate(q, -2.1792362584628417, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.127321954245385, 6);
  sqcRYGate(q, 0.9671052425968885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9646041892577628, 6);
  sqcRYGate(q, -0.7214304662547182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3818585778676247, 0);
  sqcRYGate(q, 0.2967529008756093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.129437749503043, 0);
  sqcRYGate(q, -0.8302355759366012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24732405468281368, 1);
  sqcRYGate(q, 0.5507141516439847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5477515051827782, 1);
  sqcRYGate(q, -1.6743379452265428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3361825834384824, 2);
  sqcRYGate(q, -2.10820690144764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8151746512700498, 2);
  sqcRYGate(q, -0.723695725448361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.420823109167797, 3);
  sqcRYGate(q, 0.10125538974956072, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8627979307114656, 3);
  sqcRYGate(q, -0.21646625057131086, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9297241233892617, 4);
  sqcRYGate(q, 1.9545577962334644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.171301716850504, 4);
  sqcRYGate(q, 0.19416321509017545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0525758560053278, 5);
  sqcRYGate(q, -2.0745141209029927, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1195598442105537, 5);
  sqcRYGate(q, -1.9231002058565536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.095010455011316, 6);
  sqcRYGate(q, 1.4860029772016596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5934808691278213, 6);
  sqcRYGate(q, 2.299668855945146, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9285881057193046, 0);
  sqcRYGate(q, -2.4521966860699074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.27452013287669985, 0);
  sqcRYGate(q, -1.1287140578200843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7467900567409006, 1);
  sqcRYGate(q, 2.5185501873540903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.071055607820188, 1);
  sqcRYGate(q, -2.910663777771456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.756044482906502, 2);
  sqcRYGate(q, -1.2299512617603403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0501639872425885, 2);
  sqcRYGate(q, -0.7078795114388171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.125520799473349, 3);
  sqcRYGate(q, 1.2118967251048405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1528761752904577, 3);
  sqcRYGate(q, -2.836061438062708, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.378822784348829, 4);
  sqcRYGate(q, -2.375097751895177, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7057502030969743, 4);
  sqcRYGate(q, -2.945597619231051, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7334705939751514, 5);
  sqcRYGate(q, -1.0338850226180014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9280343448155894, 5);
  sqcRYGate(q, 1.0052876179151768, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4621901559011157, 6);
  sqcRYGate(q, 0.052717324397209886, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7358962766103008, 6);
  sqcRYGate(q, 2.179394710935317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3655803022075954, 0);
  sqcRYGate(q, -0.8116201591341474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7112529189626864, 0);
  sqcRYGate(q, 2.198259295929137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2741339743119884, 1);
  sqcRYGate(q, 0.06333387140382118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.675126447427882, 1);
  sqcRYGate(q, -0.8091166164318215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3307271580155793, 2);
  sqcRYGate(q, -0.6367628256160119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.039189130065267, 2);
  sqcRYGate(q, 1.1183753293916654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8493543355471944, 3);
  sqcRYGate(q, 3.0352415429908612, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8881527020056286, 3);
  sqcRYGate(q, 3.065387036707849, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5890641464820767, 4);
  sqcRYGate(q, -1.465784608511799, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.824948123499979, 4);
  sqcRYGate(q, -3.0332531410760937, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4411120490165699, 5);
  sqcRYGate(q, -1.017434605328235, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1469608014226074, 5);
  sqcRYGate(q, 1.9530388705536188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.121474524965073, 6);
  sqcRYGate(q, 2.287153755798561, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8128700539181226, 6);
  sqcRYGate(q, 2.1507010219757823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6303266183095262, 0);
  sqcRYGate(q, 1.714738553374215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.015352053719108564, 0);
  sqcRYGate(q, -0.8408276588753951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9596093644387708, 1);
  sqcRYGate(q, 0.6693811475431533, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30730759913789035, 1);
  sqcRYGate(q, 1.466540135641277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.077265922792174, 2);
  sqcRYGate(q, -0.8392698628139527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4813078815289948, 2);
  sqcRYGate(q, -1.9162375773234603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7376703328747185, 3);
  sqcRYGate(q, -2.9642411265596587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.176620736523837, 3);
  sqcRYGate(q, 1.5082209328745921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16554711438808165, 4);
  sqcRYGate(q, 1.6254889164205453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7035522520420927, 4);
  sqcRYGate(q, 2.801233220208689, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7092303922148835, 5);
  sqcRYGate(q, 1.8122129690932889, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2088207458282354, 5);
  sqcRYGate(q, -2.5968819769880174, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6858715908460403, 6);
  sqcRYGate(q, 1.244332006150235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.386247362808533, 6);
  sqcRYGate(q, -1.4802877027475914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.045060060579707795, 0);
  sqcRYGate(q, 0.5445018149505619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6003494447197637, 0);
  sqcRYGate(q, -1.4291711494827914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4228224077627973, 1);
  sqcRYGate(q, -1.3329880158304603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28185681861749695, 1);
  sqcRYGate(q, -2.453485861004478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3522829821643949, 2);
  sqcRYGate(q, 0.8055833756379389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.349596501609956, 2);
  sqcRYGate(q, 2.8700162109587914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1131864990334064, 3);
  sqcRYGate(q, 2.2255957772670367, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4966673340493197, 3);
  sqcRYGate(q, -0.3830724826842409, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4552249363673186, 4);
  sqcRYGate(q, -0.11932433517886869, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1729874679668864, 4);
  sqcRYGate(q, 2.5782120127847468, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4066508215429823, 5);
  sqcRYGate(q, -2.7209626550287505, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.026797279752608087, 5);
  sqcRYGate(q, 1.3748885039894905, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9985019465107612, 6);
  sqcRYGate(q, -3.0532054291251165, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6188983950530687, 6);
  sqcRYGate(q, 1.204905954908632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5448027497740499, 0);
  sqcRYGate(q, 2.1613108504184835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5731479279838987, 0);
  sqcRYGate(q, 1.148809211145073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1598627269290347, 1);
  sqcRYGate(q, -0.4943160965025504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7650989820072893, 1);
  sqcRYGate(q, -0.2641481309732763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2972264328003595, 2);
  sqcRYGate(q, -0.1675084927061144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.804558847190398, 2);
  sqcRYGate(q, 1.1065458409647069, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0516038674671147, 3);
  sqcRYGate(q, 1.1257645415248163, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.825247127816164, 3);
  sqcRYGate(q, 2.460550446275923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8229638741571554, 4);
  sqcRYGate(q, -0.1852057177198744, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9420866878879389, 4);
  sqcRYGate(q, 2.1371592663971652, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6028885201841155, 5);
  sqcRYGate(q, 2.2519456943082745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.170744790980077, 5);
  sqcRYGate(q, 1.2768767854259104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.990521130838164, 6);
  sqcRYGate(q, 1.5518108593208755, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6627714984988868, 6);
  sqcRYGate(q, 2.143988777932938, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.304208228597529, 0);
  sqcRYGate(q, 0.018381923804853706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28166803108628, 0);
  sqcRYGate(q, -2.2570346415004696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3271424896505604, 1);
  sqcRYGate(q, 3.0728040240076253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2327654506753207, 1);
  sqcRYGate(q, 2.665428635229624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0485901317584796, 2);
  sqcRYGate(q, -2.881840054889582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4497983397633332, 2);
  sqcRYGate(q, -2.555704783598162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.633455482662126, 3);
  sqcRYGate(q, 2.632046686924245, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4681918351083088, 3);
  sqcRYGate(q, -0.18382005048151573, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6338799946436176, 4);
  sqcRYGate(q, 0.9694627605933596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7015809469478813, 4);
  sqcRYGate(q, 2.6230381306908956, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2507657664699203, 5);
  sqcRYGate(q, -0.660175849237258, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.727114251494596, 5);
  sqcRYGate(q, 1.6322807179504615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.372554981128077, 6);
  sqcRYGate(q, -0.8997704576870819, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9939865121978047, 6);
  sqcRYGate(q, 0.8085620581712707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3490705362605366, 0);
  sqcRYGate(q, -0.5152900011658782, 1);
  sqcRYGate(q, 2.6297105392845497, 2);
  sqcRYGate(q, 0.17513807665170233, 3);
  sqcRYGate(q, -1.132922699107998, 4);
  sqcRYGate(q, -3.1030124558006236, 5);
  sqcRYGate(q, 2.6959610045689852, 6);
  sqcRYGate(q, -3.059575907116574, 7);

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
