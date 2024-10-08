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

  sqcRYGate(q, 2.4878304149753867, 0);
  sqcRZGate(q, -1.7013131120426142, 0);
  sqcRYGate(q, 1.63099694545296, 1);
  sqcRZGate(q, 1.8733742773446613, 1);
  sqcRYGate(q, -0.7069170940483421, 2);
  sqcRZGate(q, 1.0721675781315643, 2);
  sqcRYGate(q, -2.076572000830752, 3);
  sqcRZGate(q, -1.8698485794747741, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.615962957067482, 0);
  sqcRZGate(q, 1.9579353240511181, 0);
  sqcRYGate(q, 0.4733944566418331, 1);
  sqcRZGate(q, 3.0810538571908213, 1);
  sqcRYGate(q, -2.8111641869198496, 2);
  sqcRZGate(q, -2.3627432701434183, 2);
  sqcRYGate(q, 2.8204065819783763, 3);
  sqcRZGate(q, 1.7288242905594382, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.2341199283027122, 0);
  sqcRZGate(q, 1.7484099043287948, 0);
  sqcRYGate(q, 2.5688376786267173, 1);
  sqcRZGate(q, -0.6595803494572269, 1);
  sqcRYGate(q, -1.9233297181807973, 2);
  sqcRZGate(q, -1.08478196793902, 2);
  sqcRYGate(q, -1.0857302719231683, 3);
  sqcRZGate(q, 1.5480774156010089, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1060034653505677, 0);
  sqcRZGate(q, -0.8885722962620749, 0);
  sqcRYGate(q, 0.45651755030996366, 1);
  sqcRZGate(q, -0.09881062363680793, 1);
  sqcRYGate(q, 2.478879811271622, 2);
  sqcRZGate(q, -2.7502053156051156, 2);
  sqcRYGate(q, 0.3617276127619835, 3);
  sqcRZGate(q, -0.21876393782543202, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1503729043134052, 0);
  sqcRZGate(q, -0.6475833025877022, 0);
  sqcRYGate(q, -2.655118290109896, 1);
  sqcRZGate(q, 1.5119672315245447, 1);
  sqcRYGate(q, 1.2429470599904962, 2);
  sqcRZGate(q, 0.12683717634222802, 2);
  sqcRYGate(q, -1.7514295005390146, 3);
  sqcRZGate(q, 1.4575635169918042, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8887273271563405, 0);
  sqcRZGate(q, -2.3926038339765014, 0);
  sqcRYGate(q, 2.8964072608951916, 1);
  sqcRZGate(q, 2.4753218522962834, 1);
  sqcRYGate(q, 0.37697924254553694, 2);
  sqcRZGate(q, 2.403224938785008, 2);
  sqcRYGate(q, 1.0582880296320107, 3);
  sqcRZGate(q, -1.327448697908433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.845252157002686, 0);
  sqcRZGate(q, 1.2140338849210206, 0);
  sqcRYGate(q, -0.8963739514020738, 1);
  sqcRZGate(q, 0.9871061306794635, 1);
  sqcRYGate(q, -1.3981725295580871, 2);
  sqcRZGate(q, 1.717808176431281, 2);
  sqcRYGate(q, 2.012792202697042, 3);
  sqcRZGate(q, -0.948178891449932, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8157130412634115, 0);
  sqcRZGate(q, -2.044681382604262, 0);
  sqcRYGate(q, 0.19328755095829053, 1);
  sqcRZGate(q, -0.14801235201083077, 1);
  sqcRYGate(q, -1.9612972020568762, 2);
  sqcRZGate(q, 3.1015745996724204, 2);
  sqcRYGate(q, -1.9356895394225027, 3);
  sqcRZGate(q, 1.3694517979495782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.33317025748819223, 0);
  sqcRZGate(q, -0.6130538850398448, 0);
  sqcRYGate(q, 0.6858678155090726, 1);
  sqcRZGate(q, -1.8068506794360077, 1);
  sqcRYGate(q, 2.3618205028618826, 2);
  sqcRZGate(q, 2.1199586069388108, 2);
  sqcRYGate(q, 0.4802259075430018, 3);
  sqcRZGate(q, -0.334118416435973, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.136692882182577, 0);
  sqcRZGate(q, 1.2705257067888427, 0);
  sqcRYGate(q, -2.9510438947186404, 1);
  sqcRZGate(q, -2.62725737200587, 1);
  sqcRYGate(q, -0.6123826234396533, 2);
  sqcRZGate(q, 1.680492471434015, 2);
  sqcRYGate(q, -2.0453866521375983, 3);
  sqcRZGate(q, -1.1878345891351652, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.49898928519627, 0);
  sqcRZGate(q, -3.118280935863371, 0);
  sqcRYGate(q, -1.4936371097494439, 1);
  sqcRZGate(q, -0.23820940739368476, 1);
  sqcRYGate(q, -1.097055666138371, 2);
  sqcRZGate(q, 2.265314612463105, 2);
  sqcRYGate(q, 1.012157378347661, 3);
  sqcRZGate(q, -1.6892176763956135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.27059739442281944, 0);
  sqcRZGate(q, -2.66981545753512, 0);
  sqcRYGate(q, -0.35492086768232894, 1);
  sqcRZGate(q, -1.512194773707936, 1);
  sqcRYGate(q, -0.5845108426924339, 2);
  sqcRZGate(q, -0.8660053770441092, 2);
  sqcRYGate(q, 1.3012384279107276, 3);
  sqcRZGate(q, 1.6601630323284837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.53183577640034, 0);
  sqcRZGate(q, 1.3453475719666512, 0);
  sqcRYGate(q, 0.3992985403738398, 1);
  sqcRZGate(q, -0.06367393198202151, 1);
  sqcRYGate(q, -2.9842099928652996, 2);
  sqcRZGate(q, -2.580271881376994, 2);
  sqcRYGate(q, 1.6371049804954905, 3);
  sqcRZGate(q, 1.535352559902865, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0939471140210753, 0);
  sqcRZGate(q, 1.1812827797005585, 0);
  sqcRYGate(q, -2.3506620028102168, 1);
  sqcRZGate(q, -0.7833507885948525, 1);
  sqcRYGate(q, 2.362712679584206, 2);
  sqcRZGate(q, -2.006604504157445, 2);
  sqcRYGate(q, 0.750204233780531, 3);
  sqcRZGate(q, -1.6465239996962644, 3);

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
