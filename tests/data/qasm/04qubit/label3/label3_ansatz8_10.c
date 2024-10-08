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

  sqcRYGate(q, 0.996702027842046, 0);
  sqcRYGate(q, 2.9284167707656152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3682138862314668, 0);
  sqcRYGate(q, -2.477786199905707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3244995484044253, 2);
  sqcRYGate(q, -2.2997885450301045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.17038808445351, 2);
  sqcRYGate(q, -1.8020190894392787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8948666531233106, 0);
  sqcRYGate(q, -2.4396252119834525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7147757381129993, 0);
  sqcRYGate(q, 0.36737603348084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8950350771762023, 1);
  sqcRYGate(q, -2.9463821760231177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4637056314815542, 1);
  sqcRYGate(q, 0.7911100930983181, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.586227528457755, 0);
  sqcRYGate(q, -1.1320312878956957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4278860234745885, 0);
  sqcRYGate(q, -0.178296674283013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4671993359386593, 2);
  sqcRYGate(q, -2.500010370354982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.67152159961113, 2);
  sqcRYGate(q, -0.33617271570625046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2683196337367086, 0);
  sqcRYGate(q, 0.14264466752742866, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8186041027623157, 0);
  sqcRYGate(q, 2.7055531380877693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9996072972622965, 1);
  sqcRYGate(q, -0.419299064215597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.700517599560706, 1);
  sqcRYGate(q, -1.3618750037762255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6031001293881975, 0);
  sqcRYGate(q, -0.8043429554510695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.79294145691921, 0);
  sqcRYGate(q, -1.4409130984284335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3959498365838652, 2);
  sqcRYGate(q, -1.2694255751786985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9652994037709054, 2);
  sqcRYGate(q, -2.016062999989436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.298753936158387, 0);
  sqcRYGate(q, 0.09136741442911796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0813072194405895, 0);
  sqcRYGate(q, 0.4491462646402777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.788921967952639, 1);
  sqcRYGate(q, 2.0378980133596647, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.018413653971936, 1);
  sqcRYGate(q, 1.2980418783164187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9399284335801918, 0);
  sqcRYGate(q, -1.1238391766322209, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3443049537006282, 0);
  sqcRYGate(q, 0.33527486625395964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4149710712176686, 2);
  sqcRYGate(q, 1.7932600444615003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9632240180695217, 2);
  sqcRYGate(q, 1.3185661539763924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8684353219635534, 0);
  sqcRYGate(q, 0.5593458681609422, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7040836062511246, 0);
  sqcRYGate(q, -2.983143301508187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8906852233118219, 1);
  sqcRYGate(q, -1.146420212972141, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3125074620061573, 1);
  sqcRYGate(q, -2.5610051484610543, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.915565494301318, 0);
  sqcRYGate(q, 3.0492140404156007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.548936893326772, 0);
  sqcRYGate(q, -1.265741038786448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22014160772217678, 2);
  sqcRYGate(q, -0.603039964645756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7932883291199353, 2);
  sqcRYGate(q, 2.975255048324429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.013014009161010578, 0);
  sqcRYGate(q, 0.4930967869912219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1660559254059013, 0);
  sqcRYGate(q, 1.6012883086598944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9391761820197725, 1);
  sqcRYGate(q, 0.4206981503300746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.475624340742949, 1);
  sqcRYGate(q, 2.3857778869085315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7129609088421835, 0);
  sqcRYGate(q, -2.9239350149436856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0392346694527297, 0);
  sqcRYGate(q, 2.216847895331577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0883448814047654, 2);
  sqcRYGate(q, -0.26541454032396805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.067303841058569, 2);
  sqcRYGate(q, 0.7583554464969362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37504262789045745, 0);
  sqcRYGate(q, 2.1167644941603587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1777864168651042, 0);
  sqcRYGate(q, -2.751088414267535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7391497733141437, 1);
  sqcRYGate(q, -2.8027076818483003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9375732391433003, 1);
  sqcRYGate(q, 2.1033657372236902, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.780757739379168, 0);
  sqcRYGate(q, -1.9994063693893827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4472158640464703, 0);
  sqcRYGate(q, 1.0540131517076432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.485477739010426, 2);
  sqcRYGate(q, -0.295883065336934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1932821632928743, 2);
  sqcRYGate(q, 1.8441788206661194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.635685415601033, 0);
  sqcRYGate(q, 2.4350957473581234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1222691694323803, 0);
  sqcRYGate(q, -1.9703294162762655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.203594650997687, 1);
  sqcRYGate(q, 0.901032645931835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8947652169043959, 1);
  sqcRYGate(q, 1.061552078773964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.14318994560442, 0);
  sqcRYGate(q, 1.4132221363869375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3909668333878926, 0);
  sqcRYGate(q, 0.04623198606045488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8529564181321424, 2);
  sqcRYGate(q, 1.0480423503384149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.077236136433287, 2);
  sqcRYGate(q, -0.6103030403225329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8427292797923427, 0);
  sqcRYGate(q, -1.3617248801456376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2827947695553168, 0);
  sqcRYGate(q, -0.016358143776441778, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8057189023362188, 1);
  sqcRYGate(q, -0.8479822272905223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7599652679900836, 1);
  sqcRYGate(q, 1.3479824073204238, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0512342599774893, 0);
  sqcRYGate(q, -1.7825043205195084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.816163310657816, 0);
  sqcRYGate(q, 3.0712393929156634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4297278345316737, 2);
  sqcRYGate(q, -0.2553773934056043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0111450245855833, 2);
  sqcRYGate(q, 0.47260769845336764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7321829131700461, 0);
  sqcRYGate(q, -2.863972503480482, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6868124375711928, 0);
  sqcRYGate(q, -0.06948463216850015, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.712148138824743, 1);
  sqcRYGate(q, -0.06240984969248764, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0505455251307176, 1);
  sqcRYGate(q, 2.9415430018447672, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1941429944956465, 0);
  sqcRYGate(q, -2.8554858642197734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0846354099855766, 0);
  sqcRYGate(q, -2.8631880526808327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1826950971806758, 2);
  sqcRYGate(q, 0.16853402231732598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6873329714017757, 2);
  sqcRYGate(q, 2.921075889307644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2951403887317103, 0);
  sqcRYGate(q, 1.012798092016209, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0347222830719223, 0);
  sqcRYGate(q, 1.594188036070265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8541455949983225, 1);
  sqcRYGate(q, -0.8692936174610901, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7294753553009418, 1);
  sqcRYGate(q, -0.21006164635142532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.972291184204865, 0);
  sqcRYGate(q, -1.242650071499605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0413462947186707, 0);
  sqcRYGate(q, 2.886470517258112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1579441682716316, 2);
  sqcRYGate(q, 2.955213872755187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.260583986233858, 2);
  sqcRYGate(q, 0.9039912044689404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5075396126652078, 0);
  sqcRYGate(q, 2.0112749714352116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.490354027678742, 0);
  sqcRYGate(q, -0.9362298434238845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7440274297884262, 1);
  sqcRYGate(q, -0.6346469647960015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5268491766555865, 1);
  sqcRYGate(q, -2.986606663397076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05261307109877755, 0);
  sqcRYGate(q, 1.0637885232556021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5259876134285424, 0);
  sqcRYGate(q, 2.061124862778205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.453157520716162, 2);
  sqcRYGate(q, 3.138397697771471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.303029404456936, 2);
  sqcRYGate(q, -1.0679773541317426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3653259512510267, 0);
  sqcRYGate(q, -1.915546914565926, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0183628134148703, 0);
  sqcRYGate(q, 2.906580125268245, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.658346090019937, 1);
  sqcRYGate(q, -2.077154740418547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.29438447301031534, 1);
  sqcRYGate(q, 2.3874471448685974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.09498521605252444, 0);
  sqcRYGate(q, -1.432883263182232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.665033598575338, 0);
  sqcRYGate(q, -0.39511297248780597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.840197608744897, 2);
  sqcRYGate(q, 2.3222085253533473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8449095979012844, 2);
  sqcRYGate(q, -0.2812473591340483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.065175465172444, 0);
  sqcRYGate(q, 0.5012403469041198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9977512201368333, 0);
  sqcRYGate(q, -2.827578814606694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.56563033375986, 1);
  sqcRYGate(q, 2.0094803433624744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.597705673980528, 1);
  sqcRYGate(q, 0.5077206407989517, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4173376489853223, 0);
  sqcRYGate(q, -0.466829758350611, 1);
  sqcRYGate(q, 0.6609159588218977, 2);
  sqcRYGate(q, -1.6150750900860462, 3);

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
