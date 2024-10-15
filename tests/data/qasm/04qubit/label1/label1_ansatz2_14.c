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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.4453972122822571, 0);
  sqcRZGate(q, -0.2008189197499226, 0);
  sqcRYGate(q, 1.1794544476236701, 1);
  sqcRZGate(q, -0.6186088777589127, 1);
  sqcRYGate(q, 1.4464636673037141, 2);
  sqcRZGate(q, -2.7497636177614906, 2);
  sqcRYGate(q, 1.319271256515142, 3);
  sqcRZGate(q, -1.4753949862377036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0806928183493842, 0);
  sqcRZGate(q, 0.024502734332092935, 0);
  sqcRYGate(q, 3.00881668280679, 1);
  sqcRZGate(q, 0.3591455073980772, 1);
  sqcRYGate(q, 0.8314723685417974, 2);
  sqcRZGate(q, -0.493212202869874, 2);
  sqcRYGate(q, -1.1392151724122386, 3);
  sqcRZGate(q, -1.9953935126445757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.613224848417302, 0);
  sqcRZGate(q, 2.976191702166724, 0);
  sqcRYGate(q, 2.9331701657234817, 1);
  sqcRZGate(q, -2.6003808056387077, 1);
  sqcRYGate(q, -0.8584839722427011, 2);
  sqcRZGate(q, 3.1379112543437633, 2);
  sqcRYGate(q, 0.3875930605022333, 3);
  sqcRZGate(q, -2.6670590368609295, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.358909796421246, 0);
  sqcRZGate(q, 3.03032329467905, 0);
  sqcRYGate(q, -0.10012775410134278, 1);
  sqcRZGate(q, -2.1618686038124695, 1);
  sqcRYGate(q, 2.619307520650519, 2);
  sqcRZGate(q, 0.31764317833343536, 2);
  sqcRYGate(q, 0.20743960871718148, 3);
  sqcRZGate(q, 2.1464951508317136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3463157626202902, 0);
  sqcRZGate(q, -3.0931513610134522, 0);
  sqcRYGate(q, -0.009316461934910869, 1);
  sqcRZGate(q, -0.02415458053018585, 1);
  sqcRYGate(q, -2.4645953028891747, 2);
  sqcRZGate(q, 0.054795389043610136, 2);
  sqcRYGate(q, -2.920271524692466, 3);
  sqcRZGate(q, -2.7229735835866884, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6348526887997066, 0);
  sqcRZGate(q, -0.238998684440147, 0);
  sqcRYGate(q, -2.481285734792252, 1);
  sqcRZGate(q, -1.9447089507927426, 1);
  sqcRYGate(q, -0.16051435979312334, 2);
  sqcRZGate(q, -0.9438869022752341, 2);
  sqcRYGate(q, -2.265568392594698, 3);
  sqcRZGate(q, 0.3305248662537587, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.296560348192066, 0);
  sqcRZGate(q, 1.8626051428607244, 0);
  sqcRYGate(q, -2.2749567983525285, 1);
  sqcRZGate(q, -0.7200839551529281, 1);
  sqcRYGate(q, 1.2678032331897375, 2);
  sqcRZGate(q, 0.803568320823678, 2);
  sqcRYGate(q, -2.4478275968206265, 3);
  sqcRZGate(q, -2.168267311461693, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6092002233289406, 0);
  sqcRZGate(q, -2.7538108584142726, 0);
  sqcRYGate(q, 0.8398104174203886, 1);
  sqcRZGate(q, -2.451141507352554, 1);
  sqcRYGate(q, 1.1960100160471532, 2);
  sqcRZGate(q, -1.2182646096368215, 2);
  sqcRYGate(q, 2.432896059511231, 3);
  sqcRZGate(q, 2.492394966485046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5229032154524917, 0);
  sqcRZGate(q, 2.7062910383571364, 0);
  sqcRYGate(q, 1.8467082294214752, 1);
  sqcRZGate(q, 2.5920605449073104, 1);
  sqcRYGate(q, -0.7860305012018037, 2);
  sqcRZGate(q, 0.33822384002609546, 2);
  sqcRYGate(q, -2.4450758589179413, 3);
  sqcRZGate(q, 0.09352673961181779, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.899599635505776, 0);
  sqcRZGate(q, -0.9353297980280094, 0);
  sqcRYGate(q, -1.4539183563133289, 1);
  sqcRZGate(q, 0.06575120635627615, 1);
  sqcRYGate(q, -1.6267796676885755, 2);
  sqcRZGate(q, 1.9233428956207643, 2);
  sqcRYGate(q, -1.7787060389114857, 3);
  sqcRZGate(q, -0.16640836219419244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.29926338889060483, 0);
  sqcRZGate(q, 0.054940715035012744, 0);
  sqcRYGate(q, 0.83721053477294, 1);
  sqcRZGate(q, -2.9479101120462734, 1);
  sqcRYGate(q, -2.6530655500304916, 2);
  sqcRZGate(q, 0.711655938484403, 2);
  sqcRYGate(q, 2.1318496791310664, 3);
  sqcRZGate(q, 1.7613317774325878, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3542904500264539, 0);
  sqcRZGate(q, 1.7123501475953775, 0);
  sqcRYGate(q, 0.9336843656980927, 1);
  sqcRZGate(q, 2.9454634009922067, 1);
  sqcRYGate(q, -2.7678652478037193, 2);
  sqcRZGate(q, 2.7227477913743683, 2);
  sqcRYGate(q, -1.105192071283832, 3);
  sqcRZGate(q, -0.7416354150819667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.09488045478542162, 0);
  sqcRZGate(q, 0.9993594284580188, 0);
  sqcRYGate(q, -0.8466581780155789, 1);
  sqcRZGate(q, -0.24472683160739767, 1);
  sqcRYGate(q, 2.6928651113340054, 2);
  sqcRZGate(q, 1.7606016314086235, 2);
  sqcRYGate(q, 0.9656358697591721, 3);
  sqcRZGate(q, 2.0901028797429895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3514132337194074, 0);
  sqcRZGate(q, 1.3350019672581341, 0);
  sqcRYGate(q, -1.456638301841001, 1);
  sqcRZGate(q, -1.5015861430167943, 1);
  sqcRYGate(q, -1.7139958659628372, 2);
  sqcRZGate(q, -0.349533343836327, 2);
  sqcRYGate(q, -1.9593733295148583, 3);
  sqcRZGate(q, 1.8174410550636937, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.845233921762021, 0);
  sqcRZGate(q, -0.8506832671504256, 0);
  sqcRYGate(q, -3.0512787307686984, 1);
  sqcRZGate(q, -1.3155616286782872, 1);
  sqcRYGate(q, -2.6265419499419322, 2);
  sqcRZGate(q, -2.723386784218386, 2);
  sqcRYGate(q, -2.020499822832934, 3);
  sqcRZGate(q, 0.3704299381196279, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6364186453980647, 0);
  sqcRZGate(q, 2.279230437026293, 0);
  sqcRYGate(q, 1.193227210393211, 1);
  sqcRZGate(q, 1.3139388610025682, 1);
  sqcRYGate(q, 1.1367534839458564, 2);
  sqcRZGate(q, 1.172765964347203, 2);
  sqcRYGate(q, -2.198582189588218, 3);
  sqcRZGate(q, 1.771145926321462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3076059116348802, 0);
  sqcRZGate(q, 0.6578543427347797, 0);
  sqcRYGate(q, -2.2559659387938025, 1);
  sqcRZGate(q, -3.1381434264471464, 1);
  sqcRYGate(q, 0.10438176923994558, 2);
  sqcRZGate(q, 3.0441874594887284, 2);
  sqcRYGate(q, -3.0416355984608554, 3);
  sqcRZGate(q, -0.45722765109133195, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8745720939946802, 0);
  sqcRZGate(q, 3.0253433610737903, 0);
  sqcRYGate(q, -2.075458471330542, 1);
  sqcRZGate(q, -2.942840031074766, 1);
  sqcRYGate(q, 2.021529607184992, 2);
  sqcRZGate(q, -2.5305123501623723, 2);
  sqcRYGate(q, 1.4845494862465507, 3);
  sqcRZGate(q, -1.9623553802187992, 3);

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
