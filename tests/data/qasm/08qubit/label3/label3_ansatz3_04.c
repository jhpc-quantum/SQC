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

  sqcRYGate(q, 1.570546835714639, 0);
  sqcRZGate(q, -0.24768769377635372, 0);
  sqcRYGate(q, 2.5420730730123013, 1);
  sqcRZGate(q, 1.1850314148171313, 1);
  sqcRYGate(q, -1.5833737824591223, 2);
  sqcRZGate(q, -3.141374238300052, 2);
  sqcRYGate(q, -0.06943768813869569, 3);
  sqcRZGate(q, 1.5645426275962766, 3);
  sqcRYGate(q, 0.010272762723160689, 4);
  sqcRZGate(q, -1.5145438613550617, 4);
  sqcRYGate(q, -1.570544973968085, 5);
  sqcRZGate(q, 2.49913817084771, 5);
  sqcRYGate(q, -2.898228340891762, 6);
  sqcRZGate(q, 3.1404368034335124, 6);
  sqcRYGate(q, 1.5714384896179434, 7);
  sqcRZGate(q, 0.22195863041654817, 7);
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
  sqcRYGate(q, 3.141017471666906, 0);
  sqcRZGate(q, 1.4644659935939075, 0);
  sqcRYGate(q, -3.1414966305014262, 1);
  sqcRZGate(q, 2.755638015085029, 1);
  sqcRYGate(q, 1.570174689882064, 2);
  sqcRZGate(q, 1.5637924948062916, 2);
  sqcRYGate(q, 1.5001710656636378, 3);
  sqcRZGate(q, 0.00032073910178276327, 3);
  sqcRYGate(q, -0.3804778569465234, 4);
  sqcRZGate(q, 1.5711032011964488, 4);
  sqcRYGate(q, 8.265723667211233e-05, 5);
  sqcRZGate(q, -0.9028851448908514, 5);
  sqcRYGate(q, -1.5709888401619576, 6);
  sqcRZGate(q, -0.37368986488457084, 6);
  sqcRYGate(q, -3.1414956406253505, 7);
  sqcRZGate(q, -1.0114966224117021, 7);
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
  sqcRYGate(q, -0.10146785112605095, 0);
  sqcRZGate(q, -1.7055162765222347, 0);
  sqcRYGate(q, 1.5686170985012193, 1);
  sqcRZGate(q, 0.020902215410106173, 1);
  sqcRYGate(q, 1.5755566457461063, 2);
  sqcRZGate(q, 1.5707882046566317, 2);
  sqcRYGate(q, 1.5734659095392445, 3);
  sqcRZGate(q, -3.1395874099264365, 3);
  sqcRYGate(q, 1.5709306437937594, 4);
  sqcRZGate(q, 3.1373143257698977, 4);
  sqcRYGate(q, 1.5723578977102228, 5);
  sqcRZGate(q, -3.125032038363296, 5);
  sqcRYGate(q, 3.1133624419416015, 6);
  sqcRZGate(q, -0.39475466369311446, 6);
  sqcRYGate(q, 2.7150733835028316, 7);
  sqcRZGate(q, 2.0827286477527793, 7);
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
  sqcRYGate(q, 0.7113446362153518, 0);
  sqcRZGate(q, 0.6948433474468407, 0);
  sqcRYGate(q, -1.5696713835121825, 1);
  sqcRZGate(q, 0.02553253550522605, 1);
  sqcRYGate(q, 1.570669268391773, 2);
  sqcRZGate(q, 3.141562557654367, 2);
  sqcRYGate(q, -1.3314119059318423, 3);
  sqcRZGate(q, 3.1415327899723757, 3);
  sqcRYGate(q, 3.057319860141042, 4);
  sqcRZGate(q, -1.5755496780549958, 4);
  sqcRYGate(q, -0.2534019510620027, 5);
  sqcRZGate(q, -0.13794179746713997, 5);
  sqcRYGate(q, -3.14080747943769, 6);
  sqcRZGate(q, 2.904542677847418, 6);
  sqcRYGate(q, -3.1288944782124957, 7);
  sqcRZGate(q, -3.0425918748222056, 7);
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
  sqcRYGate(q, -9.176077390904425e-05, 0);
  sqcRZGate(q, 0.8756724650764384, 0);
  sqcRYGate(q, 1.5708667924248365, 1);
  sqcRZGate(q, -1.9215321697484555, 1);
  sqcRYGate(q, 1.5718183765621312, 2);
  sqcRZGate(q, -1.570673328852462, 2);
  sqcRYGate(q, 1.5710405888744923, 3);
  sqcRZGate(q, -3.1415525645152678, 3);
  sqcRYGate(q, 1.5696263308502294, 4);
  sqcRZGate(q, 1.8032523863984296, 4);
  sqcRYGate(q, 0.000417892678663101, 5);
  sqcRZGate(q, 1.713327430397806, 5);
  sqcRYGate(q, 3.017385132303258, 6);
  sqcRZGate(q, 1.1080102506875908, 6);
  sqcRYGate(q, 1.058810360726775, 7);
  sqcRZGate(q, 0.34890296228149875, 7);
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
  sqcRYGate(q, -1.572646252893998, 0);
  sqcRZGate(q, -0.47757194494086486, 0);
  sqcRYGate(q, -8.615222647367915e-05, 1);
  sqcRZGate(q, -2.9603060563088253, 1);
  sqcRYGate(q, -1.5711584965550398, 2);
  sqcRZGate(q, 6.779326988315404e-05, 2);
  sqcRYGate(q, -1.5700482839440728, 3);
  sqcRZGate(q, 1.5707759940125774, 3);
  sqcRYGate(q, 3.141484975420724, 4);
  sqcRZGate(q, -2.9100554946630384, 4);
  sqcRYGate(q, 0.10107349967821538, 5);
  sqcRZGate(q, -0.22935542387736035, 5);
  sqcRYGate(q, -0.0001850219398797821, 6);
  sqcRZGate(q, 1.9090534388057598, 6);
  sqcRYGate(q, -3.132618892910196, 7);
  sqcRZGate(q, -2.791682604928709, 7);
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
  sqcRYGate(q, 3.1415502509176183, 0);
  sqcRZGate(q, -2.295752143727637, 0);
  sqcRYGate(q, -3.0626601873508954, 1);
  sqcRZGate(q, -2.740387752433203, 1);
  sqcRYGate(q, 1.570816903079424, 2);
  sqcRZGate(q, -0.04875250197930647, 2);
  sqcRYGate(q, 1.5695586446050331, 3);
  sqcRZGate(q, -1.5716556925585945, 3);
  sqcRYGate(q, -1.5707757240201312, 4);
  sqcRZGate(q, -1.570796521654831, 4);
  sqcRYGate(q, 3.1414856000941067, 5);
  sqcRZGate(q, -2.8193725248933323, 5);
  sqcRYGate(q, -0.06837091523349635, 6);
  sqcRZGate(q, -1.257560808210027, 6);
  sqcRYGate(q, 0.8575729787870507, 7);
  sqcRZGate(q, -0.008760340542429974, 7);
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
  sqcRYGate(q, -7.434240297791322e-05, 0);
  sqcRZGate(q, 1.4451189922316814, 0);
  sqcRYGate(q, -3.139793668705822, 1);
  sqcRZGate(q, 1.7624510866776746, 1);
  sqcRYGate(q, -3.1404668464051526, 2);
  sqcRZGate(q, 2.7071942192558556, 2);
  sqcRYGate(q, 1.5723320601533048, 3);
  sqcRZGate(q, 1.1913861167928004, 3);
  sqcRYGate(q, -1.5695271982116943, 4);
  sqcRZGate(q, 2.754752682607811, 4);
  sqcRYGate(q, 3.139308654788918, 5);
  sqcRZGate(q, -1.4030519423083403, 5);
  sqcRYGate(q, 1.5707967303027628, 6);
  sqcRZGate(q, -1.9563562036063238, 6);
  sqcRYGate(q, -1.5936042937270836, 7);
  sqcRZGate(q, -1.9329293628369753, 7);

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
