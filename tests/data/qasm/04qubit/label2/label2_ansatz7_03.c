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

  sqcRYGate(q, -2.386770346110836, 0);
  sqcRYGate(q, 2.736903259843595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.576751330241607, 0);
  sqcRYGate(q, -2.5428815130801126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.82508975231229, 0);
  sqcRYGate(q, -1.591297385769309, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3754346616223068, 0);
  sqcRYGate(q, 0.6275497108166244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4382496415576806, 0);
  sqcRYGate(q, 0.06363556277685412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0880644048929693, 0);
  sqcRYGate(q, -1.5885997412795962, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8191423272926337, 1);
  sqcRYGate(q, 1.5863516912026505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0280344304769597, 1);
  sqcRYGate(q, -2.663803019812185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.417282364940057, 1);
  sqcRYGate(q, 2.378219874923066, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1038083099837337, 1);
  sqcRYGate(q, -1.7910265561258045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7576721039993926, 2);
  sqcRYGate(q, 1.5349456025583448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0799440970035055, 2);
  sqcRYGate(q, 1.6921038700143933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7349904854652776, 0);
  sqcRYGate(q, 0.7872791248909002, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3655446458607403, 0);
  sqcRYGate(q, -1.5846966001416138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8445291840258378, 0);
  sqcRYGate(q, -0.4087416976408057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2164188017569602, 0);
  sqcRYGate(q, 0.6169750263079283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6462605490715871, 0);
  sqcRYGate(q, -1.4616441861879335, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1279354638186377, 0);
  sqcRYGate(q, -0.6106799119355267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.19041206106402786, 1);
  sqcRYGate(q, 3.11689830940927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.410799134451152, 1);
  sqcRYGate(q, -1.5244034457843956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06275104175209224, 1);
  sqcRYGate(q, 1.2949543653970488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.492512612021096, 1);
  sqcRYGate(q, -1.4520050586644366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9282619428527769, 2);
  sqcRYGate(q, 0.06365061182208898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1754791028439664, 2);
  sqcRYGate(q, 1.6324090661457067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5192783556783098, 0);
  sqcRYGate(q, -2.6229626288447556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6063718872623503, 0);
  sqcRYGate(q, 1.6987913339114682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.133597876036099, 0);
  sqcRYGate(q, 0.15310901794124998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6808933292525476, 0);
  sqcRYGate(q, 1.4984793638836482, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2215099873985, 0);
  sqcRYGate(q, -2.269913007162189, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.006326014862155, 0);
  sqcRYGate(q, -2.0988814026840528, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0706420046727634, 1);
  sqcRYGate(q, 0.22735534732451515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9594479584649298, 1);
  sqcRYGate(q, -2.5668928423267157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9240465050947106, 1);
  sqcRYGate(q, 0.12735728045681327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.650024026935812, 1);
  sqcRYGate(q, 0.6737876190684879, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7021788137282989, 2);
  sqcRYGate(q, -1.4892569472584416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5047061018031402, 2);
  sqcRYGate(q, -0.36198012577918864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3270359546723913, 0);
  sqcRYGate(q, 0.042115104663879924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49052660507482226, 0);
  sqcRYGate(q, 1.939829390703266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22610112988627495, 0);
  sqcRYGate(q, -2.409570905632873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6588762115826756, 0);
  sqcRYGate(q, -1.7919159528493511, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9474000908033208, 0);
  sqcRYGate(q, 0.7739371715437566, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4839747964445547, 0);
  sqcRYGate(q, 2.413509538717059, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2105548713786374, 1);
  sqcRYGate(q, 1.5273384996937656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6872969192291456, 1);
  sqcRYGate(q, 2.248660320170475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8016900086788437, 1);
  sqcRYGate(q, -2.138578697878637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8389569790799083, 1);
  sqcRYGate(q, -1.5065878462356102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.846175744642906, 2);
  sqcRYGate(q, 1.3225567405305991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0520611253552428, 2);
  sqcRYGate(q, 0.15753592998185312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.014689173025167257, 0);
  sqcRYGate(q, 1.047987881045118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.94101064652647, 0);
  sqcRYGate(q, 0.8532318030131254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.069786221722291, 0);
  sqcRYGate(q, -0.32124292722065206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9963815746693732, 0);
  sqcRYGate(q, -1.116364554635524, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2924218107760463, 0);
  sqcRYGate(q, -2.4638194015753125, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3595340679304533, 0);
  sqcRYGate(q, -2.538007221792374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.174340086344297, 1);
  sqcRYGate(q, -1.433310109939631, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8497733511231238, 1);
  sqcRYGate(q, -1.196919724351214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7203409241804524, 1);
  sqcRYGate(q, -2.023991363361706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2556876946991755, 1);
  sqcRYGate(q, -0.5006488424561493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0335915879864075, 2);
  sqcRYGate(q, 1.3000772548028763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4958157531375003, 2);
  sqcRYGate(q, -1.5704199251184345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32921097710835684, 0);
  sqcRYGate(q, -2.683387071591952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8033008303868274, 0);
  sqcRYGate(q, 2.6855087403237574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0267052212270347, 0);
  sqcRYGate(q, -0.744216871996544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8587417845430034, 0);
  sqcRYGate(q, -1.3297541518554308, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.936417409496276, 0);
  sqcRYGate(q, 1.6512262452983226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8626131182810194, 0);
  sqcRYGate(q, 1.9386170187213176, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3817488350251, 1);
  sqcRYGate(q, -0.9439592743478449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4530403730162065, 1);
  sqcRYGate(q, 1.247910562827547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.452872280999169, 1);
  sqcRYGate(q, -0.6962453396051798, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5170828220681762, 1);
  sqcRYGate(q, -0.5786321990295002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.56343178272183, 2);
  sqcRYGate(q, -0.5900334353368234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.120016285922219, 2);
  sqcRYGate(q, -2.3432336337373396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4804586702149183, 0);
  sqcRYGate(q, 1.8489074253525073, 1);
  sqcRYGate(q, -1.4702003930418899, 2);
  sqcRYGate(q, -1.1760364234131933, 3);

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
