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

  sqcRYGate(q, 1.5703845614738712, 0);
  sqcRZGate(q, 2.761309126242395e-05, 0);
  sqcRYGate(q, -1.4437982287484152, 1);
  sqcRZGate(q, 2.051745367749654, 1);
  sqcRYGate(q, -1.5687301517260632, 2);
  sqcRZGate(q, -3.1377790887496624, 2);
  sqcRYGate(q, -3.140926907616773, 3);
  sqcRZGate(q, -1.748185721940418, 3);
  sqcRYGate(q, -0.006713220253747209, 4);
  sqcRZGate(q, -0.2145747798861732, 4);
  sqcRYGate(q, -3.141036103720662, 5);
  sqcRZGate(q, 3.100073654656634, 5);
  sqcRYGate(q, 0.0011519830950063356, 6);
  sqcRZGate(q, -2.311493007388098, 6);
  sqcRYGate(q, -2.3568427161187047, 7);
  sqcRZGate(q, 0.0014407391492001762, 7);
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
  sqcRYGate(q, -2.270366432826269, 0);
  sqcRZGate(q, -1.5649281391036436, 0);
  sqcRYGate(q, -0.0001967710482291778, 1);
  sqcRZGate(q, 2.686166979756187, 1);
  sqcRYGate(q, -2.4425894179178775, 2);
  sqcRZGate(q, -1.591916805057145, 2);
  sqcRYGate(q, 3.1415307330238558, 3);
  sqcRZGate(q, 2.2821366881054903, 3);
  sqcRYGate(q, 3.0703218894124236, 4);
  sqcRZGate(q, -2.9876158399745543, 4);
  sqcRYGate(q, 0.33853731336891546, 5);
  sqcRZGate(q, 0.5554375726487008, 5);
  sqcRYGate(q, 1.5810145855064617, 6);
  sqcRZGate(q, -3.040616859862831, 6);
  sqcRYGate(q, 0.25287310081448755, 7);
  sqcRZGate(q, 1.4470662819229636, 7);
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
  sqcRYGate(q, 2.8317512131583302, 0);
  sqcRZGate(q, 1.227662183318829, 0);
  sqcRYGate(q, -3.125919948078912, 1);
  sqcRZGate(q, 0.5752676108940412, 1);
  sqcRYGate(q, 0.3263672819613017, 2);
  sqcRZGate(q, 3.1063716724527644, 2);
  sqcRYGate(q, -3.141496245970603, 3);
  sqcRZGate(q, 2.6273356351160007, 3);
  sqcRYGate(q, -2.9686412056485114, 4);
  sqcRZGate(q, 1.2507027559507324, 4);
  sqcRYGate(q, 1.7582510804282239, 5);
  sqcRZGate(q, 2.554766363563233, 5);
  sqcRYGate(q, -1.549708953524565, 6);
  sqcRZGate(q, -0.14817962768735207, 6);
  sqcRYGate(q, 0.0025326050291293077, 7);
  sqcRZGate(q, -2.085471921072954, 7);
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
  sqcRYGate(q, -0.0006880617840447911, 0);
  sqcRZGate(q, 1.9466467433656196, 0);
  sqcRYGate(q, 0.0001860431523441619, 1);
  sqcRZGate(q, -0.5536039283768663, 1);
  sqcRYGate(q, 3.141254467678612, 2);
  sqcRZGate(q, 1.3818759988484617, 2);
  sqcRYGate(q, -0.0002814504558504827, 3);
  sqcRZGate(q, 0.9607928455841482, 3);
  sqcRYGate(q, 2.925738278395655, 4);
  sqcRZGate(q, -0.40197068401618646, 4);
  sqcRYGate(q, -0.1828771376875702, 5);
  sqcRZGate(q, -2.6216146738583164, 5);
  sqcRYGate(q, -3.0231367581386253, 6);
  sqcRZGate(q, -1.8288595124026157, 6);
  sqcRYGate(q, 0.003502704740851642, 7);
  sqcRZGate(q, -0.5684286206416375, 7);
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
  sqcRYGate(q, -1.000583364943065, 0);
  sqcRZGate(q, 0.9928373351595434, 0);
  sqcRYGate(q, -2.102736884831721, 1);
  sqcRZGate(q, -2.761645234816722, 1);
  sqcRYGate(q, 0.2586963079225404, 2);
  sqcRZGate(q, -1.7071135535589468, 2);
  sqcRYGate(q, -3.140215977025173, 3);
  sqcRZGate(q, 2.315664376141665, 3);
  sqcRYGate(q, 2.8815315287888343, 4);
  sqcRZGate(q, 0.31980676959043725, 4);
  sqcRYGate(q, -1.3190753066939953, 5);
  sqcRZGate(q, -0.9515935158165857, 5);
  sqcRYGate(q, -3.0448595042268667, 6);
  sqcRZGate(q, 1.861634091212469, 6);
  sqcRYGate(q, 0.012122048062026103, 7);
  sqcRZGate(q, -2.1425055156537125, 7);
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
  sqcRYGate(q, 0.0008914396686563464, 0);
  sqcRZGate(q, 0.9356300588129275, 0);
  sqcRYGate(q, -0.012712330169078356, 1);
  sqcRZGate(q, 1.190567125589728, 1);
  sqcRYGate(q, -0.0004200770981555025, 2);
  sqcRZGate(q, -1.2765102686257181, 2);
  sqcRYGate(q, 1.5716256395095638, 3);
  sqcRZGate(q, 0.0010637019844192963, 3);
  sqcRYGate(q, -0.11445168554272822, 4);
  sqcRZGate(q, -2.2130486856553815, 4);
  sqcRYGate(q, 3.117621004537626, 5);
  sqcRZGate(q, 0.9968610094172518, 5);
  sqcRYGate(q, 3.1348859141851104, 6);
  sqcRZGate(q, -1.2881538792439373, 6);
  sqcRYGate(q, 0.013798304733735917, 7);
  sqcRZGate(q, -1.362288937519948, 7);
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
  sqcRYGate(q, 1.4794423212956724, 0);
  sqcRZGate(q, 1.7811579272060882, 0);
  sqcRYGate(q, -1.5687975751783059, 1);
  sqcRZGate(q, 1.5569648103802947, 1);
  sqcRYGate(q, -1.4531065284215678, 2);
  sqcRZGate(q, -1.5773926600035462, 2);
  sqcRYGate(q, -1.5660269349692788, 3);
  sqcRZGate(q, -1.7063593395400893, 3);
  sqcRYGate(q, -0.0004888820058495114, 4);
  sqcRZGate(q, 1.3124069451613114, 4);
  sqcRYGate(q, -0.00037368620344766217, 5);
  sqcRZGate(q, 2.4060535942735557, 5);
  sqcRYGate(q, -3.1415821912357016, 6);
  sqcRZGate(q, 2.724286324428348, 6);
  sqcRYGate(q, -2.8323141510195393, 7);
  sqcRZGate(q, 1.5724891006516826, 7);
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
  sqcRYGate(q, 1.6026957912699276, 0);
  sqcRZGate(q, 2.4648040571357255, 0);
  sqcRYGate(q, 1.570749617769032, 1);
  sqcRZGate(q, -1.5694938251399924, 1);
  sqcRYGate(q, -1.5396848046116496, 2);
  sqcRZGate(q, -1.6495702418329354, 2);
  sqcRYGate(q, -3.137958479289383, 3);
  sqcRZGate(q, 3.0027267674585154, 3);
  sqcRYGate(q, -3.1389678443036906, 4);
  sqcRZGate(q, -2.935096703710357, 4);
  sqcRYGate(q, -3.1406601745887346, 5);
  sqcRZGate(q, -0.5344016883093935, 5);
  sqcRYGate(q, -0.00023785444810275894, 6);
  sqcRZGate(q, -0.1357402543299108, 6);
  sqcRYGate(q, 0.7694053571830546, 7);
  sqcRZGate(q, -1.4796268835152002, 7);
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
  sqcRYGate(q, -1.5639736825413306, 0);
  sqcRZGate(q, 1.608852511234173, 0);
  sqcRYGate(q, -1.2857776492860573, 1);
  sqcRZGate(q, -3.1209773509308643, 1);
  sqcRYGate(q, -1.5758460389027134, 2);
  sqcRZGate(q, -1.5872543741396667, 2);
  sqcRYGate(q, -0.02367402936888875, 3);
  sqcRZGate(q, -3.1187357694801108, 3);
  sqcRYGate(q, -0.0011203769652585337, 4);
  sqcRZGate(q, 0.39707804118432666, 4);
  sqcRYGate(q, 0.0013580199544689364, 5);
  sqcRZGate(q, -0.7317155066831063, 5);
  sqcRYGate(q, 0.0003536410345699182, 6);
  sqcRZGate(q, -0.9704485889259044, 6);
  sqcRYGate(q, 3.1392739586550094, 7);
  sqcRZGate(q, 1.8480467613281386, 7);
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
  sqcRYGate(q, -0.6599258067575875, 0);
  sqcRZGate(q, 3.115536396058215, 0);
  sqcRYGate(q, -1.670786781733835, 1);
  sqcRZGate(q, 0.00021547563515689203, 1);
  sqcRYGate(q, -1.5690946134646868, 2);
  sqcRZGate(q, -0.004168904587692051, 2);
  sqcRYGate(q, 1.5660637530310895, 3);
  sqcRZGate(q, 3.1400629730815868, 3);
  sqcRYGate(q, 1.568795725045585, 4);
  sqcRZGate(q, 0.00020867163044358572, 4);
  sqcRYGate(q, 1.5703046517615127, 5);
  sqcRZGate(q, 3.1412357393538177, 5);
  sqcRYGate(q, -1.571096612420693, 6);
  sqcRZGate(q, -0.0008420076965636282, 6);
  sqcRYGate(q, -1.216608815539528, 7);
  sqcRZGate(q, 3.0731620113190576, 7);

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
