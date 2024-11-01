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

  sqcRYGate(q, 1.58344348374547, 0);
  sqcRZGate(q, 2.9129682396111534, 0);
  sqcRYGate(q, -1.0904304063106303, 1);
  sqcRZGate(q, -1.8135871578965599, 1);
  sqcRYGate(q, 0.6757542448403139, 2);
  sqcRZGate(q, -1.7399336599648203, 2);
  sqcRYGate(q, 2.783045947618361, 3);
  sqcRZGate(q, -2.4694316932045095, 3);
  sqcRYGate(q, -0.16199889279881763, 4);
  sqcRZGate(q, 2.267437104359601, 4);
  sqcRYGate(q, 0.6338537405804263, 5);
  sqcRZGate(q, 1.4454929919350397, 5);
  sqcRYGate(q, -0.07027442333431744, 6);
  sqcRZGate(q, 1.244467656588377, 6);
  sqcRYGate(q, -3.081645822026711, 7);
  sqcRZGate(q, 1.165312177612475, 7);
  sqcRYGate(q, -1.5792817674765331, 8);
  sqcRZGate(q, 2.614514046387947, 8);
  sqcRYGate(q, 1.5843486018137989, 9);
  sqcRZGate(q, -0.8268309328543308, 9);
  sqcRYGate(q, -0.0039400267164351735, 10);
  sqcRZGate(q, 1.251298675750112, 10);
  sqcRYGate(q, -1.560194915989916, 11);
  sqcRZGate(q, 1.5766488141256265, 11);
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
  sqcRYGate(q, 1.7913203468309158, 0);
  sqcRZGate(q, 0.9649211625160561, 0);
  sqcRYGate(q, 1.3818079009794764, 1);
  sqcRZGate(q, 2.051052704086674, 1);
  sqcRYGate(q, -1.037829575402493, 2);
  sqcRZGate(q, 0.7435336885076922, 2);
  sqcRYGate(q, -0.9115660030277271, 3);
  sqcRZGate(q, -0.7004024416239281, 3);
  sqcRYGate(q, -1.736987180193366, 4);
  sqcRZGate(q, 0.39211201258907025, 4);
  sqcRYGate(q, 0.9754649774424875, 5);
  sqcRZGate(q, 1.9350265202351935, 5);
  sqcRYGate(q, -3.13707159328455, 6);
  sqcRZGate(q, -1.2793361364494777, 6);
  sqcRYGate(q, 3.133513431319878, 7);
  sqcRZGate(q, 0.5183438579068577, 7);
  sqcRYGate(q, 0.0301507108073071, 8);
  sqcRZGate(q, -1.325866495372404, 8);
  sqcRYGate(q, -0.06190535458928803, 9);
  sqcRZGate(q, 0.20956229702898008, 9);
  sqcRYGate(q, 3.134893342302693, 10);
  sqcRZGate(q, 0.6763317830250524, 10);
  sqcRYGate(q, 1.5744703399602207, 11);
  sqcRZGate(q, -0.9128141573934858, 11);
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
  sqcRYGate(q, 1.0659308126485507, 0);
  sqcRZGate(q, -1.2144627229099132, 0);
  sqcRYGate(q, -1.0161371656644123, 1);
  sqcRZGate(q, 1.210025934171017, 1);
  sqcRYGate(q, -3.0943364836151424, 2);
  sqcRZGate(q, 1.235104166359706, 2);
  sqcRYGate(q, 0.19270191745415113, 3);
  sqcRZGate(q, 0.8819865926748846, 3);
  sqcRYGate(q, -0.2576426306824012, 4);
  sqcRZGate(q, -0.6562961870759398, 4);
  sqcRYGate(q, -2.760395866961491, 5);
  sqcRZGate(q, -2.801041500763494, 5);
  sqcRYGate(q, 1.5486167776614082, 6);
  sqcRZGate(q, -0.01566198804063923, 6);
  sqcRYGate(q, -1.5861683627571868, 7);
  sqcRZGate(q, 0.0013368588906883608, 7);
  sqcRYGate(q, -1.770393976353052, 8);
  sqcRZGate(q, -1.5694552851142527, 8);
  sqcRYGate(q, 0.3454780539403437, 9);
  sqcRZGate(q, 0.3933510987215611, 9);
  sqcRYGate(q, 0.5132742656888548, 10);
  sqcRZGate(q, -1.2068131601667367, 10);
  sqcRYGate(q, 2.4787540481455745, 11);
  sqcRZGate(q, 3.121878575218838, 11);
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
  sqcRYGate(q, 1.0406421156678478, 0);
  sqcRZGate(q, -0.6974376259760646, 0);
  sqcRYGate(q, 1.8628991474314038, 1);
  sqcRZGate(q, 0.25052414935687256, 1);
  sqcRYGate(q, -2.3159379690436155, 2);
  sqcRZGate(q, -2.9810956270319653, 2);
  sqcRYGate(q, 0.024758485091294528, 3);
  sqcRZGate(q, -2.6825070376277074, 3);
  sqcRYGate(q, 2.6213832000053925, 4);
  sqcRZGate(q, 2.7088957422285134, 4);
  sqcRYGate(q, 1.748368206739653, 5);
  sqcRZGate(q, 2.1800631820995755, 5);
  sqcRYGate(q, -1.1024092412663378, 6);
  sqcRZGate(q, -2.7523896765649565, 6);
  sqcRYGate(q, 1.7827625182805198, 7);
  sqcRZGate(q, 2.7393745098462983, 7);
  sqcRYGate(q, -3.136907574757844, 8);
  sqcRZGate(q, 1.4339940911087679, 8);
  sqcRYGate(q, -3.1289701514818, 9);
  sqcRZGate(q, -1.5465513623005718, 9);
  sqcRYGate(q, 0.4145780423455643, 10);
  sqcRZGate(q, -0.5040735970515815, 10);
  sqcRYGate(q, -0.5450071941468733, 11);
  sqcRZGate(q, -2.071936680844612, 11);
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
  sqcRYGate(q, 1.325364634120897, 0);
  sqcRZGate(q, -0.2844668803933867, 0);
  sqcRYGate(q, 0.9357497057050983, 1);
  sqcRZGate(q, -1.517353652925487, 1);
  sqcRYGate(q, -2.2038047466192436, 2);
  sqcRZGate(q, 2.5747195876238926, 2);
  sqcRYGate(q, -0.9035717334494671, 3);
  sqcRZGate(q, -0.7444491700875524, 3);
  sqcRYGate(q, -1.063056739049539, 4);
  sqcRZGate(q, 1.3750242837419009, 4);
  sqcRYGate(q, 2.8577746053384594, 5);
  sqcRZGate(q, -0.7307038855786089, 5);
  sqcRYGate(q, -0.03898537546345793, 6);
  sqcRZGate(q, -0.7128025033731419, 6);
  sqcRYGate(q, 0.032208303444604354, 7);
  sqcRZGate(q, 0.7026226181408113, 7);
  sqcRYGate(q, 2.814616038808615, 8);
  sqcRZGate(q, 1.1056169790403385, 8);
  sqcRYGate(q, -2.8305792643008845, 9);
  sqcRZGate(q, 0.7774730374100772, 9);
  sqcRYGate(q, -0.5740677777590308, 10);
  sqcRZGate(q, -1.920473695499214, 10);
  sqcRYGate(q, -2.978466825769092, 11);
  sqcRZGate(q, -0.07291356457762482, 11);
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
  sqcRYGate(q, 0.6697652790193009, 0);
  sqcRZGate(q, -2.0434172778504784, 0);
  sqcRYGate(q, -0.697464337579262, 1);
  sqcRZGate(q, 2.6490791646087803, 1);
  sqcRYGate(q, 2.7811182955595117, 2);
  sqcRZGate(q, -0.43679185116177427, 2);
  sqcRYGate(q, 1.062029577969037, 3);
  sqcRZGate(q, 2.7380110539386076, 3);
  sqcRYGate(q, -1.9313983362049028, 4);
  sqcRZGate(q, -0.14423796251979581, 4);
  sqcRYGate(q, 1.3604285125626154, 5);
  sqcRZGate(q, -2.7978782850780406, 5);
  sqcRYGate(q, 0.039287605506375854, 6);
  sqcRZGate(q, -1.401538509360434, 6);
  sqcRYGate(q, -3.1158807394722485, 7);
  sqcRZGate(q, 1.726629115969267, 7);
  sqcRYGate(q, 0.007375458604550466, 8);
  sqcRZGate(q, 1.4627325788455807, 8);
  sqcRYGate(q, 0.004012155980031523, 9);
  sqcRZGate(q, 3.088296696443516, 9);
  sqcRYGate(q, -0.5721579066978819, 10);
  sqcRZGate(q, 1.0971514583209083, 10);
  sqcRYGate(q, -1.6884718919378745, 11);
  sqcRZGate(q, 1.4976560354043125, 11);
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
  sqcRYGate(q, 2.0310794053421355, 0);
  sqcRZGate(q, -0.617707384615823, 0);
  sqcRYGate(q, -0.38888108890782647, 1);
  sqcRZGate(q, -1.1299928388031208, 1);
  sqcRYGate(q, -3.0371500301472585, 2);
  sqcRZGate(q, -1.1741139448472344, 2);
  sqcRYGate(q, 0.38437359822875555, 3);
  sqcRZGate(q, 0.13450178383322786, 3);
  sqcRYGate(q, -2.7065199714652355, 4);
  sqcRZGate(q, 0.32844743601460474, 4);
  sqcRYGate(q, 2.5863116836543782, 5);
  sqcRZGate(q, 1.9466255598536855, 5);
  sqcRYGate(q, 0.4795480428748673, 6);
  sqcRZGate(q, -1.2000801837519968, 6);
  sqcRYGate(q, -0.5260240777792626, 7);
  sqcRZGate(q, -0.327911461368338, 7);
  sqcRYGate(q, -1.2755591214582132, 8);
  sqcRZGate(q, -0.032705482090666406, 8);
  sqcRYGate(q, 1.1560196311525757, 9);
  sqcRZGate(q, -1.5297485760294707, 9);
  sqcRYGate(q, -1.647714150553834, 10);
  sqcRZGate(q, -0.08973382752259323, 10);
  sqcRYGate(q, -0.6669407665597198, 11);
  sqcRZGate(q, -1.381060092215411, 11);
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
  sqcRYGate(q, -2.372366228834512, 0);
  sqcRZGate(q, -0.49704095949721605, 0);
  sqcRYGate(q, 2.918417689335693, 1);
  sqcRZGate(q, -0.8614226618695017, 1);
  sqcRYGate(q, 2.7708983593414214, 2);
  sqcRZGate(q, -2.171482524377198, 2);
  sqcRYGate(q, 1.3243411369698546, 3);
  sqcRZGate(q, -1.0108544167189766, 3);
  sqcRYGate(q, 0.8648346827408356, 4);
  sqcRZGate(q, 0.24854498375780876, 4);
  sqcRYGate(q, 0.09390113265031903, 5);
  sqcRZGate(q, 0.406310959655709, 5);
  sqcRYGate(q, -0.01938442267559874, 6);
  sqcRZGate(q, 2.860340600437684, 6);
  sqcRYGate(q, -3.1361388408273516, 7);
  sqcRZGate(q, 1.5904919647845859, 7);
  sqcRYGate(q, 0.6697265213542644, 8);
  sqcRZGate(q, -2.1378643620356357, 8);
  sqcRYGate(q, 2.625655263924487, 9);
  sqcRZGate(q, -1.1169282888162115, 9);
  sqcRYGate(q, -2.0454620800132, 10);
  sqcRZGate(q, 1.0919576705616, 10);
  sqcRYGate(q, -0.9732629712087881, 11);
  sqcRZGate(q, -3.0081117107197777, 11);
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
  sqcRYGate(q, -2.673469844615468, 0);
  sqcRZGate(q, 0.7206172110218644, 0);
  sqcRYGate(q, -2.6417079966040165, 1);
  sqcRZGate(q, -2.712427094875565, 1);
  sqcRYGate(q, -1.400295820784993, 2);
  sqcRZGate(q, -1.3755214589919582, 2);
  sqcRYGate(q, 2.7237129476189206, 3);
  sqcRZGate(q, 1.9637529278933128, 3);
  sqcRYGate(q, 2.4857122780992795, 4);
  sqcRZGate(q, -2.3258961136235476, 4);
  sqcRYGate(q, 2.346708401421049, 5);
  sqcRZGate(q, -1.0142998578192328, 5);
  sqcRYGate(q, 3.129065431072198, 6);
  sqcRZGate(q, -1.608412663230747, 6);
  sqcRYGate(q, 0.008449750789258916, 7);
  sqcRZGate(q, 1.086051573288286, 7);
  sqcRYGate(q, -2.2944930741604628, 8);
  sqcRZGate(q, -2.7343031721005437, 8);
  sqcRYGate(q, -1.7483941164399552, 9);
  sqcRZGate(q, -0.24747907646267242, 9);
  sqcRYGate(q, -1.5850466737403088, 10);
  sqcRZGate(q, -1.5136011136688063, 10);
  sqcRYGate(q, -1.9137116025452174, 11);
  sqcRZGate(q, -0.141141059038877, 11);
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
  sqcRYGate(q, -0.78307936743887, 0);
  sqcRZGate(q, -1.882928648494523, 0);
  sqcRYGate(q, 0.9968197411398715, 1);
  sqcRZGate(q, -0.6608272544978117, 1);
  sqcRYGate(q, 0.1533146984559295, 2);
  sqcRZGate(q, 0.20950376810846258, 2);
  sqcRYGate(q, 1.1376981885358264, 3);
  sqcRZGate(q, -1.6177853942961415, 3);
  sqcRYGate(q, 2.452691430071417, 4);
  sqcRZGate(q, 3.0986522300930015, 4);
  sqcRYGate(q, -2.03194763865063, 5);
  sqcRZGate(q, 2.6057515267602724, 5);
  sqcRYGate(q, -3.1400669061054596, 6);
  sqcRZGate(q, 1.9921282937883522, 6);
  sqcRYGate(q, -3.140729523355907, 7);
  sqcRZGate(q, -1.8679503624166163, 7);
  sqcRYGate(q, 1.3919200146011848, 8);
  sqcRZGate(q, -1.6344083870120503, 8);
  sqcRYGate(q, -1.6457503232061466, 9);
  sqcRZGate(q, 1.6327411716775624, 9);
  sqcRYGate(q, 2.0652582041122747, 10);
  sqcRZGate(q, 2.4335029732127413, 10);
  sqcRYGate(q, -2.503419458025176, 11);
  sqcRZGate(q, -0.010347178665033787, 11);
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
  sqcRYGate(q, -2.243747041710064, 0);
  sqcRZGate(q, 0.06658435596198264, 0);
  sqcRYGate(q, 0.3765775624248846, 1);
  sqcRZGate(q, 0.8783061510356642, 1);
  sqcRYGate(q, -2.359637440458117, 2);
  sqcRZGate(q, 1.1619403139663362, 2);
  sqcRYGate(q, 0.4813234157057593, 3);
  sqcRZGate(q, -2.708072507289073, 3);
  sqcRYGate(q, -0.29163148985996656, 4);
  sqcRZGate(q, 0.4923329242846028, 4);
  sqcRYGate(q, 2.947603377817023, 5);
  sqcRZGate(q, -0.5002798794995647, 5);
  sqcRYGate(q, -0.004480829765470595, 6);
  sqcRZGate(q, -2.1955392415841155, 6);
  sqcRYGate(q, -3.136157566881875, 7);
  sqcRZGate(q, 2.7084965033331483, 7);
  sqcRYGate(q, 1.566890991215193, 8);
  sqcRZGate(q, -1.9011410991523405, 8);
  sqcRYGate(q, 1.5246689924489356, 9);
  sqcRZGate(q, 1.871782334663377, 9);
  sqcRYGate(q, 1.950235137207413, 10);
  sqcRZGate(q, 1.8389314404913146, 10);
  sqcRYGate(q, -1.8590117531366177, 11);
  sqcRZGate(q, -2.4356458750207994, 11);
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
  sqcRYGate(q, 0.02533833030296595, 0);
  sqcRZGate(q, -2.754736281901196, 0);
  sqcRYGate(q, 1.2003655281227659, 1);
  sqcRZGate(q, -2.0515269053697107, 1);
  sqcRYGate(q, -0.9774093317147186, 2);
  sqcRZGate(q, -2.0796687294027993, 2);
  sqcRYGate(q, -0.5318104438277756, 3);
  sqcRZGate(q, 0.6439589416767735, 3);
  sqcRYGate(q, 0.5410035200797427, 4);
  sqcRZGate(q, 1.3648573908405002, 4);
  sqcRYGate(q, -2.348272178507267, 5);
  sqcRZGate(q, -0.5132377289777388, 5);
  sqcRYGate(q, -0.015391665145356724, 6);
  sqcRZGate(q, 0.4956768131903182, 6);
  sqcRYGate(q, 3.0508640622190724, 7);
  sqcRZGate(q, -2.7791930346400546, 7);
  sqcRYGate(q, 0.9531337032295367, 8);
  sqcRZGate(q, -0.6804677892413588, 8);
  sqcRYGate(q, -2.141957985804594, 9);
  sqcRZGate(q, -1.7886993717706527, 9);
  sqcRYGate(q, -1.7145206968738118, 10);
  sqcRZGate(q, 0.12387027150177764, 10);
  sqcRYGate(q, -1.701059198828643, 11);
  sqcRZGate(q, 0.10550173142308275, 11);
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
  sqcRYGate(q, -0.3661922621679006, 0);
  sqcRZGate(q, -2.0759799325071833, 0);
  sqcRYGate(q, 1.1980886745741228, 1);
  sqcRZGate(q, -2.6509499801311995, 1);
  sqcRYGate(q, -0.2078409272897641, 2);
  sqcRZGate(q, -1.4704983633945827, 2);
  sqcRYGate(q, -1.8693636664100435, 3);
  sqcRZGate(q, -2.0085032659755018, 3);
  sqcRYGate(q, -0.7381397387735619, 4);
  sqcRZGate(q, -0.992843779393552, 4);
  sqcRYGate(q, -1.7858636725689372, 5);
  sqcRZGate(q, -2.1505445469323696, 5);
  sqcRYGate(q, 3.135266646852838, 6);
  sqcRZGate(q, 0.5949365109796361, 6);
  sqcRYGate(q, 3.1281900826729756, 7);
  sqcRZGate(q, -2.873453754787868, 7);
  sqcRYGate(q, 3.108182836384696, 8);
  sqcRZGate(q, -0.7689222114363463, 8);
  sqcRYGate(q, -0.07977536275527569, 9);
  sqcRZGate(q, -0.08255436386382552, 9);
  sqcRYGate(q, 2.401446876552442, 10);
  sqcRZGate(q, -0.24034386441472955, 10);
  sqcRYGate(q, 2.3224512347536135, 11);
  sqcRZGate(q, 1.0382689188281926, 11);
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
  sqcRYGate(q, -2.95960456052791, 0);
  sqcRZGate(q, 2.9437265537235087, 0);
  sqcRYGate(q, -2.2476194713722046, 1);
  sqcRZGate(q, -1.7763127013217246, 1);
  sqcRYGate(q, -0.5663465169679361, 2);
  sqcRZGate(q, -3.068155522993767, 2);
  sqcRYGate(q, 2.313975224365374, 3);
  sqcRZGate(q, 1.0305667534108855, 3);
  sqcRYGate(q, -0.19816797855502966, 4);
  sqcRZGate(q, 0.8308191623958399, 4);
  sqcRYGate(q, 0.005107061933222899, 5);
  sqcRZGate(q, -0.8553972946839944, 5);
  sqcRYGate(q, -0.02028499929167938, 6);
  sqcRZGate(q, 1.4884324508522575, 6);
  sqcRYGate(q, 3.0383242483054422, 7);
  sqcRZGate(q, -2.476711626066803, 7);
  sqcRYGate(q, 2.000360208219848, 8);
  sqcRZGate(q, 0.6689796969931256, 8);
  sqcRYGate(q, 1.0563150203081824, 9);
  sqcRZGate(q, -3.066430069149677, 9);
  sqcRYGate(q, -2.379107164884325, 10);
  sqcRZGate(q, 2.9928788032037836, 10);
  sqcRYGate(q, 1.86904045935655, 11);
  sqcRZGate(q, -0.39289692755593997, 11);
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
  sqcRYGate(q, -0.37326315747223937, 0);
  sqcRZGate(q, -1.3486123349245238, 0);
  sqcRYGate(q, -1.8654023087752425, 1);
  sqcRZGate(q, 1.0072723245651451, 1);
  sqcRYGate(q, 0.17135843383488558, 2);
  sqcRZGate(q, 2.372750631740197, 2);
  sqcRYGate(q, -1.201301276559966, 3);
  sqcRZGate(q, -2.6090421715331376, 3);
  sqcRYGate(q, 0.3638542426920157, 4);
  sqcRZGate(q, -1.1648079520233496, 4);
  sqcRYGate(q, -0.34723930092025235, 5);
  sqcRZGate(q, -0.07666283999416677, 5);
  sqcRYGate(q, 0.03144270490837453, 6);
  sqcRZGate(q, 2.1896569489715376, 6);
  sqcRYGate(q, -3.1014850798340725, 7);
  sqcRZGate(q, 2.6892525041867272, 7);
  sqcRYGate(q, 3.0433288786125714, 8);
  sqcRZGate(q, 2.5646744529890197, 8);
  sqcRYGate(q, 3.139503413558041, 9);
  sqcRZGate(q, -0.33615724165106364, 9);
  sqcRYGate(q, 2.1232026474551686, 10);
  sqcRZGate(q, 2.2357117629770773, 10);
  sqcRYGate(q, 0.6390638795949752, 11);
  sqcRZGate(q, 1.5652405891962093, 11);
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
  sqcRYGate(q, 2.1225035512189656, 0);
  sqcRZGate(q, 1.6008912292920456, 0);
  sqcRYGate(q, 0.5171387198097372, 1);
  sqcRZGate(q, -0.8072857121845161, 1);
  sqcRYGate(q, -0.15236705893589164, 2);
  sqcRZGate(q, -2.116110480056201, 2);
  sqcRYGate(q, -0.8221711391303392, 3);
  sqcRZGate(q, -1.713981405242106, 3);
  sqcRYGate(q, -3.0470272483936585, 4);
  sqcRZGate(q, -0.6616366509395978, 4);
  sqcRYGate(q, 2.8822962788879014, 5);
  sqcRZGate(q, 1.0709097038595763, 5);
  sqcRYGate(q, -3.0399201973627887, 6);
  sqcRZGate(q, 0.7726346665798861, 6);
  sqcRYGate(q, 0.0771621349872212, 7);
  sqcRZGate(q, 2.9209791993170913, 7);
  sqcRYGate(q, 2.8821844435263215, 8);
  sqcRZGate(q, -2.1537604218883217, 8);
  sqcRYGate(q, 2.756563239872098, 9);
  sqcRZGate(q, 2.526999542301713, 9);
  sqcRYGate(q, -2.5329972710014026, 10);
  sqcRZGate(q, 0.2121997645123992, 10);
  sqcRYGate(q, 1.118540864574972, 11);
  sqcRZGate(q, 0.8596185157103126, 11);
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
  sqcRYGate(q, 1.7410438850443655, 0);
  sqcRZGate(q, 1.3312622808456147, 0);
  sqcRYGate(q, 0.70128052104719, 1);
  sqcRZGate(q, -1.1390100615330276, 1);
  sqcRYGate(q, 0.40965065989875044, 2);
  sqcRZGate(q, 2.5829208471097775, 2);
  sqcRYGate(q, 1.6148107832741903, 3);
  sqcRZGate(q, 0.3225415858300744, 3);
  sqcRYGate(q, 2.391834047338392, 4);
  sqcRZGate(q, 0.8212803647319717, 4);
  sqcRYGate(q, 2.583465308242149, 5);
  sqcRZGate(q, -0.6068256152338566, 5);
  sqcRYGate(q, -2.0097719306507145, 6);
  sqcRZGate(q, -0.5037394654993816, 6);
  sqcRYGate(q, -1.1085693627024271, 7);
  sqcRZGate(q, -0.5124486413424458, 7);
  sqcRYGate(q, -3.1070231790297034, 8);
  sqcRZGate(q, -0.3784237498053736, 8);
  sqcRYGate(q, -0.00989731900589854, 9);
  sqcRZGate(q, 2.0426244777587987, 9);
  sqcRYGate(q, -0.8462551075992916, 10);
  sqcRZGate(q, 2.2717727407669197, 10);
  sqcRYGate(q, 2.6434413384021633, 11);
  sqcRZGate(q, -2.1045075188119666, 11);
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
  sqcRYGate(q, -2.908336005369292, 0);
  sqcRZGate(q, 0.09474676825345796, 0);
  sqcRYGate(q, 1.5060369514202048, 1);
  sqcRZGate(q, 0.4214576896442628, 1);
  sqcRYGate(q, -0.9934639857899896, 2);
  sqcRZGate(q, -2.3320230106363398, 2);
  sqcRYGate(q, -0.4385784507611924, 3);
  sqcRZGate(q, 2.9961813620632305, 3);
  sqcRYGate(q, -0.3974027399895323, 4);
  sqcRZGate(q, 2.177685057099178, 4);
  sqcRYGate(q, -3.065436131071368, 5);
  sqcRZGate(q, -0.614119210793312, 5);
  sqcRYGate(q, -1.4187549583622794, 6);
  sqcRZGate(q, -3.1057346952089087, 6);
  sqcRYGate(q, -1.5331011649009632, 7);
  sqcRZGate(q, 0.11795788852552125, 7);
  sqcRYGate(q, 2.9882718616521653, 8);
  sqcRZGate(q, -1.6118436173929007, 8);
  sqcRYGate(q, -0.04292101568090707, 9);
  sqcRZGate(q, -0.12124086881869987, 9);
  sqcRYGate(q, -0.03280422751218115, 10);
  sqcRZGate(q, -0.9679426502660888, 10);
  sqcRYGate(q, -0.9024517891794841, 11);
  sqcRZGate(q, 2.5558001217750705, 11);
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
  sqcRYGate(q, -0.9119280726994772, 0);
  sqcRZGate(q, 2.2940704946265162, 0);
  sqcRYGate(q, 0.2785847427940027, 1);
  sqcRZGate(q, 0.3787945218788149, 1);
  sqcRYGate(q, -1.5075818779732493, 2);
  sqcRZGate(q, -1.8052251620079154, 2);
  sqcRYGate(q, -1.7932715485242372, 3);
  sqcRZGate(q, -2.472469604062573, 3);
  sqcRYGate(q, 0.0027639831393990733, 4);
  sqcRZGate(q, -1.5303668531310122, 4);
  sqcRYGate(q, -0.0060679843759343655, 5);
  sqcRZGate(q, 2.7696228239616976, 5);
  sqcRYGate(q, 1.8715217292860222, 6);
  sqcRZGate(q, -2.5258951607052738, 6);
  sqcRYGate(q, -1.4225548028693933, 7);
  sqcRZGate(q, -2.0944000948860313, 7);
  sqcRYGate(q, 1.5805883260418192, 8);
  sqcRZGate(q, 1.8411950918469344, 8);
  sqcRYGate(q, -0.003859616222534125, 9);
  sqcRZGate(q, -0.22761326707282256, 9);
  sqcRYGate(q, -2.9587873683350225, 10);
  sqcRZGate(q, 2.951664332489792, 10);
  sqcRYGate(q, 1.6474361735780052, 11);
  sqcRZGate(q, 0.15306019291987158, 11);
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
  sqcRYGate(q, 0.5216984803113176, 0);
  sqcRZGate(q, -0.6779321784313157, 0);
  sqcRYGate(q, -2.6567350422167966, 1);
  sqcRZGate(q, -0.9034829254208212, 1);
  sqcRYGate(q, 2.2243102898451754, 2);
  sqcRZGate(q, 2.7126519879262587, 2);
  sqcRYGate(q, 1.0397353502709294, 3);
  sqcRZGate(q, -1.4884247889971274, 3);
  sqcRYGate(q, -0.845956786786207, 4);
  sqcRZGate(q, 1.1957955944544292, 4);
  sqcRYGate(q, 2.5826892680419853, 5);
  sqcRZGate(q, 1.7060057648344857, 5);
  sqcRYGate(q, -1.6867944200373015, 6);
  sqcRZGate(q, -1.1288672325075384, 6);
  sqcRYGate(q, 1.9330488536505952, 7);
  sqcRZGate(q, -2.257423736650339, 7);
  sqcRYGate(q, -0.005891345763826549, 8);
  sqcRZGate(q, -1.7129106940775243, 8);
  sqcRYGate(q, -0.039098245324936776, 9);
  sqcRZGate(q, -2.0912810388665464, 9);
  sqcRYGate(q, 1.5738017684351817, 10);
  sqcRZGate(q, -3.134765051258576, 10);
  sqcRYGate(q, -1.3034867250717417, 11);
  sqcRZGate(q, 1.213911881846771, 11);
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
  sqcRYGate(q, 0.39305132210147065, 0);
  sqcRZGate(q, 0.3789783914691032, 0);
  sqcRYGate(q, 2.0571358059569556, 1);
  sqcRZGate(q, -2.4046216961076237, 1);
  sqcRYGate(q, 0.08112178320931039, 2);
  sqcRZGate(q, -0.80076439227369, 2);
  sqcRYGate(q, 1.9973221250049962, 3);
  sqcRZGate(q, 0.15413323681752542, 3);
  sqcRYGate(q, 1.5640984448945237, 4);
  sqcRZGate(q, -0.0021238798320224466, 4);
  sqcRYGate(q, -1.5691705410557806, 5);
  sqcRZGate(q, 0.006319935660238585, 5);
  sqcRYGate(q, -2.8277710797928632, 6);
  sqcRZGate(q, 2.417596511425241, 6);
  sqcRYGate(q, -3.118589418714033, 7);
  sqcRZGate(q, 2.143578635655337, 7);
  sqcRYGate(q, -1.5644121547329353, 8);
  sqcRZGate(q, -0.977730987852595, 8);
  sqcRYGate(q, 0.035550039767260205, 9);
  sqcRZGate(q, 2.6275619897423512, 9);
  sqcRYGate(q, -2.1517759951355275, 10);
  sqcRZGate(q, -1.5505048040936162, 10);
  sqcRYGate(q, 0.26097756946686435, 11);
  sqcRZGate(q, -2.4701212073436256, 11);
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
  sqcRYGate(q, 0.08488360728742333, 0);
  sqcRZGate(q, -1.6343360095291302, 0);
  sqcRYGate(q, -2.471057911164357, 1);
  sqcRZGate(q, -2.9893096986849073, 1);
  sqcRYGate(q, -2.382947850366607, 2);
  sqcRZGate(q, -1.5083790726115256, 2);
  sqcRYGate(q, 1.0639967784206352, 3);
  sqcRZGate(q, 2.1301430068808687, 3);
  sqcRYGate(q, 1.5768145201829946, 4);
  sqcRZGate(q, -0.4280957279409198, 4);
  sqcRYGate(q, -1.5655301832370272, 5);
  sqcRZGate(q, 1.669403752687379, 5);
  sqcRYGate(q, 3.141293076226433, 6);
  sqcRZGate(q, -2.693250816291456, 6);
  sqcRYGate(q, -0.000987637053861512, 7);
  sqcRZGate(q, 2.391700291366231, 7);
  sqcRYGate(q, -0.01664251642299587, 8);
  sqcRZGate(q, -0.4931939437122823, 8);
  sqcRYGate(q, 0.0254778493923567, 9);
  sqcRZGate(q, -2.3978488529032904, 9);
  sqcRYGate(q, 1.572538997605217, 10);
  sqcRZGate(q, -1.1868149129097532, 10);
  sqcRYGate(q, 1.587663075999299, 11);
  sqcRZGate(q, 1.5592385741178503, 11);
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
  sqcRYGate(q, 2.9738974601323727, 0);
  sqcRZGate(q, -1.2715533509165837, 0);
  sqcRYGate(q, -2.1865216196032167, 1);
  sqcRZGate(q, -0.07963363362786158, 1);
  sqcRYGate(q, -1.182254954798401, 2);
  sqcRZGate(q, -0.02484481175015763, 2);
  sqcRYGate(q, 1.9153291375303103, 3);
  sqcRZGate(q, -0.24934848991055733, 3);
  sqcRYGate(q, -0.37390589567003524, 4);
  sqcRZGate(q, 0.6293221494170369, 4);
  sqcRYGate(q, -0.1181128664274796, 5);
  sqcRZGate(q, 2.5279834322726153, 5);
  sqcRYGate(q, -1.4505414663233553, 6);
  sqcRZGate(q, 1.592564189847024, 6);
  sqcRYGate(q, 0.21069455022828357, 7);
  sqcRZGate(q, 2.1117221084876334, 7);
  sqcRYGate(q, -3.094830167444354, 8);
  sqcRZGate(q, 1.5995677707087381, 8);
  sqcRYGate(q, 1.5610717101388831, 9);
  sqcRZGate(q, -0.694319556025816, 9);
  sqcRYGate(q, 0.11101752249790506, 10);
  sqcRZGate(q, -0.3638532306362667, 10);
  sqcRYGate(q, 1.0279554893052945, 11);
  sqcRZGate(q, 0.006291335863668479, 11);
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
  sqcRYGate(q, -2.9493403818008335, 0);
  sqcRZGate(q, -0.7156351999469573, 0);
  sqcRYGate(q, -2.1869970994811023, 1);
  sqcRZGate(q, 0.7768892773535483, 1);
  sqcRYGate(q, -2.45898743846735, 2);
  sqcRZGate(q, -0.133321504183324, 2);
  sqcRYGate(q, -3.083601125874965, 3);
  sqcRZGate(q, -1.4446682536728204, 3);
  sqcRYGate(q, 3.128356286713956, 4);
  sqcRZGate(q, -3.0463345762643055, 4);
  sqcRYGate(q, 3.1385185726348324, 5);
  sqcRZGate(q, 1.24591887142466, 5);
  sqcRYGate(q, -3.1415304550149528, 6);
  sqcRZGate(q, 3.1396698542627814, 6);
  sqcRYGate(q, -0.0001579658936367171, 7);
  sqcRZGate(q, 1.8124456836878144, 7);
  sqcRYGate(q, -3.0568756017741383, 8);
  sqcRZGate(q, -0.0692957251413349, 8);
  sqcRYGate(q, 3.030488035212774, 9);
  sqcRZGate(q, 2.487389727506226, 9);
  sqcRYGate(q, -1.5680266735390562, 10);
  sqcRZGate(q, 2.9519936395512043, 10);
  sqcRYGate(q, -1.579305773317212, 11);
  sqcRZGate(q, -2.6328709932306475, 11);
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
  sqcRYGate(q, 0.025359181630769313, 0);
  sqcRZGate(q, -1.590439748108463, 0);
  sqcRYGate(q, 1.4575603633992016, 1);
  sqcRZGate(q, -0.4164666320801471, 1);
  sqcRYGate(q, -2.511036669860703, 2);
  sqcRZGate(q, -1.7974775158607545, 2);
  sqcRYGate(q, 0.2910516183050889, 3);
  sqcRZGate(q, 2.164106668708092, 3);
  sqcRYGate(q, -0.32109713665939055, 4);
  sqcRZGate(q, 2.235018529655407, 4);
  sqcRYGate(q, 1.7880849103614251, 5);
  sqcRZGate(q, -1.925462234007803, 5);
  sqcRYGate(q, -1.315069030150438, 6);
  sqcRZGate(q, -2.3468680636349593, 6);
  sqcRYGate(q, -1.703447467651947, 7);
  sqcRZGate(q, 2.32708833895006, 7);
  sqcRYGate(q, 1.5491236254311396, 8);
  sqcRZGate(q, -2.5594987718459357, 8);
  sqcRYGate(q, -1.5643125037081405, 9);
  sqcRZGate(q, 2.14161484719786, 9);
  sqcRYGate(q, -0.132314910527219, 10);
  sqcRZGate(q, 0.7411604963944728, 10);
  sqcRYGate(q, 3.1408824526019483, 11);
  sqcRZGate(q, 2.5867439303645505, 11);

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
