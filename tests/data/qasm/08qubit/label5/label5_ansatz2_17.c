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

  sqcRYGate(q, 1.8341871576073725, 0);
  sqcRZGate(q, -2.35217794353582, 0);
  sqcRYGate(q, 2.8211388362525835, 1);
  sqcRZGate(q, 0.2436422923949749, 1);
  sqcRYGate(q, 2.609825932500087, 2);
  sqcRZGate(q, 1.33495873429273, 2);
  sqcRYGate(q, -0.9711645477119175, 3);
  sqcRZGate(q, 0.8689167954966218, 3);
  sqcRYGate(q, -2.774534578974491, 4);
  sqcRZGate(q, 1.11980979803412, 4);
  sqcRYGate(q, 1.9306660381593632, 5);
  sqcRZGate(q, 0.8914897614338697, 5);
  sqcRYGate(q, 2.0337369277970554, 6);
  sqcRZGate(q, 2.0965121154777537, 6);
  sqcRYGate(q, -2.180529214923146, 7);
  sqcRZGate(q, -0.3222801893926705, 7);
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
  sqcRYGate(q, 1.9450046608585634, 0);
  sqcRZGate(q, -3.0439918510360644, 0);
  sqcRYGate(q, -2.3897795603297505, 1);
  sqcRZGate(q, 0.6057715457282118, 1);
  sqcRYGate(q, 1.8476993162165503, 2);
  sqcRZGate(q, 1.3443744681294887, 2);
  sqcRYGate(q, 0.25577614735790544, 3);
  sqcRZGate(q, 2.0194604418489224, 3);
  sqcRYGate(q, 1.9722713528492477, 4);
  sqcRZGate(q, -0.4137076977571574, 4);
  sqcRYGate(q, -1.8702571392889573, 5);
  sqcRZGate(q, 1.2547347239372042, 5);
  sqcRYGate(q, 2.812419335928498, 6);
  sqcRZGate(q, 1.341160516203785, 6);
  sqcRYGate(q, 1.6955326317208521, 7);
  sqcRZGate(q, 1.9194765150009747, 7);
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
  sqcRYGate(q, 2.039053988250279, 0);
  sqcRZGate(q, -1.3288236845625008, 0);
  sqcRYGate(q, 1.9284936983177425, 1);
  sqcRZGate(q, 0.11792343488782996, 1);
  sqcRYGate(q, 0.9760543130728836, 2);
  sqcRZGate(q, 1.891426290077534, 2);
  sqcRYGate(q, -1.0167358090037242, 3);
  sqcRZGate(q, 1.2217406885637456, 3);
  sqcRYGate(q, -1.3748424023238306, 4);
  sqcRZGate(q, -1.9081241755651872, 4);
  sqcRYGate(q, 1.3273496655113153, 5);
  sqcRZGate(q, -2.5101246959596306, 5);
  sqcRYGate(q, -2.8390222816846786, 6);
  sqcRZGate(q, 2.826737375548415, 6);
  sqcRYGate(q, -0.1943905669293029, 7);
  sqcRZGate(q, 2.121426017382599, 7);
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
  sqcRYGate(q, 2.7306369097181213, 0);
  sqcRZGate(q, 2.551141159627152, 0);
  sqcRYGate(q, -1.1998194746346467, 1);
  sqcRZGate(q, 2.5452019799316057, 1);
  sqcRYGate(q, -0.9461361662516835, 2);
  sqcRZGate(q, 1.6350373950436254, 2);
  sqcRYGate(q, -0.9726181117656973, 3);
  sqcRZGate(q, 1.2126611892108823, 3);
  sqcRYGate(q, 0.1687510469005276, 4);
  sqcRZGate(q, -2.044044134347909, 4);
  sqcRYGate(q, 2.7609984483690853, 5);
  sqcRZGate(q, 0.8468479979454627, 5);
  sqcRYGate(q, 1.1529164143573647, 6);
  sqcRZGate(q, 0.896596524247105, 6);
  sqcRYGate(q, -1.3747301700655843, 7);
  sqcRZGate(q, 3.071345203468725, 7);
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
  sqcRYGate(q, 1.6815648241788868, 0);
  sqcRZGate(q, 0.44296314593412767, 0);
  sqcRYGate(q, 1.2142574580622434, 1);
  sqcRZGate(q, -0.7575862002176557, 1);
  sqcRYGate(q, -2.880932392774126, 2);
  sqcRZGate(q, -0.7398173395325912, 2);
  sqcRYGate(q, 1.648046825886668, 3);
  sqcRZGate(q, 0.0670114898300018, 3);
  sqcRYGate(q, 0.22918578935303116, 4);
  sqcRZGate(q, -1.301526205992258, 4);
  sqcRYGate(q, -2.601906783925298, 5);
  sqcRZGate(q, 1.9619880793738504, 5);
  sqcRYGate(q, -2.180407344832658, 6);
  sqcRZGate(q, 1.8164624980212833, 6);
  sqcRYGate(q, -1.4371161002780752, 7);
  sqcRZGate(q, 0.030735590125883224, 7);
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
  sqcRYGate(q, 1.8063173901638636, 0);
  sqcRZGate(q, 0.40950112282186507, 0);
  sqcRYGate(q, 0.9027402150551059, 1);
  sqcRZGate(q, -2.8963896331268404, 1);
  sqcRYGate(q, -2.1866902256269944, 2);
  sqcRZGate(q, -1.046978593748799, 2);
  sqcRYGate(q, 2.6275202714983856, 3);
  sqcRZGate(q, -1.830705323199763, 3);
  sqcRYGate(q, -3.0107368538336163, 4);
  sqcRZGate(q, -2.1720333134091576, 4);
  sqcRYGate(q, 1.1806348691699018, 5);
  sqcRZGate(q, -2.3268171468849164, 5);
  sqcRYGate(q, 1.6702011968560413, 6);
  sqcRZGate(q, 2.079847966272657, 6);
  sqcRYGate(q, 1.8309314762309248, 7);
  sqcRZGate(q, -2.2748541328278957, 7);
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
  sqcRYGate(q, 0.969961681465193, 0);
  sqcRZGate(q, -1.2991614968533058, 0);
  sqcRYGate(q, 2.201175741956133, 1);
  sqcRZGate(q, -0.12545278384045844, 1);
  sqcRYGate(q, -2.1565241346435986, 2);
  sqcRZGate(q, 1.8290572579087168, 2);
  sqcRYGate(q, -0.4092045595831749, 3);
  sqcRZGate(q, 2.066315700878677, 3);
  sqcRYGate(q, 2.540431644554843, 4);
  sqcRZGate(q, 1.9577487986864153, 4);
  sqcRYGate(q, 1.2257565977058609, 5);
  sqcRZGate(q, 0.2473596929752327, 5);
  sqcRYGate(q, -1.5540750425781, 6);
  sqcRZGate(q, -0.4225836236173254, 6);
  sqcRYGate(q, 2.107994457264814, 7);
  sqcRZGate(q, 1.4201655643870055, 7);
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
  sqcRYGate(q, -2.6585450698258972, 0);
  sqcRZGate(q, -1.4403324275564549, 0);
  sqcRYGate(q, -3.0607457368231223, 1);
  sqcRZGate(q, -2.2788472093719117, 1);
  sqcRYGate(q, 0.5605590231716118, 2);
  sqcRZGate(q, -0.4417545540361544, 2);
  sqcRYGate(q, 1.6725837206460188, 3);
  sqcRZGate(q, -2.987572995119846, 3);
  sqcRYGate(q, -2.2705975160256644, 4);
  sqcRZGate(q, 0.48012954553757403, 4);
  sqcRYGate(q, -1.4970555711249702, 5);
  sqcRZGate(q, -1.1370672999878029, 5);
  sqcRYGate(q, -2.909391870774086, 6);
  sqcRZGate(q, 0.4660267714736517, 6);
  sqcRYGate(q, -1.0642199478101295, 7);
  sqcRZGate(q, 1.4874695048929754, 7);
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
  sqcRYGate(q, 2.4940109850662155, 0);
  sqcRZGate(q, -1.2069089183208666, 0);
  sqcRYGate(q, 1.0126885613278915, 1);
  sqcRZGate(q, 0.8881255822872783, 1);
  sqcRYGate(q, 1.153526518674914, 2);
  sqcRZGate(q, -2.568509417342035, 2);
  sqcRYGate(q, 0.22248132083278183, 3);
  sqcRZGate(q, -2.7381042977437855, 3);
  sqcRYGate(q, -2.783457904940116, 4);
  sqcRZGate(q, 2.8009590921544048, 4);
  sqcRYGate(q, 2.3459171695786294, 5);
  sqcRZGate(q, 3.0513156248193742, 5);
  sqcRYGate(q, 1.725252575488395, 6);
  sqcRZGate(q, -0.2744792795466777, 6);
  sqcRYGate(q, 0.4079914734217489, 7);
  sqcRZGate(q, -0.6292012421968015, 7);
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
  sqcRYGate(q, 1.0117266586665812, 0);
  sqcRZGate(q, -1.0373022643232692, 0);
  sqcRYGate(q, 2.920507916354319, 1);
  sqcRZGate(q, 1.908306950188778, 1);
  sqcRYGate(q, 2.5051393604178487, 2);
  sqcRZGate(q, -0.2156442427646024, 2);
  sqcRYGate(q, -2.6599689819704984, 3);
  sqcRZGate(q, 2.677735518879784, 3);
  sqcRYGate(q, 0.8165367418211211, 4);
  sqcRZGate(q, -2.8241854100768577, 4);
  sqcRYGate(q, -0.3763102709253312, 5);
  sqcRZGate(q, -0.6254962017566092, 5);
  sqcRYGate(q, -0.36772895299850233, 6);
  sqcRZGate(q, -0.2831520199564519, 6);
  sqcRYGate(q, -2.9352309701671206, 7);
  sqcRZGate(q, -2.010923301576093, 7);
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
  sqcRYGate(q, 0.9559289911064247, 0);
  sqcRZGate(q, 2.4468151710589447, 0);
  sqcRYGate(q, 1.6397242274192603, 1);
  sqcRZGate(q, 0.2521605238115381, 1);
  sqcRYGate(q, 1.2703123417015014, 2);
  sqcRZGate(q, 0.8330666294678052, 2);
  sqcRYGate(q, 0.8417816280470816, 3);
  sqcRZGate(q, 1.2150374851509937, 3);
  sqcRYGate(q, -1.4159076705446862, 4);
  sqcRZGate(q, 2.4169898209667817, 4);
  sqcRYGate(q, -2.359606817858701, 5);
  sqcRZGate(q, 1.6527176038316496, 5);
  sqcRYGate(q, 2.3802572883620887, 6);
  sqcRZGate(q, -2.946822825516229, 6);
  sqcRYGate(q, -0.8306935737650496, 7);
  sqcRZGate(q, 2.41121285316577, 7);
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
  sqcRYGate(q, -1.0829547654479823, 0);
  sqcRZGate(q, 1.3599811997626343, 0);
  sqcRYGate(q, 2.891969842331861, 1);
  sqcRZGate(q, 0.8390458026572799, 1);
  sqcRYGate(q, -0.3498313675964848, 2);
  sqcRZGate(q, 0.0022043267990561333, 2);
  sqcRYGate(q, 2.404224038088409, 3);
  sqcRZGate(q, 2.321210812912303, 3);
  sqcRYGate(q, -0.7323956312997362, 4);
  sqcRZGate(q, -1.641744010457994, 4);
  sqcRYGate(q, -1.4640167725337623, 5);
  sqcRZGate(q, -1.8060116603038827, 5);
  sqcRYGate(q, 1.1997085316220346, 6);
  sqcRZGate(q, 2.5433348076176534, 6);
  sqcRYGate(q, -3.1063914319696804, 7);
  sqcRZGate(q, 2.7348123615436557, 7);
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
  sqcRYGate(q, -0.7842346424185669, 0);
  sqcRZGate(q, 0.5783928738153925, 0);
  sqcRYGate(q, 2.0787771209689163, 1);
  sqcRZGate(q, 2.0785814118945813, 1);
  sqcRYGate(q, -0.9606013193717555, 2);
  sqcRZGate(q, 0.6687740214662377, 2);
  sqcRYGate(q, 2.7483966282776806, 3);
  sqcRZGate(q, -2.630171143753207, 3);
  sqcRYGate(q, 1.6988744829855076, 4);
  sqcRZGate(q, -0.3148422541261464, 4);
  sqcRYGate(q, 2.046904317661456, 5);
  sqcRZGate(q, -0.28805713548520157, 5);
  sqcRYGate(q, 2.5575586175424863, 6);
  sqcRZGate(q, 0.9249909314946007, 6);
  sqcRYGate(q, -1.9940705149803133, 7);
  sqcRZGate(q, 0.7741598979501234, 7);
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
  sqcRYGate(q, -2.819312672091273, 0);
  sqcRZGate(q, 1.5327743995571335, 0);
  sqcRYGate(q, -0.7177014874663252, 1);
  sqcRZGate(q, -0.5137848487014527, 1);
  sqcRYGate(q, -1.2010734998527912, 2);
  sqcRZGate(q, -2.9444442848898422, 2);
  sqcRYGate(q, -1.3346507185299026, 3);
  sqcRZGate(q, -2.766546351722538, 3);
  sqcRYGate(q, -0.5185563209936003, 4);
  sqcRZGate(q, 2.4397044577195395, 4);
  sqcRYGate(q, -1.002857584581796, 5);
  sqcRZGate(q, -2.4465963728929614, 5);
  sqcRYGate(q, 1.8028225639865703, 6);
  sqcRZGate(q, -1.395498210811049, 6);
  sqcRYGate(q, 2.0385055652992023, 7);
  sqcRZGate(q, -0.8804833380674282, 7);
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
  sqcRYGate(q, -1.188837478384274, 0);
  sqcRZGate(q, 2.177094630481707, 0);
  sqcRYGate(q, -0.8445467845463225, 1);
  sqcRZGate(q, 0.950751748187373, 1);
  sqcRYGate(q, 0.7573282549855801, 2);
  sqcRZGate(q, -2.9624631716901413, 2);
  sqcRYGate(q, -0.3341231950806653, 3);
  sqcRZGate(q, 1.6420242132940066, 3);
  sqcRYGate(q, -1.3396690542227159, 4);
  sqcRZGate(q, -1.1090743389281434, 4);
  sqcRYGate(q, -1.1056057180898726, 5);
  sqcRZGate(q, -2.4796377619698844, 5);
  sqcRYGate(q, -0.4581728223431796, 6);
  sqcRZGate(q, 0.7033045170470127, 6);
  sqcRYGate(q, 1.0427603617552723, 7);
  sqcRZGate(q, 2.5209869711779795, 7);
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
  sqcRYGate(q, -2.5966802676444196, 0);
  sqcRZGate(q, -3.1062513805059644, 0);
  sqcRYGate(q, -2.6689953777629833, 1);
  sqcRZGate(q, -3.121965478519875, 1);
  sqcRYGate(q, 0.5684859359280353, 2);
  sqcRZGate(q, 0.002602230797616123, 2);
  sqcRYGate(q, 1.1682584770013615, 3);
  sqcRZGate(q, 0.6111835930582261, 3);
  sqcRYGate(q, 2.779735804924302, 4);
  sqcRZGate(q, 2.586662285201275, 4);
  sqcRYGate(q, -1.3820091824439384, 5);
  sqcRZGate(q, -1.1472908803027086, 5);
  sqcRYGate(q, -2.3890001079739562, 6);
  sqcRZGate(q, -1.5212047151434334, 6);
  sqcRYGate(q, -0.19855055851941414, 7);
  sqcRZGate(q, 1.339778120977141, 7);
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
  sqcRYGate(q, 1.8164585195908938, 0);
  sqcRZGate(q, -1.3368274088071619, 0);
  sqcRYGate(q, -1.154000352243623, 1);
  sqcRZGate(q, 1.7389830487025548, 1);
  sqcRYGate(q, -0.7999520595410238, 2);
  sqcRZGate(q, 1.9033055540770611, 2);
  sqcRYGate(q, 1.3823320043703653, 3);
  sqcRZGate(q, 1.3651214504176066, 3);
  sqcRYGate(q, 2.397049315412073, 4);
  sqcRZGate(q, -1.0708263185811893, 4);
  sqcRYGate(q, -0.5149299293941316, 5);
  sqcRZGate(q, -1.522147010136885, 5);
  sqcRYGate(q, 2.3524735095355673, 6);
  sqcRZGate(q, 0.6765599161419069, 6);
  sqcRYGate(q, 1.1899213772578368, 7);
  sqcRZGate(q, -2.4865396969150226, 7);
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
  sqcRYGate(q, -1.0956753423743026, 0);
  sqcRZGate(q, -1.7373593050599607, 0);
  sqcRYGate(q, -2.3545922516258027, 1);
  sqcRZGate(q, -2.918321321555947, 1);
  sqcRYGate(q, -1.9482161752903928, 2);
  sqcRZGate(q, -0.48774963562133755, 2);
  sqcRYGate(q, 1.543794691727909, 3);
  sqcRZGate(q, -2.6764272619640392, 3);
  sqcRYGate(q, 0.33695691348094403, 4);
  sqcRZGate(q, -0.3318775273856973, 4);
  sqcRYGate(q, 0.10421884662635783, 5);
  sqcRZGate(q, 2.378767001426327, 5);
  sqcRYGate(q, 0.5975648771656283, 6);
  sqcRZGate(q, 2.317955323768279, 6);
  sqcRYGate(q, -2.3778597777038075, 7);
  sqcRZGate(q, -2.184976193127302, 7);
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
  sqcRYGate(q, 1.566266948168133, 0);
  sqcRZGate(q, 0.23303811739052538, 0);
  sqcRYGate(q, -1.6403079101919946, 1);
  sqcRZGate(q, 2.6026201740538513, 1);
  sqcRYGate(q, -0.9327077704606735, 2);
  sqcRZGate(q, -0.8286212629927155, 2);
  sqcRYGate(q, 0.5041979877140316, 3);
  sqcRZGate(q, -1.6726884935268993, 3);
  sqcRYGate(q, -1.234766552008144, 4);
  sqcRZGate(q, -2.072751179898691, 4);
  sqcRYGate(q, 1.3856606172933363, 5);
  sqcRZGate(q, -2.5439444646430136, 5);
  sqcRYGate(q, -1.5027921907065094, 6);
  sqcRZGate(q, 2.624048088288509, 6);
  sqcRYGate(q, 2.704615063269654, 7);
  sqcRZGate(q, 1.587746684839796, 7);
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
  sqcRYGate(q, 2.349432805167614, 0);
  sqcRZGate(q, -0.7640367820210222, 0);
  sqcRYGate(q, 1.6397734815562246, 1);
  sqcRZGate(q, -0.5986180890379248, 1);
  sqcRYGate(q, 2.596684717801888, 2);
  sqcRZGate(q, -2.5401097655651266, 2);
  sqcRYGate(q, -0.10095147822559358, 3);
  sqcRZGate(q, 0.6752771777728933, 3);
  sqcRYGate(q, -3.0820901643810727, 4);
  sqcRZGate(q, 2.4529377077345056, 4);
  sqcRYGate(q, -2.5198490211751046, 5);
  sqcRZGate(q, -2.812848110371419, 5);
  sqcRYGate(q, 2.4548850543264424, 6);
  sqcRZGate(q, -2.2164717090374206, 6);
  sqcRYGate(q, 2.5368138704119194, 7);
  sqcRZGate(q, -1.9277287496270754, 7);
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
  sqcRYGate(q, 2.784799645611918, 0);
  sqcRZGate(q, 0.9970760084249176, 0);
  sqcRYGate(q, -0.1216146605212103, 1);
  sqcRZGate(q, 0.2290678033266609, 1);
  sqcRYGate(q, 1.186621957548411, 2);
  sqcRZGate(q, -2.5796442963725976, 2);
  sqcRYGate(q, 0.5918596129970437, 3);
  sqcRZGate(q, -3.130803183710125, 3);
  sqcRYGate(q, -2.4348340843726914, 4);
  sqcRZGate(q, -0.5062733039645455, 4);
  sqcRYGate(q, 1.2663388285646522, 5);
  sqcRZGate(q, 0.689962836574801, 5);
  sqcRYGate(q, -0.2596308013192612, 6);
  sqcRZGate(q, -2.0270068659320675, 6);
  sqcRYGate(q, 0.5140676518346838, 7);
  sqcRZGate(q, 2.722793776302434, 7);

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
