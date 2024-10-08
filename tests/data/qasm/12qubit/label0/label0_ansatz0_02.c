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
  q = sqcQuantumCircuit(12);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0034644185207955295, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0850273452810512, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.006100593130922314, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.00033290078343973216, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.05623599309338077, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.079925029264773, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07724130108070706, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.011083463993513695, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.06853914721438797, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.03431424902823415, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.026111341531064508, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4132726281346608, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.029395806971826, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.7208902397531167, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.5665872615505365, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.578103800124945, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.5994399126591385, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.6248660214033952, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.5700456151263424, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.7230196759621773, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -3.1414240588012623, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5555997987765894, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.05903352974266876, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.3078604811374011, 0);
  sqcRZGate(q, 0.6674243199714498, 1);
  sqcRZGate(q, 0.7447006947120303, 2);
  sqcRZGate(q, -1.5688672208879584, 3);
  sqcRZGate(q, -1.5264118695104176, 4);
  sqcRZGate(q, 1.562384867502514, 5);
  sqcRZGate(q, -1.4854519120418743, 6);
  sqcRZGate(q, -1.1222866150243438, 7);
  sqcRZGate(q, -0.8553393656866296, 8);
  sqcRZGate(q, -0.3639485286521634, 9);
  sqcRZGate(q, -0.5526751029792794, 10);
  sqcRZGate(q, -1.0551622717955917, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5299729199314215, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.1930436089395546, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.10027697660711955, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.4367059577613555, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.6823898684517035, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2038417912672898, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.2529916579325943, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.5532204762932433, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.0762949144659693, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.6416908083399092, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6564541277460882, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.1115847180923946, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -2.2191651940406225, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.01197246770076727, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9225486329790259, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.28834703940959844, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.9580299788767934, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.27774442260948395, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.0798439578830201, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 1.1673247696917237, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 1.5938227308060895, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.8338590807912849, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.41193313527027864, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.1153968436526996, 0);
  sqcRZGate(q, 0.1963105595101932, 1);
  sqcRZGate(q, -0.044131785594387005, 2);
  sqcRZGate(q, 0.05153029525352089, 3);
  sqcRZGate(q, -0.024042720808686985, 4);
  sqcRZGate(q, 0.0061317950665110655, 5);
  sqcRZGate(q, -0.07977762014721469, 6);
  sqcRZGate(q, -0.0017756287791778442, 7);
  sqcRZGate(q, -1.0805805491345766, 8);
  sqcRZGate(q, -1.4203002755966192, 9);
  sqcRZGate(q, 1.3192851651348099, 10);
  sqcRZGate(q, -0.7275436262372146, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5389511118842097, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2046700568795338, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.27866862293146477, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.5784567431862497, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.14194411090403167, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.44703451932698496, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.911805530591049, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.6723790311143232, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.5203860162247107, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.7867473039024077, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.01206633202148247, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2613548413544438, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.7557271730741195, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9172418690333138, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.22043857496012995, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.09803178841830265, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.6979359558139963, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.7717960710829814, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.44418847207262063, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.8108450269344543, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.11260940094470086, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -2.6571970959897797, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.7334411360700872, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5185876702324855, 0);
  sqcRZGate(q, -1.0814682103515, 1);
  sqcRZGate(q, -0.0024186125376713034, 2);
  sqcRZGate(q, -0.002108772655860084, 3);
  sqcRZGate(q, 0.008499210137280533, 4);
  sqcRZGate(q, 0.007889877995528028, 5);
  sqcRZGate(q, 0.013253241426782292, 6);
  sqcRZGate(q, 0.0008327402807905803, 7);
  sqcRZGate(q, 0.0020687434465263012, 8);
  sqcRZGate(q, 0.0021879095692967612, 9);
  sqcRZGate(q, 1.574283903995732, 10);
  sqcRZGate(q, 0.7285033074605363, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5828157593929144, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.2385967005281535, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.08903469527295797, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.12440762154493765, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8939851680144978, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.12138606557007862, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.37080677980540555, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.24609477989025597, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.25933744505068335, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.7365562746511352, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 2.0242237454527987, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.8787842997866326, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -2.47534241537858, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7121782059137088, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.12018845323052106, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.2725003559333513, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.3653019104565398, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -2.1389791425549247, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.6012689857685739, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.7585275738541395, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.2847539750493127, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -1.4969200656417287, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.5076367105916909, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 1.7626731261409734, 0);
  sqcRZGate(q, 0.3139242705423132, 1);
  sqcRZGate(q, 0.645673335592814, 2);
  sqcRZGate(q, 0.06873536976331995, 3);
  sqcRZGate(q, 0.6535069230081959, 4);
  sqcRZGate(q, 1.5982068348060463, 5);
  sqcRZGate(q, 0.020093275564480494, 6);
  sqcRZGate(q, -0.001862702201765496, 7);
  sqcRZGate(q, 0.00472975094756869, 8);
  sqcRZGate(q, 0.0008388299546174361, 9);
  sqcRZGate(q, 0.052654053188678614, 10);
  sqcRZGate(q, 0.3526331617202412, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.49267384460888225, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6561338815035044, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.19307776965292842, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.33017184089672674, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.1089307514962516, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.13809817959464826, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.5545891763334743, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.6475282834441896, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.25666480550005166, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 3.118529386455907, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.3355615747973837, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.5290529728855422, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 3.1387313925299893, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.0005241632125974013, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.21262711721513095, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 3.121039052986735, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 3.13690921846532, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -1.7476456129984514, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.0030466776510236, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.5341391723355033, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.36262746926414535, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -1.7842631948786782, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.1280635373746528, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.6720071455687878, 0);
  sqcRZGate(q, 0.30133384808103236, 1);
  sqcRZGate(q, 2.5062074594931194, 2);
  sqcRZGate(q, -0.08784958697679823, 3);
  sqcRZGate(q, 0.6576765863492332, 4);
  sqcRZGate(q, -1.562773199328235, 5);
  sqcRZGate(q, 0.042780898424131034, 6);
  sqcRZGate(q, 0.004448424156368437, 7);
  sqcRZGate(q, 0.014888386040510118, 8);
  sqcRZGate(q, 0.0010890704106233714, 9);
  sqcRZGate(q, -0.01267111216791068, 10);
  sqcRZGate(q, 1.2075155886582827, 11);

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
