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

  sqcRYGate(q, 2.701450314984017, 0);
  sqcRZGate(q, 2.4959349278985226, 0);
  sqcRYGate(q, -0.200161103693838, 1);
  sqcRZGate(q, 2.0264657142252416, 1);
  sqcRYGate(q, -2.7679946885161426, 2);
  sqcRZGate(q, 1.183272944104445, 2);
  sqcRYGate(q, -0.4674073023219055, 3);
  sqcRZGate(q, -3.0150382904032895, 3);
  sqcRYGate(q, 2.210386732032496, 4);
  sqcRZGate(q, 2.894490366299634, 4);
  sqcRYGate(q, -0.16744812312326618, 5);
  sqcRZGate(q, 1.3578305336323995, 5);
  sqcRYGate(q, -1.650669157662399, 6);
  sqcRZGate(q, -2.8437387815087165, 6);
  sqcRYGate(q, -0.8203139561889207, 7);
  sqcRZGate(q, -2.7595990093068186, 7);
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
  sqcRYGate(q, 1.233316259333538, 0);
  sqcRZGate(q, 2.54121531172026, 0);
  sqcRYGate(q, 2.9708836866939445, 1);
  sqcRZGate(q, 1.238278939252977, 1);
  sqcRYGate(q, 1.3912339074672886, 2);
  sqcRZGate(q, 0.5835607204395636, 2);
  sqcRYGate(q, -2.5559900964177733, 3);
  sqcRZGate(q, 1.0385018543083033, 3);
  sqcRYGate(q, 2.2752436717371207, 4);
  sqcRZGate(q, -1.343574060442203, 4);
  sqcRYGate(q, -2.592345928148176, 5);
  sqcRZGate(q, -0.21379167119361725, 5);
  sqcRYGate(q, 0.7609102757613613, 6);
  sqcRZGate(q, 0.6160467288094277, 6);
  sqcRYGate(q, -0.5983918664353931, 7);
  sqcRZGate(q, 1.597420604424772, 7);
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
  sqcRYGate(q, -1.8028483040492054, 0);
  sqcRZGate(q, 1.695839819540922, 0);
  sqcRYGate(q, 2.109146412274172, 1);
  sqcRZGate(q, 1.2853472499307645, 1);
  sqcRYGate(q, 2.9090864802190683, 2);
  sqcRZGate(q, 2.218746602926004, 2);
  sqcRYGate(q, -2.7163484195191936, 3);
  sqcRZGate(q, -3.054501880759082, 3);
  sqcRYGate(q, -2.378989250107102, 4);
  sqcRZGate(q, 2.064675921881272, 4);
  sqcRYGate(q, -1.067848046307209, 5);
  sqcRZGate(q, -0.40758966564239935, 5);
  sqcRYGate(q, -1.0831892322645578, 6);
  sqcRZGate(q, -2.150396069919722, 6);
  sqcRYGate(q, -1.2140093285254459, 7);
  sqcRZGate(q, 1.2939931439643306, 7);
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
  sqcRYGate(q, 1.8949410909714015, 0);
  sqcRZGate(q, 1.4009040852968753, 0);
  sqcRYGate(q, 0.33619964559347937, 1);
  sqcRZGate(q, -0.4466880188309294, 1);
  sqcRYGate(q, 0.13484254810434937, 2);
  sqcRZGate(q, -1.2644772400696305, 2);
  sqcRYGate(q, -0.21529738073087493, 3);
  sqcRZGate(q, 0.6551466196192193, 3);
  sqcRYGate(q, -1.6847313953726895, 4);
  sqcRZGate(q, 0.6321053557276837, 4);
  sqcRYGate(q, -2.4943511979598534, 5);
  sqcRZGate(q, 0.5678732131227031, 5);
  sqcRYGate(q, -1.293850142275141, 6);
  sqcRZGate(q, -2.6912971353291053, 6);
  sqcRYGate(q, 0.2167293297121962, 7);
  sqcRZGate(q, -0.37300846105395546, 7);
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
  sqcRYGate(q, -2.2219863205667494, 0);
  sqcRZGate(q, 1.6023804726541329, 0);
  sqcRYGate(q, 1.240127371695154, 1);
  sqcRZGate(q, 2.4198917492550827, 1);
  sqcRYGate(q, -2.6192802661223378, 2);
  sqcRZGate(q, 2.5789572648116468, 2);
  sqcRYGate(q, 1.0803635977589643, 3);
  sqcRZGate(q, -0.6667799806973225, 3);
  sqcRYGate(q, -2.9052247435836986, 4);
  sqcRZGate(q, 0.9136020599226143, 4);
  sqcRYGate(q, 0.78318252417127, 5);
  sqcRZGate(q, 2.4911211397775954, 5);
  sqcRYGate(q, -2.740531329907357, 6);
  sqcRZGate(q, 0.5931648794522769, 6);
  sqcRYGate(q, 2.4805271239330113, 7);
  sqcRZGate(q, -1.071807493515023, 7);
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
  sqcRYGate(q, 0.23012197822639635, 0);
  sqcRZGate(q, 1.1907519920831968, 0);
  sqcRYGate(q, -2.1410536010172034, 1);
  sqcRZGate(q, -3.0736172085623545, 1);
  sqcRYGate(q, -1.4439750781920173, 2);
  sqcRZGate(q, 1.9544914414783074, 2);
  sqcRYGate(q, -0.4365134421302992, 3);
  sqcRZGate(q, -1.2865493295890327, 3);
  sqcRYGate(q, 1.6180095740482656, 4);
  sqcRZGate(q, 2.2995648198993517, 4);
  sqcRYGate(q, -2.905265328251303, 5);
  sqcRZGate(q, -0.6771846306882976, 5);
  sqcRYGate(q, 0.07742650168009167, 6);
  sqcRZGate(q, -0.936667148202685, 6);
  sqcRYGate(q, 2.9979093461405197, 7);
  sqcRZGate(q, -0.14133019262005053, 7);
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
  sqcRYGate(q, -2.737271130512979, 0);
  sqcRZGate(q, -0.4528309267358221, 0);
  sqcRYGate(q, 0.7736522877775419, 1);
  sqcRZGate(q, -0.9755341695584597, 1);
  sqcRYGate(q, 2.7275835711626755, 2);
  sqcRZGate(q, 1.5280960159050094, 2);
  sqcRYGate(q, -1.2979903799549026, 3);
  sqcRZGate(q, -0.4111197258209949, 3);
  sqcRYGate(q, 2.6776726983423584, 4);
  sqcRZGate(q, 2.941074314356229, 4);
  sqcRYGate(q, -2.9178793227851547, 5);
  sqcRZGate(q, -0.23864913690764417, 5);
  sqcRYGate(q, -2.3608432696303403, 6);
  sqcRZGate(q, 1.92736414038733, 6);
  sqcRYGate(q, -3.0410251955520025, 7);
  sqcRZGate(q, -1.9061634590002947, 7);
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
  sqcRYGate(q, 1.6423688806353767, 0);
  sqcRZGate(q, -0.873880899881603, 0);
  sqcRYGate(q, 1.2205316377744788, 1);
  sqcRZGate(q, 2.1558325765255555, 1);
  sqcRYGate(q, 0.2979382123223064, 2);
  sqcRZGate(q, 0.44698985439629624, 2);
  sqcRYGate(q, 2.3172079169776243, 3);
  sqcRZGate(q, 2.0890405275774233, 3);
  sqcRYGate(q, -0.8689916589991791, 4);
  sqcRZGate(q, -1.1199973076719005, 4);
  sqcRYGate(q, -1.0908993731981367, 5);
  sqcRZGate(q, -0.11043730147245334, 5);
  sqcRYGate(q, 2.3225060202413723, 6);
  sqcRZGate(q, -0.9379589832884243, 6);
  sqcRYGate(q, -2.6354315873512357, 7);
  sqcRZGate(q, -2.0187623401353374, 7);
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
  sqcRYGate(q, -1.686672653462578, 0);
  sqcRZGate(q, -0.17935022317548382, 0);
  sqcRYGate(q, 2.8944208819743924, 1);
  sqcRZGate(q, -2.129715945269804, 1);
  sqcRYGate(q, 2.400100060358634, 2);
  sqcRZGate(q, -1.9691308464547461, 2);
  sqcRYGate(q, -2.907674947046895, 3);
  sqcRZGate(q, 1.7068683050329012, 3);
  sqcRYGate(q, -2.583494342827129, 4);
  sqcRZGate(q, -2.81011471290194, 4);
  sqcRYGate(q, 2.782914502942565, 5);
  sqcRZGate(q, 2.6778609469453083, 5);
  sqcRYGate(q, 2.789466860643784, 6);
  sqcRZGate(q, 3.0256461858786476, 6);
  sqcRYGate(q, 1.1031589207530408, 7);
  sqcRZGate(q, 2.8326389699075385, 7);
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
  sqcRYGate(q, 1.52343494192447, 0);
  sqcRZGate(q, 0.7982501557814672, 0);
  sqcRYGate(q, 0.32843085043656983, 1);
  sqcRZGate(q, 1.1372823495589681, 1);
  sqcRYGate(q, 2.7797346038089934, 2);
  sqcRZGate(q, 0.6372423898849802, 2);
  sqcRYGate(q, 0.726864945624671, 3);
  sqcRZGate(q, 3.0985007278975805, 3);
  sqcRYGate(q, 1.6104662337591316, 4);
  sqcRZGate(q, -1.5129370910069229, 4);
  sqcRYGate(q, -1.8353880399212992, 5);
  sqcRZGate(q, -0.4731799085790023, 5);
  sqcRYGate(q, 1.2092281482951899, 6);
  sqcRZGate(q, 2.9229757211991476, 6);
  sqcRYGate(q, 1.5375813143077968, 7);
  sqcRZGate(q, -0.5426526466320242, 7);
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
  sqcRYGate(q, -0.2898276409231024, 0);
  sqcRZGate(q, 1.9418555036613687, 0);
  sqcRYGate(q, -0.9993086521568378, 1);
  sqcRZGate(q, -2.6054832499402076, 1);
  sqcRYGate(q, 0.2791017802927787, 2);
  sqcRZGate(q, 2.0690676457209287, 2);
  sqcRYGate(q, 2.4667051058012177, 3);
  sqcRZGate(q, 2.657830400479919, 3);
  sqcRYGate(q, 0.708048295491471, 4);
  sqcRZGate(q, 2.51978496785824, 4);
  sqcRYGate(q, 0.8663479316808402, 5);
  sqcRZGate(q, 0.21306526562259, 5);
  sqcRYGate(q, 2.120151812162427, 6);
  sqcRZGate(q, 0.008023684338102112, 6);
  sqcRYGate(q, 2.098490935441024, 7);
  sqcRZGate(q, 2.096400176085517, 7);
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
  sqcRYGate(q, -2.6190315719042476, 0);
  sqcRZGate(q, -1.6261931518435988, 0);
  sqcRYGate(q, 1.5426852814471097, 1);
  sqcRZGate(q, 2.89767341777827, 1);
  sqcRYGate(q, -1.3370912599752867, 2);
  sqcRZGate(q, -2.329719171462611, 2);
  sqcRYGate(q, -2.6101895529871855, 3);
  sqcRZGate(q, -2.207324584333826, 3);
  sqcRYGate(q, 2.6263717604364993, 4);
  sqcRZGate(q, -2.333401239213589, 4);
  sqcRYGate(q, 2.9984910540880536, 5);
  sqcRZGate(q, -0.8355765559588921, 5);
  sqcRYGate(q, -2.517840949261057, 6);
  sqcRZGate(q, 3.053885351143027, 6);
  sqcRYGate(q, 1.3065307802145076, 7);
  sqcRZGate(q, -0.7861437896935933, 7);
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
  sqcRYGate(q, -0.3927400156169719, 0);
  sqcRZGate(q, 2.6871540432392385, 0);
  sqcRYGate(q, -2.71942578439295, 1);
  sqcRZGate(q, -1.1229646296406597, 1);
  sqcRYGate(q, 0.1310763932567891, 2);
  sqcRZGate(q, 0.5783867932776205, 2);
  sqcRYGate(q, -1.2703647185198426, 3);
  sqcRZGate(q, 0.15009180189446525, 3);
  sqcRYGate(q, -0.5950360636721592, 4);
  sqcRZGate(q, 0.4168565957301329, 4);
  sqcRYGate(q, -1.8753017802549279, 5);
  sqcRZGate(q, 0.2747193462221931, 5);
  sqcRYGate(q, -1.360725949753076, 6);
  sqcRZGate(q, -2.994892302232106, 6);
  sqcRYGate(q, 1.588228919233431, 7);
  sqcRZGate(q, 0.7805178072570973, 7);
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
  sqcRYGate(q, -0.15515852232811245, 0);
  sqcRZGate(q, 1.6810613752181698, 0);
  sqcRYGate(q, 0.15745679383329578, 1);
  sqcRZGate(q, 2.327861452323072, 1);
  sqcRYGate(q, -0.6568660225325544, 2);
  sqcRZGate(q, 0.11236744568951718, 2);
  sqcRYGate(q, -0.8830969906991815, 3);
  sqcRZGate(q, -0.46163676799018133, 3);
  sqcRYGate(q, 0.12049509214421761, 4);
  sqcRZGate(q, 2.602325462627961, 4);
  sqcRYGate(q, -0.48382915246151986, 5);
  sqcRZGate(q, -0.8836608015984568, 5);
  sqcRYGate(q, -1.152139749820468, 6);
  sqcRZGate(q, 0.7501710416181803, 6);
  sqcRYGate(q, -0.7513854218360567, 7);
  sqcRZGate(q, 1.6342683896766597, 7);
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
  sqcRYGate(q, 1.2205094985722265, 0);
  sqcRZGate(q, 0.4114104040547861, 0);
  sqcRYGate(q, 0.9493809913098358, 1);
  sqcRZGate(q, -2.7228658120340707, 1);
  sqcRYGate(q, -0.37501603401046246, 2);
  sqcRZGate(q, 1.297897644039371, 2);
  sqcRYGate(q, -0.4147621609428356, 3);
  sqcRZGate(q, -0.7904807763330917, 3);
  sqcRYGate(q, 2.2500851608712735, 4);
  sqcRZGate(q, 1.491628895719436, 4);
  sqcRYGate(q, -0.20141778369116656, 5);
  sqcRZGate(q, 3.090142713760059, 5);
  sqcRYGate(q, 0.34858062370559373, 6);
  sqcRZGate(q, 0.4134247423689755, 6);
  sqcRYGate(q, 1.9596284686890018, 7);
  sqcRZGate(q, 1.7438886865739776, 7);
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
  sqcRYGate(q, 0.8776351937151391, 0);
  sqcRZGate(q, -1.9092318251805729, 0);
  sqcRYGate(q, -0.29339580468657656, 1);
  sqcRZGate(q, -0.667938590104636, 1);
  sqcRYGate(q, -3.058401777548282, 2);
  sqcRZGate(q, 0.5944125157951028, 2);
  sqcRYGate(q, 2.5415635786523247, 3);
  sqcRZGate(q, 2.1912279329063145, 3);
  sqcRYGate(q, 1.3117356306572108, 4);
  sqcRZGate(q, 2.1403815040150533, 4);
  sqcRYGate(q, 2.799991211041171, 5);
  sqcRZGate(q, -0.22810092471067955, 5);
  sqcRYGate(q, 2.6448156631926447, 6);
  sqcRZGate(q, 0.6179069398513717, 6);
  sqcRYGate(q, -0.8756280822207465, 7);
  sqcRZGate(q, 1.7578507723365835, 7);
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
  sqcRYGate(q, 1.7736056498266841, 0);
  sqcRZGate(q, -1.1711718989420694, 0);
  sqcRYGate(q, -2.5165857899578516, 1);
  sqcRZGate(q, 0.47325232604640366, 1);
  sqcRYGate(q, 1.0073951983369112, 2);
  sqcRZGate(q, 0.7344310803143702, 2);
  sqcRYGate(q, -1.9863610157360216, 3);
  sqcRZGate(q, -1.2983480439369721, 3);
  sqcRYGate(q, 1.3934295505289067, 4);
  sqcRZGate(q, -1.132004752376848, 4);
  sqcRYGate(q, 1.2810170465881747, 5);
  sqcRZGate(q, 1.421726528624828, 5);
  sqcRYGate(q, -1.1928372821404134, 6);
  sqcRZGate(q, 2.1941781893722245, 6);
  sqcRYGate(q, 0.6224216779661249, 7);
  sqcRZGate(q, 0.09808396588613011, 7);
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
  sqcRYGate(q, 2.957042256631268, 0);
  sqcRZGate(q, 0.5256009256639924, 0);
  sqcRYGate(q, 2.3682740881386315, 1);
  sqcRZGate(q, 2.7067044607361956, 1);
  sqcRYGate(q, 0.4818947932769335, 2);
  sqcRZGate(q, -2.6894141683389456, 2);
  sqcRYGate(q, 1.988951038572742, 3);
  sqcRZGate(q, -1.9453503146865243, 3);
  sqcRYGate(q, -2.9036576092211885, 4);
  sqcRZGate(q, 3.080404076031535, 4);
  sqcRYGate(q, 2.045218128251488, 5);
  sqcRZGate(q, 3.0521447034390095, 5);
  sqcRYGate(q, -0.13900548724109613, 6);
  sqcRZGate(q, -0.4069750212645946, 6);
  sqcRYGate(q, 1.6197034616671095, 7);
  sqcRZGate(q, -0.3724233161647117, 7);
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
  sqcRYGate(q, -1.840858870999791, 0);
  sqcRZGate(q, 2.64397504817291, 0);
  sqcRYGate(q, -2.9399016078749467, 1);
  sqcRZGate(q, 0.07645858154471818, 1);
  sqcRYGate(q, 1.230771293094791, 2);
  sqcRZGate(q, -0.41135111376671046, 2);
  sqcRYGate(q, 2.572282223732969, 3);
  sqcRZGate(q, 1.2385954731329312, 3);
  sqcRYGate(q, -0.8074240034193936, 4);
  sqcRZGate(q, -1.671624388356201, 4);
  sqcRYGate(q, -0.519555381097719, 5);
  sqcRZGate(q, 0.8455175561567531, 5);
  sqcRYGate(q, 0.7175860289769438, 6);
  sqcRZGate(q, -2.39418278295986, 6);
  sqcRYGate(q, -2.8763399808684196, 7);
  sqcRZGate(q, 0.7256679835080145, 7);
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
  sqcRYGate(q, -0.19201236850349443, 0);
  sqcRZGate(q, -0.50730713176546, 0);
  sqcRYGate(q, 1.5346499356121317, 1);
  sqcRZGate(q, -0.3044821754194281, 1);
  sqcRYGate(q, 1.8504657576367771, 2);
  sqcRZGate(q, 0.20014505049993941, 2);
  sqcRYGate(q, -1.8434621280707275, 3);
  sqcRZGate(q, 2.099002682372241, 3);
  sqcRYGate(q, -0.32419014751350606, 4);
  sqcRZGate(q, 0.4450887498082343, 4);
  sqcRYGate(q, -0.4873121723955624, 5);
  sqcRZGate(q, -2.464008913918352, 5);
  sqcRYGate(q, 0.5842706401579036, 6);
  sqcRZGate(q, -0.8151370637609353, 6);
  sqcRYGate(q, 0.2654086572745635, 7);
  sqcRZGate(q, 0.9354166602535079, 7);
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
  sqcRYGate(q, 0.1733210988898274, 0);
  sqcRZGate(q, 0.7640091393182512, 0);
  sqcRYGate(q, 2.1486385004470843, 1);
  sqcRZGate(q, -1.4629996417885847, 1);
  sqcRYGate(q, -1.8981270880694723, 2);
  sqcRZGate(q, -1.3014463699346468, 2);
  sqcRYGate(q, 1.5586966020164763, 3);
  sqcRZGate(q, 0.12469186839132008, 3);
  sqcRYGate(q, -1.3775665340237495, 4);
  sqcRZGate(q, 0.40924742758271615, 4);
  sqcRYGate(q, -1.6751405198389735, 5);
  sqcRZGate(q, -0.09091538320683146, 5);
  sqcRYGate(q, -3.075171824450413, 6);
  sqcRZGate(q, 0.7860651786870347, 6);
  sqcRYGate(q, -2.603087189851397, 7);
  sqcRZGate(q, 0.012643625468323982, 7);
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
  sqcRYGate(q, -2.069451739557086, 0);
  sqcRZGate(q, -1.048016060014775, 0);
  sqcRYGate(q, -0.9595970975676991, 1);
  sqcRZGate(q, 0.7676965471445042, 1);
  sqcRYGate(q, 1.9402593904823178, 2);
  sqcRZGate(q, -1.5853594495596575, 2);
  sqcRYGate(q, -3.0773063873671505, 3);
  sqcRZGate(q, -2.9704930518909873, 3);
  sqcRYGate(q, -2.8832750235878963, 4);
  sqcRZGate(q, -1.0544793997269677, 4);
  sqcRYGate(q, 2.5129784611585517, 5);
  sqcRZGate(q, 0.21208294704923622, 5);
  sqcRYGate(q, 1.7358727749806007, 6);
  sqcRZGate(q, -1.316353384403647, 6);
  sqcRYGate(q, -0.23322634009625132, 7);
  sqcRZGate(q, 2.7724726925431438, 7);
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
  sqcRYGate(q, 0.6918005866937409, 0);
  sqcRZGate(q, 0.12159944446221181, 0);
  sqcRYGate(q, 0.5264551479379239, 1);
  sqcRZGate(q, -0.18401049943213812, 1);
  sqcRYGate(q, 0.7355953799041446, 2);
  sqcRZGate(q, -0.7867396325875573, 2);
  sqcRYGate(q, -2.517747568739082, 3);
  sqcRZGate(q, -0.4525489928247453, 3);
  sqcRYGate(q, -1.659817701571063, 4);
  sqcRZGate(q, -2.3119017141444167, 4);
  sqcRYGate(q, -2.1093482891456627, 5);
  sqcRZGate(q, -1.1629524640392177, 5);
  sqcRYGate(q, -1.6838341862726205, 6);
  sqcRZGate(q, 2.282962757488936, 6);
  sqcRYGate(q, 0.34769731374220836, 7);
  sqcRZGate(q, -1.1096954569713127, 7);
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
  sqcRYGate(q, 1.041914368308893, 0);
  sqcRZGate(q, 1.5521622145388876, 0);
  sqcRYGate(q, 2.589802490102882, 1);
  sqcRZGate(q, 0.7623318025362993, 1);
  sqcRYGate(q, 0.8144859250863536, 2);
  sqcRZGate(q, -0.7407560036141818, 2);
  sqcRYGate(q, -1.419592679760206, 3);
  sqcRZGate(q, 2.6876609572478696, 3);
  sqcRYGate(q, -0.31769617887157575, 4);
  sqcRZGate(q, 2.787411089702105, 4);
  sqcRYGate(q, -2.1783662120481146, 5);
  sqcRZGate(q, 1.4237627066344596, 5);
  sqcRYGate(q, 2.333200571509982, 6);
  sqcRZGate(q, -1.018842087000427, 6);
  sqcRYGate(q, -2.044074645965132, 7);
  sqcRZGate(q, 0.9635581719063642, 7);
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
  sqcRYGate(q, 2.711806777909553, 0);
  sqcRZGate(q, -2.097890130916041, 0);
  sqcRYGate(q, 0.26568988384330633, 1);
  sqcRZGate(q, -1.878001891278411, 1);
  sqcRYGate(q, -0.987202845064794, 2);
  sqcRZGate(q, 0.6886712451038209, 2);
  sqcRYGate(q, 2.3140390556739416, 3);
  sqcRZGate(q, 0.6071302190525225, 3);
  sqcRYGate(q, 0.9315198679897465, 4);
  sqcRZGate(q, -2.0208969525622704, 4);
  sqcRYGate(q, -2.666626171779398, 5);
  sqcRZGate(q, -2.9923501279969407, 5);
  sqcRYGate(q, -0.17337593069053733, 6);
  sqcRZGate(q, -2.4644281424987233, 6);
  sqcRYGate(q, -1.6886151133347633, 7);
  sqcRZGate(q, -2.1683891553222283, 7);
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
  sqcRYGate(q, -1.454540801307062, 0);
  sqcRZGate(q, -1.3048701989041174, 0);
  sqcRYGate(q, -2.682975349151684, 1);
  sqcRZGate(q, -0.4142714939418859, 1);
  sqcRYGate(q, 1.5217218648057835, 2);
  sqcRZGate(q, 1.0120602728271464, 2);
  sqcRYGate(q, -2.612720462303868, 3);
  sqcRZGate(q, 1.3927866271307077, 3);
  sqcRYGate(q, 2.430359907293056, 4);
  sqcRZGate(q, -1.1308186136974216, 4);
  sqcRYGate(q, 0.770927998198374, 5);
  sqcRZGate(q, -2.260841166840632, 5);
  sqcRYGate(q, 1.5941646626753867, 6);
  sqcRZGate(q, 0.01946443455539464, 6);
  sqcRYGate(q, 2.5172045596981243, 7);
  sqcRZGate(q, 3.0762314678556253, 7);
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
  sqcRYGate(q, 1.300055186981931, 0);
  sqcRZGate(q, 1.8513908163880926, 0);
  sqcRYGate(q, 1.3129455549211562, 1);
  sqcRZGate(q, -0.3549161125910947, 1);
  sqcRYGate(q, -2.951270012329178, 2);
  sqcRZGate(q, 2.5457672296007345, 2);
  sqcRYGate(q, 1.0878282316511703, 3);
  sqcRZGate(q, -1.719143848524757, 3);
  sqcRYGate(q, -0.22804391089919296, 4);
  sqcRZGate(q, -0.7020860453061986, 4);
  sqcRYGate(q, 1.6408623166830154, 5);
  sqcRZGate(q, 2.8155285292094687, 5);
  sqcRYGate(q, 2.9252123160096457, 6);
  sqcRZGate(q, 2.9110349855838833, 6);
  sqcRYGate(q, 2.953039377231882, 7);
  sqcRZGate(q, -0.13976563143371118, 7);
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
  sqcRYGate(q, -2.481768497526367, 0);
  sqcRZGate(q, 0.05317998810148427, 0);
  sqcRYGate(q, -0.975566565785642, 1);
  sqcRZGate(q, 3.0024355319965, 1);
  sqcRYGate(q, -1.1468464462112113, 2);
  sqcRZGate(q, -2.4368893191098375, 2);
  sqcRYGate(q, -1.4933358577913642, 3);
  sqcRZGate(q, -0.5032341091687778, 3);
  sqcRYGate(q, 2.602520908507243, 4);
  sqcRZGate(q, 2.600243212560978, 4);
  sqcRYGate(q, -2.488129898883675, 5);
  sqcRZGate(q, -2.6590040756263766, 5);
  sqcRYGate(q, 2.068837111218013, 6);
  sqcRZGate(q, -1.6604251171339923, 6);
  sqcRYGate(q, -1.8269139754611652, 7);
  sqcRZGate(q, 2.3489053938415987, 7);
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
  sqcRYGate(q, -0.5678256787341232, 0);
  sqcRZGate(q, 1.1132823632721152, 0);
  sqcRYGate(q, -2.7591420532386586, 1);
  sqcRZGate(q, 0.8524885838479159, 1);
  sqcRYGate(q, -3.0543997428917553, 2);
  sqcRZGate(q, -1.4229820090454712, 2);
  sqcRYGate(q, 1.7620903202542435, 3);
  sqcRZGate(q, -0.7596872300013694, 3);
  sqcRYGate(q, 1.7827876765072876, 4);
  sqcRZGate(q, -2.5607210258799644, 4);
  sqcRYGate(q, -0.436644913930996, 5);
  sqcRZGate(q, 2.9690018821982527, 5);
  sqcRYGate(q, -2.3385738326429464, 6);
  sqcRZGate(q, 2.437977682974357, 6);
  sqcRYGate(q, 2.497160718305596, 7);
  sqcRZGate(q, -2.911768586927859, 7);

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
