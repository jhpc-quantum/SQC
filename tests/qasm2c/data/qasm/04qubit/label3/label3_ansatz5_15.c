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

  sqcRYGate(q, 0.5890027422789091, 0);
  sqcRYGate(q, -2.4647194241187944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6532292302391176, 0);
  sqcRYGate(q, -2.077136151647995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8824977070086808, 2);
  sqcRYGate(q, -3.108685024510179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8726275499581975, 2);
  sqcRYGate(q, -1.7727126765775048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8694089264164964, 1);
  sqcRYGate(q, 0.196281915027396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0808859309277101, 1);
  sqcRYGate(q, -2.7544860012859402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9241913875776527, 0);
  sqcRYGate(q, 0.79382877553408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0478571137584294, 0);
  sqcRYGate(q, -2.841133816929801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7232655370574068, 2);
  sqcRYGate(q, 2.885306437195472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3592110897037033, 2);
  sqcRYGate(q, -1.3670548037730186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.755610418317757, 1);
  sqcRYGate(q, 1.2393461687746683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.487559619604289, 1);
  sqcRYGate(q, -0.5604432566765596, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.124229053713642, 0);
  sqcRYGate(q, -1.672078729873697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4017686694340776, 0);
  sqcRYGate(q, 1.5332624938665764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.470752349376896, 2);
  sqcRYGate(q, 0.6268850416210097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1484228508491803, 2);
  sqcRYGate(q, 1.1901658318381083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.757590102774672, 1);
  sqcRYGate(q, -0.12061769227600559, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.119207600218287, 1);
  sqcRYGate(q, -0.8307211681193012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1545224880054406, 0);
  sqcRYGate(q, 0.00437038934445837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6775033892847695, 0);
  sqcRYGate(q, 0.6714731312733789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.512513369621052, 2);
  sqcRYGate(q, 1.700375903065425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1148622443324543, 2);
  sqcRYGate(q, 2.721271770592108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5166664927574884, 1);
  sqcRYGate(q, -0.26878013570441966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07098906750209877, 1);
  sqcRYGate(q, -1.0861979554494559, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6216137938645847, 0);
  sqcRYGate(q, 3.0775455341810303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7233289074137463, 0);
  sqcRYGate(q, 0.17589902968082693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0057304260937685, 2);
  sqcRYGate(q, 2.098627449412148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.797579061359496, 2);
  sqcRYGate(q, -2.2057225013164734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4905066137572405, 1);
  sqcRYGate(q, -0.15141571145448385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.664475168863123, 1);
  sqcRYGate(q, -2.33806113378831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.823695250702749, 0);
  sqcRYGate(q, -2.839169080737129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.643660513800768, 0);
  sqcRYGate(q, 0.19942941706147807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2893372621701342, 2);
  sqcRYGate(q, 0.31983700460830544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4454957145151071, 2);
  sqcRYGate(q, 0.5204273620886308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.699811944638631, 1);
  sqcRYGate(q, -2.763759954920774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2332981945962493, 1);
  sqcRYGate(q, 2.8385090832079336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9126894626489692, 0);
  sqcRYGate(q, 2.5407352818442934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.85481702292409, 0);
  sqcRYGate(q, -2.297215337777403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7411435613240291, 2);
  sqcRYGate(q, -1.370502634410251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4440182489866125, 2);
  sqcRYGate(q, -1.2801273702888414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8833542175965087, 1);
  sqcRYGate(q, 0.7932357519278267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.803667492678147, 1);
  sqcRYGate(q, -1.2916256644075768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8906635967892473, 0);
  sqcRYGate(q, -0.8111749238342458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9906757089683704, 0);
  sqcRYGate(q, -0.45413241787211867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1261879543658946, 2);
  sqcRYGate(q, -2.9221608500734417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14820013170163368, 2);
  sqcRYGate(q, -2.9347356447297632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8691142340733089, 1);
  sqcRYGate(q, 1.5536622367991153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9892192221206965, 1);
  sqcRYGate(q, -0.39874954537572815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0414684441076942, 0);
  sqcRYGate(q, 2.634543846878589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12367377528494039, 0);
  sqcRYGate(q, 2.088896014258083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5106065818323504, 2);
  sqcRYGate(q, -0.7139022153644738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.522515857259447, 2);
  sqcRYGate(q, 0.0989802626469567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2764442161596943, 1);
  sqcRYGate(q, -2.284891698722653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5267795759966751, 1);
  sqcRYGate(q, 1.4108709011417977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9064541885223525, 0);
  sqcRYGate(q, 0.44123771748472773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7342209461454378, 0);
  sqcRYGate(q, 1.3213746773297022, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.520915675491425, 2);
  sqcRYGate(q, 0.1332896082577273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.901826471277091, 2);
  sqcRYGate(q, 0.5177869434312479, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8278569434379452, 1);
  sqcRYGate(q, 1.483950819939385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9696324882209675, 1);
  sqcRYGate(q, 0.8277384672660042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6905812348447307, 0);
  sqcRYGate(q, -1.4774416599534688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.69480837958415, 0);
  sqcRYGate(q, -1.132113867142186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.31327136733735017, 2);
  sqcRYGate(q, -1.6721992766000637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2789452040914826, 2);
  sqcRYGate(q, -3.0260115808868417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9239626195954826, 1);
  sqcRYGate(q, -1.5279165418166025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6266272848327201, 1);
  sqcRYGate(q, -2.20968515418797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.444812509900559, 0);
  sqcRYGate(q, -1.2541462044987624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.727621972692514, 0);
  sqcRYGate(q, -2.345041570787629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1753159111099503, 2);
  sqcRYGate(q, -2.0157058260473315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.185163662959909, 2);
  sqcRYGate(q, -1.793577926261574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.846263982158736, 1);
  sqcRYGate(q, -2.3344844870568786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8220611102478648, 1);
  sqcRYGate(q, 1.9901121969368365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5924300648202983, 0);
  sqcRYGate(q, -0.5991444843276064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.278163505120218, 0);
  sqcRYGate(q, -2.920748904500759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1397223862795762, 2);
  sqcRYGate(q, -0.9735532724429126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2902293584397038, 2);
  sqcRYGate(q, 0.8799530327295715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.088489288116312, 1);
  sqcRYGate(q, 1.3328345050283774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9080465060946166, 1);
  sqcRYGate(q, -1.60150401915039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.497720672898953, 0);
  sqcRYGate(q, 1.917545125006386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3492163629121126, 0);
  sqcRYGate(q, -0.7151278323604966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.544824661649037, 2);
  sqcRYGate(q, 1.5741619817940118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.956180978829637, 2);
  sqcRYGate(q, 2.9159883555022112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0555925659537744, 1);
  sqcRYGate(q, -0.9765258431536087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0350963502705905, 1);
  sqcRYGate(q, -3.014933527299315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4518817184621677, 0);
  sqcRYGate(q, -0.821713515158142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9671868297536745, 0);
  sqcRYGate(q, 2.6303859162827252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0712557054147742, 2);
  sqcRYGate(q, 1.2124668308927413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5845929966970216, 2);
  sqcRYGate(q, -1.1122515165648226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3639838107251925, 1);
  sqcRYGate(q, -1.8013168734070755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4830909978017384, 1);
  sqcRYGate(q, 0.7769478770622226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5566061841337517, 0);
  sqcRYGate(q, 3.088537604446808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5494152945656108, 0);
  sqcRYGate(q, 2.2957833815876088, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1282386952890064, 2);
  sqcRYGate(q, 0.9590331633751978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2641780154022209, 2);
  sqcRYGate(q, 1.2814581229529796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0614575419202907, 1);
  sqcRYGate(q, -2.157879859332711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6144394378218462, 1);
  sqcRYGate(q, -2.4707531583874727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7671367047269302, 0);
  sqcRYGate(q, -0.9670642859725654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8857187429008047, 0);
  sqcRYGate(q, 2.380214914134826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3591850884158792, 2);
  sqcRYGate(q, -0.2382702679901654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1789430147751854, 2);
  sqcRYGate(q, 2.9497530876968705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.251592156974402, 1);
  sqcRYGate(q, -0.2612916029149274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1051809942483244, 1);
  sqcRYGate(q, 2.796822780675271, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.027662991457752, 0);
  sqcRYGate(q, -2.47121742849303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7108744010124717, 0);
  sqcRYGate(q, 2.1403481500978594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3974576694435469, 2);
  sqcRYGate(q, -0.10870111942942619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40401073418802125, 2);
  sqcRYGate(q, -0.8005996431002096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8642009678395624, 1);
  sqcRYGate(q, 0.250145584979046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14406590575188183, 1);
  sqcRYGate(q, 2.061158091428952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10815894416328575, 0);
  sqcRYGate(q, -1.5524345029227158, 1);
  sqcRYGate(q, 2.8204521930296726, 2);
  sqcRYGate(q, 1.1838720191773886, 3);

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
