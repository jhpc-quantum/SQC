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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.5520369562225635, 0);
  sqcRZGate(q, 0.3861095309347213, 0);
  sqcRYGate(q, 1.486682226555432, 1);
  sqcRZGate(q, -4.539992668028958e-05, 1);
  sqcRYGate(q, -2.4944266182369232, 2);
  sqcRZGate(q, 3.140389038738403, 2);
  sqcRYGate(q, -1.5706066016329012, 3);
  sqcRZGate(q, -5.1529964373345124e-05, 3);
  sqcRYGate(q, 2.0419467885548457, 4);
  sqcRZGate(q, -3.140991183099093, 4);
  sqcRYGate(q, -1.5711812583170899, 5);
  sqcRZGate(q, 0.00012653015417979645, 5);
  sqcRYGate(q, 1.5708632496008565, 6);
  sqcRZGate(q, 3.1408145098886266, 6);
  sqcRYGate(q, -1.5191573116844772, 7);
  sqcRZGate(q, -2.6136344738477626, 7);
  sqcRYGate(q, -2.620781933429454, 8);
  sqcRZGate(q, 1.580836764688306, 8);
  sqcRYGate(q, -1.57076650364683, 9);
  sqcRZGate(q, -1.4946399810754625, 9);
  sqcRYGate(q, 2.79116636338943, 10);
  sqcRZGate(q, -1.563651659528559, 10);
  sqcRYGate(q, 1.5677905201677642, 11);
  sqcRZGate(q, -0.7721696236783684, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1271092902054596, 0);
  sqcRZGate(q, 1.9566177652928316, 0);
  sqcRYGate(q, 1.5710790861697426, 1);
  sqcRZGate(q, 2.1703516990920844, 1);
  sqcRYGate(q, 1.5716400819479523, 2);
  sqcRZGate(q, -3.0874588181505636, 2);
  sqcRYGate(q, -0.6208214195271415, 3);
  sqcRZGate(q, 1.5707997821592274, 3);
  sqcRYGate(q, 1.5701590111025536, 4);
  sqcRZGate(q, -2.603538927850505, 4);
  sqcRYGate(q, 0.43088318418824656, 5);
  sqcRZGate(q, -1.571490772538636, 5);
  sqcRYGate(q, 0.16521947108090898, 6);
  sqcRZGate(q, 1.651085735213254, 6);
  sqcRYGate(q, -0.013229405567177697, 7);
  sqcRZGate(q, -2.0986682356910666, 7);
  sqcRYGate(q, 0.0308223726234986, 8);
  sqcRZGate(q, -2.36145761059737, 8);
  sqcRYGate(q, 3.1415644970689875, 9);
  sqcRZGate(q, 2.4481043540984104, 9);
  sqcRYGate(q, -0.015623835629305837, 10);
  sqcRZGate(q, -1.0108926810554313, 10);
  sqcRYGate(q, 3.1403272898356565, 11);
  sqcRZGate(q, -2.3400714886633733, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.8000809327973153, 0);
  sqcRZGate(q, -1.3567435014425973, 0);
  sqcRYGate(q, 0.06877645850132555, 1);
  sqcRZGate(q, -2.3192927922086097, 1);
  sqcRYGate(q, -0.7052753755484227, 2);
  sqcRZGate(q, 1.8096624795452314, 2);
  sqcRYGate(q, 0.6016826669091948, 3);
  sqcRZGate(q, -1.5709189914461112, 3);
  sqcRYGate(q, 2.293566699515559, 4);
  sqcRZGate(q, -1.5469562635062601, 4);
  sqcRYGate(q, 1.0048748672316634, 5);
  sqcRZGate(q, 1.8497297124625778, 5);
  sqcRYGate(q, 0.0004898261052916908, 6);
  sqcRZGate(q, 1.491277569783802, 6);
  sqcRYGate(q, -1.7184365034444797, 7);
  sqcRZGate(q, 1.572439609464045, 7);
  sqcRYGate(q, 3.139205088379471, 8);
  sqcRZGate(q, -0.7807777260572423, 8);
  sqcRYGate(q, -0.00021368552819645004, 9);
  sqcRZGate(q, -0.8011074536883972, 9);
  sqcRYGate(q, 0.0002285679892335474, 10);
  sqcRZGate(q, 2.573981089304642, 10);
  sqcRYGate(q, -2.888526642490284, 11);
  sqcRZGate(q, -1.5655825927026656, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.08392187846367405, 0);
  sqcRZGate(q, -1.7840772280497799, 0);
  sqcRYGate(q, 3.140914658973681, 1);
  sqcRZGate(q, -2.8382580382953133, 1);
  sqcRYGate(q, 3.140627771026287, 2);
  sqcRZGate(q, 2.2910143018062565, 2);
  sqcRYGate(q, -2.9201419666114283, 3);
  sqcRZGate(q, 0.46218459820641034, 3);
  sqcRYGate(q, -0.0007181483316953674, 4);
  sqcRZGate(q, 2.4052337050927077, 4);
  sqcRYGate(q, 3.140596825274043, 5);
  sqcRZGate(q, -0.5909846177621386, 5);
  sqcRYGate(q, 1.6195239067840381, 6);
  sqcRZGate(q, -3.141319413469986, 6);
  sqcRYGate(q, 1.595525493849304, 7);
  sqcRZGate(q, 0.7971099549245739, 7);
  sqcRYGate(q, 1.5723143084918778, 8);
  sqcRZGate(q, 2.259403051002469, 8);
  sqcRYGate(q, -0.1999396867687606, 9);
  sqcRZGate(q, 1.5710246548750422, 9);
  sqcRYGate(q, 1.5705488940730234, 10);
  sqcRZGate(q, 1.7597869470806637, 10);
  sqcRYGate(q, -0.2647222734932688, 11);
  sqcRZGate(q, 3.1389309111951142, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.023084655792103167, 0);
  sqcRZGate(q, -1.5733478197002135, 0);
  sqcRYGate(q, 0.0019701205208633083, 1);
  sqcRZGate(q, -0.361752998730632, 1);
  sqcRYGate(q, 3.1113244256260564, 2);
  sqcRZGate(q, 0.6881204210968488, 2);
  sqcRYGate(q, 4.418477521994646e-05, 3);
  sqcRZGate(q, -0.4613036903279637, 3);
  sqcRYGate(q, -1.427210291228663, 4);
  sqcRZGate(q, 2.00798969525324, 4);
  sqcRYGate(q, 3.1412646268569633, 5);
  sqcRZGate(q, -1.5321587631259137, 5);
  sqcRYGate(q, -1.5706075523493574, 6);
  sqcRZGate(q, -0.9147925670227853, 6);
  sqcRYGate(q, 0.027295370649831337, 7);
  sqcRZGate(q, 0.5697045363254888, 7);
  sqcRYGate(q, -1.9216135115160125, 8);
  sqcRZGate(q, -2.4650354507223895, 8);
  sqcRYGate(q, 1.8667676524339312, 9);
  sqcRZGate(q, 0.8148128309473793, 9);
  sqcRYGate(q, 2.606048290828051, 10);
  sqcRZGate(q, -2.3852574387471432, 10);
  sqcRYGate(q, 1.570822192802219, 11);
  sqcRZGate(q, 0.05657205250458458, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.0619593123975606, 0);
  sqcRZGate(q, -1.5718717786079368, 0);
  sqcRYGate(q, 5.7530060578282164e-05, 1);
  sqcRZGate(q, 1.9761081867671804, 1);
  sqcRYGate(q, -0.0004138298226390618, 2);
  sqcRZGate(q, -1.264774905023814, 2);
  sqcRYGate(q, -0.08038993118445875, 3);
  sqcRZGate(q, -0.685387955645985, 3);
  sqcRYGate(q, -0.00028721823725330603, 4);
  sqcRZGate(q, 1.3664311582873276, 4);
  sqcRYGate(q, -0.0011928504563742948, 5);
  sqcRZGate(q, -1.8886081505756378, 5);
  sqcRYGate(q, 0.00039802130508134097, 6);
  sqcRZGate(q, 2.1619672082268813, 6);
  sqcRYGate(q, -1.7660089721207152e-05, 7);
  sqcRZGate(q, 0.2872211808665499, 7);
  sqcRYGate(q, 1.5710884058435333, 8);
  sqcRZGate(q, 1.5696799885280965, 8);
  sqcRYGate(q, 3.1414871939620364, 9);
  sqcRZGate(q, -2.3280805335071286, 9);
  sqcRYGate(q, 1.5711611888543555, 10);
  sqcRZGate(q, 1.5701704025069567, 10);
  sqcRYGate(q, -1.8051975819943777e-05, 11);
  sqcRZGate(q, 1.7702540043308037, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.4759531223644249, 0);
  sqcRZGate(q, -1.5706029438807818, 0);
  sqcRYGate(q, -3.133567220236337, 1);
  sqcRZGate(q, -1.1751354980052913, 1);
  sqcRYGate(q, -3.0717965499067854, 2);
  sqcRZGate(q, -0.7381607059478316, 2);
  sqcRYGate(q, -3.1415710770153846, 3);
  sqcRZGate(q, 0.7817179051537788, 3);
  sqcRYGate(q, 0.11621597607165501, 4);
  sqcRZGate(q, -0.5134164839081838, 4);
  sqcRYGate(q, 3.141389726744649, 5);
  sqcRZGate(q, 1.9583233499520976, 5);
  sqcRYGate(q, 0.0011757858440342162, 6);
  sqcRZGate(q, -1.389803230285164, 6);
  sqcRYGate(q, 1.1614981815312628, 7);
  sqcRZGate(q, 0.016066911838123452, 7);
  sqcRYGate(q, -0.8876486700165261, 8);
  sqcRZGate(q, 3.1276730221766624, 8);
  sqcRYGate(q, 2.870124089046622, 9);
  sqcRZGate(q, -0.7053369536384668, 9);
  sqcRYGate(q, 1.8862684916953147, 10);
  sqcRZGate(q, -0.0014733015026753631, 10);
  sqcRYGate(q, 0.0001040264941529756, 11);
  sqcRZGate(q, -0.11338762700405614, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.491290418226332, 0);
  sqcRZGate(q, 2.0592832162175836, 0);
  sqcRYGate(q, 1.5439868906056191, 1);
  sqcRZGate(q, -1.3171287067346256, 1);
  sqcRYGate(q, -2.988787132512173, 2);
  sqcRZGate(q, -1.2232632885452102, 2);
  sqcRYGate(q, -2.706050977952627, 3);
  sqcRZGate(q, 3.024014618778086, 3);
  sqcRYGate(q, 0.0004586997419231409, 4);
  sqcRZGate(q, -2.2256975953084237, 4);
  sqcRYGate(q, 1.0897372900962299, 5);
  sqcRZGate(q, 0.40913713902004123, 5);
  sqcRYGate(q, 1.5546523785200292, 6);
  sqcRZGate(q, 0.9779390743811209, 6);
  sqcRYGate(q, -1.5707585981203582, 7);
  sqcRZGate(q, -2.9352052043060004, 7);
  sqcRYGate(q, -1.9492266069362985, 8);
  sqcRZGate(q, 2.0418227015694326, 8);
  sqcRYGate(q, 2.7968120455113854, 9);
  sqcRZGate(q, -0.7275907969698793, 9);
  sqcRYGate(q, 2.051208898277509, 10);
  sqcRZGate(q, -1.0746344615873091, 10);
  sqcRYGate(q, 3.8300730428401014e-05, 11);
  sqcRZGate(q, 0.9266864733763311, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1415209805458844, 0);
  sqcRZGate(q, -1.0822964583910775, 0);
  sqcRYGate(q, 0.008716787556500627, 1);
  sqcRZGate(q, 2.1537738391535477, 1);
  sqcRYGate(q, 3.141424844687568, 2);
  sqcRZGate(q, 0.4169773382456565, 2);
  sqcRYGate(q, -1.5407497400193475, 3);
  sqcRZGate(q, 1.3722209983872649, 3);
  sqcRYGate(q, -3.14155730928997, 4);
  sqcRZGate(q, 1.9262494455460482, 4);
  sqcRYGate(q, 1.574244055816445, 5);
  sqcRZGate(q, -0.1754744111716926, 5);
  sqcRYGate(q, 3.139098377354535, 6);
  sqcRZGate(q, 2.5322575992019507, 6);
  sqcRYGate(q, -3.129487794036401, 7);
  sqcRZGate(q, 0.02007280077664288, 7);
  sqcRYGate(q, -3.1405517947041717, 8);
  sqcRZGate(q, -2.0408490711417784, 8);
  sqcRYGate(q, -1.5239730846742185, 9);
  sqcRZGate(q, -2.113335003943564, 9);
  sqcRYGate(q, 0.0008443534109927597, 10);
  sqcRZGate(q, 0.6685002707323721, 10);
  sqcRYGate(q, -3.1415896563395056, 11);
  sqcRZGate(q, -1.1569244688744733, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.837872570435004, 0);
  sqcRZGate(q, -1.5708234229320126, 0);
  sqcRYGate(q, 3.141190250658118, 1);
  sqcRZGate(q, 2.757130711822376, 1);
  sqcRYGate(q, -0.0001356866604442786, 2);
  sqcRZGate(q, 2.870311107013154, 2);
  sqcRYGate(q, 3.0130236126161902, 3);
  sqcRZGate(q, 1.565418380939047, 3);
  sqcRYGate(q, 0.0006163414924387165, 4);
  sqcRZGate(q, -0.9305185974098528, 4);
  sqcRYGate(q, -1.0259844537473732, 5);
  sqcRZGate(q, 0.051850321191003114, 5);
  sqcRYGate(q, 3.1415562378594317, 6);
  sqcRZGate(q, -1.7388839306296773, 6);
  sqcRYGate(q, 1.5833491320967636, 7);
  sqcRZGate(q, -3.141154057910156, 7);
  sqcRYGate(q, 3.1414833099591086, 8);
  sqcRZGate(q, 0.6066383542942617, 8);
  sqcRYGate(q, -2.1175829619455033, 9);
  sqcRZGate(q, 1.3455183706374676, 9);
  sqcRYGate(q, -3.1415516762138385, 10);
  sqcRZGate(q, 0.20462979738757286, 10);
  sqcRYGate(q, 3.141510925132126, 11);
  sqcRZGate(q, 1.8375283430201774, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5613324646722146, 0);
  sqcRZGate(q, 2.709635700687916, 0);
  sqcRYGate(q, 3.123833361365293, 1);
  sqcRZGate(q, 0.08612604707399285, 1);
  sqcRYGate(q, -3.137495753953398, 2);
  sqcRZGate(q, -1.741824490563407, 2);
  sqcRYGate(q, -3.135721175496012, 3);
  sqcRZGate(q, -2.7285913704064977, 3);
  sqcRYGate(q, -3.1411974151360718, 4);
  sqcRZGate(q, 1.9135556798706104, 4);
  sqcRYGate(q, 3.1407233079679404, 5);
  sqcRZGate(q, 2.276388894984522, 5);
  sqcRYGate(q, -3.1361176039106584, 6);
  sqcRZGate(q, -1.6935839413215785, 6);
  sqcRYGate(q, 1.5770695265384154, 7);
  sqcRZGate(q, -0.0012050071673703757, 7);
  sqcRYGate(q, 3.1362850234320914, 8);
  sqcRZGate(q, -1.5985044223254061, 8);
  sqcRYGate(q, -0.0022671850734394096, 9);
  sqcRZGate(q, 1.7917854656438568, 9);
  sqcRYGate(q, -3.1408332255861398, 10);
  sqcRZGate(q, -2.5310305913360014, 10);
  sqcRYGate(q, 3.1415592135934545, 11);
  sqcRZGate(q, 1.5626970312246868, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1415850280412623, 0);
  sqcRZGate(q, 2.7027867073609544, 0);
  sqcRYGate(q, -3.0105998151962017, 1);
  sqcRZGate(q, -1.8342765578495426, 1);
  sqcRYGate(q, 1.4178790925181162, 2);
  sqcRZGate(q, -0.27625646950412536, 2);
  sqcRYGate(q, -3.1271979900568296, 3);
  sqcRZGate(q, -1.1738086536053673, 3);
  sqcRYGate(q, -1.570846235421302, 4);
  sqcRZGate(q, 1.602715819700385, 4);
  sqcRYGate(q, -3.131940457294523, 5);
  sqcRZGate(q, 1.3121135498473508, 5);
  sqcRYGate(q, -0.5317422602940809, 6);
  sqcRZGate(q, 1.5242288152130232, 6);
  sqcRYGate(q, 1.5694634499704305, 7);
  sqcRZGate(q, 1.5992866224125937, 7);
  sqcRYGate(q, -0.9357248609402111, 8);
  sqcRZGate(q, 0.09444076683686298, 8);
  sqcRYGate(q, 0.025252607487295187, 9);
  sqcRZGate(q, 1.0264054967936431, 9);
  sqcRYGate(q, -1.7210037096107875, 10);
  sqcRZGate(q, 0.03120482664694269, 10);
  sqcRYGate(q, 3.2698259309960065e-05, 11);
  sqcRZGate(q, -1.4343665277115631, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.0981731521978118, 0);
  sqcRZGate(q, 1.5639632795189558, 0);
  sqcRYGate(q, -1.5709028311908586, 1);
  sqcRZGate(q, 1.6236723970407556, 1);
  sqcRYGate(q, -0.0001393535465874507, 2);
  sqcRZGate(q, -0.5060379486035502, 2);
  sqcRYGate(q, 1.4967740152049938, 3);
  sqcRZGate(q, 3.100619037016177, 3);
  sqcRYGate(q, -0.009899711896837358, 4);
  sqcRZGate(q, -0.06817430690505634, 4);
  sqcRYGate(q, -1.640968305913285, 5);
  sqcRZGate(q, -3.096158678863814, 5);
  sqcRYGate(q, -1.5702867049267288, 6);
  sqcRZGate(q, -1.5355777743098136, 6);
  sqcRYGate(q, -1.5087892830142005, 7);
  sqcRZGate(q, -0.03942653197868279, 7);
  sqcRYGate(q, 3.123507884517694, 8);
  sqcRZGate(q, -3.0351153911120865, 8);
  sqcRYGate(q, 1.5136982584465963, 9);
  sqcRZGate(q, 3.121072250406551, 9);
  sqcRYGate(q, -3.1122363267717237, 10);
  sqcRZGate(q, 0.05742204751666944, 10);
  sqcRYGate(q, -0.0004129410188229342, 11);
  sqcRZGate(q, -0.6841239631776874, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.2778284069589425, 0);
  sqcRZGate(q, 1.5708148509808877, 0);
  sqcRYGate(q, -1.570737060906721, 1);
  sqcRZGate(q, 1.6173033734845876, 1);
  sqcRYGate(q, 3.139768588616764, 2);
  sqcRZGate(q, -1.278231233297452, 2);
  sqcRYGate(q, -1.5708082908551484, 3);
  sqcRZGate(q, 1.9403497256121915, 3);
  sqcRYGate(q, -0.06396427493641571, 4);
  sqcRZGate(q, 2.01477096215517, 4);
  sqcRYGate(q, -1.5707867498661239, 5);
  sqcRZGate(q, 2.7487858745383824, 5);
  sqcRYGate(q, 0.06991428390505831, 6);
  sqcRZGate(q, 0.30340413373604846, 6);
  sqcRYGate(q, -1.5708014388840816, 7);
  sqcRZGate(q, -2.783330560705762, 7);
  sqcRYGate(q, -0.09195986043417737, 8);
  sqcRZGate(q, 1.5660447237462094, 8);
  sqcRYGate(q, -1.5707793727802843, 9);
  sqcRZGate(q, -0.05592200394911995, 9);
  sqcRYGate(q, -0.09349155116773021, 10);
  sqcRZGate(q, 1.5294217863116577, 10);
  sqcRYGate(q, 1.5707542839587734, 11);
  sqcRZGate(q, -3.141578073910988, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5707746652304762, 0);
  sqcRZGate(q, -0.01652966718780372, 0);
  sqcRYGate(q, 2.0153349323592806e-05, 1);
  sqcRZGate(q, -0.04912026116830509, 1);
  sqcRYGate(q, -4.982462691480877e-06, 2);
  sqcRZGate(q, 0.5225408944594401, 2);
  sqcRYGate(q, -3.141575815857091, 3);
  sqcRZGate(q, 2.321208907935023, 3);
  sqcRYGate(q, 4.424810200368069e-06, 4);
  sqcRZGate(q, -2.1398977512724118, 4);
  sqcRYGate(q, -2.0091269897353993e-05, 5);
  sqcRZGate(q, 2.3350140483281554, 5);
  sqcRYGate(q, 3.141579811124562, 6);
  sqcRZGate(q, 0.9233235371334461, 6);
  sqcRYGate(q, 1.2991967138132209e-05, 7);
  sqcRZGate(q, -0.5632793383835599, 7);
  sqcRYGate(q, -3.141572252020421, 8);
  sqcRZGate(q, 0.22713110275578696, 8);
  sqcRYGate(q, 3.4209786332517895e-05, 9);
  sqcRZGate(q, -2.627998356887564, 9);
  sqcRYGate(q, -3.141574073169803, 10);
  sqcRZGate(q, 0.1865380242673204, 10);
  sqcRYGate(q, -1.570809455283808, 11);
  sqcRZGate(q, -2.2425141170702393e-06, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.021553918341910894, 0);
  sqcRZGate(q, 2.417464245573414, 0);
  sqcRYGate(q, 1.5698159935239486, 1);
  sqcRZGate(q, -0.7424116374376667, 1);
  sqcRYGate(q, 1.4860726827068718, 2);
  sqcRZGate(q, -2.3131977282063056, 2);
  sqcRYGate(q, -3.1389570364282102, 3);
  sqcRZGate(q, 1.2092218480541506, 3);
  sqcRYGate(q, 0.023039701210648047, 4);
  sqcRZGate(q, 2.562781449550141, 4);
  sqcRYGate(q, 0.0006854112404525651, 5);
  sqcRZGate(q, 2.0277789013677263, 5);
  sqcRYGate(q, -0.05567185603829585, 6);
  sqcRZGate(q, 1.8182742812453616, 6);
  sqcRYGate(q, 0.0028873071812514084, 7);
  sqcRZGate(q, 1.0334812530950384, 7);
  sqcRYGate(q, -0.11421572547463638, 8);
  sqcRZGate(q, 0.6289723017943096, 8);
  sqcRYGate(q, -0.0007332107535238145, 9);
  sqcRZGate(q, 0.3708519148781209, 9);
  sqcRYGate(q, -0.10872164319567089, 10);
  sqcRZGate(q, 0.6316236670386223, 10);
  sqcRYGate(q, -1.5694473115060754, 11);
  sqcRZGate(q, -2.5893774275713226, 11);

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
