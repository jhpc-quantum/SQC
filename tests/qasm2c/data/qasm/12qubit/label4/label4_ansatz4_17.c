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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.004107265008145479, 0);
  sqcRZGate(q, -0.9025462287230458, 0);
  sqcRYGate(q, -3.139638978935924, 1);
  sqcRZGate(q, 1.0218459328872935, 1);
  sqcRYGate(q, 1.4277680820280647, 2);
  sqcRZGate(q, -1.7697352497831944, 2);
  sqcRYGate(q, 0.2945450106468781, 3);
  sqcRZGate(q, -0.4196726831323534, 3);
  sqcRYGate(q, 0.0004245456023568295, 4);
  sqcRZGate(q, -0.6030527871425093, 4);
  sqcRYGate(q, -0.0004694649569767506, 5);
  sqcRZGate(q, 2.542574502871152, 5);
  sqcRYGate(q, -1.2492466107944704, 6);
  sqcRZGate(q, -2.3880470633570083, 6);
  sqcRYGate(q, 1.5010240564777333, 7);
  sqcRZGate(q, 1.711956844406087, 7);
  sqcRYGate(q, -0.02683324432220003, 8);
  sqcRZGate(q, 0.5574982985572438, 8);
  sqcRYGate(q, -3.1349443398107386, 9);
  sqcRZGate(q, 0.3801347051975803, 9);
  sqcRYGate(q, 1.3916954038084404, 10);
  sqcRZGate(q, 1.9925736105106164, 10);
  sqcRYGate(q, 0.23746820922762, 11);
  sqcRZGate(q, -0.5404467014928106, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.130998246985688, 0);
  sqcRZGate(q, 2.9764909512174835, 0);
  sqcRYGate(q, -0.009619799522793569, 1);
  sqcRZGate(q, -0.8980634742722913, 1);
  sqcRYGate(q, 0.4839890184818049, 2);
  sqcRZGate(q, -2.0475470927508375, 2);
  sqcRYGate(q, -1.5250835296430554, 3);
  sqcRZGate(q, 0.7550621463150858, 3);
  sqcRYGate(q, 0.0027405866255775083, 4);
  sqcRZGate(q, -1.5492104092772283, 4);
  sqcRYGate(q, 3.139921437621423, 5);
  sqcRZGate(q, -3.073470507163716, 5);
  sqcRYGate(q, 1.728159668729413, 6);
  sqcRZGate(q, 1.782399988379881, 6);
  sqcRYGate(q, -2.191897040996537, 7);
  sqcRZGate(q, 0.6263027128603591, 7);
  sqcRYGate(q, -2.7978222323666952, 8);
  sqcRZGate(q, 1.2788431307000812, 8);
  sqcRYGate(q, -3.02963475704828, 9);
  sqcRZGate(q, 2.949580468878428, 9);
  sqcRYGate(q, -1.3922450499064924, 10);
  sqcRZGate(q, -1.4192607935820432, 10);
  sqcRYGate(q, 2.891692736520472, 11);
  sqcRZGate(q, 2.476721701024498, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.017970905624978606, 0);
  sqcRZGate(q, -2.5436764498183875, 0);
  sqcRYGate(q, 3.1380702600714847, 1);
  sqcRZGate(q, 2.1974177945619555, 1);
  sqcRYGate(q, 0.33875302549008157, 2);
  sqcRZGate(q, 0.6667642119540935, 2);
  sqcRYGate(q, 0.01524989253103115, 3);
  sqcRZGate(q, -0.7854150404257084, 3);
  sqcRYGate(q, 1.562763528787709, 4);
  sqcRZGate(q, 0.5811501401757058, 4);
  sqcRYGate(q, 3.0401379265709383, 5);
  sqcRZGate(q, -2.583207576139569, 5);
  sqcRYGate(q, -0.1275429212937853, 6);
  sqcRZGate(q, -1.5805427562589722, 6);
  sqcRYGate(q, 3.0504835925932468, 7);
  sqcRZGate(q, 0.8774544629796063, 7);
  sqcRYGate(q, 2.536569297411383, 8);
  sqcRZGate(q, -1.4361632289577484, 8);
  sqcRYGate(q, 1.247494303571373, 9);
  sqcRZGate(q, -2.061970897161962, 9);
  sqcRYGate(q, -1.2869611868931816, 10);
  sqcRZGate(q, -1.200577301749739, 10);
  sqcRYGate(q, -2.3769275497539217, 11);
  sqcRZGate(q, 1.3439809642276872, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.007324013695562183, 0);
  sqcRZGate(q, 2.946048069536521, 0);
  sqcRYGate(q, -0.009193199292122145, 1);
  sqcRZGate(q, 1.7145883567266, 1);
  sqcRYGate(q, -1.5453245098337947, 2);
  sqcRZGate(q, 3.0614379369164753, 2);
  sqcRYGate(q, -2.5404039907197893, 3);
  sqcRZGate(q, 0.2539801912391743, 3);
  sqcRYGate(q, -0.0009230642027047153, 4);
  sqcRZGate(q, 2.4699229797355278, 4);
  sqcRYGate(q, 0.002523258861129918, 5);
  sqcRZGate(q, -1.9783940759820453, 5);
  sqcRYGate(q, 0.000597796232490557, 6);
  sqcRZGate(q, 0.9139232717800194, 6);
  sqcRYGate(q, -0.00016948790810508542, 7);
  sqcRZGate(q, -2.3565602918041053, 7);
  sqcRYGate(q, -2.0724889802895508, 8);
  sqcRZGate(q, 1.7373654323175713, 8);
  sqcRYGate(q, 0.642771519817538, 9);
  sqcRZGate(q, -1.768670673458634, 9);
  sqcRYGate(q, 1.3734551598425213, 10);
  sqcRZGate(q, -1.4016324686277337, 10);
  sqcRYGate(q, 0.29950551521566177, 11);
  sqcRZGate(q, 2.4029381179397236, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.43525009226915673, 0);
  sqcRZGate(q, -1.3385073853855989, 0);
  sqcRYGate(q, -0.010468550633044416, 1);
  sqcRZGate(q, -1.297968655810347, 1);
  sqcRYGate(q, -3.0891777600095196, 2);
  sqcRZGate(q, 2.8762105542749428, 2);
  sqcRYGate(q, -0.9801887599535972, 3);
  sqcRZGate(q, -3.059729648093571, 3);
  sqcRYGate(q, -1.6035863781066184, 4);
  sqcRZGate(q, 1.6839028051695435, 4);
  sqcRYGate(q, -1.5280937656921185, 5);
  sqcRZGate(q, 2.712023565342384, 5);
  sqcRYGate(q, 0.02527331746282499, 6);
  sqcRZGate(q, -2.6158376783964736, 6);
  sqcRYGate(q, 1.4084438590483586, 7);
  sqcRZGate(q, 1.9640733423919716, 7);
  sqcRYGate(q, 1.98037240966432, 8);
  sqcRZGate(q, -3.027258585503661, 8);
  sqcRYGate(q, 0.3620411709584439, 9);
  sqcRZGate(q, -0.5129971818536889, 9);
  sqcRYGate(q, -2.005945076816256, 10);
  sqcRZGate(q, 0.006336298115481754, 10);
  sqcRYGate(q, -1.626222935939829, 11);
  sqcRZGate(q, -0.4968917450959305, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.203190593789511, 0);
  sqcRZGate(q, -2.5894637503536164, 0);
  sqcRYGate(q, -0.022556504651142006, 1);
  sqcRZGate(q, -0.5521000252150816, 1);
  sqcRYGate(q, -2.886255721330694, 2);
  sqcRZGate(q, 0.026734880165508734, 2);
  sqcRYGate(q, -3.125805798136525, 3);
  sqcRZGate(q, -0.38208498668026286, 3);
  sqcRYGate(q, -1.57202790759544, 4);
  sqcRZGate(q, 0.0011603696391473406, 4);
  sqcRYGate(q, -1.5706569212207375, 5);
  sqcRZGate(q, 3.1412711886429996, 5);
  sqcRYGate(q, -3.133861078227962, 6);
  sqcRZGate(q, 2.1537527316796017, 6);
  sqcRYGate(q, -3.1287658814611006, 7);
  sqcRZGate(q, 1.299498175764788, 7);
  sqcRYGate(q, 2.851806753829254, 8);
  sqcRZGate(q, 2.797108334121864, 8);
  sqcRYGate(q, 0.6184323231101884, 9);
  sqcRZGate(q, 1.3764351807331634, 9);
  sqcRYGate(q, -2.0930657678836333, 10);
  sqcRZGate(q, -3.112651516062551, 10);
  sqcRYGate(q, 1.1865038996644666, 11);
  sqcRZGate(q, 1.1080292632271544, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8970314555100051, 0);
  sqcRZGate(q, -2.9154968817301334, 0);
  sqcRYGate(q, 1.5843699408502578, 1);
  sqcRZGate(q, 0.007761446879623435, 1);
  sqcRYGate(q, -0.23372149996574976, 2);
  sqcRZGate(q, -0.13579906729986038, 2);
  sqcRYGate(q, 0.0005421740062789745, 3);
  sqcRZGate(q, -2.6011070007189567, 3);
  sqcRYGate(q, 1.5712307108709913, 4);
  sqcRZGate(q, -1.6709081570867221, 4);
  sqcRYGate(q, 1.5711773781148268, 5);
  sqcRZGate(q, 3.12507419813138, 5);
  sqcRYGate(q, 0.00016232871401613823, 6);
  sqcRZGate(q, -0.6008888324779934, 6);
  sqcRYGate(q, -3.1370590332404684, 7);
  sqcRZGate(q, 2.2403049036137404, 7);
  sqcRYGate(q, 0.5085128455053587, 8);
  sqcRZGate(q, -1.1181506783930217, 8);
  sqcRYGate(q, -2.2284119975607712, 9);
  sqcRZGate(q, 0.8537463974074272, 9);
  sqcRYGate(q, 0.9992436618198679, 10);
  sqcRZGate(q, 0.6328877687149612, 10);
  sqcRYGate(q, -1.2013835726475066, 11);
  sqcRZGate(q, -0.965891489452944, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.130876916020207, 0);
  sqcRZGate(q, 1.749017085369107, 0);
  sqcRYGate(q, 1.5614843200045885, 1);
  sqcRZGate(q, -2.71675118776265, 1);
  sqcRYGate(q, -1.5697848343114595, 2);
  sqcRZGate(q, 4.9757344970905674e-05, 2);
  sqcRYGate(q, -1.5721574175151236, 3);
  sqcRZGate(q, -5.348864921828067e-05, 3);
  sqcRYGate(q, -2.1459278576710092, 4);
  sqcRZGate(q, -1.6555512490393107, 4);
  sqcRYGate(q, 1.4580989781413491, 5);
  sqcRZGate(q, 0.11149848917018802, 5);
  sqcRYGate(q, -3.132172417365668, 6);
  sqcRZGate(q, -2.101233909999011, 6);
  sqcRYGate(q, 0.025636168918540102, 7);
  sqcRZGate(q, 3.0743817197426013, 7);
  sqcRYGate(q, -3.044558442526442, 8);
  sqcRZGate(q, 1.6293431333803259, 8);
  sqcRYGate(q, -3.007822863176643, 9);
  sqcRZGate(q, -1.2743750111778016, 9);
  sqcRYGate(q, -1.3246734796604676, 10);
  sqcRZGate(q, 0.4658143101672261, 10);
  sqcRYGate(q, 1.981562917637999, 11);
  sqcRZGate(q, 1.835709938125679, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.1449431043320173, 0);
  sqcRZGate(q, 2.628146421622475, 0);
  sqcRYGate(q, -0.2704450226382047, 1);
  sqcRZGate(q, -2.1829282363605937, 1);
  sqcRYGate(q, -1.5641451399879793, 2);
  sqcRZGate(q, 2.0659678885035553, 2);
  sqcRYGate(q, 1.5576024178923298, 3);
  sqcRZGate(q, 0.31991103974771185, 3);
  sqcRYGate(q, -1.5498596634448805, 4);
  sqcRZGate(q, 2.6139393608666306, 4);
  sqcRYGate(q, 1.5747430200146815, 5);
  sqcRZGate(q, 0.0025874619379920973, 5);
  sqcRYGate(q, -0.012134137322653338, 6);
  sqcRZGate(q, 1.5258872973305804, 6);
  sqcRYGate(q, 3.120499481383343, 7);
  sqcRZGate(q, 2.801455235235125, 7);
  sqcRYGate(q, -1.4777290497386941, 8);
  sqcRZGate(q, -2.84163203527919, 8);
  sqcRYGate(q, -1.7783694010902167, 9);
  sqcRZGate(q, -2.625728910646687, 9);
  sqcRYGate(q, -1.516318198937827, 10);
  sqcRZGate(q, 0.32323668452013354, 10);
  sqcRYGate(q, -1.5213188679378138, 11);
  sqcRZGate(q, -2.9748048589869454, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.1959022646808293, 0);
  sqcRZGate(q, 1.8316667265181312, 0);
  sqcRYGate(q, 1.5307730888189495, 1);
  sqcRZGate(q, 3.015365223091499, 1);
  sqcRYGate(q, 0.005383488946109516, 2);
  sqcRZGate(q, 0.01596197029256836, 2);
  sqcRYGate(q, 3.138896198211373, 3);
  sqcRZGate(q, 0.24343120572023833, 3);
  sqcRYGate(q, -0.0010054404691501873, 4);
  sqcRZGate(q, 0.018254294341556232, 4);
  sqcRYGate(q, 1.5711491886749913, 5);
  sqcRZGate(q, -1.0498733341271205, 5);
  sqcRYGate(q, -0.0009156520613098352, 6);
  sqcRZGate(q, 2.4089000686377986, 6);
  sqcRYGate(q, 3.140848952336951, 7);
  sqcRZGate(q, -0.5384142837065697, 7);
  sqcRYGate(q, 2.7112154952196086, 8);
  sqcRZGate(q, -1.8777897051264227, 8);
  sqcRYGate(q, -0.21098304957812444, 9);
  sqcRZGate(q, 2.167089898901739, 9);
  sqcRYGate(q, 2.065672822208133, 10);
  sqcRZGate(q, 0.2865225357495831, 10);
  sqcRYGate(q, -1.221234090734784, 11);
  sqcRZGate(q, -1.8966272123589738, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.13994837504395313, 0);
  sqcRZGate(q, 3.079995801529282, 0);
  sqcRYGate(q, -0.39887822602678824, 1);
  sqcRZGate(q, 2.0625984404799045, 1);
  sqcRYGate(q, 3.138593760245064, 2);
  sqcRZGate(q, 1.8106689587077733, 2);
  sqcRYGate(q, -0.0218704746601146, 3);
  sqcRZGate(q, -1.5572764680330966, 3);
  sqcRYGate(q, 3.1097255208854375, 4);
  sqcRZGate(q, -0.5073201161471665, 4);
  sqcRYGate(q, 0.0013095060891297194, 5);
  sqcRZGate(q, -1.954969476287772, 5);
  sqcRYGate(q, -1.5665749745120212, 6);
  sqcRZGate(q, 2.5257898204391336, 6);
  sqcRYGate(q, 3.0990158080290815, 7);
  sqcRZGate(q, 2.4017922455263223, 7);
  sqcRYGate(q, 2.6140552801360077, 8);
  sqcRZGate(q, 3.007724088418582, 8);
  sqcRYGate(q, -0.7556168588615852, 9);
  sqcRZGate(q, -2.742557412446091, 9);
  sqcRYGate(q, -0.6079280488358059, 10);
  sqcRZGate(q, 2.2637566640653652, 10);
  sqcRYGate(q, -1.9950912211572618, 11);
  sqcRZGate(q, 2.023495832593821, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.1614023176535997, 0);
  sqcRZGate(q, 2.455749069427861, 0);
  sqcRYGate(q, -2.7613685795568843, 1);
  sqcRZGate(q, -1.1798925474936182, 1);
  sqcRYGate(q, 3.1366268241950745, 2);
  sqcRZGate(q, -1.8143570080721645, 2);
  sqcRYGate(q, -0.003676684623285274, 3);
  sqcRZGate(q, 0.8078618361118228, 3);
  sqcRYGate(q, -2.9769054925542004, 4);
  sqcRZGate(q, 2.130992309107085, 4);
  sqcRYGate(q, 2.6927617402496904, 5);
  sqcRZGate(q, 0.13740051087659122, 5);
  sqcRYGate(q, 3.139626004507416, 6);
  sqcRZGate(q, 1.1620907006735148, 6);
  sqcRYGate(q, -3.0520110185001093, 7);
  sqcRZGate(q, -0.25546493570277923, 7);
  sqcRYGate(q, -3.141427749102502, 8);
  sqcRZGate(q, 2.002940894914397, 8);
  sqcRYGate(q, 3.1413229868886323, 9);
  sqcRZGate(q, 1.8770911323993626, 9);
  sqcRYGate(q, -1.7272143659060601, 10);
  sqcRZGate(q, 1.6429787081480989, 10);
  sqcRYGate(q, 2.4429087585408924, 11);
  sqcRZGate(q, 3.11807256870444, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0462659458402404, 0);
  sqcRZGate(q, -0.37497318976442173, 0);
  sqcRYGate(q, -1.3700208099024511, 1);
  sqcRZGate(q, 2.008363733469231, 1);
  sqcRYGate(q, 0.2650179342215387, 2);
  sqcRZGate(q, 3.0575992608929945, 2);
  sqcRYGate(q, 0.0033193459456413166, 3);
  sqcRZGate(q, 2.3732769657948065, 3);
  sqcRYGate(q, 3.1237016503375945, 4);
  sqcRZGate(q, -1.0164503380963064, 4);
  sqcRYGate(q, -3.139538258796786, 5);
  sqcRZGate(q, -1.8674386751709482, 5);
  sqcRYGate(q, -3.1196008723014685, 6);
  sqcRZGate(q, -0.8083495318702384, 6);
  sqcRYGate(q, -1.5664803758581378, 7);
  sqcRZGate(q, -1.1433430435767429, 7);
  sqcRYGate(q, -3.031212626534062, 8);
  sqcRZGate(q, -2.5558645632091643, 8);
  sqcRYGate(q, 2.632734692127293, 9);
  sqcRZGate(q, -0.679270044099415, 9);
  sqcRYGate(q, -0.5013037591951237, 10);
  sqcRZGate(q, -2.905589883444467, 10);
  sqcRYGate(q, -2.52589214697036, 11);
  sqcRZGate(q, 1.3523406769733541, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9474684837771306, 0);
  sqcRZGate(q, -3.0559702738215666, 0);
  sqcRYGate(q, -1.5698859436172636, 1);
  sqcRZGate(q, -2.598010125704175, 1);
  sqcRYGate(q, 3.1115497533944096, 2);
  sqcRZGate(q, 0.979355171152583, 2);
  sqcRYGate(q, -3.056910727687295, 3);
  sqcRZGate(q, -1.6282044049582733, 3);
  sqcRYGate(q, -1.5717106356934007, 4);
  sqcRZGate(q, -3.13383890498573, 4);
  sqcRYGate(q, -5.6222459200426346e-05, 5);
  sqcRZGate(q, 0.4322844857698014, 5);
  sqcRYGate(q, 0.0015850880862071837, 6);
  sqcRZGate(q, 2.54976404979158, 6);
  sqcRYGate(q, 3.139780726876727, 7);
  sqcRZGate(q, 2.3077460845835542, 7);
  sqcRYGate(q, -2.197677780350067, 8);
  sqcRZGate(q, 2.389394636520121, 8);
  sqcRYGate(q, 0.9705512699774709, 9);
  sqcRZGate(q, -2.233391227495318, 9);
  sqcRYGate(q, -2.834284721982067, 10);
  sqcRZGate(q, 1.7027542895962189, 10);
  sqcRYGate(q, -1.3813587489345505, 11);
  sqcRZGate(q, -1.14963234011588, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.015455734705980717, 0);
  sqcRZGate(q, -0.05897070123544379, 0);
  sqcRYGate(q, -0.01219863536163594, 1);
  sqcRZGate(q, -0.32342368869024357, 1);
  sqcRYGate(q, 0.0044356569937017455, 2);
  sqcRZGate(q, 0.5357087820194866, 2);
  sqcRYGate(q, 1.5750816989612364, 3);
  sqcRZGate(q, -0.002221092403301451, 3);
  sqcRYGate(q, 1.5876355937977538, 4);
  sqcRZGate(q, 2.0063401779631596, 4);
  sqcRYGate(q, -1.570679678146898, 5);
  sqcRZGate(q, 1.429892889318075, 5);
  sqcRYGate(q, 1.675142730973822, 6);
  sqcRZGate(q, 1.5705892351531154, 6);
  sqcRYGate(q, -0.059922584837885574, 7);
  sqcRZGate(q, 2.854573816108358, 7);
  sqcRYGate(q, -1.55094563893299, 8);
  sqcRZGate(q, -0.36310468138818397, 8);
  sqcRYGate(q, 1.6570033288773756, 9);
  sqcRZGate(q, 2.8267593862795133, 9);
  sqcRYGate(q, -2.4341962332696196, 10);
  sqcRZGate(q, 0.9063131162670448, 10);
  sqcRYGate(q, -1.9485423072684398, 11);
  sqcRZGate(q, -1.6443669615659495, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0006595313958799309, 0);
  sqcRZGate(q, -0.1601239117282658, 0);
  sqcRYGate(q, 3.1412422030755605, 1);
  sqcRZGate(q, 0.7835486424989391, 1);
  sqcRYGate(q, -1.5742571289520502, 2);
  sqcRZGate(q, -1.5678153899895124, 2);
  sqcRYGate(q, 1.5734034172987235, 3);
  sqcRZGate(q, -0.7677500232122177, 3);
  sqcRYGate(q, 3.1415505909858528, 4);
  sqcRZGate(q, -0.5417326093342156, 4);
  sqcRYGate(q, -1.6205218414278022e-05, 5);
  sqcRZGate(q, 1.7087541197815774, 5);
  sqcRYGate(q, -1.570379776319421, 6);
  sqcRZGate(q, 3.1398756003660324, 6);
  sqcRYGate(q, -1.570878518941435, 7);
  sqcRZGate(q, 1.6168466488993758, 7);
  sqcRYGate(q, 2.9759495458424743, 8);
  sqcRZGate(q, 1.2718289267499139, 8);
  sqcRYGate(q, -0.1652630327512897, 9);
  sqcRZGate(q, -1.9087650800701113, 9);
  sqcRYGate(q, 1.5257472811524497, 10);
  sqcRZGate(q, -3.1264668143379044, 10);
  sqcRYGate(q, -1.6193130803296327, 11);
  sqcRZGate(q, -1.405308882305155, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5707404565005445, 0);
  sqcRZGate(q, 0.6528462225696295, 0);
  sqcRYGate(q, -1.5707010596261595, 1);
  sqcRZGate(q, -1.5704310960472823, 1);
  sqcRYGate(q, 1.5430783265352632, 2);
  sqcRZGate(q, -1.5642860359821145, 2);
  sqcRYGate(q, 3.1397627328303828, 3);
  sqcRZGate(q, 2.6559317817638877, 3);
  sqcRYGate(q, -3.1415769988147906, 4);
  sqcRZGate(q, 0.6291320640162165, 4);
  sqcRYGate(q, -2.631195718113906, 5);
  sqcRZGate(q, -2.0889224550560233, 5);
  sqcRYGate(q, 1.570612494663046, 6);
  sqcRZGate(q, -2.342967994431029, 6);
  sqcRYGate(q, -0.12031005541684436, 7);
  sqcRZGate(q, -1.0234386303518783, 7);
  sqcRYGate(q, 1.569790558591377, 8);
  sqcRZGate(q, -1.5730326097160825, 8);
  sqcRYGate(q, 3.140160438549136, 9);
  sqcRZGate(q, 1.0728052253006013, 9);
  sqcRYGate(q, 1.5582420589245591, 10);
  sqcRZGate(q, -1.8877176460238032, 10);
  sqcRYGate(q, -1.8550186414724141, 11);
  sqcRZGate(q, -0.7730337179595143, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.141469124771609, 0);
  sqcRZGate(q, 0.7426822046383802, 0);
  sqcRYGate(q, 1.5711812762037545, 1);
  sqcRZGate(q, -1.6095360214148684, 1);
  sqcRYGate(q, -1.5691770010951633, 2);
  sqcRZGate(q, -1.3217292080516876, 2);
  sqcRYGate(q, 3.1414105576374873, 3);
  sqcRZGate(q, 0.2769602613966532, 3);
  sqcRYGate(q, 3.140511705615266, 4);
  sqcRZGate(q, -3.1078878433153942, 4);
  sqcRYGate(q, 0.00037256315425709756, 5);
  sqcRZGate(q, -1.2305883538372206, 5);
  sqcRYGate(q, 3.141522675280852, 6);
  sqcRZGate(q, 2.4031592546823988, 6);
  sqcRYGate(q, -3.1363922508224316, 7);
  sqcRZGate(q, -1.8973729663798693, 7);
  sqcRYGate(q, 1.569440544550183, 8);
  sqcRZGate(q, -0.6798475990375407, 8);
  sqcRYGate(q, 3.094932699423751, 9);
  sqcRZGate(q, -3.0597686258929535, 9);
  sqcRYGate(q, 1.569971618800419, 10);
  sqcRZGate(q, -1.362542267411313, 10);
  sqcRYGate(q, 3.141586538680262, 11);
  sqcRZGate(q, -0.6607406485885854, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.139616041720697, 0);
  sqcRZGate(q, -1.1491190168596745, 0);
  sqcRYGate(q, 1.5749419802200029, 1);
  sqcRZGate(q, -1.736277162376952, 1);
  sqcRYGate(q, -0.0003450484048039826, 2);
  sqcRZGate(q, -0.9423736707235699, 2);
  sqcRYGate(q, -0.0945134910246954, 3);
  sqcRZGate(q, -0.018470636811249306, 3);
  sqcRYGate(q, -1.552610949269961, 4);
  sqcRZGate(q, 0.5425185704124873, 4);
  sqcRYGate(q, 3.1278854426476643, 5);
  sqcRZGate(q, 0.910166412172895, 5);
  sqcRYGate(q, -3.1338179054789226, 6);
  sqcRZGate(q, -0.014681652998527637, 6);
  sqcRYGate(q, -0.0003563003376998027, 7);
  sqcRZGate(q, 0.842396759832721, 7);
  sqcRYGate(q, 3.141568826759466, 8);
  sqcRZGate(q, -0.7526376648085522, 8);
  sqcRYGate(q, 1.57057839752009, 9);
  sqcRZGate(q, -3.140089086777413, 9);
  sqcRYGate(q, -3.1396384489332663, 10);
  sqcRZGate(q, 0.20495619212617755, 10);
  sqcRYGate(q, -3.1413396412269208, 11);
  sqcRZGate(q, 0.12137181876303481, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.139636414679921, 0);
  sqcRZGate(q, 0.34033589261425323, 0);
  sqcRYGate(q, 3.14129266652181, 1);
  sqcRZGate(q, 2.0381240339740305, 1);
  sqcRYGate(q, -3.1407970381050347, 2);
  sqcRZGate(q, -2.419375607188361, 2);
  sqcRYGate(q, -2.9823998271673595, 3);
  sqcRZGate(q, -0.054401761865778574, 3);
  sqcRYGate(q, 0.0005814276750684096, 4);
  sqcRZGate(q, 2.5979896803255516, 4);
  sqcRYGate(q, -7.909686043950989e-05, 5);
  sqcRZGate(q, 0.48322350284940707, 5);
  sqcRYGate(q, -3.072141300438339, 6);
  sqcRZGate(q, 3.0850659977049815, 6);
  sqcRYGate(q, 0.0009244509139001959, 7);
  sqcRZGate(q, 3.136121535723358, 7);
  sqcRYGate(q, -3.0688118589190134, 8);
  sqcRZGate(q, -1.983726788942865, 8);
  sqcRYGate(q, -1.523556700310716, 9);
  sqcRZGate(q, -3.071757396195961, 9);
  sqcRYGate(q, 1.5722310973648739, 10);
  sqcRZGate(q, -0.7173398480157678, 10);
  sqcRYGate(q, -1.5703868070310945, 11);
  sqcRZGate(q, -1.5675668324552436, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5688069851179094, 0);
  sqcRZGate(q, -0.6511290424705172, 0);
  sqcRYGate(q, -0.006246225880524925, 1);
  sqcRZGate(q, -0.0005130273091271675, 1);
  sqcRYGate(q, 0.0004524341194490018, 2);
  sqcRZGate(q, 2.6486007292399822, 2);
  sqcRYGate(q, -0.08914849347457121, 3);
  sqcRZGate(q, -0.9031476624022297, 3);
  sqcRYGate(q, 1.5537290207160996, 4);
  sqcRZGate(q, 2.4988742126815984, 4);
  sqcRYGate(q, -1.5725923328993079, 5);
  sqcRZGate(q, 2.2186186714498786, 5);
  sqcRYGate(q, -1.5704332047360972, 6);
  sqcRZGate(q, 2.4973916973928643, 6);
  sqcRYGate(q, -3.130877338294941, 7);
  sqcRZGate(q, -1.0195137314663878, 7);
  sqcRYGate(q, 3.141354945042423, 8);
  sqcRZGate(q, -0.9846369529310249, 8);
  sqcRYGate(q, -1.5706703422012, 9);
  sqcRZGate(q, 2.203342419563306, 9);
  sqcRYGate(q, 3.138100088586711, 10);
  sqcRZGate(q, 1.7798022828270206, 10);
  sqcRYGate(q, -1.5754494491311837, 11);
  sqcRZGate(q, 2.2032264782543876, 11);

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
