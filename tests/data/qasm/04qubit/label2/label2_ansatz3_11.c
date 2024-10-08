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

  sqcRYGate(q, 0.6036213796565261, 0);
  sqcRZGate(q, 2.9746273173613074, 0);
  sqcRYGate(q, 1.8291675184749012, 1);
  sqcRZGate(q, 1.9332639987888234, 1);
  sqcRYGate(q, -1.6608290292679315, 2);
  sqcRZGate(q, 0.7953599753066126, 2);
  sqcRYGate(q, 2.142948866400438, 3);
  sqcRZGate(q, -1.9421146841238315, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7409671199982586, 0);
  sqcRZGate(q, 2.607124874366188, 0);
  sqcRYGate(q, -3.1016800978227685, 1);
  sqcRZGate(q, 1.7100447135506658, 1);
  sqcRYGate(q, -2.3170809050315, 2);
  sqcRZGate(q, 2.729403671878879, 2);
  sqcRYGate(q, 1.7596607890113765, 3);
  sqcRZGate(q, -1.2351270552787135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.020654357988825645, 0);
  sqcRZGate(q, -0.15646602393025225, 0);
  sqcRYGate(q, 0.9418902362729442, 1);
  sqcRZGate(q, -2.844617049211577, 1);
  sqcRYGate(q, -1.6172486168283036, 2);
  sqcRZGate(q, 0.5307474656346489, 2);
  sqcRYGate(q, 0.700811288175414, 3);
  sqcRZGate(q, -0.7240216067673204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.997385251165891, 0);
  sqcRZGate(q, -1.626966757970271, 0);
  sqcRYGate(q, 2.4423934251541874, 1);
  sqcRZGate(q, 0.602730018886059, 1);
  sqcRYGate(q, 0.6716637449124745, 2);
  sqcRZGate(q, -0.6292652676722468, 2);
  sqcRYGate(q, 1.1526209112581656, 3);
  sqcRZGate(q, 2.229549125447134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1177228818979295, 0);
  sqcRZGate(q, -2.3517155292874277, 0);
  sqcRYGate(q, -2.0682651717608413, 1);
  sqcRZGate(q, 1.271453341517604, 1);
  sqcRYGate(q, 2.88922134735814, 2);
  sqcRZGate(q, -2.6795722573708844, 2);
  sqcRYGate(q, 3.0832262399729364, 3);
  sqcRZGate(q, -2.6396114356862914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.633235615615444, 0);
  sqcRZGate(q, -1.348319405529526, 0);
  sqcRYGate(q, -2.447707427693559, 1);
  sqcRZGate(q, 1.8531228879065547, 1);
  sqcRYGate(q, -0.3972639565039744, 2);
  sqcRZGate(q, 2.252999046706498, 2);
  sqcRYGate(q, 0.19411050752021272, 3);
  sqcRZGate(q, 2.223951660098689, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.43157746693835974, 0);
  sqcRZGate(q, -1.9951868626590958, 0);
  sqcRYGate(q, 1.0406246608684802, 1);
  sqcRZGate(q, 0.5963161901290162, 1);
  sqcRYGate(q, 0.44148889899578636, 2);
  sqcRZGate(q, 2.0963263331778235, 2);
  sqcRYGate(q, 2.2699315978093253, 3);
  sqcRZGate(q, 2.8006212820469396, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0879580471554764, 0);
  sqcRZGate(q, -1.745353987045336, 0);
  sqcRYGate(q, 1.6609434028454766, 1);
  sqcRZGate(q, 2.474976557791371, 1);
  sqcRYGate(q, 1.4351773608091103, 2);
  sqcRZGate(q, -1.4504893043289124, 2);
  sqcRYGate(q, 1.3475632238921216, 3);
  sqcRZGate(q, 0.5693679197751303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.649319414346587, 0);
  sqcRZGate(q, 2.927556089271462, 0);
  sqcRYGate(q, -0.33881829331504915, 1);
  sqcRZGate(q, -0.4813937088786258, 1);
  sqcRYGate(q, -2.39446239494405, 2);
  sqcRZGate(q, -1.7889599071638853, 2);
  sqcRYGate(q, -1.5446695215178075, 3);
  sqcRZGate(q, 1.8308185060205666, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5503975180635368, 0);
  sqcRZGate(q, -1.5788633134591965, 0);
  sqcRYGate(q, 0.8870990520941393, 1);
  sqcRZGate(q, 2.069907344299933, 1);
  sqcRYGate(q, 1.1762204202984587, 2);
  sqcRZGate(q, -2.1228230446344156, 2);
  sqcRYGate(q, 0.09696784435968908, 3);
  sqcRZGate(q, 1.864564628053218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.728183584552123, 0);
  sqcRZGate(q, 2.127051419631743, 0);
  sqcRYGate(q, -1.0910120488797328, 1);
  sqcRZGate(q, 0.6428565456222834, 1);
  sqcRYGate(q, 1.2952242985517968, 2);
  sqcRZGate(q, -2.886957781837969, 2);
  sqcRYGate(q, -3.106289899345319, 3);
  sqcRZGate(q, -0.8985086179568196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7872329113976497, 0);
  sqcRZGate(q, -1.633644724621809, 0);
  sqcRYGate(q, -0.8343776145994131, 1);
  sqcRZGate(q, 3.1013232466268894, 1);
  sqcRYGate(q, 2.7996971990743487, 2);
  sqcRZGate(q, 0.20531769535488917, 2);
  sqcRYGate(q, 0.0024909073545646976, 3);
  sqcRZGate(q, 1.3612249046719638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5928212215488635, 0);
  sqcRZGate(q, 1.098526295474141, 0);
  sqcRYGate(q, 3.019481441131891, 1);
  sqcRZGate(q, 0.005708874859215094, 1);
  sqcRYGate(q, -0.3575444504846965, 2);
  sqcRZGate(q, -0.4338301113125421, 2);
  sqcRYGate(q, -1.4824401612675526, 3);
  sqcRZGate(q, -0.8330599709601101, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.964042204931129, 0);
  sqcRZGate(q, -3.079757511682032, 0);
  sqcRYGate(q, 1.2917340627277145, 1);
  sqcRZGate(q, -1.9076575315276205, 1);
  sqcRYGate(q, 1.483342575894982, 2);
  sqcRZGate(q, -1.1152288231385699, 2);
  sqcRYGate(q, -0.7514278560333033, 3);
  sqcRZGate(q, -1.4372688773840363, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2217726778614733, 0);
  sqcRZGate(q, 1.1865948578012775, 0);
  sqcRYGate(q, 1.3267046183889937, 1);
  sqcRZGate(q, 1.2211198211012277, 1);
  sqcRYGate(q, 0.42351530627174494, 2);
  sqcRZGate(q, -1.4328933173001905, 2);
  sqcRYGate(q, 1.6473246212249963, 3);
  sqcRZGate(q, 2.8021102180414634, 3);

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
