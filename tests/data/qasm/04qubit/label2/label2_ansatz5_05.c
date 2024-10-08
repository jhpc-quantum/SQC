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

  sqcRYGate(q, 1.4917887690077052, 0);
  sqcRYGate(q, -0.029822537613816813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0800347209636667, 0);
  sqcRYGate(q, 0.789968647201623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5849229223245018, 2);
  sqcRYGate(q, -3.0933338440768248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2475248488049466, 2);
  sqcRYGate(q, 1.939524313660832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8649803103655231, 1);
  sqcRYGate(q, -1.4057151869049476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6777143873044826, 1);
  sqcRYGate(q, -0.5425016626468908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9116499730807712, 0);
  sqcRYGate(q, 0.7261114092594797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8922708325330785, 0);
  sqcRYGate(q, -1.113104962822331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5950543354691993, 2);
  sqcRYGate(q, 2.7223614392399087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.021228497105360233, 2);
  sqcRYGate(q, -2.158438435621489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48017883562075847, 1);
  sqcRYGate(q, 0.3237276533551672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.819821103242365, 1);
  sqcRYGate(q, -3.0375112721724586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13292627374950045, 0);
  sqcRYGate(q, -2.7212291727351836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8141376561538927, 0);
  sqcRYGate(q, -0.3254280913363517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8173653819468947, 2);
  sqcRYGate(q, -2.3946673968635954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8856777289152737, 2);
  sqcRYGate(q, -2.1587862068927945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22889093682128792, 1);
  sqcRYGate(q, -1.1013139144021353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6902818200034178, 1);
  sqcRYGate(q, 2.5099511124711085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8596780751115172, 0);
  sqcRYGate(q, -1.644340207697172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8315537551871954, 0);
  sqcRYGate(q, -1.3985904171025654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9687931983262015, 2);
  sqcRYGate(q, 2.2371339378851833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1719603000532428, 2);
  sqcRYGate(q, 0.3164831867702164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8025818637243127, 1);
  sqcRYGate(q, 3.0414021621041933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10825027094001968, 1);
  sqcRYGate(q, -1.5281044254807066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3653064309490005, 0);
  sqcRYGate(q, -1.376668127379614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8245102539366924, 0);
  sqcRYGate(q, 1.4194218161809453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9421059763642415, 2);
  sqcRYGate(q, 1.9746046342733028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.263963103053814, 2);
  sqcRYGate(q, -2.261085573837637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.794689336432451, 1);
  sqcRYGate(q, -1.1626602233457437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10052601955549623, 1);
  sqcRYGate(q, -1.1847994220298856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3942655301872345, 0);
  sqcRYGate(q, -0.052499465528344835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13064100011278257, 0);
  sqcRYGate(q, -0.3541772644368817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7364897588392747, 2);
  sqcRYGate(q, -0.6131337966986805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.598302177450025, 2);
  sqcRYGate(q, -2.7053805963914623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.651722964800359, 1);
  sqcRYGate(q, 0.6215624845123718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.653215076171933, 1);
  sqcRYGate(q, -0.7331954346058703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8406983472005047, 0);
  sqcRYGate(q, -1.1332867260044548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2103061671241946, 0);
  sqcRYGate(q, 1.8718015951414289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.000216286672433, 2);
  sqcRYGate(q, -2.673626554343353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.749773445116591, 2);
  sqcRYGate(q, 0.9389090717099432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8346602260128853, 1);
  sqcRYGate(q, -1.5805164504760176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.671383891316803, 1);
  sqcRYGate(q, -2.105704353638645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4166202246457096, 0);
  sqcRYGate(q, 2.992294137431545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3896316560513471, 0);
  sqcRYGate(q, -1.576279386025579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9396382212903598, 2);
  sqcRYGate(q, 2.639446127052489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7899094999371434, 2);
  sqcRYGate(q, -1.171385028262768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6703253115825103, 1);
  sqcRYGate(q, 2.04998180250164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19340060310300888, 1);
  sqcRYGate(q, -0.3832252489591683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.005238022378462, 0);
  sqcRYGate(q, -0.9013379112500237, 1);
  sqcRYGate(q, 1.3718902054898774, 2);
  sqcRYGate(q, -2.906519748825256, 3);

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
