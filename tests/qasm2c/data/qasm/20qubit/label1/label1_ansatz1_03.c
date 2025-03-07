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

  sqcRYGate(q, 2.3701092413187723, 0);
  sqcRZGate(q, -0.1991178413740317, 0);
  sqcRYGate(q, -3.0862376480083396, 1);
  sqcRZGate(q, 1.4745623419621465, 1);
  sqcRYGate(q, 2.6764528545052597, 2);
  sqcRZGate(q, -2.858199715138888, 2);
  sqcRYGate(q, -0.501640386910756, 3);
  sqcRZGate(q, -0.7855681946646395, 3);
  sqcRYGate(q, 1.3201739705546929, 4);
  sqcRZGate(q, 2.360493125287379, 4);
  sqcRYGate(q, 1.9178644399255447, 5);
  sqcRZGate(q, 3.0406212251751725, 5);
  sqcRYGate(q, -0.41576335139807097, 6);
  sqcRZGate(q, 0.21806843434080128, 6);
  sqcRYGate(q, 2.0476298141676783, 7);
  sqcRZGate(q, 0.05770172307647451, 7);
  sqcRYGate(q, 2.728736277517896, 8);
  sqcRZGate(q, -3.0376545828246444, 8);
  sqcRYGate(q, 2.687771238743795, 9);
  sqcRZGate(q, 1.2447754915848916, 9);
  sqcRYGate(q, 0.47871779254851177, 10);
  sqcRZGate(q, 0.18709620930086068, 10);
  sqcRYGate(q, -0.14202730268818198, 11);
  sqcRZGate(q, -2.8085958667053705, 11);
  sqcRYGate(q, -2.563065653806278, 12);
  sqcRZGate(q, -0.8104560196376607, 12);
  sqcRYGate(q, 1.144663078570085, 13);
  sqcRZGate(q, -1.8405381997488313, 13);
  sqcRYGate(q, 1.3748805220304285, 14);
  sqcRZGate(q, -2.29989735959101, 14);
  sqcRYGate(q, 1.6489809264718085, 15);
  sqcRZGate(q, -0.057816878763038204, 15);
  sqcRYGate(q, -0.17120064207240837, 16);
  sqcRZGate(q, 0.28556521665972406, 16);
  sqcRYGate(q, -2.5194512947915038, 17);
  sqcRZGate(q, 0.24799465648036276, 17);
  sqcRYGate(q, 2.2902631393532387, 18);
  sqcRZGate(q, 2.9875727438879114, 18);
  sqcRYGate(q, -3.1029352265923866, 19);
  sqcRZGate(q, 0.5605586450775624, 19);
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
  sqcRYGate(q, -0.7817873647058367, 0);
  sqcRZGate(q, 2.213512070571768, 0);
  sqcRYGate(q, 2.7873997738094047, 1);
  sqcRZGate(q, 2.933722121447434, 1);
  sqcRYGate(q, -2.302021390993946, 2);
  sqcRZGate(q, 2.813736688478041, 2);
  sqcRYGate(q, -1.3846694144402998, 3);
  sqcRZGate(q, -3.1189677672602203, 3);
  sqcRYGate(q, 0.9135278234392574, 4);
  sqcRZGate(q, -3.080800559752748, 4);
  sqcRYGate(q, 0.1034672597884511, 5);
  sqcRZGate(q, -2.007595401327656, 5);
  sqcRYGate(q, 0.29647017232853407, 6);
  sqcRZGate(q, 0.22170732366739898, 6);
  sqcRYGate(q, -1.3554288652826165, 7);
  sqcRZGate(q, 2.143481783817073, 7);
  sqcRYGate(q, -1.0814504457712424, 8);
  sqcRZGate(q, 3.0370100838620537, 8);
  sqcRYGate(q, -1.7682486662851853, 9);
  sqcRZGate(q, -2.730781462438797, 9);
  sqcRYGate(q, 1.974831137288823, 10);
  sqcRZGate(q, 3.0848334568622113, 10);
  sqcRYGate(q, -2.9861304514340565, 11);
  sqcRZGate(q, 2.300891607014715, 11);
  sqcRYGate(q, -1.605994589512096, 12);
  sqcRZGate(q, 1.4769351023565065, 12);
  sqcRYGate(q, 2.7688488905259505, 13);
  sqcRZGate(q, 1.537620837248781, 13);
  sqcRYGate(q, 0.053767510256494545, 14);
  sqcRZGate(q, -0.6350150891305846, 14);
  sqcRYGate(q, -1.7615576259006902, 15);
  sqcRZGate(q, 2.7697005741433065, 15);
  sqcRYGate(q, -1.7995428664985988, 16);
  sqcRZGate(q, 2.448364757377178, 16);
  sqcRYGate(q, 1.6101378513389584, 17);
  sqcRZGate(q, -0.11849863617344095, 17);
  sqcRYGate(q, 2.2851462453260583, 18);
  sqcRZGate(q, 0.6276390658941134, 18);
  sqcRYGate(q, 1.9160856921394016, 19);
  sqcRZGate(q, 0.41933084036092055, 19);
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
  sqcRYGate(q, -0.1880110783606978, 0);
  sqcRZGate(q, -2.5680859238551625, 0);
  sqcRYGate(q, 0.8313676675721284, 1);
  sqcRZGate(q, 3.047177212051047, 1);
  sqcRYGate(q, 1.650912816504606, 2);
  sqcRZGate(q, 1.587022987107123, 2);
  sqcRYGate(q, 1.5074689021763494, 3);
  sqcRZGate(q, 0.8667077372226916, 3);
  sqcRYGate(q, 0.6093739497719266, 4);
  sqcRZGate(q, 2.2040496232400066, 4);
  sqcRYGate(q, -1.773101991117625, 5);
  sqcRZGate(q, 2.3373033131644463, 5);
  sqcRYGate(q, 1.3594218801760674, 6);
  sqcRZGate(q, 2.5078169043786662, 6);
  sqcRYGate(q, 1.6772932253035366, 7);
  sqcRZGate(q, 2.868115086798775, 7);
  sqcRYGate(q, 2.1274722285763366, 8);
  sqcRZGate(q, 0.41596396237520405, 8);
  sqcRYGate(q, -2.0832148163276134, 9);
  sqcRZGate(q, 3.1332451996326345, 9);
  sqcRYGate(q, -2.993973630989206, 10);
  sqcRZGate(q, 3.0636821867794204, 10);
  sqcRYGate(q, 1.5816226481334283, 11);
  sqcRZGate(q, 1.9676872596056543, 11);
  sqcRYGate(q, -1.3832732953426563, 12);
  sqcRZGate(q, 1.4379423165312755, 12);
  sqcRYGate(q, -0.838593653213163, 13);
  sqcRZGate(q, 1.834822792135878, 13);
  sqcRYGate(q, -2.3915244421489037, 14);
  sqcRZGate(q, -0.33724557329764604, 14);
  sqcRYGate(q, 2.769509158111988, 15);
  sqcRZGate(q, 0.23345956795632272, 15);
  sqcRYGate(q, 2.2380442820170607, 16);
  sqcRZGate(q, 0.03858894892237383, 16);
  sqcRYGate(q, 1.5167340323692415, 17);
  sqcRZGate(q, -0.7601248717559583, 17);
  sqcRYGate(q, 0.18905077116748004, 18);
  sqcRZGate(q, -3.123486719771309, 18);
  sqcRYGate(q, -2.7138703972383986, 19);
  sqcRZGate(q, -2.6100706253772623, 19);
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
  sqcRYGate(q, -0.4873197683179038, 0);
  sqcRZGate(q, 1.709562893177859, 0);
  sqcRYGate(q, 1.0826916784122869, 1);
  sqcRZGate(q, 2.943660555918142, 1);
  sqcRYGate(q, 1.923358518149771, 2);
  sqcRZGate(q, -0.02606437793824899, 2);
  sqcRYGate(q, -3.0056691625415333, 3);
  sqcRZGate(q, 1.00489725437777, 3);
  sqcRYGate(q, -2.799734577602892, 4);
  sqcRZGate(q, -0.2377667769881331, 4);
  sqcRYGate(q, 3.0627083494317846, 5);
  sqcRZGate(q, -2.5167280025508227, 5);
  sqcRYGate(q, -2.931775690722152, 6);
  sqcRZGate(q, 2.840483176477429, 6);
  sqcRYGate(q, 2.278667478979552, 7);
  sqcRZGate(q, -0.7299531921428786, 7);
  sqcRYGate(q, 3.003753455417267, 8);
  sqcRZGate(q, -3.127840785096127, 8);
  sqcRYGate(q, -0.9891293328994841, 9);
  sqcRZGate(q, 0.06444324282728965, 9);
  sqcRYGate(q, 2.7436049526691204, 10);
  sqcRZGate(q, -0.2846191567866869, 10);
  sqcRYGate(q, 3.035486476499833, 11);
  sqcRZGate(q, -2.885051875870532, 11);
  sqcRYGate(q, 0.4679068713247049, 12);
  sqcRZGate(q, 0.4674156064818271, 12);
  sqcRYGate(q, 1.2445004986011585, 13);
  sqcRZGate(q, 3.1083361709312434, 13);
  sqcRYGate(q, -3.09227411223959, 14);
  sqcRZGate(q, -1.7082979558647262, 14);
  sqcRYGate(q, -1.5428244542836387, 15);
  sqcRZGate(q, -2.7840076109941445, 15);
  sqcRYGate(q, 1.3267301550934765, 16);
  sqcRZGate(q, 1.512093773433719, 16);
  sqcRYGate(q, 2.422661144600151, 17);
  sqcRZGate(q, 1.4177094639568177, 17);
  sqcRYGate(q, 1.9898666514102175, 18);
  sqcRZGate(q, -0.8703384064719489, 18);
  sqcRYGate(q, -0.43580609074783805, 19);
  sqcRZGate(q, -1.557378217601361, 19);
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
  sqcRYGate(q, -1.5913276793296802, 0);
  sqcRZGate(q, 2.151347163792165, 0);
  sqcRYGate(q, -1.39858796013345, 1);
  sqcRZGate(q, -0.0954640914877274, 1);
  sqcRYGate(q, 1.8280573428710332, 2);
  sqcRZGate(q, 2.427545808285996, 2);
  sqcRYGate(q, -0.5168929133703282, 3);
  sqcRZGate(q, -2.4857781920416753, 3);
  sqcRYGate(q, -1.1858169351206436, 4);
  sqcRZGate(q, 1.8119381823133258, 4);
  sqcRYGate(q, -1.0889981158005453, 5);
  sqcRZGate(q, -1.4464719314095744, 5);
  sqcRYGate(q, 0.500850085540167, 6);
  sqcRZGate(q, 1.654956020552657, 6);
  sqcRYGate(q, -0.19096360399613488, 7);
  sqcRZGate(q, -2.5709620292192326, 7);
  sqcRYGate(q, -2.100266817281047, 8);
  sqcRZGate(q, -1.042190415413635, 8);
  sqcRYGate(q, -1.6857452141570015, 9);
  sqcRZGate(q, 0.40912222422239436, 9);
  sqcRYGate(q, -1.5097170953602501, 10);
  sqcRZGate(q, 2.722900512254569, 10);
  sqcRYGate(q, -1.5799448410364683, 11);
  sqcRZGate(q, 1.0688276371645167, 11);
  sqcRYGate(q, 0.15174604912481815, 12);
  sqcRZGate(q, 0.3447888926880412, 12);
  sqcRYGate(q, -1.6195901637380417, 13);
  sqcRZGate(q, 2.9638784786087853, 13);
  sqcRYGate(q, 2.988828657863391, 14);
  sqcRZGate(q, -1.5996801629879185, 14);
  sqcRYGate(q, 2.0036717690844426, 15);
  sqcRZGate(q, 1.5456587387147593, 15);
  sqcRYGate(q, 1.776335512275561, 16);
  sqcRZGate(q, -2.1412265043423027, 16);
  sqcRYGate(q, 2.118946547596604, 17);
  sqcRZGate(q, -2.2379756655176304, 17);
  sqcRYGate(q, -1.8535812708600905, 18);
  sqcRZGate(q, 0.9758009509376594, 18);
  sqcRYGate(q, -1.4830771211152705, 19);
  sqcRZGate(q, 0.9826664358866202, 19);
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
  sqcRYGate(q, 1.7103555214151127, 0);
  sqcRZGate(q, -1.4717656041266158, 0);
  sqcRYGate(q, 0.14291695734481322, 1);
  sqcRZGate(q, 1.6257378042866595, 1);
  sqcRYGate(q, -0.03614923474763753, 2);
  sqcRZGate(q, -0.8227584740580977, 2);
  sqcRYGate(q, -2.9600110753483926, 3);
  sqcRZGate(q, -0.9797973830836302, 3);
  sqcRYGate(q, -0.2241894342928221, 4);
  sqcRZGate(q, -0.4318084208728443, 4);
  sqcRYGate(q, 0.1523660933839892, 5);
  sqcRZGate(q, -1.7632157737997476, 5);
  sqcRYGate(q, -2.97074283329087, 6);
  sqcRZGate(q, 0.438234383103568, 6);
  sqcRYGate(q, 1.5828712043188728, 7);
  sqcRZGate(q, 1.66803484501275, 7);
  sqcRYGate(q, 0.08310198246446365, 8);
  sqcRZGate(q, 1.632702159804649, 8);
  sqcRYGate(q, 0.5319180637041976, 9);
  sqcRZGate(q, -1.5195536436598696, 9);
  sqcRYGate(q, 2.7410951557157683, 10);
  sqcRZGate(q, 1.576544233698553, 10);
  sqcRYGate(q, -0.07048771603769133, 11);
  sqcRZGate(q, 0.9733177848180988, 11);
  sqcRYGate(q, 0.3110099832180298, 12);
  sqcRZGate(q, 1.2749028606758677, 12);
  sqcRYGate(q, 1.295600759556315, 13);
  sqcRZGate(q, 0.6606765970053957, 13);
  sqcRYGate(q, -0.1934764493068366, 14);
  sqcRZGate(q, 1.7659817905009447, 14);
  sqcRYGate(q, -0.23510984949069705, 15);
  sqcRZGate(q, 0.09046089895952991, 15);
  sqcRYGate(q, 0.11764196865361569, 16);
  sqcRZGate(q, 1.7024238745685336, 16);
  sqcRYGate(q, -0.057535759680512825, 17);
  sqcRZGate(q, 2.0651625088825663, 17);
  sqcRYGate(q, -0.0810929266661784, 18);
  sqcRZGate(q, -2.471353507679425, 18);
  sqcRYGate(q, 1.03973410169114, 19);
  sqcRZGate(q, 1.916229397273943, 19);
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
  sqcRYGate(q, 1.6837046823172603, 0);
  sqcRZGate(q, -2.0986688522598516, 0);
  sqcRYGate(q, -1.531202888683675, 1);
  sqcRZGate(q, -2.100645851257808, 1);
  sqcRYGate(q, -1.5500353647542275, 2);
  sqcRZGate(q, -1.0088428713362332, 2);
  sqcRYGate(q, 1.7657450808407333, 3);
  sqcRZGate(q, 2.9305824397104905, 3);
  sqcRYGate(q, -1.9999345332529705, 4);
  sqcRZGate(q, -2.314774605388533, 4);
  sqcRYGate(q, -1.0702249836936824, 5);
  sqcRZGate(q, -2.0321854833609105, 5);
  sqcRYGate(q, 1.669263839166864, 6);
  sqcRZGate(q, 2.5404402843443425, 6);
  sqcRYGate(q, 1.198112388097873, 7);
  sqcRZGate(q, -0.5574946153719625, 7);
  sqcRYGate(q, -2.153380519803906, 8);
  sqcRZGate(q, 2.956443011677196, 8);
  sqcRYGate(q, -1.583723636237404, 9);
  sqcRZGate(q, 1.5539575168218749, 9);
  sqcRYGate(q, 1.230757937961373, 10);
  sqcRZGate(q, -2.063248255880342, 10);
  sqcRYGate(q, -0.8834596554498875, 11);
  sqcRZGate(q, -0.2557947960650324, 11);
  sqcRYGate(q, 1.3847257121575016, 12);
  sqcRZGate(q, -1.6842512518014114, 12);
  sqcRYGate(q, -1.7687671572420547, 13);
  sqcRZGate(q, -1.738639485648483, 13);
  sqcRYGate(q, 1.3042371312723953, 14);
  sqcRZGate(q, 2.5193511700599776, 14);
  sqcRYGate(q, -1.794769894768548, 15);
  sqcRZGate(q, -0.3810981129763658, 15);
  sqcRYGate(q, 2.9069411280660544, 16);
  sqcRZGate(q, 1.8760417247846661, 16);
  sqcRYGate(q, -0.3403806900591898, 17);
  sqcRZGate(q, -2.4236806837093154, 17);
  sqcRYGate(q, -1.4800499739167714, 18);
  sqcRZGate(q, -0.26763792060907843, 18);
  sqcRYGate(q, -1.3588461259370777, 19);
  sqcRZGate(q, -0.2941626040066741, 19);

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
