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

  sqcRYGate(q, 1.191178774061737, 0);
  sqcRYGate(q, -0.05347066812575108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.088979137268006, 0);
  sqcRYGate(q, 1.791415904295233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.677930444377639, 1);
  sqcRYGate(q, -1.7719488728120851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.893127215577043, 1);
  sqcRYGate(q, 1.297853217550167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4756624729871228, 2);
  sqcRYGate(q, 0.8286121547187923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.731443699661235, 2);
  sqcRYGate(q, -0.4403681354905525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4007226169492944, 3);
  sqcRYGate(q, -3.114496525415474, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4264697900308132, 3);
  sqcRYGate(q, -1.29314477584773, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1286513532773155, 4);
  sqcRYGate(q, -1.4077187744890223, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2864749739923, 4);
  sqcRYGate(q, -2.520060818917412, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2661347366506286, 5);
  sqcRYGate(q, 1.7836659358953908, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6906135081017823, 5);
  sqcRYGate(q, 0.2753579359546441, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5940216338763848, 6);
  sqcRYGate(q, 0.36578141194652075, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1272784427120301, 6);
  sqcRYGate(q, 1.2187832466616202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.475405855315902, 7);
  sqcRYGate(q, -1.4974362395251377, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9888070780017988, 7);
  sqcRYGate(q, 3.1314241553778133, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0559968408875346, 8);
  sqcRYGate(q, 0.12360143474193745, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5621166485213969, 8);
  sqcRYGate(q, -1.130387909903764, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9224784343600259, 9);
  sqcRYGate(q, 0.588734577765976, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.971580464058527, 9);
  sqcRYGate(q, -0.032057291691907075, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3872417500535006, 10);
  sqcRYGate(q, 1.8053126060092, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5416030692775473, 10);
  sqcRYGate(q, 0.9090386160095454, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7671053427052561, 0);
  sqcRYGate(q, -2.6508384497358555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.966325479240564, 0);
  sqcRYGate(q, -0.7412423233706689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4747852945330573, 1);
  sqcRYGate(q, 2.1459726781886426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43239331274439063, 1);
  sqcRYGate(q, -3.04839510430026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1874717773770316, 2);
  sqcRYGate(q, -0.03383815742578644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.09018707265417, 2);
  sqcRYGate(q, -1.929565426902385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3698792304842984, 3);
  sqcRYGate(q, 2.3209684417096446, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.931764042383343, 3);
  sqcRYGate(q, -0.6343384972149808, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7209812234394986, 4);
  sqcRYGate(q, -1.2181400806266052, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0694122085430688, 4);
  sqcRYGate(q, 0.15038433633335122, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3735561425752336, 5);
  sqcRYGate(q, 1.435049104958397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2946991187294818, 5);
  sqcRYGate(q, 2.3168231611613788, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.032240274691144, 6);
  sqcRYGate(q, 3.0451473960755777, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8599735188907989, 6);
  sqcRYGate(q, 0.2954277448566502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.01531339764973, 7);
  sqcRYGate(q, 2.6668055481830932, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7733464344342407, 7);
  sqcRYGate(q, 0.5335017703161364, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.10355705460647101, 8);
  sqcRYGate(q, -2.347572081895524, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.06784232714737382, 8);
  sqcRYGate(q, -1.9746807725794813, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3927378450122745, 9);
  sqcRYGate(q, -0.5218511339971066, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0843972408338458, 9);
  sqcRYGate(q, -3.095011358090983, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9547492408331699, 10);
  sqcRYGate(q, 0.9298610601930117, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.18688825578265167, 10);
  sqcRYGate(q, -1.0793306189081635, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5323346102546633, 0);
  sqcRYGate(q, -0.7806412842373156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23551597535560753, 0);
  sqcRYGate(q, 2.7411547068601823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3455565760017731, 1);
  sqcRYGate(q, -2.897228396410966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9537153289166167, 1);
  sqcRYGate(q, 0.5176526992253403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.316475324871023, 2);
  sqcRYGate(q, 1.6243794450086275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.628197062848572, 2);
  sqcRYGate(q, 0.9616815516745901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9282795110730248, 3);
  sqcRYGate(q, -0.8884527831171335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.821345295290791, 3);
  sqcRYGate(q, -2.1651120260012844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9657405820733218, 4);
  sqcRYGate(q, -1.3448490734463912, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02249639768886512, 4);
  sqcRYGate(q, -3.1142279214266964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6027779990346327, 5);
  sqcRYGate(q, 2.602858303594873, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.515345840911516, 5);
  sqcRYGate(q, 1.2765437271859517, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.932908691411522, 6);
  sqcRYGate(q, 0.950631890663133, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0131618317752022, 6);
  sqcRYGate(q, 1.971684587619368, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12184441685954493, 7);
  sqcRYGate(q, -1.666507986357917, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.306748924012166, 7);
  sqcRYGate(q, 3.1226925858274424, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.08861453390725, 8);
  sqcRYGate(q, -2.625768027090486, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0947062805226091, 8);
  sqcRYGate(q, 0.6544657051668494, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8835720091364552, 9);
  sqcRYGate(q, 1.3979625461769531, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8953389317198001, 9);
  sqcRYGate(q, -0.6405241801320347, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6135616496224654, 10);
  sqcRYGate(q, -1.9372211845670604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8207779573726768, 10);
  sqcRYGate(q, 1.1890763333690952, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9044456513936795, 0);
  sqcRYGate(q, -1.5766954379124682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7275025217059925, 0);
  sqcRYGate(q, -2.7134430129378995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9089121457613376, 1);
  sqcRYGate(q, -1.3408045061275056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6125740789041754, 1);
  sqcRYGate(q, 1.7273910234606173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26498377407695106, 2);
  sqcRYGate(q, 0.8526741776171426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.545895188387232, 2);
  sqcRYGate(q, 2.578521279958032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6596494096913792, 3);
  sqcRYGate(q, 1.8922007355820263, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.773938528726414, 3);
  sqcRYGate(q, -2.219923257257233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.731680783973137, 4);
  sqcRYGate(q, 1.2954459151478555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4019582344253503, 4);
  sqcRYGate(q, -2.01859715311886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.163378441092684, 5);
  sqcRYGate(q, -1.6541381972930982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1379422284146631, 5);
  sqcRYGate(q, -2.9601343869500325, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9699449418969683, 6);
  sqcRYGate(q, -2.669107872436394, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.37020665424657745, 6);
  sqcRYGate(q, 2.6776337026404846, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5562572828919083, 7);
  sqcRYGate(q, -2.939631656193412, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.04410196108577727, 7);
  sqcRYGate(q, 2.417598570287092, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6325211317081887, 8);
  sqcRYGate(q, 1.5989072512882698, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.419027223864934, 8);
  sqcRYGate(q, 1.3290109397321714, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3051129786935727, 9);
  sqcRYGate(q, 1.4683478000498642, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.965188138743184, 9);
  sqcRYGate(q, -0.3846099904891292, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.624320825081147, 10);
  sqcRYGate(q, -1.0415236209438146, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.556579672615874, 10);
  sqcRYGate(q, -0.38556448299509344, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0628442281998032, 0);
  sqcRYGate(q, -1.18024170695042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.483926188485898, 0);
  sqcRYGate(q, 1.5739611482449893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.394830777507953, 1);
  sqcRYGate(q, -1.681945610396497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8305435523757891, 1);
  sqcRYGate(q, -1.4379786163478898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.057000953992692, 2);
  sqcRYGate(q, 0.27210660456977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.573216696054174, 2);
  sqcRYGate(q, 2.2134213127520788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5454995900708939, 3);
  sqcRYGate(q, 1.5777087530731047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.004881823359949838, 3);
  sqcRYGate(q, -0.06579385184991046, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.761069876071227, 4);
  sqcRYGate(q, -2.729123239360051, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.044795226973155, 4);
  sqcRYGate(q, -2.7607612469030327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0584392926485324, 5);
  sqcRYGate(q, -2.214731006503924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.524486923167092, 5);
  sqcRYGate(q, 1.2616210631172375, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.526406372325493, 6);
  sqcRYGate(q, -1.542261468205096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.143483205197471, 6);
  sqcRYGate(q, 2.982576983355034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.04596463170652, 7);
  sqcRYGate(q, 2.9989636668871875, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.379025360356955, 7);
  sqcRYGate(q, 1.2471488943975049, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.055990074076677, 8);
  sqcRYGate(q, 2.961414431687111, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.06874353561720103, 8);
  sqcRYGate(q, -0.008277927712156519, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0624354006548056, 9);
  sqcRYGate(q, 1.5304587512687533, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.682594780986293, 9);
  sqcRYGate(q, 1.675238684366958, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5527184636371052, 10);
  sqcRYGate(q, 2.235479531609556, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3654293948151555, 10);
  sqcRYGate(q, -2.2483285599004557, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.761907332473963, 0);
  sqcRYGate(q, 0.2993234494563488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.803168110618623, 0);
  sqcRYGate(q, -1.1351976020334273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3880348044687914, 1);
  sqcRYGate(q, -2.008486799418427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7564622407770467, 1);
  sqcRYGate(q, -2.201704551280985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.843599801804586, 2);
  sqcRYGate(q, 1.7406573841773996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.808013849711096, 2);
  sqcRYGate(q, 1.91463838368841, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.037161917080179, 3);
  sqcRYGate(q, 1.3280666798761835, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5379776893033645, 3);
  sqcRYGate(q, 0.015620084000844692, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5412138838347882, 4);
  sqcRYGate(q, 3.0264073079553215, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.816548445705566, 4);
  sqcRYGate(q, 2.627068586204572, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0962788243774293, 5);
  sqcRYGate(q, 0.8573252329526229, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.138753065883676, 5);
  sqcRYGate(q, -1.5672545346401534, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1970737082935585, 6);
  sqcRYGate(q, 1.2657316975176567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1401880052422753, 6);
  sqcRYGate(q, 0.006815480793842766, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.141308563907783, 7);
  sqcRYGate(q, 2.5018050652385337, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8035143301826926, 7);
  sqcRYGate(q, -1.3993770237331127, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7957619355226401, 8);
  sqcRYGate(q, 1.488954954535819, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6522167294151755, 8);
  sqcRYGate(q, 0.09423602001676201, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.002890971406827929, 9);
  sqcRYGate(q, 1.5642208060642542, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5083330124843304, 9);
  sqcRYGate(q, 3.108722660430882, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8478963176123866, 10);
  sqcRYGate(q, 0.4103646108018719, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6120441365576264, 10);
  sqcRYGate(q, -3.0061668446393424, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.078978922075227, 0);
  sqcRYGate(q, 1.1403015936361043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8543244098449154, 0);
  sqcRYGate(q, -1.7167307709367172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6779671213369043, 1);
  sqcRYGate(q, 0.5693084528170375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.488757569887084, 1);
  sqcRYGate(q, 1.12036802363483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7830980311051768, 2);
  sqcRYGate(q, 0.16011004322604983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34087717706635257, 2);
  sqcRYGate(q, -1.60711482136661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.660258968259465, 3);
  sqcRYGate(q, -1.5438877158160376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.00901023138601326, 3);
  sqcRYGate(q, 0.8621505785837088, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.01621535844920441, 4);
  sqcRYGate(q, 1.658320709371473, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5820451946350427, 4);
  sqcRYGate(q, -3.084513728431658, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0972238777823082, 5);
  sqcRYGate(q, -2.8769660586630486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5638808817639545, 5);
  sqcRYGate(q, 0.8143573725834887, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5699499998666253, 6);
  sqcRYGate(q, -0.27527934512893193, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5924051796152705, 6);
  sqcRYGate(q, 2.5335768512025747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.570206141627028, 7);
  sqcRYGate(q, -2.4153347508674132, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5851017869210506, 7);
  sqcRYGate(q, 0.5737855582898522, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.04368545439665272, 8);
  sqcRYGate(q, 3.1366607803765727, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.552764071020885, 8);
  sqcRYGate(q, -1.5490555183289523, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.020233219008788, 9);
  sqcRYGate(q, -2.92297057778874, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0022776010059468417, 9);
  sqcRYGate(q, 0.026125732168082116, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0145190522315066, 10);
  sqcRYGate(q, 1.2732316614429289, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0267011420310705, 10);
  sqcRYGate(q, 0.5888338807050716, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6264597313347755, 0);
  sqcRYGate(q, -1.719457686801439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2513719126762424, 0);
  sqcRYGate(q, 0.2951008376766442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6084619401453146, 1);
  sqcRYGate(q, 1.3492096355682561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.037342164700367, 1);
  sqcRYGate(q, -0.13965143392214252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.952185802095789, 2);
  sqcRYGate(q, -2.2581549288415736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0896767083974215, 2);
  sqcRYGate(q, 1.0103431331318227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7478865789938682, 3);
  sqcRYGate(q, -1.6941784671122035, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.003485616033578123, 3);
  sqcRYGate(q, 3.0818850441823327, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13401898746291385, 4);
  sqcRYGate(q, -1.2006859182523648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.140919906475078, 4);
  sqcRYGate(q, -1.9727986203534047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1849813818910728, 5);
  sqcRYGate(q, -3.067169964556636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5757092364986462, 5);
  sqcRYGate(q, -1.5283632481799918, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.887811579015895, 6);
  sqcRYGate(q, -0.010983593442532878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.050165227310021265, 6);
  sqcRYGate(q, -0.004969179581553328, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6100436542326089, 7);
  sqcRYGate(q, -2.9095563223152854, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7480106823476698, 7);
  sqcRYGate(q, -3.0812967737347723, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5706907167272983, 8);
  sqcRYGate(q, 2.9967277526041536, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.071466666356366, 8);
  sqcRYGate(q, 1.5317426698545098, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.593620599734808, 9);
  sqcRYGate(q, 0.5981124474941693, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.01337972226288908, 9);
  sqcRYGate(q, 2.481169601516396, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2893506315539454, 10);
  sqcRYGate(q, 2.48055815625887, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1299227103165865, 10);
  sqcRYGate(q, -3.0009912664326124, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.03834504031238506, 0);
  sqcRYGate(q, -2.662744325051691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0951248376423957, 0);
  sqcRYGate(q, -0.00035060646708195975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01753846483944699, 1);
  sqcRYGate(q, 1.5480447500589003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0996764887700392, 1);
  sqcRYGate(q, 3.085069017659133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.864299547488285, 2);
  sqcRYGate(q, 1.6347819210684726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5075057233419016, 2);
  sqcRYGate(q, -1.4649997001731245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.181982071157639, 3);
  sqcRYGate(q, 1.6134338894613718, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.39819669244714456, 3);
  sqcRYGate(q, -0.0001351459259986143, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.11009073325647, 4);
  sqcRYGate(q, 1.2976870144031496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.006114694916925197, 4);
  sqcRYGate(q, -3.0943976384092102, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5908021778622117, 5);
  sqcRYGate(q, 0.27899643586703693, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4993784662446246, 5);
  sqcRYGate(q, 1.5310077994336286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.139181011313978, 6);
  sqcRYGate(q, -1.5538174141054348, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1217437716043075, 6);
  sqcRYGate(q, -1.6579099457682187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.012082552497069797, 7);
  sqcRYGate(q, -1.410998563790947, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7504871525714032, 7);
  sqcRYGate(q, -0.6338700667068369, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0016789217210373408, 8);
  sqcRYGate(q, -0.25633335910655924, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.130880284315297, 8);
  sqcRYGate(q, 1.378464179362136, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.25831746240772485, 9);
  sqcRYGate(q, -1.5429233442005597, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5574633135372782, 9);
  sqcRYGate(q, -1.3120136059727197, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.577643175920356, 10);
  sqcRYGate(q, -2.1095497796268496, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5660654404959595, 10);
  sqcRYGate(q, -1.3810948325079613, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.257574810490847, 0);
  sqcRYGate(q, -2.2157880052100074, 1);
  sqcRYGate(q, -2.6000810513856716, 2);
  sqcRYGate(q, 0.7233715997656209, 3);
  sqcRYGate(q, -3.1059995479790157, 4);
  sqcRYGate(q, 3.120635498110901, 5);
  sqcRYGate(q, -1.5728335849596164, 6);
  sqcRYGate(q, -1.5700833168396793, 7);
  sqcRYGate(q, -1.5697949785825793, 8);
  sqcRYGate(q, -1.5707456972692053, 9);
  sqcRYGate(q, -1.5699955025747325, 10);
  sqcRYGate(q, 1.5824238385175367, 11);

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
