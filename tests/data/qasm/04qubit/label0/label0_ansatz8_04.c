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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.2625429705091404, 0);
  sqcRYGate(q, -1.650076144443534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.402647271936575, 0);
  sqcRYGate(q, -2.5500017688023435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3654020610603248, 2);
  sqcRYGate(q, 1.8857466256745408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4959073165801953, 2);
  sqcRYGate(q, 1.6850830844719429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7122459879227774, 0);
  sqcRYGate(q, 2.7381674637130784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.415986340381493, 0);
  sqcRYGate(q, 2.3609212619728575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8267435007729025, 1);
  sqcRYGate(q, 1.193404829704995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.07536325299542537, 1);
  sqcRYGate(q, 1.8113846191177023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.281627113878457, 0);
  sqcRYGate(q, 2.462373105626585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5742537701273589, 0);
  sqcRYGate(q, -1.844982508537869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.008833146570418124, 2);
  sqcRYGate(q, 2.9354250109375655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.672970121866135, 2);
  sqcRYGate(q, 1.5675297029123267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3528959004467689, 0);
  sqcRYGate(q, -1.5319986459646102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7713925265390538, 0);
  sqcRYGate(q, -0.9179308457386415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.976523953774129, 1);
  sqcRYGate(q, 1.0560789197036309, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3202088273981536, 1);
  sqcRYGate(q, -0.5106747552851935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.428380400466916, 0);
  sqcRYGate(q, 0.04211567947306085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5789736341251421, 0);
  sqcRYGate(q, 2.769028734631343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0368388766841377, 2);
  sqcRYGate(q, -0.6262765429235818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2913890146592064, 2);
  sqcRYGate(q, 1.7557000160450464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3356887857532618, 0);
  sqcRYGate(q, -1.0415128794811466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7566332809186445, 0);
  sqcRYGate(q, -1.0509302453434621, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6974138747518062, 1);
  sqcRYGate(q, -3.114217978030906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5281729207445797, 1);
  sqcRYGate(q, 3.0748181003795447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.899621900829994, 0);
  sqcRYGate(q, -1.3504651566502515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6046958808710285, 0);
  sqcRYGate(q, -1.465279963578029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0191672050356946, 2);
  sqcRYGate(q, -1.7386343811336602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3628765493208197, 2);
  sqcRYGate(q, -1.4634206615363423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9561889903763845, 0);
  sqcRYGate(q, 0.46690810944379113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6754279417792193, 0);
  sqcRYGate(q, 1.1435507083722236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4611529412636628, 1);
  sqcRYGate(q, 0.2275892868264678, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.06295191672604172, 1);
  sqcRYGate(q, -1.6746050904779208, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.035778876234363, 0);
  sqcRYGate(q, 0.14691438141907284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.62482355043839, 0);
  sqcRYGate(q, -1.72747689477473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.001462147827446, 2);
  sqcRYGate(q, 0.053042625516472874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.839001151452635, 2);
  sqcRYGate(q, -2.2084714893180557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2263532892060933, 0);
  sqcRYGate(q, 2.538619966283693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28968682478928803, 0);
  sqcRYGate(q, 0.9838845678396559, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9817072856778237, 1);
  sqcRYGate(q, -1.752904955055653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10274767966182807, 1);
  sqcRYGate(q, 2.7274906240735994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.065784091797255, 0);
  sqcRYGate(q, -0.514210790276846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.480151958020806, 0);
  sqcRYGate(q, 1.8985403477792566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3581308299940575, 2);
  sqcRYGate(q, -2.167212693437814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1443657422578326, 2);
  sqcRYGate(q, 0.5634592871325941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.540698894915363, 0);
  sqcRYGate(q, -2.1487090600725143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3607949574121017, 0);
  sqcRYGate(q, -2.9900620373874753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6390180842653379, 1);
  sqcRYGate(q, -0.123915876117624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.35172987508426967, 1);
  sqcRYGate(q, -0.07935479043289319, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3428281016561083, 0);
  sqcRYGate(q, 1.7753968114397436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.905653063483179, 0);
  sqcRYGate(q, -1.2574394884852687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8505180171236835, 2);
  sqcRYGate(q, 1.9378446465266173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8030274728916904, 2);
  sqcRYGate(q, -1.5096307114510836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9221165037810408, 0);
  sqcRYGate(q, 1.5973078257355444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.835903998936801, 0);
  sqcRYGate(q, -0.3967452765521669, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.829517253725707, 1);
  sqcRYGate(q, 1.3064927854931234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.328352411579877, 1);
  sqcRYGate(q, -3.0610246279009585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2934065565376295, 0);
  sqcRYGate(q, -1.991619120120657, 1);
  sqcRYGate(q, -0.3871631978299206, 2);
  sqcRYGate(q, 2.0410971999459866, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
