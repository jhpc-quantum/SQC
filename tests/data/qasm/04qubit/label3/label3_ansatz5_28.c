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

  sqcRYGate(q, 1.1660728956689743, 0);
  sqcRYGate(q, -1.069868517399892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3497442206562127, 0);
  sqcRYGate(q, -1.7677913153905849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2101335942777185, 2);
  sqcRYGate(q, -0.9520329576353213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6503793899076362, 2);
  sqcRYGate(q, 2.1384685185564636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41742402006115575, 1);
  sqcRYGate(q, 1.038407419582025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3594254502524312, 1);
  sqcRYGate(q, -2.3641108485063436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1173336579178628, 0);
  sqcRYGate(q, -2.4673833662401843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5235239752571788, 0);
  sqcRYGate(q, 1.0893707841253955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.803603435407734, 2);
  sqcRYGate(q, 1.4187113068287103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3059646389302542, 2);
  sqcRYGate(q, 0.8287331370967204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.330602236911554, 1);
  sqcRYGate(q, 1.3062772181955913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7130882465214574, 1);
  sqcRYGate(q, -0.9531682947334024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0809795246284537, 0);
  sqcRYGate(q, -0.4219957296070884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3213377254803618, 0);
  sqcRYGate(q, -1.1228772340613693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6896297292486877, 2);
  sqcRYGate(q, 0.5069340849202956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1978999983546137, 2);
  sqcRYGate(q, 2.7729128115098445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8766652644459594, 1);
  sqcRYGate(q, 1.424572302838431, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1587525088387371, 1);
  sqcRYGate(q, 2.087349014044899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.31067272370331, 0);
  sqcRYGate(q, -3.0671501963491297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4617802279628895, 0);
  sqcRYGate(q, -1.844706426200138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9885969879636631, 2);
  sqcRYGate(q, 0.2374283392695411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17442910504456322, 2);
  sqcRYGate(q, 2.7592715708704074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48460398667219995, 1);
  sqcRYGate(q, -0.6917394319494145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0340342937965519, 1);
  sqcRYGate(q, 2.023929780943008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6292988281278349, 0);
  sqcRYGate(q, -0.2547307617323505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2578972867705016, 0);
  sqcRYGate(q, -0.8820839066577433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0430188727686868, 2);
  sqcRYGate(q, 2.5904064489569003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7289835639233662, 2);
  sqcRYGate(q, -2.0628325982095648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.985304156222322, 1);
  sqcRYGate(q, 2.204547623183534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32434108084732827, 1);
  sqcRYGate(q, -0.697686249762033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8981043966118234, 0);
  sqcRYGate(q, 2.966282935409513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.047436098038422116, 0);
  sqcRYGate(q, 0.2489976647086536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6689866447791397, 2);
  sqcRYGate(q, -3.032846722036941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5774739067927643, 2);
  sqcRYGate(q, -2.984220371358554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2770582070813544, 1);
  sqcRYGate(q, -3.0888685915680467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1298717147642683, 1);
  sqcRYGate(q, 2.5100512121352905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6356885941347112, 0);
  sqcRYGate(q, 1.4384103865290072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.818372196383557, 0);
  sqcRYGate(q, -1.4104287212608413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0497601695518188, 2);
  sqcRYGate(q, -2.105882349493618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.815847063624759, 2);
  sqcRYGate(q, -2.1942820330438524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.582496210064701, 1);
  sqcRYGate(q, -2.0872978723530204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3737774246615775, 1);
  sqcRYGate(q, 1.7270669190655523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6037053636125841, 0);
  sqcRYGate(q, 0.41877297507615224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08909101878780629, 0);
  sqcRYGate(q, -3.0297349899280555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0629437700737907, 2);
  sqcRYGate(q, 1.159138333781264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9187428172189414, 2);
  sqcRYGate(q, 2.644616209494806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9066911327585994, 1);
  sqcRYGate(q, -0.834398098697104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.431020545252132, 1);
  sqcRYGate(q, -0.9035845100748274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9996869726838469, 0);
  sqcRYGate(q, -0.01826686748723092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5470640718328115, 0);
  sqcRYGate(q, -2.4851604043956326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12857099781412096, 2);
  sqcRYGate(q, 1.1453388143472025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1221040009984344, 2);
  sqcRYGate(q, 2.9063735286026313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.950780352172937, 1);
  sqcRYGate(q, -1.1466346414056758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7886072151902104, 1);
  sqcRYGate(q, -2.3329888100712615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.326227444045891, 0);
  sqcRYGate(q, 2.0010299165054652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9795707141319827, 0);
  sqcRYGate(q, -0.22112876381372093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.812157629156594, 2);
  sqcRYGate(q, -0.8297492574023062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.38051010790286, 2);
  sqcRYGate(q, -0.8057265729474219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4448916764863391, 1);
  sqcRYGate(q, 0.04596246029002981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37862828778608915, 1);
  sqcRYGate(q, -0.2857994164125879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11176394829622804, 0);
  sqcRYGate(q, 2.4494537630057787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3542554990493723, 0);
  sqcRYGate(q, 0.18323834702983607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9598776299500207, 2);
  sqcRYGate(q, 1.1231698216948942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.795503087746251, 2);
  sqcRYGate(q, 0.0077547022643420505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0224566133264394, 1);
  sqcRYGate(q, 0.052592882733878625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1603254032185455, 1);
  sqcRYGate(q, 2.392802224011191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.917165851497957, 0);
  sqcRYGate(q, 2.382946676532372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8332194567883635, 0);
  sqcRYGate(q, -0.6425575162014077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.607985961054795, 2);
  sqcRYGate(q, -0.625259993688018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.97929176239984, 2);
  sqcRYGate(q, -2.794813648271539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5514842440010526, 1);
  sqcRYGate(q, 0.8647346781994214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6423899074972343, 1);
  sqcRYGate(q, -1.69235618720682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6877115893018584, 0);
  sqcRYGate(q, 1.485458019361423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8829220933987143, 0);
  sqcRYGate(q, 0.10734292845725306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.146364456278778, 2);
  sqcRYGate(q, -1.3279109843352106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7058754371498319, 2);
  sqcRYGate(q, 2.5578359804666864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.006596599068741, 1);
  sqcRYGate(q, -2.5516040803072726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6594048194153022, 1);
  sqcRYGate(q, 1.1159106904539922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8373462648581719, 0);
  sqcRYGate(q, 0.6554072971361852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6151707903552662, 0);
  sqcRYGate(q, 1.275291161281892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0456158740692887, 2);
  sqcRYGate(q, 2.5516857888022875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.985173523194706, 2);
  sqcRYGate(q, 2.6176658616383714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4617748419784649, 1);
  sqcRYGate(q, -0.12940616535180904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0820768602127302, 1);
  sqcRYGate(q, 1.834573702057372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.552913908659608, 0);
  sqcRYGate(q, 1.223110608017769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0431161583564776, 0);
  sqcRYGate(q, 2.884563917752585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.409497399706243, 2);
  sqcRYGate(q, -2.244344741106354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24459445470928376, 2);
  sqcRYGate(q, 0.24587777430922705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6992081951452649, 1);
  sqcRYGate(q, 2.779130255507059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34462805960115817, 1);
  sqcRYGate(q, 2.6376109022095156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.313448151373326, 0);
  sqcRYGate(q, 2.3241393424001155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3825098455618354, 0);
  sqcRYGate(q, 3.011776778221888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5949526409602122, 2);
  sqcRYGate(q, 0.24390274266936332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8193596688705203, 2);
  sqcRYGate(q, 0.35121106748824715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0635826435536098, 1);
  sqcRYGate(q, -1.8382003956457007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7885449770666488, 1);
  sqcRYGate(q, 2.7530285815242133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7616202992052151, 0);
  sqcRYGate(q, 2.9272631674611715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.987084096904864, 0);
  sqcRYGate(q, -0.17863719395586128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.836256948422534, 2);
  sqcRYGate(q, 2.5493704964112096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.701181023687404, 2);
  sqcRYGate(q, 1.81947842638177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.320844115818511, 1);
  sqcRYGate(q, 0.5171642587445007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.13032391767169, 1);
  sqcRYGate(q, -1.5469658576416743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8157970737629006, 0);
  sqcRYGate(q, 1.3066090793401532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.602349001551457, 0);
  sqcRYGate(q, 2.5436837261855025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5494793234830064, 2);
  sqcRYGate(q, -3.0116869441606893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2935236136319226, 2);
  sqcRYGate(q, -0.4180866764043589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3917230723986957, 1);
  sqcRYGate(q, 2.8499466932121478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8495212904489176, 1);
  sqcRYGate(q, -2.330521689538411, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.881671942078851, 0);
  sqcRYGate(q, -0.6881436895939101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48852629721547286, 0);
  sqcRYGate(q, 2.246912030754087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3953720975642931, 2);
  sqcRYGate(q, -1.1694101802889825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3740179848705854, 2);
  sqcRYGate(q, -1.4471481597981706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.595855599972572, 1);
  sqcRYGate(q, -0.8884075965880891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1819227715504887, 1);
  sqcRYGate(q, -0.9016002574014736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.44375427847613064, 0);
  sqcRYGate(q, 2.195904523421169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7954566808241381, 0);
  sqcRYGate(q, 1.5990487749438171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.392402603383227, 2);
  sqcRYGate(q, 2.1502376614574956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.976630688343568, 2);
  sqcRYGate(q, -1.1899049899637033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5618549730282814, 1);
  sqcRYGate(q, 2.816895462302487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6285090209728057, 1);
  sqcRYGate(q, -0.32578712276006555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18902724000627594, 0);
  sqcRYGate(q, -1.2911800031620055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7210411724101291, 0);
  sqcRYGate(q, 1.2143640735701744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.351282605100289, 2);
  sqcRYGate(q, 1.2108566181774034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6282934202629606, 2);
  sqcRYGate(q, -2.168759365992992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3394276243572252, 1);
  sqcRYGate(q, 2.3649509510747335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5857254809285708, 1);
  sqcRYGate(q, 1.0900724803174826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5253810449651524, 0);
  sqcRYGate(q, 0.3876073993651024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.096993951851191, 0);
  sqcRYGate(q, 2.09426581621699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.636337121986596, 2);
  sqcRYGate(q, 2.5931544149618633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2762791235797114, 2);
  sqcRYGate(q, 0.9891435146267087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4103184774708404, 1);
  sqcRYGate(q, -2.0492301293126114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.712671759279233, 1);
  sqcRYGate(q, 2.631465759466658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10760328790228932, 0);
  sqcRYGate(q, -1.4564027770417258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0675585140218766, 0);
  sqcRYGate(q, -0.6043706481736651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.490407872944852, 2);
  sqcRYGate(q, 2.89193707559531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.027612081866282417, 2);
  sqcRYGate(q, 2.2082055869497506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.360251849000931, 1);
  sqcRYGate(q, -0.532906544856173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6501130950223204, 1);
  sqcRYGate(q, -1.692560867719095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9301454706312935, 0);
  sqcRYGate(q, 1.7001108863673948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9292706061624116, 0);
  sqcRYGate(q, 1.8780978333980265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9089154783207274, 2);
  sqcRYGate(q, -2.424310556654655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.024687276529489, 2);
  sqcRYGate(q, 2.358771375791059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7550714211061832, 1);
  sqcRYGate(q, -2.3603332470997582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5280700738250461, 1);
  sqcRYGate(q, 1.3424121881260078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9261999563148127, 0);
  sqcRYGate(q, -1.2502110495573413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3903823642156494, 0);
  sqcRYGate(q, 1.57174085329731, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7930049753386186, 2);
  sqcRYGate(q, -1.7205403528169274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6263042137986345, 2);
  sqcRYGate(q, 2.030104260442492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6570904815099063, 1);
  sqcRYGate(q, -2.343401126626072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.571694705139101, 1);
  sqcRYGate(q, 0.37767755451788076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.554521114086689, 0);
  sqcRYGate(q, 1.6849983229206358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.904921378551098, 0);
  sqcRYGate(q, 2.144698895710836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4361284529636809, 2);
  sqcRYGate(q, 1.4100322558656546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24744140721627342, 2);
  sqcRYGate(q, 2.176519315980851, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4105692059396757, 1);
  sqcRYGate(q, -0.16908469245372348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.682959936407765, 1);
  sqcRYGate(q, 2.0049251316824583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2593653122339377, 0);
  sqcRYGate(q, 0.5435803080939374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5788603599343087, 0);
  sqcRYGate(q, -2.041223832721389, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9316282788334025, 2);
  sqcRYGate(q, 2.8303627051827123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.760899417145186, 2);
  sqcRYGate(q, 0.0874381759413027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3012422014196123, 1);
  sqcRYGate(q, -0.9072517918552601, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.004314253578717, 1);
  sqcRYGate(q, 0.3789745104355564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6096764876415532, 0);
  sqcRYGate(q, -2.133215687533813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0171988687341202, 0);
  sqcRYGate(q, -2.8263850825461363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5428498375204218, 2);
  sqcRYGate(q, 2.266164677425496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07214745736829631, 2);
  sqcRYGate(q, -1.2772382446938098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11442241396222474, 1);
  sqcRYGate(q, 2.502687655120879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5750822917179041, 1);
  sqcRYGate(q, -0.15532194500667731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.325236090786755, 0);
  sqcRYGate(q, 1.123693164319073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7371979432783781, 0);
  sqcRYGate(q, 2.1971289650128414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5895644906552223, 2);
  sqcRYGate(q, 2.125906117442873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2835502414024891, 2);
  sqcRYGate(q, -1.285757760107403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.465736742493047, 1);
  sqcRYGate(q, -0.4071140922654859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.121812017824984, 1);
  sqcRYGate(q, -1.1380578271430077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1046678210876486, 0);
  sqcRYGate(q, 1.2541677754297416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0855928229244842, 0);
  sqcRYGate(q, -1.4885951004654183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0599751209069268, 2);
  sqcRYGate(q, 1.3444713901988916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4565514168435407, 2);
  sqcRYGate(q, -1.1473170124056091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0413808647705842, 1);
  sqcRYGate(q, -0.9442638546262305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0368002337430386, 1);
  sqcRYGate(q, 0.6878623886649208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.941178904433446, 0);
  sqcRYGate(q, 1.4199781064004744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9683054385444465, 0);
  sqcRYGate(q, -1.4003257826288527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2542058018119064, 2);
  sqcRYGate(q, -2.346917086564251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.929450921384532, 2);
  sqcRYGate(q, -0.5533800114463681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2991835218019459, 1);
  sqcRYGate(q, -0.14376847744861987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3929945938839836, 1);
  sqcRYGate(q, -2.669257935275911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.01566361290641, 0);
  sqcRYGate(q, 1.7691846341013857, 1);
  sqcRYGate(q, 1.8339286416901075, 2);
  sqcRYGate(q, 2.9532604456149247, 3);

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
