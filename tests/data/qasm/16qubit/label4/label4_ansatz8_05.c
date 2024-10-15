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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.211159703577667, 0);
  sqcRYGate(q, -1.0081231510526258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.623994352205084, 0);
  sqcRYGate(q, -3.0016922379838324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2769502227694928, 2);
  sqcRYGate(q, -1.2630368228144064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0044287545374386, 2);
  sqcRYGate(q, 1.1645599712130468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.704335740132191, 4);
  sqcRYGate(q, 0.5895643982568329, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1134840133237085, 4);
  sqcRYGate(q, -0.18394889011425875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.132626423736499, 6);
  sqcRYGate(q, -0.8762609332687675, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.532974134023142, 6);
  sqcRYGate(q, -1.4271007806589144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.271422523401714, 8);
  sqcRYGate(q, -0.7743913638481762, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5674125188822128, 8);
  sqcRYGate(q, 2.11224455901855, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2944714103903774, 10);
  sqcRYGate(q, 2.5180186131378974, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2805619210902366, 10);
  sqcRYGate(q, -1.2961153133514154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7001282590812004, 12);
  sqcRYGate(q, 2.5770190059168887, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5001570303381015, 12);
  sqcRYGate(q, -2.2938441371663276, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7601854574346392, 14);
  sqcRYGate(q, 1.5233613827175594, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3826430871396393, 14);
  sqcRYGate(q, -2.033307885554587, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.2328787404978803, 0);
  sqcRYGate(q, -0.5164389046481695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.040875486850353, 0);
  sqcRYGate(q, 1.5127671707045653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3772491735920815, 2);
  sqcRYGate(q, 0.287016491265522, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5623609399218836, 2);
  sqcRYGate(q, -2.0169617514820786, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2987776398853574, 4);
  sqcRYGate(q, -1.5615886695204182, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.054016497932099, 4);
  sqcRYGate(q, 1.2151289956548643, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7912935629825255, 6);
  sqcRYGate(q, -1.3793808721659966, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.713857571672583, 6);
  sqcRYGate(q, -0.41329595492486143, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.045653507995433884, 8);
  sqcRYGate(q, -2.978170996496568, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8910442133550518, 8);
  sqcRYGate(q, -1.4894271713740164, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.89115627909612, 10);
  sqcRYGate(q, -0.5711319632099227, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5792733635786445, 10);
  sqcRYGate(q, 1.5758804790257792, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.141207012647431, 12);
  sqcRYGate(q, -1.724965782644793, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.17702416385917097, 12);
  sqcRYGate(q, 0.012882722811914138, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.4366440711077542, 1);
  sqcRYGate(q, 1.1002901498339526, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7640052934281873, 1);
  sqcRYGate(q, 0.7255350319173968, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5112149909319426, 3);
  sqcRYGate(q, 2.5869783792944516, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.178207453739483, 3);
  sqcRYGate(q, 3.0705832428378503, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7134231150208309, 5);
  sqcRYGate(q, -3.016556192709528, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.76883536475629, 5);
  sqcRYGate(q, 0.3195809022247573, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4606835689048054, 7);
  sqcRYGate(q, 0.05099481276608664, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.023590299644787326, 7);
  sqcRYGate(q, 3.1207275131817886, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.8708882759345471, 9);
  sqcRYGate(q, -1.2039037984303862, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5405788934383027, 9);
  sqcRYGate(q, 0.03756041655283565, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.559878633677159, 11);
  sqcRYGate(q, 2.973539322195924, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.0034192934514241102, 11);
  sqcRYGate(q, -1.0185366096024815, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.6793145244910413, 13);
  sqcRYGate(q, -2.4710516996180907, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.01964422974626447, 13);
  sqcRYGate(q, -0.029961587964861813, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.5473280880789249, 0);
  sqcRYGate(q, 0.16111110106694504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38190131805995, 0);
  sqcRYGate(q, -0.11691071847379586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8165669057106717, 2);
  sqcRYGate(q, -1.1976109133389157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10122439765095348, 2);
  sqcRYGate(q, 2.9670952360380953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3183696995409373, 4);
  sqcRYGate(q, -2.053948688537637, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7262265381528303, 4);
  sqcRYGate(q, -1.6680307272833463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.012943132899941645, 6);
  sqcRYGate(q, -2.3243265273131537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1055486592801844, 6);
  sqcRYGate(q, 0.03680471353139781, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4954675503469908, 8);
  sqcRYGate(q, 2.0693545613887423, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3151418603122906, 8);
  sqcRYGate(q, -1.4275427858218992, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1490491750910735, 10);
  sqcRYGate(q, -1.8919487980067917, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7444799320318998, 10);
  sqcRYGate(q, -1.4677609771634792, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5378891971241153, 12);
  sqcRYGate(q, 1.346056605830185, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.124419869576893, 12);
  sqcRYGate(q, 1.24676314873824, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.14737078245685797, 14);
  sqcRYGate(q, -1.008989262708518, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.30505843329357735, 14);
  sqcRYGate(q, -0.02270847816886969, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0288763364926425, 0);
  sqcRYGate(q, -0.19440089754760462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.21499870246934893, 0);
  sqcRYGate(q, 2.78752363464877, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28885078107671097, 2);
  sqcRYGate(q, 0.5739378346281718, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5656756458180534, 2);
  sqcRYGate(q, -0.844518694177913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8677113123180522, 4);
  sqcRYGate(q, -0.06490758291431885, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9343359424050073, 4);
  sqcRYGate(q, 0.011501794777167548, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7214051451788714, 6);
  sqcRYGate(q, -2.733207943638064, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1370586501015407, 6);
  sqcRYGate(q, -2.94110171164937, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.412922122877593, 8);
  sqcRYGate(q, -0.28286815184926584, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.6021743622052893, 8);
  sqcRYGate(q, -1.5572037727853045, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.28967522635463183, 10);
  sqcRYGate(q, 0.014579056144785104, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5809231807744828, 10);
  sqcRYGate(q, 1.60134287745176, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.9851856543156643, 12);
  sqcRYGate(q, -2.504097458502169, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.122945561519016, 12);
  sqcRYGate(q, -0.3705709796149958, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.454483481898475, 1);
  sqcRYGate(q, -2.787253497789146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1895115767791973, 1);
  sqcRYGate(q, 0.6334293638374965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.016959505026643, 3);
  sqcRYGate(q, 1.7906002596197619, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.125821085291781, 3);
  sqcRYGate(q, 0.2122047172047823, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1966026004667096, 5);
  sqcRYGate(q, 1.5398132709934655, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.462127937674912, 5);
  sqcRYGate(q, 1.793734436373784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7515436243862696, 7);
  sqcRYGate(q, 1.6558787963893598, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.136397889800849, 7);
  sqcRYGate(q, -3.1232887048317104, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.2135781695841361, 9);
  sqcRYGate(q, -1.5279994868091495, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.7187845060051653, 9);
  sqcRYGate(q, -0.0026661738626835105, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1410681974278565, 11);
  sqcRYGate(q, -1.8156075228910247, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.5645849110373167, 11);
  sqcRYGate(q, 1.5705556999059693, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.34787026036886637, 13);
  sqcRYGate(q, 1.0107702681453963, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.2983682882400156, 13);
  sqcRYGate(q, 0.6654428511357562, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.845921144601888, 0);
  sqcRYGate(q, -0.6015827386361101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1003822384268713, 0);
  sqcRYGate(q, -1.3370503592087175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.085597742960407, 2);
  sqcRYGate(q, 2.256844940376258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2188857230301244, 2);
  sqcRYGate(q, -2.5480418507051237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1950352506366704, 4);
  sqcRYGate(q, -2.494763230103028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8081562573090784, 4);
  sqcRYGate(q, -3.1371846457629813, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.678673598504499, 6);
  sqcRYGate(q, -1.8620644437929306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5002577425418164, 6);
  sqcRYGate(q, 1.8406693262640053, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.006999120523912, 8);
  sqcRYGate(q, -0.7195338496037457, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0998500627485788, 8);
  sqcRYGate(q, 0.049859511397285824, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5454350515034162, 10);
  sqcRYGate(q, 2.171889892400028, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5672826909784836, 10);
  sqcRYGate(q, -1.8468889659888719, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.833353842052412, 12);
  sqcRYGate(q, 0.14208741502627964, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5540582197430937, 12);
  sqcRYGate(q, 0.39177286299775993, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5829569389019975, 14);
  sqcRYGate(q, -1.547309933107921, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5042123004715093, 14);
  sqcRYGate(q, 1.229340255770527, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.6531889348858697, 0);
  sqcRYGate(q, 1.8293079139832953, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.23932731512665076, 0);
  sqcRYGate(q, -0.0663466080387849, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8015705030800832, 2);
  sqcRYGate(q, 2.289911935549539, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0767145697692033, 2);
  sqcRYGate(q, 1.5499467261958737, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9014653427741304, 4);
  sqcRYGate(q, 2.0457668328778436, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.016113359891352, 4);
  sqcRYGate(q, -8.098700088954303e-05, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.524234995456238, 6);
  sqcRYGate(q, 1.52505897228176, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1167539275227107, 6);
  sqcRYGate(q, -0.008392693525783201, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9462422833053432, 8);
  sqcRYGate(q, -1.2446437339165135, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.015329474143464982, 8);
  sqcRYGate(q, 1.7533941995618625, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.059354871582744, 10);
  sqcRYGate(q, -1.9126216554395272, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1407842247471875, 10);
  sqcRYGate(q, 0.0059584468880458435, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.4271512667691537, 12);
  sqcRYGate(q, -1.335881791731346, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.6523011684242346, 12);
  sqcRYGate(q, 2.908997131874167, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.3483126877407146, 1);
  sqcRYGate(q, 1.9442371454425063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4425197217590187, 1);
  sqcRYGate(q, -1.8235879270876811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.777975938916434, 3);
  sqcRYGate(q, -1.2672614997888332, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.056625442010811, 3);
  sqcRYGate(q, 0.5904059216169063, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6194346768699166, 5);
  sqcRYGate(q, -1.9588143325991483, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1091966171730574, 5);
  sqcRYGate(q, 0.06632497284715111, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.71785668468813, 7);
  sqcRYGate(q, -1.1267887483397485, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.108815517212203, 7);
  sqcRYGate(q, 3.1186700179273195, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.2685853241832792, 9);
  sqcRYGate(q, -1.378218035674741, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.01858623919945312, 9);
  sqcRYGate(q, 3.123566844623943, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.001476844889603, 11);
  sqcRYGate(q, -2.5212757604721836, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.0054126524186930425, 11);
  sqcRYGate(q, 0.003571725669582193, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.4212851667908484, 13);
  sqcRYGate(q, 0.5285056536358859, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6796613201402648, 13);
  sqcRYGate(q, 1.5145402901319576, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.6251093177790823, 0);
  sqcRYGate(q, 0.38790890099238207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6934866716970636, 0);
  sqcRYGate(q, 1.5594715036531512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17411374359136111, 2);
  sqcRYGate(q, -1.3095018459540908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5622138734814666, 2);
  sqcRYGate(q, -2.200673326878067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.993344442551456, 4);
  sqcRYGate(q, 2.484513823905016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3773195079928542, 4);
  sqcRYGate(q, 2.9401231684275415, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1785737127521934, 6);
  sqcRYGate(q, -0.6845954776226142, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3757605575158074, 6);
  sqcRYGate(q, -1.3886674802737002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5600279082250088, 8);
  sqcRYGate(q, 0.717531261845056, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5655283793058787, 8);
  sqcRYGate(q, 1.577682843581525, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3060093450769217, 10);
  sqcRYGate(q, 1.2446596554704001, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4323763138505154, 10);
  sqcRYGate(q, -1.9875012894762238, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2209201176534419, 12);
  sqcRYGate(q, 2.020026233203544, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7451343143677827, 12);
  sqcRYGate(q, -1.327334642020774, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7526483717904638, 14);
  sqcRYGate(q, 0.5611563575441357, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.11274232336430323, 14);
  sqcRYGate(q, 1.8104962392434194, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0734889459214942, 0);
  sqcRYGate(q, 2.776540506014831, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.555415829892438, 0);
  sqcRYGate(q, -0.265300524433262, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.26121925193926276, 2);
  sqcRYGate(q, -1.3257943396540615, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.138783768325043, 2);
  sqcRYGate(q, -3.1112779432885134, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.121238153015096, 4);
  sqcRYGate(q, 0.41502602647764053, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.14041799380449385, 4);
  sqcRYGate(q, 3.134396707384296, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0091894677503084, 6);
  sqcRYGate(q, 1.3624216445227955, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.2552680786546411, 6);
  sqcRYGate(q, -0.4379857374332694, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.21648753473061522, 8);
  sqcRYGate(q, 2.237165647305667, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.9085039570099251, 8);
  sqcRYGate(q, 0.9653393988263401, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.3870355675328216, 10);
  sqcRYGate(q, 0.7259022783352256, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.13913164526894, 10);
  sqcRYGate(q, -0.0031330470812740425, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.3700500136728895, 12);
  sqcRYGate(q, -2.1570732319656756, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.31079572100114167, 12);
  sqcRYGate(q, 3.008596082977288, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.09643168048815554, 1);
  sqcRYGate(q, -1.3359049344015332, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6408614548381686, 1);
  sqcRYGate(q, -2.6311856793688726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.11935912998012788, 3);
  sqcRYGate(q, -2.51264419214414, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.15508983986697, 3);
  sqcRYGate(q, 2.714483659577116, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6765647858711579, 5);
  sqcRYGate(q, -0.8222440066045544, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8334968995273093, 5);
  sqcRYGate(q, 0.8926373910097447, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.568496527376272, 7);
  sqcRYGate(q, 1.5443784066578385, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1006853468197133, 7);
  sqcRYGate(q, 0.005053743404204869, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.4060114624747777, 9);
  sqcRYGate(q, -3.00373276125609, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.2761276924414791, 9);
  sqcRYGate(q, -0.6283023613657441, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.5498294747997763, 11);
  sqcRYGate(q, 2.763974354306238, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.7351037305472556, 11);
  sqcRYGate(q, 3.0590091028606894, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.027755022204708102, 13);
  sqcRYGate(q, -0.8593238479703825, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.01769631266078253, 13);
  sqcRYGate(q, 1.544079780081332, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.7377164313675264, 0);
  sqcRYGate(q, -0.4439596657732796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5967804768164353, 0);
  sqcRYGate(q, -0.7697098133287356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5116870449113905, 2);
  sqcRYGate(q, 0.09070827826300451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.025077870071062228, 2);
  sqcRYGate(q, 1.5984321050020078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0571272192040246, 4);
  sqcRYGate(q, -2.39042151233405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.36347936334682274, 4);
  sqcRYGate(q, 0.5904393262184593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0494724520326923, 6);
  sqcRYGate(q, -3.088615425791186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1231197539762623, 6);
  sqcRYGate(q, 0.20697293803601102, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8153739796296664, 8);
  sqcRYGate(q, -1.974486545952244, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07047364054162562, 8);
  sqcRYGate(q, 3.127751156963291, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0445773804550456, 10);
  sqcRYGate(q, -1.2541182907308162, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5689757347550009, 10);
  sqcRYGate(q, -1.5694066170672316, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6578605220267226, 12);
  sqcRYGate(q, 0.24824844612387234, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.92765770955435, 12);
  sqcRYGate(q, 1.7073400604856959, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0636324960869348, 14);
  sqcRYGate(q, -0.6687668350798909, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.123470331661754, 14);
  sqcRYGate(q, -1.1132321789972204, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.3024965516257109, 0);
  sqcRYGate(q, 1.9546774124819424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3845560514304598, 0);
  sqcRYGate(q, -2.0325045022759785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.27572412613061476, 2);
  sqcRYGate(q, 1.428421605616442, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9835507612280536, 2);
  sqcRYGate(q, 0.7423610950418373, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6653999277765674, 4);
  sqcRYGate(q, 2.429311765571766, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0013810026259820536, 4);
  sqcRYGate(q, 0.005622621428473704, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2905442892199952, 6);
  sqcRYGate(q, 0.7971015660386476, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.4867301055438782, 6);
  sqcRYGate(q, -2.9943269354056983, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.6956168516265513, 8);
  sqcRYGate(q, 0.9739428634828498, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1354585941847954, 8);
  sqcRYGate(q, 0.018647663104593055, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.5165286078633624, 10);
  sqcRYGate(q, 2.054465142471772, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.549195450569927, 10);
  sqcRYGate(q, -3.14106452061048, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5759411737181093, 12);
  sqcRYGate(q, -0.11298653018355152, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.1395959984845363, 12);
  sqcRYGate(q, 0.16533141102953497, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.083005792409538, 1);
  sqcRYGate(q, -0.053786996336234516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6240114747441012, 1);
  sqcRYGate(q, -2.172851705415331, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9963848855900812, 3);
  sqcRYGate(q, -1.908604528020645, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2805007749484627, 3);
  sqcRYGate(q, -2.8830119247662003, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1857098952590004, 5);
  sqcRYGate(q, -1.9954241583842975, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0121838960674276, 5);
  sqcRYGate(q, 1.2554712340648766, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7063064021613626, 7);
  sqcRYGate(q, -1.1624494957707443, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1367731825087493, 7);
  sqcRYGate(q, 3.139989700620434, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.987963214267726, 9);
  sqcRYGate(q, 1.5737912322019396, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.574967643430024, 9);
  sqcRYGate(q, -3.134523713540018, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.381870045750212, 11);
  sqcRYGate(q, -0.8432110635023562, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.22403024169174002, 11);
  sqcRYGate(q, 3.140477311750487, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.947867414009732, 13);
  sqcRYGate(q, -2.2106887812624922, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5366239923085014, 13);
  sqcRYGate(q, 0.24428844469819122, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.6740263371537085, 0);
  sqcRYGate(q, -0.9385161797351484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5192099442137899, 0);
  sqcRYGate(q, -0.9161055997878722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5481350563228142, 2);
  sqcRYGate(q, -0.3377967811811198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.482638752727623, 2);
  sqcRYGate(q, -2.006632112598149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.041410313288762, 4);
  sqcRYGate(q, 0.9118844343034376, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9660749757826999, 4);
  sqcRYGate(q, -2.5994192709411097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2920956236599914, 6);
  sqcRYGate(q, -0.7161853291151941, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.14036016136273, 6);
  sqcRYGate(q, 2.8580638691677493, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3959878826847576, 8);
  sqcRYGate(q, -2.398505918404544, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.905595596516509, 8);
  sqcRYGate(q, -0.11624522611825484, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.36003876313521593, 10);
  sqcRYGate(q, 0.24012303532868629, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5383726692915836, 10);
  sqcRYGate(q, -2.7249297076014973, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0013908950085452787, 12);
  sqcRYGate(q, -1.9974120074144062, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.007155082042122452, 12);
  sqcRYGate(q, -1.5672182366854182, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9266650255734765, 14);
  sqcRYGate(q, 0.45986146853271226, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.075437117500773, 14);
  sqcRYGate(q, -0.86516011261459, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6066906889707042, 0);
  sqcRYGate(q, -2.6909588640942212, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6606453744858864, 0);
  sqcRYGate(q, -0.7141361364962915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4772658394643865, 2);
  sqcRYGate(q, -2.6256103583442023, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9632834924502482, 2);
  sqcRYGate(q, 2.858643687415521, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.235016282617376, 4);
  sqcRYGate(q, 2.0559021798351695, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.140731937294767, 4);
  sqcRYGate(q, 3.138940387928734, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.07242420088705703, 6);
  sqcRYGate(q, -1.6640341903946627, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.11551468250689169, 6);
  sqcRYGate(q, 3.1229303498533554, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.302296020709489, 8);
  sqcRYGate(q, 1.8563436162104299, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.141460143820082, 8);
  sqcRYGate(q, 3.1125326503786894, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.793516210745365, 10);
  sqcRYGate(q, -1.5697867357311344, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5953864662486221, 10);
  sqcRYGate(q, 0.001634760366643852, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.319963070733389, 12);
  sqcRYGate(q, 3.010588587910754, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.9062382781137828, 12);
  sqcRYGate(q, -0.01441602776632897, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.0393778884005687, 1);
  sqcRYGate(q, 2.4626612582121976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9077591281247084, 1);
  sqcRYGate(q, -2.927302503345206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8187007113990403, 3);
  sqcRYGate(q, -0.2300724756987572, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.921550575484933, 3);
  sqcRYGate(q, -3.0525217211942026, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4765851217420105, 5);
  sqcRYGate(q, -2.803549301133924, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.02904992059466361, 5);
  sqcRYGate(q, 1.5807873517483593, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.892938228929316, 7);
  sqcRYGate(q, -3.0803405065314653, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.114710415583128, 7);
  sqcRYGate(q, 0.003439713584318938, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.187280604203242, 9);
  sqcRYGate(q, -1.6157642819366655, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5737033169746182, 9);
  sqcRYGate(q, -3.1195821856430084, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.7040986982153756, 11);
  sqcRYGate(q, -2.218570419056581, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.035510980612902365, 11);
  sqcRYGate(q, 0.00034829882502922477, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.6163041959625963, 13);
  sqcRYGate(q, -0.007145870064550586, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.0952822430492604, 13);
  sqcRYGate(q, 0.23367016348383374, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.497152156743768, 0);
  sqcRYGate(q, 0.9983374272784623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.034733857016433, 0);
  sqcRYGate(q, -2.462371221091832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.835242767326581, 2);
  sqcRYGate(q, 0.3204400172663063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8984129488479091, 2);
  sqcRYGate(q, 2.3656326518251336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7378349779133564, 4);
  sqcRYGate(q, 0.6760947221523748, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.302163802235203, 4);
  sqcRYGate(q, 2.3532923088235282, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1551748532981456, 6);
  sqcRYGate(q, 2.1106952771722494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1359433606638705, 6);
  sqcRYGate(q, 1.8774270681043017, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6593704566800928, 8);
  sqcRYGate(q, 2.4133016301457766, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.11961257828952315, 8);
  sqcRYGate(q, -3.0121689897648136, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.20707151870566776, 10);
  sqcRYGate(q, 0.08920311390025581, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.09779398044956977, 10);
  sqcRYGate(q, 0.15493473125875745, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2181282921690608, 12);
  sqcRYGate(q, 2.1848375328276974, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.005755074714633993, 12);
  sqcRYGate(q, -0.06502093677847844, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7137863008186439, 14);
  sqcRYGate(q, -0.4906420185116307, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4947365009602114, 14);
  sqcRYGate(q, 0.9114823903549798, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4166358946839815, 0);
  sqcRYGate(q, -2.5793332651467504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5699166038470866, 0);
  sqcRYGate(q, -2.668759378454448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.101467033210299, 2);
  sqcRYGate(q, -0.2863587243860823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1368725645243494, 2);
  sqcRYGate(q, -0.30660785040233113, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.26083006887086224, 4);
  sqcRYGate(q, -2.8663592288607953, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.00018627140204419137, 4);
  sqcRYGate(q, -0.002023547404417732, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9287174933144935, 6);
  sqcRYGate(q, 2.427867750932098, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0846041200495367, 6);
  sqcRYGate(q, 3.12580051968855, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5119474905678278, 8);
  sqcRYGate(q, 2.9884454505595968, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.08660949280651915, 8);
  sqcRYGate(q, -0.031807009807797944, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8066483823294506, 10);
  sqcRYGate(q, -0.5498103310409903, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.0016941210722958289, 10);
  sqcRYGate(q, 3.1348755692170367, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.1674305322558247, 12);
  sqcRYGate(q, 2.5022691254263583, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.0355790990289622, 12);
  sqcRYGate(q, 1.59002221880959, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.7116623859322813, 1);
  sqcRYGate(q, -0.6650542834270956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3619146755790887, 1);
  sqcRYGate(q, -3.0875479949142006, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1217267663430972, 3);
  sqcRYGate(q, 2.386680844660079, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.10438833901213673, 3);
  sqcRYGate(q, 3.06691807303084, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.0465186855439352, 5);
  sqcRYGate(q, 0.9766731901195067, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.579299296492679, 5);
  sqcRYGate(q, 0.7699042528113202, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.580977134751116, 7);
  sqcRYGate(q, -1.5189592211172562, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.750211879300097, 7);
  sqcRYGate(q, -0.3920008991720669, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.0503212332220704, 9);
  sqcRYGate(q, 0.5960049753832761, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.139164037274581, 9);
  sqcRYGate(q, -3.141210232699956, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.769472381622886, 11);
  sqcRYGate(q, -0.5227847088462925, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.04112339721118128, 11);
  sqcRYGate(q, 3.140814678967696, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.1201520124548, 13);
  sqcRYGate(q, 2.5720719150799836, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.929107953629164, 13);
  sqcRYGate(q, 1.678740035300277, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.8284931279722405, 0);
  sqcRYGate(q, 3.126415047555916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6392061616994236, 0);
  sqcRYGate(q, -0.1536629157464181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5449887735731522, 2);
  sqcRYGate(q, 2.4709763209266105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7731826817455607, 2);
  sqcRYGate(q, 2.493746845322613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2897268702760405, 4);
  sqcRYGate(q, -0.9807155439930871, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0005023344775201549, 4);
  sqcRYGate(q, 0.8611144058043045, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6520476483789484, 6);
  sqcRYGate(q, -1.5723170867854896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.571062789577665, 6);
  sqcRYGate(q, 1.5746042592695246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1058836721350804, 8);
  sqcRYGate(q, -3.0493982027012914, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5736917501438086, 8);
  sqcRYGate(q, -1.5699931687712256, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.23149007673679206, 10);
  sqcRYGate(q, 2.6530662367193494, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.016809280813952, 10);
  sqcRYGate(q, 1.5920987775953284, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.47773998806541496, 12);
  sqcRYGate(q, 1.0878349386804649, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.05004794949141456, 12);
  sqcRYGate(q, 3.0868898850982887, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1136983412439907, 14);
  sqcRYGate(q, -0.7485275790256449, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6421609172885554, 14);
  sqcRYGate(q, 1.7488790274251118, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.6584864412965956, 0);
  sqcRYGate(q, -1.7950612851230088, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3397771025325547, 0);
  sqcRYGate(q, -2.5444848989195483, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.15087177144858033, 2);
  sqcRYGate(q, -2.103618169435287, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.061017223281112365, 2);
  sqcRYGate(q, -0.17389469979939626, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2233670863412103, 4);
  sqcRYGate(q, 1.5300258378163711, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.05992667078564917, 4);
  sqcRYGate(q, 0.059202294377227384, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0494604029946943, 6);
  sqcRYGate(q, 0.9163316750326218, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0018909977660618586, 6);
  sqcRYGate(q, -3.13901764961867, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.9182908963727067, 8);
  sqcRYGate(q, 2.9923397509070155, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5981135386150642, 8);
  sqcRYGate(q, 1.546849343661231, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.154338068032295, 10);
  sqcRYGate(q, 2.5769029559743273, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1201763756316607, 10);
  sqcRYGate(q, 3.1285967462189173, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.659076176855473, 12);
  sqcRYGate(q, 1.9793707989330303, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.030389860328218887, 12);
  sqcRYGate(q, 0.005512901210580472, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.571965177193746, 1);
  sqcRYGate(q, 1.2184163071503162, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6120898963178599, 1);
  sqcRYGate(q, -1.2228174917981978, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6325539928902493, 3);
  sqcRYGate(q, -1.7770297892159834, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.139715389601106, 3);
  sqcRYGate(q, -3.023700463810086, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.429616545734259, 5);
  sqcRYGate(q, 1.535754209970869, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5624012920243642, 5);
  sqcRYGate(q, -0.06882215020742155, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5852506026575055, 7);
  sqcRYGate(q, -2.67512089349643, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.139934999261175, 7);
  sqcRYGate(q, -3.1403668685948114, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.591667121727065, 9);
  sqcRYGate(q, -2.354841360911097, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.03868070355535958, 9);
  sqcRYGate(q, 1.5685126489555463, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.103150232097689, 11);
  sqcRYGate(q, 0.5476739196943283, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5733090620730057, 11);
  sqcRYGate(q, -0.003127615462044752, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.050465641460673, 13);
  sqcRYGate(q, 3.0846477276102484, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5703655357579698, 13);
  sqcRYGate(q, -3.1338070398099007, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.1156635556980117, 0);
  sqcRYGate(q, 0.6529638291705727, 1);
  sqcRYGate(q, 2.5411516747741905, 2);
  sqcRYGate(q, 0.4076628566827057, 3);
  sqcRYGate(q, -1.525865349002852, 4);
  sqcRYGate(q, 1.6309079496202523, 5);
  sqcRYGate(q, 2.04845379937812, 6);
  sqcRYGate(q, 3.1255104960512043, 7);
  sqcRYGate(q, -1.5696211049259703, 8);
  sqcRYGate(q, 3.1377354014272623, 9);
  sqcRYGate(q, -2.157573657534442, 10);
  sqcRYGate(q, -1.446017617173334, 11);
  sqcRYGate(q, 0.39388829541688697, 12);
  sqcRYGate(q, -0.09395514983558861, 13);
  sqcRYGate(q, -1.9693230457027595, 14);
  sqcRYGate(q, -1.5736520002316006, 15);

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
