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

  sqcRYGate(q, 2.4127837813073616, 0);
  sqcRYGate(q, -3.010465932797332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1525654056730117, 0);
  sqcRYGate(q, -0.4247817497729285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.857775055753715, 2);
  sqcRYGate(q, -2.4244274864317603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4932307283842725, 2);
  sqcRYGate(q, 2.9978578654731223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.017896482874248, 1);
  sqcRYGate(q, 1.8186960578302012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6109697009882202, 1);
  sqcRYGate(q, 0.4876982471542964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7604468059881047, 0);
  sqcRYGate(q, 2.9434601837469008, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.035191220689525, 0);
  sqcRYGate(q, -0.21223675819465712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.923430841757191, 2);
  sqcRYGate(q, -1.9049034306674404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5918125661472944, 2);
  sqcRYGate(q, 2.9053301401682754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9323834702969247, 1);
  sqcRYGate(q, -2.88723165103287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8501404940072081, 1);
  sqcRYGate(q, -1.9516209016846566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1716123292159317, 0);
  sqcRYGate(q, -1.3116359785318892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1205996631253377, 0);
  sqcRYGate(q, 0.12167912284193613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8881113804905449, 2);
  sqcRYGate(q, 2.4381343982843786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7660076447464592, 2);
  sqcRYGate(q, 1.6666234011443655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.932977396127769, 1);
  sqcRYGate(q, -0.739818589900188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3289677424415967, 1);
  sqcRYGate(q, -2.0430196276038926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7907274196958872, 0);
  sqcRYGate(q, 1.4230492525696068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2092042138149166, 0);
  sqcRYGate(q, 0.4053710728850195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2061280165553754, 2);
  sqcRYGate(q, -0.3484262615568694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9515452283977943, 2);
  sqcRYGate(q, 0.05776899548266545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0192958561932173, 1);
  sqcRYGate(q, 0.0601306551840679, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4423728227708645, 1);
  sqcRYGate(q, -2.232999459379383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.979612435927294, 0);
  sqcRYGate(q, 2.1697128749942296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8523996758351071, 0);
  sqcRYGate(q, -1.8683807766795972, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4937196803180717, 2);
  sqcRYGate(q, 0.6813024637364098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8366318050074691, 2);
  sqcRYGate(q, 2.296757906774121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0259869624105793, 1);
  sqcRYGate(q, -2.896139855647063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.103587383838608, 1);
  sqcRYGate(q, 0.49501341674065635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.480628666013153, 0);
  sqcRYGate(q, -1.1523874209705725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1711785053343897, 0);
  sqcRYGate(q, -1.3774960420993558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2216696028079443, 2);
  sqcRYGate(q, -1.9764376602394513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3129952794216377, 2);
  sqcRYGate(q, -0.30462352219406347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7295985965569951, 1);
  sqcRYGate(q, -1.0750366917946739, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07357070287044376, 1);
  sqcRYGate(q, 0.3023882697202831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4444614381557406, 0);
  sqcRYGate(q, 2.9318341823213356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8696422846560092, 0);
  sqcRYGate(q, -2.8885179727071333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.817505721004353, 2);
  sqcRYGate(q, 1.1420465226009693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1156289850808747, 2);
  sqcRYGate(q, 2.7856827536795805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20136327680925586, 1);
  sqcRYGate(q, -2.585302461582241, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22164044955419246, 1);
  sqcRYGate(q, 0.4843197530585163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6975266415116712, 0);
  sqcRYGate(q, -1.5553975793908346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.037936315811772474, 0);
  sqcRYGate(q, 2.2900123596648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28897959862799494, 2);
  sqcRYGate(q, 3.107756653472907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9786660130920035, 2);
  sqcRYGate(q, -0.6180900376938238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1063250184541156, 1);
  sqcRYGate(q, -0.7794583498704376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8151890137797027, 1);
  sqcRYGate(q, -3.087657366977187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4827944792500216, 0);
  sqcRYGate(q, -2.4521067569321326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.491819798217272, 0);
  sqcRYGate(q, 1.0642040815289908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3101043433667234, 2);
  sqcRYGate(q, 1.9551232123720088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9309048134340756, 2);
  sqcRYGate(q, 3.0623065299082453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3013521266378035, 1);
  sqcRYGate(q, 0.2994262930239957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0605689691503484, 1);
  sqcRYGate(q, 2.766328293574998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5946855899860186, 0);
  sqcRYGate(q, -2.292811364901256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.015930330117182253, 0);
  sqcRYGate(q, 1.1313123712882671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3417475962057157, 2);
  sqcRYGate(q, 2.5052378272665785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1407823328817273, 2);
  sqcRYGate(q, -2.802922659341739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45648488860228215, 1);
  sqcRYGate(q, 0.8075269763274715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.748922087055897, 1);
  sqcRYGate(q, 0.15503802945716139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2571680151048694, 0);
  sqcRYGate(q, -1.5706026490667737, 1);
  sqcRYGate(q, -1.2167911300033571, 2);
  sqcRYGate(q, 3.090737676340864, 3);

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
