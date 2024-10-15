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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.0268231817591518, 0);
  sqcRYGate(q, -2.116845506188513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.263657794963566, 0);
  sqcRYGate(q, 0.7069495554258731, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.559205355882384, 2);
  sqcRYGate(q, 1.8568397800312404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.449311384572192, 2);
  sqcRYGate(q, -2.473605999060317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46718735487471563, 4);
  sqcRYGate(q, 1.5238902575782571, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.971317829943031, 4);
  sqcRYGate(q, 2.9091997849626274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3224662197906807, 6);
  sqcRYGate(q, -0.6648968125467335, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2912384803182322, 6);
  sqcRYGate(q, 1.2562021078255414, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.68834215179103, 8);
  sqcRYGate(q, -0.5016968291841454, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0012477285583519, 8);
  sqcRYGate(q, 0.8887834256893666, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.617921393684097, 10);
  sqcRYGate(q, 2.90615984935028, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9768241911978444, 10);
  sqcRYGate(q, 0.29800699521454593, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.48165128346767183, 12);
  sqcRYGate(q, 1.0970720749960592, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.4231939804413223, 12);
  sqcRYGate(q, 2.0639206112604773, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3247410434349405, 14);
  sqcRYGate(q, -2.0880977205769837, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2360976240131166, 14);
  sqcRYGate(q, -0.8063619144747294, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.08352863212373796, 16);
  sqcRYGate(q, -0.9776904641530288, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.4417713127608626, 16);
  sqcRYGate(q, 2.4417317364088817, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.371495338830623, 18);
  sqcRYGate(q, 0.11328242447051373, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5620221308913661, 18);
  sqcRYGate(q, 0.7641628041255599, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6006171919155077, 0);
  sqcRYGate(q, -1.3403219359278837, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8563560158123389, 0);
  sqcRYGate(q, 2.879790809172944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.885012849706906, 2);
  sqcRYGate(q, -1.4380597608415429, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.742619539164183, 2);
  sqcRYGate(q, 0.5841321473954348, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.959561085983081, 4);
  sqcRYGate(q, 0.6303393811845409, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.21002069020134065, 4);
  sqcRYGate(q, -0.3617450000071161, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2382169969152832, 6);
  sqcRYGate(q, -2.31476662372319, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.4203531917867047, 6);
  sqcRYGate(q, 2.9385923921495096, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8128454419789581, 8);
  sqcRYGate(q, -0.5767127552822332, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.580195253171668, 8);
  sqcRYGate(q, -1.5024341175177964, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4241355680530703, 10);
  sqcRYGate(q, -2.5565447497372666, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.5416117580971456, 10);
  sqcRYGate(q, -0.09672504799166592, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.35696788764158077, 12);
  sqcRYGate(q, -2.5118267916356625, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.9616182850445627, 12);
  sqcRYGate(q, -0.9678092764962651, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.1291584486836288, 14);
  sqcRYGate(q, 2.220178467617951, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.5277213942888208, 14);
  sqcRYGate(q, 2.9483556105919417, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.6639379156149872, 16);
  sqcRYGate(q, -3.133740490688934, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.5041290354144996, 16);
  sqcRYGate(q, -2.409801829113931, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.14840974133557605, 1);
  sqcRYGate(q, 1.5788849942679732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7030890808069374, 1);
  sqcRYGate(q, -0.3628641645008965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2033529755206382, 3);
  sqcRYGate(q, -1.6272884861716888, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3070143401553533, 3);
  sqcRYGate(q, 0.8072203578286876, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.820136123609677, 5);
  sqcRYGate(q, 0.6357363913320135, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3968816227669665, 5);
  sqcRYGate(q, 1.2248990740742998, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.15057466123136826, 7);
  sqcRYGate(q, 3.064281678044312, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.11060830114716237, 7);
  sqcRYGate(q, 3.0985511803109205, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5918172953237764, 9);
  sqcRYGate(q, 0.9596412660023057, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.3173514263048949, 9);
  sqcRYGate(q, -0.1813710929266943, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.8913078844513864, 11);
  sqcRYGate(q, -2.8239497144979566, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1368859812483656, 11);
  sqcRYGate(q, 3.132982121441563, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.787982454667885, 13);
  sqcRYGate(q, -3.111616792485858, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.016902292078497, 13);
  sqcRYGate(q, -0.3733034986862229, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.481251757958698, 15);
  sqcRYGate(q, 0.15481859383795224, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.4110476975897988, 15);
  sqcRYGate(q, -3.1288943310451645, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.4863611228637534, 17);
  sqcRYGate(q, -0.1879181639344634, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.8807336048884173, 17);
  sqcRYGate(q, 2.9264446020463453, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.834319792117686, 0);
  sqcRYGate(q, 1.917068583797552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2711504030557503, 0);
  sqcRYGate(q, -1.8050433746492291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4656117066584162, 2);
  sqcRYGate(q, 1.7362225683652333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1479506756496447, 2);
  sqcRYGate(q, 1.2272337976094005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6028967695060405, 4);
  sqcRYGate(q, 2.777254234384171, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3656681426223208, 4);
  sqcRYGate(q, 2.2910536077034647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9947384692892483, 6);
  sqcRYGate(q, 2.571483951306986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1260804748450317, 6);
  sqcRYGate(q, 0.06868660269254347, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.59916676357261, 8);
  sqcRYGate(q, 2.9585266898359683, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4733760145014745, 8);
  sqcRYGate(q, -1.1721702226619928, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8842238095093498, 10);
  sqcRYGate(q, -2.2291201631823014, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4529548061425999, 10);
  sqcRYGate(q, -0.01412520785744853, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8905063970234891, 12);
  sqcRYGate(q, 1.9158180011406678, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1235967894342624, 12);
  sqcRYGate(q, -0.0015491727717207263, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.0141560547337773, 14);
  sqcRYGate(q, 0.39454955408064574, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.025777803418128648, 14);
  sqcRYGate(q, 3.135254454341351, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2868763385402575, 16);
  sqcRYGate(q, 2.080435747464119, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.16354302607186444, 16);
  sqcRYGate(q, 3.0316859695679472, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.22335165446252908, 18);
  sqcRYGate(q, -2.6188447696432093, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.8781007305975417, 18);
  sqcRYGate(q, 0.014426723300184442, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.8596561001156902, 0);
  sqcRYGate(q, 2.412783086177065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3413673315899697, 0);
  sqcRYGate(q, 0.23207826878880589, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8908477790691434, 2);
  sqcRYGate(q, -2.2654545009207667, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.239947763525623, 2);
  sqcRYGate(q, 1.8535405731173396, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5336336127395853, 4);
  sqcRYGate(q, 1.6122376097334188, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.16990251160321093, 4);
  sqcRYGate(q, -1.5215537835282813, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6372522406740062, 6);
  sqcRYGate(q, -1.8362392590495402, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.053142144743203446, 6);
  sqcRYGate(q, 0.9986897442143476, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.40879483427563074, 8);
  sqcRYGate(q, 1.9863455719103156, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.989429581775782, 8);
  sqcRYGate(q, -2.7762602806761647, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5374636335739362, 10);
  sqcRYGate(q, -2.5895868017754893, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5590161042790933, 10);
  sqcRYGate(q, -0.12065657460375956, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.983695757379179, 12);
  sqcRYGate(q, 0.18644907197097157, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.942228178070518, 12);
  sqcRYGate(q, -0.7409136260875515, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.7598370697847194, 14);
  sqcRYGate(q, -0.6612382785567099, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.2291975811836946, 14);
  sqcRYGate(q, -0.10565353249508307, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.1769116064247918, 16);
  sqcRYGate(q, 3.0012588130430418, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.3571276156128294, 16);
  sqcRYGate(q, -1.7627470572306239, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.2886880286625626, 1);
  sqcRYGate(q, -1.857008536427129, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7301972974466262, 1);
  sqcRYGate(q, 0.79607065330854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4822544971954175, 3);
  sqcRYGate(q, -2.811770053411154, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.014771650207137554, 3);
  sqcRYGate(q, 0.3530575140932339, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3658422837548687, 5);
  sqcRYGate(q, -2.1655820970504442, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1190280640237296, 5);
  sqcRYGate(q, 1.3024722813676375, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1843157757802447, 7);
  sqcRYGate(q, -0.02648416838166622, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5481419715405238, 7);
  sqcRYGate(q, 1.674201606600697, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.1375902879816866, 9);
  sqcRYGate(q, 2.301288528862065, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.393315845973699, 9);
  sqcRYGate(q, -1.2344699656308364, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.643544736498731, 11);
  sqcRYGate(q, 0.23765906484516375, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.087449318949398, 11);
  sqcRYGate(q, -3.11205984274133, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.0473313253283125, 13);
  sqcRYGate(q, 1.4970250621541228, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.036108111532716, 13);
  sqcRYGate(q, -1.454122752195114, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.0488288970292698, 15);
  sqcRYGate(q, 1.544754929411119, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.0212823352546625, 15);
  sqcRYGate(q, 3.064167676754959, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.943079078846961, 17);
  sqcRYGate(q, 1.6496806175915895, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.1211797111301007, 17);
  sqcRYGate(q, -3.118495226136631, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.198574076253336, 0);
  sqcRYGate(q, 2.7462788601025476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05533123499614767, 0);
  sqcRYGate(q, -3.1143506391644706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.006316257448429, 2);
  sqcRYGate(q, -2.2450231939810035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14006273195697183, 2);
  sqcRYGate(q, -0.06064476563608512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0432821644808028, 4);
  sqcRYGate(q, -2.8049008885827136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.011757737939402269, 4);
  sqcRYGate(q, 0.062114358355077386, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.26992030158635494, 6);
  sqcRYGate(q, -2.751329387809816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0033456395652827864, 6);
  sqcRYGate(q, -3.122863056693037, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5497649801691273, 8);
  sqcRYGate(q, -0.34161614269672036, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.06980115189019287, 8);
  sqcRYGate(q, -3.1393214368172995, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.899192011567244, 10);
  sqcRYGate(q, -2.6634744336069764, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0041744872730853045, 10);
  sqcRYGate(q, -0.002638296449566369, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5889706693800643, 12);
  sqcRYGate(q, 1.6259738584259429, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.012533720943929075, 12);
  sqcRYGate(q, 0.0019185724543202556, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.1254958218647522, 14);
  sqcRYGate(q, 3.0264327940438087, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.136729837130812, 14);
  sqcRYGate(q, -3.137147750882948, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.41919604289678, 16);
  sqcRYGate(q, 2.933054838444214, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1376416915637884, 16);
  sqcRYGate(q, -3.0097206650648944, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.8884649848493718, 18);
  sqcRYGate(q, 2.2007472673359993, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.4875090604451558, 18);
  sqcRYGate(q, -0.16834930021670177, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.4006758608781326, 0);
  sqcRYGate(q, 2.499309750165706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5007262901663054, 0);
  sqcRYGate(q, 0.7305166597217099, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1426967762691422, 2);
  sqcRYGate(q, 0.09334650829133562, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.686140958720343, 2);
  sqcRYGate(q, 2.515087782936874, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2923083821433945, 4);
  sqcRYGate(q, 0.2843533401009166, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0005589102561485149, 4);
  sqcRYGate(q, 0.058096439960070675, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.46304042562000003, 6);
  sqcRYGate(q, 0.5501364204631863, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5602426019473663, 6);
  sqcRYGate(q, -1.0155535273878118, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5883297714497833, 8);
  sqcRYGate(q, 2.4308714745159348, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.019071824847573637, 8);
  sqcRYGate(q, 1.6618152630759209, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.7022906790536911, 10);
  sqcRYGate(q, -2.0882321770123426, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5475787949968085, 10);
  sqcRYGate(q, 1.2005937960294126, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.606494063172679, 12);
  sqcRYGate(q, 0.7856044297624637, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.8787756084841596, 12);
  sqcRYGate(q, 2.3486285101339415, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.8415966895496592, 14);
  sqcRYGate(q, 3.1280280504886777, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.5122954739972884, 14);
  sqcRYGate(q, 2.7843281067281858, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.3854136768085965, 16);
  sqcRYGate(q, 0.15457664394103787, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.4289588210140118, 16);
  sqcRYGate(q, 1.6559007041157887, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.357690396012167, 1);
  sqcRYGate(q, -2.4811061622125226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.80574090949377, 1);
  sqcRYGate(q, -0.5050098397592109, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.901489899956028, 3);
  sqcRYGate(q, 0.019564271496780188, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.36009215543438966, 3);
  sqcRYGate(q, -0.30950298529132536, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2754450452076829, 5);
  sqcRYGate(q, -1.9404010646597332, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6498689776063273, 5);
  sqcRYGate(q, 0.24397059676757235, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.678763144201901, 7);
  sqcRYGate(q, 1.9169111626083, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.8193767872753344, 7);
  sqcRYGate(q, 3.0923385218159227, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.4316246049840864, 9);
  sqcRYGate(q, -0.5991098368676182, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.0790761146242707, 9);
  sqcRYGate(q, -2.573093059079885, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.5687248655065167, 11);
  sqcRYGate(q, 2.2127812257902573, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.9707853776572524, 11);
  sqcRYGate(q, 1.8129711593784013, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.534405150540914, 13);
  sqcRYGate(q, -1.8396660180671718, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5770174424861854, 13);
  sqcRYGate(q, 0.7028246449312503, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5947256498453082, 15);
  sqcRYGate(q, 0.0831817259384318, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.1771931149162471, 15);
  sqcRYGate(q, -0.35019152856812885, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.3785363737028839, 17);
  sqcRYGate(q, 2.851219244572682, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.9597729195120857, 17);
  sqcRYGate(q, -1.4184565623265275, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.692880314772325, 0);
  sqcRYGate(q, 2.1477878899662164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1552667800893559, 0);
  sqcRYGate(q, -3.0451268267334815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7325821139629731, 2);
  sqcRYGate(q, -0.10989881701666379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1228023142649572, 2);
  sqcRYGate(q, -0.088910016134864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8769568179206657, 4);
  sqcRYGate(q, 0.12004894341926788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.131396247799112, 4);
  sqcRYGate(q, 0.014837772911091562, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.743462328568941, 6);
  sqcRYGate(q, 2.14576568459503, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.005277896457601017, 6);
  sqcRYGate(q, -3.1400471993992656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12893434311454488, 8);
  sqcRYGate(q, -0.8672777645810017, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.128003458702534, 8);
  sqcRYGate(q, 0.015291149138692594, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5802556422376304, 10);
  sqcRYGate(q, 2.057027333791382, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.137766366601144, 10);
  sqcRYGate(q, 0.0059202394709077675, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.497074047427136, 12);
  sqcRYGate(q, -0.6905433242383846, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1395787975672182, 12);
  sqcRYGate(q, 3.139888962248471, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9111705118521414, 14);
  sqcRYGate(q, -1.6396045613903532, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.114192935255981, 14);
  sqcRYGate(q, -3.117852030070179, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.455820357037132, 16);
  sqcRYGate(q, -2.529941850859156, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.045022747579286815, 16);
  sqcRYGate(q, -0.041804728006439085, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.8716550290568335, 18);
  sqcRYGate(q, -0.9245227852896981, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.03752084955647164, 18);
  sqcRYGate(q, -3.0513737478944893, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.821246990502402, 0);
  sqcRYGate(q, 3.019064535905388, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5288018076824539, 0);
  sqcRYGate(q, -1.0829361779333393, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6503889427264866, 2);
  sqcRYGate(q, 2.299592639281126, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.867022648728423, 2);
  sqcRYGate(q, -0.33769206875104113, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.638195750868406, 4);
  sqcRYGate(q, 1.0991114877483381, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0558265779190643, 4);
  sqcRYGate(q, -3.1403982480608246, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2928406519658395, 6);
  sqcRYGate(q, 1.707450628940113, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6341020823607124, 6);
  sqcRYGate(q, -3.056897391567275, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.9592678608579837, 8);
  sqcRYGate(q, 2.9369458554686707, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.11783265014411715, 8);
  sqcRYGate(q, -0.13926790606443265, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7943868262350362, 10);
  sqcRYGate(q, -2.2752723514971227, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.6991908321758071, 10);
  sqcRYGate(q, -1.2468611766195568, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.809357441785517, 12);
  sqcRYGate(q, -1.7265680990204402, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.44973458660938875, 12);
  sqcRYGate(q, -2.3692376842896583, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.6111217592052283, 14);
  sqcRYGate(q, 0.5440922696638237, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.6691669236686733, 14);
  sqcRYGate(q, -2.643583023624437, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.6650211129275443, 16);
  sqcRYGate(q, -2.9585303357772594, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.2401457122158637, 16);
  sqcRYGate(q, -1.7563479730471785, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.11895721235639538, 1);
  sqcRYGate(q, 1.7959567259605795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.561473599624046, 1);
  sqcRYGate(q, -1.5003636596400434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.076861804859991, 3);
  sqcRYGate(q, -3.1337277005900392, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9986437376186075, 3);
  sqcRYGate(q, -0.03235785254902363, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.12974601552598675, 5);
  sqcRYGate(q, -0.5376043924595589, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6442453682058267, 5);
  sqcRYGate(q, -0.299732030697569, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5826095783831557, 7);
  sqcRYGate(q, -2.7779890900699624, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.570537677129522, 7);
  sqcRYGate(q, 1.4580457045130366, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5645715219556091, 9);
  sqcRYGate(q, 0.47156162696989884, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5846120787822215, 9);
  sqcRYGate(q, 3.0125088585041118, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5698504663489201, 11);
  sqcRYGate(q, 0.30266217583312827, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5767862765712444, 11);
  sqcRYGate(q, -1.2394606332657476, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5931472884289928, 13);
  sqcRYGate(q, -0.08174783504105054, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5699496492571974, 13);
  sqcRYGate(q, 3.11758801627459, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.0681724220957363, 15);
  sqcRYGate(q, -0.615776528399552, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.768138351496718, 15);
  sqcRYGate(q, 2.7681356735627825, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.572638407740547, 17);
  sqcRYGate(q, 0.9530397437380431, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.5709360793515994, 17);
  sqcRYGate(q, 1.5678370213708408, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.092086581594521, 0);
  sqcRYGate(q, 0.948628990958805, 1);
  sqcRYGate(q, -0.007323220191969071, 2);
  sqcRYGate(q, -1.1133751934365141, 3);
  sqcRYGate(q, 0.5893961323752901, 4);
  sqcRYGate(q, 1.7383527786758766, 5);
  sqcRYGate(q, -0.5302089259169174, 6);
  sqcRYGate(q, -1.4652528579713928, 7);
  sqcRYGate(q, -1.2372179313280451, 8);
  sqcRYGate(q, 1.6665047507117583, 9);
  sqcRYGate(q, -1.269330976127418, 10);
  sqcRYGate(q, 1.6679079851699765, 11);
  sqcRYGate(q, -0.03985673425101593, 12);
  sqcRYGate(q, 1.6470540765017192, 13);
  sqcRYGate(q, 3.119454650721621, 14);
  sqcRYGate(q, -1.3608524471148356, 15);
  sqcRYGate(q, 3.0625129792774137, 16);
  sqcRYGate(q, -1.4747989228400884, 17);
  sqcRYGate(q, 1.8705745789255588, 18);
  sqcRYGate(q, -3.1190877180192524, 19);

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
