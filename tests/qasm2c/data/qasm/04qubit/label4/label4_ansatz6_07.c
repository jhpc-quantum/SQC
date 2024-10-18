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

  sqcRYGate(q, 1.9284179691931178, 0);
  sqcRYGate(q, -1.195041666570124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.598747453360538, 0);
  sqcRYGate(q, -2.010162725399111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4814080812731336, 1);
  sqcRYGate(q, -0.2065461178431107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9559055556559755, 1);
  sqcRYGate(q, 0.7604831664882328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.366141952029371, 2);
  sqcRYGate(q, -2.256989644059467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6466756791753707, 2);
  sqcRYGate(q, 0.6098123848308274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0299317899847873, 0);
  sqcRYGate(q, 2.2602459588311814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40662646598973273, 0);
  sqcRYGate(q, -2.8374717859319043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4009844132344194, 1);
  sqcRYGate(q, -3.044680193579172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6778599988473104, 1);
  sqcRYGate(q, 0.7687761568737635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8008219888949821, 2);
  sqcRYGate(q, -2.5289830885513798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.048515896684287, 2);
  sqcRYGate(q, 2.348939191099016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.500689146503566, 0);
  sqcRYGate(q, -2.5695744598431274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5478334543272121, 0);
  sqcRYGate(q, 1.014896249195731, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.767275983009774, 1);
  sqcRYGate(q, 2.047014317319503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5144970931106227, 1);
  sqcRYGate(q, 1.9044653299596364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.089060095436182, 2);
  sqcRYGate(q, -2.77359635492934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1300642215975136, 2);
  sqcRYGate(q, 2.9738373729926897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.137331945650874, 0);
  sqcRYGate(q, 0.10163526400529534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2269419909675072, 0);
  sqcRYGate(q, -2.087400686598887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.050240485054899996, 1);
  sqcRYGate(q, 1.9155346038709462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.945764723532516, 1);
  sqcRYGate(q, 0.5962351249487858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6776518268151213, 2);
  sqcRYGate(q, -0.35644413568690386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6724511034241885, 2);
  sqcRYGate(q, 1.0536556314267465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.557947706647541, 0);
  sqcRYGate(q, 2.9688641003566394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.351983466011907, 0);
  sqcRYGate(q, -1.0593813954918838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5427455999394634, 1);
  sqcRYGate(q, 0.3910838569000301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5034481057566715, 1);
  sqcRYGate(q, -1.8719049436493977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0865050869244737, 2);
  sqcRYGate(q, 2.294766193239175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4679747527575544, 2);
  sqcRYGate(q, -2.4491202635928144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9989249951857246, 0);
  sqcRYGate(q, 1.0675561305339745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3908000614867664, 0);
  sqcRYGate(q, 0.8902847754080269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.809009212225495, 1);
  sqcRYGate(q, -1.453350936001585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.408093629713735, 1);
  sqcRYGate(q, -1.8943843323277523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1753718125884953, 2);
  sqcRYGate(q, -1.2724422251604741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3122477606678102, 2);
  sqcRYGate(q, -2.6316852969122184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2578239937710958, 0);
  sqcRYGate(q, -0.864553637212082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.616633600999567, 0);
  sqcRYGate(q, -0.991468176253111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2502818931917057, 1);
  sqcRYGate(q, 1.462224355194981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2601195389950774, 1);
  sqcRYGate(q, -1.3626104626570605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6978863172712586, 2);
  sqcRYGate(q, -1.459846288199997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2648063458478322, 2);
  sqcRYGate(q, 0.7239595747309319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.472221082686234, 0);
  sqcRYGate(q, 2.3004779319779733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9078462497497579, 0);
  sqcRYGate(q, 1.2729467475751768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3196418777952053, 1);
  sqcRYGate(q, 1.651926360355435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.667960457619615, 1);
  sqcRYGate(q, -3.096032463082744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.358877628088651, 2);
  sqcRYGate(q, -1.0790330809763615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8089990854534213, 2);
  sqcRYGate(q, 2.4510645246248814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.69628949655226, 0);
  sqcRYGate(q, -2.930600389512607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.006579006598953, 0);
  sqcRYGate(q, -2.305008986988219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0876306595002405, 1);
  sqcRYGate(q, -1.746861984346035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7640227606962813, 1);
  sqcRYGate(q, 0.6802456713450467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.086459385006714, 2);
  sqcRYGate(q, -1.868641638585885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5413143676305419, 2);
  sqcRYGate(q, -2.6292851202186553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7536679186117797, 0);
  sqcRYGate(q, 0.01978451090025456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4947028441144137, 0);
  sqcRYGate(q, 1.382083365064467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4070193668661197, 1);
  sqcRYGate(q, 1.6966489539474683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7276654414896555, 1);
  sqcRYGate(q, 0.5545199430348229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.317136163552941, 2);
  sqcRYGate(q, 2.8871278731302765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7979413481571296, 2);
  sqcRYGate(q, -2.499407562822476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.446598333560435, 0);
  sqcRYGate(q, -2.9965003035842352, 1);
  sqcRYGate(q, 2.847982281105269, 2);
  sqcRYGate(q, -0.44246496081841524, 3);

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
