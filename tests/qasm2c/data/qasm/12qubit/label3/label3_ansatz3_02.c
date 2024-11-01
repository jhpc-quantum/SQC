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

  sqcRYGate(q, -1.4444740981224362, 0);
  sqcRZGate(q, -7.27032914067724e-05, 0);
  sqcRYGate(q, -1.5701411541659178, 1);
  sqcRZGate(q, 0.43158445490840336, 1);
  sqcRYGate(q, 3.0894044379291827, 2);
  sqcRZGate(q, 1.5710049907777635, 2);
  sqcRYGate(q, -1.5711986569098655, 3);
  sqcRZGate(q, -0.014583858706542331, 3);
  sqcRYGate(q, 1.5709077129483293, 4);
  sqcRZGate(q, -0.23347284547308644, 4);
  sqcRYGate(q, -1.1799558648668995, 5);
  sqcRZGate(q, 3.1414976857576464, 5);
  sqcRYGate(q, 0.9346881812850986, 6);
  sqcRZGate(q, 2.88363295175551, 6);
  sqcRYGate(q, -3.136072945566578, 7);
  sqcRZGate(q, 3.05156119179556, 7);
  sqcRYGate(q, 0.16964053399013976, 8);
  sqcRZGate(q, 0.1291492858603114, 8);
  sqcRYGate(q, 1.535738488231631, 9);
  sqcRZGate(q, -1.5703152650233894, 9);
  sqcRYGate(q, -2.4849298363906884, 10);
  sqcRZGate(q, -1.5940605523280347, 10);
  sqcRYGate(q, -1.963790258718475, 11);
  sqcRZGate(q, -3.141337592673025, 11);
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
  sqcRYGate(q, 1.5710159369491672, 0);
  sqcRZGate(q, -2.0802689240274717, 0);
  sqcRYGate(q, 2.7327844690098053, 1);
  sqcRZGate(q, 2.467272965977708, 1);
  sqcRYGate(q, -1.571102218970862, 2);
  sqcRZGate(q, 3.1144625559041734, 2);
  sqcRYGate(q, -1.2038945443466433, 3);
  sqcRZGate(q, 2.3591643691410216, 3);
  sqcRYGate(q, -3.1415199070690734, 4);
  sqcRZGate(q, -0.24014927989407206, 4);
  sqcRYGate(q, 1.5881429549018888, 5);
  sqcRZGate(q, 0.000141030874587114, 5);
  sqcRYGate(q, -3.162501695870933e-05, 6);
  sqcRZGate(q, -2.896389383312363, 6);
  sqcRYGate(q, 2.6951130705218316, 7);
  sqcRZGate(q, 2.019921533940237, 7);
  sqcRYGate(q, -0.08437806140883719, 8);
  sqcRZGate(q, -0.1496867235039591, 8);
  sqcRYGate(q, 1.6176993483663278, 9);
  sqcRZGate(q, -1.5052202050927228, 9);
  sqcRYGate(q, 1.5331932092435236, 10);
  sqcRZGate(q, -2.24561697443803, 10);
  sqcRYGate(q, 0.2389124306817353, 11);
  sqcRZGate(q, 3.1405925162149844, 11);
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
  sqcRYGate(q, -3.1415666079296924, 0);
  sqcRZGate(q, 1.6632033187683362, 0);
  sqcRYGate(q, -1.9339466537278946, 1);
  sqcRZGate(q, 1.158666613749821, 1);
  sqcRYGate(q, 3.040426013563733, 2);
  sqcRZGate(q, -1.799243224280065, 2);
  sqcRYGate(q, -2.978142665750469, 3);
  sqcRZGate(q, 1.7043792336527126, 3);
  sqcRYGate(q, 1.5700560762788507, 4);
  sqcRZGate(q, 1.5978329371111029, 4);
  sqcRYGate(q, 2.525718002793265, 5);
  sqcRZGate(q, -1.570591265410449, 5);
  sqcRYGate(q, -0.08378337911049272, 6);
  sqcRZGate(q, -1.5518683671848048, 6);
  sqcRYGate(q, 3.141283365477263, 7);
  sqcRZGate(q, -2.6551955693085407, 7);
  sqcRYGate(q, 3.1283459969118463, 8);
  sqcRZGate(q, 1.4730307176526178, 8);
  sqcRYGate(q, -1.5723479861099325, 9);
  sqcRZGate(q, -1.5490837181227326, 9);
  sqcRYGate(q, 3.121678031711096, 10);
  sqcRZGate(q, -1.094986191543529, 10);
  sqcRYGate(q, 1.1212325720385445, 11);
  sqcRZGate(q, 2.089371166789561, 11);
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
  sqcRYGate(q, 1.5709033294257795, 0);
  sqcRZGate(q, -3.1377653049907637, 0);
  sqcRYGate(q, 0.6110007664707338, 1);
  sqcRZGate(q, -3.055154881275773, 1);
  sqcRYGate(q, -1.5705739195002284, 2);
  sqcRZGate(q, 3.1229745899773964, 2);
  sqcRYGate(q, -0.9803946347446085, 3);
  sqcRZGate(q, -1.4861342578499341, 3);
  sqcRYGate(q, -1.5717332214920754, 4);
  sqcRZGate(q, -3.141442980609267, 4);
  sqcRYGate(q, -1.5700038649117687, 5);
  sqcRZGate(q, 1.1876128003715063, 5);
  sqcRYGate(q, 3.1293932226021717, 6);
  sqcRZGate(q, 3.125655531357013, 6);
  sqcRYGate(q, 3.1087629586224903, 7);
  sqcRZGate(q, -1.528756760700304, 7);
  sqcRYGate(q, 1.5643923218279394, 8);
  sqcRZGate(q, 3.127941059249631, 8);
  sqcRYGate(q, -0.23501993597220616, 9);
  sqcRZGate(q, -3.1235687920583337, 9);
  sqcRYGate(q, -1.596221795865807, 10);
  sqcRZGate(q, 1.643257175886677, 10);
  sqcRYGate(q, -0.0020248194237781902, 11);
  sqcRZGate(q, 2.614238518860365, 11);
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
  sqcRYGate(q, 2.9314863273601874, 0);
  sqcRZGate(q, 3.1358652766330146, 0);
  sqcRYGate(q, -1.5701421166827236, 1);
  sqcRZGate(q, -0.44695158805324015, 1);
  sqcRYGate(q, 3.1223460435041384, 2);
  sqcRZGate(q, -1.5978093648029041, 2);
  sqcRYGate(q, -1.6765212323063499, 3);
  sqcRZGate(q, 1.6507315481992775, 3);
  sqcRYGate(q, -1.569918378766988, 4);
  sqcRZGate(q, 1.2271865745322352, 4);
  sqcRYGate(q, 3.124366919022495, 5);
  sqcRZGate(q, -0.37162125434504595, 5);
  sqcRYGate(q, -2.8652373662068236, 6);
  sqcRZGate(q, -2.9033550520295575, 6);
  sqcRYGate(q, -2.9241655232536115, 7);
  sqcRZGate(q, 0.7336413675248645, 7);
  sqcRYGate(q, -0.05133035837665556, 8);
  sqcRZGate(q, 0.008621637867427437, 8);
  sqcRYGate(q, -0.09235687373693932, 9);
  sqcRZGate(q, 0.38119897748484544, 9);
  sqcRYGate(q, 1.0248866340143994, 10);
  sqcRZGate(q, 2.809769680908997, 10);
  sqcRYGate(q, 0.8172627494315814, 11);
  sqcRZGate(q, 1.3593730143421436, 11);
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
  sqcRYGate(q, -1.4511888102360424, 0);
  sqcRZGate(q, -2.0203982896041457, 0);
  sqcRYGate(q, 3.0964925678117945, 1);
  sqcRZGate(q, 0.674500671029635, 1);
  sqcRYGate(q, -1.580659668479622, 2);
  sqcRZGate(q, -2.0216478755818037, 2);
  sqcRYGate(q, -1.5514415460748587, 3);
  sqcRZGate(q, 2.6921005658698336, 3);
  sqcRYGate(q, 0.0251682945356577, 4);
  sqcRZGate(q, 1.4619791585999986, 4);
  sqcRYGate(q, -1.5519369450096852, 5);
  sqcRZGate(q, 2.6920712134817273, 5);
  sqcRYGate(q, -3.114083497455123, 6);
  sqcRZGate(q, 1.3784897088899004, 6);
  sqcRYGate(q, -3.1164319451435882, 7);
  sqcRZGate(q, -2.8573045402253463, 7);
  sqcRYGate(q, 1.6029271049397302, 8);
  sqcRZGate(q, 1.1401511465836398, 8);
  sqcRYGate(q, -3.090160755285197, 9);
  sqcRZGate(q, 1.547472736028102, 9);
  sqcRYGate(q, 0.013771999978131732, 10);
  sqcRZGate(q, 1.4723089978614565, 10);
  sqcRYGate(q, 3.1246924665480513, 11);
  sqcRZGate(q, -0.6611320557803568, 11);

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
