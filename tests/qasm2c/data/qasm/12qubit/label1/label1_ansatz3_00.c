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

  sqcRYGate(q, -2.5493000209379795, 0);
  sqcRZGate(q, -2.7330900068403787, 0);
  sqcRYGate(q, -1.7162490020805907, 1);
  sqcRZGate(q, -1.3853713044447913, 1);
  sqcRYGate(q, -0.009997436474043078, 2);
  sqcRZGate(q, 0.06134143694616887, 2);
  sqcRYGate(q, -0.03659157233577242, 3);
  sqcRZGate(q, 2.5844657708012098, 3);
  sqcRYGate(q, -2.3493098376175228, 4);
  sqcRZGate(q, 1.6753680117857073, 4);
  sqcRYGate(q, -1.5637539252264039, 5);
  sqcRZGate(q, 0.5081230150857471, 5);
  sqcRYGate(q, 2.61560084594185, 6);
  sqcRZGate(q, -0.2629536699251853, 6);
  sqcRYGate(q, -3.12175687194129, 7);
  sqcRZGate(q, -0.7629087935510427, 7);
  sqcRYGate(q, -3.101761630738763, 8);
  sqcRZGate(q, -2.9877379156511172, 8);
  sqcRYGate(q, -1.0413287969694043, 9);
  sqcRZGate(q, 2.57309591767074, 9);
  sqcRYGate(q, -2.3659144062502175, 10);
  sqcRZGate(q, -1.4308485580550787, 10);
  sqcRYGate(q, -1.2883623216063065, 11);
  sqcRZGate(q, -0.5964659934668626, 11);
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
  sqcRYGate(q, 1.3894842357945212, 0);
  sqcRZGate(q, -2.0638757076844136, 0);
  sqcRYGate(q, -2.1810554810229297, 1);
  sqcRZGate(q, -0.12300855989486784, 1);
  sqcRYGate(q, 1.2036518052987581, 2);
  sqcRZGate(q, -1.448376886719017, 2);
  sqcRYGate(q, -0.6705546504897729, 3);
  sqcRZGate(q, 1.5236101074412849, 3);
  sqcRYGate(q, -1.9071738413656412, 4);
  sqcRZGate(q, 1.5274169694936892, 4);
  sqcRYGate(q, -3.074711853737503, 5);
  sqcRZGate(q, -0.5905590865555079, 5);
  sqcRYGate(q, -2.1078560054253703, 6);
  sqcRZGate(q, 3.007125288679414, 6);
  sqcRYGate(q, -0.009553609567695352, 7);
  sqcRZGate(q, 2.779820858033937, 7);
  sqcRYGate(q, 0.7697296530852227, 8);
  sqcRZGate(q, 0.16656278678167435, 8);
  sqcRYGate(q, 0.9347909241163572, 9);
  sqcRZGate(q, -0.7856814406944217, 9);
  sqcRYGate(q, -1.5157501786394627, 10);
  sqcRZGate(q, -0.911513757468205, 10);
  sqcRYGate(q, 1.3313774350435263, 11);
  sqcRZGate(q, 2.1097211223968317, 11);
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
  sqcRYGate(q, -1.5576637846097956, 0);
  sqcRZGate(q, 1.5918545491740392, 0);
  sqcRYGate(q, 3.1364795682685034, 1);
  sqcRZGate(q, 3.1129342775567257, 1);
  sqcRYGate(q, -3.131757082838134, 2);
  sqcRZGate(q, 0.12011587707699489, 2);
  sqcRYGate(q, -0.03181936616308141, 3);
  sqcRZGate(q, -3.0753309627766274, 3);
  sqcRYGate(q, -3.111286176725481, 4);
  sqcRZGate(q, 3.127364956803159, 4);
  sqcRYGate(q, 1.5547787223641967, 5);
  sqcRZGate(q, 1.4386952516526277, 5);
  sqcRYGate(q, -0.019118838466383088, 6);
  sqcRZGate(q, -2.647155600989793, 6);
  sqcRYGate(q, 3.125374318148436, 7);
  sqcRZGate(q, 0.6024951662436323, 7);
  sqcRYGate(q, 3.1376985061208518, 8);
  sqcRZGate(q, 0.2934672314797977, 8);
  sqcRYGate(q, -1.1652158176367227, 9);
  sqcRZGate(q, 1.7975919033566652, 9);
  sqcRYGate(q, 2.045819986853803, 10);
  sqcRZGate(q, -1.0379695780097236, 10);
  sqcRYGate(q, 1.080567975302674, 11);
  sqcRZGate(q, -0.7718345441080889, 11);
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
  sqcRYGate(q, -1.6896689245306586, 0);
  sqcRZGate(q, 1.1229963557202245, 0);
  sqcRYGate(q, -3.0126404052936047, 1);
  sqcRZGate(q, -2.1717487275786955, 1);
  sqcRYGate(q, -1.5170200038313963, 2);
  sqcRZGate(q, 0.9174096042462005, 2);
  sqcRYGate(q, -1.9264930056677803, 3);
  sqcRZGate(q, 0.9610957693931541, 3);
  sqcRYGate(q, 2.638043286609359, 4);
  sqcRZGate(q, -2.15329869843534, 4);
  sqcRYGate(q, 2.2791526501863935, 5);
  sqcRZGate(q, 0.7551668998087412, 5);
  sqcRYGate(q, -2.7005676184568848, 6);
  sqcRZGate(q, 1.489742337681968, 6);
  sqcRYGate(q, 2.1603827341599136, 7);
  sqcRZGate(q, -2.1900601366014154, 7);
  sqcRYGate(q, -1.7553838410709008, 8);
  sqcRZGate(q, -2.336413582857387, 8);
  sqcRYGate(q, -1.2488597147970855, 9);
  sqcRZGate(q, -2.9597087601712992, 9);
  sqcRYGate(q, 2.009795301929727, 10);
  sqcRZGate(q, -1.3250321590745175, 10);
  sqcRYGate(q, -1.396123285401134, 11);
  sqcRZGate(q, -1.014722000462121, 11);

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
