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

  sqcRYGate(q, -2.1738961953569342, 0);
  sqcRZGate(q, 2.1826310181880944, 0);
  sqcRYGate(q, -2.1307177490558704, 1);
  sqcRZGate(q, -1.393198104293183, 1);
  sqcRYGate(q, -0.9392878383510384, 2);
  sqcRZGate(q, 1.3505738804940934, 2);
  sqcRYGate(q, -1.1094117660544427, 3);
  sqcRZGate(q, 1.9435059821616656, 3);
  sqcRYGate(q, -1.9724951158224235, 4);
  sqcRZGate(q, -2.4764772712793803, 4);
  sqcRYGate(q, 0.445865554907934, 5);
  sqcRZGate(q, -1.9231938548318261, 5);
  sqcRYGate(q, -0.9714510291913169, 6);
  sqcRZGate(q, 2.1520761387982414, 6);
  sqcRYGate(q, 1.3969817508211475, 7);
  sqcRZGate(q, -0.3869555306711855, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2752702612903741, 0);
  sqcRZGate(q, 0.5312025137522088, 0);
  sqcRYGate(q, 1.1637278078218434, 1);
  sqcRZGate(q, 1.484661709157935, 1);
  sqcRYGate(q, -2.742554384529679, 2);
  sqcRZGate(q, 1.2961718027411848, 2);
  sqcRYGate(q, -1.6037466839305292, 3);
  sqcRZGate(q, 2.1869734833767076, 3);
  sqcRYGate(q, -1.884062260715429, 4);
  sqcRZGate(q, -0.6606622944479003, 4);
  sqcRYGate(q, -2.8693473393038875, 5);
  sqcRZGate(q, 0.40465298909131503, 5);
  sqcRYGate(q, 0.31025467059765416, 6);
  sqcRZGate(q, 1.8731384399457847, 6);
  sqcRYGate(q, -1.3998928335365548, 7);
  sqcRZGate(q, -2.7506789019212325, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8517864207195043, 0);
  sqcRZGate(q, 1.3940992378910755, 0);
  sqcRYGate(q, -0.23174116095058878, 1);
  sqcRZGate(q, -0.5326594471136149, 1);
  sqcRYGate(q, -1.0846640173334152, 2);
  sqcRZGate(q, -0.2070641416083667, 2);
  sqcRYGate(q, -0.7859848913937508, 3);
  sqcRZGate(q, 0.1686238611238835, 3);
  sqcRYGate(q, -2.7594555977419812, 4);
  sqcRZGate(q, 2.422909759185899, 4);
  sqcRYGate(q, -1.0049108321888633, 5);
  sqcRZGate(q, -0.6181644158562462, 5);
  sqcRYGate(q, -1.8639623286259734, 6);
  sqcRZGate(q, 2.049718593758743, 6);
  sqcRYGate(q, 0.9539301554568214, 7);
  sqcRZGate(q, 0.6452902201056167, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5480250183599775, 0);
  sqcRZGate(q, -1.6382912497226192, 0);
  sqcRYGate(q, -1.7973194071087426, 1);
  sqcRZGate(q, -2.223852284940998, 1);
  sqcRYGate(q, 1.816232703159698, 2);
  sqcRZGate(q, -1.611592057713799, 2);
  sqcRYGate(q, 2.93595411525616, 3);
  sqcRZGate(q, 0.8405906313083242, 3);
  sqcRYGate(q, -0.28634183554388404, 4);
  sqcRZGate(q, 0.4939067687927336, 4);
  sqcRYGate(q, -2.3152830450897737, 5);
  sqcRZGate(q, -1.2979075360226595, 5);
  sqcRYGate(q, 1.973292738764246, 6);
  sqcRZGate(q, -1.4114450785268562, 6);
  sqcRYGate(q, -2.017534477161156, 7);
  sqcRZGate(q, 1.2860578340003768, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.414729496729207, 0);
  sqcRZGate(q, -0.5760944156963504, 0);
  sqcRYGate(q, 0.21537465044360316, 1);
  sqcRZGate(q, -1.172069726665304, 1);
  sqcRYGate(q, -1.968228149729249, 2);
  sqcRZGate(q, -0.6424396835870336, 2);
  sqcRYGate(q, -0.2372792925768037, 3);
  sqcRZGate(q, -1.1170933109086283, 3);
  sqcRYGate(q, 0.8009327079991517, 4);
  sqcRZGate(q, 2.1955904812448854, 4);
  sqcRYGate(q, -2.021342881853606, 5);
  sqcRZGate(q, -2.8632892283487497, 5);
  sqcRYGate(q, -1.66285538008193, 6);
  sqcRZGate(q, 1.572900792728499, 6);
  sqcRYGate(q, -2.1056114160757566, 7);
  sqcRZGate(q, -1.4901869787565845, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1286996046092046, 0);
  sqcRZGate(q, 2.268339897096591, 0);
  sqcRYGate(q, 1.5163944268868939, 1);
  sqcRZGate(q, -0.06375620004992132, 1);
  sqcRYGate(q, -0.3733320347195841, 2);
  sqcRZGate(q, -0.8247520061584355, 2);
  sqcRYGate(q, 2.3722780091102615, 3);
  sqcRZGate(q, -1.6599797987607776, 3);
  sqcRYGate(q, -1.7218332805804315, 4);
  sqcRZGate(q, -1.250702716734965, 4);
  sqcRYGate(q, -2.1947442514899373, 5);
  sqcRZGate(q, -1.6900457200096122, 5);
  sqcRYGate(q, -1.0656783694078507, 6);
  sqcRZGate(q, -2.1236170104060914, 6);
  sqcRYGate(q, 0.9261784807134941, 7);
  sqcRZGate(q, -1.3924477621603206, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0676221447924625, 0);
  sqcRZGate(q, 0.8146304380131218, 0);
  sqcRYGate(q, 2.694536621445131, 1);
  sqcRZGate(q, -2.5433038737573583, 1);
  sqcRYGate(q, -0.5305098344641088, 2);
  sqcRZGate(q, -0.7885301941463077, 2);
  sqcRYGate(q, -1.8360620229541975, 3);
  sqcRZGate(q, 0.599695833418668, 3);
  sqcRYGate(q, 1.24579851579733, 4);
  sqcRZGate(q, -2.400084179172889, 4);
  sqcRYGate(q, -2.714171652899042, 5);
  sqcRZGate(q, 1.7732513140349238, 5);
  sqcRYGate(q, -2.7099015239419657, 6);
  sqcRZGate(q, 0.08373313252425746, 6);
  sqcRYGate(q, -2.6641398091230286, 7);
  sqcRZGate(q, 3.045234152185241, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6261746718201007, 0);
  sqcRZGate(q, -3.1408257090760556, 0);
  sqcRYGate(q, 1.0086100499221053, 1);
  sqcRZGate(q, -2.562281426211617, 1);
  sqcRYGate(q, -2.0874290114574077, 2);
  sqcRZGate(q, 2.3291121848438445, 2);
  sqcRYGate(q, -2.425922534806327, 3);
  sqcRZGate(q, 0.8905539275920642, 3);
  sqcRYGate(q, 0.5181279186282337, 4);
  sqcRZGate(q, -1.0736548986056047, 4);
  sqcRYGate(q, -2.9060224887208492, 5);
  sqcRZGate(q, -0.9182705332080666, 5);
  sqcRYGate(q, -2.3502604516844285, 6);
  sqcRZGate(q, 0.44854256134034465, 6);
  sqcRYGate(q, -1.9546976320422678, 7);
  sqcRZGate(q, -1.1873293073134927, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0182861429701733, 0);
  sqcRZGate(q, -1.89757593254609, 0);
  sqcRYGate(q, -2.3372193646957222, 1);
  sqcRZGate(q, -2.9995326676689142, 1);
  sqcRYGate(q, 0.5077922871268286, 2);
  sqcRZGate(q, -2.0550543342677505, 2);
  sqcRYGate(q, -1.3219138442182399, 3);
  sqcRZGate(q, 2.577779456289635, 3);
  sqcRYGate(q, 1.5595281962947585, 4);
  sqcRZGate(q, -1.766647628705784, 4);
  sqcRYGate(q, -1.4742730097161045, 5);
  sqcRZGate(q, -0.9554923778029988, 5);
  sqcRYGate(q, 0.6878934134806052, 6);
  sqcRZGate(q, -2.749864026197277, 6);
  sqcRYGate(q, -0.4731023367597615, 7);
  sqcRZGate(q, 0.8300469399233656, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0845663925257085, 0);
  sqcRZGate(q, -2.0367018968704285, 0);
  sqcRYGate(q, 0.3114701270312798, 1);
  sqcRZGate(q, -2.948125286419327, 1);
  sqcRYGate(q, -2.858150855715642, 2);
  sqcRZGate(q, -0.23665165336448177, 2);
  sqcRYGate(q, -2.0252254228999442, 3);
  sqcRZGate(q, -2.04866953174386, 3);
  sqcRYGate(q, 0.08203175165859405, 4);
  sqcRZGate(q, 0.11558658064476024, 4);
  sqcRYGate(q, -0.3385278719654634, 5);
  sqcRZGate(q, 2.8579295666520386, 5);
  sqcRYGate(q, -1.6070041414504264, 6);
  sqcRZGate(q, 1.763586506918247, 6);
  sqcRYGate(q, -0.3719807417625338, 7);
  sqcRZGate(q, -0.4706997305026883, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0893711678235567, 0);
  sqcRZGate(q, -1.5384016809050451, 0);
  sqcRYGate(q, 1.8719692738959992, 1);
  sqcRZGate(q, -0.09697405313719898, 1);
  sqcRYGate(q, -1.842096602549847, 2);
  sqcRZGate(q, -3.1346465992983745, 2);
  sqcRYGate(q, 2.750362470839276, 3);
  sqcRZGate(q, -2.0149419458312074, 3);
  sqcRYGate(q, -2.3148900755731763, 4);
  sqcRZGate(q, -1.6946222348093647, 4);
  sqcRYGate(q, -2.8669193742179844, 5);
  sqcRZGate(q, -0.9869342806916396, 5);
  sqcRYGate(q, -1.9103367836139613, 6);
  sqcRZGate(q, 2.6782693116289455, 6);
  sqcRYGate(q, 1.7306670875736545, 7);
  sqcRZGate(q, 1.5682445115590458, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1289947483976213, 0);
  sqcRZGate(q, -0.6354091790565919, 0);
  sqcRYGate(q, 0.9545403754281523, 1);
  sqcRZGate(q, -1.9806937817117107, 1);
  sqcRYGate(q, 2.385134800456675, 2);
  sqcRZGate(q, 2.1539120046563225, 2);
  sqcRYGate(q, -0.4944016717604729, 3);
  sqcRZGate(q, 1.7361842550500102, 3);
  sqcRYGate(q, -1.3534872554440547, 4);
  sqcRZGate(q, 1.20737849396928, 4);
  sqcRYGate(q, -1.5968175407711978, 5);
  sqcRZGate(q, -1.9073661100269002, 5);
  sqcRYGate(q, -0.7109849933723851, 6);
  sqcRZGate(q, 2.3534055883470963, 6);
  sqcRYGate(q, -0.2891880487766656, 7);
  sqcRZGate(q, 1.22542289388813, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8161562385325913, 0);
  sqcRZGate(q, 1.1729309847551235, 0);
  sqcRYGate(q, 1.216712621595124, 1);
  sqcRZGate(q, 2.726625074224592, 1);
  sqcRYGate(q, -1.6473598945928427, 2);
  sqcRZGate(q, 0.7406490715100009, 2);
  sqcRYGate(q, -1.6553093349100123, 3);
  sqcRZGate(q, -1.889388456589133, 3);
  sqcRYGate(q, 1.1547271562020789, 4);
  sqcRZGate(q, -1.6627235461848973, 4);
  sqcRYGate(q, -0.6411589854710869, 5);
  sqcRZGate(q, 0.889254064753422, 5);
  sqcRYGate(q, 2.42024727627323, 6);
  sqcRZGate(q, 2.2280030376104074, 6);
  sqcRYGate(q, -2.7269722637378715, 7);
  sqcRZGate(q, 0.9907325473128266, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7740509272690739, 0);
  sqcRZGate(q, 0.6191949339818078, 0);
  sqcRYGate(q, -0.24752648132515825, 1);
  sqcRZGate(q, 1.2478938333169305, 1);
  sqcRYGate(q, -0.6631054561907294, 2);
  sqcRZGate(q, -1.0017323017527258, 2);
  sqcRYGate(q, -2.3487437170660384, 3);
  sqcRZGate(q, 1.0150055669722469, 3);
  sqcRYGate(q, 0.8900827748056035, 4);
  sqcRZGate(q, -1.8004690176701141, 4);
  sqcRYGate(q, 0.5483719713327319, 5);
  sqcRZGate(q, -0.7831586349316995, 5);
  sqcRYGate(q, 0.8556622334769707, 6);
  sqcRZGate(q, 0.34749835167013193, 6);
  sqcRYGate(q, 2.988217095331536, 7);
  sqcRZGate(q, -2.3748953640555737, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0724211863219208, 0);
  sqcRZGate(q, 0.030005465564064693, 0);
  sqcRYGate(q, 2.7486232240532757, 1);
  sqcRZGate(q, -1.8425172957965037, 1);
  sqcRYGate(q, 2.9839453550618042, 2);
  sqcRZGate(q, 1.8975503090333645, 2);
  sqcRYGate(q, -1.8093089370813855, 3);
  sqcRZGate(q, 1.250167562401764, 3);
  sqcRYGate(q, -2.233615754246845, 4);
  sqcRZGate(q, 0.6861804798572482, 4);
  sqcRYGate(q, -0.40616603967864773, 5);
  sqcRZGate(q, 2.9282098480131755, 5);
  sqcRYGate(q, -1.9999023932316806, 6);
  sqcRZGate(q, 3.0558204096351185, 6);
  sqcRYGate(q, 2.548344410058567, 7);
  sqcRZGate(q, 1.8333880480521534, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0430401567231753, 0);
  sqcRZGate(q, -2.164949216091153, 0);
  sqcRYGate(q, 2.4371898915781185, 1);
  sqcRZGate(q, 0.9793691524375937, 1);
  sqcRYGate(q, -1.5813141382370803, 2);
  sqcRZGate(q, -0.4961169198632038, 2);
  sqcRYGate(q, 2.0557803025316517, 3);
  sqcRZGate(q, 1.7663227562423636, 3);
  sqcRYGate(q, -2.414592122098997, 4);
  sqcRZGate(q, 0.05851534895248368, 4);
  sqcRYGate(q, 2.0715935590227224, 5);
  sqcRZGate(q, -1.9187111570499065, 5);
  sqcRYGate(q, 2.9690845846966014, 6);
  sqcRZGate(q, -2.786041108474057, 6);
  sqcRYGate(q, 2.0539350218390022, 7);
  sqcRZGate(q, -2.7765026630307688, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0693199067268753, 0);
  sqcRZGate(q, -1.4894264445571925, 0);
  sqcRYGate(q, 2.216968334173508, 1);
  sqcRZGate(q, 2.7411318708500167, 1);
  sqcRYGate(q, 2.879199294216413, 2);
  sqcRZGate(q, -0.8829144266952859, 2);
  sqcRYGate(q, -2.7436947232268367, 3);
  sqcRZGate(q, 1.7207696247147153, 3);
  sqcRYGate(q, 2.686759290248336, 4);
  sqcRZGate(q, 1.2596238711729624, 4);
  sqcRYGate(q, 0.9429257353340706, 5);
  sqcRZGate(q, 1.005586669641706, 5);
  sqcRYGate(q, 1.9535906379976478, 6);
  sqcRZGate(q, 1.1866725253497585, 6);
  sqcRYGate(q, 1.8877151382058288, 7);
  sqcRZGate(q, -2.089101738226243, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7890406873697446, 0);
  sqcRZGate(q, 2.9292997994278394, 0);
  sqcRYGate(q, -0.2883578138345426, 1);
  sqcRZGate(q, 2.5286702281126283, 1);
  sqcRYGate(q, 2.6219239785866675, 2);
  sqcRZGate(q, -2.052229656150626, 2);
  sqcRYGate(q, -1.1286861310071639, 3);
  sqcRZGate(q, -1.4396477005748451, 3);
  sqcRYGate(q, -1.4691611421378186, 4);
  sqcRZGate(q, 0.6907906645015174, 4);
  sqcRYGate(q, -1.9904360061657211, 5);
  sqcRZGate(q, 2.589792402848542, 5);
  sqcRYGate(q, -2.4134508372572014, 6);
  sqcRZGate(q, -2.7794770125880066, 6);
  sqcRYGate(q, 0.2977270144372346, 7);
  sqcRZGate(q, -0.3923667456968155, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6966381611938044, 0);
  sqcRZGate(q, 0.2993755380718648, 0);
  sqcRYGate(q, 2.0849084162892138, 1);
  sqcRZGate(q, 2.4644760513259367, 1);
  sqcRYGate(q, -2.6171720912455356, 2);
  sqcRZGate(q, -0.1585851613731455, 2);
  sqcRYGate(q, 2.474034887729976, 3);
  sqcRZGate(q, 2.832352261583648, 3);
  sqcRYGate(q, -2.38787115771111, 4);
  sqcRZGate(q, 0.41179767999816125, 4);
  sqcRYGate(q, 2.6064841524666855, 5);
  sqcRZGate(q, 1.4135450524029904, 5);
  sqcRYGate(q, -0.2293424313588271, 6);
  sqcRZGate(q, -1.618502431656125, 6);
  sqcRYGate(q, 1.0679006016738573, 7);
  sqcRZGate(q, -2.409255855541174, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6341063928744326, 0);
  sqcRZGate(q, 0.9919796728235509, 0);
  sqcRYGate(q, -0.3415915557825959, 1);
  sqcRZGate(q, -1.6281697780409408, 1);
  sqcRYGate(q, 1.086550685419656, 2);
  sqcRZGate(q, 1.1611991253742595, 2);
  sqcRYGate(q, 1.8634448860531139, 3);
  sqcRZGate(q, -2.607204577868508, 3);
  sqcRYGate(q, -1.062126921144943, 4);
  sqcRZGate(q, 2.250337058068809, 4);
  sqcRYGate(q, -2.475270627414689, 5);
  sqcRZGate(q, -2.3686002543885825, 5);
  sqcRYGate(q, 1.1492503245963483, 6);
  sqcRZGate(q, 0.2620806511622895, 6);
  sqcRYGate(q, 2.113767759557979, 7);
  sqcRZGate(q, -2.9290974186949534, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8371501652400894, 0);
  sqcRZGate(q, -0.3133696022553698, 0);
  sqcRYGate(q, 1.6889539039641601, 1);
  sqcRZGate(q, -3.015964825001634, 1);
  sqcRYGate(q, -2.8169415550062546, 2);
  sqcRZGate(q, -1.7394979339121752, 2);
  sqcRYGate(q, 2.8521347035403566, 3);
  sqcRZGate(q, 0.10761700139693647, 3);
  sqcRYGate(q, -1.367131386982817, 4);
  sqcRZGate(q, -1.8777996113685564, 4);
  sqcRYGate(q, -0.8982607341131945, 5);
  sqcRZGate(q, -1.5482497285048575, 5);
  sqcRYGate(q, -0.23480531512710903, 6);
  sqcRZGate(q, 0.6086966663704128, 6);
  sqcRYGate(q, -1.0162115148986333, 7);
  sqcRZGate(q, 2.2032592831821156, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8485492313384215, 0);
  sqcRZGate(q, 0.5409694502714021, 0);
  sqcRYGate(q, -1.5959166274359586, 1);
  sqcRZGate(q, 3.0844771793222594, 1);
  sqcRYGate(q, 2.3158461742758503, 2);
  sqcRZGate(q, 2.1523797096731703, 2);
  sqcRYGate(q, -2.6394329804355756, 3);
  sqcRZGate(q, 1.8352787590805055, 3);
  sqcRYGate(q, -2.9072903246700217, 4);
  sqcRZGate(q, -1.761904405558418, 4);
  sqcRYGate(q, 1.9828717432805165, 5);
  sqcRZGate(q, -0.40137429031453564, 5);
  sqcRYGate(q, 2.650518831494805, 6);
  sqcRZGate(q, -1.5701017830672335, 6);
  sqcRYGate(q, 0.7584359431357672, 7);
  sqcRZGate(q, -1.1439300609899825, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6187100994647169, 0);
  sqcRZGate(q, -2.2407748944920614, 0);
  sqcRYGate(q, 0.17111044705732048, 1);
  sqcRZGate(q, -2.487341363620336, 1);
  sqcRYGate(q, 1.2261446373190426, 2);
  sqcRZGate(q, 1.7163088077415283, 2);
  sqcRYGate(q, -2.965011939241912e-06, 3);
  sqcRZGate(q, 1.6700172415308825, 3);
  sqcRYGate(q, -2.0238707872880277, 4);
  sqcRZGate(q, 1.0452532827817862, 4);
  sqcRYGate(q, 2.133628722110027, 5);
  sqcRZGate(q, -1.4468577284258846, 5);
  sqcRYGate(q, 2.3179334792249864, 6);
  sqcRZGate(q, -2.5642677694916323, 6);
  sqcRYGate(q, -1.081833121985027, 7);
  sqcRZGate(q, -0.16977096699660651, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.10342621193249357, 0);
  sqcRZGate(q, -0.36974281590007646, 0);
  sqcRYGate(q, 1.3139614342580304, 1);
  sqcRZGate(q, 3.0135707219498347, 1);
  sqcRYGate(q, 1.0196135814965936, 2);
  sqcRZGate(q, -1.8047988585763937, 2);
  sqcRYGate(q, 2.3363986671901524, 3);
  sqcRZGate(q, -1.7493046224303954, 3);
  sqcRYGate(q, 3.045134494515812, 4);
  sqcRZGate(q, 1.9169806635610565, 4);
  sqcRYGate(q, -1.5605548602314556, 5);
  sqcRZGate(q, -2.54577894045391, 5);
  sqcRYGate(q, -0.914104061511447, 6);
  sqcRZGate(q, 2.691470120929506, 6);
  sqcRYGate(q, 2.5456640758880416, 7);
  sqcRZGate(q, -2.760351587476771, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4582699899439442, 0);
  sqcRZGate(q, 1.6141284633367212, 0);
  sqcRYGate(q, 0.6732274173026248, 1);
  sqcRZGate(q, 3.0014421484556464, 1);
  sqcRYGate(q, -2.042015483699652, 2);
  sqcRZGate(q, 0.9434006154284161, 2);
  sqcRYGate(q, -1.5529950272061748, 3);
  sqcRZGate(q, -2.7813989707184015, 3);
  sqcRYGate(q, 1.351755749039146, 4);
  sqcRZGate(q, -1.940333908795596, 4);
  sqcRYGate(q, 0.06312306369697769, 5);
  sqcRZGate(q, -2.659413303848303, 5);
  sqcRYGate(q, 2.1138395150798894, 6);
  sqcRZGate(q, -1.8958767708498232, 6);
  sqcRYGate(q, -2.260735082723282, 7);
  sqcRZGate(q, -1.506785495083446, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8307153217220904, 0);
  sqcRZGate(q, -2.828890555144454, 0);
  sqcRYGate(q, 2.2404592789947273, 1);
  sqcRZGate(q, 2.936691355587426, 1);
  sqcRYGate(q, -0.2788422824047574, 2);
  sqcRZGate(q, 2.386586381893146, 2);
  sqcRYGate(q, -2.7866832346197885, 3);
  sqcRZGate(q, 0.5112420114920662, 3);
  sqcRYGate(q, -1.3434797671136236, 4);
  sqcRZGate(q, -0.5846298609064057, 4);
  sqcRYGate(q, -1.1321430082113677, 5);
  sqcRZGate(q, -1.9988301766576804, 5);
  sqcRYGate(q, 2.2506055755067997, 6);
  sqcRZGate(q, -3.0353077030236024, 6);
  sqcRYGate(q, -0.6950997606456011, 7);
  sqcRZGate(q, 0.5304299561700603, 7);

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
