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

  sqcRYGate(q, -1.5707952447887914, 0);
  sqcRZGate(q, -0.007650696160427017, 0);
  sqcRYGate(q, 3.1415926436164323, 1);
  sqcRZGate(q, -1.4919580689211882, 1);
  sqcRYGate(q, 1.6461015640108352, 2);
  sqcRZGate(q, -0.011735859432423723, 2);
  sqcRYGate(q, 3.141592401942531, 3);
  sqcRZGate(q, 2.5381505614751982, 3);
  sqcRYGate(q, 1.5707968100871093, 4);
  sqcRZGate(q, -0.01180363387352871, 4);
  sqcRYGate(q, -3.116653061033733, 5);
  sqcRZGate(q, -2.51553131848745, 5);
  sqcRYGate(q, 1.9322132091987054, 6);
  sqcRZGate(q, 1.5743857484479116, 6);
  sqcRYGate(q, 3.141590382802861, 7);
  sqcRZGate(q, 0.9595945738440379, 7);
  sqcRYGate(q, 3.1415925229164037, 8);
  sqcRZGate(q, -1.8646888262623693, 8);
  sqcRYGate(q, -0.03297122074577068, 9);
  sqcRZGate(q, 0.6508167338781304, 9);
  sqcRYGate(q, -0.34990168788770415, 10);
  sqcRZGate(q, 1.3864816542501153, 10);
  sqcRYGate(q, 3.141591481740827, 11);
  sqcRZGate(q, -0.5290361792070586, 11);
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
  sqcRYGate(q, 1.0006571050656738, 0);
  sqcRZGate(q, 1.5478926314964605, 0);
  sqcRYGate(q, -1.5038889076275253, 1);
  sqcRZGate(q, -3.1415913509348274, 1);
  sqcRYGate(q, 2.3991033053505358e-06, 2);
  sqcRZGate(q, 1.5265966095054135, 2);
  sqcRYGate(q, -1.2180072551358498, 3);
  sqcRZGate(q, 3.141586628411121, 3);
  sqcRYGate(q, 2.5714058695584003, 4);
  sqcRZGate(q, -1.5427414383626337, 4);
  sqcRYGate(q, -5.58361317182232e-07, 5);
  sqcRZGate(q, 2.9041402623277714, 5);
  sqcRYGate(q, -3.141592510189149, 6);
  sqcRZGate(q, -2.332235740879604, 6);
  sqcRYGate(q, 0.3102658712319055, 7);
  sqcRZGate(q, -4.135912829994481e-07, 7);
  sqcRYGate(q, -3.1259653532345055e-08, 8);
  sqcRZGate(q, -1.9234041883851263, 8);
  sqcRYGate(q, 3.141592530763239, 9);
  sqcRZGate(q, 2.2216063455115442, 9);
  sqcRYGate(q, 3.1415918799919647, 10);
  sqcRZGate(q, 2.1348686125641034, 10);
  sqcRYGate(q, -0.1403603513433156, 11);
  sqcRZGate(q, 2.2696811496913938e-06, 11);
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
  sqcRYGate(q, 3.1415861415735504, 0);
  sqcRZGate(q, -1.4917295578383405, 0);
  sqcRYGate(q, -1.3481481156670019, 1);
  sqcRZGate(q, 1.5707869272498902, 1);
  sqcRYGate(q, 1.2267600370575782e-06, 2);
  sqcRZGate(q, 0.7362826993292033, 2);
  sqcRYGate(q, -0.11392828447594994, 3);
  sqcRZGate(q, -1.5707995435206454, 3);
  sqcRYGate(q, 7.252461990070458e-06, 4);
  sqcRZGate(q, 1.717479995103178, 4);
  sqcRYGate(q, 4.6797949839283055e-07, 5);
  sqcRZGate(q, 1.1822351719289574, 5);
  sqcRYGate(q, 3.141592369755611, 6);
  sqcRZGate(q, 0.7933951841696416, 6);
  sqcRYGate(q, -0.3817031858645521, 7);
  sqcRZGate(q, 1.5707881819022447, 7);
  sqcRYGate(q, 2.260976698714502e-09, 8);
  sqcRZGate(q, 2.6880653114692756, 8);
  sqcRYGate(q, -1.5707962939765592, 9);
  sqcRZGate(q, 1.570796211285911, 9);
  sqcRYGate(q, 3.1415925958494717, 10);
  sqcRZGate(q, -0.8223505940278085, 10);
  sqcRYGate(q, -1.872239170600217, 11);
  sqcRZGate(q, -1.5707881642124886, 11);
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
  sqcRYGate(q, 0.0002997016482637264, 0);
  sqcRZGate(q, -0.10614188512217027, 0);
  sqcRYGate(q, 1.5707967474715767, 1);
  sqcRZGate(q, -1.515933063399233, 1);
  sqcRYGate(q, 3.1408503081314145, 2);
  sqcRZGate(q, -0.8904495794865073, 2);
  sqcRYGate(q, 1.570796547337137, 3);
  sqcRZGate(q, 2.784446373980923, 3);
  sqcRYGate(q, 3.1414798456780417, 4);
  sqcRZGate(q, 0.18498754968668846, 4);
  sqcRYGate(q, -1.6108326704541005, 5);
  sqcRZGate(q, 3.141591214565088, 5);
  sqcRYGate(q, -0.003924950070674171, 6);
  sqcRZGate(q, -3.129220596864119, 6);
  sqcRYGate(q, -1.5707967848627178, 7);
  sqcRZGate(q, 0.6162353306255063, 7);
  sqcRYGate(q, -3.14159263565432, 8);
  sqcRZGate(q, 0.36715698448806405, 8);
  sqcRYGate(q, 1.5707879791187986, 9);
  sqcRZGate(q, 2.916310853068019, 9);
  sqcRYGate(q, 3.104789753092486, 10);
  sqcRZGate(q, 5.822845832615403e-05, 10);
  sqcRYGate(q, 1.5707963086492045, 11);
  sqcRZGate(q, 1.7484559941066906, 11);
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
  sqcRYGate(q, 1.9197088576814374, 0);
  sqcRZGate(q, 3.141470135110195, 0);
  sqcRYGate(q, -3.275717155304392e-07, 1);
  sqcRZGate(q, -2.313832463048104, 1);
  sqcRYGate(q, -1.5707964133921875, 2);
  sqcRZGate(q, 3.1415903359946533, 2);
  sqcRYGate(q, -1.5287446153422477e-07, 3);
  sqcRZGate(q, 2.1707665454079272, 3);
  sqcRYGate(q, 0.3450460028796011, 4);
  sqcRZGate(q, -0.00033221333923183494, 4);
  sqcRYGate(q, 1.5707937614874607, 5);
  sqcRZGate(q, -1.8074332654659733, 5);
  sqcRYGate(q, 1.5707961589798114, 6);
  sqcRZGate(q, -0.7484427033811877, 6);
  sqcRYGate(q, 3.1415895008218633, 7);
  sqcRZGate(q, 2.1595267837108407, 7);
  sqcRYGate(q, 1.570796322350474, 8);
  sqcRZGate(q, -1.215690485936385, 8);
  sqcRYGate(q, -1.1037249763035106e-06, 9);
  sqcRZGate(q, -1.402988497101528, 9);
  sqcRYGate(q, -1.5707961091028126, 10);
  sqcRZGate(q, 1.634699255242258, 10);
  sqcRYGate(q, -1.05802703842528e-06, 11);
  sqcRZGate(q, -1.1522571282653802, 11);
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
  sqcRYGate(q, 1.5707963009573804, 0);
  sqcRZGate(q, 1.570796703733448, 0);
  sqcRYGate(q, -3.1415926058674204, 1);
  sqcRZGate(q, -1.3994135000722059, 1);
  sqcRYGate(q, 1.5707963400084266, 2);
  sqcRZGate(q, -1.5707968754072514, 2);
  sqcRYGate(q, -4.628713578501056e-08, 3);
  sqcRZGate(q, -0.3331344743472586, 3);
  sqcRYGate(q, -1.5707962301409535, 4);
  sqcRZGate(q, -1.5707962230159636, 4);
  sqcRYGate(q, -3.1415925733821912, 5);
  sqcRZGate(q, 0.22812599345902937, 5);
  sqcRYGate(q, 1.0531471721348164e-07, 6);
  sqcRZGate(q, 0.9341560474011567, 6);
  sqcRYGate(q, -8.478393237051923e-08, 7);
  sqcRZGate(q, -1.6853791235459872, 7);
  sqcRYGate(q, -3.141592651476334, 8);
  sqcRZGate(q, -2.786486765909387, 8);
  sqcRYGate(q, -3.1415925278785424, 9);
  sqcRZGate(q, -0.7560310908354494, 9);
  sqcRYGate(q, -3.141592636814828, 10);
  sqcRZGate(q, -3.131821422972618, 10);
  sqcRYGate(q, 1.3779462637586448e-07, 11);
  sqcRZGate(q, -0.46063674870240323, 11);
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
  sqcRYGate(q, -1.5707957448651237, 0);
  sqcRZGate(q, -2.4443689932325112, 0);
  sqcRYGate(q, -3.1415926296038488, 1);
  sqcRZGate(q, -0.013962817754567218, 1);
  sqcRYGate(q, 1.5707960389412368, 2);
  sqcRZGate(q, 2.268019481050244, 2);
  sqcRYGate(q, -5.7389017094067185e-08, 3);
  sqcRZGate(q, 2.3583848888791508, 3);
  sqcRYGate(q, 1.5707972363080085, 4);
  sqcRZGate(q, -2.444370139308911, 4);
  sqcRYGate(q, -3.1415925736529573, 5);
  sqcRZGate(q, 2.7328387070792144, 5);
  sqcRYGate(q, 3.141591956673848, 6);
  sqcRZGate(q, 0.8829364137767967, 6);
  sqcRYGate(q, -3.1415925827203792, 7);
  sqcRZGate(q, -2.586401088083071, 7);
  sqcRYGate(q, -1.570795919014322, 8);
  sqcRZGate(q, -0.8735717042180706, 8);
  sqcRYGate(q, -3.141592596563168, 9);
  sqcRZGate(q, -0.0012778228112697576, 9);
  sqcRYGate(q, 4.035806968616384e-07, 10);
  sqcRZGate(q, -0.8194400302037542, 10);
  sqcRYGate(q, -8.099152088397251e-08, 11);
  sqcRZGate(q, -2.5798755415443932, 11);

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
