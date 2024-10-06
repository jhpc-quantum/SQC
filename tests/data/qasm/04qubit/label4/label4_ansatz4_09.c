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

  sqcRYGate(q, 1.8602252900682206, 0);
  sqcRZGate(q, -3.0197078170262532, 0);
  sqcRYGate(q, 1.306402970800039, 1);
  sqcRZGate(q, 2.0390471367332443, 1);
  sqcRYGate(q, -3.0807920521737233, 2);
  sqcRZGate(q, -2.4959326081984172, 2);
  sqcRYGate(q, 3.092905815405084, 3);
  sqcRZGate(q, 2.502972379876302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.546703404226297, 0);
  sqcRZGate(q, 1.0266563086214164, 0);
  sqcRYGate(q, 0.5106583456488814, 1);
  sqcRZGate(q, -0.2509387832583476, 1);
  sqcRYGate(q, -1.8765974705587452, 2);
  sqcRZGate(q, -2.955512122857832, 2);
  sqcRYGate(q, 2.393542431751938, 3);
  sqcRZGate(q, -0.4241102603472529, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6050210614335054, 0);
  sqcRZGate(q, 1.9922589088322882, 0);
  sqcRYGate(q, -2.6748113388691017, 1);
  sqcRZGate(q, -2.276915802576641, 1);
  sqcRYGate(q, 0.49076894728576326, 2);
  sqcRZGate(q, 2.7057849921636796, 2);
  sqcRYGate(q, 0.7501431497210747, 3);
  sqcRZGate(q, 0.5709291919147959, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.628931665494981, 0);
  sqcRZGate(q, 1.2655356443087034, 0);
  sqcRYGate(q, -0.12361572182504776, 1);
  sqcRZGate(q, 0.9549442759295735, 1);
  sqcRYGate(q, 0.350350670712837, 2);
  sqcRZGate(q, -3.0173773394218086, 2);
  sqcRYGate(q, -1.8735221318494588, 3);
  sqcRZGate(q, 0.045209736587090245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.255973529668422, 0);
  sqcRZGate(q, -1.9909179680504907, 0);
  sqcRYGate(q, -2.9542540375141844, 1);
  sqcRZGate(q, -1.6472140553517045, 1);
  sqcRYGate(q, -2.8109461974574637, 2);
  sqcRZGate(q, 0.33720526786700344, 2);
  sqcRYGate(q, -0.94743520057226, 3);
  sqcRZGate(q, 3.100263263557745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7567093388473274, 0);
  sqcRZGate(q, 0.044264734443681064, 0);
  sqcRYGate(q, -0.09037283196943857, 1);
  sqcRZGate(q, -1.6359066465510652, 1);
  sqcRYGate(q, -2.4352370926860076, 2);
  sqcRZGate(q, -1.9659571284232702, 2);
  sqcRYGate(q, 2.961794115961534, 3);
  sqcRZGate(q, 0.9479434682102889, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.127376582730368, 0);
  sqcRZGate(q, 0.16972752659886936, 0);
  sqcRYGate(q, 1.1541303752430405, 1);
  sqcRZGate(q, -1.7204343862775828, 1);
  sqcRYGate(q, -2.1797302117887947, 2);
  sqcRZGate(q, 0.3409262206578925, 2);
  sqcRYGate(q, -0.23590613635937085, 3);
  sqcRZGate(q, 1.296857918706316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1964703033675728, 0);
  sqcRZGate(q, -2.8650967579227387, 0);
  sqcRYGate(q, 2.097154726799852, 1);
  sqcRZGate(q, 1.023534657946188, 1);
  sqcRYGate(q, -1.1215893853745493, 2);
  sqcRZGate(q, 2.2284367512740553, 2);
  sqcRYGate(q, 0.5242031348512189, 3);
  sqcRZGate(q, 2.3928474934021735, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.667916982019406, 0);
  sqcRZGate(q, -1.9261823664236601, 0);
  sqcRYGate(q, -1.949143528221402, 1);
  sqcRZGate(q, -2.8274414072786143, 1);
  sqcRYGate(q, 1.9851573497374178, 2);
  sqcRZGate(q, -2.9490099704044304, 2);
  sqcRYGate(q, -3.035403410923343, 3);
  sqcRZGate(q, 1.579536688680533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2141352562966626, 0);
  sqcRZGate(q, 0.0342561173826077, 0);
  sqcRYGate(q, 2.9036086388301325, 1);
  sqcRZGate(q, -0.37890550594815137, 1);
  sqcRYGate(q, 2.9059318406315358, 2);
  sqcRZGate(q, 0.4260848130190444, 2);
  sqcRYGate(q, 0.07551311620215749, 3);
  sqcRZGate(q, -1.1325372875853303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5676555804731587, 0);
  sqcRZGate(q, 2.3408730154151507, 0);
  sqcRYGate(q, -1.9386135359241572, 1);
  sqcRZGate(q, -2.5541713753187185, 1);
  sqcRYGate(q, 0.4563319992983999, 2);
  sqcRZGate(q, 0.32462063509792044, 2);
  sqcRYGate(q, 1.8611247751288866, 3);
  sqcRZGate(q, -0.2008014559719945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2593696158547565, 0);
  sqcRZGate(q, 1.8729500368109657, 0);
  sqcRYGate(q, 0.3818811720900923, 1);
  sqcRZGate(q, 2.3702565271062848, 1);
  sqcRYGate(q, -2.6080712809823465, 2);
  sqcRZGate(q, -0.3583196712567991, 2);
  sqcRYGate(q, 2.366302246147669, 3);
  sqcRZGate(q, -1.4946736772389526, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9247390393182693, 0);
  sqcRZGate(q, -2.951437890408302, 0);
  sqcRYGate(q, 0.3736808520614421, 1);
  sqcRZGate(q, 0.04152937218185263, 1);
  sqcRYGate(q, 0.7419855193834004, 2);
  sqcRZGate(q, -2.1972713955329506, 2);
  sqcRYGate(q, 1.8842227652434531, 3);
  sqcRZGate(q, 2.4993527952788566, 3);

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
