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

  sqcRYGate(q, 1.8302452277606558, 0);
  sqcRYGate(q, 2.361443184533628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8251499293323785, 0);
  sqcRYGate(q, -2.4671973329683183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7441417998607661, 2);
  sqcRYGate(q, 0.3029182611928194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6592987765024212, 2);
  sqcRYGate(q, -0.2839314208449157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8346694883438492, 0);
  sqcRYGate(q, 2.1178203967176583, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.30697865578202244, 0);
  sqcRYGate(q, 2.2004732314597253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4155678976247543, 1);
  sqcRYGate(q, -0.5358724282258924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1292357338819468, 1);
  sqcRYGate(q, -1.432175110697103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.244410104917354, 0);
  sqcRYGate(q, -2.773490634968697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22612804072193438, 0);
  sqcRYGate(q, -0.0007271671652124353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3216247655901718, 2);
  sqcRYGate(q, -2.302173108983823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0451613053892177, 2);
  sqcRYGate(q, 2.590910300036176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8776766001190595, 0);
  sqcRYGate(q, -1.7170416907901833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7881115552296345, 0);
  sqcRYGate(q, -1.56648429720987, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.239659810996871, 1);
  sqcRYGate(q, -2.078432370552452, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.345167277534002, 1);
  sqcRYGate(q, 0.8493750984174997, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.080619508267345, 0);
  sqcRYGate(q, 2.7853728352468634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18022427646726946, 0);
  sqcRYGate(q, 1.6963088202625483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8281728670876984, 2);
  sqcRYGate(q, 1.4264373771487244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6069362498600614, 2);
  sqcRYGate(q, -3.008801045546653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48922676452652686, 0);
  sqcRYGate(q, 0.6920799374066062, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9073598567014095, 0);
  sqcRYGate(q, -0.48899344193873606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9362178044219647, 1);
  sqcRYGate(q, -1.5558637870947878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3235761592419038, 1);
  sqcRYGate(q, -1.0989476473035675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.818443789774062, 0);
  sqcRYGate(q, 1.6265083093059092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1106192590786317, 0);
  sqcRYGate(q, -3.0814331577016203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4472148584073388, 2);
  sqcRYGate(q, -2.5455995138870313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.451820891895595, 2);
  sqcRYGate(q, 1.8907771701018734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.885158672870607, 0);
  sqcRYGate(q, -1.7262924157804305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.70815068791173, 0);
  sqcRYGate(q, 2.1837908678662767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.470159716549988, 1);
  sqcRYGate(q, 1.0491192635294695, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.213409936929609, 1);
  sqcRYGate(q, -0.8152143274309118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2363555282358217, 0);
  sqcRYGate(q, 0.8874655328020169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5987975419566025, 0);
  sqcRYGate(q, 1.8820611058489878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0660579717615484, 2);
  sqcRYGate(q, -0.9555703909099007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9626948006043294, 2);
  sqcRYGate(q, 2.344167857952626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4033666700827525, 0);
  sqcRYGate(q, 2.692040373004412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0115111788085818, 0);
  sqcRYGate(q, -3.122780452343888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.123408150651274, 1);
  sqcRYGate(q, -1.9676527670987964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6413863855397448, 1);
  sqcRYGate(q, 0.8263107446931381, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0595080082810124, 0);
  sqcRYGate(q, -1.7812821622061898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1229459820597825, 0);
  sqcRYGate(q, 1.8966602789909208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8384222158397012, 2);
  sqcRYGate(q, 0.7591531996051365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7419013065610676, 2);
  sqcRYGate(q, 1.720876985038382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1338048369069347, 0);
  sqcRYGate(q, -1.596160657834443, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3426365617500853, 0);
  sqcRYGate(q, 1.4432749367220739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4035597270266262, 1);
  sqcRYGate(q, -0.7616255255353107, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8574271703026533, 1);
  sqcRYGate(q, 2.0429574695532926, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4013381632456636, 0);
  sqcRYGate(q, -0.3601245885763369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.45519435591757, 0);
  sqcRYGate(q, 3.0815118144831346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0790614238439424, 2);
  sqcRYGate(q, 2.1166850872163705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4951225684012024, 2);
  sqcRYGate(q, -0.46161701336375494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8098406620863168, 0);
  sqcRYGate(q, -1.8508861052319767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8193709196209734, 0);
  sqcRYGate(q, 0.22494555746196723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7826418741543396, 1);
  sqcRYGate(q, -2.3539117460992074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.319758332391412, 1);
  sqcRYGate(q, 2.8636269894849837, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.124484572350654, 0);
  sqcRYGate(q, 0.37990507589934946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.665640581221831, 0);
  sqcRYGate(q, 0.0004145901664127649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3438778859415021, 2);
  sqcRYGate(q, 0.3339606862621202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0471310734534165, 2);
  sqcRYGate(q, 2.329014294308015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0708866016189527, 0);
  sqcRYGate(q, -1.2149524396613538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9689073225170683, 0);
  sqcRYGate(q, 2.907240109287357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.253449126040894, 1);
  sqcRYGate(q, -1.4743758358354417, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6415684207728596, 1);
  sqcRYGate(q, -2.529553144989864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.972467027955704, 0);
  sqcRYGate(q, 2.3329306637855045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36627910097122546, 0);
  sqcRYGate(q, 0.008866530024138617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6515842030791126, 2);
  sqcRYGate(q, 1.1188631067383468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.912619295159463, 2);
  sqcRYGate(q, -1.4304495000555288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8931610774387317, 0);
  sqcRYGate(q, 1.4407057188660302, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5921344782840465, 0);
  sqcRYGate(q, 0.632495510214124, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7618910130540903, 1);
  sqcRYGate(q, 0.15191979794335128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.312233752240876, 1);
  sqcRYGate(q, 1.4712993277005277, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1737900114814999, 0);
  sqcRYGate(q, -0.4073524406846678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1127624886898944, 0);
  sqcRYGate(q, -1.414137944472163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5319638845678885, 2);
  sqcRYGate(q, -0.8583408164330493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.101283761491259, 2);
  sqcRYGate(q, -0.1661591232745332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9658533669316007, 0);
  sqcRYGate(q, 0.469622725660174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0263661935688038, 0);
  sqcRYGate(q, -2.1043394041563017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.616940461281889, 1);
  sqcRYGate(q, -1.1126640133845178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12424052353164568, 1);
  sqcRYGate(q, -2.815373502076095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7493545669551738, 0);
  sqcRYGate(q, -2.0084472253029704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4645648721858535, 0);
  sqcRYGate(q, 1.6760127512618517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5486019543286502, 2);
  sqcRYGate(q, -3.114981838607946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8992272624230612, 2);
  sqcRYGate(q, 0.48483881163863446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4787002444917556, 0);
  sqcRYGate(q, 2.3384260153708403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.33901127721669777, 0);
  sqcRYGate(q, 0.9060212116966859, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.06292569455194, 1);
  sqcRYGate(q, 1.499002169804304, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.834557002127689, 1);
  sqcRYGate(q, 2.6690519052475175, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08908301845779132, 0);
  sqcRYGate(q, -0.12466019573669859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3957320985696895, 0);
  sqcRYGate(q, 2.227216268584371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.629496775739324, 2);
  sqcRYGate(q, 1.225737814711436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5886685465455126, 2);
  sqcRYGate(q, -1.9706370765456835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17138689302760568, 0);
  sqcRYGate(q, -2.0156026099200934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3637848658123369, 0);
  sqcRYGate(q, 1.6105572365824603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.656794087761576, 1);
  sqcRYGate(q, -1.4500389648125034, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.852566612580018, 1);
  sqcRYGate(q, 0.23683242251193629, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0806274146995793, 0);
  sqcRYGate(q, 1.4875230797359897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.062410946364866, 0);
  sqcRYGate(q, 1.4816700537072478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0073536493616384, 2);
  sqcRYGate(q, -2.207776955451962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3730160199225203, 2);
  sqcRYGate(q, 2.380457259843805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.059562450185787, 0);
  sqcRYGate(q, 0.14307162584559918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.981947924609468, 0);
  sqcRYGate(q, 2.4848322237594513, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.20885281066814274, 1);
  sqcRYGate(q, 0.04066415160382508, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.092452359509584, 1);
  sqcRYGate(q, -0.24964824421850904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5926145212784449, 0);
  sqcRYGate(q, 3.1059996118981554, 1);
  sqcRYGate(q, 3.060595037023419, 2);
  sqcRYGate(q, -1.3077526008638243, 3);

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
