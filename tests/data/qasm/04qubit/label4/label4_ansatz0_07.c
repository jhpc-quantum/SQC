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

  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.03146219595300165, 2);
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
  sqcRZGate(q, -0.13772228076712087, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.13759628038988925, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07557157847362815, 3);
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
  sqcRZGate(q, -0.133375561071487, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.18603375842403488, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3810233004346772, 0);
  sqcRZGate(q, -0.11060821127190239, 0);
  sqcRXGate(q, -0.01029756891465021, 1);
  sqcRZGate(q, -0.09234180808227238, 1);
  sqcRXGate(q, -0.4336073642649377, 2);
  sqcRZGate(q, -0.19562296046778818, 2);
  sqcRXGate(q, -0.20314204654348297, 3);
  sqcRZGate(q, -0.1243357507235427, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04072925170974817, 2);
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
  sqcRZGate(q, 0.00949468697662993, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.23456994328621575, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07025028081448184, 3);
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
  sqcRZGate(q, -0.03225222380923005, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1665619722514677, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.33958488324774255, 0);
  sqcRZGate(q, -0.16075105452764077, 0);
  sqcRXGate(q, 0.024261751810499495, 1);
  sqcRZGate(q, -0.163487126594497, 1);
  sqcRXGate(q, -0.33447434803863424, 2);
  sqcRZGate(q, -0.22502333487675186, 2);
  sqcRXGate(q, -0.22105786502711208, 3);
  sqcRZGate(q, -0.2224271486177477, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.14078775503258595, 2);
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
  sqcRZGate(q, 0.01689921815082231, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2485472871571259, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1579454483997208, 3);
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
  sqcRZGate(q, 0.014376882562259007, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.007122171130438883, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3628429904091017, 0);
  sqcRZGate(q, -0.1518404073478867, 0);
  sqcRXGate(q, -0.019939766870267307, 1);
  sqcRZGate(q, -0.21909356308416544, 1);
  sqcRXGate(q, -0.26977866711646714, 2);
  sqcRZGate(q, -0.21463754527101106, 2);
  sqcRXGate(q, -0.26982325136757296, 3);
  sqcRZGate(q, -0.1501812023881916, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2266552859101487, 2);
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
  sqcRZGate(q, 0.06698231607721522, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2273131879084745, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2813128944886462, 3);
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
  sqcRZGate(q, 0.018690518658326813, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.007832891953228905, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.37064136296939915, 0);
  sqcRZGate(q, -0.006333657860134521, 0);
  sqcRXGate(q, 0.04261047594084785, 1);
  sqcRZGate(q, -0.30661299238150685, 1);
  sqcRXGate(q, -0.13859452736567163, 2);
  sqcRZGate(q, -0.236522288200105, 2);
  sqcRXGate(q, -0.31247698214789293, 3);
  sqcRZGate(q, -0.10926173493536495, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.14605380707291743, 2);
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
  sqcRZGate(q, 0.05338013977584639, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3255647757089567, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2097598050392323, 3);
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
  sqcRZGate(q, 0.02433068130711735, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.018892191658803965, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.413783214457058, 0);
  sqcRZGate(q, -0.005023463159299687, 0);
  sqcRXGate(q, -0.014848277554133307, 1);
  sqcRZGate(q, -0.28914414838589303, 1);
  sqcRXGate(q, -0.04836742859615917, 2);
  sqcRZGate(q, -0.23304496352268472, 2);
  sqcRXGate(q, -0.34136353672530445, 3);
  sqcRZGate(q, -0.01345990212773218, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0652763805339578, 2);
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
  sqcRZGate(q, -0.08106207691587135, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2653531775325582, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2711620808284071, 3);
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
  sqcRZGate(q, 0.1492056993873734, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.003849859165241613, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3665705664269137, 0);
  sqcRZGate(q, 0.04769478396407866, 0);
  sqcRXGate(q, -0.06650193481875626, 1);
  sqcRZGate(q, -0.3258574751538024, 1);
  sqcRXGate(q, -0.060750366799744535, 2);
  sqcRZGate(q, -0.23301975981176984, 2);
  sqcRXGate(q, -0.3079024506203176, 3);
  sqcRZGate(q, 0.08862617525493766, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08648211737654074, 2);
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
  sqcRZGate(q, -0.21952990049687732, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0823586042852515, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2683007415013948, 3);
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
  sqcRZGate(q, -0.004150004729378379, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.007502143045865748, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.410290999072243, 0);
  sqcRZGate(q, 0.045456040101258866, 0);
  sqcRXGate(q, 0.06598443418256124, 1);
  sqcRZGate(q, -0.3530032491935476, 1);
  sqcRXGate(q, 0.045612958755339994, 2);
  sqcRZGate(q, -0.25809137364747076, 2);
  sqcRXGate(q, -0.36218581839598474, 3);
  sqcRZGate(q, 0.06242892387803361, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.038909414037415054, 2);
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
  sqcRZGate(q, -0.4467623189961476, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06061991059356065, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3627688469638847, 3);
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
  sqcRZGate(q, -0.12826357583237163, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.046622148510034385, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.38595415864612925, 0);
  sqcRZGate(q, -0.04808021579876425, 0);
  sqcRXGate(q, -0.006670799689053029, 1);
  sqcRZGate(q, -0.3201674759500689, 1);
  sqcRXGate(q, -0.07568953788116169, 2);
  sqcRZGate(q, -0.22315681041046584, 2);
  sqcRXGate(q, -0.4256943078538689, 3);
  sqcRZGate(q, 0.10042681538164286, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06243706900795777, 2);
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
  sqcRZGate(q, -0.49563032446428756, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03667348706190236, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.27523655903307387, 3);
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
  sqcRZGate(q, -0.22491345894061, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0658066691146887, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.4033085001964287, 0);
  sqcRZGate(q, -0.012425178697901615, 0);
  sqcRXGate(q, -0.053607044054908966, 1);
  sqcRZGate(q, -0.16051091480551943, 1);
  sqcRXGate(q, -0.09825569521354763, 2);
  sqcRZGate(q, -0.08866779631976306, 2);
  sqcRXGate(q, -0.44614085353774097, 3);
  sqcRZGate(q, 0.005227774187780841, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.019204551508872715, 2);
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
  sqcRZGate(q, -0.3005815220047563, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08525143864898461, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.21612134149350404, 3);
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
  sqcRZGate(q, -0.0758760997816198, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.09358102086939905, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.4487930579504686, 0);
  sqcRZGate(q, -0.07647936440186995, 0);
  sqcRXGate(q, 0.03821726988162376, 1);
  sqcRZGate(q, -0.1431153875496727, 1);
  sqcRXGate(q, -0.06884450501580278, 2);
  sqcRZGate(q, -0.031462236165708, 2);
  sqcRXGate(q, -0.3603408111624886, 3);
  sqcRZGate(q, 0.053802956282041375, 3);

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
