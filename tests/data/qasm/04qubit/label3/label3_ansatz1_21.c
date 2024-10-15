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

  sqcRYGate(q, 0.2225042997782339, 0);
  sqcRZGate(q, -1.1573506057469647, 0);
  sqcRYGate(q, -1.3393951948223408, 1);
  sqcRZGate(q, -1.5071495801901884, 1);
  sqcRYGate(q, 1.3565141385165358, 2);
  sqcRZGate(q, 0.3869014857071159, 2);
  sqcRYGate(q, 1.100140536424348, 3);
  sqcRZGate(q, 1.9495961449554473, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9033611102393309, 0);
  sqcRZGate(q, 2.627647060102154, 0);
  sqcRYGate(q, 0.7817528121633848, 1);
  sqcRZGate(q, -2.3867974263055665, 1);
  sqcRYGate(q, -3.0714127321005775, 2);
  sqcRZGate(q, -3.1142107268697843, 2);
  sqcRYGate(q, -2.8349759418259133, 3);
  sqcRZGate(q, -2.723288399969972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.712630054087705, 0);
  sqcRZGate(q, -1.4299509273872888, 0);
  sqcRYGate(q, 0.4697234791766105, 1);
  sqcRZGate(q, -2.0071184748881823, 1);
  sqcRYGate(q, -2.9873992685857633, 2);
  sqcRZGate(q, 0.3072969728390359, 2);
  sqcRYGate(q, -1.742364737033201, 3);
  sqcRZGate(q, 2.822757398450854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.970083527196713, 0);
  sqcRZGate(q, 1.5296425255619424, 0);
  sqcRYGate(q, 0.979921662628926, 1);
  sqcRZGate(q, 1.0681691433740355, 1);
  sqcRYGate(q, -1.8431921748296618, 2);
  sqcRZGate(q, -2.5119511092913864, 2);
  sqcRYGate(q, 1.4627643646274233, 3);
  sqcRZGate(q, 2.9154032882435064, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.862426904076637, 0);
  sqcRZGate(q, 0.9986881895217457, 0);
  sqcRYGate(q, 1.6296447366006916, 1);
  sqcRZGate(q, 2.5794465699623896, 1);
  sqcRYGate(q, 0.2890191599869279, 2);
  sqcRZGate(q, -1.5485955586349733, 2);
  sqcRYGate(q, 2.7362967302662633, 3);
  sqcRZGate(q, 0.832739695915022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.419551338823819, 0);
  sqcRZGate(q, -0.9068967494282996, 0);
  sqcRYGate(q, -1.2889363551005244, 1);
  sqcRZGate(q, -0.42407802300604297, 1);
  sqcRYGate(q, -2.644795284474933, 2);
  sqcRZGate(q, -0.5089709381739046, 2);
  sqcRYGate(q, 0.8002403974539538, 3);
  sqcRZGate(q, 1.028719732095094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.16827589549747402, 0);
  sqcRZGate(q, -2.3998872153178286, 0);
  sqcRYGate(q, -1.9666090532339962, 1);
  sqcRZGate(q, -2.391563875536068, 1);
  sqcRYGate(q, 0.3986433829418046, 2);
  sqcRZGate(q, 1.7793632321598079, 2);
  sqcRYGate(q, 2.3807621980161877, 3);
  sqcRZGate(q, 0.4050765677412782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2955346025120686, 0);
  sqcRZGate(q, 3.020757775439634, 0);
  sqcRYGate(q, 1.178254536073272, 1);
  sqcRZGate(q, 1.4162571032802758, 1);
  sqcRYGate(q, 1.380812445539293, 2);
  sqcRZGate(q, 1.8970870847225791, 2);
  sqcRYGate(q, -1.2819891473678064, 3);
  sqcRZGate(q, -0.25492477585386103, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5762933899943876, 0);
  sqcRZGate(q, 2.7982327906538886, 0);
  sqcRYGate(q, 0.8821315143241862, 1);
  sqcRZGate(q, -0.553474696307397, 1);
  sqcRYGate(q, -1.2995515918277634, 2);
  sqcRZGate(q, -0.2808305740148483, 2);
  sqcRYGate(q, 0.012773092971818936, 3);
  sqcRZGate(q, -1.0670901021560564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.662280146833294, 0);
  sqcRZGate(q, 0.5342974369443292, 0);
  sqcRYGate(q, 1.1834703126315915, 1);
  sqcRZGate(q, 1.464408322865012, 1);
  sqcRYGate(q, -0.3003156472908417, 2);
  sqcRZGate(q, 3.117617873072137, 2);
  sqcRYGate(q, -0.3803883713779621, 3);
  sqcRZGate(q, 1.5163021269991512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.374923648255356, 0);
  sqcRZGate(q, 2.917898295508717, 0);
  sqcRYGate(q, -2.3345258592088887, 1);
  sqcRZGate(q, -0.32585436946914953, 1);
  sqcRYGate(q, -0.5660968955652876, 2);
  sqcRZGate(q, -1.6298253780207796, 2);
  sqcRYGate(q, -2.0613428162631604, 3);
  sqcRZGate(q, -0.8767580458144043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2878434715707976, 0);
  sqcRZGate(q, -1.9132486037720389, 0);
  sqcRYGate(q, -1.781850901993667, 1);
  sqcRZGate(q, -1.938100154497782, 1);
  sqcRYGate(q, 2.6799234780439596, 2);
  sqcRZGate(q, -1.7989851711508669, 2);
  sqcRYGate(q, -1.2392784660067884, 3);
  sqcRZGate(q, 0.49336923852755926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.801039823815478, 0);
  sqcRZGate(q, -2.599569996041757, 0);
  sqcRYGate(q, 0.8048049478198243, 1);
  sqcRZGate(q, -2.1597595697698577, 1);
  sqcRYGate(q, -0.9986519508158872, 2);
  sqcRZGate(q, -0.4944663022287852, 2);
  sqcRYGate(q, 2.152435988553942, 3);
  sqcRZGate(q, 3.0045454512914564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.142755175619154, 0);
  sqcRZGate(q, 2.9055439464727213, 0);
  sqcRYGate(q, 1.946353525462369, 1);
  sqcRZGate(q, 0.6442324581372603, 1);
  sqcRYGate(q, 0.6891012061021433, 2);
  sqcRZGate(q, -1.6913727674216485, 2);
  sqcRYGate(q, 1.9597275414572408, 3);
  sqcRZGate(q, 2.5575587314391734, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5742402836806892, 0);
  sqcRZGate(q, -2.873020054621042, 0);
  sqcRYGate(q, -2.1665114420512506, 1);
  sqcRZGate(q, 1.7434361955017366, 1);
  sqcRYGate(q, 2.068099704438914, 2);
  sqcRZGate(q, -1.6411431407325907, 2);
  sqcRYGate(q, -0.09032174780840752, 3);
  sqcRZGate(q, -1.898047623906647, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.046494774866774, 0);
  sqcRZGate(q, 2.9399579071005166, 0);
  sqcRYGate(q, 1.9956571101263592, 1);
  sqcRZGate(q, 1.974125874287406, 1);
  sqcRYGate(q, 1.9048698049019634, 2);
  sqcRZGate(q, -2.8488939026392948, 2);
  sqcRYGate(q, -1.9389413194666787, 3);
  sqcRZGate(q, -1.1629590590245575, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.38297125654717906, 0);
  sqcRZGate(q, 1.7108552345719055, 0);
  sqcRYGate(q, 1.8267308512882448, 1);
  sqcRZGate(q, 2.525209573024274, 1);
  sqcRYGate(q, -1.6000238108682334, 2);
  sqcRZGate(q, -0.43287272850128344, 2);
  sqcRYGate(q, -1.0863936488098758, 3);
  sqcRZGate(q, -0.9553402387822606, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8045989199202174, 0);
  sqcRZGate(q, 0.43206861564162846, 0);
  sqcRYGate(q, 1.1890965612096147, 1);
  sqcRZGate(q, -1.1418002502594657, 1);
  sqcRYGate(q, -0.8211736221225046, 2);
  sqcRZGate(q, -1.2771528102657177, 2);
  sqcRYGate(q, 2.5437022891159717, 3);
  sqcRZGate(q, 2.8437716145902723, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.384625784908875, 0);
  sqcRZGate(q, 0.7261194554913751, 0);
  sqcRYGate(q, 0.25034938666527307, 1);
  sqcRZGate(q, 2.3752692586095803, 1);
  sqcRYGate(q, -1.200751593584436, 2);
  sqcRZGate(q, 2.0958652274414407, 2);
  sqcRYGate(q, 0.37337081928827626, 3);
  sqcRZGate(q, 1.877513897074481, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8580820431798784, 0);
  sqcRZGate(q, -1.2703197554642056, 0);
  sqcRYGate(q, -1.322017135387648, 1);
  sqcRZGate(q, -2.1638715785412197, 1);
  sqcRYGate(q, 0.3138114353061994, 2);
  sqcRZGate(q, -1.2861915457819333, 2);
  sqcRYGate(q, -1.3802248661325751, 3);
  sqcRZGate(q, -2.729898185577022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9021598011135168, 0);
  sqcRZGate(q, 0.8038983768836668, 0);
  sqcRYGate(q, 0.27621425053467163, 1);
  sqcRZGate(q, -2.304681516838178, 1);
  sqcRYGate(q, 1.6901392423901562, 2);
  sqcRZGate(q, 2.7342709003803733, 2);
  sqcRYGate(q, 2.597944207086239, 3);
  sqcRZGate(q, -3.063402431699069, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.754627280626449, 0);
  sqcRZGate(q, 1.8402854591318394, 0);
  sqcRYGate(q, -2.662149060558089, 1);
  sqcRZGate(q, -1.221326248823976, 1);
  sqcRYGate(q, 0.26321270438496125, 2);
  sqcRZGate(q, -3.0939363667501523, 2);
  sqcRYGate(q, 1.4164138417042855, 3);
  sqcRZGate(q, -1.2176531561585797, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3449749744544346, 0);
  sqcRZGate(q, -1.3531164003911278, 0);
  sqcRYGate(q, -0.6766781055937275, 1);
  sqcRZGate(q, -0.8276517690515101, 1);
  sqcRYGate(q, -0.04475998250463947, 2);
  sqcRZGate(q, -1.769572352401195, 2);
  sqcRYGate(q, -1.0383572514529131, 3);
  sqcRZGate(q, 0.27632962594660593, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2613353729990835, 0);
  sqcRZGate(q, -1.227337514268269, 0);
  sqcRYGate(q, 1.0933056720374612, 1);
  sqcRZGate(q, 1.2499766835131418, 1);
  sqcRYGate(q, 2.1477797326091803, 2);
  sqcRZGate(q, 2.785722724568328, 2);
  sqcRYGate(q, 1.0150203457047675, 3);
  sqcRZGate(q, 0.7962468214618161, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0229809218024475, 0);
  sqcRZGate(q, -1.7205962558274333, 0);
  sqcRYGate(q, 0.15166095720002828, 1);
  sqcRZGate(q, 0.04659186411430838, 1);
  sqcRYGate(q, -0.6401933630968047, 2);
  sqcRZGate(q, 0.9182689628083027, 2);
  sqcRYGate(q, 0.4661833124795658, 3);
  sqcRZGate(q, -2.149627896649002, 3);

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
