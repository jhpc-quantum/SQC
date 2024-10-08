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

  sqcRYGate(q, -2.5708539884725843, 0);
  sqcRZGate(q, -1.7903967498615492, 0);
  sqcRYGate(q, -1.2241211254230668, 1);
  sqcRZGate(q, 1.859522625344284, 1);
  sqcRYGate(q, 2.213048359213408, 2);
  sqcRZGate(q, -1.5786537358241581, 2);
  sqcRYGate(q, 0.8732169388719787, 3);
  sqcRZGate(q, -1.9272163986806068, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6948072744714564, 0);
  sqcRZGate(q, 0.3255698773599507, 0);
  sqcRYGate(q, 3.105066924817698, 1);
  sqcRZGate(q, 2.80851129605962, 1);
  sqcRYGate(q, -1.5928943021838613, 2);
  sqcRZGate(q, 1.0206833449527977, 2);
  sqcRYGate(q, -0.9056348282379769, 3);
  sqcRZGate(q, 2.732946833277078, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9120395796987539, 0);
  sqcRZGate(q, 1.809860025447981, 0);
  sqcRYGate(q, -0.2624520091236249, 1);
  sqcRZGate(q, 1.5133394551403319, 1);
  sqcRYGate(q, -1.8943542990918507, 2);
  sqcRZGate(q, 0.22365267701077493, 2);
  sqcRYGate(q, -1.896055759556817, 3);
  sqcRZGate(q, -2.1146029904643706, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1974081949995137, 0);
  sqcRZGate(q, 1.9666487133538055, 0);
  sqcRYGate(q, 0.8237253421604454, 1);
  sqcRZGate(q, 0.2117265802347834, 1);
  sqcRYGate(q, -1.5570232962436226, 2);
  sqcRZGate(q, 1.926189199959133, 2);
  sqcRYGate(q, -0.24537803858083596, 3);
  sqcRZGate(q, 0.12121815038213946, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3804257407982736, 0);
  sqcRZGate(q, -0.4906789745834059, 0);
  sqcRYGate(q, 1.3341462690942003, 1);
  sqcRZGate(q, 1.5178001922600046, 1);
  sqcRYGate(q, -2.8578014976359056, 2);
  sqcRZGate(q, 2.8476791275592017, 2);
  sqcRYGate(q, 1.6459039344598365, 3);
  sqcRZGate(q, 3.0402425871051206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0762814153420406, 0);
  sqcRZGate(q, -0.43916492970513765, 0);
  sqcRYGate(q, -0.8496897604068083, 1);
  sqcRZGate(q, 1.947865473773961, 1);
  sqcRYGate(q, -2.9610088489289046, 2);
  sqcRZGate(q, -1.2277979048996652, 2);
  sqcRYGate(q, 0.5383088449319098, 3);
  sqcRZGate(q, 2.8419455089980854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1022214426211385, 0);
  sqcRZGate(q, -0.8647991012858611, 0);
  sqcRYGate(q, -2.3966002150488293, 1);
  sqcRZGate(q, 1.697308884138608, 1);
  sqcRYGate(q, -2.2171453043915497, 2);
  sqcRZGate(q, 1.8140610061127176, 2);
  sqcRYGate(q, -0.600694645011933, 3);
  sqcRZGate(q, -0.34176987472229153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1529404147992486, 0);
  sqcRZGate(q, -3.0728465309329867, 0);
  sqcRYGate(q, 2.2247233044425405, 1);
  sqcRZGate(q, 0.4668928349597703, 1);
  sqcRYGate(q, -2.563394607875596, 2);
  sqcRZGate(q, 2.9437609535369513, 2);
  sqcRYGate(q, 0.3901480362260386, 3);
  sqcRZGate(q, -0.9529604714799188, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7515635980907867, 0);
  sqcRZGate(q, 3.0134075887055376, 0);
  sqcRYGate(q, -0.4375306524360054, 1);
  sqcRZGate(q, 1.0052013993687094, 1);
  sqcRYGate(q, 2.6152803847158075, 2);
  sqcRZGate(q, -0.15403710739642928, 2);
  sqcRYGate(q, -0.7652380059105555, 3);
  sqcRZGate(q, 0.8839968267729263, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6139557928385346, 0);
  sqcRZGate(q, 3.129958921985734, 0);
  sqcRYGate(q, 0.9003948544605714, 1);
  sqcRZGate(q, -0.6090592820721232, 1);
  sqcRYGate(q, 2.461179452808196, 2);
  sqcRZGate(q, 2.284552512854392, 2);
  sqcRYGate(q, 1.5912195316515785, 3);
  sqcRZGate(q, -1.9424220785574107, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.163588315628103, 0);
  sqcRZGate(q, 2.541480004821535, 0);
  sqcRYGate(q, -0.5379943466416128, 1);
  sqcRZGate(q, -2.914961264650902, 1);
  sqcRYGate(q, -0.015109808010021375, 2);
  sqcRZGate(q, 3.133028774765412, 2);
  sqcRYGate(q, 0.6252277751036157, 3);
  sqcRZGate(q, 1.1459785948618908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1995202331274124, 0);
  sqcRZGate(q, -1.1163802543633408, 0);
  sqcRYGate(q, -2.5269172750923854, 1);
  sqcRZGate(q, -0.5941638237469994, 1);
  sqcRYGate(q, 3.017008068798223, 2);
  sqcRZGate(q, -0.8344405346826154, 2);
  sqcRYGate(q, 2.351010783362094, 3);
  sqcRZGate(q, -2.5189223001088528, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2593615582397413, 0);
  sqcRZGate(q, 0.04404185474566358, 0);
  sqcRYGate(q, 1.9294055801727357, 1);
  sqcRZGate(q, -2.634625666284187, 1);
  sqcRYGate(q, -1.5318732055091075, 2);
  sqcRZGate(q, -1.9494158876883283, 2);
  sqcRYGate(q, -0.4323104236898303, 3);
  sqcRZGate(q, 2.007016043169318, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2121955462743301, 0);
  sqcRZGate(q, 0.2803678359151741, 0);
  sqcRYGate(q, -0.046220163059279784, 1);
  sqcRZGate(q, -2.9405333139430936, 1);
  sqcRYGate(q, 2.8798361120834644, 2);
  sqcRZGate(q, 1.361858054379743, 2);
  sqcRYGate(q, -1.2458239584323445, 3);
  sqcRZGate(q, 2.4170167687500834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8585611019247184, 0);
  sqcRZGate(q, 0.35648135384987156, 0);
  sqcRYGate(q, 0.6445911876210887, 1);
  sqcRZGate(q, -1.7108681971789008, 1);
  sqcRYGate(q, 1.1047206282533661, 2);
  sqcRZGate(q, -1.879055768072679, 2);
  sqcRYGate(q, -0.10597796027792686, 3);
  sqcRZGate(q, 1.3502264430170916, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9287257275498106, 0);
  sqcRZGate(q, -0.36429398114503103, 0);
  sqcRYGate(q, -1.9608220338414326, 1);
  sqcRZGate(q, -0.9179604479390812, 1);
  sqcRYGate(q, -1.269406289774083, 2);
  sqcRZGate(q, 1.503191882966589, 2);
  sqcRYGate(q, -3.0002546532732994, 3);
  sqcRZGate(q, -1.587313587529969, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.08675067369260425, 0);
  sqcRZGate(q, 0.8790550307428977, 0);
  sqcRYGate(q, -0.6956175491072285, 1);
  sqcRZGate(q, 2.314462415123471, 1);
  sqcRYGate(q, -1.9323933797946682, 2);
  sqcRZGate(q, 1.0505823794690223, 2);
  sqcRYGate(q, -0.32145312748964155, 3);
  sqcRZGate(q, 2.030937464447411, 3);

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
