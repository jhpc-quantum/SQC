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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.2950848962572259, 0);
  sqcRYGate(q, -0.8687593458628131, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4443039310909702, 0);
  sqcRYGate(q, 1.8106181262742922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9339117681257028, 1);
  sqcRYGate(q, -1.0022169582795115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0167257277140265, 1);
  sqcRYGate(q, 1.1984634072184592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4888943789726032, 2);
  sqcRYGate(q, 0.6996624727666707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5525177474511702, 2);
  sqcRYGate(q, 3.03425940175223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9727700187961839, 3);
  sqcRYGate(q, -0.32796049587408255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8972679401181605, 3);
  sqcRYGate(q, -2.252385173668836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5725447415857737, 4);
  sqcRYGate(q, -2.842881546793986, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4899264481516104, 4);
  sqcRYGate(q, -2.2195184402949586, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4856033930322, 5);
  sqcRYGate(q, 0.30535240061990976, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.683652152524024, 5);
  sqcRYGate(q, 2.6488923060529848, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3888542739165871, 6);
  sqcRYGate(q, 2.8225150390744758, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.083699560416132, 6);
  sqcRYGate(q, 2.495275925353808, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4202355452804305, 0);
  sqcRYGate(q, -0.3554317668433973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2847913511534381, 0);
  sqcRYGate(q, 1.4041855846275277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6888681965244319, 1);
  sqcRYGate(q, 0.08806127536349462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6715832155310224, 1);
  sqcRYGate(q, 0.8306399174582363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.663342014731783, 2);
  sqcRYGate(q, -1.3083771073627462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6725764638883169, 2);
  sqcRYGate(q, -3.0922892087141736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.09403497651789, 3);
  sqcRYGate(q, 1.9276776498984636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8139495831614045, 3);
  sqcRYGate(q, 1.8227341529581889, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1127920440879535, 4);
  sqcRYGate(q, 1.3585445817261212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9675947681195788, 4);
  sqcRYGate(q, 0.9964506018435326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7712130184788473, 5);
  sqcRYGate(q, 0.7554504891815199, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.23741075876375187, 5);
  sqcRYGate(q, -0.13569101187092894, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09266268820452872, 6);
  sqcRYGate(q, -0.5329933467668817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5470010494667554, 6);
  sqcRYGate(q, 1.8410426256380514, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.125340321495762, 0);
  sqcRYGate(q, 0.2094664385702707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4192946729493041, 0);
  sqcRYGate(q, 1.3668215029603001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9713683006218687, 1);
  sqcRYGate(q, -1.8745508025697275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2226590563306416, 1);
  sqcRYGate(q, -2.0399284217171014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3216730962067667, 2);
  sqcRYGate(q, 1.5315054504631238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6635461398376004, 2);
  sqcRYGate(q, -2.3459881007200294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04345444124160558, 3);
  sqcRYGate(q, -1.2760855441138892, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.980119331563259, 3);
  sqcRYGate(q, -2.85794129613686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.878156746903036, 4);
  sqcRYGate(q, 1.1583121084776753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.266065394715124, 4);
  sqcRYGate(q, -2.390457140036344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.075919358430447, 5);
  sqcRYGate(q, -1.3581624643124162, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4321087098176397, 5);
  sqcRYGate(q, 1.2721764413478642, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7154182800527495, 6);
  sqcRYGate(q, 0.14705665831969217, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2428696205654277, 6);
  sqcRYGate(q, -2.19300321807528, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5109404242922585, 0);
  sqcRYGate(q, -0.7007086227496977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.961295084400311, 0);
  sqcRYGate(q, 1.713646974870785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2275995382330374, 1);
  sqcRYGate(q, -1.723204701106613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9179740438696983, 1);
  sqcRYGate(q, -1.2505671592809984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.022588038844225503, 2);
  sqcRYGate(q, 0.010262469453577339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8374309533957538, 2);
  sqcRYGate(q, 2.1499730515113447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1260138096396295, 3);
  sqcRYGate(q, -0.8034135992221297, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.508029791948032, 3);
  sqcRYGate(q, -1.923907457471108, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.19905871369217998, 4);
  sqcRYGate(q, 0.6506529066938012, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1262578103332883, 4);
  sqcRYGate(q, 0.31793477760359146, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1528691285841921, 5);
  sqcRYGate(q, -1.7203033680190296, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0692220583038776, 5);
  sqcRYGate(q, 1.6492348310211025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5199115646353762, 6);
  sqcRYGate(q, 1.278766302927898, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4409918267381734, 6);
  sqcRYGate(q, 1.8605870198777492, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0447636680548467, 0);
  sqcRYGate(q, 1.6883682705158698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9061284606521678, 0);
  sqcRYGate(q, -1.1392154662491747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.51878791541594, 1);
  sqcRYGate(q, 2.8683723536130543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0824677761361279, 1);
  sqcRYGate(q, 2.4555327058365646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.766425123095093, 2);
  sqcRYGate(q, 1.4575525772046458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.606020077413023, 2);
  sqcRYGate(q, -0.8223596820488067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9316030467951293, 3);
  sqcRYGate(q, -0.9062515412775803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.013377758153842, 3);
  sqcRYGate(q, -2.577474722857229, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.096330274122624, 4);
  sqcRYGate(q, -1.1026452474643902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.98400387367227, 4);
  sqcRYGate(q, -2.8399205408486545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0859235173932418, 5);
  sqcRYGate(q, 0.9448001343045661, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8726265983232504, 5);
  sqcRYGate(q, -0.8050390868770502, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4453650398915063, 6);
  sqcRYGate(q, -1.9969884936533866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5128249439174069, 6);
  sqcRYGate(q, 0.725431526562101, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.994059395886277, 0);
  sqcRYGate(q, -0.9298554792256031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06635911727115099, 0);
  sqcRYGate(q, -2.439161905404327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.018701622995792852, 1);
  sqcRYGate(q, 0.36526965798191124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8425576389239362, 1);
  sqcRYGate(q, 1.367380583258024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8246188696205587, 2);
  sqcRYGate(q, -1.9882760133510562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8114579407303852, 2);
  sqcRYGate(q, 2.8788870552325396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9267986209531984, 3);
  sqcRYGate(q, 0.4118899938706251, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7557177197568862, 3);
  sqcRYGate(q, -1.6241853980715018, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.084467154970498, 4);
  sqcRYGate(q, 1.5683450865575828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9392859651165792, 4);
  sqcRYGate(q, 2.8348694478435026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.939478786934497, 5);
  sqcRYGate(q, -1.3895070537338434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.288659838919763, 5);
  sqcRYGate(q, -2.126751644620295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.68213493370883, 6);
  sqcRYGate(q, 1.694487717091972, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.095633229491126, 6);
  sqcRYGate(q, 1.47553435303887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4953805458483327, 0);
  sqcRYGate(q, -0.7292468395355167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.086800438336494, 0);
  sqcRYGate(q, 2.585814625373448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.714277562000873, 1);
  sqcRYGate(q, 0.46787044577397197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6032700701963547, 1);
  sqcRYGate(q, 1.4496118334120682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0581437404094451, 2);
  sqcRYGate(q, -1.0274960856160915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9357590424182014, 2);
  sqcRYGate(q, -0.02129817315055771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5256879289331806, 3);
  sqcRYGate(q, -1.7081346700337063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.21106703355256687, 3);
  sqcRYGate(q, -1.6051879169000942, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6642538254129517, 4);
  sqcRYGate(q, 2.475609998130207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8576603634789568, 4);
  sqcRYGate(q, 1.3623284604174335, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7766693364913, 5);
  sqcRYGate(q, -1.7083861645722955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8253312886183473, 5);
  sqcRYGate(q, -1.0827397926407487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0259900197347953, 6);
  sqcRYGate(q, -2.2538744941205353, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.775884227738291, 6);
  sqcRYGate(q, 0.8142377791026583, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6949982746994015, 0);
  sqcRYGate(q, -0.33458202253858593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08828304101423178, 0);
  sqcRYGate(q, 0.7552811360335523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.735884135034839, 1);
  sqcRYGate(q, -0.515072891239714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.225913107914843, 1);
  sqcRYGate(q, -0.6133174015410194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4909966472571992, 2);
  sqcRYGate(q, -2.4291501701310962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8467816501538943, 2);
  sqcRYGate(q, -0.1558564819198722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7127945671663003, 3);
  sqcRYGate(q, 0.8444099136660053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5635886478832128, 3);
  sqcRYGate(q, -2.082882351749907, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1518937583880335, 4);
  sqcRYGate(q, 1.623609644329433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9516310089674029, 4);
  sqcRYGate(q, -1.596575698787425, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.31773576907994955, 5);
  sqcRYGate(q, 2.112071835547394, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3156444848500897, 5);
  sqcRYGate(q, 1.451415571370444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8955375811548538, 6);
  sqcRYGate(q, 1.292154285559029, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.47733768610788907, 6);
  sqcRYGate(q, -1.93764453212106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.12067214517042384, 0);
  sqcRYGate(q, 0.2931932271667505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2245734922027927, 0);
  sqcRYGate(q, -2.6814480472075886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8727239306650767, 1);
  sqcRYGate(q, 0.9123450306573968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.177226937245217, 1);
  sqcRYGate(q, 1.4222132308885964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9773059765111461, 2);
  sqcRYGate(q, 1.974492609562437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4306411327187716, 2);
  sqcRYGate(q, 3.0658115111834485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9395953236315726, 3);
  sqcRYGate(q, -2.044780645303355, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.277643876024597, 3);
  sqcRYGate(q, -2.6034165146718355, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9684531968565944, 4);
  sqcRYGate(q, -0.7316746554678494, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.102177414694644, 4);
  sqcRYGate(q, -1.7404782929227876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.111608798269148, 5);
  sqcRYGate(q, 2.1305217269311556, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7934960871510858, 5);
  sqcRYGate(q, 3.0435313690560233, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5414406671205265, 6);
  sqcRYGate(q, 0.839504486715946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5653629142868684, 6);
  sqcRYGate(q, 0.6378120811824172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8218795736766185, 0);
  sqcRYGate(q, -0.7952043799725788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0998547522605033, 0);
  sqcRYGate(q, -0.7596189855629526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9848940112829783, 1);
  sqcRYGate(q, -1.0158142772169514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9636181814126553, 1);
  sqcRYGate(q, -2.6148561708532574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.660452826716496, 2);
  sqcRYGate(q, -1.167953090621704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.582365561853397, 2);
  sqcRYGate(q, 2.829994296941835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.116930103701449, 3);
  sqcRYGate(q, -0.4948398514870771, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9419803342210766, 3);
  sqcRYGate(q, -1.6748950816348378, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0820145773356735, 4);
  sqcRYGate(q, -2.4294350348573395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.79478386580661, 4);
  sqcRYGate(q, -2.478947349323438, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3514728518302173, 5);
  sqcRYGate(q, 2.5906426593934473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12181563381000657, 5);
  sqcRYGate(q, -2.9453039499850195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7460810826448467, 6);
  sqcRYGate(q, -1.535651267133824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20637593134719937, 6);
  sqcRYGate(q, 0.41340931541410014, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7543251949564592, 0);
  sqcRYGate(q, -1.0658345561864926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.32306695432540966, 0);
  sqcRYGate(q, 2.8863162277058736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0744756838634437, 1);
  sqcRYGate(q, 1.4937308083196255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.064802083334393, 1);
  sqcRYGate(q, 2.51287795305517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.089304340340755, 2);
  sqcRYGate(q, 3.1272103717339066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.038351849645319, 2);
  sqcRYGate(q, 2.283767017224013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.879151825674869, 3);
  sqcRYGate(q, 2.790497604730222, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5040928290730489, 3);
  sqcRYGate(q, -0.7907458094903959, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.296090270649546, 4);
  sqcRYGate(q, 2.322961193196183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.952810039091816, 4);
  sqcRYGate(q, 1.2916894759332163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3333233715502537, 5);
  sqcRYGate(q, -0.12001328407720546, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1427346520652213, 5);
  sqcRYGate(q, 2.301491492434972, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3904463643455656, 6);
  sqcRYGate(q, 2.859953511387861, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.033846283464535, 6);
  sqcRYGate(q, 2.035139724355636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1387784654331043, 0);
  sqcRYGate(q, -0.2669625875381663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3510796903083915, 0);
  sqcRYGate(q, -0.92778037907211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.558053963094994, 1);
  sqcRYGate(q, -2.389840792984127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.55514021558443, 1);
  sqcRYGate(q, -1.4041052374541687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7351569800589184, 2);
  sqcRYGate(q, 0.1976476068099684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0126520180304492, 2);
  sqcRYGate(q, -2.2880513395492534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8344630742734767, 3);
  sqcRYGate(q, -2.4864121412200215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1466097434397096, 3);
  sqcRYGate(q, -1.984035945437688, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5309857871179943, 4);
  sqcRYGate(q, -1.3588177789096134, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.25084096874183837, 4);
  sqcRYGate(q, -1.0193035117684155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6023841140296164, 5);
  sqcRYGate(q, -2.033996395784687, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.10150843969073373, 5);
  sqcRYGate(q, 2.8898613307117316, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5161238309573424, 6);
  sqcRYGate(q, 2.9820847111457756, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9359896958463443, 6);
  sqcRYGate(q, 1.8031177698741052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1336292638992074, 0);
  sqcRYGate(q, -0.2240987559625603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9205316322989625, 0);
  sqcRYGate(q, 2.349100946126583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9008133918452014, 1);
  sqcRYGate(q, -1.5361818990547604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.523535779954284, 1);
  sqcRYGate(q, -2.9227527475173827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8011796260078372, 2);
  sqcRYGate(q, -1.7713086050182305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.755649318269031, 2);
  sqcRYGate(q, 0.510950063937512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3876369723133357, 3);
  sqcRYGate(q, -2.334728547794996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6780769956084611, 3);
  sqcRYGate(q, 0.8617235994211717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9947729537340244, 4);
  sqcRYGate(q, -2.393101161074711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2329344849303547, 4);
  sqcRYGate(q, -1.5201785586605148, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9541032007321935, 5);
  sqcRYGate(q, 2.2331819282759535, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1589643570387178, 5);
  sqcRYGate(q, -1.4254707843300187, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3744862070366748, 6);
  sqcRYGate(q, -0.5505828418306866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3621549379643758, 6);
  sqcRYGate(q, 1.3352861156894658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2668571580320744, 0);
  sqcRYGate(q, -1.5749128005525304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8146282849555675, 0);
  sqcRYGate(q, -1.3985172251019204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9340772759051466, 1);
  sqcRYGate(q, 2.8064966445599397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.984974049679644, 1);
  sqcRYGate(q, 1.1169342860352565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5801891430699098, 2);
  sqcRYGate(q, 2.490565200040023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8798022639782537, 2);
  sqcRYGate(q, 0.49079913187508845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.065767420076954, 3);
  sqcRYGate(q, -1.8192909718922872, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8619367652584566, 3);
  sqcRYGate(q, -0.5070257341307097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3881622069908621, 4);
  sqcRYGate(q, 1.470325934669898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6319236152413744, 4);
  sqcRYGate(q, 0.5037968228195115, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4720295032486321, 5);
  sqcRYGate(q, -2.283915277566794, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8067191613297544, 5);
  sqcRYGate(q, 2.6965691798080957, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5115588142068994, 6);
  sqcRYGate(q, -1.1873220722568605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17444166166353003, 6);
  sqcRYGate(q, 1.3122883224287039, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1849883863452746, 0);
  sqcRYGate(q, -2.2952439331200094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.076941021361339, 0);
  sqcRYGate(q, 0.8365388774789815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4996605599239076, 1);
  sqcRYGate(q, -0.8555733052960557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6252070169595063, 1);
  sqcRYGate(q, -0.01760295343144591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25235447124448224, 2);
  sqcRYGate(q, -1.345508544977001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7660303115322573, 2);
  sqcRYGate(q, 0.3694698088186413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2162429491039495, 3);
  sqcRYGate(q, -0.7454056345761835, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6678896478986777, 3);
  sqcRYGate(q, -0.7990005839490024, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1902467199372104, 4);
  sqcRYGate(q, -3.1198898641594304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1641270145302482, 4);
  sqcRYGate(q, -1.4966723661118104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9952029179523136, 5);
  sqcRYGate(q, -0.5203700633420184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5265335084229426, 5);
  sqcRYGate(q, -0.40190000985287444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7203354265303976, 6);
  sqcRYGate(q, -2.8386959115203814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6716336622047259, 6);
  sqcRYGate(q, 1.5789164030337144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.423894200675529, 0);
  sqcRYGate(q, -1.834548405324636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.234672806936819, 0);
  sqcRYGate(q, 1.5781423169971875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04907727312800411, 1);
  sqcRYGate(q, -0.6367848455583903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.004945257870979, 1);
  sqcRYGate(q, -2.9026888646792828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8677861174910078, 2);
  sqcRYGate(q, 1.35736435099592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3493881693984076, 2);
  sqcRYGate(q, 1.6388045376012847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7130590084865616, 3);
  sqcRYGate(q, 0.10476055952614476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7552630371172313, 3);
  sqcRYGate(q, 1.8250986498808413, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.537391107336103, 4);
  sqcRYGate(q, -0.9363804681591077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6252106498765475, 4);
  sqcRYGate(q, -0.12858853064001075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0631048917096164, 5);
  sqcRYGate(q, -0.10111645689322835, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.343689069103693, 5);
  sqcRYGate(q, 1.314343504932605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4514184332582064, 6);
  sqcRYGate(q, -0.013079247243434209, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7181250495990736, 6);
  sqcRYGate(q, 2.1817652125540707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9727904024280232, 0);
  sqcRYGate(q, 0.3143742458788674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5355187836388584, 0);
  sqcRYGate(q, -1.4157174035329312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6012301102855435, 1);
  sqcRYGate(q, -1.1171252685489055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32145521645511277, 1);
  sqcRYGate(q, -0.08765482296385585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2554743004711824, 2);
  sqcRYGate(q, 2.592971958917888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5355200889667471, 2);
  sqcRYGate(q, 0.4133186646514906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15053044733377696, 3);
  sqcRYGate(q, 0.39250957203588444, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3960335765296645, 3);
  sqcRYGate(q, -1.5469947002246514, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.493569268894726, 4);
  sqcRYGate(q, -0.6951278374400848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9172763971540587, 4);
  sqcRYGate(q, -0.5282019526330792, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9305699523071396, 5);
  sqcRYGate(q, -2.2124562220849597, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7310038202581572, 5);
  sqcRYGate(q, 2.732735155944481, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3077311967322647, 6);
  sqcRYGate(q, 0.8207054087683028, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9092045815745147, 6);
  sqcRYGate(q, 1.2650747214685494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.839210320870988, 0);
  sqcRYGate(q, 2.7630786632462065, 1);
  sqcRYGate(q, -2.791670492547232, 2);
  sqcRYGate(q, -1.784984808080667, 3);
  sqcRYGate(q, 1.9258064883627997, 4);
  sqcRYGate(q, 0.8573148681872802, 5);
  sqcRYGate(q, -2.8080086227986847, 6);
  sqcRYGate(q, 0.02165641444825064, 7);

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
