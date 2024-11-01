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

  sqcRYGate(q, -0.8493610832385025, 0);
  sqcRYGate(q, 0.023684809604658352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22801358470072644, 0);
  sqcRYGate(q, 0.9622062466321182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.758258001816178, 1);
  sqcRYGate(q, -1.4643161182736224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2658390103433126, 1);
  sqcRYGate(q, 2.2942894054951846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1986144534797623, 2);
  sqcRYGate(q, -1.2644764073477712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6306369028164311, 2);
  sqcRYGate(q, -0.9473900209378002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8823420598556666, 3);
  sqcRYGate(q, 2.5874034918755053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5639322592353784, 3);
  sqcRYGate(q, -1.7134807332632525, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0832174459643438, 4);
  sqcRYGate(q, -0.9684364975496188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3719469288959987, 4);
  sqcRYGate(q, -1.0266227411473574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07831367718355686, 5);
  sqcRYGate(q, 1.4520957807271726, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9381098042534575, 5);
  sqcRYGate(q, 1.9021139586563267, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5820642839642667, 6);
  sqcRYGate(q, -0.9924887378540208, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5492028173583179, 6);
  sqcRYGate(q, -0.9855642474268878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6124456089560866, 0);
  sqcRYGate(q, -1.3270973948858353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5461185182606343, 0);
  sqcRYGate(q, -0.18287343229873726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0752340615161495, 1);
  sqcRYGate(q, 2.6845725994220806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4333844466190169, 1);
  sqcRYGate(q, -0.4798000924483601, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.954028508956264, 2);
  sqcRYGate(q, -1.6666691895258339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.534465953668932, 2);
  sqcRYGate(q, -0.8422649312834506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3341629277177596, 3);
  sqcRYGate(q, 2.3307014405124895, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8571926175439466, 3);
  sqcRYGate(q, -0.7239938413002127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9098233466191403, 4);
  sqcRYGate(q, -2.511798943503814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2520780968993548, 4);
  sqcRYGate(q, -1.6942576957359081, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5650322123974107, 5);
  sqcRYGate(q, 2.14252746146663, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9687047976301644, 5);
  sqcRYGate(q, 1.9800336017710185, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5588835437677775, 6);
  sqcRYGate(q, -1.0688064029377844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6940462376994625, 6);
  sqcRYGate(q, -0.8664502685844653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7291179575292484, 0);
  sqcRYGate(q, -0.4369835444059993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.964622023917041, 0);
  sqcRYGate(q, -2.108042671413776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.543870351959139, 1);
  sqcRYGate(q, -2.9487856408460695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6073693734254131, 1);
  sqcRYGate(q, 2.7134445569107437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.36603884841497, 2);
  sqcRYGate(q, 0.029211125940796556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7291591601699947, 2);
  sqcRYGate(q, -1.1437613673147253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.125266119217111, 3);
  sqcRYGate(q, 2.87488162403004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0874854460102172, 3);
  sqcRYGate(q, 2.1394050862151373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0871728073972164, 4);
  sqcRYGate(q, -0.1404129115580659, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9520048205885407, 4);
  sqcRYGate(q, 0.9451495836841151, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.814619051111772, 5);
  sqcRYGate(q, -1.5277999164669278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6975046053871494, 5);
  sqcRYGate(q, 2.441544903253081, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5751540668394184, 6);
  sqcRYGate(q, -1.2649692103710701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.035130882595511, 6);
  sqcRYGate(q, -2.9386654644749175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9955412218483013, 0);
  sqcRYGate(q, -1.1137537872639642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7015056699411755, 0);
  sqcRYGate(q, -0.48623785695660754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37644743865080965, 1);
  sqcRYGate(q, -1.9449931139449177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7468310508524254, 1);
  sqcRYGate(q, -1.5841687855595163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3940150824330027, 2);
  sqcRYGate(q, 2.603034357064631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5519592443654107, 2);
  sqcRYGate(q, 1.7324859279345421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3216874639902114, 3);
  sqcRYGate(q, -0.22332515265004668, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3837938537527354, 3);
  sqcRYGate(q, -2.277833027192845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5669982289980746, 4);
  sqcRYGate(q, 1.4369919306510486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7378508457174995, 4);
  sqcRYGate(q, -1.3539231944973193, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9498341984672503, 5);
  sqcRYGate(q, 1.683711114797437, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4035540248779, 5);
  sqcRYGate(q, 0.8323515368928108, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.21160479392255827, 6);
  sqcRYGate(q, 2.0833603203397875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6659063133324095, 6);
  sqcRYGate(q, 2.961589450248938, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.748467219271056, 0);
  sqcRYGate(q, 1.2282368912468906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9197316234652613, 0);
  sqcRYGate(q, 0.13417099679586733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.521398064666914, 1);
  sqcRYGate(q, 2.0795774545533714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.379540900087742, 1);
  sqcRYGate(q, -0.5990422763399792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15036293470244377, 2);
  sqcRYGate(q, 0.04256038046131305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37921493352541, 2);
  sqcRYGate(q, -1.9000868015895171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9788578944210115, 3);
  sqcRYGate(q, 0.4921413762951336, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7509239240475378, 3);
  sqcRYGate(q, -1.4043168217601882, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.516964959680776, 4);
  sqcRYGate(q, -0.44521565246312544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5588225986469428, 4);
  sqcRYGate(q, 2.0570564718248088, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2634155438982422, 5);
  sqcRYGate(q, 0.11415285741483494, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6513339009263609, 5);
  sqcRYGate(q, 2.300345197808314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8888740521381966, 6);
  sqcRYGate(q, -0.7651762494002208, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9052696199632657, 6);
  sqcRYGate(q, -1.6904658109545607, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.391296060198063, 0);
  sqcRYGate(q, -1.1178291721638594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.306816355287502, 0);
  sqcRYGate(q, 1.7573373830863988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6682749179446863, 1);
  sqcRYGate(q, 1.8563016850239984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7534788442275118, 1);
  sqcRYGate(q, 2.562913779966162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5122983712104031, 2);
  sqcRYGate(q, 0.19780733371564785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8257250532332889, 2);
  sqcRYGate(q, 1.6237018352841306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.604858309323206, 3);
  sqcRYGate(q, -2.749109128573513, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.021553319885668, 3);
  sqcRYGate(q, -1.621839920136165, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2626890501005725, 4);
  sqcRYGate(q, 0.8769242678955226, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.22475214813474587, 4);
  sqcRYGate(q, -0.8735515204651588, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.059651811021848467, 5);
  sqcRYGate(q, -2.4318522306907457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0528071743418232, 5);
  sqcRYGate(q, -0.6785084589350968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7953212671565253, 6);
  sqcRYGate(q, -0.38007566367910783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.552778815374954, 6);
  sqcRYGate(q, 1.7364830685533805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.101659191398652, 0);
  sqcRYGate(q, 0.36166260537643424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8356142781293467, 0);
  sqcRYGate(q, -2.8592398940271107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.139559386724169, 1);
  sqcRYGate(q, 1.4035726669514896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6660991415272084, 1);
  sqcRYGate(q, 2.7765891205587243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.888635013991326, 2);
  sqcRYGate(q, -1.6321482621932495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.175342316895744, 2);
  sqcRYGate(q, 0.2361230806004215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8493228184089427, 3);
  sqcRYGate(q, 2.057541106955725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.522473124443409, 3);
  sqcRYGate(q, -0.46042371465765014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.856085363926958, 4);
  sqcRYGate(q, -2.429213525297456, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4799788953002325, 4);
  sqcRYGate(q, 2.004580560260832, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6438624943355262, 5);
  sqcRYGate(q, 2.3590126491259196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1814325522391185, 5);
  sqcRYGate(q, -2.1651047697273444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1380895131327953, 6);
  sqcRYGate(q, 2.1037392755036093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.977732307679113, 6);
  sqcRYGate(q, -0.23308792772995676, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7525550718754696, 0);
  sqcRYGate(q, 2.0727054050525107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6239863703666222, 0);
  sqcRYGate(q, -1.9900869400987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20881049512698624, 1);
  sqcRYGate(q, 1.815096831491502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4759561812976094, 1);
  sqcRYGate(q, 3.006271886362776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7065159335155764, 2);
  sqcRYGate(q, 1.180074185420829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0449818602907386, 2);
  sqcRYGate(q, 0.9173834079560166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.791202574269434, 3);
  sqcRYGate(q, 2.475455836147423, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.079387952358497, 3);
  sqcRYGate(q, -2.4001007557355303, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8638669517191975, 4);
  sqcRYGate(q, 0.33827912082619793, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.015156369098846769, 4);
  sqcRYGate(q, 0.4011447897997113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8379108050150483, 5);
  sqcRYGate(q, -2.0911233087594114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7943824014066135, 5);
  sqcRYGate(q, 1.1294269935825403, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5426150688680016, 6);
  sqcRYGate(q, 3.0313341070163213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.291907106126378, 6);
  sqcRYGate(q, -0.6277468822616878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6159365096568994, 0);
  sqcRYGate(q, 1.7785637771011213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5891152082623197, 0);
  sqcRYGate(q, 1.4018068325496371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6458621175241688, 1);
  sqcRYGate(q, -3.103759658196861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43845005429978223, 1);
  sqcRYGate(q, 2.6271435239699787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2264911147437225, 2);
  sqcRYGate(q, 0.03056042087606148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1787159144390091, 2);
  sqcRYGate(q, -0.12603544115729814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7943551185045711, 3);
  sqcRYGate(q, -0.8937900661619507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.78846188500393, 3);
  sqcRYGate(q, 1.6356562880426055, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.249619273121506, 4);
  sqcRYGate(q, 0.6463258523169362, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3541504698145563, 4);
  sqcRYGate(q, -0.33982017847036355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2899535631944254, 5);
  sqcRYGate(q, -1.3638444243640162, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0018507343265195, 5);
  sqcRYGate(q, -1.0926674304443043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9226164621546857, 6);
  sqcRYGate(q, -2.4671147560602926, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5011535920474337, 6);
  sqcRYGate(q, 2.50931114469237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.470559817112709, 0);
  sqcRYGate(q, -1.7156520324537965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5278261085790321, 0);
  sqcRYGate(q, -0.1346135322841846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6008553487983983, 1);
  sqcRYGate(q, 0.982828160496295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5950891326885375, 1);
  sqcRYGate(q, 2.1247250359736567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09219265099661111, 2);
  sqcRYGate(q, -1.742508354171273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7560555613764235, 2);
  sqcRYGate(q, -2.2870584544735477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2214124733722405, 3);
  sqcRYGate(q, -2.794327171687089, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4300654723182242, 3);
  sqcRYGate(q, 2.1309557294026145, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.507719600045448, 4);
  sqcRYGate(q, -1.2909583946294407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0484854051194008, 4);
  sqcRYGate(q, -2.6986248409230544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7492612041293754, 5);
  sqcRYGate(q, -2.1597463779345896, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9462566003197352, 5);
  sqcRYGate(q, 2.40569810361365, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.34218093536749, 6);
  sqcRYGate(q, -1.4624812423340487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8326948730074042, 6);
  sqcRYGate(q, 0.7378721436552742, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.297631899210999, 0);
  sqcRYGate(q, -0.467881921252798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.884661826525206, 0);
  sqcRYGate(q, -1.964690113558559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.208473118396505, 1);
  sqcRYGate(q, -1.257014124848119, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6120271827872352, 1);
  sqcRYGate(q, -2.9855736703434954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.128064781470404, 2);
  sqcRYGate(q, 1.141593176311436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6121634162591016, 2);
  sqcRYGate(q, -2.2775374029075954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08954531887685017, 3);
  sqcRYGate(q, -1.496593219322041, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6355074046200224, 3);
  sqcRYGate(q, -0.14764323174886318, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6492679813499675, 4);
  sqcRYGate(q, 0.2405637076497524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08875420703690651, 4);
  sqcRYGate(q, 2.433471296414295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.016930772723385945, 5);
  sqcRYGate(q, 0.82266483946721, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8178225426567685, 5);
  sqcRYGate(q, -0.05449802541411889, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3382599508699946, 6);
  sqcRYGate(q, -0.7778201444746982, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2780942831071123, 6);
  sqcRYGate(q, -1.2907950255358045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7828188363254364, 0);
  sqcRYGate(q, 1.1196242059007742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7402612447466117, 0);
  sqcRYGate(q, -1.5871357963421078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7825291274746307, 1);
  sqcRYGate(q, 0.047114083143326546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7686153308715395, 1);
  sqcRYGate(q, -2.2799896505048847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0784453001253573, 2);
  sqcRYGate(q, -2.669952532279439, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.77823112646946, 2);
  sqcRYGate(q, -0.4270002000119273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.196607692134228, 3);
  sqcRYGate(q, -1.5021452815256229, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5315197050054774, 3);
  sqcRYGate(q, -0.2566987928928244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6334293393984636, 4);
  sqcRYGate(q, -1.6935828045356949, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.19128062814976457, 4);
  sqcRYGate(q, 2.4648351134070614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.002535381637358114, 5);
  sqcRYGate(q, -2.04795301345509, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.984334305382217, 5);
  sqcRYGate(q, 2.6156958791794094, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5730079171109413, 6);
  sqcRYGate(q, -2.984868931932771, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.401057091295724, 6);
  sqcRYGate(q, -0.3817479630914189, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4040354868207476, 0);
  sqcRYGate(q, 2.4623456197678695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.708982993048699, 0);
  sqcRYGate(q, 2.272033685302989, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.440871006343453, 1);
  sqcRYGate(q, 1.4456955984619573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3258261325443583, 1);
  sqcRYGate(q, 1.2166536228869074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14148799815015328, 2);
  sqcRYGate(q, -1.1889604001338574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9922434039348307, 2);
  sqcRYGate(q, -3.030775405007286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.121098988795374, 3);
  sqcRYGate(q, 1.312344140681187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.118138360663529, 3);
  sqcRYGate(q, 2.4417935887493054, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.676512020264309, 4);
  sqcRYGate(q, -0.7234189028579533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6905211949646421, 4);
  sqcRYGate(q, -0.18897094442059825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.008144737189299221, 5);
  sqcRYGate(q, -0.746789580914848, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8579815146400187, 5);
  sqcRYGate(q, -0.8058085661504242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1958818570402707, 6);
  sqcRYGate(q, -2.135331177469861, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6848980548730363, 6);
  sqcRYGate(q, -1.6492573777556443, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9407964418433892, 0);
  sqcRYGate(q, 1.2186704875573264, 1);
  sqcRYGate(q, 2.417067930504106, 2);
  sqcRYGate(q, -2.6526519255938728, 3);
  sqcRYGate(q, 1.6307630291683566, 4);
  sqcRYGate(q, -1.7874837941080335, 5);
  sqcRYGate(q, -0.9159495863155421, 6);
  sqcRYGate(q, 2.070937196816854, 7);

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
