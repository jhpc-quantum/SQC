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

  sqcRYGate(q, 2.0179258133425995, 0);
  sqcRZGate(q, -3.0730631642983073, 0);
  sqcRYGate(q, 1.6445583598724625, 1);
  sqcRZGate(q, -0.29232548484233933, 1);
  sqcRYGate(q, -2.9902689221606225, 2);
  sqcRZGate(q, -1.6302024184439412, 2);
  sqcRYGate(q, -2.169684740923511, 3);
  sqcRZGate(q, -2.557761926441798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5314656534622415, 0);
  sqcRZGate(q, 0.04729391475946443, 0);
  sqcRYGate(q, 2.566054934972588, 1);
  sqcRZGate(q, 0.17924960913934831, 1);
  sqcRYGate(q, 2.2639834124254943, 2);
  sqcRZGate(q, 1.0271712909777744, 2);
  sqcRYGate(q, -1.6880950659812417, 3);
  sqcRZGate(q, -0.9804631450483088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1198564827900617, 0);
  sqcRZGate(q, 2.8230970523901844, 0);
  sqcRYGate(q, 1.1863927381419495, 1);
  sqcRZGate(q, 1.2276159697533338, 1);
  sqcRYGate(q, -0.09614832723287757, 2);
  sqcRZGate(q, -0.3925043982251683, 2);
  sqcRYGate(q, 0.22246586068753166, 3);
  sqcRZGate(q, 2.148265645751425, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0849219568548074, 0);
  sqcRZGate(q, -2.884722922764102, 0);
  sqcRYGate(q, -2.249155494757532, 1);
  sqcRZGate(q, 0.2776230167688702, 1);
  sqcRYGate(q, 2.4309965574908308, 2);
  sqcRZGate(q, 2.0993188393815934, 2);
  sqcRYGate(q, 0.5937298024137112, 3);
  sqcRZGate(q, 0.2604972735687099, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4599998353144314, 0);
  sqcRZGate(q, -1.1422679361301673, 0);
  sqcRYGate(q, -2.743330686743701, 1);
  sqcRZGate(q, -2.2650587224650267, 1);
  sqcRYGate(q, 1.895043262632168, 2);
  sqcRZGate(q, 1.0077983809966549, 2);
  sqcRYGate(q, -1.0656785221876408, 3);
  sqcRZGate(q, -1.5217381482596437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4067727245459873, 0);
  sqcRZGate(q, -0.23554844710878345, 0);
  sqcRYGate(q, -1.4514891885811219, 1);
  sqcRZGate(q, 1.5437747142119773, 1);
  sqcRYGate(q, -1.5050321856886646, 2);
  sqcRZGate(q, 1.83881644363173, 2);
  sqcRYGate(q, -0.3108463626474059, 3);
  sqcRZGate(q, -1.9386716488684141, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6152171120045571, 0);
  sqcRZGate(q, 0.43393692806934603, 0);
  sqcRYGate(q, -0.6434502836138796, 1);
  sqcRZGate(q, 2.93377838902501, 1);
  sqcRYGate(q, 0.9600590731440811, 2);
  sqcRZGate(q, -1.7746947696316582, 2);
  sqcRYGate(q, -0.2540359529823544, 3);
  sqcRZGate(q, 2.122139441360277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2642635560818717, 0);
  sqcRZGate(q, 2.5923397469288405, 0);
  sqcRYGate(q, 0.7987139134523328, 1);
  sqcRZGate(q, -1.237959131572726, 1);
  sqcRYGate(q, -1.6891816585258796, 2);
  sqcRZGate(q, -1.6203995144281391, 2);
  sqcRYGate(q, -2.9018736520459516, 3);
  sqcRZGate(q, 3.0863460541984375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.64047041629345, 0);
  sqcRZGate(q, 1.5751805719645162, 0);
  sqcRYGate(q, 0.1537084904825905, 1);
  sqcRZGate(q, 0.44117406020821864, 1);
  sqcRYGate(q, -2.613992220982758, 2);
  sqcRZGate(q, 0.05304772180060625, 2);
  sqcRYGate(q, -1.1730312846968536, 3);
  sqcRZGate(q, -0.1268985904475039, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.403074011479316, 0);
  sqcRZGate(q, -0.37475643443458745, 0);
  sqcRYGate(q, 2.5125223925291063, 1);
  sqcRZGate(q, -1.692969319486303, 1);
  sqcRYGate(q, -1.073046261026498, 2);
  sqcRZGate(q, 1.2767576090263049, 2);
  sqcRYGate(q, -0.21604372124363458, 3);
  sqcRZGate(q, -0.022686773064377656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.29393128581227956, 0);
  sqcRZGate(q, -2.6882424951993578, 0);
  sqcRYGate(q, -0.5533365411915536, 1);
  sqcRZGate(q, -1.781940471242339, 1);
  sqcRYGate(q, 0.5474059500731123, 2);
  sqcRZGate(q, -2.6886386082365927, 2);
  sqcRYGate(q, 0.9543702475251683, 3);
  sqcRZGate(q, -2.7704369938545557, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.28241417313345263, 0);
  sqcRZGate(q, -1.7466199921362084, 0);
  sqcRYGate(q, -0.2870900270613805, 1);
  sqcRZGate(q, -0.36099008613461153, 1);
  sqcRYGate(q, 2.102263211673287, 2);
  sqcRZGate(q, 2.35697399285267, 2);
  sqcRYGate(q, -1.609143816681734, 3);
  sqcRZGate(q, -1.1295460636554884, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.37237459819094376, 0);
  sqcRZGate(q, 2.2379731027876613, 0);
  sqcRYGate(q, -0.35556103754281576, 1);
  sqcRZGate(q, -0.4184748316547914, 1);
  sqcRYGate(q, -0.95909576506512, 2);
  sqcRZGate(q, -1.2601011312798942, 2);
  sqcRYGate(q, 0.1255963377854267, 3);
  sqcRZGate(q, 2.629771515259353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.29397980870393614, 0);
  sqcRZGate(q, -1.5552115974640328, 0);
  sqcRYGate(q, -0.12112243409231827, 1);
  sqcRZGate(q, 0.8777379350388846, 1);
  sqcRYGate(q, 1.8947842400945527, 2);
  sqcRZGate(q, -2.2974793248463654, 2);
  sqcRYGate(q, -1.806551623740004, 3);
  sqcRZGate(q, -1.2621107121085344, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4909418938875207, 0);
  sqcRZGate(q, 0.28244964564258446, 0);
  sqcRYGate(q, 2.287174488966138, 1);
  sqcRZGate(q, -1.902324364560121, 1);
  sqcRYGate(q, -2.709698842905589, 2);
  sqcRZGate(q, 2.348074371014084, 2);
  sqcRYGate(q, 1.4649846690525052, 3);
  sqcRZGate(q, -0.8581986748355418, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4012921395837095, 0);
  sqcRZGate(q, 0.15509401363449538, 0);
  sqcRYGate(q, -1.785898576096753, 1);
  sqcRZGate(q, 1.8255239142093647, 1);
  sqcRYGate(q, 1.6079700736783156, 2);
  sqcRZGate(q, 0.11899149520937115, 2);
  sqcRYGate(q, -2.9028527491096474, 3);
  sqcRZGate(q, -1.8256571686878458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8287148588663125, 0);
  sqcRZGate(q, -0.24265426015572317, 0);
  sqcRYGate(q, -1.006500874550824, 1);
  sqcRZGate(q, -1.8010418879441268, 1);
  sqcRYGate(q, -1.4941331937467766, 2);
  sqcRZGate(q, 1.090416492619275, 2);
  sqcRYGate(q, 0.07277421807382979, 3);
  sqcRZGate(q, -1.1342035088470013, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.22361359268014525, 0);
  sqcRZGate(q, 2.9251583826363223, 0);
  sqcRYGate(q, -0.2827617404687075, 1);
  sqcRZGate(q, -3.010877298468535, 1);
  sqcRYGate(q, -2.0323887186471676, 2);
  sqcRZGate(q, -0.18921452893527363, 2);
  sqcRYGate(q, 1.4983274585640658, 3);
  sqcRZGate(q, -2.09958741862671, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7313636112903505, 0);
  sqcRZGate(q, 0.7166595370256038, 0);
  sqcRYGate(q, -1.5986274610555713, 1);
  sqcRZGate(q, 3.120589431667731, 1);
  sqcRYGate(q, -1.9206306318700135, 2);
  sqcRZGate(q, -1.6664066950356107, 2);
  sqcRYGate(q, 2.989007309731598, 3);
  sqcRZGate(q, 2.2819293705504164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3537055006599736, 0);
  sqcRZGate(q, -2.952250319248846, 0);
  sqcRYGate(q, 1.2545674307729053, 1);
  sqcRZGate(q, -2.9255312713248784, 1);
  sqcRYGate(q, 1.9847300519920703, 2);
  sqcRZGate(q, 2.7768805985135, 2);
  sqcRYGate(q, -0.2923065402620111, 3);
  sqcRZGate(q, 0.2693545800020187, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2338141074072375, 0);
  sqcRZGate(q, -2.4365905008791158, 0);
  sqcRYGate(q, -1.06602655470141, 1);
  sqcRZGate(q, 0.8608191633687801, 1);
  sqcRYGate(q, -0.8913275893277832, 2);
  sqcRZGate(q, 1.6572212073544845, 2);
  sqcRYGate(q, 1.996918977466801, 3);
  sqcRZGate(q, 0.8525364749309139, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6486898661594784, 0);
  sqcRZGate(q, -1.6872304263341145, 0);
  sqcRYGate(q, -2.4434009887684063, 1);
  sqcRZGate(q, 1.5056542512348343, 1);
  sqcRYGate(q, -0.5048799264571082, 2);
  sqcRZGate(q, 1.2292726203290183, 2);
  sqcRYGate(q, -2.6930496281529535, 3);
  sqcRZGate(q, 1.9594719206297757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7742438733981551, 0);
  sqcRZGate(q, 1.6123834298134463, 0);
  sqcRYGate(q, -1.8883932568006658, 1);
  sqcRZGate(q, 2.6113315881394676, 1);
  sqcRYGate(q, 2.262125249572765, 2);
  sqcRZGate(q, 0.44194343721034285, 2);
  sqcRYGate(q, 0.7269040979780801, 3);
  sqcRZGate(q, -1.2475601194778818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6579087978716468, 0);
  sqcRZGate(q, 3.0464026932301134, 0);
  sqcRYGate(q, 2.7172836703440417, 1);
  sqcRZGate(q, -1.905036138682084, 1);
  sqcRYGate(q, 1.4466272989493878, 2);
  sqcRZGate(q, 0.5808453746790647, 2);
  sqcRYGate(q, -0.1948074000091351, 3);
  sqcRZGate(q, -0.07209532816990194, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7358908323197797, 0);
  sqcRZGate(q, 2.7691531629201274, 0);
  sqcRYGate(q, -0.02388507062443958, 1);
  sqcRZGate(q, 2.4125791007884945, 1);
  sqcRYGate(q, 1.2467643948585385, 2);
  sqcRZGate(q, -2.322741852289678, 2);
  sqcRYGate(q, 0.9236679128795657, 3);
  sqcRZGate(q, -2.4907990498375683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5857718078691443, 0);
  sqcRZGate(q, -0.15983137726021313, 0);
  sqcRYGate(q, -0.6401659303129104, 1);
  sqcRZGate(q, 0.6176232257733085, 1);
  sqcRYGate(q, -1.9364674997669504, 2);
  sqcRZGate(q, 0.6977279319062726, 2);
  sqcRYGate(q, 1.6835155524829066, 3);
  sqcRZGate(q, -0.9011995595841071, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6097018934402465, 0);
  sqcRZGate(q, -1.872505534904882, 0);
  sqcRYGate(q, -2.3452248964683724, 1);
  sqcRZGate(q, -0.3478749780059372, 1);
  sqcRYGate(q, 2.547861428645656, 2);
  sqcRZGate(q, 2.273076444066925, 2);
  sqcRYGate(q, 2.1067356793437217, 3);
  sqcRZGate(q, -2.9775915654536638, 3);

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
