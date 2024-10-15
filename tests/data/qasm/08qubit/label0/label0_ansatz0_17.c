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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09654265364567585, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.011761289452891989, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04915919778754711, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.03790157472434055, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.012882588924773352, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.03395593421956201, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.08971400217775258, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7198476946971392, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.06707889614236405, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.10378821190498454, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.07857635730078864, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.23690380603536518, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.09416069334702516, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.0034456469934646605, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.8675463770258135, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.23239365489264782, 0);
  sqcRZGate(q, -0.018148517386970205, 1);
  sqcRZGate(q, -0.036953714788323364, 2);
  sqcRZGate(q, -0.2074478428902629, 3);
  sqcRZGate(q, -0.08639133569395745, 4);
  sqcRZGate(q, -0.082767321791645, 5);
  sqcRZGate(q, -0.058958648135761044, 6);
  sqcRZGate(q, 0.02317281134929282, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18636805822640365, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0650075391330921, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.20791618023623665, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.20472911972817553, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.1259930571183743, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.18510585599324086, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.02313518487188786, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7235198496578861, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1121099971209705, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.031713991430425664, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.0019092661450631771, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.13207171354762073, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.1480697306787844, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.08659774741591453, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.765417053850585, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.30381748043560264, 0);
  sqcRZGate(q, 0.02720546011148983, 1);
  sqcRZGate(q, -0.02915654720561948, 2);
  sqcRZGate(q, -0.23043560911478225, 3);
  sqcRZGate(q, -0.2335910005625426, 4);
  sqcRZGate(q, -0.15897683618059255, 5);
  sqcRZGate(q, -0.0689014206116155, 6);
  sqcRZGate(q, -0.03288753312153334, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.21101796332255687, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.011811813492465555, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2874848110593673, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.336313665667274, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.24747483267536255, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.19246402457973055, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.053352239045927854, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7035364562541229, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.06578792638131614, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.010841310538897088, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.004988217963582046, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.0692968451118723, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.09030627925278048, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.1474011656725656, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.666428585531322, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.25357941526008043, 0);
  sqcRZGate(q, 0.048525324715576, 1);
  sqcRZGate(q, -0.019494008043489042, 2);
  sqcRZGate(q, -0.2713753148265765, 3);
  sqcRZGate(q, -0.2719778672189842, 4);
  sqcRZGate(q, -0.1939205479265173, 5);
  sqcRZGate(q, -0.016504284879563246, 6);
  sqcRZGate(q, -0.009578944355150281, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1637805071323846, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.003776899163197889, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.27336206148314957, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.417311032320214, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.33224544648334986, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.16544542196620768, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.028504692063232952, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7493027625799646, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.04396787774939972, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.04092731316682719, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.03901532546360695, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.21806366976102146, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.12310410397070858, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.1924684004273292, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5328580968733925, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.16009482619523488, 0);
  sqcRZGate(q, 0.0025093355048231244, 1);
  sqcRZGate(q, -0.07009515679438151, 2);
  sqcRZGate(q, -0.2637261624590867, 3);
  sqcRZGate(q, -0.22386456169766575, 4);
  sqcRZGate(q, -0.09696496527625653, 5);
  sqcRZGate(q, 0.16380940604030989, 6);
  sqcRZGate(q, -0.013928531873789812, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18263697438036114, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.061542590518744396, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3110139544610911, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.43880310106283704, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.29854918501874017, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.03947277246029044, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.179009062457916, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.869216528825121, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.05914459865932571, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.03733137136339947, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.10737246479254821, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.4403330738367528, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.0840619248280071, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.037041455655302695, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4129580701007116, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.08189146749914429, 0);
  sqcRZGate(q, -0.04099129255494347, 1);
  sqcRZGate(q, -0.07189519852042041, 2);
  sqcRZGate(q, -0.3199785005622724, 3);
  sqcRZGate(q, -0.25155535221158354, 4);
  sqcRZGate(q, -0.13779166594840522, 5);
  sqcRZGate(q, 0.11082401440223323, 6);
  sqcRZGate(q, -0.044472910540081914, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1925296028266663, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.053950006622074456, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.39537793382192843, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.39522746557944577, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.31396838663389354, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.1262802604212145, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2578622599373181, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.8789770911899304, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.09292855103725864, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.04554392605626231, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.20349907076470328, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6830840720855357, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.0346216560043048, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.18099586647832194, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.22574347146590776, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.05723980734882106, 0);
  sqcRZGate(q, -0.18983399583083338, 1);
  sqcRZGate(q, -0.09230200272523578, 2);
  sqcRZGate(q, -0.49779571217945584, 3);
  sqcRZGate(q, -0.15874139386487657, 4);
  sqcRZGate(q, -0.14255216865299583, 5);
  sqcRZGate(q, 0.08509608016084541, 6);
  sqcRZGate(q, -0.039069291794440575, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.28391923853772283, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.011294629559108177, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5195903935028746, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5212261048309569, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.32603108607897896, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.13224318940050034, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.229098754656031, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.8221388496179598, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.05099554704328329, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.0986006175304531, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2751696787214534, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6884966133007561, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.1894884241514136, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.14355169756125738, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.16582416245622214, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.09960454739311489, 0);
  sqcRZGate(q, -0.29349451122710146, 1);
  sqcRZGate(q, -0.22197861731268803, 2);
  sqcRZGate(q, -0.5409173439866225, 3);
  sqcRZGate(q, -0.22160913296519816, 4);
  sqcRZGate(q, -0.10092295857470436, 5);
  sqcRZGate(q, 0.06648556851289707, 6);
  sqcRZGate(q, -0.01897225147454626, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5584665620280068, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04352542728706363, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6007587344345912, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5888595189127375, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3635347290240176, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.04233716919518139, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.30415422217112853, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7884641242810636, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.13713892733639232, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.05086775446363838, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5651858473923014, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.7335020675448443, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.2297516922536958, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.3145684147079309, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.13356334711638776, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.24261544277571814, 0);
  sqcRZGate(q, -0.45436880432991517, 1);
  sqcRZGate(q, -0.3162219951381446, 2);
  sqcRZGate(q, -0.5620404896553314, 3);
  sqcRZGate(q, -0.20693627420964222, 4);
  sqcRZGate(q, -0.1364207940685935, 5);
  sqcRZGate(q, -0.11002191518078162, 6);
  sqcRZGate(q, -0.024083261184999517, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6049114136328148, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2801313534304681, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6342383150633479, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5303417960230056, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3364239508541919, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.06449113822498753, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.11618868075511536, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.767112755900607, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.08769331568693291, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.05291918400624307, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7094081491261006, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.9553492903095281, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.3530444172220489, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.2768828427249534, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.0338045878556214, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.31722155310119554, 0);
  sqcRZGate(q, -0.49402295932075546, 1);
  sqcRZGate(q, -0.21744598632795614, 2);
  sqcRZGate(q, -0.426495820342461, 3);
  sqcRZGate(q, -0.26454395059276814, 4);
  sqcRZGate(q, -0.24542887649966413, 5);
  sqcRZGate(q, -0.3419898353980182, 6);
  sqcRZGate(q, 0.07450425010206382, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5063753219166279, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3583724304641565, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6765709584678288, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.7303008709481414, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.35624446619091626, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0594126321723292, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.07166467218317711, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7947194550530761, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.01676752312833012, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3218595481472331, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0513218299281486, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.9587957618953693, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4779434371546445, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.261246401855585, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.0419186537376147, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3085895079810803, 0);
  sqcRZGate(q, -0.4693575594230205, 1);
  sqcRZGate(q, -0.2582203101498388, 2);
  sqcRZGate(q, -0.4051211859920897, 3);
  sqcRZGate(q, -0.38869598200335026, 4);
  sqcRZGate(q, -0.33651050483515454, 5);
  sqcRZGate(q, -0.44990286378183436, 6);
  sqcRZGate(q, 0.06718091695368505, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3937075274731916, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3866117009964852, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3086537097221592, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.6918660895388877, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2619956002321962, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.02428279072269778, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.04406953037623118, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7919811822645214, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.08662005319073424, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3250395039009677, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.192218851180735, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.7958961271612099, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5241442524627108, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5042830891145544, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.28155194790889887, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.2295284804793714, 0);
  sqcRZGate(q, -0.2922102159077445, 1);
  sqcRZGate(q, 0.01949217926838427, 2);
  sqcRZGate(q, -0.6475281250883534, 3);
  sqcRZGate(q, -0.3509058956878786, 4);
  sqcRZGate(q, -0.28934212406221393, 5);
  sqcRZGate(q, -0.17668327124630442, 6);
  sqcRZGate(q, 0.1982530461255968, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.44134437454470893, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6734212196492877, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14691329099575948, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5391617837168666, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.12003721252364741, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.03326057213023003, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.0475590116261394, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6707552854776787, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.14402632819911226, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.67983771235388, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.4874588973651468, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.7017024710337352, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7034122452852346, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6424471195325868, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3338977396844236, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.11818626101885901, 0);
  sqcRZGate(q, 0.0031700279445270934, 1);
  sqcRZGate(q, 0.014882371107945875, 2);
  sqcRZGate(q, -0.17433088420878762, 3);
  sqcRZGate(q, -0.7737522820442966, 4);
  sqcRZGate(q, -0.02731107647084154, 5);
  sqcRZGate(q, 0.3524192923095984, 6);
  sqcRZGate(q, 0.43039970962701246, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6372427026329228, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.574482579148392, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3164165569417547, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.442471868804353, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.11663500709437856, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0197136029149382, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3321024798078227, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4796001499826291, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8137220768195236, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6421377686367146, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.4950289714812333, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.009968896374429, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.6475667303866083, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5571485486551625, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.06479106987622422, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.22443723634963164, 0);
  sqcRZGate(q, -0.03883294003536483, 1);
  sqcRZGate(q, 0.01726799987445661, 2);
  sqcRZGate(q, -0.21836867167618945, 3);
  sqcRZGate(q, -0.19238580208655334, 4);
  sqcRZGate(q, -0.3469629146688403, 5);
  sqcRZGate(q, 0.436750915932455, 6);
  sqcRZGate(q, 0.4972900588735102, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4894699694967322, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.27360545843543527, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.17586696315128797, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.664928353071391, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.07357766955835558, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.16640149598426834, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3932476327553758, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.38250175593394975, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7244609185669705, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5130639503847921, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.6398309145634882, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.8075557221045094, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5918959636688752, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.7534514148798737, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.004403909245615477, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3695006359200628, 0);
  sqcRZGate(q, -0.07140594037824691, 1);
  sqcRZGate(q, -0.0384831595496756, 2);
  sqcRZGate(q, -0.048457565674678536, 3);
  sqcRZGate(q, -0.13867894772322364, 4);
  sqcRZGate(q, -0.19879909438842874, 5);
  sqcRZGate(q, -0.007717172785945259, 6);
  sqcRZGate(q, 0.5260091139636548, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.7026766335083796, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.0918363924089063, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2280047530867515, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.6344685755855339, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.21976797415540228, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.016528397418080827, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.25672767946942826, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.43741147655122053, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7872013312945928, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.41069314901015863, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.1596941333859578, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6478284085189923, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7485609362133275, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6948131752471779, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3143882942404211, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3887976536845542, 0);
  sqcRZGate(q, 0.006094195201985441, 1);
  sqcRZGate(q, 0.07381473837548509, 2);
  sqcRZGate(q, -0.24781023651499173, 3);
  sqcRZGate(q, -0.1566131312150363, 4);
  sqcRZGate(q, -0.19040555941980614, 5);
  sqcRZGate(q, 0.04331980166734022, 6);
  sqcRZGate(q, 0.541353353466766, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5086987186604269, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.7487450804745905, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05232988767636603, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5732541089305336, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.10592879094717528, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.44035576262338855, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.10919250964055247, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6522396373829997, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7407661788082106, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6237640492104617, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.2518449613955054, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5438715255548149, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4875765065167456, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5918489726901973, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.37726600154466466, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5670312340187472, 0);
  sqcRZGate(q, -0.006895361749341484, 1);
  sqcRZGate(q, 0.0026733056479325648, 2);
  sqcRZGate(q, -0.3152359391678104, 3);
  sqcRZGate(q, 0.2761831668356246, 4);
  sqcRZGate(q, -0.03638577229375812, 5);
  sqcRZGate(q, 0.12152400149768008, 6);
  sqcRZGate(q, 0.6875414077058328, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3629828689542085, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.0933209940033977, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06459297965646092, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5882765096438386, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.17160344838702551, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.3012277678530814, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.376830320094605, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.49854753634326027, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9892311454467506, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.14399389703928234, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0780636294086892, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.08431350545077868, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.9950296160109131, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5026344561013433, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.06844357407320324, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.48062533410742936, 0);
  sqcRZGate(q, 0.09649559637352566, 1);
  sqcRZGate(q, 0.010011349184068104, 2);
  sqcRZGate(q, -0.0363103953842859, 3);
  sqcRZGate(q, -0.07561596365299346, 4);
  sqcRZGate(q, 0.09381467308837452, 5);
  sqcRZGate(q, 0.048985867247333933, 6);
  sqcRZGate(q, 0.7422223759000365, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2067346070328218, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6775636952812877, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1979363448849561, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.03604726342199747, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.050859500770378076, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.02362995845069946, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.8254083650694125, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.369941515043812, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.127956128869961, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.4299499568140313, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.707439136380611, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.13924637776908147, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.1078453597310887, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.14048271784928207, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5725120845888538, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.24811618145878017, 0);
  sqcRZGate(q, 0.019676992256872288, 1);
  sqcRZGate(q, -0.032427605816377915, 2);
  sqcRZGate(q, 0.09648291481221431, 3);
  sqcRZGate(q, -0.1981738656312038, 4);
  sqcRZGate(q, -0.1454846994929849, 5);
  sqcRZGate(q, -0.02090294012487163, 6);
  sqcRZGate(q, 0.9234511720819477, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.05095796581633069, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03762555277338892, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.3370716002721079, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.34317018203738825, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.08594420506344966, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.18487733684216312, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.35869492256158364, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.41837293826001437, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.34654900924760573, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9582189155470545, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.21773922569093582, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.061397576284339075, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.71174250563362, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.4396059864700688, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.30965664930387876, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.16901199991931262, 0);
  sqcRZGate(q, -0.1183467252270511, 1);
  sqcRZGate(q, -0.1096525457505665, 2);
  sqcRZGate(q, -0.09240062322111664, 3);
  sqcRZGate(q, -0.010100973389540645, 4);
  sqcRZGate(q, 0.03178148795001294, 5);
  sqcRZGate(q, -0.0363937918976712, 6);
  sqcRZGate(q, 0.9556558082980667, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.32480536682409095, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.15176249038202222, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3127570297584432, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.703634838254568, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2637371767008368, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.17533939711844712, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5643235193638317, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.15664121881302046, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9664967184306835, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.031020760956651343, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.007070852545162304, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.44636856567000643, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.13416826503860255, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.04743450628514242, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.8819881108176062, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.02636894835454743, 0);
  sqcRZGate(q, 0.06347320535710774, 1);
  sqcRZGate(q, 0.12592396052777097, 2);
  sqcRZGate(q, -0.15336430034151885, 3);
  sqcRZGate(q, -0.10047770824607369, 4);
  sqcRZGate(q, 0.02066035925025452, 5);
  sqcRZGate(q, 0.04866713313247555, 6);
  sqcRZGate(q, 0.5928012564829136, 7);

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
