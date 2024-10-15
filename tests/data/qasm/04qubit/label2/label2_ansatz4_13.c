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

  sqcRYGate(q, -0.4161665103572784, 0);
  sqcRZGate(q, 0.2973465808604283, 0);
  sqcRYGate(q, -0.054400853685789785, 1);
  sqcRZGate(q, 3.111257340947126, 1);
  sqcRYGate(q, -2.0053989137875825, 2);
  sqcRZGate(q, 0.08735523771217285, 2);
  sqcRYGate(q, 1.6220107816786422, 3);
  sqcRZGate(q, 0.13726660862416665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.33228483780012674, 0);
  sqcRZGate(q, -0.13361815305295188, 0);
  sqcRYGate(q, 2.682617444479458, 1);
  sqcRZGate(q, -0.5020849835023213, 1);
  sqcRYGate(q, 2.682166083082428, 2);
  sqcRZGate(q, -0.3209027059226015, 2);
  sqcRYGate(q, -2.9688753708270488, 3);
  sqcRZGate(q, 0.06680786535855354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0656288590761767, 0);
  sqcRZGate(q, 2.3085621118713577, 0);
  sqcRYGate(q, 1.3677507846542047, 1);
  sqcRZGate(q, 1.966060195521293, 1);
  sqcRYGate(q, 2.523895641706757, 2);
  sqcRZGate(q, 1.5084098691953187, 2);
  sqcRYGate(q, -2.6361284505859497, 3);
  sqcRZGate(q, -2.4418288583689893, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7555322344649067, 0);
  sqcRZGate(q, -0.7671999270136478, 0);
  sqcRYGate(q, -1.2376780578055069, 1);
  sqcRZGate(q, -0.11750465391714503, 1);
  sqcRYGate(q, -0.9924926763226275, 2);
  sqcRZGate(q, 2.6178402847511553, 2);
  sqcRYGate(q, -2.6699495956394235, 3);
  sqcRZGate(q, -1.334999103497948, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9400312585583785, 0);
  sqcRZGate(q, -2.6593608660371486, 0);
  sqcRYGate(q, -1.770749952477798, 1);
  sqcRZGate(q, 1.8146579607486482, 1);
  sqcRYGate(q, -2.377251256876517, 2);
  sqcRZGate(q, 1.6882975189392804, 2);
  sqcRYGate(q, -0.6219064137365473, 3);
  sqcRZGate(q, 0.03187747144547592, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7160171314106103, 0);
  sqcRZGate(q, -1.7621938634328942, 0);
  sqcRYGate(q, 0.5302128003925891, 1);
  sqcRZGate(q, -0.33277971401676576, 1);
  sqcRYGate(q, 2.3610353394391512, 2);
  sqcRZGate(q, -0.042028643643647, 2);
  sqcRYGate(q, 0.9273917695528394, 3);
  sqcRZGate(q, -2.2310891633655503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4017596683866866, 0);
  sqcRZGate(q, -3.134298948000077, 0);
  sqcRYGate(q, 1.3938786352069032, 1);
  sqcRZGate(q, -1.2950828488548478, 1);
  sqcRYGate(q, 0.44243494489874546, 2);
  sqcRZGate(q, -2.766893145365455, 2);
  sqcRYGate(q, -2.4087397708193556, 3);
  sqcRZGate(q, 2.4651418824802565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5091269679460706, 0);
  sqcRZGate(q, -2.2608092367807187, 0);
  sqcRYGate(q, 0.4092923628075429, 1);
  sqcRZGate(q, -2.737670021295495, 1);
  sqcRYGate(q, -1.6779797331155126, 2);
  sqcRZGate(q, 1.6846610890815632, 2);
  sqcRYGate(q, 1.5304452560189963, 3);
  sqcRZGate(q, -1.9529287539391111, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1557160129591155, 0);
  sqcRZGate(q, -0.3322974065111488, 0);
  sqcRYGate(q, 1.2145470209220617, 1);
  sqcRZGate(q, 2.4811439146350764, 1);
  sqcRYGate(q, -0.4570961637202216, 2);
  sqcRZGate(q, 1.454457275405327, 2);
  sqcRYGate(q, -2.80985307516231, 3);
  sqcRZGate(q, -2.4511032896727274, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.630444394386327, 0);
  sqcRZGate(q, -0.5520446339239861, 0);
  sqcRYGate(q, -2.625005415162104, 1);
  sqcRZGate(q, -0.19465453280226264, 1);
  sqcRYGate(q, -1.296540578086291, 2);
  sqcRZGate(q, -2.734385042291174, 2);
  sqcRYGate(q, 0.4461332139887952, 3);
  sqcRZGate(q, 2.46898587267468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6159824015405154, 0);
  sqcRZGate(q, -1.5043743708619686, 0);
  sqcRYGate(q, 0.7002254095476279, 1);
  sqcRZGate(q, -2.4335125743179127, 1);
  sqcRYGate(q, -2.4049699210827753, 2);
  sqcRZGate(q, 0.471681053696126, 2);
  sqcRYGate(q, -0.3411696997934035, 3);
  sqcRZGate(q, -0.31736427085109575, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.07516556487732107, 0);
  sqcRZGate(q, 0.5261144491031279, 0);
  sqcRYGate(q, 1.6202611476518414, 1);
  sqcRZGate(q, -3.0138564973990465, 1);
  sqcRYGate(q, 1.2173762484650148, 2);
  sqcRZGate(q, -1.4407841162706445, 2);
  sqcRYGate(q, -0.16985302667582672, 3);
  sqcRZGate(q, -2.6086841567650207, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.825559667215299, 0);
  sqcRZGate(q, -2.9095840502595376, 0);
  sqcRYGate(q, 1.3095144116572701, 1);
  sqcRZGate(q, -1.4381151867299593, 1);
  sqcRYGate(q, 3.050834881586, 2);
  sqcRZGate(q, -2.4947901769062457, 2);
  sqcRYGate(q, -2.714654318475276, 3);
  sqcRZGate(q, -2.826600267191754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8334635994940345, 0);
  sqcRZGate(q, -1.8082742651913417, 0);
  sqcRYGate(q, 0.3576412428256823, 1);
  sqcRZGate(q, 1.0759622777402194, 1);
  sqcRYGate(q, -2.657102926200212, 2);
  sqcRZGate(q, 0.4978098326682448, 2);
  sqcRYGate(q, -1.5546019727310982, 3);
  sqcRZGate(q, 0.6908347654339758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3382656816657095, 0);
  sqcRZGate(q, 2.4685010729421166, 0);
  sqcRYGate(q, -1.2234254654917232, 1);
  sqcRZGate(q, -1.596692065847913, 1);
  sqcRYGate(q, -1.8552051265475917, 2);
  sqcRZGate(q, -1.8867713837334688, 2);
  sqcRYGate(q, 1.5427672656552103, 3);
  sqcRZGate(q, -2.2920685481513288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1345511664639556, 0);
  sqcRZGate(q, 2.253853916906474, 0);
  sqcRYGate(q, 1.0225954806177286, 1);
  sqcRZGate(q, 3.1089776903975888, 1);
  sqcRYGate(q, 2.956861904241383, 2);
  sqcRZGate(q, -2.320296590545216, 2);
  sqcRYGate(q, -2.3500181938799023, 3);
  sqcRZGate(q, -0.2115724586903579, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.131143159313121, 0);
  sqcRZGate(q, -2.626869830641062, 0);
  sqcRYGate(q, -1.5541744851595733, 1);
  sqcRZGate(q, -1.6552466730592743, 1);
  sqcRYGate(q, 2.1629896054590794, 2);
  sqcRZGate(q, 0.6016649829270468, 2);
  sqcRYGate(q, -2.4872733004911063, 3);
  sqcRZGate(q, -2.4200591068036674, 3);

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
