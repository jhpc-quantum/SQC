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

  sqcRYGate(q, 2.5553514036737504, 0);
  sqcRZGate(q, -0.028047743457054766, 0);
  sqcRYGate(q, 0.39139542235100677, 1);
  sqcRZGate(q, -2.8945380486343675, 1);
  sqcRYGate(q, 2.1114842608001148, 2);
  sqcRZGate(q, 0.6466329521950209, 2);
  sqcRYGate(q, 1.1270932029048804, 3);
  sqcRZGate(q, 1.927937140127935, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.508131065039971, 0);
  sqcRZGate(q, -1.4766992728876138, 0);
  sqcRYGate(q, -1.3676633055374428, 1);
  sqcRZGate(q, -0.47994966473925216, 1);
  sqcRYGate(q, -2.222569670349756, 2);
  sqcRZGate(q, -1.5170354557519943, 2);
  sqcRYGate(q, -2.4192782945553954, 3);
  sqcRZGate(q, -1.112633916954777, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.842458652184947, 0);
  sqcRZGate(q, 2.6966237517853893, 0);
  sqcRYGate(q, -1.3759131030148795, 1);
  sqcRZGate(q, -0.5859505415856932, 1);
  sqcRYGate(q, 1.564293507738309, 2);
  sqcRZGate(q, -2.707038832443232, 2);
  sqcRYGate(q, -1.7949519913640588, 3);
  sqcRZGate(q, -2.444442342801437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1265131623433247, 0);
  sqcRZGate(q, -2.7013540522537536, 0);
  sqcRYGate(q, -2.7609905393822367, 1);
  sqcRZGate(q, -2.9467602108226467, 1);
  sqcRYGate(q, 2.8341906817596487, 2);
  sqcRZGate(q, 2.714163323098458, 2);
  sqcRYGate(q, -2.6695012616005527, 3);
  sqcRZGate(q, -2.5447046278004883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0850345140847364, 0);
  sqcRZGate(q, -1.9680486353808497, 0);
  sqcRYGate(q, 1.3749690953840625, 1);
  sqcRZGate(q, 0.3120013638446393, 1);
  sqcRYGate(q, -0.002199232212880986, 2);
  sqcRZGate(q, 1.4812927136103413, 2);
  sqcRYGate(q, -3.029855287200478, 3);
  sqcRZGate(q, -0.6291627945160964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1222976512673641, 0);
  sqcRZGate(q, 2.0918975914467497, 0);
  sqcRYGate(q, -0.019282394263244237, 1);
  sqcRZGate(q, -0.6326881400497947, 1);
  sqcRYGate(q, 0.9646943583685799, 2);
  sqcRZGate(q, -1.9644076257796508, 2);
  sqcRYGate(q, 2.329327586253515, 3);
  sqcRZGate(q, 0.714200308276452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.988276630579357, 0);
  sqcRZGate(q, 2.9441228588967276, 0);
  sqcRYGate(q, -2.7529795604223515, 1);
  sqcRZGate(q, 1.6566424618755073, 1);
  sqcRYGate(q, 2.427311499392099, 2);
  sqcRZGate(q, -1.5681265576931442, 2);
  sqcRYGate(q, 2.982434106451796, 3);
  sqcRZGate(q, -1.1698335518609326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.539603499210526, 0);
  sqcRZGate(q, 1.972155164376498, 0);
  sqcRYGate(q, -2.530334206252881, 1);
  sqcRZGate(q, 0.5270700905444382, 1);
  sqcRYGate(q, -2.802537221030959, 2);
  sqcRZGate(q, 2.2150585896601784, 2);
  sqcRYGate(q, 0.7277381639056106, 3);
  sqcRZGate(q, 1.716766342073967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0736351144350813, 0);
  sqcRZGate(q, -2.5005806869188834, 0);
  sqcRYGate(q, 2.156386596206344, 1);
  sqcRZGate(q, -2.4595742451379863, 1);
  sqcRYGate(q, 1.9214233137450172, 2);
  sqcRZGate(q, 0.7316020509560556, 2);
  sqcRYGate(q, -2.557222654126182, 3);
  sqcRZGate(q, -1.7404318534376964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.22502537233457967, 0);
  sqcRZGate(q, 0.2306896371630412, 0);
  sqcRYGate(q, -2.927230484126929, 1);
  sqcRZGate(q, 0.8284414656372424, 1);
  sqcRYGate(q, 0.34335630177200915, 2);
  sqcRZGate(q, -2.302311661402151, 2);
  sqcRYGate(q, 0.021083072256343094, 3);
  sqcRZGate(q, 0.36431877745758623, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.1009896375369412, 0);
  sqcRZGate(q, -1.002048598797756, 0);
  sqcRYGate(q, -1.6580526643066746, 1);
  sqcRZGate(q, -0.9033712085207141, 1);
  sqcRYGate(q, 2.7306418151198404, 2);
  sqcRZGate(q, 1.0293827526286647, 2);
  sqcRYGate(q, -0.8420858082837359, 3);
  sqcRZGate(q, -0.6992573537921309, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.030657418005725, 0);
  sqcRZGate(q, -0.6078223761758964, 0);
  sqcRYGate(q, 2.2451417333139285, 1);
  sqcRZGate(q, -1.3059251796827933, 1);
  sqcRYGate(q, 0.0017558719191595774, 2);
  sqcRZGate(q, 2.529250088530544, 2);
  sqcRYGate(q, -0.8459352248158004, 3);
  sqcRZGate(q, 0.4148955557315404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.44607818517262654, 0);
  sqcRZGate(q, 0.6638719082957509, 0);
  sqcRYGate(q, 0.14116788430657312, 1);
  sqcRZGate(q, 1.672723432689102, 1);
  sqcRYGate(q, -1.5193536349888472, 2);
  sqcRZGate(q, -2.2088812128042346, 2);
  sqcRYGate(q, -3.0774232807936714, 3);
  sqcRZGate(q, -1.9493748418712507, 3);

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
