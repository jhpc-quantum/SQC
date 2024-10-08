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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.9952605619462505, 0);
  sqcRZGate(q, 0.9704608323350127, 0);
  sqcRYGate(q, -2.931406480162706, 1);
  sqcRZGate(q, 2.857190181600526, 1);
  sqcRYGate(q, -1.3925140321772813, 2);
  sqcRZGate(q, 1.5778840231751303, 2);
  sqcRYGate(q, -2.1630309531454106, 3);
  sqcRZGate(q, -2.899001819183317, 3);
  sqcRYGate(q, -2.5770137328008142, 4);
  sqcRZGate(q, -1.6292042558241768, 4);
  sqcRYGate(q, -1.0595807710784393, 5);
  sqcRZGate(q, 2.84247694566097, 5);
  sqcRYGate(q, 1.8487852351353993, 6);
  sqcRZGate(q, -0.9998662668966016, 6);
  sqcRYGate(q, 1.5794842783077847, 7);
  sqcRZGate(q, 2.809218613165681, 7);
  sqcRYGate(q, -1.2573974153470702, 8);
  sqcRZGate(q, 1.1320857400857802, 8);
  sqcRYGate(q, -0.504967227480269, 9);
  sqcRZGate(q, 2.1635945628246738, 9);
  sqcRYGate(q, -3.104576996533135, 10);
  sqcRZGate(q, -1.2563197990550388, 10);
  sqcRYGate(q, -0.2121182107328904, 11);
  sqcRZGate(q, -0.4761537811092813, 11);
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
  sqcRYGate(q, -0.5066963274917626, 0);
  sqcRZGate(q, 2.6946481845589516, 0);
  sqcRYGate(q, -2.1639275630907284, 1);
  sqcRZGate(q, 2.211846484024173, 1);
  sqcRYGate(q, 2.730183876338991, 2);
  sqcRZGate(q, 0.20792193089490316, 2);
  sqcRYGate(q, -2.9032387641889064, 3);
  sqcRZGate(q, -2.300931514296797, 3);
  sqcRYGate(q, 0.000836749824859595, 4);
  sqcRZGate(q, -1.2974512292198839, 4);
  sqcRYGate(q, -0.004309224303488791, 5);
  sqcRZGate(q, -0.45505090229037837, 5);
  sqcRYGate(q, -0.00025817762366142844, 6);
  sqcRZGate(q, -1.8395275328824945, 6);
  sqcRYGate(q, -2.784659812561267, 7);
  sqcRZGate(q, 0.7009143200767705, 7);
  sqcRYGate(q, -0.9457712694478502, 8);
  sqcRZGate(q, 1.5859020441997849, 8);
  sqcRYGate(q, 0.05156245951663674, 9);
  sqcRZGate(q, 2.5590673050493318, 9);
  sqcRYGate(q, -1.9166682813580076, 10);
  sqcRZGate(q, 1.801783823567905, 10);
  sqcRYGate(q, 1.3599108656301326, 11);
  sqcRZGate(q, 0.22970775968544027, 11);
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
  sqcRYGate(q, 2.0583341312459966, 0);
  sqcRZGate(q, 0.7810439639714406, 0);
  sqcRYGate(q, -2.920859394948558, 1);
  sqcRZGate(q, 1.1066211971842579, 1);
  sqcRYGate(q, 0.19002279664261396, 2);
  sqcRZGate(q, -0.4291893487957124, 2);
  sqcRYGate(q, 2.477902995414348, 3);
  sqcRZGate(q, -1.916917388632552, 3);
  sqcRYGate(q, -2.041040434919639, 4);
  sqcRZGate(q, 1.064204116274865, 4);
  sqcRYGate(q, 1.5654397925626036, 5);
  sqcRZGate(q, -3.0290400016252197, 5);
  sqcRYGate(q, -1.9967160230052972, 6);
  sqcRZGate(q, 2.8517143357151062, 6);
  sqcRYGate(q, -2.276099561389322, 7);
  sqcRZGate(q, -1.5204596226623066, 7);
  sqcRYGate(q, -1.7650690751356108, 8);
  sqcRZGate(q, 2.111088733835624, 8);
  sqcRYGate(q, 0.00844469586306662, 9);
  sqcRZGate(q, 0.5229325304241714, 9);
  sqcRYGate(q, 3.080951854236668, 10);
  sqcRZGate(q, 2.637223152729205, 10);
  sqcRYGate(q, -2.0718374902584404, 11);
  sqcRZGate(q, -1.8043390968334696, 11);
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
  sqcRYGate(q, -1.702342936163575, 0);
  sqcRZGate(q, -0.7515934009399698, 0);
  sqcRYGate(q, -0.9708192907176056, 1);
  sqcRZGate(q, -1.407215317174785, 1);
  sqcRYGate(q, 2.8293868089592165, 2);
  sqcRZGate(q, -1.0945004537202891, 2);
  sqcRYGate(q, 1.551129030195472, 3);
  sqcRZGate(q, 2.9411940777981176, 3);
  sqcRYGate(q, 0.007291366087827101, 4);
  sqcRZGate(q, -2.5712618598900745, 4);
  sqcRYGate(q, 0.009488783839514046, 5);
  sqcRZGate(q, -2.3711781423368765, 5);
  sqcRYGate(q, -0.0025084360362548352, 6);
  sqcRZGate(q, 0.6377870571641366, 6);
  sqcRYGate(q, -1.7477487908379912, 7);
  sqcRZGate(q, -2.8167227583458643, 7);
  sqcRYGate(q, -2.967652868532448, 8);
  sqcRZGate(q, 1.6246485072954284, 8);
  sqcRYGate(q, 1.4545516514539634, 9);
  sqcRZGate(q, -2.9949240722046824, 9);
  sqcRYGate(q, 0.4980167966640626, 10);
  sqcRZGate(q, -0.6992518854154302, 10);
  sqcRYGate(q, 0.7273763010852576, 11);
  sqcRZGate(q, 0.5744354230320223, 11);
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
  sqcRYGate(q, -2.4861663909810185, 0);
  sqcRZGate(q, 1.1185899153125076, 0);
  sqcRYGate(q, -1.360193245081386, 1);
  sqcRZGate(q, -2.5495482192732783, 1);
  sqcRYGate(q, -1.780184466495605, 2);
  sqcRZGate(q, 2.2032973153127884, 2);
  sqcRYGate(q, 3.0467897280476652, 3);
  sqcRZGate(q, -2.1906234675803815, 3);
  sqcRYGate(q, -1.5817091650372062, 4);
  sqcRZGate(q, -2.3587377895722725, 4);
  sqcRYGate(q, 0.8784579396198231, 5);
  sqcRZGate(q, 1.5651132128878489, 5);
  sqcRYGate(q, -0.5121640029088317, 6);
  sqcRZGate(q, -2.3300650659668767, 6);
  sqcRYGate(q, 1.13336531018561, 7);
  sqcRZGate(q, 3.127704703212846, 7);
  sqcRYGate(q, -0.43546071072439485, 8);
  sqcRZGate(q, 1.9462408918889693, 8);
  sqcRYGate(q, 3.128971424637105, 9);
  sqcRZGate(q, 0.7736586837565308, 9);
  sqcRYGate(q, -3.1406926152622314, 10);
  sqcRZGate(q, -1.921782182702559, 10);
  sqcRYGate(q, -1.0461657493206422, 11);
  sqcRZGate(q, 2.979796697589945, 11);
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
  sqcRYGate(q, -0.39719519956353455, 0);
  sqcRZGate(q, 1.1611077097389961, 0);
  sqcRYGate(q, -1.3881536068015539, 1);
  sqcRZGate(q, 2.7138795568912997, 1);
  sqcRYGate(q, 2.590066107012321, 2);
  sqcRZGate(q, 0.09084264382921405, 2);
  sqcRYGate(q, -2.201139508404384, 3);
  sqcRZGate(q, 2.2036851069391767, 3);
  sqcRYGate(q, 2.0837935699626344, 4);
  sqcRZGate(q, 0.4305684093506405, 4);
  sqcRYGate(q, 0.09472783911716195, 5);
  sqcRZGate(q, -2.2499480496318656, 5);
  sqcRYGate(q, 2.966751606643104, 6);
  sqcRZGate(q, -1.7647098138059238, 6);
  sqcRYGate(q, 2.8380288897188337, 7);
  sqcRZGate(q, 1.273674057752328, 7);
  sqcRYGate(q, 0.3886134909537101, 8);
  sqcRZGate(q, 2.8498334355233244, 8);
  sqcRYGate(q, 1.7074071139328408, 9);
  sqcRZGate(q, 2.208502575268442, 9);
  sqcRYGate(q, 1.3611998571776995, 10);
  sqcRZGate(q, -2.8006584126503156, 10);
  sqcRYGate(q, -1.4915029634830062, 11);
  sqcRZGate(q, 2.976599128160125, 11);
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
  sqcRYGate(q, 3.0985932214531644, 0);
  sqcRZGate(q, 2.425343658135382, 0);
  sqcRYGate(q, -0.2512578326801096, 1);
  sqcRZGate(q, 2.6769349478616546, 1);
  sqcRYGate(q, -0.5136052829266012, 2);
  sqcRZGate(q, -0.41312145109895476, 2);
  sqcRYGate(q, 0.6369656928457157, 3);
  sqcRZGate(q, -2.9968835044042565, 3);
  sqcRYGate(q, 0.2623653036054454, 4);
  sqcRZGate(q, 3.0707531461521747, 4);
  sqcRYGate(q, -3.1348591732868436, 5);
  sqcRZGate(q, 0.22497402016838353, 5);
  sqcRYGate(q, -1.7443318405271673, 6);
  sqcRZGate(q, 0.07582548293198864, 6);
  sqcRYGate(q, -2.327647534172712, 7);
  sqcRZGate(q, -2.7039930368555405, 7);
  sqcRYGate(q, -2.7796588066669137, 8);
  sqcRZGate(q, 2.5466391765407423, 8);
  sqcRYGate(q, 1.9644840898180638, 9);
  sqcRZGate(q, -2.7142787831627553, 9);
  sqcRYGate(q, -0.09151480993342975, 10);
  sqcRZGate(q, 2.9819822151722084, 10);
  sqcRYGate(q, -0.1300129879098693, 11);
  sqcRZGate(q, 2.6930292892124763, 11);
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
  sqcRYGate(q, 0.2755987737896266, 0);
  sqcRZGate(q, 2.575669413868533, 0);
  sqcRYGate(q, -2.5671658004844478, 1);
  sqcRZGate(q, 0.661064521990177, 1);
  sqcRYGate(q, -2.2114428844433225, 2);
  sqcRZGate(q, -2.307841202196178, 2);
  sqcRYGate(q, -2.25932445367134, 3);
  sqcRZGate(q, -1.5796826863809506, 3);
  sqcRYGate(q, 1.3722396147993716, 4);
  sqcRZGate(q, -2.3838563531595174, 4);
  sqcRYGate(q, -1.2124264936664026, 5);
  sqcRZGate(q, -2.224038464317603, 5);
  sqcRYGate(q, -2.7414246583890463, 6);
  sqcRZGate(q, -2.705251457343128, 6);
  sqcRYGate(q, -1.2587792714364592, 7);
  sqcRZGate(q, 1.446898797701082, 7);
  sqcRYGate(q, -3.1330546834959896, 8);
  sqcRZGate(q, 0.7171015992813026, 8);
  sqcRYGate(q, 2.5224140700566458, 9);
  sqcRZGate(q, -2.637694735247811, 9);
  sqcRYGate(q, -3.1233834521935244, 10);
  sqcRZGate(q, -0.7400645563467759, 10);
  sqcRYGate(q, 0.9692057211706406, 11);
  sqcRZGate(q, -0.05066663846006402, 11);
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
  sqcRYGate(q, 2.670197944334857, 0);
  sqcRZGate(q, 2.0715217968411936, 0);
  sqcRYGate(q, 0.19402589935407288, 1);
  sqcRZGate(q, 2.4747008050848778, 1);
  sqcRYGate(q, 0.21703129489810835, 2);
  sqcRZGate(q, -0.5952097865022803, 2);
  sqcRYGate(q, 0.5702157182488192, 3);
  sqcRZGate(q, -1.2053565845680898, 3);
  sqcRYGate(q, 0.003249362173429304, 4);
  sqcRZGate(q, 2.142679349423932, 4);
  sqcRYGate(q, 3.138110830797238, 5);
  sqcRZGate(q, 1.1017327843000835, 5);
  sqcRYGate(q, 0.2501322707158323, 6);
  sqcRZGate(q, 2.604464389226537, 6);
  sqcRYGate(q, -1.7478408098248517, 7);
  sqcRZGate(q, -1.9271004082474557, 7);
  sqcRYGate(q, 3.116306210946332, 8);
  sqcRZGate(q, -2.0008350136030355, 8);
  sqcRYGate(q, 0.9885710682237671, 9);
  sqcRZGate(q, -1.0875893352601365, 9);
  sqcRYGate(q, 0.011090831489624076, 10);
  sqcRZGate(q, 0.23455503251248652, 10);
  sqcRYGate(q, -2.046393105245966, 11);
  sqcRZGate(q, -0.7807854167283619, 11);
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
  sqcRYGate(q, 1.1827193843612411, 0);
  sqcRZGate(q, -1.8204780613030314, 0);
  sqcRYGate(q, 3.0909143186772003, 1);
  sqcRZGate(q, -0.0985778592690141, 1);
  sqcRYGate(q, -1.8346080700415408, 2);
  sqcRZGate(q, 2.4540459084340855, 2);
  sqcRYGate(q, 1.7120216428733326, 3);
  sqcRZGate(q, 1.7522145197946102, 3);
  sqcRYGate(q, 2.3559593661561475, 4);
  sqcRZGate(q, 1.0895591734182553, 4);
  sqcRYGate(q, 2.090454127094432, 5);
  sqcRZGate(q, -2.8791247386165084, 5);
  sqcRYGate(q, 0.1818959357238068, 6);
  sqcRZGate(q, -1.5471875975549918, 6);
  sqcRYGate(q, -2.2073356117815797, 7);
  sqcRZGate(q, 2.528508098463226, 7);
  sqcRYGate(q, -0.030924068178451947, 8);
  sqcRZGate(q, 1.0656014818350528, 8);
  sqcRYGate(q, 1.2317463194737859, 9);
  sqcRZGate(q, -1.68433461911145, 9);
  sqcRYGate(q, 0.09036302419409598, 10);
  sqcRZGate(q, -1.5001915275120137, 10);
  sqcRYGate(q, -1.1505949994549225, 11);
  sqcRZGate(q, 3.025474125642867, 11);
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
  sqcRYGate(q, 1.7935442796576888, 0);
  sqcRZGate(q, 2.0224166447398355, 0);
  sqcRYGate(q, 3.0761390068437997, 1);
  sqcRZGate(q, 2.4881185082305124, 1);
  sqcRYGate(q, 1.456857920712058, 2);
  sqcRZGate(q, 2.729292454504699, 2);
  sqcRYGate(q, 0.504685580742091, 3);
  sqcRZGate(q, 2.631337997582732, 3);
  sqcRYGate(q, -3.108647479217785, 4);
  sqcRZGate(q, 3.071899689550592, 4);
  sqcRYGate(q, 1.3667656748878727, 5);
  sqcRZGate(q, 2.9601399436357925, 5);
  sqcRYGate(q, 2.8205880926610867, 6);
  sqcRZGate(q, -2.1543293434407254, 6);
  sqcRYGate(q, 0.7463024425717886, 7);
  sqcRZGate(q, 1.671451634259565, 7);
  sqcRYGate(q, -1.8150599817325206, 8);
  sqcRZGate(q, 2.565599169354957, 8);
  sqcRYGate(q, 2.4646965345410163, 9);
  sqcRZGate(q, 0.5113265893125725, 9);
  sqcRYGate(q, 1.1739413460376975, 10);
  sqcRZGate(q, -0.9775476038142941, 10);
  sqcRYGate(q, -3.0170616363001304, 11);
  sqcRZGate(q, -2.073787561512913, 11);
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
  sqcRYGate(q, 2.6335799158992654, 0);
  sqcRZGate(q, -1.2931635714746725, 0);
  sqcRYGate(q, 0.11499705692704332, 1);
  sqcRZGate(q, 0.11485725841716919, 1);
  sqcRYGate(q, 2.7566887995466245, 2);
  sqcRZGate(q, 2.7779777603540436, 2);
  sqcRYGate(q, -0.29555549767169637, 3);
  sqcRZGate(q, -0.4556325201763157, 3);
  sqcRYGate(q, 0.5769550388461245, 4);
  sqcRZGate(q, -0.7001917106151818, 4);
  sqcRYGate(q, 2.9560777061420316, 5);
  sqcRZGate(q, 2.8869677365748574, 5);
  sqcRYGate(q, 0.013509540858742673, 6);
  sqcRZGate(q, 0.9047473214892845, 6);
  sqcRYGate(q, 0.06298514209632035, 7);
  sqcRZGate(q, 2.706356609686471, 7);
  sqcRYGate(q, -3.1343430036905526, 8);
  sqcRZGate(q, 1.2512680584610636, 8);
  sqcRYGate(q, -0.035578638102567416, 9);
  sqcRZGate(q, 2.2822803154376894, 9);
  sqcRYGate(q, 0.018179685877521834, 10);
  sqcRZGate(q, 1.3011778137626173, 10);
  sqcRYGate(q, 1.0953151505218495, 11);
  sqcRZGate(q, -0.9279789622626167, 11);
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
  sqcRYGate(q, 0.009125312341825342, 0);
  sqcRZGate(q, -0.05350730081384658, 0);
  sqcRYGate(q, 2.9877154364742724, 1);
  sqcRZGate(q, 2.7239988371105612, 1);
  sqcRYGate(q, -2.966833974946814, 2);
  sqcRZGate(q, -2.3742660597467915, 2);
  sqcRYGate(q, 1.259068322159508, 3);
  sqcRZGate(q, -2.32727862830809, 3);
  sqcRYGate(q, 3.083689813166884, 4);
  sqcRZGate(q, -0.5102798811728556, 4);
  sqcRYGate(q, 0.2456362186871962, 5);
  sqcRZGate(q, 1.9924661222858597, 5);
  sqcRYGate(q, 2.5102678176638524, 6);
  sqcRZGate(q, 0.9076697124269424, 6);
  sqcRYGate(q, -2.3970141034698855, 7);
  sqcRZGate(q, 2.5093987095743695, 7);
  sqcRYGate(q, -2.4740284629052507, 8);
  sqcRZGate(q, -2.358899766099758, 8);
  sqcRYGate(q, 0.3421958303271575, 9);
  sqcRZGate(q, 3.0951965407059023, 9);
  sqcRYGate(q, 2.115301075677853, 10);
  sqcRZGate(q, -1.666110752266966, 10);
  sqcRYGate(q, -2.9277001017360487, 11);
  sqcRZGate(q, -2.72890834204734, 11);
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
  sqcRYGate(q, 0.7690013078389953, 0);
  sqcRZGate(q, 1.4171274282668582, 0);
  sqcRYGate(q, -0.6749996464983008, 1);
  sqcRZGate(q, 0.8169918090934674, 1);
  sqcRYGate(q, 1.6959408486687035, 2);
  sqcRZGate(q, -0.04458456900202638, 2);
  sqcRYGate(q, 1.8387687175325862, 3);
  sqcRZGate(q, -0.19339431844082228, 3);
  sqcRYGate(q, 2.9102373505592993, 4);
  sqcRZGate(q, 0.732124773138032, 4);
  sqcRYGate(q, 0.07372425296234653, 5);
  sqcRZGate(q, -0.35832091646103414, 5);
  sqcRYGate(q, 1.581247189326856, 6);
  sqcRZGate(q, -3.1380464486309236, 6);
  sqcRYGate(q, -2.7543510751031235, 7);
  sqcRZGate(q, -2.975965767529799, 7);
  sqcRYGate(q, -0.6168265473461437, 8);
  sqcRZGate(q, 1.4436712420820146, 8);
  sqcRYGate(q, -3.132118972044983, 9);
  sqcRZGate(q, 0.19385715327212394, 9);
  sqcRYGate(q, -2.531000249843159, 10);
  sqcRZGate(q, 0.8539832860596829, 10);
  sqcRYGate(q, 1.786353037580818, 11);
  sqcRZGate(q, -0.10376173567708503, 11);
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
  sqcRYGate(q, 0.9891959185309221, 0);
  sqcRZGate(q, -1.8696419190084725, 0);
  sqcRYGate(q, 0.8261142272917246, 1);
  sqcRZGate(q, -2.311846395927572, 1);
  sqcRYGate(q, -2.432835411390693, 2);
  sqcRZGate(q, -2.0184009937253284, 2);
  sqcRYGate(q, -0.11926042725798683, 3);
  sqcRZGate(q, 2.0279738295722423, 3);
  sqcRYGate(q, -3.1388439549101066, 4);
  sqcRZGate(q, -2.248795251595101, 4);
  sqcRYGate(q, -1.3396618921955659, 5);
  sqcRZGate(q, 0.004658962352193541, 5);
  sqcRYGate(q, -1.836613266111697, 6);
  sqcRZGate(q, 2.8703784343739036, 6);
  sqcRYGate(q, 1.2471645814097174, 7);
  sqcRZGate(q, 0.004868601427301833, 7);
  sqcRYGate(q, 1.3948597984805127, 8);
  sqcRZGate(q, -1.288762317712977, 8);
  sqcRYGate(q, -0.1287149531102001, 9);
  sqcRZGate(q, -2.097046655643143, 9);
  sqcRYGate(q, -0.5827195685073632, 10);
  sqcRZGate(q, -0.13929504548826355, 10);
  sqcRYGate(q, 2.0646207169567585, 11);
  sqcRZGate(q, -0.05489219487887348, 11);
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
  sqcRYGate(q, -0.5820291455061934, 0);
  sqcRZGate(q, -2.0313155035534476, 0);
  sqcRYGate(q, -1.866364593986877, 1);
  sqcRZGate(q, -1.6361488435270752, 1);
  sqcRYGate(q, -2.933879849685637, 2);
  sqcRZGate(q, 2.9637643823475237, 2);
  sqcRYGate(q, 0.9225012671749092, 3);
  sqcRZGate(q, -2.4598546473550154, 3);
  sqcRYGate(q, -0.007155638104492361, 4);
  sqcRZGate(q, -1.9040339780263373, 4);
  sqcRYGate(q, 1.5256052981416572, 5);
  sqcRZGate(q, 1.3151428598306163, 5);
  sqcRYGate(q, -3.1180384033360387, 6);
  sqcRZGate(q, -0.04702406702648254, 6);
  sqcRYGate(q, -1.2160413718286214, 7);
  sqcRZGate(q, 1.7634180159990587, 7);
  sqcRYGate(q, 0.00013833606694526853, 8);
  sqcRZGate(q, -1.7793996501385936, 8);
  sqcRYGate(q, 3.14078261729346, 9);
  sqcRZGate(q, 1.7230266057473695, 9);
  sqcRYGate(q, 2.4115760000108772, 10);
  sqcRZGate(q, -0.49826964224362535, 10);
  sqcRYGate(q, 1.4595785004068187, 11);
  sqcRZGate(q, -1.69456209350193, 11);
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
  sqcRYGate(q, 2.358720884904758, 0);
  sqcRZGate(q, 2.5553594713553793, 0);
  sqcRYGate(q, -1.0530455321664398, 1);
  sqcRZGate(q, -2.877764158025733, 1);
  sqcRYGate(q, -2.8669192230375975, 2);
  sqcRZGate(q, -0.20598902600301816, 2);
  sqcRYGate(q, -2.6333421757685125, 3);
  sqcRZGate(q, -2.3090949165745154, 3);
  sqcRYGate(q, -0.8922879146585565, 4);
  sqcRZGate(q, -0.8742325136606617, 4);
  sqcRYGate(q, -0.18544168320389184, 5);
  sqcRZGate(q, 1.5926678420222762, 5);
  sqcRYGate(q, -2.9348042236396754, 6);
  sqcRZGate(q, 2.638324047905271, 6);
  sqcRYGate(q, 0.21165516679097296, 7);
  sqcRZGate(q, -1.1104633589360817, 7);
  sqcRYGate(q, 1.7798688822777984, 8);
  sqcRZGate(q, 0.13528834910821635, 8);
  sqcRYGate(q, -1.436935857108316, 9);
  sqcRZGate(q, 0.7924735713457739, 9);
  sqcRYGate(q, -1.586810432338657, 10);
  sqcRZGate(q, -1.680843860419671, 10);
  sqcRYGate(q, 1.1332704521318542, 11);
  sqcRZGate(q, 0.7176186855201622, 11);
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
  sqcRYGate(q, 1.0216952273604853, 0);
  sqcRZGate(q, 0.8489192028707766, 0);
  sqcRYGate(q, -1.6698725954244473, 1);
  sqcRZGate(q, -1.8740777670117703, 1);
  sqcRYGate(q, -0.11466012982637079, 2);
  sqcRZGate(q, -0.4523933652897662, 2);
  sqcRYGate(q, -0.0028641177158880405, 3);
  sqcRZGate(q, -0.6904639494602213, 3);
  sqcRYGate(q, 0.004069508728828275, 4);
  sqcRZGate(q, -2.2781016194412906, 4);
  sqcRYGate(q, -3.1283141346978507, 5);
  sqcRZGate(q, 1.6737681038508878, 5);
  sqcRYGate(q, 0.01726782227797259, 6);
  sqcRZGate(q, 0.7390011975502739, 6);
  sqcRYGate(q, 9.106814061965451e-06, 7);
  sqcRZGate(q, 2.541684882808012, 7);
  sqcRYGate(q, -3.130760608206211, 8);
  sqcRZGate(q, -0.7756598705999758, 8);
  sqcRYGate(q, 3.1362253723348745, 9);
  sqcRZGate(q, -2.174495255237621, 9);
  sqcRYGate(q, 1.5199309608678186, 10);
  sqcRZGate(q, -1.5932148509322506, 10);
  sqcRYGate(q, 0.9078198765625256, 11);
  sqcRZGate(q, -2.3298626866094705, 11);
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
  sqcRYGate(q, -1.6879507514464496, 0);
  sqcRZGate(q, 3.1323572596338103, 0);
  sqcRYGate(q, -1.87265851978727, 1);
  sqcRZGate(q, 0.9719780465904461, 1);
  sqcRYGate(q, -0.8402074209588548, 2);
  sqcRZGate(q, -3.1093567084214513, 2);
  sqcRYGate(q, 2.0015045262408586, 3);
  sqcRZGate(q, 1.6953966244578051, 3);
  sqcRYGate(q, -2.108609573672436, 4);
  sqcRZGate(q, 0.06180747063790282, 4);
  sqcRYGate(q, 0.21511635253448888, 5);
  sqcRZGate(q, -2.033989795814776, 5);
  sqcRYGate(q, -1.790337194569472, 6);
  sqcRZGate(q, -3.1149103406496623, 6);
  sqcRYGate(q, -0.58793568337285, 7);
  sqcRZGate(q, -0.14671618510045548, 7);
  sqcRYGate(q, -3.077849048900228, 8);
  sqcRZGate(q, -1.0542639000366119, 8);
  sqcRYGate(q, -1.3136682139950842, 9);
  sqcRZGate(q, 3.053950811433177, 9);
  sqcRYGate(q, -1.4126725602902153, 10);
  sqcRZGate(q, 2.305175349158965, 10);
  sqcRYGate(q, -2.8132159232927942, 11);
  sqcRZGate(q, -3.0506052423034866, 11);
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
  sqcRYGate(q, -0.5420451635974296, 0);
  sqcRZGate(q, 1.976115866536216, 0);
  sqcRYGate(q, 1.6209745984724937, 1);
  sqcRZGate(q, -1.6410732427598687, 1);
  sqcRYGate(q, 3.0814587052824445, 2);
  sqcRZGate(q, 1.223306415332042, 2);
  sqcRYGate(q, 2.446457890980869, 3);
  sqcRZGate(q, -3.1184386794897456, 3);
  sqcRYGate(q, 0.6143660928987177, 4);
  sqcRZGate(q, 3.1241703860864036, 4);
  sqcRYGate(q, -3.069082934553348, 5);
  sqcRZGate(q, 1.3856558789042916, 5);
  sqcRYGate(q, 1.7433005934039945, 6);
  sqcRZGate(q, -0.5191269065406858, 6);
  sqcRYGate(q, 1.530689179800644, 7);
  sqcRZGate(q, -1.4699857255918891, 7);
  sqcRYGate(q, 0.11098187860310471, 8);
  sqcRZGate(q, 0.42430174316539127, 8);
  sqcRYGate(q, -1.7643807276867598, 9);
  sqcRZGate(q, 0.02346928123365186, 9);
  sqcRYGate(q, -1.917486801758825, 10);
  sqcRZGate(q, -0.5856729732756226, 10);
  sqcRYGate(q, 1.1841313406349254, 11);
  sqcRZGate(q, -0.9243111571699094, 11);
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
  sqcRYGate(q, 1.2955349844086332, 0);
  sqcRZGate(q, -1.1605160767461145, 0);
  sqcRYGate(q, -2.201051235837168, 1);
  sqcRZGate(q, -2.24685853980273, 1);
  sqcRYGate(q, 2.254091405823652, 2);
  sqcRZGate(q, -3.0876790498500766, 2);
  sqcRYGate(q, 1.556083977117301, 3);
  sqcRZGate(q, -3.1363489435129854, 3);
  sqcRYGate(q, -1.4296707529433954, 4);
  sqcRZGate(q, 2.146747241394098, 4);
  sqcRYGate(q, 0.06434148661807916, 5);
  sqcRZGate(q, -1.519537207628455, 5);
  sqcRYGate(q, -0.0012654929703517226, 6);
  sqcRZGate(q, -0.48361140550492715, 6);
  sqcRYGate(q, -3.1412302123992193, 7);
  sqcRZGate(q, 1.1881928612428945, 7);
  sqcRYGate(q, -3.0271316946560414, 8);
  sqcRZGate(q, -2.749375668976731, 8);
  sqcRYGate(q, 1.5060969073123098, 9);
  sqcRZGate(q, -0.12613047605626096, 9);
  sqcRYGate(q, -2.533695263102816, 10);
  sqcRZGate(q, 0.1935713930690888, 10);
  sqcRYGate(q, -2.8166436873102008, 11);
  sqcRZGate(q, -2.171438516911242, 11);
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
  sqcRYGate(q, 2.6773476609231945, 0);
  sqcRZGate(q, -0.004583967965769568, 0);
  sqcRYGate(q, -0.020173410309485853, 1);
  sqcRZGate(q, -1.646940004511808, 1);
  sqcRYGate(q, 3.0417128246219427, 2);
  sqcRZGate(q, -3.0945546066591265, 2);
  sqcRYGate(q, -1.6018548372536532, 3);
  sqcRZGate(q, -3.12712674912221, 3);
  sqcRYGate(q, 0.0010878766865162742, 4);
  sqcRZGate(q, 2.213551791430893, 4);
  sqcRYGate(q, 2.286429601176648, 5);
  sqcRZGate(q, -0.004963941090353253, 5);
  sqcRYGate(q, -3.090739836503493, 6);
  sqcRZGate(q, 0.8708779718114473, 6);
  sqcRYGate(q, 0.05507649110924007, 7);
  sqcRZGate(q, 3.000825857364894, 7);
  sqcRYGate(q, 3.128562056095683, 8);
  sqcRZGate(q, 3.1379166865223143, 8);
  sqcRYGate(q, -3.0712122156107755, 9);
  sqcRZGate(q, -0.11171830001750928, 9);
  sqcRYGate(q, -2.105236998798656, 10);
  sqcRZGate(q, -1.3715142879922029, 10);
  sqcRYGate(q, 3.1181025170018106, 11);
  sqcRZGate(q, -1.4062366230503303, 11);
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
  sqcRYGate(q, 2.9891212107793885, 0);
  sqcRZGate(q, 2.262693628773923, 0);
  sqcRYGate(q, -1.1155610270554082, 1);
  sqcRZGate(q, 1.6322457871002676, 1);
  sqcRYGate(q, 3.060176133698331, 2);
  sqcRZGate(q, 0.04261647911162303, 2);
  sqcRYGate(q, 3.074898563201738, 3);
  sqcRZGate(q, 0.6370702905065091, 3);
  sqcRYGate(q, 0.00056386291312269, 4);
  sqcRZGate(q, -1.2106760759272297, 4);
  sqcRYGate(q, 1.5548800009636183, 5);
  sqcRZGate(q, 1.2979281028942395, 5);
  sqcRYGate(q, 3.119983183917004, 6);
  sqcRZGate(q, -1.2858047134051702, 6);
  sqcRYGate(q, -3.1375460128992034, 7);
  sqcRZGate(q, 2.7945554968459145, 7);
  sqcRYGate(q, 0.5817595874054016, 8);
  sqcRZGate(q, -0.09150045638740156, 8);
  sqcRYGate(q, -1.6467972508559763, 9);
  sqcRZGate(q, -3.1201626222349788, 9);
  sqcRYGate(q, 1.5053288998316672, 10);
  sqcRZGate(q, 0.5862654005994354, 10);
  sqcRYGate(q, -0.051262790976106004, 11);
  sqcRZGate(q, 2.9006768355729404, 11);
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
  sqcRYGate(q, 1.6472292530350563, 0);
  sqcRZGate(q, -1.609551178215038, 0);
  sqcRYGate(q, -1.6539149926485566, 1);
  sqcRZGate(q, 1.4729221903182177, 1);
  sqcRYGate(q, 1.6090104570754837, 2);
  sqcRZGate(q, 3.128520550451859, 2);
  sqcRYGate(q, -0.013088805804557069, 3);
  sqcRZGate(q, 2.46667275904471, 3);
  sqcRYGate(q, -2.9620940213801026, 4);
  sqcRZGate(q, 2.876883405093016, 4);
  sqcRYGate(q, 0.052113190912019824, 5);
  sqcRZGate(q, 1.8877414723492407, 5);
  sqcRYGate(q, -2.9977577146515317, 6);
  sqcRZGate(q, -3.0473688049141714, 6);
  sqcRYGate(q, -0.005236595367502872, 7);
  sqcRZGate(q, 2.8595873656372235, 7);
  sqcRYGate(q, -1.5697561070924342, 8);
  sqcRZGate(q, 0.18844397423103845, 8);
  sqcRYGate(q, -1.5873043589110294, 9);
  sqcRZGate(q, -0.002483650813234206, 9);
  sqcRYGate(q, -2.3474141953111456, 10);
  sqcRZGate(q, -2.1855511499206464, 10);
  sqcRYGate(q, -3.0898897047338627, 11);
  sqcRZGate(q, -2.7056365205465562, 11);
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
  sqcRYGate(q, -1.6384530271250428, 0);
  sqcRZGate(q, 0.05659517261827149, 0);
  sqcRYGate(q, 3.035149693983198, 1);
  sqcRZGate(q, -1.5521902518922912, 1);
  sqcRYGate(q, -1.5705775487286318, 2);
  sqcRZGate(q, 3.0895126496417173, 2);
  sqcRYGate(q, 1.4261802434325035, 3);
  sqcRZGate(q, 1.6831035963793848, 3);
  sqcRYGate(q, 0.0010036406885266809, 4);
  sqcRZGate(q, 1.059641193914687, 4);
  sqcRYGate(q, -1.6190290622222776, 5);
  sqcRZGate(q, -0.0075918764208031675, 5);
  sqcRYGate(q, -2.9334865934177423, 6);
  sqcRZGate(q, 0.10363447681459141, 6);
  sqcRYGate(q, -2.992540906243822, 7);
  sqcRZGate(q, -3.138690082987548, 7);
  sqcRYGate(q, -3.133232235199079, 8);
  sqcRZGate(q, -2.951276092349474, 8);
  sqcRYGate(q, 0.5748232203882323, 9);
  sqcRZGate(q, -2.570232270054307, 9);
  sqcRYGate(q, -2.876658062832578, 10);
  sqcRZGate(q, -2.094717771881511, 10);
  sqcRYGate(q, 3.095564666747169, 11);
  sqcRZGate(q, -2.7027089908103656, 11);
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
  sqcRYGate(q, 1.6005350965634186, 0);
  sqcRZGate(q, 1.517134926712032, 0);
  sqcRYGate(q, -1.5711522850952777, 1);
  sqcRZGate(q, -1.5705938554122885, 1);
  sqcRYGate(q, 3.0853151050391636, 2);
  sqcRZGate(q, -1.6234759527846547, 2);
  sqcRYGate(q, -0.0010167453566623612, 3);
  sqcRZGate(q, -0.10542112036417793, 3);
  sqcRYGate(q, 3.141364690094722, 4);
  sqcRZGate(q, -0.7833528465492448, 4);
  sqcRYGate(q, -0.8586452702357087, 5);
  sqcRZGate(q, 1.5815747155841613, 5);
  sqcRYGate(q, -1.719486358569581, 6);
  sqcRZGate(q, -1.5723985411401227, 6);
  sqcRYGate(q, -1.5652673723584483, 7);
  sqcRZGate(q, -1.5669259526646258, 7);
  sqcRYGate(q, 1.5029834134593836, 8);
  sqcRZGate(q, -1.5716166404253897, 8);
  sqcRYGate(q, 0.00044149677115434827, 9);
  sqcRZGate(q, -2.1402588026010942, 9);
  sqcRYGate(q, -1.5898643414136817, 10);
  sqcRZGate(q, 1.5801186666944922, 10);
  sqcRYGate(q, -1.5957544946155304, 11);
  sqcRZGate(q, 1.5636840548249362, 11);
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
  sqcRYGate(q, 3.128618489425861, 0);
  sqcRZGate(q, 2.046821724008377, 0);
  sqcRYGate(q, -1.5705949669322328, 1);
  sqcRZGate(q, -1.5508533198982741, 1);
  sqcRYGate(q, -1.5712396183069528, 2);
  sqcRZGate(q, -0.8954223445890621, 2);
  sqcRYGate(q, 1.6226501629224586, 3);
  sqcRZGate(q, 1.127789640405024, 3);
  sqcRYGate(q, -1.5700467941119707, 4);
  sqcRZGate(q, -2.1604553013098076, 4);
  sqcRYGate(q, -1.5751615278634623, 5);
  sqcRZGate(q, 3.0020244880743228, 5);
  sqcRYGate(q, 1.5705100166866812, 6);
  sqcRZGate(q, -2.136428009020478, 6);
  sqcRYGate(q, 1.5697898067272877, 7);
  sqcRZGate(q, -1.6856355600988329, 7);
  sqcRYGate(q, -1.5715904456906156, 8);
  sqcRZGate(q, 2.5587014529600793, 8);
  sqcRYGate(q, 1.5685350394391944, 9);
  sqcRZGate(q, 0.8694625559162672, 9);
  sqcRYGate(q, -1.5749809554545307, 10);
  sqcRZGate(q, 2.5609952993340763, 10);
  sqcRYGate(q, -1.5688179989383828, 11);
  sqcRZGate(q, -3.0994401275538372, 11);

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
