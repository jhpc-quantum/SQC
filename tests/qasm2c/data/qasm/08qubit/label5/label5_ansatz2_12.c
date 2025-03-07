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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.650696968907822, 0);
  sqcRZGate(q, -1.5619544870411692, 0);
  sqcRYGate(q, 1.161362151354178, 1);
  sqcRZGate(q, 0.5033152579998915, 1);
  sqcRYGate(q, 2.7985021051196837, 2);
  sqcRZGate(q, 1.1893225788954158, 2);
  sqcRYGate(q, 0.20988119403348984, 3);
  sqcRZGate(q, 0.10138297286707498, 3);
  sqcRYGate(q, -1.8379203740543197, 4);
  sqcRZGate(q, -2.166946795667558, 4);
  sqcRYGate(q, 2.8616073963689614, 5);
  sqcRZGate(q, 1.898512307730459, 5);
  sqcRYGate(q, -2.115632736501241, 6);
  sqcRZGate(q, -3.0092482069957893, 6);
  sqcRYGate(q, -3.089038836146046, 7);
  sqcRZGate(q, -0.17651767020371278, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.2551962575265145, 0);
  sqcRZGate(q, 3.0877765584579553, 0);
  sqcRYGate(q, 1.5748871434774394, 1);
  sqcRZGate(q, -1.7610324344345487, 1);
  sqcRYGate(q, -2.2330036021873023, 2);
  sqcRZGate(q, 3.134960163635519, 2);
  sqcRYGate(q, -2.043944913657052, 3);
  sqcRZGate(q, 1.3472807527064123, 3);
  sqcRYGate(q, -0.2627730748830457, 4);
  sqcRZGate(q, 2.7355959997109096, 4);
  sqcRYGate(q, 1.9506959319587076, 5);
  sqcRZGate(q, 0.8970676919312339, 5);
  sqcRYGate(q, 0.08845981636175457, 6);
  sqcRZGate(q, -0.988946000882881, 6);
  sqcRYGate(q, -0.9229500249892546, 7);
  sqcRZGate(q, -2.788185333282361, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.846880920037598, 0);
  sqcRZGate(q, -2.9944760289782297, 0);
  sqcRYGate(q, 1.453339854106187, 1);
  sqcRZGate(q, 0.3286327916163616, 1);
  sqcRYGate(q, -2.2930533299904856, 2);
  sqcRZGate(q, 1.9555681910024043, 2);
  sqcRYGate(q, 1.556299727670928, 3);
  sqcRZGate(q, 0.891264276971688, 3);
  sqcRYGate(q, -2.4135727487613288, 4);
  sqcRZGate(q, 3.0645708175956807, 4);
  sqcRYGate(q, 0.5258844644964542, 5);
  sqcRZGate(q, 2.960187749104552, 5);
  sqcRYGate(q, 2.5006069837304743, 6);
  sqcRZGate(q, 1.6061940105931984, 6);
  sqcRYGate(q, 1.2759906727853352, 7);
  sqcRZGate(q, -1.793924179890934, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7058980281461178, 0);
  sqcRZGate(q, 0.07908671154675684, 0);
  sqcRYGate(q, -2.992245309394343, 1);
  sqcRZGate(q, 1.623254534728088, 1);
  sqcRYGate(q, -0.7487655820687351, 2);
  sqcRZGate(q, 0.044650395529442985, 2);
  sqcRYGate(q, -2.919186737226364, 3);
  sqcRZGate(q, -1.9197434329905159, 3);
  sqcRYGate(q, -1.9861483429220295, 4);
  sqcRZGate(q, 0.16261059963357638, 4);
  sqcRYGate(q, 1.9523559974055282, 5);
  sqcRZGate(q, 1.8802924952554108, 5);
  sqcRYGate(q, 1.861685066118027, 6);
  sqcRZGate(q, 0.11339680490874748, 6);
  sqcRYGate(q, 0.8575927029961953, 7);
  sqcRZGate(q, 0.506572870310403, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6631966554153437, 0);
  sqcRZGate(q, -1.710577008509218, 0);
  sqcRYGate(q, -0.7673908346043206, 1);
  sqcRZGate(q, 2.183392581606058, 1);
  sqcRYGate(q, 1.6371793924264226, 2);
  sqcRZGate(q, 1.1436844487614923, 2);
  sqcRYGate(q, -0.3555113309686713, 3);
  sqcRZGate(q, 1.5021979750029455, 3);
  sqcRYGate(q, -2.9553269669975624, 4);
  sqcRZGate(q, 1.6637161322533034, 4);
  sqcRYGate(q, -1.4692365428579206, 5);
  sqcRZGate(q, 0.6972648810849079, 5);
  sqcRYGate(q, -1.727825396524211, 6);
  sqcRZGate(q, -1.214551283244314, 6);
  sqcRYGate(q, 0.36458078540170735, 7);
  sqcRZGate(q, 2.6747812023528588, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.522922119088655, 0);
  sqcRZGate(q, 2.712219476727817, 0);
  sqcRYGate(q, -0.9150511131671522, 1);
  sqcRZGate(q, 2.047338031416748, 1);
  sqcRYGate(q, -2.7988175386037684, 2);
  sqcRZGate(q, 2.0708210840294576, 2);
  sqcRYGate(q, 1.7073606073304608, 3);
  sqcRZGate(q, 1.421812347745937, 3);
  sqcRYGate(q, -0.41256922134004, 4);
  sqcRZGate(q, -1.3833149262358966, 4);
  sqcRYGate(q, 1.3589872118323465, 5);
  sqcRZGate(q, -2.7716869418276557, 5);
  sqcRYGate(q, 0.41631493095594596, 6);
  sqcRZGate(q, -2.756666469216669, 6);
  sqcRYGate(q, 2.5183390601139592, 7);
  sqcRZGate(q, 0.5145295599403764, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.284370401225156, 0);
  sqcRZGate(q, 0.9530533714017179, 0);
  sqcRYGate(q, 2.5246762748122467, 1);
  sqcRZGate(q, -1.720415094518172, 1);
  sqcRYGate(q, -2.942459289774914, 2);
  sqcRZGate(q, -1.5827484463846409, 2);
  sqcRYGate(q, -1.5402496487511306, 3);
  sqcRZGate(q, -2.984095188036674, 3);
  sqcRYGate(q, 0.1891494320257534, 4);
  sqcRZGate(q, 0.052057670745043916, 4);
  sqcRYGate(q, -1.5749849196581858, 5);
  sqcRZGate(q, 3.0762916149054575, 5);
  sqcRYGate(q, -0.6509155885701183, 6);
  sqcRZGate(q, 1.8530204859910218, 6);
  sqcRYGate(q, -1.5752433741488217, 7);
  sqcRZGate(q, -0.02023728140581524, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.210092219001881, 0);
  sqcRZGate(q, 1.7194842830510808, 0);
  sqcRYGate(q, 2.5139908877396357, 1);
  sqcRZGate(q, -2.251170937076205, 1);
  sqcRYGate(q, 1.6077465568189055, 2);
  sqcRZGate(q, 2.8842198139727833, 2);
  sqcRYGate(q, -0.15415386457937252, 3);
  sqcRZGate(q, -1.3375719882988073, 3);
  sqcRYGate(q, -2.612399595230983, 4);
  sqcRZGate(q, 2.9394701113296433, 4);
  sqcRYGate(q, 2.2472074283007633, 5);
  sqcRZGate(q, -0.5423360960410655, 5);
  sqcRYGate(q, 1.231047021316141, 6);
  sqcRZGate(q, -1.7064486642044217, 6);
  sqcRYGate(q, -0.6934411811999013, 7);
  sqcRZGate(q, -2.1291494109853626, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.028828039129773, 0);
  sqcRZGate(q, -2.321561592282765, 0);
  sqcRYGate(q, 1.6687025039894163, 1);
  sqcRZGate(q, -1.801045335298605, 1);
  sqcRYGate(q, -1.1241199669566102, 2);
  sqcRZGate(q, 2.904225436375046, 2);
  sqcRYGate(q, 0.24791201580830968, 3);
  sqcRZGate(q, 2.6379813040412827, 3);
  sqcRYGate(q, 2.604665347555877, 4);
  sqcRZGate(q, -1.7809870332662858, 4);
  sqcRYGate(q, -1.4194393786575024, 5);
  sqcRZGate(q, 2.476720870449668, 5);
  sqcRYGate(q, -0.7685213978202657, 6);
  sqcRZGate(q, -0.07982133672224179, 6);
  sqcRYGate(q, 1.918308280159378, 7);
  sqcRZGate(q, 2.5453985796806298, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6549103296110257, 0);
  sqcRZGate(q, 2.9134058303761172, 0);
  sqcRYGate(q, 2.2536334293753004, 1);
  sqcRZGate(q, 0.8961881635866833, 1);
  sqcRYGate(q, 2.5205145510324347, 2);
  sqcRZGate(q, 0.788915068489846, 2);
  sqcRYGate(q, -2.461311309284753, 3);
  sqcRZGate(q, 2.105759384476805, 3);
  sqcRYGate(q, 2.1138922793190535, 4);
  sqcRZGate(q, 2.3232853321429796, 4);
  sqcRYGate(q, -0.4141070161429171, 5);
  sqcRZGate(q, 2.8895685383071115, 5);
  sqcRYGate(q, 2.703929488978026, 6);
  sqcRZGate(q, -2.7978371072534203, 6);
  sqcRYGate(q, 0.674962393946636, 7);
  sqcRZGate(q, 0.47318207308856824, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.522644835640156, 0);
  sqcRZGate(q, -0.5328660711880735, 0);
  sqcRYGate(q, 1.2026497181074447, 1);
  sqcRZGate(q, -0.03815024931185196, 1);
  sqcRYGate(q, 2.578489885214758, 2);
  sqcRZGate(q, -2.4133664038795195, 2);
  sqcRYGate(q, 0.8386967396250729, 3);
  sqcRZGate(q, -1.462634893689997, 3);
  sqcRYGate(q, 1.92525926984896, 4);
  sqcRZGate(q, 0.6378707569602418, 4);
  sqcRYGate(q, 2.1408165099352416, 5);
  sqcRZGate(q, 0.6363142728428944, 5);
  sqcRYGate(q, 1.595430783522393, 6);
  sqcRZGate(q, 0.6211735412092914, 6);
  sqcRYGate(q, 1.0023173179277378, 7);
  sqcRZGate(q, 0.520701993218049, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.360220403123658, 0);
  sqcRZGate(q, -2.9199849806094647, 0);
  sqcRYGate(q, -1.6151008855148392, 1);
  sqcRZGate(q, 0.8635094268579274, 1);
  sqcRYGate(q, 2.3230850873644586, 2);
  sqcRZGate(q, -2.9563489732128834, 2);
  sqcRYGate(q, 0.03155793988986221, 3);
  sqcRZGate(q, 0.5391209348137463, 3);
  sqcRYGate(q, 0.7816466680898433, 4);
  sqcRZGate(q, -1.3518235433168648, 4);
  sqcRYGate(q, 1.625610279076164, 5);
  sqcRZGate(q, 1.1344007801137959, 5);
  sqcRYGate(q, 0.5626690536723121, 6);
  sqcRZGate(q, 3.0323245477297114, 6);
  sqcRYGate(q, 2.5377829480582323, 7);
  sqcRZGate(q, 0.5773273809025179, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.766514603391987, 0);
  sqcRZGate(q, -1.065281288059289, 0);
  sqcRYGate(q, -0.09972787519188958, 1);
  sqcRZGate(q, 0.39005052828999803, 1);
  sqcRYGate(q, 1.7795875907725227, 2);
  sqcRZGate(q, -1.1531929192674466, 2);
  sqcRYGate(q, 1.6599895965697475, 3);
  sqcRZGate(q, 2.3560362531129124, 3);
  sqcRYGate(q, -2.7361730672242004, 4);
  sqcRZGate(q, -1.8609114873789743, 4);
  sqcRYGate(q, -2.4246008323191597, 5);
  sqcRZGate(q, 0.4794409496498675, 5);
  sqcRYGate(q, 0.8412856502053899, 6);
  sqcRZGate(q, -0.7411160130979466, 6);
  sqcRYGate(q, 1.4136583365266238, 7);
  sqcRZGate(q, 1.6953400326043635, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.8897004126599635, 0);
  sqcRZGate(q, 2.8601261959115334, 0);
  sqcRYGate(q, 2.3666797322355624, 1);
  sqcRZGate(q, 2.6295090686280598, 1);
  sqcRYGate(q, 0.6013434711801039, 2);
  sqcRZGate(q, -2.416570356644565, 2);
  sqcRYGate(q, -1.4496801876430263, 3);
  sqcRZGate(q, 2.039509206472216, 3);
  sqcRYGate(q, 2.7315651476861222, 4);
  sqcRZGate(q, 2.7694527993378073, 4);
  sqcRYGate(q, 2.264656627596895, 5);
  sqcRZGate(q, 0.16570679530396856, 5);
  sqcRYGate(q, -2.7159249962421255, 6);
  sqcRZGate(q, -0.1644999342030324, 6);
  sqcRYGate(q, -0.8500486239184555, 7);
  sqcRZGate(q, 1.8120342050937996, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.18965261155541996, 0);
  sqcRZGate(q, -1.4524082891046186, 0);
  sqcRYGate(q, 1.4126895569276865, 1);
  sqcRZGate(q, -2.2778453593962427, 1);
  sqcRYGate(q, 0.8870769052280707, 2);
  sqcRZGate(q, -0.133288285854801, 2);
  sqcRYGate(q, -1.050384157376264, 3);
  sqcRZGate(q, -2.4378252090536736, 3);
  sqcRYGate(q, 0.7767377377906044, 4);
  sqcRZGate(q, 3.1396949122094733, 4);
  sqcRYGate(q, -2.725066103625782, 5);
  sqcRZGate(q, -0.9083300445368544, 5);
  sqcRYGate(q, 2.125896678813453, 6);
  sqcRZGate(q, -0.08358334953794877, 6);
  sqcRYGate(q, 0.3910855719434796, 7);
  sqcRZGate(q, -1.7761716257807136, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.08985178618615208, 0);
  sqcRZGate(q, 0.7828642992846986, 0);
  sqcRYGate(q, 2.3991720149312865, 1);
  sqcRZGate(q, -2.154902180047896, 1);
  sqcRYGate(q, 0.21831331899636844, 2);
  sqcRZGate(q, 2.9688712890198907, 2);
  sqcRYGate(q, 0.4618693860360503, 3);
  sqcRZGate(q, -1.584771038659414, 3);
  sqcRYGate(q, 0.8830445121157275, 4);
  sqcRZGate(q, -1.3980286773166606, 4);
  sqcRYGate(q, 1.3088145905155733, 5);
  sqcRZGate(q, 2.5893155325747266, 5);
  sqcRYGate(q, 1.2435656845706207, 6);
  sqcRZGate(q, 2.859064416331276, 6);
  sqcRYGate(q, -1.1232008422682977, 7);
  sqcRZGate(q, 2.8995428811452904, 7);

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
