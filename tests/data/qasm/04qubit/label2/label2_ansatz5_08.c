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

  sqcRYGate(q, 1.8941821754828674, 0);
  sqcRYGate(q, 1.1905050790866036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.476743589221157, 0);
  sqcRYGate(q, -0.9445149378068315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5386644315600355, 2);
  sqcRYGate(q, 2.437271742305509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.49349641669223665, 2);
  sqcRYGate(q, 2.8080400557473744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1485883404245623, 1);
  sqcRYGate(q, 3.091116155212708, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3730771143245395, 1);
  sqcRYGate(q, -1.0891845030719711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36099225136411245, 0);
  sqcRYGate(q, 1.3029827542672057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0991630346111536, 0);
  sqcRYGate(q, 1.6877618710053914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9026964506460853, 2);
  sqcRYGate(q, 1.7102781733347587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9800585800555726, 2);
  sqcRYGate(q, 2.566798254832536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8131528860592865, 1);
  sqcRYGate(q, -2.2511458559249284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6536559692182724, 1);
  sqcRYGate(q, 1.786340256097461, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.078720350809086, 0);
  sqcRYGate(q, -2.583329829877966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5707885021195702, 0);
  sqcRYGate(q, -0.6429952523485125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.341359818730284, 2);
  sqcRYGate(q, -1.73530595775541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3532677764277484, 2);
  sqcRYGate(q, -1.1113182902207477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9625298374012203, 1);
  sqcRYGate(q, -1.3831425830963437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.455071697906562, 1);
  sqcRYGate(q, 1.9625434560552648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.406468009155053, 0);
  sqcRYGate(q, -2.8874223704431374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2682989701524443, 0);
  sqcRYGate(q, 0.10003373283638427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3342343542918806, 2);
  sqcRYGate(q, 0.2639113561846571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2509260505770616, 2);
  sqcRYGate(q, -0.6807792919349646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4892379698898033, 1);
  sqcRYGate(q, -0.4801008671551553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2983615361647303, 1);
  sqcRYGate(q, -0.14493607465884395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3735932228441996, 0);
  sqcRYGate(q, -0.23576693011718114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.398160207594935, 0);
  sqcRYGate(q, 2.8588923729450575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7442647995966835, 2);
  sqcRYGate(q, -1.191818837728816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.466713335931186, 2);
  sqcRYGate(q, 0.9831240892862648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.006336065182313487, 1);
  sqcRYGate(q, -0.07736679893181098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.010424797370140912, 1);
  sqcRYGate(q, -1.725930499550076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.442402757968643, 0);
  sqcRYGate(q, 1.5556908822969724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6994745781721177, 0);
  sqcRYGate(q, 2.586699619652261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1771253974911593, 2);
  sqcRYGate(q, -1.8920884821942079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0336935112512082, 2);
  sqcRYGate(q, 0.9709562118733599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7042032622358647, 1);
  sqcRYGate(q, 1.71893543033665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.827394802528165, 1);
  sqcRYGate(q, 0.060758135575082466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5649025865001054, 0);
  sqcRYGate(q, 1.1797219148312752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5373923447015305, 0);
  sqcRYGate(q, -0.5351656714646864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.473634464847241, 2);
  sqcRYGate(q, -2.401140298764692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9600505688670715, 2);
  sqcRYGate(q, -0.29989938185362686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7793706911759504, 1);
  sqcRYGate(q, -0.3805304547068342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9067880641368565, 1);
  sqcRYGate(q, 2.8466037914349944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.549724167648125, 0);
  sqcRYGate(q, -0.23638753200051976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8967467328377839, 0);
  sqcRYGate(q, 1.2177744264158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0136661051843356, 2);
  sqcRYGate(q, -2.016156528127894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2175126434859083, 2);
  sqcRYGate(q, -0.4163267224124342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5878179125315115, 1);
  sqcRYGate(q, -0.6365486796929656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6657071603971135, 1);
  sqcRYGate(q, 1.9256417362752094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3050104159871752, 0);
  sqcRYGate(q, 0.9291517610534825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4027819244842196, 0);
  sqcRYGate(q, -1.9056099339816717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9599733836605885, 2);
  sqcRYGate(q, 0.6225639733829444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.550372898699302, 2);
  sqcRYGate(q, -2.85195535618307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4024488428767266, 1);
  sqcRYGate(q, 0.9088365742108373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6712565426183987, 1);
  sqcRYGate(q, -0.8689109779927106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5431343115383336, 0);
  sqcRYGate(q, -3.078195312995396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1374348685706774, 0);
  sqcRYGate(q, -1.7442492225340114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5738542076842044, 2);
  sqcRYGate(q, 0.735288195503235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0617273409175807, 2);
  sqcRYGate(q, 1.2293670718546648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7384014018949309, 1);
  sqcRYGate(q, 2.5126216619871538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9825265108349193, 1);
  sqcRYGate(q, -0.4732932091715494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20488052305142243, 0);
  sqcRYGate(q, 2.97199701300671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5634636378518563, 0);
  sqcRYGate(q, 2.8381049388644133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6441181319946316, 2);
  sqcRYGate(q, 1.9522876491212156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7325161394111483, 2);
  sqcRYGate(q, 2.2168171410980504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.083342126998204, 1);
  sqcRYGate(q, -1.679681832124614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7543915950278834, 1);
  sqcRYGate(q, 1.6892781299873016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3579350004441544, 0);
  sqcRYGate(q, 2.525035264443937, 1);
  sqcRYGate(q, 2.5435751382237157, 2);
  sqcRYGate(q, -2.1960364547471807, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
