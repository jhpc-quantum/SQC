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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.8357987762747173, 0);
  sqcRZGate(q, 2.924381044253326, 0);
  sqcRYGate(q, 2.7784857160233862, 1);
  sqcRZGate(q, 0.32122521208993454, 1);
  sqcRYGate(q, 2.8107248839140238, 2);
  sqcRZGate(q, -2.0413616375888566, 2);
  sqcRYGate(q, 2.479784501570023, 3);
  sqcRZGate(q, 2.488228106391552, 3);
  sqcRYGate(q, -1.390552166107076, 4);
  sqcRZGate(q, -0.10334717825851403, 4);
  sqcRYGate(q, 2.5740422023192004, 5);
  sqcRZGate(q, 2.7458083261877944, 5);
  sqcRYGate(q, -0.868456939382013, 6);
  sqcRZGate(q, 2.788214275311227, 6);
  sqcRYGate(q, 0.8159613056738089, 7);
  sqcRZGate(q, -2.231930021498336, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.538186922458363, 0);
  sqcRZGate(q, -2.930083692050345, 0);
  sqcRYGate(q, 2.9097014322904915, 1);
  sqcRZGate(q, 2.672347405564548, 1);
  sqcRYGate(q, 0.9170391563635214, 2);
  sqcRZGate(q, 1.176049739715186, 2);
  sqcRYGate(q, 1.1234369520180545, 3);
  sqcRZGate(q, 2.2004945100006, 3);
  sqcRYGate(q, -2.770569363922963, 4);
  sqcRZGate(q, -1.5632024580606965, 4);
  sqcRYGate(q, -1.8325776271437189, 5);
  sqcRZGate(q, -1.5475484100598091, 5);
  sqcRYGate(q, -2.862881966201956, 6);
  sqcRZGate(q, 2.739510171630181, 6);
  sqcRYGate(q, 2.0534993868228075, 7);
  sqcRZGate(q, -1.9435000446991284, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4777635164074025, 0);
  sqcRZGate(q, -2.8347732766561307, 0);
  sqcRYGate(q, 0.38618988625414197, 1);
  sqcRZGate(q, -3.0379220656999957, 1);
  sqcRYGate(q, -2.362437489077085, 2);
  sqcRZGate(q, 2.617788671995591, 2);
  sqcRYGate(q, -2.158563661766016, 3);
  sqcRZGate(q, -2.0748762619789076, 3);
  sqcRYGate(q, -1.034303967454755, 4);
  sqcRZGate(q, 0.5199066571559507, 4);
  sqcRYGate(q, 1.531366104955361, 5);
  sqcRZGate(q, 2.9349929019005807, 5);
  sqcRYGate(q, 0.8895380666193722, 6);
  sqcRZGate(q, -2.33080611532768, 6);
  sqcRYGate(q, -2.6345380887014347, 7);
  sqcRZGate(q, 0.45265421595210886, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7866300025542037, 0);
  sqcRZGate(q, -2.787661195162386, 0);
  sqcRYGate(q, -2.207603882514672, 1);
  sqcRZGate(q, -0.5080331679573935, 1);
  sqcRYGate(q, -1.4737136136849924, 2);
  sqcRZGate(q, 0.9516225330720164, 2);
  sqcRYGate(q, -1.1642559353057065, 3);
  sqcRZGate(q, -1.7324835517130073, 3);
  sqcRYGate(q, 2.881287327245357, 4);
  sqcRZGate(q, -1.6483566660444937, 4);
  sqcRYGate(q, -0.16092789619239412, 5);
  sqcRZGate(q, -2.884542123879863, 5);
  sqcRYGate(q, 0.7368174277466222, 6);
  sqcRZGate(q, -1.9701228481886037, 6);
  sqcRYGate(q, -2.385200977849946, 7);
  sqcRZGate(q, -0.8035617786996263, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.09432375199592866, 0);
  sqcRZGate(q, -2.1738884553111166, 0);
  sqcRYGate(q, 0.5424261969291768, 1);
  sqcRZGate(q, -3.105890516998937, 1);
  sqcRYGate(q, -0.5895900038724706, 2);
  sqcRZGate(q, -0.6289351385546712, 2);
  sqcRYGate(q, -1.638578233267934, 3);
  sqcRZGate(q, 1.7283758147051296, 3);
  sqcRYGate(q, -2.81893407544897, 4);
  sqcRZGate(q, -0.42682869606761553, 4);
  sqcRYGate(q, 0.1588381004012671, 5);
  sqcRZGate(q, -1.9796786346107282, 5);
  sqcRYGate(q, 1.4983105399218128, 6);
  sqcRZGate(q, -0.37817030727222467, 6);
  sqcRYGate(q, -0.7077672881145677, 7);
  sqcRZGate(q, -0.3591959663245811, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.8925326864187815, 0);
  sqcRZGate(q, -2.9393424932890513, 0);
  sqcRYGate(q, -2.9140809171720594, 1);
  sqcRZGate(q, -1.4297940834112737, 1);
  sqcRYGate(q, 1.355972265299143, 2);
  sqcRZGate(q, -1.8440396084293873, 2);
  sqcRYGate(q, 1.4226166085443694, 3);
  sqcRZGate(q, 2.7076361110243083, 3);
  sqcRYGate(q, -2.340886540982456, 4);
  sqcRZGate(q, -2.7982845562655103, 4);
  sqcRYGate(q, -2.978668023916259, 5);
  sqcRZGate(q, -0.7270589440535948, 5);
  sqcRYGate(q, -0.3030059475960547, 6);
  sqcRZGate(q, 2.065726370913659, 6);
  sqcRYGate(q, -1.5733507783799472, 7);
  sqcRZGate(q, -0.25752922909335657, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.16647574869783, 0);
  sqcRZGate(q, -0.1740610822171238, 0);
  sqcRYGate(q, 0.9400204404682193, 1);
  sqcRZGate(q, -1.1591460084922136, 1);
  sqcRYGate(q, -1.5478333965742443, 2);
  sqcRZGate(q, -1.8174900490174306, 2);
  sqcRYGate(q, 0.9517939673313419, 3);
  sqcRZGate(q, -0.2756363674151183, 3);
  sqcRYGate(q, 2.680457347373107, 4);
  sqcRZGate(q, 2.7571894138772954, 4);
  sqcRYGate(q, -0.8064450773641773, 5);
  sqcRZGate(q, -0.9061989189164761, 5);
  sqcRYGate(q, -0.6109549796123446, 6);
  sqcRZGate(q, 1.936801233070999, 6);
  sqcRYGate(q, 2.5985179485421686, 7);
  sqcRZGate(q, -1.4578588940961845, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.0398017435766267, 0);
  sqcRZGate(q, 2.9878822895148454, 0);
  sqcRYGate(q, 2.5011515459431335, 1);
  sqcRZGate(q, 2.310300881239747, 1);
  sqcRYGate(q, -2.597993841405125, 2);
  sqcRZGate(q, -2.226953948630873, 2);
  sqcRYGate(q, -1.6403815383040627, 3);
  sqcRZGate(q, 3.0613668247266275, 3);
  sqcRYGate(q, 0.8926022242351128, 4);
  sqcRZGate(q, 0.945910909865816, 4);
  sqcRYGate(q, 2.34513417172295, 5);
  sqcRZGate(q, 0.30531919040374333, 5);
  sqcRYGate(q, 0.7865975610703203, 6);
  sqcRZGate(q, 3.014509001200742, 6);
  sqcRYGate(q, -1.930746271643166, 7);
  sqcRZGate(q, 3.0216447773314563, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.166743777541168, 0);
  sqcRZGate(q, -0.9552775673855552, 0);
  sqcRYGate(q, 1.3712336245882215, 1);
  sqcRZGate(q, -1.6109484201230382, 1);
  sqcRYGate(q, -0.7807593502674214, 2);
  sqcRZGate(q, -2.1449647223972486, 2);
  sqcRYGate(q, 2.1468057733038215, 3);
  sqcRZGate(q, 0.906700868025662, 3);
  sqcRYGate(q, 0.5904860542490539, 4);
  sqcRZGate(q, -2.0586109024269468, 4);
  sqcRYGate(q, 0.32807786054069016, 5);
  sqcRZGate(q, -2.4242402873630775, 5);
  sqcRYGate(q, 2.367030992685091, 6);
  sqcRZGate(q, 1.356907555995595, 6);
  sqcRYGate(q, 2.1851800975853495, 7);
  sqcRZGate(q, 0.4147052297605258, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9900108264350636, 0);
  sqcRZGate(q, 0.4755528162060863, 0);
  sqcRYGate(q, 1.624333908143794, 1);
  sqcRZGate(q, -1.600400829453779, 1);
  sqcRYGate(q, 1.5845188696816777, 2);
  sqcRZGate(q, -2.710881384874871, 2);
  sqcRYGate(q, 0.4241256039487524, 3);
  sqcRZGate(q, -0.9231730358577247, 3);
  sqcRYGate(q, -1.9876137581308946, 4);
  sqcRZGate(q, 0.1773080809917771, 4);
  sqcRYGate(q, 2.7459922170738453, 5);
  sqcRZGate(q, -0.41904902950534334, 5);
  sqcRYGate(q, 0.9080736686483606, 6);
  sqcRZGate(q, 1.816018093023871, 6);
  sqcRYGate(q, -2.31910272773545, 7);
  sqcRZGate(q, -1.5271839488956587, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3377436195898245, 0);
  sqcRZGate(q, 2.5379238017778905, 0);
  sqcRYGate(q, 3.105341939638293, 1);
  sqcRZGate(q, -2.0545437229595143, 1);
  sqcRYGate(q, -1.6264223408970144, 2);
  sqcRZGate(q, 2.1978100072363427, 2);
  sqcRYGate(q, 1.6591900731727467, 3);
  sqcRZGate(q, -1.3601386550193526, 3);
  sqcRYGate(q, 2.228454246495134, 4);
  sqcRZGate(q, -1.8923994256340562, 4);
  sqcRYGate(q, 1.0676788787890334, 5);
  sqcRZGate(q, 1.8498485593105551, 5);
  sqcRYGate(q, -0.5666034531319409, 6);
  sqcRZGate(q, -1.1734495712463207, 6);
  sqcRYGate(q, 0.22655692757398338, 7);
  sqcRZGate(q, 1.9046991967977043, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4185979615500903, 0);
  sqcRZGate(q, -1.0106769487221205, 0);
  sqcRYGate(q, -1.9664692262676766, 1);
  sqcRZGate(q, 2.8323757403901166, 1);
  sqcRYGate(q, -1.458839454921325, 2);
  sqcRZGate(q, -1.4804780190452873, 2);
  sqcRYGate(q, 0.6902880773821415, 3);
  sqcRZGate(q, 2.970711999232629, 3);
  sqcRYGate(q, 1.5472173455074296, 4);
  sqcRZGate(q, -1.4476211580714224, 4);
  sqcRYGate(q, -0.9190081025549288, 5);
  sqcRZGate(q, 0.5725852130700487, 5);
  sqcRYGate(q, -0.3563879237250785, 6);
  sqcRZGate(q, 1.5754809560339256, 6);
  sqcRYGate(q, 2.7412606236785195, 7);
  sqcRZGate(q, -1.0212366422787362, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7991066134633833, 0);
  sqcRZGate(q, 2.9353625061824067, 0);
  sqcRYGate(q, 2.180472086115758, 1);
  sqcRZGate(q, 0.5828494535769169, 1);
  sqcRYGate(q, -0.40650114974774204, 2);
  sqcRZGate(q, 1.8064840485017983, 2);
  sqcRYGate(q, -0.7567739495153906, 3);
  sqcRZGate(q, -0.34645585814527874, 3);
  sqcRYGate(q, 1.6609827894879097, 4);
  sqcRZGate(q, -1.3702373079802808, 4);
  sqcRYGate(q, -1.7662955872713881, 5);
  sqcRZGate(q, 0.3516182334699902, 5);
  sqcRYGate(q, 1.9579893455861668, 6);
  sqcRZGate(q, 2.3987106417262685, 6);
  sqcRYGate(q, -1.1788804045428867, 7);
  sqcRZGate(q, -1.258903501038949, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7983262388182378, 0);
  sqcRZGate(q, -2.3637858347175986, 0);
  sqcRYGate(q, 1.308585910440511, 1);
  sqcRZGate(q, -2.824258957355804, 1);
  sqcRYGate(q, -2.6592947205501294, 2);
  sqcRZGate(q, 0.3575554216714134, 2);
  sqcRYGate(q, -2.040752407139315, 3);
  sqcRZGate(q, 0.7529655629252482, 3);
  sqcRYGate(q, -1.6508632872644045, 4);
  sqcRZGate(q, 2.248946694292494, 4);
  sqcRYGate(q, 0.22119785349415455, 5);
  sqcRZGate(q, 0.38071363364707855, 5);
  sqcRYGate(q, 2.3857242476012286, 6);
  sqcRZGate(q, 1.1459696487936286, 6);
  sqcRYGate(q, 3.0986868701484935, 7);
  sqcRZGate(q, 1.8274093451265854, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.9402570495975692, 0);
  sqcRZGate(q, 1.30165982527024, 0);
  sqcRYGate(q, -1.5786813248035303, 1);
  sqcRZGate(q, -0.7100581210002963, 1);
  sqcRYGate(q, 0.28645804827004734, 2);
  sqcRZGate(q, -1.0483386840723672, 2);
  sqcRYGate(q, 1.6173868462927632, 3);
  sqcRZGate(q, 0.2288077920835523, 3);
  sqcRYGate(q, -2.4237607378201265, 4);
  sqcRZGate(q, -1.8862645360413255, 4);
  sqcRYGate(q, 2.5460650353710697, 5);
  sqcRZGate(q, 0.0015215513716571039, 5);
  sqcRYGate(q, 0.559012436800795, 6);
  sqcRZGate(q, 2.4130990583264684, 6);
  sqcRYGate(q, 2.2707674586644684, 7);
  sqcRZGate(q, 2.0487400668721376, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.544350814276446, 0);
  sqcRZGate(q, -1.4789804266228994, 0);
  sqcRYGate(q, 0.10990201506199737, 1);
  sqcRZGate(q, -0.8419966178120246, 1);
  sqcRYGate(q, 0.35988462970813373, 2);
  sqcRZGate(q, 2.0120834449118474, 2);
  sqcRYGate(q, 0.5633874244407213, 3);
  sqcRZGate(q, 0.45412679837550307, 3);
  sqcRYGate(q, 2.4226714971941026, 4);
  sqcRZGate(q, -2.528106911493089, 4);
  sqcRYGate(q, -2.118394418131365, 5);
  sqcRZGate(q, 1.2017262352220133, 5);
  sqcRYGate(q, 2.2408607836763395, 6);
  sqcRZGate(q, -0.6732640115046333, 6);
  sqcRYGate(q, 1.2817072210990328, 7);
  sqcRZGate(q, -0.7600621087462338, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.7492023225669753, 0);
  sqcRZGate(q, -1.8367672680200355, 0);
  sqcRYGate(q, -2.560843682367285, 1);
  sqcRZGate(q, 0.863401980965336, 1);
  sqcRYGate(q, 2.632602051268374, 2);
  sqcRZGate(q, 0.11366874403578696, 2);
  sqcRYGate(q, -1.2419157796234153, 3);
  sqcRZGate(q, -0.04968372157781114, 3);
  sqcRYGate(q, -1.1586755980490702, 4);
  sqcRZGate(q, 0.21647133516352748, 4);
  sqcRYGate(q, 1.7036358650641867, 5);
  sqcRZGate(q, -1.3743859823091054, 5);
  sqcRYGate(q, -1.3809662429357612, 6);
  sqcRZGate(q, -0.5746500996715779, 6);
  sqcRYGate(q, -1.718221634158735, 7);
  sqcRZGate(q, -2.8467270242467575, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.6234229542872685, 0);
  sqcRZGate(q, -1.859288821198393, 0);
  sqcRYGate(q, -2.422797899046856, 1);
  sqcRZGate(q, -2.950027120688818, 1);
  sqcRYGate(q, 0.37953596734878703, 2);
  sqcRZGate(q, -0.3153286056914401, 2);
  sqcRYGate(q, 2.3223431479893986, 3);
  sqcRZGate(q, 2.0650334420789127, 3);
  sqcRYGate(q, -3.042936291027157, 4);
  sqcRZGate(q, -0.09051874843415142, 4);
  sqcRYGate(q, -0.5687285675031452, 5);
  sqcRZGate(q, 0.863233391068194, 5);
  sqcRYGate(q, -0.12092777430308921, 6);
  sqcRZGate(q, -1.3058389305354225, 6);
  sqcRYGate(q, 1.327589038182258, 7);
  sqcRZGate(q, -2.0607135729646555, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6135675492820528, 0);
  sqcRZGate(q, 0.42228147342591765, 0);
  sqcRYGate(q, -0.3955688397898278, 1);
  sqcRZGate(q, -2.7623774125094607, 1);
  sqcRYGate(q, -2.0925426135153584, 2);
  sqcRZGate(q, -1.0568640292046594, 2);
  sqcRYGate(q, -0.9021319994357587, 3);
  sqcRZGate(q, 1.271519709711379, 3);
  sqcRYGate(q, -0.26429196589952936, 4);
  sqcRZGate(q, -1.1843904083365517, 4);
  sqcRYGate(q, 0.2444153349829782, 5);
  sqcRZGate(q, 2.922514670057682, 5);
  sqcRYGate(q, -1.9601294567842826, 6);
  sqcRZGate(q, 1.4186071689851845, 6);
  sqcRYGate(q, -1.1579455596256185, 7);
  sqcRZGate(q, -1.8777464718185515, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7992840410831423, 0);
  sqcRZGate(q, 2.2364415744459167, 0);
  sqcRYGate(q, 0.08095302415974448, 1);
  sqcRZGate(q, -1.7838828981489474, 1);
  sqcRYGate(q, -2.6270441521302508, 2);
  sqcRZGate(q, -1.5436826945646223, 2);
  sqcRYGate(q, 2.265550419215094, 3);
  sqcRZGate(q, -1.8289864706623555, 3);
  sqcRYGate(q, -0.70752455794325, 4);
  sqcRZGate(q, 1.6929997632264806, 4);
  sqcRYGate(q, -0.4122335177027787, 5);
  sqcRZGate(q, -0.6926877359527017, 5);
  sqcRYGate(q, 1.7956009413209464, 6);
  sqcRZGate(q, -3.002485474638028, 6);
  sqcRYGate(q, -0.7807633506202949, 7);
  sqcRZGate(q, 2.6473256449923164, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.0834773848453034, 0);
  sqcRZGate(q, 0.12503484550685687, 0);
  sqcRYGate(q, -0.3633695177685535, 1);
  sqcRZGate(q, -1.4160579051205766, 1);
  sqcRYGate(q, 1.1595637183693137, 2);
  sqcRZGate(q, 2.758056561100366, 2);
  sqcRYGate(q, -0.5813882970558295, 3);
  sqcRZGate(q, 2.54281066880843, 3);
  sqcRYGate(q, -1.5564427500587277, 4);
  sqcRZGate(q, -1.4076883623941, 4);
  sqcRYGate(q, -2.3701662214950305, 5);
  sqcRZGate(q, 1.6744790781324428, 5);
  sqcRYGate(q, -0.8132337085126102, 6);
  sqcRZGate(q, -1.5327571611299726, 6);
  sqcRYGate(q, 3.000121727875509, 7);
  sqcRZGate(q, -2.897399893912362, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.3299938047170854, 0);
  sqcRZGate(q, -1.7350529052156571, 0);
  sqcRYGate(q, 0.3864027543254558, 1);
  sqcRZGate(q, 1.677832445950685, 1);
  sqcRYGate(q, 2.7461527712213822, 2);
  sqcRZGate(q, 2.3855860036537044, 2);
  sqcRYGate(q, -2.1210695683442875, 3);
  sqcRZGate(q, 1.0726776051090443, 3);
  sqcRYGate(q, 1.6297537941114795, 4);
  sqcRZGate(q, 0.9472880170509708, 4);
  sqcRYGate(q, -2.567625846151584, 5);
  sqcRZGate(q, -2.420386161470353, 5);
  sqcRYGate(q, -0.8329002081591304, 6);
  sqcRZGate(q, 1.8679468015403593, 6);
  sqcRYGate(q, 1.895819507270036, 7);
  sqcRZGate(q, 2.335691069999948, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.963110052809867, 0);
  sqcRZGate(q, -0.5130979760189476, 0);
  sqcRYGate(q, 0.6345644959216958, 1);
  sqcRZGate(q, 1.2037723571419003, 1);
  sqcRYGate(q, 1.3815020678320602, 2);
  sqcRZGate(q, 0.5728976194436592, 2);
  sqcRYGate(q, 1.4579747208318095, 3);
  sqcRZGate(q, 1.1436171100700878, 3);
  sqcRYGate(q, -2.4834282713276146, 4);
  sqcRZGate(q, -2.238959754618353, 4);
  sqcRYGate(q, -1.282662462543719, 5);
  sqcRZGate(q, 2.0212459827565645, 5);
  sqcRYGate(q, -2.1648584050668553, 6);
  sqcRZGate(q, 2.928448125671591, 6);
  sqcRYGate(q, 0.535917023693365, 7);
  sqcRZGate(q, 2.842800670616188, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.0893548746576793, 0);
  sqcRZGate(q, -2.10614560322777, 0);
  sqcRYGate(q, -0.9122132921930826, 1);
  sqcRZGate(q, 2.4678451520040148, 1);
  sqcRYGate(q, -0.8939654967249702, 2);
  sqcRZGate(q, 2.6577564593074423, 2);
  sqcRYGate(q, -2.671576774006489, 3);
  sqcRZGate(q, 1.3871250461195137, 3);
  sqcRYGate(q, -0.20982046269649526, 4);
  sqcRZGate(q, -2.5467192920979804, 4);
  sqcRYGate(q, 2.839114265043353, 5);
  sqcRZGate(q, 2.457665521177377, 5);
  sqcRYGate(q, 1.2384801681702444, 6);
  sqcRZGate(q, 1.2718059010205858, 6);
  sqcRYGate(q, -0.3657043022629929, 7);
  sqcRZGate(q, -2.4010699204190473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1061107351760622, 0);
  sqcRZGate(q, 1.1614270864061513, 0);
  sqcRYGate(q, -1.6240704625895215, 1);
  sqcRZGate(q, -1.2894710327269578, 1);
  sqcRYGate(q, -1.9324876576186956, 2);
  sqcRZGate(q, -2.5133509912743777, 2);
  sqcRYGate(q, 2.678377829242342, 3);
  sqcRZGate(q, 1.651725335202545, 3);
  sqcRYGate(q, 0.38024976501229, 4);
  sqcRZGate(q, -0.4350860639543369, 4);
  sqcRYGate(q, 0.11760606161683371, 5);
  sqcRZGate(q, 0.4611200983216332, 5);
  sqcRYGate(q, -1.7034412451850471, 6);
  sqcRZGate(q, 2.0887911056289497, 6);
  sqcRYGate(q, -1.5608618920437827, 7);
  sqcRZGate(q, -2.070859884266639, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.654571120624443, 0);
  sqcRZGate(q, 2.40938967976713, 0);
  sqcRYGate(q, 1.261543704810654, 1);
  sqcRZGate(q, -2.835255767086115, 1);
  sqcRYGate(q, -2.864117809936487, 2);
  sqcRZGate(q, 1.935093449718564, 2);
  sqcRYGate(q, -0.269665432208627, 3);
  sqcRZGate(q, 2.1859683448602105, 3);
  sqcRYGate(q, 0.5544781161160585, 4);
  sqcRZGate(q, 1.3574968075332006, 4);
  sqcRYGate(q, 1.7460241863572543, 5);
  sqcRZGate(q, 1.952034747023509, 5);
  sqcRYGate(q, -0.6281682610661141, 6);
  sqcRZGate(q, 0.3191274186749, 6);
  sqcRYGate(q, 2.339165137157719, 7);
  sqcRZGate(q, -1.734565686227066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.6972172219208845, 0);
  sqcRZGate(q, 0.2383838040430657, 0);
  sqcRYGate(q, 2.04757333372556, 1);
  sqcRZGate(q, -2.2754709657133967, 1);
  sqcRYGate(q, -2.0012703571774924, 2);
  sqcRZGate(q, -2.203059423211862, 2);
  sqcRYGate(q, 1.0776521868484181, 3);
  sqcRZGate(q, -0.7351990147256227, 3);
  sqcRYGate(q, 2.4029289918556382, 4);
  sqcRZGate(q, 1.2505148128284211, 4);
  sqcRYGate(q, -0.6285732108541585, 5);
  sqcRZGate(q, 1.071784398766984, 5);
  sqcRYGate(q, -0.5562644401627956, 6);
  sqcRZGate(q, -1.2363488559796603, 6);
  sqcRYGate(q, -3.0239363582131427, 7);
  sqcRZGate(q, 0.6180358089954916, 7);

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
