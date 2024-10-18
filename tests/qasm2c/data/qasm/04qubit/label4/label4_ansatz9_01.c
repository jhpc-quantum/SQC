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

  sqcRYGate(q, 1.935600648167673, 0);
  sqcRYGate(q, -1.8083300990297033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9218398790929331, 0);
  sqcRYGate(q, -0.9284301820910796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9982213530976498, 2);
  sqcRYGate(q, -0.15602696202044708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8174975359046988, 2);
  sqcRYGate(q, -1.7592013644061633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21782562013358076, 0);
  sqcRYGate(q, -0.9113265036494671, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43135763595422716, 0);
  sqcRYGate(q, 0.3960506493792577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2743629956119319, 1);
  sqcRYGate(q, -0.9842132373249847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7097220923777403, 1);
  sqcRYGate(q, -1.4083664480696818, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1295961337850429, 0);
  sqcRYGate(q, -2.6383553175283296, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2852559140827995, 0);
  sqcRYGate(q, -1.2466128326424304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.015621082130845563, 1);
  sqcRYGate(q, -1.8174236054085329, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0091932920048576, 1);
  sqcRYGate(q, 1.5413132184360496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9390540231170963, 0);
  sqcRYGate(q, -2.64410017064511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.26098671872990115, 0);
  sqcRYGate(q, 2.1904484065955114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.991249213476082, 2);
  sqcRYGate(q, 0.9289730239394436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4512857825711243, 2);
  sqcRYGate(q, -1.6289032057982906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7292085865847662, 0);
  sqcRYGate(q, 0.5244876385485275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9098299612577658, 0);
  sqcRYGate(q, 3.1333067878674608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.306519158981288, 1);
  sqcRYGate(q, 2.669268821022873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0424771518741167, 1);
  sqcRYGate(q, -1.1920059474756206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3973721036531197, 0);
  sqcRYGate(q, 3.0470170737490117, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8968547085520724, 0);
  sqcRYGate(q, 2.0325308998874156, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5739848906423992, 1);
  sqcRYGate(q, -2.884264182804235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0719612668565697, 1);
  sqcRYGate(q, -0.604453456841151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9300288344725305, 0);
  sqcRYGate(q, -0.453057971968275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3173164278921634, 0);
  sqcRYGate(q, -2.995932655185113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.198350625033189, 2);
  sqcRYGate(q, -0.36903959897102023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.70730555853405, 2);
  sqcRYGate(q, -2.116972155747307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2629312952015302, 0);
  sqcRYGate(q, -0.4143655733803238, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3503279774131713, 0);
  sqcRYGate(q, -1.4331532807395715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7893856200639013, 1);
  sqcRYGate(q, 1.4250645611022872, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.615731451003499, 1);
  sqcRYGate(q, 0.15633497759292592, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.32310894613477, 0);
  sqcRYGate(q, -1.877944873256828, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.091266294915749, 0);
  sqcRYGate(q, -1.1213976144862503, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.813352543119626, 1);
  sqcRYGate(q, -2.4881554547235636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0017901406812457, 1);
  sqcRYGate(q, 2.358997307478466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9169766813726692, 0);
  sqcRYGate(q, 0.9984259880125465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1569313342016274, 0);
  sqcRYGate(q, -2.9821641947539512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8879561975551002, 2);
  sqcRYGate(q, 2.4175485518866267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47979791238092145, 2);
  sqcRYGate(q, 1.696472961918533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5916877644853114, 0);
  sqcRYGate(q, -2.6698753175236916, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.47763136927484595, 0);
  sqcRYGate(q, -2.5222731271005476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0034196000687108, 1);
  sqcRYGate(q, -1.073170133133054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5833338115430253, 1);
  sqcRYGate(q, -2.53776802362194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6867176399070294, 0);
  sqcRYGate(q, 0.5792296252476983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5643289510114204, 0);
  sqcRYGate(q, 3.085511031242956, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6228565021628052, 1);
  sqcRYGate(q, -1.945433225671315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5076211514283466, 1);
  sqcRYGate(q, 1.412152230820451, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9130837578105144, 0);
  sqcRYGate(q, -0.49252457842206676, 1);
  sqcRYGate(q, 2.59575068233518, 2);
  sqcRYGate(q, 2.3456247848472462, 3);

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
