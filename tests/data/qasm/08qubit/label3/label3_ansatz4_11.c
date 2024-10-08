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

  sqcRYGate(q, 1.6240303452646379, 0);
  sqcRZGate(q, 2.8692963342296682, 0);
  sqcRYGate(q, 2.582889612783518, 1);
  sqcRZGate(q, 0.2368911704912123, 1);
  sqcRYGate(q, 1.5659050979818767, 2);
  sqcRZGate(q, 2.4825077372289432, 2);
  sqcRYGate(q, 0.017491721271172267, 3);
  sqcRZGate(q, -1.3026933278402142, 3);
  sqcRYGate(q, 0.3613623801623666, 4);
  sqcRZGate(q, -2.583113635800141, 4);
  sqcRYGate(q, -3.1394996117227674, 5);
  sqcRZGate(q, -0.48645920528712067, 5);
  sqcRYGate(q, -1.5701967200394376, 6);
  sqcRZGate(q, -2.0681113068172126, 6);
  sqcRYGate(q, -1.9235200850146035, 7);
  sqcRZGate(q, 2.8863953869340473, 7);
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
  sqcRYGate(q, -2.3886345291833564, 0);
  sqcRZGate(q, -1.2043758146752817, 0);
  sqcRYGate(q, -0.15272441096952605, 1);
  sqcRZGate(q, -0.08595361281314219, 1);
  sqcRYGate(q, -0.030023445052149777, 2);
  sqcRZGate(q, 0.9898083934370039, 2);
  sqcRYGate(q, 2.1335567843980705, 3);
  sqcRZGate(q, 0.40873769994052994, 3);
  sqcRYGate(q, -7.958949952765143e-06, 4);
  sqcRZGate(q, 1.1312629998200447, 4);
  sqcRYGate(q, -3.1413830071396918, 5);
  sqcRZGate(q, 2.6735223428638197, 5);
  sqcRYGate(q, -3.1071513340921175, 6);
  sqcRZGate(q, -0.5228990787859379, 6);
  sqcRYGate(q, 3.069339975653611, 7);
  sqcRZGate(q, -0.8281553874341807, 7);
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
  sqcRYGate(q, 0.03395123824123214, 0);
  sqcRZGate(q, -1.1460992667957273, 0);
  sqcRYGate(q, 1.0072168431831887, 1);
  sqcRZGate(q, -0.12987490208665442, 1);
  sqcRYGate(q, -0.056096918773248745, 2);
  sqcRZGate(q, -0.0830046319262312, 2);
  sqcRYGate(q, -1.52889884633984, 3);
  sqcRZGate(q, 1.6848026877563307, 3);
  sqcRYGate(q, 3.093818093487374, 4);
  sqcRZGate(q, 0.9928275479483151, 4);
  sqcRYGate(q, 7.687551419758578e-05, 5);
  sqcRZGate(q, 0.5739774566773889, 5);
  sqcRYGate(q, -2.8243488538894366, 6);
  sqcRZGate(q, 2.692078459944371, 6);
  sqcRYGate(q, 2.7354925527725817, 7);
  sqcRZGate(q, -1.8320124662015405, 7);
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
  sqcRYGate(q, 0.4776886060461782, 0);
  sqcRZGate(q, -2.8295508806149186, 0);
  sqcRYGate(q, -0.08808934141100101, 1);
  sqcRZGate(q, -1.6226690919652562, 1);
  sqcRYGate(q, 1.556048568669869, 2);
  sqcRZGate(q, 2.975398126848121, 2);
  sqcRYGate(q, -1.428222465390782, 3);
  sqcRZGate(q, -2.765229659283991, 3);
  sqcRYGate(q, 3.13942475874685, 4);
  sqcRZGate(q, 2.4978218032699018, 4);
  sqcRYGate(q, -1.5741063861581126, 5);
  sqcRZGate(q, -1.5649632179950839, 5);
  sqcRYGate(q, -0.07078591606598372, 6);
  sqcRZGate(q, 0.4317432304940194, 6);
  sqcRYGate(q, -1.5510788838760607, 7);
  sqcRZGate(q, 0.017133628552461033, 7);
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
  sqcRYGate(q, 1.598481432124532, 0);
  sqcRZGate(q, 1.202471671024889, 0);
  sqcRYGate(q, 0.26530516506975194, 1);
  sqcRZGate(q, 0.17598114956750965, 1);
  sqcRYGate(q, -3.1410363434548016, 2);
  sqcRZGate(q, 0.057782782584505206, 2);
  sqcRYGate(q, -3.1406216237443862, 3);
  sqcRZGate(q, 1.2517986715935046, 3);
  sqcRYGate(q, 3.1414397359877926, 4);
  sqcRZGate(q, 1.5178231298278466, 4);
  sqcRYGate(q, 2.90075532983281, 5);
  sqcRZGate(q, -0.4379213469588059, 5);
  sqcRYGate(q, 1.5708709590651486, 6);
  sqcRZGate(q, 1.5737445799840364, 6);
  sqcRYGate(q, -1.574498476714398, 7);
  sqcRZGate(q, -2.0083952634708533, 7);
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
  sqcRYGate(q, -0.6086063656308822, 0);
  sqcRZGate(q, 1.7365321846617272, 0);
  sqcRYGate(q, 1.2026141489288007, 1);
  sqcRZGate(q, -2.128805049174644, 1);
  sqcRYGate(q, -0.7851200178039663, 2);
  sqcRZGate(q, 0.13746203288736503, 2);
  sqcRYGate(q, 1.559265228308349, 3);
  sqcRZGate(q, -1.3113987755420222, 3);
  sqcRYGate(q, 1.6635429334867724, 4);
  sqcRZGate(q, 2.8525249674334736, 4);
  sqcRYGate(q, -3.1316306626071033, 5);
  sqcRZGate(q, 2.9553323731825687, 5);
  sqcRYGate(q, 2.3446224386553403, 6);
  sqcRZGate(q, -1.5681547304955057, 6);
  sqcRYGate(q, -1.8262664636893904, 7);
  sqcRZGate(q, 0.4879358783355971, 7);
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
  sqcRYGate(q, -2.578090285922643, 0);
  sqcRZGate(q, -2.7474788878032426, 0);
  sqcRYGate(q, 2.955005385771377, 1);
  sqcRZGate(q, 1.5954798118418687, 1);
  sqcRYGate(q, 0.00040604324412996107, 2);
  sqcRZGate(q, -0.8326881718101059, 2);
  sqcRYGate(q, -3.1408461011889077, 3);
  sqcRZGate(q, 1.7457845552666673, 3);
  sqcRYGate(q, 9.722148902557846e-05, 4);
  sqcRZGate(q, -3.0448658450262305, 4);
  sqcRYGate(q, 3.141196621230496, 5);
  sqcRZGate(q, -1.8639702844228556, 5);
  sqcRYGate(q, -1.5706181716361747, 6);
  sqcRZGate(q, 0.08720946401606568, 6);
  sqcRYGate(q, 1.5703968745002257, 7);
  sqcRZGate(q, 1.5735351680714258, 7);
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
  sqcRYGate(q, -2.5626272133731467, 0);
  sqcRZGate(q, 1.694358264008624, 0);
  sqcRYGate(q, 2.9301664992715795, 1);
  sqcRZGate(q, -0.03217871246199433, 1);
  sqcRYGate(q, 2.3342274725564303, 2);
  sqcRZGate(q, -2.0671967769064663, 2);
  sqcRYGate(q, 1.5966991305620906, 3);
  sqcRZGate(q, -2.170059019731677, 3);
  sqcRYGate(q, -0.0022323408143486907, 4);
  sqcRZGate(q, -0.3752303929170795, 4);
  sqcRYGate(q, 2.0264583780149654, 5);
  sqcRZGate(q, 0.002678116333466818, 5);
  sqcRYGate(q, -1.5168199475060744, 6);
  sqcRZGate(q, -2.64403728272055, 6);
  sqcRYGate(q, -2.5681915175221572, 7);
  sqcRZGate(q, 0.2509288725365657, 7);
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
  sqcRYGate(q, 1.5823575168866486, 0);
  sqcRZGate(q, -2.6460120859319116, 0);
  sqcRYGate(q, 0.37810058807943814, 1);
  sqcRZGate(q, 1.6596784614524813, 1);
  sqcRYGate(q, 1.5767028964878052, 2);
  sqcRZGate(q, 3.0701239970343646, 2);
  sqcRYGate(q, -3.1414652542480126, 3);
  sqcRZGate(q, -2.164035676331145, 3);
  sqcRYGate(q, 3.1413242560550927, 4);
  sqcRZGate(q, -2.140028947935844, 4);
  sqcRYGate(q, -2.8003442584900884, 5);
  sqcRZGate(q, 3.140945140201182, 5);
  sqcRYGate(q, -1.568060084085411, 6);
  sqcRZGate(q, 2.2730865301746155, 6);
  sqcRYGate(q, 3.1409715680605235, 7);
  sqcRZGate(q, -2.8953345946847073, 7);
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
  sqcRYGate(q, 0.0013555887359011365, 0);
  sqcRZGate(q, -2.075898128774522, 0);
  sqcRYGate(q, 0.0011431087254736006, 1);
  sqcRZGate(q, -1.7025325000809675, 1);
  sqcRYGate(q, 0.010072001322554168, 2);
  sqcRZGate(q, -1.497117917410809, 2);
  sqcRYGate(q, -1.5697330489652386, 3);
  sqcRZGate(q, 1.6749487197797208, 3);
  sqcRYGate(q, 1.570525688453345, 4);
  sqcRZGate(q, -0.0007597164633850183, 4);
  sqcRYGate(q, -1.5681171547474193, 5);
  sqcRZGate(q, 1.571736279807425, 5);
  sqcRYGate(q, -3.1382269375757303, 6);
  sqcRZGate(q, -2.3684801806186724, 6);
  sqcRYGate(q, -1.5770681328470502, 7);
  sqcRZGate(q, -0.0020338921277791777, 7);
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
  sqcRYGate(q, 1.5690720852944027, 0);
  sqcRZGate(q, 3.134223274362687, 0);
  sqcRYGate(q, 0.0003408411906313802, 1);
  sqcRZGate(q, 1.5573170476751743, 1);
  sqcRYGate(q, 1.5754209368117826, 2);
  sqcRZGate(q, -0.06455511889939498, 2);
  sqcRYGate(q, 3.141589703355524, 3);
  sqcRZGate(q, 1.6741802382797637, 3);
  sqcRYGate(q, 1.5707275043931475, 4);
  sqcRZGate(q, 2.3733657258178105, 4);
  sqcRYGate(q, 1.570686707029041, 5);
  sqcRZGate(q, 3.0547876049689835, 5);
  sqcRYGate(q, -3.141501852127813, 6);
  sqcRZGate(q, 0.20514523532015178, 6);
  sqcRYGate(q, 1.9224630890292573, 7);
  sqcRZGate(q, -0.006063442537218577, 7);
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
  sqcRYGate(q, -1.5912126394839987, 0);
  sqcRZGate(q, -0.13642035067454028, 0);
  sqcRYGate(q, -1.98841381615879, 1);
  sqcRZGate(q, -3.13265559739871, 1);
  sqcRYGate(q, -3.139987939512515, 2);
  sqcRZGate(q, -0.1539677159773456, 2);
  sqcRYGate(q, 1.587899327518046, 3);
  sqcRZGate(q, -1.5511663772352051, 3);
  sqcRYGate(q, 0.0002091716499812435, 4);
  sqcRZGate(q, -0.7939325898932657, 4);
  sqcRYGate(q, 3.125368800175187, 5);
  sqcRZGate(q, 1.811897335002441, 5);
  sqcRYGate(q, -3.044843298551614, 6);
  sqcRZGate(q, 0.13146042357856844, 6);
  sqcRYGate(q, -1.5696072442540103, 7);
  sqcRZGate(q, 3.1396940779929796, 7);
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
  sqcRYGate(q, 3.14130000404227, 0);
  sqcRZGate(q, -0.13665032838504068, 0);
  sqcRYGate(q, 0.04669880810353403, 1);
  sqcRZGate(q, 3.0411791580539766, 1);
  sqcRYGate(q, -0.00017928147393478952, 2);
  sqcRZGate(q, -2.1827768804480208, 2);
  sqcRYGate(q, 0.022177337468249125, 3);
  sqcRZGate(q, -1.5895495654704037, 3);
  sqcRYGate(q, -3.002693872365673, 4);
  sqcRZGate(q, 1.5741425835196399, 4);
  sqcRYGate(q, -3.1414619386885128, 5);
  sqcRZGate(q, -1.2426719042102379, 5);
  sqcRYGate(q, 1.5561580658758283, 6);
  sqcRZGate(q, 3.1414287329312245, 6);
  sqcRYGate(q, 1.917301500600347, 7);
  sqcRZGate(q, -1.4025491434489146, 7);
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
  sqcRYGate(q, -1.5506372374598811, 0);
  sqcRZGate(q, 2.4757411826502422, 0);
  sqcRYGate(q, -0.4202021437327506, 1);
  sqcRZGate(q, 1.141717664232944, 1);
  sqcRYGate(q, -0.00047141274952478115, 2);
  sqcRZGate(q, 1.655948582290224, 2);
  sqcRYGate(q, -1.5884052594990241, 3);
  sqcRZGate(q, 0.8987328423597808, 3);
  sqcRYGate(q, -1.5708124854331662, 4);
  sqcRZGate(q, 0.5148305981206084, 4);
  sqcRYGate(q, -1.5715882551301146, 5);
  sqcRZGate(q, -2.0824769282099878, 5);
  sqcRYGate(q, -1.5990056639581713, 6);
  sqcRZGate(q, 0.6223370073823755, 6);
  sqcRYGate(q, 0.009197456468322474, 7);
  sqcRZGate(q, -1.1267209129807156, 7);
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
  sqcRYGate(q, 2.405556013251127, 0);
  sqcRZGate(q, 2.6515162398996988, 0);
  sqcRYGate(q, 1.019259709659826, 1);
  sqcRZGate(q, -2.8139425363860067, 1);
  sqcRYGate(q, -2.0025305847831305, 2);
  sqcRZGate(q, 1.6150059499092935, 2);
  sqcRYGate(q, -2.406290022698146, 3);
  sqcRZGate(q, -0.49324558548235836, 3);
  sqcRYGate(q, 2.122215228019531, 4);
  sqcRZGate(q, 0.3314896329177355, 4);
  sqcRYGate(q, 1.022386315593443, 5);
  sqcRZGate(q, -2.8162179013330175, 5);
  sqcRYGate(q, 1.1380285903133132, 6);
  sqcRZGate(q, 1.6148069556858209, 6);
  sqcRYGate(q, -1.1393028808798935, 7);
  sqcRZGate(q, -1.5303655099726539, 7);

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
