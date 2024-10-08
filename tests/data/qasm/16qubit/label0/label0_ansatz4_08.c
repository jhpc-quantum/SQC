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

  sqcRYGate(q, -0.2301837853410422, 0);
  sqcRZGate(q, 1.7541135832844184, 0);
  sqcRYGate(q, 0.5248563540106854, 1);
  sqcRZGate(q, 2.739503709551873, 1);
  sqcRYGate(q, -1.729833544865362, 2);
  sqcRZGate(q, -1.653794151836795, 2);
  sqcRYGate(q, 1.797157205644866, 3);
  sqcRZGate(q, -1.572407493857791, 3);
  sqcRYGate(q, 3.140723109222103, 4);
  sqcRZGate(q, 0.8475533681681738, 4);
  sqcRYGate(q, 0.0009733511429095776, 5);
  sqcRZGate(q, -2.318045671519369, 5);
  sqcRYGate(q, 0.737018416438957, 6);
  sqcRZGate(q, -1.2421014200488978, 6);
  sqcRYGate(q, 0.30219689145599166, 7);
  sqcRZGate(q, -1.2488337311652655, 7);
  sqcRYGate(q, -0.25734897663794243, 8);
  sqcRZGate(q, -0.89178156222391, 8);
  sqcRYGate(q, -1.5714840979366151, 9);
  sqcRZGate(q, -1.674351779797017, 9);
  sqcRYGate(q, 1.5714250510830459, 10);
  sqcRZGate(q, -1.5721585082126657, 10);
  sqcRYGate(q, 3.1412750879791695, 11);
  sqcRZGate(q, -3.0755642213659535, 11);
  sqcRYGate(q, 3.1410175589568694, 12);
  sqcRZGate(q, -2.7895238696804276, 12);
  sqcRYGate(q, 0.0007232876566460146, 13);
  sqcRZGate(q, 2.4053969012027987, 13);
  sqcRYGate(q, 1.5763656470930387, 14);
  sqcRZGate(q, 1.0414653480282485, 14);
  sqcRYGate(q, 2.9773625279876264, 15);
  sqcRZGate(q, 1.4549629941964541, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.4900948193389943, 0);
  sqcRZGate(q, 2.5462623642302322, 0);
  sqcRYGate(q, -2.310696087652184, 1);
  sqcRZGate(q, 1.194442742636863, 1);
  sqcRYGate(q, 1.6888492992237607, 2);
  sqcRZGate(q, 1.3669677154031326, 2);
  sqcRYGate(q, -1.5590886343267156, 3);
  sqcRZGate(q, -0.48288230183773706, 3);
  sqcRYGate(q, -0.001920413798083134, 4);
  sqcRZGate(q, -2.2198973214276205, 4);
  sqcRYGate(q, 3.1405145514821866, 5);
  sqcRZGate(q, -2.6232905041543106, 5);
  sqcRYGate(q, -0.26296808042181147, 6);
  sqcRZGate(q, 1.5618557287534687, 6);
  sqcRYGate(q, -0.00301956695493126, 7);
  sqcRZGate(q, 1.4856526470859306, 7);
  sqcRYGate(q, 3.1413815939044643, 8);
  sqcRZGate(q, -0.8839685466892776, 8);
  sqcRYGate(q, 3.1400598540299773, 9);
  sqcRZGate(q, -0.14339555135908455, 9);
  sqcRYGate(q, -1.539902419820427, 10);
  sqcRZGate(q, -0.1845807333703613, 10);
  sqcRYGate(q, 3.1412233585437552, 11);
  sqcRZGate(q, -0.40349936222434163, 11);
  sqcRYGate(q, -1.5644129152093003, 12);
  sqcRZGate(q, -1.4334675730208923, 12);
  sqcRYGate(q, -1.565832940654231, 13);
  sqcRZGate(q, 2.834201908300602, 13);
  sqcRYGate(q, 0.011290331534340219, 14);
  sqcRZGate(q, 0.9846270942063056, 14);
  sqcRYGate(q, -1.698487281547611, 15);
  sqcRZGate(q, 2.8500219910294504, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3639997401287707, 0);
  sqcRZGate(q, -0.20601098367271467, 0);
  sqcRYGate(q, -1.1362536271334003, 1);
  sqcRZGate(q, 3.025502759997487, 1);
  sqcRYGate(q, -0.1785811434048421, 2);
  sqcRZGate(q, -1.8369465582197426, 2);
  sqcRYGate(q, 3.0976782953066384, 3);
  sqcRZGate(q, 1.0007067072190732, 3);
  sqcRYGate(q, 2.868706806969874, 4);
  sqcRZGate(q, -1.7804451339783327, 4);
  sqcRYGate(q, 3.141530547216697, 5);
  sqcRZGate(q, -0.4980318271136621, 5);
  sqcRYGate(q, -1.5443352437335376, 6);
  sqcRZGate(q, -0.1312202336457298, 6);
  sqcRYGate(q, 3.133152822295914, 7);
  sqcRZGate(q, 0.49826374665782375, 7);
  sqcRYGate(q, 3.1404506795608915, 8);
  sqcRZGate(q, -2.339218750336369, 8);
  sqcRYGate(q, 1.5756185461683314, 9);
  sqcRZGate(q, -1.2744262675509055, 9);
  sqcRYGate(q, 2.4474041850780677, 10);
  sqcRZGate(q, -1.7927751769423654, 10);
  sqcRYGate(q, 3.123631855723652, 11);
  sqcRZGate(q, -2.39685169442487, 11);
  sqcRYGate(q, 0.008508187717140459, 12);
  sqcRZGate(q, 3.0049219582772175, 12);
  sqcRYGate(q, 3.1405295788377874, 13);
  sqcRZGate(q, 2.5587838087721795, 13);
  sqcRYGate(q, 3.1115438186577404, 14);
  sqcRZGate(q, -2.6895559555979616, 14);
  sqcRYGate(q, 0.01977574791569359, 15);
  sqcRZGate(q, -1.7925614226396873, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5485479281940195, 0);
  sqcRZGate(q, -1.8897880758261447, 0);
  sqcRYGate(q, 1.2749903523637274, 1);
  sqcRZGate(q, 0.3486873070343099, 1);
  sqcRYGate(q, -0.0010562138257634857, 2);
  sqcRZGate(q, -2.0447559404342943, 2);
  sqcRYGate(q, -3.1403173246156255, 3);
  sqcRZGate(q, 0.9788087565555443, 3);
  sqcRYGate(q, -1.6486464985238625, 4);
  sqcRZGate(q, -0.06665151677717507, 4);
  sqcRYGate(q, 3.1340420719982633, 5);
  sqcRZGate(q, 2.512799648772974, 5);
  sqcRYGate(q, -0.8966677346944545, 6);
  sqcRZGate(q, 1.31572233297037, 6);
  sqcRYGate(q, 0.2044259580898515, 7);
  sqcRZGate(q, 2.0313464001498023, 7);
  sqcRYGate(q, 0.010618504586276464, 8);
  sqcRZGate(q, 0.30352913609842513, 8);
  sqcRYGate(q, -3.1390095917183913, 9);
  sqcRZGate(q, 1.0480872330607993, 9);
  sqcRYGate(q, 1.5222982269154173, 10);
  sqcRZGate(q, 1.3775418902426675, 10);
  sqcRYGate(q, 3.0649719920738607, 11);
  sqcRZGate(q, -0.1971924381464884, 11);
  sqcRYGate(q, -1.9860830745639972, 12);
  sqcRZGate(q, 0.7874101307764105, 12);
  sqcRYGate(q, 0.004108198682884811, 13);
  sqcRZGate(q, 1.8336162521058537, 13);
  sqcRYGate(q, 1.2144331590390802, 14);
  sqcRZGate(q, 1.3765109862878582, 14);
  sqcRYGate(q, 0.38102005680691836, 15);
  sqcRZGate(q, -2.9318422675490368, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.27965559049139443, 0);
  sqcRZGate(q, 1.2384574330129947, 0);
  sqcRYGate(q, 1.0535050458060453, 1);
  sqcRZGate(q, 1.1792757979330437, 1);
  sqcRYGate(q, 1.6047089613954233, 2);
  sqcRZGate(q, -0.8203956203441548, 2);
  sqcRYGate(q, -1.5770013763359847, 3);
  sqcRZGate(q, -1.7990810981942564, 3);
  sqcRYGate(q, 1.2431875085811444, 4);
  sqcRZGate(q, 1.9999546429628383, 4);
  sqcRYGate(q, -1.58168966667002, 5);
  sqcRZGate(q, 1.8658617007978266, 5);
  sqcRYGate(q, 0.9071490920465122, 6);
  sqcRZGate(q, -1.8588747191059865, 6);
  sqcRYGate(q, 0.006558707839793954, 7);
  sqcRZGate(q, -0.35628016920731287, 7);
  sqcRYGate(q, -3.1316038731773594, 8);
  sqcRZGate(q, 0.4836544221589545, 8);
  sqcRYGate(q, 3.133301131970364, 9);
  sqcRZGate(q, -0.8500299177735939, 9);
  sqcRYGate(q, -2.7421917191714265, 10);
  sqcRZGate(q, -3.1296241337009056, 10);
  sqcRYGate(q, -1.399846677927417, 11);
  sqcRZGate(q, -3.136824981896863, 11);
  sqcRYGate(q, 0.18095217256126975, 12);
  sqcRZGate(q, 2.356603599135619, 12);
  sqcRYGate(q, 1.7259222620991541, 13);
  sqcRZGate(q, 3.0725513519200054, 13);
  sqcRYGate(q, -1.3359385694538877, 14);
  sqcRZGate(q, 1.8884165273617022, 14);
  sqcRYGate(q, 1.5006316029802351, 15);
  sqcRZGate(q, 1.3332057473598464, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3772735060484618, 0);
  sqcRZGate(q, 0.5691334987475204, 0);
  sqcRYGate(q, -3.085802655093763, 1);
  sqcRZGate(q, -0.4383015413587131, 1);
  sqcRYGate(q, 3.1372238093232823, 2);
  sqcRZGate(q, 2.3230946124611282, 2);
  sqcRYGate(q, 0.012669989159337074, 3);
  sqcRZGate(q, -1.3431567743376653, 3);
  sqcRYGate(q, 3.1415073343953654, 4);
  sqcRZGate(q, -1.155988902295285, 4);
  sqcRYGate(q, -3.140952147773217, 5);
  sqcRZGate(q, -1.4507253035171452, 5);
  sqcRYGate(q, -1.5943910824436236, 6);
  sqcRZGate(q, 2.973222401404804, 6);
  sqcRYGate(q, -1.6201350045530563, 7);
  sqcRZGate(q, 2.522213319329217, 7);
  sqcRYGate(q, -0.0006753575847512788, 8);
  sqcRZGate(q, 2.6172047357285932, 8);
  sqcRYGate(q, -0.00012692734588704013, 9);
  sqcRZGate(q, 2.732094126121776, 9);
  sqcRYGate(q, -8.00107749491232e-05, 10);
  sqcRZGate(q, 1.5214175359062723, 10);
  sqcRYGate(q, -0.17032805798417938, 11);
  sqcRZGate(q, 2.3196405658787613, 11);
  sqcRYGate(q, -1.8063985878696966, 12);
  sqcRZGate(q, -3.1394014279004745, 12);
  sqcRYGate(q, 2.6291884504834977, 13);
  sqcRZGate(q, -0.002661286311039568, 13);
  sqcRYGate(q, 0.02463735731271686, 14);
  sqcRZGate(q, 1.2548799952781016, 14);
  sqcRYGate(q, 0.006799592892616414, 15);
  sqcRZGate(q, -1.5644947573842214, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.8705396566518098, 0);
  sqcRZGate(q, 2.2989597399264428, 0);
  sqcRYGate(q, -3.1011143528195455, 1);
  sqcRZGate(q, 2.112851212844462, 1);
  sqcRYGate(q, -1.573810432451503, 2);
  sqcRZGate(q, -2.1512486634262498, 2);
  sqcRYGate(q, -1.559605541815612, 3);
  sqcRZGate(q, 2.191824606617555, 3);
  sqcRYGate(q, 3.0984373762565824, 4);
  sqcRZGate(q, -0.5246655418456114, 4);
  sqcRYGate(q, 3.1414418173065695, 5);
  sqcRZGate(q, -1.2533648993913926, 5);
  sqcRYGate(q, -3.1094117449972183, 6);
  sqcRZGate(q, 1.4098894364941508, 6);
  sqcRYGate(q, 0.001299771256831228, 7);
  sqcRZGate(q, -2.526002735838615, 7);
  sqcRYGate(q, 3.141297590427668, 8);
  sqcRZGate(q, 1.2412368503380018, 8);
  sqcRYGate(q, -3.141465029293138, 9);
  sqcRZGate(q, 1.6017598241958098, 9);
  sqcRYGate(q, -0.00013630586737956482, 10);
  sqcRZGate(q, -0.22762799834399441, 10);
  sqcRYGate(q, 2.1501337486394396, 11);
  sqcRZGate(q, 2.3138644529208245, 11);
  sqcRYGate(q, -1.4371836006573036, 12);
  sqcRZGate(q, 3.136699333437555, 12);
  sqcRYGate(q, -0.5168133708118408, 13);
  sqcRZGate(q, -3.081638673019942, 13);
  sqcRYGate(q, -1.570915250666409, 14);
  sqcRZGate(q, 0.6154692973119138, 14);
  sqcRYGate(q, 1.5675978958158483, 15);
  sqcRZGate(q, -0.2985723880759744, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.7207449087483413, 0);
  sqcRZGate(q, 0.34337617048140334, 0);
  sqcRYGate(q, 1.6628748721213864, 1);
  sqcRZGate(q, -1.6710582212665623, 1);
  sqcRYGate(q, -2.881632304134517, 2);
  sqcRZGate(q, -2.1202879612249035, 2);
  sqcRYGate(q, -0.032384227544898, 3);
  sqcRZGate(q, 0.17850461138781976, 3);
  sqcRYGate(q, -3.1411816567330555, 4);
  sqcRZGate(q, -1.006181091053782, 4);
  sqcRYGate(q, -3.1399540143209212, 5);
  sqcRZGate(q, 0.42039581770936757, 5);
  sqcRYGate(q, 1.287003148125167, 6);
  sqcRZGate(q, 1.551733432219696, 6);
  sqcRYGate(q, 1.5319623325411753, 7);
  sqcRZGate(q, -1.2183722906446202, 7);
  sqcRYGate(q, 0.0012345956200228172, 8);
  sqcRZGate(q, 0.08537506827257779, 8);
  sqcRYGate(q, -3.141213702805848, 9);
  sqcRZGate(q, -2.7110123746912573, 9);
  sqcRYGate(q, 0.015247867723022779, 10);
  sqcRZGate(q, 1.7610120504305327, 10);
  sqcRYGate(q, -1.6436215407132237, 11);
  sqcRZGate(q, 0.12596301397055054, 11);
  sqcRYGate(q, -1.4494703610169963, 12);
  sqcRZGate(q, 0.014406660357194966, 12);
  sqcRYGate(q, -1.43693057644877, 13);
  sqcRZGate(q, -0.0028797242969577784, 13);
  sqcRYGate(q, -0.008417047651691809, 14);
  sqcRZGate(q, -0.1987519783492579, 14);
  sqcRYGate(q, -0.5109027177818616, 15);
  sqcRZGate(q, -2.8364726478107856, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.644416348383208, 0);
  sqcRZGate(q, 2.944873636660131, 0);
  sqcRYGate(q, 0.4591383778702438, 1);
  sqcRZGate(q, 0.07883905991545546, 1);
  sqcRYGate(q, -1.6968217944212771, 2);
  sqcRZGate(q, -2.311955913746612, 2);
  sqcRYGate(q, -0.004921569376529432, 3);
  sqcRZGate(q, -0.8069304835060671, 3);
  sqcRYGate(q, -1.45229797416349, 4);
  sqcRZGate(q, 2.0164338433936226, 4);
  sqcRYGate(q, -1.6711981893777654, 5);
  sqcRZGate(q, -2.6346693215495574, 5);
  sqcRYGate(q, -0.46686490585530444, 6);
  sqcRZGate(q, -0.5704860240786864, 6);
  sqcRYGate(q, -1.5915643546212284, 7);
  sqcRZGate(q, -0.23051879490739546, 7);
  sqcRYGate(q, -3.129976606762672, 8);
  sqcRZGate(q, 2.459257742242375, 8);
  sqcRYGate(q, -3.1385011756710974, 9);
  sqcRZGate(q, -0.01194237919306662, 9);
  sqcRYGate(q, -0.016328477171917655, 10);
  sqcRZGate(q, -2.1633069993456155, 10);
  sqcRYGate(q, 0.43184745337600194, 11);
  sqcRZGate(q, 1.654623183263804, 11);
  sqcRYGate(q, 2.445869575138062, 12);
  sqcRZGate(q, -0.07073295426541383, 12);
  sqcRYGate(q, 1.1814607388618672, 13);
  sqcRZGate(q, 3.0588475633982393, 13);
  sqcRYGate(q, 1.679956766036371, 14);
  sqcRZGate(q, -0.3226477547760078, 14);
  sqcRYGate(q, 0.6845444933052172, 15);
  sqcRZGate(q, 1.4896159520393881, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.00026861184816948547, 0);
  sqcRZGate(q, -1.02125165694121, 0);
  sqcRYGate(q, -3.139547030446137, 1);
  sqcRZGate(q, 1.4628888819623143, 1);
  sqcRYGate(q, -3.140772320816448, 2);
  sqcRZGate(q, -2.3136086194477863, 2);
  sqcRYGate(q, -3.135866281574931, 3);
  sqcRZGate(q, 2.962430197400785, 3);
  sqcRYGate(q, -3.141567328570667, 4);
  sqcRZGate(q, 2.01673487110238, 4);
  sqcRYGate(q, 2.2274518250837817e-05, 5);
  sqcRZGate(q, 2.629916103488478, 5);
  sqcRYGate(q, -3.141285243277954, 6);
  sqcRZGate(q, 2.5757865441449606, 6);
  sqcRYGate(q, 0.0008172324437465406, 7);
  sqcRZGate(q, 0.2424183788683825, 7);
  sqcRYGate(q, -0.24491904423295097, 8);
  sqcRZGate(q, -1.639526136149077, 8);
  sqcRYGate(q, 3.1106422850683337, 9);
  sqcRZGate(q, 1.5024717215518049, 9);
  sqcRYGate(q, 3.1297179386753022, 10);
  sqcRZGate(q, -0.13230676775242056, 10);
  sqcRYGate(q, 2.7625715849341614, 11);
  sqcRZGate(q, 0.9865047303931903, 11);
  sqcRYGate(q, -3.1311913964109293, 12);
  sqcRZGate(q, -1.6564205040557376, 12);
  sqcRYGate(q, 3.106806399822288, 13);
  sqcRZGate(q, -1.6535377285524717, 13);
  sqcRYGate(q, -1.5743915275120388, 14);
  sqcRZGate(q, 1.431753482123513, 14);
  sqcRYGate(q, 1.5504743202580178, 15);
  sqcRZGate(q, 0.38235552080031804, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.6322874848569988, 0);
  sqcRZGate(q, 0.8956889403199044, 0);
  sqcRYGate(q, 1.5136095409206058, 1);
  sqcRZGate(q, -0.8346167416738818, 1);
  sqcRYGate(q, -1.6982595082801113, 2);
  sqcRZGate(q, 2.6188472673271073, 2);
  sqcRYGate(q, 0.006368548370025984, 3);
  sqcRZGate(q, 1.2051710818278383, 3);
  sqcRYGate(q, 1.6883482650550112, 4);
  sqcRZGate(q, 0.7264882480826491, 4);
  sqcRYGate(q, 1.6741484472282284, 5);
  sqcRZGate(q, 0.1401470829596427, 5);
  sqcRYGate(q, -1.359842179422904, 6);
  sqcRZGate(q, 1.58710097284816, 6);
  sqcRYGate(q, -1.5654306540471907, 7);
  sqcRZGate(q, -1.5573950026788927, 7);
  sqcRYGate(q, -0.033607568047818615, 8);
  sqcRZGate(q, 0.07836048299147574, 8);
  sqcRYGate(q, 0.006076265973021577, 9);
  sqcRZGate(q, 0.09373925204769053, 9);
  sqcRYGate(q, -3.139607978591107, 10);
  sqcRZGate(q, -1.2262644618573253, 10);
  sqcRYGate(q, 3.140869899729094, 11);
  sqcRZGate(q, 2.390195048731934, 11);
  sqcRYGate(q, 1.5604878325363054, 12);
  sqcRZGate(q, -2.631702482598017, 12);
  sqcRYGate(q, 1.5719095357990727, 13);
  sqcRZGate(q, -2.2164479063081908, 13);
  sqcRYGate(q, 2.580134644747666, 14);
  sqcRZGate(q, 0.08454403290522007, 14);
  sqcRYGate(q, -0.2793293826322638, 15);
  sqcRZGate(q, -2.484725035137682, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.138003974183969, 0);
  sqcRZGate(q, 1.3713810927627108, 0);
  sqcRYGate(q, 0.005969653663889574, 1);
  sqcRZGate(q, -0.8441049518830734, 1);
  sqcRYGate(q, -1.573036769396369, 2);
  sqcRZGate(q, -3.0521754667673853, 2);
  sqcRYGate(q, -1.5706943855980615, 3);
  sqcRZGate(q, 3.1298486952480298, 3);
  sqcRYGate(q, 1.572730915334093, 4);
  sqcRZGate(q, -3.137214458939084, 4);
  sqcRYGate(q, -2.9714256587971164, 5);
  sqcRZGate(q, 1.6432455308497267, 5);
  sqcRYGate(q, 2.9822054412367476, 6);
  sqcRZGate(q, 1.5889699929967591, 6);
  sqcRYGate(q, -1.5836034325986152, 7);
  sqcRZGate(q, 0.00803860762014619, 7);
  sqcRYGate(q, -1.5735118979726739, 8);
  sqcRZGate(q, -3.140316664558184, 8);
  sqcRYGate(q, -1.5614050704904472, 9);
  sqcRZGate(q, 3.1414435093339956, 9);
  sqcRYGate(q, -1.5432553514644525, 10);
  sqcRZGate(q, -0.0023174013780459307, 10);
  sqcRYGate(q, 1.595276867104117, 11);
  sqcRZGate(q, -3.0932619168585926, 11);
  sqcRYGate(q, 1.6213542163284238, 12);
  sqcRZGate(q, 0.8257991473508527, 12);
  sqcRYGate(q, -2.0470224109572768, 13);
  sqcRZGate(q, -1.8277234510746219, 13);
  sqcRYGate(q, 0.017223304553495744, 14);
  sqcRZGate(q, -0.27064338682177164, 14);
  sqcRYGate(q, -3.1227589203658224, 15);
  sqcRZGate(q, 2.645232325642374, 15);

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
