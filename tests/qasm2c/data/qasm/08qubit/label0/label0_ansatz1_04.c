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

  sqcRYGate(q, 2.6000373777503896, 0);
  sqcRZGate(q, 1.134413217542387, 0);
  sqcRYGate(q, 0.03124467282305212, 1);
  sqcRZGate(q, -2.986962961799366, 1);
  sqcRYGate(q, 3.1286551020172477, 2);
  sqcRZGate(q, -0.2983274620401577, 2);
  sqcRYGate(q, 0.033711613749615184, 3);
  sqcRZGate(q, 0.2237450076553335, 3);
  sqcRYGate(q, -0.2829734068546479, 4);
  sqcRZGate(q, 1.6672962447444764, 4);
  sqcRYGate(q, 1.2447595012829131, 5);
  sqcRZGate(q, -1.0671772582379946, 5);
  sqcRYGate(q, 0.011826168743641396, 6);
  sqcRZGate(q, -1.5192799903394096, 6);
  sqcRYGate(q, -2.206543661566185, 7);
  sqcRZGate(q, 2.6136488944271243, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8615265481851317, 0);
  sqcRZGate(q, -0.03486457618688885, 0);
  sqcRYGate(q, 0.04014541663920128, 1);
  sqcRZGate(q, 0.255261677130725, 1);
  sqcRYGate(q, -0.032912463987687, 2);
  sqcRZGate(q, 1.2812358373103123, 2);
  sqcRYGate(q, 1.7722573489228957, 3);
  sqcRZGate(q, 1.393121772685677, 3);
  sqcRYGate(q, -1.3880993546438765, 4);
  sqcRZGate(q, -0.2798540012946748, 4);
  sqcRYGate(q, -3.064826873949238, 5);
  sqcRZGate(q, 0.4402540031809947, 5);
  sqcRYGate(q, -1.413182033294914, 6);
  sqcRZGate(q, -2.5289269430072694, 6);
  sqcRYGate(q, -2.3882422328423907, 7);
  sqcRZGate(q, 0.7643787262348483, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9905739771712718, 0);
  sqcRZGate(q, 1.763271303343565, 0);
  sqcRYGate(q, 0.02110324998115167, 1);
  sqcRZGate(q, -0.01770029971276177, 1);
  sqcRYGate(q, 2.379180835343876, 2);
  sqcRZGate(q, -2.187275575005769, 2);
  sqcRYGate(q, 2.2778615262515363, 3);
  sqcRZGate(q, 3.1402300121203646, 3);
  sqcRYGate(q, 3.082678791473316, 4);
  sqcRZGate(q, -3.1284138382319684, 4);
  sqcRYGate(q, -2.870204031083535, 5);
  sqcRZGate(q, 3.141506949134552, 5);
  sqcRYGate(q, 3.130446833418685, 6);
  sqcRZGate(q, 2.9860671115895996, 6);
  sqcRYGate(q, -0.03204506927170847, 7);
  sqcRZGate(q, -2.225977208543925, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.66899339510382, 0);
  sqcRZGate(q, 0.15459183503616658, 0);
  sqcRYGate(q, -1.26651147006678, 1);
  sqcRZGate(q, 1.0630129045101198, 1);
  sqcRYGate(q, 0.036119221642542894, 2);
  sqcRZGate(q, 2.166985463875875, 2);
  sqcRYGate(q, 0.21899264211606975, 3);
  sqcRZGate(q, -0.0011335055230432545, 3);
  sqcRYGate(q, -2.8794288836086186, 4);
  sqcRZGate(q, -0.0003193075004856994, 4);
  sqcRYGate(q, -1.336253540280529, 5);
  sqcRZGate(q, -0.0021954821476500657, 5);
  sqcRYGate(q, 2.978400184246627, 6);
  sqcRZGate(q, -1.6882592417403144, 6);
  sqcRYGate(q, 2.7609530571705116, 7);
  sqcRZGate(q, 0.28778423588035285, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1390030487823037, 0);
  sqcRZGate(q, 1.986121864730072, 0);
  sqcRYGate(q, -2.864353692056515, 1);
  sqcRZGate(q, 1.0974256553738055, 1);
  sqcRYGate(q, 1.505807550409798, 2);
  sqcRZGate(q, -3.1384821743796234, 2);
  sqcRYGate(q, -0.8684713269920694, 3);
  sqcRZGate(q, -2.9391124003061972, 3);
  sqcRYGate(q, -3.1372319208466335, 4);
  sqcRZGate(q, 0.028130238431571364, 4);
  sqcRYGate(q, -2.9114308757322287, 5);
  sqcRZGate(q, -0.08616411376020473, 5);
  sqcRYGate(q, 2.71608308337703, 6);
  sqcRZGate(q, 0.13792606943789545, 6);
  sqcRYGate(q, 2.9226459173442856, 7);
  sqcRZGate(q, 3.137292249110152, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.039531092811609776, 0);
  sqcRZGate(q, -0.4449413288663093, 0);
  sqcRYGate(q, 1.020980175339142, 1);
  sqcRZGate(q, 1.2184696121730905, 1);
  sqcRYGate(q, 1.601459368709439, 2);
  sqcRZGate(q, -0.0008259311376770385, 2);
  sqcRYGate(q, 3.1395091628943246, 3);
  sqcRZGate(q, 0.1368139514625275, 3);
  sqcRYGate(q, -2.5172345365328743, 4);
  sqcRZGate(q, 0.07408795576136706, 4);
  sqcRYGate(q, -2.9338724265930525, 5);
  sqcRZGate(q, -0.16642268966683457, 5);
  sqcRYGate(q, -2.546536339985532, 6);
  sqcRZGate(q, -0.9363872890807272, 6);
  sqcRYGate(q, 2.1858618414008264, 7);
  sqcRZGate(q, -0.9484473383541746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8816771428124657, 0);
  sqcRZGate(q, 3.1091259732954746, 0);
  sqcRYGate(q, 1.598652032927605, 1);
  sqcRZGate(q, -2.9119961522670312, 1);
  sqcRYGate(q, -1.3090229593052272, 2);
  sqcRZGate(q, -3.072502192429249, 2);
  sqcRYGate(q, 3.1128579613530145, 3);
  sqcRZGate(q, 2.903551014419297, 3);
  sqcRYGate(q, 3.0936624992133033, 4);
  sqcRZGate(q, 1.8582416364418302, 4);
  sqcRYGate(q, -3.1255503190408773, 5);
  sqcRZGate(q, 0.5676366892155498, 5);
  sqcRYGate(q, 3.136686552922846, 6);
  sqcRZGate(q, -1.7860271838902748, 6);
  sqcRYGate(q, 0.6776663704384078, 7);
  sqcRZGate(q, -0.17054021622664536, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5706109277309115, 0);
  sqcRZGate(q, -0.0007400111594648705, 0);
  sqcRYGate(q, -3.1333025746203713, 1);
  sqcRZGate(q, -1.3358539004130172, 1);
  sqcRYGate(q, -0.12563534139269805, 2);
  sqcRZGate(q, -1.6333053790530334, 2);
  sqcRYGate(q, 0.11209313777613665, 3);
  sqcRZGate(q, -1.399507486080947, 3);
  sqcRYGate(q, -0.019808969912678224, 4);
  sqcRZGate(q, 2.8694410279065083, 4);
  sqcRYGate(q, 0.0012991799964265263, 5);
  sqcRZGate(q, 0.8993129034343043, 5);
  sqcRYGate(q, 0.02391619523740207, 6);
  sqcRZGate(q, 2.4650454695534942, 6);
  sqcRYGate(q, -2.1272336508851506, 7);
  sqcRZGate(q, 2.2381758532857163, 7);

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
