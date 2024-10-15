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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.16071440070084717, 0);
  sqcRZGate(q, 1.2684992918151714, 0);
  sqcRYGate(q, -1.1812900688346817, 1);
  sqcRZGate(q, -0.8616135480442457, 1);
  sqcRYGate(q, -0.01677379424476566, 2);
  sqcRZGate(q, 1.2873473240746378, 2);
  sqcRYGate(q, -2.9637394869208817, 3);
  sqcRZGate(q, -1.0666791155775956, 3);
  sqcRYGate(q, -1.9184643709261788, 4);
  sqcRZGate(q, -0.7785285924246439, 4);
  sqcRYGate(q, -2.5781573203090673, 5);
  sqcRZGate(q, 0.3199703036576463, 5);
  sqcRYGate(q, 1.9242366496903527, 6);
  sqcRZGate(q, -2.2742137122675725, 6);
  sqcRYGate(q, 0.009430734059621674, 7);
  sqcRZGate(q, 2.5211403893276607, 7);
  sqcRYGate(q, 3.1050543065741594, 8);
  sqcRZGate(q, -2.044967047781744, 8);
  sqcRYGate(q, -0.514359481508568, 9);
  sqcRZGate(q, -1.3327986253418913, 9);
  sqcRYGate(q, 0.1425486629319646, 10);
  sqcRZGate(q, -1.215918961366824, 10);
  sqcRYGate(q, 1.053471180357552, 11);
  sqcRZGate(q, -2.172606871336318, 11);
  sqcRYGate(q, 2.8621695244969567, 12);
  sqcRZGate(q, 2.9152022529657433, 12);
  sqcRYGate(q, 0.002750798758193618, 13);
  sqcRZGate(q, -2.4934946896560226, 13);
  sqcRYGate(q, -3.1018323892056308, 14);
  sqcRZGate(q, 2.5415157866918823, 14);
  sqcRYGate(q, -1.3621130780990105, 15);
  sqcRZGate(q, -0.38679764989398113, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.27433931549962, 0);
  sqcRZGate(q, -0.5255568529151731, 0);
  sqcRYGate(q, 1.4649927309803075, 1);
  sqcRZGate(q, 0.9958241921559511, 1);
  sqcRYGate(q, -2.8341391108416887, 2);
  sqcRZGate(q, -1.1351581118712433, 2);
  sqcRYGate(q, 3.1358695915794277, 3);
  sqcRZGate(q, 0.12548176893186475, 3);
  sqcRYGate(q, 1.204078427855701, 4);
  sqcRZGate(q, 2.296478392005431, 4);
  sqcRYGate(q, 0.6041898106236048, 5);
  sqcRZGate(q, 1.6909714191442806, 5);
  sqcRYGate(q, 2.46790469270533, 6);
  sqcRZGate(q, 0.8087700042669712, 6);
  sqcRYGate(q, 0.010699673917298647, 7);
  sqcRZGate(q, -0.807252252224711, 7);
  sqcRYGate(q, -0.42438129969929506, 8);
  sqcRZGate(q, -2.7630150448184603, 8);
  sqcRYGate(q, 2.216856943751157, 9);
  sqcRZGate(q, 2.7832199589663587, 9);
  sqcRYGate(q, -0.3931566749760407, 10);
  sqcRZGate(q, -1.6951776601429183, 10);
  sqcRYGate(q, 2.954157198436075, 11);
  sqcRZGate(q, -2.906129444133824, 11);
  sqcRYGate(q, 0.23975739609201402, 12);
  sqcRZGate(q, -2.4616192210488776, 12);
  sqcRYGate(q, 0.12398032371650736, 13);
  sqcRZGate(q, -2.543549654289225, 13);
  sqcRYGate(q, 3.1395549211310767, 14);
  sqcRZGate(q, 2.834828659942229, 14);
  sqcRYGate(q, 2.4036204204901104, 15);
  sqcRZGate(q, 1.5194562504395295, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.258714062965475, 0);
  sqcRZGate(q, -1.8662604425248717, 0);
  sqcRYGate(q, -2.448781128035876, 1);
  sqcRZGate(q, -0.4892715507388128, 1);
  sqcRYGate(q, -1.0869098846832552, 2);
  sqcRZGate(q, -0.24999779604215802, 2);
  sqcRYGate(q, -1.5345848373781807, 3);
  sqcRZGate(q, -0.4772460945657997, 3);
  sqcRYGate(q, -2.560486473505392, 4);
  sqcRZGate(q, -1.1609468135249579, 4);
  sqcRYGate(q, -0.29774684977933574, 5);
  sqcRZGate(q, -2.672123995695203, 5);
  sqcRYGate(q, 3.0512156773672006, 6);
  sqcRZGate(q, -0.5596764713527761, 6);
  sqcRYGate(q, -1.2079701097231652, 7);
  sqcRZGate(q, 1.4607389764000294, 7);
  sqcRYGate(q, 2.717972959937762, 8);
  sqcRZGate(q, 2.0723553167097597, 8);
  sqcRYGate(q, -1.4492303875092378, 9);
  sqcRZGate(q, -1.1137945968975846, 9);
  sqcRYGate(q, -1.3778267716223362, 10);
  sqcRZGate(q, -1.256117803024087, 10);
  sqcRYGate(q, 0.06302863197191755, 11);
  sqcRZGate(q, 2.9830261283351502, 11);
  sqcRYGate(q, 3.011999809524514, 12);
  sqcRZGate(q, 1.9847061346394654, 12);
  sqcRYGate(q, -0.002104719916231874, 13);
  sqcRZGate(q, -0.35599323748245837, 13);
  sqcRYGate(q, -3.1017470606061304, 14);
  sqcRZGate(q, -2.2274914649380766, 14);
  sqcRYGate(q, 0.06959400037636243, 15);
  sqcRZGate(q, 0.4712124703287275, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.824690034497116, 0);
  sqcRZGate(q, 2.5035933468570937, 0);
  sqcRYGate(q, -1.096707120017565, 1);
  sqcRZGate(q, -0.2162525521853868, 1);
  sqcRYGate(q, 2.3386631310026327, 2);
  sqcRZGate(q, -2.0440510207490723, 2);
  sqcRYGate(q, 3.098906205974987, 3);
  sqcRZGate(q, -1.0839539033452104, 3);
  sqcRYGate(q, -0.023927988547789044, 4);
  sqcRZGate(q, -1.1786267810320794, 4);
  sqcRYGate(q, -3.1415181129812138, 5);
  sqcRZGate(q, 0.16069951785220032, 5);
  sqcRYGate(q, 3.134558194703742, 6);
  sqcRZGate(q, 2.72211539206552, 6);
  sqcRYGate(q, 0.04175348833424852, 7);
  sqcRZGate(q, -0.1579053514367914, 7);
  sqcRYGate(q, -0.22077923375811057, 8);
  sqcRZGate(q, -1.9063966042939875, 8);
  sqcRYGate(q, -1.1863700990408779, 9);
  sqcRZGate(q, -1.4255842622457564, 9);
  sqcRYGate(q, -1.1262483854092205, 10);
  sqcRZGate(q, 3.085352957618441, 10);
  sqcRYGate(q, 0.769382518151067, 11);
  sqcRZGate(q, 0.466618800932561, 11);
  sqcRYGate(q, 1.37611789429565, 12);
  sqcRZGate(q, 2.6537189502087397, 12);
  sqcRYGate(q, -0.1285368549518262, 13);
  sqcRZGate(q, 2.141374731486598, 13);
  sqcRYGate(q, -0.46140709988189466, 14);
  sqcRZGate(q, 2.1135268351709886, 14);
  sqcRYGate(q, 2.413066127257076, 15);
  sqcRZGate(q, -0.7265342636149649, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.745148779590429, 0);
  sqcRZGate(q, 2.125858016694719, 0);
  sqcRYGate(q, 0.638476329213365, 1);
  sqcRZGate(q, 0.12616289700164263, 1);
  sqcRYGate(q, 1.9837527894489468, 2);
  sqcRZGate(q, -1.7786963449061481, 2);
  sqcRYGate(q, -0.22845709017009508, 3);
  sqcRZGate(q, 3.135811032519724, 3);
  sqcRYGate(q, 2.3056794182619083, 4);
  sqcRZGate(q, 2.09046813002948, 4);
  sqcRYGate(q, 0.8198026622730081, 5);
  sqcRZGate(q, -0.8810389601070546, 5);
  sqcRYGate(q, -3.0531312607527417, 6);
  sqcRZGate(q, 2.985882949056121, 6);
  sqcRYGate(q, -1.080955431566691, 7);
  sqcRZGate(q, 1.1948786486594223, 7);
  sqcRYGate(q, 1.4124465706358165, 8);
  sqcRZGate(q, -1.1412127873455624, 8);
  sqcRYGate(q, 1.3830721497948897, 9);
  sqcRZGate(q, -1.7826745787846792, 9);
  sqcRYGate(q, 2.9710405043606696, 10);
  sqcRZGate(q, 3.0844612301194334, 10);
  sqcRYGate(q, 0.23148730834168776, 11);
  sqcRZGate(q, -2.601029348049458, 11);
  sqcRYGate(q, 3.140097471824128, 12);
  sqcRZGate(q, 2.2524095164210545, 12);
  sqcRYGate(q, -3.125819665718658, 13);
  sqcRZGate(q, 0.789057658353962, 13);
  sqcRYGate(q, -0.03381242453952903, 14);
  sqcRZGate(q, -2.8867562561505453, 14);
  sqcRYGate(q, -0.22664219495003834, 15);
  sqcRZGate(q, 0.38669342592998834, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.382509252058146, 0);
  sqcRZGate(q, 2.3352215769660987, 0);
  sqcRYGate(q, -1.6882878266937198, 1);
  sqcRZGate(q, -2.794448123220511, 1);
  sqcRYGate(q, 2.427507954674295, 2);
  sqcRZGate(q, 1.6793989443823358, 2);
  sqcRYGate(q, -3.13267108307591, 3);
  sqcRZGate(q, -2.8663742236022554, 3);
  sqcRYGate(q, -0.018831278841774157, 4);
  sqcRZGate(q, 0.9358272928887832, 4);
  sqcRYGate(q, -0.0007660725138034508, 5);
  sqcRZGate(q, 0.7327965758042666, 5);
  sqcRYGate(q, 0.006950334369705935, 6);
  sqcRZGate(q, 0.8998014832073905, 6);
  sqcRYGate(q, 0.009605502163030797, 7);
  sqcRZGate(q, -0.7781182863053763, 7);
  sqcRYGate(q, 0.23209408629150355, 8);
  sqcRZGate(q, -0.8702002122649918, 8);
  sqcRYGate(q, -1.7631379047602322, 9);
  sqcRZGate(q, 1.5309986492944985, 9);
  sqcRYGate(q, -1.7263427934045978, 10);
  sqcRZGate(q, -2.82505888772053, 10);
  sqcRYGate(q, -2.080423754314255, 11);
  sqcRZGate(q, -0.04453969557819004, 11);
  sqcRYGate(q, -1.1917544097240684, 12);
  sqcRZGate(q, 2.778635495402274, 12);
  sqcRYGate(q, -0.01154028404608365, 13);
  sqcRZGate(q, 2.581290425569223, 13);
  sqcRYGate(q, 2.903868998060613, 14);
  sqcRZGate(q, -2.5484402726427966, 14);
  sqcRYGate(q, -1.984638709812664, 15);
  sqcRZGate(q, -1.7755647111135557, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.9423795822145653, 0);
  sqcRZGate(q, -1.6063237287486127, 0);
  sqcRYGate(q, 0.9288189039943127, 1);
  sqcRZGate(q, 0.6668935753602595, 1);
  sqcRYGate(q, -1.5768283263286063, 2);
  sqcRZGate(q, 2.1147194768020556, 2);
  sqcRYGate(q, 0.6695197838893296, 3);
  sqcRZGate(q, 1.3948210079614778, 3);
  sqcRYGate(q, 1.0626492750524419, 4);
  sqcRZGate(q, -2.0110915178747395, 4);
  sqcRYGate(q, 1.5731217496784293, 5);
  sqcRZGate(q, 1.4676556409770765, 5);
  sqcRYGate(q, -3.0705392334279864, 6);
  sqcRZGate(q, -2.943154071360679, 6);
  sqcRYGate(q, 0.34214346069258905, 7);
  sqcRZGate(q, 0.31104622055495834, 7);
  sqcRYGate(q, 0.2583631298783844, 8);
  sqcRZGate(q, -2.7725182670554145, 8);
  sqcRYGate(q, 0.9811124321332318, 9);
  sqcRZGate(q, -0.7072796748602412, 9);
  sqcRYGate(q, -0.07533415757054242, 10);
  sqcRZGate(q, 2.799064814886701, 10);
  sqcRYGate(q, 0.6341265230797851, 11);
  sqcRZGate(q, -1.4861753910421773, 11);
  sqcRYGate(q, 3.122354608658753, 12);
  sqcRZGate(q, -2.831521744113061, 12);
  sqcRYGate(q, -0.003771884693953176, 13);
  sqcRZGate(q, -2.4383002557370865, 13);
  sqcRYGate(q, 1.6156443162345069, 14);
  sqcRZGate(q, 1.9369376522022899, 14);
  sqcRYGate(q, 1.0710705328828303, 15);
  sqcRZGate(q, 0.7085533458869103, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.036780494095977, 0);
  sqcRZGate(q, -2.229272575977226, 0);
  sqcRYGate(q, 0.8110176159190434, 1);
  sqcRZGate(q, 2.005349676244319, 1);
  sqcRYGate(q, 2.1463008613887604, 2);
  sqcRZGate(q, 0.9088702320663041, 2);
  sqcRYGate(q, 0.0921479469750972, 3);
  sqcRZGate(q, -3.0170006271850576, 3);
  sqcRYGate(q, -3.120345234944065, 4);
  sqcRZGate(q, 2.4512198706033015, 4);
  sqcRYGate(q, 3.1414840599089144, 5);
  sqcRZGate(q, 2.0387464112501332, 5);
  sqcRYGate(q, 0.002082151302000106, 6);
  sqcRZGate(q, 0.27418965780295773, 6);
  sqcRYGate(q, 3.1067177686147494, 7);
  sqcRZGate(q, -2.806871022204696, 7);
  sqcRYGate(q, 2.7058302202496796, 8);
  sqcRZGate(q, 3.037136936347252, 8);
  sqcRYGate(q, 1.0397225606980747, 9);
  sqcRZGate(q, 0.5514898761671079, 9);
  sqcRYGate(q, -1.585379404776246, 10);
  sqcRZGate(q, -0.39809013978594837, 10);
  sqcRYGate(q, 3.122380290137552, 11);
  sqcRZGate(q, 1.4200357697031225, 11);
  sqcRYGate(q, -3.091813231392379, 12);
  sqcRZGate(q, 0.8392851510735474, 12);
  sqcRYGate(q, -0.7700548692565281, 13);
  sqcRZGate(q, 1.4160103276496472, 13);
  sqcRYGate(q, 0.7362669678240263, 14);
  sqcRZGate(q, -0.41293733461590243, 14);
  sqcRYGate(q, 2.5313333445496204, 15);
  sqcRZGate(q, -0.6066387449635879, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.681456146659305, 0);
  sqcRZGate(q, 2.738567035176779, 0);
  sqcRYGate(q, -1.1876709899721256, 1);
  sqcRZGate(q, -2.1500065286278964, 1);
  sqcRYGate(q, 1.3436424657376678, 2);
  sqcRZGate(q, 0.09748530961581024, 2);
  sqcRYGate(q, 1.1307409233493035, 3);
  sqcRZGate(q, -2.344600690257731, 3);
  sqcRYGate(q, -0.22490802839631563, 4);
  sqcRZGate(q, 1.473684634388049, 4);
  sqcRYGate(q, -0.5792666841719953, 5);
  sqcRZGate(q, 3.048950969996769, 5);
  sqcRYGate(q, -1.3039302794815448, 6);
  sqcRZGate(q, -0.8803564744217801, 6);
  sqcRYGate(q, -1.8147547989672823, 7);
  sqcRZGate(q, -2.350190072116509, 7);
  sqcRYGate(q, 2.512279554872141, 8);
  sqcRZGate(q, -2.547997799503791, 8);
  sqcRYGate(q, 1.355538516561758, 9);
  sqcRZGate(q, -1.1203539388098176, 9);
  sqcRYGate(q, -0.4210448227248796, 10);
  sqcRZGate(q, -1.0261148134482196, 10);
  sqcRYGate(q, 0.0036497444876522067, 11);
  sqcRZGate(q, -1.3816029063863318, 11);
  sqcRYGate(q, 0.6644851655296261, 12);
  sqcRZGate(q, -1.6838591066539084, 12);
  sqcRYGate(q, 3.140436184681369, 13);
  sqcRZGate(q, 0.718177960733536, 13);
  sqcRYGate(q, 1.7329882377922805, 14);
  sqcRZGate(q, 2.161227284473348, 14);
  sqcRYGate(q, -2.797136763644861, 15);
  sqcRZGate(q, 2.057386314559168, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.15724728511736608, 0);
  sqcRZGate(q, -2.3898530542846363, 0);
  sqcRYGate(q, -2.258581296103527, 1);
  sqcRZGate(q, -3.0708139941336574, 1);
  sqcRYGate(q, -1.2971673070735974, 2);
  sqcRZGate(q, 0.6023273921863499, 2);
  sqcRYGate(q, 0.08538512524224347, 3);
  sqcRZGate(q, -1.0648936346310638, 3);
  sqcRYGate(q, -3.106946023646937, 4);
  sqcRZGate(q, 2.8113954295193677, 4);
  sqcRYGate(q, 3.1383453887914503, 5);
  sqcRZGate(q, -0.2244620693931229, 5);
  sqcRYGate(q, 0.02078863538361464, 6);
  sqcRZGate(q, 1.7706894041590795, 6);
  sqcRYGate(q, -3.1066129064810943, 7);
  sqcRZGate(q, 2.620134577195986, 7);
  sqcRYGate(q, 3.1138463585878364, 8);
  sqcRZGate(q, -2.7189853683072935, 8);
  sqcRYGate(q, -1.4567896102227271, 9);
  sqcRZGate(q, 2.7319285111753446, 9);
  sqcRYGate(q, 3.1231368720782076, 10);
  sqcRZGate(q, 0.5332370943586602, 10);
  sqcRYGate(q, -1.587906738935298, 11);
  sqcRZGate(q, -0.9965484774888775, 11);
  sqcRYGate(q, 3.06229962999762, 12);
  sqcRZGate(q, 1.1328654050614082, 12);
  sqcRYGate(q, 1.1018347861267834, 13);
  sqcRZGate(q, 1.6277859666856598, 13);
  sqcRYGate(q, 1.8364183243205838, 14);
  sqcRZGate(q, -1.9604541127906372, 14);
  sqcRYGate(q, -0.48900590520622206, 15);
  sqcRZGate(q, 0.19134460972603315, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.5756404548972754, 0);
  sqcRZGate(q, -1.9346779148922009, 0);
  sqcRYGate(q, -2.6065507609042946, 1);
  sqcRZGate(q, -1.5200487114333372, 1);
  sqcRYGate(q, 0.53053480202085, 2);
  sqcRZGate(q, 0.01774053744105965, 2);
  sqcRYGate(q, -0.20655797558027444, 3);
  sqcRZGate(q, -2.67570121904584, 3);
  sqcRYGate(q, 0.18848290750273655, 4);
  sqcRZGate(q, -0.4754642055174038, 4);
  sqcRYGate(q, -2.4753816080703053, 5);
  sqcRZGate(q, 1.5627714781449522, 5);
  sqcRYGate(q, -1.6577924663988821, 6);
  sqcRZGate(q, 1.9102119761522525, 6);
  sqcRYGate(q, 1.5149988602153903, 7);
  sqcRZGate(q, -1.4497063327941422, 7);
  sqcRYGate(q, -1.5959570999092032, 8);
  sqcRZGate(q, 1.2826965654761655, 8);
  sqcRYGate(q, 2.229910390806266, 9);
  sqcRZGate(q, 3.0253098561091405, 9);
  sqcRYGate(q, 2.6401314236795645, 10);
  sqcRZGate(q, -1.9521248544747294, 10);
  sqcRYGate(q, 0.0024932487505546774, 11);
  sqcRZGate(q, 1.7647559872135203, 11);
  sqcRYGate(q, 0.23502940574346454, 12);
  sqcRZGate(q, -0.6210835687267657, 12);
  sqcRYGate(q, -0.02148342642286625, 13);
  sqcRZGate(q, -2.8090791447282517, 13);
  sqcRYGate(q, 1.6022766808639801, 14);
  sqcRZGate(q, 1.2177521807063185, 14);
  sqcRYGate(q, 1.6195778061605397, 15);
  sqcRZGate(q, -0.15839792522076665, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.9956391777067712, 0);
  sqcRZGate(q, 0.244411736329273, 0);
  sqcRYGate(q, -1.8473103882306054, 1);
  sqcRZGate(q, 0.7942528046507124, 1);
  sqcRYGate(q, 1.2945735902851936, 2);
  sqcRZGate(q, -1.8451374966461433, 2);
  sqcRYGate(q, 0.027129270142587817, 3);
  sqcRZGate(q, -2.6629345035655048, 3);
  sqcRYGate(q, 0.037576240953691276, 4);
  sqcRZGate(q, 2.977448228380936, 4);
  sqcRYGate(q, 3.0046083799286665, 5);
  sqcRZGate(q, -1.0462936500722764, 5);
  sqcRYGate(q, -0.026838014517030957, 6);
  sqcRZGate(q, 1.995228220799899, 6);
  sqcRYGate(q, 0.0020387400499242148, 7);
  sqcRZGate(q, -3.1132335157844357, 7);
  sqcRYGate(q, -3.137464174057618, 8);
  sqcRZGate(q, -2.5981625046398853, 8);
  sqcRYGate(q, -1.3312978601660876, 9);
  sqcRZGate(q, 0.8058302544809887, 9);
  sqcRYGate(q, 3.097724560905894, 10);
  sqcRZGate(q, 1.9609213313210816, 10);
  sqcRYGate(q, -2.039400695886717, 11);
  sqcRZGate(q, -2.321836148998036, 11);
  sqcRYGate(q, 3.0862708814041353, 12);
  sqcRZGate(q, -2.6996384849466155, 12);
  sqcRYGate(q, -1.184004867854291, 13);
  sqcRZGate(q, 2.339914184032757, 13);
  sqcRYGate(q, 3.000846116622665, 14);
  sqcRZGate(q, -1.3428654900339954, 14);
  sqcRYGate(q, 1.7969636636814075, 15);
  sqcRZGate(q, 1.5361115803123024, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.069417583878333, 0);
  sqcRZGate(q, 0.8700658310719369, 0);
  sqcRYGate(q, 2.2518870921895706, 1);
  sqcRZGate(q, -1.6103547534609115, 1);
  sqcRYGate(q, 1.1078331480870958, 2);
  sqcRZGate(q, 2.2839972426451145, 2);
  sqcRYGate(q, -0.20490622062315084, 3);
  sqcRZGate(q, -0.10293445030030403, 3);
  sqcRYGate(q, 0.41392796523842174, 4);
  sqcRZGate(q, 0.6909930217498338, 4);
  sqcRYGate(q, -2.6433227404747446, 5);
  sqcRZGate(q, 2.1072768040470233, 5);
  sqcRYGate(q, 1.685798463799638, 6);
  sqcRZGate(q, 0.5119702215125695, 6);
  sqcRYGate(q, -2.7907562207355805, 7);
  sqcRZGate(q, 0.5599437734417262, 7);
  sqcRYGate(q, -0.8284534050929678, 8);
  sqcRZGate(q, 0.3778264160387881, 8);
  sqcRYGate(q, -1.3568136021750385, 9);
  sqcRZGate(q, 2.8929255727044914, 9);
  sqcRYGate(q, 2.7861789170943467, 10);
  sqcRZGate(q, -2.4360253415544753, 10);
  sqcRYGate(q, -3.1319637019990685, 11);
  sqcRZGate(q, 1.5135060398073186, 11);
  sqcRYGate(q, -0.36998258998715244, 12);
  sqcRZGate(q, -2.737437123936817, 12);
  sqcRYGate(q, 1.5650147915811115, 13);
  sqcRZGate(q, 1.5700395025370557, 13);
  sqcRYGate(q, -1.7074214468167515, 14);
  sqcRZGate(q, -1.828299854173574, 14);
  sqcRYGate(q, 1.3872828991293302, 15);
  sqcRZGate(q, -2.663538054402381, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.9809948687946672, 0);
  sqcRZGate(q, 2.441356796600406, 0);
  sqcRYGate(q, -2.792498310728015, 1);
  sqcRZGate(q, 0.530751943521083, 1);
  sqcRYGate(q, -2.8873971378311167, 2);
  sqcRZGate(q, 2.8459857795646606, 2);
  sqcRYGate(q, 3.113520613853171, 3);
  sqcRZGate(q, 1.7854264529086799, 3);
  sqcRYGate(q, 0.06011866072649586, 4);
  sqcRZGate(q, 1.6597513574642682, 4);
  sqcRYGate(q, 0.2117710490810918, 5);
  sqcRZGate(q, 1.722454193152279, 5);
  sqcRYGate(q, -3.135367508900007, 6);
  sqcRZGate(q, 1.1129320762573942, 6);
  sqcRYGate(q, -3.1193422196889475, 7);
  sqcRZGate(q, 0.40769438266740793, 7);
  sqcRYGate(q, -0.07899491376794864, 8);
  sqcRZGate(q, 1.5184832340275725, 8);
  sqcRYGate(q, -2.8467172984691125, 9);
  sqcRZGate(q, -0.17884675625956967, 9);
  sqcRYGate(q, -3.0811378820494464, 10);
  sqcRZGate(q, -1.0721070988095198, 10);
  sqcRYGate(q, 0.009061439723834263, 11);
  sqcRZGate(q, 2.6069647157098337, 11);
  sqcRYGate(q, 3.120509506181964, 12);
  sqcRZGate(q, -2.0495107023439765, 12);
  sqcRYGate(q, 1.5460378019220522, 13);
  sqcRZGate(q, 0.4446230820730186, 13);
  sqcRYGate(q, -1.5143358847726702, 14);
  sqcRZGate(q, -0.942809211546306, 14);
  sqcRYGate(q, 1.667854598239276, 15);
  sqcRZGate(q, -0.057947552706191514, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.844133696223574, 0);
  sqcRZGate(q, -0.6037935050027485, 0);
  sqcRYGate(q, -0.9272103716403032, 1);
  sqcRZGate(q, 1.4023381755131739, 1);
  sqcRYGate(q, 1.3588153876289697, 2);
  sqcRZGate(q, 2.718600062534655, 2);
  sqcRYGate(q, -0.7199037488404745, 3);
  sqcRZGate(q, 2.9960238027073753, 3);
  sqcRYGate(q, -1.3960384405892956, 4);
  sqcRZGate(q, 2.6931858557327506, 4);
  sqcRYGate(q, -0.2614900479219005, 5);
  sqcRZGate(q, 1.5099272838488909, 5);
  sqcRYGate(q, 1.0086623575540639, 6);
  sqcRZGate(q, -1.7716654814827046, 6);
  sqcRYGate(q, -2.902067368046609, 7);
  sqcRZGate(q, -1.5241402337480254, 7);
  sqcRYGate(q, 1.7513563227688245, 8);
  sqcRZGate(q, -2.485103468187187, 8);
  sqcRYGate(q, 0.3706161087729113, 9);
  sqcRZGate(q, 2.1820930109184946, 9);
  sqcRYGate(q, 2.7415018744079442, 10);
  sqcRZGate(q, -0.23233333779490725, 10);
  sqcRYGate(q, 1.401508664373324, 11);
  sqcRZGate(q, 0.22220011286050403, 11);
  sqcRYGate(q, 3.08015995516455, 12);
  sqcRZGate(q, -2.4071916422300403, 12);
  sqcRYGate(q, -3.057086902518798, 13);
  sqcRZGate(q, 0.08768579457449022, 13);
  sqcRYGate(q, 0.11075026192734061, 14);
  sqcRZGate(q, -0.027592243608562054, 14);
  sqcRYGate(q, -1.5970757656974397, 15);
  sqcRZGate(q, 0.7423837059136407, 15);

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
