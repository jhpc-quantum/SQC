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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.5200630469544842, 0);
  sqcRZGate(q, -1.8171867436774933, 0);
  sqcRYGate(q, -2.748450809984035, 1);
  sqcRZGate(q, -2.950120654284701, 1);
  sqcRYGate(q, 1.5904935958495452, 2);
  sqcRZGate(q, -2.7722261858911716, 2);
  sqcRYGate(q, 2.2827546889034718, 3);
  sqcRZGate(q, 1.4855995975770089, 3);
  sqcRYGate(q, 3.1277251624778546, 4);
  sqcRZGate(q, -2.210237457619205, 4);
  sqcRYGate(q, 0.09944751505838278, 5);
  sqcRZGate(q, -1.72165611878183, 5);
  sqcRYGate(q, -1.3621690111200664, 6);
  sqcRZGate(q, 1.9137354803178397, 6);
  sqcRYGate(q, 1.5422436119270975, 7);
  sqcRZGate(q, -0.7079365087748185, 7);
  sqcRYGate(q, -2.946359962322442, 8);
  sqcRZGate(q, -2.142015558430529, 8);
  sqcRYGate(q, 0.016857942104042678, 9);
  sqcRZGate(q, 0.4554778448131813, 9);
  sqcRYGate(q, -3.1387687537300777, 10);
  sqcRZGate(q, -0.5239905484160792, 10);
  sqcRYGate(q, 2.360841737955897, 11);
  sqcRZGate(q, -1.0773527212982807, 11);
  sqcRYGate(q, 1.0252091862177624, 12);
  sqcRZGate(q, -1.1931706154578268, 12);
  sqcRYGate(q, -0.14487251511894872, 13);
  sqcRZGate(q, 0.0229069364154304, 13);
  sqcRYGate(q, -3.1240850952975787, 14);
  sqcRZGate(q, 1.4345853255453678, 14);
  sqcRYGate(q, 2.568014768993634, 15);
  sqcRZGate(q, 0.909312279396266, 15);
  sqcRYGate(q, -1.8748523323131951, 16);
  sqcRZGate(q, 1.9095009230186417, 16);
  sqcRYGate(q, -0.7032755890220662, 17);
  sqcRZGate(q, 0.2474894966173462, 17);
  sqcRYGate(q, -1.6379025271012666, 18);
  sqcRZGate(q, 2.2253427030547837, 18);
  sqcRYGate(q, -0.5861607189625575, 19);
  sqcRZGate(q, 2.774818687385936, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.35104236765635116, 0);
  sqcRZGate(q, 0.21485696009458974, 0);
  sqcRYGate(q, -2.1600944917071816, 1);
  sqcRZGate(q, -3.102146921572911, 1);
  sqcRYGate(q, 0.028853110178769327, 2);
  sqcRZGate(q, -0.8671738165399187, 2);
  sqcRYGate(q, 1.9403650210853423, 3);
  sqcRZGate(q, 1.553534680906296, 3);
  sqcRYGate(q, -0.33693372081824796, 4);
  sqcRZGate(q, -0.0907229968746659, 4);
  sqcRYGate(q, -1.5134162375948588, 5);
  sqcRZGate(q, -3.1101782528500688, 5);
  sqcRYGate(q, 0.4769683162249745, 6);
  sqcRZGate(q, 2.010515215954267, 6);
  sqcRYGate(q, 2.3889608893154413, 7);
  sqcRZGate(q, -1.3797450134515437, 7);
  sqcRYGate(q, -0.6511175455956062, 8);
  sqcRZGate(q, 2.1027337853146326, 8);
  sqcRYGate(q, -1.5949259523400154, 9);
  sqcRZGate(q, -1.5649589827747832, 9);
  sqcRYGate(q, 0.0016521002536793367, 10);
  sqcRZGate(q, 1.4135495201162689, 10);
  sqcRYGate(q, 1.3302661589674631, 11);
  sqcRZGate(q, -2.701266835435656, 11);
  sqcRYGate(q, -1.1691526837967037, 12);
  sqcRZGate(q, -1.918937306854728, 12);
  sqcRYGate(q, -0.7324559331214582, 13);
  sqcRZGate(q, -3.1382262666453777, 13);
  sqcRYGate(q, 0.024490384382098718, 14);
  sqcRZGate(q, 0.8005486929210449, 14);
  sqcRYGate(q, -0.001120403658739555, 15);
  sqcRZGate(q, 1.6158377389463288, 15);
  sqcRYGate(q, 3.1348637021199686, 16);
  sqcRZGate(q, -2.9055212387505804, 16);
  sqcRYGate(q, -1.7803700723677824, 17);
  sqcRZGate(q, 2.8066989786544565, 17);
  sqcRYGate(q, -0.1682482482753166, 18);
  sqcRZGate(q, -1.2114923176824979, 18);
  sqcRYGate(q, -1.3358639831554653, 19);
  sqcRZGate(q, 1.6356428292880505, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.8229288190141357, 0);
  sqcRZGate(q, -2.9311106084156355, 0);
  sqcRYGate(q, 1.1802412432015261, 1);
  sqcRZGate(q, -1.2396087391381236, 1);
  sqcRYGate(q, 0.022203568350234626, 2);
  sqcRZGate(q, -0.7154619681962239, 2);
  sqcRYGate(q, -1.8569740719877026, 3);
  sqcRZGate(q, 1.5213693408351538, 3);
  sqcRYGate(q, 3.1063214711047213, 4);
  sqcRZGate(q, 3.075123555056617, 4);
  sqcRYGate(q, -1.5711669728023336, 5);
  sqcRZGate(q, -1.6076727298072369, 5);
  sqcRYGate(q, -1.5906265154218815, 6);
  sqcRZGate(q, -1.537760547463611, 6);
  sqcRYGate(q, 1.5015742232086815, 7);
  sqcRZGate(q, -3.061839796658499, 7);
  sqcRYGate(q, -0.002649063786127609, 8);
  sqcRZGate(q, 1.1695695778922879, 8);
  sqcRYGate(q, 0.633564707611755, 9);
  sqcRZGate(q, -1.5732257734321209, 9);
  sqcRYGate(q, 1.5717367544417378, 10);
  sqcRZGate(q, 1.9731274019330762, 10);
  sqcRYGate(q, -0.2519872498078026, 11);
  sqcRZGate(q, 1.5787229166636276, 11);
  sqcRYGate(q, 0.9080116084758082, 12);
  sqcRZGate(q, 2.164202589968935, 12);
  sqcRYGate(q, -1.6295821408715645, 13);
  sqcRZGate(q, -1.4827105449638296, 13);
  sqcRYGate(q, 0.12128781684395457, 14);
  sqcRZGate(q, 0.026150503792532732, 14);
  sqcRYGate(q, 1.9678288162691615, 15);
  sqcRZGate(q, -0.3238135172867426, 15);
  sqcRYGate(q, 2.557716733038199, 16);
  sqcRZGate(q, -1.8247845519997088, 16);
  sqcRYGate(q, 2.2441501658647627, 17);
  sqcRZGate(q, 1.818652496604643, 17);
  sqcRYGate(q, 3.102714531077324, 18);
  sqcRZGate(q, 2.8812412893472215, 18);
  sqcRYGate(q, -1.6282811896450011, 19);
  sqcRZGate(q, 0.6415485267132341, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.1934272986583998, 0);
  sqcRZGate(q, 1.4362081525743084, 0);
  sqcRYGate(q, 1.8685383608713941, 1);
  sqcRZGate(q, 0.840384065868296, 1);
  sqcRYGate(q, -1.520964828485267, 2);
  sqcRZGate(q, -0.1474799769921109, 2);
  sqcRYGate(q, 2.2587202837006517, 3);
  sqcRZGate(q, 2.979457078886052, 3);
  sqcRYGate(q, -1.5690765788585432, 4);
  sqcRZGate(q, -0.13023009691720516, 4);
  sqcRYGate(q, 1.3759084906828478, 5);
  sqcRZGate(q, 0.1885095436742419, 5);
  sqcRYGate(q, -2.8914545805695546, 6);
  sqcRZGate(q, 0.9267034289807741, 6);
  sqcRYGate(q, -3.1186330851695616, 7);
  sqcRZGate(q, -2.3585771470413275, 7);
  sqcRYGate(q, 1.564053402126783, 8);
  sqcRZGate(q, 0.11036847927576243, 8);
  sqcRYGate(q, 1.5694929642523967, 9);
  sqcRZGate(q, 2.0427190148052263, 9);
  sqcRYGate(q, 0.028058123286571757, 10);
  sqcRZGate(q, -1.0393203604361927, 10);
  sqcRYGate(q, 2.2484572986623745, 11);
  sqcRZGate(q, 1.528899260578085, 11);
  sqcRYGate(q, 1.995123474030478, 12);
  sqcRZGate(q, -0.7164676845983866, 12);
  sqcRYGate(q, -2.134399813220325, 13);
  sqcRZGate(q, 0.06709495797483278, 13);
  sqcRYGate(q, -1.5723994027595165, 14);
  sqcRZGate(q, -0.37762423448765575, 14);
  sqcRYGate(q, 3.1112677279969665, 15);
  sqcRZGate(q, -0.005847352990772476, 15);
  sqcRYGate(q, 3.0919981770968405, 16);
  sqcRZGate(q, -3.11663492124842, 16);
  sqcRYGate(q, -1.2746740815754531, 17);
  sqcRZGate(q, -2.9906645731922996, 17);
  sqcRYGate(q, 3.086283199237751, 18);
  sqcRZGate(q, 0.06781895857090525, 18);
  sqcRYGate(q, -1.7692235267919396, 19);
  sqcRZGate(q, 0.15790936235316977, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.572760633395526, 0);
  sqcRZGate(q, -0.3887576080432991, 0);
  sqcRYGate(q, 1.6473048291691412, 1);
  sqcRZGate(q, 0.34348231487054276, 1);
  sqcRYGate(q, -0.6140976561999009, 2);
  sqcRZGate(q, 3.079377946041507, 2);
  sqcRYGate(q, 2.0029179795901406, 3);
  sqcRZGate(q, -1.542916194685926, 3);
  sqcRYGate(q, -1.4872736808155507, 4);
  sqcRZGate(q, -1.6572837575551314, 4);
  sqcRYGate(q, 2.9021050200832383, 5);
  sqcRZGate(q, 0.3031750702582833, 5);
  sqcRYGate(q, -0.017314501493354444, 6);
  sqcRZGate(q, 0.6352351530185533, 6);
  sqcRYGate(q, 0.6411120769989349, 7);
  sqcRZGate(q, -1.8011882481880621, 7);
  sqcRYGate(q, -1.57174501312939, 8);
  sqcRZGate(q, 2.864428562301651, 8);
  sqcRYGate(q, 0.006566593281503297, 9);
  sqcRZGate(q, 0.1771867515822171, 9);
  sqcRYGate(q, -1.8282063540827445, 10);
  sqcRZGate(q, 0.08553985977662755, 10);
  sqcRYGate(q, 1.6903119026413096, 11);
  sqcRZGate(q, -0.4129483977545655, 11);
  sqcRYGate(q, -1.8341997892993414, 12);
  sqcRZGate(q, 1.4413706370068153, 12);
  sqcRYGate(q, -1.586846801896443, 13);
  sqcRZGate(q, 3.118424799330073, 13);
  sqcRYGate(q, -2.3072781158081046, 14);
  sqcRZGate(q, -0.01261881274143306, 14);
  sqcRYGate(q, 1.5718693338203182, 15);
  sqcRZGate(q, 1.9632926296359183, 15);
  sqcRYGate(q, -1.2351881875245303, 16);
  sqcRZGate(q, 0.059716139340206, 16);
  sqcRYGate(q, -2.0409734853649137, 17);
  sqcRZGate(q, -1.4827236631157263, 17);
  sqcRYGate(q, 1.627942287463723, 18);
  sqcRZGate(q, -1.1155738429325746, 18);
  sqcRYGate(q, 2.829773656420521, 19);
  sqcRZGate(q, -1.7280194061890086, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.13875912873373641, 0);
  sqcRZGate(q, -0.8718485243683957, 0);
  sqcRYGate(q, 0.03949946320209437, 1);
  sqcRZGate(q, -0.8760233974917088, 1);
  sqcRYGate(q, 0.39832662991547707, 2);
  sqcRZGate(q, -3.0238816894972262, 2);
  sqcRYGate(q, -0.06973667989133327, 3);
  sqcRZGate(q, -1.5980775670041287, 3);
  sqcRYGate(q, 0.06443241964560897, 4);
  sqcRZGate(q, -3.0595001531460655, 4);
  sqcRYGate(q, -0.00751299249140125, 5);
  sqcRZGate(q, -0.30062129438868507, 5);
  sqcRYGate(q, 1.6576183014923165, 6);
  sqcRZGate(q, 0.0054045302716400675, 6);
  sqcRYGate(q, 1.5699275093358906, 7);
  sqcRZGate(q, 0.9263392898779692, 7);
  sqcRYGate(q, 0.5905240054149138, 8);
  sqcRZGate(q, -2.743001407844969, 8);
  sqcRYGate(q, -1.5764013092535132, 9);
  sqcRZGate(q, 0.21528959508036125, 9);
  sqcRYGate(q, 1.8668496293080656, 10);
  sqcRZGate(q, 0.14094477042861714, 10);
  sqcRYGate(q, 1.5327877410238449, 11);
  sqcRZGate(q, -3.072431680196267, 11);
  sqcRYGate(q, 1.6378515929389277, 12);
  sqcRZGate(q, -2.926944963211542, 12);
  sqcRYGate(q, 1.3423921092075628, 13);
  sqcRZGate(q, 1.914494064860305, 13);
  sqcRYGate(q, 2.547553551090769, 14);
  sqcRZGate(q, -1.5772537585010418, 14);
  sqcRYGate(q, -3.139943620599536, 15);
  sqcRZGate(q, 2.605100643838569, 15);
  sqcRYGate(q, 1.5711799039626262, 16);
  sqcRZGate(q, 1.563670895985145, 16);
  sqcRYGate(q, 3.0553981757578796, 17);
  sqcRZGate(q, -1.808681840043111, 17);
  sqcRYGate(q, 0.6116839930528936, 18);
  sqcRZGate(q, -3.1310576456140877, 18);
  sqcRYGate(q, 2.1301735464317755, 19);
  sqcRZGate(q, 0.611060905538383, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.106749769265136, 0);
  sqcRZGate(q, 0.4018411173926166, 0);
  sqcRYGate(q, -0.022829270824284882, 1);
  sqcRZGate(q, -2.4938635657800394, 1);
  sqcRYGate(q, -2.5398834368310186, 2);
  sqcRZGate(q, 1.119759327835821, 2);
  sqcRYGate(q, 1.7596610518129028, 3);
  sqcRZGate(q, -0.29967238627632875, 3);
  sqcRYGate(q, 1.41757352822557, 4);
  sqcRZGate(q, -0.07038020543796991, 4);
  sqcRYGate(q, 1.5377655763871385, 5);
  sqcRZGate(q, 0.00115397061893119, 5);
  sqcRYGate(q, 1.5710239461946776, 6);
  sqcRZGate(q, -3.0916119727646487, 6);
  sqcRYGate(q, 0.02410307625876751, 7);
  sqcRZGate(q, 2.7387313116355, 7);
  sqcRYGate(q, -1.58430049996916, 8);
  sqcRZGate(q, -1.4341516764121378, 8);
  sqcRYGate(q, -3.0630116097919147, 9);
  sqcRZGate(q, 0.3434973878639293, 9);
  sqcRYGate(q, -2.886627667214184, 10);
  sqcRZGate(q, -3.017500626616683, 10);
  sqcRYGate(q, 1.7767902083316427, 11);
  sqcRZGate(q, 0.5616095426419216, 11);
  sqcRYGate(q, 0.14964205142703424, 12);
  sqcRZGate(q, -1.604785658815981, 12);
  sqcRYGate(q, -1.5395034551945461, 13);
  sqcRZGate(q, 2.9005205344466156, 13);
  sqcRYGate(q, -1.5943133375541314, 14);
  sqcRZGate(q, 2.313490985095657, 14);
  sqcRYGate(q, 0.5220778758808162, 15);
  sqcRZGate(q, 0.48558600776622146, 15);
  sqcRYGate(q, -1.5339930744885386, 16);
  sqcRZGate(q, -0.7130590224948984, 16);
  sqcRYGate(q, 3.124271577806593, 17);
  sqcRZGate(q, -0.13953322212635896, 17);
  sqcRYGate(q, 0.11823152064055317, 18);
  sqcRZGate(q, -0.6233530335227085, 18);
  sqcRYGate(q, 2.896660640350044, 19);
  sqcRZGate(q, -0.9047831482070673, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.3498344171206842, 0);
  sqcRZGate(q, 1.2267624309546417, 0);
  sqcRYGate(q, -1.518817341086282, 1);
  sqcRZGate(q, 1.544309631306982, 1);
  sqcRYGate(q, 1.0508754215941336, 2);
  sqcRZGate(q, -0.4942568952492936, 2);
  sqcRYGate(q, -0.006580663569302714, 3);
  sqcRZGate(q, -2.8423664845966106, 3);
  sqcRYGate(q, 0.6920790142240889, 4);
  sqcRZGate(q, 3.1361446038919563, 4);
  sqcRYGate(q, 1.5709292210424683, 5);
  sqcRZGate(q, 3.1364817864412444, 5);
  sqcRYGate(q, -2.221304960780291, 6);
  sqcRZGate(q, 1.517150708151428, 6);
  sqcRYGate(q, 3.135191166125716, 7);
  sqcRZGate(q, 2.969996371153908, 7);
  sqcRYGate(q, 1.7683114637624415, 8);
  sqcRZGate(q, -0.9252865485255086, 8);
  sqcRYGate(q, -3.057880607769345, 9);
  sqcRZGate(q, 0.12278798637774113, 9);
  sqcRYGate(q, 0.11699383311351787, 10);
  sqcRZGate(q, -1.5608549299643988, 10);
  sqcRYGate(q, -0.0500999153494135, 11);
  sqcRZGate(q, 0.858513309030913, 11);
  sqcRYGate(q, -2.875006427177316, 12);
  sqcRZGate(q, 1.7624889431924937, 12);
  sqcRYGate(q, 0.0042395880777732495, 13);
  sqcRZGate(q, -1.3216663744982828, 13);
  sqcRYGate(q, 0.0070235694834028806, 14);
  sqcRZGate(q, 2.6646164000825383, 14);
  sqcRYGate(q, -1.6117698328973438, 15);
  sqcRZGate(q, 2.167320114619683, 15);
  sqcRYGate(q, 0.0002457934559085828, 16);
  sqcRZGate(q, 0.7066994162404312, 16);
  sqcRYGate(q, -3.138845308118439, 17);
  sqcRZGate(q, -1.2618061018089985, 17);
  sqcRYGate(q, -1.084780806721821, 18);
  sqcRZGate(q, -0.951976748555272, 18);
  sqcRYGate(q, -1.814202106584867, 19);
  sqcRZGate(q, -1.5071289693971723, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.2530098863862795, 0);
  sqcRZGate(q, -0.24034690584423735, 0);
  sqcRYGate(q, 1.5739062054795045, 1);
  sqcRZGate(q, 0.1752050957684153, 1);
  sqcRYGate(q, 3.0882633327254703, 2);
  sqcRZGate(q, -0.09410501365874158, 2);
  sqcRYGate(q, 2.749060144977297, 3);
  sqcRZGate(q, 1.5687202216045832, 3);
  sqcRYGate(q, 1.5703667986429561, 4);
  sqcRZGate(q, 1.6031156138798583, 4);
  sqcRYGate(q, -3.0226511037239208, 5);
  sqcRZGate(q, -1.4854146929238194, 5);
  sqcRYGate(q, -1.3431371064237645, 6);
  sqcRZGate(q, -2.897459700344921, 6);
  sqcRYGate(q, -0.0027590156955525913, 7);
  sqcRZGate(q, 0.38247770335178544, 7);
  sqcRYGate(q, 1.4948126825219108, 8);
  sqcRZGate(q, 0.4383855526082445, 8);
  sqcRYGate(q, -2.9315477963043852, 9);
  sqcRZGate(q, -0.26137386171446586, 9);
  sqcRYGate(q, 1.5333099128597714, 10);
  sqcRZGate(q, 0.9807525135607753, 10);
  sqcRYGate(q, -1.8268002945778123, 11);
  sqcRZGate(q, 2.877549541350246, 11);
  sqcRYGate(q, 0.1741184797295894, 12);
  sqcRZGate(q, 1.3724867014802027, 12);
  sqcRYGate(q, 1.2405147405316044, 13);
  sqcRZGate(q, -0.05430719566236774, 13);
  sqcRYGate(q, -1.4294156812547574, 14);
  sqcRZGate(q, 1.8745360949036451, 14);
  sqcRYGate(q, -0.7231164385934941, 15);
  sqcRZGate(q, 2.1599131249466654, 15);
  sqcRYGate(q, -1.3432897921317102, 16);
  sqcRZGate(q, 2.6719456998351947, 16);
  sqcRYGate(q, 1.574925402251858, 17);
  sqcRZGate(q, -1.5754016070480237, 17);
  sqcRYGate(q, -3.1197652029797687, 18);
  sqcRZGate(q, 0.1742486248414377, 18);
  sqcRYGate(q, -0.23109858034979872, 19);
  sqcRZGate(q, 0.7556936703346729, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.851471875141124, 0);
  sqcRZGate(q, -0.14374692696484817, 0);
  sqcRYGate(q, 1.5123220425459367, 1);
  sqcRZGate(q, 1.5671022485648995, 1);
  sqcRYGate(q, 1.5750906790527397, 2);
  sqcRZGate(q, 1.5725008392169357, 2);
  sqcRYGate(q, 1.5714501204043314, 3);
  sqcRZGate(q, 3.1406447858695423, 3);
  sqcRYGate(q, -1.5664552821480575, 4);
  sqcRZGate(q, -1.256066412245964, 4);
  sqcRYGate(q, 3.1175138577945707, 5);
  sqcRZGate(q, -3.0141167446351833, 5);
  sqcRYGate(q, 1.5630215315451006, 6);
  sqcRZGate(q, 1.1484948016723917, 6);
  sqcRYGate(q, 0.04619908271711548, 7);
  sqcRZGate(q, 1.8348020508258103, 7);
  sqcRYGate(q, -1.510475810117, 8);
  sqcRZGate(q, 1.5940510110512507, 8);
  sqcRYGate(q, -0.00018660611465470822, 9);
  sqcRZGate(q, 2.542059904576085, 9);
  sqcRYGate(q, -2.313916114824962, 10);
  sqcRZGate(q, -2.8746494128635622, 10);
  sqcRYGate(q, -1.5195758186558008, 11);
  sqcRZGate(q, -0.6208202131149692, 11);
  sqcRYGate(q, -1.667986869637935, 12);
  sqcRZGate(q, 1.5623257832355286, 12);
  sqcRYGate(q, 3.0847401584363805, 13);
  sqcRZGate(q, -0.39357542384731736, 13);
  sqcRYGate(q, 3.138712387619371, 14);
  sqcRZGate(q, -1.2637976744553665, 14);
  sqcRYGate(q, -0.062032954346654456, 15);
  sqcRZGate(q, -1.6685201653767319, 15);
  sqcRYGate(q, -0.0014089313767173901, 16);
  sqcRZGate(q, -2.6784757492859375, 16);
  sqcRYGate(q, 1.5249141148151448, 17);
  sqcRZGate(q, 3.0962556699263755, 17);
  sqcRYGate(q, 1.474030285607431, 18);
  sqcRZGate(q, -0.11930322504727098, 18);
  sqcRYGate(q, 0.5945767444318868, 19);
  sqcRZGate(q, 0.1546106277995598, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.037504998552455, 0);
  sqcRZGate(q, -1.8357195337538048, 0);
  sqcRYGate(q, -0.05903496431165394, 1);
  sqcRZGate(q, -0.011184287088377154, 1);
  sqcRYGate(q, -1.5719587196647051, 2);
  sqcRZGate(q, 1.5685032627253115, 2);
  sqcRYGate(q, 1.5795239992696841, 3);
  sqcRZGate(q, 2.168805605300148, 3);
  sqcRYGate(q, 3.14023562423603, 4);
  sqcRZGate(q, 3.03942851707495, 4);
  sqcRYGate(q, -0.012275591353921669, 5);
  sqcRZGate(q, 1.4927034896325688, 5);
  sqcRYGate(q, 2.628309374639002, 6);
  sqcRZGate(q, 3.0919487345149617, 6);
  sqcRYGate(q, 0.033426414977128616, 7);
  sqcRZGate(q, -1.4715617989752232, 7);
  sqcRYGate(q, -1.320685226256174, 8);
  sqcRZGate(q, -0.036562994660611636, 8);
  sqcRYGate(q, 0.07983809618844528, 9);
  sqcRZGate(q, -0.7179465575368608, 9);
  sqcRYGate(q, 0.005101116876083722, 10);
  sqcRZGate(q, 0.43863828416359313, 10);
  sqcRYGate(q, -3.078286440809301, 11);
  sqcRZGate(q, 0.9444724590484528, 11);
  sqcRYGate(q, 1.5783981603721449, 12);
  sqcRZGate(q, 1.4850493274820415, 12);
  sqcRYGate(q, 2.3325141716531372, 13);
  sqcRZGate(q, 1.4236995892694198, 13);
  sqcRYGate(q, 1.4454745023081534, 14);
  sqcRZGate(q, -2.254265599605623, 14);
  sqcRYGate(q, -1.075303323972438, 15);
  sqcRZGate(q, 0.13016641800844034, 15);
  sqcRYGate(q, -1.3816388700290472, 16);
  sqcRZGate(q, 0.07536574705514039, 16);
  sqcRYGate(q, -3.1047996214148212, 17);
  sqcRZGate(q, -1.6194442423044286, 17);
  sqcRYGate(q, -0.010890092613566415, 18);
  sqcRZGate(q, -2.267281846369505, 18);
  sqcRYGate(q, 0.7193893131639504, 19);
  sqcRZGate(q, 0.1381368451196303, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.9403920774499, 0);
  sqcRZGate(q, -0.29731580216923714, 0);
  sqcRYGate(q, -1.5712548354938791, 1);
  sqcRZGate(q, 1.5701408338333849, 1);
  sqcRYGate(q, 2.9301906464848124, 2);
  sqcRZGate(q, 1.568960403734538, 2);
  sqcRYGate(q, 3.1058591185810296, 3);
  sqcRZGate(q, -0.9842556559766094, 3);
  sqcRYGate(q, 3.1099731784028313, 4);
  sqcRZGate(q, 0.009733161174675651, 4);
  sqcRYGate(q, -1.584856980938096, 5);
  sqcRZGate(q, -1.0280514496718056, 5);
  sqcRYGate(q, 0.1684401773125268, 6);
  sqcRZGate(q, 1.9569330193502719, 6);
  sqcRYGate(q, -1.0187476223402008, 7);
  sqcRZGate(q, 2.090068329307664, 7);
  sqcRYGate(q, 1.6778214213591987, 8);
  sqcRZGate(q, 2.227273873566932, 8);
  sqcRYGate(q, -1.5583129865000107, 9);
  sqcRZGate(q, 1.6852831898609848, 9);
  sqcRYGate(q, 0.8849104647425334, 10);
  sqcRZGate(q, -2.0694160726195943, 10);
  sqcRYGate(q, -1.52763906267197, 11);
  sqcRZGate(q, 0.6206164438040939, 11);
  sqcRYGate(q, -3.1292580017403857, 12);
  sqcRZGate(q, -0.08466064063368979, 12);
  sqcRYGate(q, 1.6164432434957368, 13);
  sqcRZGate(q, -1.577998208829759, 13);
  sqcRYGate(q, 3.1079924645129986, 14);
  sqcRZGate(q, -0.5818754615631028, 14);
  sqcRYGate(q, 0.03707367179511254, 15);
  sqcRZGate(q, -2.5676106829768988, 15);
  sqcRYGate(q, 2.850092003789385, 16);
  sqcRZGate(q, -0.12526384905598112, 16);
  sqcRYGate(q, 1.5626853533089136, 17);
  sqcRZGate(q, -1.375620618094974, 17);
  sqcRYGate(q, -2.966775414916682, 18);
  sqcRZGate(q, -0.8027637434199288, 18);
  sqcRYGate(q, 0.12541595682733764, 19);
  sqcRZGate(q, 0.031666346192650005, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5712438837010103, 0);
  sqcRZGate(q, 0.7610017944600677, 0);
  sqcRYGate(q, -1.573497861150222, 1);
  sqcRZGate(q, 2.6225651664656446, 1);
  sqcRYGate(q, 1.5036656716984227, 2);
  sqcRZGate(q, 0.153451109334128, 2);
  sqcRYGate(q, 1.5796998099774484, 3);
  sqcRZGate(q, 2.3052173268804284, 3);
  sqcRYGate(q, 0.028802530562985283, 4);
  sqcRZGate(q, -0.8847187325727845, 4);
  sqcRYGate(q, -0.06170490479651909, 5);
  sqcRZGate(q, 2.955875788576537, 5);
  sqcRYGate(q, -3.1352743863179175, 6);
  sqcRZGate(q, 0.9364262308572041, 6);
  sqcRYGate(q, -3.1073688851824457, 7);
  sqcRZGate(q, 3.0864687666283426, 7);
  sqcRYGate(q, 0.0124219336500202, 8);
  sqcRZGate(q, -0.7659949260592568, 8);
  sqcRYGate(q, -0.0562631766455608, 9);
  sqcRZGate(q, 2.390991662987682, 9);
  sqcRYGate(q, 1.5569632965361901, 10);
  sqcRZGate(q, 2.365250175116884, 10);
  sqcRYGate(q, 0.0513403899341334, 11);
  sqcRZGate(q, -2.7106554327616106, 11);
  sqcRYGate(q, 3.1308710320553623, 12);
  sqcRZGate(q, 1.0466133694475876, 12);
  sqcRYGate(q, -1.5753709409175902, 13);
  sqcRZGate(q, 2.9134209783164855, 13);
  sqcRYGate(q, -0.046451784667349574, 14);
  sqcRZGate(q, -1.0212610922438499, 14);
  sqcRYGate(q, 3.1004584271630464, 15);
  sqcRZGate(q, 1.1877264640508178, 15);
  sqcRYGate(q, -3.1374169303858506, 16);
  sqcRZGate(q, -1.7442888070521914, 16);
  sqcRYGate(q, -3.018154997728314, 17);
  sqcRZGate(q, 1.9980676492515226, 17);
  sqcRYGate(q, -1.581920810179871, 18);
  sqcRZGate(q, 2.3754427591024796, 18);
  sqcRYGate(q, 2.277750430447295, 19);
  sqcRZGate(q, -1.8907730141368555, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.7200998599013424, 0);
  sqcRZGate(q, 0.009393054571791737, 0);
  sqcRYGate(q, -2.355096265093211, 1);
  sqcRZGate(q, -1.4587028690694255, 1);
  sqcRYGate(q, -0.8119844873018787, 2);
  sqcRZGate(q, -1.6306974252117417, 2);
  sqcRYGate(q, 1.264300626939595, 3);
  sqcRZGate(q, 0.43441778649479773, 3);
  sqcRYGate(q, 2.3877094107136796, 4);
  sqcRZGate(q, 1.71569331948701, 4);
  sqcRYGate(q, 0.8354994875031593, 5);
  sqcRZGate(q, -1.449444888935575, 5);
  sqcRYGate(q, 0.9318434689938773, 6);
  sqcRZGate(q, 1.5699013342781971, 6);
  sqcRYGate(q, -0.34581740349013934, 7);
  sqcRZGate(q, 1.0516687069612534, 7);
  sqcRYGate(q, 2.202287116131699, 8);
  sqcRZGate(q, 1.367873130171269, 8);
  sqcRYGate(q, -0.8464899894011886, 9);
  sqcRZGate(q, -0.8787949601225131, 9);
  sqcRYGate(q, -0.6471815463955648, 10);
  sqcRZGate(q, -1.3671021169556363, 10);
  sqcRYGate(q, 2.299756142387298, 11);
  sqcRZGate(q, 1.526580993367201, 11);
  sqcRYGate(q, 2.1999888467886164, 12);
  sqcRZGate(q, 0.7907183439887864, 12);
  sqcRYGate(q, 1.028540835798358, 13);
  sqcRZGate(q, -0.25624525573249984, 13);
  sqcRYGate(q, 2.350254694638802, 14);
  sqcRZGate(q, -1.5928043397268685, 14);
  sqcRYGate(q, 2.2487750384888807, 15);
  sqcRZGate(q, -1.7638611653925824, 15);
  sqcRYGate(q, -2.4039847415164797, 16);
  sqcRZGate(q, 1.9650343784150666, 16);
  sqcRYGate(q, -0.8650955761400138, 17);
  sqcRZGate(q, -1.8028366484954832, 17);
  sqcRYGate(q, -1.6989094222054282, 18);
  sqcRZGate(q, -2.9133332771225837, 18);
  sqcRYGate(q, -0.8319603340318702, 19);
  sqcRZGate(q, 1.9936487415117048, 19);

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
