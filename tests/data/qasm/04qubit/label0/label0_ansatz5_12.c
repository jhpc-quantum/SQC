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

  sqcRYGate(q, -1.3704448178672461, 0);
  sqcRYGate(q, -2.90285026096381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9636010023194004, 0);
  sqcRYGate(q, -3.0775516830844163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0837295013560926, 2);
  sqcRYGate(q, -0.6352313169798893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0675895595567465, 2);
  sqcRYGate(q, 3.1151891829745226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42772284734758576, 1);
  sqcRYGate(q, 1.3069330980058664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8144247350059852, 1);
  sqcRYGate(q, 0.7660395241995717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7766739561581284, 0);
  sqcRYGate(q, 0.015880297049987016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5417586968389114, 0);
  sqcRYGate(q, 1.0767310591521015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4429087547918775, 2);
  sqcRYGate(q, -1.6837912355789204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2227503220042113, 2);
  sqcRYGate(q, -0.08791882587474208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5370336380576273, 1);
  sqcRYGate(q, -0.3656253963583151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1995996797786216, 1);
  sqcRYGate(q, 2.468838269283316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8477574856374974, 0);
  sqcRYGate(q, 2.777267549435341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5537760578856465, 0);
  sqcRYGate(q, 2.878987955652318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4099530761115844, 2);
  sqcRYGate(q, 1.8409368236258512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.400281254615561, 2);
  sqcRYGate(q, -2.8502874997714063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.577476206963796, 1);
  sqcRYGate(q, -0.2831642922586529, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9738912463848797, 1);
  sqcRYGate(q, 1.237427210584013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9510019566092539, 0);
  sqcRYGate(q, 0.8790025572560356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6227713337883545, 0);
  sqcRYGate(q, -2.9410895458201116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7730806084802664, 2);
  sqcRYGate(q, -2.6364259261900265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1023366540529105, 2);
  sqcRYGate(q, -1.7587988085632185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.252989962846685, 1);
  sqcRYGate(q, 0.054679342107120554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5790066992816048, 1);
  sqcRYGate(q, 0.7251978998059059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2301662149337858, 0);
  sqcRYGate(q, -3.0912459761304207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8379307049813223, 0);
  sqcRYGate(q, -1.5231162666657205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5555370707078966, 2);
  sqcRYGate(q, -1.7958477390534897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9925214495378227, 2);
  sqcRYGate(q, 0.04361415255891892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2456802842910184, 1);
  sqcRYGate(q, 0.8398200536743222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2952024449503359, 1);
  sqcRYGate(q, 2.5534191238523696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6074213648718843, 0);
  sqcRYGate(q, 1.2111990080110147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.66839631834042, 0);
  sqcRYGate(q, 2.352302064081515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20312543736917732, 2);
  sqcRYGate(q, -0.1921258676398936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6993392797995774, 2);
  sqcRYGate(q, -2.134946824486918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5985450138065491, 1);
  sqcRYGate(q, 0.8367366963377192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11928714356400819, 1);
  sqcRYGate(q, 2.3321894632337243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02341421631915565, 0);
  sqcRYGate(q, -1.9409596721920392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.56788081449892, 0);
  sqcRYGate(q, -1.0592062853899602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5201661300979765, 2);
  sqcRYGate(q, 2.730128498743655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15189945729212534, 2);
  sqcRYGate(q, -0.9579313010221587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7699073236275638, 1);
  sqcRYGate(q, 2.8544550419260477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.11287419013447, 1);
  sqcRYGate(q, 2.5754058620353537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1614687886805855, 0);
  sqcRYGate(q, 0.34511086058719265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7589490217234522, 0);
  sqcRYGate(q, -1.9993015019152107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07208439798501498, 2);
  sqcRYGate(q, 2.4325301380539988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1909294060911422, 2);
  sqcRYGate(q, 0.2938302040706926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3362867061237518, 1);
  sqcRYGate(q, -2.1345494360580624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3290155449656904, 1);
  sqcRYGate(q, -1.832434972843702, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.43510407947141516, 0);
  sqcRYGate(q, -0.9994561136065734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12103636942757666, 0);
  sqcRYGate(q, -2.712210789684935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8152515508784246, 2);
  sqcRYGate(q, 0.49670600230636697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8482373291161374, 2);
  sqcRYGate(q, -0.723444719445369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.114021154510873, 1);
  sqcRYGate(q, -1.078521883206796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6163790490908195, 1);
  sqcRYGate(q, -1.463665645371913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7276752291212203, 0);
  sqcRYGate(q, 0.3550359296174106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.216907461216978, 0);
  sqcRYGate(q, 1.1107588995186513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3603793931421158, 2);
  sqcRYGate(q, 1.1360235517487385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.604615619745141, 2);
  sqcRYGate(q, 1.9755272234200714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0878625005540328, 1);
  sqcRYGate(q, -0.22273557686508205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.211730024454158, 1);
  sqcRYGate(q, 2.7858092266210157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6538161625807475, 0);
  sqcRYGate(q, 1.9090043725620598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8956598684326685, 0);
  sqcRYGate(q, 0.7103002365212338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1957781607137896, 2);
  sqcRYGate(q, 0.9792725733027172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33260352020715456, 2);
  sqcRYGate(q, -2.8490455563514616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38127885511586135, 1);
  sqcRYGate(q, 2.6009366932873808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6666177749349114, 1);
  sqcRYGate(q, 1.247680607260819, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4098200331465485, 0);
  sqcRYGate(q, 2.6155022100089442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33645100540398926, 0);
  sqcRYGate(q, 1.642360518895984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.198341619815251, 2);
  sqcRYGate(q, -2.315039179008161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8222042109094165, 2);
  sqcRYGate(q, 1.977634499038507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12497394974351347, 1);
  sqcRYGate(q, 2.9659286218652055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0349053662472985, 1);
  sqcRYGate(q, 2.8220678843750986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0953234846074205, 0);
  sqcRYGate(q, 2.018961913404207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4857148063481002, 0);
  sqcRYGate(q, -2.7911077061579737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0903313698793515, 2);
  sqcRYGate(q, -0.9138749151537955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0125213547142353, 2);
  sqcRYGate(q, -1.0932111229135222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4745044299615564, 1);
  sqcRYGate(q, -1.987520820781369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6807629063328644, 1);
  sqcRYGate(q, -2.9050500311942518, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.689385172554762, 0);
  sqcRYGate(q, -0.9835970535519587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.035213842189223, 0);
  sqcRYGate(q, 0.8167697475356817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7059716022611277, 2);
  sqcRYGate(q, -0.9682274152625094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.882016973439002, 2);
  sqcRYGate(q, -1.3573548283690409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.357769226324194, 1);
  sqcRYGate(q, -3.0698516906370292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4182646121232523, 1);
  sqcRYGate(q, 1.388543935384434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2236225780389312, 0);
  sqcRYGate(q, 2.720346017381476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6072337566583105, 0);
  sqcRYGate(q, -0.8889890348180207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0736067560722447, 2);
  sqcRYGate(q, -0.3866762041834804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.728235286304885, 2);
  sqcRYGate(q, -1.5484222453277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.907309389957029, 1);
  sqcRYGate(q, 2.1416055740905584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6546396800100152, 1);
  sqcRYGate(q, -2.474427639752527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3938413364942752, 0);
  sqcRYGate(q, 0.4073054039651822, 1);
  sqcRYGate(q, 0.6078287814335468, 2);
  sqcRYGate(q, -2.7170156943236456, 3);

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
