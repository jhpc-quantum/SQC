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

  sqcRYGate(q, -1.3977964736831687, 0);
  sqcRZGate(q, -0.9319348082728425, 0);
  sqcRYGate(q, 0.8777499820585317, 1);
  sqcRZGate(q, 1.9689785669226967, 1);
  sqcRYGate(q, -1.024093522587064, 2);
  sqcRZGate(q, -2.5843717505528536, 2);
  sqcRYGate(q, -1.5265584460584054, 3);
  sqcRZGate(q, -3.1292996069888885, 3);
  sqcRYGate(q, 1.6346383714545958, 4);
  sqcRZGate(q, 0.8498881401888655, 4);
  sqcRYGate(q, -0.20413076039952752, 5);
  sqcRZGate(q, -3.0140210518770276, 5);
  sqcRYGate(q, -2.4509089729565803, 6);
  sqcRZGate(q, 0.9098042487965774, 6);
  sqcRYGate(q, 1.140204294453704, 7);
  sqcRZGate(q, 0.5979836398716664, 7);
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
  sqcRYGate(q, -0.6366677203973944, 0);
  sqcRZGate(q, -1.6865337296920346, 0);
  sqcRYGate(q, 1.5724183494298583, 1);
  sqcRZGate(q, -2.8248374789237407, 1);
  sqcRYGate(q, 2.3611339596713425, 2);
  sqcRZGate(q, -1.0736715760402449, 2);
  sqcRYGate(q, -2.354425631744215, 3);
  sqcRZGate(q, -2.811863429618799, 3);
  sqcRYGate(q, 0.9386475434593927, 4);
  sqcRZGate(q, -1.4399806954316288, 4);
  sqcRYGate(q, 1.6207624543910324, 5);
  sqcRZGate(q, 1.090132768832322, 5);
  sqcRYGate(q, -1.3808336332014752, 6);
  sqcRZGate(q, 0.10030173199253334, 6);
  sqcRYGate(q, -1.0132669016147795, 7);
  sqcRZGate(q, 2.0154549064326766, 7);
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
  sqcRYGate(q, -1.4865037080263468, 0);
  sqcRZGate(q, 3.030526172212429, 0);
  sqcRYGate(q, -3.008767875359894, 1);
  sqcRZGate(q, 1.5212119843291987, 1);
  sqcRYGate(q, 2.999926738418601, 2);
  sqcRZGate(q, -3.0797147146388193, 2);
  sqcRYGate(q, -1.5662686187790298, 3);
  sqcRZGate(q, -2.3497784025251467, 3);
  sqcRYGate(q, -2.419664816832783, 4);
  sqcRZGate(q, -0.6139806948973959, 4);
  sqcRYGate(q, 2.155783157066101, 5);
  sqcRZGate(q, -1.882497781739263, 5);
  sqcRYGate(q, -0.2614473942539641, 6);
  sqcRZGate(q, 2.9546170223252206, 6);
  sqcRYGate(q, 0.8118432180516688, 7);
  sqcRZGate(q, 1.935515964023545, 7);
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
  sqcRYGate(q, 1.5679828138273502, 0);
  sqcRZGate(q, -1.489102726900847, 0);
  sqcRYGate(q, 1.430716941675155, 1);
  sqcRZGate(q, 0.9930366559976712, 1);
  sqcRYGate(q, -0.3523558754536005, 2);
  sqcRZGate(q, 2.606583428509346, 2);
  sqcRYGate(q, -2.0144276460797848, 3);
  sqcRZGate(q, 1.7632692288005316, 3);
  sqcRYGate(q, -1.687068883621171, 4);
  sqcRZGate(q, 0.41999160986763745, 4);
  sqcRYGate(q, 1.973000296725287, 5);
  sqcRZGate(q, -1.8022359974310858, 5);
  sqcRYGate(q, 1.244930513440515, 6);
  sqcRZGate(q, -2.0643769061035506, 6);
  sqcRYGate(q, -1.6475231037846128, 7);
  sqcRZGate(q, -0.3669443279652125, 7);
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
  sqcRYGate(q, -1.2929653499537623, 0);
  sqcRZGate(q, 1.8860713854447795, 0);
  sqcRYGate(q, -3.117000456160427, 1);
  sqcRZGate(q, 3.116540699647316, 1);
  sqcRYGate(q, -0.5617819190368936, 2);
  sqcRZGate(q, -1.7883969405218938, 2);
  sqcRYGate(q, -1.1820528777040635, 3);
  sqcRZGate(q, 1.5554806055621107, 3);
  sqcRYGate(q, 1.234713637758788, 4);
  sqcRZGate(q, -2.993260254824454, 4);
  sqcRYGate(q, 1.0233232896693931, 5);
  sqcRZGate(q, 2.0709450028895167, 5);
  sqcRYGate(q, -1.7951601035926048, 6);
  sqcRZGate(q, -1.2383027171737138, 6);
  sqcRYGate(q, 3.1355710998156017, 7);
  sqcRZGate(q, -1.2806903302178574, 7);
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
  sqcRYGate(q, 1.6123334353636674, 0);
  sqcRZGate(q, -1.9592759411360852, 0);
  sqcRYGate(q, 1.3853101217423731, 1);
  sqcRZGate(q, -2.690730030874875, 1);
  sqcRYGate(q, 2.4348398177384776, 2);
  sqcRZGate(q, 2.961160948765577, 2);
  sqcRYGate(q, -1.1251704320014149, 3);
  sqcRZGate(q, 2.2122123114796293, 3);
  sqcRYGate(q, -2.810200875734685, 4);
  sqcRZGate(q, -0.7024651603166522, 4);
  sqcRYGate(q, 0.6824335036658647, 5);
  sqcRZGate(q, 1.8140684381281111, 5);
  sqcRYGate(q, 1.0677266089684823, 6);
  sqcRZGate(q, 0.32118774389617855, 6);
  sqcRYGate(q, -0.06985031497491878, 7);
  sqcRZGate(q, 0.9683073054498327, 7);
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
  sqcRYGate(q, -1.2242494859461108, 0);
  sqcRZGate(q, 1.121229018149049, 0);
  sqcRYGate(q, -2.503583076449301, 1);
  sqcRZGate(q, 2.874291185726941, 1);
  sqcRYGate(q, 1.1434740359567455, 2);
  sqcRZGate(q, -3.0074450449958623, 2);
  sqcRYGate(q, 2.144228920915643, 3);
  sqcRZGate(q, 0.7202541151069309, 3);
  sqcRYGate(q, 1.5859799518741242, 4);
  sqcRZGate(q, 1.9056092369393594, 4);
  sqcRYGate(q, -2.814521045041853, 5);
  sqcRZGate(q, -1.1650194146826687, 5);
  sqcRYGate(q, 0.675931290666637, 6);
  sqcRZGate(q, -1.9862844734208638, 6);
  sqcRYGate(q, 2.4308056803745446, 7);
  sqcRZGate(q, -3.0552542819782387, 7);
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
  sqcRYGate(q, 1.9914441012251538, 0);
  sqcRZGate(q, 2.0792433444610245, 0);
  sqcRYGate(q, -1.5788244356968333, 1);
  sqcRZGate(q, -2.6894582578057107, 1);
  sqcRYGate(q, 1.5138530885674837, 2);
  sqcRZGate(q, 0.7829581958741425, 2);
  sqcRYGate(q, 1.2228667453805313, 3);
  sqcRZGate(q, 1.9917832112293086, 3);
  sqcRYGate(q, 1.745686396747903, 4);
  sqcRZGate(q, -1.1953205606519264, 4);
  sqcRYGate(q, -0.3039855839854555, 5);
  sqcRZGate(q, -2.028259330179931, 5);
  sqcRYGate(q, 0.25266571521896797, 6);
  sqcRZGate(q, 2.945740633710542, 6);
  sqcRYGate(q, 1.3486464310549522, 7);
  sqcRZGate(q, -0.31538795678369347, 7);
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
  sqcRYGate(q, -1.1810762962598558, 0);
  sqcRZGate(q, -2.7627791870328573, 0);
  sqcRYGate(q, -1.8642998807546274, 1);
  sqcRZGate(q, 0.9662509673728809, 1);
  sqcRYGate(q, 1.1757282036243228, 2);
  sqcRZGate(q, 2.467183108632593, 2);
  sqcRYGate(q, -2.650588813668003, 3);
  sqcRZGate(q, 0.6169561496169818, 3);
  sqcRYGate(q, 1.9906114805212098, 4);
  sqcRZGate(q, 2.8679838028811084, 4);
  sqcRYGate(q, -2.8275337678800954, 5);
  sqcRZGate(q, -1.3998693861001417, 5);
  sqcRYGate(q, 2.625489973020568, 6);
  sqcRZGate(q, -1.3367316733373467, 6);
  sqcRYGate(q, 2.714623510801822, 7);
  sqcRZGate(q, 0.3888175473441206, 7);
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
  sqcRYGate(q, 2.933323226889317, 0);
  sqcRZGate(q, -1.0228322649508073, 0);
  sqcRYGate(q, -0.4041917530486927, 1);
  sqcRZGate(q, 1.1671139222203184, 1);
  sqcRYGate(q, 3.0121448870090313, 2);
  sqcRZGate(q, -2.1128490340424664, 2);
  sqcRYGate(q, -1.7603350200703356, 3);
  sqcRZGate(q, -0.43838983750988236, 3);
  sqcRYGate(q, 2.8828418279653123, 4);
  sqcRZGate(q, -3.02732048073477, 4);
  sqcRYGate(q, 0.23314484137020672, 5);
  sqcRZGate(q, -0.79809096061645, 5);
  sqcRYGate(q, 2.735485174381162, 6);
  sqcRZGate(q, 0.7733292823854265, 6);
  sqcRYGate(q, -1.0942452929366056, 7);
  sqcRZGate(q, 1.8314808693888658, 7);
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
  sqcRYGate(q, 2.1004133870056316, 0);
  sqcRZGate(q, 0.17420953383108273, 0);
  sqcRYGate(q, -0.31744253687460405, 1);
  sqcRZGate(q, -2.002744339820363, 1);
  sqcRYGate(q, -2.750141565134019, 2);
  sqcRZGate(q, -2.53995419906022, 2);
  sqcRYGate(q, -2.093771499520984, 3);
  sqcRZGate(q, -1.6557196457544443, 3);
  sqcRYGate(q, 1.8681877791453962, 4);
  sqcRZGate(q, 1.6863018716596985, 4);
  sqcRYGate(q, 0.9934878616392488, 5);
  sqcRZGate(q, -1.9946301595195004, 5);
  sqcRYGate(q, 0.1389382443111509, 6);
  sqcRZGate(q, -3.0304737444952554, 6);
  sqcRYGate(q, -2.4758865555948457, 7);
  sqcRZGate(q, 1.482270955106442, 7);
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
  sqcRYGate(q, -0.5303649529904666, 0);
  sqcRZGate(q, 0.09655495127161866, 0);
  sqcRYGate(q, 1.7285509085157498, 1);
  sqcRZGate(q, -2.76403950922159, 1);
  sqcRYGate(q, -2.4212129284444335, 2);
  sqcRZGate(q, 0.3424752767896315, 2);
  sqcRYGate(q, -0.7485810503766046, 3);
  sqcRZGate(q, 0.42647158312934064, 3);
  sqcRYGate(q, -2.6027200265145853, 4);
  sqcRZGate(q, -1.2630910923596836, 4);
  sqcRYGate(q, 2.6608145283962403, 5);
  sqcRZGate(q, 2.7685311052255477, 5);
  sqcRYGate(q, -1.0505654059374816, 6);
  sqcRZGate(q, 0.0004362368910102894, 6);
  sqcRYGate(q, -1.4191003798384307, 7);
  sqcRZGate(q, 0.42715483105191504, 7);
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
  sqcRYGate(q, -2.058881231217426, 0);
  sqcRZGate(q, -0.26273446898747643, 0);
  sqcRYGate(q, 2.817904480650515, 1);
  sqcRZGate(q, 1.902785863743293, 1);
  sqcRYGate(q, -1.0488674067693156, 2);
  sqcRZGate(q, 0.2338484731050047, 2);
  sqcRYGate(q, -2.1624489300828165, 3);
  sqcRZGate(q, 0.7103192781308589, 3);
  sqcRYGate(q, 2.8779211377440337, 4);
  sqcRZGate(q, 1.059268133977278, 4);
  sqcRYGate(q, 1.7270618325631046, 5);
  sqcRZGate(q, -0.4314664250624638, 5);
  sqcRYGate(q, 2.814160905885799, 6);
  sqcRZGate(q, -1.168604321326428, 6);
  sqcRYGate(q, -1.2532747400753914, 7);
  sqcRZGate(q, 1.5925088921115167, 7);
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
  sqcRYGate(q, -2.0977440368318594, 0);
  sqcRZGate(q, -1.2630107199311373, 0);
  sqcRYGate(q, -1.6593344737231386, 1);
  sqcRZGate(q, -2.2925065853483186, 1);
  sqcRYGate(q, 2.3880254757906383, 2);
  sqcRZGate(q, 0.9300459165415011, 2);
  sqcRYGate(q, -0.9150585106934022, 3);
  sqcRZGate(q, -1.2060386626777266, 3);
  sqcRYGate(q, 0.589467347450143, 4);
  sqcRZGate(q, -0.31284778917111794, 4);
  sqcRYGate(q, 1.0070820849535367, 5);
  sqcRZGate(q, -3.0637901557941483, 5);
  sqcRYGate(q, 1.496763677529385, 6);
  sqcRZGate(q, 2.1875485073232896, 6);
  sqcRYGate(q, -2.006119595786419, 7);
  sqcRZGate(q, 1.2539327235405109, 7);
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
  sqcRYGate(q, 2.179491269652594, 0);
  sqcRZGate(q, -2.754919064581714, 0);
  sqcRYGate(q, 1.9600993821118424, 1);
  sqcRZGate(q, -2.4514996087712264, 1);
  sqcRYGate(q, 0.9383055763502913, 2);
  sqcRZGate(q, -0.6752544200137827, 2);
  sqcRYGate(q, -2.6427475182515505, 3);
  sqcRZGate(q, 3.1247985942623733, 3);
  sqcRYGate(q, 1.122323614927668, 4);
  sqcRZGate(q, 0.18389770488577903, 4);
  sqcRYGate(q, -2.5893515183056834, 5);
  sqcRZGate(q, 0.4468713155985915, 5);
  sqcRYGate(q, -1.2804813983938925, 6);
  sqcRZGate(q, -1.605965497951214, 6);
  sqcRYGate(q, 0.2679915388169287, 7);
  sqcRZGate(q, -3.0832140775410024, 7);
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
  sqcRYGate(q, 2.8070503719457185, 0);
  sqcRZGate(q, 0.6691603014306216, 0);
  sqcRYGate(q, 1.2876201376421081, 1);
  sqcRZGate(q, -2.28723976019759, 1);
  sqcRYGate(q, 0.6951136317944803, 2);
  sqcRZGate(q, -0.07017234414450549, 2);
  sqcRYGate(q, 0.029689802065210377, 3);
  sqcRZGate(q, 2.96879942560369, 3);
  sqcRYGate(q, 0.47380566166283494, 4);
  sqcRZGate(q, 2.2124083554805116, 4);
  sqcRYGate(q, -1.5627684910482003, 5);
  sqcRZGate(q, 2.4228620231807056, 5);
  sqcRYGate(q, 0.9304084904603451, 6);
  sqcRZGate(q, 0.8419864676735536, 6);
  sqcRYGate(q, -0.15392701827666164, 7);
  sqcRZGate(q, 1.2753356427777636, 7);
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
  sqcRYGate(q, 0.8196723256576551, 0);
  sqcRZGate(q, -2.9216133935419157, 0);
  sqcRYGate(q, -2.0955108111065446, 1);
  sqcRZGate(q, 2.02923753914256, 1);
  sqcRYGate(q, 1.888533249556192, 2);
  sqcRZGate(q, -1.398507337484596, 2);
  sqcRYGate(q, -2.6694320846788036, 3);
  sqcRZGate(q, -0.5871565904432332, 3);
  sqcRYGate(q, 0.21723322668238934, 4);
  sqcRZGate(q, 2.70950084608227, 4);
  sqcRYGate(q, -0.3899019042787675, 5);
  sqcRZGate(q, 1.7570032390978156, 5);
  sqcRYGate(q, -2.6034683093306943, 6);
  sqcRZGate(q, -0.5577903544866711, 6);
  sqcRYGate(q, -1.9226335092998381, 7);
  sqcRZGate(q, 2.021820852037815, 7);
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
  sqcRYGate(q, 1.6151631950207972, 0);
  sqcRZGate(q, 1.553775721059946, 0);
  sqcRYGate(q, 1.800228602884185, 1);
  sqcRZGate(q, -0.812905847464422, 1);
  sqcRYGate(q, 1.3929969205616097, 2);
  sqcRZGate(q, -0.6512828017663398, 2);
  sqcRYGate(q, -3.0516498605631246, 3);
  sqcRZGate(q, -1.0102517928924704, 3);
  sqcRYGate(q, 0.5027084051025452, 4);
  sqcRZGate(q, -1.9709437242033296, 4);
  sqcRYGate(q, 2.365749127420472, 5);
  sqcRZGate(q, -1.7552724050091175, 5);
  sqcRYGate(q, -1.784375336845177, 6);
  sqcRZGate(q, 0.4598782323640966, 6);
  sqcRYGate(q, 2.0625398399776067, 7);
  sqcRZGate(q, -2.4793828357732024, 7);
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
  sqcRYGate(q, 2.427515572642123, 0);
  sqcRZGate(q, -0.9354389245459888, 0);
  sqcRYGate(q, 0.31585696689813775, 1);
  sqcRZGate(q, 1.912590644250292, 1);
  sqcRYGate(q, 1.7238843128326429, 2);
  sqcRZGate(q, -1.3687547805903693, 2);
  sqcRYGate(q, 0.4089064932115587, 3);
  sqcRZGate(q, 1.0963530276049938, 3);
  sqcRYGate(q, -0.5974240845285576, 4);
  sqcRZGate(q, -0.7367177391131322, 4);
  sqcRYGate(q, -3.0818173019885986, 5);
  sqcRZGate(q, -2.97003998923637, 5);
  sqcRYGate(q, 0.4838464216575895, 6);
  sqcRZGate(q, 1.034481936567813, 6);
  sqcRYGate(q, -0.08630839920423926, 7);
  sqcRZGate(q, -0.6925400772232023, 7);
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
  sqcRYGate(q, 1.3856283909624638, 0);
  sqcRZGate(q, -0.5672515038661015, 0);
  sqcRYGate(q, -2.649880848053778, 1);
  sqcRZGate(q, -2.752415602082268, 1);
  sqcRYGate(q, 1.794902991911103, 2);
  sqcRZGate(q, -2.9380621324455913, 2);
  sqcRYGate(q, -0.2672395658497235, 3);
  sqcRZGate(q, -2.0208435495820267, 3);
  sqcRYGate(q, -1.1662096100574448, 4);
  sqcRZGate(q, 0.47659900156065843, 4);
  sqcRYGate(q, 2.7021665354677733, 5);
  sqcRZGate(q, 2.6455365889603364, 5);
  sqcRYGate(q, 1.2714855703429866, 6);
  sqcRZGate(q, -2.179045645029546, 6);
  sqcRYGate(q, 1.734053090097584, 7);
  sqcRZGate(q, 1.7803494407963878, 7);
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
  sqcRYGate(q, -1.8427248364977515, 0);
  sqcRZGate(q, -0.3562192476244981, 0);
  sqcRYGate(q, -2.0665731846865483, 1);
  sqcRZGate(q, -3.085275184198126, 1);
  sqcRYGate(q, -0.9028796421961675, 2);
  sqcRZGate(q, -0.09746615071520282, 2);
  sqcRYGate(q, -0.7958593078389803, 3);
  sqcRZGate(q, 0.21863076962590888, 3);
  sqcRYGate(q, 1.7717211637916552, 4);
  sqcRZGate(q, 2.560963092362244, 4);
  sqcRYGate(q, -1.372312352286829, 5);
  sqcRZGate(q, -1.2697384030977013, 5);
  sqcRYGate(q, 1.9323164223235456, 6);
  sqcRZGate(q, 2.7851758836878893, 6);
  sqcRYGate(q, 1.971265576590901, 7);
  sqcRZGate(q, 2.4558424770499383, 7);
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
  sqcRYGate(q, 1.7277659342490146, 0);
  sqcRZGate(q, 0.4654825615273986, 0);
  sqcRYGate(q, -2.3349972711534845, 1);
  sqcRZGate(q, 1.4924156892249671, 1);
  sqcRYGate(q, 1.9052673999601808, 2);
  sqcRZGate(q, 2.1396421629853313, 2);
  sqcRYGate(q, 2.7802297175313213, 3);
  sqcRZGate(q, -0.44093424836732176, 3);
  sqcRYGate(q, -2.2934447965564373, 4);
  sqcRZGate(q, 1.125444492218536, 4);
  sqcRYGate(q, -0.5406804528772511, 5);
  sqcRZGate(q, -0.3490007165462741, 5);
  sqcRYGate(q, 2.990875555271022, 6);
  sqcRZGate(q, -0.7113044562483337, 6);
  sqcRYGate(q, 2.848036879566165, 7);
  sqcRZGate(q, 1.2288225386921363, 7);
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
  sqcRYGate(q, -0.5022088135899399, 0);
  sqcRZGate(q, 0.4756360209173671, 0);
  sqcRYGate(q, 0.20501056402831458, 1);
  sqcRZGate(q, -1.8330915942378028, 1);
  sqcRYGate(q, 2.3815281662627363, 2);
  sqcRZGate(q, -0.5635982390365388, 2);
  sqcRYGate(q, 2.394205595007195, 3);
  sqcRZGate(q, -0.9923737800833933, 3);
  sqcRYGate(q, 2.944976781086838, 4);
  sqcRZGate(q, -2.0200963519228274, 4);
  sqcRYGate(q, 0.20313854251433008, 5);
  sqcRZGate(q, 2.2220707634295573, 5);
  sqcRYGate(q, 2.677267918628776, 6);
  sqcRZGate(q, 2.052411991195814, 6);
  sqcRYGate(q, -0.7791880203339261, 7);
  sqcRZGate(q, -2.413045338404745, 7);
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
  sqcRYGate(q, 1.3678285239232584, 0);
  sqcRZGate(q, -0.4789921154211658, 0);
  sqcRYGate(q, 2.874573982527169, 1);
  sqcRZGate(q, -1.4494521633500899, 1);
  sqcRYGate(q, -2.800729459378528, 2);
  sqcRZGate(q, -2.926594051617657, 2);
  sqcRYGate(q, 1.1053978142033252, 3);
  sqcRZGate(q, -0.44008877128429885, 3);
  sqcRYGate(q, 0.39795403184069666, 4);
  sqcRZGate(q, -1.9900750404793899, 4);
  sqcRYGate(q, -2.030333618128603, 5);
  sqcRZGate(q, -2.714048260522412, 5);
  sqcRYGate(q, -1.7499287085694735, 6);
  sqcRZGate(q, 0.15820930280641554, 6);
  sqcRYGate(q, 0.19149628583278577, 7);
  sqcRZGate(q, -1.6267697443991764, 7);
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
  sqcRYGate(q, -1.206485814865701, 0);
  sqcRZGate(q, 2.1649860225564685, 0);
  sqcRYGate(q, 2.727246984437732, 1);
  sqcRZGate(q, -0.06158141267225581, 1);
  sqcRYGate(q, 2.590233655917927, 2);
  sqcRZGate(q, 1.5697359925638783, 2);
  sqcRYGate(q, 2.845674292009118, 3);
  sqcRZGate(q, -3.058306033890259, 3);
  sqcRYGate(q, -2.692805049830305, 4);
  sqcRZGate(q, -0.37606470686465077, 4);
  sqcRYGate(q, 1.4306065635643885, 5);
  sqcRZGate(q, 1.7495719445718008, 5);
  sqcRYGate(q, -1.4850083061172454, 6);
  sqcRZGate(q, 1.5806510849232887, 6);
  sqcRYGate(q, 2.2268687552054844, 7);
  sqcRZGate(q, -2.136698145544684, 7);
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
  sqcRYGate(q, 2.9058204249914743, 0);
  sqcRZGate(q, 0.924967437133347, 0);
  sqcRYGate(q, 1.7306764827321928, 1);
  sqcRZGate(q, -0.07120337328711902, 1);
  sqcRYGate(q, -2.185653627037255, 2);
  sqcRZGate(q, -2.7773520575134714, 2);
  sqcRYGate(q, 2.970222428700694, 3);
  sqcRZGate(q, -0.7042825442508873, 3);
  sqcRYGate(q, 0.36603587936966064, 4);
  sqcRZGate(q, -0.8598689488859428, 4);
  sqcRYGate(q, -2.68487970165171, 5);
  sqcRZGate(q, 1.290653129476441, 5);
  sqcRYGate(q, -0.20051173312983384, 6);
  sqcRZGate(q, -1.2361712453565041, 6);
  sqcRYGate(q, 0.4617781596749718, 7);
  sqcRZGate(q, 2.730631815102812, 7);
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
  sqcRYGate(q, -0.8960476524879448, 0);
  sqcRZGate(q, 2.317901416562667, 0);
  sqcRYGate(q, 1.3170119811161063, 1);
  sqcRZGate(q, 1.3797028388582262, 1);
  sqcRYGate(q, -1.838358554155195, 2);
  sqcRZGate(q, -2.150877789333623, 2);
  sqcRYGate(q, -0.7664652643389188, 3);
  sqcRZGate(q, 1.4494836310429378, 3);
  sqcRYGate(q, 1.7600174617756037, 4);
  sqcRZGate(q, -2.9523997664566033, 4);
  sqcRYGate(q, -2.7817949694053348, 5);
  sqcRZGate(q, -1.2888527348226209, 5);
  sqcRYGate(q, 2.1669074645009307, 6);
  sqcRZGate(q, 2.445984089556394, 6);
  sqcRYGate(q, -2.1530922625295075, 7);
  sqcRZGate(q, 1.4508291810634655, 7);
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
  sqcRYGate(q, -2.7803427773846034, 0);
  sqcRZGate(q, 3.1164270560541447, 0);
  sqcRYGate(q, 0.08459347295574834, 1);
  sqcRZGate(q, -0.37730311789511006, 1);
  sqcRYGate(q, 0.6428653725493136, 2);
  sqcRZGate(q, 2.7143911521004322, 2);
  sqcRYGate(q, -1.1525675241148507, 3);
  sqcRZGate(q, 1.3722861712980738, 3);
  sqcRYGate(q, -2.9078015660886556, 4);
  sqcRZGate(q, -1.6706030687126578, 4);
  sqcRYGate(q, 2.7030286730187107, 5);
  sqcRZGate(q, -1.804198659116758, 5);
  sqcRYGate(q, 2.6985899864495173, 6);
  sqcRZGate(q, 0.5799153872605152, 6);
  sqcRYGate(q, 1.0933647064810792, 7);
  sqcRZGate(q, -2.47375105029312, 7);
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
  sqcRYGate(q, -1.8597398264728706, 0);
  sqcRZGate(q, -1.9314405305777633, 0);
  sqcRYGate(q, 2.91647121673722, 1);
  sqcRZGate(q, -2.0474232152434357, 1);
  sqcRYGate(q, 0.31058976833045904, 2);
  sqcRZGate(q, -1.2024203641110192, 2);
  sqcRYGate(q, 2.125138458407305, 3);
  sqcRZGate(q, -1.7693468199726972, 3);
  sqcRYGate(q, 1.2422401666641214, 4);
  sqcRZGate(q, -2.329539068073611, 4);
  sqcRYGate(q, 1.3597253066266806, 5);
  sqcRZGate(q, 2.6605295323986913, 5);
  sqcRYGate(q, 3.005941545594161, 6);
  sqcRZGate(q, 2.913858052022374, 6);
  sqcRYGate(q, -1.2065271140793783, 7);
  sqcRZGate(q, -1.2932547877366494, 7);
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
  sqcRYGate(q, 1.439228203400833, 0);
  sqcRZGate(q, 0.7003384280827393, 0);
  sqcRYGate(q, 0.6254785972603826, 1);
  sqcRZGate(q, 0.0922014319505377, 1);
  sqcRYGate(q, -1.2644165318690233, 2);
  sqcRZGate(q, -0.3062397271435673, 2);
  sqcRYGate(q, 1.114889846108788, 3);
  sqcRZGate(q, -3.057949024223018, 3);
  sqcRYGate(q, 0.7350264166528891, 4);
  sqcRZGate(q, -0.1876676797075526, 4);
  sqcRYGate(q, -1.282234957469264, 5);
  sqcRZGate(q, -1.7294470363446357, 5);
  sqcRYGate(q, 0.9938953168612992, 6);
  sqcRZGate(q, 2.670555839360381, 6);
  sqcRYGate(q, 1.4036729038678817, 7);
  sqcRZGate(q, 1.7772347486386213, 7);
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
  sqcRYGate(q, -0.4142254130330991, 0);
  sqcRZGate(q, -0.8303578230563569, 0);
  sqcRYGate(q, -1.4641581716307923, 1);
  sqcRZGate(q, -1.6405062453081163, 1);
  sqcRYGate(q, 2.379172951908567, 2);
  sqcRZGate(q, 1.7615977599882457, 2);
  sqcRYGate(q, 1.028315951410056, 3);
  sqcRZGate(q, -1.8972054177844528, 3);
  sqcRYGate(q, -2.106822474610857, 4);
  sqcRZGate(q, -2.6195613455822766, 4);
  sqcRYGate(q, -0.3371065783729358, 5);
  sqcRZGate(q, -2.131393202773605, 5);
  sqcRYGate(q, 2.2437733019213946, 6);
  sqcRZGate(q, -1.1195736440532338, 6);
  sqcRYGate(q, -0.5242467198972216, 7);
  sqcRZGate(q, 2.248059521556, 7);

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
