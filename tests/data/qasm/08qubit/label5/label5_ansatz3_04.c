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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -3.1415753693854787, 0);
  sqcRZGate(q, 1.446384810847265, 0);
  sqcRYGate(q, -2.441988840780348, 1);
  sqcRZGate(q, -0.004064459167261359, 1);
  sqcRYGate(q, 1.2350760444590492e-05, 2);
  sqcRZGate(q, 1.3859270956860634, 2);
  sqcRYGate(q, -1.5676370301356097, 3);
  sqcRZGate(q, -3.127795046523808, 3);
  sqcRYGate(q, 3.141564596164496, 4);
  sqcRZGate(q, -2.3420057829311722, 4);
  sqcRYGate(q, -1.567293777668259, 5);
  sqcRZGate(q, 0.043655267663856086, 5);
  sqcRYGate(q, -5.212125909714871e-05, 6);
  sqcRZGate(q, -0.3312742937660787, 6);
  sqcRYGate(q, 0.6584399227222058, 7);
  sqcRZGate(q, -1.5476268007830782, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.1415127186491545, 0);
  sqcRZGate(q, 1.4023758032120812, 0);
  sqcRYGate(q, -1.5691148246588407, 1);
  sqcRZGate(q, 1.6223270792011704, 1);
  sqcRYGate(q, 0.00023702298348204917, 2);
  sqcRZGate(q, 1.4562823404039515, 2);
  sqcRYGate(q, 1.3494850409771129, 3);
  sqcRZGate(q, 2.517819736288598, 3);
  sqcRYGate(q, -3.141574760339729, 4);
  sqcRZGate(q, -0.47881548300151694, 4);
  sqcRYGate(q, -1.7822771932064647, 5);
  sqcRZGate(q, 1.6864090106172487, 5);
  sqcRYGate(q, -1.5706610472343026, 6);
  sqcRZGate(q, 3.1414690124597815, 6);
  sqcRYGate(q, 1.9947522920710155, 7);
  sqcRZGate(q, -2.488096957405572, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.1415160319867175, 0);
  sqcRZGate(q, -2.9223125617230097, 0);
  sqcRYGate(q, 1.7605580894151798, 1);
  sqcRZGate(q, -0.7337073840253492, 1);
  sqcRYGate(q, -1.5707361378936904, 2);
  sqcRZGate(q, -1.2024732011223964, 2);
  sqcRYGate(q, -0.14030238312160054, 3);
  sqcRZGate(q, 0.6434212446232088, 3);
  sqcRYGate(q, -1.5708042262785522, 4);
  sqcRZGate(q, -1.5708157941398964, 4);
  sqcRYGate(q, 1.570107550565215, 5);
  sqcRZGate(q, -0.11107637519041924, 5);
  sqcRYGate(q, -1.5710372406712734, 6);
  sqcRZGate(q, -0.415415300216768, 6);
  sqcRYGate(q, -3.1008944942440997, 7);
  sqcRZGate(q, 0.014649490648871223, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1414675503882035, 0);
  sqcRZGate(q, 1.6896732557123597, 0);
  sqcRYGate(q, -1.5680943369291815, 1);
  sqcRZGate(q, -2.8570636943614245, 1);
  sqcRYGate(q, -3.141545839015161, 2);
  sqcRZGate(q, 1.0556708043876204, 2);
  sqcRYGate(q, -1.5708942890609308, 3);
  sqcRZGate(q, -1.5708142613777227, 3);
  sqcRYGate(q, 1.570743840726264, 4);
  sqcRZGate(q, 0.0029605113725687075, 4);
  sqcRYGate(q, -3.141584998213891, 5);
  sqcRZGate(q, 2.3125254357036957, 5);
  sqcRYGate(q, 1.9798632396650362e-05, 6);
  sqcRZGate(q, 0.12097752683292207, 6);
  sqcRYGate(q, -1.5707769322596823, 7);
  sqcRZGate(q, -1.432743527064818, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -7.948334908203236e-05, 0);
  sqcRZGate(q, 2.1628176551183778, 0);
  sqcRYGate(q, -2.589100764875014, 1);
  sqcRZGate(q, -2.968948357221858, 1);
  sqcRYGate(q, 3.140607719678108, 2);
  sqcRZGate(q, -0.6518634248652108, 2);
  sqcRYGate(q, -1.5707952344922784, 3);
  sqcRZGate(q, -1.8460165845686438, 3);
  sqcRYGate(q, 0.08026484014410151, 4);
  sqcRZGate(q, 3.138617995455727, 4);
  sqcRYGate(q, -1.5706491488329406, 5);
  sqcRZGate(q, -1.4958722672693119, 5);
  sqcRYGate(q, 0.0001921386723955365, 6);
  sqcRZGate(q, -1.976323748862447, 6);
  sqcRYGate(q, 0.2888488420816889, 7);
  sqcRZGate(q, -0.14389975079150727, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1413691973150213, 0);
  sqcRZGate(q, 2.9976132575070387, 0);
  sqcRYGate(q, -3.141331674426616, 1);
  sqcRZGate(q, -2.9683416787215378, 1);
  sqcRYGate(q, -1.5707544622598795, 2);
  sqcRZGate(q, 1.5716154810305556, 2);
  sqcRYGate(q, -3.1414732489829977, 3);
  sqcRZGate(q, 2.9947596782110804, 3);
  sqcRYGate(q, -1.570721157966056, 4);
  sqcRZGate(q, 3.1415604729103284, 4);
  sqcRYGate(q, 3.1378624915578297, 5);
  sqcRZGate(q, -1.496001381364678, 5);
  sqcRYGate(q, -2.393413336765391e-07, 6);
  sqcRZGate(q, 1.6577021228206077, 6);
  sqcRYGate(q, -1.5706535027775317, 7);
  sqcRZGate(q, 0.8043853522447388, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.9497301355608432, 0);
  sqcRZGate(q, -1.6110020521021158, 0);
  sqcRYGate(q, -0.5524582719074784, 1);
  sqcRZGate(q, 0.7076297066058067, 1);
  sqcRYGate(q, -2.8383624997087264, 2);
  sqcRZGate(q, 0.0007305221400548812, 2);
  sqcRYGate(q, 2.273783142570096e-05, 3);
  sqcRZGate(q, -2.688638865707064, 3);
  sqcRYGate(q, -1.5707893685186116, 4);
  sqcRZGate(q, 1.570478027655673, 4);
  sqcRYGate(q, 1.5707496758900343, 5);
  sqcRZGate(q, 0.23157080531383178, 5);
  sqcRYGate(q, -0.026669038054325356, 6);
  sqcRZGate(q, -2.037930819566353, 6);
  sqcRYGate(q, -2.0029862377678365, 7);
  sqcRZGate(q, -1.4076009689834574, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -5.5829032016703765e-05, 0);
  sqcRZGate(q, 1.9538419698785816, 0);
  sqcRYGate(q, -2.668350927965693e-06, 1);
  sqcRZGate(q, 0.7414942553074004, 1);
  sqcRYGate(q, 1.5708621720117604, 2);
  sqcRZGate(q, -2.798724517743312, 2);
  sqcRYGate(q, -3.141483618013228, 3);
  sqcRZGate(q, 2.3131112017672275, 3);
  sqcRYGate(q, -1.5708423023070812, 4);
  sqcRZGate(q, -2.7994391130496745, 4);
  sqcRYGate(q, 1.5707821882740083, 5);
  sqcRZGate(q, -2.981500707528707, 5);
  sqcRYGate(q, -3.141258700645087, 6);
  sqcRZGate(q, -1.6731949172426641, 6);
  sqcRYGate(q, 3.141426159384624, 7);
  sqcRZGate(q, 3.0852599656188806, 7);

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
