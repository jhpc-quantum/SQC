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

  sqcRYGate(q, -1.1525567272440178, 0);
  sqcRYGate(q, 2.8860419599156995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0616816342453905, 0);
  sqcRYGate(q, 1.5736410186669172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0000307665159425, 2);
  sqcRYGate(q, -3.022884706816594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9119306994814478, 2);
  sqcRYGate(q, -1.2221081826722449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.636201437181592, 4);
  sqcRYGate(q, 2.3228705632269464, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7659946103955088, 4);
  sqcRYGate(q, 0.7007032818912312, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8391475561077089, 6);
  sqcRYGate(q, 1.5834077512731204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0140520118819953, 6);
  sqcRYGate(q, 1.5692142461653489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7036973410226657, 0);
  sqcRYGate(q, 2.6255999008425874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.440790377765177, 0);
  sqcRYGate(q, 1.3818146101457758, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4672737476723583, 2);
  sqcRYGate(q, 0.8025477237559615, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.16131874220872877, 2);
  sqcRYGate(q, -2.4644009261752027, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.167844414723776, 4);
  sqcRYGate(q, -0.12354716243633926, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2883786012173779, 4);
  sqcRYGate(q, 0.5402251598977624, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.201656939045366, 1);
  sqcRYGate(q, -0.9535784266401071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8233279230955928, 1);
  sqcRYGate(q, -1.4533512775814734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.91965130026573, 3);
  sqcRYGate(q, -0.4721018074116774, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7747809846206675, 3);
  sqcRYGate(q, 1.5642629182072216, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.052702171359926844, 5);
  sqcRYGate(q, -3.1175008023378434, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2544117428819597, 5);
  sqcRYGate(q, 1.6587850855327675, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9894353359005734, 0);
  sqcRYGate(q, -1.7538803592922931, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.042627898322533, 0);
  sqcRYGate(q, 1.9625201018403433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7386991980623829, 1);
  sqcRYGate(q, 0.12715524410170254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9759685955052744, 1);
  sqcRYGate(q, 0.03866423797554521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9172004259743979, 2);
  sqcRYGate(q, 2.9771538409249003, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.43271362964291826, 2);
  sqcRYGate(q, 1.5707358302890928, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.052678768565509, 3);
  sqcRYGate(q, -3.011406363397104, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7678028523150493, 3);
  sqcRYGate(q, 2.991323618243071, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8228459703272523, 4);
  sqcRYGate(q, -0.1473002637196359, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.8151284309843767, 4);
  sqcRYGate(q, -2.308805000457059, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6748438822278393, 5);
  sqcRYGate(q, 1.0150522334148029, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1197045740609088, 5);
  sqcRYGate(q, 1.2651294669376787, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1071341439169906, 0);
  sqcRYGate(q, 2.7323394368314435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4761834899930186, 0);
  sqcRYGate(q, -2.228913671333814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11420161397448769, 2);
  sqcRYGate(q, -3.037850466625078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9619386348230694, 2);
  sqcRYGate(q, -1.2815520898711417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37363829308305085, 4);
  sqcRYGate(q, 1.1523387312400377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5715607458602898, 4);
  sqcRYGate(q, 3.1359217506776047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2196185791107244, 6);
  sqcRYGate(q, -2.3587100499953846, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.059751351728286, 6);
  sqcRYGate(q, 2.195994844920401, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7006949852027824, 0);
  sqcRYGate(q, 1.8496198261821133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5525787460757632, 0);
  sqcRYGate(q, 1.322446407467333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.73197497164456, 2);
  sqcRYGate(q, 2.248074680406196, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.912882316381424, 2);
  sqcRYGate(q, -2.461018379227241, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2611031415529332, 4);
  sqcRYGate(q, 0.5273405208176349, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.903763268635374, 4);
  sqcRYGate(q, -1.3201475096192896, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.16621413177636768, 1);
  sqcRYGate(q, -0.1756615819078089, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03463696584088183, 1);
  sqcRYGate(q, 0.9391790337894842, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8046073383779782, 3);
  sqcRYGate(q, 1.6924559383311064, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8514778403323584, 3);
  sqcRYGate(q, -1.3991460515178813, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7762065985246789, 5);
  sqcRYGate(q, 0.999709801279212, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3301527284242383, 5);
  sqcRYGate(q, -3.133020570819529, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.721736863557485, 0);
  sqcRYGate(q, -1.484829573138784, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1675767057673327, 0);
  sqcRYGate(q, 2.7115543673700855, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.11765352827019582, 1);
  sqcRYGate(q, 1.5076918909778145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.751764002001634, 1);
  sqcRYGate(q, -2.261335632414333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.304921518290738, 2);
  sqcRYGate(q, -0.7193290167245427, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.21089912079176523, 2);
  sqcRYGate(q, 1.8018391366816755, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.1649470576829064, 3);
  sqcRYGate(q, -2.320253730413723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.045369594384603, 3);
  sqcRYGate(q, 2.841373205855224, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.570445664252885, 4);
  sqcRYGate(q, 2.803114552042045, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.1318114059750943, 4);
  sqcRYGate(q, 1.3141119089099345, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.4478197858287127, 5);
  sqcRYGate(q, -2.717181483580049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2132376805891418, 5);
  sqcRYGate(q, 1.0290112155433455, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8636814475842995, 0);
  sqcRYGate(q, 1.924015193294026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6727975955645698, 0);
  sqcRYGate(q, -0.4091862337787624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7077923544317954, 2);
  sqcRYGate(q, 2.130536608883152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4055446391925607, 2);
  sqcRYGate(q, -3.097697322079424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7187869770037567, 4);
  sqcRYGate(q, -0.630619298814985, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8595596564445676, 4);
  sqcRYGate(q, 1.1478025528008446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.129165820067423, 6);
  sqcRYGate(q, -1.8732446149649022, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9437155307144023, 6);
  sqcRYGate(q, 0.5492938511027122, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4707651112211125, 0);
  sqcRYGate(q, 0.08169172443500283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8823116420737223, 0);
  sqcRYGate(q, -0.392307636143477, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2994964103922655, 2);
  sqcRYGate(q, -0.9556922356636967, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5529398627753537, 2);
  sqcRYGate(q, -1.4731033779629206, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8870241671594465, 4);
  sqcRYGate(q, -2.378710943989801, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5876377026797371, 4);
  sqcRYGate(q, 2.5048080590558612, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4868176343175326, 1);
  sqcRYGate(q, -0.124125732660589, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9194203920436507, 1);
  sqcRYGate(q, 2.623473662486188, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1677184097694204, 3);
  sqcRYGate(q, -0.9411583782408421, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.27673287483731707, 3);
  sqcRYGate(q, -1.7427937008320868, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7920348012793026, 5);
  sqcRYGate(q, -0.5125491148631071, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.047520711212380995, 5);
  sqcRYGate(q, 2.116527813519321, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.10134813103848332, 0);
  sqcRYGate(q, 3.062188505575009, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3510415429173879, 0);
  sqcRYGate(q, 0.8496666053211369, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7121201997303666, 1);
  sqcRYGate(q, -0.4693472881369738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5678422732304476, 1);
  sqcRYGate(q, 1.029009561725755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4462612745061852, 2);
  sqcRYGate(q, 2.7659046641186027, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.512846182259219, 2);
  sqcRYGate(q, -1.1379892152848874, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.7590369563017196, 3);
  sqcRYGate(q, -1.218751815949528, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.45807040740199667, 3);
  sqcRYGate(q, 1.3895090386990328, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2327256302051468, 4);
  sqcRYGate(q, -1.321913460613506, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.5856530193835825, 4);
  sqcRYGate(q, 0.8730282896554609, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.775053334408132, 5);
  sqcRYGate(q, 0.02108458139691738, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4468858697717035, 5);
  sqcRYGate(q, 0.42360793693855475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3495080519314522, 0);
  sqcRYGate(q, -0.7094108193660466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4672389418980458, 0);
  sqcRYGate(q, 2.815700476837462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.036989585726656, 2);
  sqcRYGate(q, -2.9719331127515276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.351555380699337, 2);
  sqcRYGate(q, 1.7687296237457346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3706547734899415, 4);
  sqcRYGate(q, -2.4210280159522806, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4442876550916397, 4);
  sqcRYGate(q, -2.2870868270436486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7360744475825867, 6);
  sqcRYGate(q, 1.5551105301753596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.25613732227625424, 6);
  sqcRYGate(q, -1.9265971394425214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6966166215658434, 0);
  sqcRYGate(q, 2.2455136901059802, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3929643651439778, 0);
  sqcRYGate(q, -3.0054317604696026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.856972956665267, 2);
  sqcRYGate(q, -1.2568581616921142, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.545277456666488, 2);
  sqcRYGate(q, -1.0700246739129007, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.27629364966717, 4);
  sqcRYGate(q, 2.680446586183695, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9177298847185957, 4);
  sqcRYGate(q, -2.9253026905473325, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.912559007120707, 1);
  sqcRYGate(q, 1.3370747542029795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.008838683170492, 1);
  sqcRYGate(q, -0.1006049833442697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5204450143644186, 3);
  sqcRYGate(q, -2.307437179697715, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.506979200689838, 3);
  sqcRYGate(q, 1.0909970864861709, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.1045770635026857, 5);
  sqcRYGate(q, 2.096684874244154, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8605004793616375, 5);
  sqcRYGate(q, 3.037041852580315, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.28761015591769645, 0);
  sqcRYGate(q, 1.0348755736487574, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5361580500585545, 0);
  sqcRYGate(q, 2.952734929382977, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.313296732766414, 1);
  sqcRYGate(q, -2.4616899745176455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7514365413802638, 1);
  sqcRYGate(q, -2.2039287095506856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9142844366411023, 2);
  sqcRYGate(q, 0.7052222111613436, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.655143831860053, 2);
  sqcRYGate(q, -0.020095352784399445, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.0852673417813312, 3);
  sqcRYGate(q, 0.17726539141309464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2972276035331776, 3);
  sqcRYGate(q, 1.433521326075033, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5245307503480356, 4);
  sqcRYGate(q, 2.5203339419896547, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.9231424502078315, 4);
  sqcRYGate(q, 1.2925023023823545, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.6364384570567277, 5);
  sqcRYGate(q, -2.817201262574865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7467450098282216, 5);
  sqcRYGate(q, -2.1850566156982567, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.207260251836539, 0);
  sqcRYGate(q, 0.36408549742993646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0956129695326426, 0);
  sqcRYGate(q, -1.060442557509172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1630574455064844, 2);
  sqcRYGate(q, 2.7274187908995287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.108629284205726, 2);
  sqcRYGate(q, 2.658419157947806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5219344857242734, 4);
  sqcRYGate(q, -1.7385421780265313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2749960409804295, 4);
  sqcRYGate(q, 0.6793318515867028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28386141828548944, 6);
  sqcRYGate(q, 3.0179115621691066, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2256989366227703, 6);
  sqcRYGate(q, 0.9555166197230404, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5399988187249644, 0);
  sqcRYGate(q, -0.626683805917235, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5802232923284816, 0);
  sqcRYGate(q, 2.303140843540261, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7737044071778314, 2);
  sqcRYGate(q, -0.07501983338430838, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.13344221268832257, 2);
  sqcRYGate(q, 2.2973250642749465, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.23615375062607, 4);
  sqcRYGate(q, 0.07616681724427897, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6119638423116243, 4);
  sqcRYGate(q, -1.3690843151336078, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2992714777558836, 1);
  sqcRYGate(q, 2.498291701432122, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3646021253244553, 1);
  sqcRYGate(q, -1.9381698574198352, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0220310035520124, 3);
  sqcRYGate(q, -2.2986478122795884, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.04089708543622529, 3);
  sqcRYGate(q, 2.364637509651524, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9739909235166826, 5);
  sqcRYGate(q, -1.8655009451736357, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5985734047528979, 5);
  sqcRYGate(q, -2.1597629829799505, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4927266593387274, 0);
  sqcRYGate(q, 0.8714290171212573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.08358443671311892, 0);
  sqcRYGate(q, -2.1192592083609245, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.397448983160615, 1);
  sqcRYGate(q, -1.9788382594818454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5921108480992694, 1);
  sqcRYGate(q, 1.4217087361751848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5739393827739336, 2);
  sqcRYGate(q, 1.5493375641466103, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.2538399812728649, 2);
  sqcRYGate(q, 0.7177291226909569, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.500208185169992, 3);
  sqcRYGate(q, -3.1317802773706047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.442885764523703, 3);
  sqcRYGate(q, 2.7346474588917897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.873022718961358, 4);
  sqcRYGate(q, 1.1397217290140098, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.152863663735977, 4);
  sqcRYGate(q, 0.8015112954989672, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.0805718742933608, 5);
  sqcRYGate(q, 1.3545761944538242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.18453423559370377, 5);
  sqcRYGate(q, 1.0662727885717924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.251107030183759, 0);
  sqcRYGate(q, -1.6333121750858108, 1);
  sqcRYGate(q, 2.8274302871973522, 2);
  sqcRYGate(q, 1.344548594270701, 3);
  sqcRYGate(q, -1.3937727438935785, 4);
  sqcRYGate(q, -2.0418195382401154, 5);
  sqcRYGate(q, -3.112142321616299, 6);
  sqcRYGate(q, 2.6094785789232295, 7);

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
