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

  sqcRYGate(q, 1.1039240240996042, 0);
  sqcRZGate(q, -0.25545756122856716, 0);
  sqcRYGate(q, 3.0301700307851873, 1);
  sqcRZGate(q, -2.381308946364186, 1);
  sqcRYGate(q, 0.8453939623892919, 2);
  sqcRZGate(q, -0.5993357600468833, 2);
  sqcRYGate(q, -1.5968675558971022, 3);
  sqcRZGate(q, -2.943190904962557, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1052816257847324, 0);
  sqcRZGate(q, -0.9815506262456823, 0);
  sqcRYGate(q, 2.4149984982030968, 1);
  sqcRZGate(q, -0.42959182348540725, 1);
  sqcRYGate(q, 2.6196933633372335, 2);
  sqcRZGate(q, 1.1357947405762896, 2);
  sqcRYGate(q, -1.2114869407624957, 3);
  sqcRZGate(q, -0.9606677681925665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1268100389329714, 0);
  sqcRZGate(q, 2.7994891147603878, 0);
  sqcRYGate(q, -0.7310246696319168, 1);
  sqcRZGate(q, 0.8664802763804574, 1);
  sqcRYGate(q, 0.37092243727208096, 2);
  sqcRZGate(q, -2.8141848621861216, 2);
  sqcRYGate(q, -0.7071516663132655, 3);
  sqcRZGate(q, -0.9399690593306759, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5951127312097801, 0);
  sqcRZGate(q, 2.999388014510724, 0);
  sqcRYGate(q, 2.5298160404911276, 1);
  sqcRZGate(q, -2.8208152175387466, 1);
  sqcRYGate(q, -0.2073922187070787, 2);
  sqcRZGate(q, -2.470043304937307, 2);
  sqcRYGate(q, 2.8619212879746283, 3);
  sqcRZGate(q, -0.2373135810731551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7031924924682755, 0);
  sqcRZGate(q, -1.032215618328884, 0);
  sqcRYGate(q, -3.0799364340609268, 1);
  sqcRZGate(q, 3.0743273204831567, 1);
  sqcRYGate(q, -2.563982380907576, 2);
  sqcRZGate(q, -2.8358752958287434, 2);
  sqcRYGate(q, -0.960747363127501, 3);
  sqcRZGate(q, 2.1619343317177844, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1729326412799087, 0);
  sqcRZGate(q, 2.7276371253740863, 0);
  sqcRYGate(q, -0.49207431271082946, 1);
  sqcRZGate(q, -0.23630603452058893, 1);
  sqcRYGate(q, 0.6203056413410071, 2);
  sqcRZGate(q, 2.778946592222959, 2);
  sqcRYGate(q, 0.40135779112897807, 3);
  sqcRZGate(q, 0.7154530344888625, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0114976850956285, 0);
  sqcRZGate(q, -1.9860034060677707, 0);
  sqcRYGate(q, -2.794441110581422, 1);
  sqcRZGate(q, -0.5604627897240215, 1);
  sqcRYGate(q, -1.9898116929843406, 2);
  sqcRZGate(q, 0.45684592074397623, 2);
  sqcRYGate(q, 0.038690352053561944, 3);
  sqcRZGate(q, 2.487557460722954, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.154237545141025, 0);
  sqcRZGate(q, -0.9395316266419528, 0);
  sqcRYGate(q, 0.8382328911498211, 1);
  sqcRZGate(q, 1.1522478222134804, 1);
  sqcRYGate(q, 1.2232327224085688, 2);
  sqcRZGate(q, -2.191878491285151, 2);
  sqcRYGate(q, -1.514046469518146, 3);
  sqcRZGate(q, 1.825442619439048, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3107261768144074, 0);
  sqcRZGate(q, -0.8441337834602374, 0);
  sqcRYGate(q, -2.701987453592663, 1);
  sqcRZGate(q, 2.5371685574219605, 1);
  sqcRYGate(q, 2.1505330734948345, 2);
  sqcRZGate(q, 1.950990756710942, 2);
  sqcRYGate(q, 3.0461699816331245, 3);
  sqcRZGate(q, -1.7654756017343542, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3374750450720831, 0);
  sqcRZGate(q, -2.880543306728255, 0);
  sqcRYGate(q, -1.5080403085118486, 1);
  sqcRZGate(q, 1.4671039536817956, 1);
  sqcRYGate(q, -1.407412410784465, 2);
  sqcRZGate(q, 0.7759530768508415, 2);
  sqcRYGate(q, 0.6921389581692179, 3);
  sqcRZGate(q, -2.3608158664379535, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6183471548790136, 0);
  sqcRZGate(q, -0.4568849659359043, 0);
  sqcRYGate(q, -2.2151888879820967, 1);
  sqcRZGate(q, 1.0864124599295488, 1);
  sqcRYGate(q, 1.35482661148325, 2);
  sqcRZGate(q, 0.23552735621861934, 2);
  sqcRYGate(q, 2.2422110429922806, 3);
  sqcRZGate(q, -1.4692120905368506, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.340745435016466, 0);
  sqcRZGate(q, -2.8283437234462725, 0);
  sqcRYGate(q, 2.4344483922749434, 1);
  sqcRZGate(q, -2.7781656438343654, 1);
  sqcRYGate(q, -2.8576806137796984, 2);
  sqcRZGate(q, 0.21510147515648106, 2);
  sqcRYGate(q, 0.9573162340546034, 3);
  sqcRZGate(q, 0.34733451516032, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8366191999313735, 0);
  sqcRZGate(q, -0.6353357568117266, 0);
  sqcRYGate(q, 1.719365437633762, 1);
  sqcRZGate(q, 2.016090278236666, 1);
  sqcRYGate(q, -2.1689857204494984, 2);
  sqcRZGate(q, -1.7749464637463195, 2);
  sqcRYGate(q, 1.883159870449144, 3);
  sqcRZGate(q, 2.6599347098545336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5896172363130012, 0);
  sqcRZGate(q, -0.2696412336026785, 0);
  sqcRYGate(q, -0.18717559348040225, 1);
  sqcRZGate(q, 3.074797721870858, 1);
  sqcRYGate(q, -2.756435398623605, 2);
  sqcRZGate(q, 0.1952555189396197, 2);
  sqcRYGate(q, 2.0547511972031405, 3);
  sqcRZGate(q, -2.615980975950505, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.29612584196739156, 0);
  sqcRZGate(q, 0.6320341786566291, 0);
  sqcRYGate(q, -0.7031154172636818, 1);
  sqcRZGate(q, -0.5748570303182724, 1);
  sqcRYGate(q, -0.6533300562348113, 2);
  sqcRZGate(q, 0.049916688372361406, 2);
  sqcRYGate(q, 1.505723899626365, 3);
  sqcRZGate(q, 0.4133342683958091, 3);

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
