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

  sqcRYGate(q, -1.4639684133545696, 0);
  sqcRZGate(q, -2.578329710311237, 0);
  sqcRYGate(q, -3.1195182398379644, 1);
  sqcRZGate(q, 0.056371772448080115, 1);
  sqcRYGate(q, 2.083798766361117, 2);
  sqcRZGate(q, -0.33672453587677703, 2);
  sqcRYGate(q, 2.6277592667252603, 3);
  sqcRZGate(q, 2.8189100583638598, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7580672164425761, 0);
  sqcRZGate(q, -0.8451799559260077, 0);
  sqcRYGate(q, -0.4861532176411475, 1);
  sqcRZGate(q, 0.3226453121015851, 1);
  sqcRYGate(q, -1.399954269966839, 2);
  sqcRZGate(q, 1.888769273383395, 2);
  sqcRYGate(q, -1.6355614290484581, 3);
  sqcRZGate(q, 2.144742279015662, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4790521804332313, 0);
  sqcRZGate(q, -2.4907689508261313, 0);
  sqcRYGate(q, -0.08754563449241655, 1);
  sqcRZGate(q, 1.0209531989544676, 1);
  sqcRYGate(q, -2.494741570805844, 2);
  sqcRZGate(q, 2.64982248517, 2);
  sqcRYGate(q, 0.8927440875848046, 3);
  sqcRZGate(q, -1.969496889976843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0156559463781942, 0);
  sqcRZGate(q, 1.8477462221858816, 0);
  sqcRYGate(q, 3.0947085864303046, 1);
  sqcRZGate(q, 0.7992406334931844, 1);
  sqcRYGate(q, -2.263168590280422, 2);
  sqcRZGate(q, -1.1459158577046766, 2);
  sqcRYGate(q, -2.189135352614864, 3);
  sqcRZGate(q, 2.8582977791060684, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.543668972061155, 0);
  sqcRZGate(q, -2.883064837802617, 0);
  sqcRYGate(q, -3.029593515116783, 1);
  sqcRZGate(q, 2.9706263811347857, 1);
  sqcRYGate(q, -0.419743872414589, 2);
  sqcRZGate(q, 2.154397297781485, 2);
  sqcRYGate(q, 3.0878059942022698, 3);
  sqcRZGate(q, -1.6646051659443717, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7989354415481547, 0);
  sqcRZGate(q, 1.4489287889735212, 0);
  sqcRYGate(q, -0.5303113374197976, 1);
  sqcRZGate(q, -0.5171907646424749, 1);
  sqcRYGate(q, 1.5139203956700813, 2);
  sqcRZGate(q, -0.5175249737068867, 2);
  sqcRYGate(q, -2.085342905972589, 3);
  sqcRZGate(q, -2.4243128171226616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5373003710897591, 0);
  sqcRZGate(q, -2.2214029143992997, 0);
  sqcRYGate(q, 1.7113287096845555, 1);
  sqcRZGate(q, 2.512047338792096, 1);
  sqcRYGate(q, 0.3606544287060771, 2);
  sqcRZGate(q, -0.41202589089355085, 2);
  sqcRYGate(q, 2.4132738705912398, 3);
  sqcRZGate(q, 3.131667792194645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3320255031682855, 0);
  sqcRZGate(q, 0.6401580148008378, 0);
  sqcRYGate(q, -1.9830472088689322, 1);
  sqcRZGate(q, 2.8490997487571743, 1);
  sqcRYGate(q, 3.0607204407436606, 2);
  sqcRZGate(q, 1.5487635989028714, 2);
  sqcRYGate(q, 1.2973708323190491, 3);
  sqcRZGate(q, -0.2271389631955083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1304172245450876, 0);
  sqcRZGate(q, 1.560579117983976, 0);
  sqcRYGate(q, -1.3116007363821158, 1);
  sqcRZGate(q, -2.748373892348404, 1);
  sqcRYGate(q, -2.362725917021374, 2);
  sqcRZGate(q, 1.6604796662432346, 2);
  sqcRYGate(q, -2.6982799048352843, 3);
  sqcRZGate(q, -1.8376762230854573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3971535748118198, 0);
  sqcRZGate(q, 0.9876782642782178, 0);
  sqcRYGate(q, -0.34751801932246895, 1);
  sqcRZGate(q, 2.1090948586919067, 1);
  sqcRYGate(q, -1.7844568902916134, 2);
  sqcRZGate(q, -2.7228632704315063, 2);
  sqcRYGate(q, 0.879307820787254, 3);
  sqcRZGate(q, -0.6502099476034325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3377448752485863, 0);
  sqcRZGate(q, 3.079179920141477, 0);
  sqcRYGate(q, 0.8614674066237153, 1);
  sqcRZGate(q, 2.8638160690479864, 1);
  sqcRYGate(q, -2.471299161844357, 2);
  sqcRZGate(q, 1.0201281722333162, 2);
  sqcRYGate(q, -0.009627214028454753, 3);
  sqcRZGate(q, -2.9096141045649673, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.011088585586015, 0);
  sqcRZGate(q, -1.879437438037045, 0);
  sqcRYGate(q, -2.8208503382920984, 1);
  sqcRZGate(q, 0.5203610637086857, 1);
  sqcRYGate(q, -3.1218315020368297, 2);
  sqcRZGate(q, -1.891997283571781, 2);
  sqcRYGate(q, 2.604331711865593, 3);
  sqcRZGate(q, -0.166669700996934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.398218671628119, 0);
  sqcRZGate(q, 3.0245754872862403, 0);
  sqcRYGate(q, -2.3521011044339426, 1);
  sqcRZGate(q, 0.6323122485224733, 1);
  sqcRYGate(q, -1.226393992352699, 2);
  sqcRZGate(q, -0.771900088251151, 2);
  sqcRYGate(q, -1.1849684241341156, 3);
  sqcRZGate(q, 2.361690978615954, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.863150722949792, 0);
  sqcRZGate(q, -0.5826944732108803, 0);
  sqcRYGate(q, -0.5254266360341011, 1);
  sqcRZGate(q, 0.8416235862799119, 1);
  sqcRYGate(q, 2.837606207197319, 2);
  sqcRZGate(q, 2.388833999384005, 2);
  sqcRYGate(q, 1.5361660719734445, 3);
  sqcRZGate(q, 0.5307387284175443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5499543493445449, 0);
  sqcRZGate(q, 1.1749790004997558, 0);
  sqcRYGate(q, 0.6078981129881988, 1);
  sqcRZGate(q, -0.05706049901249077, 1);
  sqcRYGate(q, 1.7282663862584322, 2);
  sqcRZGate(q, 2.406375638960534, 2);
  sqcRYGate(q, -2.6823057162019666, 3);
  sqcRZGate(q, -2.301829107513968, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8419870167531645, 0);
  sqcRZGate(q, -0.22318424974273565, 0);
  sqcRYGate(q, -0.0025570707940545377, 1);
  sqcRZGate(q, -2.031389551715101, 1);
  sqcRYGate(q, 1.5688852819717136, 2);
  sqcRZGate(q, 1.5024824654398212, 2);
  sqcRYGate(q, -0.5799737736279118, 3);
  sqcRZGate(q, -1.3116258613938552, 3);

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
