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

  sqcRYGate(q, 2.851346608476038, 0);
  sqcRYGate(q, 1.6864258000280063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.25447544825531837, 0);
  sqcRYGate(q, -2.5939762345741086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.361714838857069, 0);
  sqcRYGate(q, -2.7533349578947743, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6703342757422477, 0);
  sqcRYGate(q, -0.06765802202244231, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.039455483475475, 0);
  sqcRYGate(q, -0.19154843113964493, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4160413914238026, 0);
  sqcRYGate(q, 2.425204597927218, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8722364622143246, 0);
  sqcRYGate(q, -1.8283513137083949, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.5811874165318036, 0);
  sqcRYGate(q, -3.0223372570700517, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -0.0717456260885269, 0);
  sqcRYGate(q, -2.6600158624211425, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 3.0374523085018796, 0);
  sqcRYGate(q, -0.6160004022797271, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.7075462255558476, 0);
  sqcRYGate(q, -2.3220089989621515, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.7357132950342447, 0);
  sqcRYGate(q, 0.46117208187682424, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.8044362534243765, 0);
  sqcRYGate(q, -0.5025804117596565, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.36091388996015844, 0);
  sqcRYGate(q, -0.4077244171918153, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.4061166899357751, 1);
  sqcRYGate(q, 1.4733826413779416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.488522428478382, 1);
  sqcRYGate(q, 1.0414696375545318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0215851547385606, 1);
  sqcRYGate(q, -2.961297062608502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4272107267070995, 1);
  sqcRYGate(q, -1.954941337257628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1966655464881346, 1);
  sqcRYGate(q, 1.119559667623481, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.9516456200341312, 1);
  sqcRYGate(q, 2.2381741595887163, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.111152546514426, 1);
  sqcRYGate(q, 0.5917438946824342, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -3.079127007823297, 1);
  sqcRYGate(q, -1.16826676102092, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.4004823473746257, 1);
  sqcRYGate(q, 3.010493342505461, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.8135821098724874, 1);
  sqcRYGate(q, -0.059974009092898406, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.6410485316894143, 1);
  sqcRYGate(q, 2.757888839509968, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.3116277774586189, 1);
  sqcRYGate(q, -2.4787842079999653, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.2691595985198396, 2);
  sqcRYGate(q, 2.6514317334893467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6644525293641355, 2);
  sqcRYGate(q, -0.5691763456446006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6088995578059517, 2);
  sqcRYGate(q, 1.4318862177954168, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.843661107295, 2);
  sqcRYGate(q, -2.905550333122571, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.007131772397930725, 2);
  sqcRYGate(q, -0.7927201072811062, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6821135011052912, 2);
  sqcRYGate(q, -1.9105792908772061, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.9733018063390317, 2);
  sqcRYGate(q, -1.091540398634355, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.1436761196437546, 2);
  sqcRYGate(q, -1.4790367987537634, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.5029963762465863, 2);
  sqcRYGate(q, 0.7747576426676352, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -2.0201463873928365, 2);
  sqcRYGate(q, -0.4601214469906649, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.4742469676863488, 3);
  sqcRYGate(q, -0.42646663418683867, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3309012593918097, 3);
  sqcRYGate(q, 1.424672864630298, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7743775634773744, 3);
  sqcRYGate(q, 2.026000080971029, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7432106360446098, 3);
  sqcRYGate(q, -1.3850181604695537, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.102142122481096, 3);
  sqcRYGate(q, 2.2417437782164535, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.2239219215462955, 3);
  sqcRYGate(q, -0.6077283109633287, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.6207064047224815, 3);
  sqcRYGate(q, 1.566105930281215, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.8328177269926287, 3);
  sqcRYGate(q, 1.9489232758115895, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.7999165865984943, 4);
  sqcRYGate(q, 0.9781907541245989, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2142666078508106, 4);
  sqcRYGate(q, -1.1843858959095117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4909169639030964, 4);
  sqcRYGate(q, 1.93804037061998, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1364176230741476, 4);
  sqcRYGate(q, -0.7266442728993772, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0760176485580374, 4);
  sqcRYGate(q, 1.9666985399170054, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.7662502629447054, 4);
  sqcRYGate(q, -1.294078639783768, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.5492944702519953, 5);
  sqcRYGate(q, -2.8572579391431967, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.022423066043778, 5);
  sqcRYGate(q, -2.755903469588318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6681442559743798, 5);
  sqcRYGate(q, 2.2424195657305273, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.16103189282830677, 5);
  sqcRYGate(q, 0.5165418968248172, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.892355000139033, 6);
  sqcRYGate(q, 0.5689290769894597, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.504241674207995, 6);
  sqcRYGate(q, 2.57358376716896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7782561782056336, 0);
  sqcRYGate(q, -2.36947103800987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7059136817575418, 0);
  sqcRYGate(q, -1.641515378797873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1420136797253115, 0);
  sqcRYGate(q, 0.4319761062926899, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3952775249905356, 0);
  sqcRYGate(q, -2.3244608391790518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5674806907940644, 0);
  sqcRYGate(q, -0.7998172796025713, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9261201940785115, 0);
  sqcRYGate(q, 0.8985635952107032, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.963269141594931, 0);
  sqcRYGate(q, -2.987196315272329, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -0.9624607132925913, 0);
  sqcRYGate(q, 2.6883734468216978, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.2632124553795947, 0);
  sqcRYGate(q, -0.10461367882978402, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.7061389079675344, 0);
  sqcRYGate(q, 1.593359249807063, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.6165341758837906, 0);
  sqcRYGate(q, -1.7288289548461766, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.6745519164780651, 0);
  sqcRYGate(q, 0.7582867923758867, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.790383084408936, 0);
  sqcRYGate(q, 0.5693738802227272, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.46258272956884, 0);
  sqcRYGate(q, -2.321732338113447, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.1235259902173942, 1);
  sqcRYGate(q, 0.008174611778642345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9352105737163292, 1);
  sqcRYGate(q, -0.4214925606050565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4003793995489113, 1);
  sqcRYGate(q, 2.539535477509971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1385171183693314, 1);
  sqcRYGate(q, -0.5507669283145518, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9000049968432289, 1);
  sqcRYGate(q, -1.7896575155380772, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.2907960956537907, 1);
  sqcRYGate(q, -1.0520425228161345, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.8846764816547843, 1);
  sqcRYGate(q, 0.6421263549973494, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.622989268773677, 1);
  sqcRYGate(q, 1.0924258903405246, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.5846257735032294, 1);
  sqcRYGate(q, 2.5962497961569726, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -3.1306087112419316, 1);
  sqcRYGate(q, -0.9771272964639125, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -2.4605259185992403, 1);
  sqcRYGate(q, -2.880584427674666, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.438067116355469, 1);
  sqcRYGate(q, 1.1912793375415047, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.03450091394544, 2);
  sqcRYGate(q, 1.1980104349554361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8703517407086815, 2);
  sqcRYGate(q, 2.0973276919827506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3197777252597076, 2);
  sqcRYGate(q, -0.1440412729312134, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2984086967886148, 2);
  sqcRYGate(q, 1.430786819785256, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2732956772700641, 2);
  sqcRYGate(q, -2.139268469834879, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.7748906961603477, 2);
  sqcRYGate(q, 2.8591750792879744, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.9367186037432349, 2);
  sqcRYGate(q, -0.2545982874490864, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.1713910196237496, 2);
  sqcRYGate(q, 1.9696994475961054, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.044631057251265, 2);
  sqcRYGate(q, 2.6144629081942217, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.14638431797322138, 2);
  sqcRYGate(q, -1.0030334389728162, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -2.7111186399334053, 3);
  sqcRYGate(q, 1.9573107380136257, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.77579651345439, 3);
  sqcRYGate(q, 0.2843029091296012, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.40568608855440047, 3);
  sqcRYGate(q, -0.4903225092716763, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.845272981450187, 3);
  sqcRYGate(q, -0.45039374508881913, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6695914893482282, 3);
  sqcRYGate(q, 0.3300016566797659, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.2303089135029097, 3);
  sqcRYGate(q, -0.7563532427040024, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.5992638875169805, 3);
  sqcRYGate(q, -0.6717335946792361, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.010231968246901, 3);
  sqcRYGate(q, 1.7606995782277925, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.707738109653285, 4);
  sqcRYGate(q, -0.8697273721925782, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6369771678379229, 4);
  sqcRYGate(q, -0.5218156443871038, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.972503690530297, 4);
  sqcRYGate(q, -2.8450379998526705, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6867075623835786, 4);
  sqcRYGate(q, 2.0323867903046953, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6798716777415257, 4);
  sqcRYGate(q, -1.8720117896878898, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.10406107605944563, 4);
  sqcRYGate(q, -0.5986590168575772, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.3670950944769027, 5);
  sqcRYGate(q, 0.403956926191273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6912607293302473, 5);
  sqcRYGate(q, 2.5226944548949723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14142925308904974, 5);
  sqcRYGate(q, -0.5396531180119366, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1001163201584503, 5);
  sqcRYGate(q, -2.937222721804493, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1157339093301832, 6);
  sqcRYGate(q, 1.8755745690630137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22583491068562545, 6);
  sqcRYGate(q, 2.5763424366317995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9969803582421166, 0);
  sqcRYGate(q, -2.6194825919760514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.956141862296724, 0);
  sqcRYGate(q, 0.4238886702467841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6810937335984621, 0);
  sqcRYGate(q, 0.026686197002569575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08800815991273445, 0);
  sqcRYGate(q, -2.222693598725681, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.76601172789356, 0);
  sqcRYGate(q, 2.909148453606255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.109921743707007, 0);
  sqcRYGate(q, -2.97966493607384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5050155220734547, 0);
  sqcRYGate(q, -1.146514675040819, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.8320038097685603, 0);
  sqcRYGate(q, -2.6865663878345334, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.7939115005681066, 0);
  sqcRYGate(q, -3.005027428710779, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.8474019434114891, 0);
  sqcRYGate(q, -1.7042303792616593, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.44800580770933157, 0);
  sqcRYGate(q, 0.6769290255931709, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.3140933084201636, 0);
  sqcRYGate(q, -1.0483133278398764, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.0086157594861094, 0);
  sqcRYGate(q, -1.2751918667615003, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.4043631197369846, 0);
  sqcRYGate(q, 2.5209475934505567, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.9382116676612333, 1);
  sqcRYGate(q, -0.5726681091126969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3981851531775717, 1);
  sqcRYGate(q, 2.6634899810588064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18227657842779274, 1);
  sqcRYGate(q, 1.4014776885397628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0935729238745013, 1);
  sqcRYGate(q, 0.31868035672535744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6729316804182484, 1);
  sqcRYGate(q, -2.144700378057405, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 0.028646009022123945, 1);
  sqcRYGate(q, -0.7022661099302335, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.4510243494352926, 1);
  sqcRYGate(q, 2.8478641513321956, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.8381095746188723, 1);
  sqcRYGate(q, 2.3151697396942903, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.1229410778760478, 1);
  sqcRYGate(q, -0.3248418429760971, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.2174941393164505, 1);
  sqcRYGate(q, -2.575632916121897, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.840970278263954, 1);
  sqcRYGate(q, -2.8864246400311355, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.858763423232524, 1);
  sqcRYGate(q, 0.6644366110015172, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.7679114532771742, 2);
  sqcRYGate(q, 0.890154590444157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.196720834284564, 2);
  sqcRYGate(q, -0.0024624534059972613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6382624898868565, 2);
  sqcRYGate(q, -2.6941437604899763, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.19286871116903193, 2);
  sqcRYGate(q, 1.2304332146492207, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9168987533649284, 2);
  sqcRYGate(q, 2.5605286833173984, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.2516861543402529, 2);
  sqcRYGate(q, 3.003531374479421, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.4015891749800167, 2);
  sqcRYGate(q, -2.742937633870502, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.2072221057062054, 2);
  sqcRYGate(q, 1.3782583261904557, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.2797592116342944, 2);
  sqcRYGate(q, -2.6586506816203603, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -2.256537514072629, 2);
  sqcRYGate(q, 0.7747093469264925, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.8618105699873895, 3);
  sqcRYGate(q, 0.19144485878927053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6884078377952172, 3);
  sqcRYGate(q, -2.021419516949188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2401991716800893, 3);
  sqcRYGate(q, -1.044399463644056, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.022450488834308224, 3);
  sqcRYGate(q, 0.3730882312978787, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2120320394280881, 3);
  sqcRYGate(q, 2.033426200195821, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.4755200445884635, 3);
  sqcRYGate(q, -1.7028236142638207, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.231729290394635, 3);
  sqcRYGate(q, -1.2870365745310373, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -0.9676821672804339, 3);
  sqcRYGate(q, 0.6877816685110917, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.6014931135971517, 4);
  sqcRYGate(q, 0.38676757979148685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5005073831741891, 4);
  sqcRYGate(q, -1.6259578107453434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4546926647882703, 4);
  sqcRYGate(q, -2.172571624526946, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2922771185289248, 4);
  sqcRYGate(q, 1.1789368398735132, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8760056235420297, 4);
  sqcRYGate(q, 1.983511966058213, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.932049040184637, 4);
  sqcRYGate(q, -0.33469360265294146, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.0342490010651515, 5);
  sqcRYGate(q, 1.885181331167682, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1567693331651525, 5);
  sqcRYGate(q, -0.3921348177165519, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2761169042698075, 5);
  sqcRYGate(q, -2.367196334246896, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.766351516673831, 5);
  sqcRYGate(q, 0.4871384508780031, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4251144980040225, 6);
  sqcRYGate(q, -0.020100057950084068, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6688456287938536, 6);
  sqcRYGate(q, -3.0481126594102412, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9333981630779515, 0);
  sqcRYGate(q, -0.6726185168828176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8722651596081477, 0);
  sqcRYGate(q, 2.2823864493024484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7487744317865692, 0);
  sqcRYGate(q, 1.1165474143090328, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4422260070750625, 0);
  sqcRYGate(q, -2.4285491865503763, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.770184973622718, 0);
  sqcRYGate(q, -1.036447507495638, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8169465514437073, 0);
  sqcRYGate(q, 2.9508904297682093, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8587048127432055, 0);
  sqcRYGate(q, -0.7720325779870096, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.421345859146433, 0);
  sqcRYGate(q, 2.563729665615643, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.9610709934781636, 0);
  sqcRYGate(q, -2.5350938889880044, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.3914516489746793, 0);
  sqcRYGate(q, 0.24641920235282644, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -0.5747273500354053, 0);
  sqcRYGate(q, 3.048310428327449, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.011808841202894316, 0);
  sqcRYGate(q, 0.07281431951449269, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.1662157864482456, 0);
  sqcRYGate(q, 0.10285652881442792, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.09064563153983493, 0);
  sqcRYGate(q, -1.9164204628556325, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.6828186749771965, 1);
  sqcRYGate(q, -0.031036085553400202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2686155162284054, 1);
  sqcRYGate(q, 0.1570192698469521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21285539113572016, 1);
  sqcRYGate(q, -2.8024149184756477, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2978588877044201, 1);
  sqcRYGate(q, 2.5339813091974843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5517714652832715, 1);
  sqcRYGate(q, 2.9841084669438143, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 0.173619133230364, 1);
  sqcRYGate(q, -2.7043848612440886, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.884568999841722, 1);
  sqcRYGate(q, 3.101036162909129, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.5707516765184177, 1);
  sqcRYGate(q, -0.24592546184681438, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.1855894866313736, 1);
  sqcRYGate(q, 2.1251494273660176, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.0897568219807265, 1);
  sqcRYGate(q, -1.5628872078133487, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.621489951035537, 1);
  sqcRYGate(q, -1.7171863372303253, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.572622674432183, 1);
  sqcRYGate(q, 2.902090243077148, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.527611792676325, 2);
  sqcRYGate(q, -2.472097774536615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.091354264003484, 2);
  sqcRYGate(q, 0.18575246291247094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8850992339667985, 2);
  sqcRYGate(q, 0.6891037947064058, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2893008915280202, 2);
  sqcRYGate(q, 3.0469050884389146, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.30956750290066015, 2);
  sqcRYGate(q, 1.1486081180804097, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.19839668039635236, 2);
  sqcRYGate(q, -3.126338612813274, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.0463324925416115, 2);
  sqcRYGate(q, -0.36439832878389344, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.6868858334167728, 2);
  sqcRYGate(q, -1.2346829275462736, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.624117056620133, 2);
  sqcRYGate(q, -1.795958381454703, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.652514251496365, 2);
  sqcRYGate(q, -2.1039037644612586, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.9938119834157453, 3);
  sqcRYGate(q, -0.559762579191708, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3722436261938926, 3);
  sqcRYGate(q, 2.599118402868608, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3817361938279204, 3);
  sqcRYGate(q, 3.0107964265621527, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7865797375593475, 3);
  sqcRYGate(q, 2.843019504245327, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2087815366328538, 3);
  sqcRYGate(q, -2.6087519650902355, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 3.109551716161734, 3);
  sqcRYGate(q, 0.46964201482278334, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.6661233153941302, 3);
  sqcRYGate(q, -1.5570733590990484, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.5626263682393846, 3);
  sqcRYGate(q, -1.4066203600382523, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.10795391152696965, 4);
  sqcRYGate(q, -2.9190700464029375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11841904424627982, 4);
  sqcRYGate(q, 2.895999836666271, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6989520098525166, 4);
  sqcRYGate(q, -1.5180728572946773, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2375566120717547, 4);
  sqcRYGate(q, 0.9052656478731081, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.208116087754637, 4);
  sqcRYGate(q, -2.0940374877385493, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.494174129167491, 4);
  sqcRYGate(q, -0.8848716127640459, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.6033181716433296, 5);
  sqcRYGate(q, -0.6696274589309099, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0856825702159725, 5);
  sqcRYGate(q, 0.07916030503367555, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0633216122524278, 5);
  sqcRYGate(q, 1.1200870537085423, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.51048491099926, 5);
  sqcRYGate(q, 3.014638219828184, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6827995605222902, 6);
  sqcRYGate(q, -2.5746378904716054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22698027138758944, 6);
  sqcRYGate(q, -1.7929110090302587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.048254176304735, 0);
  sqcRYGate(q, 1.1947237974657057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3650944600912735, 0);
  sqcRYGate(q, 1.0171887074728705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4313156066900403, 0);
  sqcRYGate(q, 2.191611159576833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.825691273597112, 0);
  sqcRYGate(q, 2.9636471292250057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.761416741206727, 0);
  sqcRYGate(q, -2.991808662560748, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3097113804000289, 0);
  sqcRYGate(q, 2.9691923135160914, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2535538987214512, 0);
  sqcRYGate(q, 1.6795188554278893, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.208171731362087, 0);
  sqcRYGate(q, 0.42164019464617464, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.3646567285123845, 0);
  sqcRYGate(q, 0.27777426649849973, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.08216975360933976, 0);
  sqcRYGate(q, -0.14670644024279633, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.0991894164822962, 0);
  sqcRYGate(q, 1.4915356138073932, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.8197259351715491, 0);
  sqcRYGate(q, 1.3892626589244976, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.9966031306014873, 0);
  sqcRYGate(q, -2.6362460334028626, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.7480381513714542, 0);
  sqcRYGate(q, 1.232226959119723, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.1503071931465285, 1);
  sqcRYGate(q, -0.798037153555403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.966930326838775, 1);
  sqcRYGate(q, 3.073118055209772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1405313982519276, 1);
  sqcRYGate(q, -0.7319606442350866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9585052189575397, 1);
  sqcRYGate(q, -1.8642102227454396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7306077035418665, 1);
  sqcRYGate(q, 1.6197880258890822, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.6728631010365556, 1);
  sqcRYGate(q, -2.303551764318412, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.993748348964884, 1);
  sqcRYGate(q, 2.5892347307781263, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.5501632335442181, 1);
  sqcRYGate(q, -1.370142777099972, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.904884814149438, 1);
  sqcRYGate(q, -2.7808501820195026, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.5783254630612245, 1);
  sqcRYGate(q, -1.41344871401226, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.1443118967370829, 1);
  sqcRYGate(q, -3.006793747538431, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.44245166230471167, 1);
  sqcRYGate(q, -0.02916484627050853, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.222113802088421, 2);
  sqcRYGate(q, -0.6095957798517606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.510840274224652, 2);
  sqcRYGate(q, -1.9523219694074543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9653770111058178, 2);
  sqcRYGate(q, -1.5418330370694036, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4070167778475997, 2);
  sqcRYGate(q, -2.084632279865965, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.377730932658741, 2);
  sqcRYGate(q, -1.8691355764880324, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6585492987406283, 2);
  sqcRYGate(q, -0.2725946629582871, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.268864338524148, 2);
  sqcRYGate(q, -0.803534182881168, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.4474379191117477, 2);
  sqcRYGate(q, -2.689785281145701, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -0.4602387655324775, 2);
  sqcRYGate(q, -2.931310012123884, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.961974741365182, 2);
  sqcRYGate(q, 1.6550836373275588, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.8852958282460442, 3);
  sqcRYGate(q, -2.593449482228948, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6002277263623932, 3);
  sqcRYGate(q, -1.6679016330350824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9693426776361342, 3);
  sqcRYGate(q, -0.38447729136260406, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7920049688318533, 3);
  sqcRYGate(q, 2.6050501785557865, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.967528076175646, 3);
  sqcRYGate(q, 1.1252133192240708, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.7804166587012152, 3);
  sqcRYGate(q, -1.5943927520333947, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.8481784868630973, 3);
  sqcRYGate(q, -2.4298676665623287, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 3.0238897768117945, 3);
  sqcRYGate(q, 2.370470459406814, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.15215037410300347, 4);
  sqcRYGate(q, 0.4546213571720399, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.046674075046459, 4);
  sqcRYGate(q, 0.6994699838240317, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3468100643001861, 4);
  sqcRYGate(q, 2.270031818175294, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1372478819932257, 4);
  sqcRYGate(q, 2.1235572517236463, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.653789319797729, 4);
  sqcRYGate(q, -0.580714009712973, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.18050274692886958, 4);
  sqcRYGate(q, -1.0951134133515452, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.25789530034696756, 5);
  sqcRYGate(q, 1.517589741508484, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.800525414095388, 5);
  sqcRYGate(q, 1.3541034367189184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7011422136662153, 5);
  sqcRYGate(q, 1.0731326113695385, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1197242969195877, 5);
  sqcRYGate(q, -2.343494514670725, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3396754734450131, 6);
  sqcRYGate(q, -2.5773391073842986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.067829961830462, 6);
  sqcRYGate(q, 1.359329289255684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06018070354784089, 0);
  sqcRYGate(q, 0.07700025370737862, 1);
  sqcRYGate(q, 0.02512843441864191, 2);
  sqcRYGate(q, -1.1225203638998895, 3);
  sqcRYGate(q, 1.655383279991627, 4);
  sqcRYGate(q, -0.7375972015032008, 5);
  sqcRYGate(q, 0.858400775252221, 6);
  sqcRYGate(q, 1.9137980446062315, 7);

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
