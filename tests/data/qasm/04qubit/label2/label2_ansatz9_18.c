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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.23903737829236962, 0);
  sqcRYGate(q, 1.7924209289314328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7060364884464464, 0);
  sqcRYGate(q, -0.06671498155238707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.055461533887034, 2);
  sqcRYGate(q, -2.006135015304494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1279403866278317, 2);
  sqcRYGate(q, 3.097277345767535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28621694152409966, 0);
  sqcRYGate(q, -0.747455996875548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9312430151303649, 0);
  sqcRYGate(q, 2.0824339225369544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0964900476215895, 1);
  sqcRYGate(q, 1.123897280941895, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5769587937415901, 1);
  sqcRYGate(q, -1.8513856311577275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6189007813434566, 0);
  sqcRYGate(q, -2.483516560724568, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3007985197985215, 0);
  sqcRYGate(q, -2.1122496092215397, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.007785695817402, 1);
  sqcRYGate(q, -0.5425067915696928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.197895770187067, 1);
  sqcRYGate(q, -2.681646758535541, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43732528895678424, 0);
  sqcRYGate(q, -0.9379583739774491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7243296901026444, 0);
  sqcRYGate(q, 0.041885940342160935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9087492689536556, 2);
  sqcRYGate(q, -2.760972775702398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.320486178527882, 2);
  sqcRYGate(q, -1.0057818204751827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5200214460594585, 0);
  sqcRYGate(q, -1.1970640981737812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7728572288977347, 0);
  sqcRYGate(q, 2.405190736007626, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3564681923870925, 1);
  sqcRYGate(q, -1.0564599686401268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.186577266428949, 1);
  sqcRYGate(q, -2.686574766321936, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.455892417043196, 0);
  sqcRYGate(q, -0.43627581345805255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2172538641914814, 0);
  sqcRYGate(q, 0.06866910353212749, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8295274006827977, 1);
  sqcRYGate(q, -3.033591088983715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2923999140019329, 1);
  sqcRYGate(q, 0.07059523692635672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4334463166436384, 0);
  sqcRYGate(q, -2.953275460119321, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.626100122075246, 0);
  sqcRYGate(q, 3.0300794710662395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8420701065330657, 2);
  sqcRYGate(q, 0.814985478169493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0465607550271674, 2);
  sqcRYGate(q, -2.0105551265554604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.343308749266225, 0);
  sqcRYGate(q, -1.334230275714099, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9113039551054256, 0);
  sqcRYGate(q, -3.1121426391913065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5160057605413124, 1);
  sqcRYGate(q, 0.1186844281047006, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7089481480544917, 1);
  sqcRYGate(q, 1.9606364157361513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0282258056555222, 0);
  sqcRYGate(q, -0.7998943071024356, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5373106448712188, 0);
  sqcRYGate(q, 0.6255871417375327, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5633694058734706, 1);
  sqcRYGate(q, 2.5475848363615063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0551759701614216, 1);
  sqcRYGate(q, -2.255333528424604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.25789830812658, 0);
  sqcRYGate(q, 0.9297191095156458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8249167565700224, 0);
  sqcRYGate(q, -2.5617082236548634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.627278928084231, 2);
  sqcRYGate(q, -1.6628724896613971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5465426509578792, 2);
  sqcRYGate(q, 1.184443714297731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5557959936187808, 0);
  sqcRYGate(q, -3.125439904000795, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.567631580909665, 0);
  sqcRYGate(q, -2.8082981627228865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6336763258990018, 1);
  sqcRYGate(q, -1.1344262246133152, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.11527277728467224, 1);
  sqcRYGate(q, 0.2267145983425758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3228162055056285, 0);
  sqcRYGate(q, -1.5200267157238223, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.339105224687712, 0);
  sqcRYGate(q, -1.6839292979762321, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3216965736935844, 1);
  sqcRYGate(q, -0.3952755646728514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1685962011286783, 1);
  sqcRYGate(q, 1.6502987955805217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1579038854872246, 0);
  sqcRYGate(q, 2.635712051935984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2019927906512446, 0);
  sqcRYGate(q, -0.859412281765354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0093036258143882, 2);
  sqcRYGate(q, 1.312128428720352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22356861926947325, 2);
  sqcRYGate(q, -1.1629875595832644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4346245805353046, 0);
  sqcRYGate(q, -2.360062429833331, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.19532038490461495, 0);
  sqcRYGate(q, 1.7272985856313916, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.088274680707495, 1);
  sqcRYGate(q, -2.664143300925803, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.539000321805363, 1);
  sqcRYGate(q, 2.3180206275285666, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2857412511961916, 0);
  sqcRYGate(q, 2.8266842251300965, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9065424577687318, 0);
  sqcRYGate(q, -2.244862013911148, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0890927589309811, 1);
  sqcRYGate(q, 1.4073629573814468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7880852563262215, 1);
  sqcRYGate(q, -1.0666225864205563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.013674281594575, 0);
  sqcRYGate(q, 2.621740963171652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1246463023436104, 0);
  sqcRYGate(q, 0.11524102552333915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7218137620069083, 2);
  sqcRYGate(q, -2.5002191162119463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45280642902165125, 2);
  sqcRYGate(q, -0.9913121497041323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.27506500669652384, 0);
  sqcRYGate(q, 0.7945081764743445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.155667040331927, 0);
  sqcRYGate(q, 0.9898994922968358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6706215770558823, 1);
  sqcRYGate(q, -0.8938259383818326, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5456467779163843, 1);
  sqcRYGate(q, 2.6978335745614173, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1477796050785463, 0);
  sqcRYGate(q, -2.718253161611786, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.834423398316647, 0);
  sqcRYGate(q, -0.4303381184354184, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9238666440648158, 1);
  sqcRYGate(q, -0.004055201496639916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6800574916257256, 1);
  sqcRYGate(q, -2.9609567753852333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20728015583144818, 0);
  sqcRYGate(q, 0.7206141392441339, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0756040873931183, 0);
  sqcRYGate(q, -3.0155441719061984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.907836757930479, 2);
  sqcRYGate(q, 1.3495999973972626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6163934493431862, 2);
  sqcRYGate(q, 0.5686742135425856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7544979662612805, 0);
  sqcRYGate(q, -0.24222081085908792, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8574370486074567, 0);
  sqcRYGate(q, -0.12894066100896764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1392190346531046, 1);
  sqcRYGate(q, -0.9399586686987343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9544209037093883, 1);
  sqcRYGate(q, -3.007038282450751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6666181794975643, 0);
  sqcRYGate(q, 0.7105348597812142, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1890592102023947, 0);
  sqcRYGate(q, -2.8669815082013357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0828682368934714, 1);
  sqcRYGate(q, 2.680595099659813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.969234811531588, 1);
  sqcRYGate(q, 2.840754884244742, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4149623228554997, 0);
  sqcRYGate(q, 0.6014690118373851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2731514174039233, 0);
  sqcRYGate(q, 1.5516522036552851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7564713818162891, 2);
  sqcRYGate(q, -1.7506749831148074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9183239050286379, 2);
  sqcRYGate(q, -2.9600340506022063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2846357397639334, 0);
  sqcRYGate(q, 2.747516510120885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.458480581540501, 0);
  sqcRYGate(q, 0.6653794286659682, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5314005227449736, 1);
  sqcRYGate(q, 0.7381735952673109, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.544187970599494, 1);
  sqcRYGate(q, 2.301678413506888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.443693685791421, 0);
  sqcRYGate(q, -0.9364927078032277, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6716588607749303, 0);
  sqcRYGate(q, 2.049862085277306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.20342086634096526, 1);
  sqcRYGate(q, 2.5382615638712283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8528637426515067, 1);
  sqcRYGate(q, 1.8605644111956385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3140116383229676, 0);
  sqcRYGate(q, -1.4622840408973516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.207365256128013, 0);
  sqcRYGate(q, -0.8756218624404717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8672639564445233, 2);
  sqcRYGate(q, -2.7857809552421537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7087899996549125, 2);
  sqcRYGate(q, -1.5617304116318822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.479752018510476, 0);
  sqcRYGate(q, -0.06865921006066333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0160836630379717, 0);
  sqcRYGate(q, -1.2210786317347937, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.03009058293964, 1);
  sqcRYGate(q, -0.8210107857479653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0582859434988885, 1);
  sqcRYGate(q, -2.943813590272524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.325818325735671, 0);
  sqcRYGate(q, -3.099718922295747, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.242534150461871, 0);
  sqcRYGate(q, 1.4946234571585573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.416185202858367, 1);
  sqcRYGate(q, -0.7694134768302244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3507764494397678, 1);
  sqcRYGate(q, 1.7776189878235513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8917109873762055, 0);
  sqcRYGate(q, -0.5669640341814892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23309007273923224, 0);
  sqcRYGate(q, 2.44255491426142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9943337489051904, 2);
  sqcRYGate(q, -1.5331266419097176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9734856193735837, 2);
  sqcRYGate(q, 0.13329921781159104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15300150750491426, 0);
  sqcRYGate(q, 1.0963125563271667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6536083404687556, 0);
  sqcRYGate(q, 2.0337588623744454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4164177537796907, 1);
  sqcRYGate(q, 0.21345660651566775, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.068189232383176, 1);
  sqcRYGate(q, 2.788558915194295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7305633486016151, 0);
  sqcRYGate(q, -0.5107550688068089, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5242443309479337, 0);
  sqcRYGate(q, 3.0954622261905653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9863310629285036, 1);
  sqcRYGate(q, -0.03330588124115052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7808584797433173, 1);
  sqcRYGate(q, -2.3502516708828303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8592082545551003, 0);
  sqcRYGate(q, 1.2281819256486164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.088181966591719, 0);
  sqcRYGate(q, -2.3718636591929068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6068558375304074, 2);
  sqcRYGate(q, -2.5115460942991223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8062192819127865, 2);
  sqcRYGate(q, 0.825511745467165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.412146733236734, 0);
  sqcRYGate(q, 2.1984388214644404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2453761021366994, 0);
  sqcRYGate(q, -0.512062443314512, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3613348836588501, 1);
  sqcRYGate(q, -1.7154082472449108, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9071008225618225, 1);
  sqcRYGate(q, 1.012901195367978, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8244354887542549, 0);
  sqcRYGate(q, 2.7768842417200603, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1890222018720884, 0);
  sqcRYGate(q, -2.9196621123443496, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.151997804525403, 1);
  sqcRYGate(q, -1.6225696322506573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.988272966657853, 1);
  sqcRYGate(q, 0.014239154628730991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5313764411680877, 0);
  sqcRYGate(q, -2.9435916474924615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6860433974422131, 0);
  sqcRYGate(q, 2.1591553666764396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5045528868004576, 2);
  sqcRYGate(q, -2.755363500231732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.534474808252371, 2);
  sqcRYGate(q, -1.9333977089824237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27662165324498833, 0);
  sqcRYGate(q, 0.2501393930006984, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7879755559373142, 0);
  sqcRYGate(q, -2.315758673880505, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17945665773691033, 1);
  sqcRYGate(q, -2.1381806985696317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3506574625627947, 1);
  sqcRYGate(q, 0.9584771497075821, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9348175611626988, 0);
  sqcRYGate(q, -1.2834666533969834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9410795683690092, 0);
  sqcRYGate(q, -2.1296194858298367, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.466216891650209, 1);
  sqcRYGate(q, 0.38790148540665237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.811518919075073, 1);
  sqcRYGate(q, -1.5469184957324393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3872057195874115, 0);
  sqcRYGate(q, -0.9730591747053126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5224947588552085, 0);
  sqcRYGate(q, -3.063819165994791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8587322584354373, 2);
  sqcRYGate(q, 1.65696554751658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.437413555010756, 2);
  sqcRYGate(q, -2.964460164726538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.184272784309376, 0);
  sqcRYGate(q, 2.4020361162868458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8715964793029896, 0);
  sqcRYGate(q, 2.7658697125071487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.916154973574599, 1);
  sqcRYGate(q, 2.2988928777905713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9253385030306, 1);
  sqcRYGate(q, -0.38758452327582926, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8756854543856998, 0);
  sqcRYGate(q, -1.6836142142029773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4577980824371677, 0);
  sqcRYGate(q, -0.9582977635997734, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.786918211526592, 1);
  sqcRYGate(q, -2.667278872073211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.593289759505373, 1);
  sqcRYGate(q, -0.4471371906962131, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1723735912008859, 0);
  sqcRYGate(q, 1.0148212142542832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3456641109532033, 0);
  sqcRYGate(q, 2.697326326361616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5850585292594217, 2);
  sqcRYGate(q, -1.834490168420375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5857392111314481, 2);
  sqcRYGate(q, -0.7589650938240183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2200953249757926, 0);
  sqcRYGate(q, -2.3733443214474885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4182682354852414, 0);
  sqcRYGate(q, -2.606079767008155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8385691328852358, 1);
  sqcRYGate(q, 0.9028268677688454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21611253024373928, 1);
  sqcRYGate(q, 2.119605813814442, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2217881211229904, 0);
  sqcRYGate(q, 2.446589537310795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0744560721736955, 0);
  sqcRYGate(q, -0.920837048625062, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6524090954668025, 1);
  sqcRYGate(q, 1.6396027092988832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.846173473297376, 1);
  sqcRYGate(q, 1.4774601901141278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1093850514952344, 0);
  sqcRYGate(q, 1.5731055887706744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.696598571505734, 0);
  sqcRYGate(q, 0.035030811091651515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7997971692531556, 2);
  sqcRYGate(q, -1.7140194936781181, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.749350706476697, 2);
  sqcRYGate(q, 1.6101682751996782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0118611136668725, 0);
  sqcRYGate(q, -2.5651061538647757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5016331244178223, 0);
  sqcRYGate(q, 2.397412228017777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8676893428482337, 1);
  sqcRYGate(q, 1.8228783752195779, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05501136643564027, 1);
  sqcRYGate(q, -0.9245898190462789, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5016365571082941, 0);
  sqcRYGate(q, -0.14684179523566768, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3641922500124506, 0);
  sqcRYGate(q, -2.27816542297218, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8131847913117687, 1);
  sqcRYGate(q, 0.9569550836315891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7046768165078228, 1);
  sqcRYGate(q, -1.917640122296941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0962719323005663, 0);
  sqcRYGate(q, -2.9496845938087612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.206849960746906, 0);
  sqcRYGate(q, 0.9353992133048763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1555839980182148, 2);
  sqcRYGate(q, -3.1004858411501766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30829217482163496, 2);
  sqcRYGate(q, -2.024923476923175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0030013114835068, 0);
  sqcRYGate(q, 3.076230656750636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8761044084898724, 0);
  sqcRYGate(q, 2.8346647068845683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6593612032150862, 1);
  sqcRYGate(q, -2.229447447879573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.356346114814483, 1);
  sqcRYGate(q, -2.2880196284095606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7916759611383427, 0);
  sqcRYGate(q, -1.5132341644345226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.514541081083418, 0);
  sqcRYGate(q, 1.6899928153110961, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.47569254718037346, 1);
  sqcRYGate(q, -2.471857653628425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7021906960707361, 1);
  sqcRYGate(q, 2.333215843760883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9046572488004578, 0);
  sqcRYGate(q, 2.270642333373611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0923096788357283, 0);
  sqcRYGate(q, -0.9134361756293528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8053552950760934, 2);
  sqcRYGate(q, -0.4554453972695689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5973696614070816, 2);
  sqcRYGate(q, -1.4894906865880593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4571962310683477, 0);
  sqcRYGate(q, -2.9420281368096677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.145773916327327, 0);
  sqcRYGate(q, 2.064942922814205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.508642064504713, 1);
  sqcRYGate(q, 2.4531695077293585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9085541477461354, 1);
  sqcRYGate(q, -0.7738327403249139, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4410768195787695, 0);
  sqcRYGate(q, 2.654414322963065, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.307913973052188, 0);
  sqcRYGate(q, 2.4569212299639527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.038733935017706, 1);
  sqcRYGate(q, -0.18027608683983054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4665339215796203, 1);
  sqcRYGate(q, -1.4816265852542472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3302648076487276, 0);
  sqcRYGate(q, -0.69708075913426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0696039568098685, 0);
  sqcRYGate(q, -1.7869413596877852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5402586455629312, 2);
  sqcRYGate(q, 1.862687921758968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4179382519452979, 2);
  sqcRYGate(q, 2.226927749850252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7267472162809474, 0);
  sqcRYGate(q, 2.162450049056573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6556669609188646, 0);
  sqcRYGate(q, 0.8102887719973079, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.652433442818908, 1);
  sqcRYGate(q, -0.7359599644493242, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.774485716706808, 1);
  sqcRYGate(q, 1.1534940641533313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4094374125812372, 0);
  sqcRYGate(q, -0.07235014097329096, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.02231363370488, 0);
  sqcRYGate(q, 0.5464661772464333, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.251367269941119, 1);
  sqcRYGate(q, 1.3980986110547728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6405721881575337, 1);
  sqcRYGate(q, 2.72001591167821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8829885336613458, 0);
  sqcRYGate(q, 1.1434712411334227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.860313393156284, 0);
  sqcRYGate(q, -0.4785926310024413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3709123259259828, 2);
  sqcRYGate(q, -0.7084601456775087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2639148884916247, 2);
  sqcRYGate(q, -1.7668634295699528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9509839461794876, 0);
  sqcRYGate(q, 2.5855692829738284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.110338354223745, 0);
  sqcRYGate(q, -2.2169999617966454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.089297947151036, 1);
  sqcRYGate(q, -2.7630725516333983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9387654073970122, 1);
  sqcRYGate(q, -2.6424540486031853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2662217688068713, 0);
  sqcRYGate(q, 2.422460012875672, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5280994875959473, 0);
  sqcRYGate(q, -1.0680609491530952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8772836587527757, 1);
  sqcRYGate(q, 3.073209152188942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.474706337450705, 1);
  sqcRYGate(q, -1.9052630595143287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9657520935470334, 0);
  sqcRYGate(q, 2.9762975218271452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8769055472855172, 0);
  sqcRYGate(q, 1.586257146709924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9343563827557473, 2);
  sqcRYGate(q, -2.564283731379318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5114242599414207, 2);
  sqcRYGate(q, -0.5696648130110087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.504801733484168, 0);
  sqcRYGate(q, -0.9286306278687535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6618502591175096, 0);
  sqcRYGate(q, 2.2769294399095084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.657878148320914, 1);
  sqcRYGate(q, 1.19451768591063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.886308872702699, 1);
  sqcRYGate(q, -1.1065998673749848, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38836402310875684, 0);
  sqcRYGate(q, -3.0199228384413592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.89685778576384, 0);
  sqcRYGate(q, 1.0767110395623878, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.005044441322713, 1);
  sqcRYGate(q, -1.2024358895925777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10609820950821724, 1);
  sqcRYGate(q, -0.7707055492398842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44092629392766103, 0);
  sqcRYGate(q, 0.6908527720142902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9193207798702203, 0);
  sqcRYGate(q, 2.4614544157863603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.027813753366739, 2);
  sqcRYGate(q, -2.866165816132824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1372786563660435, 2);
  sqcRYGate(q, -0.6185707619660974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0360149150779652, 0);
  sqcRYGate(q, 3.1332737392525565, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.634060419226942, 0);
  sqcRYGate(q, -1.8973734281587342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9449164754420103, 1);
  sqcRYGate(q, -1.235116619222646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5212765787328157, 1);
  sqcRYGate(q, 0.8985787596067549, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.38178604647663, 0);
  sqcRYGate(q, 2.663662161952128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9933090465297865, 0);
  sqcRYGate(q, 1.6746371377717286, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4631552116195063, 1);
  sqcRYGate(q, 0.3956746785797538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.341334457835386, 1);
  sqcRYGate(q, 0.14765510533500503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.159495060341185, 0);
  sqcRYGate(q, -0.6692758811065698, 1);
  sqcRYGate(q, 1.3161824962685618, 2);
  sqcRYGate(q, -2.568445804867777, 3);

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
