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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.7887985612105979, 0);
  sqcRZGate(q, -0.6554346117343923, 0);
  sqcRYGate(q, -3.141592542201529, 1);
  sqcRZGate(q, -1.8788869447363103, 1);
  sqcRYGate(q, -1.519342465787332, 2);
  sqcRZGate(q, -1.9960084764020962, 2);
  sqcRYGate(q, 8.983204846657601e-07, 3);
  sqcRZGate(q, -3.0328978676902296, 3);
  sqcRYGate(q, -1.52989789725666e-08, 4);
  sqcRZGate(q, 0.007771796299759437, 4);
  sqcRYGate(q, 3.141592345871309, 5);
  sqcRZGate(q, -1.103774941735359, 5);
  sqcRYGate(q, 0.12204142948391716, 6);
  sqcRZGate(q, -0.003305407263812389, 6);
  sqcRYGate(q, -1.449768023553671, 7);
  sqcRZGate(q, 2.2903501279740994, 7);
  sqcRYGate(q, -1.5707993306504742, 8);
  sqcRZGate(q, -1.9906012209553305, 8);
  sqcRYGate(q, -1.5707926214113312, 9);
  sqcRZGate(q, -1.6517348893528068, 9);
  sqcRYGate(q, 3.141592547242621, 10);
  sqcRZGate(q, -3.0534503696401454, 10);
  sqcRYGate(q, -0.00015199894688322502, 11);
  sqcRZGate(q, 1.20513107268859, 11);
  sqcRYGate(q, -2.5755813493608176e-05, 12);
  sqcRZGate(q, -0.027625480705553537, 12);
  sqcRYGate(q, 1.5699987332427794, 13);
  sqcRZGate(q, 3.1415638768856153, 13);
  sqcRYGate(q, -1.5706557757073052, 14);
  sqcRZGate(q, 1.6305877727003624, 14);
  sqcRYGate(q, -1.5719854309292909, 15);
  sqcRZGate(q, -0.05457912627887422, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3887756121180233, 0);
  sqcRZGate(q, 2.970208359189985, 0);
  sqcRYGate(q, 3.1415898615088254, 1);
  sqcRZGate(q, -3.1414398815586346, 1);
  sqcRYGate(q, -1.0281312321639002, 2);
  sqcRZGate(q, 1.085991898536059, 2);
  sqcRYGate(q, 1.5707965178965397, 3);
  sqcRZGate(q, 0.8697247870408208, 3);
  sqcRYGate(q, -3.1415883976566112, 4);
  sqcRZGate(q, 0.25785899196748296, 4);
  sqcRYGate(q, -1.57053442511434, 5);
  sqcRZGate(q, 0.5343660232394482, 5);
  sqcRYGate(q, 1.6476434596004206, 6);
  sqcRZGate(q, -1.5707990574941015, 6);
  sqcRYGate(q, 1.0745541040968476e-05, 7);
  sqcRZGate(q, -0.719556340468287, 7);
  sqcRYGate(q, 1.2742240133391505, 8);
  sqcRZGate(q, -2.1440670252097096, 8);
  sqcRYGate(q, 1.5872290137724567, 9);
  sqcRZGate(q, -2.506130785938614, 9);
  sqcRYGate(q, 1.570800569635475, 10);
  sqcRZGate(q, 2.2407411466121347, 10);
  sqcRYGate(q, -3.141480076021138, 11);
  sqcRZGate(q, -0.02316885142486047, 11);
  sqcRYGate(q, 1.5707951528594482, 12);
  sqcRZGate(q, 1.5282940734715194, 12);
  sqcRYGate(q, 2.7727334536012855, 13);
  sqcRZGate(q, -1.7069492194547573, 13);
  sqcRYGate(q, 0.020086171818177512, 14);
  sqcRZGate(q, 1.5126672408393023, 14);
  sqcRYGate(q, -1.936682217479273, 15);
  sqcRZGate(q, -1.5901675380731675, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8684699958005455e-06, 0);
  sqcRZGate(q, -0.22077836368888554, 0);
  sqcRYGate(q, -1.5707962701145934, 1);
  sqcRZGate(q, -0.17321037793112382, 1);
  sqcRYGate(q, -3.14159245344503, 2);
  sqcRZGate(q, 2.2275585464879377, 2);
  sqcRYGate(q, -3.14159218983343, 3);
  sqcRZGate(q, 0.8697259697512401, 3);
  sqcRYGate(q, 8.534260832122739e-05, 4);
  sqcRZGate(q, -0.21784635229421545, 4);
  sqcRYGate(q, 3.141592514732839, 5);
  sqcRZGate(q, -1.0364302139776367, 5);
  sqcRYGate(q, -1.5707962409550023, 6);
  sqcRZGate(q, -1.5531917885851583, 6);
  sqcRYGate(q, -1.5707969802507664, 7);
  sqcRZGate(q, -1.570863063364089, 7);
  sqcRYGate(q, -1.5708268354410277, 8);
  sqcRZGate(q, 1.5708641261493135, 8);
  sqcRYGate(q, -1.570793157842771, 9);
  sqcRZGate(q, -1.5683425295956488, 9);
  sqcRYGate(q, 2.3352405576901198e-07, 10);
  sqcRZGate(q, -1.9853258614273868, 10);
  sqcRYGate(q, -0.0017100159005675336, 11);
  sqcRZGate(q, 0.45020901415824033, 11);
  sqcRYGate(q, 3.1415221377333165, 12);
  sqcRZGate(q, 1.9863410385655869, 12);
  sqcRYGate(q, -3.141585091992635, 13);
  sqcRZGate(q, -0.13612639508675442, 13);
  sqcRYGate(q, -1.7889514382743525, 14);
  sqcRZGate(q, 1.579182115903717, 14);
  sqcRYGate(q, 1.5625766234307754, 15);
  sqcRZGate(q, -3.136924480718235, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5710047300935894, 0);
  sqcRZGate(q, 2.790884885162109, 0);
  sqcRYGate(q, -3.2613701194911346e-06, 1);
  sqcRZGate(q, 2.6687121146993276, 1);
  sqcRYGate(q, -1.5707961720159789, 2);
  sqcRZGate(q, -1.9214205840172671, 2);
  sqcRYGate(q, -1.5707983051445034, 3);
  sqcRZGate(q, 0.9247051728820337, 3);
  sqcRYGate(q, -1.570795695654427, 4);
  sqcRZGate(q, 1.2198630785088294, 4);
  sqcRYGate(q, -1.5703943009868597, 5);
  sqcRZGate(q, -1.9676136923570242, 5);
  sqcRYGate(q, -0.12951864396794388, 6);
  sqcRZGate(q, 1.202279061557186, 6);
  sqcRYGate(q, -0.6090478055697072, 7);
  sqcRZGate(q, -0.39905617053006637, 7);
  sqcRYGate(q, 0.9565563874759766, 8);
  sqcRZGate(q, -1.921649118200131, 8);
  sqcRYGate(q, 0.12594554019836846, 9);
  sqcRZGate(q, -0.4015228092832934, 9);
  sqcRYGate(q, -2.828114851372021e-05, 10);
  sqcRZGate(q, 0.9647433501503033, 10);
  sqcRYGate(q, 1.5707885981168803, 11);
  sqcRZGate(q, -0.3990596910700432, 11);
  sqcRYGate(q, -3.1413465926613644, 12);
  sqcRZGate(q, 2.346650672661393, 12);
  sqcRYGate(q, 1.5718938060222305, 13);
  sqcRZGate(q, 1.1873489615782793, 13);
  sqcRYGate(q, 1.569513811777258, 14);
  sqcRZGate(q, -2.8282353197828796, 14);
  sqcRYGate(q, -0.8088401625175806, 15);
  sqcRZGate(q, 2.735694074448316, 15);

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
