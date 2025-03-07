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

  sqcRYGate(q, 1.6299896105696812, 0);
  sqcRYGate(q, 2.502738646591889, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3134971520681784, 0);
  sqcRYGate(q, -2.5168826017150248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4028039369232923, 2);
  sqcRYGate(q, 2.5888022826857626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.470785001377187, 2);
  sqcRYGate(q, -2.3506805083176103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8911991983757663, 0);
  sqcRYGate(q, -1.571732630711968, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4883818997052167, 0);
  sqcRYGate(q, 0.32708156199156146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5076318084553373, 1);
  sqcRYGate(q, 0.22487235424822852, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4713593851849667, 1);
  sqcRYGate(q, -1.7862625718375018, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.887863308945324, 0);
  sqcRYGate(q, 1.5683078923011144, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0407751987484444, 0);
  sqcRYGate(q, -2.386389262950806, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4869116688014001, 1);
  sqcRYGate(q, 2.349534308935731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9419342472754861, 1);
  sqcRYGate(q, -1.7340265056385364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.843604620599594, 0);
  sqcRYGate(q, 1.4445957484686835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.043678675223226, 0);
  sqcRYGate(q, 1.6838127082321936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1035412287886945, 2);
  sqcRYGate(q, 0.7885130349379423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9792362658470589, 2);
  sqcRYGate(q, -1.621982705663478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9087688226733608, 0);
  sqcRYGate(q, -0.27616628609075444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9340648690138875, 0);
  sqcRYGate(q, 0.37807257569303765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4014465567323215, 1);
  sqcRYGate(q, -1.390323035583089, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.04188407509697292, 1);
  sqcRYGate(q, -0.6108387165545628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4033684957626731, 0);
  sqcRYGate(q, -3.06646250954222, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.326331565468034, 0);
  sqcRYGate(q, -1.52350096115119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.030602548639675504, 1);
  sqcRYGate(q, 1.4049688253043116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2950637349582355, 1);
  sqcRYGate(q, -1.2470584970617766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8906307016855909, 0);
  sqcRYGate(q, 0.14402315062943405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9474480641256866, 0);
  sqcRYGate(q, 1.5193593279301618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6197687661639328, 2);
  sqcRYGate(q, -2.76465083668562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7780802207545716, 2);
  sqcRYGate(q, 1.6393434396948203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1656593443947543, 0);
  sqcRYGate(q, 0.26850412766275783, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6261447453526903, 0);
  sqcRYGate(q, 1.4873688487600107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4505954826927372, 1);
  sqcRYGate(q, -2.191270646302873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7443320748451796, 1);
  sqcRYGate(q, -2.296919438310956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9451592548399415, 0);
  sqcRYGate(q, 0.1489767499227735, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8499664396222397, 0);
  sqcRYGate(q, -2.519355694944172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.886953783719818, 1);
  sqcRYGate(q, 0.324267481964001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.580112121406298, 1);
  sqcRYGate(q, 0.6278846318247853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.974767459359092, 0);
  sqcRYGate(q, -1.7125182720629892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.852241925535088, 0);
  sqcRYGate(q, -0.4071410057175355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3418657828324125, 2);
  sqcRYGate(q, -0.07108580767518571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9430257709766208, 2);
  sqcRYGate(q, 1.990502067735276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.197181924990117, 0);
  sqcRYGate(q, -2.5288016383048832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8905818770012552, 0);
  sqcRYGate(q, -1.6536284530800829, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8600793232669983, 1);
  sqcRYGate(q, 0.950602911243135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29075506838253884, 1);
  sqcRYGate(q, 2.709588789861346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1517836589965538, 0);
  sqcRYGate(q, 1.7894866555309923, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5388519338076048, 0);
  sqcRYGate(q, 2.374298841659426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.951964882449244, 1);
  sqcRYGate(q, -2.111699431727147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.846793333674697, 1);
  sqcRYGate(q, -1.528635450221394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0453917989755603, 0);
  sqcRYGate(q, 1.4491478900454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.058782793365428, 0);
  sqcRYGate(q, 0.2766246077519458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12939569206607704, 2);
  sqcRYGate(q, 1.0833387783650705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.261927759249449, 2);
  sqcRYGate(q, 1.0145558435904967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9616246577948835, 0);
  sqcRYGate(q, -0.5028055127484681, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9211678532920813, 0);
  sqcRYGate(q, -1.0780609879234386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2964401912654915, 1);
  sqcRYGate(q, -2.6419271744846347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3266697355389283, 1);
  sqcRYGate(q, -2.7013744209537984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1390830339244866, 0);
  sqcRYGate(q, -1.6528289554550581, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8539935599734048, 0);
  sqcRYGate(q, -0.9310922884563162, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9850226523484213, 1);
  sqcRYGate(q, -2.158979338489247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.50520641239761, 1);
  sqcRYGate(q, -0.3179505739773498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.629423671211663, 0);
  sqcRYGate(q, 1.5323928719083686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.72176716691535, 0);
  sqcRYGate(q, -1.5665586307988137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3526921236566279, 2);
  sqcRYGate(q, -2.4442234240891363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.595582902000908, 2);
  sqcRYGate(q, 2.7096920569492218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.908566488307474, 0);
  sqcRYGate(q, -0.7666761442542428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.477216299421241, 0);
  sqcRYGate(q, -1.179723414870855, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.008493476403464, 1);
  sqcRYGate(q, 1.4599882013147774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9400726823569512, 1);
  sqcRYGate(q, 1.9759162653807651, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2373831447051113, 0);
  sqcRYGate(q, -0.9734033458334475, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.399224526150034, 0);
  sqcRYGate(q, 1.0864421134054432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5759531591663762, 1);
  sqcRYGate(q, -0.7700486739517248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3464460863350567, 1);
  sqcRYGate(q, -0.07561370923131779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.695413696055315, 0);
  sqcRYGate(q, -0.5597625889606358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1332041104625787, 0);
  sqcRYGate(q, -2.0482123189002523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7306474398508147, 2);
  sqcRYGate(q, 1.7922259170263466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.452742659110105, 2);
  sqcRYGate(q, -1.2950838048529247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.197047158908479, 0);
  sqcRYGate(q, -0.3895558169296587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.10309665613916, 0);
  sqcRYGate(q, -0.5431306499871287, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.48026396497082824, 1);
  sqcRYGate(q, -3.0578840511742005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.830384469458854, 1);
  sqcRYGate(q, -1.806382273321943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8462400737179713, 0);
  sqcRYGate(q, 0.3877412439817303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.236612300133789, 0);
  sqcRYGate(q, -1.2607219588188385, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.044802345473112, 1);
  sqcRYGate(q, -2.8005155036076568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7550669308852664, 1);
  sqcRYGate(q, -1.8230412407535272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9776639956281297, 0);
  sqcRYGate(q, -0.6733488996565669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.845379390337654, 0);
  sqcRYGate(q, -2.509223155933388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9382224011326263, 2);
  sqcRYGate(q, -1.266757563809719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.625223370223943, 2);
  sqcRYGate(q, 0.993568917468622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0150965583672091, 0);
  sqcRYGate(q, -2.6553757314277733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3119268424666735, 0);
  sqcRYGate(q, -2.774144647383914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7719957092691105, 1);
  sqcRYGate(q, -0.8997574698322004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9029277991635638, 1);
  sqcRYGate(q, -0.44362657026345975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8299773129935408, 0);
  sqcRYGate(q, -2.896024056350134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0864723998133785, 0);
  sqcRYGate(q, 2.0951768719608546, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6975335530405717, 1);
  sqcRYGate(q, -0.264188736939207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9694436236841645, 1);
  sqcRYGate(q, -0.2256115083080381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3272907133093068, 0);
  sqcRYGate(q, -2.1567352783443536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9021369699134074, 0);
  sqcRYGate(q, 0.32712363362344204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0028879484157031837, 2);
  sqcRYGate(q, 1.57587598682775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2442573325698323, 2);
  sqcRYGate(q, 1.8505592432194846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7870910815374649, 0);
  sqcRYGate(q, -1.601472676259743, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.868225339743316, 0);
  sqcRYGate(q, 2.934571882334403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1457130188429638, 1);
  sqcRYGate(q, 0.6805823690199791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7829538465680099, 1);
  sqcRYGate(q, 0.5587487781092513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2492478208332454, 0);
  sqcRYGate(q, -2.569071292137203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08328326205211223, 0);
  sqcRYGate(q, 0.7938541655501373, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9708712323783963, 1);
  sqcRYGate(q, 1.6329617898792321, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5784030913408538, 1);
  sqcRYGate(q, -1.5709480498368293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8759667987343684, 0);
  sqcRYGate(q, 0.8531109053041215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6160695829263134, 0);
  sqcRYGate(q, 2.86725322997106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.723734024667623, 2);
  sqcRYGate(q, -2.117936706570292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.105630343590665, 2);
  sqcRYGate(q, 2.027004059943904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1333702557150875, 0);
  sqcRYGate(q, -0.11184040520638305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.029378407675984, 0);
  sqcRYGate(q, -2.954927379035057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4089765788337925, 1);
  sqcRYGate(q, -1.1119829923190672, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6456857310394435, 1);
  sqcRYGate(q, 0.028642180336644972, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.073201461911374, 0);
  sqcRYGate(q, -1.2939695453728781, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0156425845807506, 0);
  sqcRYGate(q, -1.3090581962066254, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0530274449546315, 1);
  sqcRYGate(q, -2.749510432467554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2737731280575466, 1);
  sqcRYGate(q, -0.8087021275668279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.389525981387327, 0);
  sqcRYGate(q, 1.6353717879846092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7617520228889063, 0);
  sqcRYGate(q, -0.9330971448985999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0199752169579699, 2);
  sqcRYGate(q, 2.31401691856363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5357889630893085, 2);
  sqcRYGate(q, -0.36068786228451294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6265605859109102, 0);
  sqcRYGate(q, -0.7342686755840317, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4777561846695013, 0);
  sqcRYGate(q, 0.31245460115198664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6093251955726018, 1);
  sqcRYGate(q, 2.1290326201487426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3212192129150098, 1);
  sqcRYGate(q, 2.6678107462951077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4229866192553136, 0);
  sqcRYGate(q, 2.125274956374237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6191209142904672, 0);
  sqcRYGate(q, -1.2852232476370484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9904749075399151, 1);
  sqcRYGate(q, 3.0902356153608856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5388305458741476, 1);
  sqcRYGate(q, -1.1711246014415417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.021742262779099, 0);
  sqcRYGate(q, 1.7816329799019979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3825297903890992, 0);
  sqcRYGate(q, -2.626553825939255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8981226039354975, 2);
  sqcRYGate(q, -1.3954541334931738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2006353691091949, 2);
  sqcRYGate(q, -0.7563176175883589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8964195064214424, 0);
  sqcRYGate(q, 0.6510359225160814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5614070720654625, 0);
  sqcRYGate(q, 0.5750627853001052, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7620703539547997, 1);
  sqcRYGate(q, 1.6670515929652732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.013499038822865, 1);
  sqcRYGate(q, 0.8478527481032784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3778872921209562, 0);
  sqcRYGate(q, 0.5231454227057437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.387749105901592, 0);
  sqcRYGate(q, 2.571559927674147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.411357074066063, 1);
  sqcRYGate(q, -2.2211944966993302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3595216241588943, 1);
  sqcRYGate(q, -2.8668474237062567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.040529435360275, 0);
  sqcRYGate(q, 3.1128973744381687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8961458572751447, 0);
  sqcRYGate(q, -0.8748577381481696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.837020805093968, 2);
  sqcRYGate(q, -2.2928639245992124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.646000224477473, 2);
  sqcRYGate(q, -0.6352615226618508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8940298633496502, 0);
  sqcRYGate(q, 0.3839928015260132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5944160967848395, 0);
  sqcRYGate(q, 0.29375840276627946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5608303888987654, 1);
  sqcRYGate(q, 2.8486965748837174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3378269907468443, 1);
  sqcRYGate(q, -0.08155338879772266, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8570514119617294, 0);
  sqcRYGate(q, 1.8310312012352608, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7678025914384412, 0);
  sqcRYGate(q, 1.3151140765986558, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.071676213569872, 1);
  sqcRYGate(q, 1.7754124730291947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1042501728702288, 1);
  sqcRYGate(q, -2.7347283770184863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.691078684105285, 0);
  sqcRYGate(q, -2.2365049260357153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3763640663373184, 0);
  sqcRYGate(q, -0.1982994728213443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1291409949878277, 2);
  sqcRYGate(q, 1.9899256092199593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0254852179421836, 2);
  sqcRYGate(q, -1.281015429510452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5329670344877332, 0);
  sqcRYGate(q, 2.493143378817688, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6813969117726701, 0);
  sqcRYGate(q, 0.7928924144610141, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7454654845455745, 1);
  sqcRYGate(q, -0.5239315307983023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4647381359024436, 1);
  sqcRYGate(q, -1.8131061431369782, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4705586418834824, 0);
  sqcRYGate(q, -0.1789518922882071, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5867665096235849, 0);
  sqcRYGate(q, -0.06578297733747393, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3217861827828066, 1);
  sqcRYGate(q, -2.0956335758309015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4489311786700403, 1);
  sqcRYGate(q, 2.078750236512011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9758831213030517, 0);
  sqcRYGate(q, 0.0358125282162316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.071546472179358, 0);
  sqcRYGate(q, 2.8257622457908345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1769981688073976, 2);
  sqcRYGate(q, 2.854467908501447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6297556902902475, 2);
  sqcRYGate(q, 1.7641677823454067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.337812578955521, 0);
  sqcRYGate(q, -2.6903552396013275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9864456699364372, 0);
  sqcRYGate(q, -1.4724013656414636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.024126053238061, 1);
  sqcRYGate(q, 0.5262122128144128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.934475972578366, 1);
  sqcRYGate(q, -1.4778462339684373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5779599609690327, 0);
  sqcRYGate(q, -1.9838427535799967, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4301463706738382, 0);
  sqcRYGate(q, -0.21985174704146881, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.035610773135483, 1);
  sqcRYGate(q, 1.1301743238092634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6330887839830623, 1);
  sqcRYGate(q, 1.0576740914031502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.783710863949887, 0);
  sqcRYGate(q, -0.27307483953747363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08460362621499673, 0);
  sqcRYGate(q, -0.789925063894958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.988350395972116, 2);
  sqcRYGate(q, 0.26232669321586055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3502793088575738, 2);
  sqcRYGate(q, -2.7222949129085916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5548920595017965, 0);
  sqcRYGate(q, -1.4691302608622367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5014215904000143, 0);
  sqcRYGate(q, 3.0259750534955687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6437634993602772, 1);
  sqcRYGate(q, 1.226048554294247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.195080675466057, 1);
  sqcRYGate(q, 2.944420648663938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3450137128742936, 0);
  sqcRYGate(q, -0.911648343775364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6854858512426962, 0);
  sqcRYGate(q, 1.1007171330369865, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3835488044922957, 1);
  sqcRYGate(q, -0.03905622806979192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3371179121271966, 1);
  sqcRYGate(q, -1.2605100959627435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3526702745673203, 0);
  sqcRYGate(q, 3.1282067945406116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1385373863644994, 0);
  sqcRYGate(q, -3.1025156630397976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3877283699301284, 2);
  sqcRYGate(q, 2.9548389750653246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.750857151528192, 2);
  sqcRYGate(q, -0.5225305058736591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.792548929568021, 0);
  sqcRYGate(q, -2.0611639942013165, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3408386160454817, 0);
  sqcRYGate(q, 3.0265869187374235, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.070273768578784, 1);
  sqcRYGate(q, -1.1873385440564272, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.23070132206467786, 1);
  sqcRYGate(q, -2.8955047444585102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8624999725240753, 0);
  sqcRYGate(q, 2.781761629084517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4157334907868577, 0);
  sqcRYGate(q, -2.6042313246294926, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5106890019165, 1);
  sqcRYGate(q, -0.21307201043908386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9605130037515934, 1);
  sqcRYGate(q, -1.4484575984362262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1663690824011184, 0);
  sqcRYGate(q, -1.4930488953783156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6720117947782178, 0);
  sqcRYGate(q, 0.15936978826449824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4699497723112254, 2);
  sqcRYGate(q, -2.4436002965806134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7285212080030927, 2);
  sqcRYGate(q, -0.134546021178897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.710739961586018, 0);
  sqcRYGate(q, -2.9333559609640476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0152019396039873, 0);
  sqcRYGate(q, 2.1974463006982097, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5507169736411932, 1);
  sqcRYGate(q, 2.438679592113868, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.33979544283769947, 1);
  sqcRYGate(q, 1.830276485363603, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.958811571007523, 0);
  sqcRYGate(q, 1.6582135063682624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4432818459394976, 0);
  sqcRYGate(q, 0.17734276121208303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6075519939669842, 1);
  sqcRYGate(q, 0.7009231299172516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.227303487843571, 1);
  sqcRYGate(q, 1.7825685108031841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4474096163420267, 0);
  sqcRYGate(q, 2.644208660084574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.831970248706858, 0);
  sqcRYGate(q, 2.023079694622548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0284346055667863, 2);
  sqcRYGate(q, 0.5994429469970459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8842582399679548, 2);
  sqcRYGate(q, 0.25978407178645835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.106541156594158, 0);
  sqcRYGate(q, -2.9364747683609735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8236416283363717, 0);
  sqcRYGate(q, 0.9676953997917874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.175179773773133, 1);
  sqcRYGate(q, 1.8085998482263694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.603272042573062, 1);
  sqcRYGate(q, 0.2858282461838755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.039140313413069575, 0);
  sqcRYGate(q, -0.6023575087297727, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7828317363144126, 0);
  sqcRYGate(q, -0.6885862178273783, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.17481005224985094, 1);
  sqcRYGate(q, -1.443411612882217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2774181733166294, 1);
  sqcRYGate(q, -2.3373792321784883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23664579405318514, 0);
  sqcRYGate(q, -2.8025763971530377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0700332019232122, 0);
  sqcRYGate(q, -1.056396707750502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.119431354958886, 2);
  sqcRYGate(q, 2.7327412394119652, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.684421744984726, 2);
  sqcRYGate(q, 0.18943348718497885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.115820828688992, 0);
  sqcRYGate(q, -1.8194538607881598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2657653094808151, 0);
  sqcRYGate(q, 1.6286064910077662, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9491018115785623, 1);
  sqcRYGate(q, 2.6797414799889587, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9897079390134351, 1);
  sqcRYGate(q, -0.37704619707292064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0468402132561128, 0);
  sqcRYGate(q, -0.723441215946255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.47196593665276154, 0);
  sqcRYGate(q, -1.067757646765445, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0604850487239106, 1);
  sqcRYGate(q, -2.245262912200796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9037305900703982, 1);
  sqcRYGate(q, -0.6436225864652118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.206217986361799, 0);
  sqcRYGate(q, -3.0590019987328025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6866026807030998, 0);
  sqcRYGate(q, -0.35582849434044095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.466874002418337, 2);
  sqcRYGate(q, -1.6270341344325345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.168830755209731, 2);
  sqcRYGate(q, -2.333496075437058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5054867980287585, 0);
  sqcRYGate(q, 0.0678558523627304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.466308825088352, 0);
  sqcRYGate(q, 0.35960038653371384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1550433578017985, 1);
  sqcRYGate(q, 1.08903223724365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.631381192918661, 1);
  sqcRYGate(q, -0.6101320068483265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1333384782539335, 0);
  sqcRYGate(q, 2.8047332228306843, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9659077901560945, 0);
  sqcRYGate(q, 1.4106566953646684, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.12700944610554377, 1);
  sqcRYGate(q, -0.4011982316408301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16187275854021896, 1);
  sqcRYGate(q, 2.451254219160954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2247018251760975, 0);
  sqcRYGate(q, -2.8693374140682404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.466083267728477, 0);
  sqcRYGate(q, 0.17989809463419218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.220259168418403, 2);
  sqcRYGate(q, 2.1756929241713987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5144945873635124, 2);
  sqcRYGate(q, 0.4013109843023764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.605131216196759, 0);
  sqcRYGate(q, -1.0202436292541686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6217765878497232, 0);
  sqcRYGate(q, -2.094692836072919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0092494532249088, 1);
  sqcRYGate(q, 0.9691439962473805, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.918321415914643, 1);
  sqcRYGate(q, -1.5225225040176964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.141925439219942, 0);
  sqcRYGate(q, -0.4274432226868585, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4908082668533893, 0);
  sqcRYGate(q, 1.3477506451487966, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4339445790855148, 1);
  sqcRYGate(q, 1.7844031661188375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34052666330962966, 1);
  sqcRYGate(q, -2.0427561396411917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5230104488995231, 0);
  sqcRYGate(q, 0.2347495138636404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12291929756549091, 0);
  sqcRYGate(q, 2.6953650734192127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9073844008613577, 2);
  sqcRYGate(q, -1.9659598258896642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0586027046919634, 2);
  sqcRYGate(q, 2.1245359945489017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.006256897598173331, 0);
  sqcRYGate(q, 2.4595494189158122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9954924234862793, 0);
  sqcRYGate(q, -1.2340070461073223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6472370627562496, 1);
  sqcRYGate(q, -1.6872547398435893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.898644943599554, 1);
  sqcRYGate(q, 3.063318112350869, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6039076269445767, 0);
  sqcRYGate(q, 1.8804466123613421, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.36185323527159774, 0);
  sqcRYGate(q, 0.36907881940043086, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.731623107479105, 1);
  sqcRYGate(q, 0.2675511329190545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2379849737440622, 1);
  sqcRYGate(q, -0.14804334469981403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.59735796125659, 0);
  sqcRYGate(q, -0.320193914368323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.339355660604412, 0);
  sqcRYGate(q, -1.7252950298154799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6850034791568023, 2);
  sqcRYGate(q, 1.4367151841076498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13434214017891044, 2);
  sqcRYGate(q, -0.10086226316277758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7576795975393522, 0);
  sqcRYGate(q, -2.4970275884997712, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4244866782826149, 0);
  sqcRYGate(q, -1.794678626891745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5540911074676559, 1);
  sqcRYGate(q, -2.5124394316994367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.200639245128901, 1);
  sqcRYGate(q, -2.8472703833372397, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4184087470665627, 0);
  sqcRYGate(q, -1.7891278508163346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4578575348406702, 0);
  sqcRYGate(q, -0.48918599318141, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1744774963724076, 1);
  sqcRYGate(q, 2.4848224494002276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5438775035041201, 1);
  sqcRYGate(q, -0.8418764302190268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5377481887546499, 0);
  sqcRYGate(q, 2.1582722575171966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5625134229697428, 0);
  sqcRYGate(q, -0.6542910572135413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8368541922342109, 2);
  sqcRYGate(q, -1.1974484116415178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06401773557708205, 2);
  sqcRYGate(q, 2.7879024608148373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01566324496883025, 0);
  sqcRYGate(q, -1.6133371397194836, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4442110700334938, 0);
  sqcRYGate(q, 0.5871532347143044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.172371790974757, 1);
  sqcRYGate(q, -2.487084077637505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8122165760880355, 1);
  sqcRYGate(q, -1.619698866495763, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3159211785046594, 0);
  sqcRYGate(q, 0.1758074159953953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.314586752105974, 0);
  sqcRYGate(q, -1.800810852088904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0356525351390418, 1);
  sqcRYGate(q, 2.451790214270051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3905731733532551, 1);
  sqcRYGate(q, -1.0987691326328486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34278136278872595, 0);
  sqcRYGate(q, -0.10834586513779865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2124600813548883, 0);
  sqcRYGate(q, 1.639352684620416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8616050570370763, 2);
  sqcRYGate(q, -0.2637219059623287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8294034498107403, 2);
  sqcRYGate(q, -1.4028859492307095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.984032808582883, 0);
  sqcRYGate(q, -0.19527187203462437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.267937525744301, 0);
  sqcRYGate(q, -1.5644298691264735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.505980851798832, 1);
  sqcRYGate(q, 1.222199507693322, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17732214522776138, 1);
  sqcRYGate(q, -0.8451959023839778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.44973737754132953, 0);
  sqcRYGate(q, 2.8343536445421313, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.058036295387156045, 0);
  sqcRYGate(q, -2.9645486558082674, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8321238758676888, 1);
  sqcRYGate(q, -0.30329357925167677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3056545154685315, 1);
  sqcRYGate(q, -2.219036840920909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8043388634720474, 0);
  sqcRYGate(q, 0.7187329058977372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3939643144725125, 0);
  sqcRYGate(q, 3.036308921311436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7473718332031065, 2);
  sqcRYGate(q, -1.8019409221210936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9497030092846432, 2);
  sqcRYGate(q, 2.3670212539016564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4994465900394283, 0);
  sqcRYGate(q, -3.002621397413607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0077180648935642, 0);
  sqcRYGate(q, -2.8041774850402783, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.024540728848362, 1);
  sqcRYGate(q, 2.75035450789172, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.550953395365779, 1);
  sqcRYGate(q, 0.23289487940337228, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2253672304577543, 0);
  sqcRYGate(q, -2.65614755320503, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4781179669671314, 0);
  sqcRYGate(q, 1.010125036366631, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7392809310692514, 1);
  sqcRYGate(q, 1.4349734562911394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9422170965371104, 1);
  sqcRYGate(q, 0.6319087992488379, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3033073442155247, 0);
  sqcRYGate(q, -1.405957137794518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3917488687228863, 0);
  sqcRYGate(q, 1.59725342374751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6182033049821172, 2);
  sqcRYGate(q, 1.0859396778625392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.748244702836585, 2);
  sqcRYGate(q, 2.1372935346617767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7771034522640259, 0);
  sqcRYGate(q, 1.3675986609772637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.795496425528599, 0);
  sqcRYGate(q, 2.7834225352138593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.135772675241994, 1);
  sqcRYGate(q, 0.25616727189570376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7570064211187937, 1);
  sqcRYGate(q, -1.2329927897179445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.42224840981341677, 0);
  sqcRYGate(q, 2.875435655878432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.542895768752789, 0);
  sqcRYGate(q, -1.9069658167276473, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4353546759386737, 1);
  sqcRYGate(q, 0.8600393935941337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37666475451245685, 1);
  sqcRYGate(q, -0.00456344188349167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.691679270243359, 0);
  sqcRYGate(q, 2.8239174222875634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20744589370383315, 0);
  sqcRYGate(q, 2.3515313297599034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1407926412896563, 2);
  sqcRYGate(q, -2.3566839892115725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.183778497608217, 2);
  sqcRYGate(q, -2.7525845466677645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.980402040630289, 0);
  sqcRYGate(q, -0.0607042294536586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6705400148954427, 0);
  sqcRYGate(q, 0.7422324187096718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6013875728207363, 1);
  sqcRYGate(q, 0.6922245598527592, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.63364214492777, 1);
  sqcRYGate(q, -0.8876476473717396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7207581613932346, 0);
  sqcRYGate(q, -1.8783504331392031, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3738991414231974, 0);
  sqcRYGate(q, -0.24342266574547583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3537409962665174, 1);
  sqcRYGate(q, 2.574255845257966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.387477481325143, 1);
  sqcRYGate(q, 3.0678171678942006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4550444951494486, 0);
  sqcRYGate(q, 0.44223654992420397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17043209940961912, 0);
  sqcRYGate(q, -1.4854179886715722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6538428307487187, 2);
  sqcRYGate(q, -1.56331273492829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15255435448241972, 2);
  sqcRYGate(q, -3.0152783574768205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4169685213831626, 0);
  sqcRYGate(q, 2.203895197184873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4630302596899076, 0);
  sqcRYGate(q, -0.9052713705371138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.33680937394248733, 1);
  sqcRYGate(q, 1.2510072332280595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8569842644609422, 1);
  sqcRYGate(q, -2.797026539275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1780769920312455, 0);
  sqcRYGate(q, 0.2515184981006697, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8189597309218963, 0);
  sqcRYGate(q, 1.2666252834569347, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5038933226773468, 1);
  sqcRYGate(q, 1.9956749342212186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.320720675836209, 1);
  sqcRYGate(q, 1.52226742496077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4196859996445768, 0);
  sqcRYGate(q, 1.5882596570847314, 1);
  sqcRYGate(q, 0.5756872108027089, 2);
  sqcRYGate(q, -1.077869959512993, 3);

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
