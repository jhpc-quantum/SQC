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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.1442036413758068, 0);
  sqcRYGate(q, 0.4283096441245897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7756288342471684, 0);
  sqcRYGate(q, -0.9668359175236984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.41891540958466, 2);
  sqcRYGate(q, 3.023292605970012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.183676274100322, 2);
  sqcRYGate(q, 2.4941150696481214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3660848227654734, 4);
  sqcRYGate(q, 1.843148907597925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0603158282013636, 4);
  sqcRYGate(q, 1.326781773301711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9194328992059434, 6);
  sqcRYGate(q, 0.7811971487787934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9555597617638292, 6);
  sqcRYGate(q, 2.64709053915732, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0243354229883215, 8);
  sqcRYGate(q, 1.5824051253938451, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.412628222506115, 8);
  sqcRYGate(q, -0.10248064648072713, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0817898681826352, 10);
  sqcRYGate(q, 3.085623925935433, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6115149790064787, 10);
  sqcRYGate(q, 1.631988108320503, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.007898941496100598, 1);
  sqcRYGate(q, 2.4667825590631676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.802116737830926, 1);
  sqcRYGate(q, -2.5006772075126062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.24215205456752, 3);
  sqcRYGate(q, -2.2691578472087293, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1382807948617817, 3);
  sqcRYGate(q, 3.135873564943645, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5945524316196478, 5);
  sqcRYGate(q, 2.2966403772586013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.394030045363335, 5);
  sqcRYGate(q, 2.749865156297763, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2792629580323953, 7);
  sqcRYGate(q, 2.611455132118681, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8395693395716312, 7);
  sqcRYGate(q, 2.746767725333954, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0410160918752043, 9);
  sqcRYGate(q, -2.777640520546685, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.729616346755102, 9);
  sqcRYGate(q, -2.0689022437732207, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6383888984210357, 0);
  sqcRYGate(q, 2.3776240417136876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.992124026297513, 0);
  sqcRYGate(q, -1.5740193661613346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.200778843356824, 2);
  sqcRYGate(q, -1.4829624622222193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9626121032424009, 2);
  sqcRYGate(q, -1.2455601887317522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.330755013843709, 4);
  sqcRYGate(q, -1.2499261311528098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12268260258243537, 4);
  sqcRYGate(q, -2.5629009313898754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7319669868855376, 6);
  sqcRYGate(q, 1.2835599671756404, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6057923136376241, 6);
  sqcRYGate(q, -2.725146217189054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8327135978551004, 8);
  sqcRYGate(q, 0.27316254190379013, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.27980533163208066, 8);
  sqcRYGate(q, 2.940029167854693, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9279111517725376, 10);
  sqcRYGate(q, 1.6975058778437813, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5186640107873255, 10);
  sqcRYGate(q, -2.8408921557816775, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.011534806203783, 1);
  sqcRYGate(q, -2.7645478620794184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16013314295987496, 1);
  sqcRYGate(q, 2.0479107631202105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7716367357273985, 3);
  sqcRYGate(q, -1.3881548411053508, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.011768188956002845, 3);
  sqcRYGate(q, -0.024255362753051207, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2597659120761928, 5);
  sqcRYGate(q, 2.6192010786213418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2782729305806697, 5);
  sqcRYGate(q, -0.5822088421283753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7105248662536532, 7);
  sqcRYGate(q, -1.5374096555622698, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9670870880525304, 7);
  sqcRYGate(q, -0.5387227375877045, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.791187748037468, 9);
  sqcRYGate(q, 0.2072638407749725, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8244579216189525, 9);
  sqcRYGate(q, -2.5079424190800386, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.13495819555283411, 0);
  sqcRYGate(q, 2.592649841058292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17943236483710212, 0);
  sqcRYGate(q, 1.0298799828547365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.59543235106534, 2);
  sqcRYGate(q, -2.4043564719096557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5334051831067725, 2);
  sqcRYGate(q, 3.019838640361268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0906415333458872, 4);
  sqcRYGate(q, 1.6655629271436634, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.485008272512784, 4);
  sqcRYGate(q, -1.4111139509714512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.689835632260158, 6);
  sqcRYGate(q, -2.4321071812858546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.187548658347349, 6);
  sqcRYGate(q, 2.639880117089672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.963775604175, 8);
  sqcRYGate(q, 1.953649229416738, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9191793821176306, 8);
  sqcRYGate(q, -1.8100022229144885, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.95555978125261, 10);
  sqcRYGate(q, -2.6711486807646416, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.977988762131945, 10);
  sqcRYGate(q, 0.1720913872451835, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6415306970906904, 1);
  sqcRYGate(q, -2.9447384172278963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9857043841108482, 1);
  sqcRYGate(q, 1.1504281760015571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.709789676596185, 3);
  sqcRYGate(q, -0.5977637209575679, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8324524058753386, 3);
  sqcRYGate(q, -0.9669469780427384, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.019432444741109, 5);
  sqcRYGate(q, -2.2037809545580282, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5894788022624882, 5);
  sqcRYGate(q, 0.250234885647898, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.352490780522504, 7);
  sqcRYGate(q, 1.723858803400321, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0456923850950277, 7);
  sqcRYGate(q, -0.850782341084674, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.044678735043295, 9);
  sqcRYGate(q, 1.8014495675875208, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5606925437930257, 9);
  sqcRYGate(q, -2.985975107732417, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.763701012255715, 0);
  sqcRYGate(q, 3.118320405832853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42690436765143414, 0);
  sqcRYGate(q, 2.6691702580509618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1007556106551597, 2);
  sqcRYGate(q, -1.60675929121036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1343695678603316, 2);
  sqcRYGate(q, 2.9986580341112963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6640022670826617, 4);
  sqcRYGate(q, -1.0845073940563514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.022158136018799898, 4);
  sqcRYGate(q, -0.0358955382817336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9420215254960516, 6);
  sqcRYGate(q, 1.7160156333234013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2635193031634433, 6);
  sqcRYGate(q, 0.18999309724309546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6279328621493014, 8);
  sqcRYGate(q, 0.4483677712764758, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9904255233845287, 8);
  sqcRYGate(q, 1.9878887258412408, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9457715726648566, 10);
  sqcRYGate(q, -2.1873646515026075, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4234010579930263, 10);
  sqcRYGate(q, 3.1243082942840936, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8748635642661555, 1);
  sqcRYGate(q, -1.5901053051944087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5211507417545739, 1);
  sqcRYGate(q, -1.3298925655385005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7829658940491113, 3);
  sqcRYGate(q, 2.600578070677917, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8223808670757182, 3);
  sqcRYGate(q, 0.9798123902397844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.42840152687683997, 5);
  sqcRYGate(q, -1.045250627122834, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.731779031625342, 5);
  sqcRYGate(q, 2.932863487181645, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9264112873142776, 7);
  sqcRYGate(q, -0.25044113209514673, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.750384898772885, 7);
  sqcRYGate(q, 0.546126014608209, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2381150261555876, 9);
  sqcRYGate(q, 0.38493262664766864, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0051132939900667, 9);
  sqcRYGate(q, -0.0833198923675793, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7409562411046027, 0);
  sqcRYGate(q, -2.6109161287908345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.207560074765052, 0);
  sqcRYGate(q, 2.8682331732760784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3387542569068649, 2);
  sqcRYGate(q, -2.6429991010958314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4103999244739003, 2);
  sqcRYGate(q, -2.8342340073075802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.487909373741809, 4);
  sqcRYGate(q, 2.467212206690802, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7773529357891497, 4);
  sqcRYGate(q, 2.357471007321086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2598266325819019, 6);
  sqcRYGate(q, 2.568977930368985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.28698153211654703, 6);
  sqcRYGate(q, 0.31864930805003144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3008232278772773, 8);
  sqcRYGate(q, 0.16673821016210422, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.123607842082503, 8);
  sqcRYGate(q, 1.1050717923663598, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.994032974664913, 10);
  sqcRYGate(q, 1.7052842699057429, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.837655835196802, 10);
  sqcRYGate(q, -0.736446773979571, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4219288350870327, 1);
  sqcRYGate(q, -2.5906759171116027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.494898604549279, 1);
  sqcRYGate(q, -2.312920781931802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.46638988619073, 3);
  sqcRYGate(q, 0.13303635856147977, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.05601163328456958, 3);
  sqcRYGate(q, 2.120346597356307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.439243754201257, 5);
  sqcRYGate(q, -1.7366806219358892, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1495373006427174, 5);
  sqcRYGate(q, -0.05101899021093398, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21356739385736956, 7);
  sqcRYGate(q, -1.107686229172292, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.049224479680818334, 7);
  sqcRYGate(q, -2.655701770922601, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.904298677429881, 9);
  sqcRYGate(q, 1.493563690324504, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1346006183017916, 9);
  sqcRYGate(q, 3.0541001921573714, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.23311722809879143, 0);
  sqcRYGate(q, 2.5997431043781813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1181771751460434, 0);
  sqcRYGate(q, 2.7084004810399116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0859950878190303, 2);
  sqcRYGate(q, -0.0015698631164450451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5726126357379457, 2);
  sqcRYGate(q, 1.3420097744893784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08076790297170433, 4);
  sqcRYGate(q, -1.4429252141610087, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43130423213699304, 4);
  sqcRYGate(q, 3.0898767051665916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6576091019421635, 6);
  sqcRYGate(q, -1.6589172176354054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1160058133166437, 6);
  sqcRYGate(q, -3.124702472899323, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2932798373642282, 8);
  sqcRYGate(q, 0.917101284710596, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9659738223975696, 8);
  sqcRYGate(q, 1.966924704606762, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.4899751246408615, 10);
  sqcRYGate(q, -0.04989437151385534, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2723563407602985, 10);
  sqcRYGate(q, 1.7198048038584917, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8157982679612674, 1);
  sqcRYGate(q, -3.1366571190012142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1306327115417365, 1);
  sqcRYGate(q, -1.913216244883459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9905985939906536, 3);
  sqcRYGate(q, 2.633536120660362, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.33385260695235686, 3);
  sqcRYGate(q, 0.5558893156675508, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6155922564170306, 5);
  sqcRYGate(q, 0.9947122168823573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0409845280335128, 5);
  sqcRYGate(q, -3.0663333929935246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9752382016137062, 7);
  sqcRYGate(q, -2.9929779996766377, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.726783997009016, 7);
  sqcRYGate(q, -0.3392619414950607, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6961297277155087, 9);
  sqcRYGate(q, -2.8121958685140327, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.883741455764239, 9);
  sqcRYGate(q, -1.3069287899087465, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7671249093483017, 0);
  sqcRYGate(q, 1.105633772402868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.65585997295254, 0);
  sqcRYGate(q, 1.1900051235045543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9671122546520303, 2);
  sqcRYGate(q, 2.1053785544934733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.091066885066769, 2);
  sqcRYGate(q, 1.7264087462265485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1331398454248636, 4);
  sqcRYGate(q, 0.337396515984646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.49330727863505625, 4);
  sqcRYGate(q, -2.735722670809524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.207147998583096, 6);
  sqcRYGate(q, 1.1153196369549432, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6575067625192705, 6);
  sqcRYGate(q, 0.20559213310799773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7165450732366123, 8);
  sqcRYGate(q, -0.5076536328669077, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8096827328133296, 8);
  sqcRYGate(q, 0.08886892186469707, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1554410874341414, 10);
  sqcRYGate(q, 1.7577731939365115, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8047815767750656, 10);
  sqcRYGate(q, -1.9207044817907974, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6948362711999652, 1);
  sqcRYGate(q, 2.307365120229051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4094256949280477, 1);
  sqcRYGate(q, 2.7416431041700435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.941741793315671, 3);
  sqcRYGate(q, -1.6966829624712227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7170122744616751, 3);
  sqcRYGate(q, -0.1763480627952605, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7601535903851824, 5);
  sqcRYGate(q, 1.6828130124550387, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24153068841385839, 5);
  sqcRYGate(q, -3.131776709869496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2914543599719606, 7);
  sqcRYGate(q, 0.04034845807055465, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8402987502886257, 7);
  sqcRYGate(q, -1.2189100329518254, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2412609984047245, 9);
  sqcRYGate(q, -2.492282107378092, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.685217497224955, 9);
  sqcRYGate(q, 2.7498376347883635, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4270599263579204, 0);
  sqcRYGate(q, 0.005812154803369828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.932813414215885, 0);
  sqcRYGate(q, -1.4141364517890054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9100446064799859, 2);
  sqcRYGate(q, -0.3528430123893997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07951268182532481, 2);
  sqcRYGate(q, 0.10512205651228969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5854428029808414, 4);
  sqcRYGate(q, -1.3853386288162939, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1143014740729495, 4);
  sqcRYGate(q, -2.815528088741915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.784913875290717, 6);
  sqcRYGate(q, -1.714690798252264, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.962895059326366, 6);
  sqcRYGate(q, -2.783873912641573, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.46553992339889394, 8);
  sqcRYGate(q, 2.939966904767547, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9720805773765867, 8);
  sqcRYGate(q, -0.08104498715291553, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3969940320611738, 10);
  sqcRYGate(q, -0.2449350765071374, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.07273863298358, 10);
  sqcRYGate(q, -0.6661671188416084, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.23392310930602, 1);
  sqcRYGate(q, 0.06372211393838612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2035375902742493, 1);
  sqcRYGate(q, -1.5830845144004335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.65242280375175, 3);
  sqcRYGate(q, -1.6015469138056515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6043782157841409, 3);
  sqcRYGate(q, 0.8080041797204212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7570123777885107, 5);
  sqcRYGate(q, -0.6413044764370001, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1580037874226523, 5);
  sqcRYGate(q, 0.02601779517153009, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.01825057806364, 7);
  sqcRYGate(q, 1.7226979117151862, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9336076673629803, 7);
  sqcRYGate(q, -1.4076072387893932, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8818994104773177, 9);
  sqcRYGate(q, 0.7695636162433531, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2405444960125749, 9);
  sqcRYGate(q, 2.855407475161157, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0482428184625467, 0);
  sqcRYGate(q, 2.1493308360579517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4596240144712587, 0);
  sqcRYGate(q, -1.2752333297002396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0062249388016165, 2);
  sqcRYGate(q, -1.4938893900657781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6413530467717856, 2);
  sqcRYGate(q, 2.3608939289212305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4820867333199836, 4);
  sqcRYGate(q, -2.3077326859517164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4589396092661335, 4);
  sqcRYGate(q, 3.041430070626384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.643893061579547, 6);
  sqcRYGate(q, -1.1760817076785532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1036791682624156, 6);
  sqcRYGate(q, -2.594050676785637, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.117197506454457, 8);
  sqcRYGate(q, -0.7340507221423378, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5644763243960655, 8);
  sqcRYGate(q, -3.059870649122865, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3647141446557196, 10);
  sqcRYGate(q, -0.821899731650263, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6744918228692067, 10);
  sqcRYGate(q, -1.3687481124794436, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4042670776379356, 1);
  sqcRYGate(q, -1.8582832629169825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8408791812713368, 1);
  sqcRYGate(q, -0.8941597838523734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8963151265433396, 3);
  sqcRYGate(q, -1.263207525748298, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5680454637046717, 3);
  sqcRYGate(q, 0.4832812080298401, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6229109823147445, 5);
  sqcRYGate(q, 1.3592569151955207, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.252209891076423, 5);
  sqcRYGate(q, -1.9157492906203268, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.26624329194379653, 7);
  sqcRYGate(q, 0.02059629395478838, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4852534057041102, 7);
  sqcRYGate(q, -0.4597986505807267, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.16165105703079033, 9);
  sqcRYGate(q, 1.190749346648566, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.297035726263557, 9);
  sqcRYGate(q, -0.10098515958732879, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.999484195530989, 0);
  sqcRYGate(q, 2.0498026864379733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1195254471195017, 0);
  sqcRYGate(q, 1.8602307645085687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7935638010177652, 2);
  sqcRYGate(q, 0.44701091360985323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18190203014457215, 2);
  sqcRYGate(q, -0.12067876168655657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.325107967629134, 4);
  sqcRYGate(q, 1.560105145890076, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3001056873373718, 4);
  sqcRYGate(q, -3.1271208568481503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.032763913085951, 6);
  sqcRYGate(q, 2.0859093465701584, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1125939361677037, 6);
  sqcRYGate(q, -3.116646063556636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.058135945258241506, 8);
  sqcRYGate(q, 0.38114271601376704, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6012798417389882, 8);
  sqcRYGate(q, 0.019336211260957192, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.637128231353825, 10);
  sqcRYGate(q, -2.399053719817955, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1298683681884558, 10);
  sqcRYGate(q, -2.0862330648200853, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1777529758975005, 1);
  sqcRYGate(q, -3.035310802035114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5331145703575011, 1);
  sqcRYGate(q, -2.591123565599068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6358781370339415, 3);
  sqcRYGate(q, -2.332301830096667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4479539260254119, 3);
  sqcRYGate(q, 0.047241956656717043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.018019156423688898, 5);
  sqcRYGate(q, 2.991099222440058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.448448253449386, 5);
  sqcRYGate(q, 0.008037602602891502, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7331033133562097, 7);
  sqcRYGate(q, 0.26274956221946555, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.540519610340557, 7);
  sqcRYGate(q, -2.3454040441822963, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9759579630208064, 9);
  sqcRYGate(q, -2.269393449043708, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.312766942543276, 9);
  sqcRYGate(q, 0.037250594866037136, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.757441549077569, 0);
  sqcRYGate(q, -2.3156134799544335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0832462276266677, 0);
  sqcRYGate(q, 2.175953458004866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5958640182574853, 2);
  sqcRYGate(q, 0.8611158079333561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5309764579003682, 2);
  sqcRYGate(q, 0.5543626568801889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9912370792273882, 4);
  sqcRYGate(q, -2.9304856826721952, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1597430837728677, 4);
  sqcRYGate(q, -3.075042910846105, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.625553554349571, 6);
  sqcRYGate(q, 1.7429558269424117, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1036022171390973, 6);
  sqcRYGate(q, -2.429378811553825, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4138642486343964, 8);
  sqcRYGate(q, -1.511504473872571, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5502229514074957, 8);
  sqcRYGate(q, -1.5308216042453573, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.15669051883719565, 10);
  sqcRYGate(q, 1.5822533643668582, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.19861841791922202, 10);
  sqcRYGate(q, 2.778759101625043, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9983105539779258, 1);
  sqcRYGate(q, 1.3808305299363601, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12423094995549772, 1);
  sqcRYGate(q, -0.20990254355364588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0204810707180156, 3);
  sqcRYGate(q, 0.8407551722086922, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.28241747868938294, 3);
  sqcRYGate(q, -3.0908719064011922, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.547345587271669, 5);
  sqcRYGate(q, 2.5914832050619117, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.036487752002355656, 5);
  sqcRYGate(q, -0.0032419413063981134, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4506193923140802, 7);
  sqcRYGate(q, -0.3940702171357726, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.041999021656122, 7);
  sqcRYGate(q, -0.00046583582078667946, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4527495184812196, 9);
  sqcRYGate(q, 2.2991332996835583, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9848325055943862, 9);
  sqcRYGate(q, -3.0404234883334444, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4231687912195286, 0);
  sqcRYGate(q, 1.0470056281444153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7135619079449107, 0);
  sqcRYGate(q, -0.41566315417133287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7796115245612745, 2);
  sqcRYGate(q, -0.19593810495462857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.954832781257849, 2);
  sqcRYGate(q, 0.38865652790689786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4755288852142525, 4);
  sqcRYGate(q, 0.35628122919308863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6148538663829228, 4);
  sqcRYGate(q, -1.1583072347755234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5436283984470379, 6);
  sqcRYGate(q, -2.773810345060094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9164756219924635, 6);
  sqcRYGate(q, 0.7237995566210911, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4516845189724786, 8);
  sqcRYGate(q, 0.8514396204670392, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.4640490507884079, 8);
  sqcRYGate(q, 1.5090988336236473, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5800724380646547, 10);
  sqcRYGate(q, -0.8194513824542198, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.44838111986774637, 10);
  sqcRYGate(q, 0.7274806395880818, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6338416388071948, 1);
  sqcRYGate(q, -0.18989013565947546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07139362114636595, 1);
  sqcRYGate(q, -1.5282462712130727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6762108934201736, 3);
  sqcRYGate(q, 1.5955904068180162, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4326836321549283, 3);
  sqcRYGate(q, -0.0024532591365628792, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5497807880365793, 5);
  sqcRYGate(q, -0.49876114718540165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5974581215060537, 5);
  sqcRYGate(q, -2.8292381088254683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1173570036824243, 7);
  sqcRYGate(q, 0.361575171756767, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6554753073305202, 7);
  sqcRYGate(q, -0.14442283661702682, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5657698303332461, 9);
  sqcRYGate(q, 0.18590384036079668, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5568258715920216, 9);
  sqcRYGate(q, -0.0987140016899355, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4050757404544885, 0);
  sqcRYGate(q, 1.4943085491961927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3938016454705062, 0);
  sqcRYGate(q, 0.07059628517986649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.907736448062149, 2);
  sqcRYGate(q, -2.6831673297091228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8904122451522394, 2);
  sqcRYGate(q, -0.24287088054175854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4635046703997272, 4);
  sqcRYGate(q, -1.5844293130849865, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5221492620887451, 4);
  sqcRYGate(q, 0.32745376760089256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2252689286289247, 6);
  sqcRYGate(q, -1.9190948073874803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.398608760102573, 6);
  sqcRYGate(q, 0.028597552127833756, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11856485767017926, 8);
  sqcRYGate(q, 1.0161513632548842, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.608129482709412, 8);
  sqcRYGate(q, 0.048656756752433444, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.357377309456572, 10);
  sqcRYGate(q, 3.128855145882568, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2355386406176523, 10);
  sqcRYGate(q, -1.6114235920450817, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3071470449234, 1);
  sqcRYGate(q, -0.9135725394484879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.130110502555931, 1);
  sqcRYGate(q, -1.3060504670442183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.826999010608444, 3);
  sqcRYGate(q, -2.5826469488374157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1325278090474584, 3);
  sqcRYGate(q, 0.002776421447170325, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.628604194408422, 5);
  sqcRYGate(q, -1.9509699443763049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4433086298534361, 5);
  sqcRYGate(q, -1.506243482772243, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6018019011681943, 7);
  sqcRYGate(q, -0.13061923813982715, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.49655805242327183, 7);
  sqcRYGate(q, -0.9986882627687408, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5677969998581274, 9);
  sqcRYGate(q, -1.7391876340334438, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8452105073067958, 9);
  sqcRYGate(q, -0.6145045346788001, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.981481999526143, 0);
  sqcRYGate(q, -2.791430925584979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1357086247801673, 0);
  sqcRYGate(q, 1.0048626468437458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6597430001526685, 2);
  sqcRYGate(q, -0.653470328804179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2328634731987558, 2);
  sqcRYGate(q, -2.9699153154250726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.945376039540722, 4);
  sqcRYGate(q, -1.6324180485930604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.015643925651461565, 4);
  sqcRYGate(q, -0.013379780911597434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.10287747134616579, 6);
  sqcRYGate(q, -1.586331030616444, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6536674737092721, 6);
  sqcRYGate(q, -3.1376638665686323, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6009163569331102, 8);
  sqcRYGate(q, -1.5477789346460082, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5079551331975152, 8);
  sqcRYGate(q, -1.096642012917878, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5374662845297944, 10);
  sqcRYGate(q, 2.551951022696344, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.27764672503689614, 10);
  sqcRYGate(q, -1.0388101378180374, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6124685003220413, 1);
  sqcRYGate(q, 0.8813639821155164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6970379431712324, 1);
  sqcRYGate(q, 0.949543282952094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8570136613683221, 3);
  sqcRYGate(q, 1.2419729708782778, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0017269915209007097, 3);
  sqcRYGate(q, -1.639301250037034, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6373100511819405, 5);
  sqcRYGate(q, -3.0433327188573713, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7400974066881161, 5);
  sqcRYGate(q, 1.8164742223316468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5362092193922428, 7);
  sqcRYGate(q, 2.8947594896245796, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0058114334904830756, 7);
  sqcRYGate(q, 0.0020521830372484118, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5874063816225652, 9);
  sqcRYGate(q, 1.3621205772256708, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0657731952877376, 9);
  sqcRYGate(q, 1.060497646805797, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3828552009835349, 0);
  sqcRYGate(q, -0.4920672204730785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0689313586489058, 0);
  sqcRYGate(q, 1.340165929753093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.855175755158349, 2);
  sqcRYGate(q, 1.5623241879632532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0542125010131858, 2);
  sqcRYGate(q, -1.5376810455052172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3716251498848657, 4);
  sqcRYGate(q, -1.5394198172154852, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.965810208459049, 4);
  sqcRYGate(q, 0.7778123015103589, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6067950292120117, 6);
  sqcRYGate(q, -2.6439257037652864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.254785563754445, 6);
  sqcRYGate(q, 2.0631776146900336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.86313300524011, 8);
  sqcRYGate(q, 2.4066275104695785, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.19605590066661718, 8);
  sqcRYGate(q, 2.4020114712803697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0263215010626618, 10);
  sqcRYGate(q, 2.014306977774984, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5132937276705294, 10);
  sqcRYGate(q, -0.05912886496456642, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.495849217190045, 1);
  sqcRYGate(q, 1.5645057858417892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5570452749341603, 1);
  sqcRYGate(q, -1.7429092686933456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5719959948196545, 3);
  sqcRYGate(q, -1.5720464476484186, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5894776043926495, 3);
  sqcRYGate(q, 0.7657190118137909, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.544348611344142, 5);
  sqcRYGate(q, -2.2220468171810674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.567592839726075e-05, 5);
  sqcRYGate(q, -0.17071422591421673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.40361144796351933, 7);
  sqcRYGate(q, -1.2395207690794396, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1088649729316304, 7);
  sqcRYGate(q, -3.1410161805636903, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8198216084460679, 9);
  sqcRYGate(q, -2.3214452078633028, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6931863395181184, 9);
  sqcRYGate(q, -1.1003818666117184, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.73947778115282, 0);
  sqcRYGate(q, -1.5804500876683365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.692785657424969, 0);
  sqcRYGate(q, 0.13811074514599753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7055549693668581, 2);
  sqcRYGate(q, -1.5772469259981772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6565686425978079, 2);
  sqcRYGate(q, 3.1043016720684524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5378079577262804, 4);
  sqcRYGate(q, 1.5812579513034195, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3880104485662582, 4);
  sqcRYGate(q, -3.138281192481222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.129014248727442, 6);
  sqcRYGate(q, 2.9222339804927095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.633551755913845, 6);
  sqcRYGate(q, 1.091981224049962, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9734952792815057, 8);
  sqcRYGate(q, 3.002249426460454, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.03320531199153975, 8);
  sqcRYGate(q, -0.07643146108242924, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0817628487009103, 10);
  sqcRYGate(q, 2.8369727626704835, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9443869370456994, 10);
  sqcRYGate(q, 1.588890979284475, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9595755039734, 1);
  sqcRYGate(q, -1.4335352685246514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6746263725218641, 1);
  sqcRYGate(q, 2.8788911873145158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5790010565192996, 3);
  sqcRYGate(q, -0.5382628259352602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5357072552974564, 3);
  sqcRYGate(q, -2.2184943907592647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5105289575818572, 5);
  sqcRYGate(q, 0.17223650485875464, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.138457451929184, 5);
  sqcRYGate(q, -3.109266269185868, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3735834082872682, 7);
  sqcRYGate(q, 2.7866930231665754, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.19173780209079183, 7);
  sqcRYGate(q, -0.02010975279015259, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.095132705690541, 9);
  sqcRYGate(q, 3.0885500087478737, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.020653973606596, 9);
  sqcRYGate(q, 1.717374733085298, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8485912213609819, 0);
  sqcRYGate(q, 0.9713997629620305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6355250091461282, 0);
  sqcRYGate(q, -1.6275038250650447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22178830488945686, 2);
  sqcRYGate(q, 1.5722997591377927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5646228480378364, 2);
  sqcRYGate(q, -3.140838844876659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5644830902801896, 4);
  sqcRYGate(q, 0.01425111531849445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0005541856385371346, 4);
  sqcRYGate(q, -2.0316635006774004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.069025426902652, 6);
  sqcRYGate(q, 1.4948235227860136, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.12079698052637745, 6);
  sqcRYGate(q, -0.9124785010288308, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4481120493257296, 8);
  sqcRYGate(q, -3.094827443502969, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.37075060717872793, 8);
  sqcRYGate(q, -3.1260214039681835, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.42571618735282796, 10);
  sqcRYGate(q, -0.014475442723000484, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5414451188164513, 10);
  sqcRYGate(q, 2.417869843683196, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5583680437260146, 1);
  sqcRYGate(q, 0.32285705388705815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1241893925142814, 1);
  sqcRYGate(q, 2.148057292471563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.569614973529485, 3);
  sqcRYGate(q, 1.568356438673716, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.57883497824733, 3);
  sqcRYGate(q, 1.5593477335890393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07052487907514138, 5);
  sqcRYGate(q, -1.512554223744781, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7131441397581124, 5);
  sqcRYGate(q, -0.10103092330823316, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9210980706918646, 7);
  sqcRYGate(q, 0.9720708876752903, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7454736887128106, 7);
  sqcRYGate(q, -0.027921284236336774, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.36981989237281676, 9);
  sqcRYGate(q, -0.7341927959433263, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.05243845529876, 9);
  sqcRYGate(q, -2.9984949701951678, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.117879333314124, 0);
  sqcRYGate(q, 1.5796317729995895, 1);
  sqcRYGate(q, -3.0366790102741423, 2);
  sqcRYGate(q, 1.571332884093952, 3);
  sqcRYGate(q, 0.0011783998913887928, 4);
  sqcRYGate(q, -1.5959874373080025, 5);
  sqcRYGate(q, -0.008858202530916544, 6);
  sqcRYGate(q, 2.918599879121018, 7);
  sqcRYGate(q, 3.0859919496739283, 8);
  sqcRYGate(q, -0.3107200610052748, 9);
  sqcRYGate(q, -1.1170835406807886, 10);
  sqcRYGate(q, -2.0793092427353552, 11);

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
