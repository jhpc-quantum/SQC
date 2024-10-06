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

  sqcRYGate(q, 1.4038902835811111, 0);
  sqcRZGate(q, 1.5550939793585434, 0);
  sqcRYGate(q, 1.5707964694777772, 1);
  sqcRZGate(q, -1.7147460267427987, 1);
  sqcRYGate(q, 1.5708543186430077, 2);
  sqcRZGate(q, 3.0077883501961544, 2);
  sqcRYGate(q, -1.5707955580983317, 3);
  sqcRZGate(q, 1.5717145042650165, 3);
  sqcRYGate(q, 3.1033013737190243, 4);
  sqcRZGate(q, -1.9539550078013845, 4);
  sqcRYGate(q, -2.096359141878068, 5);
  sqcRZGate(q, -1.8343155693775555, 5);
  sqcRYGate(q, -1.571089747351099, 6);
  sqcRZGate(q, 1.571924956059376, 6);
  sqcRYGate(q, -0.6207487247970296, 7);
  sqcRZGate(q, 1.96069324467097, 7);
  sqcRYGate(q, 1.5707924366136776, 8);
  sqcRZGate(q, -0.3425289523628003, 8);
  sqcRYGate(q, 3.141538971562257, 9);
  sqcRZGate(q, -1.7395527538408002, 9);
  sqcRYGate(q, 0.07299956353742144, 10);
  sqcRZGate(q, -1.3925790856135452, 10);
  sqcRYGate(q, 1.3457980743603866, 11);
  sqcRZGate(q, 1.2900962279237107, 11);
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
  sqcRYGate(q, -0.37857857269513767, 0);
  sqcRZGate(q, 1.5853891129632371, 0);
  sqcRYGate(q, 1.5707857064386233, 1);
  sqcRZGate(q, -1.570619947861909, 1);
  sqcRYGate(q, 1.5707989834542468, 2);
  sqcRZGate(q, 3.141530759473773, 2);
  sqcRYGate(q, -1.4371447843318188, 3);
  sqcRZGate(q, -1.5673385606039156, 3);
  sqcRYGate(q, 9.261586551012611e-06, 4);
  sqcRZGate(q, 0.38326773092340094, 4);
  sqcRYGate(q, -3.140921141093109, 5);
  sqcRZGate(q, 1.6486760457151857, 5);
  sqcRYGate(q, 1.8172614167657761, 6);
  sqcRZGate(q, -0.0049564659554501836, 6);
  sqcRYGate(q, 0.006285025310757142, 7);
  sqcRZGate(q, -0.23211076443741252, 7);
  sqcRYGate(q, -3.1415909000460216, 8);
  sqcRZGate(q, 1.9962447879222953, 8);
  sqcRYGate(q, -1.5314384419114158, 9);
  sqcRZGate(q, 1.1472291193642945, 9);
  sqcRYGate(q, 1.573682217733774, 10);
  sqcRZGate(q, 0.9355790767153334, 10);
  sqcRYGate(q, -2.6828454233434615, 11);
  sqcRZGate(q, 2.932618236209001, 11);
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
  sqcRYGate(q, -1.5707375565792878, 0);
  sqcRZGate(q, 3.1412607798055103, 0);
  sqcRYGate(q, -1.5706535594086235, 1);
  sqcRZGate(q, -1.5647595594916939, 1);
  sqcRYGate(q, -1.570458716324596, 2);
  sqcRZGate(q, -1.9924105411216277, 2);
  sqcRYGate(q, -2.8916878682215312, 3);
  sqcRZGate(q, 3.103914759246904, 3);
  sqcRYGate(q, -1.57079486157471, 4);
  sqcRZGate(q, 1.565690655316443, 4);
  sqcRYGate(q, 3.0816527438189585, 5);
  sqcRZGate(q, -0.7221429311098309, 5);
  sqcRYGate(q, 0.10593340601770596, 6);
  sqcRZGate(q, 0.0028217873527734017, 6);
  sqcRYGate(q, 2.505259385998981, 7);
  sqcRZGate(q, -1.0064764432510076, 7);
  sqcRYGate(q, 3.141546255794736, 8);
  sqcRZGate(q, 2.3387559616791136, 8);
  sqcRYGate(q, -1.5707952550925925, 9);
  sqcRZGate(q, 1.5707970665062423, 9);
  sqcRYGate(q, -1.6841237241094387, 10);
  sqcRZGate(q, 1.8888875064488704, 10);
  sqcRYGate(q, 0.48863204666631216, 11);
  sqcRZGate(q, -0.053804683421857485, 11);
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
  sqcRYGate(q, 1.5708666866462586, 0);
  sqcRZGate(q, -1.8731973222999336, 0);
  sqcRYGate(q, 1.5709177693504646, 1);
  sqcRZGate(q, -0.005796515966338234, 1);
  sqcRYGate(q, -1.1971601337926588e-06, 2);
  sqcRZGate(q, -1.3370526998817942, 2);
  sqcRYGate(q, -9.283582760693397e-07, 3);
  sqcRZGate(q, 1.6129546843977982, 3);
  sqcRYGate(q, -1.5706285749145135, 4);
  sqcRZGate(q, 1.5707996730903242, 4);
  sqcRYGate(q, -1.5708180079736644, 5);
  sqcRZGate(q, 1.570817020493698, 5);
  sqcRYGate(q, 0.24172770234524907, 6);
  sqcRZGate(q, -1.5686521489180079, 6);
  sqcRYGate(q, 0.0036973462582645666, 7);
  sqcRZGate(q, -0.06025198168710934, 7);
  sqcRYGate(q, 1.5707768711154717, 8);
  sqcRZGate(q, 1.5707968755835031, 8);
  sqcRYGate(q, -1.5708008788213728, 9);
  sqcRZGate(q, 1.8515612527262555, 9);
  sqcRYGate(q, -1.235592890491688e-05, 10);
  sqcRZGate(q, 3.082698779437773, 10);
  sqcRYGate(q, 1.8248689381206655, 11);
  sqcRZGate(q, 1.4010999699963493, 11);
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
  sqcRYGate(q, 3.141583138449242, 0);
  sqcRZGate(q, 3.0306787940264712, 0);
  sqcRYGate(q, -1.570711075558386, 1);
  sqcRZGate(q, -0.06861382338673305, 1);
  sqcRYGate(q, -3.1406791550939195, 2);
  sqcRZGate(q, 0.0037371556424652392, 2);
  sqcRYGate(q, 1.5618629684660927, 3);
  sqcRZGate(q, -0.07591723944338025, 3);
  sqcRYGate(q, 1.5707954854467734, 4);
  sqcRZGate(q, -1.3784265110599279, 4);
  sqcRYGate(q, 1.5065118674684612, 5);
  sqcRZGate(q, -0.0759215849448874, 5);
  sqcRYGate(q, 1.5707964441441387, 6);
  sqcRZGate(q, 0.19182079248146433, 6);
  sqcRYGate(q, -1.5707917026099445, 7);
  sqcRZGate(q, 3.065564354228314, 7);
  sqcRYGate(q, 1.5708007494010925, 8);
  sqcRZGate(q, -1.2008016077828303, 8);
  sqcRYGate(q, -1.5707956744434188, 9);
  sqcRZGate(q, 3.0657167442204907, 9);
  sqcRYGate(q, 4.940643996292137e-05, 10);
  sqcRZGate(q, -3.0303667663685925, 10);
  sqcRYGate(q, -1.8987629659675669, 11);
  sqcRZGate(q, 2.576980325064126, 11);

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
