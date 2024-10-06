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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 3.1340589955417255, 0);
  sqcRZGate(q, -1.5522719232084117, 0);
  sqcRYGate(q, 1.4297690262968032, 1);
  sqcRZGate(q, -2.5595406679223376, 1);
  sqcRYGate(q, 3.141592053248078, 2);
  sqcRZGate(q, -0.7629966883875214, 2);
  sqcRYGate(q, 1.5707686289142988, 3);
  sqcRZGate(q, 1.771054674316619e-05, 3);
  sqcRYGate(q, 1.285421616527973, 4);
  sqcRZGate(q, 3.141404433527674, 4);
  sqcRYGate(q, -2.0878532661406886, 5);
  sqcRZGate(q, 1.2214472298391055, 5);
  sqcRYGate(q, 0.003120161256025587, 6);
  sqcRZGate(q, -1.5602375148020338, 6);
  sqcRYGate(q, 3.141592053976332, 7);
  sqcRZGate(q, -0.4709851229800739, 7);
  sqcRYGate(q, -0.004978417919936362, 8);
  sqcRZGate(q, 0.2513973275774411, 8);
  sqcRYGate(q, 2.0341868171026305, 9);
  sqcRZGate(q, -0.7402687226041156, 9);
  sqcRYGate(q, 3.1415921017877886, 10);
  sqcRZGate(q, 1.964971417150716, 10);
  sqcRYGate(q, -1.570790208340621, 11);
  sqcRZGate(q, -3.1415513872030645, 11);
  sqcRYGate(q, -1.5868730797000872, 12);
  sqcRZGate(q, -1.5708037514796602, 12);
  sqcRYGate(q, -0.24379369369300807, 13);
  sqcRZGate(q, 0.013116313171917868, 13);
  sqcRYGate(q, -2.274155787943777, 14);
  sqcRZGate(q, -0.0002689897054173329, 14);
  sqcRYGate(q, 2.3847099707149095e-06, 15);
  sqcRZGate(q, 3.0162842952741182, 15);
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
  sqcRYGate(q, -0.616512408483854, 0);
  sqcRZGate(q, -2.7892210270858087, 0);
  sqcRYGate(q, -1.5708044905452099, 1);
  sqcRZGate(q, 3.0434341080774625, 1);
  sqcRYGate(q, -0.08767313323275913, 2);
  sqcRZGate(q, 1.6640579965769193, 2);
  sqcRYGate(q, 1.57079629046383, 3);
  sqcRZGate(q, 2.5383728163874313, 3);
  sqcRYGate(q, -1.5713258721074572, 4);
  sqcRZGate(q, -2.255739063292695, 4);
  sqcRYGate(q, 3.1415915152963256, 5);
  sqcRZGate(q, -1.5225359846573852, 5);
  sqcRYGate(q, -3.141469400815149, 6);
  sqcRZGate(q, 2.7243823337419433, 6);
  sqcRYGate(q, -1.5707884374315082, 7);
  sqcRZGate(q, -1.001669319085223, 7);
  sqcRYGate(q, -2.186109500933432, 8);
  sqcRZGate(q, 1.5709473023781273, 8);
  sqcRYGate(q, -9.398754736267279e-06, 9);
  sqcRZGate(q, 0.7384375308771256, 9);
  sqcRYGate(q, 1.571009095553685, 10);
  sqcRZGate(q, 3.0701088317245486, 10);
  sqcRYGate(q, -1.570779496517371, 11);
  sqcRZGate(q, -1.5696307839622763, 11);
  sqcRYGate(q, 1.5621859549360781, 12);
  sqcRZGate(q, 0.18278545456534712, 12);
  sqcRYGate(q, 1.5707964166020443, 13);
  sqcRZGate(q, 1.5928718706970106, 13);
  sqcRYGate(q, -1.577344861083601, 14);
  sqcRZGate(q, -0.5571538538392292, 14);
  sqcRYGate(q, 3.1415886946068383, 15);
  sqcRZGate(q, 1.6899730699015711, 15);
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
  sqcRYGate(q, -3.1415861823843607, 0);
  sqcRZGate(q, 0.355115721685256, 0);
  sqcRYGate(q, 2.1767848658197058e-05, 1);
  sqcRZGate(q, 0.09814155749810972, 1);
  sqcRYGate(q, -1.6643945926388817, 2);
  sqcRZGate(q, 3.125033669558004, 2);
  sqcRYGate(q, -1.7109739268379913, 3);
  sqcRZGate(q, 0.41256786262832174, 3);
  sqcRYGate(q, -0.0361675849825045, 4);
  sqcRZGate(q, -0.7977485480176051, 4);
  sqcRYGate(q, -3.126010567892874, 5);
  sqcRZGate(q, 2.7834997038371205, 5);
  sqcRYGate(q, 3.141592604483689, 6);
  sqcRZGate(q, -2.0099417183644874, 6);
  sqcRYGate(q, 4.151308906050922e-06, 7);
  sqcRZGate(q, -2.1399253583469244, 7);
  sqcRYGate(q, 1.474644331054426, 8);
  sqcRZGate(q, 1.5698356011659156, 8);
  sqcRYGate(q, 0.8564848940697746, 9);
  sqcRZGate(q, 2.697910818254428, 9);
  sqcRYGate(q, -0.17225187375105797, 10);
  sqcRZGate(q, -2.9555887584766225, 10);
  sqcRYGate(q, 0.022770141102605543, 11);
  sqcRZGate(q, -2.7977043931946857, 11);
  sqcRYGate(q, 2.137823251757709e-09, 12);
  sqcRZGate(q, -0.18780487016642855, 12);
  sqcRYGate(q, 3.1298757961185784, 13);
  sqcRZGate(q, -1.5487202989148654, 13);
  sqcRYGate(q, -3.1299251430906234, 14);
  sqcRZGate(q, 2.5846135956971694, 14);
  sqcRYGate(q, -1.524885522147918, 15);
  sqcRZGate(q, -1.5805254289453758, 15);
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
  sqcRYGate(q, -1.792635399392891, 0);
  sqcRZGate(q, 0.7660756692212071, 0);
  sqcRYGate(q, -1.570776445589432, 1);
  sqcRZGate(q, 2.1873662197752575, 1);
  sqcRYGate(q, 0.01964403275660662, 2);
  sqcRZGate(q, -2.352463150575132, 2);
  sqcRYGate(q, 3.1415913134314093, 3);
  sqcRZGate(q, -2.017647612142408, 3);
  sqcRYGate(q, -1.4239843226727666, 4);
  sqcRZGate(q, 0.7612222619419945, 4);
  sqcRYGate(q, 3.1415901283818037, 5);
  sqcRZGate(q, 3.0939699016065063, 5);
  sqcRYGate(q, 1.3815578385446106, 6);
  sqcRZGate(q, 0.7582774075770882, 6);
  sqcRYGate(q, -1.5707925228745543, 7);
  sqcRZGate(q, 0.31007910655858595, 7);
  sqcRYGate(q, -0.0571873164958571, 8);
  sqcRZGate(q, 0.7592804419621961, 8);
  sqcRYGate(q, -3.14159112662167, 9);
  sqcRZGate(q, -0.13355633867826813, 9);
  sqcRYGate(q, 1.5686200109071575, 10);
  sqcRZGate(q, 2.3288528621510243, 10);
  sqcRYGate(q, 3.1415503143037076, 11);
  sqcRZGate(q, 2.2260243095921606, 11);
  sqcRYGate(q, -1.570819360714961, 12);
  sqcRZGate(q, -0.8122782155419966, 12);
  sqcRYGate(q, -1.5707970139431415, 13);
  sqcRZGate(q, -2.831408862638577, 13);
  sqcRYGate(q, -3.0326570762763727, 14);
  sqcRZGate(q, -2.3831423834238987, 14);
  sqcRYGate(q, 3.903897100698828e-06, 15);
  sqcRZGate(q, -1.2508726768815337, 15);

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
