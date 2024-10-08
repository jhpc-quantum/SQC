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

  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0446149768876576, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13249927108720608, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.11083825532523972, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1490608229565475, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06459854182230755, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.24353252317043458, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.08363056365092461, 0);
  sqcRZGate(q, -0.11521304338015467, 0);
  sqcRXGate(q, -0.5300624748402256, 1);
  sqcRZGate(q, -0.5102691359597685, 1);
  sqcRXGate(q, -0.13141686754638046, 2);
  sqcRZGate(q, -0.1628234561420799, 2);
  sqcRXGate(q, -0.3395514088824031, 3);
  sqcRZGate(q, -0.29449274608650927, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17031386317853797, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2726192503411916, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3976129635601204, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4089554353396304, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.5484980407306526, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.31713753996786526, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.2050200558978365, 0);
  sqcRZGate(q, -0.17514346036950665, 0);
  sqcRXGate(q, -0.30932473699554325, 1);
  sqcRZGate(q, -0.6022448998066161, 1);
  sqcRXGate(q, -0.030831045776440205, 2);
  sqcRZGate(q, -0.2587845619771564, 2);
  sqcRXGate(q, -0.20825302516270386, 3);
  sqcRZGate(q, -0.3059728895740304, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1852333288755206, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.02785923846965929, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.17147381214200721, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4226514187891301, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.45413294773509927, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5171697635971951, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3966539422510998, 0);
  sqcRZGate(q, -0.17728725072059698, 0);
  sqcRXGate(q, -0.40346724091128067, 1);
  sqcRZGate(q, -0.46474419194708266, 1);
  sqcRXGate(q, -0.11199500214825318, 2);
  sqcRZGate(q, -0.30276948804672904, 2);
  sqcRXGate(q, -0.3608671333355672, 3);
  sqcRZGate(q, -0.22867881965897527, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.19910964405730824, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.26954240490981457, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0022320043192637596, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.519234435583854, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.20372419610145087, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.32267531302566294, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.47474093205729295, 0);
  sqcRZGate(q, -0.08927959920186254, 0);
  sqcRXGate(q, -0.4533950922720997, 1);
  sqcRZGate(q, -0.3391723984266264, 1);
  sqcRXGate(q, 0.044847247124314246, 2);
  sqcRZGate(q, -0.2342907118412172, 2);
  sqcRXGate(q, -0.471743104971629, 3);
  sqcRZGate(q, -0.030972178928321922, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4023276937455891, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.17906337718177945, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.04988361295675654, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.612456022325259, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.051082662857432855, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06622590178059456, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.4866627647473029, 0);
  sqcRZGate(q, -0.00987400651941887, 0);
  sqcRXGate(q, -0.26343992330520183, 1);
  sqcRZGate(q, -0.28325940023907714, 1);
  sqcRXGate(q, -0.030923779918363578, 2);
  sqcRZGate(q, -0.29171698093699183, 2);
  sqcRXGate(q, -0.5793802227030456, 3);
  sqcRZGate(q, 0.07166760173115674, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.48159754978165537, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.04261564726264694, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.073506066073371, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5947534899725936, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.24083995675501813, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.16357466825866773, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.4206900847634146, 0);
  sqcRZGate(q, -0.03960974397390494, 0);
  sqcRXGate(q, -0.024548133335015543, 1);
  sqcRZGate(q, -0.37832178386599413, 1);
  sqcRXGate(q, -0.043635543340500085, 2);
  sqcRZGate(q, -0.33335683431490226, 2);
  sqcRXGate(q, -0.5557682991915478, 3);
  sqcRZGate(q, 0.23966811618164033, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4448367243648055, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.14409715041648222, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07114348121180246, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.42810128056384433, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3525627612943743, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11411465851787109, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.4055009776319286, 0);
  sqcRZGate(q, 0.16724906812711635, 0);
  sqcRXGate(q, -0.057109760885207264, 1);
  sqcRZGate(q, -0.410864786957375, 1);
  sqcRXGate(q, -0.00744930231988352, 2);
  sqcRZGate(q, -0.4017950962447284, 2);
  sqcRXGate(q, -0.44666979527382583, 3);
  sqcRZGate(q, 0.2278268732317898, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.27492210087420077, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.23735617924163369, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.20350275182553748, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.35574669601081016, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.564732847916572, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06991505209698583, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.4091889221049086, 0);
  sqcRZGate(q, 0.12229466020481167, 0);
  sqcRXGate(q, -0.04407943057998901, 1);
  sqcRZGate(q, -0.29396633966655417, 1);
  sqcRXGate(q, -0.024517098384140658, 2);
  sqcRZGate(q, -0.2634545174033667, 2);
  sqcRXGate(q, -0.4506549031474376, 3);
  sqcRZGate(q, 0.1854603312846715, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2240553854718986, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.29848215760256963, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0025896295501820167, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.29282181468668167, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.44021958446842296, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.02795484582243726, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.3670288624573536, 0);
  sqcRZGate(q, 0.1217075355937005, 0);
  sqcRXGate(q, -0.032930366339151605, 1);
  sqcRZGate(q, -0.1980687319224697, 1);
  sqcRXGate(q, -0.01819274708883437, 2);
  sqcRZGate(q, -0.21167148724167495, 2);
  sqcRXGate(q, -0.4711194259179741, 3);
  sqcRZGate(q, 0.0996287131577171, 3);

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
