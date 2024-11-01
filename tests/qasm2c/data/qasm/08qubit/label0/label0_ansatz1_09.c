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

  sqcRYGate(q, 1.61196226873963, 0);
  sqcRZGate(q, 0.6089637008734117, 0);
  sqcRYGate(q, -0.39788780364593, 1);
  sqcRZGate(q, 2.0964010797868298, 1);
  sqcRYGate(q, -2.685436707626894, 2);
  sqcRZGate(q, 2.0048906088097422, 2);
  sqcRYGate(q, 2.713262276323112, 3);
  sqcRZGate(q, 0.24625514069916035, 3);
  sqcRYGate(q, 3.1375649956588822, 4);
  sqcRZGate(q, -3.0808602716273774, 4);
  sqcRYGate(q, 0.4544850670573055, 5);
  sqcRZGate(q, -2.5922135776068185, 5);
  sqcRYGate(q, 3.0889114267461397, 6);
  sqcRZGate(q, 1.7954944874783845, 6);
  sqcRYGate(q, 2.5071332794587122, 7);
  sqcRZGate(q, -0.059655745525548205, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7153748096090267, 0);
  sqcRZGate(q, 2.1965504979191692, 0);
  sqcRYGate(q, 0.013300870688598644, 1);
  sqcRZGate(q, -1.0831494662982915, 1);
  sqcRYGate(q, -2.6216741102819645, 2);
  sqcRZGate(q, -0.2977892667676634, 2);
  sqcRYGate(q, 0.20752548118233793, 3);
  sqcRZGate(q, -0.813855607415277, 3);
  sqcRYGate(q, 2.758030755244508, 4);
  sqcRZGate(q, -2.6203092198044, 4);
  sqcRYGate(q, -2.59329587352025, 5);
  sqcRZGate(q, 2.3691067543407005, 5);
  sqcRYGate(q, -0.12458748344792264, 6);
  sqcRZGate(q, 1.225911203285956, 6);
  sqcRYGate(q, -0.075325265531073, 7);
  sqcRZGate(q, -0.3129092927592741, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.10911219320031428, 0);
  sqcRZGate(q, 1.8441432856749893, 0);
  sqcRYGate(q, -2.698090467577446, 1);
  sqcRZGate(q, 0.2328630876510444, 1);
  sqcRYGate(q, 1.205283468982964, 2);
  sqcRZGate(q, -1.5657010208050819, 2);
  sqcRYGate(q, 0.01157487866222251, 3);
  sqcRZGate(q, -1.1998525374240314, 3);
  sqcRYGate(q, 1.9120951259682872, 4);
  sqcRZGate(q, 0.36979810459742307, 4);
  sqcRYGate(q, -3.1249201115713343, 5);
  sqcRZGate(q, 1.0652470709136992, 5);
  sqcRYGate(q, 1.5571773525697639, 6);
  sqcRZGate(q, 1.0174540314314842, 6);
  sqcRYGate(q, -2.81362838781308, 7);
  sqcRZGate(q, 1.5347950740113996, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3828922845686553, 0);
  sqcRZGate(q, 2.399205984033131, 0);
  sqcRYGate(q, -0.0005182586541829793, 1);
  sqcRZGate(q, 2.5434009952283487, 1);
  sqcRYGate(q, 1.4416175793998878, 2);
  sqcRZGate(q, -1.7837037340916853, 2);
  sqcRYGate(q, -0.0007743587587860645, 3);
  sqcRZGate(q, 0.43844547877804363, 3);
  sqcRYGate(q, 0.36922173227718735, 4);
  sqcRZGate(q, -0.9647244724209961, 4);
  sqcRYGate(q, 0.002093531323484144, 5);
  sqcRZGate(q, -2.796953336887028, 5);
  sqcRYGate(q, 0.6711304202734683, 6);
  sqcRZGate(q, -0.9593062627087707, 6);
  sqcRYGate(q, 2.0989324974766985, 7);
  sqcRZGate(q, 1.714714980884431, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6137556206912533, 0);
  sqcRZGate(q, -2.5843504809880904, 0);
  sqcRYGate(q, 0.8461060817743071, 1);
  sqcRZGate(q, -1.0239761022792058, 1);
  sqcRYGate(q, -2.2625234222472645, 2);
  sqcRZGate(q, 2.3092870501389187, 2);
  sqcRYGate(q, -1.2474607885549072, 3);
  sqcRZGate(q, -0.21551303614496023, 3);
  sqcRYGate(q, -2.659811373288827, 4);
  sqcRZGate(q, 2.830637640358563, 4);
  sqcRYGate(q, 3.1314110405003013, 5);
  sqcRZGate(q, 2.7021305534264255, 5);
  sqcRYGate(q, -2.9294733259924834, 6);
  sqcRZGate(q, 2.0442868537127223, 6);
  sqcRYGate(q, -2.5990776125469104, 7);
  sqcRZGate(q, 1.6724128424982094, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9456682092723554, 0);
  sqcRZGate(q, 0.450305188911158, 0);
  sqcRYGate(q, -3.0192458691135347, 1);
  sqcRZGate(q, 2.631875412884134, 1);
  sqcRYGate(q, -3.0464246088653404, 2);
  sqcRZGate(q, 1.8668260983489833, 2);
  sqcRYGate(q, 3.139100526206389, 3);
  sqcRZGate(q, 0.00502742750905669, 3);
  sqcRYGate(q, 3.1412817919406852, 4);
  sqcRZGate(q, 0.31674035229473585, 4);
  sqcRYGate(q, 0.6617579644625513, 5);
  sqcRZGate(q, -2.7662879584797704, 5);
  sqcRYGate(q, -0.8157754885201682, 6);
  sqcRZGate(q, -1.2995034189064252, 6);
  sqcRYGate(q, -1.0344535507368935, 7);
  sqcRZGate(q, 0.9627888653751776, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.05254505254288751, 0);
  sqcRZGate(q, 0.09056125477294968, 0);
  sqcRYGate(q, 3.064457520169957, 1);
  sqcRZGate(q, -0.1313710466212905, 1);
  sqcRYGate(q, 2.4981626767616265, 2);
  sqcRZGate(q, 3.093141336282894, 2);
  sqcRYGate(q, -2.21064434940456, 3);
  sqcRZGate(q, -2.0916422445541487, 3);
  sqcRYGate(q, -2.913274387883723, 4);
  sqcRZGate(q, 3.0497838959400223, 4);
  sqcRYGate(q, 0.001641598500493835, 5);
  sqcRZGate(q, 2.7652425962619493, 5);
  sqcRYGate(q, 0.5744162585099699, 6);
  sqcRZGate(q, -2.6199275064293706, 6);
  sqcRYGate(q, 1.9518405469538431, 7);
  sqcRZGate(q, -2.3814410177961802, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6832088080336765, 0);
  sqcRZGate(q, 1.1287016021801737, 0);
  sqcRYGate(q, 3.080360376097242, 1);
  sqcRZGate(q, -0.418005277746688, 1);
  sqcRYGate(q, -0.7863545835503689, 2);
  sqcRZGate(q, -1.233942007348328, 2);
  sqcRYGate(q, -0.001024044088222098, 3);
  sqcRZGate(q, 2.7356115359861666, 3);
  sqcRYGate(q, 3.14004399004176, 4);
  sqcRZGate(q, 2.9189842874876097, 4);
  sqcRYGate(q, -2.4894052642400233, 5);
  sqcRZGate(q, -0.24723005779493515, 5);
  sqcRYGate(q, 0.05160450537348371, 6);
  sqcRZGate(q, -1.352258690610583, 6);
  sqcRYGate(q, 2.6699330028359136, 7);
  sqcRZGate(q, 1.8333422939270143, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6126893555049393, 0);
  sqcRZGate(q, 2.8070834424601845, 0);
  sqcRYGate(q, -0.010759480169356654, 1);
  sqcRZGate(q, 0.27638375140559024, 1);
  sqcRYGate(q, -2.940099022138898, 2);
  sqcRZGate(q, 1.6179140116462545, 2);
  sqcRYGate(q, 1.2597824872291605, 3);
  sqcRZGate(q, 2.55726810769626, 3);
  sqcRYGate(q, 0.9590612751032744, 4);
  sqcRZGate(q, 1.3784056124660382, 4);
  sqcRYGate(q, -0.03284854877327653, 5);
  sqcRZGate(q, 0.23669466799213715, 5);
  sqcRYGate(q, 3.1361676963893546, 6);
  sqcRZGate(q, -1.7668741792496863, 6);
  sqcRYGate(q, 2.292166399655739, 7);
  sqcRZGate(q, 0.3438213891428194, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.145144541370322, 0);
  sqcRZGate(q, -0.7876841543193445, 0);
  sqcRYGate(q, 3.1232761488174092, 1);
  sqcRZGate(q, 0.9918337824328305, 1);
  sqcRYGate(q, -0.3204972828105568, 2);
  sqcRZGate(q, -0.8634117238007981, 2);
  sqcRYGate(q, 0.0021295674116252883, 3);
  sqcRZGate(q, 2.7150133882756298, 3);
  sqcRYGate(q, 1.5615625776472462, 4);
  sqcRZGate(q, -0.7879685098814285, 4);
  sqcRYGate(q, 2.9769017467502907, 5);
  sqcRZGate(q, 0.19046302852014813, 5);
  sqcRYGate(q, 0.02231738598630351, 6);
  sqcRZGate(q, 0.593498381516108, 6);
  sqcRYGate(q, 2.336031746493133, 7);
  sqcRZGate(q, 2.183128266598035, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7717248705108251, 0);
  sqcRZGate(q, 2.002415987474813, 0);
  sqcRYGate(q, -0.609003515420453, 1);
  sqcRZGate(q, 2.0834061523296503, 1);
  sqcRYGate(q, 0.09762398990007472, 2);
  sqcRZGate(q, -2.9151434058081667, 2);
  sqcRYGate(q, 0.031212297320319906, 3);
  sqcRZGate(q, -2.067075948257384, 3);
  sqcRYGate(q, -0.8800956637533153, 4);
  sqcRZGate(q, 0.8377015985895673, 4);
  sqcRYGate(q, 1.5690966042538868, 5);
  sqcRZGate(q, -0.654570149515683, 5);
  sqcRYGate(q, 1.0089196607926123, 6);
  sqcRZGate(q, 3.039698537441172, 6);
  sqcRYGate(q, 1.1653613396937859, 7);
  sqcRZGate(q, 0.265168318983715, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3140144287736841, 0);
  sqcRZGate(q, -0.5534593815543217, 0);
  sqcRYGate(q, 0.049272634452507624, 1);
  sqcRZGate(q, 3.1257284048091916, 1);
  sqcRYGate(q, -0.034105445089011255, 2);
  sqcRZGate(q, -0.8613302475256283, 2);
  sqcRYGate(q, -0.0011710010901984091, 3);
  sqcRZGate(q, -0.3306456508673564, 3);
  sqcRYGate(q, 0.0001298758084704588, 4);
  sqcRZGate(q, -0.8647683287650062, 4);
  sqcRYGate(q, 3.141585707601222, 5);
  sqcRZGate(q, 2.7198277374886146, 5);
  sqcRYGate(q, 1.571403554154796, 6);
  sqcRZGate(q, -2.7071278411583335, 6);
  sqcRYGate(q, -0.38730629769323394, 7);
  sqcRZGate(q, -2.6142310635777277, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.015137549425282337, 0);
  sqcRZGate(q, 2.0539590985902443, 0);
  sqcRYGate(q, 2.9066910471103418, 1);
  sqcRZGate(q, 1.008077698609493, 1);
  sqcRYGate(q, 0.9293199092249579, 2);
  sqcRZGate(q, -2.3132838429218614, 2);
  sqcRYGate(q, -3.054952607652758, 3);
  sqcRZGate(q, -1.804684116990396, 3);
  sqcRYGate(q, -0.8649040218897799, 4);
  sqcRZGate(q, -0.7696032719953028, 4);
  sqcRYGate(q, -0.0006654650878921456, 5);
  sqcRZGate(q, -1.8034884202317385, 5);
  sqcRYGate(q, 3.1404741246453907, 6);
  sqcRZGate(q, -1.1367990899476228, 6);
  sqcRYGate(q, -1.5705795121836221, 7);
  sqcRZGate(q, -2.2476429106355056e-05, 7);

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
