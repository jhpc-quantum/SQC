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

  sqcRYGate(q, 1.2639108222336504, 0);
  sqcRZGate(q, -0.49888511232364335, 0);
  sqcRYGate(q, -0.7872719950459771, 1);
  sqcRZGate(q, 2.30169846978036, 1);
  sqcRYGate(q, -1.5014825645697698, 2);
  sqcRZGate(q, -2.5014387291987434, 2);
  sqcRYGate(q, -1.892735130014765, 3);
  sqcRZGate(q, 1.3056460012329603, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8229393144076251, 0);
  sqcRZGate(q, 0.6779425798626614, 0);
  sqcRYGate(q, -0.8954702251272879, 1);
  sqcRZGate(q, 3.070094770254078, 1);
  sqcRYGate(q, -0.24587140596936582, 2);
  sqcRZGate(q, -1.7475127726861999, 2);
  sqcRYGate(q, 2.5985773902431717, 3);
  sqcRZGate(q, 3.113196385547165, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6321945611669814, 0);
  sqcRZGate(q, -1.94005353955699, 0);
  sqcRYGate(q, 2.3598842499796304, 1);
  sqcRZGate(q, 0.3269849996852797, 1);
  sqcRYGate(q, -1.9950719988349324, 2);
  sqcRZGate(q, -1.3771085674117742, 2);
  sqcRYGate(q, -0.22652193985090696, 3);
  sqcRZGate(q, 2.678554456998814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0005217276249916, 0);
  sqcRZGate(q, 0.3201638441344609, 0);
  sqcRYGate(q, 1.809545338044689, 1);
  sqcRZGate(q, 2.494633150705473, 1);
  sqcRYGate(q, 0.9211473274914832, 2);
  sqcRZGate(q, -0.549758809579437, 2);
  sqcRYGate(q, 2.398213365501972, 3);
  sqcRZGate(q, -2.9978960410722593, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0547093917308716, 0);
  sqcRZGate(q, 2.638238491940436, 0);
  sqcRYGate(q, -0.12753030253762088, 1);
  sqcRZGate(q, -0.8179468947690989, 1);
  sqcRYGate(q, -2.37089405462053, 2);
  sqcRZGate(q, -0.9286622243182476, 2);
  sqcRYGate(q, 2.1491547329353193, 3);
  sqcRZGate(q, 2.7916721565266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.17393297825785048, 0);
  sqcRZGate(q, 0.37200802229749463, 0);
  sqcRYGate(q, 1.3635766782133676, 1);
  sqcRZGate(q, 1.7982250949148313, 1);
  sqcRYGate(q, 0.05980639962504508, 2);
  sqcRZGate(q, -1.6228389853704408, 2);
  sqcRYGate(q, 1.1681158985099538, 3);
  sqcRZGate(q, -1.40977463891492, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3631986452741902, 0);
  sqcRZGate(q, -1.3688985525376207, 0);
  sqcRYGate(q, -1.4462500263234768, 1);
  sqcRZGate(q, 2.485309773778723, 1);
  sqcRYGate(q, 1.675340727639005, 2);
  sqcRZGate(q, -2.9870720328720144, 2);
  sqcRYGate(q, 0.770404355737024, 3);
  sqcRZGate(q, -0.32658494300717233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.976278884886503, 0);
  sqcRZGate(q, 2.1074965743693346, 0);
  sqcRYGate(q, 1.4828909629360278, 1);
  sqcRZGate(q, -2.5021213933108775, 1);
  sqcRYGate(q, 1.2541390777770813, 2);
  sqcRZGate(q, 0.6244685955072183, 2);
  sqcRYGate(q, -2.8569877590891006, 3);
  sqcRZGate(q, 1.6947162723383105, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1355945104968432, 0);
  sqcRZGate(q, -2.376505857510987, 0);
  sqcRYGate(q, 1.997268619973533, 1);
  sqcRZGate(q, 3.0850204259399234, 1);
  sqcRYGate(q, 2.1737600548711966, 2);
  sqcRZGate(q, -1.6333521993160598, 2);
  sqcRYGate(q, -0.7786343261879072, 3);
  sqcRZGate(q, 2.139618917896881, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8108294982365063, 0);
  sqcRZGate(q, 1.7923376589396327, 0);
  sqcRYGate(q, 1.2231595711024879, 1);
  sqcRZGate(q, 2.4800803211633315, 1);
  sqcRYGate(q, 0.9333597162352643, 2);
  sqcRZGate(q, 0.7817918349754481, 2);
  sqcRYGate(q, -2.188992343121343, 3);
  sqcRZGate(q, -1.128501518713633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8830706313336742, 0);
  sqcRZGate(q, -1.9229989282959163, 0);
  sqcRYGate(q, -0.9395892041417611, 1);
  sqcRZGate(q, 1.53924912113595, 1);
  sqcRYGate(q, 1.4119279973411398, 2);
  sqcRZGate(q, 1.6477213006209175, 2);
  sqcRYGate(q, 0.4464954521359687, 3);
  sqcRZGate(q, 2.6666975719230503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.31612885530885454, 0);
  sqcRZGate(q, 1.15333863631964, 0);
  sqcRYGate(q, -1.1958208133313832, 1);
  sqcRZGate(q, 0.06270510931668774, 1);
  sqcRYGate(q, 2.5106017412150514, 2);
  sqcRZGate(q, 1.2047313135851352, 2);
  sqcRYGate(q, -1.3491979555961038, 3);
  sqcRZGate(q, 2.3085357018512753, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6547263640008913, 0);
  sqcRZGate(q, 0.5120236032317846, 0);
  sqcRYGate(q, -1.952447204584149, 1);
  sqcRZGate(q, -0.7681807007403111, 1);
  sqcRYGate(q, -0.7302500421651121, 2);
  sqcRZGate(q, -1.7472541283714698, 2);
  sqcRYGate(q, 1.6638619735647655, 3);
  sqcRZGate(q, 1.2969942623060837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8888323127563913, 0);
  sqcRZGate(q, 1.0129798764785438, 0);
  sqcRYGate(q, 3.0485001175053115, 1);
  sqcRZGate(q, 1.0759116400144277, 1);
  sqcRYGate(q, 2.0556374612192703, 2);
  sqcRZGate(q, -1.0612372786466802, 2);
  sqcRYGate(q, 2.3427948096457225, 3);
  sqcRZGate(q, 1.1769777000249209, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4907048595146888, 0);
  sqcRZGate(q, 2.4571448310331014, 0);
  sqcRYGate(q, 0.34205665603566526, 1);
  sqcRZGate(q, -1.1305636678685391, 1);
  sqcRYGate(q, -0.15217169283050502, 2);
  sqcRZGate(q, -2.1762224423932697, 2);
  sqcRYGate(q, -0.1330567414036068, 3);
  sqcRZGate(q, -3.045170113130451, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6325771130938487, 0);
  sqcRZGate(q, -0.8096051238511365, 0);
  sqcRYGate(q, 1.501308473913684, 1);
  sqcRZGate(q, -0.2660452033861418, 1);
  sqcRYGate(q, 0.4300248434618146, 2);
  sqcRZGate(q, -1.906765472478913, 2);
  sqcRYGate(q, -1.7058135977502686, 3);
  sqcRZGate(q, -2.954300680929191, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9241401833132903, 0);
  sqcRZGate(q, -1.0227926421760616, 0);
  sqcRYGate(q, 0.68754802036516, 1);
  sqcRZGate(q, -3.0277047472435568, 1);
  sqcRYGate(q, -1.443155492382317, 2);
  sqcRZGate(q, 0.7226801612224526, 2);
  sqcRYGate(q, -0.6888911574525469, 3);
  sqcRZGate(q, 2.7653055067195083, 3);

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
