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

  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8051078836121965, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.6849598472687957, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0597395943927129, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.42351332305503786, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6128120436473032, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03684190600678069, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.31495406189600755, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.18750070876259867, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.00860125049527171, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.30175448957269513, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.3685504374596328, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.033584442126657996, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.177848144021733, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.25051484178500244, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.07202926601672927, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, -0.5735150312904217, 0);
  sqcRZGate(q, -0.18872071984366454, 0);
  sqcRXGate(q, 0.0029441099080362246, 1);
  sqcRZGate(q, 0.15654793054800825, 1);
  sqcRXGate(q, 0.5479215785793287, 2);
  sqcRZGate(q, -0.0812149729287965, 2);
  sqcRXGate(q, -0.1432475759781998, 3);
  sqcRZGate(q, 0.03680613430284237, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5769265831229756, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5403893988892716, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.22763606629578756, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7712198065299853, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.1741164327911395, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2005593623013622, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2224746932103771, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1442934260191433, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0876009150277846, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.57992460543902, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.6948151678984535, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.1366750864494388, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.003002645193859494, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.07813020065384718, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.07549668257904246, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, -0.127898012610726, 0);
  sqcRZGate(q, -0.319892044516964, 0);
  sqcRXGate(q, -0.49398053198652975, 1);
  sqcRZGate(q, 0.14531125896298358, 1);
  sqcRXGate(q, 0.49238338880561133, 2);
  sqcRZGate(q, 0.01151666985467369, 2);
  sqcRXGate(q, 0.000792177738104593, 3);
  sqcRZGate(q, -0.013657942488371435, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4443194965312391, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3368585117133592, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07317270037099217, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.921809806353315, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.2695629804958721, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0661770160211874, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.10977289102898685, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06932456566307649, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07365800092271316, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.8181525340738501, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.7677044844933169, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.02030043224719126, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.2569685694831544, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.1488300055524017, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.2821354017882628, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.24659124617923506, 0);
  sqcRZGate(q, -0.28234432580266094, 0);
  sqcRXGate(q, -0.46694513769026624, 1);
  sqcRZGate(q, 0.19166742935902292, 1);
  sqcRXGate(q, 0.43070405667264955, 2);
  sqcRZGate(q, 0.3082551050606999, 2);
  sqcRXGate(q, 0.15745770235446294, 3);
  sqcRZGate(q, -0.07366536040040077, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1760954946102315, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.16129253773266156, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.11054030058861244, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.8878074000321868, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.153581183944554, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.03644405860224994, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.11395438816557228, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.35781205162528695, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.22331292589528848, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.7824965157543123, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.7990909101589656, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.0944789704007723, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.36484650843020777, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.3910083462497227, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.19525221449853128, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.541027772086279, 0);
  sqcRZGate(q, -0.13342638827812575, 0);
  sqcRXGate(q, -0.5179744872524141, 1);
  sqcRZGate(q, 0.06677660491290456, 1);
  sqcRXGate(q, -0.13778678907646744, 2);
  sqcRZGate(q, 0.15776488715384368, 2);
  sqcRXGate(q, 0.28303076090262114, 3);
  sqcRZGate(q, -0.019127980794255643, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3215350232362775, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.05760306510834747, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.14711067953732124, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7969028172557684, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.9125833665451719, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.004344563420623456, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.39731803863941584, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6360278431043419, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07151844862604445, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.6721645325340373, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.8185103379598103, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.15299653238079244, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.20294945623318436, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.30740880106100316, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.24352935174303048, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.3985884816137151, 0);
  sqcRZGate(q, -0.2747639057118297, 0);
  sqcRXGate(q, -0.5992000154837301, 1);
  sqcRZGate(q, 0.09437957523277567, 1);
  sqcRXGate(q, -0.02085792914500292, 2);
  sqcRZGate(q, 0.3995939541926878, 2);
  sqcRXGate(q, 0.35887731091555264, 3);
  sqcRZGate(q, 0.005588015878032477, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.02682609537831132, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.40271674183837936, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2959134903662529, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5416045472634368, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6647783751113964, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.07452164290342671, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.46702006066813506, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9162790075601049, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0702598226835384, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.3947000549801556, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.7242386929961386, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.10725307019864645, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.2722856312313134, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.3545354752988915, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.1260304702994852, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.4544052360094863, 0);
  sqcRZGate(q, -0.26833603435476433, 0);
  sqcRXGate(q, -0.5733414547725255, 1);
  sqcRZGate(q, 0.2939679608489234, 1);
  sqcRXGate(q, 0.04717484743512698, 2);
  sqcRZGate(q, 0.23923069068926628, 2);
  sqcRXGate(q, 0.4016658634229513, 3);
  sqcRZGate(q, 0.034411761603888896, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3490998496273665, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6197394905687678, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.38602900879088375, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3697462361688253, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6088396506030274, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.08778807274526444, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.6250319782751481, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9442831110170727, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.009087922757658623, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.36541547776371536, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.36596558459201217, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.3598039969519544, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.41163879043415963, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.31272686283635004, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.26292949245744823, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.7233534809023049, 0);
  sqcRZGate(q, -0.17788426704747978, 0);
  sqcRXGate(q, -0.6986895486557865, 1);
  sqcRZGate(q, 0.055180293856185836, 1);
  sqcRXGate(q, -0.2849178805624038, 2);
  sqcRZGate(q, 0.18571573162569713, 2);
  sqcRXGate(q, 0.416878160384388, 3);
  sqcRZGate(q, 0.1646401798624057, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3591682250614576, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4809146551480245, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1602659470178451, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.03798947619508073, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.24539270459899118, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.1553479486374736, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.7480203425078304, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9403521853648432, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.13974420474788138, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.15559105674103488, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.16196890866969177, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.17572289251872908, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.5035988168248666, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.36353166882407245, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.14742602294439466, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.7036806541726497, 0);
  sqcRZGate(q, -0.2943364867159582, 0);
  sqcRXGate(q, -0.646782296061634, 1);
  sqcRZGate(q, -0.24123475837778613, 1);
  sqcRXGate(q, -0.39810919879921236, 2);
  sqcRZGate(q, 0.2544851056867449, 2);
  sqcRXGate(q, 0.1844239039535363, 3);
  sqcRZGate(q, 0.17494554746614033, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3037180393045822, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5848267645197511, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.419932026556474, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13639737350002373, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.17975002559235356, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.12538894398371023, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.8511100037741388, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.2207158342451871, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07989004482506554, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.22450355609181227, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.09257356149545362, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.304454954058792, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.4553110514225059, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.4719117746670681, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.08623823584564971, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.6825911257232261, 0);
  sqcRZGate(q, -0.13497690552000977, 0);
  sqcRXGate(q, -0.40740841214453877, 1);
  sqcRZGate(q, -0.21240881331342892, 1);
  sqcRXGate(q, -0.5007974599305974, 2);
  sqcRZGate(q, 0.2841833471650433, 2);
  sqcRXGate(q, 0.22681312161538092, 3);
  sqcRZGate(q, 0.20610661281244563, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.45846549339335424, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.7306551301569805, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4589434857672397, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2709146531328301, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.46205944659592113, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.05380452337707785, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.6997900635032354, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.0924805081300404, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.08345431640385881, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.07275771481781426, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.038592096752058956, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.41197473140845337, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.4910405296341274, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.3463542182006809, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.10593853088184714, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.4828010705722396, 0);
  sqcRZGate(q, -0.007808932743199447, 0);
  sqcRXGate(q, -0.2642086190353391, 1);
  sqcRZGate(q, -0.34287308614667633, 1);
  sqcRXGate(q, -0.5206247688023485, 2);
  sqcRZGate(q, 0.19434840557207164, 2);
  sqcRXGate(q, 0.24885734815374333, 3);
  sqcRZGate(q, 0.22088805195170994, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.582866057325343, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.553774477866567, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5795831272095685, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6659876454741559, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.4431420177814221, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.12106116984344287, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.5241297225278985, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.0181116248978856, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.10226879692889784, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.1637110848927032, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.27632846490364216, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.2528657515751154, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.19072424716770064, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.32106807458351283, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.058706953696054553, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.5189925036230023, 0);
  sqcRZGate(q, -0.01668900810483508, 0);
  sqcRXGate(q, -0.24675657840306264, 1);
  sqcRZGate(q, -0.4670418641113639, 1);
  sqcRXGate(q, -0.5705325335485071, 2);
  sqcRZGate(q, 0.006965992700635117, 2);
  sqcRXGate(q, 0.109414812901299, 3);
  sqcRZGate(q, 0.20606235909104736, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3771422495634325, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.14077972021855162, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5936347675820615, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.557958086936797, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.4493243215343429, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06436060500946623, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.01748285530400579, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5070887732233127, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1609973419851169, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.17507882559499316, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.4594931711348749, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.032430682256197815, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.06821865473785885, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.200317687146643, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.1380987661812653, 3);
  sqcCXGate(q, 1, 3);
  sqcRXGate(q, 0.655825450657347, 0);
  sqcRZGate(q, -0.02043113724873099, 0);
  sqcRXGate(q, -0.2763861153315534, 1);
  sqcRZGate(q, -0.5861923028957526, 1);
  sqcRXGate(q, -0.6545577365647794, 2);
  sqcRZGate(q, 0.008356684191134571, 2);
  sqcRXGate(q, 0.0041793930343176355, 3);
  sqcRZGate(q, 0.38279906542811987, 3);

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
