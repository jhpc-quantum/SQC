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

  sqcRYGate(q, 0.7390316983677554, 0);
  sqcRYGate(q, 0.4041275244926865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3460285974297221, 0);
  sqcRYGate(q, 2.2825974189456932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.223466194002939, 0);
  sqcRYGate(q, -1.3713506533273465, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7538319663553957, 0);
  sqcRYGate(q, -1.0138115804900023, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2512422547353994, 0);
  sqcRYGate(q, 2.4560863261686197, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8572143603878487, 0);
  sqcRYGate(q, 1.1778993883025306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4366600453611351, 1);
  sqcRYGate(q, 0.9796191173945131, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6508927263888595, 1);
  sqcRYGate(q, -0.07077840452283635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1234102384324425, 1);
  sqcRYGate(q, -2.0093104182337314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8021658353238963, 1);
  sqcRYGate(q, -0.6488162431245649, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.219498296164843, 2);
  sqcRYGate(q, 0.4092604741827746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7325285721089031, 2);
  sqcRYGate(q, -0.8513787272636338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9804275854473674, 0);
  sqcRYGate(q, -0.6332855297478268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.017195208969992, 0);
  sqcRYGate(q, -1.7050150697045527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.284594326409455, 0);
  sqcRYGate(q, 2.6525950245050414, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.961097956186737, 0);
  sqcRYGate(q, -1.1744477908241977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8864415898444324, 0);
  sqcRYGate(q, -2.4290613005833728, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5398245125934569, 0);
  sqcRYGate(q, 2.569583659176394, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.43131519575785, 1);
  sqcRYGate(q, 0.8172847211007781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3985136322530183, 1);
  sqcRYGate(q, 2.284532110114747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8023761533116414, 1);
  sqcRYGate(q, -0.7172110362798909, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4863593429538735, 1);
  sqcRYGate(q, -0.6287091972353549, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2274288294402251, 2);
  sqcRYGate(q, -0.4770283993895151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3334453535645188, 2);
  sqcRYGate(q, 1.1606483655556532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6854841545144588, 0);
  sqcRYGate(q, 1.3358438274352857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1265950851833586, 0);
  sqcRYGate(q, -2.600909336152429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7515960882062735, 0);
  sqcRYGate(q, -1.0406115292137237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1980599963843714, 0);
  sqcRYGate(q, -0.7834552555002592, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0751593846128573, 0);
  sqcRYGate(q, 1.8030200545356738, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.323226613895283, 0);
  sqcRYGate(q, -2.8469858861310655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3086332299959782, 1);
  sqcRYGate(q, -1.6898197966539226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.835638075708315, 1);
  sqcRYGate(q, -1.9581715340843004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.220890387618049, 1);
  sqcRYGate(q, 0.8348794903194777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.849580231469923, 1);
  sqcRYGate(q, 2.823773241356372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2180330604989908, 2);
  sqcRYGate(q, -2.403292963732306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4232238383005991, 2);
  sqcRYGate(q, 1.294255877620514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4472345597202718, 0);
  sqcRYGate(q, -2.7876414213496075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.589872625483725, 0);
  sqcRYGate(q, 1.2998583750165817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6913551778746316, 0);
  sqcRYGate(q, -0.9078967321256695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.29383080903937486, 0);
  sqcRYGate(q, -0.33873100715894916, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.020086426204502, 0);
  sqcRYGate(q, -1.6328421944749458, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5992812537360972, 0);
  sqcRYGate(q, -1.1327258873685775, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.898241968441093, 1);
  sqcRYGate(q, -0.712967536010849, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9094427401790743, 1);
  sqcRYGate(q, -2.6951230338509697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.313212315474307, 1);
  sqcRYGate(q, -1.9804537546171623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.12649815641065, 1);
  sqcRYGate(q, -2.2068937701303266, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8322657038132553, 2);
  sqcRYGate(q, 2.6328845519128494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6955533905631457, 2);
  sqcRYGate(q, 3.133856553211764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7763783290836557, 0);
  sqcRYGate(q, 2.120301966508322, 1);
  sqcRYGate(q, -2.509021094451009, 2);
  sqcRYGate(q, -1.1777159507372863, 3);

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
