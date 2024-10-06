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

  sqcRYGate(q, 1.099888256665453, 0);
  sqcRZGate(q, -0.12327020544349222, 0);
  sqcRYGate(q, 0.43777651101960124, 1);
  sqcRZGate(q, -2.387856576991294, 1);
  sqcRYGate(q, -0.536465333791476, 2);
  sqcRZGate(q, -1.9572252152284928, 2);
  sqcRYGate(q, 0.48491728323989497, 3);
  sqcRZGate(q, 0.21620335313670314, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0870672313022667, 0);
  sqcRZGate(q, 0.0920418082437464, 0);
  sqcRYGate(q, -2.666509822015138, 1);
  sqcRZGate(q, -0.2526641321213798, 1);
  sqcRYGate(q, -2.25827677221197, 2);
  sqcRZGate(q, 1.5712801819454274, 2);
  sqcRYGate(q, 2.212660441791474, 3);
  sqcRZGate(q, -0.5047470299274144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.071933055823242, 0);
  sqcRZGate(q, 1.0141847557832808, 0);
  sqcRYGate(q, 1.9685471255471234, 1);
  sqcRZGate(q, -0.004901462582033389, 1);
  sqcRYGate(q, -1.6608639451524532, 2);
  sqcRZGate(q, -0.5741505482501026, 2);
  sqcRYGate(q, 0.8831095540997058, 3);
  sqcRZGate(q, -0.9217641461494318, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0956310949634842, 0);
  sqcRZGate(q, 0.9293801978354675, 0);
  sqcRYGate(q, 1.5873905538284747, 1);
  sqcRZGate(q, 1.186725098862528, 1);
  sqcRYGate(q, -2.3296551131591396, 2);
  sqcRZGate(q, -3.0045147987496605, 2);
  sqcRYGate(q, -2.5289330585734935, 3);
  sqcRZGate(q, 2.1101012844869294, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4971816037467978, 0);
  sqcRZGate(q, 2.3474418546830496, 0);
  sqcRYGate(q, -2.7901875699977863, 1);
  sqcRZGate(q, -1.8338934410040812, 1);
  sqcRYGate(q, 0.41924608729348295, 2);
  sqcRZGate(q, -2.4013143874533607, 2);
  sqcRYGate(q, -1.4782894726256435, 3);
  sqcRZGate(q, -1.4698891233981224, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6748104527807168, 0);
  sqcRZGate(q, -2.5232785333150547, 0);
  sqcRYGate(q, -1.4013093075315144, 1);
  sqcRZGate(q, -2.1808013373020363, 1);
  sqcRYGate(q, 2.591079194769612, 2);
  sqcRZGate(q, 0.8731182367477389, 2);
  sqcRYGate(q, -0.702464697134201, 3);
  sqcRZGate(q, 1.7659115827600358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.3826122792659915, 0);
  sqcRZGate(q, 1.487520660912816, 0);
  sqcRYGate(q, -0.17752721115880163, 1);
  sqcRZGate(q, 0.2671427843107963, 1);
  sqcRYGate(q, -1.4170984670999793, 2);
  sqcRZGate(q, 1.1562278740560679, 2);
  sqcRYGate(q, 2.09266791162007, 3);
  sqcRZGate(q, -0.044137138406766446, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0097585177792374, 0);
  sqcRZGate(q, 1.6150132848263685, 0);
  sqcRYGate(q, -1.0979241646777678, 1);
  sqcRZGate(q, 2.7900629842159597, 1);
  sqcRYGate(q, -0.7665196007402377, 2);
  sqcRZGate(q, 3.10595856344984, 2);
  sqcRYGate(q, 1.5692090886703378, 3);
  sqcRZGate(q, -1.686112558905699, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.279245893938751, 0);
  sqcRZGate(q, 2.6899053090641516, 0);
  sqcRYGate(q, -0.8496689888834785, 1);
  sqcRZGate(q, -1.1535340688951834, 1);
  sqcRYGate(q, 0.4173184254531508, 2);
  sqcRZGate(q, 2.1389581691757833, 2);
  sqcRYGate(q, 2.808629033250581, 3);
  sqcRZGate(q, -1.3681678655805707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.33362611015394655, 0);
  sqcRZGate(q, 1.805426796253769, 0);
  sqcRYGate(q, 2.984974247367092, 1);
  sqcRZGate(q, 1.1107260818362439, 1);
  sqcRYGate(q, -2.131336279306166, 2);
  sqcRZGate(q, -1.0450038157672383, 2);
  sqcRYGate(q, 2.6766187201061413, 3);
  sqcRZGate(q, -1.2945860280912465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.2608439860781945, 0);
  sqcRZGate(q, -2.0745183895404393, 0);
  sqcRYGate(q, -0.43967755219014043, 1);
  sqcRZGate(q, -0.16562641546809215, 1);
  sqcRYGate(q, -1.7489364355245587, 2);
  sqcRZGate(q, -1.0411363121735022, 2);
  sqcRYGate(q, 1.1168257387668679, 3);
  sqcRZGate(q, -1.8523729033795011, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.715312667716912, 0);
  sqcRZGate(q, 0.615242430486432, 0);
  sqcRYGate(q, 2.030780362976241, 1);
  sqcRZGate(q, 1.5666655698610583, 1);
  sqcRYGate(q, 1.854135522148984, 2);
  sqcRZGate(q, -1.601702357695518, 2);
  sqcRYGate(q, 2.328632464603682, 3);
  sqcRZGate(q, 1.4334053838366776, 3);

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
