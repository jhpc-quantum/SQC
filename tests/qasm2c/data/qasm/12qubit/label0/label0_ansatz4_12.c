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

  sqcRYGate(q, -0.3391102714741523, 0);
  sqcRZGate(q, 2.6084131237508945, 0);
  sqcRYGate(q, 3.0125353833740975, 1);
  sqcRZGate(q, -0.340277940139047, 1);
  sqcRYGate(q, 3.097556202405931, 2);
  sqcRZGate(q, 1.724477662709547, 2);
  sqcRYGate(q, -0.09292865983453337, 3);
  sqcRZGate(q, 0.5559073757813398, 3);
  sqcRYGate(q, -3.1413605747981372, 4);
  sqcRZGate(q, 1.9152577364270655, 4);
  sqcRYGate(q, -3.140573787472226, 5);
  sqcRZGate(q, 2.8389861168873742, 5);
  sqcRYGate(q, 1.9227944907316903, 6);
  sqcRZGate(q, -2.785489129106899, 6);
  sqcRYGate(q, -2.1245506270512777, 7);
  sqcRZGate(q, -0.056944517129292826, 7);
  sqcRYGate(q, -0.14640235289062176, 8);
  sqcRZGate(q, 3.135282195883235, 8);
  sqcRYGate(q, 0.03407371768528478, 9);
  sqcRZGate(q, -0.03111869978206839, 9);
  sqcRYGate(q, 1.6590667112215778, 10);
  sqcRZGate(q, -1.4956020618224688, 10);
  sqcRYGate(q, -1.3029637385926511, 11);
  sqcRZGate(q, -1.9655696728903198, 11);
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
  sqcRYGate(q, 2.702907781503499, 0);
  sqcRZGate(q, -1.6088260444744555, 0);
  sqcRYGate(q, -0.019687119249271134, 1);
  sqcRZGate(q, 1.874606756961472, 1);
  sqcRYGate(q, 1.0303360595451514, 2);
  sqcRZGate(q, 0.04226486139712218, 2);
  sqcRYGate(q, -0.70065477698813, 3);
  sqcRZGate(q, 1.9965275048623188, 3);
  sqcRYGate(q, 0.001139824460555161, 4);
  sqcRZGate(q, -1.9634329865475562, 4);
  sqcRYGate(q, 3.1412746670667424, 5);
  sqcRZGate(q, 1.9945427285610426, 5);
  sqcRYGate(q, 2.600501425051396, 6);
  sqcRZGate(q, -0.795702900828292, 6);
  sqcRYGate(q, 2.3983738726037944, 7);
  sqcRZGate(q, -2.004761042957054, 7);
  sqcRYGate(q, 0.2510310652401433, 8);
  sqcRZGate(q, 0.6980138544502665, 8);
  sqcRYGate(q, -3.0723986768766225, 9);
  sqcRZGate(q, 2.6690412580297527, 9);
  sqcRYGate(q, -0.4766286450375166, 10);
  sqcRZGate(q, 2.511909550657446, 10);
  sqcRYGate(q, 1.5296175720595455, 11);
  sqcRZGate(q, -1.3966997274414776, 11);
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
  sqcRYGate(q, 3.0909382856448273, 0);
  sqcRZGate(q, -1.969671873216396, 0);
  sqcRYGate(q, -3.1361268751371374, 1);
  sqcRZGate(q, 2.0665954539410625, 1);
  sqcRYGate(q, 3.098592061839708, 2);
  sqcRZGate(q, -1.372897467006452, 2);
  sqcRYGate(q, -2.7717651967449184, 3);
  sqcRZGate(q, -2.805537884930859, 3);
  sqcRYGate(q, 0.0005639830865522555, 4);
  sqcRZGate(q, 1.9757891956710345, 4);
  sqcRYGate(q, -0.0003691053367456121, 5);
  sqcRZGate(q, -2.3681625260657957, 5);
  sqcRYGate(q, -0.6747016320236725, 6);
  sqcRZGate(q, -0.3984930001140797, 6);
  sqcRYGate(q, -2.510940666117322, 7);
  sqcRZGate(q, -0.8964126586356658, 7);
  sqcRYGate(q, -0.02554361055373278, 8);
  sqcRZGate(q, -0.35141880852412305, 8);
  sqcRYGate(q, 3.0805612344888815, 9);
  sqcRZGate(q, 2.949114847337619, 9);
  sqcRYGate(q, -2.6138864372441972, 10);
  sqcRZGate(q, -0.16976368587979804, 10);
  sqcRYGate(q, 1.8728129427133455, 11);
  sqcRZGate(q, 0.858263164296666, 11);
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
  sqcRYGate(q, 3.0211581287297156, 0);
  sqcRZGate(q, -2.241774089157107, 0);
  sqcRYGate(q, 0.33673706023210415, 1);
  sqcRZGate(q, 2.472630413599286, 1);
  sqcRYGate(q, 1.454945617050555, 2);
  sqcRZGate(q, 2.1480122022987533, 2);
  sqcRYGate(q, 1.2648999219004227, 3);
  sqcRZGate(q, 2.2938963943956123, 3);
  sqcRYGate(q, 3.14118904968304, 4);
  sqcRZGate(q, 2.806692035085311, 4);
  sqcRYGate(q, -0.0007824050637053047, 5);
  sqcRZGate(q, -1.9342553856992153, 5);
  sqcRYGate(q, 1.1794896488646014, 6);
  sqcRZGate(q, 2.3988677641033274, 6);
  sqcRYGate(q, -1.9812771004299359, 7);
  sqcRZGate(q, 1.0549935328373907, 7);
  sqcRYGate(q, 1.5880969993064962, 8);
  sqcRZGate(q, -1.4379855972318598, 8);
  sqcRYGate(q, 1.4760838747077538, 9);
  sqcRZGate(q, 2.812395258201244, 9);
  sqcRYGate(q, 1.2486244515166607, 10);
  sqcRZGate(q, 0.6045270483328554, 10);
  sqcRYGate(q, -2.2305646108033867, 11);
  sqcRZGate(q, -1.8538843281617572, 11);
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
  sqcRYGate(q, 3.0624473452871537, 0);
  sqcRZGate(q, 2.453933082341822, 0);
  sqcRYGate(q, 0.5721544627097703, 1);
  sqcRZGate(q, 1.8661570876473474, 1);
  sqcRYGate(q, 2.869135300869661, 2);
  sqcRZGate(q, 2.3993689186766187, 2);
  sqcRYGate(q, -2.2675585113114485, 3);
  sqcRZGate(q, 1.4468996674987755, 3);
  sqcRYGate(q, -1.579000116090831, 4);
  sqcRZGate(q, 1.0625421265102155, 4);
  sqcRYGate(q, -3.0098339612248326, 5);
  sqcRZGate(q, 1.4753236758310617, 5);
  sqcRYGate(q, -1.2150210517732223, 6);
  sqcRZGate(q, -1.0064949182287495, 6);
  sqcRYGate(q, 0.17045790042656694, 7);
  sqcRZGate(q, -2.9143317004894915, 7);
  sqcRYGate(q, 3.0696325706104974, 8);
  sqcRZGate(q, -2.793126706433234, 8);
  sqcRYGate(q, 2.369282344501468, 9);
  sqcRZGate(q, 1.0849126482066254, 9);
  sqcRYGate(q, -1.217942170813414, 10);
  sqcRZGate(q, 1.1739277079582369, 10);
  sqcRYGate(q, -0.34213184081313813, 11);
  sqcRZGate(q, 2.988037339015912, 11);
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
  sqcRYGate(q, 1.4785307266892478, 0);
  sqcRZGate(q, 2.3721777672159976, 0);
  sqcRYGate(q, 1.739609431776907, 1);
  sqcRZGate(q, 2.4178585698033888, 1);
  sqcRYGate(q, -0.013239179251748112, 2);
  sqcRZGate(q, -0.7137729686666024, 2);
  sqcRYGate(q, -3.069946147199933, 3);
  sqcRZGate(q, 2.6942322436407022, 3);
  sqcRYGate(q, -3.114111625166018, 4);
  sqcRZGate(q, -0.5012315818915001, 4);
  sqcRYGate(q, 2.898213568284791, 5);
  sqcRZGate(q, 1.0999931852111946, 5);
  sqcRYGate(q, -3.141102448756872, 6);
  sqcRZGate(q, 2.384676951358532, 6);
  sqcRYGate(q, 3.141498604353229, 7);
  sqcRZGate(q, -0.22776336247532658, 7);
  sqcRYGate(q, 2.875355247784895, 8);
  sqcRZGate(q, -1.5251872008364256, 8);
  sqcRYGate(q, -2.8647150959034233, 9);
  sqcRZGate(q, 1.2561029196458007, 9);
  sqcRYGate(q, -2.0466007410840334, 10);
  sqcRZGate(q, 1.809678870432165, 10);
  sqcRYGate(q, 1.2157621063530653, 11);
  sqcRZGate(q, -2.615372017996848, 11);
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
  sqcRYGate(q, -0.002279860588608962, 0);
  sqcRZGate(q, 2.381355297851691, 0);
  sqcRYGate(q, 3.1320786884451515, 1);
  sqcRZGate(q, 2.487545126277221, 1);
  sqcRYGate(q, 1.5761340774724015, 2);
  sqcRZGate(q, 0.029427999146802945, 2);
  sqcRYGate(q, 1.5578319291581202, 3);
  sqcRZGate(q, -0.02553994688988848, 3);
  sqcRYGate(q, -0.5393138787582165, 4);
  sqcRZGate(q, 0.15954166312015028, 4);
  sqcRYGate(q, 2.765009609866924, 5);
  sqcRZGate(q, -0.11281122327964342, 5);
  sqcRYGate(q, -1.2762511472715399, 6);
  sqcRZGate(q, -3.0107797767320523, 6);
  sqcRYGate(q, -2.837337820539113, 7);
  sqcRZGate(q, 2.3329704064078527, 7);
  sqcRYGate(q, 0.7068664101377333, 8);
  sqcRZGate(q, -1.5537097384810936, 8);
  sqcRYGate(q, -0.4992070923870137, 9);
  sqcRZGate(q, -1.45099159248285, 9);
  sqcRYGate(q, -2.5075574247138994, 10);
  sqcRZGate(q, 0.5920169782464137, 10);
  sqcRYGate(q, 1.5069856509036492, 11);
  sqcRZGate(q, -1.0967659409186887, 11);
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
  sqcRYGate(q, -2.4763834652213905, 0);
  sqcRZGate(q, 1.9739738409886842, 0);
  sqcRYGate(q, 3.1330055707004165, 1);
  sqcRZGate(q, 1.3298421980942772, 1);
  sqcRYGate(q, -1.5662276395396493, 2);
  sqcRZGate(q, 2.9599997775878517, 2);
  sqcRYGate(q, -1.5683381990079264, 3);
  sqcRZGate(q, 0.01970928189954645, 3);
  sqcRYGate(q, -0.005751801264163381, 4);
  sqcRZGate(q, 2.147619675933514, 4);
  sqcRYGate(q, -0.003046886369579526, 5);
  sqcRZGate(q, -0.4950400107417714, 5);
  sqcRYGate(q, 1.5708873778261299, 6);
  sqcRZGate(q, 3.1396190374251556, 6);
  sqcRYGate(q, -1.5732722373334997, 7);
  sqcRZGate(q, -3.140219105773635, 7);
  sqcRYGate(q, 2.055907953127953, 8);
  sqcRZGate(q, -1.6457363673560077, 8);
  sqcRYGate(q, -1.0621389686690481, 9);
  sqcRZGate(q, 1.3855551352643305, 9);
  sqcRYGate(q, 0.22461844860406843, 10);
  sqcRZGate(q, -2.327813915876018, 10);
  sqcRYGate(q, 1.3256863395672491, 11);
  sqcRZGate(q, -2.8375617612759645, 11);
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
  sqcRYGate(q, 0.46887217600339837, 0);
  sqcRZGate(q, -0.9244783064149792, 0);
  sqcRYGate(q, -0.7481880969885794, 1);
  sqcRZGate(q, 2.3311934479637544, 1);
  sqcRYGate(q, -1.227866178287259, 2);
  sqcRZGate(q, -0.9932895805957092, 2);
  sqcRYGate(q, 1.6501329813433818, 3);
  sqcRZGate(q, 3.014364844645292, 3);
  sqcRYGate(q, 0.0005454184985628633, 4);
  sqcRZGate(q, -0.7306230601083783, 4);
  sqcRYGate(q, -0.000278937104761903, 5);
  sqcRZGate(q, 0.7084135409134493, 5);
  sqcRYGate(q, -1.5687407888303122, 6);
  sqcRZGate(q, 1.4534708656053592, 6);
  sqcRYGate(q, -1.5712802128539574, 7);
  sqcRZGate(q, 3.045394396459495, 7);
  sqcRYGate(q, -1.4436024753613461, 8);
  sqcRZGate(q, -0.09498888005599371, 8);
  sqcRYGate(q, 3.0036873593909186, 9);
  sqcRZGate(q, 1.4277183054790399, 9);
  sqcRYGate(q, 1.7209840142311346, 10);
  sqcRZGate(q, 0.7970011151930634, 10);
  sqcRYGate(q, 1.7619493582524035, 11);
  sqcRZGate(q, -2.620522684722422, 11);
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
  sqcRYGate(q, -2.4489791466677793, 0);
  sqcRZGate(q, 3.0874573393557254, 0);
  sqcRYGate(q, 2.7238404089222104, 1);
  sqcRZGate(q, 2.940802292262045, 1);
  sqcRYGate(q, -0.0041581144140170915, 2);
  sqcRZGate(q, 1.4313893118794248, 2);
  sqcRYGate(q, -3.141187579610726, 3);
  sqcRZGate(q, -2.9671342120779736, 3);
  sqcRYGate(q, 1.4540474932644545, 4);
  sqcRZGate(q, 0.7105426242885828, 4);
  sqcRYGate(q, 3.1325478019518034, 5);
  sqcRZGate(q, 1.8863430608206506, 5);
  sqcRYGate(q, 0.49067306984153003, 6);
  sqcRZGate(q, -2.197866023906092, 6);
  sqcRYGate(q, 1.4018128410323651, 7);
  sqcRZGate(q, -2.1941340858085776, 7);
  sqcRYGate(q, -3.0288088046978796, 8);
  sqcRZGate(q, -0.5678594327230683, 8);
  sqcRYGate(q, -0.8459672397700098, 9);
  sqcRZGate(q, -1.4258964034057569, 9);
  sqcRYGate(q, 0.21478670604478634, 10);
  sqcRZGate(q, -0.13484317296624868, 10);
  sqcRYGate(q, -1.3372035929192934, 11);
  sqcRZGate(q, 1.2276318227186285, 11);
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
  sqcRYGate(q, 0.23638618556976065, 0);
  sqcRZGate(q, -1.913724487441808, 0);
  sqcRYGate(q, 0.14705295943661364, 1);
  sqcRZGate(q, -1.5110325265289994, 1);
  sqcRYGate(q, 2.0265757613825945, 2);
  sqcRZGate(q, -2.936036609977881, 2);
  sqcRYGate(q, 1.0176722053515852, 3);
  sqcRZGate(q, -1.3847648527794396, 3);
  sqcRYGate(q, 0.0035231495101486487, 4);
  sqcRZGate(q, 1.1491618936443633, 4);
  sqcRYGate(q, -3.10023168213859, 5);
  sqcRZGate(q, 2.232960051236157, 5);
  sqcRYGate(q, -1.590857613641801, 6);
  sqcRZGate(q, -1.5614189548947586, 6);
  sqcRYGate(q, -1.5480721935041417, 7);
  sqcRZGate(q, 1.6346845702296982, 7);
  sqcRYGate(q, -1.1437928439212133, 8);
  sqcRZGate(q, 2.8543823695187847, 8);
  sqcRYGate(q, 1.975813951504228, 9);
  sqcRZGate(q, -1.3278872497007403, 9);
  sqcRYGate(q, -0.8147447887418604, 10);
  sqcRZGate(q, -2.1612328387007276, 10);
  sqcRYGate(q, 2.2597982080031733, 11);
  sqcRZGate(q, -2.19206492505542, 11);
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
  sqcRYGate(q, 0.11658358617015803, 0);
  sqcRZGate(q, 0.4823463292606309, 0);
  sqcRYGate(q, 2.8585696689570192, 1);
  sqcRZGate(q, 0.06086643534360814, 1);
  sqcRYGate(q, 1.5795668997496994, 2);
  sqcRZGate(q, -2.5408904136966854, 2);
  sqcRYGate(q, -1.57880791005502, 3);
  sqcRZGate(q, 2.3397111412500005, 3);
  sqcRYGate(q, 0.7524243663204873, 4);
  sqcRZGate(q, -1.9888364386125705, 4);
  sqcRYGate(q, 1.0153721513340663, 5);
  sqcRZGate(q, 1.2624650142239764, 5);
  sqcRYGate(q, 3.039717302457319, 6);
  sqcRZGate(q, -0.27175295173016695, 6);
  sqcRYGate(q, 0.1571954150270385, 7);
  sqcRZGate(q, -0.2332618087896211, 7);
  sqcRYGate(q, 0.0005722152850040629, 8);
  sqcRZGate(q, 0.6324002840951247, 8);
  sqcRYGate(q, 3.079595417023633, 9);
  sqcRZGate(q, 1.6366782409632545, 9);
  sqcRYGate(q, -0.2598601693933602, 10);
  sqcRZGate(q, 1.5829145033895737, 10);
  sqcRYGate(q, 0.3031600865433463, 11);
  sqcRZGate(q, 1.939430808350579, 11);
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
  sqcRYGate(q, 1.5998813739909616, 0);
  sqcRZGate(q, 1.0735153033851095, 0);
  sqcRYGate(q, -1.5940138286874357, 1);
  sqcRZGate(q, -3.0198217746573097, 1);
  sqcRYGate(q, 6.171018174356088e-05, 2);
  sqcRZGate(q, -2.4781678269951963, 2);
  sqcRYGate(q, 0.0003918447381234813, 3);
  sqcRZGate(q, 3.139814128728538, 3);
  sqcRYGate(q, -0.0002626097871647853, 4);
  sqcRZGate(q, -1.1522633339473431, 4);
  sqcRYGate(q, -3.1415747650751373, 5);
  sqcRZGate(q, -1.880087249084107, 5);
  sqcRYGate(q, -3.140807888926012, 6);
  sqcRZGate(q, -0.2566265332277711, 6);
  sqcRYGate(q, -3.140796348489739, 7);
  sqcRZGate(q, 0.9393078157570364, 7);
  sqcRYGate(q, 1.3465079611037893, 8);
  sqcRZGate(q, -2.052885250823964, 8);
  sqcRYGate(q, -1.2663828417389307, 9);
  sqcRZGate(q, 1.765733158132242, 9);
  sqcRYGate(q, -1.449116488431855, 10);
  sqcRZGate(q, 1.026782001176678, 10);
  sqcRYGate(q, -1.5643744149555618, 11);
  sqcRZGate(q, 1.2689794622998463, 11);
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
  sqcRYGate(q, -3.08027351478522, 0);
  sqcRZGate(q, 2.6299480135264814, 0);
  sqcRYGate(q, -1.5947859899870949, 1);
  sqcRZGate(q, 0.6690183676514121, 1);
  sqcRYGate(q, 3.136966121524588, 2);
  sqcRZGate(q, 1.2781925456144667, 2);
  sqcRYGate(q, 0.0019276875976089716, 3);
  sqcRZGate(q, 0.8137713706549459, 3);
  sqcRYGate(q, 2.390543900057177, 4);
  sqcRZGate(q, 2.247068935856622, 4);
  sqcRYGate(q, 1.0158930373391086, 5);
  sqcRZGate(q, 0.28850645071723413, 5);
  sqcRYGate(q, -2.992359158827653, 6);
  sqcRZGate(q, -1.5416005207632661, 6);
  sqcRYGate(q, -3.131365730168632, 7);
  sqcRZGate(q, -0.4537156847103451, 7);
  sqcRYGate(q, -2.237162592596192, 8);
  sqcRZGate(q, -1.1845129472544214, 8);
  sqcRYGate(q, -2.190341727248994, 9);
  sqcRZGate(q, -0.08707647640034143, 9);
  sqcRYGate(q, -1.5129992847371092, 10);
  sqcRZGate(q, 0.030187558744373177, 10);
  sqcRYGate(q, -0.01755157115268345, 11);
  sqcRZGate(q, 1.761480428861303, 11);
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
  sqcRYGate(q, -1.5793087750436001, 0);
  sqcRZGate(q, -0.8580746227101982, 0);
  sqcRYGate(q, -0.027752491110597965, 1);
  sqcRZGate(q, 2.4020393181832, 1);
  sqcRYGate(q, 1.5705610147923217, 2);
  sqcRZGate(q, -1.592654939951343, 2);
  sqcRYGate(q, -1.5663003573787364, 3);
  sqcRZGate(q, -1.638349281212994, 3);
  sqcRYGate(q, 2.8247313656701397e-05, 4);
  sqcRZGate(q, 1.119536624532345, 4);
  sqcRYGate(q, 8.591925384250596e-05, 5);
  sqcRZGate(q, 1.5933525443068923, 5);
  sqcRYGate(q, -1.587479959354913, 6);
  sqcRZGate(q, 1.1409067991980035, 6);
  sqcRYGate(q, 1.5496383588800233, 7);
  sqcRZGate(q, -2.5363093772917633, 7);
  sqcRYGate(q, 3.1333547598062057, 8);
  sqcRZGate(q, -1.1931607538001663, 8);
  sqcRYGate(q, -0.04325233415104357, 9);
  sqcRZGate(q, -2.9478069696238607, 9);
  sqcRYGate(q, 2.9020115970495612, 10);
  sqcRZGate(q, -0.06685551506488545, 10);
  sqcRYGate(q, 0.816115525752175, 11);
  sqcRZGate(q, 3.119251719069455, 11);
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
  sqcRYGate(q, -3.1415366384753436, 0);
  sqcRZGate(q, 0.49335741085212625, 0);
  sqcRYGate(q, -3.135484336893095, 1);
  sqcRZGate(q, -0.6022358713093962, 1);
  sqcRYGate(q, 0.9399923904498735, 2);
  sqcRZGate(q, 1.9510641303265959, 2);
  sqcRYGate(q, -1.362652050221179, 3);
  sqcRZGate(q, -1.9363994427280824, 3);
  sqcRYGate(q, -1.5901363095971197, 4);
  sqcRZGate(q, 0.013174285675338444, 4);
  sqcRYGate(q, 1.5077234466627718, 5);
  sqcRZGate(q, -3.1369172312036815, 5);
  sqcRYGate(q, -1.9656916977592496, 6);
  sqcRZGate(q, 1.7275871090972803, 6);
  sqcRYGate(q, -1.6199750105141437, 7);
  sqcRZGate(q, 0.09560159396713533, 7);
  sqcRYGate(q, -1.8388299563186656, 8);
  sqcRZGate(q, 1.5338382198529814, 8);
  sqcRYGate(q, -3.0976004653487723, 9);
  sqcRZGate(q, -1.4740579383956538, 9);
  sqcRYGate(q, -1.7080104493686958, 10);
  sqcRZGate(q, 1.2992939267213526, 10);
  sqcRYGate(q, 3.13213959076254, 11);
  sqcRZGate(q, -2.8990524337976433, 11);

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
