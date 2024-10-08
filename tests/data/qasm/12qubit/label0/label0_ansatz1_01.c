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

  sqcRYGate(q, 3.141512289597776, 0);
  sqcRZGate(q, -1.3134240719993036, 0);
  sqcRYGate(q, 1.5710796524741562, 1);
  sqcRZGate(q, -1.4976551408926713, 1);
  sqcRYGate(q, -1.5702745978626238, 2);
  sqcRZGate(q, -0.16742313616423132, 2);
  sqcRYGate(q, -0.08719115949551971, 3);
  sqcRZGate(q, -3.086831738355149, 3);
  sqcRYGate(q, -0.25412889636612057, 4);
  sqcRZGate(q, -3.0143542387922375, 4);
  sqcRYGate(q, 0.7844244136544435, 5);
  sqcRZGate(q, 3.0150115549014886, 5);
  sqcRYGate(q, -1.5773645915500465, 6);
  sqcRZGate(q, 0.0010372175390064348, 6);
  sqcRYGate(q, 0.2577327041692537, 7);
  sqcRZGate(q, 0.04981434088840687, 7);
  sqcRYGate(q, 1.5708287696704768, 8);
  sqcRZGate(q, -0.5594776223846044, 8);
  sqcRYGate(q, 1.4977881160165731, 9);
  sqcRZGate(q, 1.0985111110816694, 9);
  sqcRYGate(q, 0.05720233177910661, 10);
  sqcRZGate(q, 0.43269575965144474, 10);
  sqcRYGate(q, -1.656836886312738, 11);
  sqcRZGate(q, -1.4724025142705195, 11);
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
  sqcRYGate(q, -1.3252105412917485, 0);
  sqcRZGate(q, -1.0593570823706846, 0);
  sqcRYGate(q, -1.6093390726453929, 1);
  sqcRZGate(q, 0.504795577494269, 1);
  sqcRYGate(q, -0.3431412109768077, 2);
  sqcRZGate(q, 1.805265856270515, 2);
  sqcRYGate(q, -1.5696350785538065, 3);
  sqcRZGate(q, 1.4723902158265245, 3);
  sqcRYGate(q, -3.1399078203939332, 4);
  sqcRZGate(q, -3.021706170245382, 4);
  sqcRYGate(q, 1.5591538195227304, 5);
  sqcRZGate(q, 3.1405147609423016, 5);
  sqcRYGate(q, -1.5614632030676006, 6);
  sqcRZGate(q, 0.08957748345897443, 6);
  sqcRYGate(q, -1.4540604288206005, 7);
  sqcRZGate(q, 1.2932226009721592, 7);
  sqcRYGate(q, -3.138744406396586, 8);
  sqcRZGate(q, 1.5491648931314856, 8);
  sqcRYGate(q, 0.5902072961109437, 9);
  sqcRZGate(q, -3.0994365789609954, 9);
  sqcRYGate(q, 0.018285456639724005, 10);
  sqcRZGate(q, -1.847331560741293, 10);
  sqcRYGate(q, -0.12072438802400251, 11);
  sqcRZGate(q, 1.4073218255653366, 11);
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
  sqcRYGate(q, -0.09100239918044742, 0);
  sqcRZGate(q, -1.802986846457158, 0);
  sqcRYGate(q, -0.09265161621951414, 1);
  sqcRZGate(q, 2.6345612066726183, 1);
  sqcRYGate(q, 1.6781979768290416, 2);
  sqcRZGate(q, 2.2636078609028156, 2);
  sqcRYGate(q, 1.5723190927571795, 3);
  sqcRZGate(q, 0.43725938724394364, 3);
  sqcRYGate(q, 3.0826734532914086, 4);
  sqcRZGate(q, 1.5854169288965991, 4);
  sqcRYGate(q, -1.5716820985954154, 5);
  sqcRZGate(q, 0.00018445330168592733, 5);
  sqcRYGate(q, -0.05995094089756492, 6);
  sqcRZGate(q, 2.5993102425011982, 6);
  sqcRYGate(q, 0.00017236464332026966, 7);
  sqcRZGate(q, -0.958097950960665, 7);
  sqcRYGate(q, -3.04232565614818, 8);
  sqcRZGate(q, -3.0534269710491437, 8);
  sqcRYGate(q, 0.1631849820874892, 9);
  sqcRZGate(q, -2.4535127882598524, 9);
  sqcRYGate(q, 1.5615040313824036, 10);
  sqcRZGate(q, 2.218450658068895, 10);
  sqcRYGate(q, -1.4618192812388644, 11);
  sqcRZGate(q, -0.10557218835644111, 11);
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
  sqcRYGate(q, 1.643426212328488, 0);
  sqcRZGate(q, -0.8097319187970742, 0);
  sqcRYGate(q, -1.626786543463477, 1);
  sqcRZGate(q, 1.0649814883194297, 1);
  sqcRYGate(q, 3.1399700042589846, 2);
  sqcRZGate(q, -2.4008793906299397, 2);
  sqcRYGate(q, 1.5628037751423292, 3);
  sqcRZGate(q, -1.5448630616605097, 3);
  sqcRYGate(q, 0.24303460566588786, 4);
  sqcRZGate(q, 0.00465619039816989, 4);
  sqcRYGate(q, -1.559911823180255, 5);
  sqcRZGate(q, 0.546875891937371, 5);
  sqcRYGate(q, 2.299904803448584, 6);
  sqcRZGate(q, -1.941319962848513, 6);
  sqcRYGate(q, 1.6832727103017326, 7);
  sqcRZGate(q, -1.5361549566774988, 7);
  sqcRYGate(q, -3.1411890288799107, 8);
  sqcRZGate(q, 3.1205193299747753, 8);
  sqcRYGate(q, -3.140973828838235, 9);
  sqcRZGate(q, -1.1867595657374133, 9);
  sqcRYGate(q, -0.4749928120392859, 10);
  sqcRZGate(q, -2.805443368000376, 10);
  sqcRYGate(q, 2.8876336627348533, 11);
  sqcRZGate(q, -3.1279754311088968, 11);
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
  sqcRYGate(q, 1.5710215925249806, 0);
  sqcRZGate(q, 3.139477753770923, 0);
  sqcRYGate(q, -3.141356534040072, 1);
  sqcRZGate(q, 2.655455135784026, 1);
  sqcRYGate(q, 0.014907956546688084, 2);
  sqcRZGate(q, 1.4839647391236808, 2);
  sqcRYGate(q, 1.5696664338778508, 3);
  sqcRZGate(q, 0.000997184345294357, 3);
  sqcRYGate(q, 1.5690601657244336, 4);
  sqcRZGate(q, 3.140185851585248, 4);
  sqcRYGate(q, 3.133506373695175, 5);
  sqcRZGate(q, 0.544992387080244, 5);
  sqcRYGate(q, 1.5687075055214281, 6);
  sqcRZGate(q, 3.141238069200049, 6);
  sqcRYGate(q, -1.5702793264492483, 7);
  sqcRZGate(q, -3.1401425155502114, 7);
  sqcRYGate(q, 3.1391499664492684, 8);
  sqcRZGate(q, -1.677561728286669, 8);
  sqcRYGate(q, 3.1361725470335435, 9);
  sqcRZGate(q, -0.3398785913690449, 9);
  sqcRYGate(q, -3.129696466465223, 10);
  sqcRZGate(q, -0.7059865199760647, 10);
  sqcRYGate(q, -1.5708463557427466, 11);
  sqcRZGate(q, -0.07512299681218686, 11);

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
