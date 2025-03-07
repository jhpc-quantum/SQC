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

  sqcRYGate(q, 1.3116630512307086, 0);
  sqcRZGate(q, -0.8141926488096619, 0);
  sqcRYGate(q, 2.499391274517168, 1);
  sqcRZGate(q, -1.8105742294258567, 1);
  sqcRYGate(q, 2.6596703383041733, 2);
  sqcRZGate(q, 1.2933352186772122, 2);
  sqcRYGate(q, 2.2404235717147856, 3);
  sqcRZGate(q, -1.9733995371988702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.502663821735052, 0);
  sqcRZGate(q, 2.4330353505630864, 0);
  sqcRYGate(q, -1.3863360052698244, 1);
  sqcRZGate(q, -0.2022344024182065, 1);
  sqcRYGate(q, 0.40531692865793056, 2);
  sqcRZGate(q, -2.7329247813390265, 2);
  sqcRYGate(q, -0.16308666162592989, 3);
  sqcRZGate(q, 2.9327182899371484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9397190692304022, 0);
  sqcRZGate(q, -0.9155127520412207, 0);
  sqcRYGate(q, 1.2125961217996268, 1);
  sqcRZGate(q, 1.26137745587892, 1);
  sqcRYGate(q, -1.239837521721161, 2);
  sqcRZGate(q, 0.34770934689008465, 2);
  sqcRYGate(q, -2.3327002758765287, 3);
  sqcRZGate(q, 1.1690069329362043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.353641719315962, 0);
  sqcRZGate(q, -1.7299786385672178, 0);
  sqcRYGate(q, -3.1124077873334626, 1);
  sqcRZGate(q, -2.016703313208925, 1);
  sqcRYGate(q, -1.437381419954157, 2);
  sqcRZGate(q, -0.3063134970421521, 2);
  sqcRYGate(q, -2.987741179952757, 3);
  sqcRZGate(q, 3.0712101084679966, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5951798359678927, 0);
  sqcRZGate(q, 2.602136307595961, 0);
  sqcRYGate(q, 2.069347742688538, 1);
  sqcRZGate(q, 0.8635956854317288, 1);
  sqcRYGate(q, -1.5755705961290014, 2);
  sqcRZGate(q, 2.09396685189288, 2);
  sqcRYGate(q, -1.9513343046149578, 3);
  sqcRZGate(q, -3.0892530242813985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.491883137656109, 0);
  sqcRZGate(q, -0.0719033107716953, 0);
  sqcRYGate(q, 2.553600412646039, 1);
  sqcRZGate(q, -0.17963470637818407, 1);
  sqcRYGate(q, -0.2524093391993741, 2);
  sqcRZGate(q, 0.0589437547177365, 2);
  sqcRYGate(q, 0.9837022936778297, 3);
  sqcRZGate(q, -1.1059724203553758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1259195872898347, 0);
  sqcRZGate(q, 2.5472276469667667, 0);
  sqcRYGate(q, 2.113435209077047, 1);
  sqcRZGate(q, -1.754567396449609, 1);
  sqcRYGate(q, 0.32624337309810425, 2);
  sqcRZGate(q, 1.1380216843484057, 2);
  sqcRYGate(q, -2.0831288102266017, 3);
  sqcRZGate(q, -2.8690055028352974, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7542522279314691, 0);
  sqcRZGate(q, -0.766666832248559, 0);
  sqcRYGate(q, -0.20028772268858663, 1);
  sqcRZGate(q, -2.223950059004762, 1);
  sqcRYGate(q, 2.766935339293341, 2);
  sqcRZGate(q, 0.28461024465018464, 2);
  sqcRYGate(q, 0.013757373715692337, 3);
  sqcRZGate(q, -1.886690267401554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.993813779657868, 0);
  sqcRZGate(q, -1.0166837376586653, 0);
  sqcRYGate(q, 2.2625724515344317, 1);
  sqcRZGate(q, 1.2383086706136828, 1);
  sqcRYGate(q, -0.9540167581786182, 2);
  sqcRZGate(q, 0.08019880380669164, 2);
  sqcRYGate(q, 1.7986828555974494, 3);
  sqcRZGate(q, -1.420225998439509, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5031313946922333, 0);
  sqcRZGate(q, -1.536273113235459, 0);
  sqcRYGate(q, 0.4819614360473361, 1);
  sqcRZGate(q, 2.0054296840581216, 1);
  sqcRYGate(q, 2.6721982845099435, 2);
  sqcRZGate(q, 0.8810678084122011, 2);
  sqcRYGate(q, -2.8379269182496665, 3);
  sqcRZGate(q, 2.2331433402597085, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6805462939212648, 0);
  sqcRZGate(q, -2.40065859000967, 0);
  sqcRYGate(q, 2.6115031725724656, 1);
  sqcRZGate(q, 2.0072422730625696, 1);
  sqcRYGate(q, -0.40894769541959075, 2);
  sqcRZGate(q, 2.48821878714352, 2);
  sqcRYGate(q, 2.852534530303849, 3);
  sqcRZGate(q, -0.04708713499898328, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6217624616550737, 0);
  sqcRZGate(q, -1.8669910356223955, 0);
  sqcRYGate(q, 0.788557759056394, 1);
  sqcRZGate(q, -1.9144751666278477, 1);
  sqcRYGate(q, -0.03951958737814998, 2);
  sqcRZGate(q, -1.163869785640892, 2);
  sqcRYGate(q, -0.9134047857638588, 3);
  sqcRZGate(q, -1.452656547734781, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6265332700838442, 0);
  sqcRZGate(q, -1.6112517810503606, 0);
  sqcRYGate(q, 0.3743844456533261, 1);
  sqcRZGate(q, -0.952027050057553, 1);
  sqcRYGate(q, -1.3082985106890732, 2);
  sqcRZGate(q, 3.1216434104790287, 2);
  sqcRYGate(q, 2.2846306374068237, 3);
  sqcRZGate(q, 1.5476561363452026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5483282455185243, 0);
  sqcRZGate(q, -0.3366263794577318, 0);
  sqcRYGate(q, -2.1378956758919863, 1);
  sqcRZGate(q, 1.4752149613344625, 1);
  sqcRYGate(q, -1.3581356613169815, 2);
  sqcRZGate(q, -2.1676005674532615, 2);
  sqcRYGate(q, -0.6603989345830935, 3);
  sqcRZGate(q, 0.17965703686570667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1054998968359353, 0);
  sqcRZGate(q, 2.305313741785248, 0);
  sqcRYGate(q, -2.022688446487674, 1);
  sqcRZGate(q, -1.6847865497627268, 1);
  sqcRYGate(q, -0.10951549845694976, 2);
  sqcRZGate(q, 2.653933596964404, 2);
  sqcRYGate(q, -0.698852702641739, 3);
  sqcRZGate(q, -1.931370735190913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4975448851181206, 0);
  sqcRZGate(q, 0.6033943554061132, 0);
  sqcRYGate(q, 1.164253573051741, 1);
  sqcRZGate(q, 2.218333943248604, 1);
  sqcRYGate(q, 2.6353683125407716, 2);
  sqcRZGate(q, -0.9457701154702896, 2);
  sqcRYGate(q, -2.7239437129262374, 3);
  sqcRZGate(q, 0.41398355841736045, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.19667587214826168, 0);
  sqcRZGate(q, -2.9571459833897777, 0);
  sqcRYGate(q, -1.9172735100608973, 1);
  sqcRZGate(q, -0.6204494237088882, 1);
  sqcRYGate(q, -0.2686290246646381, 2);
  sqcRZGate(q, 3.118867154607428, 2);
  sqcRYGate(q, 1.8271391806610495, 3);
  sqcRZGate(q, -0.7508287202663477, 3);

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
