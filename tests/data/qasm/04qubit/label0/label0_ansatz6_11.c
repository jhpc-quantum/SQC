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

  sqcRYGate(q, 0.5411234775098781, 0);
  sqcRYGate(q, 0.9873710126545546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2941301877914397, 0);
  sqcRYGate(q, -3.0504230240649335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.13174256067542, 1);
  sqcRYGate(q, 0.8675803474421233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1198466085093939, 1);
  sqcRYGate(q, -2.5498653762961667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.20141419251683, 2);
  sqcRYGate(q, -0.43587580580296026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7606052983238136, 2);
  sqcRYGate(q, -0.4694552781616363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12788782997031234, 0);
  sqcRYGate(q, -2.007057292761762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.96052899642398, 0);
  sqcRYGate(q, 1.599785911020624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1234341434110442, 1);
  sqcRYGate(q, 1.8792082123855498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24937305651916444, 1);
  sqcRYGate(q, -2.3771659989034175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30520496681388476, 2);
  sqcRYGate(q, -2.8369732011531803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6098357621134571, 2);
  sqcRYGate(q, 0.8646258843317058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.162623157845641, 0);
  sqcRYGate(q, -2.2363883164452347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.03457999544138, 0);
  sqcRYGate(q, 2.371661726091333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3818441952072296, 1);
  sqcRYGate(q, 0.7001523151529644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.462804699118345, 1);
  sqcRYGate(q, 0.9875114252182549, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5275679734073555, 2);
  sqcRYGate(q, -1.4619690540764372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9852232411742567, 2);
  sqcRYGate(q, -1.8016166565720324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4756471914487905, 0);
  sqcRYGate(q, -0.396814490697898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7322342113689646, 0);
  sqcRYGate(q, 1.5525149245476255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0314458207652315, 1);
  sqcRYGate(q, -2.216993372001817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.457306303465442, 1);
  sqcRYGate(q, 1.4769847976865185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.011673889776219, 2);
  sqcRYGate(q, 2.3320154408920386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8288918507420604, 2);
  sqcRYGate(q, -2.3539658450803502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5529476002922334, 0);
  sqcRYGate(q, -1.1104411376447076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9103670954746073, 0);
  sqcRYGate(q, -0.41434465700375633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.011546857962496, 1);
  sqcRYGate(q, 0.7876747283904884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5742820409547091, 1);
  sqcRYGate(q, 1.1282987194923608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5743493517401328, 2);
  sqcRYGate(q, 0.007446294500796036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3289625123633284, 2);
  sqcRYGate(q, 1.73757761716523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3767532480588613, 0);
  sqcRYGate(q, -2.8178501974861625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3594253478038283, 0);
  sqcRYGate(q, 2.223676594559906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0538354658006406, 1);
  sqcRYGate(q, 0.028183953247940517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9052669007942933, 1);
  sqcRYGate(q, -1.989490961423865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.202642025425276, 2);
  sqcRYGate(q, 0.619903192878327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.16935149390834, 2);
  sqcRYGate(q, -0.30509168645461626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.594262321785671, 0);
  sqcRYGate(q, 1.7278784203613362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3255634575278332, 0);
  sqcRYGate(q, 1.0035806089779176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8523054835591837, 1);
  sqcRYGate(q, -1.5165535682508153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.480009786242499, 1);
  sqcRYGate(q, -2.196040259632565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2177241433191988, 2);
  sqcRYGate(q, -1.9165576847545447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.188613826928938, 2);
  sqcRYGate(q, -0.5915685480162692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7889225413641836, 0);
  sqcRYGate(q, 2.0854976729456185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9324981221966113, 0);
  sqcRYGate(q, -2.6497714385918028, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5959217130092447, 1);
  sqcRYGate(q, -1.849490663314965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.119224656511931, 1);
  sqcRYGate(q, -2.457544986038811, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3501719190732964, 2);
  sqcRYGate(q, -1.0708290120878006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.745563638653617, 2);
  sqcRYGate(q, 1.300432214340999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1017604386212394, 0);
  sqcRYGate(q, 1.913284499317952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2271892107432825, 0);
  sqcRYGate(q, -1.7407911305370347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8097700192658226, 1);
  sqcRYGate(q, 0.44450434776045444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4420324795716595, 1);
  sqcRYGate(q, -1.6347177796998675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3261057006273669, 2);
  sqcRYGate(q, 2.1046131038249927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.347236582681371, 2);
  sqcRYGate(q, 2.703962982820042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.022310200753525, 0);
  sqcRYGate(q, 0.17874448670246307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7395418515920156, 0);
  sqcRYGate(q, -0.7245940991758495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14069710976935326, 1);
  sqcRYGate(q, 2.3068603470960194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5330554354964057, 1);
  sqcRYGate(q, -1.20792312963472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8800626528933375, 2);
  sqcRYGate(q, 1.5962822307990239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9590829359458548, 2);
  sqcRYGate(q, -2.9105981661551943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9141096189424998, 0);
  sqcRYGate(q, -0.0016472259720840344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23196398113608382, 0);
  sqcRYGate(q, 2.148997753120141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2682397821877864, 1);
  sqcRYGate(q, -2.938089442841102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8807428318290782, 1);
  sqcRYGate(q, -2.7344925127232025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.516851649533817, 2);
  sqcRYGate(q, 1.8086409812345958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.021707978433870328, 2);
  sqcRYGate(q, 0.9098816253345647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33167444146911945, 0);
  sqcRYGate(q, 1.3567105126331753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1535376281969114, 0);
  sqcRYGate(q, 1.1741722823198528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0124371806131296, 1);
  sqcRYGate(q, -0.06179693992660968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.871832300138462, 1);
  sqcRYGate(q, 1.52966508556976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2441678367874118, 2);
  sqcRYGate(q, -1.2188220918652575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7748899021284354, 2);
  sqcRYGate(q, -0.9465906125121357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3737822016478853, 0);
  sqcRYGate(q, -1.9536339444013588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4205175709686553, 0);
  sqcRYGate(q, -0.2674008630322371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01927546575684147, 1);
  sqcRYGate(q, -0.4170008409874404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.433545448092473, 1);
  sqcRYGate(q, 2.3336069075154904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1471852643387184, 2);
  sqcRYGate(q, -1.8800350763191114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3903644970513362, 2);
  sqcRYGate(q, -0.998046448891305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.057088006714533, 0);
  sqcRYGate(q, -3.054010139086511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11698701815521952, 0);
  sqcRYGate(q, -1.579835114283762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5507823128732325, 1);
  sqcRYGate(q, 1.6687984912700582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8851517658545736, 1);
  sqcRYGate(q, 1.693509098152096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.935443479459781, 2);
  sqcRYGate(q, 0.6761901094317846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40744411464887414, 2);
  sqcRYGate(q, 0.34884736142327705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08369225136007837, 0);
  sqcRYGate(q, -2.602070988208128, 1);
  sqcRYGate(q, 1.6494420619267656, 2);
  sqcRYGate(q, 1.7439938244022268, 3);

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
