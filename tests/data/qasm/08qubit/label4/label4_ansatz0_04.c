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
  q = sqcQuantumCircuit(8);

  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03633238223886356, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04463761300916941, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.15738091994892284, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05251421138444629, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04262808137021249, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.004996864599914082, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.004946036878705779, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2746271860290317, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.03327260235870879, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.03727173618995, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06088483926628227, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.002870728412361882, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.09075225711597994, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.7295161841232424, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6011483427607436, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.19059275534544703, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.380677848861118, 0);
  sqcRZGate(q, -0.25931769545514993, 0);
  sqcRXGate(q, 0.00020656731815288623, 1);
  sqcRZGate(q, -0.07227871713964944, 1);
  sqcRXGate(q, -0.6598855066659587, 2);
  sqcRZGate(q, -0.6363448913868794, 2);
  sqcRXGate(q, 0.0024981638704717184, 3);
  sqcRZGate(q, -0.0687166876336953, 3);
  sqcRXGate(q, -1.488951110584102, 4);
  sqcRZGate(q, 0.08675058310923742, 4);
  sqcRXGate(q, -0.41199775958157464, 5);
  sqcRZGate(q, -0.36232780685932053, 5);
  sqcRXGate(q, 0.00023907118307910303, 6);
  sqcRZGate(q, -0.1210819200724229, 6);
  sqcRXGate(q, -0.6751927234547384, 7);
  sqcRZGate(q, -0.14767673910136528, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3351237441490674, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2998274840874517, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.029672149646306902, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4251421949904601, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06822569933994463, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0015410139739403792, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.000470726751142544, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.016105486783976504, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0005235365075257215, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.00022328190726313987, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.03229027350653155, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -6.874722790143306e-05, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0008372913018193972, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4219841826523507, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.42682269537509404, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2987838316724747, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.43215315981245916, 0);
  sqcRZGate(q, -0.11079512473273913, 0);
  sqcRXGate(q, -0.00020944885828629115, 1);
  sqcRZGate(q, -0.1271800589520556, 1);
  sqcRXGate(q, -0.31720228225847513, 2);
  sqcRZGate(q, -0.4438337073654935, 2);
  sqcRXGate(q, -0.004069610507698914, 3);
  sqcRZGate(q, -0.45576620088573266, 3);
  sqcRXGate(q, -1.1574932820010608, 4);
  sqcRZGate(q, -0.1841139268345742, 4);
  sqcRXGate(q, -0.21424017148563632, 5);
  sqcRZGate(q, -0.41585959188985394, 5);
  sqcRXGate(q, -0.00018583296002889647, 6);
  sqcRZGate(q, -0.3617997243920856, 6);
  sqcRXGate(q, -1.0338008313262317, 7);
  sqcRZGate(q, -0.09806469146056744, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2226424948595783, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.19760469117220592, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3610317695564833, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.47871569155405286, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.16770844517433997, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0008389489230854533, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.000685126219970687, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05730841395989602, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0016487904981012547, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.00051067675526283, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.7302182997315004, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.004614164035535754, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0015460404376003642, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6145752476970688, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.27542057598545006, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2366207638682169, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.48014536241443373, 0);
  sqcRZGate(q, -0.16206450343189086, 0);
  sqcRXGate(q, 0.0001741973657728485, 1);
  sqcRZGate(q, -0.17688158015068242, 1);
  sqcRXGate(q, 0.17298789833042982, 2);
  sqcRZGate(q, -0.17899052579866215, 2);
  sqcRXGate(q, 0.0027320089303090552, 3);
  sqcRZGate(q, -0.363437052771627, 3);
  sqcRXGate(q, -0.5131408429719849, 4);
  sqcRZGate(q, -0.23132850208220257, 4);
  sqcRXGate(q, 0.01747716128237596, 5);
  sqcRZGate(q, -0.318521534157202, 5);
  sqcRXGate(q, 0.0017007959630471854, 6);
  sqcRZGate(q, -0.2516707051289201, 6);
  sqcRXGate(q, -0.869798857128773, 7);
  sqcRZGate(q, -0.04383478820708382, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4152021624363044, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.18302860577451854, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2588515387432623, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.7948477292167724, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.15876569208873362, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0008755063836352579, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.000831674926402121, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04894111985178052, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.1350966368221446, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.009950231422542428, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.84540351133259, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.061535927983422306, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.44836364617777963, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.021970308099304895, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.071453846081863, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4815368816287835, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.581206589768961, 0);
  sqcRZGate(q, -0.014907943257966506, 0);
  sqcRXGate(q, -6.759475799057393e-05, 1);
  sqcRZGate(q, -0.34013510028677435, 1);
  sqcRXGate(q, -0.1307487523587521, 2);
  sqcRZGate(q, -0.1986865747765598, 2);
  sqcRXGate(q, -0.003957860284051063, 3);
  sqcRZGate(q, 0.016069686473056257, 3);
  sqcRXGate(q, -0.003506474906600022, 4);
  sqcRZGate(q, 0.23693278144522587, 4);
  sqcRXGate(q, 0.013860860094985342, 5);
  sqcRZGate(q, -0.013583816285309053, 5);
  sqcRXGate(q, 0.004447949491563751, 6);
  sqcRZGate(q, -1.1058296662573215, 6);
  sqcRXGate(q, -0.3425351198701709, 7);
  sqcRZGate(q, 0.1341179464357009, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.035401352914573324, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.76530306189994, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.09885844070474994, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6465750928249864, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0294195760262464, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.7071080924529413, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.7071829066619338, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.023748562735484542, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8726716036169928, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.4232927891811625, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.003606787779713826, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0034788912833881675, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.15946828479561476, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.9258789736631782, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.511929834118028, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1339698963469388, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.8765418772537147, 0);
  sqcRZGate(q, -0.023179938125096344, 0);
  sqcRXGate(q, 0.0002447382155447068, 1);
  sqcRZGate(q, -0.7018912442524625, 1);
  sqcRXGate(q, 0.0002828125988968406, 2);
  sqcRZGate(q, -0.27650036254315563, 2);
  sqcRXGate(q, -0.00022486608960229626, 3);
  sqcRZGate(q, 0.0002432257942279802, 3);
  sqcRXGate(q, -9.115975419818856e-05, 4);
  sqcRZGate(q, -0.2771811533666935, 4);
  sqcRXGate(q, -0.00012487632851282502, 5);
  sqcRZGate(q, -0.002572234236982435, 5);
  sqcRXGate(q, -0.00043854123236106396, 6);
  sqcRZGate(q, -0.45696521682547914, 6);
  sqcRXGate(q, -3.137885985014069, 7);
  sqcRZGate(q, 0.003764153107605924, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.04870653964387567, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.048569098431216144, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.011687899837731448, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.30947822827746807, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.03496146042236956, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.23411970368805374, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.234567964732693, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.064345726665332, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -2.1923870849711014, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0606129712017366, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.0742082690751147, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.0685639936712035, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.05236879757844595, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1126742861400552, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2996938561590673, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5790578923203955, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.5633015222166278, 0);
  sqcRZGate(q, 0.03364679068400323, 0);
  sqcRXGate(q, -0.00020023688447055678, 1);
  sqcRZGate(q, -0.009081604583502002, 1);
  sqcRXGate(q, -0.0002920043258596214, 2);
  sqcRZGate(q, -0.047033967621353104, 2);
  sqcRXGate(q, -9.080934444339052e-05, 3);
  sqcRZGate(q, 0.0020395876057262325, 3);
  sqcRXGate(q, -8.260955178085974e-05, 4);
  sqcRZGate(q, -0.04256248450845454, 4);
  sqcRXGate(q, -0.0009923500136267138, 5);
  sqcRZGate(q, -0.001345768115484328, 5);
  sqcRXGate(q, -0.0013548457286170611, 6);
  sqcRZGate(q, -0.04070626429747958, 6);
  sqcRXGate(q, 0.0012783117292883626, 7);
  sqcRZGate(q, 0.039078446539172654, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.26218842218382243, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.24936438929953755, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.038653077689867976, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5554923958336055, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2936441851635202, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.14272533539260085, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.1385094131275114, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1425601394135701, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -1.2103888753974945, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.15391577834881512, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.027589498793766737, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.026592504077968773, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.04798085730848977, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.045787143982904274, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05768280376013703, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.42647530431111136, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.023962690097119512, 0);
  sqcRZGate(q, -0.01108598402510663, 0);
  sqcRXGate(q, 8.45578029076224e-06, 1);
  sqcRZGate(q, -0.046413184133539176, 1);
  sqcRXGate(q, -0.00023043128431263923, 2);
  sqcRZGate(q, -0.03807183739109614, 2);
  sqcRXGate(q, 0.0004872882074369766, 3);
  sqcRZGate(q, -0.04451149552866645, 3);
  sqcRXGate(q, 5.164474246053181e-05, 4);
  sqcRZGate(q, -0.04399393250722903, 4);
  sqcRXGate(q, 0.0010894061494006561, 5);
  sqcRZGate(q, -0.048122992163690696, 5);
  sqcRXGate(q, 0.0015080403685965495, 6);
  sqcRZGate(q, -0.04235643034913065, 6);
  sqcRXGate(q, -0.004553326225687026, 7);
  sqcRZGate(q, -0.08907095350522572, 7);

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
