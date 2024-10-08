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

  sqcRYGate(q, 1.1996804310826121, 0);
  sqcRZGate(q, 2.1797215747297454, 0);
  sqcRYGate(q, -2.9961180299752375, 1);
  sqcRZGate(q, -0.19274936814284852, 1);
  sqcRYGate(q, -0.8551247959650831, 2);
  sqcRZGate(q, -2.807241806805556, 2);
  sqcRYGate(q, 2.080433093247455, 3);
  sqcRZGate(q, -2.643737977233617, 3);
  sqcRYGate(q, 0.85810883737978, 4);
  sqcRZGate(q, -1.3398917763469103, 4);
  sqcRYGate(q, 0.8472920873180145, 5);
  sqcRZGate(q, 0.8429221707267299, 5);
  sqcRYGate(q, -1.8901045813318547, 6);
  sqcRZGate(q, -1.9324470008751762, 6);
  sqcRYGate(q, 2.5372878349151904, 7);
  sqcRZGate(q, 1.8750542925776394, 7);
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
  sqcRYGate(q, 2.010026638967922, 0);
  sqcRZGate(q, 2.172418786954397, 0);
  sqcRYGate(q, 1.8126324763343726, 1);
  sqcRZGate(q, 0.6360423501274602, 1);
  sqcRYGate(q, -2.552014216859387, 2);
  sqcRZGate(q, 2.544266439633997, 2);
  sqcRYGate(q, 0.18398553357342692, 3);
  sqcRZGate(q, 2.5304586878238626, 3);
  sqcRYGate(q, 2.1356253255523807, 4);
  sqcRZGate(q, -2.3981124117188712, 4);
  sqcRYGate(q, -1.5321583527291516, 5);
  sqcRZGate(q, 3.0555266810085047, 5);
  sqcRYGate(q, -3.116478604273059, 6);
  sqcRZGate(q, 1.3669736283750824, 6);
  sqcRYGate(q, -2.251661183287256, 7);
  sqcRZGate(q, -1.242494671589438, 7);
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
  sqcRYGate(q, -2.8179377389402616, 0);
  sqcRZGate(q, 1.756920666398016, 0);
  sqcRYGate(q, -2.494954864356012, 1);
  sqcRZGate(q, -1.9763282898867587, 1);
  sqcRYGate(q, -0.6280514340300869, 2);
  sqcRZGate(q, -2.908351649891446, 2);
  sqcRYGate(q, -1.639884247402164, 3);
  sqcRZGate(q, -1.6139366574257612, 3);
  sqcRYGate(q, -2.821626231068188, 4);
  sqcRZGate(q, -2.3733104350854424, 4);
  sqcRYGate(q, -0.38076869493129795, 5);
  sqcRZGate(q, -1.955270233046617, 5);
  sqcRYGate(q, 1.525502546531234, 6);
  sqcRZGate(q, -0.5470245036684194, 6);
  sqcRYGate(q, -1.996872854349759, 7);
  sqcRZGate(q, -3.0654650194082556, 7);
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
  sqcRYGate(q, -2.6229997756302996, 0);
  sqcRZGate(q, 0.5796087593051306, 0);
  sqcRYGate(q, -2.345005159243921, 1);
  sqcRZGate(q, 1.2390774017565986, 1);
  sqcRYGate(q, 0.6510593315556967, 2);
  sqcRZGate(q, 0.03443683941169873, 2);
  sqcRYGate(q, -0.21573123787093262, 3);
  sqcRZGate(q, 3.066532555279441, 3);
  sqcRYGate(q, 2.9715621422655425, 4);
  sqcRZGate(q, 1.1664000711742928, 4);
  sqcRYGate(q, 1.6206908561995932, 5);
  sqcRZGate(q, 2.752288193000178, 5);
  sqcRYGate(q, -2.8409243593853826, 6);
  sqcRZGate(q, 0.5220224591310253, 6);
  sqcRYGate(q, -2.8683752625647023, 7);
  sqcRZGate(q, 0.6357089487097367, 7);
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
  sqcRYGate(q, 1.5920913794103535, 0);
  sqcRZGate(q, 1.061397191723565, 0);
  sqcRYGate(q, 1.8586430699788397, 1);
  sqcRZGate(q, 0.029754459685094048, 1);
  sqcRYGate(q, 0.7844733611518642, 2);
  sqcRZGate(q, -2.5648166047155043, 2);
  sqcRYGate(q, -0.9186766412083482, 3);
  sqcRZGate(q, -0.6360918038673451, 3);
  sqcRYGate(q, -1.303558272916792, 4);
  sqcRZGate(q, -0.8464628033475394, 4);
  sqcRYGate(q, 1.8880317615877675, 5);
  sqcRZGate(q, -1.5911369904688515, 5);
  sqcRYGate(q, -1.9329176861027784, 6);
  sqcRZGate(q, 1.4936841082148422, 6);
  sqcRYGate(q, 0.5671047920841268, 7);
  sqcRZGate(q, -0.4056430446751626, 7);
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
  sqcRYGate(q, 2.569077336673441, 0);
  sqcRZGate(q, 2.7164043851047808, 0);
  sqcRYGate(q, 0.8936459566327564, 1);
  sqcRZGate(q, -1.251151435561082, 1);
  sqcRYGate(q, 2.4006743594914264, 2);
  sqcRZGate(q, -2.3679969325301506, 2);
  sqcRYGate(q, 0.5819924631358617, 3);
  sqcRZGate(q, 0.039817043272085684, 3);
  sqcRYGate(q, -1.4157745791638874, 4);
  sqcRZGate(q, 1.0175832414870103, 4);
  sqcRYGate(q, 1.8155760624990203, 5);
  sqcRZGate(q, -0.15800276185942694, 5);
  sqcRYGate(q, -0.7793236776501337, 6);
  sqcRZGate(q, 0.33370096327692167, 6);
  sqcRYGate(q, -2.3072545353333855, 7);
  sqcRZGate(q, -1.3475336580142565, 7);
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
  sqcRYGate(q, -0.18736004316207833, 0);
  sqcRZGate(q, 1.3087856380640153, 0);
  sqcRYGate(q, 1.8259742899125806, 1);
  sqcRZGate(q, 1.1648124300567078, 1);
  sqcRYGate(q, -0.5511057901557272, 2);
  sqcRZGate(q, 1.6418596719019742, 2);
  sqcRYGate(q, -2.7549340839393333, 3);
  sqcRZGate(q, 1.0915345392405333, 3);
  sqcRYGate(q, -0.5774543911440446, 4);
  sqcRZGate(q, 0.2747094554109602, 4);
  sqcRYGate(q, 2.299886576825131, 5);
  sqcRZGate(q, 0.2675393925001117, 5);
  sqcRYGate(q, 3.0308250552898905, 6);
  sqcRZGate(q, -1.7636817869378831, 6);
  sqcRYGate(q, 2.6967457663372123, 7);
  sqcRZGate(q, 1.3558570423740564, 7);
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
  sqcRYGate(q, 2.872744401948424, 0);
  sqcRZGate(q, 2.106485790442881, 0);
  sqcRYGate(q, 1.6546784393204623, 1);
  sqcRZGate(q, -2.9650608933632228, 1);
  sqcRYGate(q, -2.73302044076874, 2);
  sqcRZGate(q, -1.3725476357621722, 2);
  sqcRYGate(q, -0.02646695209320266, 3);
  sqcRZGate(q, -0.9218672886587376, 3);
  sqcRYGate(q, -0.6535352483778506, 4);
  sqcRZGate(q, -2.5472136430598145, 4);
  sqcRYGate(q, 1.7087356970906118, 5);
  sqcRZGate(q, -2.455057262757707, 5);
  sqcRYGate(q, -0.06386531378250382, 6);
  sqcRZGate(q, 2.6904080795040843, 6);
  sqcRYGate(q, -2.703540607010966, 7);
  sqcRZGate(q, -2.8452229445058514, 7);
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
  sqcRYGate(q, 0.8133122128222681, 0);
  sqcRZGate(q, 3.021850861866343, 0);
  sqcRYGate(q, -1.6135671614395484, 1);
  sqcRZGate(q, 0.8374877519561689, 1);
  sqcRYGate(q, -1.661671202742814, 2);
  sqcRZGate(q, 2.5387567810834937, 2);
  sqcRYGate(q, 1.398751462837284, 3);
  sqcRZGate(q, -1.929059290921204, 3);
  sqcRYGate(q, 3.0124034309429826, 4);
  sqcRZGate(q, -2.494497114065393, 4);
  sqcRYGate(q, 2.5483956612489975, 5);
  sqcRZGate(q, -0.7239364985063351, 5);
  sqcRYGate(q, -2.4242241610790325, 6);
  sqcRZGate(q, 1.2220595758102077, 6);
  sqcRYGate(q, 0.8254781255635432, 7);
  sqcRZGate(q, 1.0963592342834492, 7);
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
  sqcRYGate(q, -1.1431935240322293, 0);
  sqcRZGate(q, 1.9312491261678881, 0);
  sqcRYGate(q, -2.067525572590138, 1);
  sqcRZGate(q, -0.49792589860698944, 1);
  sqcRYGate(q, 3.0030190689880047, 2);
  sqcRZGate(q, 0.1622983674048918, 2);
  sqcRYGate(q, -1.2396046992421221, 3);
  sqcRZGate(q, -2.066982786452934, 3);
  sqcRYGate(q, 0.8163417679974376, 4);
  sqcRZGate(q, -1.1853280454969441, 4);
  sqcRYGate(q, 0.148333380672641, 5);
  sqcRZGate(q, -2.173763822069647, 5);
  sqcRYGate(q, -1.1450774292911992, 6);
  sqcRZGate(q, 2.865977590556157, 6);
  sqcRYGate(q, 1.5102013815813509, 7);
  sqcRZGate(q, 1.2686773810346281, 7);
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
  sqcRYGate(q, 2.253972946131891, 0);
  sqcRZGate(q, 0.29052750564886315, 0);
  sqcRYGate(q, 1.8293084351735533, 1);
  sqcRZGate(q, -1.549978593562436, 1);
  sqcRYGate(q, -3.0293438890370745, 2);
  sqcRZGate(q, -2.2181561829076344, 2);
  sqcRYGate(q, 1.631332585690469, 3);
  sqcRZGate(q, -1.191760559184937, 3);
  sqcRYGate(q, 1.7037315754048157, 4);
  sqcRZGate(q, 1.8172693226700745, 4);
  sqcRYGate(q, 1.4113591396716672, 5);
  sqcRZGate(q, 0.8053043406878686, 5);
  sqcRYGate(q, -1.0164902460824095, 6);
  sqcRZGate(q, 0.1366910920889955, 6);
  sqcRYGate(q, 0.8069995752691002, 7);
  sqcRZGate(q, 1.0555602316677137, 7);
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
  sqcRYGate(q, 0.5187757440458947, 0);
  sqcRZGate(q, 1.3544934008059444, 0);
  sqcRYGate(q, 2.1018980472546653, 1);
  sqcRZGate(q, 2.455584719453303, 1);
  sqcRYGate(q, 0.4955520916042336, 2);
  sqcRZGate(q, 3.1164484486309143, 2);
  sqcRYGate(q, -1.0808901763258136, 3);
  sqcRZGate(q, 1.580978299626757, 3);
  sqcRYGate(q, -1.9216371787658302, 4);
  sqcRZGate(q, -0.4216614445768657, 4);
  sqcRYGate(q, 1.6665013670051954, 5);
  sqcRZGate(q, 1.180458680302161, 5);
  sqcRYGate(q, -0.9726267971679229, 6);
  sqcRZGate(q, 0.41071366339516246, 6);
  sqcRYGate(q, -1.0350757090665557, 7);
  sqcRZGate(q, -0.47731926056049073, 7);
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
  sqcRYGate(q, 2.3692048234375607, 0);
  sqcRZGate(q, -3.013383858820454, 0);
  sqcRYGate(q, 0.23662733501581545, 1);
  sqcRZGate(q, 2.4390040032085385, 1);
  sqcRYGate(q, -1.9169114214696448, 2);
  sqcRZGate(q, 1.6082044253072372, 2);
  sqcRYGate(q, 0.2958441153598443, 3);
  sqcRZGate(q, -0.8091675178614636, 3);
  sqcRYGate(q, -0.7113286783143484, 4);
  sqcRZGate(q, -2.62245999929111, 4);
  sqcRYGate(q, -2.9144918468516927, 5);
  sqcRZGate(q, -2.333602893841993, 5);
  sqcRYGate(q, 2.83010273649316, 6);
  sqcRZGate(q, -0.20508083283239267, 6);
  sqcRYGate(q, -2.543855022699199, 7);
  sqcRZGate(q, -0.9885708280473497, 7);
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
  sqcRYGate(q, -2.632072147678471, 0);
  sqcRZGate(q, 0.15494357587788166, 0);
  sqcRYGate(q, -2.6996638877046317, 1);
  sqcRZGate(q, 3.0800993878861402, 1);
  sqcRYGate(q, 1.8765193364180672, 2);
  sqcRZGate(q, 1.869520208084988, 2);
  sqcRYGate(q, 2.4590326918167893, 3);
  sqcRZGate(q, -0.8403953998673437, 3);
  sqcRYGate(q, 0.9618706586447775, 4);
  sqcRZGate(q, -0.1777584469312236, 4);
  sqcRYGate(q, -1.0489065019753467, 5);
  sqcRZGate(q, 2.7291479079338754, 5);
  sqcRYGate(q, 0.8783139291671784, 6);
  sqcRZGate(q, -1.8098428654159318, 6);
  sqcRYGate(q, -0.9803984344317218, 7);
  sqcRZGate(q, 2.244797892877033, 7);
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
  sqcRYGate(q, 0.7101579599904719, 0);
  sqcRZGate(q, 1.6534893852433425, 0);
  sqcRYGate(q, 0.929426952861963, 1);
  sqcRZGate(q, -0.6521823660580752, 1);
  sqcRYGate(q, 1.8526932773691664, 2);
  sqcRZGate(q, 1.7938955430311037, 2);
  sqcRYGate(q, -1.5126537041798727, 3);
  sqcRZGate(q, 0.5238516382920478, 3);
  sqcRYGate(q, -1.13962764220819, 4);
  sqcRZGate(q, 1.5856635995146835, 4);
  sqcRYGate(q, -1.3132146703985041, 5);
  sqcRZGate(q, -2.393831491347265, 5);
  sqcRYGate(q, 1.3497663098910644, 6);
  sqcRZGate(q, 2.7227934703022396, 6);
  sqcRYGate(q, -1.9802224144089022, 7);
  sqcRZGate(q, 2.661305957996049, 7);
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
  sqcRYGate(q, 1.8428737563487532, 0);
  sqcRZGate(q, 0.5240991412052648, 0);
  sqcRYGate(q, -2.0360295734193605, 1);
  sqcRZGate(q, 0.5467304874296344, 1);
  sqcRYGate(q, 0.20588894453025922, 2);
  sqcRZGate(q, 2.4613290630112354, 2);
  sqcRYGate(q, -1.0175767354149752, 3);
  sqcRZGate(q, 1.9206937157614101, 3);
  sqcRYGate(q, 0.9291009097427015, 4);
  sqcRZGate(q, 2.7814811598229663, 4);
  sqcRYGate(q, -1.9015497833528707, 5);
  sqcRZGate(q, -0.7239254654105672, 5);
  sqcRYGate(q, -2.8657249511441356, 6);
  sqcRZGate(q, 1.5640470119089493, 6);
  sqcRYGate(q, 1.0132345557775642, 7);
  sqcRZGate(q, 0.13621822873267675, 7);
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
  sqcRYGate(q, 0.6980898773227643, 0);
  sqcRZGate(q, -1.9581667936866478, 0);
  sqcRYGate(q, -2.4882247843870107, 1);
  sqcRZGate(q, -2.131345782007342, 1);
  sqcRYGate(q, 1.9492874606122532, 2);
  sqcRZGate(q, 2.2743518356556813, 2);
  sqcRYGate(q, 2.196310929059264, 3);
  sqcRZGate(q, -2.271113748481474, 3);
  sqcRYGate(q, -0.49930059477848415, 4);
  sqcRZGate(q, -0.20841798758318109, 4);
  sqcRYGate(q, 2.416170100832631, 5);
  sqcRZGate(q, -0.24836176802869972, 5);
  sqcRYGate(q, 0.35104973414954976, 6);
  sqcRZGate(q, -2.37185780371512, 6);
  sqcRYGate(q, -2.3505196155792936, 7);
  sqcRZGate(q, 0.4433943411155932, 7);
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
  sqcRYGate(q, 2.4075244325250305, 0);
  sqcRZGate(q, 0.6300945210510581, 0);
  sqcRYGate(q, 3.0910267277233916, 1);
  sqcRZGate(q, 1.4658250512975277, 1);
  sqcRYGate(q, -2.651483576905821, 2);
  sqcRZGate(q, -2.760533788885994, 2);
  sqcRYGate(q, -2.0403455739943737, 3);
  sqcRZGate(q, 2.6726899040354044, 3);
  sqcRYGate(q, -2.476031733103959, 4);
  sqcRZGate(q, 0.34659096053667826, 4);
  sqcRYGate(q, -2.7833181622252683, 5);
  sqcRZGate(q, -2.690288773738535, 5);
  sqcRYGate(q, -2.5179932683984436, 6);
  sqcRZGate(q, -2.95462437469164, 6);
  sqcRYGate(q, 0.43395738520399574, 7);
  sqcRZGate(q, 0.9165540666562765, 7);
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
  sqcRYGate(q, 2.6994571933395948, 0);
  sqcRZGate(q, -2.975086627275592, 0);
  sqcRYGate(q, 0.2521526557613285, 1);
  sqcRZGate(q, 1.6391149539738972, 1);
  sqcRYGate(q, -2.439993700964293, 2);
  sqcRZGate(q, -0.8671109935924823, 2);
  sqcRYGate(q, -0.03547373884154137, 3);
  sqcRZGate(q, -0.34170078580535446, 3);
  sqcRYGate(q, 0.7196332872744458, 4);
  sqcRZGate(q, -2.028366685573907, 4);
  sqcRYGate(q, -1.3943206529473395, 5);
  sqcRZGate(q, 0.8393598998891854, 5);
  sqcRYGate(q, 1.6584756539412435, 6);
  sqcRZGate(q, 2.7813162604011157, 6);
  sqcRYGate(q, -0.3510211271440688, 7);
  sqcRZGate(q, -1.3454776966922817, 7);
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
  sqcRYGate(q, 1.685719972688104, 0);
  sqcRZGate(q, 0.6694341657914071, 0);
  sqcRYGate(q, -2.3636551512143456, 1);
  sqcRZGate(q, 1.8574535572823334, 1);
  sqcRYGate(q, 0.15492020161316294, 2);
  sqcRZGate(q, -1.079201499305215, 2);
  sqcRYGate(q, 0.23643370116763557, 3);
  sqcRZGate(q, -0.06320268515283979, 3);
  sqcRYGate(q, 2.486227133042755, 4);
  sqcRZGate(q, 2.4892225868737095, 4);
  sqcRYGate(q, 1.070715257411995, 5);
  sqcRZGate(q, -2.4099344299619245, 5);
  sqcRYGate(q, -1.0524977923837697, 6);
  sqcRZGate(q, -0.5561472214082571, 6);
  sqcRYGate(q, -0.11828214920982652, 7);
  sqcRZGate(q, -3.118950982509345, 7);
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
  sqcRYGate(q, -0.4290202634805303, 0);
  sqcRZGate(q, -2.642633393588965, 0);
  sqcRYGate(q, -2.6138227964752327, 1);
  sqcRZGate(q, 0.4678729622364104, 1);
  sqcRYGate(q, -0.5690330554180303, 2);
  sqcRZGate(q, -2.3645397900663343, 2);
  sqcRYGate(q, -1.4305888158113884, 3);
  sqcRZGate(q, -2.0041039050025167, 3);
  sqcRYGate(q, -2.559624610677717, 4);
  sqcRZGate(q, 0.9260156388055238, 4);
  sqcRYGate(q, 2.094268190722011, 5);
  sqcRZGate(q, -0.8855323108796656, 5);
  sqcRYGate(q, 2.859159988132174, 6);
  sqcRZGate(q, 0.7170809664619151, 6);
  sqcRYGate(q, 1.9726074964111047, 7);
  sqcRZGate(q, 2.5984564762865134, 7);
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
  sqcRYGate(q, 2.4290575488649657, 0);
  sqcRZGate(q, 1.5425924789579624, 0);
  sqcRYGate(q, 2.546558066408585, 1);
  sqcRZGate(q, 1.9833017020847603, 1);
  sqcRYGate(q, 0.7533730493561386, 2);
  sqcRZGate(q, 0.40682965933615384, 2);
  sqcRYGate(q, -2.19501778654545, 3);
  sqcRZGate(q, -2.9975890743948934, 3);
  sqcRYGate(q, 1.2383962787967726, 4);
  sqcRZGate(q, -2.8448141851721553, 4);
  sqcRYGate(q, -0.07965252318232222, 5);
  sqcRZGate(q, 1.635599041027467, 5);
  sqcRYGate(q, 2.410257632583362, 6);
  sqcRZGate(q, -1.661432481027365, 6);
  sqcRYGate(q, -2.8105843250904035, 7);
  sqcRZGate(q, 0.5744235097101918, 7);
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
  sqcRYGate(q, 1.3179005133780441, 0);
  sqcRZGate(q, 2.6176835494159527, 0);
  sqcRYGate(q, -2.8230845390314667, 1);
  sqcRZGate(q, -0.8211271636558685, 1);
  sqcRYGate(q, -1.0812147914921582, 2);
  sqcRZGate(q, 1.2015283332956501, 2);
  sqcRYGate(q, -2.854218400453931, 3);
  sqcRZGate(q, -2.228293464160027, 3);
  sqcRYGate(q, -1.829203214179266, 4);
  sqcRZGate(q, -1.505769753048045, 4);
  sqcRYGate(q, -1.2706167375295032, 5);
  sqcRZGate(q, 2.0244849945499173, 5);
  sqcRYGate(q, 0.24859365518261292, 6);
  sqcRZGate(q, 2.577351561901575, 6);
  sqcRYGate(q, 0.23521519287768194, 7);
  sqcRZGate(q, 0.7140241773852791, 7);
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
  sqcRYGate(q, 0.42054385820731527, 0);
  sqcRZGate(q, 1.8689218471782347, 0);
  sqcRYGate(q, -0.6193439092934847, 1);
  sqcRZGate(q, -2.261702271526682, 1);
  sqcRYGate(q, 2.412069713509996, 2);
  sqcRZGate(q, 1.1188345223245435, 2);
  sqcRYGate(q, 2.8778476277259846, 3);
  sqcRZGate(q, -2.471610884468608, 3);
  sqcRYGate(q, 1.0997985009847895, 4);
  sqcRZGate(q, 1.5425927730717803, 4);
  sqcRYGate(q, 0.9733016520498053, 5);
  sqcRZGate(q, 2.8117125869789983, 5);
  sqcRYGate(q, 1.5172756392253577, 6);
  sqcRZGate(q, 1.1273941153846831, 6);
  sqcRYGate(q, -0.26151571411940105, 7);
  sqcRZGate(q, -2.9516828186634796, 7);
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
  sqcRYGate(q, 2.39751598292541, 0);
  sqcRZGate(q, -2.482653468379639, 0);
  sqcRYGate(q, -0.44785549177166484, 1);
  sqcRZGate(q, 1.4234315004156821, 1);
  sqcRYGate(q, -0.6900443437549921, 2);
  sqcRZGate(q, 0.5461355461066771, 2);
  sqcRYGate(q, 1.9437917102262752, 3);
  sqcRZGate(q, -2.7159591028966785, 3);
  sqcRYGate(q, 1.8688917027988459, 4);
  sqcRZGate(q, 2.177399109941993, 4);
  sqcRYGate(q, 2.155513460838803, 5);
  sqcRZGate(q, -1.6115370645133076, 5);
  sqcRYGate(q, -2.66938178522968, 6);
  sqcRZGate(q, -2.849086718301861, 6);
  sqcRYGate(q, 1.2464820538364707, 7);
  sqcRZGate(q, 0.30111477640857665, 7);
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
  sqcRYGate(q, 1.3710025574110913, 0);
  sqcRZGate(q, 2.1425968946938623, 0);
  sqcRYGate(q, -0.48621799348103956, 1);
  sqcRZGate(q, 2.6216826112649, 1);
  sqcRYGate(q, 1.254860377536267, 2);
  sqcRZGate(q, -1.6017545122641954, 2);
  sqcRYGate(q, 2.0804825156468043, 3);
  sqcRZGate(q, 1.1466988992636482, 3);
  sqcRYGate(q, -0.4753211183534726, 4);
  sqcRZGate(q, 0.08720626908253568, 4);
  sqcRYGate(q, 0.4602398375677135, 5);
  sqcRZGate(q, -0.9737715827628033, 5);
  sqcRYGate(q, -1.2729395120852152, 6);
  sqcRZGate(q, 1.2638796791478235, 6);
  sqcRYGate(q, -0.9749866283570459, 7);
  sqcRZGate(q, 2.114166443101544, 7);
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
  sqcRYGate(q, 2.5273730393701204, 0);
  sqcRZGate(q, -1.5179607559505621, 0);
  sqcRYGate(q, 2.863029854630625, 1);
  sqcRZGate(q, 1.1565749149802445, 1);
  sqcRYGate(q, 1.508067536867438, 2);
  sqcRZGate(q, -0.8989949613734449, 2);
  sqcRYGate(q, 0.7566887696670953, 3);
  sqcRZGate(q, -1.4927247777056143, 3);
  sqcRYGate(q, -0.6072584804972472, 4);
  sqcRZGate(q, -2.752303306947155, 4);
  sqcRYGate(q, -2.103350225647139, 5);
  sqcRZGate(q, -0.32101001640832544, 5);
  sqcRYGate(q, 2.9801728262741545, 6);
  sqcRZGate(q, -2.220773488661031, 6);
  sqcRYGate(q, 0.6652722144554915, 7);
  sqcRZGate(q, 0.16754859060422028, 7);
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
  sqcRYGate(q, -0.35149760167920885, 0);
  sqcRZGate(q, -2.3019873484059974, 0);
  sqcRYGate(q, 1.622606871602173, 1);
  sqcRZGate(q, -1.1824951205824612, 1);
  sqcRYGate(q, 1.707002974919238, 2);
  sqcRZGate(q, -1.9120390176615698, 2);
  sqcRYGate(q, 2.8907246708128014, 3);
  sqcRZGate(q, 0.41670855849195637, 3);
  sqcRYGate(q, -0.7729408213620417, 4);
  sqcRZGate(q, 0.07759465509357863, 4);
  sqcRYGate(q, -1.8790820566828705, 5);
  sqcRZGate(q, 2.168840236745954, 5);
  sqcRYGate(q, -0.41774844494276875, 6);
  sqcRZGate(q, 0.8359474486280344, 6);
  sqcRYGate(q, -2.3716640506525692, 7);
  sqcRZGate(q, 2.6965204109655945, 7);
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
  sqcRYGate(q, -0.631719670659655, 0);
  sqcRZGate(q, -0.5887300983030924, 0);
  sqcRYGate(q, 2.28119655670784, 1);
  sqcRZGate(q, 1.5066614404619871, 1);
  sqcRYGate(q, 0.21377897685020905, 2);
  sqcRZGate(q, -2.442850444713883, 2);
  sqcRYGate(q, -0.6099683877392428, 3);
  sqcRZGate(q, 1.230527828329415, 3);
  sqcRYGate(q, -0.4629008470385346, 4);
  sqcRZGate(q, -1.3886643969464378, 4);
  sqcRYGate(q, -1.9760605113232688, 5);
  sqcRZGate(q, 0.9885487527393897, 5);
  sqcRYGate(q, -1.8696641021409324, 6);
  sqcRZGate(q, 1.2487957749600085, 6);
  sqcRYGate(q, 0.317860043681808, 7);
  sqcRZGate(q, -1.0400399677142396, 7);

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
