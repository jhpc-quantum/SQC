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

  sqcRYGate(q, -0.20448610269062772, 0);
  sqcRZGate(q, -2.7601345270895488, 0);
  sqcRYGate(q, -2.7694295869335392, 1);
  sqcRZGate(q, 1.1156626591520613, 1);
  sqcRYGate(q, -2.453931560935229, 2);
  sqcRZGate(q, -2.014381004453142, 2);
  sqcRYGate(q, -0.9106611032518989, 3);
  sqcRZGate(q, 0.006991520169968131, 3);
  sqcRYGate(q, -1.6122320202332414, 4);
  sqcRZGate(q, 0.13603674411955297, 4);
  sqcRYGate(q, -1.589429778852522, 5);
  sqcRZGate(q, 0.008567953485432156, 5);
  sqcRYGate(q, 3.1399266425020698, 6);
  sqcRZGate(q, -2.9140138068331716, 6);
  sqcRYGate(q, -1.2595698760536518, 7);
  sqcRZGate(q, -3.1292897640422623, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.1591222756529005, 0);
  sqcRZGate(q, 1.1276630229163975, 0);
  sqcRYGate(q, -3.1408759112315474, 1);
  sqcRZGate(q, 1.2219303458974775, 1);
  sqcRYGate(q, 3.608434825608242e-06, 2);
  sqcRZGate(q, 2.0146192372130622, 2);
  sqcRYGate(q, 1.6120336163265128, 3);
  sqcRZGate(q, -0.6313940317160904, 3);
  sqcRYGate(q, 1.8375184707099663, 4);
  sqcRZGate(q, 1.507103740894325, 4);
  sqcRYGate(q, -1.1449679158018409, 5);
  sqcRZGate(q, -0.03525164645885947, 5);
  sqcRYGate(q, -2.3287782296129333, 6);
  sqcRZGate(q, 0.588653006596768, 6);
  sqcRYGate(q, -1.129852434920759, 7);
  sqcRZGate(q, 3.034446851210983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.1605762432619553, 0);
  sqcRZGate(q, 0.25492396094855985, 0);
  sqcRYGate(q, -0.350456078859982, 1);
  sqcRZGate(q, -1.236992398225433, 1);
  sqcRYGate(q, -1.6046295569019713, 2);
  sqcRZGate(q, 0.19627883303841198, 2);
  sqcRYGate(q, -0.3294525179136336, 3);
  sqcRZGate(q, 1.9794148283867967, 3);
  sqcRYGate(q, -1.2954876443305423, 4);
  sqcRZGate(q, -0.3334691244846901, 4);
  sqcRYGate(q, 0.10220174231233117, 5);
  sqcRZGate(q, -2.942096930012683, 5);
  sqcRYGate(q, -3.140563832719282, 6);
  sqcRZGate(q, -2.4719500540378982, 6);
  sqcRYGate(q, 2.2211969799399833, 7);
  sqcRZGate(q, 1.6226817326962424, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.873031662500364, 0);
  sqcRZGate(q, -2.830074608084098, 0);
  sqcRYGate(q, -1.5707738322807498, 1);
  sqcRZGate(q, 1.5704112963834014, 1);
  sqcRYGate(q, 1.573031134174475, 2);
  sqcRZGate(q, -1.9053384394131214, 2);
  sqcRYGate(q, -0.688765342979008, 3);
  sqcRZGate(q, 3.137389560118016, 3);
  sqcRYGate(q, -0.20567607133809904, 4);
  sqcRZGate(q, 1.9122515046630424, 4);
  sqcRYGate(q, -1.9289535827337767, 5);
  sqcRZGate(q, -2.3842041168333683, 5);
  sqcRYGate(q, -2.138957192619851, 6);
  sqcRZGate(q, -1.8378214322010304, 6);
  sqcRYGate(q, -3.0579383984262836, 7);
  sqcRZGate(q, -1.450891247259721, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5707928063141985, 0);
  sqcRZGate(q, -1.4343140135790062, 0);
  sqcRYGate(q, -1.464309422338111, 1);
  sqcRZGate(q, 1.860520463680085, 1);
  sqcRYGate(q, -0.00527462242744068, 2);
  sqcRZGate(q, -2.8666724238200603, 2);
  sqcRYGate(q, 0.011074149829307354, 3);
  sqcRZGate(q, 3.1277148936956274, 3);
  sqcRYGate(q, -2.252369522045482, 4);
  sqcRZGate(q, 1.806757676677482, 4);
  sqcRYGate(q, 0.07145660511854501, 5);
  sqcRZGate(q, -0.2729123654394288, 5);
  sqcRYGate(q, 3.0930505468314524, 6);
  sqcRZGate(q, 3.06222761605629, 6);
  sqcRYGate(q, 2.1839361537034723, 7);
  sqcRZGate(q, -1.758936301894693, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2929744484150747, 0);
  sqcRZGate(q, 2.8970481194287934, 0);
  sqcRYGate(q, -1.5267200691950595, 1);
  sqcRZGate(q, 1.455562457112186, 1);
  sqcRYGate(q, 1.8590787104499888, 2);
  sqcRZGate(q, 3.039606524887411, 2);
  sqcRYGate(q, -1.8503084089447803, 3);
  sqcRZGate(q, -0.34146872483603746, 3);
  sqcRYGate(q, -3.1055781123195683, 4);
  sqcRZGate(q, -0.5272750353606661, 4);
  sqcRYGate(q, -0.22243585951389022, 5);
  sqcRZGate(q, -2.7539215102715855, 5);
  sqcRYGate(q, -1.4810959434774786, 6);
  sqcRZGate(q, -0.750219128668495, 6);
  sqcRYGate(q, -1.6768793762545713, 7);
  sqcRZGate(q, 2.486373391268021, 7);

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
