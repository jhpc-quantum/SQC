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

  sqcRYGate(q, 2.403145452307381, 0);
  sqcRZGate(q, 1.2863420782829422, 0);
  sqcRYGate(q, 0.36721003349613296, 1);
  sqcRZGate(q, -2.133687481212719, 1);
  sqcRYGate(q, 2.233579308848885, 2);
  sqcRZGate(q, 1.2413071981797674, 2);
  sqcRYGate(q, -0.7115650050942666, 3);
  sqcRZGate(q, -2.766628368440277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3575622129163722, 0);
  sqcRZGate(q, -1.2252946663611057, 0);
  sqcRYGate(q, -1.3181621936786023, 1);
  sqcRZGate(q, 2.867551564570817, 1);
  sqcRYGate(q, -0.7661650967986176, 2);
  sqcRZGate(q, 1.5793309271418527, 2);
  sqcRYGate(q, -2.779700717612367, 3);
  sqcRZGate(q, 0.8008094754724668, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1229161284824078, 0);
  sqcRZGate(q, 0.7101025040058957, 0);
  sqcRYGate(q, 3.1365780957255995, 1);
  sqcRZGate(q, 0.12501055705848163, 1);
  sqcRYGate(q, 1.3888342310015809, 2);
  sqcRZGate(q, -0.4333577275890148, 2);
  sqcRYGate(q, -0.660955138656778, 3);
  sqcRZGate(q, 0.728125988756304, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.536355549086659, 0);
  sqcRZGate(q, 1.3388330681305822, 0);
  sqcRYGate(q, -1.1365895739737581, 1);
  sqcRZGate(q, 2.104192624955381, 1);
  sqcRYGate(q, -1.2813533959707, 2);
  sqcRZGate(q, -0.5841671946204541, 2);
  sqcRYGate(q, 1.1988391018366067, 3);
  sqcRZGate(q, 2.307729145564852, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9485909109496, 0);
  sqcRZGate(q, -0.14201274287647261, 0);
  sqcRYGate(q, -0.6431153923827132, 1);
  sqcRZGate(q, -2.630124331654896, 1);
  sqcRYGate(q, -1.95851047273546, 2);
  sqcRZGate(q, 1.4258353314861578, 2);
  sqcRYGate(q, -2.666336236453267, 3);
  sqcRZGate(q, -0.25951093605873693, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2935609013640432, 0);
  sqcRZGate(q, 2.2605558728032893, 0);
  sqcRYGate(q, -0.014206042069847491, 1);
  sqcRZGate(q, 1.6939442476106699, 1);
  sqcRYGate(q, 1.516199702701635, 2);
  sqcRZGate(q, -3.1360939653379467, 2);
  sqcRYGate(q, -0.5957136641342213, 3);
  sqcRZGate(q, -1.3590929269542467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5571008586095936, 0);
  sqcRZGate(q, -0.2360666008767878, 0);
  sqcRYGate(q, -2.6339934718276794, 1);
  sqcRZGate(q, -0.29191451516123834, 1);
  sqcRYGate(q, 0.9004867814663927, 2);
  sqcRZGate(q, -3.112244245963496, 2);
  sqcRYGate(q, 1.3781876088335938, 3);
  sqcRZGate(q, 2.938447040698849, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9052419256500293, 0);
  sqcRZGate(q, 1.079964840304332, 0);
  sqcRYGate(q, -1.1854716287292355, 1);
  sqcRZGate(q, 3.087670442803629, 1);
  sqcRYGate(q, -2.3414172280187384, 2);
  sqcRZGate(q, -2.3390460014981884, 2);
  sqcRYGate(q, -2.4719650481523443, 3);
  sqcRZGate(q, 0.07161759217926814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5455217899361697, 0);
  sqcRZGate(q, 0.5941573148547548, 0);
  sqcRYGate(q, 2.06139411403042, 1);
  sqcRZGate(q, 2.979350716300319, 1);
  sqcRYGate(q, -1.5290318588583904, 2);
  sqcRZGate(q, 2.348069951797422, 2);
  sqcRYGate(q, 1.070800615207963, 3);
  sqcRZGate(q, 2.768296423921588, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.117406198191382, 0);
  sqcRZGate(q, 2.3282227462138176, 0);
  sqcRYGate(q, 2.0614170807539507, 1);
  sqcRZGate(q, 0.6223507957764369, 1);
  sqcRYGate(q, 0.9851772230368133, 2);
  sqcRZGate(q, 2.7654924567465295, 2);
  sqcRYGate(q, 0.7913970239669181, 3);
  sqcRZGate(q, 3.0403395112732756, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8235278262966093, 0);
  sqcRZGate(q, -2.4728276673248826, 0);
  sqcRYGate(q, -2.1826191764967433, 1);
  sqcRZGate(q, -1.1524826704473892, 1);
  sqcRYGate(q, 2.3581663377714506, 2);
  sqcRZGate(q, -1.7730884823973627, 2);
  sqcRYGate(q, -1.4540897143814295, 3);
  sqcRZGate(q, 1.160900825332004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7770701220926131, 0);
  sqcRZGate(q, 1.3050456344539123, 0);
  sqcRYGate(q, -3.04154623658625, 1);
  sqcRZGate(q, -2.9982877393223006, 1);
  sqcRYGate(q, 0.4855865337234801, 2);
  sqcRZGate(q, 0.30725478182268245, 2);
  sqcRYGate(q, -1.3919285762685722, 3);
  sqcRZGate(q, -1.4244847981853672, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3526138769320495, 0);
  sqcRZGate(q, 1.6877333878268526, 0);
  sqcRYGate(q, 2.9884794199561258, 1);
  sqcRZGate(q, -0.7226304579264626, 1);
  sqcRYGate(q, -2.696303756257015, 2);
  sqcRZGate(q, 2.297466303981738, 2);
  sqcRYGate(q, -1.3350543530315788, 3);
  sqcRZGate(q, -0.534742410686774, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0349418630400855, 0);
  sqcRZGate(q, -3.0645831173568356, 0);
  sqcRYGate(q, 1.9004407121459894, 1);
  sqcRZGate(q, -1.3289930859102206, 1);
  sqcRYGate(q, -0.4401831482533565, 2);
  sqcRZGate(q, -1.969527781058933, 2);
  sqcRYGate(q, -2.178517698624294, 3);
  sqcRZGate(q, -0.4395823656433145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8067772614771123, 0);
  sqcRZGate(q, 0.9687492591224087, 0);
  sqcRYGate(q, -1.4633062752619521, 1);
  sqcRZGate(q, 0.8936194106928319, 1);
  sqcRYGate(q, -0.8416770474454154, 2);
  sqcRZGate(q, 0.39448832161695707, 2);
  sqcRYGate(q, -2.4441274759194305, 3);
  sqcRZGate(q, -2.1681822659413577, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7416363069082381, 0);
  sqcRZGate(q, -2.6604242567039758, 0);
  sqcRYGate(q, 1.4697206307850719, 1);
  sqcRZGate(q, -2.036663233681157, 1);
  sqcRYGate(q, -2.624225087956471, 2);
  sqcRZGate(q, -2.2301425641142996, 2);
  sqcRYGate(q, 2.2678432705978713, 3);
  sqcRZGate(q, -0.32823358620941084, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8062769967122625, 0);
  sqcRZGate(q, 1.3954918373218694, 0);
  sqcRYGate(q, -2.3656455444568714, 1);
  sqcRZGate(q, 1.3105964570218562, 1);
  sqcRYGate(q, 0.2529487675069495, 2);
  sqcRZGate(q, 2.42070535453385, 2);
  sqcRYGate(q, -2.5905087143834806, 3);
  sqcRZGate(q, 1.9543130986325299, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9169254161281373, 0);
  sqcRZGate(q, -0.4216410359915299, 0);
  sqcRYGate(q, 1.1920348592651795, 1);
  sqcRZGate(q, 2.789226923702527, 1);
  sqcRYGate(q, 1.6513253395535046, 2);
  sqcRZGate(q, -0.5558527656190249, 2);
  sqcRYGate(q, -0.9633867288324535, 3);
  sqcRZGate(q, 0.4107008820543303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5400076515220453, 0);
  sqcRZGate(q, 2.7804681842272876, 0);
  sqcRYGate(q, -1.9714922133191315, 1);
  sqcRZGate(q, -1.4664069838812492, 1);
  sqcRYGate(q, 1.2662005368009543, 2);
  sqcRZGate(q, 0.12362659069400717, 2);
  sqcRYGate(q, -2.8874331015273045, 3);
  sqcRZGate(q, -1.9805793096353759, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.001792949894026, 0);
  sqcRZGate(q, 1.345186369505965, 0);
  sqcRYGate(q, 1.0890754735067707, 1);
  sqcRZGate(q, -1.6463512211708196, 1);
  sqcRYGate(q, -2.040101310628227, 2);
  sqcRZGate(q, 1.913691705472194, 2);
  sqcRYGate(q, 0.10832653666345467, 3);
  sqcRZGate(q, 0.23299723205239609, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0197391853388131, 0);
  sqcRZGate(q, 1.9470388072315608, 0);
  sqcRYGate(q, 2.1456263083497826, 1);
  sqcRZGate(q, 2.400878351675283, 1);
  sqcRYGate(q, 2.6782525783703472, 2);
  sqcRZGate(q, 1.4969148678758295, 2);
  sqcRYGate(q, 1.9031806779226452, 3);
  sqcRZGate(q, 1.255352051942185, 3);

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
