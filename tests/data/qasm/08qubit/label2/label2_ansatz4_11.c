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

  sqcRYGate(q, 0.0007838822167212101, 0);
  sqcRZGate(q, -1.419984759988778, 0);
  sqcRYGate(q, 3.1405021071211188, 1);
  sqcRZGate(q, -0.43802275288228026, 1);
  sqcRYGate(q, -0.26596293059894993, 2);
  sqcRZGate(q, -3.1409229652930843, 2);
  sqcRYGate(q, -0.48853185143338157, 3);
  sqcRZGate(q, 0.002816392696966652, 3);
  sqcRYGate(q, -3.141577330785044, 4);
  sqcRZGate(q, 1.6194185669518897, 4);
  sqcRYGate(q, -3.1415089437853876, 5);
  sqcRZGate(q, -0.7566252673952952, 5);
  sqcRYGate(q, -2.3824133936050345, 6);
  sqcRZGate(q, -1.228894285214344, 6);
  sqcRYGate(q, 2.4727747817787153, 7);
  sqcRZGate(q, -1.8263550490236808, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5353314493999095, 0);
  sqcRZGate(q, -2.4269203757296074, 0);
  sqcRYGate(q, -1.5986329847354357, 1);
  sqcRZGate(q, -2.523726793736689, 1);
  sqcRYGate(q, -2.9043074414472554, 2);
  sqcRZGate(q, -0.8895993378554663, 2);
  sqcRYGate(q, -0.4740273790345587, 3);
  sqcRZGate(q, 2.514707429505113, 3);
  sqcRYGate(q, 0.032708650009552025, 4);
  sqcRZGate(q, -0.8090427204789897, 4);
  sqcRYGate(q, 3.1310949354055566, 5);
  sqcRZGate(q, 2.5394077223796487, 5);
  sqcRYGate(q, -1.4793414786590406, 6);
  sqcRZGate(q, 3.0111971351541045, 6);
  sqcRYGate(q, -1.3980544392292678, 7);
  sqcRZGate(q, -2.0916443132054634, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8592544467987621, 0);
  sqcRZGate(q, -2.632962399886227, 0);
  sqcRYGate(q, -0.8613675321248666, 1);
  sqcRZGate(q, 1.8331294215346259, 1);
  sqcRYGate(q, 0.0390667882342509, 2);
  sqcRZGate(q, -0.3154576277790921, 2);
  sqcRYGate(q, -0.07285840222832697, 3);
  sqcRZGate(q, 1.8388664400987453, 3);
  sqcRYGate(q, 0.08901431266542313, 4);
  sqcRZGate(q, -2.6507218180402603, 4);
  sqcRYGate(q, 2.9313834968242425, 5);
  sqcRZGate(q, 0.16252028736107424, 5);
  sqcRYGate(q, -1.8928868964427323, 6);
  sqcRZGate(q, 2.5966855067242807, 6);
  sqcRYGate(q, -2.4221728860456886, 7);
  sqcRZGate(q, -2.3736382737934973, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.028243606464048, 0);
  sqcRZGate(q, 1.23474272109872, 0);
  sqcRYGate(q, 0.1183159356794967, 1);
  sqcRZGate(q, -1.8291826473514237, 1);
  sqcRYGate(q, 0.007966005836914647, 2);
  sqcRZGate(q, -0.13787666110985605, 2);
  sqcRYGate(q, 0.0255406463386727, 3);
  sqcRZGate(q, 1.9058694967105, 3);
  sqcRYGate(q, 0.3557247332463698, 4);
  sqcRZGate(q, 1.1243042213270638, 4);
  sqcRYGate(q, 2.5652254511952273, 5);
  sqcRZGate(q, -3.084210269460641, 5);
  sqcRYGate(q, 0.2716145479055452, 6);
  sqcRZGate(q, -0.00659607828098721, 6);
  sqcRYGate(q, -0.15644965031745972, 7);
  sqcRZGate(q, -0.5119689778750808, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1172926534186756, 0);
  sqcRZGate(q, -3.0641380912636604, 0);
  sqcRYGate(q, 0.12676311632952156, 1);
  sqcRZGate(q, -0.328061792789164, 1);
  sqcRYGate(q, -1.7358179297214924, 2);
  sqcRZGate(q, 1.4217255755078089, 2);
  sqcRYGate(q, 1.5100637682099665, 3);
  sqcRZGate(q, 1.0571712497597758, 3);
  sqcRYGate(q, 1.6467664837855909, 4);
  sqcRZGate(q, -0.295525782367867, 4);
  sqcRYGate(q, 1.8274832735719924, 5);
  sqcRZGate(q, 2.6559311884138834, 5);
  sqcRYGate(q, -0.9250942950546878, 6);
  sqcRZGate(q, -2.2531838724271913, 6);
  sqcRYGate(q, -0.8190168940557214, 7);
  sqcRZGate(q, -1.724116709660224, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.637242395660864, 0);
  sqcRZGate(q, -2.762245630286203, 0);
  sqcRYGate(q, 2.6545447191117573, 1);
  sqcRZGate(q, -1.564112713506115, 1);
  sqcRYGate(q, 3.1294018181435006, 2);
  sqcRZGate(q, 0.14187868303604007, 2);
  sqcRYGate(q, -3.086837178860509, 3);
  sqcRZGate(q, 1.4475431781467054, 3);
  sqcRYGate(q, -2.798086556678502, 4);
  sqcRZGate(q, -2.962033765676502, 4);
  sqcRYGate(q, -0.826245418690467, 5);
  sqcRZGate(q, -3.0258642573422407, 5);
  sqcRYGate(q, 0.7837177322410651, 6);
  sqcRZGate(q, 2.8895983142308395, 6);
  sqcRYGate(q, -0.09806633318888558, 7);
  sqcRZGate(q, 2.4779888503739103, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.415039572007265, 0);
  sqcRZGate(q, 0.5984004624087484, 0);
  sqcRYGate(q, 1.943466980988983, 1);
  sqcRZGate(q, -2.1772575205609734, 1);
  sqcRYGate(q, 3.1402288134856393, 2);
  sqcRZGate(q, 2.9671225517378685, 2);
  sqcRYGate(q, 0.007233583563449386, 3);
  sqcRZGate(q, -1.1179679648549534, 3);
  sqcRYGate(q, 0.004446649376747477, 4);
  sqcRZGate(q, -0.17752641090476906, 4);
  sqcRYGate(q, -3.1407752111492777, 5);
  sqcRZGate(q, -3.0273280950881176, 5);
  sqcRYGate(q, 3.140588275091404, 6);
  sqcRZGate(q, 2.916113563407478, 6);
  sqcRYGate(q, 0.14370342651121515, 7);
  sqcRZGate(q, 0.870542204268347, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0284059184903003, 0);
  sqcRZGate(q, 0.4803797661335168, 0);
  sqcRYGate(q, 0.4702539859002508, 1);
  sqcRZGate(q, -1.083798467499543, 1);
  sqcRYGate(q, 3.1415655713426713, 2);
  sqcRZGate(q, 3.1394160882889275, 2);
  sqcRYGate(q, -3.139872810480446, 3);
  sqcRZGate(q, 1.944207843582411, 3);
  sqcRYGate(q, -0.34139401299837224, 4);
  sqcRZGate(q, 1.580866743355707, 4);
  sqcRYGate(q, -2.3206029413772047, 5);
  sqcRZGate(q, 0.5445830601514896, 5);
  sqcRYGate(q, 1.732330769796846, 6);
  sqcRZGate(q, -2.221839413294573, 6);
  sqcRYGate(q, 2.987607151147095, 7);
  sqcRZGate(q, -0.10706677492030893, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8785289808152585, 0);
  sqcRZGate(q, -2.857230875646517, 0);
  sqcRYGate(q, -2.6378999812063495, 1);
  sqcRZGate(q, -3.017016598605278, 1);
  sqcRYGate(q, 1.5078033780020907, 2);
  sqcRZGate(q, -1.6668029693366844, 2);
  sqcRYGate(q, 0.016273115472459132, 3);
  sqcRZGate(q, -2.4172280984541104, 3);
  sqcRYGate(q, -1.051925907087863, 4);
  sqcRZGate(q, 0.06620308665826524, 4);
  sqcRYGate(q, 1.616015202185972, 5);
  sqcRZGate(q, -1.9355764965853322, 5);
  sqcRYGate(q, -0.8371506638770506, 6);
  sqcRZGate(q, 2.0996545900477184, 6);
  sqcRYGate(q, 1.4297910274076626, 7);
  sqcRZGate(q, 0.6546804658966476, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.07090812410003, 0);
  sqcRZGate(q, -2.7910579185216964, 0);
  sqcRYGate(q, 3.135734611313976, 1);
  sqcRZGate(q, -0.5568801817865925, 1);
  sqcRYGate(q, -0.0014909970721363856, 2);
  sqcRZGate(q, -3.0652779673158626, 2);
  sqcRYGate(q, -3.140065913423962, 3);
  sqcRZGate(q, 0.37939627479662963, 3);
  sqcRYGate(q, 3.14100264550879, 4);
  sqcRZGate(q, -0.6149806100982671, 4);
  sqcRYGate(q, -3.139531211500654, 5);
  sqcRZGate(q, 1.8793151653962685, 5);
  sqcRYGate(q, 0.011188544987817316, 6);
  sqcRZGate(q, 1.4783714380650537, 6);
  sqcRYGate(q, 2.2513313416184513, 7);
  sqcRZGate(q, -1.858107252710122, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.1782803570041862, 0);
  sqcRZGate(q, 2.101135455376819, 0);
  sqcRYGate(q, 1.1595389660623188, 1);
  sqcRZGate(q, 0.6199312952213355, 1);
  sqcRYGate(q, -1.0806504060827486, 2);
  sqcRZGate(q, 1.559933276154191, 2);
  sqcRYGate(q, -0.039072108184504004, 3);
  sqcRZGate(q, -1.0219612945211598, 3);
  sqcRYGate(q, -0.47998738602590496, 4);
  sqcRZGate(q, -2.1359793693047235, 4);
  sqcRYGate(q, -1.6969780645693706, 5);
  sqcRZGate(q, -2.4775434535080922, 5);
  sqcRYGate(q, 0.3073767461850832, 6);
  sqcRZGate(q, -3.111268006594079, 6);
  sqcRYGate(q, 0.6110826191052134, 7);
  sqcRZGate(q, -0.9910670732611829, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3789512049227173, 0);
  sqcRZGate(q, -1.2047231429195433, 0);
  sqcRYGate(q, 1.4920039917820895, 1);
  sqcRZGate(q, 0.7367653549402842, 1);
  sqcRYGate(q, -3.1326770204901, 2);
  sqcRZGate(q, 0.34390692596641065, 2);
  sqcRYGate(q, -0.0035941499766431037, 3);
  sqcRZGate(q, 0.4195644254496261, 3);
  sqcRYGate(q, -0.0003464892533395769, 4);
  sqcRZGate(q, 2.1486985209323306, 4);
  sqcRYGate(q, -6.211294242127987e-05, 5);
  sqcRZGate(q, -1.1630288237708084, 5);
  sqcRYGate(q, -2.654848354756193, 6);
  sqcRZGate(q, 3.0243727167343195, 6);
  sqcRYGate(q, 2.6874464931210538, 7);
  sqcRZGate(q, -1.7374129360061241, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5347391423418126, 0);
  sqcRZGate(q, -0.06501663771181043, 0);
  sqcRYGate(q, -3.076169440385686, 1);
  sqcRZGate(q, 3.036510777084887, 1);
  sqcRYGate(q, 0.001405578650761102, 2);
  sqcRZGate(q, 2.9560204531231307, 2);
  sqcRYGate(q, 3.133279926438669, 3);
  sqcRZGate(q, -2.455670877955957, 3);
  sqcRYGate(q, -0.7078824758627968, 4);
  sqcRZGate(q, 2.9675575543076342, 4);
  sqcRYGate(q, 0.9305260205288117, 5);
  sqcRZGate(q, -1.4987052541014336, 5);
  sqcRYGate(q, -1.1599308952342233, 6);
  sqcRZGate(q, -2.9914646542258327, 6);
  sqcRYGate(q, -2.9574175802139897, 7);
  sqcRZGate(q, 2.649015095024035, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9425408343716932, 0);
  sqcRZGate(q, 0.9028347828527296, 0);
  sqcRYGate(q, -0.06717600368888643, 1);
  sqcRZGate(q, -0.23495251748363885, 1);
  sqcRYGate(q, 0.0015482470114394076, 2);
  sqcRZGate(q, 1.287660921564516, 2);
  sqcRYGate(q, 0.0014349511523891378, 3);
  sqcRZGate(q, 0.6616656812054806, 3);
  sqcRYGate(q, 3.141441439793589, 4);
  sqcRZGate(q, 1.3985310696025426, 4);
  sqcRYGate(q, -0.0002747518018777484, 5);
  sqcRZGate(q, -2.4484922491182908, 5);
  sqcRYGate(q, 0.12389000052208228, 6);
  sqcRZGate(q, 0.8230227613730934, 6);
  sqcRYGate(q, 1.123436344048231, 7);
  sqcRZGate(q, 1.7526260350965526, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.40727058943134775, 0);
  sqcRZGate(q, -0.9657850082490759, 0);
  sqcRYGate(q, 3.1300334740725395, 1);
  sqcRZGate(q, 1.214032872182454, 1);
  sqcRYGate(q, -1.4846368367128422, 2);
  sqcRZGate(q, 2.282433850469288, 2);
  sqcRYGate(q, -0.03019100570190392, 3);
  sqcRZGate(q, -2.729337466871099, 3);
  sqcRYGate(q, 2.5130260232449197, 4);
  sqcRZGate(q, 1.3885206419671352, 4);
  sqcRYGate(q, -1.0620295150412804, 5);
  sqcRZGate(q, -2.0050141455464754, 5);
  sqcRYGate(q, 2.9138441283818635, 6);
  sqcRZGate(q, -0.01280868589223161, 6);
  sqcRYGate(q, 1.6799380763554597, 7);
  sqcRZGate(q, -2.0319808419785135, 7);

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
