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

  sqcRYGate(q, 3.1071570179606898, 0);
  sqcRZGate(q, 1.7207121437350148, 0);
  sqcRYGate(q, 1.9497679256511715, 1);
  sqcRZGate(q, -0.21590490892575598, 1);
  sqcRYGate(q, 0.7573034347983718, 2);
  sqcRZGate(q, 2.976747700235497, 2);
  sqcRYGate(q, -2.7678038570144254, 3);
  sqcRZGate(q, -0.5329818315482745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.644924798058442, 0);
  sqcRZGate(q, -2.1101125272423062, 0);
  sqcRYGate(q, -1.0132494106063525, 1);
  sqcRZGate(q, -1.0282009166049262, 1);
  sqcRYGate(q, 0.9933133367021467, 2);
  sqcRZGate(q, 2.275581634679907, 2);
  sqcRYGate(q, 2.179937156511892, 3);
  sqcRZGate(q, 2.493882014171153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2344320204076813, 0);
  sqcRZGate(q, 2.3208928761964636, 0);
  sqcRYGate(q, 2.34077684044432, 1);
  sqcRZGate(q, 0.3185595638708616, 1);
  sqcRYGate(q, 0.24321561583090912, 2);
  sqcRZGate(q, -1.7428056979239435, 2);
  sqcRYGate(q, 2.9284252794177954, 3);
  sqcRZGate(q, -1.5096949947518437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.2099821237946875, 0);
  sqcRZGate(q, 2.422266079069629, 0);
  sqcRYGate(q, 2.9871444041863726, 1);
  sqcRZGate(q, 2.158629730184467, 1);
  sqcRYGate(q, 1.0430993650228348, 2);
  sqcRZGate(q, -0.10899496527637359, 2);
  sqcRYGate(q, -0.6872844327781422, 3);
  sqcRZGate(q, 1.8503465156599752, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0444526193180765, 0);
  sqcRZGate(q, -2.82570785350599, 0);
  sqcRYGate(q, 3.003177541568179, 1);
  sqcRZGate(q, -0.3815335806207006, 1);
  sqcRYGate(q, -1.0160966348997222, 2);
  sqcRZGate(q, 2.9536816475381835, 2);
  sqcRYGate(q, -2.3739035241471775, 3);
  sqcRZGate(q, 1.4656291356922875, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1030311591417066, 0);
  sqcRZGate(q, -1.5165576547356336, 0);
  sqcRYGate(q, 2.4498048593069752, 1);
  sqcRZGate(q, 2.970961265274538, 1);
  sqcRYGate(q, -1.1667509487308052, 2);
  sqcRZGate(q, 2.261832111314468, 2);
  sqcRYGate(q, 0.29394493438261526, 3);
  sqcRZGate(q, -1.1287630786620841, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.092386485784744, 0);
  sqcRZGate(q, -1.545742284345069, 0);
  sqcRYGate(q, -0.02114629445110694, 1);
  sqcRZGate(q, 1.956535909239646, 1);
  sqcRYGate(q, -2.790696042258046, 2);
  sqcRZGate(q, -0.48789348092467844, 2);
  sqcRYGate(q, 0.8973313832923342, 3);
  sqcRZGate(q, 2.448083491789142, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.3121261457915744, 0);
  sqcRZGate(q, -1.0326982728924954, 0);
  sqcRYGate(q, -0.36740351265767224, 1);
  sqcRZGate(q, -0.6293482934609639, 1);
  sqcRYGate(q, -0.5674770521553025, 2);
  sqcRZGate(q, 0.29372006923830885, 2);
  sqcRYGate(q, 1.4498077582433453, 3);
  sqcRZGate(q, 2.381579895949017, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8234637003996963, 0);
  sqcRZGate(q, -3.1061459767784427, 0);
  sqcRYGate(q, -2.189342785015014, 1);
  sqcRZGate(q, 2.64747113043264, 1);
  sqcRYGate(q, -0.8918532551549242, 2);
  sqcRZGate(q, 0.31174238211823463, 2);
  sqcRYGate(q, 1.7718419571077446, 3);
  sqcRZGate(q, -2.2467105493550283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9754510606526177, 0);
  sqcRZGate(q, -2.8352088378588713, 0);
  sqcRYGate(q, 0.09711148516061652, 1);
  sqcRZGate(q, 0.12458184650517622, 1);
  sqcRYGate(q, 1.1017380724471868, 2);
  sqcRZGate(q, -0.4404988041428392, 2);
  sqcRYGate(q, 0.9132799154827875, 3);
  sqcRZGate(q, -0.1961003356843097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8814839097859243, 0);
  sqcRZGate(q, -2.2602944740476936, 0);
  sqcRYGate(q, -2.9865585472139085, 1);
  sqcRZGate(q, -0.9081751631871161, 1);
  sqcRYGate(q, 1.3982145617658779, 2);
  sqcRZGate(q, -1.5933111212905402, 2);
  sqcRYGate(q, -2.8424170233475285, 3);
  sqcRZGate(q, 2.8206610823753935, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9597632396967377, 0);
  sqcRZGate(q, -2.9371648682123292, 0);
  sqcRYGate(q, 0.9021663736411872, 1);
  sqcRZGate(q, 1.6995920755385754, 1);
  sqcRYGate(q, 0.0754644329402098, 2);
  sqcRZGate(q, -2.0990788889233745, 2);
  sqcRYGate(q, -1.4397813755060898, 3);
  sqcRZGate(q, 0.1030650575465097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2906694848030336, 0);
  sqcRZGate(q, -0.8988257561855626, 0);
  sqcRYGate(q, 3.0785997335499347, 1);
  sqcRZGate(q, 1.0600984259945951, 1);
  sqcRYGate(q, 0.09122162983854931, 2);
  sqcRZGate(q, 0.5656346878575027, 2);
  sqcRYGate(q, 0.27003375174818595, 3);
  sqcRZGate(q, -0.6860611897106281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7179284479658443, 0);
  sqcRZGate(q, 2.091792318641141, 0);
  sqcRYGate(q, -0.861100732139297, 1);
  sqcRZGate(q, -0.08295630083214726, 1);
  sqcRYGate(q, 0.4905686205272161, 2);
  sqcRZGate(q, 3.075409423543089, 2);
  sqcRYGate(q, 2.4574243758051297, 3);
  sqcRZGate(q, -1.3229906090329397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.02315426634954, 0);
  sqcRZGate(q, -0.6990443402322558, 0);
  sqcRYGate(q, 1.7060376533134878, 1);
  sqcRZGate(q, -2.0735959983266525, 1);
  sqcRYGate(q, -1.4355098130984816, 2);
  sqcRZGate(q, -0.4944733057128187, 2);
  sqcRYGate(q, 0.8136202270365152, 3);
  sqcRZGate(q, -2.0556569712305066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8063574158976126, 0);
  sqcRZGate(q, -1.7901666625344534, 0);
  sqcRYGate(q, 2.8938260844518204, 1);
  sqcRZGate(q, -2.2109675282290313, 1);
  sqcRYGate(q, -0.21536334338860438, 2);
  sqcRZGate(q, -0.5128445873612034, 2);
  sqcRYGate(q, 1.025189500899069, 3);
  sqcRZGate(q, -0.04221763586771671, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0091176437491516, 0);
  sqcRZGate(q, 0.22529699248781046, 0);
  sqcRYGate(q, 2.251605995194322, 1);
  sqcRZGate(q, 1.6128969405203282, 1);
  sqcRYGate(q, 1.9162038606798601, 2);
  sqcRZGate(q, 2.0712663116627414, 2);
  sqcRYGate(q, 2.0521499259030125, 3);
  sqcRZGate(q, 0.2975956034068371, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.4454513236615277, 0);
  sqcRZGate(q, 1.741322586552232, 0);
  sqcRYGate(q, -1.0024809070552687, 1);
  sqcRZGate(q, 1.3671240090924552, 1);
  sqcRYGate(q, -0.6877290825746547, 2);
  sqcRZGate(q, -0.8439933443509144, 2);
  sqcRYGate(q, 2.2081054215721565, 3);
  sqcRZGate(q, -2.5660509958525872, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.097206791960998, 0);
  sqcRZGate(q, -2.2935769625971667, 0);
  sqcRYGate(q, -2.5635621441935537, 1);
  sqcRZGate(q, 0.7023915081270987, 1);
  sqcRYGate(q, -0.7298873813904341, 2);
  sqcRZGate(q, 2.9017470191831216, 2);
  sqcRYGate(q, -0.06824882853048612, 3);
  sqcRZGate(q, 1.6085786405407658, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7567009595873886, 0);
  sqcRZGate(q, -0.6156228334064258, 0);
  sqcRYGate(q, 0.8938482428171479, 1);
  sqcRZGate(q, 1.1782658860867061, 1);
  sqcRYGate(q, 0.8373715608016914, 2);
  sqcRZGate(q, -0.8994274700884404, 2);
  sqcRYGate(q, 3.0210823467287056, 3);
  sqcRZGate(q, 0.5924664485059141, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.4796918252475448, 0);
  sqcRZGate(q, 0.7883638225571505, 0);
  sqcRYGate(q, -0.5082404130145113, 1);
  sqcRZGate(q, -2.54303053515862, 1);
  sqcRYGate(q, -1.415902709466907, 2);
  sqcRZGate(q, -1.0115217790655737, 2);
  sqcRYGate(q, -0.36507345244460776, 3);
  sqcRZGate(q, 1.185125879583556, 3);

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
