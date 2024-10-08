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

  sqcRYGate(q, 0.5901430211019951, 0);
  sqcRYGate(q, -2.584236098747793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1584678456352906, 0);
  sqcRYGate(q, -1.9266356371577382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3093184202453911, 0);
  sqcRYGate(q, -1.4416928408680219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.21489343348142942, 0);
  sqcRYGate(q, 1.639176090552316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1996628996724343, 0);
  sqcRYGate(q, -2.6790363842565315, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.963632777334181, 0);
  sqcRYGate(q, -0.9586260542715506, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.43078593387421993, 1);
  sqcRYGate(q, 2.0997057754217616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1386089718046506, 1);
  sqcRYGate(q, -2.1821132122927773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.055144959008052, 1);
  sqcRYGate(q, 2.637130806260376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2391780597560884, 1);
  sqcRYGate(q, 1.1933858156989476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.37773521090454415, 2);
  sqcRYGate(q, -0.037924136472785204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.239754394164734, 2);
  sqcRYGate(q, 2.857381796900065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9138764461114894, 0);
  sqcRYGate(q, -2.2869672684937723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0121825583808004, 0);
  sqcRYGate(q, -0.5114253089529246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2210009652526193, 0);
  sqcRYGate(q, 0.29059142419403194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6907018487151104, 0);
  sqcRYGate(q, -0.5333252316985799, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.941253684293027, 0);
  sqcRYGate(q, 2.3198061625508095, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6045425143490193, 0);
  sqcRYGate(q, 1.2190950937728755, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2334538754971813, 1);
  sqcRYGate(q, 0.11564991874162356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5079121533709177, 1);
  sqcRYGate(q, 1.957835348446829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5738652242963218, 1);
  sqcRYGate(q, -1.2154450594271928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7580293014458563, 1);
  sqcRYGate(q, -2.774314286325741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3323536329355918, 2);
  sqcRYGate(q, -3.065805583366862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3618156912150894, 2);
  sqcRYGate(q, 0.38242312450447163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2146836304276394, 0);
  sqcRYGate(q, -2.0330596376939445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7946888589470658, 0);
  sqcRYGate(q, 0.5383369935351539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9086778827227557, 0);
  sqcRYGate(q, -1.9285482655044621, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9187928333424282, 0);
  sqcRYGate(q, -0.09829330181328633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.114068362605078, 0);
  sqcRYGate(q, -2.8001890794487094, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.38745430236461065, 0);
  sqcRYGate(q, -0.5742856308472906, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.871587880793463, 1);
  sqcRYGate(q, 0.010064948477640279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.31268995088938, 1);
  sqcRYGate(q, -0.24772802154008253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.002434725234046, 1);
  sqcRYGate(q, -1.1641027930146863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0455673696826033, 1);
  sqcRYGate(q, -2.4791108684680836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6326681987187253, 2);
  sqcRYGate(q, 2.035824295109351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.83336292691871, 2);
  sqcRYGate(q, -1.8465982186877223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.696202444691661, 0);
  sqcRYGate(q, 2.2736825125675626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.20714385863375, 0);
  sqcRYGate(q, -0.9422217240405049, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.774203964948079, 0);
  sqcRYGate(q, -0.4937323824216069, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.084785296693435, 0);
  sqcRYGate(q, -2.0253661125319167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9242130788633967, 0);
  sqcRYGate(q, 1.3312621319618465, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1208253689214613, 0);
  sqcRYGate(q, 2.7224032925535044, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5300471482697209, 1);
  sqcRYGate(q, 0.11196208492618873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8421846754751714, 1);
  sqcRYGate(q, 0.9081776769319035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7513892011677212, 1);
  sqcRYGate(q, -3.0281288001168467, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.033679296015238, 1);
  sqcRYGate(q, 1.4515711202568102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5451164541576112, 2);
  sqcRYGate(q, -2.3138064692623455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9718977409451197, 2);
  sqcRYGate(q, -2.80055158770904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.970096676368498, 0);
  sqcRYGate(q, -0.37342516059714714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.733376391605542, 0);
  sqcRYGate(q, -1.7140840527132921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.025316119424812, 0);
  sqcRYGate(q, -2.390519663990515, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0400830281322775, 0);
  sqcRYGate(q, -0.6938531268604837, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9365902692869613, 0);
  sqcRYGate(q, -2.720390360025585, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6162544243070558, 0);
  sqcRYGate(q, 0.5301538689629949, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7056835606513492, 1);
  sqcRYGate(q, -2.696121607182948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6363115432369575, 1);
  sqcRYGate(q, 2.5333536005977026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5295977966930403, 1);
  sqcRYGate(q, 2.225477587190456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.638807485885117, 1);
  sqcRYGate(q, 2.050173312738532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3820556163365652, 2);
  sqcRYGate(q, -1.018045036865197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.87805218417828, 2);
  sqcRYGate(q, -1.744698636173272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.29804373786972244, 0);
  sqcRYGate(q, 0.3975037269582318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07264334460780456, 0);
  sqcRYGate(q, 0.4758510188277503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.789894895257218, 0);
  sqcRYGate(q, -2.3849116072363845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6897359162171424, 0);
  sqcRYGate(q, 3.0605051743672638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16368152051759388, 0);
  sqcRYGate(q, 0.9658921562664468, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2249650398571186, 0);
  sqcRYGate(q, -1.829228867347891, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6511648954241003, 1);
  sqcRYGate(q, -0.4564457991199724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5746948776516836, 1);
  sqcRYGate(q, 2.81016038170724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1672975183168974, 1);
  sqcRYGate(q, -1.266421830602054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12757311184501052, 1);
  sqcRYGate(q, -0.5391773329096301, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6335004927706485, 2);
  sqcRYGate(q, -1.8423226945746918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5348798067177052, 2);
  sqcRYGate(q, 0.7327934999179027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.939305991014686, 0);
  sqcRYGate(q, -1.9887939303146465, 1);
  sqcRYGate(q, -3.0828029592087227, 2);
  sqcRYGate(q, -1.1596580019358456, 3);

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
