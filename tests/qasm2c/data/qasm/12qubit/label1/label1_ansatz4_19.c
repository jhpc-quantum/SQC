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

  sqcRYGate(q, -2.0207377761077843, 0);
  sqcRZGate(q, -1.6755222488363426, 0);
  sqcRYGate(q, -2.7610386544179493, 1);
  sqcRZGate(q, -0.5518546988510027, 1);
  sqcRYGate(q, 1.2392699919431582, 2);
  sqcRZGate(q, 2.5763865017088685, 2);
  sqcRYGate(q, 1.1808558264685827, 3);
  sqcRZGate(q, -2.4318111075382625, 3);
  sqcRYGate(q, -3.1340262507228993, 4);
  sqcRZGate(q, 2.4935307034827496, 4);
  sqcRYGate(q, 3.139889806811948, 5);
  sqcRZGate(q, -0.7012140959946827, 5);
  sqcRYGate(q, 0.008312342394151417, 6);
  sqcRZGate(q, 1.2070123124979635, 6);
  sqcRYGate(q, -0.022200347144679, 7);
  sqcRZGate(q, 1.5922084777164809, 7);
  sqcRYGate(q, -1.5952699273737903, 8);
  sqcRZGate(q, 3.0142560999360755, 8);
  sqcRYGate(q, -1.5445933617313479, 9);
  sqcRZGate(q, -2.711413628431905, 9);
  sqcRYGate(q, -3.13867516109397, 10);
  sqcRZGate(q, 0.029668447446048237, 10);
  sqcRYGate(q, -3.1360496740649295, 11);
  sqcRZGate(q, 2.0126603275674153, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.6269436120579177, 0);
  sqcRZGate(q, -1.253449079603661, 0);
  sqcRYGate(q, 2.866006586811079, 1);
  sqcRZGate(q, -0.4357565148530662, 1);
  sqcRYGate(q, 2.9308157791741007, 2);
  sqcRZGate(q, -0.4076665087833735, 2);
  sqcRYGate(q, 2.9709751137768983, 3);
  sqcRZGate(q, -0.7518283242472765, 3);
  sqcRYGate(q, 1.2966099706216159, 4);
  sqcRZGate(q, 1.5739481190265021, 4);
  sqcRYGate(q, -2.3818931338174303, 5);
  sqcRZGate(q, 0.38274967227736884, 5);
  sqcRYGate(q, 2.868379219738265, 6);
  sqcRZGate(q, -1.22394121716113, 6);
  sqcRYGate(q, -1.961897580789568, 7);
  sqcRZGate(q, 1.073595995734557, 7);
  sqcRYGate(q, -1.2457330145226564, 8);
  sqcRZGate(q, -1.0098679614225752, 8);
  sqcRYGate(q, -2.247050925113278, 9);
  sqcRZGate(q, 1.808809785969986, 9);
  sqcRYGate(q, 2.804335925870169, 10);
  sqcRZGate(q, -2.277737228489302, 10);
  sqcRYGate(q, 1.3512881658027074, 11);
  sqcRZGate(q, 1.6616742761335903, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.59272401977282, 0);
  sqcRZGate(q, -0.41691595297600514, 0);
  sqcRYGate(q, 2.7556951851993334, 1);
  sqcRZGate(q, -1.014354121008699, 1);
  sqcRYGate(q, -0.059224541959219494, 2);
  sqcRZGate(q, 3.0936609772357735, 2);
  sqcRYGate(q, -0.1153334006382396, 3);
  sqcRZGate(q, -2.229175553619882, 3);
  sqcRYGate(q, -0.0005597801088983445, 4);
  sqcRZGate(q, 0.35539738805834276, 4);
  sqcRYGate(q, 3.1321328017672156, 5);
  sqcRZGate(q, 1.1539137455601474, 5);
  sqcRYGate(q, -3.1411502675933383, 6);
  sqcRZGate(q, 3.0921567867235664, 6);
  sqcRYGate(q, 0.026162564577377926, 7);
  sqcRZGate(q, 0.934384573802494, 7);
  sqcRYGate(q, -0.00020089466380042664, 8);
  sqcRZGate(q, -3.0216575619323263, 8);
  sqcRYGate(q, 3.135146498423198, 9);
  sqcRZGate(q, -3.118680166450282, 9);
  sqcRYGate(q, 3.1388553068530505, 10);
  sqcRZGate(q, 2.1431096100473184, 10);
  sqcRYGate(q, 0.025700971694012864, 11);
  sqcRZGate(q, 1.055874741755967, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6220693249692681, 0);
  sqcRZGate(q, -3.13705834047638, 0);
  sqcRYGate(q, 1.2508895921346965, 1);
  sqcRZGate(q, -0.2668614836833161, 1);
  sqcRYGate(q, 1.5842734756882433, 2);
  sqcRZGate(q, 0.776289309182566, 2);
  sqcRYGate(q, -0.051102366303310554, 3);
  sqcRZGate(q, 0.8356563129656144, 3);
  sqcRYGate(q, -2.9268595931436745, 4);
  sqcRZGate(q, -1.849232024431486, 4);
  sqcRYGate(q, -0.0692636733457693, 5);
  sqcRZGate(q, -1.1558064840352296, 5);
  sqcRYGate(q, -2.0367313481776668, 6);
  sqcRZGate(q, -1.5031202974854103, 6);
  sqcRYGate(q, 2.0639004809290915, 7);
  sqcRZGate(q, 1.6857123548420354, 7);
  sqcRYGate(q, -1.2044680267433796, 8);
  sqcRZGate(q, 0.09981716852643173, 8);
  sqcRYGate(q, 0.5785726872222382, 9);
  sqcRZGate(q, 0.9010785070852882, 9);
  sqcRYGate(q, -0.682213847886781, 10);
  sqcRZGate(q, -1.5380269529381618, 10);
  sqcRYGate(q, -2.139444842950901, 11);
  sqcRZGate(q, 1.5899825800396716, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.7329682672263913, 0);
  sqcRZGate(q, 2.28822566372546, 0);
  sqcRYGate(q, 1.1955226001332302, 1);
  sqcRZGate(q, 0.08309600950043479, 1);
  sqcRYGate(q, 0.2809694191740356, 2);
  sqcRZGate(q, 2.2978064371740565, 2);
  sqcRYGate(q, -2.7936919968850447, 3);
  sqcRZGate(q, 2.452421056347569, 3);
  sqcRYGate(q, -0.0004056329287417252, 4);
  sqcRZGate(q, 2.1593064624229616, 4);
  sqcRYGate(q, 0.0009009635413923247, 5);
  sqcRZGate(q, -2.8553096482604166, 5);
  sqcRYGate(q, 1.0986273345694153, 6);
  sqcRZGate(q, 1.4190836724316471, 6);
  sqcRYGate(q, -1.5586284601794134, 7);
  sqcRZGate(q, -2.1504386251726326, 7);
  sqcRYGate(q, -0.010771748348043177, 8);
  sqcRZGate(q, -2.961021990144979, 8);
  sqcRYGate(q, 0.01352087008211038, 9);
  sqcRZGate(q, -2.5295000874287035, 9);
  sqcRYGate(q, -1.2975050411854063, 10);
  sqcRZGate(q, -2.2912932210103625, 10);
  sqcRYGate(q, -2.737249165717188, 11);
  sqcRZGate(q, -3.047409565075941, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.9359399561112944, 0);
  sqcRZGate(q, -0.9305155599900548, 0);
  sqcRYGate(q, 3.101376272154676, 1);
  sqcRZGate(q, 1.5690425313661553, 1);
  sqcRYGate(q, -0.8659789633592158, 2);
  sqcRZGate(q, 2.932599435777667, 2);
  sqcRYGate(q, -0.08364865465601555, 3);
  sqcRZGate(q, -1.45153800506188, 3);
  sqcRYGate(q, 2.360087148182257, 4);
  sqcRZGate(q, 1.066058214723508, 4);
  sqcRYGate(q, 1.516613591939345, 5);
  sqcRZGate(q, -0.7744001346634644, 5);
  sqcRYGate(q, -2.1147489434599906, 6);
  sqcRZGate(q, 0.8256173214319646, 6);
  sqcRYGate(q, -2.3384063737977265, 7);
  sqcRZGate(q, 1.720870718368909, 7);
  sqcRYGate(q, -0.04855893485201879, 8);
  sqcRZGate(q, -1.6735216027707613, 8);
  sqcRYGate(q, 3.0984770793966385, 9);
  sqcRZGate(q, 1.4856320050830076, 9);
  sqcRYGate(q, 1.2491396971943018, 10);
  sqcRZGate(q, 2.0735777864393707, 10);
  sqcRYGate(q, -1.4067204746805224, 11);
  sqcRZGate(q, 0.2507059229611545, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.69619632724946, 0);
  sqcRZGate(q, -2.52932065740373, 0);
  sqcRYGate(q, 1.439893043480966, 1);
  sqcRZGate(q, 2.9991768257798594, 1);
  sqcRYGate(q, 0.0018859294793071332, 2);
  sqcRZGate(q, 0.17579050614772349, 2);
  sqcRYGate(q, -0.001901606352435081, 3);
  sqcRZGate(q, 0.5036707949448155, 3);
  sqcRYGate(q, -3.1366875706522688, 4);
  sqcRZGate(q, -2.925566568673155, 4);
  sqcRYGate(q, -0.0070085063158340875, 5);
  sqcRZGate(q, 0.1109937675001438, 5);
  sqcRYGate(q, -2.897002777187672, 6);
  sqcRZGate(q, 0.548753214350617, 6);
  sqcRYGate(q, -1.25002537620612, 7);
  sqcRZGate(q, 1.7399060631833805, 7);
  sqcRYGate(q, 1.446136923559778, 8);
  sqcRZGate(q, 3.0400402448257178, 8);
  sqcRYGate(q, -1.4410118436539905, 9);
  sqcRZGate(q, 3.0455119523786354, 9);
  sqcRYGate(q, 1.7237158227959057, 10);
  sqcRZGate(q, -1.221220347481967, 10);
  sqcRYGate(q, 2.016003893524492, 11);
  sqcRZGate(q, 2.8879619289481693, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.563255273139549, 0);
  sqcRZGate(q, 0.022129663370954237, 0);
  sqcRYGate(q, -1.672942897317916, 1);
  sqcRZGate(q, -0.4896128665708668, 1);
  sqcRYGate(q, 1.1436157169407988, 2);
  sqcRZGate(q, 0.4807816356702137, 2);
  sqcRYGate(q, -0.3533768486871482, 3);
  sqcRZGate(q, 1.1429470421705186, 3);
  sqcRYGate(q, 2.4962084331582015, 4);
  sqcRZGate(q, 2.921591026432821, 4);
  sqcRYGate(q, -1.1759334007769724, 5);
  sqcRZGate(q, -0.4214031845474213, 5);
  sqcRYGate(q, -0.36977376932154193, 6);
  sqcRZGate(q, -1.686630538636427, 6);
  sqcRYGate(q, 0.5439246733639092, 7);
  sqcRZGate(q, -2.2150330080748932, 7);
  sqcRYGate(q, 1.5458551082884897, 8);
  sqcRZGate(q, -0.01995684946698173, 8);
  sqcRYGate(q, -1.5397597996102022, 9);
  sqcRZGate(q, 3.136995358636554, 9);
  sqcRYGate(q, -1.6552886231937403, 10);
  sqcRZGate(q, 1.7570860858147432, 10);
  sqcRYGate(q, -0.42077128689163956, 11);
  sqcRZGate(q, -2.1730315449871376, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.2790085200231895, 0);
  sqcRZGate(q, -1.166243773983183, 0);
  sqcRYGate(q, -0.7551327668847259, 1);
  sqcRZGate(q, 2.9702681408460316, 1);
  sqcRYGate(q, -1.5550504920536823, 2);
  sqcRZGate(q, -2.4506478006767525, 2);
  sqcRYGate(q, 1.5577249885615139, 3);
  sqcRZGate(q, 0.6071777311994274, 3);
  sqcRYGate(q, 3.1397631335456584, 4);
  sqcRZGate(q, 1.470763779708641, 4);
  sqcRYGate(q, -0.015804455192308584, 5);
  sqcRZGate(q, 0.013520113136500533, 5);
  sqcRYGate(q, -1.3709939568220522, 6);
  sqcRZGate(q, -1.1337351144368686, 6);
  sqcRYGate(q, 1.3751698099319452, 7);
  sqcRZGate(q, -3.0135444910651277, 7);
  sqcRYGate(q, 1.6964841019471173, 8);
  sqcRZGate(q, 1.9128710237577773, 8);
  sqcRYGate(q, 1.7614246552847845, 9);
  sqcRZGate(q, -2.975792902502138, 9);
  sqcRYGate(q, -3.0017581096890256, 10);
  sqcRZGate(q, -1.3456847616749543, 10);
  sqcRYGate(q, -1.4081573641843772, 11);
  sqcRZGate(q, 0.723551902836757, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.8385227854157415, 0);
  sqcRZGate(q, -0.8288725972577665, 0);
  sqcRYGate(q, -2.5156389254932163, 1);
  sqcRZGate(q, 2.2320653017578476, 1);
  sqcRYGate(q, -1.0728991556641763, 2);
  sqcRZGate(q, 0.5157464065201828, 2);
  sqcRYGate(q, -0.8964926717304422, 3);
  sqcRZGate(q, 0.7445567692784566, 3);
  sqcRYGate(q, 1.5626059872068012, 4);
  sqcRZGate(q, 1.5434304618345491, 4);
  sqcRYGate(q, -1.5736637641099227, 5);
  sqcRZGate(q, -1.6946136692866496, 5);
  sqcRYGate(q, -1.4280530532742892, 6);
  sqcRZGate(q, 3.1335121197232114, 6);
  sqcRYGate(q, 1.7068041949612394, 7);
  sqcRZGate(q, 2.2806731807724887, 7);
  sqcRYGate(q, -1.4300090980982167, 8);
  sqcRZGate(q, -3.017416325649934, 8);
  sqcRYGate(q, 1.7440934604946827, 9);
  sqcRZGate(q, 0.11215925430571995, 9);
  sqcRYGate(q, 0.4880572775428494, 10);
  sqcRZGate(q, -2.722157506504247, 10);
  sqcRYGate(q, -2.898997527680103, 11);
  sqcRZGate(q, -3.0864370989163885, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.0862966843887785, 0);
  sqcRZGate(q, -0.5906395578155594, 0);
  sqcRYGate(q, 1.3532964298586156, 1);
  sqcRZGate(q, -0.08410886963484289, 1);
  sqcRYGate(q, 1.5750900897920639, 2);
  sqcRZGate(q, 0.9788659573309593, 2);
  sqcRYGate(q, 1.5461850407650566, 3);
  sqcRZGate(q, 0.6973345940412612, 3);
  sqcRYGate(q, 0.3861000112193933, 4);
  sqcRZGate(q, 0.013053676727844837, 4);
  sqcRYGate(q, 3.1265661524257244, 5);
  sqcRZGate(q, -0.12475690371567325, 5);
  sqcRYGate(q, 0.004868791238667569, 6);
  sqcRZGate(q, -2.986642290718947, 6);
  sqcRYGate(q, -0.013773836908835593, 7);
  sqcRZGate(q, -2.3314700932595374, 7);
  sqcRYGate(q, -1.5012075003212795, 8);
  sqcRZGate(q, -0.16964867290750799, 8);
  sqcRYGate(q, 1.6349232180628777, 9);
  sqcRZGate(q, 1.6253390247682162, 9);
  sqcRYGate(q, 0.2861898542078408, 10);
  sqcRZGate(q, -0.07599173890847029, 10);
  sqcRYGate(q, -2.334449768954352, 11);
  sqcRZGate(q, 1.5751409220014256, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.825963255273716, 0);
  sqcRZGate(q, -2.913560624685443, 0);
  sqcRYGate(q, 0.3722237446144483, 1);
  sqcRZGate(q, 1.969410259285243, 1);
  sqcRYGate(q, -3.1033685753217446, 2);
  sqcRZGate(q, 3.019679200408496, 2);
  sqcRYGate(q, -0.007478500820814915, 3);
  sqcRZGate(q, -1.290103843029411, 3);
  sqcRYGate(q, -1.3909549213401389, 4);
  sqcRZGate(q, -0.024680635129690945, 4);
  sqcRYGate(q, -1.662788601629292, 5);
  sqcRZGate(q, -0.019792678410115738, 5);
  sqcRYGate(q, 1.9139394561683734, 6);
  sqcRZGate(q, 1.1927815031494795, 6);
  sqcRYGate(q, -2.333926594167453, 7);
  sqcRZGate(q, -0.5942616002558898, 7);
  sqcRYGate(q, 0.05928961970108926, 8);
  sqcRZGate(q, -3.0681433318616933, 8);
  sqcRYGate(q, -1.1452267017205597, 9);
  sqcRZGate(q, 1.1169846569809332, 9);
  sqcRYGate(q, 2.8740955274620137, 10);
  sqcRZGate(q, -0.012823751571739095, 10);
  sqcRYGate(q, 1.6341792851011603, 11);
  sqcRZGate(q, 0.39675868119595914, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.9389384209768052, 0);
  sqcRZGate(q, 0.7318856223977699, 0);
  sqcRYGate(q, -0.8976555219781792, 1);
  sqcRZGate(q, 1.758931582450849, 1);
  sqcRYGate(q, 3.1379755906849374, 2);
  sqcRZGate(q, 2.0534050873163903, 2);
  sqcRYGate(q, -0.023265068478859754, 3);
  sqcRZGate(q, 0.583451350921383, 3);
  sqcRYGate(q, -1.9866481672598237, 4);
  sqcRZGate(q, -0.15554587040609028, 4);
  sqcRYGate(q, 0.9835239663385984, 5);
  sqcRZGate(q, 2.6708150113801685, 5);
  sqcRYGate(q, 2.3038756444889086, 6);
  sqcRZGate(q, 2.601230359568191, 6);
  sqcRYGate(q, -1.6005263743504274, 7);
  sqcRZGate(q, 1.7960261375364301, 7);
  sqcRYGate(q, 2.3387219612921255, 8);
  sqcRZGate(q, -0.048992131549394545, 8);
  sqcRYGate(q, -0.21314197890072076, 9);
  sqcRZGate(q, 1.4636571012160378, 9);
  sqcRYGate(q, -2.002505423780749, 10);
  sqcRZGate(q, -0.5443766606781182, 10);
  sqcRYGate(q, 2.7333338686829274, 11);
  sqcRZGate(q, -2.796699386760096, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.6262545275796676, 0);
  sqcRZGate(q, 1.1474904571367996, 0);
  sqcRYGate(q, -1.139929809067721, 1);
  sqcRZGate(q, 2.226012858807656, 1);
  sqcRYGate(q, -1.713360909297827, 2);
  sqcRZGate(q, 1.5561478399128947, 2);
  sqcRYGate(q, -1.6208767029255793, 3);
  sqcRZGate(q, -1.5909556719534415, 3);
  sqcRYGate(q, 3.0994890028805053, 4);
  sqcRZGate(q, -2.202781853186659, 4);
  sqcRYGate(q, 0.012390341183016155, 5);
  sqcRZGate(q, -1.0057116893617781, 5);
  sqcRYGate(q, -3.137274228111637, 6);
  sqcRZGate(q, -3.053379147765151, 6);
  sqcRYGate(q, -0.031413784806090916, 7);
  sqcRZGate(q, 1.6220182075311314, 7);
  sqcRYGate(q, 1.660077012045221, 8);
  sqcRZGate(q, 1.4936219980842598, 8);
  sqcRYGate(q, 2.389134718797849, 9);
  sqcRZGate(q, 0.19500290392581565, 9);
  sqcRYGate(q, 1.079711062089567, 10);
  sqcRZGate(q, 0.6593743936750283, 10);
  sqcRYGate(q, 0.7675258571862489, 11);
  sqcRZGate(q, -1.2210283848361208, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1040343019079844, 0);
  sqcRZGate(q, -1.2737295455539508, 0);
  sqcRYGate(q, -0.11708151459496988, 1);
  sqcRZGate(q, -0.3711780251462051, 1);
  sqcRYGate(q, -1.5972564554231523, 2);
  sqcRZGate(q, 3.0548444263966825, 2);
  sqcRYGate(q, 1.5653035111306264, 3);
  sqcRZGate(q, 1.5611160747855246, 3);
  sqcRYGate(q, -3.117244836241307, 4);
  sqcRZGate(q, -3.0842785803287778, 4);
  sqcRYGate(q, -0.221409072445053, 5);
  sqcRZGate(q, -2.9305577250532022, 5);
  sqcRYGate(q, -3.0948553532562424, 6);
  sqcRZGate(q, -2.583656039065891, 6);
  sqcRYGate(q, 3.125644361907652, 7);
  sqcRZGate(q, 0.20900520144128382, 7);
  sqcRYGate(q, 3.1028825826471955, 8);
  sqcRZGate(q, 2.3779415864737037, 8);
  sqcRYGate(q, 0.013181593411809798, 9);
  sqcRZGate(q, -0.6076301546082927, 9);
  sqcRYGate(q, -3.0236172265612824, 10);
  sqcRZGate(q, -1.6271081368118545, 10);
  sqcRYGate(q, 1.4498114166217304, 11);
  sqcRZGate(q, -3.0927922676362996, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.426728430693696, 0);
  sqcRZGate(q, 0.36788116209242094, 0);
  sqcRYGate(q, -1.7282656497690199, 1);
  sqcRZGate(q, -2.547878555286734, 1);
  sqcRYGate(q, -1.8540694582281343, 2);
  sqcRZGate(q, -2.4586589400207823, 2);
  sqcRYGate(q, -1.7118683425846424, 3);
  sqcRZGate(q, -2.1643783081198773, 3);
  sqcRYGate(q, 3.1406731781422215, 4);
  sqcRZGate(q, -0.7692152979077124, 4);
  sqcRYGate(q, 0.0158334159646385, 5);
  sqcRZGate(q, -2.204970483182115, 5);
  sqcRYGate(q, 1.6185293327283474, 6);
  sqcRZGate(q, -1.6406183776134482, 6);
  sqcRYGate(q, 1.6209441504950062, 7);
  sqcRZGate(q, -1.596721256611056, 7);
  sqcRYGate(q, 1.57876871577843, 8);
  sqcRZGate(q, 3.114144892782141, 8);
  sqcRYGate(q, -1.553929741636086, 9);
  sqcRZGate(q, -1.8190779719106205, 9);
  sqcRYGate(q, -1.6316569087594197, 10);
  sqcRZGate(q, 2.9417504017775067, 10);
  sqcRYGate(q, -2.7315077591552117, 11);
  sqcRZGate(q, -0.13187393288402952, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5307870178800886, 0);
  sqcRZGate(q, 1.2231153139645832, 0);
  sqcRYGate(q, -3.0505221261234583, 1);
  sqcRZGate(q, 2.6575003016669787, 1);
  sqcRYGate(q, -3.129030020064275, 2);
  sqcRZGate(q, -0.8152169282513584, 2);
  sqcRYGate(q, 3.1245539859904827, 3);
  sqcRZGate(q, -0.775771035169841, 3);
  sqcRYGate(q, 0.004888385314558263, 4);
  sqcRZGate(q, 1.3547958278980037, 4);
  sqcRYGate(q, 0.02209762873204879, 5);
  sqcRZGate(q, -1.175239018784032, 5);
  sqcRYGate(q, 1.17772330797131, 6);
  sqcRZGate(q, 2.751110021170571, 6);
  sqcRYGate(q, 1.6274923012033768, 7);
  sqcRZGate(q, -1.0710945326197858, 7);
  sqcRYGate(q, 2.1747374043141567, 8);
  sqcRZGate(q, -0.48448644844703725, 8);
  sqcRYGate(q, 0.11757933586589431, 9);
  sqcRZGate(q, -3.0756923967063012, 9);
  sqcRYGate(q, -2.9722591669166465, 10);
  sqcRZGate(q, 1.5156989286107456, 10);
  sqcRYGate(q, 3.0440284354711777, 11);
  sqcRZGate(q, -0.2401596772764387, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.125723106006356, 0);
  sqcRZGate(q, 1.2363238276476416, 0);
  sqcRYGate(q, 1.5494346029549462, 1);
  sqcRZGate(q, 1.6156620903302101, 1);
  sqcRYGate(q, -2.0049070494788657, 2);
  sqcRZGate(q, 1.5703115002108543, 2);
  sqcRYGate(q, 1.6138243743898588, 3);
  sqcRZGate(q, -1.5676028166875167, 3);
  sqcRYGate(q, -0.21580362129719521, 4);
  sqcRZGate(q, 3.1160716837737694, 4);
  sqcRYGate(q, 3.0667996516775147, 5);
  sqcRZGate(q, 0.04745720482030169, 5);
  sqcRYGate(q, -0.0023837525409922122, 6);
  sqcRZGate(q, 2.273623816320534, 6);
  sqcRYGate(q, -3.1382971808199778, 7);
  sqcRZGate(q, -2.588928912535329, 7);
  sqcRYGate(q, 3.137494872072739, 8);
  sqcRZGate(q, 2.6944292584785865, 8);
  sqcRYGate(q, 0.06710787396331602, 9);
  sqcRZGate(q, -1.8108386369333855, 9);
  sqcRYGate(q, -1.1899496060280763, 10);
  sqcRZGate(q, -0.18758044029249277, 10);
  sqcRYGate(q, 1.1506426433670143, 11);
  sqcRZGate(q, -0.04116569139879641, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9734654175621347, 0);
  sqcRZGate(q, -3.132203034444069, 0);
  sqcRYGate(q, 0.34868769910186614, 1);
  sqcRZGate(q, 1.2262681368769615, 1);
  sqcRYGate(q, 1.5475728578465464, 2);
  sqcRZGate(q, -1.5756810297249724, 2);
  sqcRYGate(q, 1.55699889363583, 3);
  sqcRZGate(q, 1.577062359926823, 3);
  sqcRYGate(q, -1.5710738795297186, 4);
  sqcRZGate(q, -1.5713052901907203, 4);
  sqcRYGate(q, -1.5721722194303975, 5);
  sqcRZGate(q, -2.674325451409021, 5);
  sqcRYGate(q, -1.646947530358569, 6);
  sqcRZGate(q, 2.363376300653283, 6);
  sqcRYGate(q, -1.5337588624081286, 7);
  sqcRZGate(q, -2.2142097064834037, 7);
  sqcRYGate(q, -1.4155453378915273, 8);
  sqcRZGate(q, 0.04468571102628349, 8);
  sqcRYGate(q, -1.6714698685534592, 9);
  sqcRZGate(q, 0.5304767025436439, 9);
  sqcRYGate(q, 1.6521860044958112, 10);
  sqcRZGate(q, 0.030792280010879983, 10);
  sqcRYGate(q, -1.9945352094495183, 11);
  sqcRZGate(q, -1.4936263997878865, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.8344863831736846, 0);
  sqcRZGate(q, 1.5858878112177968, 0);
  sqcRYGate(q, -3.132541252410509, 1);
  sqcRZGate(q, -0.3071597684732967, 1);
  sqcRYGate(q, -1.5611620444528775, 2);
  sqcRZGate(q, 2.698993541569045, 2);
  sqcRYGate(q, -1.5722098564656966, 3);
  sqcRZGate(q, 1.1398247930447105, 3);
  sqcRYGate(q, -1.6986498203104017, 4);
  sqcRZGate(q, 3.1380359226755115, 4);
  sqcRYGate(q, 0.009618642406195477, 5);
  sqcRZGate(q, -1.5220389166411727, 5);
  sqcRYGate(q, -3.1364916243496603, 6);
  sqcRZGate(q, 2.752432943690329, 6);
  sqcRYGate(q, -3.139382818601772, 7);
  sqcRZGate(q, 2.5382213695784013, 7);
  sqcRYGate(q, -0.020038777249889936, 8);
  sqcRZGate(q, -2.2466896549792312, 8);
  sqcRYGate(q, -0.02714525200060303, 9);
  sqcRZGate(q, -0.5174051461285619, 9);
  sqcRYGate(q, -0.753750743155928, 10);
  sqcRZGate(q, -2.6580634730944452, 10);
  sqcRYGate(q, -2.9254035574488904, 11);
  sqcRZGate(q, 2.661396192596149, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5869801916429784, 0);
  sqcRZGate(q, -2.8871175443560904, 0);
  sqcRYGate(q, -1.3834077443543864, 1);
  sqcRZGate(q, 1.4498131660480482, 1);
  sqcRYGate(q, 0.007967688151708785, 2);
  sqcRZGate(q, 3.0499735018991605, 2);
  sqcRYGate(q, 0.0025680950420436943, 3);
  sqcRZGate(q, 2.0680820592479647, 3);
  sqcRYGate(q, 1.1540866636068854, 4);
  sqcRZGate(q, -1.5673506135136748, 4);
  sqcRYGate(q, 0.010061961600023928, 5);
  sqcRZGate(q, -2.0802586059061263, 5);
  sqcRYGate(q, 0.2849120258988202, 6);
  sqcRZGate(q, -1.5057134146543103, 6);
  sqcRYGate(q, 0.07077631340645327, 7);
  sqcRZGate(q, -0.371705185496399, 7);
  sqcRYGate(q, -3.014582952022432, 8);
  sqcRZGate(q, -3.0637540012097535, 8);
  sqcRYGate(q, -1.5000192351166863, 9);
  sqcRZGate(q, -2.5402275654735575, 9);
  sqcRYGate(q, 1.4580921896525327, 10);
  sqcRZGate(q, -0.3210296780179247, 10);
  sqcRYGate(q, 1.4960765607895077, 11);
  sqcRZGate(q, 0.18825237332034603, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.04590859622331766, 0);
  sqcRZGate(q, -0.9422282403611337, 0);
  sqcRYGate(q, -2.068734569212709, 1);
  sqcRZGate(q, -1.41025900646402, 1);
  sqcRYGate(q, 3.1247467205648602, 2);
  sqcRZGate(q, -1.6303758681018579, 2);
  sqcRYGate(q, 1.2287035908922639, 3);
  sqcRZGate(q, -1.5500137096570834, 3);
  sqcRYGate(q, -1.576061103335433, 4);
  sqcRZGate(q, -2.280566008366659, 4);
  sqcRYGate(q, 1.575882802823835, 5);
  sqcRZGate(q, -0.0477697127960095, 5);
  sqcRYGate(q, -0.0007659470573067039, 6);
  sqcRZGate(q, 1.6737771778321706, 6);
  sqcRYGate(q, 3.1413907131253005, 7);
  sqcRZGate(q, 2.7269269956757194, 7);
  sqcRYGate(q, 3.127953626067251, 8);
  sqcRZGate(q, 2.2612001881423547, 8);
  sqcRYGate(q, -3.135947501078732, 9);
  sqcRZGate(q, -2.81341562094414, 9);
  sqcRYGate(q, 1.1626507872396858, 10);
  sqcRZGate(q, 0.054520805883676575, 10);
  sqcRYGate(q, 1.906784059547317, 11);
  sqcRZGate(q, -2.8877303961085365, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.0009770730678066997, 0);
  sqcRZGate(q, -2.639679106430922, 0);
  sqcRYGate(q, 0.01654368311482468, 1);
  sqcRZGate(q, 1.4656190346596638, 1);
  sqcRYGate(q, 0.021465626582520422, 2);
  sqcRZGate(q, 1.7511551605186675, 2);
  sqcRYGate(q, -1.5486060811113183, 3);
  sqcRZGate(q, 0.6226359625057856, 3);
  sqcRYGate(q, -3.0939309407954827, 4);
  sqcRZGate(q, -1.093945929958382, 4);
  sqcRYGate(q, -1.5670444069359126, 5);
  sqcRZGate(q, -2.8347485622545583, 5);
  sqcRYGate(q, 3.1288022178531403, 6);
  sqcRZGate(q, 1.262442698066425, 6);
  sqcRYGate(q, 1.5383695307147018, 7);
  sqcRZGate(q, -2.3648445393215702, 7);
  sqcRYGate(q, -1.5337424616215556, 8);
  sqcRZGate(q, -2.4398496370538187, 8);
  sqcRYGate(q, 0.046535616345317464, 9);
  sqcRZGate(q, -2.219085936342238, 9);
  sqcRYGate(q, -1.572800938827894, 10);
  sqcRZGate(q, 2.0019504880288794, 10);
  sqcRYGate(q, -1.484974402967731, 11);
  sqcRZGate(q, -2.0688044051822887, 11);

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
