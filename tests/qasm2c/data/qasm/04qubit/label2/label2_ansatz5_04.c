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

  sqcRYGate(q, -0.7679991977107641, 0);
  sqcRYGate(q, -2.661941137383794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2427010294275123, 0);
  sqcRYGate(q, -1.2882371819705871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5913148744795067, 2);
  sqcRYGate(q, -0.09361249532159006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9205678986571604, 2);
  sqcRYGate(q, 1.891477266098036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.181491782639361, 1);
  sqcRYGate(q, -0.0050606815128872995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1859483979888346, 1);
  sqcRYGate(q, 2.5101464882238473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.365230813373807, 0);
  sqcRYGate(q, -1.0357665961386466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.240220527263015, 0);
  sqcRYGate(q, -0.1510296175272181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.604926492613616, 2);
  sqcRYGate(q, -2.1893542687952188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7251329795829813, 2);
  sqcRYGate(q, 0.34213137848950326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7392631989085574, 1);
  sqcRYGate(q, -1.5617203801958084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5505830938643799, 1);
  sqcRYGate(q, -0.02025920021026454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7050865836685248, 0);
  sqcRYGate(q, -1.7129111926884146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8963298127583966, 0);
  sqcRYGate(q, -1.4054889994140598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04954994335165087, 2);
  sqcRYGate(q, 2.5964789365142873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6147490431140947, 2);
  sqcRYGate(q, 1.8074622733163856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0830963029876868, 1);
  sqcRYGate(q, -2.4474758781250068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.270877313206352, 1);
  sqcRYGate(q, 1.296471207483406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22322175330207614, 0);
  sqcRYGate(q, 2.483288827289623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.313381795772385, 0);
  sqcRYGate(q, -2.867185710223398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8078368722727591, 2);
  sqcRYGate(q, 2.7257128795467693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6689493929274772, 2);
  sqcRYGate(q, 3.1280751180209014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47157815241034823, 1);
  sqcRYGate(q, 2.3371532521038367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.889780015462934, 1);
  sqcRYGate(q, -0.908075023622123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1743850248375416, 0);
  sqcRYGate(q, 2.754388918507533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.470749631798111, 0);
  sqcRYGate(q, -1.8923412967301594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.272608551334284, 2);
  sqcRYGate(q, 0.2442040972363477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.016923212359514, 2);
  sqcRYGate(q, -1.1130018905344663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46400853333745307, 1);
  sqcRYGate(q, 0.5164222693270325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7097913927940125, 1);
  sqcRYGate(q, 2.5783887397940335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4517064060782108, 0);
  sqcRYGate(q, -1.870015392368477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.539843315702015, 0);
  sqcRYGate(q, -0.2514423199417878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.623297471360961, 2);
  sqcRYGate(q, -2.214250749362118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9224062079699379, 2);
  sqcRYGate(q, 2.825050746935636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2116879470254807, 1);
  sqcRYGate(q, -2.527990451754586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8131073057713182, 1);
  sqcRYGate(q, 0.2320084695567246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9034941946211673, 0);
  sqcRYGate(q, 1.0949337052759052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1988551190992267, 0);
  sqcRYGate(q, 1.6979651636110786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09092971794584415, 2);
  sqcRYGate(q, 1.262013324937271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1778107457225646, 2);
  sqcRYGate(q, -0.8289412868416491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3730987521851432, 1);
  sqcRYGate(q, -1.4949892026113674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.344725715394424, 1);
  sqcRYGate(q, 0.7048953544431897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8204729005367506, 0);
  sqcRYGate(q, 1.4469905738417517, 1);
  sqcRYGate(q, -2.5681928811501242, 2);
  sqcRYGate(q, 1.8622603317619935, 3);

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
