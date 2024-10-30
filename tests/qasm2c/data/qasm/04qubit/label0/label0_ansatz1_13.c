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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.1490313629619857, 0);
  sqcRZGate(q, -1.7092873374944637, 0);
  sqcRYGate(q, 0.21857612543030228, 1);
  sqcRZGate(q, -1.3661374445326864, 1);
  sqcRYGate(q, -0.4451255363188596, 2);
  sqcRZGate(q, 0.33161864959254655, 2);
  sqcRYGate(q, 1.2498890019196518, 3);
  sqcRZGate(q, 2.7697460007888504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.474358637987437, 0);
  sqcRZGate(q, -0.7641956244281864, 0);
  sqcRYGate(q, -0.5172547882244187, 1);
  sqcRZGate(q, 1.0222475264884603, 1);
  sqcRYGate(q, -0.05250792151674787, 2);
  sqcRZGate(q, -2.4087827842581504, 2);
  sqcRYGate(q, 1.0307045651944386, 3);
  sqcRZGate(q, 2.5598754458233413, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6489877594898195, 0);
  sqcRZGate(q, 0.6474081349342551, 0);
  sqcRYGate(q, 1.3480503801749246, 1);
  sqcRZGate(q, 2.5328105891895087, 1);
  sqcRYGate(q, -2.79358199007488, 2);
  sqcRZGate(q, 2.3704026193739356, 2);
  sqcRYGate(q, -2.4982160240184905, 3);
  sqcRZGate(q, -1.5568577384848978, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.226381593310838, 0);
  sqcRZGate(q, -0.7595799713396841, 0);
  sqcRYGate(q, 1.0708234319803545, 1);
  sqcRZGate(q, 0.15175217442949418, 1);
  sqcRYGate(q, 1.86273752266412, 2);
  sqcRZGate(q, 2.938151582200992, 2);
  sqcRYGate(q, -1.059279783860622, 3);
  sqcRZGate(q, -0.455191858042383, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.119733321640971, 0);
  sqcRZGate(q, 2.7672350636043013, 0);
  sqcRYGate(q, -0.4229048689883695, 1);
  sqcRZGate(q, 2.335463147522131, 1);
  sqcRYGate(q, -1.7678695220743839, 2);
  sqcRZGate(q, -2.842304674490416, 2);
  sqcRYGate(q, 2.834832473555825, 3);
  sqcRZGate(q, -2.4747093636412854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.714960817969423, 0);
  sqcRZGate(q, 1.776300110506091, 0);
  sqcRYGate(q, -2.248007900319483, 1);
  sqcRZGate(q, 2.278276104240133, 1);
  sqcRYGate(q, 1.7340062894248662, 2);
  sqcRZGate(q, -0.8219321283532314, 2);
  sqcRYGate(q, -2.7998044244077738, 3);
  sqcRZGate(q, 1.616098253556471, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8563095309935527, 0);
  sqcRZGate(q, -2.090378626784715, 0);
  sqcRYGate(q, -0.9534518730935745, 1);
  sqcRZGate(q, 0.9969104518920575, 1);
  sqcRYGate(q, 1.0558227764677681, 2);
  sqcRZGate(q, 0.5478763000713615, 2);
  sqcRYGate(q, 1.4685836601552902, 3);
  sqcRZGate(q, 3.117516585372579, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7353502587228578, 0);
  sqcRZGate(q, 1.6169020361641318, 0);
  sqcRYGate(q, 1.414319378999994, 1);
  sqcRZGate(q, 1.1688725433180185, 1);
  sqcRYGate(q, 0.8523185131393386, 2);
  sqcRZGate(q, -2.221376915033847, 2);
  sqcRYGate(q, -0.36358127951709196, 3);
  sqcRZGate(q, 1.3774734453237016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1508865405698758, 0);
  sqcRZGate(q, -2.1724055682721755, 0);
  sqcRYGate(q, -1.6827967737269693, 1);
  sqcRZGate(q, -2.2945448455764543, 1);
  sqcRYGate(q, 1.4882447722358583, 2);
  sqcRZGate(q, 0.0017882639183328661, 2);
  sqcRYGate(q, -0.006551396961699685, 3);
  sqcRZGate(q, 1.2768458140143586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9452770907109016, 0);
  sqcRZGate(q, 2.8483242304006096, 0);
  sqcRYGate(q, -2.562620988267606, 1);
  sqcRZGate(q, 3.1272572237622, 1);
  sqcRYGate(q, -0.5637822170541034, 2);
  sqcRZGate(q, 0.5582178636845275, 2);
  sqcRYGate(q, -2.003038872176658, 3);
  sqcRZGate(q, 1.9143649438202914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.10184964333415625, 0);
  sqcRZGate(q, 0.28532820077428944, 0);
  sqcRYGate(q, 0.2684651886147747, 1);
  sqcRZGate(q, -0.7365786042187333, 1);
  sqcRYGate(q, -2.932271078406999, 2);
  sqcRZGate(q, 2.7255285050267015, 2);
  sqcRYGate(q, -1.5607035747999918, 3);
  sqcRZGate(q, 1.199405355618028, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.031396079700356516, 0);
  sqcRZGate(q, 3.016930521337892, 0);
  sqcRYGate(q, 2.4474103042367066, 1);
  sqcRZGate(q, -2.1458087132387034, 1);
  sqcRYGate(q, 0.8485477461185846, 2);
  sqcRZGate(q, 1.4540699153041583, 2);
  sqcRYGate(q, -0.9897462179044636, 3);
  sqcRZGate(q, -0.8807741016586256, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0206659829804767, 0);
  sqcRZGate(q, 2.989564980891831, 0);
  sqcRYGate(q, 3.0936587268428104, 1);
  sqcRZGate(q, 0.4358719884203209, 1);
  sqcRYGate(q, -0.795402885588687, 2);
  sqcRZGate(q, 0.48163527656405236, 2);
  sqcRYGate(q, -3.09924555289793, 3);
  sqcRZGate(q, -0.204812039248651, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7099634038784264, 0);
  sqcRZGate(q, 2.65249969013903, 0);
  sqcRYGate(q, -0.08762070015816141, 1);
  sqcRZGate(q, -2.3082945417274447, 1);
  sqcRYGate(q, 0.5571113561833628, 2);
  sqcRZGate(q, -1.7171693790737725, 2);
  sqcRYGate(q, -0.3124284461475373, 3);
  sqcRZGate(q, 1.3892559469456245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.16471690366511196, 0);
  sqcRZGate(q, -2.248923729607143, 0);
  sqcRYGate(q, -2.611269064012757, 1);
  sqcRZGate(q, -0.11086612882322508, 1);
  sqcRYGate(q, -3.125173031953988, 2);
  sqcRZGate(q, 1.836252274062056, 2);
  sqcRYGate(q, -1.860752739694271, 3);
  sqcRZGate(q, -2.3889564502483047, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.776791135559985, 0);
  sqcRZGate(q, 0.8589666222252212, 0);
  sqcRYGate(q, 2.7813856147890514, 1);
  sqcRZGate(q, -0.6569538470294907, 1);
  sqcRYGate(q, 2.9493808354639475, 2);
  sqcRZGate(q, -0.07531880764932808, 2);
  sqcRYGate(q, -2.7113079961124216, 3);
  sqcRZGate(q, 1.7575888357601965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5271825705918163, 0);
  sqcRZGate(q, -3.100476963209026, 0);
  sqcRYGate(q, -1.9009603085759004, 1);
  sqcRZGate(q, 0.7819610913897438, 1);
  sqcRYGate(q, -0.0548325828989311, 2);
  sqcRZGate(q, -0.6188581513882868, 2);
  sqcRYGate(q, 0.6969690189198063, 3);
  sqcRZGate(q, -0.9125343975885094, 3);

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
