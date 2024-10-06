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

  sqcRYGate(q, 0.8876636742667441, 0);
  sqcRYGate(q, 2.2172265301265126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0350663692894244, 0);
  sqcRYGate(q, -2.7958673239243517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6459496920363206, 1);
  sqcRYGate(q, -2.942716503202008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9619071881734576, 1);
  sqcRYGate(q, -2.699487632916335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.722509193295, 2);
  sqcRYGate(q, 2.651606955855255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.175966130302366, 2);
  sqcRYGate(q, 0.9080119394611285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09294237104124954, 0);
  sqcRYGate(q, -1.202713474674856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1012309715291733, 0);
  sqcRYGate(q, 1.4074325913798722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5952235197185471, 1);
  sqcRYGate(q, 0.9345229584565835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5489453100413698, 1);
  sqcRYGate(q, 2.7701157537179055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7506940767302022, 2);
  sqcRYGate(q, -0.7567040632664837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4555156455353178, 2);
  sqcRYGate(q, 3.018614700148508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.018117276718146, 0);
  sqcRYGate(q, -0.29317156891686463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6409922866657083, 0);
  sqcRYGate(q, 1.878387046478612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8060420815641758, 1);
  sqcRYGate(q, 1.398223544519639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.413667576374988, 1);
  sqcRYGate(q, 2.4816751379807096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1709745142558772, 2);
  sqcRYGate(q, 2.1181982001593695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5457771814566241, 2);
  sqcRYGate(q, 0.9079336119779873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48127651556605944, 0);
  sqcRYGate(q, -2.7249129095043916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8915318305669736, 0);
  sqcRYGate(q, -0.8033789821746457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9598762185259084, 1);
  sqcRYGate(q, 2.128635963622017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.722153434798455, 1);
  sqcRYGate(q, -1.8979078502387783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3529081140819197, 2);
  sqcRYGate(q, 0.01665574645893031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6402888996286693, 2);
  sqcRYGate(q, 0.07039352727994254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9910279900761384, 0);
  sqcRYGate(q, 1.2019817852069998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5181621934470635, 0);
  sqcRYGate(q, -2.881618734249219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.061206700115092896, 1);
  sqcRYGate(q, 1.8627386308739586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6811731386911266, 1);
  sqcRYGate(q, -2.7123088702624276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0028454652687593, 2);
  sqcRYGate(q, 0.2281306420145817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7783830563792913, 2);
  sqcRYGate(q, -0.8098114708287698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5189100534245363, 0);
  sqcRYGate(q, -1.0251131414540406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.145823166888918, 0);
  sqcRYGate(q, 1.295915789616855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9267359689654735, 1);
  sqcRYGate(q, -1.2426021810767396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4623696643316135, 1);
  sqcRYGate(q, -2.418314956051228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21543054747555399, 2);
  sqcRYGate(q, 1.0141697394417983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4589469154207446, 2);
  sqcRYGate(q, -1.577498920613123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.212651836961623, 0);
  sqcRYGate(q, -1.428738800571905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47111456132047036, 0);
  sqcRYGate(q, -2.7656540144186255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1192214835669647, 1);
  sqcRYGate(q, 0.535879677198186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4817495088828536, 1);
  sqcRYGate(q, 2.3533564607354016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6735178901925705, 2);
  sqcRYGate(q, 0.40377904442431145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2702413219026471, 2);
  sqcRYGate(q, 1.8599694466755472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9737031275771644, 0);
  sqcRYGate(q, -2.5415409203454478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2741229355732706, 0);
  sqcRYGate(q, -0.39748159328991495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.210219077910226, 1);
  sqcRYGate(q, -2.3884195790196787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9890268414742649, 1);
  sqcRYGate(q, -0.6576751219914883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6324088811751505, 2);
  sqcRYGate(q, 1.6084862613037298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0626009859787637, 2);
  sqcRYGate(q, -0.8359184527392403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5694782335772028, 0);
  sqcRYGate(q, 1.3758051170741723, 1);
  sqcRYGate(q, 0.42273933201968694, 2);
  sqcRYGate(q, 1.5456129300000283, 3);

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
