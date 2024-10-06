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

  sqcRYGate(q, 3.055423269924382, 0);
  sqcRZGate(q, 0.9943273813689659, 0);
  sqcRYGate(q, -3.126728303603044, 1);
  sqcRZGate(q, 1.6515397610348224, 1);
  sqcRYGate(q, 2.55078891113474, 2);
  sqcRZGate(q, -3.0562698236310344, 2);
  sqcRYGate(q, 2.0404446606901914, 3);
  sqcRZGate(q, -0.00040654125122241425, 3);
  sqcRYGate(q, 3.1415105722966197, 4);
  sqcRZGate(q, 2.219287839139244, 4);
  sqcRYGate(q, -3.141096107337755, 5);
  sqcRZGate(q, -3.019612763482321, 5);
  sqcRYGate(q, 0.3064984388217928, 6);
  sqcRZGate(q, 0.14910731812487185, 6);
  sqcRYGate(q, 3.042940968838279, 7);
  sqcRZGate(q, 0.46282299616187894, 7);
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
  sqcRYGate(q, 2.2363495176511066, 0);
  sqcRZGate(q, -1.5716066126843793, 0);
  sqcRYGate(q, 0.4392632362666299, 1);
  sqcRZGate(q, 0.5463637973880912, 1);
  sqcRYGate(q, -2.918448351277547, 2);
  sqcRZGate(q, 1.8512896597445736, 2);
  sqcRYGate(q, 2.0955970186184993, 3);
  sqcRZGate(q, 2.8480556382383457, 3);
  sqcRYGate(q, -1.5823083912747746, 4);
  sqcRZGate(q, 2.221596838597539, 4);
  sqcRYGate(q, 2.5901181696118165, 5);
  sqcRZGate(q, 1.8623887503881527, 5);
  sqcRYGate(q, -2.0852046214201456, 6);
  sqcRZGate(q, -1.3752698512923813, 6);
  sqcRYGate(q, -1.655473923652028, 7);
  sqcRZGate(q, 1.6564157018255088, 7);
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
  sqcRYGate(q, -1.0122341715029448, 0);
  sqcRZGate(q, 1.4760965401220116, 0);
  sqcRYGate(q, 2.56401299165639, 1);
  sqcRZGate(q, -2.4967745014642433, 1);
  sqcRYGate(q, 3.127284523564932, 2);
  sqcRZGate(q, -0.8296290707883358, 2);
  sqcRYGate(q, 2.1661382742350954e-05, 3);
  sqcRZGate(q, -3.0605493106378225, 3);
  sqcRYGate(q, 0.0010020170806292403, 4);
  sqcRZGate(q, -2.4498780335314283, 4);
  sqcRYGate(q, -0.0008886982550312603, 5);
  sqcRZGate(q, 2.5653491477871824, 5);
  sqcRYGate(q, 1.5146710464178352, 6);
  sqcRZGate(q, -2.1342428665278623, 6);
  sqcRYGate(q, 1.4238443691656912, 7);
  sqcRZGate(q, 0.02465359527518007, 7);
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
  sqcRYGate(q, 1.2666739913072806, 0);
  sqcRZGate(q, 2.3858086579917046, 0);
  sqcRYGate(q, -1.0780445192580754, 1);
  sqcRZGate(q, -1.2924965602975427, 1);
  sqcRYGate(q, -0.15344346581042778, 2);
  sqcRZGate(q, -0.7300971331355638, 2);
  sqcRYGate(q, 0.012486240487733724, 3);
  sqcRZGate(q, -1.656760721229313, 3);
  sqcRYGate(q, 0.049562030822260184, 4);
  sqcRZGate(q, 0.4871571339615002, 4);
  sqcRYGate(q, -0.12081915131298082, 5);
  sqcRZGate(q, -1.2949098658338523, 5);
  sqcRYGate(q, 1.4295453286110524, 6);
  sqcRZGate(q, 1.372232758024649, 6);
  sqcRYGate(q, 1.5689862063504867, 7);
  sqcRZGate(q, 1.5701186206813142, 7);
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
  sqcRYGate(q, 0.28204798309832757, 0);
  sqcRZGate(q, 0.12852612138031905, 0);
  sqcRYGate(q, 1.8741438251537117, 1);
  sqcRZGate(q, 1.9634893104874105, 1);
  sqcRYGate(q, -0.029161441628987126, 2);
  sqcRZGate(q, 0.035683062622075344, 2);
  sqcRYGate(q, 3.1411907012328797, 3);
  sqcRZGate(q, -1.7853680375714394, 3);
  sqcRYGate(q, -3.14039190936689, 4);
  sqcRZGate(q, 0.1402399754983533, 4);
  sqcRYGate(q, -0.02337111222095256, 5);
  sqcRZGate(q, -2.7558342837738024, 5);
  sqcRYGate(q, -1.6161791049204655, 6);
  sqcRZGate(q, 0.20700992118106964, 6);
  sqcRYGate(q, 1.5707157352545646, 7);
  sqcRZGate(q, -2.951743334389079, 7);
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
  sqcRYGate(q, 2.5736389438074405, 0);
  sqcRZGate(q, 0.5803325735913827, 0);
  sqcRYGate(q, -1.6242093601962644, 1);
  sqcRZGate(q, 0.3323215250232825, 1);
  sqcRYGate(q, -2.762224517928996, 2);
  sqcRZGate(q, 3.1218125597222666, 2);
  sqcRYGate(q, 0.2974324127006662, 3);
  sqcRZGate(q, 2.844761420188038, 3);
  sqcRYGate(q, -1.2713239830526792, 4);
  sqcRZGate(q, -2.98573023048224, 4);
  sqcRYGate(q, -0.3203807424750661, 5);
  sqcRZGate(q, -0.23513138617947899, 5);
  sqcRYGate(q, -0.30757763084375034, 6);
  sqcRZGate(q, -0.2694821543131445, 6);
  sqcRYGate(q, 0.30655917639734437, 7);
  sqcRZGate(q, 2.8898258582496026, 7);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
