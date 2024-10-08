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

  sqcRYGate(q, 2.201925427518284, 0);
  sqcRYGate(q, 1.5009228445022895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9574914150257898, 0);
  sqcRYGate(q, -2.1502022778412195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.040407858199616, 1);
  sqcRYGate(q, 1.5018837248514334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2288092551664445, 1);
  sqcRYGate(q, -3.0653527850507527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.004161715531784, 2);
  sqcRYGate(q, -2.7746414906352506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1407687292774327, 2);
  sqcRYGate(q, -0.003784688731795503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.111999806641085, 3);
  sqcRYGate(q, 2.040840471559094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.098102139846171, 3);
  sqcRYGate(q, -0.8129331460255367, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3486149324648544, 4);
  sqcRYGate(q, -0.7926538281677158, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.056370730821485, 4);
  sqcRYGate(q, -3.04293648910958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9677118945124574, 5);
  sqcRYGate(q, -1.767813330435522, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.058210977725274844, 5);
  sqcRYGate(q, 0.014479020822750321, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.243147401393478, 6);
  sqcRYGate(q, 0.7879139671496672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08200247864168689, 6);
  sqcRYGate(q, -0.24693779016245157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3325791484022826, 0);
  sqcRYGate(q, 1.0415749276404291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8530347052666486, 0);
  sqcRYGate(q, -1.6206346827105094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8561377376502932, 1);
  sqcRYGate(q, -2.341560199785518, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8377003753424535, 1);
  sqcRYGate(q, 0.5224905449073639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6416291878028281, 2);
  sqcRYGate(q, 1.012543620018464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.647760053967778, 2);
  sqcRYGate(q, -0.9046519358742879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8248567085959309, 3);
  sqcRYGate(q, -2.966439978431595, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2404154398157363, 3);
  sqcRYGate(q, 3.1158602857102373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0694639542815567, 4);
  sqcRYGate(q, 0.7399873614061532, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.735826339042522, 4);
  sqcRYGate(q, -1.9891015448777836, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.261370002997741, 5);
  sqcRYGate(q, 1.3421126273615656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.118553646078652, 5);
  sqcRYGate(q, -3.1381632422741177, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.204556657351202, 6);
  sqcRYGate(q, -2.2377679478287207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.122508173335352, 6);
  sqcRYGate(q, 3.0662547039814334, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8421021339674892, 0);
  sqcRYGate(q, 1.9121929624646743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1279243473214238, 0);
  sqcRYGate(q, 1.5294657566105045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.056307241476806, 1);
  sqcRYGate(q, -0.8112188129909965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9366937407893703, 1);
  sqcRYGate(q, -2.9551412401834787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7283815351949132, 2);
  sqcRYGate(q, 1.1641095797948904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.119039135924726, 2);
  sqcRYGate(q, 3.0112684038515845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9636854387074978, 3);
  sqcRYGate(q, -1.5601783024247002, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7897092761354676, 3);
  sqcRYGate(q, 0.0002519176644464936, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.101662182987422, 4);
  sqcRYGate(q, -2.736291788314037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0025778614101445952, 4);
  sqcRYGate(q, -0.8035660401711979, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.878806463142952, 5);
  sqcRYGate(q, 1.6202914302805027, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.472487059104194, 5);
  sqcRYGate(q, 0.008317909718668212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.010520003517216, 6);
  sqcRYGate(q, -2.8236145077663752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4721072309866878, 6);
  sqcRYGate(q, 2.9963607839766784, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9104798226388171, 0);
  sqcRYGate(q, 0.13599216357812652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0680949699418023, 0);
  sqcRYGate(q, -2.132036729081917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3364509188638365, 1);
  sqcRYGate(q, 2.9093453935389926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.126403705029167, 1);
  sqcRYGate(q, 0.1885612814026203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2997174751920393, 2);
  sqcRYGate(q, 1.8081071152147448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3716550827681253, 2);
  sqcRYGate(q, -0.36054271313239106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.480060430892177, 3);
  sqcRYGate(q, 1.9707020284144292, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0005368290790235264, 3);
  sqcRYGate(q, -0.0003307754742642999, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7728585746069898, 4);
  sqcRYGate(q, -1.2451860087739364, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.00045735215017701216, 4);
  sqcRYGate(q, -2.8903585726080516, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5563924099635223, 5);
  sqcRYGate(q, 2.9003024238704223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2035268602323423, 5);
  sqcRYGate(q, 1.3059697763393574, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5535009052926267, 6);
  sqcRYGate(q, 2.552197878332496, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1408500452048838, 6);
  sqcRYGate(q, -0.0007652858338521103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3693351190427165, 0);
  sqcRYGate(q, -0.7878112263587352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8215656990420328, 0);
  sqcRYGate(q, 2.1357838157152313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.066293683921695, 1);
  sqcRYGate(q, 0.09040667515898798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5316447057660154, 1);
  sqcRYGate(q, -2.1054156362869705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.381270059775403, 2);
  sqcRYGate(q, 2.0362076865756444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0196249022557358, 2);
  sqcRYGate(q, 3.051775656538095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1432677727768399, 3);
  sqcRYGate(q, -0.7582441588048443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1229215181692842, 3);
  sqcRYGate(q, 0.8943199423445827, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2317290283578224, 4);
  sqcRYGate(q, -1.543448688464034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.233404531240252, 4);
  sqcRYGate(q, -0.056469584738940704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4730385105309685, 5);
  sqcRYGate(q, -3.1273294065810084, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.605814183808385, 5);
  sqcRYGate(q, 1.4117867735555318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0857859369592981, 6);
  sqcRYGate(q, 1.5531842569587893, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1174261986677245, 6);
  sqcRYGate(q, 0.004492485963071488, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.36146037940112663, 0);
  sqcRYGate(q, 0.31948614779940687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4360243912729658, 0);
  sqcRYGate(q, -0.7517917095121813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.55983966069225, 1);
  sqcRYGate(q, -0.13807636544798818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3544739430758934, 1);
  sqcRYGate(q, 2.9565193649966757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4373935534580705, 2);
  sqcRYGate(q, -1.5650677155823374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8029860303275895, 2);
  sqcRYGate(q, 3.1412393676157344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8325734411794752, 3);
  sqcRYGate(q, 1.2297698328862499, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0185481219549337, 3);
  sqcRYGate(q, 1.6214744757351376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5574761231232503, 4);
  sqcRYGate(q, 0.1962716418422429, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7245192552613915, 4);
  sqcRYGate(q, 3.136762753880088, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1011793913846493, 5);
  sqcRYGate(q, 0.5587759318580342, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.577299309791143, 5);
  sqcRYGate(q, 2.1618422583708794, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.325283692251653, 6);
  sqcRYGate(q, -1.014881814450085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.971001434212421, 6);
  sqcRYGate(q, 2.0672622281767628, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8146205645810782, 0);
  sqcRYGate(q, 0.8276823515214117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5244052608779461, 0);
  sqcRYGate(q, 3.0240477683324465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1715133532238524, 1);
  sqcRYGate(q, 1.569892904681791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14749454295475406, 1);
  sqcRYGate(q, 0.7544889374093153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8259526382665935, 2);
  sqcRYGate(q, -0.00598186972178078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1400991223213603, 2);
  sqcRYGate(q, -3.1403758988484136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1043423307679643, 3);
  sqcRYGate(q, 1.5393890828845096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.117870817612665, 3);
  sqcRYGate(q, 0.16627934321300486, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3017395667930582, 4);
  sqcRYGate(q, 3.1120422352638633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.03385769935768046, 4);
  sqcRYGate(q, -0.12609603888501997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.494436102408668, 5);
  sqcRYGate(q, -1.5671522195459242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7036021337190848, 5);
  sqcRYGate(q, -3.137155325004329, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1247186503955149, 6);
  sqcRYGate(q, 1.334717362838373, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.407369486703752, 6);
  sqcRYGate(q, -2.1712087066836236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4730946062008075, 0);
  sqcRYGate(q, -2.7326855962431726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5993663214427203, 0);
  sqcRYGate(q, 0.2675149795563163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3394224699639934, 1);
  sqcRYGate(q, 0.45434908174572985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6699035863930106, 1);
  sqcRYGate(q, -2.105141384585915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04084393246395468, 2);
  sqcRYGate(q, 3.138722709982578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1350448929986676, 2);
  sqcRYGate(q, 0.006406011782932767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5787956177106937, 3);
  sqcRYGate(q, -0.8466836206738995, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1518381740964232, 3);
  sqcRYGate(q, 2.0073731643529853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5378376068880159, 4);
  sqcRYGate(q, -1.1514627188872593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.777189247160386, 4);
  sqcRYGate(q, 3.086366853631787, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.702086821175264, 5);
  sqcRYGate(q, -2.8041444641179294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1318567147472285, 5);
  sqcRYGate(q, 3.1379181158387115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7817134790192264, 6);
  sqcRYGate(q, 2.856408053412142, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6729461299962924, 6);
  sqcRYGate(q, 0.20520825736301251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0670356266893077, 0);
  sqcRYGate(q, -1.8329878951136145, 1);
  sqcRYGate(q, -1.9226364469303947, 2);
  sqcRYGate(q, -3.130011328827977, 3);
  sqcRYGate(q, -1.6069007691354242, 4);
  sqcRYGate(q, 0.7648367326598713, 5);
  sqcRYGate(q, -1.9558721311113718, 6);
  sqcRYGate(q, -1.3048920779238717, 7);

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
