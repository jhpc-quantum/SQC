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

  sqcRYGate(q, 0.042429474066758566, 0);
  sqcRYGate(q, -0.38218992594243145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7010267266667753, 0);
  sqcRYGate(q, 2.634836920572217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9956363265825097, 1);
  sqcRYGate(q, -2.740480868241672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5541365061578404, 1);
  sqcRYGate(q, -1.0722119070177643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9159887873518964, 2);
  sqcRYGate(q, 1.414661376548749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.978240430287074, 2);
  sqcRYGate(q, 2.946583025427284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.012932142940059, 0);
  sqcRYGate(q, 1.6281427455040407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.807337327650754, 0);
  sqcRYGate(q, 2.2979263511618466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5033174157903006, 1);
  sqcRYGate(q, 0.6118665112938553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.507918100099996, 1);
  sqcRYGate(q, -1.5270834186196587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8600294843141048, 2);
  sqcRYGate(q, 2.7603252331992305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49683191968106843, 2);
  sqcRYGate(q, -2.3701720708457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35575499140054756, 0);
  sqcRYGate(q, 2.553054290707562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0918386067262276, 0);
  sqcRYGate(q, -1.095012031463634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0712475603529086, 1);
  sqcRYGate(q, 1.8082238456459505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3765435633745398, 1);
  sqcRYGate(q, 2.6657936809376332, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6511410997615776, 2);
  sqcRYGate(q, -1.6661866938388308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22371058754140893, 2);
  sqcRYGate(q, -2.5479052213082807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.34240494106602, 0);
  sqcRYGate(q, -0.053320638772065394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.27684828328904393, 0);
  sqcRYGate(q, -0.19842268191742196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3200215091611231, 1);
  sqcRYGate(q, 0.9665330542127784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3067246245657183, 1);
  sqcRYGate(q, -2.6414058259020683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.829208177004409, 2);
  sqcRYGate(q, 1.8606218187956252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3902012314439331, 2);
  sqcRYGate(q, -1.716756493531082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1523844786795796, 0);
  sqcRYGate(q, 0.47727877422090403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4805163063567859, 0);
  sqcRYGate(q, -2.288623995605261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.153191531655166, 1);
  sqcRYGate(q, 1.931755581527426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5181325781002462, 1);
  sqcRYGate(q, 2.825296026714358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6789274491923576, 2);
  sqcRYGate(q, -0.9660453465966673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6699227536013843, 2);
  sqcRYGate(q, 1.5865901852907098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9840029376185848, 0);
  sqcRYGate(q, -1.9514446059711608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.757328969435778, 0);
  sqcRYGate(q, 1.8749518452228378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6536963669916818, 1);
  sqcRYGate(q, -1.1349732501121486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.04613656974521, 1);
  sqcRYGate(q, 1.1976782493959253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4789941981114347, 2);
  sqcRYGate(q, 0.8680925682904723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4359317736917623, 2);
  sqcRYGate(q, 1.0125031320625566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3796827982255742, 0);
  sqcRYGate(q, 2.8960897035398854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5030201125695947, 0);
  sqcRYGate(q, 2.0077675995776407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6350625436842243, 1);
  sqcRYGate(q, 1.093111197945797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.731691102117213, 1);
  sqcRYGate(q, -2.5941261104551177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.078770411475745, 2);
  sqcRYGate(q, -1.4221922457992617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2091586292223986, 2);
  sqcRYGate(q, -0.622658491090853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8414140849353213, 0);
  sqcRYGate(q, 0.14541932370234406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9978363963796539, 0);
  sqcRYGate(q, -1.8349477257442333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8028320374763105, 1);
  sqcRYGate(q, 2.687179638369355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5361780808546222, 1);
  sqcRYGate(q, -2.1557153817531547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6378818714385588, 2);
  sqcRYGate(q, -1.6105462278271718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9038097994467071, 2);
  sqcRYGate(q, 1.0232586388207814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7396551540135194, 0);
  sqcRYGate(q, -2.36777848028356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.047279371394628684, 0);
  sqcRYGate(q, 2.289390748115038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0546972485084303, 1);
  sqcRYGate(q, -2.9043884450559774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3910352753450193, 1);
  sqcRYGate(q, 0.18239283399515394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.307765549977713, 2);
  sqcRYGate(q, -0.04783507171727561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2762899671087087, 2);
  sqcRYGate(q, 1.4817455463801454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6313582005736572, 0);
  sqcRYGate(q, -1.8586792898623312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8354714451387988, 0);
  sqcRYGate(q, -1.1766987076508313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8440789601528766, 1);
  sqcRYGate(q, 2.2938106828248306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.071821800619485, 1);
  sqcRYGate(q, 1.8402877257064216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5933263435354545, 2);
  sqcRYGate(q, -2.7466317441279275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4345314437159282, 2);
  sqcRYGate(q, -0.9950567656289633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0582985181587987, 0);
  sqcRYGate(q, 1.682299993150954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.03890432561455, 0);
  sqcRYGate(q, 1.3909503184013872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4711160925816555, 1);
  sqcRYGate(q, -0.681211975506109, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0304136891772018, 1);
  sqcRYGate(q, 2.1023429426967013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.452861418456163, 2);
  sqcRYGate(q, -2.636885945877103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7902572190727146, 2);
  sqcRYGate(q, 0.6293773875261703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1488289681166375, 0);
  sqcRYGate(q, -2.2675067131155426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.348842806139415, 0);
  sqcRYGate(q, 1.7358656740355203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5846261710200935, 1);
  sqcRYGate(q, -2.2037649666679355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9050930024767876, 1);
  sqcRYGate(q, -2.0776569381459593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.382536900172107, 2);
  sqcRYGate(q, -1.2297479222011096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6158437263294687, 2);
  sqcRYGate(q, -1.2483517787846896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3895441272574705, 0);
  sqcRYGate(q, 2.1415492163582535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.691528024588148, 0);
  sqcRYGate(q, 0.648267700927291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0880650115281316, 1);
  sqcRYGate(q, 2.599567092677177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5659830157994141, 1);
  sqcRYGate(q, -1.7350188912077986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.086505504929857, 2);
  sqcRYGate(q, 2.600436697392101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3684341768689507, 2);
  sqcRYGate(q, -2.4646270124559186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5373199386424519, 0);
  sqcRYGate(q, -0.5695594872495522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.058576004851255, 0);
  sqcRYGate(q, -0.40277512421731476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3747473301930007, 1);
  sqcRYGate(q, 1.7621805895320817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.115417507053719, 1);
  sqcRYGate(q, -2.367899685279389, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3690991780357817, 2);
  sqcRYGate(q, -2.1703122862622193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2555552932778564, 2);
  sqcRYGate(q, -2.6922036798615903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4692037311472363, 0);
  sqcRYGate(q, 0.18203356128113127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07275862373507481, 0);
  sqcRYGate(q, 1.7019830316297284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2466725317469916, 1);
  sqcRYGate(q, 1.0490918712297654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6763340958911757, 1);
  sqcRYGate(q, 0.1330060525287328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8199094378103426, 2);
  sqcRYGate(q, -2.385933277680551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22413011388636964, 2);
  sqcRYGate(q, 0.39177905980053224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06687681158401304, 0);
  sqcRYGate(q, -2.638460866070915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7075045779811872, 0);
  sqcRYGate(q, 1.4560974106179927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3685058432013713, 1);
  sqcRYGate(q, -2.1782188126761497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6689604098743525, 1);
  sqcRYGate(q, -1.020177074662409, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.906423202310277, 2);
  sqcRYGate(q, -0.14805368078093026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.716538526604404, 2);
  sqcRYGate(q, -1.9859949595386626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.78461976154781, 0);
  sqcRYGate(q, -2.5778282285567604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5362644393463882, 0);
  sqcRYGate(q, 0.1755277619585076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3249431441480193, 1);
  sqcRYGate(q, 2.9738673762754324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0007407214947560988, 1);
  sqcRYGate(q, -1.0666600436498843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4508918654405063, 2);
  sqcRYGate(q, -2.997068215963384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.317535348861871, 2);
  sqcRYGate(q, 0.8074863794735174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8253867804033135, 0);
  sqcRYGate(q, -3.0918267749476236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17766472348976667, 0);
  sqcRYGate(q, 0.539285260739681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9659979044519003, 1);
  sqcRYGate(q, 2.2380999190053914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1042743528928582, 1);
  sqcRYGate(q, 0.38594697653957155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.40140528747285664, 2);
  sqcRYGate(q, 2.013810696865826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04595708493740859, 2);
  sqcRYGate(q, -1.9968621840722847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3717707095681826, 0);
  sqcRYGate(q, 0.1717302669825047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0315209986816534, 0);
  sqcRYGate(q, 2.9607746395934167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33720433224209867, 1);
  sqcRYGate(q, 0.9757764055157718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4094260948933388, 1);
  sqcRYGate(q, -2.5434740592005567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16217868176764957, 2);
  sqcRYGate(q, 2.881553745571426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7685681080649859, 2);
  sqcRYGate(q, 0.06561296352625856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2449820976682124, 0);
  sqcRYGate(q, -2.26314211752824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3788799585277958, 0);
  sqcRYGate(q, -0.21133397935808204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7997885903188947, 1);
  sqcRYGate(q, -2.8750659679538937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9556498653727085, 1);
  sqcRYGate(q, 0.0066865221027206595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4666850987956055, 2);
  sqcRYGate(q, 1.3330217041742725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3232297011401224, 2);
  sqcRYGate(q, 2.1286070917640485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3770543524046333, 0);
  sqcRYGate(q, 2.5659563635695073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4201021125765838, 0);
  sqcRYGate(q, 0.5156470652887709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3221120315568125, 1);
  sqcRYGate(q, 0.29482279058167116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07394118040773101, 1);
  sqcRYGate(q, 2.9012566013643983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7888806342090176, 2);
  sqcRYGate(q, 1.5835937886040647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0408349949024425, 2);
  sqcRYGate(q, -2.5962126381649444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.144865564957076, 0);
  sqcRYGate(q, 0.37146916387245055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.198151619931204, 0);
  sqcRYGate(q, -0.27184448476236067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6336018279766602, 1);
  sqcRYGate(q, 0.31703992377776125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.320046952491472, 1);
  sqcRYGate(q, 1.9378623755703102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.758669276446476, 2);
  sqcRYGate(q, -0.9199325984764303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8386832734809637, 2);
  sqcRYGate(q, -0.22741740961553883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2135386228885909, 0);
  sqcRYGate(q, -1.969244557845637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3339439825007293, 0);
  sqcRYGate(q, -3.0273117932500733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.866848277319231, 1);
  sqcRYGate(q, -0.36188901449434857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7473823589318807, 1);
  sqcRYGate(q, -2.0894560178411985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7772188095366566, 2);
  sqcRYGate(q, -1.954709324027018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2555317916185933, 2);
  sqcRYGate(q, -1.6822894484468183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.544677839796484, 0);
  sqcRYGate(q, -2.6226000713086997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4680089824519174, 0);
  sqcRYGate(q, 0.6370596286004977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7828034668523586, 1);
  sqcRYGate(q, 1.0009405393876913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16034850839148343, 1);
  sqcRYGate(q, 0.12039185361760651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8429266730545373, 2);
  sqcRYGate(q, 2.5369206587025346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5942435813361522, 2);
  sqcRYGate(q, 1.306354212718293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8797730578768816, 0);
  sqcRYGate(q, 0.22455109916989713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9103626801625584, 0);
  sqcRYGate(q, -0.49281589606032916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8342528450052473, 1);
  sqcRYGate(q, 0.09830461424131087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.831267177263432, 1);
  sqcRYGate(q, -0.8531606297348189, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.647156485780043, 2);
  sqcRYGate(q, -0.3124620351467202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1051756403687185, 2);
  sqcRYGate(q, -2.9370058306631894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16844572472723565, 0);
  sqcRYGate(q, 0.20802330413258854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.723302898317674, 0);
  sqcRYGate(q, 1.6471435225648248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0583469193316697, 1);
  sqcRYGate(q, 0.0719430323674348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7276176968316979, 1);
  sqcRYGate(q, 1.6366685648642318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2906625166620617, 2);
  sqcRYGate(q, -3.018742504761846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.487846696104059, 2);
  sqcRYGate(q, 0.7725599804443772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.173898801637291, 0);
  sqcRYGate(q, -2.0831371470863873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1241962739847535, 0);
  sqcRYGate(q, 2.3988124605785406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6384754119142046, 1);
  sqcRYGate(q, 2.272536082406324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6130940941904655, 1);
  sqcRYGate(q, 0.7006318760853204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8644610602632414, 2);
  sqcRYGate(q, -1.2008196052669629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6176266517812041, 2);
  sqcRYGate(q, -0.042774031170327874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.004469682820895, 0);
  sqcRYGate(q, -1.8264833043187076, 1);
  sqcRYGate(q, 1.1570434107228555, 2);
  sqcRYGate(q, 2.7273199869924785, 3);

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
