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

  sqcRYGate(q, 1.561800964389647, 0);
  sqcRZGate(q, -1.6524856257898628, 0);
  sqcRYGate(q, -2.803522080008644, 1);
  sqcRZGate(q, -2.9352828667821234, 1);
  sqcRYGate(q, -0.04670631392538204, 2);
  sqcRZGate(q, -2.98489126003868, 2);
  sqcRYGate(q, 0.00046013385959486897, 3);
  sqcRZGate(q, 2.2199682463696133, 3);
  sqcRYGate(q, -3.124878497030952, 4);
  sqcRZGate(q, -1.663336939970644, 4);
  sqcRYGate(q, 1.5707207771353975, 5);
  sqcRZGate(q, 1.5663852050352398, 5);
  sqcRYGate(q, 1.5699963877561303, 6);
  sqcRZGate(q, 2.1671047185622476, 6);
  sqcRYGate(q, -1.7319354280683106, 7);
  sqcRZGate(q, -2.7570988615442555, 7);
  sqcRYGate(q, 3.1203243635923945, 8);
  sqcRZGate(q, -2.9625438992559725, 8);
  sqcRYGate(q, -1.5698849961463242, 9);
  sqcRZGate(q, -1.5665219209112993, 9);
  sqcRYGate(q, 1.570549620865608, 10);
  sqcRZGate(q, -0.3165820385657201, 10);
  sqcRYGate(q, -1.673921673352126, 11);
  sqcRZGate(q, -1.7144916298238104, 11);
  sqcRYGate(q, 3.02230955740839, 12);
  sqcRZGate(q, -1.157301867799035, 12);
  sqcRYGate(q, 2.931647881693495, 13);
  sqcRZGate(q, 3.11660350307612, 13);
  sqcRYGate(q, 0.2674606503583573, 14);
  sqcRZGate(q, 1.9039802726817234, 14);
  sqcRYGate(q, -1.682259742996826, 15);
  sqcRZGate(q, -1.8443240541452572, 15);
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
  sqcRYGate(q, -1.5196016860582138, 0);
  sqcRZGate(q, 0.03998189630136561, 0);
  sqcRYGate(q, 0.04710140342984719, 1);
  sqcRZGate(q, -1.7220986804969458, 1);
  sqcRYGate(q, 0.0037339779055339272, 2);
  sqcRZGate(q, 0.0025042645615146212, 2);
  sqcRYGate(q, -3.116728286877105, 3);
  sqcRZGate(q, 0.09789145983876785, 3);
  sqcRYGate(q, 1.528562479610276, 4);
  sqcRZGate(q, 2.383554743439818, 4);
  sqcRYGate(q, -1.115049704167836, 5);
  sqcRZGate(q, 0.0015939720923299203, 5);
  sqcRYGate(q, 0.0037772228805572215, 6);
  sqcRZGate(q, 2.5494611737694557, 6);
  sqcRYGate(q, -3.1415916447910948, 7);
  sqcRZGate(q, -1.5759515559080715, 7);
  sqcRYGate(q, -2.8677458455485243, 8);
  sqcRZGate(q, -2.991804267571924, 8);
  sqcRYGate(q, 3.0773548990269566, 9);
  sqcRZGate(q, -0.011586315182341506, 9);
  sqcRYGate(q, -2.4668028272863602, 10);
  sqcRZGate(q, 1.030343964501141, 10);
  sqcRYGate(q, -0.03692002309795495, 11);
  sqcRZGate(q, -0.07765935517809723, 11);
  sqcRYGate(q, 0.06518473222339884, 12);
  sqcRZGate(q, 1.2129774399199948, 12);
  sqcRYGate(q, 3.1406877798897184, 13);
  sqcRZGate(q, 1.4914219069370664, 13);
  sqcRYGate(q, -3.1169855987245345, 14);
  sqcRZGate(q, 3.0997385872871277, 14);
  sqcRYGate(q, -1.6125252162315484, 15);
  sqcRZGate(q, 1.6191737636476475, 15);
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
  sqcRYGate(q, -2.267404526622949, 0);
  sqcRZGate(q, 1.6682507682107381, 0);
  sqcRYGate(q, -2.0274640942954463, 1);
  sqcRZGate(q, -3.1144974943098207, 1);
  sqcRYGate(q, 0.06039514197360329, 2);
  sqcRZGate(q, -1.7333117980992154, 2);
  sqcRYGate(q, 1.6729194146444017, 3);
  sqcRZGate(q, 3.0379122678793697, 3);
  sqcRYGate(q, 3.1001490308137107, 4);
  sqcRZGate(q, -0.557047139754084, 4);
  sqcRYGate(q, 1.7668003632686506, 5);
  sqcRZGate(q, 1.5181571374850078, 5);
  sqcRYGate(q, -0.22469018408254102, 6);
  sqcRZGate(q, -1.574676220163831, 6);
  sqcRYGate(q, 0.9364288916960062, 7);
  sqcRZGate(q, -2.7063033316317724, 7);
  sqcRYGate(q, 0.027395045677734764, 8);
  sqcRZGate(q, -2.075963388995507, 8);
  sqcRYGate(q, 1.2659384772237017, 9);
  sqcRZGate(q, -0.013941850256261821, 9);
  sqcRYGate(q, -0.005839748409136102, 10);
  sqcRZGate(q, -1.4178322368526302, 10);
  sqcRYGate(q, 1.5005382101158347, 11);
  sqcRZGate(q, 1.3810806349880291, 11);
  sqcRYGate(q, 2.9363314757997205, 12);
  sqcRZGate(q, -2.353682259317555, 12);
  sqcRYGate(q, -2.984574698514398, 13);
  sqcRZGate(q, 2.773512652021312, 13);
  sqcRYGate(q, 1.3791342444380001, 14);
  sqcRZGate(q, -2.79360923643445, 14);
  sqcRYGate(q, 2.575635185343083, 15);
  sqcRZGate(q, -2.9562627035781435, 15);
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
  sqcRYGate(q, -1.618327912959159, 0);
  sqcRZGate(q, 0.3192664987367779, 0);
  sqcRYGate(q, 3.1184523409814937, 1);
  sqcRZGate(q, -2.791236647261692, 1);
  sqcRYGate(q, -0.03745904790445821, 2);
  sqcRZGate(q, -0.28933773888657655, 2);
  sqcRYGate(q, 0.0013560857039740526, 3);
  sqcRZGate(q, -2.734830645732568, 3);
  sqcRYGate(q, 1.4787570054025592, 4);
  sqcRZGate(q, 1.1691131973331026, 4);
  sqcRYGate(q, -3.0956979705491725, 5);
  sqcRZGate(q, -2.8736056440581796, 5);
  sqcRYGate(q, -1.5705038029005436, 6);
  sqcRZGate(q, -1.0512595628915733, 6);
  sqcRYGate(q, -3.141534314063975, 7);
  sqcRZGate(q, -1.5027180535319054, 7);
  sqcRYGate(q, 3.0718787444464963, 8);
  sqcRZGate(q, -2.478495098820839, 8);
  sqcRYGate(q, 0.0028009230160187543, 9);
  sqcRZGate(q, -0.7369847254078249, 9);
  sqcRYGate(q, -1.5229434884380573, 10);
  sqcRZGate(q, -1.8063660600907117, 10);
  sqcRYGate(q, -0.05155319815841751, 11);
  sqcRZGate(q, -0.40357673242048797, 11);
  sqcRYGate(q, 3.1254724544087673, 12);
  sqcRZGate(q, 2.2495984463443026, 12);
  sqcRYGate(q, 0.000961095435386827, 13);
  sqcRZGate(q, 0.9751062520126937, 13);
  sqcRYGate(q, 0.11158913805820501, 14);
  sqcRZGate(q, -0.41584513294960074, 14);
  sqcRYGate(q, 1.3439996722622494, 15);
  sqcRZGate(q, -0.048334138759905436, 15);
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
  sqcRYGate(q, -2.2769858028688152, 0);
  sqcRZGate(q, 2.455166671826443, 0);
  sqcRYGate(q, 2.2727029203321623, 1);
  sqcRZGate(q, -0.6726685023196542, 1);
  sqcRYGate(q, 0.8710074886687176, 2);
  sqcRZGate(q, 2.436822929229186, 2);
  sqcRYGate(q, -0.8439946259905512, 3);
  sqcRZGate(q, 2.0375007703012677, 3);
  sqcRYGate(q, -0.8676529915619862, 4);
  sqcRZGate(q, -0.7022224141866376, 4);
  sqcRYGate(q, 0.7494647187630629, 5);
  sqcRZGate(q, -1.1281802517325756, 5);
  sqcRYGate(q, -2.2648601286855996, 6);
  sqcRZGate(q, 2.433069623625783, 6);
  sqcRYGate(q, -0.8761891123518509, 7);
  sqcRZGate(q, -0.7114363058278119, 7);
  sqcRYGate(q, -0.8785032286846537, 8);
  sqcRZGate(q, -0.7101745030391782, 8);
  sqcRYGate(q, -1.87090674931485, 9);
  sqcRZGate(q, 0.6224473208250297, 9);
  sqcRYGate(q, -0.8798370627073914, 10);
  sqcRZGate(q, -0.7125175998614389, 10);
  sqcRYGate(q, -2.777987765447381, 11);
  sqcRZGate(q, 3.115341220105745, 11);
  sqcRYGate(q, 1.008397320147445, 12);
  sqcRZGate(q, 2.377273443537524, 12);
  sqcRYGate(q, 2.2576271176082416, 13);
  sqcRZGate(q, -0.7099392902044334, 13);
  sqcRYGate(q, 2.938683165856239, 14);
  sqcRZGate(q, 1.9065340373339887, 14);
  sqcRYGate(q, 2.531730554938385, 15);
  sqcRZGate(q, -1.1014688809869309, 15);

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
