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

  sqcRYGate(q, 1.86340567026187, 0);
  sqcRZGate(q, 1.0566339856504554, 0);
  sqcRYGate(q, 2.669387577632568, 1);
  sqcRZGate(q, -2.6261447533089766, 1);
  sqcRYGate(q, -0.4754455952245173, 2);
  sqcRZGate(q, 1.819387169032277, 2);
  sqcRYGate(q, 0.8829494503235571, 3);
  sqcRZGate(q, 3.0755283198018364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.023073954779041762, 0);
  sqcRZGate(q, 1.0923133722982818, 0);
  sqcRYGate(q, -0.28826853454735135, 1);
  sqcRZGate(q, 1.148904558654352, 1);
  sqcRYGate(q, -1.7237409343318308, 2);
  sqcRZGate(q, -1.9136941258203866, 2);
  sqcRYGate(q, 0.0658295455664731, 3);
  sqcRZGate(q, -1.966325019641888, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9645489658584427, 0);
  sqcRZGate(q, -1.2468995532285925, 0);
  sqcRYGate(q, 2.3199706124164483, 1);
  sqcRZGate(q, 2.6170372573890437, 1);
  sqcRYGate(q, 0.6841647447815502, 2);
  sqcRZGate(q, -0.32664011392302683, 2);
  sqcRYGate(q, 1.7124429425945813, 3);
  sqcRZGate(q, 0.019909951208353382, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.1378982496369106, 0);
  sqcRZGate(q, -0.0003415875924508983, 0);
  sqcRYGate(q, -1.345967999274386, 1);
  sqcRZGate(q, 0.5092782929523151, 1);
  sqcRYGate(q, -0.39366401749993885, 2);
  sqcRZGate(q, 0.5930888667183183, 2);
  sqcRYGate(q, -1.1516428947369297, 3);
  sqcRZGate(q, 3.127093751377258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3463019414841924, 0);
  sqcRZGate(q, 0.47014790596666234, 0);
  sqcRYGate(q, -0.5233785693912916, 1);
  sqcRZGate(q, -1.9712395993376628, 1);
  sqcRYGate(q, 0.46206769820022053, 2);
  sqcRZGate(q, -1.971018303696213, 2);
  sqcRYGate(q, -1.3823074734524354, 3);
  sqcRZGate(q, -1.669231820407611, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.930625780065622, 0);
  sqcRZGate(q, 0.7401810613271066, 0);
  sqcRYGate(q, 0.5127958915065813, 1);
  sqcRZGate(q, 0.2132630111008735, 1);
  sqcRYGate(q, -3.0741315809887326, 2);
  sqcRZGate(q, -0.9712323346444905, 2);
  sqcRYGate(q, 0.3116538262512681, 3);
  sqcRZGate(q, -2.6671040497937133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4678317811175802, 0);
  sqcRZGate(q, 2.398746246132536, 0);
  sqcRYGate(q, -0.12597810473841609, 1);
  sqcRZGate(q, -1.7275281665003615, 1);
  sqcRYGate(q, 3.1326867849389215, 2);
  sqcRZGate(q, 1.6544891640401942, 2);
  sqcRYGate(q, 2.6213840968087423, 3);
  sqcRZGate(q, 2.4038808001752767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.008105373289189, 0);
  sqcRZGate(q, -0.2546234895102728, 0);
  sqcRYGate(q, 2.706263902862681, 1);
  sqcRZGate(q, 0.5809323135601518, 1);
  sqcRYGate(q, -2.269899964012887, 2);
  sqcRZGate(q, 0.8564643025447088, 2);
  sqcRYGate(q, 0.5908936008910776, 3);
  sqcRZGate(q, 1.994843215021982, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6647831706240855, 0);
  sqcRZGate(q, 1.2189681028267585, 0);
  sqcRYGate(q, -0.5265228429805822, 1);
  sqcRZGate(q, 2.960068304190139, 1);
  sqcRYGate(q, -2.280757888787409, 2);
  sqcRZGate(q, 1.375192040726173, 2);
  sqcRYGate(q, 1.2869750498199959, 3);
  sqcRZGate(q, -1.029324351374798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9552319358126858, 0);
  sqcRZGate(q, 0.5645209879686268, 0);
  sqcRYGate(q, 2.1209699312127888, 1);
  sqcRZGate(q, 3.1051633955669566, 1);
  sqcRYGate(q, -2.01421401725836, 2);
  sqcRZGate(q, -2.1864238258939785, 2);
  sqcRYGate(q, -0.4096762802806327, 3);
  sqcRZGate(q, 1.9832780384119335, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7075504486335036, 0);
  sqcRZGate(q, 0.7171160495531232, 0);
  sqcRYGate(q, -1.2847920612968426, 1);
  sqcRZGate(q, 2.2998608999203123, 1);
  sqcRYGate(q, 0.16987683245376045, 2);
  sqcRZGate(q, -2.230908424820361, 2);
  sqcRYGate(q, 1.7619360395100623, 3);
  sqcRZGate(q, -1.4068089720863945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2162130670406865, 0);
  sqcRZGate(q, -2.138056115226289, 0);
  sqcRYGate(q, -1.95867583090994, 1);
  sqcRZGate(q, 1.3045433708699719, 1);
  sqcRYGate(q, 1.6317537246201075, 2);
  sqcRZGate(q, -2.2301118826233957, 2);
  sqcRYGate(q, 3.063393319201782, 3);
  sqcRZGate(q, 1.423099923943415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8237297795093433, 0);
  sqcRZGate(q, 2.4086497743407422, 0);
  sqcRYGate(q, 1.57756892922187, 1);
  sqcRZGate(q, 2.894837184303635, 1);
  sqcRYGate(q, 2.9085494282025417, 2);
  sqcRZGate(q, 1.7067017569085496, 2);
  sqcRYGate(q, -2.0891037634409906, 3);
  sqcRZGate(q, -1.6677509754341304, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4257120097477487, 0);
  sqcRZGate(q, 1.9584900085889947, 0);
  sqcRYGate(q, -1.1224973538494436, 1);
  sqcRZGate(q, 2.031676986989536, 1);
  sqcRYGate(q, -2.2431124554980126, 2);
  sqcRZGate(q, -1.7151596018249322, 2);
  sqcRYGate(q, -0.22740067718053708, 3);
  sqcRZGate(q, -1.1227195036756354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.635475699316701, 0);
  sqcRZGate(q, 0.3102162151887304, 0);
  sqcRYGate(q, -0.21156944223949825, 1);
  sqcRZGate(q, 2.0891845895910315, 1);
  sqcRYGate(q, -2.3394941455929756, 2);
  sqcRZGate(q, 2.5230578050419052, 2);
  sqcRYGate(q, 2.0456867106180656, 3);
  sqcRZGate(q, -1.6490070151147067, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6772045462033875, 0);
  sqcRZGate(q, -3.1413491691356703, 0);
  sqcRYGate(q, 1.8914255777079114, 1);
  sqcRZGate(q, 2.948881415895387, 1);
  sqcRYGate(q, 1.4744836068160971, 2);
  sqcRZGate(q, 0.6527485156925821, 2);
  sqcRYGate(q, -2.149405676739317, 3);
  sqcRZGate(q, -0.9932786341942689, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4228123872652261, 0);
  sqcRZGate(q, 2.162103997533987, 0);
  sqcRYGate(q, -2.8839396483615305, 1);
  sqcRZGate(q, 1.133643203427132, 1);
  sqcRYGate(q, 0.20993276497241542, 2);
  sqcRZGate(q, 2.877907905442012, 2);
  sqcRYGate(q, -3.140190107570634, 3);
  sqcRZGate(q, 1.2480868758810204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5072174189697136, 0);
  sqcRZGate(q, 0.2538325590380195, 0);
  sqcRYGate(q, -1.0257494066287718, 1);
  sqcRZGate(q, -2.7931222885025324, 1);
  sqcRYGate(q, -0.627116624145094, 2);
  sqcRZGate(q, -0.27955800384918933, 2);
  sqcRYGate(q, -0.4777237629922575, 3);
  sqcRZGate(q, 2.7919743781666915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.817396045555706, 0);
  sqcRZGate(q, -0.16752247999239778, 0);
  sqcRYGate(q, 0.40903960536944994, 1);
  sqcRZGate(q, 0.42094614331836144, 1);
  sqcRYGate(q, -2.110983452990534, 2);
  sqcRZGate(q, 2.1017391238058285, 2);
  sqcRYGate(q, 2.7610774910000617, 3);
  sqcRZGate(q, 1.5353650278302442, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0234672310244517, 0);
  sqcRZGate(q, -1.8277416661068495, 0);
  sqcRYGate(q, 0.5454245889437068, 1);
  sqcRZGate(q, -0.49977339116470515, 1);
  sqcRYGate(q, -1.302710308583894, 2);
  sqcRZGate(q, -2.477380621679951, 2);
  sqcRYGate(q, -2.696220132851097, 3);
  sqcRZGate(q, 1.3619066984385733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.959792753767561, 0);
  sqcRZGate(q, -0.2993901863296129, 0);
  sqcRYGate(q, -1.6206165787432054, 1);
  sqcRZGate(q, -0.9884702746472563, 1);
  sqcRYGate(q, 0.9795647103205437, 2);
  sqcRZGate(q, -2.956744571043275, 2);
  sqcRYGate(q, 0.7685353661888223, 3);
  sqcRZGate(q, 0.21653349727100624, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.3601015137759278, 0);
  sqcRZGate(q, 2.420830640104584, 0);
  sqcRYGate(q, -2.648944972865445, 1);
  sqcRZGate(q, -0.8582688312327136, 1);
  sqcRYGate(q, -0.3853339168606781, 2);
  sqcRZGate(q, 2.4817300414839645, 2);
  sqcRYGate(q, -1.169069681494773, 3);
  sqcRZGate(q, -1.0275773024013144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8988482472339847, 0);
  sqcRZGate(q, 2.7004195949923595, 0);
  sqcRYGate(q, -1.4944777781194019, 1);
  sqcRZGate(q, 1.1136343725737223, 1);
  sqcRYGate(q, 0.9689770002458068, 2);
  sqcRZGate(q, -0.9543745987644275, 2);
  sqcRYGate(q, 2.806017049740003, 3);
  sqcRZGate(q, 0.10528236498665233, 3);

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
