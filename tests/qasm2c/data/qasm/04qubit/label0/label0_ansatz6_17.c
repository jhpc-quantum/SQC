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

  sqcRYGate(q, -0.4238151848714437, 0);
  sqcRYGate(q, -1.8008882410081215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2010331076964356, 0);
  sqcRYGate(q, -1.7214692042342656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4714943280474437, 1);
  sqcRYGate(q, -0.6596821299734347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15760338718819353, 1);
  sqcRYGate(q, 2.899452551042425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14204692816314446, 2);
  sqcRYGate(q, -0.760127228013701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.562160446126646, 2);
  sqcRYGate(q, 2.335929071809897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9930232384212189, 0);
  sqcRYGate(q, 2.196285541302189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7294606527478713, 0);
  sqcRYGate(q, 1.554439807643531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22931802905644713, 1);
  sqcRYGate(q, -1.837307320920912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1434765739343682, 1);
  sqcRYGate(q, -3.0701602864987474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1441157747407704, 2);
  sqcRYGate(q, 2.827008813496213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9561479453676105, 2);
  sqcRYGate(q, 1.4327443305498653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5369591741606747, 0);
  sqcRYGate(q, -2.760248504469286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6605044652130667, 0);
  sqcRYGate(q, 0.1781611409729255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5981411275291126, 1);
  sqcRYGate(q, -0.6697654314766923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7629134016682517, 1);
  sqcRYGate(q, 2.5304750598505406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3548495426689033, 2);
  sqcRYGate(q, 2.0505025583321754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5161953360600356, 2);
  sqcRYGate(q, -2.302565415535123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47603585895826733, 0);
  sqcRYGate(q, 1.6721227538420171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5127543816247282, 0);
  sqcRYGate(q, 0.884051237723007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6969976835471589, 1);
  sqcRYGate(q, 0.20804039276161035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13359952109690865, 1);
  sqcRYGate(q, 0.475489916493933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2676120795931274, 2);
  sqcRYGate(q, -0.8388904318322946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.95859245335976, 2);
  sqcRYGate(q, -3.057391913900286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07162142741811665, 0);
  sqcRYGate(q, -0.9001367365333719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1608382695945494, 0);
  sqcRYGate(q, 1.3399802960930256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.130596674535818, 1);
  sqcRYGate(q, -1.1162502713646762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3732478614705284, 1);
  sqcRYGate(q, 1.834760955447197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8342168692461746, 2);
  sqcRYGate(q, 1.2932454776693019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5445727167497901, 2);
  sqcRYGate(q, -2.8079521134416274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.612955040105287, 0);
  sqcRYGate(q, -2.938282849554207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.965791335831356, 0);
  sqcRYGate(q, 0.16676001874228466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3621371553802222, 1);
  sqcRYGate(q, -0.35602301303506234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.081007595328443, 1);
  sqcRYGate(q, -2.7898147998275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.594432406325669, 2);
  sqcRYGate(q, 0.8648154315504701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.09297494384902, 2);
  sqcRYGate(q, 0.6804690899594327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.032773084999023, 0);
  sqcRYGate(q, -0.5416674081991584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49179700869396886, 0);
  sqcRYGate(q, -0.44191127059866897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.343603034731078, 1);
  sqcRYGate(q, -2.307012400835145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1560928530775714, 1);
  sqcRYGate(q, -1.6051923966726591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6456491091422878, 2);
  sqcRYGate(q, 0.8627343137697787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.55044729941852, 2);
  sqcRYGate(q, -3.0708246339139182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.126668274360422, 0);
  sqcRYGate(q, -2.9426356731655634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.396358721456836, 0);
  sqcRYGate(q, -2.0133029613253575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0125342924054, 1);
  sqcRYGate(q, 0.7075607669803897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1187981862808876, 1);
  sqcRYGate(q, -0.2694244354988671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0770148849075885, 2);
  sqcRYGate(q, 1.3664405584717665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4068760883654394, 2);
  sqcRYGate(q, 2.455495073779702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.387713915157703, 0);
  sqcRYGate(q, 0.2939663844107807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1322127427293882, 0);
  sqcRYGate(q, 1.4731978557436947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6912770513446164, 1);
  sqcRYGate(q, 2.44191321920727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.964869242913089, 1);
  sqcRYGate(q, 2.292569248414176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7856871163660295, 2);
  sqcRYGate(q, 2.9633280529940005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11813229237342723, 2);
  sqcRYGate(q, -0.3777257171694899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6458713615470727, 0);
  sqcRYGate(q, -0.8364509904011053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.727405461252994, 0);
  sqcRYGate(q, 1.4573320680197188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2303444450129355, 1);
  sqcRYGate(q, -0.48981633492568083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0398561018307233, 1);
  sqcRYGate(q, 0.37485035001539546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.832419759366588, 2);
  sqcRYGate(q, 0.5863246411486057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8007055156877289, 2);
  sqcRYGate(q, 2.5093311982098245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3719164658050078, 0);
  sqcRYGate(q, 0.6872184674172769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.728610244740516, 0);
  sqcRYGate(q, -0.6945316810072208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4869851841709058, 1);
  sqcRYGate(q, 1.1735538225839175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7587414795028633, 1);
  sqcRYGate(q, -1.274738046102173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1851248875720548, 2);
  sqcRYGate(q, -1.4510595824327162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.834438148442803, 2);
  sqcRYGate(q, -2.634789342080224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1580953764621031, 0);
  sqcRYGate(q, 2.81518070917137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0710601440492509, 0);
  sqcRYGate(q, -1.3762993932063923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7325759985174134, 1);
  sqcRYGate(q, 0.228273078331088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3263363801734185, 1);
  sqcRYGate(q, -0.5433112031324846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6556709425011085, 2);
  sqcRYGate(q, -2.3109931759346827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5984048488266422, 2);
  sqcRYGate(q, 1.6958972791313762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8769388902255406, 0);
  sqcRYGate(q, -2.5223078022195806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42879254658878424, 0);
  sqcRYGate(q, -2.8622558384597174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.881332815568749, 1);
  sqcRYGate(q, 2.6778285954593093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4753631022799407, 1);
  sqcRYGate(q, 2.5879102274931323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.093926245878693, 2);
  sqcRYGate(q, 0.5185241466085871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1251950371829509, 2);
  sqcRYGate(q, -2.9084092585031476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3573285251936737, 0);
  sqcRYGate(q, 2.2635967193307374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8968431699604956, 0);
  sqcRYGate(q, 0.4041109509602632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7443593813407576, 1);
  sqcRYGate(q, 1.603688929476891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1793021137997597, 1);
  sqcRYGate(q, 2.9212975286589353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.088541487686487, 2);
  sqcRYGate(q, -2.0535862371293305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.632303893445631, 2);
  sqcRYGate(q, -3.052824584818261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0530267031174976, 0);
  sqcRYGate(q, -0.6539025996953186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3261481302493503, 0);
  sqcRYGate(q, -1.062904824107852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4227224351245855, 1);
  sqcRYGate(q, -1.3200298375881265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4406239150954168, 1);
  sqcRYGate(q, -1.2313054412033408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5245965564251849, 2);
  sqcRYGate(q, 1.542451483064081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3218423933831911, 2);
  sqcRYGate(q, -2.7335292869163057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.34438492214434874, 0);
  sqcRYGate(q, 1.2569447071238091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.452551817212458, 0);
  sqcRYGate(q, 0.8939693902029696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.367638156717689, 1);
  sqcRYGate(q, -0.6573722477375774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8076442697978754, 1);
  sqcRYGate(q, 0.9588135442831994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3891924290380664, 2);
  sqcRYGate(q, -0.6672533415426483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4269556641836747, 2);
  sqcRYGate(q, -2.317848956481173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22049305871466585, 0);
  sqcRYGate(q, -0.9102593709150817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.187882600266879, 0);
  sqcRYGate(q, -0.9670640389492494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26838045708741937, 1);
  sqcRYGate(q, 1.5178148871052288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6561122577868925, 1);
  sqcRYGate(q, 0.5029468870284546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.431857115486677, 2);
  sqcRYGate(q, 0.007241866485473678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6147765096685155, 2);
  sqcRYGate(q, 1.4289659968222397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3767072822491673, 0);
  sqcRYGate(q, -2.4221128887674825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.751307126184951, 0);
  sqcRYGate(q, -3.0108541623060145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4102526418670736, 1);
  sqcRYGate(q, -1.8277677965384322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.514073705102729, 1);
  sqcRYGate(q, 0.28779594026554634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9363908375662442, 2);
  sqcRYGate(q, 2.2808797779472108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20586370980337598, 2);
  sqcRYGate(q, 2.288463842168351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5311723577389316, 0);
  sqcRYGate(q, -1.150468901836504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8952826287577378, 0);
  sqcRYGate(q, -2.015177648692632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.962618670613363, 1);
  sqcRYGate(q, 1.689026399261952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9440026028399096, 1);
  sqcRYGate(q, -2.098985994199766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9577803663806899, 2);
  sqcRYGate(q, -0.7008868225296849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3139933364509782, 2);
  sqcRYGate(q, 2.8862422345386256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9992179827095424, 0);
  sqcRYGate(q, -0.37800152163006545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.090148243391198, 0);
  sqcRYGate(q, 1.6511332022827707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8626045946156715, 1);
  sqcRYGate(q, -0.3952975302125994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.525253172725582, 1);
  sqcRYGate(q, 2.693359148246833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5760455720641304, 2);
  sqcRYGate(q, 2.879438516351021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32678779882696424, 2);
  sqcRYGate(q, -2.242974445872501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2836797223687295, 0);
  sqcRYGate(q, -0.20448465509062785, 1);
  sqcRYGate(q, -1.4485168345109323, 2);
  sqcRYGate(q, -1.3101844749210259, 3);

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
