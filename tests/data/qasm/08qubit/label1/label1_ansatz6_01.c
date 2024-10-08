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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.7633982881612856, 0);
  sqcRYGate(q, 2.282960585593573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.203321204693758, 0);
  sqcRYGate(q, -0.33533799652476615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.08329538710199, 1);
  sqcRYGate(q, -0.36881439165776086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5096218775159933, 1);
  sqcRYGate(q, 1.9133532614487523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.015132130248361, 2);
  sqcRYGate(q, -2.3326880762347937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.468398752085832, 2);
  sqcRYGate(q, -2.3810629813625064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9363799620010296, 3);
  sqcRYGate(q, 2.8880753135193347, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3179112680955578, 3);
  sqcRYGate(q, -2.3415155101626994, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.816995623242315, 4);
  sqcRYGate(q, 2.377210974422375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.054064618375839, 4);
  sqcRYGate(q, 2.6986627209835516, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0049371210518387, 5);
  sqcRYGate(q, -0.4920071751455568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2154333936238846, 5);
  sqcRYGate(q, 2.1410648142290087, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3359136554352702, 6);
  sqcRYGate(q, 1.4916183447519125, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1671845223267914, 6);
  sqcRYGate(q, -0.07623190134964206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0113426914735166, 0);
  sqcRYGate(q, 0.17043157004877774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06435365811952172, 0);
  sqcRYGate(q, -1.1071042756471856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9383996060090536, 1);
  sqcRYGate(q, 1.8573849640192222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1385595274369553, 1);
  sqcRYGate(q, 1.5049373724457569, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9152608800538276, 2);
  sqcRYGate(q, 1.6911714313694262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.106257900817364, 2);
  sqcRYGate(q, 2.2104817955057943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8578431913239413, 3);
  sqcRYGate(q, 1.6338202007865217, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2085927850994476, 3);
  sqcRYGate(q, -0.1864404656932832, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.09018921686258265, 4);
  sqcRYGate(q, -2.862247843243442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8711969317966153, 4);
  sqcRYGate(q, 1.799327064761702, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8651001494262922, 5);
  sqcRYGate(q, 1.4041818095440721, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4880403920791134, 5);
  sqcRYGate(q, -0.3284610298157268, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.806274024493245, 6);
  sqcRYGate(q, 0.4735623093638832, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4445115234004942, 6);
  sqcRYGate(q, -2.8369263910541838, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0390999244458765, 0);
  sqcRYGate(q, -2.253676534205337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8224297232175055, 0);
  sqcRYGate(q, -1.135664313210178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.025191733658501, 1);
  sqcRYGate(q, -0.40431876800220545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5979488312342536, 1);
  sqcRYGate(q, 1.4198271410759107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26831476136395416, 2);
  sqcRYGate(q, 1.038859956462797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.056867216740513, 2);
  sqcRYGate(q, -0.46605822889545573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9410441554444235, 3);
  sqcRYGate(q, -1.8121932997598167, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8128812901982325, 3);
  sqcRYGate(q, 3.101949635292106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5849740908236136, 4);
  sqcRYGate(q, 0.6234391751546279, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6304628902442155, 4);
  sqcRYGate(q, -2.3002281181982944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.332681148299936, 5);
  sqcRYGate(q, -1.3266971886964904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6764712055286828, 5);
  sqcRYGate(q, 2.141985349290059, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.04355442569372976, 6);
  sqcRYGate(q, -2.366555834443225, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.05334707686968532, 6);
  sqcRYGate(q, -0.5946901294446816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1431866473404844, 0);
  sqcRYGate(q, 1.581783168970392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5292419702969966, 0);
  sqcRYGate(q, -0.7981689555152238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4272799227348454, 1);
  sqcRYGate(q, 1.37038784864709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9086336977762155, 1);
  sqcRYGate(q, 0.36536774117704235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6769899466624417, 2);
  sqcRYGate(q, 1.4667812467988561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8585854450397656, 2);
  sqcRYGate(q, -1.5737556102664927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6122906853311951, 3);
  sqcRYGate(q, -1.7092181696389661, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2559881548842135, 3);
  sqcRYGate(q, -0.028508330604776904, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.115323694397388, 4);
  sqcRYGate(q, 0.6746791235636014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.140926693251332, 4);
  sqcRYGate(q, 3.108915837443757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5706388869496757, 5);
  sqcRYGate(q, -0.9720644471925413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.810609277868498, 5);
  sqcRYGate(q, -2.9322029601028414, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0135548120068962, 6);
  sqcRYGate(q, -1.9415379038925251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4841174879427073, 6);
  sqcRYGate(q, 2.1504598589816752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9148347900743092, 0);
  sqcRYGate(q, 1.917526512603965, 1);
  sqcRYGate(q, 1.4941270053109954, 2);
  sqcRYGate(q, -1.3844360232756092, 3);
  sqcRYGate(q, 0.9635781573137238, 4);
  sqcRYGate(q, -2.913387248806082, 5);
  sqcRYGate(q, -0.8486845704611472, 6);
  sqcRYGate(q, -1.5897933873162782, 7);

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
