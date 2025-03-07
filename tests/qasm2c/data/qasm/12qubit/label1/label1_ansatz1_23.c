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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.7216304163202132, 0);
  sqcRZGate(q, -2.628380034933936, 0);
  sqcRYGate(q, 0.12743220584850903, 1);
  sqcRZGate(q, 0.7313775189668376, 1);
  sqcRYGate(q, -2.5031063784759637, 2);
  sqcRZGate(q, 0.2816987030303473, 2);
  sqcRYGate(q, -3.0151117219919583, 3);
  sqcRZGate(q, 1.5816310797589734, 3);
  sqcRYGate(q, 1.551416862981432, 4);
  sqcRZGate(q, -2.422822286280774, 4);
  sqcRYGate(q, 1.2554434162774757, 5);
  sqcRZGate(q, 0.9496743622312551, 5);
  sqcRYGate(q, -0.22825211050784855, 6);
  sqcRZGate(q, -1.6716517382188096, 6);
  sqcRYGate(q, -1.006039687277954, 7);
  sqcRZGate(q, 0.2948331336810886, 7);
  sqcRYGate(q, -3.136775487904873, 8);
  sqcRZGate(q, 2.1219845379898823, 8);
  sqcRYGate(q, -0.7337267564253684, 9);
  sqcRZGate(q, 0.023767233124024692, 9);
  sqcRYGate(q, -3.1051969182397183, 10);
  sqcRZGate(q, 1.539654150569178, 10);
  sqcRYGate(q, 0.8771377174352404, 11);
  sqcRZGate(q, -1.8401669847072875, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.5553505342542338, 0);
  sqcRZGate(q, 1.039520088914819, 0);
  sqcRYGate(q, 3.1218232688736096, 1);
  sqcRZGate(q, -1.874262416268772, 1);
  sqcRYGate(q, 3.127293606417114, 2);
  sqcRZGate(q, 0.9434963111648508, 2);
  sqcRYGate(q, -0.09304967809643594, 3);
  sqcRZGate(q, -2.827148534883299, 3);
  sqcRYGate(q, -1.5577750785770226, 4);
  sqcRZGate(q, 0.4216962529334208, 4);
  sqcRYGate(q, -0.8140703937285378, 5);
  sqcRZGate(q, 0.7369618156259478, 5);
  sqcRYGate(q, -1.1697542450443397, 6);
  sqcRZGate(q, 0.041711658790337225, 6);
  sqcRYGate(q, -0.8824380132617993, 7);
  sqcRZGate(q, 2.170397004502493, 7);
  sqcRYGate(q, 3.1244047454432033, 8);
  sqcRZGate(q, -0.1672441212934972, 8);
  sqcRYGate(q, 1.2601205458144444, 9);
  sqcRZGate(q, -1.3808168331541273, 9);
  sqcRYGate(q, -2.780883964557107, 10);
  sqcRZGate(q, -2.97312831390569, 10);
  sqcRYGate(q, 0.8951859246562268, 11);
  sqcRZGate(q, -0.4496091974134037, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.255412446016205, 0);
  sqcRZGate(q, 2.3789636941135743, 0);
  sqcRYGate(q, -0.39491719490578814, 1);
  sqcRZGate(q, 0.7873053637502728, 1);
  sqcRYGate(q, 0.6789031927306963, 2);
  sqcRZGate(q, -2.342931226757761, 2);
  sqcRYGate(q, 0.2880667358487618, 3);
  sqcRZGate(q, 1.6888031887945771, 3);
  sqcRYGate(q, -0.6094242688765803, 4);
  sqcRZGate(q, -2.1951602896880864, 4);
  sqcRYGate(q, -1.84074008674029, 5);
  sqcRZGate(q, -3.103752731707278, 5);
  sqcRYGate(q, 1.9631983887139999, 6);
  sqcRZGate(q, -1.473341589041169, 6);
  sqcRYGate(q, -1.5140898153801334, 7);
  sqcRZGate(q, -0.6610463180915422, 7);
  sqcRYGate(q, -3.0979145648880277, 8);
  sqcRZGate(q, -1.5766177139302313, 8);
  sqcRYGate(q, -2.8362541381543007, 9);
  sqcRZGate(q, -0.10621921362091331, 9);
  sqcRYGate(q, 2.8776397438139822, 10);
  sqcRZGate(q, -2.6885604863654367, 10);
  sqcRYGate(q, 2.328997315434402, 11);
  sqcRZGate(q, -1.750997682867566, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.180321337839768, 0);
  sqcRZGate(q, -0.6338771337670402, 0);
  sqcRYGate(q, 0.2701207499237466, 1);
  sqcRZGate(q, -0.943530686451148, 1);
  sqcRYGate(q, -3.1078170676581207, 2);
  sqcRZGate(q, 1.6539695065276205, 2);
  sqcRYGate(q, 2.968213055512705, 3);
  sqcRZGate(q, 0.3640744929697647, 3);
  sqcRYGate(q, 0.6939240852303756, 4);
  sqcRZGate(q, -2.4279758927853705, 4);
  sqcRYGate(q, -1.662016026842136, 5);
  sqcRZGate(q, -2.72594286690807, 5);
  sqcRYGate(q, 0.024028791319823384, 6);
  sqcRZGate(q, -1.7619873366226912, 6);
  sqcRYGate(q, -1.7183035568275784, 7);
  sqcRZGate(q, 1.9483582445460017, 7);
  sqcRYGate(q, 0.016152751191949477, 8);
  sqcRZGate(q, 0.9862586921686676, 8);
  sqcRYGate(q, 3.0218016749340046, 9);
  sqcRZGate(q, 0.46077520325945714, 9);
  sqcRYGate(q, -2.9928288712771733, 10);
  sqcRZGate(q, 0.3964718193316092, 10);
  sqcRYGate(q, 2.2892226302893173, 11);
  sqcRZGate(q, 2.0919117863510186, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.4162976269885699, 0);
  sqcRZGate(q, -0.3867188631896381, 0);
  sqcRYGate(q, 3.030865172645809, 1);
  sqcRZGate(q, 1.7023434059738918, 1);
  sqcRYGate(q, 0.06771512333633539, 2);
  sqcRZGate(q, -1.9650157379573105, 2);
  sqcRYGate(q, -2.78018696477433, 3);
  sqcRZGate(q, 0.8226315262349464, 3);
  sqcRYGate(q, 1.729180509084352, 4);
  sqcRZGate(q, -2.804704699104163, 4);
  sqcRYGate(q, -2.9013539968067303, 5);
  sqcRZGate(q, -0.7698157913410588, 5);
  sqcRYGate(q, 1.2625483833896838, 6);
  sqcRZGate(q, 0.5167474685423149, 6);
  sqcRYGate(q, 0.4069048983290213, 7);
  sqcRZGate(q, 3.0165569198985955, 7);
  sqcRYGate(q, -3.1215169569025214, 8);
  sqcRZGate(q, 1.542005784942269, 8);
  sqcRYGate(q, 0.5953343783964109, 9);
  sqcRZGate(q, 2.5578698753466784, 9);
  sqcRYGate(q, 2.457027485071927, 10);
  sqcRZGate(q, -2.143400115067862, 10);
  sqcRYGate(q, -2.8444751887472353, 11);
  sqcRZGate(q, -2.390432379219185, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.12839023277694372, 0);
  sqcRZGate(q, 3.0264538794069287, 0);
  sqcRYGate(q, 1.0860797363301575, 1);
  sqcRZGate(q, 1.533285187321249, 1);
  sqcRYGate(q, 0.35383551878570785, 2);
  sqcRZGate(q, 2.2875685718066188, 2);
  sqcRYGate(q, 2.9166526585613313, 3);
  sqcRZGate(q, 1.744819867020551, 3);
  sqcRYGate(q, -2.690233323922091, 4);
  sqcRZGate(q, 0.5561709207837973, 4);
  sqcRYGate(q, -0.2930271827953037, 5);
  sqcRZGate(q, -0.7679882813252402, 5);
  sqcRYGate(q, 2.596551033335627, 6);
  sqcRZGate(q, -0.208026633378427, 6);
  sqcRYGate(q, 2.4949567302130555, 7);
  sqcRZGate(q, 1.6654816027236647, 7);
  sqcRYGate(q, 0.3898583254407271, 8);
  sqcRZGate(q, 2.334450819768972, 8);
  sqcRYGate(q, -3.059498877165666, 9);
  sqcRZGate(q, 1.476396526797742, 9);
  sqcRYGate(q, 2.4688977386897526, 10);
  sqcRZGate(q, 0.8613541297998353, 10);
  sqcRYGate(q, 2.894239924219401, 11);
  sqcRZGate(q, 2.988252394527623, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.946787581988855, 0);
  sqcRZGate(q, 1.95862562729513, 0);
  sqcRYGate(q, -1.9414864665869171, 1);
  sqcRZGate(q, -2.684724340927906, 1);
  sqcRYGate(q, -3.0935222311515598, 2);
  sqcRZGate(q, -1.9429357797576159, 2);
  sqcRYGate(q, 2.796849714135189, 3);
  sqcRZGate(q, -2.321691008711887, 3);
  sqcRYGate(q, 0.5127868321435357, 4);
  sqcRZGate(q, -2.214145089749253, 4);
  sqcRYGate(q, 2.866963602010157, 5);
  sqcRZGate(q, 0.03179494205702138, 5);
  sqcRYGate(q, -3.0568360653038136, 6);
  sqcRZGate(q, -2.586773893519029, 6);
  sqcRYGate(q, 0.7925349703226878, 7);
  sqcRZGate(q, -2.8047024013838495, 7);
  sqcRYGate(q, 3.0642417220424853, 8);
  sqcRZGate(q, 1.222615696723665, 8);
  sqcRYGate(q, 1.0698440118816768, 9);
  sqcRZGate(q, -2.193252388101861, 9);
  sqcRYGate(q, -1.6605948468160578, 10);
  sqcRZGate(q, -1.866795531429396, 10);
  sqcRYGate(q, -2.9550605361835354, 11);
  sqcRZGate(q, -2.0775782581788738, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4628079428876362, 0);
  sqcRZGate(q, 0.9068628204777331, 0);
  sqcRYGate(q, -3.056174739648616, 1);
  sqcRZGate(q, 2.3709139168254456, 1);
  sqcRYGate(q, -0.15806256352586465, 2);
  sqcRZGate(q, 2.221581265592329, 2);
  sqcRYGate(q, 0.6293541209902179, 3);
  sqcRZGate(q, 3.074901295249802, 3);
  sqcRYGate(q, -2.6316698480299845, 4);
  sqcRZGate(q, -2.2623008009176333, 4);
  sqcRYGate(q, 2.8793078799720893, 5);
  sqcRZGate(q, -2.3907879652639163, 5);
  sqcRYGate(q, -0.08496904471006506, 6);
  sqcRZGate(q, -1.2264726552980987, 6);
  sqcRYGate(q, 0.26887830600590323, 7);
  sqcRZGate(q, -1.6109597888539626, 7);
  sqcRYGate(q, -3.1005324061995125, 8);
  sqcRZGate(q, -2.701122515939371, 8);
  sqcRYGate(q, 3.0391934771628675, 9);
  sqcRZGate(q, -2.1108943834855705, 9);
  sqcRYGate(q, 0.25983851520814305, 10);
  sqcRZGate(q, -0.33578363382762083, 10);
  sqcRYGate(q, 0.23206685957407738, 11);
  sqcRZGate(q, 0.5694721211080154, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.779668941037808, 0);
  sqcRZGate(q, 1.4400382901488955, 0);
  sqcRYGate(q, 0.17721035911144511, 1);
  sqcRZGate(q, 2.1044293636645044, 1);
  sqcRYGate(q, 0.12256641205578943, 2);
  sqcRZGate(q, -1.7289692359939703, 2);
  sqcRYGate(q, 1.5835400651243292, 3);
  sqcRZGate(q, -1.1685347913325455, 3);
  sqcRYGate(q, 2.7604511895838586, 4);
  sqcRZGate(q, -0.3816531808761008, 4);
  sqcRYGate(q, -0.17729356493752213, 5);
  sqcRZGate(q, -0.8205544248044792, 5);
  sqcRYGate(q, -1.7543629692763085, 6);
  sqcRZGate(q, 3.0757262697774794, 6);
  sqcRYGate(q, 0.602292583136645, 7);
  sqcRZGate(q, 0.9622113851341076, 7);
  sqcRYGate(q, -1.3384159030905163, 8);
  sqcRZGate(q, 0.9446286453192742, 8);
  sqcRYGate(q, -1.4577431024889211, 9);
  sqcRZGate(q, 0.07554004008830767, 9);
  sqcRYGate(q, 1.059358763552786, 10);
  sqcRZGate(q, 1.1524205833409118, 10);
  sqcRYGate(q, 0.38415182668787384, 11);
  sqcRZGate(q, 0.012340717126026137, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.8470232500860162, 0);
  sqcRZGate(q, -1.0562937076201666, 0);
  sqcRYGate(q, 2.693229140862574, 1);
  sqcRZGate(q, -1.1314245914660699, 1);
  sqcRYGate(q, 2.858057640099522, 2);
  sqcRZGate(q, -1.3940970145192226, 2);
  sqcRYGate(q, -1.6718519632200215, 3);
  sqcRZGate(q, 0.7012653380979135, 3);
  sqcRYGate(q, -0.1523024114228413, 4);
  sqcRZGate(q, -2.94404367642195, 4);
  sqcRYGate(q, 2.6419598572349807, 5);
  sqcRZGate(q, -2.9922168906730864, 5);
  sqcRYGate(q, 2.074097147398266, 6);
  sqcRZGate(q, -3.0178473735931104, 6);
  sqcRYGate(q, 1.3642847574143895, 7);
  sqcRZGate(q, 3.1113813180982577, 7);
  sqcRYGate(q, -0.1401146649791095, 8);
  sqcRZGate(q, -3.0298042184456415, 8);
  sqcRYGate(q, -0.3878083589453571, 9);
  sqcRZGate(q, -2.5173695599598767, 9);
  sqcRYGate(q, 2.66669031709027, 10);
  sqcRZGate(q, 1.2804505721316983, 10);
  sqcRYGate(q, 0.12165843350026295, 11);
  sqcRZGate(q, 1.3574933034295862, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.2990420429204899, 0);
  sqcRZGate(q, -2.251247223780541, 0);
  sqcRYGate(q, -1.1876304770724886, 1);
  sqcRZGate(q, 0.6772856440487287, 1);
  sqcRYGate(q, 3.1215707621282687, 2);
  sqcRZGate(q, 2.923086471314476, 2);
  sqcRYGate(q, 0.4376336802718015, 3);
  sqcRZGate(q, 2.368309575713127, 3);
  sqcRYGate(q, -3.129628079573152, 4);
  sqcRZGate(q, 0.9045660814846134, 4);
  sqcRYGate(q, -0.0662433510384135, 5);
  sqcRZGate(q, 1.305761172437335, 5);
  sqcRYGate(q, -1.0319572557753645, 6);
  sqcRZGate(q, -3.1246885613986186, 6);
  sqcRYGate(q, 0.8063191915108585, 7);
  sqcRZGate(q, 0.013541655121302123, 7);
  sqcRYGate(q, 2.9820625167475123, 8);
  sqcRZGate(q, -1.6230828386188758, 8);
  sqcRYGate(q, 2.814898795987262, 9);
  sqcRZGate(q, -3.0096207570002376, 9);
  sqcRYGate(q, 1.771247521979106, 10);
  sqcRZGate(q, 1.0661445553850806, 10);
  sqcRYGate(q, -0.037803384821534, 11);
  sqcRZGate(q, 2.002466652800817, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.6783120523005945, 0);
  sqcRZGate(q, 1.486323561353597, 0);
  sqcRYGate(q, -0.2315010859556832, 1);
  sqcRZGate(q, 1.7913743463835585, 1);
  sqcRYGate(q, 2.917880284418808, 2);
  sqcRZGate(q, -1.7711664295609304, 2);
  sqcRYGate(q, -1.9481501054779793, 3);
  sqcRZGate(q, -2.763324762961195, 3);
  sqcRYGate(q, -0.1272084890391294, 4);
  sqcRZGate(q, -2.256864135048832, 4);
  sqcRYGate(q, -2.7281429106556856, 5);
  sqcRZGate(q, -0.6325505449997719, 5);
  sqcRYGate(q, -2.8021421456277564, 6);
  sqcRZGate(q, 0.9875538779959179, 6);
  sqcRYGate(q, -0.7325467905929433, 7);
  sqcRZGate(q, 1.880383391183206, 7);
  sqcRYGate(q, -2.563211551655023, 8);
  sqcRZGate(q, 0.9938714382451046, 8);
  sqcRYGate(q, 0.4265149704455664, 9);
  sqcRZGate(q, -2.6029189833378745, 9);
  sqcRYGate(q, -2.3482272903896453, 10);
  sqcRZGate(q, 1.9154587417447129, 10);
  sqcRYGate(q, -1.425903655503855, 11);
  sqcRZGate(q, 1.464185882148115, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8678442657237415, 0);
  sqcRZGate(q, -2.705789841014827, 0);
  sqcRYGate(q, 2.948341414188365, 1);
  sqcRZGate(q, 0.8498989930030093, 1);
  sqcRYGate(q, -2.6094234644268433, 2);
  sqcRZGate(q, 0.9150070616171543, 2);
  sqcRYGate(q, 1.9109711369062383, 3);
  sqcRZGate(q, 1.1350225774096614, 3);
  sqcRYGate(q, 0.009574255704874482, 4);
  sqcRZGate(q, -0.8500455993637264, 4);
  sqcRYGate(q, 0.03155505488943433, 5);
  sqcRZGate(q, 1.0326839567493544, 5);
  sqcRYGate(q, -0.40392974467917914, 6);
  sqcRZGate(q, -3.128867665404583, 6);
  sqcRYGate(q, 0.01830818537684653, 7);
  sqcRZGate(q, -1.8153295227793833, 7);
  sqcRYGate(q, 0.36896644996369865, 8);
  sqcRZGate(q, -0.010681238231236454, 8);
  sqcRYGate(q, 1.1221056627978578, 9);
  sqcRZGate(q, -3.129609938342066, 9);
  sqcRYGate(q, 3.0842173835346545, 10);
  sqcRZGate(q, -1.8719936160226232, 10);
  sqcRYGate(q, 0.7313785609043082, 11);
  sqcRZGate(q, -1.5753083052580474, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.1898905017845136, 0);
  sqcRZGate(q, -0.06494935164774951, 0);
  sqcRYGate(q, -0.6154659690978309, 1);
  sqcRZGate(q, -1.7842323654133654, 1);
  sqcRYGate(q, -2.4616603836326227, 2);
  sqcRZGate(q, -0.2512879430561501, 2);
  sqcRYGate(q, -2.4262219467939636, 3);
  sqcRZGate(q, -0.7386285596711407, 3);
  sqcRYGate(q, 0.020955211725614615, 4);
  sqcRZGate(q, 2.2096094599048275, 4);
  sqcRYGate(q, 1.0673792033233298, 5);
  sqcRZGate(q, 2.9354478503673556, 5);
  sqcRYGate(q, 0.11467989908438804, 6);
  sqcRZGate(q, 1.2304716597253265, 6);
  sqcRYGate(q, 2.593231482233329, 7);
  sqcRZGate(q, 0.3640546945103637, 7);
  sqcRYGate(q, 2.689361949965032, 8);
  sqcRZGate(q, -2.8030482046628347, 8);
  sqcRYGate(q, 0.42627247151074404, 9);
  sqcRZGate(q, -0.04586812983905496, 9);
  sqcRYGate(q, 3.126572878209607, 10);
  sqcRZGate(q, 2.7567501550093874, 10);
  sqcRYGate(q, 1.6440361833819068, 11);
  sqcRZGate(q, -2.8879157889447833, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.956524103266892, 0);
  sqcRZGate(q, 1.9841285526342045, 0);
  sqcRYGate(q, 1.7885886403505422, 1);
  sqcRZGate(q, 2.7895542352566642, 1);
  sqcRYGate(q, 0.1075938034192161, 2);
  sqcRZGate(q, 2.725603251504347, 2);
  sqcRYGate(q, 2.9011641087895237, 3);
  sqcRZGate(q, 2.389325351604068, 3);
  sqcRYGate(q, -3.1354416186718144, 4);
  sqcRZGate(q, 1.114950134056131, 4);
  sqcRYGate(q, -1.12864810219209, 5);
  sqcRZGate(q, 0.7761564670811761, 5);
  sqcRYGate(q, 0.3799173977724049, 6);
  sqcRZGate(q, -2.5029869140033187, 6);
  sqcRYGate(q, -0.07299169406579864, 7);
  sqcRZGate(q, -2.3112472522034957, 7);
  sqcRYGate(q, -0.13234469425262277, 8);
  sqcRZGate(q, 2.6720318681401696, 8);
  sqcRYGate(q, -1.7843784300875474, 9);
  sqcRZGate(q, -1.3933646653461607, 9);
  sqcRYGate(q, -1.575304741520098, 10);
  sqcRZGate(q, 3.0864800728629302, 10);
  sqcRYGate(q, 0.8976327933678929, 11);
  sqcRZGate(q, -2.706828331833236, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.7185720251241026, 0);
  sqcRZGate(q, 1.5892848339798373, 0);
  sqcRYGate(q, -3.1282245989832345, 1);
  sqcRZGate(q, -2.8044719125224913, 1);
  sqcRYGate(q, -2.982750465867677, 2);
  sqcRZGate(q, 2.6893533146659343, 2);
  sqcRYGate(q, -0.6361110785419992, 3);
  sqcRZGate(q, 3.105043103628133, 3);
  sqcRYGate(q, 3.1074597393307575, 4);
  sqcRZGate(q, -0.015938858497524855, 4);
  sqcRYGate(q, -2.8834075783480038, 5);
  sqcRZGate(q, -2.25030934170063, 5);
  sqcRYGate(q, 0.9847209965242063, 6);
  sqcRZGate(q, 0.040657585423779175, 6);
  sqcRYGate(q, -0.03981551300330917, 7);
  sqcRZGate(q, 0.23543789468032178, 7);
  sqcRYGate(q, 1.0512520156015528, 8);
  sqcRZGate(q, -0.7936086883765369, 8);
  sqcRYGate(q, 1.6484654445192062, 9);
  sqcRZGate(q, -2.175528444687618, 9);
  sqcRYGate(q, -2.9065653284783917, 10);
  sqcRZGate(q, -2.898283853680766, 10);
  sqcRYGate(q, 2.9696925538653973, 11);
  sqcRZGate(q, 2.6625611013931993, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.2791046997948081, 0);
  sqcRZGate(q, -1.780774996248474, 0);
  sqcRYGate(q, -0.312258864798901, 1);
  sqcRZGate(q, 2.4869104423614656, 1);
  sqcRYGate(q, 0.6873730253013892, 2);
  sqcRZGate(q, 2.0201063045807626, 2);
  sqcRYGate(q, 1.8696428329214143, 3);
  sqcRZGate(q, -2.802694849390757, 3);
  sqcRYGate(q, 0.455403738903976, 4);
  sqcRZGate(q, -2.9093732796870864, 4);
  sqcRYGate(q, -0.06792146788076447, 5);
  sqcRZGate(q, -0.161437321535196, 5);
  sqcRYGate(q, 2.4504935892759967, 6);
  sqcRZGate(q, -2.496746160088086, 6);
  sqcRYGate(q, 3.1316819660593427, 7);
  sqcRZGate(q, -1.6728917976384925, 7);
  sqcRYGate(q, 0.006142849973671719, 8);
  sqcRZGate(q, 2.762528818779654, 8);
  sqcRYGate(q, -1.798446754663635, 9);
  sqcRZGate(q, -1.496904204951256, 9);
  sqcRYGate(q, -1.9646956759421583, 10);
  sqcRZGate(q, -0.27187798165563803, 10);
  sqcRYGate(q, -0.008893165001968711, 11);
  sqcRZGate(q, -2.0449655675528335, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.09803881892690568, 0);
  sqcRZGate(q, -2.1791843681753758, 0);
  sqcRYGate(q, 1.538223399749624, 1);
  sqcRZGate(q, -3.019964807964655, 1);
  sqcRYGate(q, 0.18911147088641334, 2);
  sqcRZGate(q, 2.4375383338558665, 2);
  sqcRYGate(q, -0.0018553635836706661, 3);
  sqcRZGate(q, 1.4696443635981034, 3);
  sqcRYGate(q, 0.06350128887787321, 4);
  sqcRZGate(q, 0.35794791945943893, 4);
  sqcRYGate(q, 0.2234134736198252, 5);
  sqcRZGate(q, 0.09336048244436951, 5);
  sqcRYGate(q, 2.6137066219417733, 6);
  sqcRZGate(q, 1.0896578393474279, 6);
  sqcRYGate(q, 2.5562592253797383, 7);
  sqcRZGate(q, 0.21630552013987758, 7);
  sqcRYGate(q, 0.150242495158551, 8);
  sqcRZGate(q, -1.9854736262774053, 8);
  sqcRYGate(q, 1.570004270162352, 9);
  sqcRZGate(q, -0.29304765771767277, 9);
  sqcRYGate(q, -0.12885203426774705, 10);
  sqcRZGate(q, 1.9581770115702906, 10);
  sqcRYGate(q, 1.3445728474587721, 11);
  sqcRZGate(q, -0.03766099376364629, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.754315179935095, 0);
  sqcRZGate(q, 1.7313861114536861, 0);
  sqcRYGate(q, 0.45673038946940814, 1);
  sqcRZGate(q, 0.16703755672750106, 1);
  sqcRYGate(q, -1.771362842420888, 2);
  sqcRZGate(q, -2.0330233244500855, 2);
  sqcRYGate(q, 2.3392629415859685, 3);
  sqcRZGate(q, 1.7262060560602084, 3);
  sqcRYGate(q, -1.0994579029772924, 4);
  sqcRZGate(q, 2.438681917274738, 4);
  sqcRYGate(q, -0.6548367957303555, 5);
  sqcRZGate(q, -0.33509089418006877, 5);
  sqcRYGate(q, -0.8622374059117256, 6);
  sqcRZGate(q, 3.037021261163198, 6);
  sqcRYGate(q, 3.031781705474267, 7);
  sqcRZGate(q, -1.6431794635143957, 7);
  sqcRYGate(q, -2.097765206008831, 8);
  sqcRZGate(q, -0.42530827790792197, 8);
  sqcRYGate(q, -0.4755455522477185, 9);
  sqcRZGate(q, -0.9079447741105923, 9);
  sqcRYGate(q, 3.0697686711502197, 10);
  sqcRZGate(q, -1.5206745352993936, 10);
  sqcRYGate(q, 2.268808666369515, 11);
  sqcRZGate(q, 0.03470855979607457, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.7354277745744304, 0);
  sqcRZGate(q, -2.28564335734401, 0);
  sqcRYGate(q, -2.6028042351994283, 1);
  sqcRZGate(q, 2.222220000531886, 1);
  sqcRYGate(q, 0.05743010086730749, 2);
  sqcRZGate(q, 2.2071477378164293, 2);
  sqcRYGate(q, 0.0029719472812614806, 3);
  sqcRZGate(q, -1.8863880409215221, 3);
  sqcRYGate(q, 3.1332546867242907, 4);
  sqcRZGate(q, -2.338969670833858, 4);
  sqcRYGate(q, -0.14808384650698733, 5);
  sqcRZGate(q, -0.42900501007585456, 5);
  sqcRYGate(q, -0.8259222920449292, 6);
  sqcRZGate(q, -1.6465677088650088, 6);
  sqcRYGate(q, -3.12715935325234, 7);
  sqcRZGate(q, 0.2810190731989502, 7);
  sqcRYGate(q, -0.025346314708584394, 8);
  sqcRZGate(q, -2.188965290120826, 8);
  sqcRYGate(q, 2.984529732040064, 9);
  sqcRZGate(q, -0.8730232349560865, 9);
  sqcRYGate(q, -1.6147678553258826, 10);
  sqcRZGate(q, -1.4981748513033777, 10);
  sqcRYGate(q, -1.7963151266639088, 11);
  sqcRZGate(q, -1.7901072192566716, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.0796534351435576, 0);
  sqcRZGate(q, 0.5330838738082395, 0);
  sqcRYGate(q, 1.8315107538179638, 1);
  sqcRZGate(q, -2.16790380702992, 1);
  sqcRYGate(q, -1.1394612618436821, 2);
  sqcRZGate(q, -1.8444376705499428, 2);
  sqcRYGate(q, -0.9111251541384107, 3);
  sqcRZGate(q, 2.353393832414166, 3);
  sqcRYGate(q, -0.20630677110111545, 4);
  sqcRZGate(q, 1.4854256815905065, 4);
  sqcRYGate(q, 2.969324767363277, 5);
  sqcRZGate(q, -2.047967997656257, 5);
  sqcRYGate(q, 1.2342817067165024, 6);
  sqcRZGate(q, -1.8742895455463353, 6);
  sqcRYGate(q, -0.3888357931239881, 7);
  sqcRZGate(q, 0.5067650787706691, 7);
  sqcRYGate(q, -1.9353096551513271, 8);
  sqcRZGate(q, 2.1953872175893716, 8);
  sqcRYGate(q, 0.9128019673204416, 9);
  sqcRZGate(q, 1.8199429294229277, 9);
  sqcRYGate(q, 2.028401852593059, 10);
  sqcRZGate(q, 2.2105347814972567, 10);
  sqcRYGate(q, 2.1657921141656518, 11);
  sqcRZGate(q, -1.6749232625797583, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.0530219799601426, 0);
  sqcRZGate(q, 2.966502238334462, 0);
  sqcRYGate(q, -1.0695014420487317, 1);
  sqcRZGate(q, 0.1364210302627331, 1);
  sqcRYGate(q, -2.3988689379342345, 2);
  sqcRZGate(q, -0.034503993543285816, 2);
  sqcRYGate(q, 1.5560950068570203, 3);
  sqcRZGate(q, 3.117828289713685, 3);
  sqcRYGate(q, -3.113775382494736, 4);
  sqcRZGate(q, 2.557976513379888, 4);
  sqcRYGate(q, -3.05934883129059, 5);
  sqcRZGate(q, 0.23108218268987282, 5);
  sqcRYGate(q, -3.100991325610069, 6);
  sqcRZGate(q, -1.1481690339260593, 6);
  sqcRYGate(q, -0.08108178877710781, 7);
  sqcRZGate(q, -0.7317013667072642, 7);
  sqcRYGate(q, 3.012133872890484, 8);
  sqcRZGate(q, -1.6671415900533733, 8);
  sqcRYGate(q, 1.5826791033075809, 9);
  sqcRZGate(q, 2.362027347885014, 9);
  sqcRYGate(q, 0.05848759294465644, 10);
  sqcRZGate(q, -1.5777207430190652, 10);
  sqcRYGate(q, 0.9070736512448914, 11);
  sqcRZGate(q, 1.5259983284587557, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.902518136813418, 0);
  sqcRZGate(q, -2.062116350188022, 0);
  sqcRYGate(q, 0.40615485153099085, 1);
  sqcRZGate(q, 1.5330796324770462, 1);
  sqcRYGate(q, -1.5783113496258054, 2);
  sqcRZGate(q, 1.7518342937817977, 2);
  sqcRYGate(q, -1.7822802540792022, 3);
  sqcRZGate(q, -1.4097506908523214, 3);
  sqcRYGate(q, -0.02804572939766085, 4);
  sqcRZGate(q, -1.4089379740954078, 4);
  sqcRYGate(q, 1.5280828902827792, 5);
  sqcRZGate(q, 3.0632767792212774, 5);
  sqcRYGate(q, 0.07709510360087002, 6);
  sqcRZGate(q, -2.2829572999164167, 6);
  sqcRYGate(q, 0.24176646330174023, 7);
  sqcRZGate(q, -1.9909058474126538, 7);
  sqcRYGate(q, -0.36837904333015903, 8);
  sqcRZGate(q, -2.99751332977016, 8);
  sqcRYGate(q, 1.9356023999249352, 9);
  sqcRZGate(q, -1.5065047989536282, 9);
  sqcRYGate(q, -3.1051122439888563, 10);
  sqcRZGate(q, 2.3948816974011113, 10);
  sqcRYGate(q, 1.3370843431018415, 11);
  sqcRZGate(q, 3.0152269268532104, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.5794587032766367, 0);
  sqcRZGate(q, -2.909857518152324, 0);
  sqcRYGate(q, 2.47128866747924, 1);
  sqcRZGate(q, -0.0016389019198431178, 1);
  sqcRYGate(q, -3.140391851303297, 2);
  sqcRZGate(q, -0.8246820450934519, 2);
  sqcRYGate(q, -1.258254838594656, 3);
  sqcRZGate(q, 2.6447341088097263, 3);
  sqcRYGate(q, 3.091580639764183, 4);
  sqcRZGate(q, -2.8556240390315226, 4);
  sqcRYGate(q, -2.9762101695303014, 5);
  sqcRZGate(q, 0.32058435920064593, 5);
  sqcRYGate(q, 3.065484580344637, 6);
  sqcRZGate(q, -0.30119965142126315, 6);
  sqcRYGate(q, 3.103057257929946, 7);
  sqcRZGate(q, -1.459507035284404, 7);
  sqcRYGate(q, 0.006634966472571335, 8);
  sqcRZGate(q, -1.8320795563792442, 8);
  sqcRYGate(q, 2.156896607669097, 9);
  sqcRZGate(q, 1.329520445425386, 9);
  sqcRYGate(q, -0.12373063853913792, 10);
  sqcRZGate(q, 1.9814621233407232, 10);
  sqcRYGate(q, -2.032616393686627, 11);
  sqcRZGate(q, -0.5185631934718093, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.127336178364019, 0);
  sqcRZGate(q, 0.06597404466908863, 0);
  sqcRYGate(q, 1.8066591450939216, 1);
  sqcRZGate(q, 0.16317860947028429, 1);
  sqcRYGate(q, -0.002583262517173003, 2);
  sqcRZGate(q, -2.1297698987725058, 2);
  sqcRYGate(q, 1.5547229860984133, 3);
  sqcRZGate(q, -3.128741192469985, 3);
  sqcRYGate(q, 0.0014827585884455985, 4);
  sqcRZGate(q, -0.7718894579961876, 4);
  sqcRYGate(q, -1.4973032315421033, 5);
  sqcRZGate(q, 0.16607271591123746, 5);
  sqcRYGate(q, -1.4196188663994596, 6);
  sqcRZGate(q, -2.7085318313076576, 6);
  sqcRYGate(q, -1.8456792520096148, 7);
  sqcRZGate(q, -1.1547129495132697, 7);
  sqcRYGate(q, -1.3161904309484354, 8);
  sqcRZGate(q, -2.7358145219560543, 8);
  sqcRYGate(q, 2.5846848704711456, 9);
  sqcRZGate(q, -2.554607673207575, 9);
  sqcRYGate(q, 2.5493767603086535, 10);
  sqcRZGate(q, -1.1708820532954995, 10);
  sqcRYGate(q, -2.9159274303607563, 11);
  sqcRZGate(q, -0.4443017787740225, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.5738144737431732, 0);
  sqcRZGate(q, -0.24062759576534898, 0);
  sqcRYGate(q, -2.2420909841326937, 1);
  sqcRZGate(q, 1.6745695610243019, 1);
  sqcRYGate(q, 0.2607352010072761, 2);
  sqcRZGate(q, 3.1397041094280107, 2);
  sqcRYGate(q, -1.9238800265302551, 3);
  sqcRZGate(q, 0.44420162089769005, 3);
  sqcRYGate(q, 3.1376780081836944, 4);
  sqcRZGate(q, 2.66810318772956, 4);
  sqcRYGate(q, -0.018879567979837475, 5);
  sqcRZGate(q, 2.9456303816610543, 5);
  sqcRYGate(q, -3.1091449028007125, 6);
  sqcRZGate(q, 0.14035590833352368, 6);
  sqcRYGate(q, -0.0057945160425534326, 7);
  sqcRZGate(q, 2.3271321692739533, 7);
  sqcRYGate(q, -3.0960182212492504, 8);
  sqcRZGate(q, 2.067726540162231, 8);
  sqcRYGate(q, 0.04402430563826172, 9);
  sqcRZGate(q, 3.138326437600051, 9);
  sqcRYGate(q, 0.10816725641697246, 10);
  sqcRZGate(q, 2.735387626233924, 10);
  sqcRYGate(q, -2.018465772187488, 11);
  sqcRZGate(q, 2.7681816274064426, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.134146909354479, 0);
  sqcRZGate(q, 0.18042240415277608, 0);
  sqcRYGate(q, 1.5727238614353611, 1);
  sqcRZGate(q, 0.6915379387374714, 1);
  sqcRYGate(q, 1.5731635883638182, 2);
  sqcRZGate(q, 0.3499784667379986, 2);
  sqcRYGate(q, 0.0001095101306318772, 3);
  sqcRZGate(q, -1.743484999349124, 3);
  sqcRYGate(q, -1.580788923108687, 4);
  sqcRZGate(q, 1.6908150750353743, 4);
  sqcRYGate(q, 1.62172625019304, 5);
  sqcRZGate(q, -1.4836781003950994, 5);
  sqcRYGate(q, -1.4184298215421682, 6);
  sqcRZGate(q, 1.2470273134384933, 6);
  sqcRYGate(q, 0.40143749392874106, 7);
  sqcRZGate(q, -1.9452736201386611, 7);
  sqcRYGate(q, -2.1993282162725554, 8);
  sqcRZGate(q, -3.0356167911322385, 8);
  sqcRYGate(q, 1.7684587402454675, 9);
  sqcRZGate(q, -1.7353288411884291, 9);
  sqcRYGate(q, 1.6016907865803338, 10);
  sqcRZGate(q, -1.2734870865028753, 10);
  sqcRYGate(q, 0.05416740133070608, 11);
  sqcRZGate(q, 0.9312335116397268, 11);

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
