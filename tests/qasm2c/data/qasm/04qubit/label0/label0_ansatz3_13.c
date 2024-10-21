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

  sqcRYGate(q, -0.3462976200003985, 0);
  sqcRZGate(q, -1.3055818720968466, 0);
  sqcRYGate(q, -1.0519188156541395, 1);
  sqcRZGate(q, -1.091605294731992, 1);
  sqcRYGate(q, -2.109319313886532, 2);
  sqcRZGate(q, 2.560071458682329, 2);
  sqcRYGate(q, 1.8196434021943395, 3);
  sqcRZGate(q, -1.6246261585985196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2179897806424846, 0);
  sqcRZGate(q, -1.1771993542518855, 0);
  sqcRYGate(q, 2.06169441490478, 1);
  sqcRZGate(q, -2.5145909976509544, 1);
  sqcRYGate(q, -0.6256401722735196, 2);
  sqcRZGate(q, -0.061302677696647656, 2);
  sqcRYGate(q, -3.0906022961040525, 3);
  sqcRZGate(q, 0.9043871529761245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.49381364375838, 0);
  sqcRZGate(q, -1.8545134829141876, 0);
  sqcRYGate(q, -2.7100407680843763, 1);
  sqcRZGate(q, -3.016370219241193, 1);
  sqcRYGate(q, -3.0545809392788525, 2);
  sqcRZGate(q, 2.146891624248288, 2);
  sqcRYGate(q, -0.8162494551595865, 3);
  sqcRZGate(q, 0.9495070993856372, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.05501057920468, 0);
  sqcRZGate(q, 1.4379049521265868, 0);
  sqcRYGate(q, 2.363592232228695, 1);
  sqcRZGate(q, -0.595346723110838, 1);
  sqcRYGate(q, 2.9061802631319553, 2);
  sqcRZGate(q, 2.947449219450113, 2);
  sqcRYGate(q, -1.4278269725106332, 3);
  sqcRZGate(q, -2.4504516067093376, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8659852296413117, 0);
  sqcRZGate(q, 2.3626111818239903, 0);
  sqcRYGate(q, -1.6476515949195822, 1);
  sqcRZGate(q, -1.3236513717404992, 1);
  sqcRYGate(q, -2.1696359334267292, 2);
  sqcRZGate(q, -2.1356512697162096, 2);
  sqcRYGate(q, -0.8951934979175329, 3);
  sqcRZGate(q, 1.021473136178528, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8027555121498889, 0);
  sqcRZGate(q, 0.6265540116195725, 0);
  sqcRYGate(q, -1.6096087985351843, 1);
  sqcRZGate(q, -2.787589199746302, 1);
  sqcRYGate(q, 0.4438949247768864, 2);
  sqcRZGate(q, -0.3494542529739283, 2);
  sqcRYGate(q, 0.13581567733027455, 3);
  sqcRZGate(q, -1.1752295177801655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.16192651266209612, 0);
  sqcRZGate(q, 1.7900431625570796, 0);
  sqcRYGate(q, -2.950375945133374, 1);
  sqcRZGate(q, -1.9099309393594712, 1);
  sqcRYGate(q, 1.196856706233524, 2);
  sqcRZGate(q, -2.673387520842422, 2);
  sqcRYGate(q, 0.38224758094664907, 3);
  sqcRZGate(q, 0.7884240142838912, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9332763248731506, 0);
  sqcRZGate(q, -1.7367785274750935, 0);
  sqcRYGate(q, 2.553468343975905, 1);
  sqcRZGate(q, 0.6047566082464781, 1);
  sqcRYGate(q, -2.019271050211879, 2);
  sqcRZGate(q, -0.7701838924901783, 2);
  sqcRYGate(q, 3.072041750813267, 3);
  sqcRZGate(q, 1.254301724197816, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9770677627166205, 0);
  sqcRZGate(q, 0.2565089029926888, 0);
  sqcRYGate(q, 2.6996968959385974, 1);
  sqcRZGate(q, -1.1681848823544587, 1);
  sqcRYGate(q, 0.9616514799082436, 2);
  sqcRZGate(q, -1.6751147869762857, 2);
  sqcRYGate(q, 2.6869813533441493, 3);
  sqcRZGate(q, 0.2922111903011233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9951020949898863, 0);
  sqcRZGate(q, -0.7164814932368503, 0);
  sqcRYGate(q, 2.649955455834721, 1);
  sqcRZGate(q, 3.1136812354303953, 1);
  sqcRYGate(q, 0.7429661636300896, 2);
  sqcRZGate(q, -3.1347969752126703, 2);
  sqcRYGate(q, -1.876511539304343, 3);
  sqcRZGate(q, -0.16142326293472237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8550564797417026, 0);
  sqcRZGate(q, 2.019848215089753, 0);
  sqcRYGate(q, 0.09953478062852916, 1);
  sqcRZGate(q, 0.0858050681109857, 1);
  sqcRYGate(q, -0.27435942852856054, 2);
  sqcRZGate(q, -0.6878536750759815, 2);
  sqcRYGate(q, -1.54054201524247, 3);
  sqcRZGate(q, -2.1350541928302484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1314928397589525, 0);
  sqcRZGate(q, 0.7098341693961876, 0);
  sqcRYGate(q, 2.8623978390459968, 1);
  sqcRZGate(q, -0.2903364772534803, 1);
  sqcRYGate(q, 2.6520258303163895, 2);
  sqcRZGate(q, -0.7560949399095631, 2);
  sqcRYGate(q, -0.8895619302688383, 3);
  sqcRZGate(q, -1.2844274242413096, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.24683805378373194, 0);
  sqcRZGate(q, -2.684135256641266, 0);
  sqcRYGate(q, -0.06038367771135533, 1);
  sqcRZGate(q, -1.122914601451325, 1);
  sqcRYGate(q, 1.1247740190934128, 2);
  sqcRZGate(q, -1.3114439194632577, 2);
  sqcRYGate(q, -0.625838187253426, 3);
  sqcRZGate(q, 1.6526268133696578, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8717481593552059, 0);
  sqcRZGate(q, -2.1824595194950316, 0);
  sqcRYGate(q, 2.1354725010465034, 1);
  sqcRZGate(q, -2.3495585145884648, 1);
  sqcRYGate(q, 0.6738630414630206, 2);
  sqcRZGate(q, 2.9897492605651914, 2);
  sqcRYGate(q, 1.6715480270799485, 3);
  sqcRZGate(q, -2.568730193437305, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.410146968899817, 0);
  sqcRZGate(q, -3.0128959790540835, 0);
  sqcRYGate(q, -2.5835439323967107, 1);
  sqcRZGate(q, -2.906668110886711, 1);
  sqcRYGate(q, 0.9900112067920114, 2);
  sqcRZGate(q, 0.24147542443676864, 2);
  sqcRYGate(q, -0.19817994173098621, 3);
  sqcRZGate(q, 2.951675598616474, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.17854619303934705, 0);
  sqcRZGate(q, 1.1896471621657867, 0);
  sqcRYGate(q, 1.4062617859466497, 1);
  sqcRZGate(q, -2.1112114655188012, 1);
  sqcRYGate(q, -0.5458430498230451, 2);
  sqcRZGate(q, -0.9913020590828779, 2);
  sqcRYGate(q, 1.3454713638214972, 3);
  sqcRZGate(q, 0.7983270963665471, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0723363342495986, 0);
  sqcRZGate(q, -2.8028645769382927, 0);
  sqcRYGate(q, -3.0099847975496097, 1);
  sqcRZGate(q, 0.5366854338325701, 1);
  sqcRYGate(q, 0.9708485274078688, 2);
  sqcRZGate(q, 0.9870161580719078, 2);
  sqcRYGate(q, 1.7524002549842344, 3);
  sqcRZGate(q, -1.9736103181338036, 3);

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
