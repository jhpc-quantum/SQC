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

  sqcRYGate(q, 2.694933796222365, 0);
  sqcRZGate(q, 2.495256189383987, 0);
  sqcRYGate(q, 0.7896953564760686, 1);
  sqcRZGate(q, -0.32220095464378556, 1);
  sqcRYGate(q, -2.991705221015812, 2);
  sqcRZGate(q, 2.704787517718426, 2);
  sqcRYGate(q, -2.7915168350210164, 3);
  sqcRZGate(q, -1.8609863575697991, 3);
  sqcRYGate(q, -2.944279289865116, 4);
  sqcRZGate(q, -2.10457595309468, 4);
  sqcRYGate(q, -1.4865729949994018, 5);
  sqcRZGate(q, 2.9314059322993424, 5);
  sqcRYGate(q, -1.5381545482026322, 6);
  sqcRZGate(q, -3.026542536939941, 6);
  sqcRYGate(q, -1.9799425335811263, 7);
  sqcRZGate(q, 2.3647369960529145, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.819340639156272, 0);
  sqcRZGate(q, -0.4459549830921953, 0);
  sqcRYGate(q, 1.1147290094080682, 1);
  sqcRZGate(q, -2.7509478787563078, 1);
  sqcRYGate(q, -0.6885709056822602, 2);
  sqcRZGate(q, 2.1070394996040718, 2);
  sqcRYGate(q, 1.9528456016569025, 3);
  sqcRZGate(q, -2.4913305117970217, 3);
  sqcRYGate(q, -3.1005396913832852, 4);
  sqcRZGate(q, -2.864662990146323, 4);
  sqcRYGate(q, -1.2404713383208659, 5);
  sqcRZGate(q, 1.5272970909312207, 5);
  sqcRYGate(q, -1.7656652371095354, 6);
  sqcRZGate(q, -1.6807229579238459, 6);
  sqcRYGate(q, -1.5797976005845795, 7);
  sqcRZGate(q, -2.9525007149670475, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3966048966746494, 0);
  sqcRZGate(q, -2.6250353289024355, 0);
  sqcRYGate(q, 1.7531213653404327, 1);
  sqcRZGate(q, -2.2876448051401863, 1);
  sqcRYGate(q, 2.6475004071452655, 2);
  sqcRZGate(q, 1.4023019533100207, 2);
  sqcRYGate(q, -0.9143352676233443, 3);
  sqcRZGate(q, -0.8341773177875345, 3);
  sqcRYGate(q, -1.813842587735774, 4);
  sqcRZGate(q, -2.7923738373941975, 4);
  sqcRYGate(q, -1.3686197952692218, 5);
  sqcRZGate(q, 1.6003298220120818, 5);
  sqcRYGate(q, 0.5223821247991989, 6);
  sqcRZGate(q, -1.5447390362677662, 6);
  sqcRYGate(q, -1.1024174542051681, 7);
  sqcRZGate(q, -2.003879940325149, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.28269513430746807, 0);
  sqcRZGate(q, -2.7657051575319356, 0);
  sqcRYGate(q, 1.734772129745565, 1);
  sqcRZGate(q, 2.192540063625828, 1);
  sqcRYGate(q, 1.6843685945039384, 2);
  sqcRZGate(q, 2.7439818877492943, 2);
  sqcRYGate(q, 1.7141018861414976, 3);
  sqcRZGate(q, -1.4641660323849146, 3);
  sqcRYGate(q, 1.7425383862666424, 4);
  sqcRZGate(q, -2.966579822091207, 4);
  sqcRYGate(q, 2.4662115780989007, 5);
  sqcRZGate(q, 1.4622721095435254, 5);
  sqcRYGate(q, -1.0549548906130328, 6);
  sqcRZGate(q, 1.4913087400409346, 6);
  sqcRYGate(q, -1.2071215018163957, 7);
  sqcRZGate(q, -0.40108831275290147, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.3401292278706186, 0);
  sqcRZGate(q, 1.1497398400785732, 0);
  sqcRYGate(q, -1.1679223401754668, 1);
  sqcRZGate(q, 3.085510575204215, 1);
  sqcRYGate(q, 0.9321603059639197, 2);
  sqcRZGate(q, 2.6812844570622336, 2);
  sqcRYGate(q, 0.45531081041282145, 3);
  sqcRZGate(q, 1.248242114249004, 3);
  sqcRYGate(q, -1.6648668083052216, 4);
  sqcRZGate(q, 2.270077702217062, 4);
  sqcRYGate(q, -2.353750997416982, 5);
  sqcRZGate(q, -1.574738576804112, 5);
  sqcRYGate(q, -2.660873297149534, 6);
  sqcRZGate(q, 1.5671510792453556, 6);
  sqcRYGate(q, 2.1954588146428136, 7);
  sqcRZGate(q, -0.538853558444618, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.579569928090034, 0);
  sqcRZGate(q, 0.3254365239630381, 0);
  sqcRYGate(q, -1.8686660104187842, 1);
  sqcRZGate(q, -0.5205238521920152, 1);
  sqcRYGate(q, 0.6453306554547931, 2);
  sqcRZGate(q, -0.17915782761927798, 2);
  sqcRYGate(q, 0.6986928910646575, 3);
  sqcRZGate(q, -2.5458462745692216, 3);
  sqcRYGate(q, 0.8903429368986501, 4);
  sqcRZGate(q, -0.8761148163399063, 4);
  sqcRYGate(q, 1.9304352652535197, 5);
  sqcRZGate(q, 2.0058357566889295, 5);
  sqcRYGate(q, 2.2711269904232454, 6);
  sqcRZGate(q, -1.158189081006718, 6);
  sqcRYGate(q, 0.7383372380123917, 7);
  sqcRZGate(q, -2.1695241622108794, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.0294320611917884, 0);
  sqcRZGate(q, -2.2655975805987447, 0);
  sqcRYGate(q, 0.7187751731721547, 1);
  sqcRZGate(q, -2.669652267991694, 1);
  sqcRYGate(q, 1.8606054447799316, 2);
  sqcRZGate(q, -0.8815350545952372, 2);
  sqcRYGate(q, 0.4460694850294944, 3);
  sqcRZGate(q, 2.693985679706331, 3);
  sqcRYGate(q, -1.8794360737386788, 4);
  sqcRZGate(q, -1.985946305721663, 4);
  sqcRYGate(q, -0.28247628209116016, 5);
  sqcRZGate(q, -1.9029586637276525, 5);
  sqcRYGate(q, -0.03789083910505802, 6);
  sqcRZGate(q, 1.366998016854756, 6);
  sqcRYGate(q, -1.2666703437648685, 7);
  sqcRZGate(q, 0.137966633534524, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6227985547384653, 0);
  sqcRZGate(q, 1.7789571327428566, 0);
  sqcRYGate(q, 2.000131295106967, 1);
  sqcRZGate(q, 2.90190227992827, 1);
  sqcRYGate(q, -0.3379860539847437, 2);
  sqcRZGate(q, -2.1689947937985554, 2);
  sqcRYGate(q, 1.6835616868112924, 3);
  sqcRZGate(q, 1.7528498488366688, 3);
  sqcRYGate(q, -0.6661181518602545, 4);
  sqcRZGate(q, 1.4537833721737101, 4);
  sqcRYGate(q, 2.1521908846067603, 5);
  sqcRZGate(q, -1.7000404139943064, 5);
  sqcRYGate(q, -2.279524342921871, 6);
  sqcRZGate(q, -1.3254847231983586, 6);
  sqcRYGate(q, 2.2497031833126, 7);
  sqcRZGate(q, -0.9131196465562804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.116354576915743, 0);
  sqcRZGate(q, -1.165989451220176, 0);
  sqcRYGate(q, -1.8151226926211432, 1);
  sqcRZGate(q, 2.142865824706136, 1);
  sqcRYGate(q, 2.376241314450739, 2);
  sqcRZGate(q, -2.7620787481181863, 2);
  sqcRYGate(q, -1.8737533977534184, 3);
  sqcRZGate(q, 0.26769407832207376, 3);
  sqcRYGate(q, -1.5231796016499164, 4);
  sqcRZGate(q, 2.164756387417617, 4);
  sqcRYGate(q, -2.994839052358734, 5);
  sqcRZGate(q, -2.484827625237073, 5);
  sqcRYGate(q, 0.47574340773563506, 6);
  sqcRZGate(q, 1.394138040469074, 6);
  sqcRYGate(q, -1.452022909028232, 7);
  sqcRZGate(q, -1.4702873811786914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.420226256066528, 0);
  sqcRZGate(q, 1.6548061253032138, 0);
  sqcRYGate(q, -1.6166625244913586, 1);
  sqcRZGate(q, -0.9587847885550932, 1);
  sqcRYGate(q, -0.3681970345494847, 2);
  sqcRZGate(q, -1.831871746821036, 2);
  sqcRYGate(q, -1.0809904506378871, 3);
  sqcRZGate(q, 0.6268315644325452, 3);
  sqcRYGate(q, -2.8844028314348553, 4);
  sqcRZGate(q, 2.1027279687099742, 4);
  sqcRYGate(q, 0.19947880511591531, 5);
  sqcRZGate(q, -3.085012108242018, 5);
  sqcRYGate(q, -1.3649159000562037, 6);
  sqcRZGate(q, -1.091177004741486, 6);
  sqcRYGate(q, -2.2489412822131416, 7);
  sqcRZGate(q, -1.9207567761268103, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6026657447165755, 0);
  sqcRZGate(q, -2.405813452325471, 0);
  sqcRYGate(q, -1.9923593283509908, 1);
  sqcRZGate(q, 0.06865827452076743, 1);
  sqcRYGate(q, -2.361839298939307, 2);
  sqcRZGate(q, -3.1391194342666218, 2);
  sqcRYGate(q, 1.344358074447379, 3);
  sqcRZGate(q, 1.1737190817496412, 3);
  sqcRYGate(q, 0.6335041847052987, 4);
  sqcRZGate(q, 1.4609725972821588, 4);
  sqcRYGate(q, 2.778242597117934, 5);
  sqcRZGate(q, -0.9109037943963809, 5);
  sqcRYGate(q, 2.6166246769719086, 6);
  sqcRZGate(q, -1.3834463946643198, 6);
  sqcRYGate(q, -0.7527688111303579, 7);
  sqcRZGate(q, -0.7339337850161636, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.9275464174594082, 0);
  sqcRZGate(q, -1.42277945824672, 0);
  sqcRYGate(q, -1.0918145536930544, 1);
  sqcRZGate(q, 1.8778171301183022, 1);
  sqcRYGate(q, -1.2953212982941933, 2);
  sqcRZGate(q, -0.6759729902002115, 2);
  sqcRYGate(q, -2.8056136037588724, 3);
  sqcRZGate(q, 0.18823662442933564, 3);
  sqcRYGate(q, 0.35112554281100716, 4);
  sqcRZGate(q, 1.5224175290818138, 4);
  sqcRYGate(q, -1.9066370112254745, 5);
  sqcRZGate(q, -1.6472535912633663, 5);
  sqcRYGate(q, 0.6892493999526004, 6);
  sqcRZGate(q, 1.7646246912072505, 6);
  sqcRYGate(q, 0.43828792393883415, 7);
  sqcRZGate(q, 2.3930941906015035, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4911384446663849, 0);
  sqcRZGate(q, -0.7309747026964101, 0);
  sqcRYGate(q, 2.0934486505762893, 1);
  sqcRZGate(q, -0.4827291447190501, 1);
  sqcRYGate(q, -2.040450712760574, 2);
  sqcRZGate(q, 3.1290425872092564, 2);
  sqcRYGate(q, -0.5218861367487834, 3);
  sqcRZGate(q, 1.3384928416684292, 3);
  sqcRYGate(q, -2.2696133709374795, 4);
  sqcRZGate(q, 0.07141496452779927, 4);
  sqcRYGate(q, 2.5469835308064774, 5);
  sqcRZGate(q, -1.368445577861622, 5);
  sqcRYGate(q, 1.031521150623484, 6);
  sqcRZGate(q, 2.133187573457959, 6);
  sqcRYGate(q, -0.8686184372766736, 7);
  sqcRZGate(q, 1.9051453586655027, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7613761434355498, 0);
  sqcRZGate(q, -1.0639305203696685, 0);
  sqcRYGate(q, -2.9645003452841863, 1);
  sqcRZGate(q, 2.750552402834715, 1);
  sqcRYGate(q, -0.3072629232702865, 2);
  sqcRZGate(q, 0.1923106722213621, 2);
  sqcRYGate(q, -0.4250758471059249, 3);
  sqcRZGate(q, 0.556384099013121, 3);
  sqcRYGate(q, -0.7036418504717474, 4);
  sqcRZGate(q, -1.3088284056878292, 4);
  sqcRYGate(q, 2.666161264442821, 5);
  sqcRZGate(q, 1.992178243010705, 5);
  sqcRYGate(q, 3.0126708795249915, 6);
  sqcRZGate(q, -2.3719263085597744, 6);
  sqcRYGate(q, 1.6613790186520871, 7);
  sqcRZGate(q, -1.1458343676030551, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.4522712319142128, 0);
  sqcRZGate(q, -1.4291630983969081, 0);
  sqcRYGate(q, -0.4812117273245802, 1);
  sqcRZGate(q, -0.7843975024101297, 1);
  sqcRYGate(q, 2.268344845207912, 2);
  sqcRZGate(q, -1.958117548481848, 2);
  sqcRYGate(q, -2.6507225544668875, 3);
  sqcRZGate(q, 2.811542913166983, 3);
  sqcRYGate(q, -1.337730706575317, 4);
  sqcRZGate(q, -1.0064044543974155, 4);
  sqcRYGate(q, -0.6047785887924393, 5);
  sqcRZGate(q, -1.0709203804167755, 5);
  sqcRYGate(q, 2.9177422511036286, 6);
  sqcRZGate(q, -0.1813621707126443, 6);
  sqcRYGate(q, -1.0363354312335942, 7);
  sqcRZGate(q, -0.11086681460591852, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.2873869713093793, 0);
  sqcRZGate(q, -2.590208759095144, 0);
  sqcRYGate(q, 0.8563400828625519, 1);
  sqcRZGate(q, -2.5979989819789853, 1);
  sqcRYGate(q, -0.6880510085886522, 2);
  sqcRZGate(q, 1.5567943568319906, 2);
  sqcRYGate(q, -1.1881259589574693, 3);
  sqcRZGate(q, 0.41496596386434526, 3);
  sqcRYGate(q, 0.9483830669432702, 4);
  sqcRZGate(q, -2.7105023927184098, 4);
  sqcRYGate(q, 1.4653375592415712, 5);
  sqcRZGate(q, -2.013505173438956, 5);
  sqcRYGate(q, -1.1533998573110695, 6);
  sqcRZGate(q, 1.1008638889300633, 6);
  sqcRYGate(q, 2.1816108756447954, 7);
  sqcRZGate(q, 2.1564239259542646, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3551495431683094, 0);
  sqcRZGate(q, 0.18652082110477772, 0);
  sqcRYGate(q, 2.9417372522322607, 1);
  sqcRZGate(q, 0.2578274391060331, 1);
  sqcRYGate(q, 3.109889041540759, 2);
  sqcRZGate(q, -2.271364449309737, 2);
  sqcRYGate(q, -0.20485649835239172, 3);
  sqcRZGate(q, 2.484835259705623, 3);
  sqcRYGate(q, -2.6314844129730823, 4);
  sqcRZGate(q, -2.353869956491851, 4);
  sqcRYGate(q, -2.998148480298876, 5);
  sqcRZGate(q, -1.7043482543967456, 5);
  sqcRYGate(q, -0.1742816603227088, 6);
  sqcRZGate(q, -1.531266511276204, 6);
  sqcRYGate(q, 2.019092231127595, 7);
  sqcRZGate(q, -0.022990171839840198, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5534285718317626, 0);
  sqcRZGate(q, -0.38364888948819337, 0);
  sqcRYGate(q, 2.6269817033211202, 1);
  sqcRZGate(q, 1.154338981852364, 1);
  sqcRYGate(q, -2.0767858434306286, 2);
  sqcRZGate(q, 1.7275152600971375, 2);
  sqcRYGate(q, 1.333557656221739, 3);
  sqcRZGate(q, -1.3862664996593237, 3);
  sqcRYGate(q, 2.0677784411608116, 4);
  sqcRZGate(q, -2.7941560156897984, 4);
  sqcRYGate(q, 2.921013655192206, 5);
  sqcRZGate(q, -2.487727993025029, 5);
  sqcRYGate(q, 0.3556310359987278, 6);
  sqcRZGate(q, 1.0300148701457554, 6);
  sqcRYGate(q, 0.22942986395233947, 7);
  sqcRZGate(q, 1.8161751780945596, 7);

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
