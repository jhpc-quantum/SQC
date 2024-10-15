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

  sqcRYGate(q, -0.411217265754245, 0);
  sqcRZGate(q, -2.389722849425507, 0);
  sqcRYGate(q, 0.20094047199638343, 1);
  sqcRZGate(q, 2.894098954408771, 1);
  sqcRYGate(q, 3.141553567483331, 2);
  sqcRZGate(q, 1.4575965928204762, 2);
  sqcRYGate(q, -3.402292151299946e-05, 3);
  sqcRZGate(q, 0.41389728476376675, 3);
  sqcRYGate(q, -1.5938560775582966, 4);
  sqcRZGate(q, -1.5799462479949122, 4);
  sqcRYGate(q, 1.5251244373251578, 5);
  sqcRZGate(q, 1.5809605462951524, 5);
  sqcRYGate(q, -1.5068297086576719, 6);
  sqcRZGate(q, 0.002511477970734802, 6);
  sqcRYGate(q, 1.5698900388330785, 7);
  sqcRZGate(q, -2.868993643666263, 7);
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
  sqcRYGate(q, 0.12764327193058042, 0);
  sqcRZGate(q, 2.9299613380999316, 0);
  sqcRYGate(q, -2.7136814813314256, 1);
  sqcRZGate(q, -2.459002723435624, 1);
  sqcRYGate(q, 3.1414543967717767, 2);
  sqcRZGate(q, 2.519968578335282, 2);
  sqcRYGate(q, 3.136753281624286, 3);
  sqcRZGate(q, 1.3285580153960903, 3);
  sqcRYGate(q, -1.5617509623303043, 4);
  sqcRZGate(q, 2.530464121622052, 4);
  sqcRYGate(q, -1.6286464631078508, 5);
  sqcRZGate(q, -1.367667426755858, 5);
  sqcRYGate(q, 1.315805430568449, 6);
  sqcRZGate(q, -2.68590697798473, 6);
  sqcRYGate(q, 0.002555177419972132, 7);
  sqcRZGate(q, -1.841718063382881, 7);
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
  sqcRYGate(q, 1.314767673557125, 0);
  sqcRZGate(q, -3.1409757699443537, 0);
  sqcRYGate(q, -1.9811241228539007, 1);
  sqcRZGate(q, -2.8930637597620823, 1);
  sqcRYGate(q, 3.1414410413310194, 2);
  sqcRZGate(q, 1.0281304959409976, 2);
  sqcRYGate(q, 3.140125763545188, 3);
  sqcRZGate(q, -1.6866979890300378, 3);
  sqcRYGate(q, 1.6103819084991127, 4);
  sqcRZGate(q, 2.5896035907512793, 4);
  sqcRYGate(q, 1.5782289344921925, 5);
  sqcRZGate(q, 0.8410591140073391, 5);
  sqcRYGate(q, 0.0010370897479097252, 6);
  sqcRZGate(q, 0.533558681137012, 6);
  sqcRYGate(q, 1.5741537701046218, 7);
  sqcRZGate(q, 1.4279716996390086, 7);
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
  sqcRYGate(q, -2.245465821176463, 0);
  sqcRZGate(q, -0.5752685001913751, 0);
  sqcRYGate(q, 0.5603749162685308, 1);
  sqcRZGate(q, 0.8407080796442212, 1);
  sqcRYGate(q, -0.009674521211969989, 2);
  sqcRZGate(q, 2.8176150874004633, 2);
  sqcRYGate(q, -1.518094585104247, 3);
  sqcRZGate(q, -1.6222552775520251, 3);
  sqcRYGate(q, -1.9535427113514812, 4);
  sqcRZGate(q, -1.602107188910342, 4);
  sqcRYGate(q, 2.513185236992888, 5);
  sqcRZGate(q, 2.5066172610266695, 5);
  sqcRYGate(q, 3.0196394733167895, 6);
  sqcRZGate(q, 0.48993631222292044, 6);
  sqcRYGate(q, 1.5728893971847753, 7);
  sqcRZGate(q, -0.2890007589413413, 7);
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
  sqcRYGate(q, -1.5459209338808284, 0);
  sqcRZGate(q, -0.738255914988529, 0);
  sqcRYGate(q, 1.599090669639697, 1);
  sqcRZGate(q, -1.0751073694943027, 1);
  sqcRYGate(q, 0.05645558223678382, 2);
  sqcRZGate(q, -2.9300311299669795, 2);
  sqcRYGate(q, 2.706600122477044, 3);
  sqcRZGate(q, -1.4549612523160929, 3);
  sqcRYGate(q, -0.7758248724146659, 4);
  sqcRZGate(q, 0.7065868123636289, 4);
  sqcRYGate(q, 0.8226568696726346, 5);
  sqcRZGate(q, -2.0602133469766084, 5);
  sqcRYGate(q, -2.125377968546519, 6);
  sqcRZGate(q, -2.2436233690685965, 6);
  sqcRYGate(q, 0.8141038065274682, 7);
  sqcRZGate(q, -0.9777537721680706, 7);
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
  sqcRYGate(q, -3.0667799531981657, 0);
  sqcRZGate(q, -1.2794330829693978, 0);
  sqcRYGate(q, 0.11242467193248047, 1);
  sqcRZGate(q, 1.3079754358521691, 1);
  sqcRYGate(q, 1.5722033886451516, 2);
  sqcRZGate(q, 1.2356817910810394, 2);
  sqcRYGate(q, -3.04556716181211, 3);
  sqcRZGate(q, 3.0644547649058307, 3);
  sqcRYGate(q, 3.1410191503626415, 4);
  sqcRZGate(q, 0.7783642419964868, 4);
  sqcRYGate(q, 3.139908791561035, 5);
  sqcRZGate(q, -1.6482435804632156, 5);
  sqcRYGate(q, 1.560144933872509, 6);
  sqcRZGate(q, 3.0196430673752315, 6);
  sqcRYGate(q, -3.1154990770450945, 7);
  sqcRZGate(q, -0.07025731982889562, 7);
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
  sqcRYGate(q, -1.921079043766354, 0);
  sqcRZGate(q, -1.358380955819867, 0);
  sqcRYGate(q, -1.2874189198220867, 1);
  sqcRZGate(q, -1.0217310385666742, 1);
  sqcRYGate(q, -2.949285785775467, 2);
  sqcRZGate(q, 0.2547547763061724, 2);
  sqcRYGate(q, 1.5787255207496875, 3);
  sqcRZGate(q, -2.490076542358767, 3);
  sqcRYGate(q, -1.5093279379033815, 4);
  sqcRZGate(q, -3.1111702330551063, 4);
  sqcRYGate(q, 2.9420284649512336, 5);
  sqcRZGate(q, 2.4944247536948128, 5);
  sqcRYGate(q, 1.6436766416189794, 6);
  sqcRZGate(q, -1.3551467200562943, 6);
  sqcRYGate(q, 1.720544277816666, 7);
  sqcRZGate(q, 0.19606151353992995, 7);
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
  sqcRYGate(q, 2.010074928238397, 0);
  sqcRZGate(q, -1.1840310837477597, 0);
  sqcRYGate(q, -2.010175964868523, 1);
  sqcRZGate(q, -1.547931140137401, 1);
  sqcRYGate(q, 0.0047529456156288116, 2);
  sqcRZGate(q, 1.358981378359905, 2);
  sqcRYGate(q, 3.137970286965179, 3);
  sqcRZGate(q, -3.0314647168354374, 3);
  sqcRYGate(q, -3.1406549851188332, 4);
  sqcRZGate(q, 1.564802735677075, 4);
  sqcRYGate(q, -3.129699293965762, 5);
  sqcRZGate(q, -1.1879983031618169, 5);
  sqcRYGate(q, -1.5331491130719352, 6);
  sqcRZGate(q, -0.7097735827728602, 6);
  sqcRYGate(q, -1.5291415798764947, 7);
  sqcRZGate(q, -2.8379950420384694, 7);
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
  sqcRYGate(q, -2.576366000440437, 0);
  sqcRZGate(q, -1.3923827171795697, 0);
  sqcRYGate(q, 1.0975914758535061, 1);
  sqcRZGate(q, -1.4582052340547615, 1);
  sqcRYGate(q, 3.1415171486149562, 2);
  sqcRZGate(q, 1.615985145254176, 2);
  sqcRYGate(q, -3.140305334780459, 3);
  sqcRZGate(q, 1.0722350982168698, 3);
  sqcRYGate(q, -1.770747719131644, 4);
  sqcRZGate(q, 1.616599434065106, 4);
  sqcRYGate(q, -1.438537463887637, 5);
  sqcRZGate(q, -2.3271936044119985, 5);
  sqcRYGate(q, 3.1284846467215934, 6);
  sqcRZGate(q, 0.8596814040371149, 6);
  sqcRYGate(q, -0.6137087777918699, 7);
  sqcRZGate(q, 1.2058690075416383, 7);
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
  sqcRYGate(q, 0.8691648512762485, 0);
  sqcRZGate(q, -1.9790698909378595, 0);
  sqcRYGate(q, 1.6582019975305247, 1);
  sqcRZGate(q, -2.718113326282582, 1);
  sqcRYGate(q, 3.1414617269594736, 2);
  sqcRZGate(q, 1.5331507405117457, 2);
  sqcRYGate(q, -3.1414565115973647, 3);
  sqcRZGate(q, -1.2282098694743986, 3);
  sqcRYGate(q, 3.13989786826377, 4);
  sqcRZGate(q, -2.7254881751798696, 4);
  sqcRYGate(q, 3.140015916224726, 5);
  sqcRZGate(q, -2.1144836717983067, 5);
  sqcRYGate(q, 1.5728177991188388, 6);
  sqcRZGate(q, 0.4337501248417162, 6);
  sqcRYGate(q, -1.5726481746506569, 7);
  sqcRZGate(q, -1.7505905501691723, 7);
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
  sqcRYGate(q, -2.013155639938037, 0);
  sqcRZGate(q, -2.853847497218287, 0);
  sqcRYGate(q, 0.8936029373050284, 1);
  sqcRZGate(q, 1.5996968356371135, 1);
  sqcRYGate(q, -1.604679087152065, 2);
  sqcRZGate(q, 0.9356018984966665, 2);
  sqcRYGate(q, 1.6389466922942564, 3);
  sqcRZGate(q, -2.2407092334914367, 3);
  sqcRYGate(q, -1.555865465442957, 4);
  sqcRZGate(q, 1.2029740855582707, 4);
  sqcRYGate(q, -0.9779680663385591, 5);
  sqcRZGate(q, 2.308649516345732, 5);
  sqcRYGate(q, 3.046820489685142, 6);
  sqcRZGate(q, 1.4772208730228438, 6);
  sqcRYGate(q, 0.56572975374268, 7);
  sqcRZGate(q, 2.7493808302326084, 7);

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
