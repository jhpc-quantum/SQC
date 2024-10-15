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

  sqcRYGate(q, -2.0978190462297857, 0);
  sqcRZGate(q, 2.8911633925431475, 0);
  sqcRYGate(q, -2.1385693076169927, 1);
  sqcRZGate(q, 1.5037343635922131, 1);
  sqcRYGate(q, 2.462383891159485, 2);
  sqcRZGate(q, -2.151379229638431, 2);
  sqcRYGate(q, -0.4908245709668276, 3);
  sqcRZGate(q, 2.12315260718226, 3);
  sqcRYGate(q, 1.4980683650467799, 4);
  sqcRZGate(q, 1.6885069651127422, 4);
  sqcRYGate(q, 2.920615835717894, 5);
  sqcRZGate(q, 1.3168829957937536, 5);
  sqcRYGate(q, -2.8146877522304035, 6);
  sqcRZGate(q, 0.7016150129399891, 6);
  sqcRYGate(q, 1.6371008564908989, 7);
  sqcRZGate(q, 2.6852035418125415, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9904815460735855, 0);
  sqcRZGate(q, -2.269092480354333, 0);
  sqcRYGate(q, -0.9856250632798486, 1);
  sqcRZGate(q, -2.9830202682993607, 1);
  sqcRYGate(q, -2.87833899523013, 2);
  sqcRZGate(q, -0.23578096158886888, 2);
  sqcRYGate(q, 1.6158556250563745, 3);
  sqcRZGate(q, 1.288391534125572, 3);
  sqcRYGate(q, 1.9640772334921883, 4);
  sqcRZGate(q, -0.13895175225655976, 4);
  sqcRYGate(q, 1.0441283918157906, 5);
  sqcRZGate(q, 0.9566585403532417, 5);
  sqcRYGate(q, -1.0215030823697484, 6);
  sqcRZGate(q, -0.747245248248988, 6);
  sqcRYGate(q, 2.385871149904498, 7);
  sqcRZGate(q, -2.4063188461252185, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.084911645936246, 0);
  sqcRZGate(q, 1.6375125922423572, 0);
  sqcRYGate(q, 1.9866692245584263, 1);
  sqcRZGate(q, -2.5018155133341096, 1);
  sqcRYGate(q, 0.354012584852116, 2);
  sqcRZGate(q, 1.6880856500520987, 2);
  sqcRYGate(q, 0.5684451270567833, 3);
  sqcRZGate(q, 0.4986926492827703, 3);
  sqcRYGate(q, 1.7217694472013019, 4);
  sqcRZGate(q, 0.007325203462658969, 4);
  sqcRYGate(q, -2.6721209060573994, 5);
  sqcRZGate(q, -1.7766139372455116, 5);
  sqcRYGate(q, 0.3195892273544969, 6);
  sqcRZGate(q, 0.8015917655754867, 6);
  sqcRYGate(q, -2.57244491755993, 7);
  sqcRZGate(q, 0.9151293926917887, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9032436949602154, 0);
  sqcRZGate(q, 0.027013096401504733, 0);
  sqcRYGate(q, -1.311514118461026, 1);
  sqcRZGate(q, 0.3811720491231565, 1);
  sqcRYGate(q, -0.8417181637075403, 2);
  sqcRZGate(q, -1.5383255491631669, 2);
  sqcRYGate(q, -1.829128243187109, 3);
  sqcRZGate(q, 0.7933770975854307, 3);
  sqcRYGate(q, 1.56592019667643, 4);
  sqcRZGate(q, 1.8040806330279955, 4);
  sqcRYGate(q, 1.2768017558642524, 5);
  sqcRZGate(q, -1.0056193499438626, 5);
  sqcRYGate(q, 1.851728142651312, 6);
  sqcRZGate(q, -0.5660323646590768, 6);
  sqcRYGate(q, 1.0712094084884374, 7);
  sqcRZGate(q, 1.4174934736358766, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9076459905888088, 0);
  sqcRZGate(q, -1.6924033968091863, 0);
  sqcRYGate(q, 1.5025079125401717, 1);
  sqcRZGate(q, 2.534941477563914, 1);
  sqcRYGate(q, 0.44769368818027644, 2);
  sqcRZGate(q, -2.5382791496295796, 2);
  sqcRYGate(q, 2.044763048871375, 3);
  sqcRZGate(q, 1.0370030940731212, 3);
  sqcRYGate(q, -1.8226721293761872, 4);
  sqcRZGate(q, 2.7512536155734333, 4);
  sqcRYGate(q, -0.9857228290813438, 5);
  sqcRZGate(q, -1.4576423774287608, 5);
  sqcRYGate(q, 0.7139319439808738, 6);
  sqcRZGate(q, 0.5765650746345709, 6);
  sqcRYGate(q, 2.206073874475716, 7);
  sqcRZGate(q, -2.3521028864059352, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.964964597565828, 0);
  sqcRZGate(q, -0.09621351785684416, 0);
  sqcRYGate(q, 2.6236437518261337, 1);
  sqcRZGate(q, -0.04936813613769804, 1);
  sqcRYGate(q, 0.18995666296889535, 2);
  sqcRZGate(q, -0.3516761137814594, 2);
  sqcRYGate(q, -0.06328961626633856, 3);
  sqcRZGate(q, 1.0090711991923378, 3);
  sqcRYGate(q, 1.6174807386728596, 4);
  sqcRZGate(q, 2.6343801192268512, 4);
  sqcRYGate(q, 0.4875626379965042, 5);
  sqcRZGate(q, -1.5357916924270432, 5);
  sqcRYGate(q, 0.16932609839681853, 6);
  sqcRZGate(q, -3.0309136136290973, 6);
  sqcRYGate(q, -0.6578527674537898, 7);
  sqcRZGate(q, -2.572147073198546, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.595643998794181, 0);
  sqcRZGate(q, 0.5332779200318793, 0);
  sqcRYGate(q, -0.5370162984370017, 1);
  sqcRZGate(q, 3.0409107793643106, 1);
  sqcRYGate(q, 2.2478570787581367, 2);
  sqcRZGate(q, -0.42759449568305996, 2);
  sqcRYGate(q, 1.5057072445233413, 3);
  sqcRZGate(q, 1.032836852420789, 3);
  sqcRYGate(q, -0.41140890334502667, 4);
  sqcRZGate(q, 2.9665145249757128, 4);
  sqcRYGate(q, 2.585881356375156, 5);
  sqcRZGate(q, -0.2625870791316319, 5);
  sqcRYGate(q, -3.070013667660002, 6);
  sqcRZGate(q, 2.702159017224086, 6);
  sqcRYGate(q, -1.747085835035958, 7);
  sqcRZGate(q, 2.688473543704539, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.43485191903034076, 0);
  sqcRZGate(q, -2.449957048140569, 0);
  sqcRYGate(q, 1.3261126404144212, 1);
  sqcRZGate(q, -2.770064385362153, 1);
  sqcRYGate(q, -0.13642667585541884, 2);
  sqcRZGate(q, 0.8938315281179215, 2);
  sqcRYGate(q, 1.7700389946315847, 3);
  sqcRZGate(q, -0.555872435658733, 3);
  sqcRYGate(q, 1.2638686011894755, 4);
  sqcRZGate(q, -1.8740705577796846, 4);
  sqcRYGate(q, -0.9874298855343318, 5);
  sqcRZGate(q, -0.8798487991022039, 5);
  sqcRYGate(q, 0.9118681807674056, 6);
  sqcRZGate(q, 2.0093882166168497, 6);
  sqcRYGate(q, -2.0078467377700306, 7);
  sqcRZGate(q, -1.769486342979219, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0897400088758493, 0);
  sqcRZGate(q, 2.714092602628026, 0);
  sqcRYGate(q, 2.3217300848966045, 1);
  sqcRZGate(q, 0.8401242869835457, 1);
  sqcRYGate(q, 1.6840143136319172, 2);
  sqcRZGate(q, 0.9804124711080237, 2);
  sqcRYGate(q, -2.550062217557141, 3);
  sqcRZGate(q, -1.0577915738527448, 3);
  sqcRYGate(q, -0.9359996244675027, 4);
  sqcRZGate(q, 0.20102741810968897, 4);
  sqcRYGate(q, -2.8614027518416982, 5);
  sqcRZGate(q, -0.5833798022524349, 5);
  sqcRYGate(q, -2.0398866242924982, 6);
  sqcRZGate(q, 1.5186491231631267, 6);
  sqcRYGate(q, -0.32536783786185536, 7);
  sqcRZGate(q, -1.052166571474718, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5028750642588733, 0);
  sqcRZGate(q, 3.0671917252532714, 0);
  sqcRYGate(q, -1.1827997568044075, 1);
  sqcRZGate(q, -2.407685603567449, 1);
  sqcRYGate(q, -1.8478440319276757, 2);
  sqcRZGate(q, 2.8352408673318323, 2);
  sqcRYGate(q, 0.5367633299398564, 3);
  sqcRZGate(q, 1.892560541825941, 3);
  sqcRYGate(q, 0.7964279682439805, 4);
  sqcRZGate(q, -2.788314885723802, 4);
  sqcRYGate(q, -2.59851843184763, 5);
  sqcRZGate(q, -1.3091347064347765, 5);
  sqcRYGate(q, -0.260925652249429, 6);
  sqcRZGate(q, 1.9096162035368196, 6);
  sqcRYGate(q, -0.27475395850116335, 7);
  sqcRZGate(q, -2.966410820645528, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4150205967240144, 0);
  sqcRZGate(q, -0.24847139261638024, 0);
  sqcRYGate(q, -2.9239287020241798, 1);
  sqcRZGate(q, -1.2858026380113785, 1);
  sqcRYGate(q, -0.10630634943143961, 2);
  sqcRZGate(q, 0.10155853260955912, 2);
  sqcRYGate(q, 0.7285271577450665, 3);
  sqcRZGate(q, 2.5659260023454817, 3);
  sqcRYGate(q, -2.8441174944681102, 4);
  sqcRZGate(q, 0.6966189224557348, 4);
  sqcRYGate(q, -1.3956853066793657, 5);
  sqcRZGate(q, 1.8313979122186042, 5);
  sqcRYGate(q, 2.3238706490618033, 6);
  sqcRZGate(q, 2.6714176165733594, 6);
  sqcRYGate(q, 0.5395298300782804, 7);
  sqcRZGate(q, -2.326867791458342, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7610126695883017, 0);
  sqcRZGate(q, -2.9859732201239906, 0);
  sqcRYGate(q, -1.3247110252124017, 1);
  sqcRZGate(q, -2.8217536458527945, 1);
  sqcRYGate(q, -1.2328765413213887, 2);
  sqcRZGate(q, -0.9610876771165859, 2);
  sqcRYGate(q, 2.6184903785420777, 3);
  sqcRZGate(q, 2.1856557394468545, 3);
  sqcRYGate(q, -1.0046064032908653, 4);
  sqcRZGate(q, -1.9619044282587437, 4);
  sqcRYGate(q, 0.9870282266406115, 5);
  sqcRZGate(q, 2.3400083507550966, 5);
  sqcRYGate(q, -1.0413606520891379, 6);
  sqcRZGate(q, 1.64295921617392, 6);
  sqcRYGate(q, -0.19752686745141457, 7);
  sqcRZGate(q, 1.6327028336451326, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8195719509048063, 0);
  sqcRZGate(q, -2.8531996355479534, 0);
  sqcRYGate(q, 0.11209248969030483, 1);
  sqcRZGate(q, 1.688626164507034, 1);
  sqcRYGate(q, -2.0473333823711526, 2);
  sqcRZGate(q, -2.0369482219456545, 2);
  sqcRYGate(q, -2.1599078179038687, 3);
  sqcRZGate(q, -0.12411983154705496, 3);
  sqcRYGate(q, 0.6064128597711962, 4);
  sqcRZGate(q, -0.12247391929119456, 4);
  sqcRYGate(q, -0.28501578051385584, 5);
  sqcRZGate(q, -2.9077125618969326, 5);
  sqcRYGate(q, 0.7069729005148115, 6);
  sqcRZGate(q, 2.9761861154846425, 6);
  sqcRYGate(q, 2.983274920329706, 7);
  sqcRZGate(q, 2.130114817305122, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.42371732175567794, 0);
  sqcRZGate(q, 1.2763318130686532, 0);
  sqcRYGate(q, -0.6866384261439605, 1);
  sqcRZGate(q, 0.0076811592270358275, 1);
  sqcRYGate(q, -1.8270405620451875, 2);
  sqcRZGate(q, -0.014380332006341413, 2);
  sqcRYGate(q, -0.4315993513914753, 3);
  sqcRZGate(q, 1.380994710723793, 3);
  sqcRYGate(q, 1.4032901338308832, 4);
  sqcRZGate(q, 0.969567566376291, 4);
  sqcRYGate(q, 2.502324536911376, 5);
  sqcRZGate(q, -1.119547885407776, 5);
  sqcRYGate(q, 1.7154863186188551, 6);
  sqcRZGate(q, -0.6768197771787161, 6);
  sqcRYGate(q, -2.8102868512638173, 7);
  sqcRZGate(q, -1.6266622286674677, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9654223655363555, 0);
  sqcRZGate(q, 1.1472074882937031, 0);
  sqcRYGate(q, -2.267330157378346, 1);
  sqcRZGate(q, 0.7767224489689233, 1);
  sqcRYGate(q, 0.9850830154991578, 2);
  sqcRZGate(q, -0.5365666303759002, 2);
  sqcRYGate(q, 2.60127801610739, 3);
  sqcRZGate(q, 2.1161176632621332, 3);
  sqcRYGate(q, 2.229620722530712, 4);
  sqcRZGate(q, 2.650572238523711, 4);
  sqcRYGate(q, -2.756119190593967, 5);
  sqcRZGate(q, -2.1565428301898204, 5);
  sqcRYGate(q, -0.02711531220015928, 6);
  sqcRZGate(q, -1.549036413953906, 6);
  sqcRYGate(q, 2.725239376144522, 7);
  sqcRZGate(q, 1.9145188618573847, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.736410327116496, 0);
  sqcRZGate(q, 1.5337652717787682, 0);
  sqcRYGate(q, 2.3870056149742793, 1);
  sqcRZGate(q, 2.804632612885569, 1);
  sqcRYGate(q, 0.7311384300488877, 2);
  sqcRZGate(q, 2.9077282946957435, 2);
  sqcRYGate(q, -1.686057032140656, 3);
  sqcRZGate(q, -1.6781038125684242, 3);
  sqcRYGate(q, 3.0863250526866572, 4);
  sqcRZGate(q, 0.05605718614410095, 4);
  sqcRYGate(q, 2.171054187685817, 5);
  sqcRZGate(q, -1.6728306781464413, 5);
  sqcRYGate(q, -1.0002650106496493, 6);
  sqcRZGate(q, -1.8467263429701344, 6);
  sqcRYGate(q, 1.216252568953382, 7);
  sqcRZGate(q, 3.018242428903522, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.959101057763335, 0);
  sqcRZGate(q, -1.300635363100603, 0);
  sqcRYGate(q, 1.7174484711496651, 1);
  sqcRZGate(q, -2.605480787493251, 1);
  sqcRYGate(q, 0.9118253436899114, 2);
  sqcRZGate(q, 0.6295627203140768, 2);
  sqcRYGate(q, -0.36917081964790627, 3);
  sqcRZGate(q, 0.295168114880009, 3);
  sqcRYGate(q, -0.14951775441421947, 4);
  sqcRZGate(q, 3.1273897808916917, 4);
  sqcRYGate(q, -0.8293255931781633, 5);
  sqcRZGate(q, -1.8359707624315218, 5);
  sqcRYGate(q, 1.0645639531568654, 6);
  sqcRZGate(q, 1.504771592797651, 6);
  sqcRYGate(q, -0.9456827278703072, 7);
  sqcRZGate(q, -0.057730843628289286, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.13806204392756352, 0);
  sqcRZGate(q, 1.6119970685416556, 0);
  sqcRYGate(q, -1.6567274062825519, 1);
  sqcRZGate(q, -3.064870179238276, 1);
  sqcRYGate(q, 2.690278058870412, 2);
  sqcRZGate(q, -0.6447961015451709, 2);
  sqcRYGate(q, -2.0772849581265076, 3);
  sqcRZGate(q, 1.5148647737526595, 3);
  sqcRYGate(q, -0.4934677265241838, 4);
  sqcRZGate(q, -2.0557202793303873, 4);
  sqcRYGate(q, 2.2692807857579895, 5);
  sqcRZGate(q, 1.0659635110024894, 5);
  sqcRYGate(q, -1.6816381362099664, 6);
  sqcRZGate(q, -0.9184229982079044, 6);
  sqcRYGate(q, 2.575141257497483, 7);
  sqcRZGate(q, 1.0686210676579817, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8897564331006944, 0);
  sqcRZGate(q, 1.3176571904881076, 0);
  sqcRYGate(q, 2.7888060458699973, 1);
  sqcRZGate(q, -2.3610405133502246, 1);
  sqcRYGate(q, -2.3466375791929384, 2);
  sqcRZGate(q, 0.9522880870441033, 2);
  sqcRYGate(q, -0.5589846770050917, 3);
  sqcRZGate(q, -1.5231413501903122, 3);
  sqcRYGate(q, -0.7522675796422087, 4);
  sqcRZGate(q, -1.5595129467369278, 4);
  sqcRYGate(q, -1.0222223567720883, 5);
  sqcRZGate(q, 0.21693438638662885, 5);
  sqcRYGate(q, 2.7624068151259586, 6);
  sqcRZGate(q, -1.5154307765932522, 6);
  sqcRYGate(q, -1.2607099250843525, 7);
  sqcRZGate(q, 1.4666615946656378, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7043785857518476, 0);
  sqcRZGate(q, -2.667849175682928, 0);
  sqcRYGate(q, 1.9720996250189282, 1);
  sqcRZGate(q, 1.132018893873955, 1);
  sqcRYGate(q, 0.6609845766283531, 2);
  sqcRZGate(q, 1.9213037365503791, 2);
  sqcRYGate(q, 2.4757804681749978, 3);
  sqcRZGate(q, -2.6997659095376862, 3);
  sqcRYGate(q, -1.5611682946321013, 4);
  sqcRZGate(q, -1.3873311985796137, 4);
  sqcRYGate(q, -1.3358437132290897, 5);
  sqcRZGate(q, 2.6778263366489417, 5);
  sqcRYGate(q, -0.30712404175645963, 6);
  sqcRZGate(q, 1.6591676383204952, 6);
  sqcRYGate(q, 0.2176690365589451, 7);
  sqcRZGate(q, -2.6315512199622884, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.45296887110790873, 0);
  sqcRZGate(q, 1.906834052984526, 0);
  sqcRYGate(q, -0.8326853311515655, 1);
  sqcRZGate(q, 2.8579042580921317, 1);
  sqcRYGate(q, 1.0877769640430321, 2);
  sqcRZGate(q, 0.879688399466136, 2);
  sqcRYGate(q, 1.6800301429327096, 3);
  sqcRZGate(q, -2.455110544600593, 3);
  sqcRYGate(q, -0.41123270242563625, 4);
  sqcRZGate(q, -0.4465314999238379, 4);
  sqcRYGate(q, -2.7848423306040884, 5);
  sqcRZGate(q, -1.2540848658723496, 5);
  sqcRYGate(q, 0.7052949384794727, 6);
  sqcRZGate(q, 2.3216849792004566, 6);
  sqcRYGate(q, 1.4406339768284697, 7);
  sqcRZGate(q, 2.890676691898639, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.898292622071838, 0);
  sqcRZGate(q, 2.049395936518288, 0);
  sqcRYGate(q, 0.2275648934768385, 1);
  sqcRZGate(q, -1.9018471881376342, 1);
  sqcRYGate(q, -2.4171753520367654, 2);
  sqcRZGate(q, -0.8620034853395421, 2);
  sqcRYGate(q, -1.0403081079621996, 3);
  sqcRZGate(q, -2.139302077141457, 3);
  sqcRYGate(q, 0.06433383319895469, 4);
  sqcRZGate(q, 1.341825676051835, 4);
  sqcRYGate(q, 1.7070029160557125, 5);
  sqcRZGate(q, -2.594651799114079, 5);
  sqcRYGate(q, 1.7408156532241446, 6);
  sqcRZGate(q, 1.4350230397609112, 6);
  sqcRYGate(q, -2.2796590182637946, 7);
  sqcRZGate(q, 2.130838985048111, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.082425715273157, 0);
  sqcRZGate(q, -0.5552197352435799, 0);
  sqcRYGate(q, -0.6349185020172783, 1);
  sqcRZGate(q, -2.399892020672596, 1);
  sqcRYGate(q, 1.6409620770206734, 2);
  sqcRZGate(q, 0.5541226237526821, 2);
  sqcRYGate(q, 0.5239630444308471, 3);
  sqcRZGate(q, -0.6713067860764035, 3);
  sqcRYGate(q, 0.4640369698522111, 4);
  sqcRZGate(q, 0.6876686957725867, 4);
  sqcRYGate(q, -2.5505068756216787, 5);
  sqcRZGate(q, -2.018669619022182, 5);
  sqcRYGate(q, 2.935541428644518, 6);
  sqcRZGate(q, -3.076210592069161, 6);
  sqcRYGate(q, -0.5663642114864392, 7);
  sqcRZGate(q, 1.1067263851334586, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.479320506869253, 0);
  sqcRZGate(q, 1.5925625878178995, 0);
  sqcRYGate(q, 2.2869663533810525, 1);
  sqcRZGate(q, 1.6213045601033158, 1);
  sqcRYGate(q, -2.242950083624719, 2);
  sqcRZGate(q, -0.6836919712091162, 2);
  sqcRYGate(q, 0.5631627585331603, 3);
  sqcRZGate(q, -2.4844370957000765, 3);
  sqcRYGate(q, 0.5182285388250272, 4);
  sqcRZGate(q, -0.9852431473179109, 4);
  sqcRYGate(q, -0.6558873862746523, 5);
  sqcRZGate(q, -0.527771866447203, 5);
  sqcRYGate(q, -2.343087205210431, 6);
  sqcRZGate(q, -2.6674582715110544, 6);
  sqcRYGate(q, 2.722768255799105, 7);
  sqcRZGate(q, -1.9410178807327343, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8773539974921913, 0);
  sqcRZGate(q, -2.410247038065215, 0);
  sqcRYGate(q, -0.9087105411526416, 1);
  sqcRZGate(q, 0.5477723410388728, 1);
  sqcRYGate(q, -2.982383349321706, 2);
  sqcRZGate(q, 0.9718875149735338, 2);
  sqcRYGate(q, 0.5465833380838028, 3);
  sqcRZGate(q, -0.5871142989120859, 3);
  sqcRYGate(q, 1.3543618355035998, 4);
  sqcRZGate(q, -2.4291034300053154, 4);
  sqcRYGate(q, 0.507753449763033, 5);
  sqcRZGate(q, 1.1219914958515176, 5);
  sqcRYGate(q, 0.6251989918135132, 6);
  sqcRZGate(q, 0.8346725831905274, 6);
  sqcRYGate(q, -2.032354816299586, 7);
  sqcRZGate(q, 2.5776856850403984, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6601571977294745, 0);
  sqcRZGate(q, 0.9875930998847781, 0);
  sqcRYGate(q, -1.7011667312180274, 1);
  sqcRZGate(q, -2.5229642707003026, 1);
  sqcRYGate(q, 0.13024292774877488, 2);
  sqcRZGate(q, 1.3916904163485369, 2);
  sqcRYGate(q, 1.7534946643211091, 3);
  sqcRZGate(q, 0.6854508516301945, 3);
  sqcRYGate(q, 0.32907342002108186, 4);
  sqcRZGate(q, 0.35558985854092173, 4);
  sqcRYGate(q, -0.708116389196956, 5);
  sqcRZGate(q, 0.5545760988199445, 5);
  sqcRYGate(q, -1.8914382081101495, 6);
  sqcRZGate(q, 1.8597908863803911, 6);
  sqcRYGate(q, 0.3888544175733539, 7);
  sqcRZGate(q, -1.8648014968533726, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6923974163800897, 0);
  sqcRZGate(q, 2.8527569442354306, 0);
  sqcRYGate(q, 0.906977024739181, 1);
  sqcRZGate(q, 1.5479151233514967, 1);
  sqcRYGate(q, 0.543504532633726, 2);
  sqcRZGate(q, 2.3436369205500305, 2);
  sqcRYGate(q, -0.5275423019809008, 3);
  sqcRZGate(q, -1.6857879417390036, 3);
  sqcRYGate(q, 0.3127071344011192, 4);
  sqcRZGate(q, 1.5270848698795259, 4);
  sqcRYGate(q, 1.622065992565295, 5);
  sqcRZGate(q, -0.3077046141521975, 5);
  sqcRYGate(q, -2.5936514144908815, 6);
  sqcRZGate(q, 2.4794361424900377, 6);
  sqcRYGate(q, -1.6738847383510072, 7);
  sqcRZGate(q, -1.4317606868771684, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0989453011076948, 0);
  sqcRZGate(q, -1.5016401552156158, 0);
  sqcRYGate(q, 1.837681689844997, 1);
  sqcRZGate(q, -0.6444466511906689, 1);
  sqcRYGate(q, 1.6017236419371832, 2);
  sqcRZGate(q, -2.3919168144993272, 2);
  sqcRYGate(q, 2.0690163923304743, 3);
  sqcRZGate(q, -1.7628652262969549, 3);
  sqcRYGate(q, -2.028090620282347, 4);
  sqcRZGate(q, -0.417977062150424, 4);
  sqcRYGate(q, 2.5757404196482097, 5);
  sqcRZGate(q, 0.052709362243241596, 5);
  sqcRYGate(q, 1.9536443773319219, 6);
  sqcRZGate(q, -0.2494591254806799, 6);
  sqcRYGate(q, -2.1256451926544746, 7);
  sqcRZGate(q, 0.3416882197783702, 7);

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
