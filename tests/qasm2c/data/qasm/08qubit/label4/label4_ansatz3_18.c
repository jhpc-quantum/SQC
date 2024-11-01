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

  sqcRYGate(q, 0.34061086922335626, 0);
  sqcRZGate(q, -0.1035134858834015, 0);
  sqcRYGate(q, 0.3654980706804345, 1);
  sqcRZGate(q, -2.9349221208102163, 1);
  sqcRYGate(q, -0.5503646688945825, 2);
  sqcRZGate(q, 1.4875348566219477, 2);
  sqcRYGate(q, 0.32570402132418236, 3);
  sqcRZGate(q, -2.9587400553962917, 3);
  sqcRYGate(q, 0.7025457354923216, 4);
  sqcRZGate(q, -1.767217837938778, 4);
  sqcRYGate(q, 2.3835251680038048, 5);
  sqcRZGate(q, 0.2510106419889029, 5);
  sqcRYGate(q, 0.23562254326935247, 6);
  sqcRZGate(q, 3.059318793310655, 6);
  sqcRYGate(q, -1.7443033769185652, 7);
  sqcRZGate(q, -1.9557012173211588, 7);
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
  sqcRYGate(q, 1.7464189030474007, 0);
  sqcRZGate(q, -1.0209824336662043, 0);
  sqcRYGate(q, -2.767560255458363, 1);
  sqcRZGate(q, -1.8399688176836515, 1);
  sqcRYGate(q, 2.9868527682561288, 2);
  sqcRZGate(q, -2.3289834879742783, 2);
  sqcRYGate(q, -1.8986757289841716, 3);
  sqcRZGate(q, -0.8897687019136782, 3);
  sqcRYGate(q, 1.6378594840317469, 4);
  sqcRZGate(q, 0.8030668231251701, 4);
  sqcRYGate(q, 1.844721771280053, 5);
  sqcRZGate(q, 2.1971308570125183, 5);
  sqcRYGate(q, -2.244051036703575, 6);
  sqcRZGate(q, -0.6567417956335503, 6);
  sqcRYGate(q, 0.8389178396066499, 7);
  sqcRZGate(q, 2.708753655672742, 7);
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
  sqcRYGate(q, -1.7689043022981954, 0);
  sqcRZGate(q, -1.8481220849323683, 0);
  sqcRYGate(q, -1.3224636619498185, 1);
  sqcRZGate(q, -0.32125698830381366, 1);
  sqcRYGate(q, -0.08812555828592838, 2);
  sqcRZGate(q, -1.621293468530287, 2);
  sqcRYGate(q, -1.9030237342221445, 3);
  sqcRZGate(q, 2.8084747213694863, 3);
  sqcRYGate(q, 0.9402397552799884, 4);
  sqcRZGate(q, -3.039709854214597, 4);
  sqcRYGate(q, -0.07271117944643102, 5);
  sqcRZGate(q, -0.6051052285567895, 5);
  sqcRYGate(q, -1.419691990644686, 6);
  sqcRZGate(q, -1.3723313553847083, 6);
  sqcRYGate(q, 0.365550922998658, 7);
  sqcRZGate(q, -2.5758755796199915, 7);
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
  sqcRYGate(q, 2.983895120754366, 0);
  sqcRZGate(q, -1.6225482376452742, 0);
  sqcRYGate(q, 0.3313492781045724, 1);
  sqcRZGate(q, -0.605884679236185, 1);
  sqcRYGate(q, 0.8336802192840969, 2);
  sqcRZGate(q, 2.84840977849548, 2);
  sqcRYGate(q, -2.900987473354127, 3);
  sqcRZGate(q, -0.10409289357921468, 3);
  sqcRYGate(q, -2.2733292060120847, 4);
  sqcRZGate(q, -1.278432470487685, 4);
  sqcRYGate(q, -1.7243455656771263, 5);
  sqcRZGate(q, -0.3004611375387469, 5);
  sqcRYGate(q, 0.8872771337360258, 6);
  sqcRZGate(q, -1.8645346148646567, 6);
  sqcRYGate(q, -2.8272829132699555, 7);
  sqcRZGate(q, 1.9590535237392201, 7);
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
  sqcRYGate(q, 2.4493288188797337, 0);
  sqcRZGate(q, -2.139328707189539, 0);
  sqcRYGate(q, 0.5639699233738682, 1);
  sqcRZGate(q, 1.3634256582454116, 1);
  sqcRYGate(q, -0.06632089868434665, 2);
  sqcRZGate(q, -3.0634468702335442, 2);
  sqcRYGate(q, -1.339522652519853, 3);
  sqcRZGate(q, -3.0959573268350065, 3);
  sqcRYGate(q, 2.984660621567499, 4);
  sqcRZGate(q, 2.1675200685757563, 4);
  sqcRYGate(q, -0.8088592741714811, 5);
  sqcRZGate(q, -2.8498326173301276, 5);
  sqcRYGate(q, 1.0620080636864457, 6);
  sqcRZGate(q, 0.7977448840300312, 6);
  sqcRYGate(q, 1.4403696429110964, 7);
  sqcRZGate(q, -1.3737644905301245, 7);
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
  sqcRYGate(q, 0.9841901968806549, 0);
  sqcRZGate(q, 2.5178414686585797, 0);
  sqcRYGate(q, 0.08213418048314118, 1);
  sqcRZGate(q, 1.7367838028759701, 1);
  sqcRYGate(q, -1.024686570668103, 2);
  sqcRZGate(q, 2.2663568479996394, 2);
  sqcRYGate(q, 0.6670509767662667, 3);
  sqcRZGate(q, 1.0262803076439193, 3);
  sqcRYGate(q, 2.5877360204804236, 4);
  sqcRZGate(q, 2.0595516145270625, 4);
  sqcRYGate(q, -0.86044960335109, 5);
  sqcRZGate(q, 1.4464425550587179, 5);
  sqcRYGate(q, 0.4213332260004963, 6);
  sqcRZGate(q, 1.5999877395126703, 6);
  sqcRYGate(q, 2.272395175502603, 7);
  sqcRZGate(q, -3.099262636077868, 7);
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
  sqcRYGate(q, 0.5242890870845509, 0);
  sqcRZGate(q, 0.25049350385981756, 0);
  sqcRYGate(q, 1.8377614349584332, 1);
  sqcRZGate(q, -1.830456828480318, 1);
  sqcRYGate(q, -2.750590276024876, 2);
  sqcRZGate(q, 1.4330657145073777, 2);
  sqcRYGate(q, -2.7484446365941575, 3);
  sqcRZGate(q, 3.0299156826018083, 3);
  sqcRYGate(q, 1.7640345247707692, 4);
  sqcRZGate(q, 2.292535391062942, 4);
  sqcRYGate(q, 2.7812010489344092, 5);
  sqcRZGate(q, -1.6923017751247142, 5);
  sqcRYGate(q, -1.117164973713926, 6);
  sqcRZGate(q, -2.7631854788581474, 6);
  sqcRYGate(q, -2.171663928091229, 7);
  sqcRZGate(q, 1.4156661421513828, 7);
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
  sqcRYGate(q, 1.477916142859937, 0);
  sqcRZGate(q, 2.595490234704988, 0);
  sqcRYGate(q, 1.165260110902388, 1);
  sqcRZGate(q, 1.914764227067157, 1);
  sqcRYGate(q, 2.975024863022658, 2);
  sqcRZGate(q, -2.87382840602924, 2);
  sqcRYGate(q, 0.40979716524174764, 3);
  sqcRZGate(q, 2.161216565180885, 3);
  sqcRYGate(q, -2.209914321603401, 4);
  sqcRZGate(q, 2.3837465288920248, 4);
  sqcRYGate(q, 2.6799933478929265, 5);
  sqcRZGate(q, 0.6723964517358461, 5);
  sqcRYGate(q, -0.6469838361527698, 6);
  sqcRZGate(q, 1.8118166715390451, 6);
  sqcRYGate(q, -2.106829884204279, 7);
  sqcRZGate(q, -1.5703573274607638, 7);
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
  sqcRYGate(q, 1.3584305116053663, 0);
  sqcRZGate(q, -0.703817776569415, 0);
  sqcRYGate(q, -1.7636695478234972, 1);
  sqcRZGate(q, 1.435128000758787, 1);
  sqcRYGate(q, -1.9097775232668568, 2);
  sqcRZGate(q, 2.8473182245921986, 2);
  sqcRYGate(q, 3.0701963869411375, 3);
  sqcRZGate(q, -0.6825511900632782, 3);
  sqcRYGate(q, 0.5080572242822368, 4);
  sqcRZGate(q, 1.254569953500554, 4);
  sqcRYGate(q, -2.77708157154627, 5);
  sqcRZGate(q, -2.5145000961120116, 5);
  sqcRYGate(q, -2.002950614913265, 6);
  sqcRZGate(q, -1.054027136150765, 6);
  sqcRYGate(q, -2.052957447143687, 7);
  sqcRZGate(q, 3.006133934130639, 7);
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
  sqcRYGate(q, 2.138615867787827, 0);
  sqcRZGate(q, -2.343796543685626, 0);
  sqcRYGate(q, -1.6774055731843243, 1);
  sqcRZGate(q, 3.139825957968757, 1);
  sqcRYGate(q, -2.9328639324020322, 2);
  sqcRZGate(q, -1.4680713140191273, 2);
  sqcRYGate(q, 0.09656813260662238, 3);
  sqcRZGate(q, 2.644732378567397, 3);
  sqcRYGate(q, 0.06232843591560844, 4);
  sqcRZGate(q, -2.7440369725236424, 4);
  sqcRYGate(q, 2.0841820422876216, 5);
  sqcRZGate(q, 1.2136431443987625, 5);
  sqcRYGate(q, 1.4111169567601027, 6);
  sqcRZGate(q, -1.2819990147249953, 6);
  sqcRYGate(q, 2.72182547078379, 7);
  sqcRZGate(q, 1.065030790326043, 7);
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
  sqcRYGate(q, -2.5113034043892206, 0);
  sqcRZGate(q, -0.2780362801434473, 0);
  sqcRYGate(q, 0.9101379874460154, 1);
  sqcRZGate(q, -2.011034426591442, 1);
  sqcRYGate(q, -0.602054997836165, 2);
  sqcRZGate(q, 2.907270215758019, 2);
  sqcRYGate(q, 0.3844376071616846, 3);
  sqcRZGate(q, -1.8750272729096125, 3);
  sqcRYGate(q, 1.6069005930887392, 4);
  sqcRZGate(q, 0.8967578618313023, 4);
  sqcRYGate(q, 2.977711639838562, 5);
  sqcRZGate(q, -1.8242347408515158, 5);
  sqcRYGate(q, 2.314068525459099, 6);
  sqcRZGate(q, 2.2420557083951125, 6);
  sqcRYGate(q, -1.4100656265070626, 7);
  sqcRZGate(q, -1.6456184205437046, 7);
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
  sqcRYGate(q, -0.06456807958160397, 0);
  sqcRZGate(q, -2.3281417361657253, 0);
  sqcRYGate(q, 0.8325708292846823, 1);
  sqcRZGate(q, -0.7759705183878554, 1);
  sqcRYGate(q, 2.172886408561176, 2);
  sqcRZGate(q, 1.3638567867742382, 2);
  sqcRYGate(q, -0.17221316208948156, 3);
  sqcRZGate(q, 1.7921501176055084, 3);
  sqcRYGate(q, -3.0427505824154686, 4);
  sqcRZGate(q, -1.8265678908743728, 4);
  sqcRYGate(q, -0.10773570392031839, 5);
  sqcRZGate(q, -1.9126787054305388, 5);
  sqcRYGate(q, 1.138951808555607, 6);
  sqcRZGate(q, 2.159959229839573, 6);
  sqcRYGate(q, -2.378375887043068, 7);
  sqcRZGate(q, -0.4832050625132051, 7);
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
  sqcRYGate(q, -2.3382907690179544, 0);
  sqcRZGate(q, 2.0701897648079157, 0);
  sqcRYGate(q, -1.5982149334617297, 1);
  sqcRZGate(q, -1.8068215577926203, 1);
  sqcRYGate(q, 1.0363643107573264, 2);
  sqcRZGate(q, -2.115429953244313, 2);
  sqcRYGate(q, 0.17882069855844715, 3);
  sqcRZGate(q, -1.6991467277312724, 3);
  sqcRYGate(q, 2.3296384981974483, 4);
  sqcRZGate(q, 0.4426619632182361, 4);
  sqcRYGate(q, -2.2546299643364978, 5);
  sqcRZGate(q, 2.2980198592732077, 5);
  sqcRYGate(q, -0.5211391053058039, 6);
  sqcRZGate(q, 2.495592414634133, 6);
  sqcRYGate(q, 0.749508300513897, 7);
  sqcRZGate(q, -1.6724086717880013, 7);
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
  sqcRYGate(q, 2.208904795342102, 0);
  sqcRZGate(q, -2.7490368467497333, 0);
  sqcRYGate(q, 0.8720480406596417, 1);
  sqcRZGate(q, 0.5625752974474625, 1);
  sqcRYGate(q, -1.706053129989452, 2);
  sqcRZGate(q, -1.87664571692582, 2);
  sqcRYGate(q, -3.0781616487567267, 3);
  sqcRZGate(q, -0.1549291044450003, 3);
  sqcRYGate(q, -0.27306694680092986, 4);
  sqcRZGate(q, -0.031152280754609407, 4);
  sqcRYGate(q, 2.887176425645167, 5);
  sqcRZGate(q, -1.6537420572655293, 5);
  sqcRYGate(q, 2.8753830293366036, 6);
  sqcRZGate(q, -3.071958944313203, 6);
  sqcRYGate(q, -0.22807447590458668, 7);
  sqcRZGate(q, -0.16750114055097673, 7);
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
  sqcRYGate(q, -0.5664905256231387, 0);
  sqcRZGate(q, 2.3829816246927735, 0);
  sqcRYGate(q, -2.607210280825973, 1);
  sqcRZGate(q, 1.3808343296007237, 1);
  sqcRYGate(q, 2.203433227607838, 2);
  sqcRZGate(q, 2.136896145704491, 2);
  sqcRYGate(q, 0.11024762805939696, 3);
  sqcRZGate(q, 0.7648453592419113, 3);
  sqcRYGate(q, 0.9450970618854866, 4);
  sqcRZGate(q, 2.8105468249537746, 4);
  sqcRYGate(q, 2.0874467559335512, 5);
  sqcRZGate(q, -1.439437605642457, 5);
  sqcRYGate(q, 1.9492014282966572, 6);
  sqcRZGate(q, -0.025027519693285424, 6);
  sqcRYGate(q, -0.6078456938699077, 7);
  sqcRZGate(q, 0.9649687727594971, 7);
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
  sqcRYGate(q, 1.7933898640349009, 0);
  sqcRZGate(q, 1.6845231491072126, 0);
  sqcRYGate(q, 1.8272570884990653, 1);
  sqcRZGate(q, -3.0319640846339166, 1);
  sqcRYGate(q, -1.464185312894208, 2);
  sqcRZGate(q, -2.4968373820396663, 2);
  sqcRYGate(q, -0.20115257675526355, 3);
  sqcRZGate(q, 0.8015470890303468, 3);
  sqcRYGate(q, -0.04928103724968008, 4);
  sqcRZGate(q, -1.7220320794364836, 4);
  sqcRYGate(q, 0.0868809567188907, 5);
  sqcRZGate(q, -0.6686566702050837, 5);
  sqcRYGate(q, 2.5764513294715563, 6);
  sqcRZGate(q, 2.20116963236938, 6);
  sqcRYGate(q, 0.784682090017074, 7);
  sqcRZGate(q, -0.5832029845777446, 7);
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
  sqcRYGate(q, -1.0833125035463735, 0);
  sqcRZGate(q, 0.7878287583636796, 0);
  sqcRYGate(q, -1.5301431441651383, 1);
  sqcRZGate(q, 0.36056611267223687, 1);
  sqcRYGate(q, 2.4537636009641353, 2);
  sqcRZGate(q, -2.285248167667311, 2);
  sqcRYGate(q, 0.1130222452282963, 3);
  sqcRZGate(q, -1.467781803639145, 3);
  sqcRYGate(q, -2.8724790152537665, 4);
  sqcRZGate(q, -0.39764796442569367, 4);
  sqcRYGate(q, -0.5468091577038753, 5);
  sqcRZGate(q, 0.7778255563806907, 5);
  sqcRYGate(q, 1.358584572703505, 6);
  sqcRZGate(q, 0.9356342049738208, 6);
  sqcRYGate(q, 0.5379387471056069, 7);
  sqcRZGate(q, 0.7488412217532822, 7);
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
  sqcRYGate(q, -2.143930178896228, 0);
  sqcRZGate(q, 1.7172808336791252, 0);
  sqcRYGate(q, 1.2881359172748381, 1);
  sqcRZGate(q, 2.516435777271256, 1);
  sqcRYGate(q, -2.176153776792411, 2);
  sqcRZGate(q, -0.6040912370494445, 2);
  sqcRYGate(q, -1.2801127260800944, 3);
  sqcRZGate(q, -0.25608554250429977, 3);
  sqcRYGate(q, 0.13665662579178584, 4);
  sqcRZGate(q, -2.669827463513375, 4);
  sqcRYGate(q, -0.47878515355342816, 5);
  sqcRZGate(q, 1.728851356063183, 5);
  sqcRYGate(q, -2.2849098249870465, 6);
  sqcRZGate(q, -2.087668481242104, 6);
  sqcRYGate(q, -0.7202656773925655, 7);
  sqcRZGate(q, -0.3384988060438383, 7);
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
  sqcRYGate(q, -2.4009682936078605, 0);
  sqcRZGate(q, -0.896564957694796, 0);
  sqcRYGate(q, 1.3976730939014206, 1);
  sqcRZGate(q, 2.79356998181285, 1);
  sqcRYGate(q, -2.914826897163405, 2);
  sqcRZGate(q, 0.12925520187214537, 2);
  sqcRYGate(q, -0.05267931265607828, 3);
  sqcRZGate(q, 2.3717812662193376, 3);
  sqcRYGate(q, -0.1154434009364507, 4);
  sqcRZGate(q, -0.36328936073540746, 4);
  sqcRYGate(q, -0.19664223831239624, 5);
  sqcRZGate(q, 2.56011675550605, 5);
  sqcRYGate(q, 2.542261487503642, 6);
  sqcRZGate(q, 3.0017324624074724, 6);
  sqcRYGate(q, -2.0905932636107663, 7);
  sqcRZGate(q, -1.230269089697849, 7);
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
  sqcRYGate(q, -2.157529333147138, 0);
  sqcRZGate(q, -2.5086759965023826, 0);
  sqcRYGate(q, 2.7236181486806834, 1);
  sqcRZGate(q, -1.9268439578770917, 1);
  sqcRYGate(q, 2.351586140516325, 2);
  sqcRZGate(q, 0.12787811148695608, 2);
  sqcRYGate(q, -2.3628896940829485, 3);
  sqcRZGate(q, 0.17229247396836556, 3);
  sqcRYGate(q, 0.06318933048654304, 4);
  sqcRZGate(q, -1.9659739988055174, 4);
  sqcRYGate(q, 1.4280034371338228, 5);
  sqcRZGate(q, 1.808854137072079, 5);
  sqcRYGate(q, 1.218171055282876, 6);
  sqcRZGate(q, -0.25886580420737554, 6);
  sqcRYGate(q, -0.5544396831910998, 7);
  sqcRZGate(q, 1.65079658955098, 7);
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
  sqcRYGate(q, 1.2886089593872052, 0);
  sqcRZGate(q, -3.0734207769743174, 0);
  sqcRYGate(q, -2.9956047032426514, 1);
  sqcRZGate(q, -2.435091823112551, 1);
  sqcRYGate(q, 1.8474331787312614, 2);
  sqcRZGate(q, -2.631880090636573, 2);
  sqcRYGate(q, -0.06648634729124119, 3);
  sqcRZGate(q, -1.9302593744508494, 3);
  sqcRYGate(q, 3.0794956262851847, 4);
  sqcRZGate(q, -2.5175323472280713, 4);
  sqcRYGate(q, 2.9906132327340207, 5);
  sqcRZGate(q, -1.8486731455193792, 5);
  sqcRYGate(q, 1.4034589499492753, 6);
  sqcRZGate(q, 1.908270170441323, 6);
  sqcRYGate(q, 1.1838185590408055, 7);
  sqcRZGate(q, -0.6372775232843388, 7);
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
  sqcRYGate(q, 2.7761849557418525, 0);
  sqcRZGate(q, -1.8994008384642282, 0);
  sqcRYGate(q, -2.9022401882641247, 1);
  sqcRZGate(q, 1.18356002241515, 1);
  sqcRYGate(q, -2.545026949435962, 2);
  sqcRZGate(q, 1.215030251645305, 2);
  sqcRYGate(q, 1.9059977164960282, 3);
  sqcRZGate(q, 1.5375729949068102, 3);
  sqcRYGate(q, 1.4435216118107805, 4);
  sqcRZGate(q, 2.951197640497009, 4);
  sqcRYGate(q, -1.3570025937731038, 5);
  sqcRZGate(q, 2.9248581055469676, 5);
  sqcRYGate(q, 0.895003895895126, 6);
  sqcRZGate(q, -0.5650753888868874, 6);
  sqcRYGate(q, -1.3040855929056052, 7);
  sqcRZGate(q, -2.2410883495804796, 7);

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
