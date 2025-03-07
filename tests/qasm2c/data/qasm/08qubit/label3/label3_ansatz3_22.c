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

  sqcRYGate(q, -2.837176733028183, 0);
  sqcRZGate(q, -1.4608642021391987, 0);
  sqcRYGate(q, -2.076544238881917, 1);
  sqcRZGate(q, -1.69244895447735, 1);
  sqcRYGate(q, -2.2387604609052776, 2);
  sqcRZGate(q, -2.60671782372707, 2);
  sqcRYGate(q, 0.7074243199209049, 3);
  sqcRZGate(q, -0.1637788092141763, 3);
  sqcRYGate(q, 0.7177424089355275, 4);
  sqcRZGate(q, 2.9055951909186146, 4);
  sqcRYGate(q, 1.2744661379696796, 5);
  sqcRZGate(q, 2.932764471472428, 5);
  sqcRYGate(q, 1.2538176897863371, 6);
  sqcRZGate(q, 1.000600340578382, 6);
  sqcRYGate(q, 2.277235135652827, 7);
  sqcRZGate(q, 0.08358011850133865, 7);
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
  sqcRYGate(q, -2.3452411199633847, 0);
  sqcRZGate(q, -2.520531087127609, 0);
  sqcRYGate(q, -1.5982578605767173, 1);
  sqcRZGate(q, 1.1475833423562865, 1);
  sqcRYGate(q, -1.5157773787333237, 2);
  sqcRZGate(q, -2.083667083413384, 2);
  sqcRYGate(q, -1.6451481103667867, 3);
  sqcRZGate(q, -2.6596397622952725, 3);
  sqcRYGate(q, 1.0550959191831961, 4);
  sqcRZGate(q, 1.3356481585844637, 4);
  sqcRYGate(q, 0.8327056824283082, 5);
  sqcRZGate(q, 2.065077752599289, 5);
  sqcRYGate(q, 1.3515519260243956, 6);
  sqcRZGate(q, -3.011677257406565, 6);
  sqcRYGate(q, -1.9386374712899441, 7);
  sqcRZGate(q, 0.4879454392735338, 7);
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
  sqcRYGate(q, 2.9187432007352534, 0);
  sqcRZGate(q, 2.1937253917319564, 0);
  sqcRYGate(q, -1.5423216044639725, 1);
  sqcRZGate(q, -3.0716318796805298, 1);
  sqcRYGate(q, 0.5260808394240986, 2);
  sqcRZGate(q, -0.25772319272026756, 2);
  sqcRYGate(q, -2.0628783451443398, 3);
  sqcRZGate(q, 0.5930994730436228, 3);
  sqcRYGate(q, 2.4628151078614517, 4);
  sqcRZGate(q, 1.426759848221566, 4);
  sqcRYGate(q, 0.4496433345698721, 5);
  sqcRZGate(q, 1.9642945238558678, 5);
  sqcRYGate(q, 1.6552316102205369, 6);
  sqcRZGate(q, 0.414617689057188, 6);
  sqcRYGate(q, 1.5124649823993388, 7);
  sqcRZGate(q, 0.007069336642158142, 7);
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
  sqcRYGate(q, -2.0877237340424966, 0);
  sqcRZGate(q, -1.8996724956876374, 0);
  sqcRYGate(q, 3.0811967540594516, 1);
  sqcRZGate(q, -0.862480900681497, 1);
  sqcRYGate(q, -0.6463136779955256, 2);
  sqcRZGate(q, 1.2423788733469996, 2);
  sqcRYGate(q, -2.8705896496297383, 3);
  sqcRZGate(q, -2.379401196916699, 3);
  sqcRYGate(q, 0.5284291054594664, 4);
  sqcRZGate(q, 1.8508066229562368, 4);
  sqcRYGate(q, -2.6184201736166965, 5);
  sqcRZGate(q, 0.025233203208499866, 5);
  sqcRYGate(q, -0.30740453232392095, 6);
  sqcRZGate(q, 0.17454701042630422, 6);
  sqcRYGate(q, -0.89913702527197, 7);
  sqcRZGate(q, 1.6248684726545815, 7);
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
  sqcRYGate(q, -2.7513627698201915, 0);
  sqcRZGate(q, -2.9641876046007942, 0);
  sqcRYGate(q, 1.3886195284319731, 1);
  sqcRZGate(q, 2.375381679286269, 1);
  sqcRYGate(q, -1.1048808871589553, 2);
  sqcRZGate(q, 2.988327884122926, 2);
  sqcRYGate(q, -1.876893787019811, 3);
  sqcRZGate(q, 3.1023682600716542, 3);
  sqcRYGate(q, 2.7982952449315595, 4);
  sqcRZGate(q, 0.305337891121967, 4);
  sqcRYGate(q, 2.7273909294123535, 5);
  sqcRZGate(q, -2.474752937393065, 5);
  sqcRYGate(q, -2.2909324688360577, 6);
  sqcRZGate(q, 0.6383631482655265, 6);
  sqcRYGate(q, -0.7521877236333773, 7);
  sqcRZGate(q, 2.06059217374707, 7);
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
  sqcRYGate(q, -1.3662780498211498, 0);
  sqcRZGate(q, 2.96948398090835, 0);
  sqcRYGate(q, 1.2403553586807305, 1);
  sqcRZGate(q, 1.142443995819919, 1);
  sqcRYGate(q, 1.4729220258005187, 2);
  sqcRZGate(q, 1.4483732877096314, 2);
  sqcRYGate(q, -0.9467419315412569, 3);
  sqcRZGate(q, 2.498280234715821, 3);
  sqcRYGate(q, 0.7015518749239539, 4);
  sqcRZGate(q, -0.45816377864193697, 4);
  sqcRYGate(q, 1.0667848173158045, 5);
  sqcRZGate(q, 2.593237511356762, 5);
  sqcRYGate(q, 0.7817662803489516, 6);
  sqcRZGate(q, 2.4037866482338988, 6);
  sqcRYGate(q, 2.648814228477629, 7);
  sqcRZGate(q, -0.657705243918704, 7);
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
  sqcRYGate(q, 2.877416496845452, 0);
  sqcRZGate(q, -0.7230159662492858, 0);
  sqcRYGate(q, -2.148604217833478, 1);
  sqcRZGate(q, -0.3881413548887087, 1);
  sqcRYGate(q, -2.102777032537328, 2);
  sqcRZGate(q, -1.5153238362248764, 2);
  sqcRYGate(q, 1.6499882218529338, 3);
  sqcRZGate(q, -2.595534529872848, 3);
  sqcRYGate(q, 2.6927062729639712, 4);
  sqcRZGate(q, 1.2787028245029122, 4);
  sqcRYGate(q, 1.5097489142368952, 5);
  sqcRZGate(q, 2.6260214512218725, 5);
  sqcRYGate(q, -2.5716533716615233, 6);
  sqcRZGate(q, -0.12792765010166177, 6);
  sqcRYGate(q, -1.1301742219082331, 7);
  sqcRZGate(q, 3.0493485563516733, 7);
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
  sqcRYGate(q, 1.1152163178539054, 0);
  sqcRZGate(q, -1.0200193817348993, 0);
  sqcRYGate(q, 2.2470393885761135, 1);
  sqcRZGate(q, -2.8419598062792266, 1);
  sqcRYGate(q, 1.3777930340006095, 2);
  sqcRZGate(q, 2.6899301223679872, 2);
  sqcRYGate(q, 1.9195227509161417, 3);
  sqcRZGate(q, 2.8817495597543723, 3);
  sqcRYGate(q, 0.11469366955151987, 4);
  sqcRZGate(q, 0.23564577536975018, 4);
  sqcRYGate(q, -1.2278611422552983, 5);
  sqcRZGate(q, 3.0902053161824905, 5);
  sqcRYGate(q, 0.9100017446851814, 6);
  sqcRZGate(q, -1.9481368098657912, 6);
  sqcRYGate(q, 2.6285970163638086, 7);
  sqcRZGate(q, -0.9802942378838907, 7);
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
  sqcRYGate(q, 2.4518031871514214, 0);
  sqcRZGate(q, -1.1409110420339195, 0);
  sqcRYGate(q, -2.5196510343218788, 1);
  sqcRZGate(q, 2.002687712763491, 1);
  sqcRYGate(q, -2.3475896014212476, 2);
  sqcRZGate(q, 1.5331301360731593, 2);
  sqcRYGate(q, -1.1871956577128955, 3);
  sqcRZGate(q, 0.4028000721404368, 3);
  sqcRYGate(q, -0.4127947918194221, 4);
  sqcRZGate(q, -2.253532272640676, 4);
  sqcRYGate(q, 1.633986387539732, 5);
  sqcRZGate(q, 1.3527780197970172, 5);
  sqcRYGate(q, -0.6156532762468148, 6);
  sqcRZGate(q, 0.6807242712661032, 6);
  sqcRYGate(q, -2.8332879187434656, 7);
  sqcRZGate(q, -2.8381744417467347, 7);
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
  sqcRYGate(q, 1.5092268815222738, 0);
  sqcRZGate(q, -1.6004720507401693, 0);
  sqcRYGate(q, 0.5745599074350274, 1);
  sqcRZGate(q, 0.32531138274104254, 1);
  sqcRYGate(q, -0.8183898873394843, 2);
  sqcRZGate(q, -1.6092991644023602, 2);
  sqcRYGate(q, -1.7437003641104392, 3);
  sqcRZGate(q, 1.3520283839406213, 3);
  sqcRYGate(q, -2.1518705579094526, 4);
  sqcRZGate(q, -1.4190784909863183, 4);
  sqcRYGate(q, 1.928675343154726, 5);
  sqcRZGate(q, -0.7989044241610072, 5);
  sqcRYGate(q, -0.6762991661896234, 6);
  sqcRZGate(q, 1.2735668626044314, 6);
  sqcRYGate(q, -1.88032877820934, 7);
  sqcRZGate(q, 0.258699483168459, 7);
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
  sqcRYGate(q, -1.351931169024641, 0);
  sqcRZGate(q, -2.3172560221199565, 0);
  sqcRYGate(q, -1.9962991264086183, 1);
  sqcRZGate(q, -0.5449731082665575, 1);
  sqcRYGate(q, 2.5991677853610433, 2);
  sqcRZGate(q, -2.3432712136974883, 2);
  sqcRYGate(q, -2.3972191603661486, 3);
  sqcRZGate(q, 1.9669683755452416, 3);
  sqcRYGate(q, -0.7486052101115181, 4);
  sqcRZGate(q, -1.3615578007714115, 4);
  sqcRYGate(q, 2.4794789254562124, 5);
  sqcRZGate(q, -2.7052519270877666, 5);
  sqcRYGate(q, 2.7061017583493876, 6);
  sqcRZGate(q, 2.4832305356213307, 6);
  sqcRYGate(q, 1.0817598891973024, 7);
  sqcRZGate(q, 1.1644572598672562, 7);
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
  sqcRYGate(q, 1.85768771822164, 0);
  sqcRZGate(q, 1.5447355398211995, 0);
  sqcRYGate(q, 1.724015551694384, 1);
  sqcRZGate(q, -0.7416972110063322, 1);
  sqcRYGate(q, -0.3167393117326964, 2);
  sqcRZGate(q, 2.098747217283849, 2);
  sqcRYGate(q, 0.29302140167716306, 3);
  sqcRZGate(q, 1.1607958805844936, 3);
  sqcRYGate(q, -1.6464208617642357, 4);
  sqcRZGate(q, -2.718220045803347, 4);
  sqcRYGate(q, 3.035465789986989, 5);
  sqcRZGate(q, 3.1128160747744786, 5);
  sqcRYGate(q, 0.6269332872003074, 6);
  sqcRZGate(q, -1.7541636643038032, 6);
  sqcRYGate(q, 1.929142974547121, 7);
  sqcRZGate(q, -2.2234488922653273, 7);
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
  sqcRYGate(q, -1.3238443149650383, 0);
  sqcRZGate(q, 2.26794801153496, 0);
  sqcRYGate(q, -2.439291380224403, 1);
  sqcRZGate(q, 1.3175345030934613, 1);
  sqcRYGate(q, 1.2357175624947967, 2);
  sqcRZGate(q, 0.7070193038918597, 2);
  sqcRYGate(q, -0.6949797337067265, 3);
  sqcRZGate(q, -2.5622471240946156, 3);
  sqcRYGate(q, -2.436171454670708, 4);
  sqcRZGate(q, -2.6436558094084415, 4);
  sqcRYGate(q, 0.3401904044099336, 5);
  sqcRZGate(q, 1.04069871474056, 5);
  sqcRYGate(q, 2.885946908294443, 6);
  sqcRZGate(q, -1.1971644404094401, 6);
  sqcRYGate(q, -0.9173396182589776, 7);
  sqcRZGate(q, 0.14604228541276865, 7);
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
  sqcRYGate(q, -0.6513531291973882, 0);
  sqcRZGate(q, 1.2872170731976693, 0);
  sqcRYGate(q, -1.2429396040776028, 1);
  sqcRZGate(q, -1.8066971089029098, 1);
  sqcRYGate(q, 0.6341874613187405, 2);
  sqcRZGate(q, 0.1782975143662853, 2);
  sqcRYGate(q, -1.458925362152116, 3);
  sqcRZGate(q, 0.27961074877647896, 3);
  sqcRYGate(q, 2.858664224765195, 4);
  sqcRZGate(q, -1.8138281229454272, 4);
  sqcRYGate(q, 2.0270066534208624, 5);
  sqcRZGate(q, 1.9633098494142311, 5);
  sqcRYGate(q, 1.7089069583038932, 6);
  sqcRZGate(q, 0.04530646284672102, 6);
  sqcRYGate(q, -1.4906395994392427, 7);
  sqcRZGate(q, -1.3765444048086268, 7);
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
  sqcRYGate(q, -2.7757167583630036, 0);
  sqcRZGate(q, -2.6018780941150657, 0);
  sqcRYGate(q, -2.5450971659854478, 1);
  sqcRZGate(q, 3.094683005201112, 1);
  sqcRYGate(q, -2.2227691459902954, 2);
  sqcRZGate(q, -2.2130229509187953, 2);
  sqcRYGate(q, -1.0814530980360515, 3);
  sqcRZGate(q, -0.8150263122990041, 3);
  sqcRYGate(q, -1.0876152463131215, 4);
  sqcRZGate(q, -0.659521660232304, 4);
  sqcRYGate(q, 2.932595412846903, 5);
  sqcRZGate(q, 2.8294701842246783, 5);
  sqcRYGate(q, -2.4395354201641766, 6);
  sqcRZGate(q, -3.101621960901992, 6);
  sqcRYGate(q, 1.1617035123573949, 7);
  sqcRZGate(q, 0.05624499289389106, 7);
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
  sqcRYGate(q, 1.6948284848892192, 0);
  sqcRZGate(q, 1.8599923059634291, 0);
  sqcRYGate(q, 0.6915797793729287, 1);
  sqcRZGate(q, 0.12770604080808526, 1);
  sqcRYGate(q, 0.6553809137071669, 2);
  sqcRZGate(q, -0.16077264398574745, 2);
  sqcRYGate(q, -0.59234359308038, 3);
  sqcRZGate(q, -0.8464442414194666, 3);
  sqcRYGate(q, 0.2507296209432134, 4);
  sqcRZGate(q, -1.4487062127864974, 4);
  sqcRYGate(q, 2.622739215363435, 5);
  sqcRZGate(q, 0.48820790520399443, 5);
  sqcRYGate(q, 2.163998188299206, 6);
  sqcRZGate(q, 0.4717041280433738, 6);
  sqcRYGate(q, -1.2754336976667329, 7);
  sqcRZGate(q, -0.24520044923435963, 7);
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
  sqcRYGate(q, 2.0302379540466307, 0);
  sqcRZGate(q, 2.761061649056598, 0);
  sqcRYGate(q, -2.916325396020156, 1);
  sqcRZGate(q, -2.327886893525619, 1);
  sqcRYGate(q, 1.6288964190318913, 2);
  sqcRZGate(q, 1.7126763461951136, 2);
  sqcRYGate(q, 1.5567491612878452, 3);
  sqcRZGate(q, -1.1388249532689787, 3);
  sqcRYGate(q, 3.033886139330181, 4);
  sqcRZGate(q, -2.274564491932586, 4);
  sqcRYGate(q, 1.5288523609167841, 5);
  sqcRZGate(q, -0.8091013651938688, 5);
  sqcRYGate(q, 2.1413524506794177, 6);
  sqcRZGate(q, 2.140524963241246, 6);
  sqcRYGate(q, -0.34635518744767163, 7);
  sqcRZGate(q, 2.3591033818422553, 7);
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
  sqcRYGate(q, -0.7129197403493569, 0);
  sqcRZGate(q, -1.2025905912512238, 0);
  sqcRYGate(q, 2.8891635216123825, 1);
  sqcRZGate(q, -0.8243291151509871, 1);
  sqcRYGate(q, 2.3659548704143054, 2);
  sqcRZGate(q, -2.5597193416157094, 2);
  sqcRYGate(q, -2.4619057067518275, 3);
  sqcRZGate(q, -0.8744148842240013, 3);
  sqcRYGate(q, 1.589192716408847, 4);
  sqcRZGate(q, -0.8401718050644947, 4);
  sqcRYGate(q, -2.1387945037668485, 5);
  sqcRZGate(q, -0.2541185837703672, 5);
  sqcRYGate(q, 2.7280797528664102, 6);
  sqcRZGate(q, -0.8212738232046842, 6);
  sqcRYGate(q, 0.6113208844895188, 7);
  sqcRZGate(q, -2.06409774197479, 7);
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
  sqcRYGate(q, -2.211821228762753, 0);
  sqcRZGate(q, -0.12615727718813471, 0);
  sqcRYGate(q, 1.3660505275094479, 1);
  sqcRZGate(q, -3.1148238232090333, 1);
  sqcRYGate(q, 2.1161287891349314, 2);
  sqcRZGate(q, 0.48973837394509917, 2);
  sqcRYGate(q, -2.6592147312856316, 3);
  sqcRZGate(q, -1.3766771153732849, 3);
  sqcRYGate(q, -2.73185461432843, 4);
  sqcRZGate(q, 2.42798901552673, 4);
  sqcRYGate(q, -1.7259949649970618, 5);
  sqcRZGate(q, -1.0910441220555962, 5);
  sqcRYGate(q, -2.815609946701629, 6);
  sqcRZGate(q, -2.461258264304926, 6);
  sqcRYGate(q, -1.5844265398012594, 7);
  sqcRZGate(q, -0.8693194403825785, 7);
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
  sqcRYGate(q, -2.469521708170444, 0);
  sqcRZGate(q, 3.0636950139218357, 0);
  sqcRYGate(q, 1.8223607535070754, 1);
  sqcRZGate(q, -2.883923787061224, 1);
  sqcRYGate(q, -1.1423139952202295, 2);
  sqcRZGate(q, -1.9485228924914075, 2);
  sqcRYGate(q, 0.7423768897924549, 3);
  sqcRZGate(q, -1.8970761522565676, 3);
  sqcRYGate(q, 1.1212400999995236, 4);
  sqcRZGate(q, -2.3553109819547973, 4);
  sqcRYGate(q, 1.0772045767134388, 5);
  sqcRZGate(q, -0.9936326345494406, 5);
  sqcRYGate(q, -2.616514729165855, 6);
  sqcRZGate(q, 0.0896625361333303, 6);
  sqcRYGate(q, -1.5161088883563858, 7);
  sqcRZGate(q, 1.2253383979724999, 7);
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
  sqcRYGate(q, -1.9381587977320636, 0);
  sqcRZGate(q, -0.019860799512165798, 0);
  sqcRYGate(q, -1.3459265388404988, 1);
  sqcRZGate(q, 0.3894853482435947, 1);
  sqcRYGate(q, 2.904057580529267, 2);
  sqcRZGate(q, -1.7967063594821742, 2);
  sqcRYGate(q, 1.881905204498417, 3);
  sqcRZGate(q, -0.014464477431204208, 3);
  sqcRYGate(q, 1.3263621440329958, 4);
  sqcRZGate(q, -1.183977632129366, 4);
  sqcRYGate(q, -2.57808164347458, 5);
  sqcRZGate(q, -2.034783230359377, 5);
  sqcRYGate(q, 0.923464789023039, 6);
  sqcRZGate(q, 2.8412690105541016, 6);
  sqcRYGate(q, -0.894476206113822, 7);
  sqcRZGate(q, -3.0498756174277166, 7);
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
  sqcRYGate(q, 2.693721876471987, 0);
  sqcRZGate(q, 2.552894332345293, 0);
  sqcRYGate(q, -1.9230845715656386, 1);
  sqcRZGate(q, 0.3877654928549727, 1);
  sqcRYGate(q, -1.2663529590059146, 2);
  sqcRZGate(q, 2.0129086304479427, 2);
  sqcRYGate(q, 2.7657085234112007, 3);
  sqcRZGate(q, 2.104708437007254, 3);
  sqcRYGate(q, 1.1654607965616375, 4);
  sqcRZGate(q, 0.5436128969552846, 4);
  sqcRYGate(q, -2.539872608943539, 5);
  sqcRZGate(q, 3.018937222733472, 5);
  sqcRYGate(q, 1.9238999136553927, 6);
  sqcRZGate(q, 0.08417928752826648, 6);
  sqcRYGate(q, -0.6625907583217436, 7);
  sqcRZGate(q, -1.6318176812864504, 7);
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
  sqcRYGate(q, -2.70170495516916, 0);
  sqcRZGate(q, 2.680078497879899, 0);
  sqcRYGate(q, 2.5916200720046487, 1);
  sqcRZGate(q, 2.957126073295573, 1);
  sqcRYGate(q, 2.584093762851181, 2);
  sqcRZGate(q, -2.0513806866880575, 2);
  sqcRYGate(q, -0.19863093020158026, 3);
  sqcRZGate(q, -0.05340505622929918, 3);
  sqcRYGate(q, 1.2507618114487808, 4);
  sqcRZGate(q, 0.6736966956972708, 4);
  sqcRYGate(q, 2.506991588263472, 5);
  sqcRZGate(q, -2.751529887172019, 5);
  sqcRYGate(q, -2.556213229256743, 6);
  sqcRZGate(q, 2.4716879284245925, 6);
  sqcRYGate(q, -2.7121930447552915, 7);
  sqcRZGate(q, 0.7822929317571884, 7);
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
  sqcRYGate(q, -1.7158356513448414, 0);
  sqcRZGate(q, 2.133004485738386, 0);
  sqcRYGate(q, -1.141894804239918, 1);
  sqcRZGate(q, 1.374832418879862, 1);
  sqcRYGate(q, 0.6407412937863473, 2);
  sqcRZGate(q, -1.2026854613139322, 2);
  sqcRYGate(q, -2.0493432628391846, 3);
  sqcRZGate(q, -1.4076080640193682, 3);
  sqcRYGate(q, -1.5089194735697378, 4);
  sqcRZGate(q, 0.6622273067787529, 4);
  sqcRYGate(q, 3.1313585266829187, 5);
  sqcRZGate(q, 2.5084210349515894, 5);
  sqcRYGate(q, -1.1550230611887322, 6);
  sqcRZGate(q, -1.5543922525748144, 6);
  sqcRYGate(q, 1.3822819758388736, 7);
  sqcRZGate(q, 0.9590715391873068, 7);
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
  sqcRYGate(q, -1.266254952854576, 0);
  sqcRZGate(q, -2.8689386716211804, 0);
  sqcRYGate(q, -2.0647199170838655, 1);
  sqcRZGate(q, 1.7373588047832902, 1);
  sqcRYGate(q, 0.4791099050140157, 2);
  sqcRZGate(q, -1.261391359122298, 2);
  sqcRYGate(q, -0.42611723307964416, 3);
  sqcRZGate(q, 2.969772419937023, 3);
  sqcRYGate(q, -2.5126844350762014, 4);
  sqcRZGate(q, 0.38710302028260124, 4);
  sqcRYGate(q, -1.7033010137195466, 5);
  sqcRZGate(q, -2.6889406950572314, 5);
  sqcRYGate(q, 2.727033942543303, 6);
  sqcRZGate(q, 0.6275963685460536, 6);
  sqcRYGate(q, -2.2656552018093574, 7);
  sqcRZGate(q, 2.92728268884721, 7);
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
  sqcRYGate(q, 1.291965197105922, 0);
  sqcRZGate(q, 1.9887956973039929, 0);
  sqcRYGate(q, 2.093889057508626, 1);
  sqcRZGate(q, -2.6274754789749126, 1);
  sqcRYGate(q, 1.5203704210654485, 2);
  sqcRZGate(q, -2.912409519061005, 2);
  sqcRYGate(q, -2.1191547725059507, 3);
  sqcRZGate(q, -1.6286785536677382, 3);
  sqcRYGate(q, -0.5402917658212667, 4);
  sqcRZGate(q, 2.670407752455855, 4);
  sqcRYGate(q, 1.4251669006467997, 5);
  sqcRZGate(q, -2.7215253208816486, 5);
  sqcRYGate(q, 0.19379087850562496, 6);
  sqcRZGate(q, 0.22741567818458555, 6);
  sqcRYGate(q, 0.5188776365708108, 7);
  sqcRZGate(q, 2.0130841963570543, 7);

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
