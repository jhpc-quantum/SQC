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

  sqcRYGate(q, -0.6489720084292958, 0);
  sqcRZGate(q, -2.328074947981548, 0);
  sqcRYGate(q, 3.1415909777968416, 1);
  sqcRZGate(q, 1.2288402373500353, 1);
  sqcRYGate(q, -1.57733821136176, 2);
  sqcRZGate(q, -3.126077818977498, 2);
  sqcRYGate(q, 3.134617897213038, 3);
  sqcRZGate(q, -1.6631210671582384, 3);
  sqcRYGate(q, -1.256742171968558, 4);
  sqcRZGate(q, -0.45665196476935854, 4);
  sqcRYGate(q, -3.1415923014937444, 5);
  sqcRZGate(q, -1.4245388420708414, 5);
  sqcRYGate(q, -1.570785160327656, 6);
  sqcRZGate(q, 2.719346254125477, 6);
  sqcRYGate(q, -3.0895531897806454, 7);
  sqcRZGate(q, 1.570765581036957, 7);
  sqcRYGate(q, -1.5707798497921146, 8);
  sqcRZGate(q, 4.997627662489455e-06, 8);
  sqcRYGate(q, -3.1415816735890942, 9);
  sqcRZGate(q, -3.0435706431281284, 9);
  sqcRYGate(q, 1.574748533329708, 10);
  sqcRZGate(q, -2.84599157039305, 10);
  sqcRYGate(q, 3.123181829211259, 11);
  sqcRZGate(q, 1.5711788431152367, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.141356674521014, 0);
  sqcRZGate(q, -2.222406366398343, 0);
  sqcRYGate(q, -3.1415923664607903, 1);
  sqcRZGate(q, 0.9752313488815405, 1);
  sqcRYGate(q, -3.1410352905316263, 2);
  sqcRZGate(q, -1.5552785094844552, 2);
  sqcRYGate(q, 3.140105964522159, 3);
  sqcRZGate(q, -2.594917468475083, 3);
  sqcRYGate(q, -0.0008258139347268219, 4);
  sqcRZGate(q, -0.49968884000220143, 4);
  sqcRYGate(q, 3.141591973524159, 5);
  sqcRZGate(q, -1.3809191991686152, 5);
  sqcRYGate(q, -6.641990271924288e-09, 6);
  sqcRZGate(q, 1.993110328435809, 6);
  sqcRYGate(q, -2.7967559979654246, 7);
  sqcRZGate(q, -3.141586136940543, 7);
  sqcRYGate(q, 1.5719113332998955, 8);
  sqcRZGate(q, 2.3748564349177963, 8);
  sqcRYGate(q, -1.5707959965354141, 9);
  sqcRZGate(q, -0.45200233670210194, 9);
  sqcRYGate(q, 0.00025513682644545454, 10);
  sqcRZGate(q, 1.4012161783711659, 10);
  sqcRYGate(q, -1.9171140904306352, 11);
  sqcRZGate(q, 7.731471695155326e-06, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -2.1913730181566393e-06, 0);
  sqcRZGate(q, -0.11775136532861374, 0);
  sqcRYGate(q, -0.34580192678729293, 1);
  sqcRZGate(q, 1.3005365504525912e-06, 1);
  sqcRYGate(q, -1.572675318491699, 2);
  sqcRZGate(q, -1.570794535795945, 2);
  sqcRYGate(q, 2.733110378905223e-06, 3);
  sqcRZGate(q, 2.505717352232688, 3);
  sqcRYGate(q, 6.676680506245702e-07, 4);
  sqcRZGate(q, -0.5743744940369631, 4);
  sqcRYGate(q, 1.2247049710011462, 5);
  sqcRZGate(q, 2.8650174552780072e-06, 5);
  sqcRYGate(q, -1.563073638733389, 6);
  sqcRZGate(q, 1.0305058756116248, 6);
  sqcRYGate(q, 1.5708032201932465, 7);
  sqcRZGate(q, 2.495694499878544, 7);
  sqcRYGate(q, 0.013823724053118595, 8);
  sqcRZGate(q, -2.3874808128129166, 8);
  sqcRYGate(q, 1.7599505070656453e-05, 9);
  sqcRZGate(q, 0.17193982863473925, 9);
  sqcRYGate(q, -3.1415867722688313, 10);
  sqcRZGate(q, -1.444776492424856, 10);
  sqcRYGate(q, 1.57077916093756, 11);
  sqcRZGate(q, 1.6946732096652228, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.141527736492375, 0);
  sqcRZGate(q, -0.012081369214267388, 0);
  sqcRYGate(q, 1.5707964318808543, 1);
  sqcRZGate(q, -0.8538733342032767, 1);
  sqcRYGate(q, 1.5658569811968657, 2);
  sqcRZGate(q, -1.2520493662237711e-05, 2);
  sqcRYGate(q, 1.5011684414232611, 3);
  sqcRZGate(q, 6.72348288295194e-05, 3);
  sqcRYGate(q, 3.137685683072454, 4);
  sqcRZGate(q, -1.5307170441355995, 4);
  sqcRYGate(q, 1.5707919778873771, 5);
  sqcRZGate(q, -1.973355874716705, 5);
  sqcRYGate(q, 4.228946859363703e-06, 6);
  sqcRZGate(q, 0.8855345966350212, 6);
  sqcRYGate(q, 3.1415864260658117, 7);
  sqcRZGate(q, -1.9106202576304243, 7);
  sqcRYGate(q, -3.7579153152779156e-06, 8);
  sqcRZGate(q, 1.5834689580478911, 8);
  sqcRYGate(q, 2.5429933539452854e-07, 9);
  sqcRZGate(q, -0.16341745883360448, 9);
  sqcRYGate(q, 1.5759245142206195, 10);
  sqcRZGate(q, -1.9183673939924555, 10);
  sqcRYGate(q, -3.141591868228228, 11);
  sqcRZGate(q, -1.2268487212368757, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.570788025237306, 0);
  sqcRZGate(q, -1.5708132958286283, 0);
  sqcRYGate(q, -3.141520412863763, 1);
  sqcRZGate(q, -1.6592491106114065, 1);
  sqcRYGate(q, -1.5719729602015493, 2);
  sqcRZGate(q, 1.1550794589432816, 2);
  sqcRYGate(q, -1.5708464143892311, 3);
  sqcRZGate(q, -2.3837795157360846, 3);
  sqcRYGate(q, 1.570795930103723, 4);
  sqcRZGate(q, 1.5708073579165787, 4);
  sqcRYGate(q, 3.1415921167950005, 5);
  sqcRZGate(q, 2.6516267304599905, 5);
  sqcRYGate(q, 1.5946664669854596, 6);
  sqcRZGate(q, -1.6370751372456862, 6);
  sqcRYGate(q, -3.1415907845179176, 7);
  sqcRZGate(q, -2.5786594525541564, 7);
  sqcRYGate(q, 1.558325745095181, 8);
  sqcRZGate(q, 1.64296900418195, 8);
  sqcRYGate(q, 3.141592061259867, 9);
  sqcRZGate(q, 2.0475033715214264, 9);
  sqcRYGate(q, 1.6144550509858142, 10);
  sqcRZGate(q, -1.5866010219669513, 10);
  sqcRYGate(q, -3.1415914715203073, 11);
  sqcRZGate(q, -1.5295587717418913, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.6112664420278351, 0);
  sqcRZGate(q, -6.1993593938325375e-06, 0);
  sqcRYGate(q, 7.068813931532247e-06, 1);
  sqcRZGate(q, -1.3609566104890618, 1);
  sqcRYGate(q, 3.1415754321872766, 2);
  sqcRZGate(q, 2.737401794730844, 2);
  sqcRYGate(q, -3.1415915787851607, 3);
  sqcRZGate(q, 2.9280191927924637, 3);
  sqcRYGate(q, 1.8897099226563263, 4);
  sqcRZGate(q, -2.543661413710271e-06, 4);
  sqcRYGate(q, -3.1359183427781545e-06, 5);
  sqcRZGate(q, -2.071665354900404, 5);
  sqcRYGate(q, 1.5707988963925108, 6);
  sqcRZGate(q, -1.4880340508968235, 6);
  sqcRYGate(q, 4.4824396902149975e-06, 7);
  sqcRZGate(q, -0.4522980693501567, 7);
  sqcRYGate(q, -3.1415830670705645, 8);
  sqcRZGate(q, 1.943198136087493, 8);
  sqcRYGate(q, -3.141587689203231, 9);
  sqcRZGate(q, -0.8988885906364354, 9);
  sqcRYGate(q, -1.5708049411448297, 10);
  sqcRZGate(q, -1.3714979856957017, 10);
  sqcRYGate(q, -3.1415651569886953, 11);
  sqcRZGate(q, -2.293110967336491, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.5707967713474513, 0);
  sqcRZGate(q, 1.570496621916067, 0);
  sqcRYGate(q, -3.141592563606709, 1);
  sqcRZGate(q, -0.39214460081182834, 1);
  sqcRYGate(q, 1.5707903563435206, 2);
  sqcRZGate(q, -3.1241869071264294, 2);
  sqcRYGate(q, 3.1415885146915596, 3);
  sqcRZGate(q, 2.228755779358814, 3);
  sqcRYGate(q, 1.5707946916151345, 4);
  sqcRZGate(q, -1.5704599034025808, 4);
  sqcRYGate(q, 3.14159210087489, 5);
  sqcRZGate(q, 0.9488608012970104, 5);
  sqcRYGate(q, -3.141589362987232, 6);
  sqcRZGate(q, 1.4579099636314254, 6);
  sqcRYGate(q, -1.040960102424208e-06, 7);
  sqcRZGate(q, 0.06217570542102479, 7);
  sqcRYGate(q, 3.1415840483541557, 8);
  sqcRZGate(q, -1.2704502172176835, 8);
  sqcRYGate(q, -4.451471591337963e-07, 9);
  sqcRZGate(q, -1.2847758053794607, 9);
  sqcRYGate(q, -1.0946529309277887e-05, 10);
  sqcRZGate(q, 2.269549902410809, 10);
  sqcRYGate(q, -3.1415923334053026, 11);
  sqcRZGate(q, -2.1026828595726483, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.0098183107111849, 0);
  sqcRZGate(q, 1.8281094425342, 0);
  sqcRYGate(q, 0.0024547937570407186, 1);
  sqcRZGate(q, 0.05356599704579269, 1);
  sqcRYGate(q, -1.5710367845231241, 2);
  sqcRZGate(q, -2.884437288381344, 2);
  sqcRYGate(q, 3.1007892587246597, 3);
  sqcRZGate(q, 1.8862553074646895, 3);
  sqcRYGate(q, 0.5321274180796953, 4);
  sqcRZGate(q, 1.8276617001271742, 4);
  sqcRYGate(q, 3.1392823521496047, 5);
  sqcRZGate(q, -2.918301447151177, 5);
  sqcRYGate(q, 0.00014848150354876958, 6);
  sqcRZGate(q, 0.4528029783367123, 6);
  sqcRYGate(q, -3.139301340434854, 7);
  sqcRZGate(q, 0.12368561776132263, 7);
  sqcRYGate(q, -1.5709396799495505, 8);
  sqcRZGate(q, 0.25715369623875056, 8);
  sqcRYGate(q, 0.0022777995506553235, 9);
  sqcRZGate(q, 0.2192026976477992, 9);
  sqcRYGate(q, 0.00033496425829149246, 10);
  sqcRZGate(q, 2.500693954811778, 10);
  sqcRYGate(q, 0.0022778910228152785, 11);
  sqcRZGate(q, 0.24534692750383755, 11);

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
