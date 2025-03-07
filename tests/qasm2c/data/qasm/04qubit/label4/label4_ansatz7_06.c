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

  sqcRYGate(q, -2.203914293182888, 0);
  sqcRYGate(q, 1.6573473592397856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.005632582870834778, 0);
  sqcRYGate(q, -0.10921244926031903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1737006051744796, 0);
  sqcRYGate(q, 1.530621260231733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.802459085072147, 0);
  sqcRYGate(q, 2.1232352048334944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.394918935197326, 0);
  sqcRYGate(q, 1.7483100547649537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.584503399280569, 0);
  sqcRYGate(q, 2.523921736214698, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8203152392377675, 1);
  sqcRYGate(q, -1.4414390827954775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.000349280805044, 1);
  sqcRYGate(q, 2.9842241941493137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3328872594850507, 1);
  sqcRYGate(q, 1.8849970418476476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.338580749857572, 1);
  sqcRYGate(q, 2.97663376796021, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2273582701130745, 2);
  sqcRYGate(q, -2.808524751260359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2488598266187545, 2);
  sqcRYGate(q, 0.37569831135890336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06405449498502946, 0);
  sqcRYGate(q, -2.363265598051776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7730903204815904, 0);
  sqcRYGate(q, 0.970455775597003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4592934239302346, 0);
  sqcRYGate(q, 1.2472365118640003, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08636191073644829, 0);
  sqcRYGate(q, 0.12816981954397091, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.22857501950659564, 0);
  sqcRYGate(q, 1.5375982679916786, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.409323790130636, 0);
  sqcRYGate(q, 1.182084485462747, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8625028532677144, 1);
  sqcRYGate(q, 2.8491561397479863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7589219459512064, 1);
  sqcRYGate(q, -0.3962884310228809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0839113750779106, 1);
  sqcRYGate(q, -3.0312517679128463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0118352823985015, 1);
  sqcRYGate(q, -1.1028944193487273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5748155648309123, 2);
  sqcRYGate(q, 2.3256029181484883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.838680871747675, 2);
  sqcRYGate(q, -2.4298002576867934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15108648747975975, 0);
  sqcRYGate(q, 2.604343686884545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17744344197481274, 0);
  sqcRYGate(q, 2.8388105324007378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1565935710978597, 0);
  sqcRYGate(q, 0.5043965541072121, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2111967524318656, 0);
  sqcRYGate(q, -0.24738240831537528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.232230219371544, 0);
  sqcRYGate(q, -0.7567391421799625, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.263481104370256, 0);
  sqcRYGate(q, 1.6697845149231423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.800645513945307, 1);
  sqcRYGate(q, 0.5342162178915535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8229853770932274, 1);
  sqcRYGate(q, 2.775071487181829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8375311124723708, 1);
  sqcRYGate(q, 2.3055140416766116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9739872287990365, 1);
  sqcRYGate(q, 2.9194605780891623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7704340827360285, 2);
  sqcRYGate(q, -0.4359640403453975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8489389907702627, 2);
  sqcRYGate(q, 2.7396322426057833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.962515091661727, 0);
  sqcRYGate(q, 0.9045830797636581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8418723450573291, 0);
  sqcRYGate(q, 0.005624140722675364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.638270260690955, 0);
  sqcRYGate(q, 0.36540122174142453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9267649728381433, 0);
  sqcRYGate(q, 2.133447105265423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6232021974299258, 0);
  sqcRYGate(q, -0.29300489312516564, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8468445218167175, 0);
  sqcRYGate(q, 3.047206809659141, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.609529211968261, 1);
  sqcRYGate(q, -1.5442823298138961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21743650171839865, 1);
  sqcRYGate(q, -1.927950933134801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4042969183177467, 1);
  sqcRYGate(q, 2.8139656580036294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5141604577506653, 1);
  sqcRYGate(q, 1.3687930150799055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1210226154680076, 2);
  sqcRYGate(q, 0.008047742771493472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7005634686771826, 2);
  sqcRYGate(q, -0.9719597264925338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4364544133661523, 0);
  sqcRYGate(q, 3.007135019358607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6403053883253698, 0);
  sqcRYGate(q, 1.2461137855238489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.279033818739543, 0);
  sqcRYGate(q, 2.0717396909846384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18946020645170766, 0);
  sqcRYGate(q, 0.2271729543364458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.177012724660295, 0);
  sqcRYGate(q, -0.5569594656633807, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4541347261537758, 0);
  sqcRYGate(q, -0.20695389167656889, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7226917272115552, 1);
  sqcRYGate(q, 0.8167307139921967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7014863331146115, 1);
  sqcRYGate(q, -2.557767536269516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2126534134244, 1);
  sqcRYGate(q, 2.911719554419612, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5451525839867415, 1);
  sqcRYGate(q, 1.4187074962780246, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4188594167867907, 2);
  sqcRYGate(q, 1.09717520986892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.073115004886075, 2);
  sqcRYGate(q, -1.3798526910696547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6199440838611965, 0);
  sqcRYGate(q, 0.29072169293726285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7707523990285843, 0);
  sqcRYGate(q, 2.5137352632906453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.098323440974338, 0);
  sqcRYGate(q, 0.2877088289857852, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1366166379121238, 0);
  sqcRYGate(q, 2.619982509684922, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5531237789211083, 0);
  sqcRYGate(q, -0.20822419927971492, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.04525242335081803, 0);
  sqcRYGate(q, 2.725784363281164, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6979989003339497, 1);
  sqcRYGate(q, 2.914256072061038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22708166254288348, 1);
  sqcRYGate(q, 1.0586070545183066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.088459214790383, 1);
  sqcRYGate(q, -2.4574388249076664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.20694877383722332, 1);
  sqcRYGate(q, -3.0253097513722396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8901274473857894, 2);
  sqcRYGate(q, 2.2679194674045453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12307870304678836, 2);
  sqcRYGate(q, -2.374219870356796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5235198372173241, 0);
  sqcRYGate(q, -2.752765538697796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.44189985208639904, 0);
  sqcRYGate(q, -0.644013256386697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3988799949264035, 0);
  sqcRYGate(q, -0.1559058930710533, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1702562210746787, 0);
  sqcRYGate(q, 1.2889687094836972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.17928761383175265, 0);
  sqcRYGate(q, 0.5916253966613166, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.394044743958336, 0);
  sqcRYGate(q, 0.5296752209357805, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.024870078536137, 1);
  sqcRYGate(q, 2.4110873534872144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.157615032207234, 1);
  sqcRYGate(q, 0.025454362071696934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5287493900680991, 1);
  sqcRYGate(q, 0.6799975098415576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.021691804330615128, 1);
  sqcRYGate(q, -1.8196600498480588, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.214762995352557, 2);
  sqcRYGate(q, 2.108449898354162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.34907775771189425, 2);
  sqcRYGate(q, -0.8799370578855941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9396180050052807, 0);
  sqcRYGate(q, -0.613311083853284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.013733586508759, 0);
  sqcRYGate(q, 2.5115341225660277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8229640247835952, 0);
  sqcRYGate(q, 2.8634748367609983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5005902636076396, 0);
  sqcRYGate(q, 1.260775054082498, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0059134838806676, 0);
  sqcRYGate(q, -1.233553526948839, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.937067891922757, 0);
  sqcRYGate(q, -0.9855329264502615, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8431448798667334, 1);
  sqcRYGate(q, 0.9093271458915453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05236749841620512, 1);
  sqcRYGate(q, 0.10438872811257571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6471245835929631, 1);
  sqcRYGate(q, -2.014476842296535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0449361107153434, 1);
  sqcRYGate(q, -1.984752132470704, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4737352423021135, 2);
  sqcRYGate(q, 0.003935631182874211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.208522416686832, 2);
  sqcRYGate(q, -0.14898161978350277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5824107907690266, 0);
  sqcRYGate(q, -2.1624453328208633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.465606068764132, 0);
  sqcRYGate(q, -2.9430527182419075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0815226825920474, 0);
  sqcRYGate(q, 2.0573477572344063, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8703360301171275, 0);
  sqcRYGate(q, 0.9278738413887915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3948870692390338, 0);
  sqcRYGate(q, -2.9589998089337697, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.10939763693434212, 0);
  sqcRYGate(q, 1.8002154955919023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8980260573025594, 1);
  sqcRYGate(q, -1.8999612664226693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5845818433155423, 1);
  sqcRYGate(q, -0.16243749513468853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5666754040167508, 1);
  sqcRYGate(q, -2.57795429819576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5973697475557272, 1);
  sqcRYGate(q, 1.1912874538892737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7150537900025125, 2);
  sqcRYGate(q, -2.7192456118916817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7046815191612286, 2);
  sqcRYGate(q, 2.063650655684147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45681350192233783, 0);
  sqcRYGate(q, 1.4346852879974046, 1);
  sqcRYGate(q, -2.958652875801441, 2);
  sqcRYGate(q, 2.893361427458138, 3);

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
