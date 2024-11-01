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

  sqcRYGate(q, 1.5558765559786527, 0);
  sqcRZGate(q, -1.5987647520251502, 0);
  sqcRYGate(q, 2.9623860611589343, 1);
  sqcRZGate(q, -0.4289050083190151, 1);
  sqcRYGate(q, -2.974131196750864, 2);
  sqcRZGate(q, -0.751609144025739, 2);
  sqcRYGate(q, -2.558415757270005, 3);
  sqcRZGate(q, 1.6061131195318543, 3);
  sqcRYGate(q, 3.1412821504763504, 4);
  sqcRZGate(q, 0.5038445775596537, 4);
  sqcRYGate(q, 1.5696470412613581, 5);
  sqcRZGate(q, 0.08442957671610163, 5);
  sqcRYGate(q, -1.3852988384269924, 6);
  sqcRZGate(q, -3.140074971201025, 6);
  sqcRYGate(q, -1.5734182769090417, 7);
  sqcRZGate(q, -0.09953375496586414, 7);
  sqcRYGate(q, -2.7120000068928682, 8);
  sqcRZGate(q, 0.2630153483279339, 8);
  sqcRYGate(q, 3.0657240340376632, 9);
  sqcRZGate(q, 1.5594481871237391, 9);
  sqcRYGate(q, 0.6798149200438974, 10);
  sqcRZGate(q, -1.5647234767750204, 10);
  sqcRYGate(q, -3.1076931060643678, 11);
  sqcRZGate(q, -1.1417161291356406, 11);
  sqcRYGate(q, -2.607083455840975, 12);
  sqcRZGate(q, -0.0036502802982716553, 12);
  sqcRYGate(q, 3.122407420494884, 13);
  sqcRZGate(q, 0.06826676914505914, 13);
  sqcRYGate(q, -0.5809100152897848, 14);
  sqcRZGate(q, 1.5483188638068144, 14);
  sqcRYGate(q, 2.730423665123167, 15);
  sqcRZGate(q, 1.5361201956961725, 15);
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
  sqcRYGate(q, -0.8531195659618789, 0);
  sqcRZGate(q, -1.530060701642368, 0);
  sqcRYGate(q, -1.136254996872604, 1);
  sqcRZGate(q, 1.5399952389837088, 1);
  sqcRYGate(q, -3.0959910214027184, 2);
  sqcRZGate(q, -0.04240052333065946, 2);
  sqcRYGate(q, 3.0742660408408318, 3);
  sqcRZGate(q, 0.028070471425164945, 3);
  sqcRYGate(q, -0.46817348084387955, 4);
  sqcRZGate(q, 3.1372662581063993, 4);
  sqcRYGate(q, -2.6744186429452874, 5);
  sqcRZGate(q, 3.0810273281435987, 5);
  sqcRYGate(q, 1.5717423397447456, 6);
  sqcRZGate(q, 1.8565296975188799, 6);
  sqcRYGate(q, -0.33061270421937605, 7);
  sqcRZGate(q, -2.785262873459588, 7);
  sqcRYGate(q, -0.003655214024442223, 8);
  sqcRZGate(q, 2.814294548110213, 8);
  sqcRYGate(q, 2.930690248563683, 9);
  sqcRZGate(q, 3.0998486393609377, 9);
  sqcRYGate(q, -1.5688659415736457, 10);
  sqcRZGate(q, 2.0417654173586994, 10);
  sqcRYGate(q, -1.5801912606205564, 11);
  sqcRZGate(q, -3.104633798804061, 11);
  sqcRYGate(q, 0.37845712274846466, 12);
  sqcRZGate(q, 1.564468947506385, 12);
  sqcRYGate(q, 3.1272807665836533, 13);
  sqcRZGate(q, 1.536119415210515, 13);
  sqcRYGate(q, 1.5874063117171282, 14);
  sqcRZGate(q, -2.831051733163401, 14);
  sqcRYGate(q, 1.5499802387215027, 15);
  sqcRZGate(q, 3.1375923838634394, 15);
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
  sqcRYGate(q, -1.575344734025155, 0);
  sqcRZGate(q, 3.1103202092310056, 0);
  sqcRYGate(q, 2.168197153351165, 1);
  sqcRZGate(q, -1.6165775412250247, 1);
  sqcRYGate(q, -1.5686760930944725, 2);
  sqcRZGate(q, 1.5291533636761518, 2);
  sqcRYGate(q, 1.5708372120036183, 3);
  sqcRZGate(q, 3.1154329584562603, 3);
  sqcRYGate(q, 1.2351121546780792, 4);
  sqcRZGate(q, -2.8832620667599955, 4);
  sqcRYGate(q, 1.5709896970301305, 5);
  sqcRZGate(q, 1.520629749363044, 5);
  sqcRYGate(q, 1.3625325023840062, 6);
  sqcRZGate(q, 2.529215181760012, 6);
  sqcRYGate(q, 2.824658161291353, 7);
  sqcRZGate(q, -1.2207875414110692, 7);
  sqcRYGate(q, 3.125957808507907, 8);
  sqcRZGate(q, 0.07744297091037834, 8);
  sqcRYGate(q, -0.009551621424884969, 9);
  sqcRZGate(q, -3.1014811272522445, 9);
  sqcRYGate(q, 2.6239978330069134, 10);
  sqcRZGate(q, 1.5704060462124445, 10);
  sqcRYGate(q, -1.6487965565615068, 11);
  sqcRZGate(q, -0.3519820820023227, 11);
  sqcRYGate(q, 1.5667869796429088, 12);
  sqcRZGate(q, 1.7951969397121985, 12);
  sqcRYGate(q, -1.5717034101319116, 13);
  sqcRZGate(q, -1.614607398800847, 13);
  sqcRYGate(q, 0.6906779442629265, 14);
  sqcRZGate(q, -0.6941665342164622, 14);
  sqcRYGate(q, 1.1942272096093678, 15);
  sqcRZGate(q, 1.6066593627173287, 15);
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
  sqcRYGate(q, 2.6042017371269153, 0);
  sqcRZGate(q, -3.1243643681946502, 0);
  sqcRYGate(q, -0.45185456888516856, 1);
  sqcRZGate(q, 0.004445579433138098, 1);
  sqcRYGate(q, -0.8169128093601884, 2);
  sqcRZGate(q, -2.5517770073699872, 2);
  sqcRYGate(q, -0.04007447624812656, 3);
  sqcRZGate(q, 0.4579132379537355, 3);
  sqcRYGate(q, -0.006312146693055598, 4);
  sqcRZGate(q, -0.262082463014357, 4);
  sqcRYGate(q, 0.01567814041311699, 5);
  sqcRZGate(q, -1.5221597664819075, 5);
  sqcRYGate(q, -3.1415828004229507, 6);
  sqcRZGate(q, 2.2602623524927172, 6);
  sqcRYGate(q, 1.5686746553689275, 7);
  sqcRZGate(q, 2.4610595591567743, 7);
  sqcRYGate(q, 3.1262772559084695, 8);
  sqcRZGate(q, -3.0343096030655334, 8);
  sqcRYGate(q, -0.1691545681389839, 9);
  sqcRZGate(q, 1.5643553659752938, 9);
  sqcRYGate(q, -0.7159507178811468, 10);
  sqcRZGate(q, -1.7662551322681237, 10);
  sqcRYGate(q, 0.013492308533154862, 11);
  sqcRZGate(q, -0.8079561592487269, 11);
  sqcRYGate(q, -0.021183163308207572, 12);
  sqcRZGate(q, 1.3563873003377411, 12);
  sqcRYGate(q, -0.29845936399230943, 13);
  sqcRZGate(q, 0.45623139709413435, 13);
  sqcRYGate(q, -3.119149368598869, 14);
  sqcRZGate(q, -2.8830882336370536, 14);
  sqcRYGate(q, 1.223093570771539, 15);
  sqcRZGate(q, -2.1514904508894173, 15);
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
  sqcRYGate(q, -1.577238523281982, 0);
  sqcRZGate(q, 2.141270570228609, 0);
  sqcRYGate(q, -1.621881038939189, 1);
  sqcRZGate(q, 2.14170220948358, 1);
  sqcRYGate(q, -1.5634747042078283, 2);
  sqcRZGate(q, -3.100967704307533, 2);
  sqcRYGate(q, 1.5708355273652692, 3);
  sqcRZGate(q, -3.1181607849400947, 3);
  sqcRYGate(q, -1.7507109508976628, 4);
  sqcRZGate(q, -0.029883872438929947, 4);
  sqcRYGate(q, -2.263027748277864, 5);
  sqcRZGate(q, -0.010479908352328591, 5);
  sqcRYGate(q, 1.5748748951779854, 6);
  sqcRZGate(q, 1.3500825703812476, 6);
  sqcRYGate(q, -3.1348305796101195, 7);
  sqcRZGate(q, 2.4078302717945093, 7);
  sqcRYGate(q, -3.119646951460746, 8);
  sqcRZGate(q, -1.5804836564396005, 8);
  sqcRYGate(q, -1.1627402242855034, 9);
  sqcRZGate(q, 1.589688306607715, 9);
  sqcRYGate(q, 3.127440309283167, 10);
  sqcRZGate(q, 2.85703600178152, 10);
  sqcRYGate(q, 1.5341539708028664, 11);
  sqcRZGate(q, 0.9026470067039414, 11);
  sqcRYGate(q, -1.5635721428385239, 12);
  sqcRZGate(q, -1.658588313576303, 12);
  sqcRYGate(q, 1.5733197587697945, 13);
  sqcRZGate(q, -1.5690016752106424, 13);
  sqcRYGate(q, -2.730043299943172, 14);
  sqcRZGate(q, 3.075658812151872, 14);
  sqcRYGate(q, 0.4526223464496768, 15);
  sqcRZGate(q, 0.6020576186193547, 15);
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
  sqcRYGate(q, -1.304215920642212, 0);
  sqcRZGate(q, -1.5711887063308456, 0);
  sqcRYGate(q, 2.091983437617861, 1);
  sqcRZGate(q, 1.1859933569311245, 1);
  sqcRYGate(q, -0.07087823844131173, 2);
  sqcRZGate(q, 1.692813314691426, 2);
  sqcRYGate(q, -3.13610779636263, 3);
  sqcRZGate(q, 1.639475911331998, 3);
  sqcRYGate(q, -0.1096731832558687, 4);
  sqcRZGate(q, -3.112664157333855, 4);
  sqcRYGate(q, 0.189398541027659, 5);
  sqcRZGate(q, -3.139488448156388, 5);
  sqcRYGate(q, -3.1406200303888903, 6);
  sqcRZGate(q, -0.22337140976714134, 6);
  sqcRYGate(q, 3.1223961931229924, 7);
  sqcRZGate(q, 3.096694058232507, 7);
  sqcRYGate(q, 0.21433453710250205, 8);
  sqcRZGate(q, 3.1292334288487544, 8);
  sqcRYGate(q, 0.12112248622830876, 9);
  sqcRZGate(q, -1.6578134636262665, 9);
  sqcRYGate(q, 1.5703152190751695, 10);
  sqcRZGate(q, -0.009868972270877761, 10);
  sqcRYGate(q, -0.00041354954664163884, 11);
  sqcRZGate(q, -2.574702645526944, 11);
  sqcRYGate(q, 3.109833158460639, 12);
  sqcRZGate(q, -1.6569785040358092, 12);
  sqcRYGate(q, -0.08805652806532115, 13);
  sqcRZGate(q, 1.562924882273014, 13);
  sqcRYGate(q, -3.1411918926310345, 14);
  sqcRZGate(q, -0.40065818383918295, 14);
  sqcRYGate(q, -1.5702545689116842, 15);
  sqcRZGate(q, 3.1289497113436333, 15);
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
  sqcRYGate(q, -1.5864201598192613, 0);
  sqcRZGate(q, 0.14585619795579152, 0);
  sqcRYGate(q, 1.5590580227237552, 1);
  sqcRZGate(q, 0.15110277950736142, 1);
  sqcRYGate(q, -3.0362894186268052, 2);
  sqcRZGate(q, 1.8826861123990142, 2);
  sqcRYGate(q, 0.16060847746300944, 3);
  sqcRZGate(q, -1.4862338560716575, 3);
  sqcRYGate(q, 2.1609876262680743, 4);
  sqcRZGate(q, 1.7003782499970677, 4);
  sqcRYGate(q, -0.13209663134984062, 5);
  sqcRZGate(q, 1.7076737337835222, 5);
  sqcRYGate(q, -1.0392337634174915, 6);
  sqcRZGate(q, -1.4379770117267738, 6);
  sqcRYGate(q, 1.1447204031688887, 7);
  sqcRZGate(q, -1.4369132329934096, 7);
  sqcRYGate(q, -2.0237390271222386, 8);
  sqcRZGate(q, 1.700570428222555, 8);
  sqcRYGate(q, 2.939528456923184, 9);
  sqcRZGate(q, -1.5176389202767337, 9);
  sqcRYGate(q, -2.438090020612239, 10);
  sqcRZGate(q, 1.700472374955007, 10);
  sqcRYGate(q, 1.5703520568704252, 11);
  sqcRZGate(q, 0.1294436153023364, 11);
  sqcRYGate(q, -1.7193559837563832, 12);
  sqcRZGate(q, 1.709578636577169, 12);
  sqcRYGate(q, 1.8087447471914455, 13);
  sqcRZGate(q, -1.4419982480412652, 13);
  sqcRYGate(q, 1.5588708941519431, 14);
  sqcRZGate(q, -3.0196731011240763, 14);
  sqcRYGate(q, 0.3096415791378009, 15);
  sqcRZGate(q, -1.4400009718057714, 15);

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
