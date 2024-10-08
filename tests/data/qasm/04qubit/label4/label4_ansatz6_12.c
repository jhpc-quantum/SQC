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

  sqcRYGate(q, -2.3905654452487384, 0);
  sqcRYGate(q, -2.995779069846399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8293041128644116, 0);
  sqcRYGate(q, 0.9601065354257347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.69356203775903, 1);
  sqcRYGate(q, -3.1292438632620856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19871807313400272, 1);
  sqcRYGate(q, 1.1255283974913626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0640050411306534, 2);
  sqcRYGate(q, 1.4755660393517003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8895950206843359, 2);
  sqcRYGate(q, 1.7462731988765803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.858444948673153, 0);
  sqcRYGate(q, -1.108432628691916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39650977479236366, 0);
  sqcRYGate(q, -1.1145222692353973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8044925101697011, 1);
  sqcRYGate(q, 0.9256554836100793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5306672728224608, 1);
  sqcRYGate(q, -2.235639215021247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.26458640808370415, 2);
  sqcRYGate(q, -0.9367825640273244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3682312861288244, 2);
  sqcRYGate(q, 2.5009847292064484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2292258096093103, 0);
  sqcRYGate(q, 2.5150709594935448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4677304827266506, 0);
  sqcRYGate(q, -2.5295436802969675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5244679854999255, 1);
  sqcRYGate(q, 0.04579379200526912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0244802942166218, 1);
  sqcRYGate(q, -1.4616732900175602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.026460174784673343, 2);
  sqcRYGate(q, 1.792147127989657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8440394413082446, 2);
  sqcRYGate(q, 0.6766189451201203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4100215645567839, 0);
  sqcRYGate(q, -1.9624183654349596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7319484827191554, 0);
  sqcRYGate(q, 0.9606697925038425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6337765233717692, 1);
  sqcRYGate(q, 2.002940851078435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.066109237095854, 1);
  sqcRYGate(q, -1.1198202253571967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.57283531216925, 2);
  sqcRYGate(q, 2.7091604409231356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40319125911951875, 2);
  sqcRYGate(q, -2.7873780593906496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4356705253580828, 0);
  sqcRYGate(q, -0.5165954400495947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5278142479292013, 0);
  sqcRYGate(q, 1.6451230237551273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0225654916734945, 1);
  sqcRYGate(q, -1.3579448471520958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3062657418784508, 1);
  sqcRYGate(q, -3.118039047409934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.902269012942446, 2);
  sqcRYGate(q, -0.845700414731315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6236111850143287, 2);
  sqcRYGate(q, -2.975139203924075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0376530667818478, 0);
  sqcRYGate(q, -1.42433227078745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7446368803979988, 0);
  sqcRYGate(q, -0.44011570962623825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0888346766960426, 1);
  sqcRYGate(q, -1.858194226210761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4141590119382146, 1);
  sqcRYGate(q, -1.2342962061449096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.388234451537596, 2);
  sqcRYGate(q, 1.3128707763719765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1544342831633934, 2);
  sqcRYGate(q, 2.1890008489183463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2160267928969613, 0);
  sqcRYGate(q, -2.0536961587001534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8993849819129287, 0);
  sqcRYGate(q, 2.0818813861308736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7718769270189405, 1);
  sqcRYGate(q, -1.501291101651013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2554666074666718, 1);
  sqcRYGate(q, -1.7329512602654082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8184012418592617, 2);
  sqcRYGate(q, -0.03615900662186622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8118741968746055, 2);
  sqcRYGate(q, -0.3566769212497132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5484018516540912, 0);
  sqcRYGate(q, -0.14629340345452643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11951198222021109, 0);
  sqcRYGate(q, 2.6265268718675934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9943247510480523, 1);
  sqcRYGate(q, 0.4990404524508086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04067572183190312, 1);
  sqcRYGate(q, -0.4706705045859998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3961442685234617, 2);
  sqcRYGate(q, 3.126625775911161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8592338635936985, 2);
  sqcRYGate(q, -0.2631210355910163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7457647397124265, 0);
  sqcRYGate(q, 2.771110877362511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.036553635647442, 0);
  sqcRYGate(q, -1.98671257370888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.216562434844775, 1);
  sqcRYGate(q, -2.92607714582197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.394928346320176, 1);
  sqcRYGate(q, -1.5430633197509624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0440158272886406, 2);
  sqcRYGate(q, 2.036901156216701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8589356202802823, 2);
  sqcRYGate(q, 1.9335984546587905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10776336104180828, 0);
  sqcRYGate(q, -2.696869151936547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6485694841659098, 0);
  sqcRYGate(q, 2.146744257172167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4026429534955343, 1);
  sqcRYGate(q, 2.444955470232067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7981921578256894, 1);
  sqcRYGate(q, -1.0833012815467242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6890144104835505, 2);
  sqcRYGate(q, -2.62367947664509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0507681778978015, 2);
  sqcRYGate(q, 2.88243973272416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4956576998242186, 0);
  sqcRYGate(q, -1.0527076419244534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0082578280462213, 0);
  sqcRYGate(q, -2.6794943609858666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5394500064858745, 1);
  sqcRYGate(q, -3.0081438763285093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2250920386866233, 1);
  sqcRYGate(q, -1.5383910900203794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7894445112960635, 2);
  sqcRYGate(q, 3.010196033876718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.041727036518916, 2);
  sqcRYGate(q, 1.7858086996760854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8337319614527604, 0);
  sqcRYGate(q, -1.4342266594499313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3323505720341702, 0);
  sqcRYGate(q, 0.26072162278592825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.021526818444552728, 1);
  sqcRYGate(q, 1.0280720204596951, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4142490630980933, 1);
  sqcRYGate(q, -0.3374836427265829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8899020300841505, 2);
  sqcRYGate(q, 1.1090015305762055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.993222227908034, 2);
  sqcRYGate(q, 0.6759564205947134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0190274639488823, 0);
  sqcRYGate(q, -1.451505748328084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4527365071170684, 0);
  sqcRYGate(q, -1.2792987597431074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0931660100538607, 1);
  sqcRYGate(q, -2.0714895445308024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04830097726842286, 1);
  sqcRYGate(q, -1.1623325007900505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.764629788337165, 2);
  sqcRYGate(q, -0.5649574963288719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.151369360922872, 2);
  sqcRYGate(q, -2.2463835743485774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.323716972485295, 0);
  sqcRYGate(q, -2.4784476230473658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7830339108432565, 0);
  sqcRYGate(q, -2.876272162811481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6565644944942148, 1);
  sqcRYGate(q, 0.28087957499079685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2611354320989827, 1);
  sqcRYGate(q, -0.23545505828791258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7153218257858533, 2);
  sqcRYGate(q, -0.7291702765094836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9525178818574354, 2);
  sqcRYGate(q, -0.4061467945568602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.816487573123404, 0);
  sqcRYGate(q, -2.57144805617898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2126287537026794, 0);
  sqcRYGate(q, -2.9554460854368876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9424802690725262, 1);
  sqcRYGate(q, -0.4525566088253094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1052161255261153, 1);
  sqcRYGate(q, -1.141761553086183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3462811223033526, 2);
  sqcRYGate(q, -2.7938888070648193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5205755476517293, 2);
  sqcRYGate(q, -1.637815925783772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3201433765498827, 0);
  sqcRYGate(q, 1.0962503291583212, 1);
  sqcRYGate(q, 0.0410646525660667, 2);
  sqcRYGate(q, -0.338932611571766, 3);

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
