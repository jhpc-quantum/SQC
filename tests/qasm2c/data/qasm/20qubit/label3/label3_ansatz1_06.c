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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -3.0885833731510433, 0);
  sqcRZGate(q, -1.1775410217020044, 0);
  sqcRYGate(q, -3.045030626003878, 1);
  sqcRZGate(q, -0.38842768394376836, 1);
  sqcRYGate(q, -0.9032377832846907, 2);
  sqcRZGate(q, 3.127618984763669, 2);
  sqcRYGate(q, 1.5152699822237332, 3);
  sqcRZGate(q, 1.6513474250504352, 3);
  sqcRYGate(q, 2.5338080067520714, 4);
  sqcRZGate(q, -0.6912028183333998, 4);
  sqcRYGate(q, 1.651908339584697, 5);
  sqcRZGate(q, -3.112727394580089, 5);
  sqcRYGate(q, 1.6737400838127254, 6);
  sqcRZGate(q, -1.5092189105843845, 6);
  sqcRYGate(q, 1.5705775130995718, 7);
  sqcRZGate(q, 3.1379774181429347, 7);
  sqcRYGate(q, -0.8520415424138986, 8);
  sqcRZGate(q, 3.0895799231328054, 8);
  sqcRYGate(q, 1.551794360004175, 9);
  sqcRZGate(q, -2.9885444293787478, 9);
  sqcRYGate(q, 1.5835488350904363, 10);
  sqcRZGate(q, 3.0530207762254578, 10);
  sqcRYGate(q, 2.7844057853302915, 11);
  sqcRZGate(q, 1.1395885008636721, 11);
  sqcRYGate(q, 1.5038089144173383, 12);
  sqcRZGate(q, 0.9675950567948386, 12);
  sqcRYGate(q, 2.884822996115042, 13);
  sqcRZGate(q, 1.302860290567497, 13);
  sqcRYGate(q, 1.3701435790394254, 14);
  sqcRZGate(q, -3.127222436486831, 14);
  sqcRYGate(q, -1.4775719834812504, 15);
  sqcRZGate(q, 0.5776750387787155, 15);
  sqcRYGate(q, -0.44875038205290707, 16);
  sqcRZGate(q, 1.9830378335564411, 16);
  sqcRYGate(q, 1.488098477911029, 17);
  sqcRZGate(q, -1.3505747672516968, 17);
  sqcRYGate(q, -0.7189231067110926, 18);
  sqcRZGate(q, 1.8923249849905688, 18);
  sqcRYGate(q, -0.5808994240798325, 19);
  sqcRZGate(q, 1.9428900730554144, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5496159653108572, 0);
  sqcRZGate(q, 1.1907889151009694, 0);
  sqcRYGate(q, -1.4719041255102443, 1);
  sqcRZGate(q, 2.4460350277831346, 1);
  sqcRYGate(q, 1.5355505478694074, 2);
  sqcRZGate(q, 3.1366760695857008, 2);
  sqcRYGate(q, 2.4472982218014216, 3);
  sqcRZGate(q, 3.1007020102724905, 3);
  sqcRYGate(q, -0.3755933546105634, 4);
  sqcRZGate(q, -1.9010836013508283, 4);
  sqcRYGate(q, -1.3322531292509094, 5);
  sqcRZGate(q, -1.815743896444614, 5);
  sqcRYGate(q, 2.815664402602815, 6);
  sqcRZGate(q, -2.9154431742870677, 6);
  sqcRYGate(q, -2.9167443337555037, 7);
  sqcRZGate(q, -1.6007739734200246, 7);
  sqcRYGate(q, 1.5662115911107273, 8);
  sqcRZGate(q, 0.0036103355833010946, 8);
  sqcRYGate(q, -1.2107677133758319, 9);
  sqcRZGate(q, 3.1092851667025867, 9);
  sqcRYGate(q, 1.6385899807072146, 10);
  sqcRZGate(q, -0.3387007158518106, 10);
  sqcRYGate(q, 1.2659376767851345, 11);
  sqcRZGate(q, -3.138076096831309, 11);
  sqcRYGate(q, -1.8234572203505925, 12);
  sqcRZGate(q, -1.5455237962332364, 12);
  sqcRYGate(q, -1.6593629739783067, 13);
  sqcRZGate(q, -1.5815402286649762, 13);
  sqcRYGate(q, -1.5350689911451534, 14);
  sqcRZGate(q, 0.0694956299874656, 14);
  sqcRYGate(q, 3.123685881129583, 15);
  sqcRZGate(q, -2.5016092584137954, 15);
  sqcRYGate(q, 0.24071339086083568, 16);
  sqcRZGate(q, -3.098692502911096, 16);
  sqcRYGate(q, 1.7768484170020988, 17);
  sqcRZGate(q, -0.06154054858875213, 17);
  sqcRYGate(q, -1.6044351768205027, 18);
  sqcRZGate(q, 1.5394695520055324, 18);
  sqcRYGate(q, -2.026371787389939, 19);
  sqcRZGate(q, -2.8187328973144976, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.07879111561972074, 0);
  sqcRZGate(q, 0.853545912815406, 0);
  sqcRYGate(q, -2.8126774819178473, 1);
  sqcRZGate(q, -1.075010280414778, 1);
  sqcRYGate(q, 3.004642779787176, 2);
  sqcRZGate(q, 1.649320894089348, 2);
  sqcRYGate(q, 1.5349102137736026, 3);
  sqcRZGate(q, 1.5754498450103176, 3);
  sqcRYGate(q, -2.495641448979957, 4);
  sqcRZGate(q, -1.8301874453457119, 4);
  sqcRYGate(q, 0.40910725779079105, 5);
  sqcRZGate(q, -1.4536242591477369, 5);
  sqcRYGate(q, -1.91835696518753, 6);
  sqcRZGate(q, -1.4618543665833146, 6);
  sqcRYGate(q, 1.6483449590507746, 7);
  sqcRZGate(q, 1.4452232030818692, 7);
  sqcRYGate(q, -2.0636315284482283, 8);
  sqcRZGate(q, -1.91187428709169, 8);
  sqcRYGate(q, -2.2528652966916853, 9);
  sqcRZGate(q, 3.125892485869609, 9);
  sqcRYGate(q, 3.1358821304806566, 10);
  sqcRZGate(q, -0.4747698657567055, 10);
  sqcRYGate(q, 1.765228943335642, 11);
  sqcRZGate(q, -0.07134602220704671, 11);
  sqcRYGate(q, -1.4028890871188981, 12);
  sqcRZGate(q, -2.594503450796186, 12);
  sqcRYGate(q, -0.6027709296514413, 13);
  sqcRZGate(q, -0.31177634589151904, 13);
  sqcRYGate(q, -2.7647804416607262, 14);
  sqcRZGate(q, -2.9526078677109746, 14);
  sqcRYGate(q, 1.332983120009673, 15);
  sqcRZGate(q, 2.9918726049873468, 15);
  sqcRYGate(q, -2.8343755821444567, 16);
  sqcRZGate(q, -1.7043179588472555, 16);
  sqcRYGate(q, 2.0390795715144785, 17);
  sqcRZGate(q, 2.2012242636790393, 17);
  sqcRYGate(q, -1.6204595752929192, 18);
  sqcRZGate(q, 1.702382737985646, 18);
  sqcRYGate(q, 1.3370661966842112, 19);
  sqcRZGate(q, 3.0375335053886117, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.8166438178534354, 0);
  sqcRZGate(q, 1.6977436763934124, 0);
  sqcRYGate(q, -1.584374965017712, 1);
  sqcRZGate(q, 1.54339948639933, 1);
  sqcRYGate(q, 1.5166276344890088, 2);
  sqcRZGate(q, -0.025443671001829992, 2);
  sqcRYGate(q, -1.540761875409569, 3);
  sqcRZGate(q, -0.9294259628165974, 3);
  sqcRYGate(q, -3.0972720752927967, 4);
  sqcRZGate(q, -2.6369692372314417, 4);
  sqcRYGate(q, 0.6804957054623745, 5);
  sqcRZGate(q, 1.7661168525394917, 5);
  sqcRYGate(q, 1.5686640929373246, 6);
  sqcRZGate(q, 0.023311546870610385, 6);
  sqcRYGate(q, 3.1106473371760486, 7);
  sqcRZGate(q, -1.1476400946042835, 7);
  sqcRYGate(q, 0.11009957040441876, 8);
  sqcRZGate(q, 1.7452241866412823, 8);
  sqcRYGate(q, 2.425938390889911, 9);
  sqcRZGate(q, 0.5193634562847773, 9);
  sqcRYGate(q, -0.5012489819468917, 10);
  sqcRZGate(q, -1.2065440777909406, 10);
  sqcRYGate(q, -1.4904365650248566, 11);
  sqcRZGate(q, -0.028595121403892417, 11);
  sqcRYGate(q, 0.005190984358923374, 12);
  sqcRZGate(q, -0.569239930330843, 12);
  sqcRYGate(q, -0.03147293726471496, 13);
  sqcRZGate(q, -2.828471934615975, 13);
  sqcRYGate(q, -1.5309528992352095, 14);
  sqcRZGate(q, -1.5434899224229581, 14);
  sqcRYGate(q, 1.541080712373656, 15);
  sqcRZGate(q, 0.974755305387515, 15);
  sqcRYGate(q, 1.5393135121081276, 16);
  sqcRZGate(q, -1.6315089915102154, 16);
  sqcRYGate(q, -2.3194980153210167, 17);
  sqcRZGate(q, 2.6549347112395063, 17);
  sqcRYGate(q, 1.0968280835730784, 18);
  sqcRZGate(q, -1.501703282599067, 18);
  sqcRYGate(q, 0.46530549853614006, 19);
  sqcRZGate(q, 1.875610971941545, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.7031011965198197, 0);
  sqcRZGate(q, -3.080054296700067, 0);
  sqcRYGate(q, -3.1158138944267946, 1);
  sqcRZGate(q, -1.7706060147707356, 1);
  sqcRYGate(q, 1.634242312424324, 2);
  sqcRZGate(q, -3.1286606415936022, 2);
  sqcRYGate(q, -1.7198061431100509, 3);
  sqcRZGate(q, -0.5079326185698738, 3);
  sqcRYGate(q, -0.5947989944738055, 4);
  sqcRZGate(q, -1.9142375046425966, 4);
  sqcRYGate(q, -1.575680470994861, 5);
  sqcRZGate(q, 0.009549539410519614, 5);
  sqcRYGate(q, -2.996629885115782, 6);
  sqcRZGate(q, 1.6075785273926078, 6);
  sqcRYGate(q, 3.140321589612505, 7);
  sqcRZGate(q, -1.4753511464698514, 7);
  sqcRYGate(q, 2.157180542700785, 8);
  sqcRZGate(q, -1.172951719250993, 8);
  sqcRYGate(q, -3.0138693233977856, 9);
  sqcRZGate(q, 0.6115890566716384, 9);
  sqcRYGate(q, -2.895205426316268, 10);
  sqcRZGate(q, 1.7564087093493423, 10);
  sqcRYGate(q, -1.103680489456055, 11);
  sqcRZGate(q, 0.10169515629633481, 11);
  sqcRYGate(q, -1.861423653586854, 12);
  sqcRZGate(q, -1.5562413751136077, 12);
  sqcRYGate(q, -1.6454019894887426, 13);
  sqcRZGate(q, 3.0655252100648824, 13);
  sqcRYGate(q, 3.0996920290033088, 14);
  sqcRZGate(q, -1.3843522773505959, 14);
  sqcRYGate(q, -0.32170992044765023, 15);
  sqcRZGate(q, -1.1083684581693412, 15);
  sqcRYGate(q, 2.8991153616089624, 16);
  sqcRZGate(q, 1.5859938000455647, 16);
  sqcRYGate(q, -1.5838967715175831, 17);
  sqcRZGate(q, 2.7896493382699754, 17);
  sqcRYGate(q, -1.5177640343016652, 18);
  sqcRZGate(q, -0.6198458256917333, 18);
  sqcRYGate(q, 0.9267880568564228, 19);
  sqcRZGate(q, 0.3664990792738472, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.958039992552411, 0);
  sqcRZGate(q, 2.5840060072509576, 0);
  sqcRYGate(q, -0.09022740967034526, 1);
  sqcRZGate(q, -0.9480141837449408, 1);
  sqcRYGate(q, 1.658872148770745, 2);
  sqcRZGate(q, -2.5992818043838106, 2);
  sqcRYGate(q, 1.6145407274336243, 3);
  sqcRZGate(q, 1.521417204964762, 3);
  sqcRYGate(q, 1.5728655719236573, 4);
  sqcRZGate(q, -0.5894808110086861, 4);
  sqcRYGate(q, 1.5387232158447723, 5);
  sqcRZGate(q, -1.5305338289490198, 5);
  sqcRYGate(q, -1.5844040212638069, 6);
  sqcRZGate(q, -0.7291686480557062, 6);
  sqcRYGate(q, -3.1184982227118887, 7);
  sqcRZGate(q, 2.6364511384454272, 7);
  sqcRYGate(q, 0.0577600545346133, 8);
  sqcRZGate(q, -2.9405006578017927, 8);
  sqcRYGate(q, -1.5444261540579856, 9);
  sqcRZGate(q, 2.584773899816844, 9);
  sqcRYGate(q, -3.0767804998786072, 10);
  sqcRZGate(q, 3.1059571309689855, 10);
  sqcRYGate(q, 1.385980608099878, 11);
  sqcRZGate(q, 0.014643628655471473, 11);
  sqcRYGate(q, -0.3322405388701686, 12);
  sqcRZGate(q, 3.096527850143964, 12);
  sqcRYGate(q, 1.5335460319641783, 13);
  sqcRZGate(q, -1.8820369371285386, 13);
  sqcRYGate(q, 2.7786886919336555, 14);
  sqcRZGate(q, -1.3412697218947034, 14);
  sqcRYGate(q, -1.5838023709595719, 15);
  sqcRZGate(q, -1.3885386673956834, 15);
  sqcRYGate(q, -2.3712047802257183, 16);
  sqcRZGate(q, 0.8543027090770393, 16);
  sqcRYGate(q, -1.658155886745686, 17);
  sqcRZGate(q, 1.6455617970499958, 17);
  sqcRYGate(q, 1.5529085335951782, 18);
  sqcRZGate(q, 2.209068558144814, 18);
  sqcRYGate(q, 1.3645594573319482, 19);
  sqcRZGate(q, -1.3726012275726251, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.2329898513585944, 0);
  sqcRZGate(q, 0.0074032533822419345, 0);
  sqcRYGate(q, 1.7175665881241793, 1);
  sqcRZGate(q, -3.1408068864837797, 1);
  sqcRYGate(q, 0.7784825697579087, 2);
  sqcRZGate(q, 1.3881003125133138, 2);
  sqcRYGate(q, 1.5601852398941103, 3);
  sqcRZGate(q, -1.5227727229315047, 3);
  sqcRYGate(q, 0.0009845449335410179, 4);
  sqcRZGate(q, 2.1827650376490646, 4);
  sqcRYGate(q, -0.037408298690723436, 5);
  sqcRZGate(q, -2.7875328004831745, 5);
  sqcRYGate(q, -1.5692397823792064, 6);
  sqcRZGate(q, -1.5244047791948974, 6);
  sqcRYGate(q, 0.3055430686409624, 7);
  sqcRZGate(q, -0.025049979866012425, 7);
  sqcRYGate(q, -3.123384579510157, 8);
  sqcRZGate(q, -0.7786678370725886, 8);
  sqcRYGate(q, 0.753539584202449, 9);
  sqcRZGate(q, -1.343778506093404, 9);
  sqcRYGate(q, -1.555873891673638, 10);
  sqcRZGate(q, -1.5513549245698293, 10);
  sqcRYGate(q, 0.6637791297436524, 11);
  sqcRZGate(q, 1.6230356725501753, 11);
  sqcRYGate(q, 1.4620215435130266, 12);
  sqcRZGate(q, -0.0033434510019133778, 12);
  sqcRYGate(q, -2.4452130994728227, 13);
  sqcRZGate(q, -3.0176684135879155, 13);
  sqcRYGate(q, 3.12356220569537, 14);
  sqcRZGate(q, -0.05528903995533163, 14);
  sqcRYGate(q, 1.4551544555787204, 15);
  sqcRZGate(q, 0.3651802806133383, 15);
  sqcRYGate(q, -0.057273050150227045, 16);
  sqcRZGate(q, 2.4595791697409046, 16);
  sqcRYGate(q, -1.522477676376769, 17);
  sqcRZGate(q, -2.997447074730541, 17);
  sqcRYGate(q, -2.967235596137389, 18);
  sqcRZGate(q, -0.6233914296259018, 18);
  sqcRYGate(q, -1.5413925416913354, 19);
  sqcRZGate(q, 1.7091677886727872, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.10647876484262606, 0);
  sqcRZGate(q, -2.9461796787467547, 0);
  sqcRYGate(q, -1.3496996065997084, 1);
  sqcRZGate(q, -1.6386890947148318, 1);
  sqcRYGate(q, -1.5687475010480125, 2);
  sqcRZGate(q, -0.14161364223737138, 2);
  sqcRYGate(q, -1.5265563442228904, 3);
  sqcRZGate(q, -0.5068089445842946, 3);
  sqcRYGate(q, -1.5780346703525594, 4);
  sqcRZGate(q, -1.5338558574175658, 4);
  sqcRYGate(q, -0.09528236418259972, 5);
  sqcRZGate(q, 1.0957522978387857, 5);
  sqcRYGate(q, 2.205928071539265, 6);
  sqcRZGate(q, -2.6750830841650988, 6);
  sqcRYGate(q, 1.5568142851000335, 7);
  sqcRZGate(q, -0.02240510774638201, 7);
  sqcRYGate(q, -0.8297735567977558, 8);
  sqcRZGate(q, 3.104940064861016, 8);
  sqcRYGate(q, 1.68628218445657, 9);
  sqcRZGate(q, 3.033776351901605, 9);
  sqcRYGate(q, 1.3585592059503067, 10);
  sqcRZGate(q, 3.0252077116908698, 10);
  sqcRYGate(q, 1.5178991522300134, 11);
  sqcRZGate(q, 1.462036909616366, 11);
  sqcRYGate(q, -1.3412525988239572, 12);
  sqcRZGate(q, 1.5492860468481993, 12);
  sqcRYGate(q, -1.532938410893041, 13);
  sqcRZGate(q, -1.5230050721794406, 13);
  sqcRYGate(q, -1.553785274946901, 14);
  sqcRZGate(q, -1.5764818211360332, 14);
  sqcRYGate(q, -0.5021457659573771, 15);
  sqcRZGate(q, -0.696825287961125, 15);
  sqcRYGate(q, -1.3518644362421883, 16);
  sqcRZGate(q, -0.1643400360252163, 16);
  sqcRYGate(q, -0.24690457108563724, 17);
  sqcRZGate(q, -2.954040426975087, 17);
  sqcRYGate(q, -2.2604213240631603, 18);
  sqcRZGate(q, 0.6168758819385483, 18);
  sqcRYGate(q, -1.5357950090067691, 19);
  sqcRZGate(q, -0.8095305820276778, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5776054466553973, 0);
  sqcRZGate(q, -1.5507283851453575, 0);
  sqcRYGate(q, 1.5692454657217043, 1);
  sqcRZGate(q, 3.0658472018858935, 1);
  sqcRYGate(q, -0.0005276658637532279, 2);
  sqcRZGate(q, -1.3538033463628913, 2);
  sqcRYGate(q, -3.105856106496401, 3);
  sqcRZGate(q, -2.9903928541470375, 3);
  sqcRYGate(q, -0.06063774201859918, 4);
  sqcRZGate(q, -1.6140541368504768, 4);
  sqcRYGate(q, -3.122913529893971, 5);
  sqcRZGate(q, 1.903382530895823, 5);
  sqcRYGate(q, 0.02290486822704718, 6);
  sqcRZGate(q, -2.2994315647599755, 6);
  sqcRYGate(q, -3.0000622134597945, 7);
  sqcRZGate(q, -0.9212284588754367, 7);
  sqcRYGate(q, 3.02440563268339, 8);
  sqcRZGate(q, -0.2372677193715331, 8);
  sqcRYGate(q, -3.0072619422012052, 9);
  sqcRZGate(q, 3.1076665760469564, 9);
  sqcRYGate(q, -0.5543794477439148, 10);
  sqcRZGate(q, -2.6914676043194103, 10);
  sqcRYGate(q, -2.7267273999207524, 11);
  sqcRZGate(q, -2.9639453827515965, 11);
  sqcRYGate(q, 0.087954504345768, 12);
  sqcRZGate(q, 3.0194361440344646, 12);
  sqcRYGate(q, -0.44130894066841986, 13);
  sqcRZGate(q, -0.13068455058498338, 13);
  sqcRYGate(q, -2.530888504367916, 14);
  sqcRZGate(q, 2.8660801689992774, 14);
  sqcRYGate(q, 0.16549958824738936, 15);
  sqcRZGate(q, 1.3972946955552148, 15);
  sqcRYGate(q, -0.1532877119488072, 16);
  sqcRZGate(q, -2.802059356734063, 16);
  sqcRYGate(q, -0.018459884118443348, 17);
  sqcRZGate(q, 1.405752620782166, 17);
  sqcRYGate(q, -1.5020847304095675, 18);
  sqcRZGate(q, 1.8437859782549015, 18);
  sqcRYGate(q, 0.004602412563868134, 19);
  sqcRZGate(q, 2.571821241108786, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.6624098624287218, 0);
  sqcRZGate(q, 0.6993877663503185, 0);
  sqcRYGate(q, -0.9994198969377068, 1);
  sqcRZGate(q, 2.301936067250942, 1);
  sqcRYGate(q, 3.0473681224280766, 2);
  sqcRZGate(q, -2.3629637107013046, 2);
  sqcRYGate(q, -1.570916172958885, 3);
  sqcRZGate(q, -2.4412738412923454, 3);
  sqcRYGate(q, 1.6599459307941777, 4);
  sqcRZGate(q, 0.7298614939965162, 4);
  sqcRYGate(q, -0.24783105039695208, 5);
  sqcRZGate(q, -1.2956465824052514, 5);
  sqcRYGate(q, -3.0894516281150115, 6);
  sqcRZGate(q, 0.41353761836715375, 6);
  sqcRYGate(q, 0.06988364967898916, 7);
  sqcRZGate(q, 0.021338335445800993, 7);
  sqcRYGate(q, 2.5737145345649464, 8);
  sqcRZGate(q, -1.0513704175910912, 8);
  sqcRYGate(q, -1.2559630102023789, 9);
  sqcRZGate(q, -0.8508580839086726, 9);
  sqcRYGate(q, 2.8343838649788986, 10);
  sqcRZGate(q, 2.6315104133925287, 10);
  sqcRYGate(q, 2.828182270539259, 11);
  sqcRZGate(q, 2.582955070630024, 11);
  sqcRYGate(q, 1.8799351360528753, 12);
  sqcRZGate(q, -0.924681922477805, 12);
  sqcRYGate(q, -1.5791752086173931, 13);
  sqcRZGate(q, 2.274083551747573, 13);
  sqcRYGate(q, -0.3376818075056063, 14);
  sqcRZGate(q, 2.545555180586778, 14);
  sqcRYGate(q, -3.1017959205332097, 15);
  sqcRZGate(q, 0.46952484624986557, 15);
  sqcRYGate(q, -1.0118417509862478, 16);
  sqcRZGate(q, -0.9886179127424704, 16);
  sqcRYGate(q, 0.8721383136131373, 17);
  sqcRZGate(q, -1.4077023535212128, 17);
  sqcRYGate(q, 2.0485462572714646, 18);
  sqcRZGate(q, -0.006037996251874844, 18);
  sqcRYGate(q, 0.70043929350578, 19);
  sqcRZGate(q, 1.9012805332103202, 19);

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
