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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.2339208121533636, 0);
  sqcRYGate(q, -3.097974503298162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42501982762513435, 0);
  sqcRYGate(q, 0.38072186211053816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.725162966527437, 2);
  sqcRYGate(q, 2.4644648465721617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.695671620402018, 2);
  sqcRYGate(q, 1.3475395335885332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14179293716070696, 0);
  sqcRYGate(q, 1.566975257810794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9225997292420324, 0);
  sqcRYGate(q, -1.803012787347845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7664191911485725, 1);
  sqcRYGate(q, 1.9652564131196226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.571598075381405, 1);
  sqcRYGate(q, -1.0132356316377198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.274212046321999, 0);
  sqcRYGate(q, -2.446719676967235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7696009631828644, 0);
  sqcRYGate(q, 2.309816987118166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8067565091315039, 2);
  sqcRYGate(q, 0.23289486013513716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12757263147485112, 2);
  sqcRYGate(q, 0.703146968668432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.874957747032223, 0);
  sqcRYGate(q, 0.22387083939742308, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11449464223896172, 0);
  sqcRYGate(q, 2.2246630390756232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9183009628480079, 1);
  sqcRYGate(q, 1.18093464408519, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1040969941766416, 1);
  sqcRYGate(q, 0.18711384328502434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35426355955505695, 0);
  sqcRYGate(q, -2.004730312026981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8362264569575983, 0);
  sqcRYGate(q, 0.9864649600085135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.343881165449222, 2);
  sqcRYGate(q, -2.7614414557567306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6565541583465535, 2);
  sqcRYGate(q, 0.9032244409816319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.485984983542674, 0);
  sqcRYGate(q, 2.388227250422951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.980673698383953, 0);
  sqcRYGate(q, -0.43230965680381267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6938679869282103, 1);
  sqcRYGate(q, -0.6195258442441846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6945861436664964, 1);
  sqcRYGate(q, -2.033257749623187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8699256912683362, 0);
  sqcRYGate(q, 0.9318718969656983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1920316528625647, 0);
  sqcRYGate(q, -2.967903903126759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4098661164683346, 2);
  sqcRYGate(q, 2.0933377102144624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07968548391736499, 2);
  sqcRYGate(q, 1.578609599098204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.653473517506503, 0);
  sqcRYGate(q, -1.410664447754509, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4220302589425833, 0);
  sqcRYGate(q, -0.9461170643493286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34205473917857643, 1);
  sqcRYGate(q, 2.147712410946795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6477949173334473, 1);
  sqcRYGate(q, 3.017590443608878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.045081756001788875, 0);
  sqcRYGate(q, -0.05249132776737228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15897366128825752, 0);
  sqcRYGate(q, -2.5602834942299624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1300119733936704, 2);
  sqcRYGate(q, 2.3666232962877998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10692246691702693, 2);
  sqcRYGate(q, 0.5766586095989811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6642866406605799, 0);
  sqcRYGate(q, 1.7876915508895044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3654039589275584, 0);
  sqcRYGate(q, -1.6988440559944644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.123824815301633, 1);
  sqcRYGate(q, -2.668088790884031, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6373650012808582, 1);
  sqcRYGate(q, -0.1291176828385294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0453166347423402, 0);
  sqcRYGate(q, 0.5850279676664591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2823950833616484, 0);
  sqcRYGate(q, -0.6665324738811913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.071210518069294, 2);
  sqcRYGate(q, 1.8650548046746627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9967723316603592, 2);
  sqcRYGate(q, 0.9009033661593912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1509620710002437, 0);
  sqcRYGate(q, 1.8224435148213896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14880831833883984, 0);
  sqcRYGate(q, 2.6168990139154857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5886703324549585, 1);
  sqcRYGate(q, 2.2621410953084604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.43473219696810994, 1);
  sqcRYGate(q, 2.8963295723413442, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1564139071868995, 0);
  sqcRYGate(q, -1.449103431907377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.676150543896294, 0);
  sqcRYGate(q, -1.79057824442248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7885771552955246, 2);
  sqcRYGate(q, -2.5843806181683613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.908342698552166, 2);
  sqcRYGate(q, 2.360269374334975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7681543304469258, 0);
  sqcRYGate(q, 0.25241698872834084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0411188612688127, 0);
  sqcRYGate(q, -0.800076735497108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.457796724707526, 1);
  sqcRYGate(q, 2.4270078950486846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6265073040120184, 1);
  sqcRYGate(q, -1.4596596782819453, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.755630084515038, 0);
  sqcRYGate(q, -0.9095069054435694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.681340607407195, 0);
  sqcRYGate(q, -1.8923060828854565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.70352079165196, 2);
  sqcRYGate(q, -0.5028052303442925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40993021090292064, 2);
  sqcRYGate(q, -1.4300435654264536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.01667195025883, 0);
  sqcRYGate(q, 0.29146007090179626, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.846257328108567, 0);
  sqcRYGate(q, -0.3922486439604633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.226839442335546, 1);
  sqcRYGate(q, -0.6040251149450642, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9262641715624946, 1);
  sqcRYGate(q, 0.8354735370210781, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14977230790903123, 0);
  sqcRYGate(q, 0.49603172289455216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1526667052038957, 0);
  sqcRYGate(q, 0.9241197927044171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3241101232423214, 2);
  sqcRYGate(q, -1.2783773910360257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3768997925735875, 2);
  sqcRYGate(q, 3.0877203665306374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8697921333647551, 0);
  sqcRYGate(q, -2.1753071243540605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.989582047018315, 0);
  sqcRYGate(q, -2.581040357774347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9322553839756833, 1);
  sqcRYGate(q, -1.3627653951753151, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6882061634265935, 1);
  sqcRYGate(q, 0.8037964804651627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8399805659946273, 0);
  sqcRYGate(q, -0.0038387180272188006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0860020787870315, 0);
  sqcRYGate(q, -1.976928458723056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9316368610901805, 2);
  sqcRYGate(q, -1.1422139353025693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.385546876239184, 2);
  sqcRYGate(q, 0.9768949283893313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9045146268950797, 0);
  sqcRYGate(q, 0.9915249068025053, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2102105060413602, 0);
  sqcRYGate(q, -1.145321954971708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18167587109276778, 1);
  sqcRYGate(q, 2.006280280495381, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.639326865289849, 1);
  sqcRYGate(q, -1.077169837309973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5736865266397304, 0);
  sqcRYGate(q, -1.483523541522903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9700412965207708, 0);
  sqcRYGate(q, -3.05452677403262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.481943202597646, 2);
  sqcRYGate(q, -2.548109164235627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8984138763318545, 2);
  sqcRYGate(q, -2.217334324247638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.011706408192548158, 0);
  sqcRYGate(q, 0.7381899907373293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8933636596056616, 0);
  sqcRYGate(q, -1.2222269766990237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3716001006624094, 1);
  sqcRYGate(q, 2.1104267072719196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.047403443816906, 1);
  sqcRYGate(q, 2.7402975112382877, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3811820317765521, 0);
  sqcRYGate(q, 0.5842859786044654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.917792076440508, 0);
  sqcRYGate(q, 1.993179379161311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.036704926354534, 2);
  sqcRYGate(q, 0.012458847036319831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08310330401044119, 2);
  sqcRYGate(q, -2.4820220920029854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0350749270105808, 0);
  sqcRYGate(q, -0.6203738200626248, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.861829244301031, 0);
  sqcRYGate(q, 0.20289551103700057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08250201443354753, 1);
  sqcRYGate(q, 1.7396419462512889, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.08250227173885, 1);
  sqcRYGate(q, 3.0468540071514942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.311835758935044, 0);
  sqcRYGate(q, 0.673981371125361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7847725542247836, 0);
  sqcRYGate(q, -1.0402677093051282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7479040629189333, 2);
  sqcRYGate(q, -2.8729327704707353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2517884084587005, 2);
  sqcRYGate(q, -1.7552708274938233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8940468424183363, 0);
  sqcRYGate(q, 3.015402266622145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0413612649941095, 0);
  sqcRYGate(q, -1.8845208141336145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0993032939823149, 1);
  sqcRYGate(q, 0.7825163539696571, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.009762498537876, 1);
  sqcRYGate(q, 2.2355246606995562, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.082691138301399, 0);
  sqcRYGate(q, 1.2719215188356705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3938129061750748, 0);
  sqcRYGate(q, -0.9448283856584778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.960983823140206, 2);
  sqcRYGate(q, 2.0523968258806713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6680884435455674, 2);
  sqcRYGate(q, -0.2194499758830233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2780367444547225, 0);
  sqcRYGate(q, -2.5579422661669162, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9676081176938953, 0);
  sqcRYGate(q, 2.989572551434476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4783389288831193, 1);
  sqcRYGate(q, 1.9620415928504702, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0304259239493936, 1);
  sqcRYGate(q, 1.9185490705998751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13734021889930936, 0);
  sqcRYGate(q, -2.1103398365802333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17109116726533546, 0);
  sqcRYGate(q, 0.3431306072764757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.031651621218849214, 2);
  sqcRYGate(q, 0.6443070086530527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.264924653178017, 2);
  sqcRYGate(q, -0.9884591367001478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8057655902904797, 0);
  sqcRYGate(q, 1.7217183968651169, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.374036340536108, 0);
  sqcRYGate(q, -1.137817904094077, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8499496235297501, 1);
  sqcRYGate(q, -0.5060846017961849, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.040103967432477, 1);
  sqcRYGate(q, -1.3028544282656265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8235615727273626, 0);
  sqcRYGate(q, 0.09559015903341891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5026929742259416, 0);
  sqcRYGate(q, -1.9583156063711948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5380533736076458, 2);
  sqcRYGate(q, 2.6013236170223855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3070501297618762, 2);
  sqcRYGate(q, 0.9933407974605049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3851330129832284, 0);
  sqcRYGate(q, -0.09764794492274653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2137543494780578, 0);
  sqcRYGate(q, 1.8828265103293775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.580476224072544, 1);
  sqcRYGate(q, 2.327925469685131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.49963363569746966, 1);
  sqcRYGate(q, -2.4971339862844024, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4595096341739966, 0);
  sqcRYGate(q, -0.03334535685803239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0967358599128545, 0);
  sqcRYGate(q, -2.4557899947115396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8482729262734408, 2);
  sqcRYGate(q, -0.6277687370681703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3915154609653593, 2);
  sqcRYGate(q, 1.0780987528505301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7948230158476015, 0);
  sqcRYGate(q, 1.9726158610746218, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.95084978067695, 0);
  sqcRYGate(q, 2.7458569631303518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0488262131641743, 1);
  sqcRYGate(q, 0.5008715002006117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9695390297723958, 1);
  sqcRYGate(q, -1.0518085668014365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5669439207815441, 0);
  sqcRYGate(q, 1.6631319513769727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8101903028620452, 0);
  sqcRYGate(q, -1.2361687134367347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.091514108064592, 2);
  sqcRYGate(q, 0.536298969972819, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6253087076425311, 2);
  sqcRYGate(q, 0.6333442846406955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.666597292831364, 0);
  sqcRYGate(q, -3.043726526970502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0457558176032924, 0);
  sqcRYGate(q, -1.7644011546702216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.10262339743537, 1);
  sqcRYGate(q, -1.4185418507522272, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.520231792099218, 1);
  sqcRYGate(q, -1.353067316853438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2850908814298583, 0);
  sqcRYGate(q, 1.3486004286667752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.73531241305245, 0);
  sqcRYGate(q, -2.6795493645813555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.046757808982691, 2);
  sqcRYGate(q, 2.5957703854376293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13404909265864362, 2);
  sqcRYGate(q, 0.4778314499802019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6701848151128382, 0);
  sqcRYGate(q, 1.02724574518176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.515429779646034, 0);
  sqcRYGate(q, -1.259884911999304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11073096195773449, 1);
  sqcRYGate(q, 1.2220382354512704, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2874690137411333, 1);
  sqcRYGate(q, 0.3933042808128914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7163385629022966, 0);
  sqcRYGate(q, -2.483409725222357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.492786631571034, 0);
  sqcRYGate(q, 0.4743728845580428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2424509632132725, 2);
  sqcRYGate(q, -0.48661441494878505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0341878182763047, 2);
  sqcRYGate(q, 0.065024106254794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9331019997660673, 0);
  sqcRYGate(q, -1.0328964232763411, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9235449789940607, 0);
  sqcRYGate(q, 1.3712558011453133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.232907303527643, 1);
  sqcRYGate(q, -0.6017258408849822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.37733618805081154, 1);
  sqcRYGate(q, 0.2616339992834966, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4188293213910308, 0);
  sqcRYGate(q, -0.15564244839310573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4492970231759228, 0);
  sqcRYGate(q, 1.4280716622376328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.208767731292812, 2);
  sqcRYGate(q, 0.3532708337790175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4849008982364085, 2);
  sqcRYGate(q, 1.539009998017065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2721339542772445, 0);
  sqcRYGate(q, 1.8906078865721678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4048675231426254, 0);
  sqcRYGate(q, 0.7947215272211955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8703668709640163, 1);
  sqcRYGate(q, 0.4839004514894094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8074300128241783, 1);
  sqcRYGate(q, 1.688415915113156, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4726242154605311, 0);
  sqcRYGate(q, -3.0418575287542153, 1);
  sqcRYGate(q, 2.1260948893278817, 2);
  sqcRYGate(q, -0.12850588635767402, 3);

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
