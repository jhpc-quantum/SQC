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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.5695945783410816, 0);
  sqcRZGate(q, 1.5547674053191676, 0);
  sqcRYGate(q, -1.0531522354459604, 1);
  sqcRZGate(q, -1.5713610734961072, 1);
  sqcRYGate(q, -1.5714653882393739, 2);
  sqcRZGate(q, -1.5712765841336775, 2);
  sqcRYGate(q, -1.551437188246442, 3);
  sqcRZGate(q, 1.1312475456931657, 3);
  sqcRYGate(q, 1.5707990262154106, 4);
  sqcRZGate(q, -1.5720793688512673, 4);
  sqcRYGate(q, -1.5706979403133232, 5);
  sqcRZGate(q, -1.576769624530498, 5);
  sqcRYGate(q, 1.5707954189356803, 6);
  sqcRZGate(q, -2.7249256731633555, 6);
  sqcRYGate(q, 9.993426765590431e-05, 7);
  sqcRZGate(q, 0.7582501997285602, 7);
  sqcRYGate(q, 1.612266196289368, 8);
  sqcRZGate(q, 1.336434535542948, 8);
  sqcRYGate(q, -5.0240397114542645e-05, 9);
  sqcRZGate(q, -0.17350970303579416, 9);
  sqcRYGate(q, -0.8277448879698452, 10);
  sqcRZGate(q, -2.34826050036656, 10);
  sqcRYGate(q, 1.2957228059087624, 11);
  sqcRZGate(q, 2.1396458491850803, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.051672370035819704, 0);
  sqcRZGate(q, 0.015906223253552083, 0);
  sqcRYGate(q, 2.9527551397329153, 1);
  sqcRZGate(q, -1.5552452389840847, 1);
  sqcRYGate(q, -3.0271708700949653, 2);
  sqcRZGate(q, -0.0018417923987022024, 2);
  sqcRYGate(q, 1.5643098640214328, 3);
  sqcRZGate(q, -1.9163606476060073, 3);
  sqcRYGate(q, -0.3292014238365717, 4);
  sqcRZGate(q, 0.4305391305335125, 4);
  sqcRYGate(q, 1.5709974313541721, 5);
  sqcRZGate(q, 1.96364096450972, 5);
  sqcRYGate(q, 1.186691115950822e-05, 6);
  sqcRZGate(q, 1.1540472593246294, 6);
  sqcRYGate(q, 1.5708082115811919, 7);
  sqcRZGate(q, -1.5719339274677226, 7);
  sqcRYGate(q, -0.1767498505826861, 8);
  sqcRZGate(q, 0.2379347840333689, 8);
  sqcRYGate(q, 0.01965003754190242, 9);
  sqcRZGate(q, -3.046306420050539, 9);
  sqcRYGate(q, -2.3786927397710014, 10);
  sqcRZGate(q, 1.3092812180386533, 10);
  sqcRYGate(q, -1.8343034959597198, 11);
  sqcRZGate(q, 2.362080645639112, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5345829459132019, 0);
  sqcRZGate(q, 3.1394018868618616, 0);
  sqcRYGate(q, -1.7085449514026418, 1);
  sqcRZGate(q, -3.069550099996851, 1);
  sqcRYGate(q, 0.20568722849575494, 2);
  sqcRZGate(q, -3.1399790948250534, 2);
  sqcRYGate(q, -0.19149326969648436, 3);
  sqcRZGate(q, -2.784086792175706, 3);
  sqcRYGate(q, 0.0010354529443398655, 4);
  sqcRZGate(q, -0.41754317669018365, 4);
  sqcRYGate(q, -2.9593658058986527, 5);
  sqcRZGate(q, -1.1721304069838467, 5);
  sqcRYGate(q, 1.570759387135232, 6);
  sqcRZGate(q, 3.1415575110993856, 6);
  sqcRYGate(q, 1.5721080101328708, 7);
  sqcRZGate(q, -9.591065635472519e-05, 7);
  sqcRYGate(q, 1.531545466499386, 8);
  sqcRZGate(q, 1.1389493888190545, 8);
  sqcRYGate(q, 1.5376683531886899, 9);
  sqcRZGate(q, 1.3541917911756156, 9);
  sqcRYGate(q, -2.1754738507995066, 10);
  sqcRZGate(q, 1.2635574558659801, 10);
  sqcRYGate(q, -2.2693101171431422, 11);
  sqcRZGate(q, 2.21508080512805, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5476807374410735, 0);
  sqcRZGate(q, 0.0004090971644358696, 0);
  sqcRYGate(q, 1.7022533505769528, 1);
  sqcRZGate(q, 2.5532792185155126, 1);
  sqcRYGate(q, -0.9220809244836083, 2);
  sqcRZGate(q, -0.0005709498855304882, 2);
  sqcRYGate(q, -1.931295631872576, 3);
  sqcRZGate(q, -1.5158020605410645, 3);
  sqcRYGate(q, -3.093850883062102, 4);
  sqcRZGate(q, -3.130224728960335, 4);
  sqcRYGate(q, 1.56513559762099, 5);
  sqcRZGate(q, 3.0651427669533216, 5);
  sqcRYGate(q, 2.7678789965295216, 6);
  sqcRZGate(q, -1.8508271416349718, 6);
  sqcRYGate(q, 1.5709791554925203, 7);
  sqcRZGate(q, 2.763255209759046, 7);
  sqcRYGate(q, 3.1413211912212855, 8);
  sqcRZGate(q, 1.1390279076541907, 8);
  sqcRYGate(q, 0.00015309785693924451, 9);
  sqcRZGate(q, 0.8940829161542716, 9);
  sqcRYGate(q, -0.00026020638218275736, 10);
  sqcRZGate(q, -1.5280821000876488, 10);
  sqcRYGate(q, -0.9135055359055348, 11);
  sqcRZGate(q, -1.2456777959593497, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.570259074802429, 0);
  sqcRZGate(q, -0.7454260993297845, 0);
  sqcRYGate(q, 0.3364997954360412, 1);
  sqcRZGate(q, -2.5307305517187233, 1);
  sqcRYGate(q, -2.6706653733490784, 2);
  sqcRZGate(q, 2.3573881985827487, 2);
  sqcRYGate(q, -2.0984655324567356, 3);
  sqcRZGate(q, 0.11699030517486798, 3);
  sqcRYGate(q, 1.570820742363514, 4);
  sqcRZGate(q, -3.0797200886693976, 4);
  sqcRYGate(q, -1.1961692245490496, 5);
  sqcRZGate(q, -2.186593021032491, 5);
  sqcRYGate(q, -0.0005999303396443856, 6);
  sqcRZGate(q, 0.02103716920512788, 6);
  sqcRYGate(q, 0.0013677234992117704, 7);
  sqcRZGate(q, 2.7070831733539937, 7);
  sqcRYGate(q, -1.5687020691174265, 8);
  sqcRZGate(q, 1.5737888606232469, 8);
  sqcRYGate(q, 0.05278112956641048, 9);
  sqcRZGate(q, 2.4635093579670913, 9);
  sqcRYGate(q, -2.2506465115396086, 10);
  sqcRZGate(q, -0.07996745843261886, 10);
  sqcRYGate(q, 1.7234584290797805, 11);
  sqcRZGate(q, 1.5552263963100899, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1414094134941095, 0);
  sqcRZGate(q, -1.1767344723377762, 0);
  sqcRYGate(q, 1.5699734219696042, 1);
  sqcRZGate(q, 0.35915135211301585, 1);
  sqcRYGate(q, 0.001990850131949884, 2);
  sqcRZGate(q, 0.7843444677732323, 2);
  sqcRYGate(q, 1.5679824947402774, 3);
  sqcRZGate(q, -2.3169697755953678e-05, 3);
  sqcRYGate(q, -0.007464873080918452, 4);
  sqcRZGate(q, -0.03941991635294428, 4);
  sqcRYGate(q, 0.14883087996989186, 5);
  sqcRZGate(q, 2.360204902476174, 5);
  sqcRYGate(q, 2.791029006132817e-06, 6);
  sqcRZGate(q, 0.76435095730354, 6);
  sqcRYGate(q, 3.074445966442243, 7);
  sqcRZGate(q, -0.8070306123853309, 7);
  sqcRYGate(q, -0.4541775211418635, 8);
  sqcRZGate(q, -0.0002884612070541692, 8);
  sqcRYGate(q, 1.5707935347138997, 9);
  sqcRZGate(q, 0.06846448677851615, 9);
  sqcRYGate(q, -3.141427233081168, 10);
  sqcRZGate(q, -3.0546264445322255, 10);
  sqcRYGate(q, 0.08649903649196486, 11);
  sqcRZGate(q, -2.8996780910754025, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0015512669314701882, 0);
  sqcRZGate(q, -0.2583854141637385, 0);
  sqcRYGate(q, -1.8245951641815241, 1);
  sqcRZGate(q, 0.09488675710930072, 1);
  sqcRYGate(q, -1.5707867396691952, 2);
  sqcRZGate(q, 2.48869141110662, 2);
  sqcRYGate(q, -2.6073549302858665, 3);
  sqcRZGate(q, -1.9434955346885312, 3);
  sqcRYGate(q, -0.00669025282199474, 4);
  sqcRZGate(q, -3.1287456567637966, 4);
  sqcRYGate(q, 0.5276232818156483, 5);
  sqcRZGate(q, -3.0300226230553156, 5);
  sqcRYGate(q, -0.0005389513093865261, 6);
  sqcRZGate(q, -2.002362071156088, 6);
  sqcRYGate(q, 0.14991655103622817, 7);
  sqcRZGate(q, 3.136447793280927, 7);
  sqcRYGate(q, -1.5707371636616374, 8);
  sqcRZGate(q, -2.7482132944243007, 8);
  sqcRYGate(q, 1.5707776468580592, 9);
  sqcRZGate(q, 4.023184247348155e-05, 9);
  sqcRYGate(q, 1.5683575483664738, 10);
  sqcRZGate(q, -1.5701839404909084, 10);
  sqcRYGate(q, 2.8568640922233834, 11);
  sqcRZGate(q, 2.7899649399478923, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1415003148508114, 0);
  sqcRZGate(q, 2.4527855421076, 0);
  sqcRYGate(q, 1.5696077133293607, 1);
  sqcRZGate(q, -1.8175466484872311, 1);
  sqcRYGate(q, 2.8894804431336265, 2);
  sqcRZGate(q, 3.118447645916966, 2);
  sqcRYGate(q, -3.5805254396947817e-05, 3);
  sqcRZGate(q, 2.2917318145250647, 3);
  sqcRYGate(q, -3.1385075468648274, 4);
  sqcRZGate(q, 0.035275142913003946, 4);
  sqcRYGate(q, -0.47295903733207234, 5);
  sqcRZGate(q, -0.10476021896071241, 5);
  sqcRYGate(q, 3.1413455206965244, 6);
  sqcRZGate(q, -3.067765529071502, 6);
  sqcRYGate(q, -2.7765468611152344, 7);
  sqcRZGate(q, 3.141583455462616, 7);
  sqcRYGate(q, -3.804987366073931e-06, 8);
  sqcRZGate(q, 2.748283136441526, 8);
  sqcRYGate(q, 1.5697911310186545, 9);
  sqcRZGate(q, -1.198064780576935, 9);
  sqcRYGate(q, 0.20685370707658812, 10);
  sqcRZGate(q, 1.570192810210039, 10);
  sqcRYGate(q, -1.5708054681785373, 11);
  sqcRZGate(q, 1.5708108191437662, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5713237686001635, 0);
  sqcRZGate(q, -1.570789348402759, 0);
  sqcRYGate(q, 3.141298648665083, 1);
  sqcRZGate(q, -0.24674237044470018, 1);
  sqcRYGate(q, -3.141569565611507, 2);
  sqcRZGate(q, -0.9564518536947393, 2);
  sqcRYGate(q, 3.1415290797006734, 3);
  sqcRZGate(q, 1.9190097448868944, 3);
  sqcRYGate(q, 1.5737460838920985, 4);
  sqcRZGate(q, 1.570684759832816, 4);
  sqcRYGate(q, 0.9071326170148737, 5);
  sqcRZGate(q, 1.384848982058961, 5);
  sqcRYGate(q, -1.5708934962564485, 6);
  sqcRZGate(q, -1.5706760485911264, 6);
  sqcRYGate(q, -1.420764253305409, 7);
  sqcRZGate(q, 1.5706395810899254, 7);
  sqcRYGate(q, 1.5715162523547692, 8);
  sqcRZGate(q, -1.5707596431030968, 8);
  sqcRYGate(q, 4.071736390074168e-05, 9);
  sqcRZGate(q, -0.37273490255772584, 9);
  sqcRYGate(q, 1.570787007538445, 10);
  sqcRZGate(q, 1.5707838817867879, 10);
  sqcRYGate(q, 1.5720178557787667, 11);
  sqcRZGate(q, -1.6408786094529575, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5708151866207611, 0);
  sqcRZGate(q, 1.218500028461167, 0);
  sqcRYGate(q, 1.5707874981124834, 1);
  sqcRZGate(q, -0.8905466598526298, 1);
  sqcRYGate(q, -1.722931823619224, 2);
  sqcRZGate(q, -0.9899050226521933, 2);
  sqcRYGate(q, -1.5708627945285765, 3);
  sqcRZGate(q, 2.78529327814101, 3);
  sqcRYGate(q, 1.5708005176560986, 4);
  sqcRZGate(q, -2.3636165436847527, 4);
  sqcRYGate(q, -1.5705581537229403, 5);
  sqcRZGate(q, -1.9280991927165068, 5);
  sqcRYGate(q, 1.5708404567649907, 6);
  sqcRZGate(q, -2.3595026070920144, 6);
  sqcRYGate(q, -1.5707929561181135, 7);
  sqcRZGate(q, -1.9284314082841096, 7);
  sqcRYGate(q, -1.5707984607338636, 8);
  sqcRZGate(q, 2.352854163202532, 8);
  sqcRYGate(q, 1.5708748000735104, 9);
  sqcRZGate(q, -0.3577204211753611, 9);
  sqcRYGate(q, -1.5707916305227707, 10);
  sqcRZGate(q, 2.35287267111834, 10);
  sqcRYGate(q, 3.1410999138849776, 11);
  sqcRZGate(q, 2.713850943723441, 11);

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
