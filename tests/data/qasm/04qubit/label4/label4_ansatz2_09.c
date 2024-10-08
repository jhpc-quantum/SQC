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

  sqcRYGate(q, -2.6537862194986297, 0);
  sqcRZGate(q, 1.7115066877945393, 0);
  sqcRYGate(q, -2.173247396234477, 1);
  sqcRZGate(q, -2.1780078846099755, 1);
  sqcRYGate(q, 0.42307450551620635, 2);
  sqcRZGate(q, 0.2547881214751291, 2);
  sqcRYGate(q, -0.8907512138036296, 3);
  sqcRZGate(q, 2.4467984357825205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.14141779281223776, 0);
  sqcRZGate(q, 0.1342019351735999, 0);
  sqcRYGate(q, 1.3639761452763886, 1);
  sqcRZGate(q, -0.42903146897201694, 1);
  sqcRYGate(q, -2.996913401152707, 2);
  sqcRZGate(q, 0.2248288492529964, 2);
  sqcRYGate(q, 1.4005717400969742, 3);
  sqcRZGate(q, -0.8392761492273006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1005890895543686, 0);
  sqcRZGate(q, 0.8229717058743784, 0);
  sqcRYGate(q, 1.0945829793431274, 1);
  sqcRZGate(q, -0.31671960080236844, 1);
  sqcRYGate(q, -0.5328094188956358, 2);
  sqcRZGate(q, 2.800203879570202, 2);
  sqcRYGate(q, -2.0043075735898492, 3);
  sqcRZGate(q, 1.5151218794250907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.5935799243478166, 0);
  sqcRZGate(q, -1.018169856517427, 0);
  sqcRYGate(q, -0.3914175696246197, 1);
  sqcRZGate(q, 1.2912619986627023, 1);
  sqcRYGate(q, -2.9827295191888847, 2);
  sqcRZGate(q, -2.9338381339198607, 2);
  sqcRYGate(q, 0.8707111564136047, 3);
  sqcRZGate(q, -2.861064751022149, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.355359915388382, 0);
  sqcRZGate(q, 2.941464816008059, 0);
  sqcRYGate(q, 0.9551758603577384, 1);
  sqcRZGate(q, 0.7256162157995611, 1);
  sqcRYGate(q, 0.1683693792090688, 2);
  sqcRZGate(q, -0.8160214081447793, 2);
  sqcRYGate(q, -1.138061085384734, 3);
  sqcRZGate(q, 1.6814271879221492, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7703277295410933, 0);
  sqcRZGate(q, -3.0621751734556444, 0);
  sqcRYGate(q, 3.137719175630545, 1);
  sqcRZGate(q, 1.255012348280156, 1);
  sqcRYGate(q, -2.7719509714680903, 2);
  sqcRZGate(q, 1.8108658751868647, 2);
  sqcRYGate(q, 1.2771464671548731, 3);
  sqcRZGate(q, -0.0346008231328233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.676756682691539, 0);
  sqcRZGate(q, -3.047573778180133, 0);
  sqcRYGate(q, 1.5777518088452647, 1);
  sqcRZGate(q, 2.38558109733899, 1);
  sqcRYGate(q, -2.095034607865993, 2);
  sqcRZGate(q, -0.2786112465733914, 2);
  sqcRYGate(q, 1.3648243575519432, 3);
  sqcRZGate(q, 1.6642559335348786, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8628170922630214, 0);
  sqcRZGate(q, -0.6801466217495733, 0);
  sqcRYGate(q, -0.009207896346902984, 1);
  sqcRZGate(q, 1.4355075619906223, 1);
  sqcRYGate(q, 0.035607711110129614, 2);
  sqcRZGate(q, 1.7670950550731437, 2);
  sqcRYGate(q, -1.1226797902784194, 3);
  sqcRZGate(q, -1.5613526668928703, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0900164990936356, 0);
  sqcRZGate(q, -2.195268584906456, 0);
  sqcRYGate(q, -1.2324345039525193, 1);
  sqcRZGate(q, -0.5005278023665085, 1);
  sqcRYGate(q, 1.5372402434008612, 2);
  sqcRZGate(q, 1.638779962684084, 2);
  sqcRYGate(q, 1.7144878762080085, 3);
  sqcRZGate(q, 3.1074760986610084, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9689153269887543, 0);
  sqcRZGate(q, -2.937401979916815, 0);
  sqcRYGate(q, -0.022349948899255966, 1);
  sqcRZGate(q, 1.873555961611001, 1);
  sqcRYGate(q, 2.1495147356240003, 2);
  sqcRZGate(q, -2.349151000562812, 2);
  sqcRYGate(q, 0.5508357666191284, 3);
  sqcRZGate(q, -2.2506396316751145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.20380683008736414, 0);
  sqcRZGate(q, 0.9420687557929172, 0);
  sqcRYGate(q, 2.8225040300517543, 1);
  sqcRZGate(q, 2.6882238980502473, 1);
  sqcRYGate(q, -2.782110549496664, 2);
  sqcRZGate(q, -1.045455280069949, 2);
  sqcRYGate(q, -0.3099628065680586, 3);
  sqcRZGate(q, -1.566846690907898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0280341638998536, 0);
  sqcRZGate(q, 1.2808049660925018, 0);
  sqcRYGate(q, 2.971435431514532, 1);
  sqcRZGate(q, 2.950552304833408, 1);
  sqcRYGate(q, -0.08351371468790336, 2);
  sqcRZGate(q, -0.3167059527339928, 2);
  sqcRYGate(q, -2.1365734777931626, 3);
  sqcRZGate(q, 3.110815037117981, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2119292424250485, 0);
  sqcRZGate(q, 0.3763674433852237, 0);
  sqcRYGate(q, -1.281130372860873, 1);
  sqcRZGate(q, 2.9202991199581976, 1);
  sqcRYGate(q, 2.0671507589113585, 2);
  sqcRZGate(q, 2.2864857995984758, 2);
  sqcRYGate(q, -1.7959058376757393, 3);
  sqcRZGate(q, -3.077881162224785, 3);

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
