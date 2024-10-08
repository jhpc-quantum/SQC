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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.5640741783668848, 0);
  sqcRZGate(q, -1.3329121682399744e-05, 0);
  sqcRYGate(q, 3.009070866289979, 1);
  sqcRZGate(q, -1.5709053857235424, 1);
  sqcRYGate(q, -0.8470562644839752, 2);
  sqcRZGate(q, 3.1411358532478304, 2);
  sqcRYGate(q, 3.123579839626023, 3);
  sqcRZGate(q, -1.566245702261958, 3);
  sqcRYGate(q, -0.028092692633736847, 4);
  sqcRZGate(q, -3.137751626374651, 4);
  sqcRYGate(q, -0.31747483459438725, 5);
  sqcRZGate(q, 0.006893228343108681, 5);
  sqcRYGate(q, -3.1289347361224076, 6);
  sqcRZGate(q, -3.1332536513858926, 6);
  sqcRYGate(q, 1.6040204628506747, 7);
  sqcRZGate(q, -3.141120393448922, 7);
  sqcRYGate(q, 0.031044660676409208, 8);
  sqcRZGate(q, 3.1363871095435876, 8);
  sqcRYGate(q, 0.5415254081244316, 9);
  sqcRZGate(q, 0.003947778722481294, 9);
  sqcRYGate(q, 0.4700916558017312, 10);
  sqcRZGate(q, -0.002771222453541, 10);
  sqcRYGate(q, -3.1025813092957604, 11);
  sqcRZGate(q, 0.0006457143103570929, 11);
  sqcRYGate(q, 1.5271044568336594, 12);
  sqcRZGate(q, 6.883058726980806e-05, 12);
  sqcRYGate(q, -0.04798005206319532, 13);
  sqcRZGate(q, 0.0023063195067837532, 13);
  sqcRYGate(q, -2.664287453616356, 14);
  sqcRZGate(q, 3.14087984178245, 14);
  sqcRYGate(q, 3.113956323524787, 15);
  sqcRZGate(q, -0.0016040041029530272, 15);
  sqcRYGate(q, -1.107606156402971, 16);
  sqcRZGate(q, 3.1405556147880715, 16);
  sqcRYGate(q, 3.0531108583553483, 17);
  sqcRZGate(q, -0.0006937918619316363, 17);
  sqcRYGate(q, -1.790445269742613, 18);
  sqcRZGate(q, 1.5707249006059647, 18);
  sqcRYGate(q, -0.0379844327665034, 19);
  sqcRZGate(q, 1.5698863883592622, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.3928558863188223, 0);
  sqcRZGate(q, 0.0021009967316629736, 0);
  sqcRYGate(q, 1.5710726273740008, 1);
  sqcRZGate(q, 2.7871324142682186, 1);
  sqcRYGate(q, 2.9570558403458853, 2);
  sqcRZGate(q, -3.138306161951685, 2);
  sqcRYGate(q, -1.5708302691592575, 3);
  sqcRZGate(q, -1.022155917068737, 3);
  sqcRYGate(q, -2.444782370222031, 4);
  sqcRZGate(q, -1.5650855141536224, 4);
  sqcRYGate(q, -3.0832128347364267, 5);
  sqcRZGate(q, -1.571851995075031, 5);
  sqcRYGate(q, -1.9179426470595555, 6);
  sqcRZGate(q, -0.0010073195846205252, 6);
  sqcRYGate(q, -1.4941270108568903, 7);
  sqcRZGate(q, -0.01512434244172999, 7);
  sqcRYGate(q, -0.6054267752125901, 8);
  sqcRZGate(q, 3.136860693921366, 8);
  sqcRYGate(q, -0.04995581135069127, 9);
  sqcRZGate(q, -3.0091893077856016, 9);
  sqcRYGate(q, -0.035065654109128985, 10);
  sqcRZGate(q, 0.0015813566904746468, 10);
  sqcRYGate(q, 2.5595587703791836, 11);
  sqcRZGate(q, -3.1386886517558072, 11);
  sqcRYGate(q, -1.5279740155095147, 12);
  sqcRZGate(q, -3.1415475679979856, 12);
  sqcRYGate(q, 1.5694969399935053, 13);
  sqcRZGate(q, -3.1415101985703386, 13);
  sqcRYGate(q, -0.046039642808079546, 14);
  sqcRZGate(q, 3.140455616539212, 14);
  sqcRYGate(q, 0.7121746618807236, 15);
  sqcRZGate(q, -3.139190692485204, 15);
  sqcRYGate(q, 0.07117566467514269, 16);
  sqcRZGate(q, -3.1401773166659104, 16);
  sqcRYGate(q, -1.4049678081994497, 17);
  sqcRZGate(q, 0.00012412628958592, 17);
  sqcRYGate(q, 1.5704963674878523, 18);
  sqcRZGate(q, -3.100248143651402, 18);
  sqcRYGate(q, 1.5709344306596236, 19);
  sqcRZGate(q, 3.106037785004693, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.04234821637544, 0);
  sqcRZGate(q, -3.133968340338888, 0);
  sqcRYGate(q, -1.8586572853628713, 1);
  sqcRZGate(q, -1.692133375841209, 1);
  sqcRYGate(q, 0.14865166612689712, 2);
  sqcRZGate(q, -1.2534560711682152, 2);
  sqcRYGate(q, 0.01691399862114069, 3);
  sqcRZGate(q, 2.518612984879548, 3);
  sqcRYGate(q, 0.025263048731142664, 4);
  sqcRZGate(q, -1.5738907992612585, 4);
  sqcRYGate(q, -3.040368471403735, 5);
  sqcRZGate(q, 1.5730645277750206, 5);
  sqcRYGate(q, 1.9016951586686157, 6);
  sqcRZGate(q, 2.998961673995178, 6);
  sqcRYGate(q, -0.031184106164109607, 7);
  sqcRZGate(q, 0.004752485251303007, 7);
  sqcRYGate(q, 3.0218587144363367, 8);
  sqcRZGate(q, -3.0166976229560087, 8);
  sqcRYGate(q, -3.1413894450790725, 9);
  sqcRZGate(q, 0.12614797573170924, 9);
  sqcRYGate(q, 3.010527893114084, 10);
  sqcRZGate(q, 3.130233049005426, 10);
  sqcRYGate(q, -3.1325215446394417, 11);
  sqcRZGate(q, 0.005247454950008341, 11);
  sqcRYGate(q, 2.39440471111546, 12);
  sqcRZGate(q, 0.0042863704446709505, 12);
  sqcRYGate(q, -1.5970817865810956, 13);
  sqcRZGate(q, -3.139806504847899, 13);
  sqcRYGate(q, 3.134876303637066, 14);
  sqcRZGate(q, -3.138421573832303, 14);
  sqcRYGate(q, -3.1058166138529075, 15);
  sqcRZGate(q, -3.1407238529809094, 15);
  sqcRYGate(q, -3.004423577237248, 16);
  sqcRZGate(q, 0.0015874906058403076, 16);
  sqcRYGate(q, -3.016305721755342, 17);
  sqcRZGate(q, 0.0007952033945874958, 17);
  sqcRYGate(q, 1.366090386106178, 18);
  sqcRZGate(q, -0.028479998213462924, 18);
  sqcRYGate(q, 0.569591256646234, 19);
  sqcRZGate(q, 2.615820672672082, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.1185211147301297, 0);
  sqcRZGate(q, -3.1058066552134345, 0);
  sqcRYGate(q, -1.5725028696741754, 1);
  sqcRZGate(q, -1.5301952240888579, 1);
  sqcRYGate(q, 3.140724914858246, 2);
  sqcRZGate(q, -1.2084543214648698, 2);
  sqcRYGate(q, 1.572581942875868, 3);
  sqcRZGate(q, 1.6116892671191385, 3);
  sqcRYGate(q, 0.31544615902998546, 4);
  sqcRZGate(q, -3.0972271638159548, 4);
  sqcRYGate(q, -0.7639325119822987, 5);
  sqcRZGate(q, 0.03940444601427018, 5);
  sqcRYGate(q, 3.1392599037540236, 6);
  sqcRZGate(q, -0.09567774591664067, 6);
  sqcRYGate(q, 2.4108172374591446, 7);
  sqcRZGate(q, 0.039357637992118555, 7);
  sqcRYGate(q, -0.013801545602526666, 8);
  sqcRZGate(q, 3.0587448874345147, 8);
  sqcRYGate(q, 2.4308050732099393, 9);
  sqcRZGate(q, 0.03953936021884894, 9);
  sqcRYGate(q, -3.0288790200034055, 10);
  sqcRZGate(q, 0.030674705136749303, 10);
  sqcRYGate(q, -0.5600167972229286, 11);
  sqcRZGate(q, 0.039515144085117165, 11);
  sqcRYGate(q, -2.808702185294124, 12);
  sqcRZGate(q, -3.0967463923199383, 12);
  sqcRYGate(q, 0.522524890220253, 13);
  sqcRZGate(q, -3.1015509336555427, 13);
  sqcRYGate(q, -0.2782586675196968, 14);
  sqcRZGate(q, -3.10576037441775, 14);
  sqcRYGate(q, 2.7083933383840386, 15);
  sqcRZGate(q, 0.04031382248089592, 15);
  sqcRYGate(q, -1.4810003036676793, 16);
  sqcRZGate(q, -3.101207331711303, 16);
  sqcRYGate(q, -0.9279433843679055, 17);
  sqcRZGate(q, -3.1022634174415984, 17);
  sqcRYGate(q, -1.5722950518756054, 18);
  sqcRZGate(q, 1.611312533995583, 18);
  sqcRYGate(q, 1.5702250553356532, 19);
  sqcRZGate(q, 1.610538600254971, 19);

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
