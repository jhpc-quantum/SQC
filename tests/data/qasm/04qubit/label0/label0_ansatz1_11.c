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

  sqcRYGate(q, 2.1604176697292545, 0);
  sqcRZGate(q, 0.271723056980072, 0);
  sqcRYGate(q, -2.782750915735294, 1);
  sqcRZGate(q, -0.2844815135794147, 1);
  sqcRYGate(q, 2.317831726931185, 2);
  sqcRZGate(q, 1.3672034882356048, 2);
  sqcRYGate(q, 1.3161625535339636, 3);
  sqcRZGate(q, 2.1900206119534458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3695090768316298, 0);
  sqcRZGate(q, 0.7156363109039896, 0);
  sqcRYGate(q, -1.578694593293615, 1);
  sqcRZGate(q, -1.5720702111372897, 1);
  sqcRYGate(q, -3.0283754824150035, 2);
  sqcRZGate(q, 2.372018858040381, 2);
  sqcRYGate(q, 0.9757557411011933, 3);
  sqcRZGate(q, 2.675574828265947, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6599689644441211, 0);
  sqcRZGate(q, -1.7385240333494476, 0);
  sqcRYGate(q, 2.3244384985374844, 1);
  sqcRZGate(q, 2.8560421135380154, 1);
  sqcRYGate(q, 2.8752919882905976, 2);
  sqcRZGate(q, -2.9860398381965805, 2);
  sqcRYGate(q, -0.5406768812682431, 3);
  sqcRZGate(q, -3.0453330354192696, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.622815448541321, 0);
  sqcRZGate(q, -3.063837450601897, 0);
  sqcRYGate(q, -1.9556877675063413, 1);
  sqcRZGate(q, 1.1940131128929947, 1);
  sqcRYGate(q, -1.0912351511269396, 2);
  sqcRZGate(q, -0.7210066328404103, 2);
  sqcRYGate(q, -2.500760232336651, 3);
  sqcRZGate(q, -0.04359616993930136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8861781925134324, 0);
  sqcRZGate(q, 2.6876976428597783, 0);
  sqcRYGate(q, -0.7731533721406665, 1);
  sqcRZGate(q, -2.01677336555551, 1);
  sqcRYGate(q, 0.05891211802292862, 2);
  sqcRZGate(q, -1.1616973709551563, 2);
  sqcRYGate(q, 1.6005052864954452, 3);
  sqcRZGate(q, 0.9002940270063862, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.274287068557473, 0);
  sqcRZGate(q, -0.9998154252098144, 0);
  sqcRYGate(q, -2.352204126974365, 1);
  sqcRZGate(q, 2.8477632063433895, 1);
  sqcRYGate(q, -2.187634964007397, 2);
  sqcRZGate(q, -2.4896103063329216, 2);
  sqcRYGate(q, 1.3515057776071098, 3);
  sqcRZGate(q, -2.7992102706654585, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3699765814279856, 0);
  sqcRZGate(q, 0.5359949568202169, 0);
  sqcRYGate(q, 0.7169679625375283, 1);
  sqcRZGate(q, -0.849934928735632, 1);
  sqcRYGate(q, -2.6554664212262598, 2);
  sqcRZGate(q, 0.3266125536191765, 2);
  sqcRYGate(q, 0.4169564854061729, 3);
  sqcRZGate(q, 0.4151102439107115, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2046674415160894, 0);
  sqcRZGate(q, 1.4348070874306968, 0);
  sqcRYGate(q, 1.9059445431463773, 1);
  sqcRZGate(q, -1.1049265929264012, 1);
  sqcRYGate(q, -2.421082072411629, 2);
  sqcRZGate(q, 0.038316995020974076, 2);
  sqcRYGate(q, -0.6259882450048386, 3);
  sqcRZGate(q, -0.32291844118545754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2511521013113723, 0);
  sqcRZGate(q, -1.5003216324209616, 0);
  sqcRYGate(q, 2.400986368050259, 1);
  sqcRZGate(q, -3.068588804151893, 1);
  sqcRYGate(q, -0.40516957874924486, 2);
  sqcRZGate(q, -2.12280290690979, 2);
  sqcRYGate(q, 2.0292749446117675, 3);
  sqcRZGate(q, 2.203579426524627, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.967822598575999, 0);
  sqcRZGate(q, 0.3810563492242938, 0);
  sqcRYGate(q, 1.650285153005579, 1);
  sqcRZGate(q, -0.07653566019282643, 1);
  sqcRYGate(q, -2.4482832379169923, 2);
  sqcRZGate(q, 2.0972186798464696, 2);
  sqcRYGate(q, 2.417298075753321, 3);
  sqcRZGate(q, -0.489438734702529, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.28592078014460137, 0);
  sqcRZGate(q, 1.781619710648573, 0);
  sqcRYGate(q, -1.4573264957551215, 1);
  sqcRZGate(q, -3.031951860593364, 1);
  sqcRYGate(q, -0.021903194668678516, 2);
  sqcRZGate(q, 2.039832156287527, 2);
  sqcRYGate(q, 2.39308461612742, 3);
  sqcRZGate(q, 0.6720371159969237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6236575603865324, 0);
  sqcRZGate(q, 2.834157173660853, 0);
  sqcRYGate(q, -2.6782178067499647, 1);
  sqcRZGate(q, 0.510917501033969, 1);
  sqcRYGate(q, 1.0198371538819575, 2);
  sqcRZGate(q, -1.5248829051339126, 2);
  sqcRYGate(q, 0.24951597085850438, 3);
  sqcRZGate(q, 1.47976227345706, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0415894710129168, 0);
  sqcRZGate(q, -0.47684029899921754, 0);
  sqcRYGate(q, -2.2253041314552147, 1);
  sqcRZGate(q, -3.0476104783615665, 1);
  sqcRYGate(q, -1.2762243590998643, 2);
  sqcRZGate(q, 2.5063593199365486, 2);
  sqcRYGate(q, -3.081176648139256, 3);
  sqcRZGate(q, 1.7163589447301044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4870267232386127, 0);
  sqcRZGate(q, 2.58202171879374, 0);
  sqcRYGate(q, -2.745454811899132, 1);
  sqcRZGate(q, -0.0033380516231265034, 1);
  sqcRYGate(q, 2.9671194373282197, 2);
  sqcRZGate(q, -0.535588902100822, 2);
  sqcRYGate(q, -0.9404839702329428, 3);
  sqcRZGate(q, 0.16350133287893628, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0649584118696023, 0);
  sqcRZGate(q, -0.6147377047123896, 0);
  sqcRYGate(q, -2.422981114815253, 1);
  sqcRZGate(q, 1.8819208538433667, 1);
  sqcRYGate(q, -0.8825393263114805, 2);
  sqcRZGate(q, -0.7558786326153051, 2);
  sqcRYGate(q, 0.3511109427667849, 3);
  sqcRZGate(q, -2.369338106055352, 3);

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
