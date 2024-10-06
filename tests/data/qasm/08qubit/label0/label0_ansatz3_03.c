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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -3.1208845408348433, 0);
  sqcRZGate(q, -2.8067867656858776, 0);
  sqcRYGate(q, -1.6142276341969184, 1);
  sqcRZGate(q, -0.6922474107852832, 1);
  sqcRYGate(q, 1.5871433471010512, 2);
  sqcRZGate(q, 3.0618124598144902, 2);
  sqcRYGate(q, -0.1285730924647667, 3);
  sqcRZGate(q, -0.8929882990273503, 3);
  sqcRYGate(q, -1.7835793262386705, 4);
  sqcRZGate(q, 0.54506888011224, 4);
  sqcRYGate(q, 2.9231185613483426, 5);
  sqcRZGate(q, 0.32170433210967175, 5);
  sqcRYGate(q, -1.5749995463827309, 6);
  sqcRZGate(q, 1.5707057191789593, 6);
  sqcRYGate(q, -3.140689787687572, 7);
  sqcRZGate(q, -1.1711467629696082, 7);
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
  sqcRYGate(q, 1.5698067514861758, 0);
  sqcRZGate(q, -1.5651278547534577, 0);
  sqcRYGate(q, 3.1204288367930113, 1);
  sqcRZGate(q, -2.292217904239481, 1);
  sqcRYGate(q, -1.3430291642977226, 2);
  sqcRZGate(q, 1.6193145450042872, 2);
  sqcRYGate(q, -2.8720891859154984, 3);
  sqcRZGate(q, -0.37017352848241764, 3);
  sqcRYGate(q, -0.01202776427758323, 4);
  sqcRZGate(q, 3.1237814309564795, 4);
  sqcRYGate(q, 0.058421194791544014, 5);
  sqcRZGate(q, 1.5495723239204686, 5);
  sqcRYGate(q, 0.6982338221220948, 6);
  sqcRZGate(q, -1.5559680096410977, 6);
  sqcRYGate(q, -0.2361536277159456, 7);
  sqcRZGate(q, 0.9281031016409207, 7);
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
  sqcRYGate(q, 1.7491951539711739, 0);
  sqcRZGate(q, 1.5721149306068172, 0);
  sqcRYGate(q, 0.015193582265194584, 1);
  sqcRZGate(q, 0.032601888668164505, 1);
  sqcRYGate(q, -3.13199291782868, 2);
  sqcRZGate(q, -0.2933228251066719, 2);
  sqcRYGate(q, -1.646123523668467, 3);
  sqcRZGate(q, 1.111584865822084, 3);
  sqcRYGate(q, -1.5661988050709088, 4);
  sqcRZGate(q, 0.014123448426260187, 4);
  sqcRYGate(q, -1.3970702140874804, 5);
  sqcRZGate(q, 0.5508993804329537, 5);
  sqcRYGate(q, -1.5722752624104177, 6);
  sqcRZGate(q, 2.940069569860062, 6);
  sqcRYGate(q, -0.835717772142558, 7);
  sqcRZGate(q, -0.6138839573694284, 7);
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
  sqcRYGate(q, 1.5736170640572804, 0);
  sqcRZGate(q, -0.1778209592074897, 0);
  sqcRYGate(q, -1.3236060233141678, 1);
  sqcRZGate(q, -3.059550790778385, 1);
  sqcRYGate(q, 1.5450335227918726, 2);
  sqcRZGate(q, -1.6067193231428494, 2);
  sqcRYGate(q, 3.1343896025496245, 3);
  sqcRZGate(q, -0.4136987658924681, 3);
  sqcRYGate(q, 0.22965322452946335, 4);
  sqcRZGate(q, 3.096345103162871, 4);
  sqcRYGate(q, -0.0004840776069649495, 5);
  sqcRZGate(q, -0.9039141089046661, 5);
  sqcRYGate(q, -0.019870559124409937, 6);
  sqcRZGate(q, -2.0450614638110083, 6);
  sqcRYGate(q, -0.047953042286310144, 7);
  sqcRZGate(q, -3.0605191946937973, 7);
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
  sqcRYGate(q, -0.017877675056861442, 0);
  sqcRZGate(q, -1.5504802594448914, 0);
  sqcRYGate(q, 0.054738645637249075, 1);
  sqcRZGate(q, -3.012322083875209, 1);
  sqcRYGate(q, 2.800519296895287, 2);
  sqcRZGate(q, -1.6082820436899137, 2);
  sqcRYGate(q, -1.3554094516525135, 3);
  sqcRZGate(q, -1.1201789149042272, 3);
  sqcRYGate(q, 2.905759654399407, 4);
  sqcRZGate(q, 0.4284527070829469, 4);
  sqcRYGate(q, -3.0463605083482843, 5);
  sqcRZGate(q, 1.2072611435794574, 5);
  sqcRYGate(q, -2.49096486858054, 6);
  sqcRZGate(q, -1.4392588091754677, 6);
  sqcRYGate(q, -2.3710805350527395, 7);
  sqcRZGate(q, -2.146977817927495, 7);
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
  sqcRYGate(q, 2.9113335612592404, 0);
  sqcRZGate(q, -1.525567413280888, 0);
  sqcRYGate(q, -1.5829859827338568, 1);
  sqcRZGate(q, 1.388275649729032, 1);
  sqcRYGate(q, -1.6631264459216017, 2);
  sqcRZGate(q, -1.4988686679006618, 2);
  sqcRYGate(q, -0.008475839470868277, 3);
  sqcRZGate(q, 0.9084757821813759, 3);
  sqcRYGate(q, -0.003253451206486166, 4);
  sqcRZGate(q, 1.3670715540705412, 4);
  sqcRYGate(q, 3.1415606819940636, 5);
  sqcRZGate(q, 0.14634501413569634, 5);
  sqcRYGate(q, -3.138351321187026, 6);
  sqcRZGate(q, -2.918471299714674, 6);
  sqcRYGate(q, -2.7097346565637572, 7);
  sqcRZGate(q, -1.9526424671088292, 7);
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
  sqcRYGate(q, 1.5833387552456246, 0);
  sqcRZGate(q, 3.1384623059970433, 0);
  sqcRYGate(q, 1.6239816590354703, 1);
  sqcRZGate(q, -1.595806879068685, 1);
  sqcRYGate(q, 1.6094370758056442, 2);
  sqcRZGate(q, -3.1342998320989515, 2);
  sqcRYGate(q, -1.512805453257541, 3);
  sqcRZGate(q, -1.5828743670051164, 3);
  sqcRYGate(q, -2.9668693688350345, 4);
  sqcRZGate(q, -1.3351938821360418, 4);
  sqcRYGate(q, 3.021109051048447, 5);
  sqcRZGate(q, -1.2854323054350543, 5);
  sqcRYGate(q, 1.6489535357922886, 6);
  sqcRZGate(q, -0.5873960231413328, 6);
  sqcRYGate(q, -3.1059512074095803, 7);
  sqcRZGate(q, 2.9595361354563483, 7);

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
