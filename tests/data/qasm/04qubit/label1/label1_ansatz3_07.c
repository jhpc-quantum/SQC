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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.7867708508094741, 0);
  sqcRZGate(q, -2.2244024264811797, 0);
  sqcRYGate(q, 1.4684266782343016, 1);
  sqcRZGate(q, -2.3876804262709515, 1);
  sqcRYGate(q, -2.7361263883807463, 2);
  sqcRZGate(q, 0.9127602509822711, 2);
  sqcRYGate(q, 0.30760287286022714, 3);
  sqcRZGate(q, -0.4212984106278409, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5674344388862194, 0);
  sqcRZGate(q, -2.7493402300601004, 0);
  sqcRYGate(q, 1.9366493036058925, 1);
  sqcRZGate(q, -1.683736290590234, 1);
  sqcRYGate(q, 3.029126272520944, 2);
  sqcRZGate(q, 1.0576166104064377, 2);
  sqcRYGate(q, -0.12848610753096584, 3);
  sqcRZGate(q, -2.131697195369151, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0454984093362807, 0);
  sqcRZGate(q, -0.5183410160785069, 0);
  sqcRYGate(q, -1.4647371394486706, 1);
  sqcRZGate(q, -1.657172092788569, 1);
  sqcRYGate(q, 0.8051644359224632, 2);
  sqcRZGate(q, 1.5513366946522482, 2);
  sqcRYGate(q, 2.1373883549739974, 3);
  sqcRZGate(q, 2.4910500616708062, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8593068124247525, 0);
  sqcRZGate(q, -2.5495216438357504, 0);
  sqcRYGate(q, -0.3576178933299571, 1);
  sqcRZGate(q, 2.661234169294276, 1);
  sqcRYGate(q, -1.4273665238399946, 2);
  sqcRZGate(q, -1.408730026290703, 2);
  sqcRYGate(q, -1.0667520917608861, 3);
  sqcRZGate(q, -1.4063798654715693, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.308982294122054, 0);
  sqcRZGate(q, -2.3919660146514894, 0);
  sqcRYGate(q, -2.8913139046780696, 1);
  sqcRZGate(q, -0.7414106015168527, 1);
  sqcRYGate(q, 2.2329606579619647, 2);
  sqcRZGate(q, 2.787949599938239, 2);
  sqcRYGate(q, -2.5874436985992153, 3);
  sqcRZGate(q, 0.9477548924455635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.791851883115493, 0);
  sqcRZGate(q, 1.1779737730619295, 0);
  sqcRYGate(q, 1.9945711017859624, 1);
  sqcRZGate(q, 1.9543255100166192, 1);
  sqcRYGate(q, -0.03340980846523944, 2);
  sqcRZGate(q, 2.7997578945232227, 2);
  sqcRYGate(q, 1.3506373996844268, 3);
  sqcRZGate(q, -3.0427873748035346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0159611026299926, 0);
  sqcRZGate(q, 0.0825500835452484, 0);
  sqcRYGate(q, 2.668051704227268, 1);
  sqcRZGate(q, 0.2217279580349274, 1);
  sqcRYGate(q, 2.4498667127188467, 2);
  sqcRZGate(q, -0.6319493822884313, 2);
  sqcRYGate(q, 0.9848326001590593, 3);
  sqcRZGate(q, 1.1629068125767263, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.057545543087908, 0);
  sqcRZGate(q, 0.7256192367803277, 0);
  sqcRYGate(q, 2.9472903015021, 1);
  sqcRZGate(q, 0.3982827194503, 1);
  sqcRYGate(q, 1.747337829425624, 2);
  sqcRZGate(q, 0.9965038643347981, 2);
  sqcRYGate(q, 0.846288528738783, 3);
  sqcRZGate(q, -0.4270647700266892, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6599899214003537, 0);
  sqcRZGate(q, -2.15745390306465, 0);
  sqcRYGate(q, 0.1929284239283655, 1);
  sqcRZGate(q, 2.473822657197145, 1);
  sqcRYGate(q, -0.8814596770925563, 2);
  sqcRZGate(q, 0.20315076457646508, 2);
  sqcRYGate(q, 0.5886865269890755, 3);
  sqcRZGate(q, -1.8183555566459284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.41441139536787, 0);
  sqcRZGate(q, 1.3119673321656231, 0);
  sqcRYGate(q, -1.31839736404095, 1);
  sqcRZGate(q, -0.9649433574075594, 1);
  sqcRYGate(q, 0.932604000835056, 2);
  sqcRZGate(q, -1.3005116878669183, 2);
  sqcRYGate(q, -0.8649248533355012, 3);
  sqcRZGate(q, -0.2979077911669065, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0901918115328844, 0);
  sqcRZGate(q, 2.2757257656336614, 0);
  sqcRYGate(q, 0.5066503616804534, 1);
  sqcRZGate(q, 1.8654486883316759, 1);
  sqcRYGate(q, 0.4313275855259444, 2);
  sqcRZGate(q, 0.13857635870970153, 2);
  sqcRYGate(q, -1.5473704945073312, 3);
  sqcRZGate(q, -1.9586732583416788, 3);

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
