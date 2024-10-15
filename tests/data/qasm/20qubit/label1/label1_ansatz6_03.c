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

  sqcRYGate(q, 1.6727029473662727, 0);
  sqcRYGate(q, 1.6198259272133522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.169342633434007, 0);
  sqcRYGate(q, -2.113729254889855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7544079639021244, 1);
  sqcRYGate(q, 2.0435023806625736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9775748536276163, 1);
  sqcRYGate(q, 0.2650955767874752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1362575918699566, 2);
  sqcRYGate(q, -2.9003140140759878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.450941529447278, 2);
  sqcRYGate(q, 0.6406820108413066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.145165330946625, 3);
  sqcRYGate(q, -0.08126415107917997, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9170420621090063, 3);
  sqcRYGate(q, 3.032796259639315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.090740018483158, 4);
  sqcRYGate(q, -1.7752226264870554, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3593158799891385, 4);
  sqcRYGate(q, -0.33320060014801023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3045470659884666, 5);
  sqcRYGate(q, 1.1431847076983646, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3823841677485555, 5);
  sqcRYGate(q, -0.241753133063507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2785040533062286, 6);
  sqcRYGate(q, 0.06676046929959689, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11117031372564767, 6);
  sqcRYGate(q, -0.07909902921642392, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7028556614130466, 7);
  sqcRYGate(q, -2.623590734756253, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1707178752838694, 7);
  sqcRYGate(q, 2.186007892346897, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3248688777387443, 8);
  sqcRYGate(q, -0.3674727750895661, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3117623262741747, 8);
  sqcRYGate(q, 2.7259034889759652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4127429494624018, 9);
  sqcRYGate(q, 0.9928212828081981, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9468297148671299, 9);
  sqcRYGate(q, 0.4780627674156073, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7697786738448463, 10);
  sqcRYGate(q, -0.389131121591808, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8206420967810973, 10);
  sqcRYGate(q, 0.016449080213288687, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1316709489781518, 11);
  sqcRYGate(q, 1.312743621021074, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8000368381192553, 11);
  sqcRYGate(q, 0.538225879673214, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.24931138766665, 12);
  sqcRYGate(q, 1.0875806007989344, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.618156197228784, 12);
  sqcRYGate(q, 0.34772767600445686, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.012066325891299214, 13);
  sqcRYGate(q, 1.3344550429238988, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.07193142217314893, 13);
  sqcRYGate(q, 0.08426197606186667, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.078825086618319, 14);
  sqcRYGate(q, 1.6714244397185691, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.1309287310453946, 14);
  sqcRYGate(q, 0.12022983308736103, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.9556731969975165, 15);
  sqcRYGate(q, 0.5274735536229027, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.05453276507064064, 15);
  sqcRYGate(q, 2.0941094479486013, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.5330961613122573, 16);
  sqcRYGate(q, -0.9356137206818714, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.1813994183046468, 16);
  sqcRYGate(q, -1.004202388497778, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.603858534214143, 17);
  sqcRYGate(q, -1.488167707195052, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.727705510550253, 17);
  sqcRYGate(q, -0.6211719059717346, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.0982711069171018, 18);
  sqcRYGate(q, -1.2458430336905524, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.20384765182307946, 18);
  sqcRYGate(q, 3.104606404783815, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.417281758514983, 0);
  sqcRYGate(q, 1.9188817240848857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5588394951346558, 0);
  sqcRYGate(q, -2.020657435243341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8642786346945872, 1);
  sqcRYGate(q, -1.2682333967827608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5091253043731498, 1);
  sqcRYGate(q, -0.15685113953224775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38624948055155106, 2);
  sqcRYGate(q, 1.4240457612010364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8591663221909727, 2);
  sqcRYGate(q, 1.420447711353602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5804996927032162, 3);
  sqcRYGate(q, 2.9128507939035893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.001302775450813, 3);
  sqcRYGate(q, -2.993590542225199, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5679938452577508, 4);
  sqcRYGate(q, -3.130669281797425, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.954664996299873, 4);
  sqcRYGate(q, 2.5222534634045135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.053123062443217295, 5);
  sqcRYGate(q, -2.15330902235554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3835492805712626, 5);
  sqcRYGate(q, -2.386966515400136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5730731310738761, 6);
  sqcRYGate(q, 2.479861479925173, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1880567561486739, 6);
  sqcRYGate(q, 0.10547929009124245, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4806624525589809, 7);
  sqcRYGate(q, 1.5511171705344144, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9878443386876263, 7);
  sqcRYGate(q, 2.7483838432066254, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.05301549207392676, 8);
  sqcRYGate(q, 1.669864289289789, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9363457741414316, 8);
  sqcRYGate(q, 1.1322244669675934, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5369436964931658, 9);
  sqcRYGate(q, -1.193466387147558, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0431542850618856, 9);
  sqcRYGate(q, -0.011724842926632022, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.474917466141569, 10);
  sqcRYGate(q, -2.2826475236562462, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6112461547886786, 10);
  sqcRYGate(q, 0.9446466001936368, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.14535922124541215, 11);
  sqcRYGate(q, 0.07754816046702726, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.976675277704697, 11);
  sqcRYGate(q, 3.1255344474381075, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.48519634230944797, 12);
  sqcRYGate(q, -2.068723561735932, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.1032813055365933, 12);
  sqcRYGate(q, -1.6372598106704033, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.8344744840383123, 13);
  sqcRYGate(q, 0.8127151685043109, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4739406997187796, 13);
  sqcRYGate(q, -0.10521980256222135, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9033834324816178, 14);
  sqcRYGate(q, -1.5092635740447276, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.119858562134962, 14);
  sqcRYGate(q, -0.3354339039095695, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6423024504675192, 15);
  sqcRYGate(q, 1.443649150069148, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.8986763245936054, 15);
  sqcRYGate(q, 2.9967178358224777, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.34686898802449306, 16);
  sqcRYGate(q, -2.0083469908042058, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.9595733291673065, 16);
  sqcRYGate(q, -2.394101311973971, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.8236301890447139, 17);
  sqcRYGate(q, 1.8505235067976047, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.9448269025718474, 17);
  sqcRYGate(q, -1.8555132985302796, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.8928288058108014, 18);
  sqcRYGate(q, 1.4270024789595341, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.1576010973391536, 18);
  sqcRYGate(q, 3.070641204330884, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.0059629706905264, 0);
  sqcRYGate(q, -0.5904202189968843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1672649533234436, 0);
  sqcRYGate(q, -2.6785860854979076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5155846842624874, 1);
  sqcRYGate(q, 0.9640426519465392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6203904859273728, 1);
  sqcRYGate(q, 2.5931113875841736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.010354120195775529, 2);
  sqcRYGate(q, 2.0445692319713933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.515210636468156, 2);
  sqcRYGate(q, 0.5742160554016289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8388837115052077, 3);
  sqcRYGate(q, -2.5331898757637434, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7061302196446785, 3);
  sqcRYGate(q, 2.809355666591525, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2119166937321757, 4);
  sqcRYGate(q, 1.964246237073034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2189723787002107, 4);
  sqcRYGate(q, -0.15362512755223667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9348389181930719, 5);
  sqcRYGate(q, -0.3986197074481367, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9149815653533853, 5);
  sqcRYGate(q, -2.786895928182771, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8718142441825614, 6);
  sqcRYGate(q, 3.001270641946486, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7543330595131622, 6);
  sqcRYGate(q, -2.0264357283480487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2888451601395632, 7);
  sqcRYGate(q, -2.1717685208062987, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.013078542056419451, 7);
  sqcRYGate(q, 0.10911476612751603, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2590893405350196, 8);
  sqcRYGate(q, 1.2030848389572064, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1803045767345837, 8);
  sqcRYGate(q, -2.566068620197545, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.21434121275613396, 9);
  sqcRYGate(q, -2.0363434890118666, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.870235933238247, 9);
  sqcRYGate(q, 3.0410631318926766, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0889163251182108, 10);
  sqcRYGate(q, 2.788098326546683, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.11647961119677802, 10);
  sqcRYGate(q, 2.218684102067543, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.37955707683290585, 11);
  sqcRYGate(q, -1.418427527870242, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0152512166699155, 11);
  sqcRYGate(q, -0.14678672098476722, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5556773385458538, 12);
  sqcRYGate(q, -0.3703672003375102, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.219591533267834, 12);
  sqcRYGate(q, -0.5200240920085442, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9252888333096356, 13);
  sqcRYGate(q, 1.2612513384672512, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7062353057654382, 13);
  sqcRYGate(q, 0.04899093568224476, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5841287231605463, 14);
  sqcRYGate(q, -2.1220308246015023, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8458463383874926, 14);
  sqcRYGate(q, -1.4467268586330624, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.5403867856756888, 15);
  sqcRYGate(q, -0.025974523611126593, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.109538943595257, 15);
  sqcRYGate(q, 3.0264860058742546, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.17724219300583138, 16);
  sqcRYGate(q, -2.812967557358708, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.49776497092268135, 16);
  sqcRYGate(q, -2.7034172726789003, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0147896343175296, 17);
  sqcRYGate(q, 0.4642502639374644, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.9283449969849835, 17);
  sqcRYGate(q, 0.6585979853268525, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.4910584615429487, 18);
  sqcRYGate(q, -1.5455105067677888, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.338699014752983, 18);
  sqcRYGate(q, -1.3607190056690064, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.6392304063043825, 0);
  sqcRYGate(q, 0.8400757980678346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0941304511085919, 0);
  sqcRYGate(q, 0.5499319407171596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6052432829527623, 1);
  sqcRYGate(q, 0.9769538403313033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8004465829033265, 1);
  sqcRYGate(q, -0.8607011891771195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5974969385190425, 2);
  sqcRYGate(q, 1.6004709727659305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2152722416957946, 2);
  sqcRYGate(q, 0.016199933515821385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9899314105926944, 3);
  sqcRYGate(q, 2.168492997312148, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.885914189865792, 3);
  sqcRYGate(q, -3.078427906471135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.59107472903967, 4);
  sqcRYGate(q, -1.2914973800011669, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8400251308949187, 4);
  sqcRYGate(q, -1.9030975248978423, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5494132005542385, 5);
  sqcRYGate(q, -2.6742014319337706, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1288460657965276, 5);
  sqcRYGate(q, 1.4704199377900515, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.818108309256695, 6);
  sqcRYGate(q, -2.734885690778225, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.155504553808921, 6);
  sqcRYGate(q, -0.9931302008321589, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.266542047970608, 7);
  sqcRYGate(q, -2.134065736396935, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9192144552628743, 7);
  sqcRYGate(q, -2.266073190240763, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5246579197480887, 8);
  sqcRYGate(q, -2.939743383199365, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.42084564211632103, 8);
  sqcRYGate(q, 2.0342658119339383, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7256488265757985, 9);
  sqcRYGate(q, -0.5122422954816439, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.5305567758642367, 9);
  sqcRYGate(q, -1.9524924072334304, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.35927670993453, 10);
  sqcRYGate(q, 2.8587463788610656, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8360279083520235, 10);
  sqcRYGate(q, -1.6728745026759897, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.23066489846967106, 11);
  sqcRYGate(q, 1.8062414533730387, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.11944696797963332, 11);
  sqcRYGate(q, -0.07681038102504281, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.3635873713402429, 12);
  sqcRYGate(q, -2.52729795066526, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.9260418542167232, 12);
  sqcRYGate(q, -1.6576844409639655, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.837654840393808, 13);
  sqcRYGate(q, 1.6112646073323824, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.067851524547879, 13);
  sqcRYGate(q, -3.01125136875399, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6673812987603744, 14);
  sqcRYGate(q, -2.038116419107424, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.255407249517459, 14);
  sqcRYGate(q, -0.7647580167420079, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.947547648639483, 15);
  sqcRYGate(q, 1.8184168342595317, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.05890173272418, 15);
  sqcRYGate(q, -0.05272777328380908, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.42262479534470737, 16);
  sqcRYGate(q, 2.8239816167231493, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.2507578275157503, 16);
  sqcRYGate(q, 2.478203385922668, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.011502835483249, 17);
  sqcRYGate(q, -1.3664506705129111, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.12061688304697515, 17);
  sqcRYGate(q, 3.074252389336988, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.7822840856996658, 18);
  sqcRYGate(q, -1.971870514484955, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.8493343926084735, 18);
  sqcRYGate(q, -1.6276873011470219, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.0562297344153944, 0);
  sqcRYGate(q, -0.29778085896741757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23870302746714597, 0);
  sqcRYGate(q, -0.4132762188059967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.349912662350675, 1);
  sqcRYGate(q, 0.4609138565945141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5053324953677765, 1);
  sqcRYGate(q, -1.1601067966861667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7048839494215229, 2);
  sqcRYGate(q, -1.5484498210074449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.101169850048507, 2);
  sqcRYGate(q, -2.629843810314395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0395728830956008, 3);
  sqcRYGate(q, -0.45873789387820174, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.018293769184853332, 3);
  sqcRYGate(q, -2.823821539988947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6779161547084644, 4);
  sqcRYGate(q, 1.5417570920193393, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6166903776961914, 4);
  sqcRYGate(q, -2.9954675297795577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6080915871458934, 5);
  sqcRYGate(q, 1.9158395479630972, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.737024508363103, 5);
  sqcRYGate(q, 1.7847460568404188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6083595858955473, 6);
  sqcRYGate(q, -2.180102483851605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.046063347166133514, 6);
  sqcRYGate(q, -2.9722725570701316, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.069757882231102, 7);
  sqcRYGate(q, -2.477828643192092, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.05082558281211913, 7);
  sqcRYGate(q, 0.057200031292013655, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.975606130833472, 8);
  sqcRYGate(q, 1.9496473418078448, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9293668866491553, 8);
  sqcRYGate(q, -0.8921210471900859, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.14990279808468948, 9);
  sqcRYGate(q, 1.7468908899186886, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6703376802440415, 9);
  sqcRYGate(q, -0.0473281151156133, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0068611139187533, 10);
  sqcRYGate(q, -1.7442313431059242, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.462429142380107, 10);
  sqcRYGate(q, 2.9636833764528245, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5499656040003305, 11);
  sqcRYGate(q, -1.6877639271841156, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.21611625422162462, 11);
  sqcRYGate(q, -0.7720119767808565, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6342709542039595, 12);
  sqcRYGate(q, 1.7080627897516614, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.9608769537769235, 12);
  sqcRYGate(q, 1.102181684746169, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7463674002222138, 13);
  sqcRYGate(q, -1.8181044080796038, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6974860659476327, 13);
  sqcRYGate(q, 1.0612161695625169, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.8916923685526836, 14);
  sqcRYGate(q, -0.3444319229953993, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9441825354497625, 14);
  sqcRYGate(q, 0.8639293404911123, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5695512708720954, 15);
  sqcRYGate(q, 0.004732754399254003, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.8654102522719107, 15);
  sqcRYGate(q, -1.9354117397925732, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.3343872857820496, 16);
  sqcRYGate(q, 3.039819502510724, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.5538120540616126, 16);
  sqcRYGate(q, 0.5668626759061741, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.4887249560146639, 17);
  sqcRYGate(q, -0.8101371332587668, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.9130358091076107, 17);
  sqcRYGate(q, 1.424367706054887, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.21910227342180644, 18);
  sqcRYGate(q, -2.0494604443416167, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.7796776499747269, 18);
  sqcRYGate(q, -0.12496070289524429, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5898251963678921, 0);
  sqcRYGate(q, -2.875697462644051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8751082288572398, 0);
  sqcRYGate(q, 2.2937212371095246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9808902414220089, 1);
  sqcRYGate(q, -0.7619192495877428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.311537404245839, 1);
  sqcRYGate(q, 0.8980016972323623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9187586192000365, 2);
  sqcRYGate(q, 1.6318939566757598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.435336073321821, 2);
  sqcRYGate(q, -0.47653097467328465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5677381781463655, 3);
  sqcRYGate(q, -1.5918378313160462, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9356972484048205, 3);
  sqcRYGate(q, -2.9956473012817115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06938334631484544, 4);
  sqcRYGate(q, -1.68753044342038, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9503803063283183, 4);
  sqcRYGate(q, -0.010945993506666349, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8167361973105436, 5);
  sqcRYGate(q, -2.263175251485734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8982148441489755, 5);
  sqcRYGate(q, -0.21258205524386026, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8197376827549006, 6);
  sqcRYGate(q, -2.566379356242875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5720076593769419, 6);
  sqcRYGate(q, 2.929345795845122, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5863815138327415, 7);
  sqcRYGate(q, -1.4543630395490112, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5714205647640938, 7);
  sqcRYGate(q, -2.9683107678225205, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5727403975003635, 8);
  sqcRYGate(q, -2.6708018561913347, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5777148929095333, 8);
  sqcRYGate(q, -1.4853415137410388, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5682780691075298, 9);
  sqcRYGate(q, -1.2622071300533215, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5687145573888084, 9);
  sqcRYGate(q, 2.776819312526391, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5729496767269264, 10);
  sqcRYGate(q, 1.3323963266110184, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.568490823774654, 10);
  sqcRYGate(q, -1.8546011609807191, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5734314031230578, 11);
  sqcRYGate(q, 1.6959996506778998, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5758792227964102, 11);
  sqcRYGate(q, -2.5666685932611304, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5796294052340332, 12);
  sqcRYGate(q, -1.6100759322330944, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5719074877033208, 12);
  sqcRYGate(q, -0.22625527412362845, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5708516408295274, 13);
  sqcRYGate(q, 1.2782514470184425, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5754841232816281, 13);
  sqcRYGate(q, 1.1784581540570827, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.575271387557079, 14);
  sqcRYGate(q, -1.7175845708748467, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5743828603411185, 14);
  sqcRYGate(q, 2.9713653403483278, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5626670766884907, 15);
  sqcRYGate(q, -1.713207833478239, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.569836295644623, 15);
  sqcRYGate(q, 0.34350560220668314, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5732654210510575, 16);
  sqcRYGate(q, 1.2276962386851302, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5674968581090685, 16);
  sqcRYGate(q, -0.38570385396266343, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5779230038797802, 17);
  sqcRYGate(q, -0.3700939058431183, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5709568346946339, 17);
  sqcRYGate(q, 2.861642386730588, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.566854933168157, 18);
  sqcRYGate(q, 2.868767590446182, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.5700703373802145, 18);
  sqcRYGate(q, -0.6402455203737485, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.021524154325794, 0);
  sqcRYGate(q, -0.5544776444307189, 1);
  sqcRYGate(q, -1.6969804877401513, 2);
  sqcRYGate(q, -1.5013027992780925, 3);
  sqcRYGate(q, 3.138345138976945, 4);
  sqcRYGate(q, -1.4133302914274122, 5);
  sqcRYGate(q, 1.5709494966349782, 6);
  sqcRYGate(q, -1.5663620953242006, 7);
  sqcRYGate(q, 1.573406070121572, 8);
  sqcRYGate(q, 1.5707954928416763, 9);
  sqcRYGate(q, 1.5670148104527775, 10);
  sqcRYGate(q, 1.569468162667366, 11);
  sqcRYGate(q, 1.5624824387056693, 12);
  sqcRYGate(q, -1.5700870466532373, 13);
  sqcRYGate(q, -1.5728243635133614, 14);
  sqcRYGate(q, -1.5611871636374366, 15);
  sqcRYGate(q, 1.5685865393526965, 16);
  sqcRYGate(q, 1.561325251693619, 17);
  sqcRYGate(q, -1.5720748422350543, 18);
  sqcRYGate(q, -1.5704625894844666, 19);

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
