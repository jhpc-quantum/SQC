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

  sqcRYGate(q, 0.9209998452462471, 0);
  sqcRZGate(q, -1.145065774600429, 0);
  sqcRYGate(q, -0.517260275286146, 1);
  sqcRZGate(q, -3.088819735018748, 1);
  sqcRYGate(q, 1.1033038759538796, 2);
  sqcRZGate(q, -2.546088332140166, 2);
  sqcRYGate(q, -1.0412333656006783, 3);
  sqcRZGate(q, -2.8401647295642025, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0413291084246374, 0);
  sqcRZGate(q, -0.6357669660162073, 0);
  sqcRYGate(q, 2.561549208053179, 1);
  sqcRZGate(q, -0.049267094597332105, 1);
  sqcRYGate(q, -3.088455300971443, 2);
  sqcRZGate(q, 0.7902703986366779, 2);
  sqcRYGate(q, 2.134839061718232, 3);
  sqcRZGate(q, -1.700972805693085, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9764387849607754, 0);
  sqcRZGate(q, 0.32979751436115645, 0);
  sqcRYGate(q, -1.234914105421143, 1);
  sqcRZGate(q, -0.6396788672289223, 1);
  sqcRYGate(q, -0.3329914019485862, 2);
  sqcRZGate(q, -2.8146655768351025, 2);
  sqcRYGate(q, -1.2331045459784022, 3);
  sqcRZGate(q, 2.3757342166321957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.409958645214487, 0);
  sqcRZGate(q, -1.0783026692928575, 0);
  sqcRYGate(q, -0.20699156186203374, 1);
  sqcRZGate(q, -0.13842332604675398, 1);
  sqcRYGate(q, 0.7741599282873795, 2);
  sqcRZGate(q, -2.5976013851541766, 2);
  sqcRYGate(q, 0.2821771752563258, 3);
  sqcRZGate(q, -2.50209733124637, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7659859785489826, 0);
  sqcRZGate(q, 2.853356686708418, 0);
  sqcRYGate(q, -1.6417368453219865, 1);
  sqcRZGate(q, 2.661449473361563, 1);
  sqcRYGate(q, 2.011653034013461, 2);
  sqcRZGate(q, -2.1120802932257337, 2);
  sqcRYGate(q, -0.19361977816702272, 3);
  sqcRZGate(q, -2.8303279963162145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.18190657680899547, 0);
  sqcRZGate(q, -2.9419990871874293, 0);
  sqcRYGate(q, -1.0801602843503977, 1);
  sqcRZGate(q, -2.2532973777932495, 1);
  sqcRYGate(q, -1.4415483927513129, 2);
  sqcRZGate(q, 1.7676726314979232, 2);
  sqcRYGate(q, 2.9986030970636284, 3);
  sqcRZGate(q, -0.6972664326405256, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2002279758949417, 0);
  sqcRZGate(q, -1.5412112793910164, 0);
  sqcRYGate(q, 2.5823398078836908, 1);
  sqcRZGate(q, 1.7474028353086428, 1);
  sqcRYGate(q, -1.7201828180368466, 2);
  sqcRZGate(q, 0.06212692724084506, 2);
  sqcRYGate(q, -0.9893213054403063, 3);
  sqcRZGate(q, 3.0343788902649003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4410530515433342, 0);
  sqcRZGate(q, -1.3495693340884327, 0);
  sqcRYGate(q, -2.5289612815371285, 1);
  sqcRZGate(q, 1.813224627692436, 1);
  sqcRYGate(q, -1.9163453329402094, 2);
  sqcRZGate(q, -1.859718901907056, 2);
  sqcRYGate(q, 1.342339262558678, 3);
  sqcRZGate(q, -2.0989260463579518, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5105405010562236, 0);
  sqcRZGate(q, -1.3610600825941786e-05, 0);
  sqcRYGate(q, 0.7933153199235576, 1);
  sqcRZGate(q, 1.3127788650238092, 1);
  sqcRYGate(q, 1.427085966010675, 2);
  sqcRZGate(q, -0.46204272909518407, 2);
  sqcRYGate(q, 2.8750555745849535, 3);
  sqcRZGate(q, 2.0063779084166375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5126966248333309, 0);
  sqcRZGate(q, -1.4272821636999602, 0);
  sqcRYGate(q, -0.7679219039128258, 1);
  sqcRZGate(q, -0.4876533986460503, 1);
  sqcRYGate(q, -1.836058418099907, 2);
  sqcRZGate(q, -2.8602262948987662, 2);
  sqcRYGate(q, -2.201691714756368, 3);
  sqcRZGate(q, 3.0636746545699793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.02140629790092, 0);
  sqcRZGate(q, -2.9988569620276, 0);
  sqcRYGate(q, 2.90509146568719, 1);
  sqcRZGate(q, -2.13543737138073, 1);
  sqcRYGate(q, -1.2550415267136978, 2);
  sqcRZGate(q, -2.9759697480245806, 2);
  sqcRYGate(q, -1.000595454917721, 3);
  sqcRZGate(q, -0.07606037519162888, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9063972294786362, 0);
  sqcRZGate(q, -0.3297265738838675, 0);
  sqcRYGate(q, 0.18814971439371586, 1);
  sqcRZGate(q, -2.184515688935849, 1);
  sqcRYGate(q, 2.4743980271864783, 2);
  sqcRZGate(q, 2.9697463076024038, 2);
  sqcRYGate(q, 0.713439319080881, 3);
  sqcRZGate(q, -0.4608728469341523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26744591918943916, 0);
  sqcRZGate(q, 1.3166805564543225, 0);
  sqcRYGate(q, -0.6625317784946126, 1);
  sqcRZGate(q, 0.6151684838999046, 1);
  sqcRYGate(q, -1.1506706673338916, 2);
  sqcRZGate(q, -1.0009785181397044, 2);
  sqcRYGate(q, -1.0169839468510828, 3);
  sqcRZGate(q, -0.9308155202553803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7566034195803537, 0);
  sqcRZGate(q, -2.0534044992526717, 0);
  sqcRYGate(q, -0.304698575878257, 1);
  sqcRZGate(q, 2.217143860405169, 1);
  sqcRYGate(q, 0.10646395134348832, 2);
  sqcRZGate(q, 1.9231910401979624, 2);
  sqcRYGate(q, -1.0938780339786254, 3);
  sqcRZGate(q, -2.1603566537616343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.202025852962948, 0);
  sqcRZGate(q, 2.704768468575197, 0);
  sqcRYGate(q, 2.8238702028282, 1);
  sqcRZGate(q, -0.06269745811756366, 1);
  sqcRYGate(q, -2.049746436288885, 2);
  sqcRZGate(q, -2.491936718587087, 2);
  sqcRYGate(q, 0.3789315124611736, 3);
  sqcRZGate(q, -0.3554837538599287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.954495394138532, 0);
  sqcRZGate(q, -2.617321088913309, 0);
  sqcRYGate(q, -3.0484911402692556, 1);
  sqcRZGate(q, 2.416567472090765, 1);
  sqcRYGate(q, -1.167622693812658, 2);
  sqcRZGate(q, 2.3618311568233907, 2);
  sqcRYGate(q, 0.3136095707792254, 3);
  sqcRZGate(q, -2.8782312798340266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3092848301257556, 0);
  sqcRZGate(q, 2.383144065263589, 0);
  sqcRYGate(q, -0.2646634499844307, 1);
  sqcRZGate(q, 3.101509839259112, 1);
  sqcRYGate(q, 0.025172870055711876, 2);
  sqcRZGate(q, 0.2123376826267314, 2);
  sqcRYGate(q, 1.059676243331504, 3);
  sqcRZGate(q, 1.905363085353259, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.303695449019806, 0);
  sqcRZGate(q, 0.36102526505383015, 0);
  sqcRYGate(q, 2.626645520415575, 1);
  sqcRZGate(q, -2.8558160257425746, 1);
  sqcRYGate(q, 2.249019118648117, 2);
  sqcRZGate(q, -1.7416662745120242, 2);
  sqcRYGate(q, 0.5654123267437736, 3);
  sqcRZGate(q, -2.7216527782341045, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.014629032803864, 0);
  sqcRZGate(q, -0.30139026253312046, 0);
  sqcRYGate(q, -2.8080074184763255, 1);
  sqcRZGate(q, -2.2156121408978926, 1);
  sqcRYGate(q, -1.415490260073403, 2);
  sqcRZGate(q, -2.8730835845318277, 2);
  sqcRYGate(q, 1.947216524542033, 3);
  sqcRZGate(q, 0.6271218261743775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.983459440797903, 0);
  sqcRZGate(q, -0.29360800596237, 0);
  sqcRYGate(q, 0.8837333316349572, 1);
  sqcRZGate(q, 1.2552983022494226, 1);
  sqcRYGate(q, -0.08613420482399901, 2);
  sqcRZGate(q, -2.1104797471469876, 2);
  sqcRYGate(q, -1.9446567877710956, 3);
  sqcRZGate(q, -1.55505967142018, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1000912233713724, 0);
  sqcRZGate(q, 0.5557528460506204, 0);
  sqcRYGate(q, -1.1488824397890882, 1);
  sqcRZGate(q, -2.32634994508697, 1);
  sqcRYGate(q, -0.5456225704020048, 2);
  sqcRZGate(q, -1.343994529860515, 2);
  sqcRYGate(q, 2.487633347868525, 3);
  sqcRZGate(q, -2.0996095095123444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.917749645710321, 0);
  sqcRZGate(q, 2.192076278824217, 0);
  sqcRYGate(q, -0.4957219203838994, 1);
  sqcRZGate(q, 0.5094031833498371, 1);
  sqcRYGate(q, -0.6250176223922662, 2);
  sqcRZGate(q, -2.497095258307483, 2);
  sqcRYGate(q, 2.464491840723618, 3);
  sqcRZGate(q, -3.0936968395326336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2711114004636346, 0);
  sqcRZGate(q, -1.1979448978767835, 0);
  sqcRYGate(q, -0.3717587674240938, 1);
  sqcRZGate(q, -0.9510397276167535, 1);
  sqcRYGate(q, 1.5736291952757933, 2);
  sqcRZGate(q, 0.6577193585279213, 2);
  sqcRYGate(q, 1.7466925915440852, 3);
  sqcRZGate(q, 0.7978449336760298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9777284958634906, 0);
  sqcRZGate(q, -0.9200651991829211, 0);
  sqcRYGate(q, -0.16408419752483283, 1);
  sqcRZGate(q, 3.024118578856356, 1);
  sqcRYGate(q, -2.269865856537341, 2);
  sqcRZGate(q, -1.0240264818837588, 2);
  sqcRYGate(q, 0.16379938764615254, 3);
  sqcRZGate(q, -1.0422264732930082, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0404741932626544, 0);
  sqcRZGate(q, -2.8128718073263403, 0);
  sqcRYGate(q, -0.5139435087087141, 1);
  sqcRZGate(q, -1.6911818412996267, 1);
  sqcRYGate(q, 0.37918476833720327, 2);
  sqcRZGate(q, -2.015246690265474, 2);
  sqcRYGate(q, 2.650212608967139, 3);
  sqcRZGate(q, 2.8894822390686965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.682614564628117, 0);
  sqcRZGate(q, 0.06820083936348896, 0);
  sqcRYGate(q, -1.9694037179789614, 1);
  sqcRZGate(q, -2.179898444870495, 1);
  sqcRYGate(q, 0.08025118820184307, 2);
  sqcRZGate(q, -0.9341670107368171, 2);
  sqcRYGate(q, -3.003340609732159, 3);
  sqcRZGate(q, 1.308878405200499, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.041258893250743, 0);
  sqcRZGate(q, 2.9968638983709956, 0);
  sqcRYGate(q, -0.4351681105945672, 1);
  sqcRZGate(q, -2.077520878600221, 1);
  sqcRYGate(q, -0.3677764663933951, 2);
  sqcRZGate(q, -2.27449784623756, 2);
  sqcRYGate(q, 1.720215053023038, 3);
  sqcRZGate(q, -0.4305473245362492, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.797312189437813, 0);
  sqcRZGate(q, -1.8854516753358586, 0);
  sqcRYGate(q, 1.7819593555193713, 1);
  sqcRZGate(q, -0.5214089289907724, 1);
  sqcRYGate(q, 0.4385823033262745, 2);
  sqcRZGate(q, 1.02482512189117, 2);
  sqcRYGate(q, 2.4894312035691333, 3);
  sqcRZGate(q, 1.4425911266362181, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.45264591066429294, 0);
  sqcRZGate(q, 0.4090061004683055, 0);
  sqcRYGate(q, 2.847265832627753, 1);
  sqcRZGate(q, 0.46145148390241886, 1);
  sqcRYGate(q, 1.3001618093015832, 2);
  sqcRZGate(q, 0.6028778749512069, 2);
  sqcRYGate(q, -1.8452934303527344, 3);
  sqcRZGate(q, -0.38976548438603764, 3);

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
