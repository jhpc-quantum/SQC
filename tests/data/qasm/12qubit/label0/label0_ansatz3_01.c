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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.1373369599696006, 0);
  sqcRZGate(q, -2.1171246664653176, 0);
  sqcRYGate(q, -2.797369164143917, 1);
  sqcRZGate(q, 0.44904506561280766, 1);
  sqcRYGate(q, -1.5963121477335829, 2);
  sqcRZGate(q, 1.5622367590831852, 2);
  sqcRYGate(q, 2.052525401510396, 3);
  sqcRZGate(q, -1.3225487985552542, 3);
  sqcRYGate(q, -0.3654972512901793, 4);
  sqcRZGate(q, -1.9208082460737543, 4);
  sqcRYGate(q, -2.9012234537655317, 5);
  sqcRZGate(q, 1.3507102433246694, 5);
  sqcRYGate(q, -1.6316336755363263, 6);
  sqcRZGate(q, 2.4973850273826255, 6);
  sqcRYGate(q, 1.5699911061120562, 7);
  sqcRZGate(q, -1.5734580324940106, 7);
  sqcRYGate(q, 1.5708616324403506, 8);
  sqcRZGate(q, 1.4388808281830752, 8);
  sqcRYGate(q, -0.020199582863341354, 9);
  sqcRZGate(q, 0.05414332625417284, 9);
  sqcRYGate(q, 1.8222730976035368, 10);
  sqcRZGate(q, 1.5603394060137237, 10);
  sqcRYGate(q, -3.120911276553602, 11);
  sqcRZGate(q, 2.157131111587309, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5423057391565134, 0);
  sqcRZGate(q, 1.8347574010300063, 0);
  sqcRYGate(q, 3.1346019546665853, 1);
  sqcRZGate(q, -1.3294879090935394, 1);
  sqcRYGate(q, -2.219893878576479, 2);
  sqcRZGate(q, 1.3695314495187965, 2);
  sqcRYGate(q, -0.003576983228570952, 3);
  sqcRZGate(q, -2.720373745203963, 3);
  sqcRYGate(q, 3.1382762100192063, 4);
  sqcRZGate(q, 1.3829771491739715, 4);
  sqcRYGate(q, 0.02000845715374274, 5);
  sqcRZGate(q, 0.5713783290339078, 5);
  sqcRYGate(q, -0.004358229063741634, 6);
  sqcRZGate(q, -0.5950644598153941, 6);
  sqcRYGate(q, -1.6738280890301418, 7);
  sqcRZGate(q, -0.7591834405450744, 7);
  sqcRYGate(q, -3.085766741250784, 8);
  sqcRZGate(q, -1.567473069218539, 8);
  sqcRYGate(q, 1.5573867767556246, 9);
  sqcRZGate(q, -0.0020561426509901892, 9);
  sqcRYGate(q, -1.7054125313695387, 10);
  sqcRZGate(q, -1.5614700949600613, 10);
  sqcRYGate(q, -3.1413817061468485, 11);
  sqcRZGate(q, 0.3174426272187141, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5081474327034385, 0);
  sqcRZGate(q, 0.7946645161403957, 0);
  sqcRYGate(q, 0.0035303275485514263, 1);
  sqcRZGate(q, 0.6268113766447119, 1);
  sqcRYGate(q, -2.4097535834533934, 2);
  sqcRZGate(q, -1.3333763827454523, 2);
  sqcRYGate(q, -1.059094692483458, 3);
  sqcRZGate(q, 1.387872240808374, 3);
  sqcRYGate(q, -1.3669145315458566, 4);
  sqcRZGate(q, 2.5849439611024403, 4);
  sqcRYGate(q, 0.014956451650643743, 5);
  sqcRZGate(q, 1.1785089544666727, 5);
  sqcRYGate(q, 1.6435457593202305, 6);
  sqcRZGate(q, -0.46220156375798016, 6);
  sqcRYGate(q, 3.1412335174097183, 7);
  sqcRZGate(q, 0.8107095016234548, 7);
  sqcRYGate(q, 1.869653250103404, 8);
  sqcRZGate(q, 1.8519533376340434, 8);
  sqcRYGate(q, -0.24126045798474927, 9);
  sqcRZGate(q, -1.4845667365850392, 9);
  sqcRYGate(q, 0.06713923941916226, 10);
  sqcRZGate(q, 2.915915285495018, 10);
  sqcRYGate(q, 3.1406114935808014, 11);
  sqcRZGate(q, -1.8268588156722667, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.566566125962403, 0);
  sqcRZGate(q, 3.1268612052637437, 0);
  sqcRYGate(q, -3.137611143836385, 1);
  sqcRZGate(q, -1.1401587883677635, 1);
  sqcRYGate(q, 0.011046987636668826, 2);
  sqcRZGate(q, -2.1876090646895427, 2);
  sqcRYGate(q, -2.9566528312524705, 3);
  sqcRZGate(q, -1.592911901359016, 3);
  sqcRYGate(q, 3.1160395763690043, 4);
  sqcRZGate(q, -1.9605133595504614, 4);
  sqcRYGate(q, -0.20592794822672464, 5);
  sqcRZGate(q, 1.559801384426334, 5);
  sqcRYGate(q, 6.407492465454932e-05, 6);
  sqcRZGate(q, 0.42571434705078026, 6);
  sqcRYGate(q, -1.571109787384807, 7);
  sqcRZGate(q, -1.5676911824080426, 7);
  sqcRYGate(q, -0.0005276466033770076, 8);
  sqcRZGate(q, 1.2788622289886808, 8);
  sqcRYGate(q, -1.574702145036004, 9);
  sqcRZGate(q, -1.6171445318791453, 9);
  sqcRYGate(q, 0.00039582496948065984, 10);
  sqcRZGate(q, -1.3560066976847398, 10);
  sqcRYGate(q, 2.913401205311613, 11);
  sqcRZGate(q, -1.5783884783088522, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.6074009905783857, 0);
  sqcRZGate(q, -3.1291024020232383, 0);
  sqcRYGate(q, -1.537902480776065, 1);
  sqcRZGate(q, -3.131247839478165, 1);
  sqcRYGate(q, -1.551661355150733, 2);
  sqcRZGate(q, 1.6007528235406374, 2);
  sqcRYGate(q, -1.5822251004624368, 3);
  sqcRZGate(q, 0.01931473839525735, 3);
  sqcRYGate(q, 1.5781412123344474, 4);
  sqcRZGate(q, -1.5727568356678776, 4);
  sqcRYGate(q, 1.5785635824859172, 5);
  sqcRZGate(q, -0.00011729015101631267, 5);
  sqcRYGate(q, 1.5724498561778524, 6);
  sqcRZGate(q, 3.1406564263701195, 6);
  sqcRYGate(q, -1.5695678864025127, 7);
  sqcRZGate(q, 3.141448226187625, 7);
  sqcRYGate(q, -3.1401484908545245, 8);
  sqcRZGate(q, -1.5814375854332274, 8);
  sqcRYGate(q, 1.5708537436028995, 9);
  sqcRZGate(q, -0.0039947508952611335, 9);
  sqcRYGate(q, 1.5617713922240002, 10);
  sqcRZGate(q, -1.5372923453424214, 10);
  sqcRYGate(q, -1.5707671242215184, 11);
  sqcRZGate(q, 0.005174881365485419, 11);

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
