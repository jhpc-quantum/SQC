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

  sqcRYGate(q, -0.4884476481136608, 0);
  sqcRZGate(q, -0.7356114056173739, 0);
  sqcRYGate(q, 0.8730325594381022, 1);
  sqcRZGate(q, 1.8067279194138877, 1);
  sqcRYGate(q, -1.0211106051832828, 2);
  sqcRZGate(q, -0.4921359741237117, 2);
  sqcRYGate(q, 1.0031366283843166, 3);
  sqcRZGate(q, -2.7752054028863906, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0695948578940682, 0);
  sqcRZGate(q, 2.4860678244404646, 0);
  sqcRYGate(q, 1.7352299410323906, 1);
  sqcRZGate(q, -3.111302630758001, 1);
  sqcRYGate(q, 1.725824951081036, 2);
  sqcRZGate(q, -3.053650733837506, 2);
  sqcRYGate(q, -1.5701296518268109, 3);
  sqcRZGate(q, -0.15905011165203709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0028622741097335, 0);
  sqcRZGate(q, -1.9232043691396186, 0);
  sqcRYGate(q, 1.6711624313095526, 1);
  sqcRZGate(q, -1.3645917088503925, 1);
  sqcRYGate(q, -0.8107540588108094, 2);
  sqcRZGate(q, -3.102915569834567, 2);
  sqcRYGate(q, -1.486547818539812, 3);
  sqcRZGate(q, 1.2950464945271296, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.105256414923905, 0);
  sqcRZGate(q, -2.6506958724089498, 0);
  sqcRYGate(q, 1.6885065718713985, 1);
  sqcRZGate(q, 2.566781529427978, 1);
  sqcRYGate(q, 1.1369298891622925, 2);
  sqcRZGate(q, -1.6801458681977302, 2);
  sqcRYGate(q, 0.24799604202794925, 3);
  sqcRZGate(q, 0.9943817354537127, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.1967182624133068, 0);
  sqcRZGate(q, 1.8252711190536628, 0);
  sqcRYGate(q, -1.6321400387223326, 1);
  sqcRZGate(q, -2.790496984351662, 1);
  sqcRYGate(q, -1.0492371343323805, 2);
  sqcRZGate(q, 0.757896307391053, 2);
  sqcRYGate(q, -2.8513391932955052, 3);
  sqcRZGate(q, -0.8821419101822461, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6420882327525674, 0);
  sqcRZGate(q, 0.06311832233549554, 0);
  sqcRYGate(q, 1.3647174158432014, 1);
  sqcRZGate(q, -2.914842659216164, 1);
  sqcRYGate(q, 1.9066480772333696, 2);
  sqcRZGate(q, 0.4534853242053416, 2);
  sqcRYGate(q, 1.1183962755620351, 3);
  sqcRZGate(q, 1.6684250450169433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3462195683635878, 0);
  sqcRZGate(q, 0.7838696510300558, 0);
  sqcRYGate(q, -0.2424449765893455, 1);
  sqcRZGate(q, 2.6491044573018145, 1);
  sqcRYGate(q, 0.9988616875466209, 2);
  sqcRZGate(q, -0.6959330506014281, 2);
  sqcRYGate(q, 1.7577428911052149, 3);
  sqcRZGate(q, 0.11592067059880139, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7458274360361896, 0);
  sqcRZGate(q, 0.31867254297005493, 0);
  sqcRYGate(q, -2.801917502480798, 1);
  sqcRZGate(q, -2.5479047269603496, 1);
  sqcRYGate(q, 1.9707948908239379, 2);
  sqcRZGate(q, 1.97658252323972, 2);
  sqcRYGate(q, 1.1377431637893576, 3);
  sqcRZGate(q, 1.5799447796148793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.13139387006298667, 0);
  sqcRZGate(q, -1.674829699223347, 0);
  sqcRYGate(q, 0.5985612218348616, 1);
  sqcRZGate(q, -0.7710401535682578, 1);
  sqcRYGate(q, 0.019065996524207485, 2);
  sqcRZGate(q, 1.7463185237803303, 2);
  sqcRYGate(q, -1.6873950016212365, 3);
  sqcRZGate(q, 1.6141850532371373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8446636345395316, 0);
  sqcRZGate(q, -3.125441634554141, 0);
  sqcRYGate(q, 2.119002571935428, 1);
  sqcRZGate(q, 2.2874785999648464, 1);
  sqcRYGate(q, 0.5864108062526876, 2);
  sqcRZGate(q, -2.940552223181234, 2);
  sqcRYGate(q, -0.13169389455547964, 3);
  sqcRZGate(q, -0.7217165339608638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6786710487778571, 0);
  sqcRZGate(q, 2.4869824404469716, 0);
  sqcRYGate(q, -0.7359286906008463, 1);
  sqcRZGate(q, -2.5812933681900034, 1);
  sqcRYGate(q, -1.0028573030789474, 2);
  sqcRZGate(q, -0.7918259190928185, 2);
  sqcRYGate(q, -2.6642927299054127, 3);
  sqcRZGate(q, -0.9684186005747346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.583444896683274, 0);
  sqcRZGate(q, -1.30432931621635, 0);
  sqcRYGate(q, -1.3262936562116563, 1);
  sqcRZGate(q, -2.250166838866499, 1);
  sqcRYGate(q, 2.6975298731928543, 2);
  sqcRZGate(q, -3.135529400701797, 2);
  sqcRYGate(q, -1.6307360960489259, 3);
  sqcRZGate(q, -2.466063451746595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.24593898670520883, 0);
  sqcRZGate(q, -2.1224611278673713, 0);
  sqcRYGate(q, 3.0578321349310773, 1);
  sqcRZGate(q, -1.5890991571204296, 1);
  sqcRYGate(q, 1.0256220996742844, 2);
  sqcRZGate(q, 1.8461519708837406, 2);
  sqcRYGate(q, 0.522637120401928, 3);
  sqcRZGate(q, 2.4512492792344687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6737858160120638, 0);
  sqcRZGate(q, 1.9466996487214911, 0);
  sqcRYGate(q, -2.737128958913966, 1);
  sqcRZGate(q, -2.364765509852451, 1);
  sqcRYGate(q, -1.8696770367991988, 2);
  sqcRZGate(q, 0.863870724915096, 2);
  sqcRYGate(q, -0.8776469734456338, 3);
  sqcRZGate(q, 2.0900992528419033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2253558279691603, 0);
  sqcRZGate(q, -0.9595942800607205, 0);
  sqcRYGate(q, -1.9773276765990146, 1);
  sqcRZGate(q, -1.5528988186879449, 1);
  sqcRYGate(q, -0.22621213393364098, 2);
  sqcRZGate(q, 2.466309355291534, 2);
  sqcRYGate(q, 1.865653196343723, 3);
  sqcRZGate(q, 2.7740467895337346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.429486047552659, 0);
  sqcRZGate(q, -2.6708946004994853, 0);
  sqcRYGate(q, 0.22520345252968357, 1);
  sqcRZGate(q, 0.47771902613457684, 1);
  sqcRYGate(q, 1.8679734267842703, 2);
  sqcRZGate(q, 2.8327009490412496, 2);
  sqcRYGate(q, -2.9618685575316115, 3);
  sqcRZGate(q, 2.1003334738325137, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.967464719459564, 0);
  sqcRZGate(q, -3.083690530092184, 0);
  sqcRYGate(q, 1.6122004855458862, 1);
  sqcRZGate(q, -1.5471877049868237, 1);
  sqcRYGate(q, 1.8840818349502855, 2);
  sqcRZGate(q, -1.1567320309709532, 2);
  sqcRYGate(q, 2.9649586064662046, 3);
  sqcRZGate(q, 1.6868363820480115, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2056791753299336, 0);
  sqcRZGate(q, -0.1126614041265467, 0);
  sqcRYGate(q, -1.8836197448958112, 1);
  sqcRZGate(q, -1.5113636017589682, 1);
  sqcRYGate(q, -1.8648208927624, 2);
  sqcRZGate(q, 0.8083997464899655, 2);
  sqcRYGate(q, 0.031182400197657122, 3);
  sqcRZGate(q, -1.3823842795968266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6389014889695934, 0);
  sqcRZGate(q, 2.5742599457660735, 0);
  sqcRYGate(q, -0.8819049800785993, 1);
  sqcRZGate(q, 0.4158228690239439, 1);
  sqcRYGate(q, 2.257372831509511, 2);
  sqcRZGate(q, 0.6514014052538893, 2);
  sqcRYGate(q, -0.9385111851643185, 3);
  sqcRZGate(q, -2.326377988594007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5464786448230705, 0);
  sqcRZGate(q, -2.8346928204440442, 0);
  sqcRYGate(q, 0.7807841104654168, 1);
  sqcRZGate(q, -0.13055572949563998, 1);
  sqcRYGate(q, 0.21975756774845134, 2);
  sqcRZGate(q, -2.9008340527448464, 2);
  sqcRYGate(q, -2.5228501161995496, 3);
  sqcRZGate(q, -0.9211960291515457, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.22999590540123968, 0);
  sqcRZGate(q, 0.9303863353144299, 0);
  sqcRYGate(q, 1.1433941348136358, 1);
  sqcRZGate(q, -2.3784037614342513, 1);
  sqcRYGate(q, 0.4530926383921239, 2);
  sqcRZGate(q, 0.25810680650994866, 2);
  sqcRYGate(q, 1.9532131353128364, 3);
  sqcRZGate(q, 0.7168796608884273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6814649570433419, 0);
  sqcRZGate(q, 1.0330773401610645, 0);
  sqcRYGate(q, -3.0593571559306487, 1);
  sqcRZGate(q, 1.997267278592248, 1);
  sqcRYGate(q, -0.05065063713241447, 2);
  sqcRZGate(q, -1.2388560023776813, 2);
  sqcRYGate(q, 0.09623887889272265, 3);
  sqcRZGate(q, 3.100239580714075, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.64699885294546, 0);
  sqcRZGate(q, -2.867703673889042, 0);
  sqcRYGate(q, -1.7001215481239806, 1);
  sqcRZGate(q, 1.0279601002068888, 1);
  sqcRYGate(q, -2.901728776857485, 2);
  sqcRZGate(q, -0.8042471196093849, 2);
  sqcRYGate(q, 2.1174362356809295, 3);
  sqcRZGate(q, -0.8597631085671152, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2401203511768184, 0);
  sqcRZGate(q, -3.10756259264498, 0);
  sqcRYGate(q, -1.730641388594048, 1);
  sqcRZGate(q, -1.086935945670845, 1);
  sqcRYGate(q, 2.084459792139522, 2);
  sqcRZGate(q, 0.22208876703825994, 2);
  sqcRYGate(q, -0.9295701670092515, 3);
  sqcRZGate(q, -2.6607658459936916, 3);

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
