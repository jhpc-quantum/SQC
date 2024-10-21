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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.027007553542036433, 0);
  sqcRZGate(q, 0.5226530671062912, 0);
  sqcRYGate(q, -3.0994929255998636, 1);
  sqcRZGate(q, 0.9676585604044964, 1);
  sqcRYGate(q, 1.1051843612241983, 2);
  sqcRZGate(q, -0.0474661371973788, 2);
  sqcRYGate(q, 1.4766221779757682, 3);
  sqcRZGate(q, 0.24584614244522743, 3);
  sqcRYGate(q, 0.26098860814374375, 4);
  sqcRZGate(q, -2.9157963298744596, 4);
  sqcRYGate(q, -2.04496382238468, 5);
  sqcRZGate(q, 0.014898350645840885, 5);
  sqcRYGate(q, -0.4683600126000158, 6);
  sqcRZGate(q, -0.032372882599965805, 6);
  sqcRYGate(q, -2.905879085728367, 7);
  sqcRZGate(q, 0.009407856707381708, 7);
  sqcRYGate(q, -1.092747694168829, 8);
  sqcRZGate(q, -3.1389147379010844, 8);
  sqcRYGate(q, 0.16592608354420957, 9);
  sqcRZGate(q, 0.0016223742330337115, 9);
  sqcRYGate(q, -0.6275632558717847, 10);
  sqcRZGate(q, -3.1351069613038884, 10);
  sqcRYGate(q, -2.3170326237324073, 11);
  sqcRZGate(q, 3.1375917296633635, 11);
  sqcRYGate(q, 2.6377847017896845, 12);
  sqcRZGate(q, -1.6678737344068448, 12);
  sqcRYGate(q, 1.593259680794631, 13);
  sqcRZGate(q, 2.825500520183384, 13);
  sqcRYGate(q, -1.5668145585193072, 14);
  sqcRZGate(q, -0.5693475968975275, 14);
  sqcRYGate(q, 0.02098339143165764, 15);
  sqcRZGate(q, 1.4322885367006923, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1363331048752907, 0);
  sqcRZGate(q, 2.3656261213743046, 0);
  sqcRYGate(q, -1.5023328102645044, 1);
  sqcRZGate(q, -1.3076975665437904, 1);
  sqcRYGate(q, -1.871219028769981, 2);
  sqcRZGate(q, -2.002200866504033, 2);
  sqcRYGate(q, -1.2108263286607972, 3);
  sqcRZGate(q, -3.066184780831916, 3);
  sqcRYGate(q, -0.06173890826229715, 4);
  sqcRZGate(q, 3.0480402958922497, 4);
  sqcRYGate(q, -1.2827872294572824, 5);
  sqcRZGate(q, 3.1315342896147316, 5);
  sqcRYGate(q, -2.9685614158498472, 6);
  sqcRZGate(q, 3.1254165063719728, 6);
  sqcRYGate(q, -0.810133455344328, 7);
  sqcRZGate(q, -3.1394550169836224, 7);
  sqcRYGate(q, 1.720621535170114, 8);
  sqcRZGate(q, -3.1350686866750554, 8);
  sqcRYGate(q, 2.499118161433845, 9);
  sqcRZGate(q, 3.140885089537281, 9);
  sqcRYGate(q, -2.861706072419957, 10);
  sqcRZGate(q, -3.1328393451739998, 10);
  sqcRYGate(q, -1.364112859680917, 11);
  sqcRZGate(q, 3.141320509886796, 11);
  sqcRYGate(q, -0.007685872785104473, 12);
  sqcRZGate(q, -1.4773638665580195, 12);
  sqcRYGate(q, -1.2997417447114907, 13);
  sqcRZGate(q, -3.1076067594390815, 13);
  sqcRYGate(q, 0.6496468407026075, 14);
  sqcRZGate(q, -0.6844859881438312, 14);
  sqcRYGate(q, 3.11026874584839, 15);
  sqcRZGate(q, -1.708430569262533, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.889460801076994, 0);
  sqcRZGate(q, -3.1302090772488014, 0);
  sqcRYGate(q, 1.9136338077773385, 1);
  sqcRZGate(q, 2.6187287155005854, 1);
  sqcRYGate(q, 0.027118583047077927, 2);
  sqcRZGate(q, 2.4626783434133244, 2);
  sqcRYGate(q, -2.2358211552877103, 3);
  sqcRZGate(q, -2.9455055251420075, 3);
  sqcRYGate(q, 2.9061651576474885, 4);
  sqcRZGate(q, 3.1355755217435886, 4);
  sqcRYGate(q, 1.5525244175085535, 5);
  sqcRZGate(q, 0.07313112841613256, 5);
  sqcRYGate(q, 0.21288337705468321, 6);
  sqcRZGate(q, -0.018774724689561317, 6);
  sqcRYGate(q, -2.5253156374020183, 7);
  sqcRZGate(q, -0.005663225327319665, 7);
  sqcRYGate(q, -2.8790380626647716, 8);
  sqcRZGate(q, -3.140739455114465, 8);
  sqcRYGate(q, -2.6078309013285415, 9);
  sqcRZGate(q, 0.0017794784420907058, 9);
  sqcRYGate(q, -2.9176427489561467, 10);
  sqcRZGate(q, -0.0017308657405172574, 10);
  sqcRYGate(q, 1.311406006852067, 11);
  sqcRZGate(q, -3.140263279946194, 11);
  sqcRYGate(q, 3.0162750900615354, 12);
  sqcRZGate(q, -3.1405421247825243, 12);
  sqcRYGate(q, 1.55275363867577, 13);
  sqcRZGate(q, -1.5848775251302154, 13);
  sqcRYGate(q, -1.5851401758235368, 14);
  sqcRZGate(q, -1.9307603890758909, 14);
  sqcRYGate(q, -2.869647890840133, 15);
  sqcRZGate(q, 3.1017431217696614, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5650372527213605, 0);
  sqcRZGate(q, 0.012505400830271185, 0);
  sqcRYGate(q, -3.114138194819532, 1);
  sqcRZGate(q, -2.1887955392610294, 1);
  sqcRYGate(q, 0.38970882814607066, 2);
  sqcRZGate(q, 0.9375014667908026, 2);
  sqcRYGate(q, 2.1091237346513356, 3);
  sqcRZGate(q, -0.01757403014253886, 3);
  sqcRYGate(q, -1.5786209436563077, 4);
  sqcRZGate(q, -3.133023066171706, 4);
  sqcRYGate(q, -2.9168176096721496, 5);
  sqcRZGate(q, -3.054267733879505, 5);
  sqcRYGate(q, 1.2722475259080515, 6);
  sqcRZGate(q, 0.0018057264980928522, 6);
  sqcRYGate(q, -1.3689580577622429, 7);
  sqcRZGate(q, 0.001918610622967313, 7);
  sqcRYGate(q, 1.1844136102819776, 8);
  sqcRZGate(q, 0.0011195356466346953, 8);
  sqcRYGate(q, 1.4352229340340497, 9);
  sqcRZGate(q, 3.1409954876410313, 9);
  sqcRYGate(q, 1.9300753495568586, 10);
  sqcRZGate(q, 3.1410686135368526, 10);
  sqcRYGate(q, 0.28292113270305796, 11);
  sqcRZGate(q, 3.138242272162276, 11);
  sqcRYGate(q, 1.9497753415869101, 12);
  sqcRZGate(q, -3.139892728532199, 12);
  sqcRYGate(q, -0.21458259306378147, 13);
  sqcRZGate(q, 0.029207210555560966, 13);
  sqcRYGate(q, -0.1133834832110514, 14);
  sqcRZGate(q, -2.774831308973706, 14);
  sqcRYGate(q, -1.610280364479475, 15);
  sqcRZGate(q, -0.0012493025451822957, 15);

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
