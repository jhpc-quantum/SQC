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

  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.5309849220614362, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.624123700001508, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07857511187711488, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.5116244609539737, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.7471392571370407, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.07689696918965755, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.6809585483712406, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.1005996514972656, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2583990403501069, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.7570214312451855, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.999473417834859, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.10984086461730556, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.01234906853034619, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0010952175425842153, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0976651679134922, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.2701230612599248, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.2981524395600899, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.4824284743070505, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.2295381708568385, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.247186024596985, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2648385062415311, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.1599912255266154, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.162945738486064, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.07323376656833964, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.1491075996772908, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.638299795257243, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 1.0567850634835843, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.32418510739534406, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -3.0025755404563714, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.34260967348911525, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.006277767732858005, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.02321432250973912, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.4116800460465707, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.0002691973110220088, 0);
  sqcRZGate(q, -0.6800633312923158, 1);
  sqcRZGate(q, -0.18019164491179016, 2);
  sqcRZGate(q, 1.2716386483343616, 3);
  sqcRZGate(q, -1.1176342624451356, 4);
  sqcRZGate(q, 1.134506075833744, 5);
  sqcRZGate(q, 1.4513158663255306, 6);
  sqcRZGate(q, -1.2458962066568369, 7);
  sqcRZGate(q, 0.17270270617342257, 8);
  sqcRZGate(q, 0.534758857066804, 9);
  sqcRZGate(q, -0.3855903799808859, 10);
  sqcRZGate(q, -0.6073437489199552, 11);
  sqcRXGate(q, -1.704085565423177, 0);
  sqcRXGate(q, -1.3144800511116, 1);
  sqcRXGate(q, -0.5460848110372157, 2);
  sqcRXGate(q, -0.7654363885785244, 3);
  sqcRXGate(q, -2.0014131912951836, 4);
  sqcRXGate(q, -1.7655722275535812, 5);
  sqcRXGate(q, -1.0083063552111595, 6);
  sqcRXGate(q, -1.1128320611577749, 7);
  sqcRXGate(q, -1.9294491891497783, 8);
  sqcRXGate(q, -0.1914793378438608, 9);
  sqcRXGate(q, -2.5469493567857406, 10);
  sqcRXGate(q, -0.42015199130295244, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0860282224000897, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.074983800462674, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.07347167422650232, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.7428299164624825, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6490336623962617, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.2959518046978709, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.4724087030658988, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -2.2881894921800967, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.724584669057831, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.6675433311313531, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 2.2825393279705235, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.24870449331685343, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0050394470416296865, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.06673928558220761, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.345638260770595e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.1121770421771593, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.21397527631988508, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.09756881562138396, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.636551176640629, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.05956411187823053, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4510252327139214, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.13382529722837533, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.08546904978560399, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.15109751712371816, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.3480646085868493, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.35109674609791386, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.09096499041701185, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 3.0812964305555983, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.9258169362852198, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.26888249521685714, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.05790692992443335, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.17132506505155876, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -2.3517271672218816, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.821405279018716, 0);
  sqcRZGate(q, 0.55117098855791, 1);
  sqcRZGate(q, -0.145504109991635, 2);
  sqcRZGate(q, -0.25752672553048106, 3);
  sqcRZGate(q, 0.9889898858571287, 4);
  sqcRZGate(q, -0.01609629550904739, 5);
  sqcRZGate(q, -0.06077324394053289, 6);
  sqcRZGate(q, 0.11541522175801196, 7);
  sqcRZGate(q, -0.03874072500255787, 8);
  sqcRZGate(q, 0.049733326620821264, 9);
  sqcRZGate(q, 0.2600278305418122, 10);
  sqcRZGate(q, -0.08843081876415268, 11);
  sqcRXGate(q, -1.4584527520489268, 0);
  sqcRXGate(q, -1.6625292122518, 1);
  sqcRXGate(q, -1.0013683326953615, 2);
  sqcRXGate(q, -2.162566885525387, 3);
  sqcRXGate(q, -1.0202492232749538, 4);
  sqcRXGate(q, -1.3258304151871774, 5);
  sqcRXGate(q, -2.124542495782705, 6);
  sqcRXGate(q, -1.7497812031358821, 7);
  sqcRXGate(q, -1.2994513954976579, 8);
  sqcRXGate(q, -0.4385386355365936, 9);
  sqcRXGate(q, -2.571351682740883, 10);
  sqcRXGate(q, -1.8539021158420343, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.009539118131794429, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.004493053943932739, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05306533992647344, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.5242337980287837, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.8367900664112762, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.46239799627297484, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.9427583911696819, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.6153992552793133, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.0048921052240916, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.5990276706356552, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.639639118242473, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.4199061005658681, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.7400862619776467, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.7403223257505771, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5536640777249233, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.3666952851004459, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.36815612818590265, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.23387359598797727, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -2.7718944994764394, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.3782373120399408, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.00011606868214372887, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.10396447060606588, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.10950740603718818, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.06206441385777002, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 2.2923311441877483, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.8062961716980912, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 1.0809340915958507, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 3.1195021740859725, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 3.12718646460246, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.00801103976928327, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.021737426310302437, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.3408861919726683, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.2830099164729548, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6444247501989268, 0);
  sqcRZGate(q, 0.4957344218354153, 1);
  sqcRZGate(q, 0.22384744468954465, 2);
  sqcRZGate(q, 1.3505901063572716, 3);
  sqcRZGate(q, 0.04769473278635873, 4);
  sqcRZGate(q, 1.4720099745411166, 5);
  sqcRZGate(q, 1.1320185130904443, 6);
  sqcRZGate(q, 0.4729221949506896, 7);
  sqcRZGate(q, -0.10658620712796142, 8);
  sqcRZGate(q, 0.3341082646036579, 9);
  sqcRZGate(q, -1.1452684883128406, 10);
  sqcRZGate(q, -0.029039215045229785, 11);
  sqcRXGate(q, -0.5324140891040402, 0);
  sqcRXGate(q, -0.36902462424981536, 1);
  sqcRXGate(q, 0.42442544743491656, 2);
  sqcRXGate(q, -2.842253501139141, 3);
  sqcRXGate(q, -1.5925816077396546, 4);
  sqcRXGate(q, -1.5840797240068427, 5);
  sqcRXGate(q, -1.5129926592573577, 6);
  sqcRXGate(q, 1.2259684917213156, 7);
  sqcRXGate(q, 0.19268507406752686, 8);
  sqcRXGate(q, -1.688895904690267, 9);
  sqcRXGate(q, -1.8213111008503313, 10);
  sqcRXGate(q, -0.020458280266464804, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12414987528524207, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07943796506847355, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.013193337739251746, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.4671653587254045, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -2.2265724682468973, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.382521261176531, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.9028700200685865, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3942141095436844, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.713850466215775, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.3228345649210036, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.6662549431791895, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.3108831619002412, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.22246519043052465, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.012746042860621936, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.2211274303894387, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.1090898733250583, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.008252981578183266, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.10157795540444714, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6760318451161905, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.8700118772558548, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5496588139489982, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.008298178471014737, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.022681326559389443, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.003971097160112055, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.23337029084839941, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.29863674601022205, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.2557847424533222, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 3.034883069821739, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.368937606391895, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.35641090907575806, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.07023140549919048, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.3115410660660047, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.05300024216492708, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 1.4399264218914345, 0);
  sqcRZGate(q, 0.025529657563577935, 1);
  sqcRZGate(q, 1.3776557142878414, 2);
  sqcRZGate(q, -0.025673154144344824, 3);
  sqcRZGate(q, 0.005143788610610205, 4);
  sqcRZGate(q, 0.05816028865398482, 5);
  sqcRZGate(q, -0.14482696658395733, 6);
  sqcRZGate(q, 0.009211510069011358, 7);
  sqcRZGate(q, -0.3692314066657841, 8);
  sqcRZGate(q, 1.5418539560078408, 9);
  sqcRZGate(q, 0.3689772206311795, 10);
  sqcRZGate(q, 0.02616631621206616, 11);
  sqcRXGate(q, -2.0050511363577854, 0);
  sqcRXGate(q, -2.1421746417122445, 1);
  sqcRXGate(q, -1.3655029089751785, 2);
  sqcRXGate(q, -1.5672676614631527, 3);
  sqcRXGate(q, -1.592148370408717, 4);
  sqcRXGate(q, -1.5823374283459668, 5);
  sqcRXGate(q, -1.5958272151444681, 6);
  sqcRXGate(q, -1.602407628974118, 7);
  sqcRXGate(q, -1.3929575410888404, 8);
  sqcRXGate(q, -0.36936552761335234, 9);
  sqcRXGate(q, -2.220770138410733, 10);
  sqcRXGate(q, -1.5625641731998523, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06132367857474281, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06240854027629103, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06380074643136499, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.427551612507359, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.0513942086139532, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06124044806233125, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.2723108963583634, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.8661063025505036, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.0759808449549033, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.5570881555788716, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.584548430752619, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.3632124973148663, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.5284345084542892, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.5396788977117005, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.733519949157654, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.4611226779913817, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.46227694695382326, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.4138007997083333, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6702712391812092, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6689919640345128, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -2.44830966131053, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.7135719000604807, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.7129643116170684, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.03291672080190685, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.36483089241934596, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.35811367827916896, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.2104704115392781, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.9279697542156807, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.226242768844422, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.6039377566320737, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.2619176985344189, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.2582777798435465, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 2.09948339228216, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.018311018596732644, 0);
  sqcRZGate(q, 0.2180289579420447, 1);
  sqcRZGate(q, 0.17887519009644426, 2);
  sqcRZGate(q, 0.44220414075977305, 3);
  sqcRZGate(q, 2.015013259051903, 4);
  sqcRZGate(q, 0.8159650994027594, 5);
  sqcRZGate(q, 2.7686210399132816, 6);
  sqcRZGate(q, -0.005016235654818598, 7);
  sqcRZGate(q, -1.546438003790146, 8);
  sqcRZGate(q, 1.2871441606266623, 9);
  sqcRZGate(q, 2.024568092891238, 10);
  sqcRZGate(q, -0.6215478186024147, 11);
  sqcRXGate(q, 0.705909777987545, 0);
  sqcRXGate(q, -1.0612900664783576, 1);
  sqcRXGate(q, 0.022972846568606473, 2);
  sqcRXGate(q, -3.140446545406438, 3);
  sqcRXGate(q, 3.134125716180626, 4);
  sqcRXGate(q, -3.138299578734559, 5);
  sqcRXGate(q, 0.003272365135608304, 6);
  sqcRXGate(q, 0.0024971181061888828, 7);
  sqcRXGate(q, 0.007811749305458866, 8);
  sqcRXGate(q, -0.021677714576247724, 9);
  sqcRXGate(q, -0.007303167711195699, 10);
  sqcRXGate(q, -0.003558711415405507, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.4396010227608834, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.3483518975843825, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.016186690125780633, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.20529722815468437, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.20390594871587134, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.09783400238338871, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.3056663191109423, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.830582979374043, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.7992555954588583, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5722902022199561, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.5695170513275347, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.07472686663524723, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.33619824255927794, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3353567309882294, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.24132776541185122, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.529164397756261, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.5343300836260023, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.6072867432628267, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4071001243424674, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.40928116334492776, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2914456436198829, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.7633618021510171, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.75567602067313, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.3707425741338703, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.5353846890685492, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.5328263152721456, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.37878945147092213, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.357232195214738, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.352524027419509, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.6646486069319826, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6344064817375814, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.6363023400263165, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.4129891592287772, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.02800423256150868, 0);
  sqcRZGate(q, 1.3807231573525829, 1);
  sqcRZGate(q, -0.17035706603037568, 2);
  sqcRZGate(q, 1.3106209585540853, 3);
  sqcRZGate(q, -0.535191784024815, 4);
  sqcRZGate(q, -0.5015097294415213, 5);
  sqcRZGate(q, -0.4313206118598915, 6);
  sqcRZGate(q, -1.004571577650072, 7);
  sqcRZGate(q, -1.7972295895786123, 8);
  sqcRZGate(q, -1.2173330290444528, 9);
  sqcRZGate(q, -0.9934258338178151, 10);
  sqcRZGate(q, -0.24973730652711024, 11);
  sqcRXGate(q, -1.4745352798037963, 0);
  sqcRXGate(q, 3.1371300120526215, 1);
  sqcRXGate(q, 3.12028765052133, 2);
  sqcRXGate(q, 3.133821591979005, 3);
  sqcRXGate(q, -0.007554687687698963, 4);
  sqcRXGate(q, 0.0008475169674019008, 5);
  sqcRXGate(q, 0.001219601594892554, 6);
  sqcRXGate(q, 0.0008620859353864556, 7);
  sqcRXGate(q, -3.140417621704869, 8);
  sqcRXGate(q, -3.1377791155564054, 9);
  sqcRXGate(q, -3.140525730467346, 10);
  sqcRXGate(q, 0.003674477922629917, 11);

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
