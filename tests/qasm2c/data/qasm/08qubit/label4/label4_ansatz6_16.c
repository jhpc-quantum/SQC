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

  sqcRYGate(q, -1.697537372520072, 0);
  sqcRYGate(q, 1.120970156661774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9213872013333493, 0);
  sqcRYGate(q, -0.8936654941484266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6247641511447257, 1);
  sqcRYGate(q, 3.076852944088564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.469714705767842, 1);
  sqcRYGate(q, -2.9570386355430833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.98098526618426, 2);
  sqcRYGate(q, -1.9616420131415366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.794811820590605, 2);
  sqcRYGate(q, 1.428077715007875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1385756229249915, 3);
  sqcRYGate(q, 0.13310978861096068, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9930583171395284, 3);
  sqcRYGate(q, 3.1346855732873804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.923815918326751, 4);
  sqcRYGate(q, 2.9232428060668796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4114298946818673, 4);
  sqcRYGate(q, 1.6227575450213794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.827794256926355, 5);
  sqcRYGate(q, -1.5189625837764391, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7953362704638867, 5);
  sqcRYGate(q, -0.2101794455952081, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9172146655518869, 6);
  sqcRYGate(q, -3.064118079322198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.674894577361315, 6);
  sqcRYGate(q, -2.1826358482075285, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.22566694070590515, 0);
  sqcRYGate(q, -1.2726249888827372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.25099679120466, 0);
  sqcRYGate(q, 1.2770063950608412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23530141728493437, 1);
  sqcRYGate(q, -2.6064407733295387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4001197149169741, 1);
  sqcRYGate(q, 2.4777293888912637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1942944030032567, 2);
  sqcRYGate(q, 2.9688910326001157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.615473378722406, 2);
  sqcRYGate(q, 1.8022576087530853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.499548303267759, 3);
  sqcRYGate(q, 2.40256690087287, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0829167356964637, 3);
  sqcRYGate(q, 2.020370677416212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3041727213950627, 4);
  sqcRYGate(q, 0.37249175810295704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4503044069633617, 4);
  sqcRYGate(q, 2.7646172975068564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.38184155688660004, 5);
  sqcRYGate(q, -1.8780453285834904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.312939551563213, 5);
  sqcRYGate(q, 0.3794956735188082, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.095458281235408, 6);
  sqcRYGate(q, -0.7000213421132608, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17590759576419737, 6);
  sqcRYGate(q, 0.17592856296305914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3563861315496335, 0);
  sqcRYGate(q, 2.074395744648855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5438331418622182, 0);
  sqcRYGate(q, 0.28832545902361345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7361152032227363, 1);
  sqcRYGate(q, 0.5182082077259516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2481423650401524, 1);
  sqcRYGate(q, -1.2412079492383237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3485957655812673, 2);
  sqcRYGate(q, -1.7943700100720852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5308096005168843, 2);
  sqcRYGate(q, 2.34225374922343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16106908916423382, 3);
  sqcRYGate(q, -2.121856633077522, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9164306715829937, 3);
  sqcRYGate(q, -1.4366135952002708, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.407708029568918, 4);
  sqcRYGate(q, 1.8928308658210558, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7554129280392758, 4);
  sqcRYGate(q, 1.6851478663470818, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1110669080979916, 5);
  sqcRYGate(q, -3.030957188885229, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.184740971932487, 5);
  sqcRYGate(q, 1.2907582500210477, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2832577570784876, 6);
  sqcRYGate(q, 3.052118435947422, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.273569700373083, 6);
  sqcRYGate(q, -3.050525577080786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7131724256308711, 0);
  sqcRYGate(q, -1.3048860960158655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5186522672374445, 0);
  sqcRYGate(q, -0.6867692505010288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.830876630194397, 1);
  sqcRYGate(q, -0.12465271174650665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.539522853502251, 1);
  sqcRYGate(q, 0.640097840713578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8181289393705946, 2);
  sqcRYGate(q, 1.3608375586098478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9872254443598294, 2);
  sqcRYGate(q, -0.4932293345758825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8519163635684545, 3);
  sqcRYGate(q, -0.9746213167650573, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1356511352796987, 3);
  sqcRYGate(q, 2.363552535983836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1312787871524346, 4);
  sqcRYGate(q, -2.310551780956363, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6528086737796152, 4);
  sqcRYGate(q, 2.0067987135605017, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9760617166230294, 5);
  sqcRYGate(q, 0.49155927851327275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7672020147937517, 5);
  sqcRYGate(q, 1.1101856921429274, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7838638919752876, 6);
  sqcRYGate(q, 1.7887841430746345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.497927864781892, 6);
  sqcRYGate(q, 0.25192611729065795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9390767373419271, 0);
  sqcRYGate(q, -1.8888447203813186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.541486421628095, 0);
  sqcRYGate(q, 1.254640987067901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3668807608043307, 1);
  sqcRYGate(q, -1.1785055699368607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8454629658476955, 1);
  sqcRYGate(q, 0.022999957518974767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2708004001059248, 2);
  sqcRYGate(q, 1.0149984312121343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1698985192428522, 2);
  sqcRYGate(q, -2.1459072431780406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0680407898104427, 3);
  sqcRYGate(q, -0.6986376393416533, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15853029906629348, 3);
  sqcRYGate(q, 0.4367430036403412, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.072648551132171, 4);
  sqcRYGate(q, -1.1912810839897814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1952695216270852, 4);
  sqcRYGate(q, 1.1640436226544795, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.43508990652415935, 5);
  sqcRYGate(q, -0.7558063726373243, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.241079760412258, 5);
  sqcRYGate(q, -2.342090002085496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.151211852846392, 6);
  sqcRYGate(q, -2.3628317312953873, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.210985798579226, 6);
  sqcRYGate(q, -1.7731049161314925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.937920454161751, 0);
  sqcRYGate(q, 0.14183680763165185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8809989629842984, 0);
  sqcRYGate(q, 1.1681633461341736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9334844473754068, 1);
  sqcRYGate(q, 2.669101987225392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8697779072907831, 1);
  sqcRYGate(q, 2.9582771472234803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.126323850318206, 2);
  sqcRYGate(q, -2.4574470250192575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.292917823576489, 2);
  sqcRYGate(q, 2.4616110653646177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4491702829390936, 3);
  sqcRYGate(q, -1.9559694704745176, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2621705212973915, 3);
  sqcRYGate(q, -0.49711135932647643, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3618638638005973, 4);
  sqcRYGate(q, -0.5091869311472558, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.62774906341783, 4);
  sqcRYGate(q, 2.898845790924172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0879330156655094, 5);
  sqcRYGate(q, -1.4825639626640459, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9176515324751972, 5);
  sqcRYGate(q, -1.4610868324129997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.028438094854315, 6);
  sqcRYGate(q, 2.166666208179251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.995009414385705, 6);
  sqcRYGate(q, -2.4589941977663434, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.940373014317815, 0);
  sqcRYGate(q, -2.233478039648981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.642445562270261, 0);
  sqcRYGate(q, -1.421893684128257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0792335248206024, 1);
  sqcRYGate(q, 0.2720946212797646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9526169151852226, 1);
  sqcRYGate(q, 0.48556648659467033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.137968424056801, 2);
  sqcRYGate(q, -2.1675193244972473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.177770672722054, 2);
  sqcRYGate(q, -0.5102451050635048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5137221865989785, 3);
  sqcRYGate(q, 2.0362446685996813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7957243508233427, 3);
  sqcRYGate(q, -2.9968909544509743, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7580369214616582, 4);
  sqcRYGate(q, -0.058352076684380805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1849286634787033, 4);
  sqcRYGate(q, 2.801599959566864, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7966818882672203, 5);
  sqcRYGate(q, 2.2992066343927093, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5128689577016302, 5);
  sqcRYGate(q, -2.3212813266631405, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9092703249338143, 6);
  sqcRYGate(q, 0.09446412073382772, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9056016583439543, 6);
  sqcRYGate(q, 1.2168031218958548, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6851836388541912, 0);
  sqcRYGate(q, 0.3158605195583455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.441532803315946, 0);
  sqcRYGate(q, 1.9611700544155513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15675624133848043, 1);
  sqcRYGate(q, -0.14631914708495675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3784324290064083, 1);
  sqcRYGate(q, -0.350554261193424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.39466203145044343, 2);
  sqcRYGate(q, -2.6839486387205365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5591794367352314, 2);
  sqcRYGate(q, -2.777119812587963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08078424153800423, 3);
  sqcRYGate(q, 1.7236175200910058, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9097172715361346, 3);
  sqcRYGate(q, 1.6234276040400724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7305398661252264, 4);
  sqcRYGate(q, -0.3832521467044474, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7502017019715463, 4);
  sqcRYGate(q, -1.7222012638085935, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.682568344397121, 5);
  sqcRYGate(q, -1.803126386705538, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0244788146385169, 5);
  sqcRYGate(q, -2.7213513203735897, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6982530459766645, 6);
  sqcRYGate(q, -0.9664089369099643, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.714129281603979, 6);
  sqcRYGate(q, 2.1950965723663156, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9215058097023827, 0);
  sqcRYGate(q, 2.4310372190631693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7326983743973408, 0);
  sqcRYGate(q, 2.7216254148213035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0407687457280894, 1);
  sqcRYGate(q, 2.6204720869220077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06823805452072218, 1);
  sqcRYGate(q, 1.8893772190632943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9349451256534356, 2);
  sqcRYGate(q, 0.9192302419700475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.102680721626287, 2);
  sqcRYGate(q, 2.1842545964041786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.987694743378186, 3);
  sqcRYGate(q, 1.5407782894670143, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9280928580021177, 3);
  sqcRYGate(q, -0.597293215019235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.061819337668802, 4);
  sqcRYGate(q, 2.3618030136847454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.522278978409747, 4);
  sqcRYGate(q, -1.5464382321092518, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.555183747406578, 5);
  sqcRYGate(q, -0.17597728736158125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5010318651143043, 5);
  sqcRYGate(q, 0.7588716399939434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.367420708950672, 6);
  sqcRYGate(q, 2.465944725559161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.379121995066922, 6);
  sqcRYGate(q, -2.6320855236078287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3305325834142088, 0);
  sqcRYGate(q, 0.3670581273149658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2304064717005447, 0);
  sqcRYGate(q, -1.1676883725442444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4504961867998061, 1);
  sqcRYGate(q, -1.0598200858952884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.166922411866187, 1);
  sqcRYGate(q, -2.4159063863794707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5828387638988516, 2);
  sqcRYGate(q, -0.5998305603774228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8268496387349478, 2);
  sqcRYGate(q, 2.7136811722944514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3921766019725559, 3);
  sqcRYGate(q, 1.4465774987755182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3290954047093138, 3);
  sqcRYGate(q, 0.05780920412710395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0257623741388504, 4);
  sqcRYGate(q, -1.256048533255678, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0666110414008445, 4);
  sqcRYGate(q, 1.3890117673930549, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.07867688292092012, 5);
  sqcRYGate(q, -2.360860169110341, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2764650056366835, 5);
  sqcRYGate(q, 2.3636889891641486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.19445464881175578, 6);
  sqcRYGate(q, 3.1048148820736055, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17436485268345336, 6);
  sqcRYGate(q, -2.9435678073006137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7988784499233548, 0);
  sqcRYGate(q, 1.7765760269150106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2120471504675783, 0);
  sqcRYGate(q, -1.2258719270665006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6041699956304946, 1);
  sqcRYGate(q, -1.32603961357881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0604704182302935, 1);
  sqcRYGate(q, 2.3818608880899337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5464272050536345, 2);
  sqcRYGate(q, -1.2825266097785997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.030066247996714424, 2);
  sqcRYGate(q, -1.837146778835467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3539357582774767, 3);
  sqcRYGate(q, 2.493465839818856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8923164815106642, 3);
  sqcRYGate(q, -3.066029877870051, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5621822464164397, 4);
  sqcRYGate(q, -0.039434708288609066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0593972249518107, 4);
  sqcRYGate(q, 1.4664915015133273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2695061685472164, 5);
  sqcRYGate(q, 1.8702200167140126, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2794505080227814, 5);
  sqcRYGate(q, 0.9613687183911203, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1601478889079377, 6);
  sqcRYGate(q, 0.2908210165555287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4045760885941907, 6);
  sqcRYGate(q, -2.838676859248715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1508142051694636, 0);
  sqcRYGate(q, 2.682899971114211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.059959360428277, 0);
  sqcRYGate(q, -1.0424724857750842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.367078627225992, 1);
  sqcRYGate(q, 2.246928741504999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15523739709482598, 1);
  sqcRYGate(q, 2.9677443331753475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6671562191420497, 2);
  sqcRYGate(q, 2.3628146324615398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1729815198882405, 2);
  sqcRYGate(q, -0.22904049573123902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3643859398940905, 3);
  sqcRYGate(q, -2.593254008307374, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1120008814909403, 3);
  sqcRYGate(q, 2.7077735838393577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.041663216824886, 4);
  sqcRYGate(q, 0.28989514885759515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.30567465772002045, 4);
  sqcRYGate(q, -1.7896827648386808, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2626183805131834, 5);
  sqcRYGate(q, 0.15581682108679254, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.36619431306475575, 5);
  sqcRYGate(q, -1.9610621088660827, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4790192366470314, 6);
  sqcRYGate(q, 2.5641788988560585, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.888583721944824, 6);
  sqcRYGate(q, -2.878997496688541, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1327417882138021, 0);
  sqcRYGate(q, 0.07874013876861903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0398885651600216, 0);
  sqcRYGate(q, -0.46876155568013367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9024037268740757, 1);
  sqcRYGate(q, -2.973829613932809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6206813564167568, 1);
  sqcRYGate(q, 1.9175226002786694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35798772769829973, 2);
  sqcRYGate(q, 1.679481767083523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9153255378666847, 2);
  sqcRYGate(q, 2.1213945186499696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.700751105155586, 3);
  sqcRYGate(q, 1.7155096503777267, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.612065836542458, 3);
  sqcRYGate(q, 2.3793943847545163, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18775683044093672, 4);
  sqcRYGate(q, -0.659695992043213, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3754645621594646, 4);
  sqcRYGate(q, -2.2428329891563, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4273498951442685, 5);
  sqcRYGate(q, -0.6941466119306607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.270130313746523, 5);
  sqcRYGate(q, -2.7797560395546, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.46256164779735803, 6);
  sqcRYGate(q, 1.7705284103943115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.343714850008299, 6);
  sqcRYGate(q, 3.067284390623332, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7954222711687171, 0);
  sqcRYGate(q, 0.09755775410233436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40430401724397663, 0);
  sqcRYGate(q, -0.05622984458762903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.121618056251695, 1);
  sqcRYGate(q, -1.2538586369328462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9468207983310775, 1);
  sqcRYGate(q, -0.02272392152846495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2086636981338588, 2);
  sqcRYGate(q, -1.3667778402872475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7522429883928974, 2);
  sqcRYGate(q, -0.03832824097719968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.678920418428474, 3);
  sqcRYGate(q, -2.6078036024587594, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1652197791573742, 3);
  sqcRYGate(q, 1.9248923234783133, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1503732665264046, 4);
  sqcRYGate(q, -1.5240703383454368, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.975548495275962, 4);
  sqcRYGate(q, 2.300142376259253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8679331245389887, 5);
  sqcRYGate(q, -1.7052620288095806, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.218405326900296, 5);
  sqcRYGate(q, 1.4340917233717818, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4548270063270854, 6);
  sqcRYGate(q, 2.1152555889144895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.451601246163011, 6);
  sqcRYGate(q, -0.9886672562042254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.567285940571767, 0);
  sqcRYGate(q, 0.5762647485113677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.009092305162108, 0);
  sqcRYGate(q, -0.552154747531349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.406572824163355, 1);
  sqcRYGate(q, 1.5797864936262807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3509176876077662, 1);
  sqcRYGate(q, -1.1004119401157806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.915969286109982, 2);
  sqcRYGate(q, -3.0728750075597056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4892947877060098, 2);
  sqcRYGate(q, 1.4736969904422723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3744087029109737, 3);
  sqcRYGate(q, -1.2109942124035544, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1090019906406618, 3);
  sqcRYGate(q, 0.14266684014865394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.378085575816076, 4);
  sqcRYGate(q, 2.2028850006080454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8086654512467968, 4);
  sqcRYGate(q, 2.408385701782086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.083021309500416, 5);
  sqcRYGate(q, -0.6112403224926108, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7396748365206306, 5);
  sqcRYGate(q, 1.856553842745605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8545680767554069, 6);
  sqcRYGate(q, -2.4624320085630744, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3869960150392944, 6);
  sqcRYGate(q, -2.0838222665475596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20734904153698164, 0);
  sqcRYGate(q, 1.3291036962980614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9108479790534374, 0);
  sqcRYGate(q, -2.593962518094038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6109755654559548, 1);
  sqcRYGate(q, -1.8607249050264598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.377130613686531, 1);
  sqcRYGate(q, 3.130492910969128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7155081723759071, 2);
  sqcRYGate(q, 0.07793048017438087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06259499728387397, 2);
  sqcRYGate(q, 1.3358247533387235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0579341885097957, 3);
  sqcRYGate(q, 0.23257374984386492, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.379129356120556, 3);
  sqcRYGate(q, -2.663020363470834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.239089369486908, 4);
  sqcRYGate(q, 1.6119539756351209, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3647535727653826, 4);
  sqcRYGate(q, -2.8792466100156804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8982715357395393, 5);
  sqcRYGate(q, -2.8163808069018548, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5455297112757995, 5);
  sqcRYGate(q, 2.8102257821692707, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6193205213140245, 6);
  sqcRYGate(q, -3.105767844153234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.70673344656379, 6);
  sqcRYGate(q, -2.2500260486553145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.530932270233756, 0);
  sqcRYGate(q, 0.9688310370423698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.368640664883396, 0);
  sqcRYGate(q, -2.5425297446061825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.074631323736078, 1);
  sqcRYGate(q, 3.0278637530608696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.775767517144585, 1);
  sqcRYGate(q, -0.6552699356527708, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.488732542947763, 2);
  sqcRYGate(q, -1.510401321123372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25135811618318205, 2);
  sqcRYGate(q, -2.6204047848239322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.758287827543439, 3);
  sqcRYGate(q, -0.14597081845201806, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.147599695193271, 3);
  sqcRYGate(q, -1.6478632739778496, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0655155557637856, 4);
  sqcRYGate(q, 2.586225527024145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3803212686112444, 4);
  sqcRYGate(q, 1.102765172015988, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7073413925601177, 5);
  sqcRYGate(q, -0.5401098486862379, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5539460340033013, 5);
  sqcRYGate(q, -2.051371902669038, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8462513387390428, 6);
  sqcRYGate(q, -1.4084115467768465, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5346574733764855, 6);
  sqcRYGate(q, -1.1872409741313135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.832772683885262, 0);
  sqcRYGate(q, -2.618573533136274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0689505612512993, 0);
  sqcRYGate(q, 1.0963763152976405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1671557311603111, 1);
  sqcRYGate(q, -1.5049287489291587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.530328466514635, 1);
  sqcRYGate(q, 1.0212017241925155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3953158113718951, 2);
  sqcRYGate(q, -0.9492688395329498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9352468769347095, 2);
  sqcRYGate(q, -1.9341884348419072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38188043512288944, 3);
  sqcRYGate(q, -0.7619898836541941, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5668340150920494, 3);
  sqcRYGate(q, -2.45669530885, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.649612008082182, 4);
  sqcRYGate(q, 0.23240797333286256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0607437995990328, 4);
  sqcRYGate(q, 0.2591566103218996, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44166245447136543, 5);
  sqcRYGate(q, -2.267679010398683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5159040272846402, 5);
  sqcRYGate(q, 2.0017763130537025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.056973230883459174, 6);
  sqcRYGate(q, 1.1989942979255284, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.701557264622477, 6);
  sqcRYGate(q, -2.046590031154019, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5701124765952938, 0);
  sqcRYGate(q, -0.6221306248415672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7390307528202258, 0);
  sqcRYGate(q, -1.2068249308085226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.342212126800911, 1);
  sqcRYGate(q, -1.0212144742566949, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3062898343438798, 1);
  sqcRYGate(q, -1.8905582822720373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9672499798682803, 2);
  sqcRYGate(q, -0.6415099795550887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6597771828776262, 2);
  sqcRYGate(q, -0.9421846724774358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6700285683960123, 3);
  sqcRYGate(q, 0.37192464576195894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3502612338446577, 3);
  sqcRYGate(q, -2.967863017874031, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7966206317894104, 4);
  sqcRYGate(q, -2.9838964483409485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.199010156139707, 4);
  sqcRYGate(q, 1.832558222498946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4644294439116408, 5);
  sqcRYGate(q, 2.3111784555678097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0038798380240266, 5);
  sqcRYGate(q, 0.9797415176810353, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3852999612177914, 6);
  sqcRYGate(q, -1.8972636027193897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2903053504892368, 6);
  sqcRYGate(q, 2.487252727648691, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.52049837113076, 0);
  sqcRYGate(q, -2.7333440491508902, 1);
  sqcRYGate(q, -0.46603321142566045, 2);
  sqcRYGate(q, 2.294648206433751, 3);
  sqcRYGate(q, -2.6006515772583736, 4);
  sqcRYGate(q, 1.8666197235192126, 5);
  sqcRYGate(q, 1.9513934876423997, 6);
  sqcRYGate(q, 2.8550126250405485, 7);

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
