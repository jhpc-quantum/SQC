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

  sqcRYGate(q, 0.049135705446834634, 0);
  sqcRZGate(q, -1.3190656766516966, 0);
  sqcRYGate(q, 0.5868951224185693, 1);
  sqcRZGate(q, -0.38581159812980004, 1);
  sqcRYGate(q, -2.7697994827364996, 2);
  sqcRZGate(q, 0.020750390826377703, 2);
  sqcRYGate(q, 2.4572580915201687, 3);
  sqcRZGate(q, -1.584356649230024, 3);
  sqcRYGate(q, 1.6392952117508255, 4);
  sqcRZGate(q, -1.5278209513925978, 4);
  sqcRYGate(q, 1.4319870990569097, 5);
  sqcRZGate(q, -0.30802251915229295, 5);
  sqcRYGate(q, 3.077886475914285, 6);
  sqcRZGate(q, -1.4608042176144902, 6);
  sqcRYGate(q, -1.530212363424407, 7);
  sqcRZGate(q, -0.7408396940094154, 7);
  sqcRYGate(q, 1.359796058612002, 8);
  sqcRZGate(q, 1.5373956185384423, 8);
  sqcRYGate(q, 2.9297739193321117, 9);
  sqcRZGate(q, -0.9615077956850406, 9);
  sqcRYGate(q, -0.7590593736475152, 10);
  sqcRZGate(q, -0.9986748146652714, 10);
  sqcRYGate(q, 2.3222339761018884, 11);
  sqcRZGate(q, -0.025139034550522684, 11);
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
  sqcRYGate(q, -0.02668750728677338, 0);
  sqcRZGate(q, 2.1770654756554677, 0);
  sqcRYGate(q, -2.32523889260095, 1);
  sqcRZGate(q, 0.6483759119632627, 1);
  sqcRYGate(q, -1.4375029775612118, 2);
  sqcRZGate(q, -1.547310835992415, 2);
  sqcRYGate(q, -1.589484717972047, 3);
  sqcRZGate(q, -3.086010127585432, 3);
  sqcRYGate(q, -1.2744567614704385, 4);
  sqcRZGate(q, 3.125045068908686, 4);
  sqcRYGate(q, -1.5395304158919414, 5);
  sqcRZGate(q, -1.5281664683576228, 5);
  sqcRYGate(q, -1.6790162784254807, 6);
  sqcRZGate(q, 1.4202991430974077, 6);
  sqcRYGate(q, 1.5409002483014733, 7);
  sqcRZGate(q, 1.402092992226421, 7);
  sqcRYGate(q, 0.8503704806064779, 8);
  sqcRZGate(q, -1.3748516944053248, 8);
  sqcRYGate(q, 1.6044255968152228, 9);
  sqcRZGate(q, 0.4363465699118745, 9);
  sqcRYGate(q, 1.693906985488443, 10);
  sqcRZGate(q, -0.07690239379948158, 10);
  sqcRYGate(q, 1.7532350684186186, 11);
  sqcRZGate(q, 3.1197883396788217, 11);
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
  sqcRYGate(q, -2.6733061316794555, 0);
  sqcRZGate(q, -1.5902639747545413, 0);
  sqcRYGate(q, 1.1181752108589338, 1);
  sqcRZGate(q, 3.0091933620341313, 1);
  sqcRYGate(q, -1.5959940262684305, 2);
  sqcRZGate(q, 1.5977081909616262, 2);
  sqcRYGate(q, -2.9854675226716534, 3);
  sqcRZGate(q, 2.9522118366616037, 3);
  sqcRYGate(q, -1.7038106055664755, 4);
  sqcRZGate(q, -3.1278910487443903, 4);
  sqcRYGate(q, 0.23258023485117718, 5);
  sqcRZGate(q, -3.1200852648206254, 5);
  sqcRYGate(q, -2.484399902255311, 6);
  sqcRZGate(q, -0.03543922631715102, 6);
  sqcRYGate(q, -0.7242762867864241, 7);
  sqcRZGate(q, 1.646083400083489, 7);
  sqcRYGate(q, -2.7490606756231926, 8);
  sqcRZGate(q, -1.2894596250278685, 8);
  sqcRYGate(q, 2.9866571086178877, 9);
  sqcRZGate(q, 0.8534781025937974, 9);
  sqcRYGate(q, 1.8637213698254755, 10);
  sqcRZGate(q, 0.017587921987735736, 10);
  sqcRYGate(q, -1.2898155644023623, 11);
  sqcRZGate(q, 1.9760079040108414, 11);
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
  sqcRYGate(q, 1.5637109032143348, 0);
  sqcRZGate(q, 2.102903041346477, 0);
  sqcRYGate(q, 1.576669266844097, 1);
  sqcRZGate(q, 1.5141301036458028, 1);
  sqcRYGate(q, 1.5676190478879368, 2);
  sqcRZGate(q, -1.242517841713994, 2);
  sqcRYGate(q, -0.037839169687511505, 3);
  sqcRZGate(q, 1.747578579075487, 3);
  sqcRYGate(q, 1.4346187072686787, 4);
  sqcRZGate(q, -3.1397101551966156, 4);
  sqcRYGate(q, 2.917343715959207, 5);
  sqcRZGate(q, 0.004416396233537366, 5);
  sqcRYGate(q, 1.6594725456184598, 6);
  sqcRZGate(q, -0.021071826528596203, 6);
  sqcRYGate(q, 2.8700928817542346, 7);
  sqcRZGate(q, -3.134341438647407, 7);
  sqcRYGate(q, 1.6007643056678242, 8);
  sqcRZGate(q, 1.5394822130012074, 8);
  sqcRYGate(q, -0.06558630282903, 9);
  sqcRZGate(q, -2.4648018579988307, 9);
  sqcRYGate(q, -2.1783348209162328, 10);
  sqcRZGate(q, -0.855971012277011, 10);
  sqcRYGate(q, -1.8521150929201822, 11);
  sqcRZGate(q, -3.1069219888375565, 11);
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
  sqcRYGate(q, -1.5643123738472902, 0);
  sqcRZGate(q, 1.5688528817206713, 0);
  sqcRYGate(q, 0.10268157370823007, 1);
  sqcRZGate(q, 0.05932073907486601, 1);
  sqcRYGate(q, 0.0047001109363410684, 2);
  sqcRZGate(q, 3.024300520055199, 2);
  sqcRYGate(q, -0.17270088804959371, 3);
  sqcRZGate(q, 0.029892447855858383, 3);
  sqcRYGate(q, -1.1573815084369203, 4);
  sqcRZGate(q, 1.5708229834034753, 4);
  sqcRYGate(q, -0.2750055889552616, 5);
  sqcRZGate(q, 1.592200253566208, 5);
  sqcRYGate(q, 2.4653722674057255, 6);
  sqcRZGate(q, 1.7595251757599693, 6);
  sqcRYGate(q, -2.545449328714468, 7);
  sqcRZGate(q, 1.6300354508192494, 7);
  sqcRYGate(q, 0.23393943209332457, 8);
  sqcRZGate(q, -1.4719002404428967, 8);
  sqcRYGate(q, 0.23864071590980718, 9);
  sqcRZGate(q, 1.6304525368203917, 9);
  sqcRYGate(q, -2.730489556331888, 10);
  sqcRZGate(q, 1.482811476168698, 10);
  sqcRYGate(q, -1.7368885540060666, 11);
  sqcRZGate(q, -0.018477660353726635, 11);
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
  sqcRYGate(q, 1.578090342329078, 0);
  sqcRZGate(q, -1.2948298867888777, 0);
  sqcRYGate(q, -1.5649206809589635, 1);
  sqcRZGate(q, -1.2876330190065328, 1);
  sqcRYGate(q, 3.1158393202190173, 2);
  sqcRZGate(q, -2.740549276423528, 2);
  sqcRYGate(q, 1.5701945659800935, 3);
  sqcRZGate(q, -2.780653805098943, 3);
  sqcRYGate(q, 1.5444320566093044, 4);
  sqcRZGate(q, 1.4494407984131021, 4);
  sqcRYGate(q, 1.5040484118095616, 5);
  sqcRZGate(q, 1.5427475813309792, 5);
  sqcRYGate(q, 1.604832241198845, 6);
  sqcRZGate(q, -0.0021242018521531454, 6);
  sqcRYGate(q, 1.515031744121324, 7);
  sqcRZGate(q, 1.7758755746064105, 7);
  sqcRYGate(q, 1.5939341157841334, 8);
  sqcRZGate(q, -1.6542534121208763, 8);
  sqcRYGate(q, -1.5123713962957155, 9);
  sqcRZGate(q, 3.0549405228531605, 9);
  sqcRYGate(q, 1.4785127937688674, 10);
  sqcRZGate(q, -0.06663576712519266, 10);
  sqcRYGate(q, 1.8486248726537906, 11);
  sqcRZGate(q, 1.4266099100088354, 11);

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
