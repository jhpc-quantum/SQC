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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.0199249761519114, 0);
  sqcRZGate(q, 3.0345342316294635, 0);
  sqcRYGate(q, 0.0001731639935882279, 1);
  sqcRZGate(q, 2.4439848535983804, 1);
  sqcRYGate(q, 2.3446712725748884, 2);
  sqcRZGate(q, 2.946608727774383, 2);
  sqcRYGate(q, -2.86512204842417, 3);
  sqcRZGate(q, 0.14680999506401748, 3);
  sqcRYGate(q, -0.3488253311754948, 4);
  sqcRZGate(q, 0.01807265975885386, 4);
  sqcRYGate(q, 0.43550977208984243, 5);
  sqcRZGate(q, 0.061247866509259015, 5);
  sqcRYGate(q, -2.2041300632008514, 6);
  sqcRZGate(q, -1.565928431643953, 6);
  sqcRYGate(q, -1.5665742555005293, 7);
  sqcRZGate(q, 3.126580596887696, 7);
  sqcRYGate(q, 1.571104752082678, 8);
  sqcRZGate(q, -1.3707559761243235, 8);
  sqcRYGate(q, -2.759289028212503, 9);
  sqcRZGate(q, -3.140847625911184, 9);
  sqcRYGate(q, -1.5693760744617837, 10);
  sqcRZGate(q, 1.9734891972048256, 10);
  sqcRYGate(q, -2.6145607962972144, 11);
  sqcRZGate(q, -0.07403804492918288, 11);
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
  sqcRYGate(q, -0.45144088975867636, 0);
  sqcRZGate(q, 2.515845936329046, 0);
  sqcRYGate(q, 1.5706386302220956, 1);
  sqcRZGate(q, -2.3584627877765545, 1);
  sqcRYGate(q, 2.34178967406915, 2);
  sqcRZGate(q, 3.001764954657768, 2);
  sqcRYGate(q, -1.0854961705224575, 3);
  sqcRZGate(q, 3.0910136183059502, 3);
  sqcRYGate(q, -2.885681715097833, 4);
  sqcRZGate(q, -3.0373727627925375, 4);
  sqcRYGate(q, 2.380219173324289, 5);
  sqcRZGate(q, -1.51516138253636, 5);
  sqcRYGate(q, 1.5746017519734226, 6);
  sqcRZGate(q, -3.141139641160187, 6);
  sqcRYGate(q, 1.5678358002241954, 7);
  sqcRZGate(q, -0.002737167852180811, 7);
  sqcRYGate(q, 1.5815694913717693, 8);
  sqcRZGate(q, 0.0009571252827393906, 8);
  sqcRYGate(q, -2.758516218775604, 9);
  sqcRZGate(q, 1.5607338662694232, 9);
  sqcRYGate(q, -0.0007215876300445956, 10);
  sqcRZGate(q, -2.0344034083010563, 10);
  sqcRYGate(q, -3.065761596336224, 11);
  sqcRZGate(q, -0.9779197196310855, 11);
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
  sqcRYGate(q, -0.9971290066048492, 0);
  sqcRZGate(q, -1.5051016190945914, 0);
  sqcRYGate(q, 1.760581542696725, 1);
  sqcRZGate(q, -0.06761859671069964, 1);
  sqcRYGate(q, -1.5709014213720014, 2);
  sqcRZGate(q, 1.5869000976205507, 2);
  sqcRYGate(q, -0.2230733354941017, 3);
  sqcRZGate(q, 1.588640523046677, 3);
  sqcRYGate(q, -0.2431433634130178, 4);
  sqcRZGate(q, -0.09104455133545031, 4);
  sqcRYGate(q, 1.566307779554842, 5);
  sqcRZGate(q, 3.1415406048526333, 5);
  sqcRYGate(q, 1.5626855991453998, 6);
  sqcRZGate(q, -3.02758670850328, 6);
  sqcRYGate(q, 1.5630768532594708, 7);
  sqcRZGate(q, -2.2645907484155883, 7);
  sqcRYGate(q, 1.5751220250604707, 8);
  sqcRZGate(q, -1.6353431158910285, 8);
  sqcRYGate(q, 1.5648707851160948, 9);
  sqcRZGate(q, -0.004562936690390344, 9);
  sqcRYGate(q, -0.0012001468870188603, 10);
  sqcRZGate(q, -2.7857085615509063, 10);
  sqcRYGate(q, -1.9026991853625006, 11);
  sqcRZGate(q, 2.733835966371472, 11);
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
  sqcRYGate(q, -0.0002898020182193762, 0);
  sqcRZGate(q, -0.6425719204221183, 0);
  sqcRYGate(q, 2.8042972948349587, 1);
  sqcRZGate(q, 1.5058265368792827, 1);
  sqcRYGate(q, 1.5676106337176323, 2);
  sqcRZGate(q, 2.0888607949508318, 2);
  sqcRYGate(q, 1.5716645153224666, 3);
  sqcRZGate(q, 3.141139508405672, 3);
  sqcRYGate(q, -1.5691314483958732, 4);
  sqcRZGate(q, 0.002450580070572863, 4);
  sqcRYGate(q, -1.5699992917867398, 5);
  sqcRZGate(q, 1.5590922372373022, 5);
  sqcRYGate(q, -3.1125151709886802, 6);
  sqcRZGate(q, 0.176517957197996, 6);
  sqcRYGate(q, 2.9590782347136706, 7);
  sqcRZGate(q, 0.6959483602190186, 7);
  sqcRYGate(q, -1.5249523339405813, 8);
  sqcRZGate(q, 3.1035581872433933, 8);
  sqcRYGate(q, 1.5713992230839722, 9);
  sqcRZGate(q, -0.23994787979711737, 9);
  sqcRYGate(q, 0.3137514469175766, 10);
  sqcRZGate(q, 0.9209486472564858, 10);
  sqcRYGate(q, 1.619230829613306, 11);
  sqcRZGate(q, 2.7276900558091013, 11);
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
  sqcRYGate(q, -2.401571854886747, 0);
  sqcRZGate(q, 0.2917570709013608, 0);
  sqcRYGate(q, 1.662983996567541, 1);
  sqcRZGate(q, 1.7086613696778838, 1);
  sqcRYGate(q, -3.1415357870958514, 2);
  sqcRZGate(q, 2.0860005449307417, 2);
  sqcRYGate(q, 0.2468177134882534, 3);
  sqcRZGate(q, 1.5709104508982092, 3);
  sqcRYGate(q, 2.89476004028481, 4);
  sqcRZGate(q, -1.804597034339664, 4);
  sqcRYGate(q, 0.033262395221751, 5);
  sqcRZGate(q, -2.9682440704768216, 5);
  sqcRYGate(q, -3.083737494882189, 6);
  sqcRZGate(q, -1.6222226105469604, 6);
  sqcRYGate(q, 0.025825397691943787, 7);
  sqcRZGate(q, -1.3957233773664983, 7);
  sqcRYGate(q, 0.026884776909209387, 8);
  sqcRZGate(q, -2.230810673121284, 8);
  sqcRYGate(q, 0.08674281047256294, 9);
  sqcRZGate(q, 1.8255935738382698, 9);
  sqcRYGate(q, 2.1864775854609473, 10);
  sqcRZGate(q, 1.6336309949252552, 10);
  sqcRYGate(q, -1.603945648671215, 11);
  sqcRZGate(q, 3.1341665242766865, 11);
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
  sqcRYGate(q, -0.0003049998541043639, 0);
  sqcRZGate(q, -0.5868954429326448, 0);
  sqcRYGate(q, 2.9948926003888974, 1);
  sqcRZGate(q, 1.4492006908636927, 1);
  sqcRYGate(q, -1.5708553831034011, 2);
  sqcRZGate(q, -1.84713661146039, 2);
  sqcRYGate(q, 1.5711849376033697, 3);
  sqcRZGate(q, -0.2555525369558109, 3);
  sqcRYGate(q, -0.0006036943950356033, 4);
  sqcRZGate(q, -1.6093614618488732, 4);
  sqcRYGate(q, -1.571151869832513, 5);
  sqcRZGate(q, -0.2565730439952887, 5);
  sqcRYGate(q, -1.5633925467962937, 6);
  sqcRZGate(q, -1.8750186191232772, 6);
  sqcRYGate(q, 1.422328704415736, 7);
  sqcRZGate(q, -0.1378695435059607, 7);
  sqcRYGate(q, 3.067296851858833, 8);
  sqcRZGate(q, 0.5960514101138166, 8);
  sqcRYGate(q, -1.5707189971152409, 9);
  sqcRZGate(q, 2.8836300410977422, 9);
  sqcRYGate(q, -1.5714884243808502, 10);
  sqcRZGate(q, 1.2764909002576807, 10);
  sqcRYGate(q, -3.1377580003487764, 11);
  sqcRZGate(q, -1.8870779313676174, 11);

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
