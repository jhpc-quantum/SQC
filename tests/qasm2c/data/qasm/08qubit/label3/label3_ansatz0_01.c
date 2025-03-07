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
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.182089634590191, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0681117123748262, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.014034739637856557, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 2.034604487038287, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.1172372245872906, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.06923325983040679, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.343133992845204, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.3756082126037571, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2123825296526477, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.34440623781088203, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.3437655058769177, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.10408829739080994, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8585135170590218, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.6936435047872344, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -2.5626830129871006, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.5652885519268742, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.5717752465180137, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.936875747220577, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.0005986514935692732, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.0021455732663021526, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.24530711624196203, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.6539159496745593, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.9494696807502518, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.661715070529872, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -1.4060337830153042, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 1.641057125263637, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.9867950184311094, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, -1.888244870998148, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 1.7131055708049963, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 0.4193354363352417, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, 0.19203167359843404, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -0.19756572992432603, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -0.16740552359228267, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, -1.8353648669270188, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, 1.4374441187510882, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, -0.40686201084006407, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, -1.7029174579499449, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, 1.5050391548205169, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, -2.6604837741991303, 7);
  sqcCXGate(q, 5, 7);
  sqcRXGate(q, -0.000632513877222078, 0);
  sqcRZGate(q, 0.5187296986004131, 0);
  sqcRXGate(q, -0.0008568047618045565, 1);
  sqcRZGate(q, -0.5019628429894849, 1);
  sqcRXGate(q, -0.00028257152940229096, 2);
  sqcRZGate(q, -0.6035605273804393, 2);
  sqcRXGate(q, -1.6688931766505817e-05, 3);
  sqcRZGate(q, 3.0687071234347054, 3);
  sqcRXGate(q, 0.00026716651164459957, 4);
  sqcRZGate(q, -0.8648037538188909, 4);
  sqcRXGate(q, 1.5701725269223468, 5);
  sqcRZGate(q, 0.0023960497197796867, 5);
  sqcRXGate(q, -1.576971059421907, 6);
  sqcRZGate(q, -0.0027296992855440553, 6);
  sqcRXGate(q, 1.5698782042455464, 7);
  sqcRZGate(q, -0.0017841469305647372, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2714912320147443, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2793470309834056, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.01221100389148204, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.6265551988385543, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.7816725578406163, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.6522950860588848, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.568423326103429, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2693855515433424, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.581814021063138, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.590846611348757, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.6106661080584612, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.08046849341514321, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0006901218549270983, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 3.722108398480497e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 3.931154324437498e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -2.9651776795479314, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 3.02803554814965, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.011516971269933403, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05446935573666729, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3810573461486665, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.026968401506289815, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.9005365648003523, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.44133474148702634, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.13797677086827667, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -1.2792696521035845, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 2.223440695782118, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.26587649875517694, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, -1.5230321404872778, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 1.4628485368398154, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, -0.015952611630652994, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, 0.012721534154831422, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, 6.762935741050686e-06, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, 3.861033274107818e-05, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, -0.3339114390017942, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, -0.001471200007954083, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, 0.0005115462516762213, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, -0.2764624291866769, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, 1.6918242911847532, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, -1.6081468145454716, 7);
  sqcCXGate(q, 5, 7);
  sqcRXGate(q, -0.00032237100844030516, 0);
  sqcRZGate(q, 0.2007867702434735, 0);
  sqcRXGate(q, -2.491050867738009e-05, 1);
  sqcRZGate(q, -0.5309267910790804, 1);
  sqcRXGate(q, -7.538139550342552e-05, 2);
  sqcRZGate(q, -1.813654189071505, 2);
  sqcRXGate(q, -0.000294783835152314, 3);
  sqcRZGate(q, -0.40169029755907815, 3);
  sqcRXGate(q, -0.0003548772853972717, 4);
  sqcRZGate(q, 0.17930118018052454, 4);
  sqcRXGate(q, 1.5691252539934362, 5);
  sqcRZGate(q, 0.9615772485724411, 5);
  sqcRXGate(q, -1.5816907605626394, 6);
  sqcRZGate(q, -0.08810403196712817, 6);
  sqcRXGate(q, -1.5698416126057004, 7);
  sqcRZGate(q, -0.6292439927608465, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12167048436655666, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.22024222680329825, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.2206922143933845, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.5465817438478848, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.4889335758894466, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17688931217822193, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4294907520887088, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4541626419722416, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5537754694574325, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.6537907840463233, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.5949581968342297, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.6226177612163761, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.04854342934204083, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.06461447136722825, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.04163805941962304, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.875239885655821, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.4860019879545996, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.547332823144236, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.049074393483834, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.283318216040221, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.829869892132909, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.16503584838733934, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.03687585018042354, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 1.118539971841286, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.9039389238265253, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 1.3240058755327238, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.14803838277341663, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, -2.9670971370237473, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, -3.1006381024599956, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 0.1489023841544648, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -1.5835194276002333, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -0.05874699461893715, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -0.005897297871536141, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, 0.00738891478227516, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, 0.07786231484294566, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, 0.047324704232588846, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, -0.6927929376373951, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, 0.011643982064522437, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, 0.011769744930356674, 7);
  sqcCXGate(q, 5, 7);
  sqcRXGate(q, 0.0011105955691527883, 0);
  sqcRZGate(q, -1.458877851644409, 0);
  sqcRXGate(q, 0.0001948174971273694, 1);
  sqcRZGate(q, -1.4723045346559813, 1);
  sqcRXGate(q, 0.0005244189110566141, 2);
  sqcRZGate(q, 1.1916353353981743, 2);
  sqcRXGate(q, -0.0002658542485502319, 3);
  sqcRZGate(q, -1.0451282539456541, 3);
  sqcRXGate(q, -0.002012659020906433, 4);
  sqcRZGate(q, -0.04047575554775703, 4);
  sqcRXGate(q, 0.003776456526972805, 5);
  sqcRZGate(q, -0.03949435562872278, 5);
  sqcRXGate(q, -0.0029292160751609488, 6);
  sqcRZGate(q, 0.009973554257429313, 6);
  sqcRXGate(q, 7.758004174920018e-05, 7);
  sqcRZGate(q, 0.08665961286458197, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.04349775487769889, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.09580854087842527, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5647786418732829, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.6219407295762511, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.6948236407450417, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.495659313639597, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2613826306284653, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.396570985722976, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.9148243810588883, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.597445725957381, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.5368819858218876, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.6156552096362324, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.013354290573241, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0074158388467858915, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.019677275422779836, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.9314843629072096, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.9511444599923277, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.0192328417992942, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.12700788782852648, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6722983110937106, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6208353363953913, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 0.04379352080740956, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, 1.4086677581404692, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 2);
  sqcRZGate(q, -0.7858884843481072, 2);
  sqcCXGate(q, 0, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -2.1106956875654976, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, -0.05323672671923288, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 1, 3);
  sqcRZGate(q, 0.17929833808918766, 3);
  sqcCXGate(q, 1, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 2.9587554509742713, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcHGate(q, 4);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 1.6934906209082863, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 2, 4);
  sqcRZGate(q, 0.7595725597137377, 4);
  sqcCXGate(q, 2, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, 0.2957245750138964, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcHGate(q, 5);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -0.3190903960445945, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 3, 5);
  sqcRZGate(q, -0.3108258908662197, 5);
  sqcCXGate(q, 3, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, 0.02722953033687739, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcHGate(q, 6);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, -0.03148407607620353, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 4, 6);
  sqcRZGate(q, -0.050257551963719886, 6);
  sqcCXGate(q, 4, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, -2.1529268066736087, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcHGate(q, 7);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, 0.9165455667858485, 7);
  sqcCXGate(q, 5, 7);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 5, 7);
  sqcRZGate(q, 0.9339770234952857, 7);
  sqcCXGate(q, 5, 7);
  sqcRXGate(q, -5.33343909188698e-05, 0);
  sqcRZGate(q, 0.08895539198737362, 0);
  sqcRXGate(q, 0.0014795280001672672, 1);
  sqcRZGate(q, -2.6885617577070393, 1);
  sqcRXGate(q, 0.00011675268331525506, 2);
  sqcRZGate(q, -0.6147349230264069, 2);
  sqcRXGate(q, 0.0006220037530320186, 3);
  sqcRZGate(q, 0.27971987749075405, 3);
  sqcRXGate(q, 0.0008546687059533867, 4);
  sqcRZGate(q, 1.7748197865777697, 4);
  sqcRXGate(q, 0.0008791302426754787, 5);
  sqcRZGate(q, 0.2827318720267965, 5);
  sqcRXGate(q, -0.0004010665483036684, 6);
  sqcRZGate(q, 0.20799850365170483, 6);
  sqcRXGate(q, 0.0007844980660407161, 7);
  sqcRZGate(q, 0.27455757463559527, 7);

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
