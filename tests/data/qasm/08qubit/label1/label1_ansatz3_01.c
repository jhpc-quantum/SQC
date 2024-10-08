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

  sqcRYGate(q, 3.050878561563858, 0);
  sqcRZGate(q, -3.1415918697136203, 0);
  sqcRYGate(q, 1.6688037820956898, 1);
  sqcRZGate(q, 6.430350578789297e-09, 1);
  sqcRYGate(q, -1.5707966044587522, 2);
  sqcRZGate(q, 1.1311655671469916, 2);
  sqcRYGate(q, 2.0713977083505526, 3);
  sqcRZGate(q, 1.5708422877581516, 3);
  sqcRYGate(q, 1.5707961761679323, 4);
  sqcRZGate(q, 2.122178617963308, 4);
  sqcRYGate(q, -2.279699484725918, 5);
  sqcRZGate(q, -1.570792855970363, 5);
  sqcRYGate(q, 1.5707949789470765, 6);
  sqcRZGate(q, 0.8123070195573909, 6);
  sqcRYGate(q, -0.2173243459656888, 7);
  sqcRZGate(q, 3.1415892607533342, 7);
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
  sqcRYGate(q, 1.5707964196549495, 0);
  sqcRZGate(q, -1.7703581277744238, 0);
  sqcRYGate(q, 2.484035105398289, 1);
  sqcRZGate(q, 1.5707954051042137, 1);
  sqcRYGate(q, 0.9950248520739616, 2);
  sqcRZGate(q, -1.5057745414631496, 2);
  sqcRYGate(q, 0.005495761146736, 3);
  sqcRZGate(q, -1.5708425513037376, 3);
  sqcRYGate(q, -2.9476116836235633e-07, 4);
  sqcRZGate(q, -0.27515976492346716, 4);
  sqcRYGate(q, 3.120379182549771, 5);
  sqcRZGate(q, 3.766273233279851e-06, 5);
  sqcRYGate(q, 2.5627273642663972, 6);
  sqcRZGate(q, -2.2858002958268453, 6);
  sqcRYGate(q, 1.570796053202442, 7);
  sqcRZGate(q, 1.1630305477024265, 7);
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
  sqcRYGate(q, -2.092853642468537, 0);
  sqcRZGate(q, -1.0874356806741903, 0);
  sqcRYGate(q, 0.0176241265237147, 1);
  sqcRZGate(q, -1.5707951895310441, 1);
  sqcRYGate(q, 2.565425841810841, 2);
  sqcRZGate(q, 2.828236303318865, 2);
  sqcRYGate(q, 2.2065353263520295, 3);
  sqcRZGate(q, -1.5708067273162518, 3);
  sqcRYGate(q, 4.7114651025026433e-07, 4);
  sqcRZGate(q, 1.1468216923029706, 4);
  sqcRYGate(q, -2.5530463833051393, 5);
  sqcRZGate(q, -4.1142140538852345e-07, 5);
  sqcRYGate(q, 2.732875263527026, 6);
  sqcRZGate(q, -1.068614745667535, 6);
  sqcRYGate(q, -1.7421842796828433, 7);
  sqcRZGate(q, 1.9698746702369814, 7);
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
  sqcRYGate(q, 1.570796329573385, 0);
  sqcRZGate(q, 5.324851967190391e-08, 0);
  sqcRYGate(q, -2.581756923772872, 1);
  sqcRZGate(q, 3.1415912294341775, 1);
  sqcRYGate(q, -2.5775930019537516, 2);
  sqcRZGate(q, -1.8669412202834224, 2);
  sqcRYGate(q, 3.1367045392447, 3);
  sqcRZGate(q, -1.5708123476058278, 3);
  sqcRYGate(q, -5.749884834926888e-07, 4);
  sqcRZGate(q, -0.712729360802065, 4);
  sqcRYGate(q, -3.0133841420740684, 5);
  sqcRZGate(q, -1.5707946845387186, 5);
  sqcRYGate(q, -0.4089926159779079, 6);
  sqcRZGate(q, -1.767186697098197, 6);
  sqcRYGate(q, -1.5707954173557275, 7);
  sqcRZGate(q, -3.1415906964351246, 7);
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
  sqcRYGate(q, -2.6584665714107474, 0);
  sqcRZGate(q, -2.708849232742987, 0);
  sqcRYGate(q, 0.11127063839542028, 1);
  sqcRZGate(q, -2.708847930855834, 1);
  sqcRYGate(q, 1.5707963311940327, 2);
  sqcRZGate(q, -1.1380528934010272, 2);
  sqcRYGate(q, -2.904432369502195, 3);
  sqcRZGate(q, -2.708853858288364, 3);
  sqcRYGate(q, 1.5707944078122957, 4);
  sqcRZGate(q, -1.1380512069613662, 4);
  sqcRYGate(q, -2.0878509159079233, 5);
  sqcRZGate(q, 0.43274655343121904, 5);
  sqcRYGate(q, -1.5707947661677515, 6);
  sqcRZGate(q, 2.0035427986162704, 6);
  sqcRYGate(q, 0.37795247867757265, 7);
  sqcRZGate(q, 0.4327447541702725, 7);

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
