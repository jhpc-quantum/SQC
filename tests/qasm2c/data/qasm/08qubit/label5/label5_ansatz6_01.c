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

  sqcRYGate(q, -0.5399788583608438, 0);
  sqcRYGate(q, 1.1395295292103462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9601962796677297, 0);
  sqcRYGate(q, 2.341667139098182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.656420619569541, 1);
  sqcRYGate(q, -0.5259296959947646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6519158398388434, 1);
  sqcRYGate(q, 1.4399293469806886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6521537118933294, 2);
  sqcRYGate(q, 0.49359190355744353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8111246067572324, 2);
  sqcRYGate(q, 0.37223193590102466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.141995343552069, 3);
  sqcRYGate(q, -0.5606161413562085, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3227306013886064, 3);
  sqcRYGate(q, 1.3526978095821511, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0101926092850646, 4);
  sqcRYGate(q, 0.2972476326198654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.49425002280399566, 4);
  sqcRYGate(q, -2.446844313706878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9235199476993117, 5);
  sqcRYGate(q, 0.3351159904221035, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0225263558762991, 5);
  sqcRYGate(q, 1.9077877938471195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5321126468743604, 6);
  sqcRYGate(q, -1.0051808394287267, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.98894955769654, 6);
  sqcRYGate(q, -1.6141431281485414, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9793295927915278, 0);
  sqcRYGate(q, -0.9923036473323448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7093829459834453, 0);
  sqcRYGate(q, -1.4863611277636835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.312173485399692, 1);
  sqcRYGate(q, -1.9977319169307257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0374346442703102, 1);
  sqcRYGate(q, -2.907502028324826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.576654967690784, 2);
  sqcRYGate(q, 2.304969574458329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20997745797659167, 2);
  sqcRYGate(q, 2.7058299615775603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6902550951150905, 3);
  sqcRYGate(q, -1.4764182786343811, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8730854269878447, 3);
  sqcRYGate(q, -0.06286222802689867, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4040873126402658, 4);
  sqcRYGate(q, 1.7655385132121855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3499180486032001, 4);
  sqcRYGate(q, 2.78640660367892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6601177082775542, 5);
  sqcRYGate(q, 1.868139960501434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1442292015580389, 5);
  sqcRYGate(q, 1.8939831492661037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06718389379986256, 6);
  sqcRYGate(q, 0.08221374829617634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.216966959696686, 6);
  sqcRYGate(q, 2.3572396633393535, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.030085221137560365, 0);
  sqcRYGate(q, 3.0714386321247655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5331625834560336, 0);
  sqcRYGate(q, 2.567240938645318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10849751388294823, 1);
  sqcRYGate(q, -1.5963077186895582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1924911955636146, 1);
  sqcRYGate(q, 2.416351636377796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7257470859711224, 2);
  sqcRYGate(q, 1.8878223549470403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5057303855488753, 2);
  sqcRYGate(q, 1.7639526231744547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.490323232767098, 3);
  sqcRYGate(q, -1.5422355367015355, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6601567544437401, 3);
  sqcRYGate(q, 0.25916811345868535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7359566877038248, 4);
  sqcRYGate(q, 1.6033973805637831, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.582265697151291, 4);
  sqcRYGate(q, -1.7147670061306854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.500291921082139, 5);
  sqcRYGate(q, 1.1104994945802469, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5686036858732673, 5);
  sqcRYGate(q, -3.0367232137365687, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1382426123041127, 6);
  sqcRYGate(q, -2.4884292840443294, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.57225098612696, 6);
  sqcRYGate(q, -1.5759732560247335, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5803805403714506, 0);
  sqcRYGate(q, 1.5740143350395563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2068886921492803, 0);
  sqcRYGate(q, -2.6835131302862476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.27839959947379717, 1);
  sqcRYGate(q, -1.327844294229474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6041423078942447, 1);
  sqcRYGate(q, -0.031868141706128644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2948071908579433, 2);
  sqcRYGate(q, -2.378047101936612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3801693269243698, 2);
  sqcRYGate(q, -1.663510602243527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3788659447578142, 3);
  sqcRYGate(q, -1.5670859640489765, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5637314181829485, 3);
  sqcRYGate(q, 2.2321905216115034, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5686494974957617, 4);
  sqcRYGate(q, 1.6903057194043065, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.092344427728637, 4);
  sqcRYGate(q, 1.385907377965534, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.048658590328764184, 5);
  sqcRYGate(q, 2.0559359738630825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5741636361940714, 5);
  sqcRYGate(q, 0.7578773648832984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.004814829860603845, 6);
  sqcRYGate(q, 0.20819493115758816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8602927099166733, 6);
  sqcRYGate(q, 1.5921837376420411, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6857023485061023, 0);
  sqcRYGate(q, -2.3199092620289496, 1);
  sqcRYGate(q, 1.5550575356705931, 2);
  sqcRYGate(q, 1.571942817742043, 3);
  sqcRYGate(q, -1.570431365834147, 4);
  sqcRYGate(q, 1.5709652769606937, 5);
  sqcRYGate(q, -1.5680786500819126, 6);
  sqcRYGate(q, -2.9348586271575487, 7);

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
