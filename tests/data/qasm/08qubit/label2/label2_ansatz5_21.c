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

  sqcRYGate(q, 0.9678281907861477, 0);
  sqcRYGate(q, -0.41882257340396833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6348466221952576, 0);
  sqcRYGate(q, -2.4459682241949134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9673489668843779, 2);
  sqcRYGate(q, -0.6119209207450096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4018768258883716, 2);
  sqcRYGate(q, -0.893637287125137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3925432165893827, 4);
  sqcRYGate(q, -1.0919441764227549, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9044725020403135, 4);
  sqcRYGate(q, -0.057118155594924495, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2204003593681114, 6);
  sqcRYGate(q, 0.38218961378149885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6637159145893599, 6);
  sqcRYGate(q, 2.8121471218486973, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7818372102153044, 1);
  sqcRYGate(q, -2.3909752746195605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2997448069376869, 1);
  sqcRYGate(q, 0.831591025988403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4065304573187936, 3);
  sqcRYGate(q, 0.9561941874378893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8543635787996515, 3);
  sqcRYGate(q, 0.18449065896011252, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7595192268749704, 5);
  sqcRYGate(q, -2.16321804506317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.815848735939687, 5);
  sqcRYGate(q, 1.9260576969923608, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2594515375279203, 0);
  sqcRYGate(q, 2.52919164714613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.486638437335662, 0);
  sqcRYGate(q, 0.6966777515949322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0321018901567207, 2);
  sqcRYGate(q, -1.1975604020783956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9299018033648143, 2);
  sqcRYGate(q, 1.0210299263916676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.604242861423157, 4);
  sqcRYGate(q, -2.4663427638600504, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2043856333875782, 4);
  sqcRYGate(q, 0.0894980096723993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6789715980313673, 6);
  sqcRYGate(q, 0.9830914220614311, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6021808283921919, 6);
  sqcRYGate(q, 2.5892346770593555, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4222194055793422, 1);
  sqcRYGate(q, -2.330854015096325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.919621271842181, 1);
  sqcRYGate(q, 0.6951313213578353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2924970715740516, 3);
  sqcRYGate(q, -0.6075157586673575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4499045524392922, 3);
  sqcRYGate(q, -2.962383712628644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.001104905884853, 5);
  sqcRYGate(q, 0.02035839813465934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.718635337733178, 5);
  sqcRYGate(q, -1.881552830966498, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18890689883698997, 0);
  sqcRYGate(q, -1.3367097865051734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2955736202638, 0);
  sqcRYGate(q, -3.08530012030458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8490186827164115, 2);
  sqcRYGate(q, -0.6582725120788302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1151610581198015, 2);
  sqcRYGate(q, 0.38672051617658426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9678541140528543, 4);
  sqcRYGate(q, -0.8010474690265763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6096747607076163, 4);
  sqcRYGate(q, -1.4898555370507045, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6129638451083322, 6);
  sqcRYGate(q, 1.689478465608106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0722648856226153, 6);
  sqcRYGate(q, 2.306435154654509, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1017805854277363, 1);
  sqcRYGate(q, -0.7966790480750278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0090978286809626, 1);
  sqcRYGate(q, -2.9920855451993873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.865751367705311, 3);
  sqcRYGate(q, -0.7149155299070769, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9984631911277453, 3);
  sqcRYGate(q, 2.814362290342192, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.535183818053079, 5);
  sqcRYGate(q, 1.558796450911578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.13891163848578825, 5);
  sqcRYGate(q, 0.9783801134052392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6502568961512152, 0);
  sqcRYGate(q, 1.5797130391300893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1049384209757624, 0);
  sqcRYGate(q, 2.1326552282732316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8708558445089016, 2);
  sqcRYGate(q, 2.4090913792231823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17236393297299035, 2);
  sqcRYGate(q, 2.1215585599924536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.97479107613418, 4);
  sqcRYGate(q, -3.1157844929408873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.56955332873369, 4);
  sqcRYGate(q, 1.9855694999942877, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2537022706855625, 6);
  sqcRYGate(q, 0.23609314580491814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6672575082490626, 6);
  sqcRYGate(q, -2.3550483839385254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6643686920428555, 1);
  sqcRYGate(q, 1.552034518588015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4575787234091497, 1);
  sqcRYGate(q, -1.8060309302822217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3459321606403025, 3);
  sqcRYGate(q, 1.720631924405354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3516816215456426, 3);
  sqcRYGate(q, -0.06336812817723914, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6561573321452778, 5);
  sqcRYGate(q, 2.466445792755394, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5038870181056891, 5);
  sqcRYGate(q, 3.134863127049219, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5920705399474873, 0);
  sqcRYGate(q, 2.0668444873282974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02960779117559653, 0);
  sqcRYGate(q, 2.3494187812908596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7913844722398632, 2);
  sqcRYGate(q, 1.8432214985536095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.840683041783913, 2);
  sqcRYGate(q, 3.045830500566401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3198530077809891, 4);
  sqcRYGate(q, -1.1976581329178257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2220802196592935, 4);
  sqcRYGate(q, 2.51845421041927, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8396220321419801, 6);
  sqcRYGate(q, -0.6118321054286021, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9825048933076307, 6);
  sqcRYGate(q, -2.281702986501659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9999103633703008, 1);
  sqcRYGate(q, -2.2159302415393993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6697778912831598, 1);
  sqcRYGate(q, 0.4088779716067672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12431919563933747, 3);
  sqcRYGate(q, 0.9191720449734426, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0053431704621363, 3);
  sqcRYGate(q, -2.617919947161414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3564074846024177, 5);
  sqcRYGate(q, -1.7901805934159878, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9173374426503673, 5);
  sqcRYGate(q, 1.57810998709265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08252744225331658, 0);
  sqcRYGate(q, 0.810557485024528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.030110244008759, 0);
  sqcRYGate(q, 0.2543746065110191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2125687483366325, 2);
  sqcRYGate(q, -0.4717315833813567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.225003539188345, 2);
  sqcRYGate(q, 2.0503471587988837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9856017807314537, 4);
  sqcRYGate(q, -2.811352024561215, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.22018006489952577, 4);
  sqcRYGate(q, 0.40076161097112006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.135833267668283, 6);
  sqcRYGate(q, -0.01163952926723866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.134143807864604, 6);
  sqcRYGate(q, 0.78164626963581, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8664982989574419, 1);
  sqcRYGate(q, -2.785904752184392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.532604846592802, 1);
  sqcRYGate(q, 0.2051321029769424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.570741298069418, 3);
  sqcRYGate(q, -3.040041270535004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3614523698053915, 3);
  sqcRYGate(q, -1.5121639030039433, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17470663378338613, 5);
  sqcRYGate(q, 1.0157982104663246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.052338575364753, 5);
  sqcRYGate(q, -0.6491827153567575, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7660627963631388, 0);
  sqcRYGate(q, -0.8582946508782686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0322386138204207, 0);
  sqcRYGate(q, 2.5460360232574706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1349682905616219, 2);
  sqcRYGate(q, 1.6715751397786085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8365294647692956, 2);
  sqcRYGate(q, -0.34516089248352233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5290726557035372, 4);
  sqcRYGate(q, -3.1294496763926385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6664598610564405, 4);
  sqcRYGate(q, 1.9496044106561317, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.432057201945093, 6);
  sqcRYGate(q, 1.3342050877099227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3571748004604523, 6);
  sqcRYGate(q, -1.6246292860478804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.709393535652185, 1);
  sqcRYGate(q, -0.5449916024472081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23667316968441637, 1);
  sqcRYGate(q, 2.526411442525197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.035342198085587, 3);
  sqcRYGate(q, 2.547143722026511, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4250655190975556, 3);
  sqcRYGate(q, -0.8876140702761075, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2932277731815963, 5);
  sqcRYGate(q, -2.8497718627302397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1975173999880182, 5);
  sqcRYGate(q, 0.4697331793763829, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4923724755381427, 0);
  sqcRYGate(q, -0.8321801685682386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9482455612174312, 0);
  sqcRYGate(q, -1.6952026473755284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0602043639486443, 2);
  sqcRYGate(q, 1.0822780798244205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.082903259561525, 2);
  sqcRYGate(q, 2.020696010756761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5075409087503964, 4);
  sqcRYGate(q, 1.1163806315233622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.500081780311543, 4);
  sqcRYGate(q, -2.8512789498369, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.011319947621881, 6);
  sqcRYGate(q, 0.40710148769646753, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09696325144639982, 6);
  sqcRYGate(q, -2.5542195905676843, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0677575337402327, 1);
  sqcRYGate(q, -1.0854123235852713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0524147303502036, 1);
  sqcRYGate(q, 1.7200867458734237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3304117590742095, 3);
  sqcRYGate(q, 1.5453044998340353, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9384949386302859, 3);
  sqcRYGate(q, -1.7363408139622758, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2679956246017188, 5);
  sqcRYGate(q, 2.994012706494165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6366487227160933, 5);
  sqcRYGate(q, -2.8404027349137673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.855592925329609, 0);
  sqcRYGate(q, -2.1634024441588817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4474922560683048, 0);
  sqcRYGate(q, -2.6461535759630843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6279017562914406, 2);
  sqcRYGate(q, -1.6082535136402152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6819618670152097, 2);
  sqcRYGate(q, -1.8172696114010032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1177370752743574, 4);
  sqcRYGate(q, 2.9477664658103793, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6613601941336644, 4);
  sqcRYGate(q, -1.782220661931924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1615544584345678, 6);
  sqcRYGate(q, -2.5822661238054194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2821457390229294, 6);
  sqcRYGate(q, 1.3310964081134262, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2756679754344864, 1);
  sqcRYGate(q, -1.9495438534188512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8905379032711096, 1);
  sqcRYGate(q, -0.5487321883283225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.11262809336189, 3);
  sqcRYGate(q, -2.245380129868429, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1451980513281796, 3);
  sqcRYGate(q, -2.2883497926699587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.747783830842411, 5);
  sqcRYGate(q, 0.1973153958820885, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.101216030635771, 5);
  sqcRYGate(q, 2.2689700596761155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.203078106663404, 0);
  sqcRYGate(q, -0.7880418323479169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8289385067202808, 0);
  sqcRYGate(q, -2.016172678228001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7225128905321787, 2);
  sqcRYGate(q, -0.3182294588573802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4600447985025413, 2);
  sqcRYGate(q, -2.915409852750976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.766870707683956, 4);
  sqcRYGate(q, -0.3792221473369075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.165489005692094, 4);
  sqcRYGate(q, -0.4489793635214898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9582956489344825, 6);
  sqcRYGate(q, 0.9452885475472765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.821678794322107, 6);
  sqcRYGate(q, 0.6602971221118112, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9861454743242514, 1);
  sqcRYGate(q, -2.241346378672763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0084828451469061, 1);
  sqcRYGate(q, -0.24419002892373687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3065266580465442, 3);
  sqcRYGate(q, 1.9532186492924373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6288566188154832, 3);
  sqcRYGate(q, 2.862529321647476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.15961756746466, 5);
  sqcRYGate(q, 2.7284128408460724, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.016979362775423, 5);
  sqcRYGate(q, 2.2165483057699085, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8705909534509874, 0);
  sqcRYGate(q, 1.8268407760231045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4833580224381147, 0);
  sqcRYGate(q, 1.5607901204225412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2534158074130978, 2);
  sqcRYGate(q, 1.068653773847485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4257862934362358, 2);
  sqcRYGate(q, 0.9920644767819919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.655373163206951, 4);
  sqcRYGate(q, 0.9284391096280494, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.611016270639438, 4);
  sqcRYGate(q, -1.6395433619101567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2041881981907734, 6);
  sqcRYGate(q, 0.9362303424555494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.571997751066037, 6);
  sqcRYGate(q, -2.8158384957282148, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7930194005892321, 1);
  sqcRYGate(q, -2.0173483283044016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0004522987089812, 1);
  sqcRYGate(q, 2.789454910527545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5418310385894607, 3);
  sqcRYGate(q, 2.589265056462064, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.682455102372785, 3);
  sqcRYGate(q, 2.9851258903915037, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9827825342810046, 5);
  sqcRYGate(q, -0.27845511259118716, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.982597738668817, 5);
  sqcRYGate(q, 3.0291833649654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9076707991131103, 0);
  sqcRYGate(q, 0.3718863037934348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08026647542310794, 0);
  sqcRYGate(q, 2.2846716290336184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.391845940253473, 2);
  sqcRYGate(q, 0.5442577499352151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1777842393214244, 2);
  sqcRYGate(q, -0.14896845763249597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.003076253369506, 4);
  sqcRYGate(q, 2.714819776612241, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3905854071302928, 4);
  sqcRYGate(q, 0.9083513338569638, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0893723916635163, 6);
  sqcRYGate(q, 2.4846179226591922, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.56138765239392, 6);
  sqcRYGate(q, -3.117143112572754, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3282419861741586, 1);
  sqcRYGate(q, -1.3967539110765417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0722339596476953, 1);
  sqcRYGate(q, -3.136499433894841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.378502186682048, 3);
  sqcRYGate(q, 2.108257231547309, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4741022563888615, 3);
  sqcRYGate(q, 0.24754940457092636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.765123936782692, 5);
  sqcRYGate(q, -1.7205992399197179, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8504661409404541, 5);
  sqcRYGate(q, -2.0683616815821315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3302497435617721, 0);
  sqcRYGate(q, 2.136062598171665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0980762006149174, 0);
  sqcRYGate(q, 2.2512340208352213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7493257142161757, 2);
  sqcRYGate(q, 2.307442985124053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3940987952807902, 2);
  sqcRYGate(q, -2.9966696640596187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6977936290509745, 4);
  sqcRYGate(q, 2.483078423498688, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.418137968786234, 4);
  sqcRYGate(q, -1.4889660899259614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6829164672619594, 6);
  sqcRYGate(q, -2.1350244893830794, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3745201024223683, 6);
  sqcRYGate(q, 0.6363043720287171, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3906205637436955, 1);
  sqcRYGate(q, 0.2161781948575519, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.391920488215012, 1);
  sqcRYGate(q, 1.8404478924562284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.135291021607271, 3);
  sqcRYGate(q, 2.1949551340757383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2729238374317866, 3);
  sqcRYGate(q, -2.072035031496334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9563430684502328, 5);
  sqcRYGate(q, -1.8784358331171325, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1090384046788657, 5);
  sqcRYGate(q, -0.7360499873207209, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17895974444302531, 0);
  sqcRYGate(q, 1.0285968650941024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15168368241275498, 0);
  sqcRYGate(q, 0.009513551976856327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3594750635584916, 2);
  sqcRYGate(q, 0.09376436341957013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.669152455270318, 2);
  sqcRYGate(q, 1.7821877714873058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8241079528934936, 4);
  sqcRYGate(q, 1.169606235906393, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1561437992087824, 4);
  sqcRYGate(q, -0.4209015416695398, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7274804071622638, 6);
  sqcRYGate(q, 1.0886559454365923, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2833306861412569, 6);
  sqcRYGate(q, -0.26383808794776215, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.607849599057257, 1);
  sqcRYGate(q, 1.0584520556847483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9350166681215777, 1);
  sqcRYGate(q, -1.277711800933192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.26451149745726, 3);
  sqcRYGate(q, -2.334185109869249, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8432677009202632, 3);
  sqcRYGate(q, 1.2896836551693802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3959315314436203, 5);
  sqcRYGate(q, -2.116776237986368, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2734990561581644, 5);
  sqcRYGate(q, 1.646188269455049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.882816787362435, 0);
  sqcRYGate(q, -0.12256120657444482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7379286481723047, 0);
  sqcRYGate(q, 0.8673658381108652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8793927568972437, 2);
  sqcRYGate(q, -0.21459685171050275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1642381102952486, 2);
  sqcRYGate(q, 2.0259757279406125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6161448466181425, 4);
  sqcRYGate(q, 2.5490582332935605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.10409965406632207, 4);
  sqcRYGate(q, 2.143894920661414, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.819387684436197, 6);
  sqcRYGate(q, 2.214961900144722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.588664494194283, 6);
  sqcRYGate(q, 1.9302470293163152, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.462293033652299, 1);
  sqcRYGate(q, 1.518568281417215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7847770063454074, 1);
  sqcRYGate(q, -1.5734755032587522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7763679532233017, 3);
  sqcRYGate(q, -0.47843210839171135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0693786636590876, 3);
  sqcRYGate(q, -0.6285657948744755, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0936632432064612, 5);
  sqcRYGate(q, 2.9188511142325884, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1883205552959604, 5);
  sqcRYGate(q, 0.8637675923715264, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2533613867765763, 0);
  sqcRYGate(q, -2.4869340656155563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8614604456382056, 0);
  sqcRYGate(q, 3.040062514337298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.982208549020548, 2);
  sqcRYGate(q, -2.9759578925577888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2202257042763298, 2);
  sqcRYGate(q, -2.7850142252528687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.270623456295864, 4);
  sqcRYGate(q, -0.5356157014203029, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1894728786583567, 4);
  sqcRYGate(q, 1.1971522120576914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6712449343666362, 6);
  sqcRYGate(q, -0.8569885319886107, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.406477190322818, 6);
  sqcRYGate(q, -0.7928926190509181, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.727419736740559, 1);
  sqcRYGate(q, 2.893631321807215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2859010183109891, 1);
  sqcRYGate(q, 1.0071334600444226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.238281143750874, 3);
  sqcRYGate(q, 0.2124594681209825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.414206319897447, 3);
  sqcRYGate(q, -0.8738429287347741, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3970241496881037, 5);
  sqcRYGate(q, 2.366490233569638, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.26499325628804105, 5);
  sqcRYGate(q, -1.741505209535247, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9828664107830034, 0);
  sqcRYGate(q, 2.8937966676827718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.744010367691705, 0);
  sqcRYGate(q, 2.33984771623653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.419634189163359, 2);
  sqcRYGate(q, -2.3025731083086165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8793393436514196, 2);
  sqcRYGate(q, 1.4003758228768295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.612251086199532, 4);
  sqcRYGate(q, -2.10555744843571, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.543303086280988, 4);
  sqcRYGate(q, -0.4680656816076585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0240290829464085, 6);
  sqcRYGate(q, -2.1547692001322374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.15814444848580944, 6);
  sqcRYGate(q, 2.275820772567522, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5241753444518036, 1);
  sqcRYGate(q, -1.0080481058134572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.26799842488626, 1);
  sqcRYGate(q, -1.80135212719904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7034066282696125, 3);
  sqcRYGate(q, -0.49134999269384494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7742635812302038, 3);
  sqcRYGate(q, -2.63580883254377, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.349554128114884, 5);
  sqcRYGate(q, -0.30761375072238284, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8161253455014608, 5);
  sqcRYGate(q, 1.3950022689529669, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6882910887662297, 0);
  sqcRYGate(q, 2.8055260800423123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8693104833101604, 0);
  sqcRYGate(q, 2.81240621337649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.416727365396774, 2);
  sqcRYGate(q, -1.7050395476234943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06590534270430837, 2);
  sqcRYGate(q, -1.2806375852036123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.133293545568707, 4);
  sqcRYGate(q, 3.0346300182091452, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7548319029147352, 4);
  sqcRYGate(q, -3.131271922138611, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3393345700374306, 6);
  sqcRYGate(q, 2.1092405968097117, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8368764027234633, 6);
  sqcRYGate(q, -2.4796838995912105, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7070122057775554, 1);
  sqcRYGate(q, -1.8555605685641847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.507446673297121, 1);
  sqcRYGate(q, 1.340999504611763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.404053882542566, 3);
  sqcRYGate(q, 2.726652317111457, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0013735890301425, 3);
  sqcRYGate(q, -0.6631300238162576, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.484468240188516, 5);
  sqcRYGate(q, -2.596559074872318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4865577414724167, 5);
  sqcRYGate(q, 1.3848234684103418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4287477370706916, 0);
  sqcRYGate(q, -2.213892121492645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.288581769249685, 0);
  sqcRYGate(q, -0.20538392176398237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5642393490253845, 2);
  sqcRYGate(q, -1.2887644624539927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7591542403672054, 2);
  sqcRYGate(q, 1.135597015247547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.320100153646158, 4);
  sqcRYGate(q, -1.025525415497992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.750485420153459, 4);
  sqcRYGate(q, 1.9871055871694876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11315381264507351, 6);
  sqcRYGate(q, 2.9607600442780244, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.049824653226798, 6);
  sqcRYGate(q, 0.38396460313542846, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4467990759737277, 1);
  sqcRYGate(q, 0.4290312510901981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8668194814279095, 1);
  sqcRYGate(q, 3.045353298122075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.28354957936429, 3);
  sqcRYGate(q, -2.22827934399315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8757546279198907, 3);
  sqcRYGate(q, -1.6403440756142817, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2139390194625426, 5);
  sqcRYGate(q, 0.008166983549819732, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.13021378786152132, 5);
  sqcRYGate(q, -2.3199575398221133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0302634415331444, 0);
  sqcRYGate(q, -0.0013557788892009676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4249674842096913, 0);
  sqcRYGate(q, -2.1507923867963363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1453740533248755, 2);
  sqcRYGate(q, -2.8554088990581517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7253179447423241, 2);
  sqcRYGate(q, 1.6133352088933284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5602018694081716, 4);
  sqcRYGate(q, 2.7254016899201092, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.219288754859833, 4);
  sqcRYGate(q, 1.0952039704984244, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.389994886483263, 6);
  sqcRYGate(q, 2.5831187561524986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.113031665904948, 6);
  sqcRYGate(q, 2.6348824645954987, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3455470431329046, 1);
  sqcRYGate(q, 2.351529794000492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6374090320345625, 1);
  sqcRYGate(q, 0.8519836329867086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1448032646999558, 3);
  sqcRYGate(q, -1.7804668304772093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1378764997991455, 3);
  sqcRYGate(q, 1.5127454694425115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9280494210173917, 5);
  sqcRYGate(q, -1.6929934969020344, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2354350926856177, 5);
  sqcRYGate(q, -3.093855653620859, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.624504354620359, 0);
  sqcRYGate(q, 0.608739914615227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0137780798025773, 0);
  sqcRYGate(q, 2.844395897359374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8893808772683833, 2);
  sqcRYGate(q, 2.6200556688712457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2898484930364127, 2);
  sqcRYGate(q, 1.3159859907403382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5555056876843867, 4);
  sqcRYGate(q, -0.7868660262460482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.139229716935652, 4);
  sqcRYGate(q, 1.408269787212209, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.094776438096052, 6);
  sqcRYGate(q, 0.7866244225197634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.204356056054932, 6);
  sqcRYGate(q, -1.3165290166571437, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7776694663392294, 1);
  sqcRYGate(q, -2.845069519715503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2821815245971555, 1);
  sqcRYGate(q, -0.7773390330597554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0100057311804083, 3);
  sqcRYGate(q, 0.1338729693078641, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.46690191737342784, 3);
  sqcRYGate(q, -1.889455793834522, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4691561159581696, 5);
  sqcRYGate(q, 1.7237133670216007, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.597112842529348, 5);
  sqcRYGate(q, -1.1935710354739715, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06972497674807078, 0);
  sqcRYGate(q, -2.464024300352053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0731589344134704, 0);
  sqcRYGate(q, -2.891414691494354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0349891829276503, 2);
  sqcRYGate(q, 1.7474512099154946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8870779337246475, 2);
  sqcRYGate(q, 0.7425240214822892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5473451297307088, 4);
  sqcRYGate(q, -2.3923183666046897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5776977382537272, 4);
  sqcRYGate(q, -1.0428207324786953, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7274176746306003, 6);
  sqcRYGate(q, 0.43729579216085546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.312363079087392, 6);
  sqcRYGate(q, 2.068078493050867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.43590012274838763, 1);
  sqcRYGate(q, 2.080933992986581, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5032511729424436, 1);
  sqcRYGate(q, -2.278847851891727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.10179909422242, 3);
  sqcRYGate(q, -0.417731035044989, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8471142359308925, 3);
  sqcRYGate(q, 0.9017531773879605, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9526567776404375, 5);
  sqcRYGate(q, 1.7621110466320302, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6601936553475616, 5);
  sqcRYGate(q, -0.9260296102656276, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.31631923773938053, 0);
  sqcRYGate(q, 1.9754709413406633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29160397632540125, 0);
  sqcRYGate(q, -1.142418627310568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2747871046989427, 2);
  sqcRYGate(q, 0.0199121070299757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.852237569075854, 2);
  sqcRYGate(q, 2.8008622933976612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.17379363606301, 4);
  sqcRYGate(q, -2.427116868183449, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3520730400300356, 4);
  sqcRYGate(q, 1.8976587446697828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4201894686631684, 6);
  sqcRYGate(q, 2.4411576076045836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.567991894208955, 6);
  sqcRYGate(q, 2.126688716320987, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8592306627096526, 1);
  sqcRYGate(q, 2.651146813767389, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5219669102739499, 1);
  sqcRYGate(q, 2.448123351056889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.759166195504278, 3);
  sqcRYGate(q, -0.12493665860708632, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.386778036121295, 3);
  sqcRYGate(q, 0.31345802083909846, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2252297502821046, 5);
  sqcRYGate(q, -1.9268603040819139, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.244274053144525, 5);
  sqcRYGate(q, 0.09328934050560655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3019390340551482, 0);
  sqcRYGate(q, 1.588958424630328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2262076208854964, 0);
  sqcRYGate(q, -0.5942052545271602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.600248715300789, 2);
  sqcRYGate(q, 1.7763009553308025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.120729045670922, 2);
  sqcRYGate(q, -1.744902624563009, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.893739093457936, 4);
  sqcRYGate(q, -0.5183994492345123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8687201627509149, 4);
  sqcRYGate(q, 3.0977777097087666, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7443409357474233, 6);
  sqcRYGate(q, -2.4598121837133093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.202720842134994, 6);
  sqcRYGate(q, 2.627192478429965, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6511959911645379, 1);
  sqcRYGate(q, -0.8842397214648477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.046744120464513976, 1);
  sqcRYGate(q, 1.0764996312211146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5904751528657797, 3);
  sqcRYGate(q, -1.2590606129720063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4346992248182335, 3);
  sqcRYGate(q, 2.3045940908400255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.689724091531646, 5);
  sqcRYGate(q, 2.8287000521235273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.035479398435999794, 5);
  sqcRYGate(q, 2.7282986497489645, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4980987769961933, 0);
  sqcRYGate(q, -2.010098695561995, 1);
  sqcRYGate(q, -0.9734067889560469, 2);
  sqcRYGate(q, 0.8671237519936392, 3);
  sqcRYGate(q, -0.08624158657115988, 4);
  sqcRYGate(q, -2.0852118464576765, 5);
  sqcRYGate(q, -1.613086274011712, 6);
  sqcRYGate(q, -0.590797680013341, 7);

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
