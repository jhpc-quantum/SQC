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

  sqcRYGate(q, 0.16838229542888428, 0);
  sqcRZGate(q, -1.2354806915784133, 0);
  sqcRYGate(q, 0.6127938224035319, 1);
  sqcRZGate(q, 2.053080292748094, 1);
  sqcRYGate(q, -1.9731394064022254, 2);
  sqcRZGate(q, -1.9800663838467294, 2);
  sqcRYGate(q, 0.799256855951473, 3);
  sqcRZGate(q, -0.011759737507385553, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.882970551637452, 0);
  sqcRZGate(q, -0.42235725977475147, 0);
  sqcRYGate(q, 2.1050736456339463, 1);
  sqcRZGate(q, -0.5888227106653983, 1);
  sqcRYGate(q, 1.7139598963351332, 2);
  sqcRZGate(q, 0.551857188012123, 2);
  sqcRYGate(q, -2.02190529551355, 3);
  sqcRZGate(q, 1.7658970060450723, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0082669385793759, 0);
  sqcRZGate(q, 1.7714074998866962, 0);
  sqcRYGate(q, 2.390459142818091, 1);
  sqcRZGate(q, -0.05549285724109007, 1);
  sqcRYGate(q, -1.9938704014578177, 2);
  sqcRZGate(q, 0.2855502180906376, 2);
  sqcRYGate(q, -2.193948345809673, 3);
  sqcRZGate(q, -2.680810800065728, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9851201162713985, 0);
  sqcRZGate(q, 0.5553728183881441, 0);
  sqcRYGate(q, 2.7266171049031036, 1);
  sqcRZGate(q, -2.6111387747477344, 1);
  sqcRYGate(q, -0.5960580305019528, 2);
  sqcRZGate(q, 2.1176293654051044, 2);
  sqcRYGate(q, -3.1335752701739334, 3);
  sqcRZGate(q, -0.28627898530319873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3145679250773723, 0);
  sqcRZGate(q, 0.8171428961523248, 0);
  sqcRYGate(q, 2.8586629168168756, 1);
  sqcRZGate(q, -2.993974533525583, 1);
  sqcRYGate(q, -2.1057497210817324, 2);
  sqcRZGate(q, -1.3890067035903462, 2);
  sqcRYGate(q, -1.8563616989826643, 3);
  sqcRZGate(q, -2.746314146794259, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.999695240633808, 0);
  sqcRZGate(q, 0.1418464288530572, 0);
  sqcRYGate(q, -1.821280667473113, 1);
  sqcRZGate(q, 0.07797798214696883, 1);
  sqcRYGate(q, -2.1566833046592495, 2);
  sqcRZGate(q, -1.100136713167379, 2);
  sqcRYGate(q, 2.8840242468342296, 3);
  sqcRZGate(q, -2.291357604499851, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.13975115369787616, 0);
  sqcRZGate(q, 0.5472184407483284, 0);
  sqcRYGate(q, -2.519543011540647, 1);
  sqcRZGate(q, 2.86319323157631, 1);
  sqcRYGate(q, 0.4673041849784614, 2);
  sqcRZGate(q, 1.4068184608315422, 2);
  sqcRYGate(q, -0.03705344482113304, 3);
  sqcRZGate(q, 3.0142790303371747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4991998614439856, 0);
  sqcRZGate(q, -2.359679837082442, 0);
  sqcRYGate(q, -2.8961273129824865, 1);
  sqcRZGate(q, 2.8388219540246284, 1);
  sqcRYGate(q, 0.37708288438052584, 2);
  sqcRZGate(q, 1.7740684046471449, 2);
  sqcRYGate(q, -0.9612352534281996, 3);
  sqcRZGate(q, -1.3161048398735775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7865485283771531, 0);
  sqcRZGate(q, -1.7420495763797523, 0);
  sqcRYGate(q, 2.9728683827935316, 1);
  sqcRZGate(q, 1.3016735209462054, 1);
  sqcRYGate(q, -2.2147632809744655, 2);
  sqcRZGate(q, 2.9194651402219343, 2);
  sqcRYGate(q, 1.7918845836298054, 3);
  sqcRZGate(q, -1.3918225840163228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.298538984441202, 0);
  sqcRZGate(q, 1.269717250564657, 0);
  sqcRYGate(q, -1.305468352251894, 1);
  sqcRZGate(q, 1.4832045647484762, 1);
  sqcRYGate(q, -2.9672287913026776, 2);
  sqcRZGate(q, -0.4138602116577843, 2);
  sqcRYGate(q, -0.5812530733066121, 3);
  sqcRZGate(q, -0.09123916313885688, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6230165771615717, 0);
  sqcRZGate(q, 2.32415408487376, 0);
  sqcRYGate(q, -2.2917037898863306, 1);
  sqcRZGate(q, 0.1702945101632691, 1);
  sqcRYGate(q, 2.7380306395250043, 2);
  sqcRZGate(q, 1.7857733195189833, 2);
  sqcRYGate(q, -2.501645395730589, 3);
  sqcRZGate(q, -0.4570824695721596, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1838992006805165, 0);
  sqcRZGate(q, 3.0313689502012324, 0);
  sqcRYGate(q, -2.868904105541134, 1);
  sqcRZGate(q, 1.5307214600347843, 1);
  sqcRYGate(q, -1.1744668115888048, 2);
  sqcRZGate(q, 2.6157965395775973, 2);
  sqcRYGate(q, 0.02626274791582978, 3);
  sqcRZGate(q, -2.3999210508241933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3019612941033234, 0);
  sqcRZGate(q, 1.8086758161217906, 0);
  sqcRYGate(q, 2.266542756811648, 1);
  sqcRZGate(q, -2.8442217176943005, 1);
  sqcRYGate(q, 2.5002139401823626, 2);
  sqcRZGate(q, 3.0262662146117374, 2);
  sqcRYGate(q, -2.332981100110377, 3);
  sqcRZGate(q, -0.8804057023627138, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9286841942746706, 0);
  sqcRZGate(q, 1.3598366675536628, 0);
  sqcRYGate(q, 1.8247144040860137, 1);
  sqcRZGate(q, -1.2900542089868534, 1);
  sqcRYGate(q, -0.18622268439798575, 2);
  sqcRZGate(q, 0.11165122565437981, 2);
  sqcRYGate(q, 3.002672606377059, 3);
  sqcRZGate(q, -0.3831081479583451, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5724739482255465, 0);
  sqcRZGate(q, 0.913352672466131, 0);
  sqcRYGate(q, 0.1262251242704231, 1);
  sqcRZGate(q, -0.8131398484990892, 1);
  sqcRYGate(q, 0.0794216309820106, 2);
  sqcRZGate(q, -0.06199034515408197, 2);
  sqcRYGate(q, 0.16556151486555404, 3);
  sqcRZGate(q, -2.492397202019741, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3368508979480787, 0);
  sqcRZGate(q, -2.5537031927310374, 0);
  sqcRYGate(q, 0.3828948360508654, 1);
  sqcRZGate(q, 2.7166511465704555, 1);
  sqcRYGate(q, 1.3082933776709342, 2);
  sqcRZGate(q, -1.6874305228341266, 2);
  sqcRYGate(q, 1.8663357287757019, 3);
  sqcRZGate(q, -0.2879208071774997, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1315285390346097, 0);
  sqcRZGate(q, 2.2182067004566086, 0);
  sqcRYGate(q, 1.3905235110484053, 1);
  sqcRZGate(q, -0.6815056407004064, 1);
  sqcRYGate(q, 3.102255186253218, 2);
  sqcRZGate(q, 2.478981244936364, 2);
  sqcRYGate(q, -1.9829801368707909, 3);
  sqcRZGate(q, -0.45809986175674683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5490650058778161, 0);
  sqcRZGate(q, 3.054242786811036, 0);
  sqcRYGate(q, -2.1840590008209793, 1);
  sqcRZGate(q, -1.4888613100709174, 1);
  sqcRYGate(q, 0.39497970734258203, 2);
  sqcRZGate(q, -1.457120661372459, 2);
  sqcRYGate(q, 1.8056049603384219, 3);
  sqcRZGate(q, -2.18906552977034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.37510409504698, 0);
  sqcRZGate(q, 1.5399921298810655, 0);
  sqcRYGate(q, 3.041693844818937, 1);
  sqcRZGate(q, 2.74767876272227, 1);
  sqcRYGate(q, -0.03956268159249276, 2);
  sqcRZGate(q, 2.459622342318588, 2);
  sqcRYGate(q, -0.03141215140772501, 3);
  sqcRZGate(q, 0.20680448480379615, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.346207187785751, 0);
  sqcRZGate(q, -1.5596599310554549, 0);
  sqcRYGate(q, -2.130358382781096, 1);
  sqcRZGate(q, 2.5023647013371524, 1);
  sqcRYGate(q, -2.2398182498875494, 2);
  sqcRZGate(q, 2.9099560620357656, 2);
  sqcRYGate(q, 0.38088861074028646, 3);
  sqcRZGate(q, 0.38365777121594835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2550795333820188, 0);
  sqcRZGate(q, -2.1750359563202917, 0);
  sqcRYGate(q, -0.6040162339345638, 1);
  sqcRZGate(q, 1.2319654881793853, 1);
  sqcRYGate(q, 1.1033217981093617, 2);
  sqcRZGate(q, -0.5868127581158431, 2);
  sqcRYGate(q, 2.9458777612090126, 3);
  sqcRZGate(q, 0.1350184734907467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8138403568865547, 0);
  sqcRZGate(q, -0.9640854010943795, 0);
  sqcRYGate(q, -0.5711069153347497, 1);
  sqcRZGate(q, 1.3513238942355141, 1);
  sqcRYGate(q, 2.2880828749013986, 2);
  sqcRZGate(q, -2.640804122459114, 2);
  sqcRYGate(q, -0.10210477860197109, 3);
  sqcRZGate(q, 1.102873751505533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.118440350870447, 0);
  sqcRZGate(q, 2.005161543086597, 0);
  sqcRYGate(q, 1.39706085786887, 1);
  sqcRZGate(q, 2.1169798946081366, 1);
  sqcRYGate(q, 2.9755391098852173, 2);
  sqcRZGate(q, 0.6689056999299919, 2);
  sqcRYGate(q, -2.1973722137220806, 3);
  sqcRZGate(q, -1.237474936704644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.095352590907663, 0);
  sqcRZGate(q, -1.5833763967289678, 0);
  sqcRYGate(q, 2.870335768293206, 1);
  sqcRZGate(q, -0.6017720702771051, 1);
  sqcRYGate(q, 1.768378946645, 2);
  sqcRZGate(q, -2.293360549470965, 2);
  sqcRYGate(q, 2.1137212057650165, 3);
  sqcRZGate(q, -1.8242251943951409, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2958752185087308, 0);
  sqcRZGate(q, -2.3387014230632346, 0);
  sqcRYGate(q, -0.9000717218720355, 1);
  sqcRZGate(q, 0.1968237711792455, 1);
  sqcRYGate(q, -3.117806235950889, 2);
  sqcRZGate(q, 1.1671742478836686, 2);
  sqcRYGate(q, 1.1253618353549948, 3);
  sqcRZGate(q, 0.5482978362724618, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6660798703394986, 0);
  sqcRZGate(q, -0.9550738866358337, 0);
  sqcRYGate(q, -2.9282347177943913, 1);
  sqcRZGate(q, -2.050807253745681, 1);
  sqcRYGate(q, 2.0529290875884714, 2);
  sqcRZGate(q, 2.638597979644011, 2);
  sqcRYGate(q, -1.0274289937698322, 3);
  sqcRZGate(q, -1.8771178204090226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.56000290036272, 0);
  sqcRZGate(q, -1.6706997442523652, 0);
  sqcRYGate(q, 2.0632201150949934, 1);
  sqcRZGate(q, 0.9106296219244409, 1);
  sqcRYGate(q, -2.183426375070456, 2);
  sqcRZGate(q, 0.6303879681718217, 2);
  sqcRYGate(q, 2.7912683169445867, 3);
  sqcRZGate(q, -1.8170854993942605, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.47009973292589, 0);
  sqcRZGate(q, -1.4681801393122662, 0);
  sqcRYGate(q, -1.5042289516043148, 1);
  sqcRZGate(q, -3.0739311119940393, 1);
  sqcRYGate(q, 1.878582792945343, 2);
  sqcRZGate(q, 0.3205045399726166, 2);
  sqcRYGate(q, 1.1231349796101022, 3);
  sqcRZGate(q, 0.8799635261877325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4322558164549761, 0);
  sqcRZGate(q, 0.12267121105141765, 0);
  sqcRYGate(q, -0.0103627736645257, 1);
  sqcRZGate(q, 0.44957215056528277, 1);
  sqcRYGate(q, -0.9115365033087034, 2);
  sqcRZGate(q, -1.4472472522118283, 2);
  sqcRYGate(q, 1.9541627560556263, 3);
  sqcRZGate(q, -1.8168493220924595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6624485535209588, 0);
  sqcRZGate(q, 0.8233049966022671, 0);
  sqcRYGate(q, 2.996685923591048, 1);
  sqcRZGate(q, 1.350138394858245, 1);
  sqcRYGate(q, -2.116960653911528, 2);
  sqcRZGate(q, -0.4795589803289351, 2);
  sqcRYGate(q, 0.7629009061886376, 3);
  sqcRZGate(q, -2.2184892320697784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5306606547761783, 0);
  sqcRZGate(q, -1.1039745485014316, 0);
  sqcRYGate(q, 2.0937505542652852, 1);
  sqcRZGate(q, 2.0246685366340738, 1);
  sqcRYGate(q, -0.4533750123323319, 2);
  sqcRZGate(q, 0.4522539488056232, 2);
  sqcRYGate(q, 1.8333665850423186, 3);
  sqcRZGate(q, 0.21277271355742594, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7310969510902723, 0);
  sqcRZGate(q, 0.46114449686104475, 0);
  sqcRYGate(q, -2.688611858777551, 1);
  sqcRZGate(q, -2.6246478494706618, 1);
  sqcRYGate(q, 1.0640408360075337, 2);
  sqcRZGate(q, -1.6367034492918617, 2);
  sqcRYGate(q, -0.888648948319454, 3);
  sqcRZGate(q, -2.8627126192712624, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26006516836828114, 0);
  sqcRZGate(q, -1.125488448502698, 0);
  sqcRYGate(q, -2.8566230408391333, 1);
  sqcRZGate(q, 1.1490576520772142, 1);
  sqcRYGate(q, 1.0246989285985846, 2);
  sqcRZGate(q, -0.007664337850942893, 2);
  sqcRYGate(q, -1.698945018866031, 3);
  sqcRZGate(q, 0.482758262614638, 3);

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
