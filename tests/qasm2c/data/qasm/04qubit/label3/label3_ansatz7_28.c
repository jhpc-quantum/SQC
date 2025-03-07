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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.9524651248576594, 0);
  sqcRYGate(q, -1.0915662974556957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11789682387391467, 0);
  sqcRYGate(q, -2.560289373794491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0150582070846736, 0);
  sqcRYGate(q, -3.095493988976297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6121897745511513, 0);
  sqcRYGate(q, -1.3617916376330792, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.22315351846415918, 0);
  sqcRYGate(q, -0.5049795851748495, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7572265776606608, 0);
  sqcRYGate(q, 2.932079149848705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.14379745040528988, 1);
  sqcRYGate(q, 0.5555060564636737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2251981957799751, 1);
  sqcRYGate(q, 1.5557522749489312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9276793724840813, 1);
  sqcRYGate(q, 0.5220559799899172, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4464041685576667, 1);
  sqcRYGate(q, 2.367233408274831, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6629968129671298, 2);
  sqcRYGate(q, -2.7688232454435466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.120669062106104, 2);
  sqcRYGate(q, 2.219589887138983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0135725866641452, 0);
  sqcRYGate(q, -0.4303809791068567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.005537891296278, 0);
  sqcRYGate(q, 0.8277998307021582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29691451921534273, 0);
  sqcRYGate(q, 2.1321356243011387, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.148946751869745, 0);
  sqcRYGate(q, -2.668649899790988, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6530932352586234, 0);
  sqcRYGate(q, -2.8029666354608924, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.915576699562858, 0);
  sqcRYGate(q, 2.2000798998622706, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7992707349147574, 1);
  sqcRYGate(q, -2.02269129305881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5218736363335914, 1);
  sqcRYGate(q, 0.9448460717329814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.377003040777039, 1);
  sqcRYGate(q, -0.30263195288139855, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.170581893084413, 1);
  sqcRYGate(q, 1.9751981059111765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.516592605749437, 2);
  sqcRYGate(q, 2.3496809055435572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1747268119523495, 2);
  sqcRYGate(q, -1.8301732698621924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.095981943313958, 0);
  sqcRYGate(q, 0.8618405571858041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8125515746899552, 0);
  sqcRYGate(q, 1.1506064447647049, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.127024607105997, 0);
  sqcRYGate(q, 1.3538334867453372, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4310069318955252, 0);
  sqcRYGate(q, 0.016882397247835502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8324888552279792, 0);
  sqcRYGate(q, 1.0318683376231255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9432771451509738, 0);
  sqcRYGate(q, -0.6954922615118395, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7609542928025845, 1);
  sqcRYGate(q, -1.285606691176496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4908286738114873, 1);
  sqcRYGate(q, -0.09039059817710657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.692142526962367, 1);
  sqcRYGate(q, -1.0396994330730314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7782384300016735, 1);
  sqcRYGate(q, 1.418977912188227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1331602759752895, 2);
  sqcRYGate(q, -1.90476141221529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8632266196749074, 2);
  sqcRYGate(q, 2.926756356854335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.463948059970906, 0);
  sqcRYGate(q, -0.2948165828492079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0145245801377305, 0);
  sqcRYGate(q, 0.30541530924067367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.794871147682632, 0);
  sqcRYGate(q, -2.949303335877342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7353458975150595, 0);
  sqcRYGate(q, -0.03584494685925596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6912292032456184, 0);
  sqcRYGate(q, 0.042408813983683125, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07765557837333503, 0);
  sqcRYGate(q, 2.8889678981621207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1373312399852438, 1);
  sqcRYGate(q, -2.807460581294185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9643055172013915, 1);
  sqcRYGate(q, -2.7646692395320414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2576812817669856, 1);
  sqcRYGate(q, 0.27444325145332904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6799392022569635, 1);
  sqcRYGate(q, 2.9192586283172104, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.321291584369295, 2);
  sqcRYGate(q, 1.0379246489924672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1476217343560817, 2);
  sqcRYGate(q, 1.6960464999158036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8423135945392062, 0);
  sqcRYGate(q, -0.7435890697776308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8288202065631372, 0);
  sqcRYGate(q, -0.04600115963853124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8622648857808204, 0);
  sqcRYGate(q, -1.3772423306996444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1125440641090787, 0);
  sqcRYGate(q, 2.8430623867385942, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.142190725277214, 0);
  sqcRYGate(q, 2.993971756593905, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3576552571969887, 0);
  sqcRYGate(q, 0.9817911375524679, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4765043504940233, 1);
  sqcRYGate(q, 2.134366049803565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3684205383405483, 1);
  sqcRYGate(q, -0.8324049664803745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7075663854039238, 1);
  sqcRYGate(q, -0.682777004834878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3302435750090864, 1);
  sqcRYGate(q, -3.0079188580534812, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.015597350171221437, 2);
  sqcRYGate(q, 0.975582996309976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5396656609664965, 2);
  sqcRYGate(q, 2.131952486408224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.389698018274365, 0);
  sqcRYGate(q, -3.1091457941496667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2096317670574521, 0);
  sqcRYGate(q, -1.147491887742775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4328451339857544, 0);
  sqcRYGate(q, -2.113731677689538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8869307615679631, 0);
  sqcRYGate(q, 3.0239865221383013, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7103839548058453, 0);
  sqcRYGate(q, -2.1462132328318013, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4162414043033103, 0);
  sqcRYGate(q, 2.500075087815484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1995782669304221, 1);
  sqcRYGate(q, -1.4371987017456314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7761820428177915, 1);
  sqcRYGate(q, -0.2791942395446485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7127524050768783, 1);
  sqcRYGate(q, 2.2510067850476894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8731948368160827, 1);
  sqcRYGate(q, -0.3303088673271324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.087098588803719, 2);
  sqcRYGate(q, 0.4087900334947756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.887171096506588, 2);
  sqcRYGate(q, -3.0049893867191204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5847379310486236, 0);
  sqcRYGate(q, 1.9135265193122422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5581016500767553, 0);
  sqcRYGate(q, 0.4710059923026125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.32064984185677226, 0);
  sqcRYGate(q, -0.6020996874572224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5383124582392673, 0);
  sqcRYGate(q, -1.5019306501400669, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2088306244147375, 0);
  sqcRYGate(q, 2.0576976787617762, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1823487892342941, 0);
  sqcRYGate(q, 1.2172386446887358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6238024399607649, 1);
  sqcRYGate(q, 1.3380764557201512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09244450346826233, 1);
  sqcRYGate(q, -2.7944586538634613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.819272473665649, 1);
  sqcRYGate(q, 1.0268568857365672, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1979137561888797, 1);
  sqcRYGate(q, -0.3920326631851448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.35095063778618574, 2);
  sqcRYGate(q, -1.9613598251134334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8802099324849, 2);
  sqcRYGate(q, 1.1604988874379971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6532982880998843, 0);
  sqcRYGate(q, 2.5659431805152186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5057882618731986, 0);
  sqcRYGate(q, 0.9042619367164774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7496513150795819, 0);
  sqcRYGate(q, 0.24531107439969022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4039748289906577, 0);
  sqcRYGate(q, -0.26305578451274947, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.674444340191671, 0);
  sqcRYGate(q, 2.2127771984078732, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8400564213180077, 0);
  sqcRYGate(q, -2.495271369226171, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0699183527674774, 1);
  sqcRYGate(q, 1.9075017241607446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7498894951190707, 1);
  sqcRYGate(q, 0.71266750099345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8675258532874963, 1);
  sqcRYGate(q, -1.2891446032877854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5056881557854194, 1);
  sqcRYGate(q, 0.7651458716782171, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8444405753808231, 2);
  sqcRYGate(q, 2.1198991231042914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3056020600228404, 2);
  sqcRYGate(q, 0.05518117607470607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0899240380046202, 0);
  sqcRYGate(q, -0.2078641201461695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8731802025794693, 0);
  sqcRYGate(q, -0.033917288414973434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5899682301585237, 0);
  sqcRYGate(q, -2.6452406515796603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7012848256190739, 0);
  sqcRYGate(q, 1.5805583078736745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6360207894307388, 0);
  sqcRYGate(q, -0.18908108842282698, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9193247295018093, 0);
  sqcRYGate(q, -1.0382092749645846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7893013766258636, 1);
  sqcRYGate(q, -3.1213119429953893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4102888765301296, 1);
  sqcRYGate(q, -0.5881922134709834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8681758354729097, 1);
  sqcRYGate(q, -0.9887411409748115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2156664811894944, 1);
  sqcRYGate(q, 2.2341087730556386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1042053239771279, 2);
  sqcRYGate(q, 0.12840787582854093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.000397919796154, 2);
  sqcRYGate(q, 2.2746630129193646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9900427844177973, 0);
  sqcRYGate(q, 1.13951324655903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.877184766368968, 0);
  sqcRYGate(q, -2.58366624792833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7972358294109716, 0);
  sqcRYGate(q, 0.8150651378548192, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7494191008290835, 0);
  sqcRYGate(q, -0.9509469399666903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1358053063857745, 0);
  sqcRYGate(q, 0.32028346760727994, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.249099482659553, 0);
  sqcRYGate(q, 1.1062619540964342, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1089879923693222, 1);
  sqcRYGate(q, 1.9781475789217637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10636110589735717, 1);
  sqcRYGate(q, -0.7649939090791253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1404852580163687, 1);
  sqcRYGate(q, 2.214714964384854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9495798564051341, 1);
  sqcRYGate(q, -2.6422491831219235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9180564275195, 2);
  sqcRYGate(q, -1.1912062396553682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9448919726980582, 2);
  sqcRYGate(q, 0.05942528678283633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.040114617354351, 0);
  sqcRYGate(q, -1.9591927012000443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0402545077895096, 0);
  sqcRYGate(q, 0.8668252646650483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1639162178761655, 0);
  sqcRYGate(q, -1.291374136762876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9976221722518548, 0);
  sqcRYGate(q, 0.2447629173450112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8252440909856265, 0);
  sqcRYGate(q, -0.5622547541989931, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7963056847147635, 0);
  sqcRYGate(q, -2.995349954983255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3065659096098616, 1);
  sqcRYGate(q, -0.06978685837400907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.512498238486994, 1);
  sqcRYGate(q, -0.17704476705092811, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3135923572858434, 1);
  sqcRYGate(q, 2.9115456270034743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6292950612728783, 1);
  sqcRYGate(q, -1.2223998168086394, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2688954930856804, 2);
  sqcRYGate(q, 2.7654211548077603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7581034328620126, 2);
  sqcRYGate(q, 0.8916869072945662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7460105302254829, 0);
  sqcRYGate(q, 1.876441334845667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4601437023144386, 0);
  sqcRYGate(q, -2.945133697971734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8447612003201503, 0);
  sqcRYGate(q, 1.7967613282602064, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1201669801397434, 0);
  sqcRYGate(q, 3.0600307137373006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9038456635420564, 0);
  sqcRYGate(q, -2.1074607012579234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.26827576828461686, 0);
  sqcRYGate(q, -1.2327471766379592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.843620805769613, 1);
  sqcRYGate(q, -1.4430314451523492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.862432359890093, 1);
  sqcRYGate(q, -0.9145356543711194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46885340309785756, 1);
  sqcRYGate(q, -3.0271674800402235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.679262574900342, 1);
  sqcRYGate(q, 2.6028627835441225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1800937034869925, 2);
  sqcRYGate(q, -2.6861671001046634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6675503091983036, 2);
  sqcRYGate(q, 3.02448226323816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0439740601358154, 0);
  sqcRYGate(q, 1.1961435320231866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1154630985711178, 0);
  sqcRYGate(q, 3.00364506852998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.572283172296807, 0);
  sqcRYGate(q, -1.0291286796090164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.407575586603256, 0);
  sqcRYGate(q, 2.178410346459281, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5227282983709634, 0);
  sqcRYGate(q, 3.1394710710864975, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.739168967919456, 0);
  sqcRYGate(q, -1.0514593615329302, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6760854115995187, 1);
  sqcRYGate(q, -1.2723003860926196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0456622109717157, 1);
  sqcRYGate(q, -2.8881420152072144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0032943481731285, 1);
  sqcRYGate(q, 2.1994091023965003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2441041426237585, 1);
  sqcRYGate(q, 1.4620411711635841, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4554335973796406, 2);
  sqcRYGate(q, -1.9238414236409158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.596404591748603, 2);
  sqcRYGate(q, 1.5184213481634599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6950753712631121, 0);
  sqcRYGate(q, 1.3899625846346049, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4021987268493543, 0);
  sqcRYGate(q, 1.67414871037692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18265057871442655, 0);
  sqcRYGate(q, 2.8755655902182946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1576663906345954, 0);
  sqcRYGate(q, 0.5619052004493149, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.061459325147397, 0);
  sqcRYGate(q, 1.0892182409063231, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6176307063119514, 0);
  sqcRYGate(q, -2.080158925181243, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6953084499965576, 1);
  sqcRYGate(q, -2.887779645636814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9478895189030236, 1);
  sqcRYGate(q, -1.1699311111182655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7971975863270542, 1);
  sqcRYGate(q, 1.2249291640450144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.563783588268909, 1);
  sqcRYGate(q, 2.104673703235034, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3389296930028305, 2);
  sqcRYGate(q, 1.3937703553315108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8077923830727025, 2);
  sqcRYGate(q, -1.2708115453367475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8776233700848817, 0);
  sqcRYGate(q, -2.2372493373822397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4860093457423145, 0);
  sqcRYGate(q, -1.4172081626294224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.017479437913473284, 0);
  sqcRYGate(q, 1.1495310549390192, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3031188419721318, 0);
  sqcRYGate(q, -0.8214681884669002, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3576236889317523, 0);
  sqcRYGate(q, 0.19868456369903517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.880838006086639, 0);
  sqcRYGate(q, -1.969843369651709, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1270298382555426, 1);
  sqcRYGate(q, 0.19655995175273588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6729735974848203, 1);
  sqcRYGate(q, -0.9819877520289744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5174044843217899, 1);
  sqcRYGate(q, -2.293127202369835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2357997816357926, 1);
  sqcRYGate(q, -2.6672470769944905, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.123581473427262, 2);
  sqcRYGate(q, 0.9529078045016988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4448117479309563, 2);
  sqcRYGate(q, -0.5260084895880688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.947942054715097, 0);
  sqcRYGate(q, -1.8382424666363033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6842114442536784, 0);
  sqcRYGate(q, 1.3901866075617324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7392045810252037, 0);
  sqcRYGate(q, 1.2603846329577575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9821465574469994, 0);
  sqcRYGate(q, -0.49588241195534366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9000164769234091, 0);
  sqcRYGate(q, 1.577186847022795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.350118817771191, 0);
  sqcRYGate(q, 2.619011916351176, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3584476434450417, 1);
  sqcRYGate(q, -1.317297893558326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45471714093301663, 1);
  sqcRYGate(q, 0.5006657962465866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.057378441602106, 1);
  sqcRYGate(q, -1.8807159469126737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6149875218207517, 1);
  sqcRYGate(q, -1.3851024710470776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6604184328581201, 2);
  sqcRYGate(q, 1.491634288067418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9431908856234767, 2);
  sqcRYGate(q, -2.019783049249571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2878489475988246, 0);
  sqcRYGate(q, -1.351569538219273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.23637225807797, 0);
  sqcRYGate(q, 3.0020383427911446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.012588309449255, 0);
  sqcRYGate(q, 0.036850579228503655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0127018341947065, 0);
  sqcRYGate(q, 0.4140901355847979, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1348797519689098, 0);
  sqcRYGate(q, 0.7403810212835422, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2900540650143713, 0);
  sqcRYGate(q, -0.4767678328634016, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5506722892857391, 1);
  sqcRYGate(q, -2.9494341794025587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3275155701092194, 1);
  sqcRYGate(q, 1.7437228618663543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.184228283785195, 1);
  sqcRYGate(q, 0.8226658199823742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.712251972290363, 1);
  sqcRYGate(q, 3.135907206163085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49379674009958274, 2);
  sqcRYGate(q, 0.3388383618015896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.026798921806474, 2);
  sqcRYGate(q, -2.0473326355783916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4528030839089072, 0);
  sqcRYGate(q, -0.12422287647642172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9552892762741516, 0);
  sqcRYGate(q, -1.070270332356797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33496098906798755, 0);
  sqcRYGate(q, -2.667720082716813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.248984162341915, 0);
  sqcRYGate(q, 2.756505123303593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7214754375964058, 0);
  sqcRYGate(q, -2.5852951519879346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6360249664184057, 0);
  sqcRYGate(q, 2.68304297319911, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.40313690892421405, 1);
  sqcRYGate(q, 0.4761561739188256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6503598056359197, 1);
  sqcRYGate(q, 1.2165259380188678, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8812747894086836, 1);
  sqcRYGate(q, -0.5269627581489553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.543190924526595, 1);
  sqcRYGate(q, -0.9783701035239198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6558461514562044, 2);
  sqcRYGate(q, 2.446436982379834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.68364053339801, 2);
  sqcRYGate(q, 1.4373072776694897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.882081200648446, 0);
  sqcRYGate(q, -1.1453859223505785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9880594719032484, 0);
  sqcRYGate(q, 0.9825012070748613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.759895254416635, 0);
  sqcRYGate(q, 2.5798378485353393, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.334759141002322, 0);
  sqcRYGate(q, 0.6786081005799813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4703704631592762, 0);
  sqcRYGate(q, -2.0379219606485846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7382713728583974, 0);
  sqcRYGate(q, 1.4321317028126883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.505945445521093, 1);
  sqcRYGate(q, -2.2073526363828515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8604972425206645, 1);
  sqcRYGate(q, 2.5693785724327345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2005167374570185, 1);
  sqcRYGate(q, -3.0158765195633292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6396007519818943, 1);
  sqcRYGate(q, -0.63906319022602, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.830365632937276, 2);
  sqcRYGate(q, 1.4961219280991038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1567116121636403, 2);
  sqcRYGate(q, -0.7424951489713667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8077766052714069, 0);
  sqcRYGate(q, 1.8221398928143566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.881448674714058, 0);
  sqcRYGate(q, -1.2748799569453309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6833301756483419, 0);
  sqcRYGate(q, -1.381618320505475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.20418999752124023, 0);
  sqcRYGate(q, -2.0255554619633687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6694987158280847, 0);
  sqcRYGate(q, -3.100553250486787, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0233710261086753, 0);
  sqcRYGate(q, -2.7265000428342754, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3160707149117391, 1);
  sqcRYGate(q, -2.179058357751407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0506035021154068, 1);
  sqcRYGate(q, 0.5370685600916586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7725377911864177, 1);
  sqcRYGate(q, -2.881406618871405, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1128982473331153, 1);
  sqcRYGate(q, 2.811839963169298, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9054965902172301, 2);
  sqcRYGate(q, -1.870381146218476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07064617977765586, 2);
  sqcRYGate(q, 0.6514235320466808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.050939975008462, 0);
  sqcRYGate(q, -0.4745322637106956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3223686376592256, 0);
  sqcRYGate(q, -1.580997879171365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4049842898617406, 0);
  sqcRYGate(q, -0.18240758420822975, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.35311329556756543, 0);
  sqcRYGate(q, 1.7449250902580142, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.831266051244851, 0);
  sqcRYGate(q, -0.02377664449854145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2875443357117458, 0);
  sqcRYGate(q, 2.2368065139758198, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.770718628808992, 1);
  sqcRYGate(q, -0.5399435321188057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48344082405901617, 1);
  sqcRYGate(q, 3.13759093850067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.830836605055836, 1);
  sqcRYGate(q, 2.3294308038678198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6723378221147751, 1);
  sqcRYGate(q, 2.743021876560409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.718058644385344, 2);
  sqcRYGate(q, -0.85882974156272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22784959651085318, 2);
  sqcRYGate(q, -2.0209982541731737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8940328521522627, 0);
  sqcRYGate(q, 0.4784938367883731, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5753085428011384, 0);
  sqcRYGate(q, 2.838945156585936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.765876232726888, 0);
  sqcRYGate(q, 1.0306222226031991, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.019116713814805272, 0);
  sqcRYGate(q, 2.042703328864021, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.25956312069718646, 0);
  sqcRYGate(q, 2.531704936760157, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0444686899020391, 0);
  sqcRYGate(q, -2.322982431653034, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5143408533679565, 1);
  sqcRYGate(q, 1.369325391686654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.067054598033942, 1);
  sqcRYGate(q, -1.7741496018414764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.679310591013904, 1);
  sqcRYGate(q, -2.4740272380446626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0631175466801857, 1);
  sqcRYGate(q, -2.60392692597263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4664775614649148, 2);
  sqcRYGate(q, 0.3062010107270563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.995337651658211, 2);
  sqcRYGate(q, -1.8053799878380814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4170279803744457, 0);
  sqcRYGate(q, 0.6695129580728993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08011356302069877, 0);
  sqcRYGate(q, -0.8173103428445219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0266228695493187, 0);
  sqcRYGate(q, -1.902231000812593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0111007137149897, 0);
  sqcRYGate(q, 1.723294019214091, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9698192464496866, 0);
  sqcRYGate(q, -2.1675701725609984, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7900189668229847, 0);
  sqcRYGate(q, 1.7131580730707479, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6170175334229706, 1);
  sqcRYGate(q, 2.8286450754255017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8140231388614918, 1);
  sqcRYGate(q, -2.3805649232842363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03203765669772807, 1);
  sqcRYGate(q, -0.02632615904788871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.127268766881021, 1);
  sqcRYGate(q, 1.2460723229683115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0373603712922606, 2);
  sqcRYGate(q, 2.9643512003140313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.23527605844731, 2);
  sqcRYGate(q, 1.5954528591946158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2709462835459764, 0);
  sqcRYGate(q, -2.3539140180852143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05478959994569435, 0);
  sqcRYGate(q, -0.8410282279107264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.520446151747492, 0);
  sqcRYGate(q, -1.7466190608858172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.940915743790028, 0);
  sqcRYGate(q, 2.541503750715142, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8948329307069378, 0);
  sqcRYGate(q, 0.011474677953877688, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.735772871539858, 0);
  sqcRYGate(q, -1.4601076429569957, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9268761192734125, 1);
  sqcRYGate(q, 2.8316148074153737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.594830802077338, 1);
  sqcRYGate(q, -0.6866767643731827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11508091017319183, 1);
  sqcRYGate(q, -1.7524321893391979, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.023136942259164, 1);
  sqcRYGate(q, -0.11951429253923886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1341010203657262, 2);
  sqcRYGate(q, 0.1520416701024807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6969271956965701, 2);
  sqcRYGate(q, 0.10859101468780098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.643385237058705, 0);
  sqcRYGate(q, 0.8975701831830563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.555787945149488, 0);
  sqcRYGate(q, -1.7113652956402368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0872086650016382, 0);
  sqcRYGate(q, 2.323619102761096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24113546897200394, 0);
  sqcRYGate(q, 0.5210674370115331, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5306617091738186, 0);
  sqcRYGate(q, -0.13820694166239011, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.243393410842474, 0);
  sqcRYGate(q, -1.1722275814601844, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6122084859617134, 1);
  sqcRYGate(q, -0.8930724179952252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.404424062055602, 1);
  sqcRYGate(q, -0.9685484465593751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4948968114072292, 1);
  sqcRYGate(q, 0.284641393623321, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.488272536306667, 1);
  sqcRYGate(q, 0.31623808625420397, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.839939851003905, 2);
  sqcRYGate(q, -3.114955863701811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3479109926486488, 2);
  sqcRYGate(q, -0.21307416876671592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8819447663707676, 0);
  sqcRYGate(q, -2.725702498935417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5059207392999623, 0);
  sqcRYGate(q, 1.3610925035110852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6714164725502956, 0);
  sqcRYGate(q, -0.6139907536068973, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4950290673792586, 0);
  sqcRYGate(q, -2.20131136151649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.749334178808288, 0);
  sqcRYGate(q, -0.05429389936064491, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.363382120608852, 0);
  sqcRYGate(q, -3.1201867367619265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.546282004791709, 1);
  sqcRYGate(q, 1.6933772259020698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36520065980687166, 1);
  sqcRYGate(q, -0.37080002571611304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.793859071068597, 1);
  sqcRYGate(q, 1.2928624015198737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.26933171933415606, 1);
  sqcRYGate(q, 0.09291193466154282, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1721518260859605, 2);
  sqcRYGate(q, 2.048406337227256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.556952894736528, 2);
  sqcRYGate(q, -1.2717508968429112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6216903328517626, 0);
  sqcRYGate(q, 0.08382923402349145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2716166422922879, 0);
  sqcRYGate(q, -2.6553049646355222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8919837722270083, 0);
  sqcRYGate(q, -2.9756321027001325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.938127269013034, 0);
  sqcRYGate(q, -2.3073537525321957, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6562415605114068, 0);
  sqcRYGate(q, -2.9997318677488285, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7961931083732967, 0);
  sqcRYGate(q, 1.6797605635413864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2132179924479325, 1);
  sqcRYGate(q, 1.8849323914021578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.615606334410363, 1);
  sqcRYGate(q, -2.57132440090692, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.401428551677352, 1);
  sqcRYGate(q, -2.852970776256292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.660282935270288, 1);
  sqcRYGate(q, 1.3364219525576433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7612405351138376, 2);
  sqcRYGate(q, 0.39007358184677915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5108650763538818, 2);
  sqcRYGate(q, 2.2304553953804094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.023300305175394, 0);
  sqcRYGate(q, -2.188670211400379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35493386580418873, 0);
  sqcRYGate(q, -2.5535931982835827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6649763144547762, 0);
  sqcRYGate(q, -2.8880778872794823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5295629219798448, 0);
  sqcRYGate(q, -2.084783849186498, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0128154779671208, 0);
  sqcRYGate(q, 0.7051586764877005, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4470813876346063, 0);
  sqcRYGate(q, 0.9182197141391071, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1739482595735597, 1);
  sqcRYGate(q, -3.058736921392476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.358214325206354, 1);
  sqcRYGate(q, -2.5927032121662803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1450525852356623, 1);
  sqcRYGate(q, 0.990940795347786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9484018175516167, 1);
  sqcRYGate(q, -2.8824690140072486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0599014404553566, 2);
  sqcRYGate(q, -2.729947443229877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6487473236084402, 2);
  sqcRYGate(q, -2.8850269998241704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.722265544639459, 0);
  sqcRYGate(q, 0.6582221426805565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1952268799105914, 0);
  sqcRYGate(q, -0.9270357059274444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8439663018058425, 0);
  sqcRYGate(q, 0.03744215125914252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28885568616671214, 0);
  sqcRYGate(q, 2.622486124931157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5259561531175789, 0);
  sqcRYGate(q, -1.1288257140686406, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.05089764937387731, 0);
  sqcRYGate(q, -0.014853835048185358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.51096946254683, 1);
  sqcRYGate(q, -0.8550999535872004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3305914474920886, 1);
  sqcRYGate(q, 0.6671400331759418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5719376555590011, 1);
  sqcRYGate(q, -2.489456327451754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5403450107900607, 1);
  sqcRYGate(q, 0.9840978186457843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.976158584800072, 2);
  sqcRYGate(q, -2.250738498326511, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.583372473464966, 2);
  sqcRYGate(q, -0.8674575574340038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47730473317453537, 0);
  sqcRYGate(q, -1.8070720914575684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2514227447813606, 0);
  sqcRYGate(q, 1.9326525277278486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.951865279172777, 0);
  sqcRYGate(q, -0.37581306060439523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5228333915621717, 0);
  sqcRYGate(q, -1.4679604956995196, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5936876485874265, 0);
  sqcRYGate(q, -1.012520202065411, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.007366368567065962, 0);
  sqcRYGate(q, -3.1351956233120584, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.035007682949255, 1);
  sqcRYGate(q, 1.714583166946986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1526572371690655, 1);
  sqcRYGate(q, 0.1562468315799892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8883236771568894, 1);
  sqcRYGate(q, -0.33554882169028843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0425509685394108, 1);
  sqcRYGate(q, -0.6926105707487462, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.111092201690425, 2);
  sqcRYGate(q, 0.3207073420929625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4884290320866662, 2);
  sqcRYGate(q, 2.535438138723912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5074767642793012, 0);
  sqcRYGate(q, -0.3191410831534185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1257065362716665, 0);
  sqcRYGate(q, 0.06809450787024662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9634345530493182, 0);
  sqcRYGate(q, 0.9017649072334324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0838278782465247, 0);
  sqcRYGate(q, -0.3797741379417099, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8847003383283578, 0);
  sqcRYGate(q, -0.9491299050694657, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6168256072590688, 0);
  sqcRYGate(q, 2.0856112075116746, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3759337718660123, 1);
  sqcRYGate(q, 1.9943369904415704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.377344154977103, 1);
  sqcRYGate(q, 3.0740888874370342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8099598806469714, 1);
  sqcRYGate(q, -0.27343018688308035, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9818701375656289, 1);
  sqcRYGate(q, 2.242937986076221, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0604435106536, 2);
  sqcRYGate(q, -1.0941159229248856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6364204050244164, 2);
  sqcRYGate(q, -0.10378725152147082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1590400689687, 0);
  sqcRYGate(q, -0.8161159671557092, 1);
  sqcRYGate(q, 2.0629293709673444, 2);
  sqcRYGate(q, -2.6923361594336503, 3);

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
