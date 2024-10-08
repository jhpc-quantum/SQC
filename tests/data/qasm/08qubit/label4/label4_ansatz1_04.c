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

  sqcRYGate(q, 0.4423938571189524, 0);
  sqcRZGate(q, -0.6750043368967749, 0);
  sqcRYGate(q, 3.141503427622858, 1);
  sqcRZGate(q, -1.8129636930425665, 1);
  sqcRYGate(q, -1.132251933812111, 2);
  sqcRZGate(q, 0.00010007455242178054, 2);
  sqcRYGate(q, -1.570862026951316, 3);
  sqcRZGate(q, 1.5707932821529282, 3);
  sqcRYGate(q, -2.7013328535300816, 4);
  sqcRZGate(q, -1.5707943354257805, 4);
  sqcRYGate(q, -1.5708158332162883, 5);
  sqcRZGate(q, 3.1377725440929494, 5);
  sqcRYGate(q, 1.5566797355631232, 6);
  sqcRZGate(q, 3.037167405317047, 6);
  sqcRYGate(q, 2.437445074932075, 7);
  sqcRZGate(q, 3.1401838115211125, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5354642787701223, 0);
  sqcRZGate(q, -2.054201013080295, 0);
  sqcRYGate(q, -1.5707961251304885, 1);
  sqcRZGate(q, 2.424154665247314, 1);
  sqcRYGate(q, -1.5708296146223564, 2);
  sqcRZGate(q, 1.596846148860089, 2);
  sqcRYGate(q, -1.57080351829171, 3);
  sqcRZGate(q, 1.5708101749090673, 3);
  sqcRYGate(q, 1.5707910237107026, 4);
  sqcRZGate(q, -2.609600032588261, 4);
  sqcRYGate(q, -2.936838695430653, 5);
  sqcRZGate(q, -2.7189822294997423, 5);
  sqcRYGate(q, 3.0900440116101247, 6);
  sqcRZGate(q, -3.1331262590289772, 6);
  sqcRYGate(q, -1.5827061625150227, 7);
  sqcRZGate(q, 1.6813216911739328, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5704667647372026, 0);
  sqcRZGate(q, 1.078442816585376, 0);
  sqcRYGate(q, -0.00035528508559057315, 1);
  sqcRZGate(q, -2.039341710147301, 1);
  sqcRYGate(q, 1.5707961928905934, 2);
  sqcRZGate(q, -1.6391125786136271, 2);
  sqcRYGate(q, 1.5762455370798045, 3);
  sqcRZGate(q, 3.1193216872127234, 3);
  sqcRYGate(q, -3.1372568311429156, 4);
  sqcRZGate(q, 2.0081239293004867, 4);
  sqcRYGate(q, 1.5707075513433457, 5);
  sqcRZGate(q, -1.5705804238688943, 5);
  sqcRYGate(q, 0.8790158643633276, 6);
  sqcRZGate(q, 0.402779108445638, 6);
  sqcRYGate(q, 1.2442980801468115, 7);
  sqcRZGate(q, 2.08426698845731, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6982964223739738, 0);
  sqcRZGate(q, -2.8790870660429206, 0);
  sqcRYGate(q, -3.1415853645966574, 1);
  sqcRZGate(q, 0.1464412730520268, 1);
  sqcRYGate(q, -2.0908607325509365e-06, 2);
  sqcRZGate(q, 2.088431479417146, 2);
  sqcRYGate(q, -1.5711024133353595, 3);
  sqcRZGate(q, -0.008459147539036121, 3);
  sqcRYGate(q, -0.0004791209256272413, 4);
  sqcRZGate(q, -3.0559097817568985, 4);
  sqcRYGate(q, -1.5708011640859976, 5);
  sqcRZGate(q, -1.261236375758842, 5);
  sqcRYGate(q, -2.4120825145381777e-05, 6);
  sqcRZGate(q, 1.1663080976461142, 6);
  sqcRYGate(q, 3.1409371574203293, 7);
  sqcRZGate(q, 1.7372467706880936, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8732175132265603, 0);
  sqcRZGate(q, -0.2615330816973867, 0);
  sqcRYGate(q, 0.054140499694551814, 1);
  sqcRZGate(q, -0.0022556353255924963, 1);
  sqcRYGate(q, -2.571808092522179e-05, 2);
  sqcRZGate(q, -0.4491316271127332, 2);
  sqcRYGate(q, -0.002446158737855517, 3);
  sqcRZGate(q, 2.5167630056195294, 3);
  sqcRYGate(q, -2.7149435410845584, 4);
  sqcRZGate(q, -2.2074515679131705, 4);
  sqcRYGate(q, -0.05921692870488079, 5);
  sqcRZGate(q, 1.1421406710748556, 5);
  sqcRYGate(q, -1.5708468622001954, 6);
  sqcRZGate(q, -1.1627778987197557, 6);
  sqcRYGate(q, -1.4074439249950332, 7);
  sqcRZGate(q, 1.8222122524321656, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5768750962280107, 0);
  sqcRZGate(q, -1.0637792460207807, 0);
  sqcRYGate(q, -1.7582051614273797, 1);
  sqcRZGate(q, -3.14159071062895, 1);
  sqcRYGate(q, 1.570793712920026, 2);
  sqcRZGate(q, -1.5707940881870122, 2);
  sqcRYGate(q, 0.000694512899549693, 3);
  sqcRZGate(q, 1.134940893268804, 3);
  sqcRYGate(q, 3.583026055777296e-05, 4);
  sqcRZGate(q, 2.4031401289818586, 4);
  sqcRYGate(q, 1.5708953202160574, 5);
  sqcRZGate(q, -7.560902898440248e-06, 5);
  sqcRYGate(q, 0.00034006196200439315, 6);
  sqcRZGate(q, -1.9788190694048922, 6);
  sqcRYGate(q, -1.5707961986024204, 7);
  sqcRZGate(q, 1.570797577756423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5708417629758655, 0);
  sqcRZGate(q, 1.5707087584194779, 0);
  sqcRYGate(q, -1.5707975960914442, 1);
  sqcRZGate(q, 2.106102320121452, 1);
  sqcRYGate(q, -1.5707950605351297, 2);
  sqcRZGate(q, 1.570794010789037, 2);
  sqcRYGate(q, -3.1415819210482265, 3);
  sqcRZGate(q, -1.0691488014794057, 3);
  sqcRYGate(q, 4.148227775820445e-05, 4);
  sqcRZGate(q, -1.766540575381244, 4);
  sqcRYGate(q, -2.69783555542893, 5);
  sqcRZGate(q, -1.5708445628155685, 5);
  sqcRYGate(q, 1.570796741558333, 6);
  sqcRZGate(q, -1.570796260821913, 6);
  sqcRYGate(q, 1.5708003014031906, 7);
  sqcRZGate(q, 2.782574791599069, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5747526419219264, 0);
  sqcRZGate(q, 1.6398210896332763, 0);
  sqcRYGate(q, -3.141575779202869, 1);
  sqcRZGate(q, -2.1334612075765693, 1);
  sqcRYGate(q, 1.570797275254282, 2);
  sqcRZGate(q, 0.09091458452883089, 2);
  sqcRYGate(q, 1.5708366438619645, 3);
  sqcRZGate(q, -1.0979711593473285, 3);
  sqcRYGate(q, -1.5708207347637353, 4);
  sqcRZGate(q, -3.0729782856016, 4);
  sqcRYGate(q, -1.5708320354228524, 5);
  sqcRZGate(q, 0.4539618580065232, 5);
  sqcRYGate(q, -1.570799606031472, 6);
  sqcRZGate(q, 1.642766440755497, 6);
  sqcRYGate(q, 1.5707977402265212, 7);
  sqcRZGate(q, -2.6688505706797048, 7);

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
