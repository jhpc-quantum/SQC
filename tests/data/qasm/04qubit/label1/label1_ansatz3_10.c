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

  sqcRYGate(q, 1.112487227498078, 0);
  sqcRZGate(q, 3.101020694059893, 0);
  sqcRYGate(q, -0.207629651740489, 1);
  sqcRZGate(q, 1.848960033053294, 1);
  sqcRYGate(q, 0.3930344288455947, 2);
  sqcRZGate(q, -1.2546701270014893, 2);
  sqcRYGate(q, -3.0801640324180015, 3);
  sqcRZGate(q, 0.5970551201452522, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.098948098457579, 0);
  sqcRZGate(q, 0.43253273175275436, 0);
  sqcRYGate(q, -2.5390671902032613, 1);
  sqcRZGate(q, 3.0586410840768243, 1);
  sqcRYGate(q, -1.8606963358282194, 2);
  sqcRZGate(q, 1.0985118495255506, 2);
  sqcRYGate(q, 0.15325604689710332, 3);
  sqcRZGate(q, -0.4055090985656502, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3113329655039276, 0);
  sqcRZGate(q, 1.8518221133130877, 0);
  sqcRYGate(q, 0.3226963170836994, 1);
  sqcRZGate(q, 1.4699680815024, 1);
  sqcRYGate(q, 1.6450419867480708, 2);
  sqcRZGate(q, -2.9520970275665492, 2);
  sqcRYGate(q, 0.9129358023436343, 3);
  sqcRZGate(q, 2.6962052983298657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.43934916046158, 0);
  sqcRZGate(q, -2.062795735908014, 0);
  sqcRYGate(q, 2.3459269282580357, 1);
  sqcRZGate(q, -2.7904103884179543, 1);
  sqcRYGate(q, 2.5369529834376348, 2);
  sqcRZGate(q, -0.09440041764382451, 2);
  sqcRYGate(q, 1.461095619661437, 3);
  sqcRZGate(q, -3.1127924618451366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.071222894914495, 0);
  sqcRZGate(q, 0.46310492923221336, 0);
  sqcRYGate(q, 1.1071442166437402, 1);
  sqcRZGate(q, 0.39392263602308564, 1);
  sqcRYGate(q, -1.4649275016247016, 2);
  sqcRZGate(q, -3.0313886928943914, 2);
  sqcRYGate(q, -1.8143921236207798, 3);
  sqcRZGate(q, -3.1103413712702093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.26246959952996407, 0);
  sqcRZGate(q, 1.1182647032142041, 0);
  sqcRYGate(q, 2.5567328046235924, 1);
  sqcRZGate(q, 1.7768176692525368, 1);
  sqcRYGate(q, 2.3331044456803665, 2);
  sqcRZGate(q, -1.0626065087122818, 2);
  sqcRYGate(q, -2.612433958136905, 3);
  sqcRZGate(q, -1.055821769981912, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.152372321141767, 0);
  sqcRZGate(q, 1.1900034260946017, 0);
  sqcRYGate(q, 2.3233180601088654, 1);
  sqcRZGate(q, -0.9747621313551303, 1);
  sqcRYGate(q, 3.1008557237661694, 2);
  sqcRZGate(q, 0.63102175879812, 2);
  sqcRYGate(q, 1.1721070250847627, 3);
  sqcRZGate(q, -2.9805123352550424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.807718403551361, 0);
  sqcRZGate(q, -2.360652211234249, 0);
  sqcRYGate(q, -2.3499813750216494, 1);
  sqcRZGate(q, -1.2016091702137408, 1);
  sqcRYGate(q, 1.3115526679935616, 2);
  sqcRZGate(q, -0.6197267103848115, 2);
  sqcRYGate(q, 0.22145990648613803, 3);
  sqcRZGate(q, 2.117669829114692, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1986175325482735, 0);
  sqcRZGate(q, 2.7848749300105715, 0);
  sqcRYGate(q, 1.940767937980544, 1);
  sqcRZGate(q, 1.715350139578162, 1);
  sqcRYGate(q, 2.5195695226942862, 2);
  sqcRZGate(q, -1.2778265304361254, 2);
  sqcRYGate(q, -0.7201745301161686, 3);
  sqcRZGate(q, 0.20618179264034497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6339574886654287, 0);
  sqcRZGate(q, -3.0211274202479004, 0);
  sqcRYGate(q, -2.1418482631693063, 1);
  sqcRZGate(q, -2.092256888218211, 1);
  sqcRYGate(q, -0.3430754802485234, 2);
  sqcRZGate(q, -1.1745356320875286, 2);
  sqcRYGate(q, -2.190729587315178, 3);
  sqcRZGate(q, 0.4188752398077904, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1193857311488262, 0);
  sqcRZGate(q, -1.0647966718313642, 0);
  sqcRYGate(q, 1.256960150350019, 1);
  sqcRZGate(q, -2.7414932695190544, 1);
  sqcRYGate(q, 1.5655335940603727, 2);
  sqcRZGate(q, 1.1898086886208779, 2);
  sqcRYGate(q, -3.00608008088024, 3);
  sqcRZGate(q, -1.806596528351633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2677999902247956, 0);
  sqcRZGate(q, 2.3580577774840554, 0);
  sqcRYGate(q, -0.6340167987787515, 1);
  sqcRZGate(q, 0.05059708571231792, 1);
  sqcRYGate(q, -0.3411678677561307, 2);
  sqcRZGate(q, 1.0529484672933531, 2);
  sqcRYGate(q, -2.2836938065292722, 3);
  sqcRZGate(q, -2.9498773578534374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8122819182013776, 0);
  sqcRZGate(q, 2.106661590322825, 0);
  sqcRYGate(q, -1.046446592024143, 1);
  sqcRZGate(q, -1.3798865084599017, 1);
  sqcRYGate(q, 0.767090750758471, 2);
  sqcRZGate(q, -0.7887541670973404, 2);
  sqcRYGate(q, -3.104019397884784, 3);
  sqcRZGate(q, 2.749694566116186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5434650811085243, 0);
  sqcRZGate(q, 2.892239625684683, 0);
  sqcRYGate(q, -3.051561429061277, 1);
  sqcRZGate(q, 0.15974166209750693, 1);
  sqcRYGate(q, 1.6746525058412343, 2);
  sqcRZGate(q, -2.5225011508538255, 2);
  sqcRYGate(q, 1.379580980406767, 3);
  sqcRZGate(q, 2.841825025118428, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
