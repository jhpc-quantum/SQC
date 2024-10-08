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

  sqcRYGate(q, 1.3204531357634948, 0);
  sqcRYGate(q, -1.314946656832977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5565046629227464, 0);
  sqcRYGate(q, 1.6814032743991651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2741734160879448, 2);
  sqcRYGate(q, 2.7687235911375505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4715027283185389, 2);
  sqcRYGate(q, -1.5890557931490454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16408751455686055, 1);
  sqcRYGate(q, 1.347656049938454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5780950152702653, 1);
  sqcRYGate(q, 2.7285135182603297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2034080090468393, 0);
  sqcRYGate(q, 2.9600658040001724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5833461158375428, 0);
  sqcRYGate(q, -1.7264550844826636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17814528704465277, 2);
  sqcRYGate(q, 1.6087984035898515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0113808724274391, 2);
  sqcRYGate(q, -2.3865823042110077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1908705020992935, 1);
  sqcRYGate(q, 1.4387210304240563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5112408096825165, 1);
  sqcRYGate(q, 1.2090768411473465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9866836370769017, 0);
  sqcRYGate(q, -2.752528607615447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0581781401758654, 0);
  sqcRYGate(q, -0.4886476662658357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.418040649196235, 2);
  sqcRYGate(q, -0.80751842869482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.866676073096113, 2);
  sqcRYGate(q, -0.6849321286720799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3564132984144863, 1);
  sqcRYGate(q, -0.22724345606812138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7468595681134387, 1);
  sqcRYGate(q, -2.025331777513012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2524515906024858, 0);
  sqcRYGate(q, 0.11023220818628526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2945523251872961, 0);
  sqcRYGate(q, 0.6801216317583758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0709305925613855, 2);
  sqcRYGate(q, 0.5829256459939522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5839430715299825, 2);
  sqcRYGate(q, -3.133229749425714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.021193183139934093, 1);
  sqcRYGate(q, -2.7132946347663323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8576953976318383, 1);
  sqcRYGate(q, -2.0300091803167537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.753956724836364, 0);
  sqcRYGate(q, -2.1371534635119667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0255199249932536, 0);
  sqcRYGate(q, -0.560276912389801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.591478107855274, 2);
  sqcRYGate(q, 0.5323664169400213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4670262818987405, 2);
  sqcRYGate(q, 0.14887727459847877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0530127383741994, 1);
  sqcRYGate(q, -2.069829284340762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.795842989359359, 1);
  sqcRYGate(q, 2.9663533338845567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7845487360611787, 0);
  sqcRYGate(q, -2.536053174558027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0076313260017207, 0);
  sqcRYGate(q, 1.3846566181563276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0302670827563774, 2);
  sqcRYGate(q, 2.097930968735162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8611536721677835, 2);
  sqcRYGate(q, -0.023938288676092087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7504012828209943, 1);
  sqcRYGate(q, -3.0284908064525577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8260575290188505, 1);
  sqcRYGate(q, 1.1443006539032774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10891768160940618, 0);
  sqcRYGate(q, -0.7952135390814172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2000926725215253, 0);
  sqcRYGate(q, -0.4065044239309924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.032943486937704, 2);
  sqcRYGate(q, -1.2966345120856557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2085168343475672, 2);
  sqcRYGate(q, -0.6413459997900599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5933761819873347, 1);
  sqcRYGate(q, -2.8828810367194504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.592897920464276, 1);
  sqcRYGate(q, -0.6109501813836388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7928781445150452, 0);
  sqcRYGate(q, 1.321018652984459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.353224921867908, 0);
  sqcRYGate(q, -2.3277429610159044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.75889040346273, 2);
  sqcRYGate(q, 3.0412003600063113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7591045528097178, 2);
  sqcRYGate(q, 0.35108510935934323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5337114205969926, 1);
  sqcRYGate(q, 2.1581950279747364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.097667972477514, 1);
  sqcRYGate(q, -0.6523233613563857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1440570925391027, 0);
  sqcRYGate(q, 2.1227378356717237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6420253170417745, 0);
  sqcRYGate(q, -3.0920821372519605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1046974262906404, 2);
  sqcRYGate(q, 2.832317641704425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2098699514781748, 2);
  sqcRYGate(q, -1.469261422576763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6034823330070884, 1);
  sqcRYGate(q, -2.267608105363994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0947407529271573, 1);
  sqcRYGate(q, -2.1621894184406196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0898082364266226, 0);
  sqcRYGate(q, 0.7438900675095804, 1);
  sqcRYGate(q, 1.9472323259399327, 2);
  sqcRYGate(q, -2.3938318814846706, 3);

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
