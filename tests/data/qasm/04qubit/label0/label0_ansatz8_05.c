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

  sqcRYGate(q, 1.1780018883387688, 0);
  sqcRYGate(q, 0.6390405147578093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0687906924584532, 0);
  sqcRYGate(q, 0.41558781091856156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.513070801850888, 2);
  sqcRYGate(q, 0.8260376611042073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3655193618919998, 2);
  sqcRYGate(q, 1.512826920767334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8902200610621209, 0);
  sqcRYGate(q, 2.542881696470153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.103975021480984, 0);
  sqcRYGate(q, 0.6142670924497251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.883640486263304, 1);
  sqcRYGate(q, 1.5609162560706666, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.12236051305467, 1);
  sqcRYGate(q, 1.8140882410215502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.798547087317039, 0);
  sqcRYGate(q, -2.1044472357486885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9151933344168564, 0);
  sqcRYGate(q, -2.1718638697393926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.824265366248876, 2);
  sqcRYGate(q, 0.002365129275814226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2648329137017025, 2);
  sqcRYGate(q, 0.6839109072651988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.053654755261620106, 0);
  sqcRYGate(q, -1.4293083743065704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05694336724767215, 0);
  sqcRYGate(q, -2.3072374637663526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.168054100257846, 1);
  sqcRYGate(q, -1.316254038996646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.06943688307267597, 1);
  sqcRYGate(q, 1.0869816444145366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5367361405122315, 0);
  sqcRYGate(q, 2.797043528931597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0277330798488125, 0);
  sqcRYGate(q, 3.133423185304981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.25330916238412815, 2);
  sqcRYGate(q, -1.1994662366227318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.030365904404914, 2);
  sqcRYGate(q, -2.3624754017807463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.687122760246642, 0);
  sqcRYGate(q, -2.558388221123413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11325526602528946, 0);
  sqcRYGate(q, -0.2028187825975688, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9065283736615416, 1);
  sqcRYGate(q, -0.4481070893544032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1048506894950787, 1);
  sqcRYGate(q, -2.1600151936877063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.123501622323846, 0);
  sqcRYGate(q, -1.7752014846277904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.209893224344547, 0);
  sqcRYGate(q, 0.5650242400084561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3192323062906235, 2);
  sqcRYGate(q, -2.877763937853357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.978767185231545, 2);
  sqcRYGate(q, -3.0276579637488887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0256870575013695, 0);
  sqcRYGate(q, 2.3930392879385143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.575894169548177, 0);
  sqcRYGate(q, 0.5111607866314865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4503081868989736, 1);
  sqcRYGate(q, 2.186179074398079, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1206222164858173, 1);
  sqcRYGate(q, 0.9234411910964635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.385661054722988, 0);
  sqcRYGate(q, -1.2232896306458096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.084043581280907, 0);
  sqcRYGate(q, -2.619257699360632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.578985769173159, 2);
  sqcRYGate(q, -2.314906927365464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6708518374784402, 2);
  sqcRYGate(q, 2.088610421578406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.717103404626294, 0);
  sqcRYGate(q, 0.7596960726118125, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.835501500103171, 0);
  sqcRYGate(q, -1.0110903538797071, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3319725877900765, 1);
  sqcRYGate(q, -0.6616291565105739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5173695035531658, 1);
  sqcRYGate(q, 2.811934260753829, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4201707143626914, 0);
  sqcRYGate(q, -2.857664520858831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1958273863155273, 0);
  sqcRYGate(q, 0.9056649595507563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4248895454757502, 2);
  sqcRYGate(q, 0.9065680227759048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6236975278736159, 2);
  sqcRYGate(q, 1.0352983730496765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7021329316371063, 0);
  sqcRYGate(q, 0.8935265684840124, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1760805003674788, 0);
  sqcRYGate(q, -1.404099134740137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0533288687702296, 1);
  sqcRYGate(q, 0.9906217488200612, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2059716970949, 1);
  sqcRYGate(q, -1.722772017436276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.419543001174957, 0);
  sqcRYGate(q, 2.956019089486947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5320829807844819, 0);
  sqcRYGate(q, 1.8662078729815734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.061832980251197, 2);
  sqcRYGate(q, -1.6740044147453927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.605658270413211, 2);
  sqcRYGate(q, -1.8092663842559302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2714893892751382, 0);
  sqcRYGate(q, 1.287387260011533, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11889731792494543, 0);
  sqcRYGate(q, -1.9523847256690514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3580165405084905, 1);
  sqcRYGate(q, -0.3781716686411958, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6982280534051015, 1);
  sqcRYGate(q, -1.414734640463575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1168321768081897, 0);
  sqcRYGate(q, 1.0152829106829149, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7037250445022292, 0);
  sqcRYGate(q, 0.16556388893679155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9428216874057069, 2);
  sqcRYGate(q, -0.19522679952034494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.431766107587008, 2);
  sqcRYGate(q, 2.214800542365502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.54521992677064, 0);
  sqcRYGate(q, 0.3259443554875884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.07563663883593376, 0);
  sqcRYGate(q, -0.5322172652126356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28567311558297076, 1);
  sqcRYGate(q, 2.0447891870667867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9373946365375025, 1);
  sqcRYGate(q, -0.5791977346586927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8507448275481546, 0);
  sqcRYGate(q, -2.929808629964707, 1);
  sqcRYGate(q, 1.1381822931541885, 2);
  sqcRYGate(q, 0.23689222558648132, 3);

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
