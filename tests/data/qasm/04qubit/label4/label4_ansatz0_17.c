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

  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0702146458888348, 2);
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
  sqcRZGate(q, -0.023218907805939302, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.036198501492479565, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.01155832100586298, 3);
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
  sqcRZGate(q, -0.12409548558416175, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0358319035372134, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.23174509169817964, 0);
  sqcRZGate(q, -0.11268388564134998, 0);
  sqcRXGate(q, -0.008660356709998441, 1);
  sqcRZGate(q, -0.16159913030711812, 1);
  sqcRXGate(q, -0.1981070655761945, 2);
  sqcRZGate(q, -0.02390516824673342, 2);
  sqcRXGate(q, -0.14620878977160962, 3);
  sqcRZGate(q, -0.012523106389817325, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07694722245897524, 2);
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
  sqcRZGate(q, 0.003846965370723057, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.13934339462027348, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.05464271898976025, 3);
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
  sqcRZGate(q, -0.0365880641305946, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09386444366202368, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.21791927616218465, 0);
  sqcRZGate(q, -0.16371670435795962, 0);
  sqcRXGate(q, -0.03552737178851498, 1);
  sqcRZGate(q, -0.24051506995687816, 1);
  sqcRXGate(q, -0.19016187533832743, 2);
  sqcRZGate(q, -0.03524802639587802, 2);
  sqcRXGate(q, -0.11891481829045945, 3);
  sqcRZGate(q, -0.0646190817764403, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05313618282934964, 2);
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
  sqcRZGate(q, 0.020482217179063258, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.31060752347744686, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.04636822506520505, 3);
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
  sqcRZGate(q, -0.09789374216991666, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09907282669182872, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.24584806604034867, 0);
  sqcRZGate(q, -0.17416671340346968, 0);
  sqcRXGate(q, 0.04023679495697611, 1);
  sqcRZGate(q, -0.351216337779722, 1);
  sqcRXGate(q, -0.23131539737503967, 2);
  sqcRZGate(q, -0.13002045021142725, 2);
  sqcRXGate(q, -0.11826669810677688, 3);
  sqcRZGate(q, -0.11543207844244022, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.12091498018244734, 2);
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
  sqcRZGate(q, 0.022415174280779007, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3098547155067926, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.024892714171843838, 3);
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
  sqcRZGate(q, -0.034666740385256085, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.03616883402773397, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.2936861611607074, 0);
  sqcRZGate(q, -0.14090715929312372, 0);
  sqcRXGate(q, 0.024237540648926807, 1);
  sqcRZGate(q, -0.33311440814146515, 1);
  sqcRXGate(q, -0.12106089585475836, 2);
  sqcRZGate(q, -0.1177054477560826, 2);
  sqcRXGate(q, -0.14090299139424628, 3);
  sqcRZGate(q, -0.09539757340706906, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16861769664576196, 2);
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
  sqcRZGate(q, 0.019176793918370738, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2864732688852321, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02028229061429075, 3);
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
  sqcRZGate(q, -0.028060326790082194, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08892764719454659, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.32504558037503695, 0);
  sqcRZGate(q, -0.08801245536847808, 0);
  sqcRXGate(q, -0.04045843370160042, 1);
  sqcRZGate(q, -0.3065628749274227, 1);
  sqcRXGate(q, -0.1583585157069934, 2);
  sqcRZGate(q, -0.07133185483310268, 2);
  sqcRXGate(q, -0.20254727708123696, 3);
  sqcRZGate(q, -0.03487096818483514, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13315931480944987, 2);
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
  sqcRZGate(q, -0.06846705462044829, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18177848889314946, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11746178359291252, 3);
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
  sqcRZGate(q, 0.0024527662371047485, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07539330910730366, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3027581602294757, 0);
  sqcRZGate(q, -0.091888450027806, 0);
  sqcRXGate(q, -0.07947827452175112, 1);
  sqcRZGate(q, -0.3329402086439343, 1);
  sqcRXGate(q, -0.09332076230026148, 2);
  sqcRZGate(q, -0.09255375985246553, 2);
  sqcRXGate(q, -0.1819798712983966, 3);
  sqcRZGate(q, -0.030333455203806974, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2435859751542005, 2);
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
  sqcRZGate(q, -0.02626498410150586, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08322103241162603, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.20006667794739386, 3);
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
  sqcRZGate(q, 0.034175202286090466, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08367419064728603, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3216121366118894, 0);
  sqcRZGate(q, -0.08661980831965893, 0);
  sqcRXGate(q, -0.03700611918518302, 1);
  sqcRZGate(q, -0.29032387945667837, 1);
  sqcRXGate(q, -0.005576605713963062, 2);
  sqcRZGate(q, -0.11528948489535494, 2);
  sqcRXGate(q, -0.2118790920103015, 3);
  sqcRZGate(q, -0.05273068182839912, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.21385171520111276, 2);
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
  sqcRZGate(q, -0.06601656559967038, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08786363934439502, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2974233178798492, 3);
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
  sqcRZGate(q, 0.020267519183282037, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09533410982666461, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3427620652661604, 0);
  sqcRZGate(q, -0.11129567408605019, 0);
  sqcRXGate(q, -0.08161429405645856, 1);
  sqcRZGate(q, -0.20188960163580472, 1);
  sqcRXGate(q, 0.000404906368282026, 2);
  sqcRZGate(q, -0.1266428874887635, 2);
  sqcRXGate(q, -0.1889474075928713, 3);
  sqcRZGate(q, 0.007553349354584047, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.21122736050375818, 2);
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
  sqcRZGate(q, -0.054189405329391885, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06805966501170911, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2798794125584902, 3);
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
  sqcRZGate(q, 0.13037085461548567, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09900474886624278, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.27967765329963606, 0);
  sqcRZGate(q, -0.11826379194162294, 0);
  sqcRXGate(q, -0.027759745019229044, 1);
  sqcRZGate(q, -0.09706309027928137, 1);
  sqcRXGate(q, -0.029418894146439237, 2);
  sqcRZGate(q, -0.11182481111107079, 2);
  sqcRXGate(q, -0.1849074252190807, 3);
  sqcRZGate(q, 0.02844388133550417, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.263221927623324, 2);
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
  sqcRZGate(q, -0.09586056913811394, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09979513685303229, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2373537882607107, 3);
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
  sqcRZGate(q, 0.10400469397914502, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08041351124278119, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.26859175855649003, 0);
  sqcRZGate(q, -0.059424619277087525, 0);
  sqcRXGate(q, -0.06317599981821885, 1);
  sqcRZGate(q, -0.1498200185363158, 1);
  sqcRXGate(q, -0.019321967894201833, 2);
  sqcRZGate(q, -0.09879143145226531, 2);
  sqcRXGate(q, -0.20863476858244775, 3);
  sqcRZGate(q, 0.016393814781774516, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2436749402251967, 2);
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
  sqcRZGate(q, -0.18670339742090553, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.024264167428655295, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.29911700227029475, 3);
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
  sqcRZGate(q, 0.07343782723437009, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.13040041073931055, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.28497065500285623, 0);
  sqcRZGate(q, -0.053007626300280684, 0);
  sqcRXGate(q, -0.13489639777224025, 1);
  sqcRZGate(q, -0.14151295802291275, 1);
  sqcRXGate(q, -0.08011789729009375, 2);
  sqcRZGate(q, -0.10087317971723504, 2);
  sqcRXGate(q, -0.2048510923241429, 3);
  sqcRZGate(q, 0.04725573148449084, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.19657966246991818, 2);
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
  sqcRZGate(q, -0.23745675211330863, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.004708327177258553, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.22586039914236933, 3);
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
  sqcRZGate(q, 0.07597752709030414, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11281751198170635, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.2508973152821542, 0);
  sqcRZGate(q, -0.16563160532441915, 0);
  sqcRXGate(q, -0.1357293262967884, 1);
  sqcRZGate(q, -0.10995680857625617, 1);
  sqcRXGate(q, -0.009480745471062544, 2);
  sqcRZGate(q, -0.03225999653832596, 2);
  sqcRXGate(q, -0.17796636834717602, 3);
  sqcRZGate(q, -0.007262239255986046, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17801156800015414, 2);
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
  sqcRZGate(q, -0.19591459518207338, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.020481538890345544, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2589640176773036, 3);
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
  sqcRZGate(q, 0.016798859952566025, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.10381838685328543, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.23266093701251722, 0);
  sqcRZGate(q, -0.1627235713062752, 0);
  sqcRXGate(q, -0.1471021871389873, 1);
  sqcRZGate(q, -0.005931733839980207, 1);
  sqcRXGate(q, -0.003999658520816733, 2);
  sqcRZGate(q, -0.018047977157666005, 2);
  sqcRXGate(q, -0.2635106640455638, 3);
  sqcRZGate(q, -0.023609179245349915, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06794843871828438, 2);
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
  sqcRZGate(q, -0.2955048619769322, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08793000335324848, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.21378229070780444, 3);
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
  sqcRZGate(q, -0.059147410035555625, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.049056714374153244, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.20335437264451522, 0);
  sqcRZGate(q, -0.10284102307819823, 0);
  sqcRXGate(q, -0.07038516036278838, 1);
  sqcRZGate(q, -0.05078791126761858, 1);
  sqcRXGate(q, -0.06373126902861555, 2);
  sqcRZGate(q, -0.07669874848822288, 2);
  sqcRXGate(q, -0.16989516648222647, 3);
  sqcRZGate(q, 0.0032009713724924804, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06715578033610295, 2);
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
  sqcRZGate(q, -0.32183832988016775, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06417299560321882, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.23236156475852415, 3);
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
  sqcRZGate(q, -0.07608497565260494, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08724274254555643, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.1714779439355146, 0);
  sqcRZGate(q, -0.1250607863453005, 0);
  sqcRXGate(q, -0.1401064916606115, 1);
  sqcRZGate(q, -0.04456145154484415, 1);
  sqcRXGate(q, -0.04110324747988864, 2);
  sqcRZGate(q, -0.08491191727304291, 2);
  sqcRXGate(q, -0.1463835031382032, 3);
  sqcRZGate(q, 0.058398278387916884, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07218050581885996, 2);
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
  sqcRZGate(q, -0.28242397351767495, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.10673138998015196, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.18897798157194617, 3);
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
  sqcRZGate(q, -0.13264018536218783, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.032849306303576006, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.15808883883275343, 0);
  sqcRZGate(q, -0.064619290377497, 0);
  sqcRXGate(q, -0.02801840310315643, 1);
  sqcRZGate(q, 0.0008758873342473323, 1);
  sqcRXGate(q, -0.030783438258725697, 2);
  sqcRZGate(q, 0.008142532036636256, 2);
  sqcRXGate(q, -0.18202408271111892, 3);
  sqcRZGate(q, 0.04053242732630282, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07983579530649576, 2);
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
  sqcRZGate(q, -0.36926608030081454, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08999584331250453, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1802820338298894, 3);
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
  sqcRZGate(q, -0.2540533198726767, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.09929001550710317, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.18998610572006935, 0);
  sqcRZGate(q, -0.07733576615757869, 0);
  sqcRXGate(q, -0.08341615598091517, 1);
  sqcRZGate(q, -0.004593006880729236, 1);
  sqcRXGate(q, -0.005787866029679104, 2);
  sqcRZGate(q, -0.025657587991237248, 2);
  sqcRXGate(q, -0.19027901548248038, 3);
  sqcRZGate(q, -0.0038198705576196848, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.12636648170779505, 2);
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
  sqcRZGate(q, -0.34875309077515, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.014029601214616421, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.17387381290806703, 3);
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
  sqcRZGate(q, -0.31777795676029125, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1233874821096769, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.10094205149185356, 0);
  sqcRZGate(q, -0.06665797634109893, 0);
  sqcRXGate(q, 0.0032515572184606194, 1);
  sqcRZGate(q, 0.015832515526861216, 1);
  sqcRXGate(q, -0.019752120821988507, 2);
  sqcRZGate(q, -0.06455996108675933, 2);
  sqcRXGate(q, -0.1579457449433911, 3);
  sqcRZGate(q, -0.0898790676018599, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1746336175121751, 2);
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
  sqcRZGate(q, -0.266650016734803, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0421469650243232, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11858821067197475, 3);
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
  sqcRZGate(q, -0.36210290167350156, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1339038858220915, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.1144065482078915, 0);
  sqcRZGate(q, -0.035810098633096685, 0);
  sqcRXGate(q, -0.1264236510868666, 1);
  sqcRZGate(q, 0.0889982932765572, 1);
  sqcRXGate(q, -0.03483506577491039, 2);
  sqcRZGate(q, -0.05602831643976463, 2);
  sqcRXGate(q, -0.17971194507601668, 3);
  sqcRZGate(q, -0.14012228560695142, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1162647979374636, 2);
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
  sqcRZGate(q, -0.22501331827318494, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.024751587725051708, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0700897893585813, 3);
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
  sqcRZGate(q, -0.2339592021626116, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.019743881322250762, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.11798042914974886, 0);
  sqcRZGate(q, -0.04130654000693389, 0);
  sqcRXGate(q, -0.2638729114498417, 1);
  sqcRZGate(q, 0.035682749832180824, 1);
  sqcRXGate(q, -0.06933937262405668, 2);
  sqcRZGate(q, -0.011256593920580179, 2);
  sqcRXGate(q, -0.13954651732881312, 3);
  sqcRZGate(q, -0.20288389507691676, 3);

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
