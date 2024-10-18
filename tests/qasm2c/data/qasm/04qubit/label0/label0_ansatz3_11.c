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

  sqcRYGate(q, 0.012044507207681576, 0);
  sqcRZGate(q, -0.7100834132677141, 0);
  sqcRYGate(q, 2.776550695991324, 1);
  sqcRZGate(q, -1.6270096785600268, 1);
  sqcRYGate(q, -1.7253561319240402, 2);
  sqcRZGate(q, 0.32690200769596345, 2);
  sqcRYGate(q, 0.7246757940229834, 3);
  sqcRZGate(q, 1.3811486728329443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5325182669745783, 0);
  sqcRZGate(q, 2.173348537378738, 0);
  sqcRYGate(q, 1.6263134267755932, 1);
  sqcRZGate(q, 2.014572000157684, 1);
  sqcRYGate(q, -1.3414587191450702, 2);
  sqcRZGate(q, 0.878734357996822, 2);
  sqcRYGate(q, -1.8077342724481027, 3);
  sqcRZGate(q, -1.7199663847641995, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8033164051656443, 0);
  sqcRZGate(q, -1.1923246418000923, 0);
  sqcRYGate(q, 2.1118271326640876, 1);
  sqcRZGate(q, 0.8180539719627343, 1);
  sqcRYGate(q, 2.043233824111615, 2);
  sqcRZGate(q, 1.4821611763308198, 2);
  sqcRYGate(q, -1.907133392845843, 3);
  sqcRZGate(q, -2.3638509840729514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7753145180005323, 0);
  sqcRZGate(q, -0.093719052655163, 0);
  sqcRYGate(q, -1.0794566785416386, 1);
  sqcRZGate(q, -1.5357227626419991, 1);
  sqcRYGate(q, 1.8672843870190832, 2);
  sqcRZGate(q, -1.6849749196209323, 2);
  sqcRYGate(q, 0.29743618640400094, 3);
  sqcRZGate(q, -3.131781211712743, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.535685927485186, 0);
  sqcRZGate(q, -1.7325919068972149, 0);
  sqcRYGate(q, -0.17861295202810573, 1);
  sqcRZGate(q, -0.6661721825613972, 1);
  sqcRYGate(q, -0.18380062827022633, 2);
  sqcRZGate(q, 1.4015432038796378, 2);
  sqcRYGate(q, -0.7296875578758995, 3);
  sqcRZGate(q, 0.07943717255629679, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.351540539101513, 0);
  sqcRZGate(q, 0.8273914317586673, 0);
  sqcRYGate(q, 0.6991759623358993, 1);
  sqcRZGate(q, -1.805293093000442, 1);
  sqcRYGate(q, -1.9237508043857587, 2);
  sqcRZGate(q, -0.4237313108620749, 2);
  sqcRYGate(q, 1.4763194787238676, 3);
  sqcRZGate(q, 1.0452397292986237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7967588026863954, 0);
  sqcRZGate(q, 2.7846459299736788, 0);
  sqcRYGate(q, 2.6832067662041355, 1);
  sqcRZGate(q, 1.3272071503601985, 1);
  sqcRYGate(q, 0.4901187161521037, 2);
  sqcRZGate(q, 2.532126297803173, 2);
  sqcRYGate(q, -2.4982928458225575, 3);
  sqcRZGate(q, -0.870892329261523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9396859631836698, 0);
  sqcRZGate(q, -0.30166125477412825, 0);
  sqcRYGate(q, -1.1225624500185902, 1);
  sqcRZGate(q, -2.743181341901739, 1);
  sqcRYGate(q, -1.8930753897731578, 2);
  sqcRZGate(q, -1.7460546874481533, 2);
  sqcRYGate(q, -1.3381549475984957, 3);
  sqcRZGate(q, -1.6693079557697978, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1463006693654663, 0);
  sqcRZGate(q, -1.4228650223456327, 0);
  sqcRYGate(q, 0.9403866130044259, 1);
  sqcRZGate(q, -1.4435359794611822, 1);
  sqcRYGate(q, -0.07465128687404032, 2);
  sqcRZGate(q, 2.2682041081650652, 2);
  sqcRYGate(q, 0.01947050516685345, 3);
  sqcRZGate(q, -1.6958964455685324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.34104645182186744, 0);
  sqcRZGate(q, 0.8869940689920243, 0);
  sqcRYGate(q, 0.8161123948295916, 1);
  sqcRZGate(q, 0.6742922611801925, 1);
  sqcRYGate(q, 0.8032605887103159, 2);
  sqcRZGate(q, -2.1714358337566133, 2);
  sqcRYGate(q, 0.31471892135090146, 3);
  sqcRZGate(q, -0.5603031124835017, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.13747951036475095, 0);
  sqcRZGate(q, -0.9573437537878148, 0);
  sqcRYGate(q, 0.3256771623873022, 1);
  sqcRZGate(q, -1.46617134245456, 1);
  sqcRYGate(q, 1.9212925016118465, 2);
  sqcRZGate(q, 1.8007108649454253, 2);
  sqcRYGate(q, -1.3426987722766235, 3);
  sqcRZGate(q, -1.6456930400878669, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8980618951242536, 0);
  sqcRZGate(q, -1.9189269240051103, 0);
  sqcRYGate(q, 0.2790688236480872, 1);
  sqcRZGate(q, -2.4939240683471087, 1);
  sqcRYGate(q, -0.9560207698175853, 2);
  sqcRZGate(q, 0.9879503375868156, 2);
  sqcRYGate(q, 3.1414009264226967, 3);
  sqcRZGate(q, 2.2297976237931207, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8448066889455617, 0);
  sqcRZGate(q, -2.505551900800961, 0);
  sqcRYGate(q, 1.3484301353450476, 1);
  sqcRZGate(q, 0.013589032949935742, 1);
  sqcRYGate(q, -0.06664405181909672, 2);
  sqcRZGate(q, -0.3687666149743619, 2);
  sqcRYGate(q, 2.7607425501466056, 3);
  sqcRZGate(q, 2.1497675256365296, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.63670804673462, 0);
  sqcRZGate(q, -2.2636099277560064, 0);
  sqcRYGate(q, -0.37184268427369355, 1);
  sqcRZGate(q, -0.25469482665167925, 1);
  sqcRYGate(q, -0.2993346576085671, 2);
  sqcRZGate(q, -3.0188936125338555, 2);
  sqcRYGate(q, 2.5062816865807873, 3);
  sqcRZGate(q, -0.9937868606255903, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6405071915255496, 0);
  sqcRZGate(q, 1.2918267629524853, 0);
  sqcRYGate(q, 1.4162591621233647, 1);
  sqcRZGate(q, 0.7664149020550393, 1);
  sqcRYGate(q, 2.1028718860398365, 2);
  sqcRZGate(q, -2.437523110458733, 2);
  sqcRYGate(q, 0.7762923783719472, 3);
  sqcRZGate(q, -0.16295167227778065, 3);

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
