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

  sqcRYGate(q, -2.589169528488395, 0);
  sqcRYGate(q, -0.7547166210790769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7601136439891247, 0);
  sqcRYGate(q, 1.650406847948621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.705662136212065, 1);
  sqcRYGate(q, 1.4059851175240432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0288998824328788, 1);
  sqcRYGate(q, -1.9523153645604732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.212699913359537, 2);
  sqcRYGate(q, -0.22179828249562195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9560104775253615, 2);
  sqcRYGate(q, -0.02814940706778124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5762640829556291, 0);
  sqcRYGate(q, 2.6204208151713457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8480115546811405, 0);
  sqcRYGate(q, -0.692053255059727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.336257147050016, 1);
  sqcRYGate(q, 0.10321735491972817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3757935324598574, 1);
  sqcRYGate(q, -1.1516645952490165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5671020318886053, 2);
  sqcRYGate(q, 1.0949396985626354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9075702880853063, 2);
  sqcRYGate(q, -2.397309250343853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.607126109672963, 0);
  sqcRYGate(q, -1.5967676815142995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.584597093020948, 0);
  sqcRYGate(q, -2.7266389569409744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.077003367703046, 1);
  sqcRYGate(q, -2.5630563211852824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0471091057502906, 1);
  sqcRYGate(q, -0.6567388130931311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6046609148909545, 2);
  sqcRYGate(q, -2.120298211095416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6404629106924875, 2);
  sqcRYGate(q, 1.3876574614274664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.610573847609805, 0);
  sqcRYGate(q, 0.4339011766679431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7527716683343586, 0);
  sqcRYGate(q, -0.3509007836104617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.844435921822789, 1);
  sqcRYGate(q, 0.766134625685158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09565738501897059, 1);
  sqcRYGate(q, -1.1406913075561849, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5951495864146041, 2);
  sqcRYGate(q, 0.2299256940141765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0084909177153127, 2);
  sqcRYGate(q, 1.1734109025689028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.024267080273325803, 0);
  sqcRYGate(q, -1.868170540270442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.645294997790344, 0);
  sqcRYGate(q, -2.053203805389514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.051882837712366, 1);
  sqcRYGate(q, 1.2778882479000861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1933877829254476, 1);
  sqcRYGate(q, -1.479214598840247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14435378840418572, 2);
  sqcRYGate(q, -2.3502521234100526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10300250163818081, 2);
  sqcRYGate(q, 0.19357255893306285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5585626411493627, 0);
  sqcRYGate(q, -0.8459820016315706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8600548720424331, 0);
  sqcRYGate(q, 2.18541850988598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.027991367508759, 1);
  sqcRYGate(q, -1.873889274859323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.115075284405481, 1);
  sqcRYGate(q, -2.300713897236753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8891500446611396, 2);
  sqcRYGate(q, -2.5896965454099687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1352998778069825, 2);
  sqcRYGate(q, 0.41532424020678693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7318281666571265, 0);
  sqcRYGate(q, -2.5920300648949968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3864531136989733, 0);
  sqcRYGate(q, 2.6576486386748894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.693716388642131, 1);
  sqcRYGate(q, 1.7142286498948636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.84586315354528, 1);
  sqcRYGate(q, 2.4486863798682084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7231418982503239, 2);
  sqcRYGate(q, -0.6328475482045492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4720181790567441, 2);
  sqcRYGate(q, -0.3041790169175837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9002184001466893, 0);
  sqcRYGate(q, -0.347229971040986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0856689319006776, 0);
  sqcRYGate(q, 1.5909475128799155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.36225364634543, 1);
  sqcRYGate(q, 0.505461601287986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.39465896782321597, 1);
  sqcRYGate(q, 1.9997704144754227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3814494441456993, 2);
  sqcRYGate(q, -0.2590459552973723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42964947759789407, 2);
  sqcRYGate(q, -0.3700862598781116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0027828655622275, 0);
  sqcRYGate(q, -2.4494095022069358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5049289185188277, 0);
  sqcRYGate(q, 2.8186724626125526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.94293781627791, 1);
  sqcRYGate(q, -0.6910353639595223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8765917899626385, 1);
  sqcRYGate(q, 2.1906931388657465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8256910986811996, 2);
  sqcRYGate(q, -0.2720845717446835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.855853408491587, 2);
  sqcRYGate(q, 3.0526792269936465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1185973257483326, 0);
  sqcRYGate(q, -0.05348337616677945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9997441892250136, 0);
  sqcRYGate(q, 2.2155291025878485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6998203318914501, 1);
  sqcRYGate(q, 0.11154188657891476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5117064760494454, 1);
  sqcRYGate(q, 0.4692141967609214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1278532392705367, 2);
  sqcRYGate(q, -0.060981972764738046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1791228077795637, 2);
  sqcRYGate(q, -0.8490435241921165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2225298040590855, 0);
  sqcRYGate(q, 0.5315357179557969, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.730109644374362, 0);
  sqcRYGate(q, 0.871369843667791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8725667107836765, 1);
  sqcRYGate(q, -0.4021531092881643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6759543771443237, 1);
  sqcRYGate(q, 2.2116162891006548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5835270729744884, 2);
  sqcRYGate(q, 2.6012901412783136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4678979651914017, 2);
  sqcRYGate(q, -0.47690587190315803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7151596062192326, 0);
  sqcRYGate(q, 1.6330302697429133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5276548986384036, 0);
  sqcRYGate(q, -1.137374883570307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7697915754254199, 1);
  sqcRYGate(q, 2.890879769775103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4540305021668312, 1);
  sqcRYGate(q, 1.468520628203887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.042510715754948, 2);
  sqcRYGate(q, 1.1312693524059725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.308454897112922, 2);
  sqcRYGate(q, -0.8536598108801874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7112341053733546, 0);
  sqcRYGate(q, -3.0054563263009952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.48051480093907, 0);
  sqcRYGate(q, -0.758373110691716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9176741986421075, 1);
  sqcRYGate(q, 1.4341031074731676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.925693977985929, 1);
  sqcRYGate(q, -2.4744674427370104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5502469441928047, 2);
  sqcRYGate(q, 1.584939727306635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1304431500315022, 2);
  sqcRYGate(q, -2.154971888293553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20494082517653442, 0);
  sqcRYGate(q, -0.8585188606751206, 1);
  sqcRYGate(q, -0.41745248837659604, 2);
  sqcRYGate(q, 2.0362000237778792, 3);

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
