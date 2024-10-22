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

  sqcRYGate(q, 2.319133041803943, 0);
  sqcRZGate(q, -1.629992846707947, 0);
  sqcRYGate(q, -0.5538488453780265, 1);
  sqcRZGate(q, -0.33585792535782005, 1);
  sqcRYGate(q, 0.9406213956382086, 2);
  sqcRZGate(q, -2.248605131765832, 2);
  sqcRYGate(q, -0.0338397710826591, 3);
  sqcRZGate(q, -1.0496304471484414, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1086790178736035, 0);
  sqcRZGate(q, -1.6664480760450973, 0);
  sqcRYGate(q, 1.5890135923284427, 1);
  sqcRZGate(q, 2.7304895797603552, 1);
  sqcRYGate(q, 0.8100020760876254, 2);
  sqcRZGate(q, -1.7988907662424882, 2);
  sqcRYGate(q, 1.707713773245703, 3);
  sqcRZGate(q, 0.16633543532080886, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0932994355203163, 0);
  sqcRZGate(q, 0.8351459269219766, 0);
  sqcRYGate(q, 1.5146370648542176, 1);
  sqcRZGate(q, 1.0995529257935934, 1);
  sqcRYGate(q, 0.4122904252023645, 2);
  sqcRZGate(q, -2.680548257171663, 2);
  sqcRYGate(q, -0.8804988756809744, 3);
  sqcRZGate(q, -1.0856932562878978, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.20986486892528153, 0);
  sqcRZGate(q, -2.5411995732881603, 0);
  sqcRYGate(q, -3.0786734696506834, 1);
  sqcRZGate(q, -2.2272204525000805, 1);
  sqcRYGate(q, 0.814842510390952, 2);
  sqcRZGate(q, -1.8164584315751477, 2);
  sqcRYGate(q, -2.949521230327953, 3);
  sqcRZGate(q, 1.8447487520375718, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.5452448342957767, 0);
  sqcRZGate(q, -2.2393713929667416, 0);
  sqcRYGate(q, 1.7200528467995673, 1);
  sqcRZGate(q, 0.7089953277260125, 1);
  sqcRYGate(q, -0.10852646368287999, 2);
  sqcRZGate(q, -1.349306052149118, 2);
  sqcRYGate(q, 1.3272018837988977, 3);
  sqcRZGate(q, 2.4795486057210807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4840751665150327, 0);
  sqcRZGate(q, -1.8671285069405859, 0);
  sqcRYGate(q, 2.7975683792720334, 1);
  sqcRZGate(q, 0.43891771859916134, 1);
  sqcRYGate(q, -2.515640401961509, 2);
  sqcRZGate(q, -0.40692838031752493, 2);
  sqcRYGate(q, -0.883930575016362, 3);
  sqcRZGate(q, 1.4988348361143669, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7745575636301107, 0);
  sqcRZGate(q, 0.26059231014465783, 0);
  sqcRYGate(q, 0.30036806480193157, 1);
  sqcRZGate(q, -1.9556832935026287, 1);
  sqcRYGate(q, -2.9009108117235787, 2);
  sqcRZGate(q, 0.8220790542847114, 2);
  sqcRYGate(q, -0.3800173373236651, 3);
  sqcRZGate(q, 2.384226173993647, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9827105896106474, 0);
  sqcRZGate(q, -2.384883108360854, 0);
  sqcRYGate(q, 2.3411461298822256, 1);
  sqcRZGate(q, -2.4762499635706554, 1);
  sqcRYGate(q, 0.7540847786412677, 2);
  sqcRZGate(q, -1.6945586818047602, 2);
  sqcRYGate(q, 2.111678377655838, 3);
  sqcRZGate(q, -2.845142578690943, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.678051740369727, 0);
  sqcRZGate(q, -2.2629788861991504, 0);
  sqcRYGate(q, -1.1573356477302053, 1);
  sqcRZGate(q, 0.3763172353903805, 1);
  sqcRYGate(q, -2.0806564730190678, 2);
  sqcRZGate(q, 2.6667602366864016, 2);
  sqcRYGate(q, 2.5220274294457696, 3);
  sqcRZGate(q, -1.931598601026684, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4529445397682235, 0);
  sqcRZGate(q, -0.3366805903448139, 0);
  sqcRYGate(q, 1.0454255877250065, 1);
  sqcRZGate(q, -2.8645498001781893, 1);
  sqcRYGate(q, -2.9962585104208554, 2);
  sqcRZGate(q, 1.2042117560928522, 2);
  sqcRYGate(q, 1.6745110469952218, 3);
  sqcRZGate(q, 0.6486263146227564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8430791654594945, 0);
  sqcRZGate(q, 1.0390697464178285, 0);
  sqcRYGate(q, 2.5484367026086456, 1);
  sqcRZGate(q, 0.38080599446631247, 1);
  sqcRYGate(q, -1.0111131789461811, 2);
  sqcRZGate(q, -2.7891608832306765, 2);
  sqcRYGate(q, 1.7176924529852626, 3);
  sqcRZGate(q, 2.045593522375147, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7779384349405774, 0);
  sqcRZGate(q, -1.0512869650407315, 0);
  sqcRYGate(q, 0.8877959557129822, 1);
  sqcRZGate(q, 2.2637250346027926, 1);
  sqcRYGate(q, -0.5866766571475077, 2);
  sqcRZGate(q, 1.3662019698572918, 2);
  sqcRYGate(q, 1.666438531554629, 3);
  sqcRZGate(q, 2.376683655397238, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0495814946142774, 0);
  sqcRZGate(q, 1.6793896112643507, 0);
  sqcRYGate(q, -0.5198186790385995, 1);
  sqcRZGate(q, 1.4374038592082672, 1);
  sqcRYGate(q, -0.7900572275004888, 2);
  sqcRZGate(q, 1.712103152322264, 2);
  sqcRYGate(q, 1.4731481060006146, 3);
  sqcRZGate(q, -0.2935795981452192, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4020041060320465, 0);
  sqcRZGate(q, -1.3061968462325542, 0);
  sqcRYGate(q, 2.7143352830215832, 1);
  sqcRZGate(q, 3.1084350944451353, 1);
  sqcRYGate(q, 0.08985908786521184, 2);
  sqcRZGate(q, -2.828090580204382, 2);
  sqcRYGate(q, 1.3262608675453107, 3);
  sqcRZGate(q, -1.5601311263236486, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.095736591537092, 0);
  sqcRZGate(q, 3.097615321515447, 0);
  sqcRYGate(q, -2.7115307881648527, 1);
  sqcRZGate(q, 2.3690463448137455, 1);
  sqcRYGate(q, 1.3239588831696003, 2);
  sqcRZGate(q, 2.5337580880439927, 2);
  sqcRYGate(q, 1.6382544812537034, 3);
  sqcRZGate(q, 2.766587721096463, 3);

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
