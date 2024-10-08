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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 3.0804099037237056, 0);
  sqcRZGate(q, 1.9231123716819405, 0);
  sqcRYGate(q, 0.0013371939769428473, 1);
  sqcRZGate(q, -0.5506145210524106, 1);
  sqcRYGate(q, 2.041573048598158, 2);
  sqcRZGate(q, 1.9941911535737624, 2);
  sqcRYGate(q, -2.4460250133839865, 3);
  sqcRZGate(q, 1.2984505268880484, 3);
  sqcRYGate(q, -1.914312262815723, 4);
  sqcRZGate(q, -1.5930890078170026, 4);
  sqcRYGate(q, 1.2324166850984495, 5);
  sqcRZGate(q, -1.4953648282092769, 5);
  sqcRYGate(q, 1.766513067554432, 6);
  sqcRZGate(q, -1.7793674922343632, 6);
  sqcRYGate(q, -2.8265426867049945, 7);
  sqcRZGate(q, -2.5337142309772296, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5515144820695073, 0);
  sqcRZGate(q, -1.512204240540635, 0);
  sqcRYGate(q, 1.434716708006504, 1);
  sqcRZGate(q, -1.1555345900820078, 1);
  sqcRYGate(q, 0.8821782520721531, 2);
  sqcRZGate(q, 0.5272378260070815, 2);
  sqcRYGate(q, 0.2483330420218488, 3);
  sqcRZGate(q, -1.306274462512105, 3);
  sqcRYGate(q, -2.0333455967100407, 4);
  sqcRZGate(q, -3.1182401932662973, 4);
  sqcRYGate(q, 3.1319765786237745, 5);
  sqcRZGate(q, 0.1223442772033998, 5);
  sqcRYGate(q, -0.0013731084925116758, 6);
  sqcRZGate(q, -0.03932686173050726, 6);
  sqcRYGate(q, 1.861123477154048, 7);
  sqcRZGate(q, -2.85942741635892, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1698503193021355, 0);
  sqcRZGate(q, -0.6396458776820708, 0);
  sqcRYGate(q, 1.5721168314360219, 1);
  sqcRZGate(q, -1.5678627018165887, 1);
  sqcRYGate(q, -3.1304523107071023, 2);
  sqcRZGate(q, 1.9972225930117131, 2);
  sqcRYGate(q, -0.4983720418698109, 3);
  sqcRZGate(q, -1.8102279568706188, 3);
  sqcRYGate(q, 0.7927439532540657, 4);
  sqcRZGate(q, 1.547458376991335, 4);
  sqcRYGate(q, 2.072328190074179, 5);
  sqcRZGate(q, 0.5144081241184237, 5);
  sqcRYGate(q, 2.590476169875658, 6);
  sqcRZGate(q, -2.657426014854024, 6);
  sqcRYGate(q, 2.664053876672339, 7);
  sqcRZGate(q, 0.34100845403136937, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.025679622503556487, 0);
  sqcRZGate(q, 2.177705655551854, 0);
  sqcRYGate(q, 1.5582638438067262, 1);
  sqcRZGate(q, -2.1882566950208995, 1);
  sqcRYGate(q, -0.000808986891890702, 2);
  sqcRZGate(q, -0.4798007636110675, 2);
  sqcRYGate(q, -0.48202838178706564, 3);
  sqcRZGate(q, 0.1219594780430695, 3);
  sqcRYGate(q, -2.4210268976035367, 4);
  sqcRZGate(q, -2.76782320529952, 4);
  sqcRYGate(q, -2.6563070761008403, 5);
  sqcRZGate(q, -2.5616456072909477, 5);
  sqcRYGate(q, 2.004684833421262, 6);
  sqcRZGate(q, 0.10671995748957368, 6);
  sqcRYGate(q, -0.171985110073952, 7);
  sqcRZGate(q, 3.00747116854365, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.39839927819867693, 0);
  sqcRZGate(q, 3.1270290117993973, 0);
  sqcRYGate(q, -1.2054025270560826, 1);
  sqcRZGate(q, -0.681584625512903, 1);
  sqcRYGate(q, 1.5703760846608399, 2);
  sqcRZGate(q, 3.140919323130759, 2);
  sqcRYGate(q, 0.3852554219965079, 3);
  sqcRZGate(q, -0.714991193320465, 3);
  sqcRYGate(q, -0.5720345309187644, 4);
  sqcRZGate(q, -1.1152932575627716, 4);
  sqcRYGate(q, 1.7653335568438953, 5);
  sqcRZGate(q, -1.1469737343354103, 5);
  sqcRYGate(q, 0.002918828683416308, 6);
  sqcRZGate(q, 1.5094787885054224, 6);
  sqcRYGate(q, -0.0008091344620080321, 7);
  sqcRZGate(q, 2.134585272691326, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.139968289431693, 0);
  sqcRZGate(q, -1.7541903988388556, 0);
  sqcRYGate(q, -1.5719227720076114, 1);
  sqcRZGate(q, -2.6244714691420326, 1);
  sqcRYGate(q, -1.571579281223956, 2);
  sqcRZGate(q, 0.5953894747090365, 2);
  sqcRYGate(q, -1.570906158095232, 3);
  sqcRZGate(q, -1.571421523271064, 3);
  sqcRYGate(q, 2.895835412074057, 4);
  sqcRZGate(q, -0.0943987641763284, 4);
  sqcRYGate(q, -1.4663818269002826, 5);
  sqcRZGate(q, 1.984576955918594, 5);
  sqcRYGate(q, 1.686845473392781, 6);
  sqcRZGate(q, 0.21902892847731328, 6);
  sqcRYGate(q, 1.8592951871400034, 7);
  sqcRZGate(q, 0.17488833331439224, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5459726916430396, 0);
  sqcRZGate(q, 2.9562351895435297, 0);
  sqcRYGate(q, 1.569810258002712, 1);
  sqcRZGate(q, -0.6411636767323055, 1);
  sqcRYGate(q, 1.885098905747352, 2);
  sqcRZGate(q, 0.7820061695218782, 2);
  sqcRYGate(q, -1.569082967375417, 3);
  sqcRZGate(q, -0.5607822492511743, 3);
  sqcRYGate(q, 3.139598057608005, 4);
  sqcRZGate(q, 2.2355617947205704, 4);
  sqcRYGate(q, 1.2183281028956032, 5);
  sqcRZGate(q, 0.8005495259101689, 5);
  sqcRYGate(q, 1.5729496550321855, 6);
  sqcRZGate(q, 0.000979774610644135, 6);
  sqcRYGate(q, 0.26425119313849177, 7);
  sqcRZGate(q, -3.101535173223972, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5198265361400667, 0);
  sqcRZGate(q, 1.3119970716588276, 0);
  sqcRYGate(q, 0.004341273187309538, 1);
  sqcRZGate(q, -0.9360053116735297, 1);
  sqcRYGate(q, -1.9445604511873293, 2);
  sqcRZGate(q, 1.1327591985651189, 2);
  sqcRYGate(q, 3.141508693000023, 3);
  sqcRZGate(q, 2.580447370814875, 3);
  sqcRYGate(q, -1.574396757428027, 4);
  sqcRZGate(q, -1.570369791130938, 4);
  sqcRYGate(q, -3.139799059674626, 5);
  sqcRZGate(q, 1.8883121005305217, 5);
  sqcRYGate(q, 2.9864989160501, 6);
  sqcRZGate(q, -3.140042071636461, 6);
  sqcRYGate(q, -1.5771094665064498, 7);
  sqcRZGate(q, 1.384656612996114, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9412989130436227, 0);
  sqcRZGate(q, -2.198582674109354, 0);
  sqcRYGate(q, 0.11697723673344326, 1);
  sqcRZGate(q, 0.0055315222687257635, 1);
  sqcRYGate(q, 1.778065841265243, 2);
  sqcRZGate(q, 2.1783694653255665, 2);
  sqcRYGate(q, -1.0180753830329543, 3);
  sqcRZGate(q, -0.0009907716385745653, 3);
  sqcRYGate(q, -1.5712568589798561, 4);
  sqcRZGate(q, 3.1342718838694634, 4);
  sqcRYGate(q, 1.5719082636980133, 5);
  sqcRZGate(q, 1.5699963964203452, 5);
  sqcRYGate(q, 0.39425609584825505, 6);
  sqcRZGate(q, 0.10492224087673561, 6);
  sqcRYGate(q, -1.5237124408516738, 7);
  sqcRZGate(q, 0.5045310334583899, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1754834470667608, 0);
  sqcRZGate(q, 1.3401894880144107, 0);
  sqcRYGate(q, -1.5694664594137526, 1);
  sqcRZGate(q, -0.005737377133489651, 1);
  sqcRYGate(q, 1.687295530029699, 2);
  sqcRZGate(q, -0.06322822123307859, 2);
  sqcRYGate(q, -1.571726611385957, 3);
  sqcRZGate(q, -3.1377470790532254, 3);
  sqcRYGate(q, -2.927172881150465, 4);
  sqcRZGate(q, 3.139101994476407, 4);
  sqcRYGate(q, 1.5709782208670173, 5);
  sqcRZGate(q, 2.386515078097578, 5);
  sqcRYGate(q, -3.1409390072125425, 6);
  sqcRZGate(q, 1.7097154004458768, 6);
  sqcRYGate(q, -0.271575257572092, 7);
  sqcRZGate(q, -2.6741968295693583, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.140611426928928, 0);
  sqcRZGate(q, 1.3630551511320979, 0);
  sqcRYGate(q, -1.5836680965922323, 1);
  sqcRZGate(q, -3.136695415699898, 1);
  sqcRYGate(q, -1.4668721927069548, 2);
  sqcRZGate(q, -2.704165243801846, 2);
  sqcRYGate(q, 2.956467091346323, 3);
  sqcRZGate(q, 2.9931084547068867, 3);
  sqcRYGate(q, -1.5707194683160675, 4);
  sqcRZGate(q, 3.1391505831679076, 4);
  sqcRYGate(q, 0.007453487945779442, 5);
  sqcRZGate(q, 2.3259580881596547, 5);
  sqcRYGate(q, 0.0003335756054737664, 6);
  sqcRZGate(q, 1.6718580031595105, 6);
  sqcRYGate(q, 1.0300583750980126, 7);
  sqcRZGate(q, -0.43112161304960683, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6191282321586713, 0);
  sqcRZGate(q, -1.3790862601626157e-06, 0);
  sqcRYGate(q, 1.5711877413636477, 1);
  sqcRZGate(q, -3.1406052911739963, 1);
  sqcRYGate(q, 2.856475684520757, 2);
  sqcRZGate(q, -2.8732197471836343, 2);
  sqcRYGate(q, 1.5707363685386169, 3);
  sqcRZGate(q, -0.049403834082023756, 3);
  sqcRYGate(q, -2.9306450795683303, 4);
  sqcRZGate(q, 1.5684164690403963, 4);
  sqcRYGate(q, 1.5708526782553127, 5);
  sqcRZGate(q, -0.29816056014523973, 5);
  sqcRYGate(q, -3.1402468795508587, 6);
  sqcRZGate(q, -3.015979609740337, 6);
  sqcRYGate(q, -1.9167207311888363, 7);
  sqcRZGate(q, -1.6201252178113545, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.572110536277706, 0);
  sqcRZGate(q, 1.5667863291644444, 0);
  sqcRYGate(q, -1.3367420422055565, 1);
  sqcRZGate(q, -1.5714438982034133, 1);
  sqcRYGate(q, -1.5714758471059482, 2);
  sqcRZGate(q, -0.006484570714939686, 2);
  sqcRYGate(q, -3.1394697848481017, 3);
  sqcRZGate(q, 3.05956660414631, 3);
  sqcRYGate(q, -0.7945303401689996, 4);
  sqcRZGate(q, 0.860887667965323, 4);
  sqcRYGate(q, 1.5756356043065995, 5);
  sqcRZGate(q, -2.2043634519104653, 5);
  sqcRYGate(q, -1.5706561244602322, 6);
  sqcRZGate(q, -1.5718463062325592, 6);
  sqcRYGate(q, 1.7556290337013163, 7);
  sqcRZGate(q, 0.7887865054015418, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3994024611705194, 0);
  sqcRZGate(q, -1.5705728752756354, 0);
  sqcRYGate(q, -1.5709406302568256, 1);
  sqcRZGate(q, 3.1415226326303882, 1);
  sqcRYGate(q, -2.9585255797839505, 2);
  sqcRZGate(q, 1.5643875095745874, 2);
  sqcRYGate(q, 0.0003349753055319482, 3);
  sqcRZGate(q, -1.4218854339634646, 3);
  sqcRYGate(q, 1.795098621138063, 4);
  sqcRZGate(q, -1.150988681291578, 4);
  sqcRYGate(q, 3.0536618098542854, 5);
  sqcRZGate(q, -1.8838173223279018, 5);
  sqcRYGate(q, 1.5710402811135626, 6);
  sqcRZGate(q, 3.0526693445242907, 6);
  sqcRYGate(q, -0.03902979529672828, 7);
  sqcRZGate(q, -0.010847757503636087, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.570661366776042, 0);
  sqcRZGate(q, -1.5707656722295207, 0);
  sqcRYGate(q, -1.5705571805977718, 1);
  sqcRZGate(q, -0.00010652983593750774, 1);
  sqcRYGate(q, 1.570113209142381, 2);
  sqcRZGate(q, -0.9601424523060155, 2);
  sqcRYGate(q, 9.318092913623843e-05, 3);
  sqcRZGate(q, -1.687086848050166, 3);
  sqcRYGate(q, -3.1408684472422914, 4);
  sqcRZGate(q, 0.16792244190126412, 4);
  sqcRYGate(q, 0.0004914428243738554, 5);
  sqcRZGate(q, -1.89162716173656, 5);
  sqcRYGate(q, 0.01162706354055009, 6);
  sqcRZGate(q, -2.669935404428923, 6);
  sqcRYGate(q, 1.5708112548604092, 7);
  sqcRZGate(q, -0.00013136650776780556, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.569495084264106, 0);
  sqcRZGate(q, -1.333932052415445, 0);
  sqcRYGate(q, -1.5708620769916308, 1);
  sqcRZGate(q, 0.4741237110877554, 1);
  sqcRYGate(q, -3.140613177295832, 2);
  sqcRZGate(q, -0.7230128951847127, 2);
  sqcRYGate(q, -1.570560717821775, 3);
  sqcRZGate(q, 2.0464167120359473, 3);
  sqcRYGate(q, -0.7391988123906934, 4);
  sqcRZGate(q, -2.5681206250284747, 4);
  sqcRYGate(q, 1.6418672890202046, 5);
  sqcRZGate(q, 0.4224376803401162, 5);
  sqcRYGate(q, -0.0001566237308070267, 6);
  sqcRZGate(q, 1.4290152296560088, 6);
  sqcRYGate(q, 1.6100954929299167, 7);
  sqcRZGate(q, -1.0954364244743011, 7);

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
