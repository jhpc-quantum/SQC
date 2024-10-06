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

  sqcRYGate(q, -0.9955089335337961, 0);
  sqcRYGate(q, -2.418781852773471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.851179791345256, 0);
  sqcRYGate(q, 2.495721653057432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.671316287302371, 1);
  sqcRYGate(q, -0.6189603247433919, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.397686880096049, 1);
  sqcRYGate(q, 2.777151313171947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4392042296490404, 2);
  sqcRYGate(q, -2.616407511527814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5572890019280532, 2);
  sqcRYGate(q, 0.8007881863059023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7223418956511878, 0);
  sqcRYGate(q, -1.952370950670499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09298019575776184, 0);
  sqcRYGate(q, 0.3156282799747201, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2263298739279325, 1);
  sqcRYGate(q, 2.4333877025629005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9009208104349941, 1);
  sqcRYGate(q, 3.1326334238954257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1082529560893306, 2);
  sqcRYGate(q, -0.8215763405095565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7577438578048454, 2);
  sqcRYGate(q, 1.9333392057037246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4116105416403138, 0);
  sqcRYGate(q, 0.9130926442122647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.721279471441802, 0);
  sqcRYGate(q, -0.4955115471711089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7830151101943866, 1);
  sqcRYGate(q, 2.81713077801105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.045525297443306, 1);
  sqcRYGate(q, -2.3824606840440445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1721338329347841, 2);
  sqcRYGate(q, -2.0371352091091337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6695655324466699, 2);
  sqcRYGate(q, 0.874352643716337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9158308014783302, 0);
  sqcRYGate(q, -0.9838383334587357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4501411390632444, 0);
  sqcRYGate(q, 1.858238993424866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3904394207656052, 1);
  sqcRYGate(q, 1.3383617165871542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9784156973142684, 1);
  sqcRYGate(q, -1.4588542445151713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21570338569950476, 2);
  sqcRYGate(q, -2.4420741116615545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.504864252909343, 2);
  sqcRYGate(q, 0.3300171178276035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2197637642057115, 0);
  sqcRYGate(q, -0.3615806506345596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38557459959928136, 0);
  sqcRYGate(q, -0.11766733914702954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.869559691909346, 1);
  sqcRYGate(q, -0.6360918574962473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8228082059070005, 1);
  sqcRYGate(q, 2.934298743949307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5651597299368085, 2);
  sqcRYGate(q, 3.0886264617571295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6864951285588354, 2);
  sqcRYGate(q, -0.07549302299480422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.752959687763295, 0);
  sqcRYGate(q, 0.20458595601351784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8839317225743084, 0);
  sqcRYGate(q, -1.8920844973029947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6121272824195336, 1);
  sqcRYGate(q, -1.203476712728641, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5979158165871529, 1);
  sqcRYGate(q, -0.43905747966875547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.457756081525514, 2);
  sqcRYGate(q, 1.5026152524625738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0460846801938766, 2);
  sqcRYGate(q, -0.7781085757258995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8614916401972497, 0);
  sqcRYGate(q, -1.0657450713079504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1736067755761947, 0);
  sqcRYGate(q, 0.7862653656314347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.625660593502929, 1);
  sqcRYGate(q, 0.6172180883480506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4833788136988795, 1);
  sqcRYGate(q, 0.24197463257119933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6141963402155983, 2);
  sqcRYGate(q, -0.24351195419560767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6207865605532368, 2);
  sqcRYGate(q, -1.299966444130962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23329507075002068, 0);
  sqcRYGate(q, -0.6731603093060379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6673550461809603, 0);
  sqcRYGate(q, -2.1191018355810076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.632496119303663, 1);
  sqcRYGate(q, 0.11330710427182937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6304010924996168, 1);
  sqcRYGate(q, 2.486578186148616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7015142752412942, 2);
  sqcRYGate(q, -0.26865463287219526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.177507011120615, 2);
  sqcRYGate(q, -2.220934169067022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6070332342064133, 0);
  sqcRYGate(q, -1.9236726012554222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2422407910141926, 0);
  sqcRYGate(q, -1.5504876454725025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6994921249372068, 1);
  sqcRYGate(q, 1.4941929749043494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.446195931267713, 1);
  sqcRYGate(q, -0.21443188714979938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9556652264800922, 2);
  sqcRYGate(q, 3.0028680393938787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7697195307426385, 2);
  sqcRYGate(q, 3.1231630632438656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6423819039354073, 0);
  sqcRYGate(q, 1.838993423948733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.986395639284049, 0);
  sqcRYGate(q, -2.5895031922750156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.921848661610061, 1);
  sqcRYGate(q, -2.928248405368283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8820307341950504, 1);
  sqcRYGate(q, -2.4246957257135007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.058345376550836, 2);
  sqcRYGate(q, 3.0817663320975783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8785565700315305, 2);
  sqcRYGate(q, 0.20721537320902073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4344475620109052, 0);
  sqcRYGate(q, 2.0964189889695284, 1);
  sqcRYGate(q, 2.5526958092747134, 2);
  sqcRYGate(q, -1.1060243622145194, 3);

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
