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

  sqcRYGate(q, 3.128825357789072, 0);
  sqcRYGate(q, 1.3868723781470809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.065054368881327, 0);
  sqcRYGate(q, -0.8992800248003257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5511930001195234, 0);
  sqcRYGate(q, -0.03077604151982759, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4815370456574346, 0);
  sqcRYGate(q, 1.1674345702583615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8585109130358872, 0);
  sqcRYGate(q, 0.6095129366193737, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.24003413992346181, 0);
  sqcRYGate(q, -0.015825898744142475, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5476367500821961, 1);
  sqcRYGate(q, -0.7740481578547547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9707427641432194, 1);
  sqcRYGate(q, -0.7774838040163834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2820924184098546, 1);
  sqcRYGate(q, 1.2733568979905572, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6667101481108917, 1);
  sqcRYGate(q, -1.285860157901289, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7399481411213045, 2);
  sqcRYGate(q, 1.273254793021222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06526269292297648, 2);
  sqcRYGate(q, -0.3117294521876701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1139984861047507, 0);
  sqcRYGate(q, 1.1691124630860397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25107688027297154, 0);
  sqcRYGate(q, -2.3377766740736146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6250504288505305, 0);
  sqcRYGate(q, 1.0870739495310127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2741774322780863, 0);
  sqcRYGate(q, -0.8550006525136569, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.31948785290273435, 0);
  sqcRYGate(q, -2.4544545467785026, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.112479145004529, 0);
  sqcRYGate(q, 2.6648182157213345, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7077174982468133, 1);
  sqcRYGate(q, -1.3367853367166196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5255396873375147, 1);
  sqcRYGate(q, 1.9000636112000588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9068097324551374, 1);
  sqcRYGate(q, 2.084104514108638, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7319979114230364, 1);
  sqcRYGate(q, -0.3061253562413559, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6128439124142675, 2);
  sqcRYGate(q, 1.7907957316430791, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2746427095819488, 2);
  sqcRYGate(q, 0.006231568000023557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06065843309993202, 0);
  sqcRYGate(q, -2.665336680209005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4950240489727884, 0);
  sqcRYGate(q, -2.660030451811586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19579948224160015, 0);
  sqcRYGate(q, -0.26843764339201914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.30113724325797403, 0);
  sqcRYGate(q, 0.7137471271613638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6836473669592216, 0);
  sqcRYGate(q, -2.3115663609717476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1199507053649302, 0);
  sqcRYGate(q, -2.9711227242793066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6734774229545516, 1);
  sqcRYGate(q, -1.5751240956872676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.594383536923159, 1);
  sqcRYGate(q, 2.0407943536619335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5116121809196414, 1);
  sqcRYGate(q, 1.163087762206743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5262453303192105, 1);
  sqcRYGate(q, 0.020127185215851284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7305797848970648, 2);
  sqcRYGate(q, -2.295278575781167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.434939441578477, 2);
  sqcRYGate(q, 0.12045659931832865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.483957728432081, 0);
  sqcRYGate(q, 1.1632293601859143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6275633992986531, 0);
  sqcRYGate(q, -1.3024313749914178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.042428203645960984, 0);
  sqcRYGate(q, -2.9131414102408772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6505283965596913, 0);
  sqcRYGate(q, -2.296838507897362, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.872228955445523, 0);
  sqcRYGate(q, 0.3860902686073038, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.757414674183687, 0);
  sqcRYGate(q, -1.8283959604800493, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0041326084927356, 1);
  sqcRYGate(q, -2.119767962390614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8474014283172258, 1);
  sqcRYGate(q, 1.3110789024245222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.811806878569536, 1);
  sqcRYGate(q, -0.5654142227071898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.87503832857958, 1);
  sqcRYGate(q, 2.531618645391069, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9604572965939427, 2);
  sqcRYGate(q, 1.5199820216359998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2758702365833818, 2);
  sqcRYGate(q, 1.3291486027061818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03604245708890997, 0);
  sqcRYGate(q, 1.7399991475906391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05168114684216932, 0);
  sqcRYGate(q, -2.8238154091605066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.626847710769641, 0);
  sqcRYGate(q, -1.6860103107639417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.192795862506426, 0);
  sqcRYGate(q, -1.272624841860563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.035228531748825544, 0);
  sqcRYGate(q, -1.7854229663035213, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9998669339516137, 0);
  sqcRYGate(q, -2.03791943690704, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.280676575183697, 1);
  sqcRYGate(q, 2.704604399311726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.671018813589991, 1);
  sqcRYGate(q, 1.3782673045363378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12976924939648704, 1);
  sqcRYGate(q, -0.6230209034062102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.044950416925686326, 1);
  sqcRYGate(q, 3.115883416521481, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3527501444861083, 2);
  sqcRYGate(q, 1.7377041976388221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4019049178951015, 2);
  sqcRYGate(q, -2.832401789213926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3672591994045034, 0);
  sqcRYGate(q, 3.116538841922776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1946341759926096, 0);
  sqcRYGate(q, -1.763649803452633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7315615992820548, 0);
  sqcRYGate(q, -2.726566477706153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.058484957058895, 0);
  sqcRYGate(q, -2.6101867259164444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9576878469091278, 0);
  sqcRYGate(q, 1.7663244662077489, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4925550404150894, 0);
  sqcRYGate(q, 1.598837116531585, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1543667115926302, 1);
  sqcRYGate(q, -2.397294078354529, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.961387804239737, 1);
  sqcRYGate(q, -3.131336411967157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3778041302836979, 1);
  sqcRYGate(q, 0.3096801686334292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0141595764606133, 1);
  sqcRYGate(q, 0.2251037697526431, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1885237506256034, 2);
  sqcRYGate(q, 1.9536860617222445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.043799382565356204, 2);
  sqcRYGate(q, -0.6368657984828391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4057753126031214, 0);
  sqcRYGate(q, -0.6977564318051046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9998970424788474, 0);
  sqcRYGate(q, -1.812207857957452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9457724984283513, 0);
  sqcRYGate(q, 0.7411297886460257, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2136058093442532, 0);
  sqcRYGate(q, -2.2412917611762464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.444040695394815, 0);
  sqcRYGate(q, -2.9236940310151613, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9779905255328386, 0);
  sqcRYGate(q, -1.8584815227560951, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1656418426232076, 1);
  sqcRYGate(q, 0.3476086731211696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.33984660493775, 1);
  sqcRYGate(q, 2.474627105732685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6459640424826203, 1);
  sqcRYGate(q, -1.954532966745588, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1632861599037279, 1);
  sqcRYGate(q, 2.5323959632572812, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5293305581700845, 2);
  sqcRYGate(q, 1.8750586025725657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9771171773116878, 2);
  sqcRYGate(q, 2.714946340061288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.448796788544902, 0);
  sqcRYGate(q, 1.4116549227147992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9974465513812145, 0);
  sqcRYGate(q, 1.0063091831079973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8912416690853084, 0);
  sqcRYGate(q, -3.035580110362507, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6628444010602268, 0);
  sqcRYGate(q, -1.365884386987605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.599592848463613, 0);
  sqcRYGate(q, -0.4139641573572579, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06026257267141055, 0);
  sqcRYGate(q, -0.9635592794218798, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8879323803289014, 1);
  sqcRYGate(q, 0.9780138094495867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8276221773499335, 1);
  sqcRYGate(q, 1.574388318595882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.46690255586495827, 1);
  sqcRYGate(q, -2.7610477909419147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.211316639416367, 1);
  sqcRYGate(q, -1.5882602439877602, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6253361008295617, 2);
  sqcRYGate(q, 0.6278628071697728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7885537511978193, 2);
  sqcRYGate(q, -2.823004215880583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.611467434644674, 0);
  sqcRYGate(q, -1.9086481025738173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3566568756457684, 0);
  sqcRYGate(q, -1.2116126481941096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2678962909351077, 0);
  sqcRYGate(q, -0.16344333414980827, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.072449514619738, 0);
  sqcRYGate(q, -2.5303051441932145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5422352292863684, 0);
  sqcRYGate(q, 2.642679285341801, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8764446720593537, 0);
  sqcRYGate(q, 2.729861129845272, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.18730328872610974, 1);
  sqcRYGate(q, -0.43419915073152016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2921323313733395, 1);
  sqcRYGate(q, 0.10376417805113136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3031793805020353, 1);
  sqcRYGate(q, 2.139651514596383, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.009422719813908742, 1);
  sqcRYGate(q, -2.3848200803416963, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6801189544514856, 2);
  sqcRYGate(q, 2.880963628547613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.355868009465953, 2);
  sqcRYGate(q, -0.8621354551011632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2377780610424005, 0);
  sqcRYGate(q, -2.128847976563498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4597197070923675, 0);
  sqcRYGate(q, -3.116728361071751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9692620682142725, 0);
  sqcRYGate(q, -0.4657214838548766, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8030989522148966, 0);
  sqcRYGate(q, -0.9770281197184388, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.904625484793277, 0);
  sqcRYGate(q, -2.7031180493219327, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8541396546747997, 0);
  sqcRYGate(q, 0.5740489339515155, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8608449592825016, 1);
  sqcRYGate(q, 2.304805157125802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24449811124894527, 1);
  sqcRYGate(q, 0.7721391363807806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7954978382277349, 1);
  sqcRYGate(q, 0.7272292263036576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0685006008959945, 1);
  sqcRYGate(q, 1.809489958023497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.568210204931898, 2);
  sqcRYGate(q, -0.31927884965658504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0917138336231886, 2);
  sqcRYGate(q, -0.10187069808869077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3922082024943268, 0);
  sqcRYGate(q, 1.016657871724397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08178547803711916, 0);
  sqcRYGate(q, 3.017488205131652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.550131649799352, 0);
  sqcRYGate(q, -1.1961603696616137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.577620052460441, 0);
  sqcRYGate(q, 2.596852264984846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0477229565133739, 0);
  sqcRYGate(q, 1.2036326159281154, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7861319401384144, 0);
  sqcRYGate(q, -2.547037065305428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.391604581389143, 1);
  sqcRYGate(q, 0.10551629902861048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.010319877733782512, 1);
  sqcRYGate(q, 0.8872846845431859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14201312461790913, 1);
  sqcRYGate(q, 2.3154917307630227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9279794273376982, 1);
  sqcRYGate(q, 2.327872766981741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9595070954678846, 2);
  sqcRYGate(q, -2.7719123401499837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5264595033351207, 2);
  sqcRYGate(q, 2.564492217252599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7929540853175485, 0);
  sqcRYGate(q, -3.0341898218255228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1302114758917137, 0);
  sqcRYGate(q, 2.3090673486603115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5969040966654777, 0);
  sqcRYGate(q, -0.4770267455049607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3901939354049961, 0);
  sqcRYGate(q, -0.25201593363366026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0695664123917865, 0);
  sqcRYGate(q, 2.8992797945841655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1639549015800661, 0);
  sqcRYGate(q, 2.7202216777473622, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.487497027743849, 1);
  sqcRYGate(q, -2.9780759554031295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0305521679074987, 1);
  sqcRYGate(q, 1.0836342495187186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9622930163753001, 1);
  sqcRYGate(q, -0.507808399297013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24486820327644931, 1);
  sqcRYGate(q, 2.3673591285371103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.33110615247302, 2);
  sqcRYGate(q, -0.009008497430186682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7502322735472866, 2);
  sqcRYGate(q, -2.1681377794248915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1551507376362302, 0);
  sqcRYGate(q, -1.6922261236207552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2533951741425235, 0);
  sqcRYGate(q, -1.4741987205476583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3269721371976986, 0);
  sqcRYGate(q, 2.3082110549308323, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3660310779411582, 0);
  sqcRYGate(q, -2.5997981381686555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5338463996619988, 0);
  sqcRYGate(q, 0.5343303753543804, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4922936403414724, 0);
  sqcRYGate(q, -2.3707686528800505, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8843888973347256, 1);
  sqcRYGate(q, -1.609883890417193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4745752403721903, 1);
  sqcRYGate(q, 2.145081450845197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5627852665518347, 1);
  sqcRYGate(q, 1.1666705359333296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.94877580369248, 1);
  sqcRYGate(q, 0.8020615681556834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6170599168798807, 2);
  sqcRYGate(q, -0.8663764063622651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3572997044430655, 2);
  sqcRYGate(q, 1.1344373563542327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4366892661321584, 0);
  sqcRYGate(q, 0.2932888975277912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.284914430359426, 0);
  sqcRYGate(q, 1.4942538508248973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2165194728961488, 0);
  sqcRYGate(q, -0.4183292572628785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3691834771481919, 0);
  sqcRYGate(q, 2.9289043784201025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0919798550026476, 0);
  sqcRYGate(q, -1.4652370652777131, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5114624715368215, 0);
  sqcRYGate(q, 0.9405666269753565, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3956510535375808, 1);
  sqcRYGate(q, -0.9408080411279308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.688618884814409, 1);
  sqcRYGate(q, 2.492983653155428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1930984286961328, 1);
  sqcRYGate(q, 1.068159120525399, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.808113789384302, 1);
  sqcRYGate(q, -2.6583885894699155, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.641260434131898, 2);
  sqcRYGate(q, -1.053318637829053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0139381598999861, 2);
  sqcRYGate(q, -1.4518131354199522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.256268000541442, 0);
  sqcRYGate(q, 0.19631865012192762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3585333230933028, 0);
  sqcRYGate(q, -2.1315528270315833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.038588334445565, 0);
  sqcRYGate(q, -2.297585031264782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0693728814990804, 0);
  sqcRYGate(q, 2.330001059179545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.50934666391034, 0);
  sqcRYGate(q, -1.7948035117031633, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.478808225080909, 0);
  sqcRYGate(q, -2.738136105747328, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3933555114999674, 1);
  sqcRYGate(q, -1.4051238093376988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.960791588554008, 1);
  sqcRYGate(q, -1.3936979681386223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3130141966897078, 1);
  sqcRYGate(q, 1.9098018364286653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0422471820971206, 1);
  sqcRYGate(q, -2.4269711608991846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.45020688677587795, 2);
  sqcRYGate(q, -0.841138361456732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7872189162630825, 2);
  sqcRYGate(q, 0.7200236792325718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.255909363813439, 0);
  sqcRYGate(q, 2.1338173214456697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.742512575923342, 0);
  sqcRYGate(q, 2.9086470842428236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3199521937445795, 0);
  sqcRYGate(q, -2.300345587039653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.863086414151163, 0);
  sqcRYGate(q, 2.768750093512638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0008554786818984, 0);
  sqcRYGate(q, 1.4851262100209581, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0939547364471176, 0);
  sqcRYGate(q, 1.6579426666749386, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.916013995057298, 1);
  sqcRYGate(q, 0.03945200915525628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5458185468591479, 1);
  sqcRYGate(q, -0.7192105046752262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6113844621335245, 1);
  sqcRYGate(q, -1.4553303118819203, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6760865608915907, 1);
  sqcRYGate(q, 2.768189810446367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.094419836129992, 2);
  sqcRYGate(q, 0.13433815505009683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0056937988473638, 2);
  sqcRYGate(q, 0.4600027644157061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0795283975789323, 0);
  sqcRYGate(q, 1.0197330641346083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1142894087969024, 0);
  sqcRYGate(q, 0.8609788964835641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4754186647686159, 0);
  sqcRYGate(q, 2.4566399931247087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.896141194330018, 0);
  sqcRYGate(q, 0.5976641276831662, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16492778650877402, 0);
  sqcRYGate(q, -1.3001571685484303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.444695236034913, 0);
  sqcRYGate(q, 1.9515985297420864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.541260326006746, 1);
  sqcRYGate(q, 0.2827499502341338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0031915914461669, 1);
  sqcRYGate(q, -2.2060622581388447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3932899800705716, 1);
  sqcRYGate(q, -1.4906237390475932, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5787089751513271, 1);
  sqcRYGate(q, 1.609460215739614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8190999737496831, 2);
  sqcRYGate(q, 2.46939161516017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.687419558740579, 2);
  sqcRYGate(q, -2.093476826045043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7813428098250723, 0);
  sqcRYGate(q, -0.11549253395085479, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8071404147184476, 0);
  sqcRYGate(q, -2.6248632060573125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34369180393851734, 0);
  sqcRYGate(q, -2.874282803898016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3296415329216984, 0);
  sqcRYGate(q, 1.0322568346409993, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7065634034232637, 0);
  sqcRYGate(q, -3.0743774065195826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.702026529340678, 0);
  sqcRYGate(q, 0.4576473169291235, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.12272148774389002, 1);
  sqcRYGate(q, 3.015058067960266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0359422712334796, 1);
  sqcRYGate(q, -2.356130320281565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9762021039882098, 1);
  sqcRYGate(q, 1.5119350864290046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5498120700117424, 1);
  sqcRYGate(q, -1.2338405027095196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.126244713315077, 2);
  sqcRYGate(q, 2.3510954489944385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6308731677291393, 2);
  sqcRYGate(q, -1.6493598235118565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2975086111440712, 0);
  sqcRYGate(q, 1.91761185363762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7496199194055368, 0);
  sqcRYGate(q, 1.1485820887772107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6573490211609466, 0);
  sqcRYGate(q, 1.096538520400446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9617964729558137, 0);
  sqcRYGate(q, -2.994411758720412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9882983799893766, 0);
  sqcRYGate(q, 1.91457757597004, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0332200385025154, 0);
  sqcRYGate(q, -2.140539103082892, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9944896696879102, 1);
  sqcRYGate(q, -1.291281798260548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6830729640003224, 1);
  sqcRYGate(q, 2.0147532957791006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5307479083932596, 1);
  sqcRYGate(q, 2.4176217775177657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.19691560789807028, 1);
  sqcRYGate(q, -2.607953288660378, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8203604137255667, 2);
  sqcRYGate(q, -1.923255171804211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.809468699183908, 2);
  sqcRYGate(q, 0.15559411274178458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2485020809613827, 0);
  sqcRYGate(q, -1.3674402683962414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8381711240601049, 0);
  sqcRYGate(q, 2.739848818365487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3795687383239894, 0);
  sqcRYGate(q, -1.6445617012713987, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4744197296207533, 0);
  sqcRYGate(q, -2.7138559912776667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08875853880238964, 0);
  sqcRYGate(q, -2.567798511362284, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8346563126442907, 0);
  sqcRYGate(q, 1.3287515270019685, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1193960378163346, 1);
  sqcRYGate(q, 1.9662190457804876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.171363035998263, 1);
  sqcRYGate(q, 0.8905261982844915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8761747725707836, 1);
  sqcRYGate(q, -1.9148668005740905, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6248574408485937, 1);
  sqcRYGate(q, 2.4977335089455193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9634424994814923, 2);
  sqcRYGate(q, 1.600889384427882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3433610365670232, 2);
  sqcRYGate(q, -0.40237119681823863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.928062578280613, 0);
  sqcRYGate(q, 1.6263493210323086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8755832648776702, 0);
  sqcRYGate(q, -1.1314811586053874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8418726797372269, 0);
  sqcRYGate(q, -1.5567416072019, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9110363233796845, 0);
  sqcRYGate(q, -1.613899047309787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2820581990774018, 0);
  sqcRYGate(q, -2.4852377293679004, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5578499634922908, 0);
  sqcRYGate(q, 0.8462067478435708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3853208577618372, 1);
  sqcRYGate(q, -2.1842487093875604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7170986509962534, 1);
  sqcRYGate(q, 2.9327399691942158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0156426716142033, 1);
  sqcRYGate(q, 0.37820268359329795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6650840660847682, 1);
  sqcRYGate(q, 2.3027536180867494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9604515076288107, 2);
  sqcRYGate(q, -3.1030533012294943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1045882071810778, 2);
  sqcRYGate(q, 0.22067438594472844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0189568999870926, 0);
  sqcRYGate(q, -1.2796837775340202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0729406219044852, 0);
  sqcRYGate(q, 2.351698131088405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.377936857106854, 0);
  sqcRYGate(q, -0.41634780153043494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1046736409799913, 0);
  sqcRYGate(q, 2.6916454471778777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7360649502731789, 0);
  sqcRYGate(q, 1.0081770345086598, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0823062207666536, 0);
  sqcRYGate(q, 1.4418109122030873, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2029425559527684, 1);
  sqcRYGate(q, 0.4932506226758928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6766165516209028, 1);
  sqcRYGate(q, -1.6169024384888668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1951044769454504, 1);
  sqcRYGate(q, 2.663396924508166, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1522728812447078, 1);
  sqcRYGate(q, -0.2163657535215977, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07127775473965119, 2);
  sqcRYGate(q, 0.32624957587838654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9402677909027624, 2);
  sqcRYGate(q, -1.715824554753345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32996526859769926, 0);
  sqcRYGate(q, -1.1933840429875069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9179338783457343, 0);
  sqcRYGate(q, -2.771781900519108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7167238359029637, 0);
  sqcRYGate(q, 1.4007918179138275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.529042015689473, 0);
  sqcRYGate(q, -1.3165577366544037, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.453330511537526, 0);
  sqcRYGate(q, -2.488361349814215, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.616033963983762, 0);
  sqcRYGate(q, -0.6609570017098623, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0710286358215835, 1);
  sqcRYGate(q, -2.1168102104654354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2975745416515725, 1);
  sqcRYGate(q, -2.5502263579249465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5190424641120375, 1);
  sqcRYGate(q, 0.245268695061006, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2594789307441907, 1);
  sqcRYGate(q, -2.209479018719411, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9049390051559856, 2);
  sqcRYGate(q, -0.8565083302649752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1923666322938467, 2);
  sqcRYGate(q, 1.8609106231338344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30161063343751415, 0);
  sqcRYGate(q, 1.7251788307324434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38260504389325245, 0);
  sqcRYGate(q, 1.64129259472858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8252164882033395, 0);
  sqcRYGate(q, -1.460116881602608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.13729505392275865, 0);
  sqcRYGate(q, -0.9091112778046863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1294903921927126, 0);
  sqcRYGate(q, -1.721498671776808, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8860278252133007, 0);
  sqcRYGate(q, -2.963361503973717, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.42116168244894414, 1);
  sqcRYGate(q, -0.5572611888948922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.318004287366283, 1);
  sqcRYGate(q, 1.2763467087329305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5084449738755866, 1);
  sqcRYGate(q, 0.5674962003274232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.061150591865425, 1);
  sqcRYGate(q, 0.760836682671218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3936854393268814, 2);
  sqcRYGate(q, -1.8295183174876066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5054901015297162, 2);
  sqcRYGate(q, 1.307373331699116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9556229461445938, 0);
  sqcRYGate(q, 2.8924043710419287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2680128259319938, 0);
  sqcRYGate(q, 2.191159654851094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.448338210701679, 0);
  sqcRYGate(q, 2.8213359773421423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.00949023981839475, 0);
  sqcRYGate(q, 0.30849775913875216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5704680062395857, 0);
  sqcRYGate(q, 0.8979087978095005, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.10733408269431978, 0);
  sqcRYGate(q, -2.3611562497296656, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.47597098435079754, 1);
  sqcRYGate(q, 1.3452752224266802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.211225713614643, 1);
  sqcRYGate(q, 0.7365594606630871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2479147614973938, 1);
  sqcRYGate(q, 0.727065043167709, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.745830653922743, 1);
  sqcRYGate(q, -1.0921785222279405, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4779512000654469, 2);
  sqcRYGate(q, 1.5581285068036956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0186719472704273, 2);
  sqcRYGate(q, 2.9169212722504185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18383527319931287, 0);
  sqcRYGate(q, 0.12977781752371165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.376210247131241, 0);
  sqcRYGate(q, 2.3682180481727784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6766708265958208, 0);
  sqcRYGate(q, -2.3129280309282425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26135252681646026, 0);
  sqcRYGate(q, 1.176968835255722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9269192935566188, 0);
  sqcRYGate(q, 1.2349597669391246, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6748919179835129, 0);
  sqcRYGate(q, -1.9234924049106896, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0649587406438936, 1);
  sqcRYGate(q, -1.259909928750841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7907244461085446, 1);
  sqcRYGate(q, -1.5236454622538185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.386795062395491, 1);
  sqcRYGate(q, 0.03917123646897913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6320018333939155, 1);
  sqcRYGate(q, -0.9113101276045241, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6037438750241372, 2);
  sqcRYGate(q, 2.1924622006734378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9595694967574837, 2);
  sqcRYGate(q, 0.6481418564439867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4469672754509077, 0);
  sqcRYGate(q, -1.5277440607147768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4171016135229437, 0);
  sqcRYGate(q, -3.0846031517437518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.379927442397764, 0);
  sqcRYGate(q, 1.9166630399389262, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6795330532476447, 0);
  sqcRYGate(q, 0.18339738095323727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2003169144168782, 0);
  sqcRYGate(q, -1.54305030376851, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3676798370785366, 0);
  sqcRYGate(q, -2.3499165512192355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.510855012881097, 1);
  sqcRYGate(q, 1.718517444454184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3666782159621956, 1);
  sqcRYGate(q, 1.9068481910634605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7768414264509094, 1);
  sqcRYGate(q, -3.0768129575832384, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.423825118075576, 1);
  sqcRYGate(q, 2.4081117574926423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9262136604042555, 2);
  sqcRYGate(q, 1.1914388787168164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13373225662105553, 2);
  sqcRYGate(q, 1.8862518376688062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3667480685901534, 0);
  sqcRYGate(q, 2.267657919835483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8010508116192893, 0);
  sqcRYGate(q, -1.869935491724546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16145684215409628, 0);
  sqcRYGate(q, 2.9482712917919907, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5179330276912344, 0);
  sqcRYGate(q, 1.2105072382064899, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.40735804354733945, 0);
  sqcRYGate(q, -1.554971832134448, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8198424011953831, 0);
  sqcRYGate(q, -0.9196204952428119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.030598285491849, 1);
  sqcRYGate(q, 1.0746941010151296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.061062865452909065, 1);
  sqcRYGate(q, -0.5562293389773071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.491732861963511, 1);
  sqcRYGate(q, 0.052948395428474786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5392899369133826, 1);
  sqcRYGate(q, 2.5508752197548703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.015628580705176, 2);
  sqcRYGate(q, -0.7468924223713781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1459111043884533, 2);
  sqcRYGate(q, 1.7435790130280555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1108624420572273, 0);
  sqcRYGate(q, -1.0340969578001562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0465198783496534, 0);
  sqcRYGate(q, -0.9336112674736583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7619478590066322, 0);
  sqcRYGate(q, 2.8716698835730208, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6431846484978122, 0);
  sqcRYGate(q, 2.8874289287153747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.595132542757008, 0);
  sqcRYGate(q, -1.4129293866030461, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5986857030238228, 0);
  sqcRYGate(q, -1.490919005326217, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.908334978465735, 1);
  sqcRYGate(q, -1.840841189968912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4091213950784538, 1);
  sqcRYGate(q, -1.6535043830711302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9181156539458426, 1);
  sqcRYGate(q, 0.6035699544437187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7106183293283364, 1);
  sqcRYGate(q, 1.11931086668396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1115206393148398, 2);
  sqcRYGate(q, 0.5573939546515033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22349381310211666, 2);
  sqcRYGate(q, -1.6220551871340119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2476076615827418, 0);
  sqcRYGate(q, 0.14230190860573602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6725298050501105, 0);
  sqcRYGate(q, -1.9828843008861137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0954485438954342, 0);
  sqcRYGate(q, 0.5886059279969231, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8203118579867086, 0);
  sqcRYGate(q, -2.0845715696730496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0902693673638364, 0);
  sqcRYGate(q, 2.6558200140793993, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.32295318645564103, 0);
  sqcRYGate(q, 0.9260364887106913, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0681687717277386, 1);
  sqcRYGate(q, -1.8310297096117418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.654933474927847, 1);
  sqcRYGate(q, 2.5804703688876023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2129379196793217, 1);
  sqcRYGate(q, -0.5413615006631013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9675302044440546, 1);
  sqcRYGate(q, 1.473031124577488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1804852364343974, 2);
  sqcRYGate(q, -2.4458455887756423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.709240961836827, 2);
  sqcRYGate(q, 0.6586635866395678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3250787796906645, 0);
  sqcRYGate(q, -2.302211642163928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1730118827631206, 0);
  sqcRYGate(q, -3.0013760188436867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6119141942675634, 0);
  sqcRYGate(q, 0.13642152277545616, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4686241883029334, 0);
  sqcRYGate(q, 0.019812897280874858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5083944771821969, 0);
  sqcRYGate(q, 1.7283077904359714, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4420949942936225, 0);
  sqcRYGate(q, -1.2311456950559467, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.01134952851046, 1);
  sqcRYGate(q, 2.1173600388449847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8768732781794357, 1);
  sqcRYGate(q, -1.6787815732255609, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3570828766869294, 1);
  sqcRYGate(q, 1.5639637780333955, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7977229429184203, 1);
  sqcRYGate(q, -0.35602791794775346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.062749761435807, 2);
  sqcRYGate(q, 1.4025643382735584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7235280855935384, 2);
  sqcRYGate(q, 2.9822664393080736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.038309476684546886, 0);
  sqcRYGate(q, -2.18797188920024, 1);
  sqcRYGate(q, -0.06675381024344862, 2);
  sqcRYGate(q, 2.0626906406692314, 3);

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
