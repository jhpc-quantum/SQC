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

  sqcRYGate(q, -1.6564814908596759, 0);
  sqcRYGate(q, 1.5465655167827594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.808452713429145, 0);
  sqcRYGate(q, 2.3510676794908094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.930235379385587, 1);
  sqcRYGate(q, 2.5143887218684378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4165518629168634, 1);
  sqcRYGate(q, -2.0115710561108813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5473673005057442, 2);
  sqcRYGate(q, 1.787535183380189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8571077305223607, 2);
  sqcRYGate(q, -0.9938713287131204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9653514244655301, 3);
  sqcRYGate(q, 2.817309591070459, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0023246805478718, 3);
  sqcRYGate(q, 2.6758172971985714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.31973201773160653, 4);
  sqcRYGate(q, -1.1586821306271782, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3823581023529296, 4);
  sqcRYGate(q, 1.1091527214283612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.096971742384559, 5);
  sqcRYGate(q, 2.252306862959502, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6459501814833326, 5);
  sqcRYGate(q, -1.9551318474670811, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4167747329760103, 6);
  sqcRYGate(q, -2.697764109512419, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5041242577761627, 6);
  sqcRYGate(q, 1.7780126115508967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8940694683893922, 0);
  sqcRYGate(q, -2.19310470262601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6691364060355358, 0);
  sqcRYGate(q, -1.4256940324748202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.198404979327356, 1);
  sqcRYGate(q, -2.2369624564765633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1768243524807804, 1);
  sqcRYGate(q, -2.984678056800798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.940651044920662, 2);
  sqcRYGate(q, -2.2360164954977044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8248294866912684, 2);
  sqcRYGate(q, 2.724160853216002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9605138844792728, 3);
  sqcRYGate(q, -2.958828572619683, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7259315294578652, 3);
  sqcRYGate(q, -1.963290965416796, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4117350611056247, 4);
  sqcRYGate(q, 2.961256728346334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.283947301779311, 4);
  sqcRYGate(q, -1.1924511569148701, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0952332519989412, 5);
  sqcRYGate(q, -0.8887578031036362, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7314906917796541, 5);
  sqcRYGate(q, -2.102450583793013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.16900977255211025, 6);
  sqcRYGate(q, 2.784049445377622, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5803177677587827, 6);
  sqcRYGate(q, 2.7445544265960278, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8063532629534983, 0);
  sqcRYGate(q, 1.969701643528742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2496763639043964, 0);
  sqcRYGate(q, 2.084074554243478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3683164706339626, 1);
  sqcRYGate(q, -0.13120376353754715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9108176638021616, 1);
  sqcRYGate(q, 0.660873114985261, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9561632869100956, 2);
  sqcRYGate(q, -1.9600364631410117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0655545327501963, 2);
  sqcRYGate(q, 0.015253166843863575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.467591974976789, 3);
  sqcRYGate(q, -1.2426701027990559, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.229237342994964, 3);
  sqcRYGate(q, 0.8028300156957678, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5552900642164372, 4);
  sqcRYGate(q, -1.6230804867039301, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9991532475034246, 4);
  sqcRYGate(q, 2.252042625308441, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.42916342251510464, 5);
  sqcRYGate(q, -2.287313114415876, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.663287997675181, 5);
  sqcRYGate(q, -0.814593627622199, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1948763404410097, 6);
  sqcRYGate(q, 0.588213261380055, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4076849638976547, 6);
  sqcRYGate(q, -1.9185090339756483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5779575317889598, 0);
  sqcRYGate(q, 2.5240541383592032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.391903722214685, 0);
  sqcRYGate(q, -1.4921439189123615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0271184271668663, 1);
  sqcRYGate(q, 0.884328701873139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1381090210937663, 1);
  sqcRYGate(q, -2.1373036683691584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5268109684231108, 2);
  sqcRYGate(q, -1.7239019259830746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.190347677293903, 2);
  sqcRYGate(q, 2.5999536820030666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8624567370700493, 3);
  sqcRYGate(q, -2.7656075785307768, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4527987169328718, 3);
  sqcRYGate(q, -0.6581724222924813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4247745157893261, 4);
  sqcRYGate(q, -2.114052578056066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4317077471835045, 4);
  sqcRYGate(q, -2.988890433368745, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8721541090779903, 5);
  sqcRYGate(q, -2.336226624484435, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.689112664852205, 5);
  sqcRYGate(q, -2.3727558932206883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4353773149091547, 6);
  sqcRYGate(q, 2.101813181322095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.870139116401214, 6);
  sqcRYGate(q, -0.009675291993916701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.331371459229859, 0);
  sqcRYGate(q, 1.153328023263291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.378984883263619, 0);
  sqcRYGate(q, -2.5548385663395936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5818221781965884, 1);
  sqcRYGate(q, -0.8876291859495993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6466786634683563, 1);
  sqcRYGate(q, 0.759744946256886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3656139200272874, 2);
  sqcRYGate(q, -0.0765632688078518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8276155190647403, 2);
  sqcRYGate(q, 2.173872684469176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6512267641740612, 3);
  sqcRYGate(q, 1.7217672290100694, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8209754099296598, 3);
  sqcRYGate(q, -2.848442865367238, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5298657561283759, 4);
  sqcRYGate(q, -2.792743397939667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3453461885575897, 4);
  sqcRYGate(q, 0.6994979644870165, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07694850442931477, 5);
  sqcRYGate(q, -0.5000377203464259, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.723218034972618, 5);
  sqcRYGate(q, 0.7315813023465454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2991241362922492, 6);
  sqcRYGate(q, 1.3792605358348151, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.355592671881003, 6);
  sqcRYGate(q, -2.7884575475094016, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.817330354819258, 0);
  sqcRYGate(q, -1.6727844711598945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9901885480361878, 0);
  sqcRYGate(q, 2.890758840814057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8583791500977496, 1);
  sqcRYGate(q, 0.10991227148727763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7846785721824476, 1);
  sqcRYGate(q, -1.9259954220158448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6930460105266347, 2);
  sqcRYGate(q, 1.6336979187700498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4682402429420898, 2);
  sqcRYGate(q, -0.8631989744710608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4994168585809273, 3);
  sqcRYGate(q, 0.1418310194576884, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.29422103366129004, 3);
  sqcRYGate(q, 2.003111643678846, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.548941790920875, 4);
  sqcRYGate(q, 2.472188399567229, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8330312352027467, 4);
  sqcRYGate(q, -1.7169018802946017, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7665421171741054, 5);
  sqcRYGate(q, -2.2129024821737917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0982843238631816, 5);
  sqcRYGate(q, -1.217469632821023, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4811898178031013, 6);
  sqcRYGate(q, -2.1143784971093185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.021723310610862967, 6);
  sqcRYGate(q, 0.5601010615652908, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.769809697295165, 0);
  sqcRYGate(q, -2.2263832815217564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1279265474824003, 0);
  sqcRYGate(q, 2.4153962664838056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0761817268614324, 1);
  sqcRYGate(q, 1.8039251581947804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37732957942700374, 1);
  sqcRYGate(q, 2.8483294134513644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9218773149018349, 2);
  sqcRYGate(q, 0.7612228676029443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.574589972115069, 2);
  sqcRYGate(q, 2.5707998035035784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6597066095107356, 3);
  sqcRYGate(q, -1.3646402720357154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2768295360613902, 3);
  sqcRYGate(q, -2.0269725885375234, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.33006631810747744, 4);
  sqcRYGate(q, -0.8627477074006754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13131976429483316, 4);
  sqcRYGate(q, 1.9125576821096966, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2580204695736974, 5);
  sqcRYGate(q, -1.635621827800805, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4882663921935388, 5);
  sqcRYGate(q, 0.06111588983458294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1185731177977125, 6);
  sqcRYGate(q, 0.22647884160305853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5341494651642195, 6);
  sqcRYGate(q, -0.5463120048080308, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7110075888794456, 0);
  sqcRYGate(q, -3.097747032379848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4579618091510307, 0);
  sqcRYGate(q, -1.904507108994527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.384057642754312, 1);
  sqcRYGate(q, 0.5592599045381244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8452114189739595, 1);
  sqcRYGate(q, -2.4425354135728568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8898516427148797, 2);
  sqcRYGate(q, 1.611412361001126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.532742037304148, 2);
  sqcRYGate(q, 0.08448640791830923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4700783187671886, 3);
  sqcRYGate(q, 2.3616671321963127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.611230432845722, 3);
  sqcRYGate(q, 2.233122846221959, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.047194540414636, 4);
  sqcRYGate(q, 1.3658544057616888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9706228524019256, 4);
  sqcRYGate(q, 3.1147710025798094, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1289371108391455, 5);
  sqcRYGate(q, 2.938792268102702, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3593146353915477, 5);
  sqcRYGate(q, -1.0826202882392801, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.408516139458072, 6);
  sqcRYGate(q, -1.9038661124208685, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4349070103767689, 6);
  sqcRYGate(q, 2.6259055890705656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.43714911154054814, 0);
  sqcRYGate(q, -0.3731951728927596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19373211709316257, 0);
  sqcRYGate(q, -1.5136698476592292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8651494022285598, 1);
  sqcRYGate(q, 2.124704920274514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.426459326144459, 1);
  sqcRYGate(q, -0.19025060243129044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4647470874658621, 2);
  sqcRYGate(q, -0.013416407981208243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5987248414877802, 2);
  sqcRYGate(q, -0.5862440304702403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.730590120290147, 3);
  sqcRYGate(q, -0.9889482973412878, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8430670360744922, 3);
  sqcRYGate(q, 2.7860580568422666, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.051600479365098, 4);
  sqcRYGate(q, -1.5793371957788773, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8328807507862166, 4);
  sqcRYGate(q, -2.305900192362764, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13793663159331707, 5);
  sqcRYGate(q, 1.7683454695987264, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.355449971926618, 5);
  sqcRYGate(q, -2.949219003128132, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1411334378079425, 6);
  sqcRYGate(q, -2.9854189211110875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7228212034415185, 6);
  sqcRYGate(q, 0.00841835826525017, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3101943694579825, 0);
  sqcRYGate(q, 2.8307150060355357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8518583430796102, 0);
  sqcRYGate(q, -0.32396577903772883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6263679590779985, 1);
  sqcRYGate(q, 1.4312537508122194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2159421805072155, 1);
  sqcRYGate(q, -0.4466043052025064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7397439092903892, 2);
  sqcRYGate(q, 1.1224500955197476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4319215741316174, 2);
  sqcRYGate(q, -1.9545909370856736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8872091616028057, 3);
  sqcRYGate(q, 2.8007438045551845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4173119387917597, 3);
  sqcRYGate(q, -0.6665726707897113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0459131407342888, 4);
  sqcRYGate(q, -0.6396311305971807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9909540821131584, 4);
  sqcRYGate(q, -1.267432934280273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5093605613387697, 5);
  sqcRYGate(q, 1.265196199271931, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.482511317285005, 5);
  sqcRYGate(q, 1.053854718241511, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2911933048048696, 6);
  sqcRYGate(q, -0.30776886553251703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7911641693757543, 6);
  sqcRYGate(q, -2.8920776603908234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4496517766587305, 0);
  sqcRYGate(q, -2.4506612978601665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5812345157394398, 0);
  sqcRYGate(q, -0.016722042025127056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0926178184726347, 1);
  sqcRYGate(q, -0.5617429607214204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.456318586166149, 1);
  sqcRYGate(q, 0.9135245390737067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1039623465040673, 2);
  sqcRYGate(q, 2.2173260438493543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2135075207106232, 2);
  sqcRYGate(q, -2.303187199413033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48204949948690246, 3);
  sqcRYGate(q, -0.16295610726488616, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2145276770158837, 3);
  sqcRYGate(q, 1.1452329677690338, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4707292728625136, 4);
  sqcRYGate(q, 0.5734068116452248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9466988324915067, 4);
  sqcRYGate(q, 0.6319042525632063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1952369121044022, 5);
  sqcRYGate(q, 0.6686665808474839, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.28767181722146523, 5);
  sqcRYGate(q, 2.809548658972534, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2408464306650027, 6);
  sqcRYGate(q, 1.403585475167954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.977418723080497, 6);
  sqcRYGate(q, 0.6703335050592658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.018336252050767495, 0);
  sqcRYGate(q, 2.3157466858577695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1170938568896611, 0);
  sqcRYGate(q, 1.362896348970609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7071512662304198, 1);
  sqcRYGate(q, -2.9574396793801414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7724922806720875, 1);
  sqcRYGate(q, 1.761038525531399, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0870972935053933, 2);
  sqcRYGate(q, -0.7639203795160219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17116385265624745, 2);
  sqcRYGate(q, 2.9578483561588054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.596722666250467, 3);
  sqcRYGate(q, 0.6454492072553939, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3728625607636653, 3);
  sqcRYGate(q, 1.5401960197948872, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1294329800899767, 4);
  sqcRYGate(q, -1.6963490496744438, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4848768380377597, 4);
  sqcRYGate(q, 1.924479030029301, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4960486047497747, 5);
  sqcRYGate(q, -2.289448041188698, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5888670864562033, 5);
  sqcRYGate(q, -2.7549977792849383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8396360318854323, 6);
  sqcRYGate(q, 1.3889139527774965, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6500995545994868, 6);
  sqcRYGate(q, -1.701411655406372, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2076389799002096, 0);
  sqcRYGate(q, 0.5494054696772565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.926244410171864, 0);
  sqcRYGate(q, -1.7209040042087296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1248443559531924, 1);
  sqcRYGate(q, 2.5642863968061618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.995706319832979, 1);
  sqcRYGate(q, 2.452767379949577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.506915436377996, 2);
  sqcRYGate(q, -0.07473966165850143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8569435009794373, 2);
  sqcRYGate(q, -2.1709574237070344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21290311581923027, 3);
  sqcRYGate(q, 2.895674469305925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8258680416103852, 3);
  sqcRYGate(q, -2.953684050388026, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.088889967210881, 4);
  sqcRYGate(q, -0.3530409566433187, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4631368587986104, 4);
  sqcRYGate(q, -0.7650196491438069, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1823938344967855, 5);
  sqcRYGate(q, -3.1323958525106095, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.921714600627599, 5);
  sqcRYGate(q, 0.6225400666705285, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.073818852814012, 6);
  sqcRYGate(q, -0.6940455511346629, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8313306321515913, 6);
  sqcRYGate(q, -0.15055943708783648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.640080789580941, 0);
  sqcRYGate(q, -0.2601736613741459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3297387044871583, 0);
  sqcRYGate(q, -2.8475356370976295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0654210322202338, 1);
  sqcRYGate(q, 0.19752882083289158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6094000164306292, 1);
  sqcRYGate(q, 1.1467639339554756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.019001914413219, 2);
  sqcRYGate(q, 1.5447741306909952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1678819990471713, 2);
  sqcRYGate(q, -2.51213203457327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30595209559735254, 3);
  sqcRYGate(q, 0.45247850616774055, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5488523312884702, 3);
  sqcRYGate(q, 2.84790982981651, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5852783053689574, 4);
  sqcRYGate(q, 1.321100714280545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9423584156493408, 4);
  sqcRYGate(q, -3.0824388548187525, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8161569384359134, 5);
  sqcRYGate(q, -0.7607148025185717, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5069102994429084, 5);
  sqcRYGate(q, -2.6035896758810524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0276517022464775, 6);
  sqcRYGate(q, -2.5395892366420356, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.393009603172598, 6);
  sqcRYGate(q, -0.5346307179443658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8765799867941062, 0);
  sqcRYGate(q, 2.059442280615035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4430780322606859, 0);
  sqcRYGate(q, 1.0326912408399016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8879778605114392, 1);
  sqcRYGate(q, 1.053584506461653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6805237934059973, 1);
  sqcRYGate(q, -2.8955134144626644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1166172299495964, 2);
  sqcRYGate(q, 2.1397845654838603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3864114158776775, 2);
  sqcRYGate(q, -1.7457549776395451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3774759125922729, 3);
  sqcRYGate(q, -1.4577471658183079, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0023655270620466, 3);
  sqcRYGate(q, -2.9372892148115244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.09274301987375233, 4);
  sqcRYGate(q, 1.4847384613362253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.559361337699399, 4);
  sqcRYGate(q, 1.8900037278752926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8572170377084183, 5);
  sqcRYGate(q, -0.8605079058076689, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18835291394109355, 5);
  sqcRYGate(q, 2.426625910441264, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6627452130737648, 6);
  sqcRYGate(q, 0.9476583863034955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8251806098390748, 6);
  sqcRYGate(q, -1.5422125224824157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.772546738654966, 0);
  sqcRYGate(q, -1.8889201052370224, 1);
  sqcRYGate(q, 1.8746983708437193, 2);
  sqcRYGate(q, 0.22505876880101994, 3);
  sqcRYGate(q, 3.0506380834339994, 4);
  sqcRYGate(q, -0.48518089451779006, 5);
  sqcRYGate(q, -1.89353489108238, 6);
  sqcRYGate(q, -2.845600607416557, 7);

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
