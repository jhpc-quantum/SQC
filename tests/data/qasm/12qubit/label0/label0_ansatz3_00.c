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

  sqcRYGate(q, 0.12128697854449319, 0);
  sqcRZGate(q, 0.003340013769911998, 0);
  sqcRYGate(q, 0.018283077216864545, 1);
  sqcRZGate(q, -6.622301680536678e-05, 1);
  sqcRYGate(q, 0.019305758617616204, 2);
  sqcRZGate(q, 1.570719844695161, 2);
  sqcRYGate(q, 0.23846932785495675, 3);
  sqcRZGate(q, 1.8292911581075475, 3);
  sqcRYGate(q, -1.570799860144552, 4);
  sqcRZGate(q, 0.000558111357421368, 4);
  sqcRYGate(q, -1.5707871515412937, 5);
  sqcRZGate(q, -1.5707844417803836, 5);
  sqcRYGate(q, -2.5507357852727086, 6);
  sqcRZGate(q, -3.141581793025348, 6);
  sqcRYGate(q, 0.0005024809474178937, 7);
  sqcRZGate(q, 0.046325346548242455, 7);
  sqcRYGate(q, -2.9357083047941352, 8);
  sqcRZGate(q, -0.19541376060097249, 8);
  sqcRYGate(q, 1.679217392366649, 9);
  sqcRZGate(q, 3.120360150106116, 9);
  sqcRYGate(q, -1.571085489852674, 10);
  sqcRZGate(q, 2.0065698350863066, 10);
  sqcRYGate(q, 4.762435201309556e-06, 11);
  sqcRZGate(q, -2.2378874799010093, 11);
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
  sqcRYGate(q, 1.5306743766505342, 0);
  sqcRZGate(q, -1.5712022702419877, 0);
  sqcRYGate(q, 2.8800810242618535, 1);
  sqcRZGate(q, -0.0001009000445790585, 1);
  sqcRYGate(q, -1.5701113336102008, 2);
  sqcRZGate(q, -2.023247619476872, 2);
  sqcRYGate(q, -8.726470873909875e-06, 3);
  sqcRZGate(q, 1.312304961638723, 3);
  sqcRYGate(q, -0.3628892059971287, 4);
  sqcRZGate(q, -1.7011180229455078, 4);
  sqcRYGate(q, 1.5702580870335543, 5);
  sqcRZGate(q, -1.4938991766221819, 5);
  sqcRYGate(q, 1.5708608534908197, 6);
  sqcRZGate(q, 3.1415854930568883, 6);
  sqcRYGate(q, -3.1415898256172072, 7);
  sqcRZGate(q, -1.6863292248889008, 7);
  sqcRYGate(q, -3.141592284258188, 8);
  sqcRZGate(q, 1.8634534403098995, 8);
  sqcRYGate(q, -1.9117302630759831, 9);
  sqcRZGate(q, -3.133593904141409, 9);
  sqcRYGate(q, -1.8220732752844385e-05, 10);
  sqcRZGate(q, 2.745149336878904, 10);
  sqcRYGate(q, -1.3362756286568158, 11);
  sqcRZGate(q, 1.5695391626635806, 11);
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
  sqcRYGate(q, 1.5707832480218953, 0);
  sqcRZGate(q, 0.02595959111839186, 0);
  sqcRYGate(q, -2.938402380947034, 1);
  sqcRZGate(q, 3.1414833925614665, 1);
  sqcRYGate(q, 3.1415899433752745, 2);
  sqcRZGate(q, -2.0232611306503316, 2);
  sqcRYGate(q, -0.20553789042640908, 3);
  sqcRZGate(q, -1.5708048656403273, 3);
  sqcRYGate(q, -3.1414252770961273, 4);
  sqcRZGate(q, 2.876124674549055, 4);
  sqcRYGate(q, 1.5708114064932666, 5);
  sqcRZGate(q, 1.5708663152576179, 5);
  sqcRYGate(q, -0.6318860471130421, 6);
  sqcRZGate(q, 2.3436375559888036, 6);
  sqcRYGate(q, 2.9548890609193985, 7);
  sqcRZGate(q, 6.791933466132605e-05, 7);
  sqcRYGate(q, -7.182994533394549e-06, 8);
  sqcRZGate(q, -0.4221509911467928, 8);
  sqcRYGate(q, -0.023473318002505295, 9);
  sqcRZGate(q, 3.0640473890688398, 9);
  sqcRYGate(q, 3.139273633097951, 10);
  sqcRZGate(q, -1.5314667129760853, 10);
  sqcRYGate(q, -1.5708001994941396, 11);
  sqcRZGate(q, -3.1413972071048133, 11);
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
  sqcRYGate(q, 3.1415218907665747, 0);
  sqcRZGate(q, -1.544816038572117, 0);
  sqcRYGate(q, 1.570792674251625, 1);
  sqcRZGate(q, 3.141422955455511, 1);
  sqcRYGate(q, 1.5708047610700973, 2);
  sqcRZGate(q, 1.5700728649540927, 2);
  sqcRYGate(q, -1.5707956261719296, 3);
  sqcRZGate(q, -8.810305986142992e-06, 3);
  sqcRYGate(q, -3.1415925271054896, 4);
  sqcRZGate(q, 3.0064452066326375, 4);
  sqcRYGate(q, 1.5707862120888092, 5);
  sqcRZGate(q, -3.141583986182734, 5);
  sqcRYGate(q, 3.1415003930571337, 6);
  sqcRZGate(q, 2.3436279646050484, 6);
  sqcRYGate(q, 1.570808300941257, 7);
  sqcRZGate(q, -3.141592636058823, 7);
  sqcRYGate(q, -1.5707961511897677, 8);
  sqcRZGate(q, 5.669183996026561e-06, 8);
  sqcRYGate(q, -1.5707958301925349, 9);
  sqcRZGate(q, -6.620887107685396e-05, 9);
  sqcRYGate(q, -1.591424513648987, 10);
  sqcRZGate(q, 1.5705050321808782, 10);
  sqcRYGate(q, -0.02627233974904275, 11);
  sqcRZGate(q, -1.5709673183335764, 11);

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
