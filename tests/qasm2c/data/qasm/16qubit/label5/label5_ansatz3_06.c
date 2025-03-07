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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.004897394070514625, 0);
  sqcRZGate(q, -1.9465972093085593, 0);
  sqcRYGate(q, 1.459100308648978, 1);
  sqcRZGate(q, 0.16620113157205513, 1);
  sqcRYGate(q, -3.1411000903092714, 2);
  sqcRZGate(q, 1.9135777499191868, 2);
  sqcRYGate(q, -0.9163250270454455, 3);
  sqcRZGate(q, 1.6524094086462897, 3);
  sqcRYGate(q, 0.0012946519351819674, 4);
  sqcRZGate(q, 0.537472072976494, 4);
  sqcRYGate(q, 1.5146296621416964, 5);
  sqcRZGate(q, 2.706752770877355, 5);
  sqcRYGate(q, -0.0008558092665662542, 6);
  sqcRZGate(q, 0.40169335343248014, 6);
  sqcRYGate(q, 2.5586536838206126, 7);
  sqcRZGate(q, 3.139365059710343, 7);
  sqcRYGate(q, -0.0005545907648212278, 8);
  sqcRZGate(q, 0.41682240960823874, 8);
  sqcRYGate(q, -1.57192146046944, 9);
  sqcRZGate(q, 1.2579709255618012, 9);
  sqcRYGate(q, -3.140050488265289, 10);
  sqcRZGate(q, -2.0576688518026636, 10);
  sqcRYGate(q, -1.571794580828535, 11);
  sqcRZGate(q, 2.3146588775315116, 11);
  sqcRYGate(q, 1.572198863967782, 12);
  sqcRZGate(q, 0.6123341167475438, 12);
  sqcRYGate(q, -3.1414843825725165, 13);
  sqcRZGate(q, 0.025776604750318736, 13);
  sqcRYGate(q, -1.571966793050886, 14);
  sqcRZGate(q, 1.3940068980973854, 14);
  sqcRYGate(q, 3.1163177230304324, 15);
  sqcRZGate(q, -1.389487732753281, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.1410239233596142, 0);
  sqcRZGate(q, 1.2284583298443248, 0);
  sqcRYGate(q, 2.620749831610308, 1);
  sqcRZGate(q, 1.8173690998230327, 1);
  sqcRYGate(q, 3.1414444052899606, 2);
  sqcRZGate(q, -1.9495402844566159, 2);
  sqcRYGate(q, 1.5767858321617645, 3);
  sqcRZGate(q, 3.0771585628903533, 3);
  sqcRYGate(q, 3.1414193178779133, 4);
  sqcRZGate(q, -2.731299742933609, 4);
  sqcRYGate(q, -2.654482016620153, 5);
  sqcRZGate(q, 1.1899021078929843, 5);
  sqcRYGate(q, -3.1239431900330614, 6);
  sqcRZGate(q, -0.04009132877666651, 6);
  sqcRYGate(q, -1.5584286007548471, 7);
  sqcRZGate(q, -1.0757410508818952, 7);
  sqcRYGate(q, 3.1412119482762852, 8);
  sqcRZGate(q, -1.6815982535444773, 8);
  sqcRYGate(q, -2.4402216032288, 9);
  sqcRZGate(q, 2.6477608231997745, 9);
  sqcRYGate(q, 0.00021794443678558304, 10);
  sqcRZGate(q, 2.069129364909898, 10);
  sqcRYGate(q, -1.7887924251932603, 11);
  sqcRZGate(q, 1.227047608591867, 11);
  sqcRYGate(q, -3.1274482463783624, 12);
  sqcRZGate(q, -1.015302292654751, 12);
  sqcRYGate(q, 1.5476830224299305, 13);
  sqcRZGate(q, -1.0853758657907473, 13);
  sqcRYGate(q, -0.05915383479836578, 14);
  sqcRZGate(q, -2.018965319785588, 14);
  sqcRYGate(q, 1.5738346938243675, 15);
  sqcRZGate(q, -1.715483708834905, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.0038254512628881168, 0);
  sqcRZGate(q, 1.1754645815048048, 0);
  sqcRYGate(q, 0.44443468605344716, 1);
  sqcRZGate(q, 1.719911020628799, 1);
  sqcRYGate(q, 3.141498087351985, 2);
  sqcRZGate(q, -0.09365759832303742, 2);
  sqcRYGate(q, 1.5870987656565996, 3);
  sqcRZGate(q, 3.1005878997078615, 3);
  sqcRYGate(q, 3.1404865540702187, 4);
  sqcRZGate(q, 0.1981899554952182, 4);
  sqcRYGate(q, -1.5708311535728878, 5);
  sqcRZGate(q, -3.0969672035659572, 5);
  sqcRYGate(q, -4.974487941566963e-05, 6);
  sqcRZGate(q, -3.124471303918419, 6);
  sqcRYGate(q, 0.12035031190665658, 7);
  sqcRZGate(q, -1.9744606063346002, 7);
  sqcRYGate(q, 3.1414392919442267, 8);
  sqcRZGate(q, -1.2961962531341464, 8);
  sqcRYGate(q, 0.4882083530021853, 9);
  sqcRZGate(q, -1.6663883526829721, 9);
  sqcRYGate(q, -3.141385262307864, 10);
  sqcRZGate(q, 1.990248768408218, 10);
  sqcRYGate(q, 0.446363624728896, 11);
  sqcRZGate(q, -1.6273754377797702, 11);
  sqcRYGate(q, 1.908281589120003, 12);
  sqcRZGate(q, -2.844864425403643, 12);
  sqcRYGate(q, -3.141324825437454, 13);
  sqcRZGate(q, -0.4852071669673643, 13);
  sqcRYGate(q, 0.5727486018539913, 14);
  sqcRZGate(q, -2.835030284560232, 14);
  sqcRYGate(q, 1.3780601358604772, 15);
  sqcRZGate(q, 0.6785517924174066, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.00010398481092189697, 0);
  sqcRZGate(q, -3.0110631964731667, 0);
  sqcRYGate(q, -3.1367989406894083, 1);
  sqcRZGate(q, -2.94059318727164, 1);
  sqcRYGate(q, -3.141035532403182, 2);
  sqcRZGate(q, -1.3699237633594876, 2);
  sqcRYGate(q, -0.43679902092097217, 3);
  sqcRZGate(q, -3.0975385391003005, 3);
  sqcRYGate(q, -0.00020126739098590287, 4);
  sqcRZGate(q, 1.3761379542313543, 4);
  sqcRYGate(q, 1.6097300576484113, 5);
  sqcRZGate(q, 0.04790770882264095, 5);
  sqcRYGate(q, -3.123324226099604, 6);
  sqcRZGate(q, 0.21872557569255416, 6);
  sqcRYGate(q, -1.8079853955502996, 7);
  sqcRZGate(q, 0.09829175364860311, 7);
  sqcRYGate(q, 3.1413907123174187, 8);
  sqcRZGate(q, 0.4460122201586181, 8);
  sqcRYGate(q, -1.5142491548003574, 9);
  sqcRZGate(q, 1.5308454606997959, 9);
  sqcRYGate(q, 1.5707602486125853, 10);
  sqcRZGate(q, 0.04057034649270097, 10);
  sqcRYGate(q, 1.5973237384233911, 11);
  sqcRZGate(q, 1.0698147964366085, 11);
  sqcRYGate(q, -0.0015771666568137482, 12);
  sqcRZGate(q, 0.27016533670255577, 12);
  sqcRYGate(q, 1.5531807286307953, 13);
  sqcRZGate(q, 0.39409267787379143, 13);
  sqcRYGate(q, -0.002907711259263318, 14);
  sqcRZGate(q, -1.905563185937087, 14);
  sqcRYGate(q, -3.069395485084298, 15);
  sqcRZGate(q, 2.354529415611861, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.010980059194078962, 0);
  sqcRZGate(q, -1.271101203434876, 0);
  sqcRYGate(q, 1.5946469596026986, 1);
  sqcRZGate(q, -0.31048863488077644, 1);
  sqcRYGate(q, 3.1415735566988174, 2);
  sqcRZGate(q, 1.0153939931818097, 2);
  sqcRYGate(q, 1.3622886879203806, 3);
  sqcRZGate(q, -3.094891008420986, 3);
  sqcRYGate(q, 0.0008839544918082254, 4);
  sqcRZGate(q, 1.8891526176808382, 4);
  sqcRYGate(q, -1.5748464154406427, 5);
  sqcRZGate(q, -0.003236417608928122, 5);
  sqcRYGate(q, -3.141276260562245, 6);
  sqcRZGate(q, 2.9890006597436245, 6);
  sqcRYGate(q, -2.8754034238145, 7);
  sqcRZGate(q, -0.04152083254028098, 7);
  sqcRYGate(q, -1.572536292308901, 8);
  sqcRZGate(q, 0.5154909600685185, 8);
  sqcRYGate(q, 1.6549867640291072, 9);
  sqcRZGate(q, 0.979131287066863, 9);
  sqcRYGate(q, 3.141355860159678, 10);
  sqcRZGate(q, 3.137549852114544, 10);
  sqcRYGate(q, -9.66701812781201e-06, 11);
  sqcRZGate(q, 0.2868523115318222, 11);
  sqcRYGate(q, -3.1414194246160565, 12);
  sqcRZGate(q, -1.0048424033085748, 12);
  sqcRYGate(q, -0.0008041282815094419, 13);
  sqcRZGate(q, 2.8744809897949106, 13);
  sqcRYGate(q, 0.5575904949878965, 14);
  sqcRZGate(q, -0.3325103307423362, 14);
  sqcRYGate(q, 2.4730732758405, 15);
  sqcRZGate(q, -3.115168482416336, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.9665922965668501, 0);
  sqcRZGate(q, 1.8080370299540613, 0);
  sqcRYGate(q, 2.8165518150132636, 1);
  sqcRZGate(q, -0.6356504451658007, 1);
  sqcRYGate(q, 0.0007466301086926919, 2);
  sqcRZGate(q, 2.2731324222263813, 2);
  sqcRYGate(q, 1.964541463845168, 3);
  sqcRZGate(q, -2.985696863106272, 3);
  sqcRYGate(q, -0.00038321012557011175, 4);
  sqcRZGate(q, 0.23395549392382797, 4);
  sqcRYGate(q, 1.6088267247535173, 5);
  sqcRZGate(q, 1.6938668212580206, 5);
  sqcRYGate(q, 1.5708889978454081, 6);
  sqcRZGate(q, -2.5703228271893583, 6);
  sqcRYGate(q, -1.5573779592263726, 7);
  sqcRZGate(q, -1.6880284507032859, 7);
  sqcRYGate(q, -3.123420122543403, 8);
  sqcRZGate(q, -2.002690326804574, 8);
  sqcRYGate(q, -1.6286971602843843, 9);
  sqcRZGate(q, 3.0768396990402906, 9);
  sqcRYGate(q, -1.5980047149727625, 10);
  sqcRZGate(q, 0.09291840355944013, 10);
  sqcRYGate(q, -0.15116328090452846, 11);
  sqcRZGate(q, 0.3824944136004229, 11);
  sqcRYGate(q, -1.5725079260097974, 12);
  sqcRZGate(q, -2.0024667769970472, 12);
  sqcRYGate(q, -1.199803765720528, 13);
  sqcRZGate(q, -1.6632289455988492, 13);
  sqcRYGate(q, -3.1364214025466364, 14);
  sqcRZGate(q, -0.39398269639606875, 14);
  sqcRYGate(q, 3.065270260007378, 15);
  sqcRZGate(q, -0.4177921404927342, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.0139370066160458, 0);
  sqcRZGate(q, -1.4034738469888115, 0);
  sqcRYGate(q, 3.13850457250908, 1);
  sqcRZGate(q, -0.8704648726931316, 1);
  sqcRYGate(q, 3.1411531091784184, 2);
  sqcRZGate(q, -3.0403505407802207, 2);
  sqcRYGate(q, -2.142720457754007, 3);
  sqcRZGate(q, -1.538788314996453, 3);
  sqcRYGate(q, -1.5716471280465887, 4);
  sqcRZGate(q, 0.1771042575942918, 4);
  sqcRYGate(q, -1.469468761600549, 5);
  sqcRZGate(q, 0.569738635473545, 5);
  sqcRYGate(q, 3.1407424342784345, 6);
  sqcRZGate(q, -1.132872662348893, 6);
  sqcRYGate(q, -3.141262516813809, 7);
  sqcRZGate(q, -0.09225640883783309, 7);
  sqcRYGate(q, 3.137268402051143, 8);
  sqcRZGate(q, -0.3080448564157387, 8);
  sqcRYGate(q, 0.0020597537772068263, 9);
  sqcRZGate(q, -1.4940072768949086, 9);
  sqcRYGate(q, 0.0003367659110198318, 10);
  sqcRZGate(q, -2.8821120346151194, 10);
  sqcRYGate(q, 3.1354577608527405, 11);
  sqcRZGate(q, -0.7383456500124809, 11);
  sqcRYGate(q, 3.1415737116275193, 12);
  sqcRZGate(q, 2.1122175811045425, 12);
  sqcRYGate(q, -2.601886911969447, 13);
  sqcRZGate(q, 3.0932440239939227, 13);
  sqcRYGate(q, -0.00042395331439859524, 14);
  sqcRZGate(q, 1.5297820534712665, 14);
  sqcRYGate(q, -0.5302691735793603, 15);
  sqcRZGate(q, 0.42134481027227416, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.3132323400061976, 0);
  sqcRZGate(q, -1.8513458473443034, 0);
  sqcRYGate(q, 2.494166223599027, 1);
  sqcRZGate(q, -0.12051280579415295, 1);
  sqcRYGate(q, -1.57067369896792, 2);
  sqcRZGate(q, -2.5127924197450295, 2);
  sqcRYGate(q, 0.53845856364511, 3);
  sqcRZGate(q, -0.09213845639299638, 3);
  sqcRYGate(q, 0.00028937192667322965, 4);
  sqcRZGate(q, -1.7170659548290406, 4);
  sqcRYGate(q, -3.0667981852478894, 5);
  sqcRZGate(q, -2.243952893982315, 5);
  sqcRYGate(q, 0.9499910722290238, 6);
  sqcRZGate(q, -1.699269199965493, 6);
  sqcRYGate(q, -0.5467108123137601, 7);
  sqcRZGate(q, 2.3438649767073323, 7);
  sqcRYGate(q, 0.0003006446254980588, 8);
  sqcRZGate(q, -1.2926938236188246, 8);
  sqcRYGate(q, 0.8819145093520796, 9);
  sqcRZGate(q, -0.13493095946679107, 9);
  sqcRYGate(q, -0.014045568731638982, 10);
  sqcRZGate(q, 2.4609851457713776, 10);
  sqcRYGate(q, 1.6250626244275646, 11);
  sqcRZGate(q, -1.7809798251055105, 11);
  sqcRYGate(q, 0.0009043352893672141, 12);
  sqcRZGate(q, -0.5017426509181675, 12);
  sqcRYGate(q, -3.0523839045563683, 13);
  sqcRZGate(q, -1.6645306348667939, 13);
  sqcRYGate(q, -1.5436726910466705, 14);
  sqcRZGate(q, -1.896578377356722, 14);
  sqcRYGate(q, 1.4510280803202198, 15);
  sqcRZGate(q, -0.15311893260690917, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5715363089274923, 0);
  sqcRZGate(q, 0.007691436202336263, 0);
  sqcRYGate(q, 3.1294845582929574, 1);
  sqcRZGate(q, 2.8385099329398797, 1);
  sqcRYGate(q, -0.00018104796819073954, 2);
  sqcRZGate(q, -0.6286559060539254, 2);
  sqcRYGate(q, 3.1415620536600777, 3);
  sqcRZGate(q, -1.6288384830866054, 3);
  sqcRYGate(q, -0.00010616035290667014, 4);
  sqcRZGate(q, -1.4711517245068455, 4);
  sqcRYGate(q, 1.637983110458558, 5);
  sqcRZGate(q, -2.6875577643164754, 5);
  sqcRYGate(q, 3.1412610127361598, 6);
  sqcRZGate(q, 2.935517178766836, 6);
  sqcRYGate(q, 3.1412547558898845, 7);
  sqcRZGate(q, 0.7984674393984691, 7);
  sqcRYGate(q, -0.003957604422804017, 8);
  sqcRZGate(q, 2.618872088075348, 8);
  sqcRYGate(q, -0.07346282598231113, 9);
  sqcRZGate(q, 1.6542734708550388, 9);
  sqcRYGate(q, 5.328427273454395e-05, 10);
  sqcRZGate(q, 2.703064267867378, 10);
  sqcRYGate(q, -3.062340779175005, 11);
  sqcRZGate(q, -1.778034004499009, 11);
  sqcRYGate(q, -3.141507063462411, 12);
  sqcRZGate(q, -3.1306041810491227, 12);
  sqcRYGate(q, -1.5826530000313648, 13);
  sqcRZGate(q, 1.3567278111867687, 13);
  sqcRYGate(q, -0.008290560471106545, 14);
  sqcRZGate(q, -1.250134524733335, 14);
  sqcRYGate(q, -0.0031025686532570873, 15);
  sqcRZGate(q, -1.4111849634550333, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.7995192429605518, 0);
  sqcRZGate(q, -1.4913732885142856, 0);
  sqcRYGate(q, 3.1408715574554553, 1);
  sqcRZGate(q, 1.0571209276434583, 1);
  sqcRYGate(q, 1.5771137290883028, 2);
  sqcRZGate(q, -1.4988706627606616, 2);
  sqcRYGate(q, 1.4818954783367297, 3);
  sqcRZGate(q, 0.10677990838386177, 3);
  sqcRYGate(q, 0.00015389189743632666, 4);
  sqcRZGate(q, -0.014218171955964877, 4);
  sqcRYGate(q, -3.126120642907752, 5);
  sqcRZGate(q, 0.384692615009544, 5);
  sqcRYGate(q, -1.6796272558356016, 6);
  sqcRZGate(q, -2.084702632737155, 6);
  sqcRYGate(q, 1.5708887866573114, 7);
  sqcRZGate(q, 1.5840997891995823, 7);
  sqcRYGate(q, 0.017339514392384868, 8);
  sqcRZGate(q, 0.5874324567167537, 8);
  sqcRYGate(q, 1.5985800411676072, 9);
  sqcRZGate(q, 1.2965358131861748, 9);
  sqcRYGate(q, -3.085576320138491, 10);
  sqcRZGate(q, 0.21523509631752666, 10);
  sqcRYGate(q, -1.5890990633249293, 11);
  sqcRZGate(q, 3.138047479679752, 11);
  sqcRYGate(q, 0.00010712495677811518, 12);
  sqcRZGate(q, -2.8667707904884883, 12);
  sqcRYGate(q, 0.06527128836049353, 13);
  sqcRZGate(q, -2.9198743833518477, 13);
  sqcRYGate(q, 1.5465863991217128, 14);
  sqcRZGate(q, -2.490624948658312, 14);
  sqcRYGate(q, -1.5713532900370097, 15);
  sqcRZGate(q, 0.022394615343796904, 15);

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
