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

  sqcRYGate(q, 2.4492748062836553, 0);
  sqcRZGate(q, 0.6023050670127936, 0);
  sqcRYGate(q, 2.942007030811711, 1);
  sqcRZGate(q, 2.0743458764753253, 1);
  sqcRYGate(q, 1.168300625523564, 2);
  sqcRZGate(q, -2.973100926904002, 2);
  sqcRYGate(q, -1.8527185181878325, 3);
  sqcRZGate(q, -1.561009789272319, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.810985307751898, 0);
  sqcRZGate(q, 2.704158029267747, 0);
  sqcRYGate(q, 2.7145481655017614, 1);
  sqcRZGate(q, -1.2924363226115307, 1);
  sqcRYGate(q, -1.8105253163522914, 2);
  sqcRZGate(q, 0.48325207890983624, 2);
  sqcRYGate(q, -0.698565166701079, 3);
  sqcRZGate(q, -2.945104104637568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5156273607846455, 0);
  sqcRZGate(q, -2.5703348421482244, 0);
  sqcRYGate(q, 1.3556991231781375, 1);
  sqcRZGate(q, 0.7995371845290071, 1);
  sqcRYGate(q, -1.8690576111725006, 2);
  sqcRZGate(q, -3.1042609129495173, 2);
  sqcRYGate(q, 3.0660576393781143, 3);
  sqcRZGate(q, 1.5046172185716176, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.479215667296368, 0);
  sqcRZGate(q, 0.0056432935917565315, 0);
  sqcRYGate(q, 1.595757349980783, 1);
  sqcRZGate(q, -1.7725306106156853, 1);
  sqcRYGate(q, 0.825854623100256, 2);
  sqcRZGate(q, 0.69856343663006, 2);
  sqcRYGate(q, -0.9261837289010383, 3);
  sqcRZGate(q, -1.0535159266676657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6696462797157534, 0);
  sqcRZGate(q, 1.8172287183032105, 0);
  sqcRYGate(q, -3.0853117228638016, 1);
  sqcRZGate(q, -1.7601630034844868, 1);
  sqcRYGate(q, 1.2419368255921024, 2);
  sqcRZGate(q, -0.9586056699313997, 2);
  sqcRYGate(q, -0.2794204526087683, 3);
  sqcRZGate(q, 1.5126845319321616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.05191117953829317, 0);
  sqcRZGate(q, -0.3103291333684419, 0);
  sqcRYGate(q, -2.4841590081944602, 1);
  sqcRZGate(q, 2.6453180323455574, 1);
  sqcRYGate(q, -2.5067102353126596, 2);
  sqcRZGate(q, -1.7251892922366983, 2);
  sqcRYGate(q, 0.9596617943309089, 3);
  sqcRZGate(q, 2.2895488018952377, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0229947464292426, 0);
  sqcRZGate(q, 3.06271108099132, 0);
  sqcRYGate(q, 0.6517440236319074, 1);
  sqcRZGate(q, 2.7594234740274595, 1);
  sqcRYGate(q, 1.7043393464519383, 2);
  sqcRZGate(q, 2.6451432286150083, 2);
  sqcRYGate(q, 1.0386133909567292, 3);
  sqcRZGate(q, -1.6065804216697006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2477261269621005, 0);
  sqcRZGate(q, 2.0254534436579545, 0);
  sqcRYGate(q, 2.1372473539850834, 1);
  sqcRZGate(q, 0.44110766365104226, 1);
  sqcRYGate(q, 0.3448915504551957, 2);
  sqcRZGate(q, 2.686275526113207, 2);
  sqcRYGate(q, -1.3313207557191724, 3);
  sqcRZGate(q, 3.1201490014228934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0644310092386697, 0);
  sqcRZGate(q, 0.4847083557274371, 0);
  sqcRYGate(q, -2.087227282169353, 1);
  sqcRZGate(q, -1.0144336811269445, 1);
  sqcRYGate(q, 1.135381334408303, 2);
  sqcRZGate(q, 0.3984323024574248, 2);
  sqcRYGate(q, 1.0452144557859646, 3);
  sqcRZGate(q, -1.7110213573331965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5529843994693566, 0);
  sqcRZGate(q, 1.9713032126638577, 0);
  sqcRYGate(q, -2.15442909799687, 1);
  sqcRZGate(q, 0.9867279114986962, 1);
  sqcRYGate(q, -1.2982698345704424, 2);
  sqcRZGate(q, -3.1147266726188154, 2);
  sqcRYGate(q, -1.2921719814575416, 3);
  sqcRZGate(q, -1.8982566376171757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1587522714809673, 0);
  sqcRZGate(q, 2.6319546477702116, 0);
  sqcRYGate(q, -2.7950597185771824, 1);
  sqcRZGate(q, 1.297957938913446, 1);
  sqcRYGate(q, -0.7680403832842901, 2);
  sqcRZGate(q, 1.1886189331395998, 2);
  sqcRYGate(q, 1.9246641186245137, 3);
  sqcRZGate(q, -1.503525303759545, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7379085795075288, 0);
  sqcRZGate(q, -2.691524159857954, 0);
  sqcRYGate(q, -1.1514109779294348, 1);
  sqcRZGate(q, 1.044625894936427, 1);
  sqcRYGate(q, -2.482405387544129, 2);
  sqcRZGate(q, 2.2347111764919125, 2);
  sqcRYGate(q, 0.12144257901049826, 3);
  sqcRZGate(q, 0.6237853638606934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.16519587469756375, 0);
  sqcRZGate(q, 2.3175653949802983, 0);
  sqcRYGate(q, -1.7750660268660636, 1);
  sqcRZGate(q, -2.6067703468002796, 1);
  sqcRYGate(q, -1.3493984400764818, 2);
  sqcRZGate(q, -0.682246485229041, 2);
  sqcRYGate(q, 1.3310531100697451, 3);
  sqcRZGate(q, 0.2512652090074239, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6334763857750443, 0);
  sqcRZGate(q, -3.0480998606936454, 0);
  sqcRYGate(q, -0.9111874891763962, 1);
  sqcRZGate(q, -0.6408140524560305, 1);
  sqcRYGate(q, -1.8234887854390178, 2);
  sqcRZGate(q, -0.08617494670307656, 2);
  sqcRYGate(q, 2.7667450499980406, 3);
  sqcRZGate(q, -1.788219795849971, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6124815650440043, 0);
  sqcRZGate(q, -1.5621106675484115, 0);
  sqcRYGate(q, 0.3299839166904584, 1);
  sqcRZGate(q, -1.8826418566412186, 1);
  sqcRYGate(q, -1.1941456213514225, 2);
  sqcRZGate(q, 0.4852244527597281, 2);
  sqcRYGate(q, -0.3847362371587284, 3);
  sqcRZGate(q, 1.3557390204323554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.542386770252366, 0);
  sqcRZGate(q, -2.2962239472212307, 0);
  sqcRYGate(q, 1.900446709239298, 1);
  sqcRZGate(q, -0.8325254484455077, 1);
  sqcRYGate(q, 2.0321576636518426, 2);
  sqcRZGate(q, -1.4247986883491355, 2);
  sqcRYGate(q, 2.707969336662544, 3);
  sqcRZGate(q, -0.13889804789234805, 3);

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
