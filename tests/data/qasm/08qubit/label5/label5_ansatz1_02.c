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

  sqcRYGate(q, 1.5703635659472894, 0);
  sqcRZGate(q, -0.4445296032977746, 0);
  sqcRYGate(q, 0.3832398164213746, 1);
  sqcRZGate(q, -2.6886034022783534, 1);
  sqcRYGate(q, -2.9220867031780573, 2);
  sqcRZGate(q, 7.085609273924022e-05, 2);
  sqcRYGate(q, 1.7978495816177757, 3);
  sqcRZGate(q, -2.4573766952347067, 3);
  sqcRYGate(q, -1.57836462572741, 4);
  sqcRZGate(q, -1.5294531783252814, 4);
  sqcRYGate(q, -0.00048759862119210926, 5);
  sqcRZGate(q, -2.8343962368068047, 5);
  sqcRYGate(q, 0.03830290238272216, 6);
  sqcRZGate(q, -1.766608171674546, 6);
  sqcRYGate(q, -0.812539177341924, 7);
  sqcRZGate(q, -2.7250310018277535, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2945134380961827, 0);
  sqcRZGate(q, -0.623207845933068, 0);
  sqcRYGate(q, 1.5706886941662783, 1);
  sqcRZGate(q, -1.010749579279838, 1);
  sqcRYGate(q, -1.1240849879228145, 2);
  sqcRZGate(q, 3.1415822695257143, 2);
  sqcRYGate(q, -1.5956691668376897, 3);
  sqcRZGate(q, 1.57188521958678, 3);
  sqcRYGate(q, -0.6846441103468681, 4);
  sqcRZGate(q, 1.5376708291302383, 4);
  sqcRYGate(q, -1.5718717143973164, 5);
  sqcRZGate(q, 0.0038269332081314047, 5);
  sqcRYGate(q, -1.565670013985526, 6);
  sqcRZGate(q, -2.1221256652220397, 6);
  sqcRYGate(q, -2.4539673707549166, 7);
  sqcRZGate(q, 0.24861981549740952, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4781819909257161, 0);
  sqcRZGate(q, 1.5743057545469428, 0);
  sqcRYGate(q, 3.1415783970584923, 1);
  sqcRZGate(q, 2.1311899877720397, 1);
  sqcRYGate(q, -1.5707974080247507, 2);
  sqcRZGate(q, 1.2777733572555405e-05, 2);
  sqcRYGate(q, -1.5687868840106938, 3);
  sqcRZGate(q, 2.65136906072562, 3);
  sqcRYGate(q, 1.5707536699274138, 4);
  sqcRZGate(q, 2.5317322994898364, 4);
  sqcRYGate(q, -1.5707805515423583, 5);
  sqcRZGate(q, 0.07100528905223573, 5);
  sqcRYGate(q, 0.03498619365493772, 6);
  sqcRZGate(q, -1.572385758262544, 6);
  sqcRYGate(q, -1.537551765420658, 7);
  sqcRZGate(q, -0.24189681277530628, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5741932154356593, 0);
  sqcRZGate(q, 0.8280400174504052, 0);
  sqcRYGate(q, -1.5713109167118375, 1);
  sqcRZGate(q, -2.0940881883800997, 1);
  sqcRYGate(q, -1.5666134883910954, 2);
  sqcRZGate(q, 1.5713469452661997, 2);
  sqcRYGate(q, 0.09879665568926468, 3);
  sqcRZGate(q, -2.443000224704127, 3);
  sqcRYGate(q, -1.2830659848744183e-06, 4);
  sqcRZGate(q, 0.6101615755732155, 4);
  sqcRYGate(q, -1.570308044899017, 5);
  sqcRZGate(q, -1.1229672340481045, 5);
  sqcRYGate(q, 0.2603793179358753, 6);
  sqcRZGate(q, 1.5707781719763565, 6);
  sqcRYGate(q, -3.0272272281157186, 7);
  sqcRZGate(q, 0.2858494178059408, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.569117585848347, 0);
  sqcRZGate(q, -0.8731567570146974, 0);
  sqcRYGate(q, 3.141584910533628, 1);
  sqcRZGate(q, -1.090539985952491, 1);
  sqcRYGate(q, -1.5707753515029155, 2);
  sqcRZGate(q, -1.5706736830790369, 2);
  sqcRYGate(q, 1.1768941032006652, 3);
  sqcRZGate(q, -0.3119011741818476, 3);
  sqcRYGate(q, -1.5698102231626103, 4);
  sqcRZGate(q, 1.5710962158795878, 4);
  sqcRYGate(q, 3.1415708273379437, 5);
  sqcRZGate(q, -2.6937272723470156, 5);
  sqcRYGate(q, -1.5708335594077916, 6);
  sqcRZGate(q, -1.5707954568486826, 6);
  sqcRYGate(q, 1.5693781239199502, 7);
  sqcRZGate(q, 2.3763341663830646, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1343977380450645, 0);
  sqcRZGate(q, -1.961943135793339, 0);
  sqcRYGate(q, -5.039000845634472e-07, 1);
  sqcRZGate(q, 1.8081896834549251, 1);
  sqcRYGate(q, 1.5693656763660417, 2);
  sqcRZGate(q, 2.0527450758459826, 2);
  sqcRYGate(q, 1.5708512518814501, 3);
  sqcRZGate(q, 2.811764549440536, 3);
  sqcRYGate(q, -1.570803028792208, 4);
  sqcRZGate(q, 0.481756702963561, 4);
  sqcRYGate(q, 1.5707910347105796, 5);
  sqcRZGate(q, 2.8086658361364565, 5);
  sqcRYGate(q, 1.5708235438814422, 6);
  sqcRZGate(q, -1.0730535685846647, 6);
  sqcRYGate(q, -3.141576621520055, 7);
  sqcRZGate(q, -2.607063245053204, 7);

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
