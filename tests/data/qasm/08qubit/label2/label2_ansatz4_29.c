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

  sqcRYGate(q, -1.8124665808717988, 0);
  sqcRZGate(q, 1.5700270306827555, 0);
  sqcRYGate(q, -0.13438023357507758, 1);
  sqcRZGate(q, -0.6387283813352091, 1);
  sqcRYGate(q, -2.0529694447987783, 2);
  sqcRZGate(q, -0.5045592890461689, 2);
  sqcRYGate(q, -2.113309756068034, 3);
  sqcRZGate(q, -2.3514699581718195, 3);
  sqcRYGate(q, -1.5726680508190254, 4);
  sqcRZGate(q, 1.9436414031881082, 4);
  sqcRYGate(q, -0.6173486480904895, 5);
  sqcRZGate(q, -0.42404135612354993, 5);
  sqcRYGate(q, 1.3417724032558291, 6);
  sqcRZGate(q, 3.049938505018022, 6);
  sqcRYGate(q, -3.057914973398646, 7);
  sqcRZGate(q, -2.66648264907697, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4553586134209264, 0);
  sqcRZGate(q, -2.2566799855354076, 0);
  sqcRYGate(q, -1.215152137023022, 1);
  sqcRZGate(q, -0.4326533319417156, 1);
  sqcRYGate(q, 0.837048223268374, 2);
  sqcRZGate(q, 0.028100685781174504, 2);
  sqcRYGate(q, 2.0788561184236736, 3);
  sqcRZGate(q, -1.5149363029822012, 3);
  sqcRYGate(q, 1.2846841990912035, 4);
  sqcRZGate(q, -1.6213080376047646, 4);
  sqcRYGate(q, 0.8708327178854778, 5);
  sqcRZGate(q, -2.2743685111268985, 5);
  sqcRYGate(q, 2.2965197816671306, 6);
  sqcRZGate(q, 0.6547183679818415, 6);
  sqcRYGate(q, -0.08503089156912816, 7);
  sqcRZGate(q, 0.4560182405960012, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7779589326277168, 0);
  sqcRZGate(q, 0.6983417747945693, 0);
  sqcRYGate(q, -1.6254475494536154, 1);
  sqcRZGate(q, 1.3234407776566481, 1);
  sqcRYGate(q, 0.03830547181315858, 2);
  sqcRZGate(q, 2.3648085680127973, 2);
  sqcRYGate(q, -2.480517138318241, 3);
  sqcRZGate(q, 2.948304578608714, 3);
  sqcRYGate(q, 2.8664086740270815, 4);
  sqcRZGate(q, 0.6672586542821324, 4);
  sqcRYGate(q, 2.7565259686605383, 5);
  sqcRZGate(q, -2.8625780891893915, 5);
  sqcRYGate(q, 0.6795603807109285, 6);
  sqcRZGate(q, -0.8557794737460185, 6);
  sqcRYGate(q, 1.9525406514966424, 7);
  sqcRZGate(q, 0.3590736055271959, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5606717964132972, 0);
  sqcRZGate(q, -0.3929956317924953, 0);
  sqcRYGate(q, 1.7652703625733541, 1);
  sqcRZGate(q, 2.2249796189516013, 1);
  sqcRYGate(q, 3.0270371547439465, 2);
  sqcRZGate(q, -2.0277997829356202, 2);
  sqcRYGate(q, 2.843500555704752, 3);
  sqcRZGate(q, -0.6677048582315646, 3);
  sqcRYGate(q, -1.303602548504609, 4);
  sqcRZGate(q, 2.536881156329635, 4);
  sqcRYGate(q, -1.0285685107376015, 5);
  sqcRZGate(q, -3.0162975934439493, 5);
  sqcRYGate(q, 1.245504735284675, 6);
  sqcRZGate(q, -2.7678831042773044, 6);
  sqcRYGate(q, -1.5495919162775005, 7);
  sqcRZGate(q, 0.3412305001934053, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.36543158053243996, 0);
  sqcRZGate(q, -0.23949359371613085, 0);
  sqcRYGate(q, -1.4336088677392222, 1);
  sqcRZGate(q, 0.44210297505358476, 1);
  sqcRYGate(q, -2.35433245599327, 2);
  sqcRZGate(q, 0.5450749948417792, 2);
  sqcRYGate(q, 1.3641882305836475, 3);
  sqcRZGate(q, -2.067778275436286, 3);
  sqcRYGate(q, -2.098734116086548, 4);
  sqcRZGate(q, 2.973214767056879, 4);
  sqcRYGate(q, 2.7780430596282555, 5);
  sqcRZGate(q, 1.831393980169992, 5);
  sqcRYGate(q, -1.5834928629463763, 6);
  sqcRZGate(q, -1.4297709890610877, 6);
  sqcRYGate(q, -0.3260135781129375, 7);
  sqcRZGate(q, 0.08826526940878042, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9646536781805253, 0);
  sqcRZGate(q, 1.8506010950996366, 0);
  sqcRYGate(q, -1.67701025638316, 1);
  sqcRZGate(q, 1.36616909769082, 1);
  sqcRYGate(q, -2.141288861997998, 2);
  sqcRZGate(q, 2.034341719543856, 2);
  sqcRYGate(q, -0.09157298412143465, 3);
  sqcRZGate(q, -1.0874399395366705, 3);
  sqcRYGate(q, -1.3610358288060869, 4);
  sqcRZGate(q, 1.5562641284174508, 4);
  sqcRYGate(q, -0.9538867552874823, 5);
  sqcRZGate(q, -0.34143858945232713, 5);
  sqcRYGate(q, 2.502347650742578, 6);
  sqcRZGate(q, -2.906749469693076, 6);
  sqcRYGate(q, 0.30031277971060355, 7);
  sqcRZGate(q, 0.64625249978804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0677869410099499, 0);
  sqcRZGate(q, 2.003538066105641, 0);
  sqcRYGate(q, -1.7970931794286022, 1);
  sqcRZGate(q, -0.7789688747648524, 1);
  sqcRYGate(q, 0.13778487204535225, 2);
  sqcRZGate(q, -1.3820124247571863, 2);
  sqcRYGate(q, 0.8852647096754902, 3);
  sqcRZGate(q, 0.28079139481459237, 3);
  sqcRYGate(q, 1.3104212350349893, 4);
  sqcRZGate(q, -2.965711857206265, 4);
  sqcRYGate(q, 0.6572563888918087, 5);
  sqcRZGate(q, -1.8203814161406318, 5);
  sqcRYGate(q, 1.157579635605937, 6);
  sqcRZGate(q, -1.964576897773994, 6);
  sqcRYGate(q, 1.4531162089745189, 7);
  sqcRZGate(q, -1.2649973326244863, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.50677680813203, 0);
  sqcRZGate(q, 1.4929587074682882, 0);
  sqcRYGate(q, -2.751302325858285, 1);
  sqcRZGate(q, -2.4284486493916524, 1);
  sqcRYGate(q, -1.0452994024109117, 2);
  sqcRZGate(q, -1.0354338965225685, 2);
  sqcRYGate(q, 2.06781794880503, 3);
  sqcRZGate(q, -3.134998489313118, 3);
  sqcRYGate(q, -2.7208501548291077, 4);
  sqcRZGate(q, -0.4211788244416106, 4);
  sqcRYGate(q, -0.4414665136601353, 5);
  sqcRZGate(q, -3.0335878887152545, 5);
  sqcRYGate(q, -2.330997984816872, 6);
  sqcRZGate(q, 1.555177000259543, 6);
  sqcRYGate(q, -0.95321521394201, 7);
  sqcRZGate(q, -2.858814722594823, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0339399229797346, 0);
  sqcRZGate(q, 0.14059602469190705, 0);
  sqcRYGate(q, 0.9527835589110145, 1);
  sqcRZGate(q, 2.74248555374327, 1);
  sqcRYGate(q, 2.107505850324766, 2);
  sqcRZGate(q, 0.346624001654952, 2);
  sqcRYGate(q, 0.8109043105431669, 3);
  sqcRZGate(q, -1.4192960544903828, 3);
  sqcRYGate(q, 2.864401453003361, 4);
  sqcRZGate(q, -1.1093497305018234, 4);
  sqcRYGate(q, 2.459515188431177, 5);
  sqcRZGate(q, -2.320715027361172, 5);
  sqcRYGate(q, -3.0807060292315587, 6);
  sqcRZGate(q, -0.839701566392201, 6);
  sqcRYGate(q, -2.9013642138227365, 7);
  sqcRZGate(q, 1.9321825569297602, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.963076012990694, 0);
  sqcRZGate(q, -0.5387545354016137, 0);
  sqcRYGate(q, 1.9144008630386953, 1);
  sqcRZGate(q, 0.12127092946086397, 1);
  sqcRYGate(q, -0.23818276997211107, 2);
  sqcRZGate(q, -1.0302298505852603, 2);
  sqcRYGate(q, 2.2359276279166793, 3);
  sqcRZGate(q, 2.2449151682082267, 3);
  sqcRYGate(q, 0.4949628689837562, 4);
  sqcRZGate(q, 2.6528500242041404, 4);
  sqcRYGate(q, -0.6695606145144275, 5);
  sqcRZGate(q, 0.723957243572916, 5);
  sqcRYGate(q, -0.80545664101541, 6);
  sqcRZGate(q, -2.1904964733518, 6);
  sqcRYGate(q, -2.8534111454358864, 7);
  sqcRZGate(q, 2.7667468340678596, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8534691754281436, 0);
  sqcRZGate(q, 1.8430990037123312, 0);
  sqcRYGate(q, -1.181771229622064, 1);
  sqcRZGate(q, -1.8693087587078536, 1);
  sqcRYGate(q, 1.0036071016886547, 2);
  sqcRZGate(q, -0.11987977228610211, 2);
  sqcRYGate(q, 1.5114154277436187, 3);
  sqcRZGate(q, -0.4144713046458832, 3);
  sqcRYGate(q, -2.8833918623436925, 4);
  sqcRZGate(q, -1.0760313386801101, 4);
  sqcRYGate(q, 0.34428257388034444, 5);
  sqcRZGate(q, -0.9252994954585682, 5);
  sqcRYGate(q, -3.0953224741802603, 6);
  sqcRZGate(q, -0.41417508798430264, 6);
  sqcRYGate(q, 2.4949639323917836, 7);
  sqcRZGate(q, 2.0235864658307503, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2661782676915538, 0);
  sqcRZGate(q, -2.8131813849982565, 0);
  sqcRYGate(q, 2.1848374270732602, 1);
  sqcRZGate(q, 1.4741004398192863, 1);
  sqcRYGate(q, -0.7976834928497728, 2);
  sqcRZGate(q, 0.7572824731484084, 2);
  sqcRYGate(q, -2.598921779707677, 3);
  sqcRZGate(q, 1.2738728622813111, 3);
  sqcRYGate(q, 1.4333398068106602, 4);
  sqcRZGate(q, -1.0672134487117684, 4);
  sqcRYGate(q, 2.2515613850771734, 5);
  sqcRZGate(q, 1.9297656464209372, 5);
  sqcRYGate(q, 0.7416266924690832, 6);
  sqcRZGate(q, 0.8845503732135208, 6);
  sqcRYGate(q, 0.2701222704196038, 7);
  sqcRZGate(q, 0.47047060151590175, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.722590991219629, 0);
  sqcRZGate(q, -2.2678172274640254, 0);
  sqcRYGate(q, 0.7494820455416482, 1);
  sqcRZGate(q, 1.0026701257515171, 1);
  sqcRYGate(q, 0.5772287378373568, 2);
  sqcRZGate(q, 1.3661045455717291, 2);
  sqcRYGate(q, 1.4293143919221447, 3);
  sqcRZGate(q, 0.6827700715307802, 3);
  sqcRYGate(q, -1.3616056805105614, 4);
  sqcRZGate(q, 2.9858152159395877, 4);
  sqcRYGate(q, -1.9872371684663168, 5);
  sqcRZGate(q, -1.599984638135126, 5);
  sqcRYGate(q, 1.3383653158919973, 6);
  sqcRZGate(q, -2.9841504958547325, 6);
  sqcRYGate(q, 0.24681124163614743, 7);
  sqcRZGate(q, -1.7962282098065048, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.44551801434329796, 0);
  sqcRZGate(q, 1.2423986776392324, 0);
  sqcRYGate(q, 2.3111467338147933, 1);
  sqcRZGate(q, -1.7138887251817954, 1);
  sqcRYGate(q, 1.485505097834719, 2);
  sqcRZGate(q, 1.8266311662544972, 2);
  sqcRYGate(q, 2.02423621722774, 3);
  sqcRZGate(q, 2.3548507192051136, 3);
  sqcRYGate(q, 2.271203882106075, 4);
  sqcRZGate(q, 0.27921150570753095, 4);
  sqcRYGate(q, 1.6878710895154656, 5);
  sqcRZGate(q, -2.4009556088898742, 5);
  sqcRYGate(q, -1.4388049636818079, 6);
  sqcRZGate(q, -1.045441252357608, 6);
  sqcRYGate(q, 1.1255648181594609, 7);
  sqcRZGate(q, -2.6203284332388925, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5208890064458185, 0);
  sqcRZGate(q, -2.8658128630740194, 0);
  sqcRYGate(q, 1.5936342165126387, 1);
  sqcRZGate(q, 0.6626198091149096, 1);
  sqcRYGate(q, 1.850878181745439, 2);
  sqcRZGate(q, 1.0269851089641442, 2);
  sqcRYGate(q, 1.833443076996963, 3);
  sqcRZGate(q, 0.6996482810470958, 3);
  sqcRYGate(q, 1.507420022558259, 4);
  sqcRZGate(q, 0.19007098670564285, 4);
  sqcRYGate(q, 0.09979928640360834, 5);
  sqcRZGate(q, 0.4830243194059029, 5);
  sqcRYGate(q, 2.1646387555088236, 6);
  sqcRZGate(q, -0.3356029827838629, 6);
  sqcRYGate(q, 2.654777518732146, 7);
  sqcRZGate(q, -2.348230699057066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5943164522328406, 0);
  sqcRZGate(q, 2.070167739185428, 0);
  sqcRYGate(q, 0.12564333578541095, 1);
  sqcRZGate(q, -0.5252548627130774, 1);
  sqcRYGate(q, -0.9874849222675656, 2);
  sqcRZGate(q, -1.0606623097362191, 2);
  sqcRYGate(q, 1.433560952839698, 3);
  sqcRZGate(q, -2.687941506662195, 3);
  sqcRYGate(q, -0.9361116831807967, 4);
  sqcRZGate(q, -0.0199629721502186, 4);
  sqcRYGate(q, 0.8228739781955571, 5);
  sqcRZGate(q, 2.330028002496684, 5);
  sqcRYGate(q, 1.318851048626832, 6);
  sqcRZGate(q, -2.103608417629275, 6);
  sqcRYGate(q, -2.9329004559301235, 7);
  sqcRZGate(q, 1.1888875730069477, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.690973949907141, 0);
  sqcRZGate(q, -0.13376945757948472, 0);
  sqcRYGate(q, 1.5105597255304481, 1);
  sqcRZGate(q, 3.081562478681964, 1);
  sqcRYGate(q, -1.152151397952828, 2);
  sqcRZGate(q, 2.8218097447171036, 2);
  sqcRYGate(q, -1.6124071566516927, 3);
  sqcRZGate(q, 2.962727231052391, 3);
  sqcRYGate(q, 1.643403841791795, 4);
  sqcRZGate(q, 3.0570213947808895, 4);
  sqcRYGate(q, 2.864549973031556, 5);
  sqcRZGate(q, 1.5652582467669183, 5);
  sqcRYGate(q, 0.8489190414926124, 6);
  sqcRZGate(q, -0.03657412222416972, 6);
  sqcRYGate(q, 1.1363765093041325, 7);
  sqcRZGate(q, 1.6484311633626465, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3629347081074883, 0);
  sqcRZGate(q, 2.421511570093604, 0);
  sqcRYGate(q, -0.29428983682164045, 1);
  sqcRZGate(q, -1.383751373871424, 1);
  sqcRYGate(q, -2.76687728230738, 2);
  sqcRZGate(q, -0.34106261876843375, 2);
  sqcRYGate(q, -0.22604446169165596, 3);
  sqcRZGate(q, 2.0769885813404994, 3);
  sqcRYGate(q, 0.7447220474108239, 4);
  sqcRZGate(q, -0.5558955771186094, 4);
  sqcRYGate(q, -1.875639533137461, 5);
  sqcRZGate(q, 2.6824102431467702, 5);
  sqcRYGate(q, -1.4242703730424537, 6);
  sqcRZGate(q, -1.2545369427154567, 6);
  sqcRYGate(q, 2.3922790153885325, 7);
  sqcRZGate(q, -1.318070629897841, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.148162361072596, 0);
  sqcRZGate(q, 2.816023428287052, 0);
  sqcRYGate(q, -2.7349723894321714, 1);
  sqcRZGate(q, 0.5397187724153547, 1);
  sqcRYGate(q, -1.2867037312543745, 2);
  sqcRZGate(q, 3.139354924280826, 2);
  sqcRYGate(q, -2.3329168981053163, 3);
  sqcRZGate(q, -2.0819201937821163, 3);
  sqcRYGate(q, 0.36116990933745535, 4);
  sqcRZGate(q, -0.3725416886226008, 4);
  sqcRYGate(q, -2.6861112224443415, 5);
  sqcRZGate(q, 3.0674299095237902, 5);
  sqcRYGate(q, -0.5183945010818851, 6);
  sqcRZGate(q, 0.9380891069744176, 6);
  sqcRYGate(q, 1.4774308076092024, 7);
  sqcRZGate(q, -1.5802840078613523, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5564985173105663, 0);
  sqcRZGate(q, -1.402031483714068, 0);
  sqcRYGate(q, -3.0391151065547826, 1);
  sqcRZGate(q, 3.068148894602148, 1);
  sqcRYGate(q, -2.4352540958900697, 2);
  sqcRZGate(q, 2.7895106744348266, 2);
  sqcRYGate(q, 0.03277370474084851, 3);
  sqcRZGate(q, -2.2550007971592305, 3);
  sqcRYGate(q, -0.5014952805744519, 4);
  sqcRZGate(q, -3.0775722817918596, 4);
  sqcRYGate(q, -2.1564767913843426, 5);
  sqcRZGate(q, 1.7042062130633182, 5);
  sqcRYGate(q, -0.1887293730475909, 6);
  sqcRZGate(q, -1.3813954078213322, 6);
  sqcRYGate(q, -3.0596389992258026, 7);
  sqcRZGate(q, -0.8701571676580775, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4668428029765046, 0);
  sqcRZGate(q, -2.3959503505714395, 0);
  sqcRYGate(q, -2.459879701329032, 1);
  sqcRZGate(q, 1.14149135663496, 1);
  sqcRYGate(q, -1.0899419036818054, 2);
  sqcRZGate(q, -0.9165608442254801, 2);
  sqcRYGate(q, 0.2357948970401398, 3);
  sqcRZGate(q, -1.5368799400282662, 3);
  sqcRYGate(q, -1.8493960160861873, 4);
  sqcRZGate(q, -2.8104318042570178, 4);
  sqcRYGate(q, -0.28265014065055727, 5);
  sqcRZGate(q, -2.3767291980350724, 5);
  sqcRYGate(q, 1.6774702729376791, 6);
  sqcRZGate(q, -1.4338224286554224, 6);
  sqcRYGate(q, 1.7286013928028763, 7);
  sqcRZGate(q, 1.9187165832214248, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7745193865235875, 0);
  sqcRZGate(q, -1.5908473579329723, 0);
  sqcRYGate(q, 1.7844646949680598, 1);
  sqcRZGate(q, 0.18978294103079563, 1);
  sqcRYGate(q, -2.1419866110864856, 2);
  sqcRZGate(q, -2.630181675622893, 2);
  sqcRYGate(q, -1.4243883478217718, 3);
  sqcRZGate(q, 0.11878760774201867, 3);
  sqcRYGate(q, -2.555030190571136, 4);
  sqcRZGate(q, 1.8825209208466163, 4);
  sqcRYGate(q, -2.3930880850955574, 5);
  sqcRZGate(q, -2.2388071833973737, 5);
  sqcRYGate(q, -1.7296319647166074, 6);
  sqcRZGate(q, -3.073086055763409, 6);
  sqcRYGate(q, -1.7788641054679966, 7);
  sqcRZGate(q, -0.5288459300263502, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7908888245059327, 0);
  sqcRZGate(q, -0.7878889228631119, 0);
  sqcRYGate(q, -2.526272292112724, 1);
  sqcRZGate(q, -2.02046267433579, 1);
  sqcRYGate(q, 1.958764342745762, 2);
  sqcRZGate(q, 1.3102910968495907, 2);
  sqcRYGate(q, 2.306718616021218, 3);
  sqcRZGate(q, 2.569791640518382, 3);
  sqcRYGate(q, -0.33244264545996016, 4);
  sqcRZGate(q, -0.4139990615628529, 4);
  sqcRYGate(q, 2.4298476403181906, 5);
  sqcRZGate(q, 0.7504455895170712, 5);
  sqcRYGate(q, -0.47694224667849605, 6);
  sqcRZGate(q, -0.2921619555913889, 6);
  sqcRYGate(q, 0.6683971803115574, 7);
  sqcRZGate(q, 2.390912982033463, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6331937343570742, 0);
  sqcRZGate(q, 2.152924207085235, 0);
  sqcRYGate(q, 1.7056177727577297, 1);
  sqcRZGate(q, -2.307570847802825, 1);
  sqcRYGate(q, -3.0916631261570093, 2);
  sqcRZGate(q, -0.4636817432734771, 2);
  sqcRYGate(q, -0.44000799367933197, 3);
  sqcRZGate(q, 0.2351960380748417, 3);
  sqcRYGate(q, 1.1338425095723448, 4);
  sqcRZGate(q, 2.6799742026558127, 4);
  sqcRYGate(q, -2.6444381645242765, 5);
  sqcRZGate(q, -1.9539394906513838, 5);
  sqcRYGate(q, 1.379935696916104, 6);
  sqcRZGate(q, -2.0604257956702465, 6);
  sqcRYGate(q, 2.013831875148009, 7);
  sqcRZGate(q, -0.8804221733579883, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4214819860081094, 0);
  sqcRZGate(q, 2.809437733878084, 0);
  sqcRYGate(q, 2.5815074107324927, 1);
  sqcRZGate(q, 1.2623796933862592, 1);
  sqcRYGate(q, -1.8829907184391559, 2);
  sqcRZGate(q, 0.38155664532388284, 2);
  sqcRYGate(q, -2.759451688452887, 3);
  sqcRZGate(q, -0.934216923293234, 3);
  sqcRYGate(q, 0.02473327994199321, 4);
  sqcRZGate(q, -1.126548214607785, 4);
  sqcRYGate(q, -1.5030618962632052, 5);
  sqcRZGate(q, 1.854568941452312, 5);
  sqcRYGate(q, -0.38376848211204206, 6);
  sqcRZGate(q, -3.0537490036404535, 6);
  sqcRYGate(q, 0.0654038223215121, 7);
  sqcRZGate(q, 1.6957955452821247, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.37867259507923134, 0);
  sqcRZGate(q, 2.0318978023674314, 0);
  sqcRYGate(q, -1.8884157924385798, 1);
  sqcRZGate(q, 0.6639247183826598, 1);
  sqcRYGate(q, 0.8702686345140973, 2);
  sqcRZGate(q, 2.2685398713108915, 2);
  sqcRYGate(q, 2.622249554148637, 3);
  sqcRZGate(q, -0.011296586957351805, 3);
  sqcRYGate(q, -0.3433380116766669, 4);
  sqcRZGate(q, 0.022588297284095876, 4);
  sqcRYGate(q, 1.3688126172357737, 5);
  sqcRZGate(q, 0.8024592572025853, 5);
  sqcRYGate(q, 1.61087648723183, 6);
  sqcRZGate(q, 0.5505136453645285, 6);
  sqcRYGate(q, 0.2631163090446913, 7);
  sqcRZGate(q, -3.0899780922633955, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8890690434564195, 0);
  sqcRZGate(q, -0.8366854936712476, 0);
  sqcRYGate(q, -2.007266319404015, 1);
  sqcRZGate(q, -2.3913248872308692, 1);
  sqcRYGate(q, 2.8524237460865423, 2);
  sqcRZGate(q, 2.9838813280405745, 2);
  sqcRYGate(q, 2.006676873937308, 3);
  sqcRZGate(q, 0.3113668437675484, 3);
  sqcRYGate(q, 2.3718849907246224, 4);
  sqcRZGate(q, -0.9586914281952498, 4);
  sqcRYGate(q, -3.0175172812683506, 5);
  sqcRZGate(q, -1.6273847896087847, 5);
  sqcRYGate(q, -1.303464011216648, 6);
  sqcRZGate(q, 2.6635174422767154, 6);
  sqcRYGate(q, -0.5010637585483355, 7);
  sqcRZGate(q, 1.5900468894836022, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0797227063632988, 0);
  sqcRZGate(q, 1.1321542853595865, 0);
  sqcRYGate(q, 2.24841815139931, 1);
  sqcRZGate(q, 1.2347258894976407, 1);
  sqcRYGate(q, 2.9991682775777244, 2);
  sqcRZGate(q, 0.6291683686635284, 2);
  sqcRYGate(q, -0.7652716916136083, 3);
  sqcRZGate(q, -0.6668716083009469, 3);
  sqcRYGate(q, 1.8107627806321502, 4);
  sqcRZGate(q, -2.7511481642171636, 4);
  sqcRYGate(q, -2.7743061009607555, 5);
  sqcRZGate(q, 1.8572206773127466, 5);
  sqcRYGate(q, -2.352892316942791, 6);
  sqcRZGate(q, 1.3248291478684608, 6);
  sqcRYGate(q, 1.5787299087729192, 7);
  sqcRZGate(q, 0.8233710734379098, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7325787888394686, 0);
  sqcRZGate(q, -2.134507129966469, 0);
  sqcRYGate(q, 0.6750527402265364, 1);
  sqcRZGate(q, -0.924250385445851, 1);
  sqcRYGate(q, 1.7732155763519057, 2);
  sqcRZGate(q, 2.224399076110588, 2);
  sqcRYGate(q, -2.4940853729554195, 3);
  sqcRZGate(q, -1.9274835465692817, 3);
  sqcRYGate(q, -0.09979608765476373, 4);
  sqcRZGate(q, -0.6522819118752986, 4);
  sqcRYGate(q, 0.8571187650095107, 5);
  sqcRZGate(q, 1.6607868925002474, 5);
  sqcRYGate(q, -1.2864368323418447, 6);
  sqcRZGate(q, -2.853362852173305, 6);
  sqcRYGate(q, -1.228641926106455, 7);
  sqcRZGate(q, -0.43318018119810286, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3934762156170293, 0);
  sqcRZGate(q, -1.19269875128749, 0);
  sqcRYGate(q, 0.10155321760734919, 1);
  sqcRZGate(q, -1.54781238044115, 1);
  sqcRYGate(q, 0.5225049454350292, 2);
  sqcRZGate(q, -3.027757024294992, 2);
  sqcRYGate(q, 0.548681203870084, 3);
  sqcRZGate(q, 1.806197678501137, 3);
  sqcRYGate(q, 0.9720981747644339, 4);
  sqcRZGate(q, 2.0030374340817767, 4);
  sqcRYGate(q, -0.2272668990505324, 5);
  sqcRZGate(q, -1.7069646548056596, 5);
  sqcRYGate(q, -0.9543244012413057, 6);
  sqcRZGate(q, 1.822217447126974, 6);
  sqcRYGate(q, -2.5647487771310735, 7);
  sqcRZGate(q, 0.9325139659872325, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.017520189355051, 0);
  sqcRZGate(q, 1.6818254378337407, 0);
  sqcRYGate(q, -0.5017198508754523, 1);
  sqcRZGate(q, 2.8149252795863275, 1);
  sqcRYGate(q, 2.484979550824699, 2);
  sqcRZGate(q, -1.8832573635764582, 2);
  sqcRYGate(q, 0.4859782767392699, 3);
  sqcRZGate(q, 0.08352671593006099, 3);
  sqcRYGate(q, -1.5884403690625701, 4);
  sqcRZGate(q, -2.910007105388888, 4);
  sqcRYGate(q, 1.5143872599955204, 5);
  sqcRZGate(q, 2.2511267734912668, 5);
  sqcRYGate(q, 1.2877860473604712, 6);
  sqcRZGate(q, 0.37762314836583766, 6);
  sqcRYGate(q, 1.1548193170785435, 7);
  sqcRZGate(q, -0.6341319518081491, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8391528576274911, 0);
  sqcRZGate(q, 0.8757846710825798, 0);
  sqcRYGate(q, 2.4745150531143554, 1);
  sqcRZGate(q, 0.4432923035525029, 1);
  sqcRYGate(q, -1.4057261078466086, 2);
  sqcRZGate(q, -1.422463047290815, 2);
  sqcRYGate(q, -2.0139511946085795, 3);
  sqcRZGate(q, -2.550630941994019, 3);
  sqcRYGate(q, -1.3131586054525302, 4);
  sqcRZGate(q, 2.820991909239541, 4);
  sqcRYGate(q, 2.85605986062303, 5);
  sqcRZGate(q, 0.5032140579420137, 5);
  sqcRYGate(q, 1.5910849083197431, 6);
  sqcRZGate(q, 1.7923118939352218, 6);
  sqcRYGate(q, 2.7356050063714674, 7);
  sqcRZGate(q, -2.637471366334312, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.015602882995550727, 0);
  sqcRZGate(q, 1.5358412964978054, 0);
  sqcRYGate(q, -2.706438582843878, 1);
  sqcRZGate(q, -2.768062670158648, 1);
  sqcRYGate(q, -0.05650250871154117, 2);
  sqcRZGate(q, 1.2380203157885619, 2);
  sqcRYGate(q, 0.6345191357684744, 3);
  sqcRZGate(q, -0.39006751825803665, 3);
  sqcRYGate(q, 2.867806471331834, 4);
  sqcRZGate(q, -0.7970624487928671, 4);
  sqcRYGate(q, 2.01751933342803, 5);
  sqcRZGate(q, -2.1467120844963725, 5);
  sqcRYGate(q, 2.669336545020784, 6);
  sqcRZGate(q, 2.3433246488694297, 6);
  sqcRYGate(q, 0.5544890664743716, 7);
  sqcRZGate(q, 0.6940834768826245, 7);

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
