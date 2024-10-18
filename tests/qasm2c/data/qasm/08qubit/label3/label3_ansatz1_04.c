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

  sqcRYGate(q, -1.5831429114130544, 0);
  sqcRZGate(q, 1.4962299595176545, 0);
  sqcRYGate(q, -2.7555714332052315, 1);
  sqcRZGate(q, -2.0019251578892274, 1);
  sqcRYGate(q, -1.4796426093818145, 2);
  sqcRZGate(q, 3.141007429157429, 2);
  sqcRYGate(q, -0.2634824618973406, 3);
  sqcRZGate(q, -3.0698585525858286, 3);
  sqcRYGate(q, -1.5731898497217744, 4);
  sqcRZGate(q, 2.8841862105625626, 4);
  sqcRYGate(q, -1.5701070208527144, 5);
  sqcRZGate(q, -2.997051769884669, 5);
  sqcRYGate(q, -1.3910371961167676, 6);
  sqcRZGate(q, -0.01390615498853168, 6);
  sqcRYGate(q, 1.64993978693533, 7);
  sqcRZGate(q, 1.7557280586443131, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.36332882059022004, 0);
  sqcRZGate(q, 3.130112829772254, 0);
  sqcRYGate(q, 1.5629526304482293, 1);
  sqcRZGate(q, -1.5649053730571085, 1);
  sqcRYGate(q, -1.6867590863977027, 2);
  sqcRZGate(q, 1.4804589076476242, 2);
  sqcRYGate(q, 1.568405053149168, 3);
  sqcRZGate(q, 1.4762392721316733, 3);
  sqcRYGate(q, -1.6738995145139333, 4);
  sqcRZGate(q, 2.6586304968398307, 4);
  sqcRYGate(q, -1.6813501994365998, 5);
  sqcRZGate(q, 0.015564010571012863, 5);
  sqcRYGate(q, -1.5706652051907293, 6);
  sqcRZGate(q, 0.023357328097437846, 6);
  sqcRYGate(q, -3.1264114343086713, 7);
  sqcRZGate(q, 1.756105326509716, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.07411970096666011, 0);
  sqcRZGate(q, 0.03830555212103045, 0);
  sqcRYGate(q, 1.564820549943313, 1);
  sqcRZGate(q, 1.5659476334970523, 1);
  sqcRYGate(q, 1.571017328350421, 2);
  sqcRZGate(q, -1.6522472630222422, 2);
  sqcRYGate(q, 1.109905930744648, 3);
  sqcRZGate(q, 2.088118872994505, 3);
  sqcRYGate(q, 1.756070308590843, 4);
  sqcRZGate(q, 3.1319567790247667, 4);
  sqcRYGate(q, -1.5813552107586162, 5);
  sqcRZGate(q, 0.0249377558049968, 5);
  sqcRYGate(q, 1.4541363550828015, 6);
  sqcRZGate(q, 3.0878551723327323, 6);
  sqcRYGate(q, -1.5715751556873823, 7);
  sqcRZGate(q, -0.01520182063026265, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3318405494017425, 0);
  sqcRZGate(q, 0.1661697091623999, 0);
  sqcRYGate(q, -1.5691043465237773, 1);
  sqcRZGate(q, 1.7128049633910285, 1);
  sqcRYGate(q, -0.049596054839579296, 2);
  sqcRZGate(q, -0.8957889501774758, 2);
  sqcRYGate(q, 0.35453181070438083, 3);
  sqcRZGate(q, 0.22584843765896068, 3);
  sqcRYGate(q, -1.597783198155377, 4);
  sqcRZGate(q, -3.140635506907747, 4);
  sqcRYGate(q, 1.1070887391715925, 5);
  sqcRZGate(q, 2.434692706118857, 5);
  sqcRYGate(q, -2.42306380562625, 6);
  sqcRZGate(q, 3.1310429668160262, 6);
  sqcRYGate(q, -1.5908075373245136, 7);
  sqcRZGate(q, 1.3877081188821858, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5672966003861912, 0);
  sqcRZGate(q, -0.4620865429861292, 0);
  sqcRYGate(q, 3.0888480414173283, 1);
  sqcRZGate(q, -1.473467977795281, 1);
  sqcRYGate(q, -3.091218090923895, 2);
  sqcRZGate(q, -2.6413511572752206, 2);
  sqcRYGate(q, 1.574462156538596, 3);
  sqcRZGate(q, 0.0017876628851290141, 3);
  sqcRYGate(q, -1.834363098899118, 4);
  sqcRZGate(q, -0.07613490531753886, 4);
  sqcRYGate(q, -3.1116003736203157, 5);
  sqcRZGate(q, 0.9224831261923577, 5);
  sqcRYGate(q, 1.5649273670978923, 6);
  sqcRZGate(q, -1.238613651466923, 6);
  sqcRYGate(q, -3.141314112396972, 7);
  sqcRZGate(q, -2.226695578445004, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.851622679341703, 0);
  sqcRZGate(q, -1.1975802120605472, 0);
  sqcRYGate(q, -1.650161710987157, 1);
  sqcRZGate(q, -3.0596907949856433, 1);
  sqcRYGate(q, 1.573251097598695, 2);
  sqcRZGate(q, -1.5683394917366744, 2);
  sqcRYGate(q, -1.4855223440357304, 3);
  sqcRZGate(q, -0.3547552527332747, 3);
  sqcRYGate(q, -1.3418446517354952, 4);
  sqcRZGate(q, -0.0043502880153860266, 4);
  sqcRYGate(q, -1.0141986552800404, 5);
  sqcRZGate(q, 1.3166281731421252, 5);
  sqcRYGate(q, 1.2099522634759214, 6);
  sqcRZGate(q, 2.329186988240533, 6);
  sqcRYGate(q, -2.981968137190378, 7);
  sqcRZGate(q, -0.8782308429880241, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.141167783375493, 0);
  sqcRZGate(q, 0.3567295182758299, 0);
  sqcRYGate(q, -1.589378787900916, 1);
  sqcRZGate(q, 1.0478604462166885, 1);
  sqcRYGate(q, -1.569446480717966, 2);
  sqcRZGate(q, -0.4697933024058649, 2);
  sqcRYGate(q, -3.131709901903345, 3);
  sqcRZGate(q, 1.5646621464568664, 3);
  sqcRYGate(q, 0.19650491702632333, 4);
  sqcRZGate(q, 1.4796706696269741, 4);
  sqcRYGate(q, 3.061890032128091, 5);
  sqcRZGate(q, -3.0107426959992982, 5);
  sqcRYGate(q, 1.5710636466278203, 6);
  sqcRZGate(q, 2.8431802417005456, 6);
  sqcRYGate(q, 0.0009309448749702232, 7);
  sqcRZGate(q, 0.64794653305814, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8660956990386979, 0);
  sqcRZGate(q, 0.3522140679195802, 0);
  sqcRYGate(q, 2.5115759414961745, 1);
  sqcRZGate(q, 1.4779708652322707, 1);
  sqcRYGate(q, 1.8694880589468523, 2);
  sqcRZGate(q, -2.798016905243031, 2);
  sqcRYGate(q, 2.0399030059260426, 3);
  sqcRZGate(q, -1.0720671449130155, 3);
  sqcRYGate(q, -0.38849829359281357, 4);
  sqcRZGate(q, 0.447947020192446, 4);
  sqcRYGate(q, 2.0226119908665323, 5);
  sqcRZGate(q, -1.1251518461140169, 5);
  sqcRYGate(q, -1.750205935956281, 6);
  sqcRZGate(q, -1.250222902834934, 6);
  sqcRYGate(q, -1.3003758240833174, 7);
  sqcRZGate(q, -2.786747988158622, 7);

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
