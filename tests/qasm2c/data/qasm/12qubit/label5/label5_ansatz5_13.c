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

  sqcRYGate(q, -2.1607489540510874, 0);
  sqcRYGate(q, -1.7008611493664136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.231481310709868, 0);
  sqcRYGate(q, -2.819705561027047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.130995583213532, 2);
  sqcRYGate(q, -1.721947828422107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6875220993298217, 2);
  sqcRYGate(q, 2.9197241979748343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.47120595101442, 4);
  sqcRYGate(q, -0.06486942679405328, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.35133057071708507, 4);
  sqcRYGate(q, -1.333319340229124, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2754296943899783, 6);
  sqcRYGate(q, 2.5240316702720254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.362031641744855, 6);
  sqcRYGate(q, 0.7256552280283044, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4524693075690474, 8);
  sqcRYGate(q, -1.018382889211229, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.09485519241992, 8);
  sqcRYGate(q, -0.22342677281782058, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9115506419453068, 10);
  sqcRYGate(q, 1.2438228078080067, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8844248356079123, 10);
  sqcRYGate(q, -2.4998355894781086, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9842276076538552, 1);
  sqcRYGate(q, 1.5743825534597287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.632918590362935, 1);
  sqcRYGate(q, -2.1577637487857535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.423604933543764, 3);
  sqcRYGate(q, 2.43300166116921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2993619130885071, 3);
  sqcRYGate(q, -1.3071177312348332, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9859184798338814, 5);
  sqcRYGate(q, -2.988617082824731, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4047657722066331, 5);
  sqcRYGate(q, 0.07991673834989198, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.938754701872748, 7);
  sqcRYGate(q, 1.9785886772550294, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2223357970933497, 7);
  sqcRYGate(q, -1.2118245303758313, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7546863144972402, 9);
  sqcRYGate(q, 2.654532758040536, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3038055835020553, 9);
  sqcRYGate(q, -2.669990589302485, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.47734449267368273, 0);
  sqcRYGate(q, -0.5531009358892209, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.017238731813653985, 0);
  sqcRYGate(q, 1.4567016919289302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.415104132602826, 2);
  sqcRYGate(q, 2.8951280396973478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11429392483760381, 2);
  sqcRYGate(q, -1.4086288345871496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7034120802430612, 4);
  sqcRYGate(q, -0.18117675744871947, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8539193745249727, 4);
  sqcRYGate(q, 0.4580129372335611, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9658192730647661, 6);
  sqcRYGate(q, -1.4427320042670362, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.09877912663338062, 6);
  sqcRYGate(q, 2.53793435673516, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3785385955563294, 8);
  sqcRYGate(q, 1.2503183947850431, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5808300838525584, 8);
  sqcRYGate(q, -1.318447746441982, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.291712109865212, 10);
  sqcRYGate(q, 1.988889662891544, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.107239511244989, 10);
  sqcRYGate(q, 1.2768337571009456, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5756403884711113, 1);
  sqcRYGate(q, 1.350530209619964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.520258391060005, 1);
  sqcRYGate(q, -2.2971345855323717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3021244110450465, 3);
  sqcRYGate(q, -3.067404924558543, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2751484869745726, 3);
  sqcRYGate(q, 0.4439203506968409, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8425858347189283, 5);
  sqcRYGate(q, -2.1415589535596986, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0872780106543534, 5);
  sqcRYGate(q, 1.9863119276825714, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.591094564535924, 7);
  sqcRYGate(q, -1.33865058322179, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4484495209751898, 7);
  sqcRYGate(q, 0.0010915665433701284, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.20455174073909915, 9);
  sqcRYGate(q, -0.6849341198482684, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.08160689072455618, 9);
  sqcRYGate(q, -1.0016592221710834, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.41224397703978877, 0);
  sqcRYGate(q, 2.315198479028978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0881368556034693, 0);
  sqcRYGate(q, 1.8420186086991883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2634607747635327, 2);
  sqcRYGate(q, 2.409132323005497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3775852844465648, 2);
  sqcRYGate(q, 3.029189242441479, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10559768668534242, 4);
  sqcRYGate(q, 1.2325019563552657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0800077545941353, 4);
  sqcRYGate(q, 3.0787742505357527, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1315570581409986, 6);
  sqcRYGate(q, 2.199279206982485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.293993968673438, 6);
  sqcRYGate(q, -2.867886556716052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8774379729932753, 8);
  sqcRYGate(q, -1.2954566551916311, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2987194010099126, 8);
  sqcRYGate(q, -3.0140310300138418, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0394695174489526, 10);
  sqcRYGate(q, -2.8317463900336466, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6655207693531247, 10);
  sqcRYGate(q, -1.5132191083796998, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.238267473960234, 1);
  sqcRYGate(q, -1.4874794991673292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05195063627984364, 1);
  sqcRYGate(q, 0.9959395065757549, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3998340832178675, 3);
  sqcRYGate(q, -0.17790630105524663, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.013123750941179, 3);
  sqcRYGate(q, -2.2209198235186625, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9256015443636287, 5);
  sqcRYGate(q, -0.8014596988147386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08633060006566406, 5);
  sqcRYGate(q, 1.5266851804988786, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.180644833870236, 7);
  sqcRYGate(q, -2.8894789033422335, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1448268005769702, 7);
  sqcRYGate(q, -2.4993475944276415, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4250325932367305, 9);
  sqcRYGate(q, -0.17944928419027306, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.2211455950337303, 9);
  sqcRYGate(q, 1.2324309931269628, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.337367821550234, 0);
  sqcRYGate(q, -0.6741998274325157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.141375495141064, 0);
  sqcRYGate(q, -2.482331737145434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3354626045020574, 2);
  sqcRYGate(q, -2.9639610222267123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5763163663553206, 2);
  sqcRYGate(q, 0.22465921326022112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5031436286336417, 4);
  sqcRYGate(q, -1.1427162254830172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.402753829938312, 4);
  sqcRYGate(q, 2.8765448390508315, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6998956885532941, 6);
  sqcRYGate(q, 0.29965046720483013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06034804718285968, 6);
  sqcRYGate(q, 0.05168196871504538, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0960860422617644, 8);
  sqcRYGate(q, -2.034486707972003, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.36368190847243775, 8);
  sqcRYGate(q, 3.0622514713377695, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2756308707019555, 10);
  sqcRYGate(q, -0.9365155571443903, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4985774236703495, 10);
  sqcRYGate(q, -1.960929450607117, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4130308239675746, 1);
  sqcRYGate(q, -0.6032410392938193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1082301430038615, 1);
  sqcRYGate(q, -1.2173673430995215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2599483730158987, 3);
  sqcRYGate(q, -2.4887319432211847, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.007257961205507695, 3);
  sqcRYGate(q, 1.7768490017492793, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6099455465474102, 5);
  sqcRYGate(q, -2.787716385064375, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6632255251581798, 5);
  sqcRYGate(q, -2.4044454313443575, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5018291226775706, 7);
  sqcRYGate(q, 2.179671105063149, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.504238854743627, 7);
  sqcRYGate(q, 1.0621415553735307, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3337025037023383, 9);
  sqcRYGate(q, -0.38570757175537934, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0845291539411006, 9);
  sqcRYGate(q, 2.750875227944795, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0005382143921475, 0);
  sqcRYGate(q, -2.0742220949886985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2795097305481105, 0);
  sqcRYGate(q, 1.131504297673243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.125734518800198, 2);
  sqcRYGate(q, 2.500848256158935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.047463913548313925, 2);
  sqcRYGate(q, 0.1217024596615796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.46254587882534, 4);
  sqcRYGate(q, -1.1882463890634358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.951341417764196, 4);
  sqcRYGate(q, 1.3312069537290512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.59164490937581, 6);
  sqcRYGate(q, 2.8730407400497557, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.133586960686294, 6);
  sqcRYGate(q, -3.1378817460997595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9517686202401103, 8);
  sqcRYGate(q, -1.34790665390158, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3429614018960336, 8);
  sqcRYGate(q, 0.8691686667545939, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0413891075484765, 10);
  sqcRYGate(q, -2.34315561151603, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3757970655779328, 10);
  sqcRYGate(q, 1.9980323541211495, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9705021722196525, 1);
  sqcRYGate(q, -1.740286477485983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.060594475583545915, 1);
  sqcRYGate(q, -3.000158824724021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3927734938801128, 3);
  sqcRYGate(q, 2.2977852974703024, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.018544407505710216, 3);
  sqcRYGate(q, -2.7550262436297728, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0689199359794177, 5);
  sqcRYGate(q, 1.2942120542945315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.984295373290056, 5);
  sqcRYGate(q, -1.866305155893465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.672021137751166, 7);
  sqcRYGate(q, -2.4297157689531756, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.020375746555073706, 7);
  sqcRYGate(q, 0.9011194908162746, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8073751667421782, 9);
  sqcRYGate(q, -0.8081974359719305, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.837970516531362, 9);
  sqcRYGate(q, -1.9012398131374955, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0490614407506755, 0);
  sqcRYGate(q, -0.2414145517018225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.256389109277164, 0);
  sqcRYGate(q, -0.6805967024149185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2465279945632748, 2);
  sqcRYGate(q, -1.8887959204627265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7753303887870482, 2);
  sqcRYGate(q, 2.9811269942021403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.955000816635804, 4);
  sqcRYGate(q, 2.578563578446159, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.62374749951971, 4);
  sqcRYGate(q, 3.0839171270010914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2280073126842606, 6);
  sqcRYGate(q, -1.4582760325830098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.006143983998434522, 6);
  sqcRYGate(q, -0.006099829357853556, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7961600215435873, 8);
  sqcRYGate(q, -3.076763247522243, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7231364226199437, 8);
  sqcRYGate(q, 1.7141637648596024, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8985499282398548, 10);
  sqcRYGate(q, 0.16169056451048558, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9397648018095657, 10);
  sqcRYGate(q, 3.0163500045655405, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.45493796000788816, 1);
  sqcRYGate(q, -2.9714628542307593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3542715005263606, 1);
  sqcRYGate(q, 0.5595771264253626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1787325793117711, 3);
  sqcRYGate(q, -2.1739693149917443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3796969144420892, 3);
  sqcRYGate(q, -1.8035007321684562, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3786717451102426, 5);
  sqcRYGate(q, -2.5824270375039964, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14579495551393684, 5);
  sqcRYGate(q, 1.6235375780191383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6839265580515947, 7);
  sqcRYGate(q, -3.0349262906084844, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.248677469509513, 7);
  sqcRYGate(q, 0.8444078028306388, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9994874287536093, 9);
  sqcRYGate(q, 2.06336278695868, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.763502371187064, 9);
  sqcRYGate(q, 1.8952082747821761, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.19497366275052214, 0);
  sqcRYGate(q, 2.208668191203901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07341399472774145, 0);
  sqcRYGate(q, 0.6952094512622119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.719306115696618, 2);
  sqcRYGate(q, 0.7608465740873173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04212005699928767, 2);
  sqcRYGate(q, 0.09606188773521307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8425186349743459, 4);
  sqcRYGate(q, -1.7675426622248942, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11338610102769842, 4);
  sqcRYGate(q, -0.06519651447916551, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2959988070822996, 6);
  sqcRYGate(q, 1.1169405089819824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.025781958026798613, 6);
  sqcRYGate(q, 3.1398551959168874, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4319044725387544, 8);
  sqcRYGate(q, -2.5143063463551147, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1028052590254984, 8);
  sqcRYGate(q, -2.0385280788859497, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4367844353210968, 10);
  sqcRYGate(q, 2.864839667559304, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7397606849433565, 10);
  sqcRYGate(q, -1.3305467878987263, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.853410131213244, 1);
  sqcRYGate(q, -0.1291586837364856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.41799228820071566, 1);
  sqcRYGate(q, -0.8493882355400704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0177817988805486, 3);
  sqcRYGate(q, -1.021110003943729, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2215382716779035, 3);
  sqcRYGate(q, 2.0714473886309266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7255520230576264, 5);
  sqcRYGate(q, 2.323488362743175, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.005597527681958366, 5);
  sqcRYGate(q, -1.3499466863253105, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9320166754587934, 7);
  sqcRYGate(q, -2.5530335739698087, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8473513248361684, 7);
  sqcRYGate(q, -1.2318743837963877, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.23151000039624847, 9);
  sqcRYGate(q, 2.759242792433563, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0554452603999946, 9);
  sqcRYGate(q, 1.7590884665425746, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.5014064047131981, 0);
  sqcRYGate(q, -0.5175889495256565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0483823669664853, 0);
  sqcRYGate(q, 2.7771342107508588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1537101322153536, 2);
  sqcRYGate(q, 1.3510968569903425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.91268889562567, 2);
  sqcRYGate(q, -0.1843544132581103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9541692571923361, 4);
  sqcRYGate(q, 2.616621771463337, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.763951124830463, 4);
  sqcRYGate(q, 3.0584234798243197, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.371757086007144, 6);
  sqcRYGate(q, 2.5298584983036223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.591412386174489, 6);
  sqcRYGate(q, -3.0631216480110215, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.582072838815808, 8);
  sqcRYGate(q, 1.3176715679996605, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.479564201356042, 8);
  sqcRYGate(q, 0.13037781944911703, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2257866006520057, 10);
  sqcRYGate(q, 0.8293252447198327, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5623173900720841, 10);
  sqcRYGate(q, 1.8746266496313353, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5204186811350222, 1);
  sqcRYGate(q, -2.929963046086363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.806728796794015, 1);
  sqcRYGate(q, 2.816916718885895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2835450920089575, 3);
  sqcRYGate(q, 2.4560139865667474, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.890454257188318, 3);
  sqcRYGate(q, 1.9062121220837378, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5804530862638568, 5);
  sqcRYGate(q, 2.9909486584739615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0011462305097010577, 5);
  sqcRYGate(q, -2.965779961248381, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6309299429260324, 7);
  sqcRYGate(q, -1.4284766150489328, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.004600662410576994, 7);
  sqcRYGate(q, -0.7118991504101554, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1416769240688733, 9);
  sqcRYGate(q, -0.5566808048721441, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7601717130905081, 9);
  sqcRYGate(q, -1.5668737198996352, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6589184128704457, 0);
  sqcRYGate(q, -1.388686138745106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19873970474348113, 0);
  sqcRYGate(q, -3.1328610413242224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.537307301376772, 2);
  sqcRYGate(q, 1.2721160915517797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.078583014239348, 2);
  sqcRYGate(q, -2.760680884173489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.726669136516444, 4);
  sqcRYGate(q, 1.477592672061344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0426562047312498, 4);
  sqcRYGate(q, -1.6315250332006501, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.194334089039363, 6);
  sqcRYGate(q, -1.448241310257405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.574272305912517, 6);
  sqcRYGate(q, 2.0735693647060733, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6657425279155718, 8);
  sqcRYGate(q, 0.5125202426578268, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.761557852459764, 8);
  sqcRYGate(q, 3.0328116984652693, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.187521557077276, 10);
  sqcRYGate(q, -1.9825871166260893, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4995986068292197, 10);
  sqcRYGate(q, -0.5428840330068248, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3142042135449636, 1);
  sqcRYGate(q, -1.8825972125704808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.569031082250052, 1);
  sqcRYGate(q, 0.3921217322139645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6606189139787295, 3);
  sqcRYGate(q, -2.8689758947448154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.12350737594776895, 3);
  sqcRYGate(q, 1.3807528379018814, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17098672618758215, 5);
  sqcRYGate(q, -0.2580494023056535, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.001464681407348678, 5);
  sqcRYGate(q, -2.120759917468935, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5517087844398159, 7);
  sqcRYGate(q, 1.9781779441308158, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0702032781235034, 7);
  sqcRYGate(q, 3.120881596998296, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7274029434638327, 9);
  sqcRYGate(q, -0.019791690827344804, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.838683462766614, 9);
  sqcRYGate(q, 1.8592198642440065, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9824367760884523, 0);
  sqcRYGate(q, -2.4226414775146448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13416126283016006, 0);
  sqcRYGate(q, 0.44709598886965196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6287822962110088, 2);
  sqcRYGate(q, 2.539707130597902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.54320523767576, 2);
  sqcRYGate(q, -0.08825615860178981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.241557571205484, 4);
  sqcRYGate(q, 1.5309253045125715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.35354887329013707, 4);
  sqcRYGate(q, 0.0006892030621480911, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3080032854444328, 6);
  sqcRYGate(q, -1.9804316687287302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5598625924876373, 6);
  sqcRYGate(q, -1.6387486009010548, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18686820826232697, 8);
  sqcRYGate(q, -1.1892766968306925, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8940157402674709, 8);
  sqcRYGate(q, -3.098633614401353, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6679548379869448, 10);
  sqcRYGate(q, -2.4443268033278085, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9579461798657478, 10);
  sqcRYGate(q, -2.6906600967312255, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.865622549610763, 1);
  sqcRYGate(q, -1.8946323788867103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1282736091483634, 1);
  sqcRYGate(q, -0.22437276578795726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6447772944987902, 3);
  sqcRYGate(q, -0.8168858395983366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.20901945139079015, 3);
  sqcRYGate(q, -0.685180560002216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5126898854558828, 5);
  sqcRYGate(q, 0.5434661320742891, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5410350581898085, 5);
  sqcRYGate(q, 2.776881949542366, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5575112756690246, 7);
  sqcRYGate(q, -0.6797940942001235, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1774466580292953, 7);
  sqcRYGate(q, 1.5780584171558454, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2317403673667249, 9);
  sqcRYGate(q, -2.510135659655708, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3294162548219708, 9);
  sqcRYGate(q, -2.699258112114545, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9616423777261791, 0);
  sqcRYGate(q, -1.494596153409738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.605809253875533, 0);
  sqcRYGate(q, -0.447129254634306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4832310293630275, 2);
  sqcRYGate(q, 0.27656107496492144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.881417819667031, 2);
  sqcRYGate(q, -1.5098589101948259, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.851146389544506, 4);
  sqcRYGate(q, 3.0314180733417553, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.01726810043867348, 4);
  sqcRYGate(q, -3.1382976819220407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5091078265058133, 6);
  sqcRYGate(q, 1.5310821038953186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1240944182925534, 6);
  sqcRYGate(q, 0.0031471757752353506, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6232615452432198, 8);
  sqcRYGate(q, -0.6603166922895084, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5639040506155917, 8);
  sqcRYGate(q, 0.5879656511586975, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8228156870189176, 10);
  sqcRYGate(q, -3.0316044566211953, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.778393134921525, 10);
  sqcRYGate(q, -0.8668473885856154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.393923263346175, 1);
  sqcRYGate(q, -1.542467273218696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7262000213880526, 1);
  sqcRYGate(q, -3.1136100011978285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.980372990628854, 3);
  sqcRYGate(q, 0.5811192175870019, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6844540396229526, 3);
  sqcRYGate(q, 0.02000789617609566, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5894853498033381, 5);
  sqcRYGate(q, -0.586591729556516, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2980845155379035, 5);
  sqcRYGate(q, -0.07850363161757799, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.19003150705492378, 7);
  sqcRYGate(q, 1.511983642754127, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2093241007898177, 7);
  sqcRYGate(q, 3.141445557639479, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.750699833883896, 9);
  sqcRYGate(q, -3.050624332781401, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.130495842621019, 9);
  sqcRYGate(q, -0.026212124613846807, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6556557840039084, 0);
  sqcRYGate(q, -0.36161014952672854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.088773938727585, 0);
  sqcRYGate(q, -1.8296009127039632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.632528240198262, 2);
  sqcRYGate(q, 2.2580058157340357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8158079156215763, 2);
  sqcRYGate(q, -3.0729144028275432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4027844146765542, 4);
  sqcRYGate(q, 2.1789516093465444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9414612170964822, 4);
  sqcRYGate(q, -2.9996206590038184, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0447533332226975, 6);
  sqcRYGate(q, 0.22405046679369087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9547608957815391, 6);
  sqcRYGate(q, -1.574494724731974, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1511608082313227, 8);
  sqcRYGate(q, 1.5706488522700015, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6619878545868128, 8);
  sqcRYGate(q, 3.096749726342305, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.266239764472009, 10);
  sqcRYGate(q, -1.377406197487483, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.265867129410828, 10);
  sqcRYGate(q, -0.2765630739744563, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7285989828533144, 1);
  sqcRYGate(q, -1.7317518320807397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0823702754793856, 1);
  sqcRYGate(q, 1.9282122837578894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6911820055000146, 3);
  sqcRYGate(q, -1.7565204578232487, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7054849356178163, 3);
  sqcRYGate(q, 0.0010329235013591073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5233623554882847, 5);
  sqcRYGate(q, 0.3741252074238696, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1412361745352126, 5);
  sqcRYGate(q, -3.108007314081336, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5605508016293799, 7);
  sqcRYGate(q, -2.1706738013279923, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1091635838369178, 7);
  sqcRYGate(q, 1.7112661246104413, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0677512647654273, 9);
  sqcRYGate(q, 0.2545476728172451, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.534965212755167, 9);
  sqcRYGate(q, 0.6728760432210305, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2203728880512994, 0);
  sqcRYGate(q, 1.3689831383237432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.022072406535778, 0);
  sqcRYGate(q, 0.27334129250840444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.824956962016307, 2);
  sqcRYGate(q, 2.7029388647384005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01023042408950643, 2);
  sqcRYGate(q, 0.05942267502303785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9555796054597945, 4);
  sqcRYGate(q, -1.5060048107039483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.025802633872744174, 4);
  sqcRYGate(q, 1.2258216901641648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.48195484707575004, 6);
  sqcRYGate(q, -1.5699165700845576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1298233028829587, 6);
  sqcRYGate(q, -0.019314049067549632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5646356654532303, 8);
  sqcRYGate(q, 0.6528266646327259, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.13135687477838, 8);
  sqcRYGate(q, 2.9532403648906502, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.538857076084664, 10);
  sqcRYGate(q, -0.23782789546569827, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4066678014688647, 10);
  sqcRYGate(q, 3.13415864626883, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1822338260443275, 1);
  sqcRYGate(q, 1.41255887156339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0282092229260127, 1);
  sqcRYGate(q, -2.616990327575711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3968438842301063, 3);
  sqcRYGate(q, -1.3004859904868606, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9989019057688378, 3);
  sqcRYGate(q, 0.001134361711926653, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7155160808963097, 5);
  sqcRYGate(q, -1.6778600370526775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.568443622767964, 5);
  sqcRYGate(q, 3.137719313267197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7718580946317781, 7);
  sqcRYGate(q, -1.5827821739581063, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7446964677920276, 7);
  sqcRYGate(q, 3.1371233428935885, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.398753410675492, 9);
  sqcRYGate(q, -1.0589406324536785, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1381517614776944, 9);
  sqcRYGate(q, 2.100268721542961, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.199109734287945, 0);
  sqcRYGate(q, -1.6714773310879945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2949568014935746, 0);
  sqcRYGate(q, 1.5155934598508987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7170455230244803, 2);
  sqcRYGate(q, -0.4848104855432087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.590357672162968, 2);
  sqcRYGate(q, -0.5122786648621444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14627485354390687, 4);
  sqcRYGate(q, 2.8314962520920526, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5862807377601125, 4);
  sqcRYGate(q, 1.7368029906217788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.047905930416661, 6);
  sqcRYGate(q, -2.6857578374371793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0015665127588152996, 6);
  sqcRYGate(q, 3.1391601047950055, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.507949796777532, 8);
  sqcRYGate(q, -2.6802071262644063, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6203880109204034, 8);
  sqcRYGate(q, 1.6597950281616214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9578115146869104, 10);
  sqcRYGate(q, -3.0377434567824895, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2352210398797148, 10);
  sqcRYGate(q, 0.0203657677361555, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0001767496611214, 1);
  sqcRYGate(q, 1.0665543557811108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0014800453787370492, 1);
  sqcRYGate(q, -0.0016795453404433245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.275535078837326, 3);
  sqcRYGate(q, 1.991152180546596, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0354397426487743, 3);
  sqcRYGate(q, 3.1408459397177646, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.287699622376618, 5);
  sqcRYGate(q, 2.893747831116956, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5320401872138008, 5);
  sqcRYGate(q, 0.0012744339888212742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8931842143715305, 7);
  sqcRYGate(q, -3.090562900653536, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0718735825000127, 7);
  sqcRYGate(q, -0.00024446170249593606, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6282401987292923, 9);
  sqcRYGate(q, 0.7852796707643712, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0006893991042186766, 9);
  sqcRYGate(q, -3.022879318907512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4343742881198454, 0);
  sqcRYGate(q, 1.9233122487009404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3067741299169351, 0);
  sqcRYGate(q, -1.357682403794236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.815586072356668, 2);
  sqcRYGate(q, 0.7352136562382134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8564640483944449, 2);
  sqcRYGate(q, 1.2586350483960747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.563213565438882, 4);
  sqcRYGate(q, 0.08113541801230362, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0008134673947587361, 4);
  sqcRYGate(q, -1.850061748811667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7072591550233165, 6);
  sqcRYGate(q, -0.001556383096247961, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08309005926878044, 6);
  sqcRYGate(q, 3.1396023986229107, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5616994748281674, 8);
  sqcRYGate(q, 3.1142574413739044, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.54461313847745, 8);
  sqcRYGate(q, -0.9239485933331738, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.06809553186144512, 10);
  sqcRYGate(q, 0.4094540625589209, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0750663903519486, 10);
  sqcRYGate(q, 1.5364234752051422, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7971932214775264, 1);
  sqcRYGate(q, -2.685552638344588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9996144969811338, 1);
  sqcRYGate(q, 1.8910470826543055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.582693828008642, 3);
  sqcRYGate(q, 0.13854687514974307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5725202786117132, 3);
  sqcRYGate(q, -1.5543157405048271, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3437567000748594, 5);
  sqcRYGate(q, 1.0717064922944013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3414833917944158, 5);
  sqcRYGate(q, -0.5902366234383288, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.506359974399299, 7);
  sqcRYGate(q, 3.1283496041193857, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.131684862380393, 7);
  sqcRYGate(q, 0.00019688568718872885, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.559843206598293, 9);
  sqcRYGate(q, -0.16626608822350963, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.00863408974062807, 9);
  sqcRYGate(q, -3.039731485645441, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4186561475514456, 0);
  sqcRYGate(q, -3.054885000169176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.023757036925051267, 0);
  sqcRYGate(q, -0.3199410113837275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5539780703560577, 2);
  sqcRYGate(q, 1.6103065869801683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1137299606347644, 2);
  sqcRYGate(q, -0.017838439615069628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.088704499806284, 4);
  sqcRYGate(q, 1.571102813502619, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5255438786034894, 4);
  sqcRYGate(q, 0.057723760301595206, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02253773409290272, 6);
  sqcRYGate(q, -0.06899261119025149, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5425650360719887, 6);
  sqcRYGate(q, 1.568568350110862, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6288011358644907, 8);
  sqcRYGate(q, -0.9698402965262113, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.094939193314354, 8);
  sqcRYGate(q, -0.014816348858921828, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7377313131494094, 10);
  sqcRYGate(q, -0.39173660722252357, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9697779539589204, 10);
  sqcRYGate(q, 1.9042101993260203, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.08514641528001467, 1);
  sqcRYGate(q, -1.5904247152657387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1407987188555286, 1);
  sqcRYGate(q, 1.5850382797353326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.096265722283489, 3);
  sqcRYGate(q, 2.6827460146199384, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0009550161180742478, 3);
  sqcRYGate(q, 1.5644137615093736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5717065144622413, 5);
  sqcRYGate(q, -1.5695844521437803, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5857311031973256, 5);
  sqcRYGate(q, 1.5657135595288005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5513848825670336, 7);
  sqcRYGate(q, 1.535311728310849, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.542682416673304, 7);
  sqcRYGate(q, -1.566920952680925, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5759663138333426, 9);
  sqcRYGate(q, -0.053965370864178304, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5691236277016607, 9);
  sqcRYGate(q, 1.5712704299086475, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2295088980856814, 0);
  sqcRYGate(q, -1.5631160845251575, 1);
  sqcRYGate(q, 1.6004821100957787, 2);
  sqcRYGate(q, -3.1251105849447183, 3);
  sqcRYGate(q, -2.6977930347558523, 4);
  sqcRYGate(q, 1.5710390135690087, 5);
  sqcRYGate(q, 0.00012756960059778777, 6);
  sqcRYGate(q, -1.571398443642396, 7);
  sqcRYGate(q, -3.141582887020662, 8);
  sqcRYGate(q, -1.5385392040920287, 9);
  sqcRYGate(q, 0.007454816668350794, 10);
  sqcRYGate(q, 2.1564340838403186, 11);

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
