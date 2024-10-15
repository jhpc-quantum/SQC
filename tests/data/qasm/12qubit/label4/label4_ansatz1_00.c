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

  sqcRYGate(q, -1.570804056237204, 0);
  sqcRZGate(q, -2.498340493256702, 0);
  sqcRYGate(q, 0.8250791984401644, 1);
  sqcRZGate(q, 1.563596826432412, 1);
  sqcRYGate(q, 1.5708139901642495, 2);
  sqcRZGate(q, 3.141521680199224, 2);
  sqcRYGate(q, -1.5707884779274097, 3);
  sqcRZGate(q, 0.12236979500946223, 3);
  sqcRYGate(q, 4.290961921314515e-08, 4);
  sqcRZGate(q, 1.806813626744544, 4);
  sqcRYGate(q, -4.6019858883284475e-05, 5);
  sqcRZGate(q, 1.019577094226397, 5);
  sqcRYGate(q, -2.8540357415502915, 6);
  sqcRZGate(q, -3.141498005815801, 6);
  sqcRYGate(q, 0.3606600574735168, 7);
  sqcRZGate(q, 3.141591046330112, 7);
  sqcRYGate(q, 1.570781498341195, 8);
  sqcRZGate(q, 8.763846003978448e-05, 8);
  sqcRYGate(q, -1.5707892778687054, 9);
  sqcRZGate(q, 1.4410537320624748, 9);
  sqcRYGate(q, -1.5708721093447084, 10);
  sqcRZGate(q, 1.5703136858175013, 10);
  sqcRYGate(q, -1.3375808843534729, 11);
  sqcRZGate(q, 3.141591922323234, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.137519745264383, 0);
  sqcRZGate(q, 2.5392607372478, 0);
  sqcRYGate(q, 1.5707960092136535, 1);
  sqcRZGate(q, -2.809799175781718, 1);
  sqcRYGate(q, -1.570799148862312, 2);
  sqcRZGate(q, 1.5707868663081042, 2);
  sqcRYGate(q, 3.1415918671821346, 3);
  sqcRZGate(q, -3.019187197908807, 3);
  sqcRYGate(q, -1.5708635881969313, 4);
  sqcRZGate(q, -3.0711491058777725, 4);
  sqcRYGate(q, 1.5707739463569679, 5);
  sqcRZGate(q, -1.570824122597151, 5);
  sqcRYGate(q, -1.1444771981587074, 6);
  sqcRZGate(q, 1.062717557154258e-05, 6);
  sqcRYGate(q, -1.5708072652573248, 7);
  sqcRZGate(q, -1.570815649271949, 7);
  sqcRYGate(q, 1.570815946923056, 8);
  sqcRZGate(q, -1.7408288181886955, 8);
  sqcRYGate(q, 2.229144353015956, 9);
  sqcRZGate(q, 2.2512378402216084, 9);
  sqcRYGate(q, -2.9738167732922194, 10);
  sqcRZGate(q, 0.00012360626584140277, 10);
  sqcRYGate(q, 1.570803596194007, 11);
  sqcRZGate(q, 1.5702276562309923, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5707753865110847, 0);
  sqcRZGate(q, 0.0023020131842468312, 0);
  sqcRYGate(q, -1.2594559066769762e-06, 1);
  sqcRZGate(q, 0.7726040917543903, 1);
  sqcRYGate(q, -1.5707940331587418, 2);
  sqcRZGate(q, 1.2855018108749872, 2);
  sqcRYGate(q, 0.31337547672453075, 3);
  sqcRZGate(q, -1.5708198942620788, 3);
  sqcRYGate(q, -0.3089358911478346, 4);
  sqcRZGate(q, -0.009462583265397293, 4);
  sqcRYGate(q, 2.7196645027790103, 5);
  sqcRZGate(q, -1.5707853408970909, 5);
  sqcRYGate(q, -1.5707919486071606, 6);
  sqcRZGate(q, -1.45531747864697, 6);
  sqcRYGate(q, -2.893933521682846, 7);
  sqcRZGate(q, -1.5708213275740452, 7);
  sqcRYGate(q, -2.8569528505064974, 8);
  sqcRZGate(q, 2.8810512195460856, 8);
  sqcRYGate(q, -1.5707742046628645, 9);
  sqcRZGate(q, 3.1415749579877454, 9);
  sqcRYGate(q, 1.5708082898016935, 10);
  sqcRZGate(q, 1.6516897675966498, 10);
  sqcRYGate(q, 1.5706790185649075, 11);
  sqcRZGate(q, 2.6917799029662506, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.010173287258414071, 0);
  sqcRZGate(q, 1.6735883122148472, 0);
  sqcRYGate(q, 9.423257276708341e-07, 1);
  sqcRZGate(q, 0.7701130587001463, 1);
  sqcRYGate(q, 1.5707947489068657, 2);
  sqcRZGate(q, 1.6758231636048748, 2);
  sqcRYGate(q, -1.5707969915655304, 3);
  sqcRZGate(q, -1.2670866911296272, 3);
  sqcRYGate(q, -3.1415127735661437, 4);
  sqcRZGate(q, -3.0449886892520115, 4);
  sqcRYGate(q, 1.5707981416001753, 5);
  sqcRZGate(q, 1.87448652350679, 5);
  sqcRYGate(q, -1.5797069785061642, 6);
  sqcRZGate(q, -1.638412447137073, 6);
  sqcRYGate(q, -1.5708030301531153, 7);
  sqcRZGate(q, 0.29520815631981884, 7);
  sqcRYGate(q, -9.695218217139999e-06, 8);
  sqcRZGate(q, 2.7538773452658356, 8);
  sqcRYGate(q, -1.5707857308873001, 9);
  sqcRZGate(q, -2.846380501043137, 9);
  sqcRYGate(q, -1.6758160400782518, 10);
  sqcRZGate(q, 0.7440020712013786, 10);
  sqcRYGate(q, 0.00011594525730636618, 11);
  sqcRZGate(q, -1.063126758800157, 11);

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
