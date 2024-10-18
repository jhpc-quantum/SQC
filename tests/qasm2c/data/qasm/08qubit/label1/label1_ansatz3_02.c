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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.7432461541628177, 0);
  sqcRZGate(q, 3.056209574922526, 0);
  sqcRYGate(q, 0.001513619052577843, 1);
  sqcRZGate(q, 0.9275462656183945, 1);
  sqcRYGate(q, 3.1415923865836746, 2);
  sqcRZGate(q, 0.8445893280038409, 2);
  sqcRYGate(q, 1.4226059618892912, 3);
  sqcRZGate(q, 3.138971832005755, 3);
  sqcRYGate(q, 3.1415816435904236, 4);
  sqcRZGate(q, -2.729621283162105, 4);
  sqcRYGate(q, 1.5582800549897762, 5);
  sqcRZGate(q, 1.5750710680636788, 5);
  sqcRYGate(q, 1.5705991428536423, 6);
  sqcRZGate(q, 2.2366157757786143, 6);
  sqcRYGate(q, -1.5708295774334688, 7);
  sqcRZGate(q, -0.974057591576879, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.724023260463471, 0);
  sqcRZGate(q, 2.596772158273369, 0);
  sqcRYGate(q, -1.569915116835026, 1);
  sqcRZGate(q, -0.21294573201863234, 1);
  sqcRYGate(q, -5.578583538239059e-07, 2);
  sqcRZGate(q, 3.057859690340686, 2);
  sqcRYGate(q, -2.1362597590529515, 3);
  sqcRZGate(q, 1.5729780791742376, 3);
  sqcRYGate(q, 1.5707938078452983, 4);
  sqcRZGate(q, 1.570796608516379, 4);
  sqcRYGate(q, 0.6364778095867882, 5);
  sqcRZGate(q, 1.5710019669801352, 5);
  sqcRYGate(q, -2.851075520752816, 6);
  sqcRZGate(q, -0.24550939498486726, 6);
  sqcRYGate(q, -0.8960624295208738, 7);
  sqcRZGate(q, -2.142760134439353, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.6469876053201835, 0);
  sqcRZGate(q, -1.570981118360956, 0);
  sqcRYGate(q, -0.00019414110195370426, 1);
  sqcRZGate(q, -1.7281948103207587, 1);
  sqcRYGate(q, -0.1366982167822064, 2);
  sqcRZGate(q, -1.5707978376548377, 2);
  sqcRYGate(q, 3.0608483681733754, 3);
  sqcRZGate(q, 0.007180134000832039, 3);
  sqcRYGate(q, -1.1904500974527208, 4);
  sqcRZGate(q, 3.1415859998598212, 4);
  sqcRYGate(q, 1.5707999096451402, 5);
  sqcRZGate(q, 8.69456892048267e-06, 5);
  sqcRYGate(q, -1.5707923004460946, 6);
  sqcRZGate(q, 0.3511880147997455, 6);
  sqcRYGate(q, -1.5714866237937626, 7);
  sqcRZGate(q, -1.5701791188290115, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.1634163103571078, 0);
  sqcRZGate(q, 1.5712059877105808, 0);
  sqcRYGate(q, 1.5715454940966906, 1);
  sqcRZGate(q, -0.712546867726302, 1);
  sqcRYGate(q, -1.5707986036646286, 2);
  sqcRZGate(q, -1.5707939852033177, 2);
  sqcRYGate(q, 1.5707931724195512, 3);
  sqcRZGate(q, 1.570795208808485, 3);
  sqcRYGate(q, -1.3992097404347708, 4);
  sqcRZGate(q, -1.5708038401786089, 4);
  sqcRYGate(q, 0.783054170472668, 5);
  sqcRZGate(q, 1.5707890908941222, 5);
  sqcRYGate(q, 3.141357102165858, 6);
  sqcRZGate(q, -1.21960958253287, 6);
  sqcRYGate(q, -0.5045458422202305, 7);
  sqcRZGate(q, 3.137506259425794, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5707935074798227, 0);
  sqcRZGate(q, 1.5707969883974249, 0);
  sqcRYGate(q, 1.6577890688587883e-07, 1);
  sqcRZGate(q, 3.121039825293781, 1);
  sqcRYGate(q, -0.041133545094011126, 2);
  sqcRZGate(q, -2.646252372784375e-08, 2);
  sqcRYGate(q, 3.064872160913974, 3);
  sqcRZGate(q, 2.869531560756246e-06, 3);
  sqcRYGate(q, 0.042497131621681554, 4);
  sqcRZGate(q, 1.5708001751570393, 4);
  sqcRYGate(q, 1.5707944519669006, 5);
  sqcRZGate(q, 0.1640293868756579, 5);
  sqcRYGate(q, -0.21122046192579588, 6);
  sqcRZGate(q, 3.141583354406802, 6);
  sqcRYGate(q, -0.4182050698658468, 7);
  sqcRZGate(q, -3.0618064621562735, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5707959206897106, 0);
  sqcRZGate(q, 2.6193370586756286, 0);
  sqcRYGate(q, 2.1859482579600356e-07, 1);
  sqcRZGate(q, -1.360005826468476, 1);
  sqcRYGate(q, -1.57079771430495, 2);
  sqcRZGate(q, -2.091775490874274, 2);
  sqcRYGate(q, -1.5708002619185035, 3);
  sqcRZGate(q, -2.0918510318648087, 3);
  sqcRYGate(q, 1.5708001336675936, 4);
  sqcRZGate(q, -0.5207179859633158, 4);
  sqcRYGate(q, 2.1080913579400084e-06, 5);
  sqcRZGate(q, -2.2544453938167166, 5);
  sqcRYGate(q, 1.5707001103722946, 6);
  sqcRZGate(q, -0.5198996791380619, 6);
  sqcRYGate(q, 3.649104034844776e-05, 7);
  sqcRZGate(q, 2.544583180709535, 7);

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
