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

  sqcRYGate(q, 1.2070875175374516, 0);
  sqcRZGate(q, 1.380584524284041, 0);
  sqcRYGate(q, -3.0895081018357256, 1);
  sqcRZGate(q, -0.5025046855928821, 1);
  sqcRYGate(q, -2.4844695592934167, 2);
  sqcRZGate(q, 2.5507344656021855, 2);
  sqcRYGate(q, -2.000811704140655, 3);
  sqcRZGate(q, -0.3137490721108626, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.045147488019543, 0);
  sqcRZGate(q, -1.8991179941584024, 0);
  sqcRYGate(q, -0.9738918547737524, 1);
  sqcRZGate(q, 2.497411618754959, 1);
  sqcRYGate(q, 2.835309651913492, 2);
  sqcRZGate(q, -1.3205399982708905, 2);
  sqcRYGate(q, -1.1509696731793895, 3);
  sqcRZGate(q, -1.223112826470891, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.765623869811507, 0);
  sqcRZGate(q, 1.2059379040565243, 0);
  sqcRYGate(q, -0.1978276349868236, 1);
  sqcRZGate(q, -1.7735236595683581, 1);
  sqcRYGate(q, -0.12453298683030195, 2);
  sqcRZGate(q, -2.4918256768580873, 2);
  sqcRYGate(q, -1.330027619084155, 3);
  sqcRZGate(q, -0.07848175283452452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.048262202077656, 0);
  sqcRZGate(q, 0.3239446440447706, 0);
  sqcRYGate(q, 1.5322146778464087, 1);
  sqcRZGate(q, -1.6049409187041193, 1);
  sqcRYGate(q, 2.9649115671124124, 2);
  sqcRZGate(q, -2.245093947330171, 2);
  sqcRYGate(q, 1.09063936447314, 3);
  sqcRZGate(q, 1.7409997818805758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.509348931233023, 0);
  sqcRZGate(q, 2.126938923460692, 0);
  sqcRYGate(q, -2.2838566049876876, 1);
  sqcRZGate(q, 2.300395466523504, 1);
  sqcRYGate(q, -2.5267215665788276, 2);
  sqcRZGate(q, 0.43715220355973966, 2);
  sqcRYGate(q, -2.695666343595578, 3);
  sqcRZGate(q, -1.0392656594746643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.462219927179455, 0);
  sqcRZGate(q, 2.9394323786543306, 0);
  sqcRYGate(q, -1.842824177393446, 1);
  sqcRZGate(q, 0.21259726355041508, 1);
  sqcRYGate(q, 2.640480683061772, 2);
  sqcRZGate(q, -1.6422715468925966, 2);
  sqcRYGate(q, 2.9706389744518398, 3);
  sqcRZGate(q, 0.2766256440776198, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8790388941482473, 0);
  sqcRZGate(q, -0.29905134040413067, 0);
  sqcRYGate(q, -1.1048576593912882, 1);
  sqcRZGate(q, -1.943838203920393, 1);
  sqcRYGate(q, -1.499772893837465, 2);
  sqcRZGate(q, 2.44031830741346, 2);
  sqcRYGate(q, 1.871626826415899, 3);
  sqcRZGate(q, -0.3094070804849087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1311588445413125, 0);
  sqcRZGate(q, 2.623384516136643, 0);
  sqcRYGate(q, -1.2077480208013098, 1);
  sqcRZGate(q, 0.12346536213607083, 1);
  sqcRYGate(q, 0.33913791161086376, 2);
  sqcRZGate(q, -0.39366771968162967, 2);
  sqcRYGate(q, -1.588334297191704, 3);
  sqcRZGate(q, -0.5736990395900117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.12661068597793, 0);
  sqcRZGate(q, 1.4719770898054094, 0);
  sqcRYGate(q, -1.129610764126937, 1);
  sqcRZGate(q, -1.9279725341966727, 1);
  sqcRYGate(q, -2.6610222783902664, 2);
  sqcRZGate(q, -1.3156273718282607, 2);
  sqcRYGate(q, -1.153640475288439, 3);
  sqcRZGate(q, 2.04047981630554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.395866128915955, 0);
  sqcRZGate(q, -2.6247570534687235, 0);
  sqcRYGate(q, 0.7467272457654672, 1);
  sqcRZGate(q, -0.09877467100599002, 1);
  sqcRYGate(q, 1.543113176578595, 2);
  sqcRZGate(q, 0.8611347494944468, 2);
  sqcRYGate(q, -0.08044953973193214, 3);
  sqcRZGate(q, 3.0338865284778382, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.519600970987522, 0);
  sqcRZGate(q, -2.4612700161813583, 0);
  sqcRYGate(q, 0.9602310633774709, 1);
  sqcRZGate(q, -3.1019091777274386, 1);
  sqcRYGate(q, -1.8168938658184537, 2);
  sqcRZGate(q, 2.5459953629181578, 2);
  sqcRYGate(q, 2.6160902456885538, 3);
  sqcRZGate(q, -2.5313435704093186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.34269610800701233, 0);
  sqcRZGate(q, 2.804364778042225, 0);
  sqcRYGate(q, 1.6494681676173581, 1);
  sqcRZGate(q, -0.6175494432412013, 1);
  sqcRYGate(q, 1.0574229835395874, 2);
  sqcRZGate(q, 1.7116674451778993, 2);
  sqcRYGate(q, -2.563507085608601, 3);
  sqcRZGate(q, -1.710148199598307, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.20816742728712787, 0);
  sqcRZGate(q, -2.8372465440629493, 0);
  sqcRYGate(q, 2.3492195094898656, 1);
  sqcRZGate(q, -0.6340275053504065, 1);
  sqcRYGate(q, -3.110168644858907, 2);
  sqcRZGate(q, -1.633834427595286, 2);
  sqcRYGate(q, -0.6845817595690491, 3);
  sqcRZGate(q, 2.168131115629964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.375895849042414, 0);
  sqcRZGate(q, -2.8048189934682224, 0);
  sqcRYGate(q, -2.002853552707714, 1);
  sqcRZGate(q, -1.207487699695725, 1);
  sqcRYGate(q, -1.0093579234781052, 2);
  sqcRZGate(q, 2.723689025733506, 2);
  sqcRYGate(q, -0.3535362616707944, 3);
  sqcRZGate(q, -1.0696321910615583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.2388449439063871, 0);
  sqcRZGate(q, 3.011121861633585, 0);
  sqcRYGate(q, 0.21096960956374886, 1);
  sqcRZGate(q, 1.6053373479575677, 1);
  sqcRYGate(q, 1.273460470221625, 2);
  sqcRZGate(q, 0.6942825253682432, 2);
  sqcRYGate(q, -2.6033698741127975, 3);
  sqcRZGate(q, -2.426956101082617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1110923173101566, 0);
  sqcRZGate(q, -1.334714123585135, 0);
  sqcRYGate(q, 1.661679523740606, 1);
  sqcRZGate(q, 0.5187230277194521, 1);
  sqcRYGate(q, -0.7484661916839446, 2);
  sqcRZGate(q, 2.1656813353632636, 2);
  sqcRYGate(q, -1.9121817142489501, 3);
  sqcRZGate(q, 2.468939502351922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6384299065691839, 0);
  sqcRZGate(q, -0.3445263936538739, 0);
  sqcRYGate(q, 1.788421501725178, 1);
  sqcRZGate(q, -2.635224179456843, 1);
  sqcRYGate(q, 1.5118098807781182, 2);
  sqcRZGate(q, -1.1949733332781811, 2);
  sqcRYGate(q, -1.2020062665165945, 3);
  sqcRZGate(q, -1.029375857434391, 3);

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
