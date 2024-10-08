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

  sqcRYGate(q, -1.4830836761319777, 0);
  sqcRZGate(q, 2.9156708195656513, 0);
  sqcRYGate(q, 1.389746238655879, 1);
  sqcRZGate(q, 1.3254729662020521, 1);
  sqcRYGate(q, 2.964346318381013, 2);
  sqcRZGate(q, 2.766732376590525, 2);
  sqcRYGate(q, 0.4791661264151262, 3);
  sqcRZGate(q, -0.4819883260935209, 3);
  sqcRYGate(q, -2.4688780233649275, 4);
  sqcRZGate(q, 1.1198599966544647, 4);
  sqcRYGate(q, 2.619957762905825, 5);
  sqcRZGate(q, 2.783017627561005, 5);
  sqcRYGate(q, 2.2495211645206927, 6);
  sqcRZGate(q, -1.578086672886589, 6);
  sqcRYGate(q, -2.4166457743411107, 7);
  sqcRZGate(q, 0.5701278166059257, 7);
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
  sqcRYGate(q, 1.3020401235217633, 0);
  sqcRZGate(q, 0.014975469289215226, 0);
  sqcRYGate(q, -3.032390333966685, 1);
  sqcRZGate(q, -1.8393288650929778, 1);
  sqcRYGate(q, -2.9734001504109107, 2);
  sqcRZGate(q, -3.0303749993186253, 2);
  sqcRYGate(q, -1.0163732948100028, 3);
  sqcRZGate(q, 1.022689540219818, 3);
  sqcRYGate(q, 1.1325298212633292, 4);
  sqcRZGate(q, -1.5432353408869692, 4);
  sqcRYGate(q, 2.7252155164176437, 5);
  sqcRZGate(q, -2.0982084006930704, 5);
  sqcRYGate(q, 2.035105049314468, 6);
  sqcRZGate(q, -3.0800680888939183, 6);
  sqcRYGate(q, -1.0623215797271568, 7);
  sqcRZGate(q, -0.09373910184046252, 7);
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
  sqcRYGate(q, -2.9260060150949023, 0);
  sqcRZGate(q, 0.3848424412605836, 0);
  sqcRYGate(q, 0.4898796263865417, 1);
  sqcRZGate(q, -1.0451015166540358, 1);
  sqcRYGate(q, 2.977109157953456, 2);
  sqcRZGate(q, -2.8264383616805917, 2);
  sqcRYGate(q, 0.3969810773863201, 3);
  sqcRZGate(q, 3.0212824862303993, 3);
  sqcRYGate(q, -1.538867490445212, 4);
  sqcRZGate(q, -0.622494870421268, 4);
  sqcRYGate(q, -2.292391330922287, 5);
  sqcRZGate(q, 3.0028429190299146, 5);
  sqcRYGate(q, 2.466154738524939, 6);
  sqcRZGate(q, 2.6044058748877537, 6);
  sqcRYGate(q, -2.000132820695754, 7);
  sqcRZGate(q, 3.0097022145651193, 7);
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
  sqcRYGate(q, 0.9897467773137693, 0);
  sqcRZGate(q, -3.138852503002554, 0);
  sqcRYGate(q, -0.2469435142638888, 1);
  sqcRZGate(q, 0.8778980706664985, 1);
  sqcRYGate(q, -2.427592671265402, 2);
  sqcRZGate(q, -1.4304014803803538, 2);
  sqcRYGate(q, -2.773425602533224, 3);
  sqcRZGate(q, 2.7842867083211758, 3);
  sqcRYGate(q, 0.6924615501345993, 4);
  sqcRZGate(q, -1.9139400228867656, 4);
  sqcRYGate(q, 0.6951933212357864, 5);
  sqcRZGate(q, -1.5559588738440977, 5);
  sqcRYGate(q, -2.307765815185371, 6);
  sqcRZGate(q, 0.9323880714390514, 6);
  sqcRYGate(q, -2.064680347981592, 7);
  sqcRZGate(q, 2.7896678295041855, 7);
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
  sqcRYGate(q, -0.07810405338618326, 0);
  sqcRZGate(q, 2.4712959725647097, 0);
  sqcRYGate(q, 0.605977090176878, 1);
  sqcRZGate(q, -0.4347025705338364, 1);
  sqcRYGate(q, 0.12046633580793566, 2);
  sqcRZGate(q, -2.5921298575333163, 2);
  sqcRYGate(q, -3.07339193231285, 3);
  sqcRZGate(q, -2.949276720973843, 3);
  sqcRYGate(q, 1.3005822536153868, 4);
  sqcRZGate(q, 1.3780759993548974, 4);
  sqcRYGate(q, -2.8924329322675004, 5);
  sqcRZGate(q, 0.3461686374742606, 5);
  sqcRYGate(q, -1.1200965244287735, 6);
  sqcRZGate(q, 0.5703468462146039, 6);
  sqcRYGate(q, -2.6391631891565814, 7);
  sqcRZGate(q, 2.273796601597915, 7);
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
  sqcRYGate(q, -2.188263797564141, 0);
  sqcRZGate(q, -0.05221964216815925, 0);
  sqcRYGate(q, 2.285543711520035, 1);
  sqcRZGate(q, -0.3646342078655482, 1);
  sqcRYGate(q, -1.593787929103905, 2);
  sqcRZGate(q, -1.8900243993107892, 2);
  sqcRYGate(q, -0.5315918420744618, 3);
  sqcRZGate(q, -1.3599753424497938, 3);
  sqcRYGate(q, 1.097528267147143, 4);
  sqcRZGate(q, -0.30892563930529904, 4);
  sqcRYGate(q, 1.2792450234439905, 5);
  sqcRZGate(q, 0.8753432011288581, 5);
  sqcRYGate(q, 1.8104823137237336, 6);
  sqcRZGate(q, 0.1813143289622734, 6);
  sqcRYGate(q, -0.0317272209280868, 7);
  sqcRZGate(q, 0.046251322069199984, 7);
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
  sqcRYGate(q, -0.2278687094071901, 0);
  sqcRZGate(q, -0.5911419721234289, 0);
  sqcRYGate(q, -2.7261882229933274, 1);
  sqcRZGate(q, 1.3900157972351712, 1);
  sqcRYGate(q, 0.1472635337118412, 2);
  sqcRZGate(q, 1.0038218791732074, 2);
  sqcRYGate(q, 3.0642747873972063, 3);
  sqcRZGate(q, -2.2031759512270073, 3);
  sqcRYGate(q, 2.061057293094716, 4);
  sqcRZGate(q, -2.6025854563764437, 4);
  sqcRYGate(q, 0.7772533282138827, 5);
  sqcRZGate(q, -1.3614460488756848, 5);
  sqcRYGate(q, 2.4266663963958774, 6);
  sqcRZGate(q, 0.2267824319443438, 6);
  sqcRYGate(q, -2.2027708570259756, 7);
  sqcRZGate(q, -1.1732155544259262, 7);
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
  sqcRYGate(q, 0.768518185758909, 0);
  sqcRZGate(q, 1.2758017844998273, 0);
  sqcRYGate(q, -2.7620275661944427, 1);
  sqcRZGate(q, -1.5838380538739891, 1);
  sqcRYGate(q, -0.5990918100965033, 2);
  sqcRZGate(q, 0.33312269929622346, 2);
  sqcRYGate(q, -2.1725345365009208, 3);
  sqcRZGate(q, 1.0777414616834902, 3);
  sqcRYGate(q, 2.6287317464171345, 4);
  sqcRZGate(q, -2.5080222980135614, 4);
  sqcRYGate(q, -0.3202599087704161, 5);
  sqcRZGate(q, 3.051037035980026, 5);
  sqcRYGate(q, -1.0757382132806128, 6);
  sqcRZGate(q, -0.3622735817316487, 6);
  sqcRYGate(q, -1.0353670832990707, 7);
  sqcRZGate(q, 1.1117177954871993, 7);
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
  sqcRYGate(q, -2.1561411491681834, 0);
  sqcRZGate(q, 0.35772806163061427, 0);
  sqcRYGate(q, 0.03095798670799166, 1);
  sqcRZGate(q, -0.6860210998097865, 1);
  sqcRYGate(q, 0.11230051840186572, 2);
  sqcRZGate(q, 0.2563044296711956, 2);
  sqcRYGate(q, -2.9183641187555858, 3);
  sqcRZGate(q, -1.988242379638054, 3);
  sqcRYGate(q, 2.573037223539068, 4);
  sqcRZGate(q, -1.861271181736657, 4);
  sqcRYGate(q, -1.815476452886023, 5);
  sqcRZGate(q, -2.1974672020399844, 5);
  sqcRYGate(q, -1.7416832295288391, 6);
  sqcRZGate(q, -1.1923943486358708, 6);
  sqcRYGate(q, 2.8060112321536064, 7);
  sqcRZGate(q, 0.740781249459478, 7);
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
  sqcRYGate(q, 0.4356218101351408, 0);
  sqcRZGate(q, -1.9274995752064408, 0);
  sqcRYGate(q, -0.8603408055881212, 1);
  sqcRZGate(q, 0.5041917570910499, 1);
  sqcRYGate(q, 2.8062573128640005, 2);
  sqcRZGate(q, 0.217875846717272, 2);
  sqcRYGate(q, 2.7878776700607193, 3);
  sqcRZGate(q, 1.2843402694898174, 3);
  sqcRYGate(q, -2.0122580330205055, 4);
  sqcRZGate(q, 1.4529236934435348, 4);
  sqcRYGate(q, 1.5568290732221104, 5);
  sqcRZGate(q, 2.126475054433718, 5);
  sqcRYGate(q, 1.1308102618147027, 6);
  sqcRZGate(q, -0.4161676288097813, 6);
  sqcRYGate(q, -0.9032051064271567, 7);
  sqcRZGate(q, -1.4893642408914942, 7);
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
  sqcRYGate(q, 1.2971030321828108, 0);
  sqcRZGate(q, -1.3393786954846325, 0);
  sqcRYGate(q, -2.9024375432202665, 1);
  sqcRZGate(q, 0.1996838448342242, 1);
  sqcRYGate(q, -2.51990762231841, 2);
  sqcRZGate(q, 0.42181829730203013, 2);
  sqcRYGate(q, -0.248061664958056, 3);
  sqcRZGate(q, 1.929008641486977, 3);
  sqcRYGate(q, -2.266147215019111, 4);
  sqcRZGate(q, -2.0719278388299927, 4);
  sqcRYGate(q, -2.3943611181274917, 5);
  sqcRZGate(q, -0.6205068356296763, 5);
  sqcRYGate(q, -1.2575488434998574, 6);
  sqcRZGate(q, 2.2737735204224157, 6);
  sqcRYGate(q, -2.972533933651546, 7);
  sqcRZGate(q, 2.647098745398407, 7);
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
  sqcRYGate(q, 0.3044818543860428, 0);
  sqcRZGate(q, 2.38737545357039, 0);
  sqcRYGate(q, -0.9839938062332638, 1);
  sqcRZGate(q, -3.0511469763229133, 1);
  sqcRYGate(q, -0.1543294106572743, 2);
  sqcRZGate(q, -0.6446853094351658, 2);
  sqcRYGate(q, 3.002216391014768, 3);
  sqcRZGate(q, 1.9326672369995086, 3);
  sqcRYGate(q, 2.960404165295865, 4);
  sqcRZGate(q, 1.2421588527654377, 4);
  sqcRYGate(q, -0.3557992941918054, 5);
  sqcRZGate(q, 2.218449502470383, 5);
  sqcRYGate(q, -1.3057001562358428, 6);
  sqcRZGate(q, 1.974914256788398, 6);
  sqcRYGate(q, -2.408616526600581, 7);
  sqcRZGate(q, 0.5097276662592628, 7);
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
  sqcRYGate(q, 2.582586327263432, 0);
  sqcRZGate(q, -0.7486920250226222, 0);
  sqcRYGate(q, -0.14154121417445875, 1);
  sqcRZGate(q, 3.1286474047410295, 1);
  sqcRYGate(q, -0.5738999855179321, 2);
  sqcRZGate(q, -1.483788302578895, 2);
  sqcRYGate(q, -2.577354939215589, 3);
  sqcRZGate(q, 0.7231065525426418, 3);
  sqcRYGate(q, -0.13367984645908937, 4);
  sqcRZGate(q, 2.7924884183241505, 4);
  sqcRYGate(q, -0.3018994506822761, 5);
  sqcRZGate(q, -2.7060949304793387, 5);
  sqcRYGate(q, 1.983962311461677, 6);
  sqcRZGate(q, 2.66218069084979, 6);
  sqcRYGate(q, -2.6479138172387686, 7);
  sqcRZGate(q, 2.4551163530905176, 7);
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
  sqcRYGate(q, -1.1749078048819077, 0);
  sqcRZGate(q, -0.052776254858456634, 0);
  sqcRYGate(q, -0.5066026150920004, 1);
  sqcRZGate(q, 0.15899315216865095, 1);
  sqcRYGate(q, -0.22147486014491083, 2);
  sqcRZGate(q, 1.7572247094305915, 2);
  sqcRYGate(q, 3.0012798244400827, 3);
  sqcRZGate(q, 0.2729343900729777, 3);
  sqcRYGate(q, -0.9716774442854073, 4);
  sqcRZGate(q, 0.2242842757152856, 4);
  sqcRYGate(q, 2.6541114045000906, 5);
  sqcRZGate(q, 0.4115580592222957, 5);
  sqcRYGate(q, -0.6076189084367141, 6);
  sqcRZGate(q, 2.38982638490667, 6);
  sqcRYGate(q, 2.1752215628044342, 7);
  sqcRZGate(q, 2.357049326313032, 7);
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
  sqcRYGate(q, -1.0469468316515949, 0);
  sqcRZGate(q, -1.0316172401889245, 0);
  sqcRYGate(q, 0.21535364979906824, 1);
  sqcRZGate(q, -3.137533465752805, 1);
  sqcRYGate(q, 3.086134740193998, 2);
  sqcRZGate(q, -2.5332695096643674, 2);
  sqcRYGate(q, -1.6149457399396265, 3);
  sqcRZGate(q, 2.067540701744786, 3);
  sqcRYGate(q, -1.110222665055292, 4);
  sqcRZGate(q, -1.0151415194940916, 4);
  sqcRYGate(q, 2.6560808518824106, 5);
  sqcRZGate(q, -2.990727743284829, 5);
  sqcRYGate(q, 1.5342700877118602, 6);
  sqcRZGate(q, 0.12344154077630634, 6);
  sqcRYGate(q, 0.33996038338725487, 7);
  sqcRZGate(q, 2.5392223631465662, 7);
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
  sqcRYGate(q, -1.295954487225281, 0);
  sqcRZGate(q, -3.1376993293196236, 0);
  sqcRYGate(q, -0.11918740746513655, 1);
  sqcRZGate(q, 2.5122876542681207, 1);
  sqcRYGate(q, 0.06462933509508277, 2);
  sqcRZGate(q, -0.5079927754172093, 2);
  sqcRYGate(q, 1.7992959558177863, 3);
  sqcRZGate(q, 1.0863673840537533, 3);
  sqcRYGate(q, -1.5213007309689146, 4);
  sqcRZGate(q, -1.82393574396575, 4);
  sqcRYGate(q, -1.7317611227362963, 5);
  sqcRZGate(q, -1.7772286139642857, 5);
  sqcRYGate(q, 0.6527904866377747, 6);
  sqcRZGate(q, 1.1083459156842461, 6);
  sqcRYGate(q, -1.511791648792376, 7);
  sqcRZGate(q, 2.42791906112044, 7);
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
  sqcRYGate(q, -1.9803319215227486, 0);
  sqcRZGate(q, 1.8003794806320044, 0);
  sqcRYGate(q, -0.2342170158344672, 1);
  sqcRZGate(q, 1.8482891109881896, 1);
  sqcRYGate(q, -0.08252586718718646, 2);
  sqcRZGate(q, 2.7872177505236593, 2);
  sqcRYGate(q, 0.5355093364942167, 3);
  sqcRZGate(q, 3.024431588636615, 3);
  sqcRYGate(q, 1.0579618404960929, 4);
  sqcRZGate(q, 0.2917568205781365, 4);
  sqcRYGate(q, -2.4363067275369934, 5);
  sqcRZGate(q, -0.9112114871757603, 5);
  sqcRYGate(q, -2.253146339047194, 6);
  sqcRZGate(q, -1.93928406330804, 6);
  sqcRYGate(q, 2.9508871048648038, 7);
  sqcRZGate(q, 0.03643621431128708, 7);
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
  sqcRYGate(q, -2.4035906076972413, 0);
  sqcRZGate(q, -1.803592941590745, 0);
  sqcRYGate(q, 3.072788975439462, 1);
  sqcRZGate(q, 2.3212650557411614, 1);
  sqcRYGate(q, -2.863912521651041, 2);
  sqcRZGate(q, -0.15887130014773732, 2);
  sqcRYGate(q, -1.6445096037605087, 3);
  sqcRZGate(q, 0.46328265331466745, 3);
  sqcRYGate(q, -1.3017325331661826, 4);
  sqcRZGate(q, 2.1827306755287985, 4);
  sqcRYGate(q, -0.4123779135012784, 5);
  sqcRZGate(q, 2.087526677217088, 5);
  sqcRYGate(q, 2.509161846672841, 6);
  sqcRZGate(q, 1.283273134565798, 6);
  sqcRYGate(q, 2.699753705755372, 7);
  sqcRZGate(q, 0.09174098332317548, 7);
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
  sqcRYGate(q, -0.3746989887401551, 0);
  sqcRZGate(q, 1.1579994676789964, 0);
  sqcRYGate(q, -0.31013525032282885, 1);
  sqcRZGate(q, -1.817556449033007, 1);
  sqcRYGate(q, -2.315925369138866, 2);
  sqcRZGate(q, 2.0298057039352493, 2);
  sqcRYGate(q, 1.568693778065652, 3);
  sqcRZGate(q, 1.2450181143134262, 3);
  sqcRYGate(q, 0.9651378734228744, 4);
  sqcRZGate(q, 0.9187914700538001, 4);
  sqcRYGate(q, -1.329312735496354, 5);
  sqcRZGate(q, 0.738466264013881, 5);
  sqcRYGate(q, -0.4933661968905901, 6);
  sqcRZGate(q, -1.835033182741971, 6);
  sqcRYGate(q, -2.9738808105744328, 7);
  sqcRZGate(q, -1.2507402164192802, 7);
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
  sqcRYGate(q, 3.105012033545392, 0);
  sqcRZGate(q, -0.7804136363456778, 0);
  sqcRYGate(q, 3.0388033104865446, 1);
  sqcRZGate(q, 0.8862121221552144, 1);
  sqcRYGate(q, -0.1250885975369469, 2);
  sqcRZGate(q, 1.1577576932424662, 2);
  sqcRYGate(q, -3.013781543912038, 3);
  sqcRZGate(q, 3.0722937928474536, 3);
  sqcRYGate(q, 2.8705330973530407, 4);
  sqcRZGate(q, 2.5425443534934264, 4);
  sqcRYGate(q, 1.9030039855126226, 5);
  sqcRZGate(q, -1.6704062309971435, 5);
  sqcRYGate(q, 1.5765041499359236, 6);
  sqcRZGate(q, -2.7879665863385967, 6);
  sqcRYGate(q, -1.3882596354075707, 7);
  sqcRZGate(q, -2.367298415075633, 7);
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
  sqcRYGate(q, 2.484453427973286, 0);
  sqcRZGate(q, 2.1075048274912183, 0);
  sqcRYGate(q, -1.9040686201044263, 1);
  sqcRZGate(q, 1.8935081232937656, 1);
  sqcRYGate(q, 2.335328908277532, 2);
  sqcRZGate(q, 0.7700220930466486, 2);
  sqcRYGate(q, -0.693404685752462, 3);
  sqcRZGate(q, 2.342974504060498, 3);
  sqcRYGate(q, 2.7605193650856696, 4);
  sqcRZGate(q, -1.1219301758235525, 4);
  sqcRYGate(q, 0.9366567994260855, 5);
  sqcRZGate(q, 1.277737408258795, 5);
  sqcRYGate(q, -1.0825231772279187, 6);
  sqcRZGate(q, 0.6075117458820857, 6);
  sqcRYGate(q, 0.8874069329087816, 7);
  sqcRZGate(q, -0.24346358216007502, 7);
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
  sqcRYGate(q, -3.0217289810551433, 0);
  sqcRZGate(q, 1.0736532776407932, 0);
  sqcRYGate(q, -1.7430756838459622, 1);
  sqcRZGate(q, 0.18143114399289215, 1);
  sqcRYGate(q, -2.940198220968792, 2);
  sqcRZGate(q, 1.8606956390134437, 2);
  sqcRYGate(q, -1.2027703162880172, 3);
  sqcRZGate(q, 1.6661102500238174, 3);
  sqcRYGate(q, -2.336018270516676, 4);
  sqcRZGate(q, 3.067790954129019, 4);
  sqcRYGate(q, 1.3985951437071102, 5);
  sqcRZGate(q, 2.662008724295516, 5);
  sqcRYGate(q, -0.8638281986978287, 6);
  sqcRZGate(q, 2.0939326148966964, 6);
  sqcRYGate(q, 0.32932541720849884, 7);
  sqcRZGate(q, -0.1676910312374985, 7);

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
