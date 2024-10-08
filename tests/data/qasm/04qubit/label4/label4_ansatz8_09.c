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

  sqcRYGate(q, -1.65969193277168, 0);
  sqcRYGate(q, 0.4135435042543349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.32021649078491876, 0);
  sqcRYGate(q, 1.3257022912216136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41194780073794607, 2);
  sqcRYGate(q, -1.6175192262053883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.790426180664472, 2);
  sqcRYGate(q, 1.8951191501167235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.64326807202288, 0);
  sqcRYGate(q, -1.1566008914319017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6174366985988531, 0);
  sqcRYGate(q, -0.3976189905028625, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9191912279643342, 1);
  sqcRYGate(q, -2.5795507116816108, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.758325844633432, 1);
  sqcRYGate(q, -1.0671407484323032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5769643789866041, 0);
  sqcRYGate(q, -1.131090412003604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8330072065258437, 0);
  sqcRYGate(q, 2.8950846962056467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.748093933227767, 2);
  sqcRYGate(q, -2.167151645814222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6835617662175406, 2);
  sqcRYGate(q, -3.120849758448487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8021172288048115, 0);
  sqcRYGate(q, 0.7725105483493548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.934378806144109, 0);
  sqcRYGate(q, 0.10199197139750726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.788020181541845, 1);
  sqcRYGate(q, -2.9885244040189898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.30226611942584364, 1);
  sqcRYGate(q, 1.7497380334198447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1012915748704963, 0);
  sqcRYGate(q, 2.50080159605702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8202814615334886, 0);
  sqcRYGate(q, -2.1712211715523857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7506613814800973, 2);
  sqcRYGate(q, 1.1382133981185918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4522786420249636, 2);
  sqcRYGate(q, -1.139012241759211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9797641740556804, 0);
  sqcRYGate(q, 0.9671470494847716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.998161968792335, 0);
  sqcRYGate(q, 0.6479844290482379, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2354172442243976, 1);
  sqcRYGate(q, 0.2876180488671345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8127855552212185, 1);
  sqcRYGate(q, -1.4267835696643427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7705552290590428, 0);
  sqcRYGate(q, -0.9132798436944739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4047119291059902, 0);
  sqcRYGate(q, -0.503761752629444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0581172042208875, 2);
  sqcRYGate(q, -2.640885081924697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2330443065813963, 2);
  sqcRYGate(q, 0.6257226488434282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9075976717217578, 0);
  sqcRYGate(q, -2.4919161883011567, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.473604582668045, 0);
  sqcRYGate(q, 1.3818726771315226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6368469195497743, 1);
  sqcRYGate(q, -0.7653309661106175, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9844149829412805, 1);
  sqcRYGate(q, -0.1882491462061564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0880786586751086, 0);
  sqcRYGate(q, -2.7740532642917604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10050297506213647, 0);
  sqcRYGate(q, 0.6917393166793966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8157490275493116, 2);
  sqcRYGate(q, -1.7837690772452857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.458935088020941, 2);
  sqcRYGate(q, -2.2857584494921372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1971989522604565, 0);
  sqcRYGate(q, 1.7029840050556686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5123271529012268, 0);
  sqcRYGate(q, 1.0751349498851157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9950216026424172, 1);
  sqcRYGate(q, 0.009757030427129719, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6742752750750407, 1);
  sqcRYGate(q, 0.3037333045796107, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.854271365940395, 0);
  sqcRYGate(q, -0.42695753394572655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.309611597653937, 0);
  sqcRYGate(q, 2.0938475973033697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5605395030973228, 2);
  sqcRYGate(q, -0.8100887256323963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7469872849908121, 2);
  sqcRYGate(q, 1.5787055684295845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.650518298908032, 0);
  sqcRYGate(q, -1.3684969239458988, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5722912186455273, 0);
  sqcRYGate(q, -2.0780251369878444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.84738937208962, 1);
  sqcRYGate(q, -3.106579821169589, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6587064531401294, 1);
  sqcRYGate(q, 1.8407959342816511, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5092850044414368, 0);
  sqcRYGate(q, 2.1611996860632803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.471353301743332, 0);
  sqcRYGate(q, -1.0885440006922273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0377065440233957, 2);
  sqcRYGate(q, -0.6294970732492625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4045046024148766, 2);
  sqcRYGate(q, -2.377922767124267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.138338433194005, 0);
  sqcRYGate(q, -0.4551842984118055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0767465768022311, 0);
  sqcRYGate(q, 1.4746626512844916, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.953954444486806, 1);
  sqcRYGate(q, -1.6840964843532538, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.29252962231038726, 1);
  sqcRYGate(q, -1.6502588302997376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.524715507590032, 0);
  sqcRYGate(q, -1.909680724044235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.219761412541946, 0);
  sqcRYGate(q, 1.4128329603369787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0668381268578133, 2);
  sqcRYGate(q, 1.17866517640333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4759812895526525, 2);
  sqcRYGate(q, 2.333651321331477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8290501414580032, 0);
  sqcRYGate(q, -1.6006111768610465, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7428262705135223, 0);
  sqcRYGate(q, -1.202261271526981, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5105127693177836, 1);
  sqcRYGate(q, -1.2723375923393858, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.169540125715903, 1);
  sqcRYGate(q, -1.7974892164588443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2825524287146508, 0);
  sqcRYGate(q, 3.131031193559898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.115260817509015, 0);
  sqcRYGate(q, -2.1960444596424598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17059115786208118, 2);
  sqcRYGate(q, -0.1540879870215015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9970437289552656, 2);
  sqcRYGate(q, 0.5533493514027059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3750092841245456, 0);
  sqcRYGate(q, -1.55069304773115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14855508223974837, 0);
  sqcRYGate(q, -1.3000720769120653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3114046694056088, 1);
  sqcRYGate(q, -1.111681924340103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6965516933803757, 1);
  sqcRYGate(q, 1.5679843406576826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.912770053616118, 0);
  sqcRYGate(q, 0.6903102147845344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.068508946680711, 0);
  sqcRYGate(q, -0.7699970013899851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6093274331510106, 2);
  sqcRYGate(q, 2.930063801239141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.664342129359297, 2);
  sqcRYGate(q, -0.08023631666490517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0261673534914317, 0);
  sqcRYGate(q, 0.030482205683393104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5687161501024907, 0);
  sqcRYGate(q, -0.2705830112277523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5269212857779424, 1);
  sqcRYGate(q, -0.9162832333007698, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.739979300605124, 1);
  sqcRYGate(q, 0.1938927696230692, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6410525260402222, 0);
  sqcRYGate(q, 1.04455122004657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7416971784975877, 0);
  sqcRYGate(q, 0.6701503283567805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1110145220301035, 2);
  sqcRYGate(q, 3.068694465535401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3851037403539888, 2);
  sqcRYGate(q, -1.019265743054513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6122818847837485, 0);
  sqcRYGate(q, -1.2119887070374755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5099553068220444, 0);
  sqcRYGate(q, -0.8805915651374677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6867158574267949, 1);
  sqcRYGate(q, 1.0374788152259522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9978680363319405, 1);
  sqcRYGate(q, 1.7084645317483833, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9278074106061156, 0);
  sqcRYGate(q, -2.6096056148896487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.324957414268799, 0);
  sqcRYGate(q, -1.1974100777877401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8459995624598, 2);
  sqcRYGate(q, -0.3008653740937381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.929372277336882, 2);
  sqcRYGate(q, 0.5214085727460809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2504645755348973, 0);
  sqcRYGate(q, 0.636795716545409, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7886592537417982, 0);
  sqcRYGate(q, -2.2346553878691138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0466388888456999, 1);
  sqcRYGate(q, 1.150485213748257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.20933984287329913, 1);
  sqcRYGate(q, 0.002980065373757345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8764525156108176, 0);
  sqcRYGate(q, 0.2839019877714079, 1);
  sqcRYGate(q, -3.0554020229879963, 2);
  sqcRYGate(q, 1.9626970941804363, 3);

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
