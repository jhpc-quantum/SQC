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

  sqcRYGate(q, 1.5889626589453565, 0);
  sqcRYGate(q, 0.4754448414860973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8232598955321293, 0);
  sqcRYGate(q, -0.4811900359232517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6151659218862067, 0);
  sqcRYGate(q, -0.5962549490267399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0209991206651257, 0);
  sqcRYGate(q, -2.3028013594261614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2433471264581613, 0);
  sqcRYGate(q, -2.901295839683357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1739974990975885, 0);
  sqcRYGate(q, -0.43058319572803777, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9335859741070494, 1);
  sqcRYGate(q, -1.718989690387514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11344816545723949, 1);
  sqcRYGate(q, -2.0709943510661684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0243346873682226, 1);
  sqcRYGate(q, 0.43993582286761157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0522986254351963, 1);
  sqcRYGate(q, -2.7928330995772086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5353094376866487, 2);
  sqcRYGate(q, -0.2970599743950322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46369260373997734, 2);
  sqcRYGate(q, 2.7027001698025686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0851622413288724, 0);
  sqcRYGate(q, -0.33425709470901827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4753956380750264, 0);
  sqcRYGate(q, -0.17210444659194302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2692314157812641, 0);
  sqcRYGate(q, -2.6751496221176545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8689084977516437, 0);
  sqcRYGate(q, 3.0094692431648205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.472025644316174, 0);
  sqcRYGate(q, 1.7107710117219712, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1946423679672833, 0);
  sqcRYGate(q, 1.8959888380807834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5911877197580546, 1);
  sqcRYGate(q, 0.12467684695339125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.270427011522925, 1);
  sqcRYGate(q, 3.0767003789723333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.538418965555584, 1);
  sqcRYGate(q, 0.08176032009730694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2657651826399503, 1);
  sqcRYGate(q, -0.2807282560502493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7399119515086063, 2);
  sqcRYGate(q, -1.2023662028888402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6945600560883425, 2);
  sqcRYGate(q, -1.8755345538689645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5229364606080544, 0);
  sqcRYGate(q, 2.553589837509869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.063826769141101, 0);
  sqcRYGate(q, 2.8919724592780005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1814551999825706, 0);
  sqcRYGate(q, -2.7868592054346872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5554454071841545, 0);
  sqcRYGate(q, 2.2431381384005635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7939177088495097, 0);
  sqcRYGate(q, -0.11293167795764436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4727446398951254, 0);
  sqcRYGate(q, 2.8985738368469396, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.944426008740234, 1);
  sqcRYGate(q, -0.8770071625781704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.13240790342313, 1);
  sqcRYGate(q, 0.750115480322326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.885996348952923, 1);
  sqcRYGate(q, 1.4304883264220047, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5034781132613887, 1);
  sqcRYGate(q, 0.0739061282103499, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0239288635159065, 2);
  sqcRYGate(q, 0.7827489087592756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.495296419813316, 2);
  sqcRYGate(q, -0.7241717151882483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.632461583496676, 0);
  sqcRYGate(q, 0.8259130669774607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7363010526442808, 0);
  sqcRYGate(q, -1.0422622523926908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9156305508131548, 0);
  sqcRYGate(q, 2.0902351704398043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9725790616532264, 0);
  sqcRYGate(q, -2.473343862434982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.33813839416206914, 0);
  sqcRYGate(q, 2.5878270250088007, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5676348019946595, 0);
  sqcRYGate(q, -0.6846513967545347, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8132732610589087, 1);
  sqcRYGate(q, -1.9623626361188622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.198306616033589, 1);
  sqcRYGate(q, -1.6805497274293293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0073962678304593, 1);
  sqcRYGate(q, -0.7094552170278404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.781738618142674, 1);
  sqcRYGate(q, 0.5442111669546712, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08575973105083633, 2);
  sqcRYGate(q, 1.6852882707590489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28137778887853976, 2);
  sqcRYGate(q, 0.9003110948688517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5479457874582696, 0);
  sqcRYGate(q, 2.721483663168795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36113745251065144, 0);
  sqcRYGate(q, -1.9004273045169828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6951124318545561, 0);
  sqcRYGate(q, -2.608726434964635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3496950608295575, 0);
  sqcRYGate(q, -2.4934284326237877, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05116374500651721, 0);
  sqcRYGate(q, -2.198609343888737, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.942312463344817, 0);
  sqcRYGate(q, -2.7410068020598923, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9623666410471725, 1);
  sqcRYGate(q, 2.583963598715381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6501801037164823, 1);
  sqcRYGate(q, 1.6497195748111686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0459192517221476, 1);
  sqcRYGate(q, -0.49378752259452785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1318419184756294, 1);
  sqcRYGate(q, -0.8350949530628783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5702426178905107, 2);
  sqcRYGate(q, 1.2557807482469938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.682930883744258, 2);
  sqcRYGate(q, 1.141686852642802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.456378693659351, 0);
  sqcRYGate(q, -2.3840682077538426, 1);
  sqcRYGate(q, -2.112803657297211, 2);
  sqcRYGate(q, 3.0822923918279552, 3);

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
