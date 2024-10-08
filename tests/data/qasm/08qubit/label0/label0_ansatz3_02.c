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

  sqcRYGate(q, 1.5690865378532113, 0);
  sqcRZGate(q, 1.6214639382543101, 0);
  sqcRYGate(q, -1.5699382068643253, 1);
  sqcRZGate(q, 0.7565047381523051, 1);
  sqcRYGate(q, -0.2420627099613144, 2);
  sqcRZGate(q, -2.3002722659105217, 2);
  sqcRYGate(q, -0.06489261038058203, 3);
  sqcRZGate(q, -0.2774863977812194, 3);
  sqcRYGate(q, 1.5675794596010295, 4);
  sqcRZGate(q, 1.4978902552737374, 4);
  sqcRYGate(q, 1.5985845659292774, 5);
  sqcRZGate(q, -0.6298452527422365, 5);
  sqcRYGate(q, 0.3253187007802197, 6);
  sqcRZGate(q, -2.988548971780929, 6);
  sqcRYGate(q, -3.1215605319407915, 7);
  sqcRZGate(q, -1.1640825577073246, 7);
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
  sqcRYGate(q, 1.5876045254781919, 0);
  sqcRZGate(q, 1.4898230869820592, 0);
  sqcRYGate(q, -3.0692688243307122, 1);
  sqcRZGate(q, -2.3676909213366772, 1);
  sqcRYGate(q, -6.873068372729893e-05, 2);
  sqcRZGate(q, -1.1965072654313555, 2);
  sqcRYGate(q, 1.5696063326627219, 3);
  sqcRZGate(q, -2.9036014947187394, 3);
  sqcRYGate(q, -1.5631360760246447, 4);
  sqcRZGate(q, 1.8460154761321177, 4);
  sqcRYGate(q, 0.30330187897061944, 5);
  sqcRZGate(q, 0.35028940468440706, 5);
  sqcRYGate(q, 1.562361909860413, 6);
  sqcRZGate(q, 1.7336864172869433, 6);
  sqcRYGate(q, 0.007069064601763996, 7);
  sqcRZGate(q, 1.1768362761901032, 7);
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
  sqcRYGate(q, 0.8545702427855169, 0);
  sqcRZGate(q, -1.1845561883716522, 0);
  sqcRYGate(q, -2.2957395076028977, 1);
  sqcRZGate(q, -3.112681849656361, 1);
  sqcRYGate(q, 0.23447212389726543, 2);
  sqcRZGate(q, -0.03651169982765287, 2);
  sqcRYGate(q, 0.005469015930581565, 3);
  sqcRZGate(q, 2.9071087302034564, 3);
  sqcRYGate(q, -1.7739218406344337, 4);
  sqcRZGate(q, 0.14204215774776507, 4);
  sqcRYGate(q, -2.3264201409477794, 5);
  sqcRZGate(q, 2.3794370720390976, 5);
  sqcRYGate(q, -1.3391301741882131, 6);
  sqcRZGate(q, 2.875401861129947, 6);
  sqcRYGate(q, 0.00021478111154316082, 7);
  sqcRZGate(q, -1.588297893659751, 7);
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
  sqcRYGate(q, 0.007437968653884575, 0);
  sqcRZGate(q, 1.4637057494964578, 0);
  sqcRYGate(q, -2.720876041685384, 1);
  sqcRZGate(q, -3.118841668539068, 1);
  sqcRYGate(q, 3.1403762203731524, 2);
  sqcRZGate(q, -1.9034517944257408, 2);
  sqcRYGate(q, -1.5693039726263098, 3);
  sqcRZGate(q, -0.040688509770459014, 3);
  sqcRYGate(q, -1.5784276333877967, 4);
  sqcRZGate(q, 1.60494322643813, 4);
  sqcRYGate(q, 3.0821630761741674, 5);
  sqcRZGate(q, 2.570413009354401, 5);
  sqcRYGate(q, 1.5713219922138286, 6);
  sqcRZGate(q, -0.02296997301428209, 6);
  sqcRYGate(q, -0.003202943576709139, 7);
  sqcRZGate(q, -1.5785865148236624, 7);
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
  sqcRYGate(q, -2.4805519289862565, 0);
  sqcRZGate(q, -1.4182398559092366, 0);
  sqcRYGate(q, 1.5952673040912977, 1);
  sqcRZGate(q, -1.4473429776655795, 1);
  sqcRYGate(q, -0.026962421334150995, 2);
  sqcRZGate(q, -1.2772709108343068, 2);
  sqcRYGate(q, 3.130213982471407, 3);
  sqcRZGate(q, -5.877373415152931e-05, 3);
  sqcRYGate(q, -1.5589222750359573, 4);
  sqcRZGate(q, 0.16132339190713468, 4);
  sqcRYGate(q, -1.559770113755639, 5);
  sqcRZGate(q, -3.1220391694821674, 5);
  sqcRYGate(q, 1.5994161769864874, 6);
  sqcRZGate(q, 1.5696122374512744, 6);
  sqcRYGate(q, 2.915001138600188, 7);
  sqcRZGate(q, -1.5837406853015166, 7);
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
  sqcRYGate(q, -1.5783321126278465, 0);
  sqcRZGate(q, -0.004889979674904637, 0);
  sqcRYGate(q, 3.1413887343493, 1);
  sqcRZGate(q, -3.010772867721128, 1);
  sqcRYGate(q, 1.581011960110904, 2);
  sqcRZGate(q, 0.02160730026143773, 2);
  sqcRYGate(q, 1.585669225101185, 3);
  sqcRZGate(q, 0.19655417765834837, 3);
  sqcRYGate(q, 1.5658430448495013, 4);
  sqcRZGate(q, -0.02255245483954086, 4);
  sqcRYGate(q, 1.56522915885433, 5);
  sqcRZGate(q, -0.018561264204945083, 5);
  sqcRYGate(q, 1.5837464672164625, 6);
  sqcRZGate(q, 1.5477785519454959, 6);
  sqcRYGate(q, 1.5720270835031689, 7);
  sqcRZGate(q, 3.1329332394517966, 7);

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
