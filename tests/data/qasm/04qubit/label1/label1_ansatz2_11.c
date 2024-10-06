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

  sqcRYGate(q, 1.1516354515539828, 0);
  sqcRZGate(q, 0.7462876098966692, 0);
  sqcRYGate(q, -0.5861016024351098, 1);
  sqcRZGate(q, -1.2524993532652131, 1);
  sqcRYGate(q, -2.4372869109258493, 2);
  sqcRZGate(q, 1.556271316080993, 2);
  sqcRYGate(q, 2.9123669954135574, 3);
  sqcRZGate(q, -1.820093509070209, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2900240743601146, 0);
  sqcRZGate(q, -1.3526243159929008, 0);
  sqcRYGate(q, -0.26716048922779156, 1);
  sqcRZGate(q, 1.504640539254801, 1);
  sqcRYGate(q, -0.12002014127086635, 2);
  sqcRZGate(q, -0.6044003532536913, 2);
  sqcRYGate(q, -2.4011133032027567, 3);
  sqcRZGate(q, 2.7554502579899633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.418033823813832, 0);
  sqcRZGate(q, -1.572137609199002, 0);
  sqcRYGate(q, 1.4947561509637792, 1);
  sqcRZGate(q, 2.7444394166845445, 1);
  sqcRYGate(q, 1.2578771406067135, 2);
  sqcRZGate(q, -3.072469531251467, 2);
  sqcRYGate(q, 1.1726070360027152, 3);
  sqcRZGate(q, 2.4990837197922544, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3723938885461127, 0);
  sqcRZGate(q, 2.646961150749547, 0);
  sqcRYGate(q, 1.4991703351051817, 1);
  sqcRZGate(q, -1.4727725930669902, 1);
  sqcRYGate(q, 1.6908635728841643, 2);
  sqcRZGate(q, 2.233814308314794, 2);
  sqcRYGate(q, 1.9810639279836177, 3);
  sqcRZGate(q, 0.45136027257267397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.04054661060073883, 0);
  sqcRZGate(q, 2.704330186740933, 0);
  sqcRYGate(q, -0.9975810573180093, 1);
  sqcRZGate(q, -3.1282334473591615, 1);
  sqcRYGate(q, -2.3747329147551413, 2);
  sqcRZGate(q, 0.005891736698741213, 2);
  sqcRYGate(q, -1.4842249428631566, 3);
  sqcRZGate(q, -0.9658378642855779, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.168445162974001, 0);
  sqcRZGate(q, 0.3319692547915457, 0);
  sqcRYGate(q, 0.9457097602950502, 1);
  sqcRZGate(q, -1.4578590960600641, 1);
  sqcRYGate(q, 0.6212276773746455, 2);
  sqcRZGate(q, 1.3952562176758325, 2);
  sqcRYGate(q, -2.1750510314144957, 3);
  sqcRZGate(q, 0.5271082053163483, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2054467397648008, 0);
  sqcRZGate(q, 2.6992295214099733, 0);
  sqcRYGate(q, -1.1662843117404318, 1);
  sqcRZGate(q, -1.7958981268141503, 1);
  sqcRYGate(q, 2.204832323718221, 2);
  sqcRZGate(q, 2.497723263185853, 2);
  sqcRYGate(q, -2.6342631751312444, 3);
  sqcRZGate(q, 1.5761639213852323, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6274881236779916, 0);
  sqcRZGate(q, 1.0326668362171056, 0);
  sqcRYGate(q, 1.311001666865355, 1);
  sqcRZGate(q, -0.9614949855896437, 1);
  sqcRYGate(q, 1.0053783636929496, 2);
  sqcRZGate(q, -2.065020346912208, 2);
  sqcRYGate(q, -1.318411357375532, 3);
  sqcRZGate(q, 0.5957940480040165, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.618933307387151, 0);
  sqcRZGate(q, 2.3752511367457383, 0);
  sqcRYGate(q, 0.6741546732054777, 1);
  sqcRZGate(q, 1.1328046409959005, 1);
  sqcRYGate(q, -0.35724133627471305, 2);
  sqcRZGate(q, 2.820804389314078, 2);
  sqcRYGate(q, -1.24085635372563, 3);
  sqcRZGate(q, -2.893039899927854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1473832350081956, 0);
  sqcRZGate(q, -0.6250661536235995, 0);
  sqcRYGate(q, 1.2040416744791091, 1);
  sqcRZGate(q, 0.27247413009581667, 1);
  sqcRYGate(q, -2.2894315889624766, 2);
  sqcRZGate(q, 3.068973404099699, 2);
  sqcRYGate(q, -0.564578029092045, 3);
  sqcRZGate(q, -0.9709998421517758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4210527953649055, 0);
  sqcRZGate(q, -0.28787251760087146, 0);
  sqcRYGate(q, 2.5534655997133315, 1);
  sqcRZGate(q, -2.0187911605548416, 1);
  sqcRYGate(q, 2.7206682210493134, 2);
  sqcRZGate(q, -1.0532152983790617, 2);
  sqcRYGate(q, -0.29804909981326977, 3);
  sqcRZGate(q, -2.1180642389287287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6169643882747406, 0);
  sqcRZGate(q, -0.1900187387101353, 0);
  sqcRYGate(q, -0.4776446283346906, 1);
  sqcRZGate(q, 1.0002193607621823, 1);
  sqcRYGate(q, 2.425029453640833, 2);
  sqcRZGate(q, -2.1829587633499212, 2);
  sqcRYGate(q, 1.5886577538370723, 3);
  sqcRZGate(q, -0.6417425393131166, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.66925767552495, 0);
  sqcRZGate(q, -1.701129784551793, 0);
  sqcRYGate(q, 2.386038957018243, 1);
  sqcRZGate(q, -0.0025358171369056492, 1);
  sqcRYGate(q, -3.0824750651013875, 2);
  sqcRZGate(q, 0.501333572574156, 2);
  sqcRYGate(q, 1.7303210761737968, 3);
  sqcRZGate(q, 0.10200101952809383, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1184607922479692, 0);
  sqcRZGate(q, 2.5691399378936994, 0);
  sqcRYGate(q, 1.60222243180961, 1);
  sqcRZGate(q, -1.3769004148458084, 1);
  sqcRYGate(q, 0.8618682639199743, 2);
  sqcRZGate(q, 2.570971930299296, 2);
  sqcRYGate(q, 1.1780117279366076, 3);
  sqcRZGate(q, -2.2352071684440293, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6570007342491433, 0);
  sqcRZGate(q, 0.9056757885579058, 0);
  sqcRYGate(q, 2.728071957929688, 1);
  sqcRZGate(q, -0.5964428420796253, 1);
  sqcRYGate(q, 0.6262519557323029, 2);
  sqcRZGate(q, -2.927709346631665, 2);
  sqcRYGate(q, 0.4230488007006873, 3);
  sqcRZGate(q, 1.9307694683980845, 3);

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
