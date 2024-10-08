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

  sqcRYGate(q, -1.2503699380124085, 0);
  sqcRZGate(q, 1.142508291631828, 0);
  sqcRYGate(q, 0.45395101537618177, 1);
  sqcRZGate(q, -1.9332679269060176, 1);
  sqcRYGate(q, -0.3486983075714204, 2);
  sqcRZGate(q, -2.1173559899414265, 2);
  sqcRYGate(q, -0.6692640032802328, 3);
  sqcRZGate(q, 0.8992510249478162, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.800989948143238, 0);
  sqcRZGate(q, -1.4862762384983101, 0);
  sqcRYGate(q, 2.7890780897260967, 1);
  sqcRZGate(q, -2.0734329801157854, 1);
  sqcRYGate(q, 2.107071186659903, 2);
  sqcRZGate(q, 1.922906403044605, 2);
  sqcRYGate(q, 0.023194677149686427, 3);
  sqcRZGate(q, 2.9000223918636716, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9904188413971513, 0);
  sqcRZGate(q, 1.8480748304919583, 0);
  sqcRYGate(q, 1.534669576351451, 1);
  sqcRZGate(q, -0.5400736231629955, 1);
  sqcRYGate(q, 0.3655534004781398, 2);
  sqcRZGate(q, 1.4990868724525894, 2);
  sqcRYGate(q, 0.28651066121756325, 3);
  sqcRZGate(q, -0.8395631045224095, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.283392369676501, 0);
  sqcRZGate(q, 0.5957238870993855, 0);
  sqcRYGate(q, 1.247395367632227, 1);
  sqcRZGate(q, 2.5997218684564913, 1);
  sqcRYGate(q, -0.6764734892118299, 2);
  sqcRZGate(q, -0.08619687132285758, 2);
  sqcRYGate(q, 2.0197937654727633, 3);
  sqcRZGate(q, 1.250070986784933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0461717215735717, 0);
  sqcRZGate(q, -3.001032664246524, 0);
  sqcRYGate(q, 1.1327935329619574, 1);
  sqcRZGate(q, -3.0130069036023492, 1);
  sqcRYGate(q, -0.5738231718797718, 2);
  sqcRZGate(q, -1.7492194138114057, 2);
  sqcRYGate(q, -0.26290596785416476, 3);
  sqcRZGate(q, -0.8018011932200606, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5620738041710616, 0);
  sqcRZGate(q, -2.0912187547628287, 0);
  sqcRYGate(q, 0.35255984621166814, 1);
  sqcRZGate(q, 0.9316590963904021, 1);
  sqcRYGate(q, 0.20739606166021307, 2);
  sqcRZGate(q, -0.5697308636522108, 2);
  sqcRYGate(q, 1.3290998608269657, 3);
  sqcRZGate(q, -0.24168322457353852, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7923724350951349, 0);
  sqcRZGate(q, -1.3143472323026337, 0);
  sqcRYGate(q, -1.4176618462301853, 1);
  sqcRZGate(q, -0.46859608073280473, 1);
  sqcRYGate(q, 1.160802071504514, 2);
  sqcRZGate(q, 1.6750409003157947, 2);
  sqcRYGate(q, 2.344742432437059, 3);
  sqcRZGate(q, 2.6047200937024235, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5547239681059075, 0);
  sqcRZGate(q, 2.399583015117713, 0);
  sqcRYGate(q, -0.8462684897454116, 1);
  sqcRZGate(q, 2.858924416463613, 1);
  sqcRYGate(q, 1.3994995107802342, 2);
  sqcRZGate(q, 0.013008022358765773, 2);
  sqcRYGate(q, 1.656685313097806, 3);
  sqcRZGate(q, 2.2620954546929113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5438599583546915, 0);
  sqcRZGate(q, 0.4808743974317016, 0);
  sqcRYGate(q, -0.8967652678842818, 1);
  sqcRZGate(q, 0.6799129951404631, 1);
  sqcRYGate(q, 3.03750124322476, 2);
  sqcRZGate(q, 1.5864981272729954, 2);
  sqcRYGate(q, -1.8838706687676563, 3);
  sqcRZGate(q, -0.15632129222417124, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0466066159128093, 0);
  sqcRZGate(q, -2.3662028147981893, 0);
  sqcRYGate(q, -1.9227023225711175, 1);
  sqcRZGate(q, 2.1676813256551473, 1);
  sqcRYGate(q, 0.10614840386228927, 2);
  sqcRZGate(q, 0.4733016448849705, 2);
  sqcRYGate(q, -1.2718827720775003, 3);
  sqcRZGate(q, 2.5931002792118236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5218027831608945, 0);
  sqcRZGate(q, -0.11153417735144446, 0);
  sqcRYGate(q, -1.8845960090481189, 1);
  sqcRZGate(q, -0.14355691000577692, 1);
  sqcRYGate(q, -2.3648653994339512, 2);
  sqcRZGate(q, 0.0007031531765866657, 2);
  sqcRYGate(q, 2.7026062478247526, 3);
  sqcRZGate(q, 1.318937322570709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8959787226796432, 0);
  sqcRZGate(q, 0.47417203346344117, 0);
  sqcRYGate(q, 2.1472429349713944, 1);
  sqcRZGate(q, -2.7543225622959135, 1);
  sqcRYGate(q, 1.2087073776052515, 2);
  sqcRZGate(q, 0.24737730675844818, 2);
  sqcRYGate(q, 0.6810943246689902, 3);
  sqcRZGate(q, -0.5034741518889332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.500469497634597, 0);
  sqcRZGate(q, -2.3277465808744413, 0);
  sqcRYGate(q, -0.9743668536604462, 1);
  sqcRZGate(q, 1.813049363451623, 1);
  sqcRYGate(q, 2.529983633315983, 2);
  sqcRZGate(q, -2.0906069806929795, 2);
  sqcRYGate(q, -2.5319865300007027, 3);
  sqcRZGate(q, 0.6385558739364905, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9534805058013975, 0);
  sqcRZGate(q, -0.9441626635916798, 0);
  sqcRYGate(q, -0.21121985394655152, 1);
  sqcRZGate(q, -2.3630427157504266, 1);
  sqcRYGate(q, -1.2000097328792991, 2);
  sqcRZGate(q, -2.994713394828851, 2);
  sqcRYGate(q, 1.490395249060326, 3);
  sqcRZGate(q, -2.946289041715573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5821826957567126, 0);
  sqcRZGate(q, -2.248502296217487, 0);
  sqcRYGate(q, 1.0746434847548991, 1);
  sqcRZGate(q, -1.6914849880840501, 1);
  sqcRYGate(q, 2.407449987683479, 2);
  sqcRZGate(q, 0.1253568210539641, 2);
  sqcRYGate(q, 0.1369491350669101, 3);
  sqcRZGate(q, 3.0597117112532657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2138486352820008, 0);
  sqcRZGate(q, -2.6260704586326824, 0);
  sqcRYGate(q, -0.969070160267, 1);
  sqcRZGate(q, -2.579022455785858, 1);
  sqcRYGate(q, 0.833653292040176, 2);
  sqcRZGate(q, -2.4918780672273964, 2);
  sqcRYGate(q, -2.228692291592708, 3);
  sqcRZGate(q, -2.471805515035532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8022327724465597, 0);
  sqcRZGate(q, -0.4514051441766936, 0);
  sqcRYGate(q, 1.0997302161723548, 1);
  sqcRZGate(q, -1.6884470554302842, 1);
  sqcRYGate(q, -1.3723594586611247, 2);
  sqcRZGate(q, 1.8556752481434169, 2);
  sqcRYGate(q, 0.30207111970448663, 3);
  sqcRZGate(q, -0.3617822835550784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3016917864982815, 0);
  sqcRZGate(q, 2.182457913074166, 0);
  sqcRYGate(q, -1.5011851200205673, 1);
  sqcRZGate(q, -1.2143867890245608, 1);
  sqcRYGate(q, 2.3149901377767277, 2);
  sqcRZGate(q, -0.8051728934610279, 2);
  sqcRYGate(q, -2.8418476861484265, 3);
  sqcRZGate(q, 0.3191178119295635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5780299306353087, 0);
  sqcRZGate(q, 0.4075806450615591, 0);
  sqcRYGate(q, -0.5636030596697734, 1);
  sqcRZGate(q, 0.24893494886977813, 1);
  sqcRYGate(q, 2.5066869818269, 2);
  sqcRZGate(q, 0.19231596626683523, 2);
  sqcRYGate(q, -0.4294871456881842, 3);
  sqcRZGate(q, -1.649563842399923, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3789856446607174, 0);
  sqcRZGate(q, 0.029828552094757658, 0);
  sqcRYGate(q, -1.4272362190098482, 1);
  sqcRZGate(q, -1.8582738301128157, 1);
  sqcRYGate(q, 1.307049919301001, 2);
  sqcRZGate(q, 3.071438804008217, 2);
  sqcRYGate(q, -2.035322666415568, 3);
  sqcRZGate(q, -2.709937562373595, 3);

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
