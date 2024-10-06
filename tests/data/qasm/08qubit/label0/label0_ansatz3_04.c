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

  sqcRYGate(q, 0.7442083793094767, 0);
  sqcRZGate(q, 1.652812085809451, 0);
  sqcRYGate(q, 2.023634201363943, 1);
  sqcRZGate(q, 1.6123839321050513, 1);
  sqcRYGate(q, 2.943660422941814, 2);
  sqcRZGate(q, -1.4534019857784877, 2);
  sqcRYGate(q, -3.1246362539037205, 3);
  sqcRZGate(q, -0.08833613150990338, 3);
  sqcRYGate(q, 1.5759836427511904, 4);
  sqcRZGate(q, 2.169111846666907, 4);
  sqcRYGate(q, 0.23402696435124498, 5);
  sqcRZGate(q, 2.630181668954572, 5);
  sqcRYGate(q, 1.0926753908470266, 6);
  sqcRZGate(q, 0.23432104677464013, 6);
  sqcRYGate(q, -1.5856808972503584, 7);
  sqcRZGate(q, 1.530251651695924, 7);
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
  sqcRYGate(q, 1.5331227012210413, 0);
  sqcRZGate(q, 2.8662203299404956, 0);
  sqcRYGate(q, -1.525934488952184, 1);
  sqcRZGate(q, -2.0795651083578828, 1);
  sqcRYGate(q, -1.6288413139240498, 2);
  sqcRZGate(q, 1.5447257387291122, 2);
  sqcRYGate(q, -0.4065832597602413, 3);
  sqcRZGate(q, 0.7970859870845173, 3);
  sqcRYGate(q, -0.0034182877143216217, 4);
  sqcRZGate(q, -0.9344006475132797, 4);
  sqcRYGate(q, 2.724384177255776, 5);
  sqcRZGate(q, 1.744803641506421, 5);
  sqcRYGate(q, -1.276009202222171, 6);
  sqcRZGate(q, -0.03674908378079418, 6);
  sqcRYGate(q, 0.20937747684109637, 7);
  sqcRZGate(q, -3.0873840982082914, 7);
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
  sqcRYGate(q, 1.0901407079340557, 0);
  sqcRZGate(q, 3.098867667765409, 0);
  sqcRYGate(q, -0.7212251447394286, 1);
  sqcRZGate(q, 1.673335043845003, 1);
  sqcRYGate(q, 2.3128842008285013, 2);
  sqcRZGate(q, 3.089269727521071, 2);
  sqcRYGate(q, -3.140282874312145, 3);
  sqcRZGate(q, 2.3829568313699006, 3);
  sqcRYGate(q, 3.1370986788217565, 4);
  sqcRZGate(q, 3.0460646169352046, 4);
  sqcRYGate(q, 3.1344425484139973, 5);
  sqcRZGate(q, 1.4181133473532215, 5);
  sqcRYGate(q, 1.971548503712217, 6);
  sqcRZGate(q, 0.5158281493463246, 6);
  sqcRYGate(q, 2.3374536713629013, 7);
  sqcRZGate(q, 2.829990022764666, 7);
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
  sqcRYGate(q, 1.966117272771208, 0);
  sqcRZGate(q, -2.828284769133039, 0);
  sqcRYGate(q, 3.0558712023742935, 1);
  sqcRZGate(q, -0.456869665667532, 1);
  sqcRYGate(q, 1.541557022619246, 2);
  sqcRZGate(q, 3.141145748736281, 2);
  sqcRYGate(q, -3.1054865710749007, 3);
  sqcRZGate(q, 0.9273648172721041, 3);
  sqcRYGate(q, -3.139300311637253, 4);
  sqcRZGate(q, -2.335086271711322, 4);
  sqcRYGate(q, -0.3640939255922681, 5);
  sqcRZGate(q, 1.3208346203780408, 5);
  sqcRYGate(q, 1.3359906918896627, 6);
  sqcRZGate(q, 0.10215480675698708, 6);
  sqcRYGate(q, 1.7694920553239735, 7);
  sqcRZGate(q, 1.5461321723920411, 7);
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
  sqcRYGate(q, -1.510221283789929, 0);
  sqcRZGate(q, 2.379625765511971, 0);
  sqcRYGate(q, -3.0256171680159407, 1);
  sqcRZGate(q, 2.4737521738518637, 1);
  sqcRYGate(q, 1.9659757701757068, 2);
  sqcRZGate(q, -1.731214245965675, 2);
  sqcRYGate(q, 3.1406077299873254, 3);
  sqcRZGate(q, 2.479761139015883, 3);
  sqcRYGate(q, -0.3366383226410917, 4);
  sqcRZGate(q, -3.1157354091228804, 4);
  sqcRYGate(q, 0.004224442699172397, 5);
  sqcRZGate(q, -0.7495204429607379, 5);
  sqcRYGate(q, -3.111668440782584, 6);
  sqcRZGate(q, 2.577302020560529, 6);
  sqcRYGate(q, 1.475033399683187, 7);
  sqcRZGate(q, -2.8776511917553034, 7);
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
  sqcRYGate(q, 0.8103862341023185, 0);
  sqcRZGate(q, -2.5829902968227656, 0);
  sqcRYGate(q, 1.6348161992141463, 1);
  sqcRZGate(q, -1.5295608075124092, 1);
  sqcRYGate(q, 2.8454369071876906, 2);
  sqcRZGate(q, 2.2607873823285303, 2);
  sqcRYGate(q, 0.4114168519074484, 3);
  sqcRZGate(q, 1.750077826068442, 3);
  sqcRYGate(q, 1.6163401796694858, 4);
  sqcRZGate(q, -3.139778089975523, 4);
  sqcRYGate(q, 0.0010017702013005447, 5);
  sqcRZGate(q, 0.5476561460402225, 5);
  sqcRYGate(q, 0.003364555019218507, 6);
  sqcRZGate(q, -2.4264339600140032, 6);
  sqcRYGate(q, -2.6328585395706994, 7);
  sqcRZGate(q, 0.612282838494993, 7);
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
  sqcRYGate(q, -1.6621796319101267, 0);
  sqcRZGate(q, 2.560352670706651, 0);
  sqcRYGate(q, -0.22524147018094354, 1);
  sqcRZGate(q, -2.5934754270790554, 1);
  sqcRYGate(q, -0.006020682307284808, 2);
  sqcRZGate(q, 2.5564993769464595, 2);
  sqcRYGate(q, 3.139801492454954, 3);
  sqcRZGate(q, 0.1986222453903749, 3);
  sqcRYGate(q, -0.35919229287237897, 4);
  sqcRZGate(q, -0.017360324402253546, 4);
  sqcRYGate(q, 0.03333386640860128, 5);
  sqcRZGate(q, -1.5795368149923101, 5);
  sqcRYGate(q, 3.1311758439559303, 6);
  sqcRZGate(q, 1.0050611501698734, 6);
  sqcRYGate(q, 3.04021184287633, 7);
  sqcRZGate(q, 2.5145344657798905, 7);
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
  sqcRYGate(q, 0.0321156377395281, 0);
  sqcRZGate(q, -2.4370396462456756, 0);
  sqcRYGate(q, -0.005789311558859488, 1);
  sqcRZGate(q, 2.595130403096476, 1);
  sqcRYGate(q, 0.088648122246501, 2);
  sqcRZGate(q, 1.299496593690547, 2);
  sqcRYGate(q, 1.5591760481555, 3);
  sqcRZGate(q, 0.5715883059555232, 3);
  sqcRYGate(q, -1.6123716534325219, 4);
  sqcRZGate(q, 3.1354962401265123, 4);
  sqcRYGate(q, 1.5689770304268849, 5);
  sqcRZGate(q, -3.1140271723079396, 5);
  sqcRYGate(q, 1.56953669287314, 6);
  sqcRZGate(q, -0.008200502155778649, 6);
  sqcRYGate(q, 1.5717201801219114, 7);
  sqcRZGate(q, -2.9327095836419987, 7);

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
