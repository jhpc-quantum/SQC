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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.041548688984461, 0);
  sqcRYGate(q, 1.270883775615739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.820290329894033, 0);
  sqcRYGate(q, -0.1678845526255417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30850671539351193, 2);
  sqcRYGate(q, 2.2793882307148214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2030204199414567, 2);
  sqcRYGate(q, 1.614386845491068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.354682001731045, 0);
  sqcRYGate(q, -3.0995946652985675, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6971147988520467, 0);
  sqcRYGate(q, -1.281409218586715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44466347050932464, 1);
  sqcRYGate(q, -0.215845650086931, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.437721191240969, 1);
  sqcRYGate(q, -0.2540856387576911, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9463352459834391, 0);
  sqcRYGate(q, -2.989058296763675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2223756217002402, 0);
  sqcRYGate(q, 2.7053230259212055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.765746040031565, 2);
  sqcRYGate(q, 1.0726298129958862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0000757252068144, 2);
  sqcRYGate(q, 3.1021556284845135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.382493574356571, 0);
  sqcRYGate(q, -2.4386124181561817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3096678439992764, 0);
  sqcRYGate(q, 0.20912472023053616, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40147806026975097, 1);
  sqcRYGate(q, 0.5335175711839693, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.00036025494847, 1);
  sqcRYGate(q, -3.1186139076018033, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4042875838449111, 0);
  sqcRYGate(q, 2.4761249723823107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9479367823270346, 0);
  sqcRYGate(q, 2.928874777079125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9798312536645852, 2);
  sqcRYGate(q, 2.416362920354701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.384564858704154, 2);
  sqcRYGate(q, 0.35480781781042386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0882690551797012, 0);
  sqcRYGate(q, 2.8896670757150735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9802888417071554, 0);
  sqcRYGate(q, -3.078566224567061, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5583635376536575, 1);
  sqcRYGate(q, -2.5976488424049915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.212339014841654, 1);
  sqcRYGate(q, -1.0404175892184346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.38940677958822, 0);
  sqcRYGate(q, -1.7334962692388938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3857741597209103, 0);
  sqcRYGate(q, 1.268528408876639, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6806532672191934, 2);
  sqcRYGate(q, 1.1815074177264464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.963801701984836, 2);
  sqcRYGate(q, -3.1158803222479277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.531618055995593, 0);
  sqcRYGate(q, 0.3586416723393624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4026929225812192, 0);
  sqcRYGate(q, -1.3962970079748775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3575048738517523, 1);
  sqcRYGate(q, 1.6587934359335568, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.090471089253241, 1);
  sqcRYGate(q, -0.6120266439839313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8723297380872856, 0);
  sqcRYGate(q, 2.2377190065840296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4227856938097128, 0);
  sqcRYGate(q, -0.4209321330082468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0356173858105127, 2);
  sqcRYGate(q, -2.9146481995639486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.090813237502292, 2);
  sqcRYGate(q, -1.2543331095787966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34075066778227264, 0);
  sqcRYGate(q, -2.004583271439828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9876399480286198, 0);
  sqcRYGate(q, -0.5288347784573029, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0837126395421244, 1);
  sqcRYGate(q, 1.050578585022813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6824411500021936, 1);
  sqcRYGate(q, 0.6441213572559175, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9318152741783843, 0);
  sqcRYGate(q, 0.5722710428031768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.369923991124238, 0);
  sqcRYGate(q, -2.1223654702828516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5989780142495071, 2);
  sqcRYGate(q, -2.6927271368640167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4240210100515418, 2);
  sqcRYGate(q, -2.075133229438029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7404878018884156, 0);
  sqcRYGate(q, -2.3295438810265723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.480755312355874, 0);
  sqcRYGate(q, -0.13915851134723312, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5745398254732352, 1);
  sqcRYGate(q, 1.6070114121910626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5038375566400752, 1);
  sqcRYGate(q, 1.4871877362236283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.31157290487723177, 0);
  sqcRYGate(q, 2.4109391399592313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.560553454298112, 0);
  sqcRYGate(q, 1.866297541346044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6053756424491383, 2);
  sqcRYGate(q, -0.32230785708431053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2062503333592367, 2);
  sqcRYGate(q, 2.5705035837347427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7276288167631022, 0);
  sqcRYGate(q, -0.7129489183806443, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8652029905547675, 0);
  sqcRYGate(q, 0.4994080052330237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6631224074115463, 1);
  sqcRYGate(q, 2.623256138066386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8354252371089637, 1);
  sqcRYGate(q, -1.2313528305417936, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.351549723651367, 0);
  sqcRYGate(q, -0.09375310876357734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0277801532973156, 0);
  sqcRYGate(q, -2.072526252624427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8771937420746339, 2);
  sqcRYGate(q, 1.57799536170625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1121931910968519, 2);
  sqcRYGate(q, -1.6819695534820758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7700129468972445, 0);
  sqcRYGate(q, 1.947857103621617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24046592163369404, 0);
  sqcRYGate(q, 0.1641310781333516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1847362087577915, 1);
  sqcRYGate(q, 1.9912879847562077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.885140612282049, 1);
  sqcRYGate(q, 2.3371179254207544, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.827327383316858, 0);
  sqcRYGate(q, 1.4584001706053726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.948479573048198, 0);
  sqcRYGate(q, 1.2901332977656566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0117970769656002, 2);
  sqcRYGate(q, 1.13040663862271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5393561504642705, 2);
  sqcRYGate(q, -3.002827775055521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5418237680029994, 0);
  sqcRYGate(q, 2.977056126924614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3472371635136977, 0);
  sqcRYGate(q, -2.635376745730137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2616869842972793, 1);
  sqcRYGate(q, -2.3224760859324434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3834486372096899, 1);
  sqcRYGate(q, 2.9969679235985347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.641680676367569, 0);
  sqcRYGate(q, 1.8753600549909795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6814071512694895, 0);
  sqcRYGate(q, -2.310206929881569, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9403564933326383, 2);
  sqcRYGate(q, -2.3779352567710794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6461591686311845, 2);
  sqcRYGate(q, 0.797016160748759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4442624356840436, 0);
  sqcRYGate(q, 2.435969567590333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6943225206515091, 0);
  sqcRYGate(q, 2.8637850659305406, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40693688321415894, 1);
  sqcRYGate(q, 2.5118541790281492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.688797961965691, 1);
  sqcRYGate(q, -2.0696687025573226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1809987853216906, 0);
  sqcRYGate(q, 0.10227595608085334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.57384046656571, 0);
  sqcRYGate(q, -0.6493707127113864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19368936140279422, 2);
  sqcRYGate(q, 0.2077836935110593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7133583335268385, 2);
  sqcRYGate(q, 1.1626834993719215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7201497447483165, 0);
  sqcRYGate(q, 2.3530049327053115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.070638302632066, 0);
  sqcRYGate(q, 1.193895386929614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2223006217263377, 1);
  sqcRYGate(q, 1.5960587481277795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5459644987516343, 1);
  sqcRYGate(q, 1.0496689540940378, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8012356832035277, 0);
  sqcRYGate(q, 0.5091450131643098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1441751749224771, 0);
  sqcRYGate(q, 2.61244098103075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.68114233769797, 2);
  sqcRYGate(q, -1.9129086551060477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2513828221890043, 2);
  sqcRYGate(q, -2.720638038651889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.298468258425516, 0);
  sqcRYGate(q, -2.5095390207944805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4513254262076787, 0);
  sqcRYGate(q, -2.4549798430289678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.131975437255376, 1);
  sqcRYGate(q, -1.8973101226348827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.835355914197192, 1);
  sqcRYGate(q, 0.3030028237448015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4328504884719564, 0);
  sqcRYGate(q, -0.11220638058173897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7928849103361282, 0);
  sqcRYGate(q, -1.987430187683091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.246796360101518, 2);
  sqcRYGate(q, -1.5911950943623179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5696104347708806, 2);
  sqcRYGate(q, 1.9104527348388256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6966089795963972, 0);
  sqcRYGate(q, 1.1849735414985298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1472635012102477, 0);
  sqcRYGate(q, -1.8325526302000466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8610906065964077, 1);
  sqcRYGate(q, 2.030724282634199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.45541155635778086, 1);
  sqcRYGate(q, -3.1293544826793913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8458499310416707, 0);
  sqcRYGate(q, -2.419023782795403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.928963849643546, 0);
  sqcRYGate(q, 1.5937847279664998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30588531142803627, 2);
  sqcRYGate(q, 1.8251188624741284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5839306612563795, 2);
  sqcRYGate(q, -0.7241594580352553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.022910827905015, 0);
  sqcRYGate(q, -1.1106783169339334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0396246898262351, 0);
  sqcRYGate(q, 1.446845208918977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9854818401038563, 1);
  sqcRYGate(q, -0.984081833760101, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.18843398031317982, 1);
  sqcRYGate(q, -0.20954508206629577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6018842682116508, 0);
  sqcRYGate(q, -2.7787811890065104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10660311714039938, 0);
  sqcRYGate(q, -0.36260046502152443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0134420537227342, 2);
  sqcRYGate(q, -0.7367316181580658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.635850103617244, 2);
  sqcRYGate(q, 1.4042494541649244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1975403892665373, 0);
  sqcRYGate(q, 0.1890070215303865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8332984712286091, 0);
  sqcRYGate(q, 1.4898090082756157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.972692109986098, 1);
  sqcRYGate(q, -2.289740830620628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.129038404683523, 1);
  sqcRYGate(q, 2.467734563846949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0068991244656047, 0);
  sqcRYGate(q, 2.5156119371260965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0591419487959053, 0);
  sqcRYGate(q, -1.4066366820146499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7558335818468422, 2);
  sqcRYGate(q, 1.2323676420691942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6760564081471767, 2);
  sqcRYGate(q, 0.9478884347687098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3960662302040445, 0);
  sqcRYGate(q, 1.8290157616559781, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.058309206286554, 0);
  sqcRYGate(q, -1.2292959052288754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5361294439742011, 1);
  sqcRYGate(q, -2.078161041047523, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5984986437438395, 1);
  sqcRYGate(q, -0.1701343315703996, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8789398033929592, 0);
  sqcRYGate(q, -3.106502904988223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1084810767700284, 0);
  sqcRYGate(q, 1.4553516524985641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23848613311934416, 2);
  sqcRYGate(q, -0.6407914598212548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6114602454799315, 2);
  sqcRYGate(q, -1.9138423006864678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.432073275025635, 0);
  sqcRYGate(q, 2.054960133825123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6779300341074981, 0);
  sqcRYGate(q, -0.23668528366377206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.178982682871629, 1);
  sqcRYGate(q, 1.2169111986099947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9199110464909763, 1);
  sqcRYGate(q, -2.6888185808211764, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6257954738099445, 0);
  sqcRYGate(q, 1.4225140530931815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0115464255229027, 0);
  sqcRYGate(q, -1.2077936848915822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5000614287139817, 2);
  sqcRYGate(q, -2.9049633941773627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.657962330278637, 2);
  sqcRYGate(q, -0.335981151596655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.199848609731608, 0);
  sqcRYGate(q, 2.0048057615511237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0774618416953725, 0);
  sqcRYGate(q, -1.931583869175686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0010452021249509977, 1);
  sqcRYGate(q, -2.5266882804673774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.41006499508835126, 1);
  sqcRYGate(q, -1.5470092592085232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9265122463199935, 0);
  sqcRYGate(q, -0.7226479345098848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2729008013138565, 0);
  sqcRYGate(q, 1.6981578473310794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6857354110461027, 2);
  sqcRYGate(q, 1.3394045608674174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4334535700928557, 2);
  sqcRYGate(q, -0.11877999570004227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.076364488627831, 0);
  sqcRYGate(q, -2.726206281398443, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5904980728059406, 0);
  sqcRYGate(q, 1.7889116019135411, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9646273648930919, 1);
  sqcRYGate(q, 1.1914121374147884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.267641587292669, 1);
  sqcRYGate(q, -0.7281375716191034, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.569530300948296, 0);
  sqcRYGate(q, -2.009655384348057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8228594549443011, 0);
  sqcRYGate(q, -1.6828079002008471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2344452483378683, 2);
  sqcRYGate(q, 1.8497970303791371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2411499910792765, 2);
  sqcRYGate(q, 1.0122129264437643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9260421976106519, 0);
  sqcRYGate(q, -0.38928555887813054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8176547225272746, 0);
  sqcRYGate(q, 0.5757728404022178, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.17842435363972609, 1);
  sqcRYGate(q, 0.41430091989275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4953160299174217, 1);
  sqcRYGate(q, 2.4757307774743693, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7712503206109433, 0);
  sqcRYGate(q, -2.6902085398179745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0213642526397129, 0);
  sqcRYGate(q, -2.4178953455322394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.012554355814686863, 2);
  sqcRYGate(q, -0.9930217305325578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7520322202540077, 2);
  sqcRYGate(q, 0.43529245896243385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.632533371304659, 0);
  sqcRYGate(q, -1.1180256157862152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24317112272902805, 0);
  sqcRYGate(q, -3.029290006413524, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.055898460411561, 1);
  sqcRYGate(q, -0.12350006781946199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3574526828392695, 1);
  sqcRYGate(q, -0.6056090455607923, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2718485202869285, 0);
  sqcRYGate(q, -2.76313901135179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3900563538075277, 0);
  sqcRYGate(q, -2.987355615352518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2689576493048564, 2);
  sqcRYGate(q, -2.3179566514888896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1914168774822711, 2);
  sqcRYGate(q, -2.6855042253069175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.98584502753873, 0);
  sqcRYGate(q, 0.586284459684034, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5308293455116408, 0);
  sqcRYGate(q, -2.421492462284161, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.318425370848589, 1);
  sqcRYGate(q, 0.9664667166645291, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.17250984976826, 1);
  sqcRYGate(q, -1.9094898733239563, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.188601608858068, 0);
  sqcRYGate(q, 2.3611746509153253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7266409688965618, 0);
  sqcRYGate(q, -2.5853280205028852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8795532192044226, 2);
  sqcRYGate(q, -0.9885325841171033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.790484141037663, 2);
  sqcRYGate(q, -0.17361556116931925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6145040092170087, 0);
  sqcRYGate(q, -1.5761160184580474, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.14398787329688095, 0);
  sqcRYGate(q, -0.6918276505302031, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3836886278728162, 1);
  sqcRYGate(q, -1.1824734109319248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13205347672354062, 1);
  sqcRYGate(q, 0.2250254414547097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.18850930663450743, 0);
  sqcRYGate(q, -1.0761731700199142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.282259393830283, 0);
  sqcRYGate(q, -1.6031569574275144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3268507750236505, 2);
  sqcRYGate(q, 0.4722623316246386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6633514675946508, 2);
  sqcRYGate(q, 0.4472892042131052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8232989623426348, 0);
  sqcRYGate(q, 0.4725844516042739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7674239259904503, 0);
  sqcRYGate(q, 3.123632394009133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0591357993825037, 1);
  sqcRYGate(q, -2.5294959926193377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5545793219482364, 1);
  sqcRYGate(q, 1.668098981655612, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5825774458525429, 0);
  sqcRYGate(q, -1.4847194389636462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7609517691385883, 0);
  sqcRYGate(q, -2.3894257970110115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7844424323266513, 2);
  sqcRYGate(q, 0.7811322149902215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8130059933332039, 2);
  sqcRYGate(q, 2.087866819877139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.558220161855717, 0);
  sqcRYGate(q, 0.6707064563276495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.768902376214901, 0);
  sqcRYGate(q, 1.0338623147583341, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.450866597397981, 1);
  sqcRYGate(q, 1.3082032588259391, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.24368412280083177, 1);
  sqcRYGate(q, 1.5060269579340158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.00393845846278, 0);
  sqcRYGate(q, 0.7790297042152365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2835192603767869, 0);
  sqcRYGate(q, -2.0429325039858535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4080952135932099, 2);
  sqcRYGate(q, -2.8495485007770966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12338638506982048, 2);
  sqcRYGate(q, 2.0308550332336477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4944480724418145, 0);
  sqcRYGate(q, -0.7952976777414801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5902335208335399, 0);
  sqcRYGate(q, -0.23995914289061027, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.042276916641392326, 1);
  sqcRYGate(q, -0.5893145262254286, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2238639361098644, 1);
  sqcRYGate(q, 1.6040586925266993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4159344661196043, 0);
  sqcRYGate(q, -0.1694723575897772, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.049417331504232, 0);
  sqcRYGate(q, -2.0390356897736774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.232796002319568, 2);
  sqcRYGate(q, -2.4223477841909493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0207636321165996, 2);
  sqcRYGate(q, 2.607053801918912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8360699262563733, 0);
  sqcRYGate(q, -0.007696507797360399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6148723769262996, 0);
  sqcRYGate(q, 0.7463016586842528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4758909719646922, 1);
  sqcRYGate(q, -0.917066207514097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4136231012213079, 1);
  sqcRYGate(q, 2.182504219512353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.690235269143257, 0);
  sqcRYGate(q, -2.8471714509879105, 1);
  sqcRYGate(q, 1.2826553289763674, 2);
  sqcRYGate(q, -1.6139247490355404, 3);

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
