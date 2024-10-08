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

  sqcRYGate(q, 2.6385496434826177, 0);
  sqcRZGate(q, -0.803929586848434, 0);
  sqcRYGate(q, -3.141569869249544, 1);
  sqcRZGate(q, -1.8113150817800738, 1);
  sqcRYGate(q, -1.5410362051351303, 2);
  sqcRZGate(q, -1.4499073446615856, 2);
  sqcRYGate(q, 1.5664876203137232, 3);
  sqcRZGate(q, 2.1204666367808747, 3);
  sqcRYGate(q, -0.47467924530473393, 4);
  sqcRZGate(q, -3.029352497307937, 4);
  sqcRYGate(q, 1.5435562277668584, 5);
  sqcRZGate(q, -1.4899614891026614, 5);
  sqcRYGate(q, -0.2510436914635763, 6);
  sqcRZGate(q, -1.5793469929389679, 6);
  sqcRYGate(q, 0.016974826541846788, 7);
  sqcRZGate(q, -0.14207655344564518, 7);
  sqcRYGate(q, -1.5693417275861874, 8);
  sqcRZGate(q, -1.9744500069307866, 8);
  sqcRYGate(q, -1.3439121736387767, 9);
  sqcRZGate(q, -1.3935737919400468, 9);
  sqcRYGate(q, -1.9674882627586072, 10);
  sqcRZGate(q, 0.026209986535365104, 10);
  sqcRYGate(q, -0.6523652981373205, 11);
  sqcRZGate(q, -3.1390629872545373, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.646933596086, 0);
  sqcRZGate(q, 1.3270353905426824, 0);
  sqcRYGate(q, 3.138239530995912, 1);
  sqcRZGate(q, 2.9476505239311206, 1);
  sqcRYGate(q, -1.2372902589524806, 2);
  sqcRZGate(q, 1.4875786984467387, 2);
  sqcRYGate(q, 3.005333334435321, 3);
  sqcRZGate(q, 2.043533520754889, 3);
  sqcRYGate(q, 1.6101096460777562, 4);
  sqcRZGate(q, -3.139057427646489, 4);
  sqcRYGate(q, 0.04705584715174105, 5);
  sqcRZGate(q, -0.14027001097342956, 5);
  sqcRYGate(q, -0.43066507539142584, 6);
  sqcRZGate(q, 1.608283715878156, 6);
  sqcRYGate(q, -1.5640504558454582, 7);
  sqcRZGate(q, -3.1270398784090516, 7);
  sqcRYGate(q, -3.1352173625470425, 8);
  sqcRZGate(q, -1.956031427715867, 8);
  sqcRYGate(q, -0.0001390774258570185, 9);
  sqcRZGate(q, 0.547200540484952, 9);
  sqcRYGate(q, 2.8115226143027026, 10);
  sqcRZGate(q, -2.8893183141714767, 10);
  sqcRYGate(q, -2.0541247323524994, 11);
  sqcRZGate(q, 1.424941908356769, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.7036060648101468, 0);
  sqcRZGate(q, 2.492689769947475, 0);
  sqcRYGate(q, 3.0068654193688915, 1);
  sqcRZGate(q, 1.5209749310556764, 1);
  sqcRYGate(q, -1.328569319484731, 2);
  sqcRZGate(q, -3.0263502686786476, 2);
  sqcRYGate(q, -1.6149267588247307, 3);
  sqcRZGate(q, 1.5833738300476399, 3);
  sqcRYGate(q, -0.4684610472612721, 4);
  sqcRZGate(q, 1.4507499427602806, 4);
  sqcRYGate(q, -0.05997976865153029, 5);
  sqcRZGate(q, 2.0813500847292326, 5);
  sqcRYGate(q, 1.464332077187514, 6);
  sqcRZGate(q, 1.2575115618768908, 6);
  sqcRYGate(q, -0.01914736136542672, 7);
  sqcRZGate(q, -1.7260029413074705, 7);
  sqcRYGate(q, 2.876932139419108, 8);
  sqcRZGate(q, 1.652654065675538, 8);
  sqcRYGate(q, 1.1963107386284526, 9);
  sqcRZGate(q, 2.395595973666973, 9);
  sqcRYGate(q, 0.8575370985980646, 10);
  sqcRZGate(q, 1.010559596695033, 10);
  sqcRYGate(q, 2.915671961968101, 11);
  sqcRZGate(q, 1.1880120800670468, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.04210376692991424, 0);
  sqcRZGate(q, -1.192701463382674, 0);
  sqcRYGate(q, -1.5704351312104226, 1);
  sqcRZGate(q, 1.1774459555407912, 1);
  sqcRYGate(q, 1.5649894255297667, 2);
  sqcRZGate(q, 1.3787133271878118, 2);
  sqcRYGate(q, 1.5826494784427698, 3);
  sqcRZGate(q, 1.9978042225410197, 3);
  sqcRYGate(q, 3.1207569324606, 4);
  sqcRZGate(q, -0.16496659721004733, 4);
  sqcRYGate(q, -2.841488866640237, 5);
  sqcRZGate(q, 2.461105011756206, 5);
  sqcRYGate(q, -0.002066088014132359, 6);
  sqcRZGate(q, 1.8224795672453928, 6);
  sqcRYGate(q, 3.0740649652941805, 7);
  sqcRZGate(q, -3.094509455801865, 7);
  sqcRYGate(q, -3.058522277972554, 8);
  sqcRZGate(q, -0.003940853249112451, 8);
  sqcRYGate(q, 1.6112223565320507, 9);
  sqcRZGate(q, -3.1396836386355718, 9);
  sqcRYGate(q, -0.679765760184896, 10);
  sqcRZGate(q, -3.012223536634426, 10);
  sqcRYGate(q, 2.1492007912889317, 11);
  sqcRZGate(q, 1.1839248474251176, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.26213099291957864, 0);
  sqcRZGate(q, 0.0073589033795455625, 0);
  sqcRYGate(q, -1.5754050330106981, 1);
  sqcRZGate(q, 0.8847255845833422, 1);
  sqcRYGate(q, 0.0024843891922359243, 2);
  sqcRZGate(q, -1.3402203249408917, 2);
  sqcRYGate(q, -0.000608069339830632, 3);
  sqcRZGate(q, 1.1206810725602885, 3);
  sqcRYGate(q, 2.8914460444051766, 4);
  sqcRZGate(q, 0.12360222907236204, 4);
  sqcRYGate(q, -3.1310026583902038, 5);
  sqcRZGate(q, 0.7961147811992959, 5);
  sqcRYGate(q, -1.6804461481619384, 6);
  sqcRZGate(q, 0.00515688633970246, 6);
  sqcRYGate(q, -0.07196977055564024, 7);
  sqcRZGate(q, -2.9285184339973664, 7);
  sqcRYGate(q, 3.1075243087332445, 8);
  sqcRZGate(q, 0.12866030671327078, 8);
  sqcRYGate(q, 0.8198688329097645, 9);
  sqcRZGate(q, -3.1392050111119953, 9);
  sqcRYGate(q, -1.572395857803567, 10);
  sqcRZGate(q, 0.11900322664925392, 10);
  sqcRYGate(q, 3.043428528827339, 11);
  sqcRZGate(q, 0.07100377584481164, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.570798752061994, 0);
  sqcRZGate(q, -3.1414474526839555, 0);
  sqcRYGate(q, 0.00035280497253410746, 1);
  sqcRZGate(q, 0.6841784107344563, 1);
  sqcRYGate(q, -0.024424244064284208, 2);
  sqcRZGate(q, -1.6129030937272093, 2);
  sqcRYGate(q, 1.5711452139147084, 3);
  sqcRZGate(q, 0.002618586695988689, 3);
  sqcRYGate(q, 3.0801398446233312, 4);
  sqcRZGate(q, 0.18930902230726798, 4);
  sqcRYGate(q, 3.1289234822603094, 5);
  sqcRZGate(q, -1.1775268324432873, 5);
  sqcRYGate(q, -1.575105716369243, 6);
  sqcRZGate(q, -2.6981783160632444, 6);
  sqcRYGate(q, -3.1219815674697684, 7);
  sqcRZGate(q, 2.0898024843163507, 7);
  sqcRYGate(q, -0.03785520597906355, 8);
  sqcRZGate(q, -1.7025618085777436, 8);
  sqcRYGate(q, -1.6241657487410108, 9);
  sqcRZGate(q, 1.6115622981887672, 9);
  sqcRYGate(q, -0.012214048321000842, 10);
  sqcRZGate(q, 1.4575394504249695, 10);
  sqcRYGate(q, -1.5706879321138478, 11);
  sqcRZGate(q, -0.0013469661212450745, 11);

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
