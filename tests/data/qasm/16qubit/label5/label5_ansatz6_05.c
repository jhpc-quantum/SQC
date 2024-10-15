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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -3.019312950941925, 0);
  sqcRYGate(q, -2.522116705370041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6449308102102318, 0);
  sqcRYGate(q, 0.25878385555487604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5068562578933853, 1);
  sqcRYGate(q, -1.8503440353544782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.204780213192732, 1);
  sqcRYGate(q, 2.266746170068494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.49538715256026694, 2);
  sqcRYGate(q, -2.4095149590342917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.590850771453672, 2);
  sqcRYGate(q, 0.5826658618149392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.077713727000678, 3);
  sqcRYGate(q, 1.6743826257220942, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0218548730686776, 3);
  sqcRYGate(q, 2.1761572781787777, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.034195586413233, 4);
  sqcRYGate(q, 2.3209183031116325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.64371778996871, 4);
  sqcRYGate(q, 3.1396386615706255, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6324155654272294, 5);
  sqcRYGate(q, -2.174748270085088, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2551186840173298, 5);
  sqcRYGate(q, 2.4043386569770564, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.441859560545545, 6);
  sqcRYGate(q, -1.5895865523068897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2758853182252663, 6);
  sqcRYGate(q, -3.120154068408346, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3320982216228106, 7);
  sqcRYGate(q, -0.022038885345154746, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.573541592404124, 7);
  sqcRYGate(q, -0.01924605087495213, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.16237642548374, 8);
  sqcRYGate(q, -1.1889698727459952, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.517670784127305, 8);
  sqcRYGate(q, -3.1404888756054574, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.945793713633669, 9);
  sqcRYGate(q, 2.3361030030598187, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0928325857121983, 9);
  sqcRYGate(q, -1.5516755124395978, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6516480541752037, 10);
  sqcRYGate(q, -1.5982480295163475, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8831615090823184, 10);
  sqcRYGate(q, -0.00316417083481898, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6693245273290848, 11);
  sqcRYGate(q, -2.2541240445543895, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6817439611465179, 11);
  sqcRYGate(q, -0.13635963283460564, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.7239186810909137, 12);
  sqcRYGate(q, -0.6936428403297752, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8227650628275982, 12);
  sqcRYGate(q, -1.031568208616914, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.55614116937197, 13);
  sqcRYGate(q, 3.058251854803522, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8414686768274011, 13);
  sqcRYGate(q, 1.8846193241937546, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6540682786899736, 14);
  sqcRYGate(q, 0.5835413353993086, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.018211774069989, 14);
  sqcRYGate(q, -1.5547925007460064, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.0360218739472895, 0);
  sqcRYGate(q, -0.96072464197424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2473209523747975, 0);
  sqcRYGate(q, -0.5222608565506102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6018415756871343, 1);
  sqcRYGate(q, 1.075733024814614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1106468626127826, 1);
  sqcRYGate(q, 2.8671736519121, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15315382090494392, 2);
  sqcRYGate(q, -0.14236142864141466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4899854143947215, 2);
  sqcRYGate(q, -3.119908754930277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8820374749460447, 3);
  sqcRYGate(q, 1.4658384689415849, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04488654138882258, 3);
  sqcRYGate(q, -1.9779911728816255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4646779334239084, 4);
  sqcRYGate(q, 1.7936920262779905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0442690331442943, 4);
  sqcRYGate(q, 3.0787618620846233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1852142653967532, 5);
  sqcRYGate(q, 1.9478928936680537, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.30718102836370076, 5);
  sqcRYGate(q, -0.1316577630938749, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.077209460787317, 6);
  sqcRYGate(q, 2.706873211850738, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.578668710770697, 6);
  sqcRYGate(q, -1.5771750343596471, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.587971290823217, 7);
  sqcRYGate(q, -0.9722156070918819, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5593255172245053, 7);
  sqcRYGate(q, 1.6895114166716325, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.559203200079922, 8);
  sqcRYGate(q, -0.912108866652783, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3597452258501894, 8);
  sqcRYGate(q, 1.5675179253819627, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.23477110285364353, 9);
  sqcRYGate(q, 0.43062268370488965, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2029432802133284, 9);
  sqcRYGate(q, -1.2636204143509706, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8743509251991917, 10);
  sqcRYGate(q, 0.24193797739189193, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.033857001269816674, 10);
  sqcRYGate(q, -0.005421608027060836, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.10113566166486976, 11);
  sqcRYGate(q, 0.03545853182161886, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.80378987216354, 11);
  sqcRYGate(q, 1.81591110334434, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.0374821820997213, 12);
  sqcRYGate(q, 0.6835231375284551, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4663819017652653, 12);
  sqcRYGate(q, -1.3148008303210843, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9188020575855805, 13);
  sqcRYGate(q, -1.7752538251213281, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.9359277151876224, 13);
  sqcRYGate(q, -1.5796851991535776, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.728839690137975, 14);
  sqcRYGate(q, 1.080183563835658, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9246275724954397, 14);
  sqcRYGate(q, -2.8074500206085347, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.48859594618004615, 0);
  sqcRYGate(q, 0.43903178256990455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15923750325771113, 0);
  sqcRYGate(q, -2.5046810121149683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2494508783551836, 1);
  sqcRYGate(q, -1.146126345726275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.227931787826507, 1);
  sqcRYGate(q, -1.5392604388434732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1922380766515395, 2);
  sqcRYGate(q, 1.670996330035424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1269753069337076, 2);
  sqcRYGate(q, 0.007553555384464339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1216159634872815, 3);
  sqcRYGate(q, 0.7045524001141761, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.108268619885082, 3);
  sqcRYGate(q, 1.1761610985962103, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4265447035383136, 4);
  sqcRYGate(q, -2.4076787508446333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.236194055251815, 4);
  sqcRYGate(q, 1.5629857227554602, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6805794566670054, 5);
  sqcRYGate(q, -1.4388243204785789, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3178377229312641, 5);
  sqcRYGate(q, 1.5004659702757408, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8444808509211228, 6);
  sqcRYGate(q, 1.6831152107166654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0085743444456448, 6);
  sqcRYGate(q, 1.5422836488431184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5506400085787744, 7);
  sqcRYGate(q, 2.2923057575303307, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.072980825701262, 7);
  sqcRYGate(q, -3.078391754999631, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.140718893058152, 8);
  sqcRYGate(q, 1.836741580254652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.116639757183436, 8);
  sqcRYGate(q, 0.0017664975334670072, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.49869288358542807, 9);
  sqcRYGate(q, 2.8633416370818363, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.915775225517727, 9);
  sqcRYGate(q, -0.4347039590119839, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.0477197211453135, 10);
  sqcRYGate(q, -1.8987512190262574, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5235770574563114, 10);
  sqcRYGate(q, -1.8690522005825114, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.58253709649159, 11);
  sqcRYGate(q, 1.7995907070133237, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1338587187903806, 11);
  sqcRYGate(q, -1.7142781705260715, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.1326626383124299, 12);
  sqcRYGate(q, -1.183940335149298, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6036646706785209, 12);
  sqcRYGate(q, 2.561935059452795, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2163726300062263, 13);
  sqcRYGate(q, -2.2518620955927116, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.988610069322583, 13);
  sqcRYGate(q, 1.5085543466408844, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1963591759080394, 14);
  sqcRYGate(q, -0.8949490697095497, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1426780265120025, 14);
  sqcRYGate(q, -1.1265101326218145, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0279593214631868, 0);
  sqcRYGate(q, 2.2959905024430753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0761278920252133, 0);
  sqcRYGate(q, 2.3268658631008647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7326351942553613, 1);
  sqcRYGate(q, 2.884673118615039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9797878027117077, 1);
  sqcRYGate(q, 0.24565582873052758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20613206122305172, 2);
  sqcRYGate(q, -1.9622520460721729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1206304380587584, 2);
  sqcRYGate(q, 0.004626960630273125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16213060147419484, 3);
  sqcRYGate(q, -2.2372847992845313, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.001872493821023899, 3);
  sqcRYGate(q, -2.24782746930207, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2367075630002455, 4);
  sqcRYGate(q, 1.5633682840690168, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3787413505352273, 4);
  sqcRYGate(q, 2.1060488456710464, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9630999343220936, 5);
  sqcRYGate(q, -1.5714684045687486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2847002797705755, 5);
  sqcRYGate(q, 3.0603662221560017, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8794029337968174, 6);
  sqcRYGate(q, 1.557092403932594, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8077409165864688, 6);
  sqcRYGate(q, 0.06768360740913658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5711068856107913, 7);
  sqcRYGate(q, 0.147017096909126, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5406340712600581, 7);
  sqcRYGate(q, -0.711035991167881, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.431334470187141, 8);
  sqcRYGate(q, 2.3833627294003583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5590508281139401, 8);
  sqcRYGate(q, 0.00258214885134162, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5714397621015532, 9);
  sqcRYGate(q, -1.5759945488566052, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2659206797910276, 9);
  sqcRYGate(q, -1.583542895385461, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5713331879857682, 10);
  sqcRYGate(q, 2.3392341213185057, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.00015398875320876508, 10);
  sqcRYGate(q, 2.587661991769759, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.335686189853034, 11);
  sqcRYGate(q, 1.2854981736203954, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.548182224978845, 11);
  sqcRYGate(q, 1.7180723850540909, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6087681954851205, 12);
  sqcRYGate(q, 0.8971759902160367, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5608257623060204, 12);
  sqcRYGate(q, -0.06435888736941994, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.514943791317643, 13);
  sqcRYGate(q, -3.020714789828335, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.02175166185419129, 13);
  sqcRYGate(q, -2.8236610882486084, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.5489115920353456, 14);
  sqcRYGate(q, -2.9377811076361375, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1899239115789184, 14);
  sqcRYGate(q, -0.6117411482448842, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0843238673865914, 0);
  sqcRYGate(q, 3.0415425452960716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3386119509580148, 0);
  sqcRYGate(q, -3.0191600045713534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.98144485376136, 1);
  sqcRYGate(q, 2.0109056579843605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.504296558858389, 1);
  sqcRYGate(q, -3.138472407699455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5227094652858755, 2);
  sqcRYGate(q, 1.6410012102459843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3289893565503883, 2);
  sqcRYGate(q, -3.130420425763129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0926984421290533, 3);
  sqcRYGate(q, -1.5920797337594537, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4408111505802053, 3);
  sqcRYGate(q, 1.5130406360759185, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6559601572871185, 4);
  sqcRYGate(q, -1.0767198833993408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6052092332153878, 4);
  sqcRYGate(q, -3.13565921213729, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.566969974137472, 5);
  sqcRYGate(q, 1.1290943540000313, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1392715951893506, 5);
  sqcRYGate(q, 1.6494575191108762, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6016913425290886, 6);
  sqcRYGate(q, 1.5680720834939157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5368945879832658, 6);
  sqcRYGate(q, 2.1118386226970407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5707601198412078, 7);
  sqcRYGate(q, -0.7110859821950358, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.575052978495658, 7);
  sqcRYGate(q, -2.057758701355863, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8892332870214523, 8);
  sqcRYGate(q, -1.570828589684705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8912606872057227, 8);
  sqcRYGate(q, -1.5515350641379955, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7592296121917661, 9);
  sqcRYGate(q, 1.5748773028106944, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9866703257409366, 9);
  sqcRYGate(q, -3.135244917858398, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.496498172078592, 10);
  sqcRYGate(q, 0.722732195828204, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.137326564793041, 10);
  sqcRYGate(q, 0.23537271160189585, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9549269025690457, 11);
  sqcRYGate(q, 2.512613359379657, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.11811765333901621, 11);
  sqcRYGate(q, 3.1390914502351936, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4435348640271197, 12);
  sqcRYGate(q, -2.56392946286166, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9925005286471996, 12);
  sqcRYGate(q, 2.0944893396531015, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.39779083419560224, 13);
  sqcRYGate(q, 2.0383320602695005, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5654531838357357, 13);
  sqcRYGate(q, -2.4532260832976247, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6468272101647023, 14);
  sqcRYGate(q, -0.30894763081054677, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.42273083618396784, 14);
  sqcRYGate(q, 2.3017625858679307, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4868917738156717, 0);
  sqcRYGate(q, 0.9109671095932912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.607043564841067, 0);
  sqcRYGate(q, -2.023465669029337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.045761082564659133, 1);
  sqcRYGate(q, -0.48607387581314043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6656754147732835, 1);
  sqcRYGate(q, -1.4917022125900787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5208227831450036, 2);
  sqcRYGate(q, -1.0507468399361866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0692957440386652, 2);
  sqcRYGate(q, -3.082030970602552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0590212204869704, 3);
  sqcRYGate(q, -1.6685692010964346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1954455929741474, 3);
  sqcRYGate(q, -1.4995170063742576, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8070219003465543, 4);
  sqcRYGate(q, -1.64315730985484, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7255553512682353, 4);
  sqcRYGate(q, -3.141386492081012, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7370602013978909, 5);
  sqcRYGate(q, -1.5716915698853853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5681018190396054, 5);
  sqcRYGate(q, -3.1229678143829007, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.572644279190011, 6);
  sqcRYGate(q, 0.07410818501067905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5786270070041108, 6);
  sqcRYGate(q, 2.259626970845227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1357528743450716, 7);
  sqcRYGate(q, -0.008250954781488178, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0452990116499152, 7);
  sqcRYGate(q, 3.0077731565142027, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5790765991419355, 8);
  sqcRYGate(q, -0.7600686442914995, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.42726547919609115, 8);
  sqcRYGate(q, 1.8220481937040613, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6240679291158553, 9);
  sqcRYGate(q, 2.5260702635155106, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.13681838649860903, 9);
  sqcRYGate(q, 2.1295787750181168, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.012506894911385125, 10);
  sqcRYGate(q, -0.33843513566917677, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5575474764731232, 10);
  sqcRYGate(q, -2.798999154202757, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.07796096774429, 11);
  sqcRYGate(q, 1.6272808938730026, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5637517600538007, 11);
  sqcRYGate(q, 0.00033386631352582855, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9080941711664776, 12);
  sqcRYGate(q, -0.03792662943403433, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.564527490038458, 12);
  sqcRYGate(q, 1.9457112550252376, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.15031868851009048, 13);
  sqcRYGate(q, -0.7111352082399485, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.135488456494972, 13);
  sqcRYGate(q, 3.1367250093082086, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7168677124242118, 14);
  sqcRYGate(q, 2.253250514111003, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.4340037308330502, 14);
  sqcRYGate(q, -2.4192330432274147, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4837647565307119, 0);
  sqcRYGate(q, -2.868935186775047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4157850830044794, 0);
  sqcRYGate(q, -3.0994145898139185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.029268799501599, 1);
  sqcRYGate(q, -1.5329880463406393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6028672236656762, 1);
  sqcRYGate(q, -1.4661242904536946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5120704090305193, 2);
  sqcRYGate(q, 3.1264540267053555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5616655631945022, 2);
  sqcRYGate(q, -2.0139945433507314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.908036943599603, 3);
  sqcRYGate(q, 0.804675795870347, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5764103024019747, 3);
  sqcRYGate(q, 3.140437689424696, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.234825482122223, 4);
  sqcRYGate(q, -1.7083105254999351, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8211361589224286, 4);
  sqcRYGate(q, -3.1400652652822303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.933177689711946, 5);
  sqcRYGate(q, -3.1119678390181336, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.093182792470555, 5);
  sqcRYGate(q, -3.1369650915291225, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5496675825032016, 6);
  sqcRYGate(q, -1.5736663547172043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6437333327115393, 6);
  sqcRYGate(q, -0.004054566751055867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0099827772194114, 7);
  sqcRYGate(q, 3.1224344044761128, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5731869899423856, 7);
  sqcRYGate(q, 0.04259120279654592, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3629395357586809, 8);
  sqcRYGate(q, 1.6670536359931276, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5779415581635472, 8);
  sqcRYGate(q, -3.1396507729173577, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.572467764898577, 9);
  sqcRYGate(q, -3.0551841847215657, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1374510079862863, 9);
  sqcRYGate(q, 2.5569231542667685, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.539619221302341, 10);
  sqcRYGate(q, -1.0811687035689355, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.940439770187379, 10);
  sqcRYGate(q, -1.586041644734782, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4461619330712803, 11);
  sqcRYGate(q, -1.6065462756530042, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1353503587299607, 11);
  sqcRYGate(q, 3.1376255984479005, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.2850017792687645, 12);
  sqcRYGate(q, -1.621222616599449, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6363231724325047, 12);
  sqcRYGate(q, -0.6368702177923976, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9967657018317306, 13);
  sqcRYGate(q, 1.2745128684184135, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.0058677708257560725, 13);
  sqcRYGate(q, -2.1754032671095263, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3370909632038019, 14);
  sqcRYGate(q, 3.00145464200241, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.2345335770612587, 14);
  sqcRYGate(q, -3.0378248235592955, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.4380745772393433, 0);
  sqcRYGate(q, -1.5522830420093259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.529648761585361, 0);
  sqcRYGate(q, -1.9771114821713391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2618329302147463, 1);
  sqcRYGate(q, 2.341985139667464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.140417746395035, 1);
  sqcRYGate(q, 3.1383566481861536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9494398352629996, 2);
  sqcRYGate(q, 0.23163189466593434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9211917090143301, 2);
  sqcRYGate(q, -1.9564381634590648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.570422933009847, 3);
  sqcRYGate(q, -0.9067413105401342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5803089957905854, 3);
  sqcRYGate(q, 1.6395007782993138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5984789984258616, 4);
  sqcRYGate(q, 1.970222896364108, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.139490378903722, 4);
  sqcRYGate(q, 3.1413765765997668, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5317875984295526, 5);
  sqcRYGate(q, -2.138827824164755, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.008562557507070245, 5);
  sqcRYGate(q, 1.5818117190254684, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.563763050571489, 6);
  sqcRYGate(q, -0.5681095893689184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5698243933361709, 6);
  sqcRYGate(q, 3.133877442855715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5726100556640374, 7);
  sqcRYGate(q, -2.358255449849431, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1405868421968153, 7);
  sqcRYGate(q, -1.5938152585701235, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.557899463484063, 8);
  sqcRYGate(q, 0.12421148891982155, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07949628632433381, 8);
  sqcRYGate(q, -1.5679206040892215, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0161221444474413, 9);
  sqcRYGate(q, -1.283323821816535, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5729315744448469, 9);
  sqcRYGate(q, -1.5706665747839414, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5395786511345015, 10);
  sqcRYGate(q, -0.6964907573584841, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.602964825800127, 10);
  sqcRYGate(q, 3.0747738470287618, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5686148676978044, 11);
  sqcRYGate(q, 1.0301859653376808, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5778817248775996, 11);
  sqcRYGate(q, -2.601580376276733, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5706940287976274, 12);
  sqcRYGate(q, 2.750215022214619, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.0006723508864960759, 12);
  sqcRYGate(q, 1.5524963315085571, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.3427461755748937, 13);
  sqcRYGate(q, -3.010310346521553, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5659290726049182, 13);
  sqcRYGate(q, 3.141002392150419, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.5879968526461083, 14);
  sqcRYGate(q, -1.9474026645609832, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5538800051756443, 14);
  sqcRYGate(q, -3.140317910294449, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5838967536850268, 0);
  sqcRYGate(q, -2.8598409554345743, 1);
  sqcRYGate(q, -2.9206377755924615, 2);
  sqcRYGate(q, 1.5705005366736078, 3);
  sqcRYGate(q, -2.5952910162972063, 4);
  sqcRYGate(q, 1.5699995083285923, 5);
  sqcRYGate(q, 1.5303509367846149, 6);
  sqcRYGate(q, 1.5708971112216035, 7);
  sqcRYGate(q, 1.5706209713849997, 8);
  sqcRYGate(q, 1.570532549644465, 9);
  sqcRYGate(q, 1.5999378934534, 10);
  sqcRYGate(q, -1.5729995405749335, 11);
  sqcRYGate(q, -1.5701043419426668, 12);
  sqcRYGate(q, 0.3820779410105799, 13);
  sqcRYGate(q, -2.5878816904355206, 14);
  sqcRYGate(q, -1.5812022786292195, 15);

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
