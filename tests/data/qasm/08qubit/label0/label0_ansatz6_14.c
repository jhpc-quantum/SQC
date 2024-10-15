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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.437212168604159, 0);
  sqcRYGate(q, -0.45276286085876494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3967059891727334, 0);
  sqcRYGate(q, -3.087777478239534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4588082256007744, 1);
  sqcRYGate(q, 3.138695627317814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5114339286691072, 1);
  sqcRYGate(q, -2.342375566789312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36810165673534556, 2);
  sqcRYGate(q, 1.4956433064827692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3726982857979104, 2);
  sqcRYGate(q, 0.04893209434209744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3805176503850123, 3);
  sqcRYGate(q, 2.7237196733413707, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0841611798664736, 3);
  sqcRYGate(q, -1.8190085292613942, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3239065194104322, 4);
  sqcRYGate(q, 0.12640687538009932, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.388602621900505, 4);
  sqcRYGate(q, 3.0147185224357433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1826675654847918, 5);
  sqcRYGate(q, -1.5555671672877704, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0548999503990704, 5);
  sqcRYGate(q, -0.11518032225837098, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.43847744660901355, 6);
  sqcRYGate(q, -1.1971503481867425, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.00637831075426476, 6);
  sqcRYGate(q, 0.02900202112547561, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.886489093882651, 0);
  sqcRYGate(q, 1.8013012417065664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1637715836752696, 0);
  sqcRYGate(q, 1.194459131753949, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0277207625924571, 1);
  sqcRYGate(q, 2.9056359296116345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6826971181063453, 1);
  sqcRYGate(q, 1.2724707324450018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3858165172969575, 2);
  sqcRYGate(q, 1.6191810198450765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21447454510176908, 2);
  sqcRYGate(q, 2.844630790253251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0855500385637635, 3);
  sqcRYGate(q, -2.189878706528951, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0015641952982647922, 3);
  sqcRYGate(q, -0.021609286312277654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0724042653244883, 4);
  sqcRYGate(q, 1.6040191111300979, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5889905014896155, 4);
  sqcRYGate(q, 2.6255396662239203, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8488258041959844, 5);
  sqcRYGate(q, 0.7377843496315171, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11063525786944428, 5);
  sqcRYGate(q, 3.118998635958806, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3389284528259777, 6);
  sqcRYGate(q, -0.6642320518219629, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3610776810205483, 6);
  sqcRYGate(q, -0.020671162837304382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.297518434567753, 0);
  sqcRYGate(q, -0.018034731383421154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.936145780667937, 0);
  sqcRYGate(q, -0.0755161101360175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0527248918229146, 1);
  sqcRYGate(q, -1.1667104431848925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16143387858358382, 1);
  sqcRYGate(q, 2.1663155862658567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9357428681912436, 2);
  sqcRYGate(q, 2.2122784932464548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.945222418948576, 2);
  sqcRYGate(q, 0.3257258178423737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6369665165321967, 3);
  sqcRYGate(q, 0.3854514497021456, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1444351167281395, 3);
  sqcRYGate(q, -0.5038903397742898, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2682309798541684, 4);
  sqcRYGate(q, -0.11119143221417449, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4338921514218361, 4);
  sqcRYGate(q, -2.0019369568493284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3004176692345222, 5);
  sqcRYGate(q, -0.08561689273345507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.02914394975862855, 5);
  sqcRYGate(q, 3.140436010492619, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4555698761552405, 6);
  sqcRYGate(q, 0.5643346301303009, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0076720647654307, 6);
  sqcRYGate(q, -1.2638534728876154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9842079927250844, 0);
  sqcRYGate(q, -0.3201469455435708, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3154702615800677, 0);
  sqcRYGate(q, 2.971085332468655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.572310094634723, 1);
  sqcRYGate(q, -0.1357229421958701, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5794721863293848, 1);
  sqcRYGate(q, -2.8283863568384726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5345204651033466, 2);
  sqcRYGate(q, -1.401468781028049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02617538395931085, 2);
  sqcRYGate(q, 1.2537728066868066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.565515102979613, 3);
  sqcRYGate(q, 2.817122679653834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3397191563693822, 3);
  sqcRYGate(q, -0.9653894822495506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6912253759452991, 4);
  sqcRYGate(q, 0.9004956302269097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23974671882144175, 4);
  sqcRYGate(q, 2.0226780188822584, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.03523828032636711, 5);
  sqcRYGate(q, 1.9407282335467855, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.37014655140068836, 5);
  sqcRYGate(q, 0.0003737318090513142, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4819732907466437, 6);
  sqcRYGate(q, 0.9565664501897455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2062865809322227, 6);
  sqcRYGate(q, 1.8625568834217967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.52363725714972, 0);
  sqcRYGate(q, -1.0449955241002555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.259541955192377, 0);
  sqcRYGate(q, 1.9533668465906575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8812743353901108, 1);
  sqcRYGate(q, -1.7147593397006258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.271449338338103, 1);
  sqcRYGate(q, -0.4715278577685416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.234144582640771, 2);
  sqcRYGate(q, -1.5537150003382028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.046675527303034, 2);
  sqcRYGate(q, -1.13244601977257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4917524558522155, 3);
  sqcRYGate(q, -1.9986212959758891, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9515590468379975, 3);
  sqcRYGate(q, 2.7883795145014316, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7396802536087526, 4);
  sqcRYGate(q, -2.4782625438688384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5444494128097355, 4);
  sqcRYGate(q, 0.32360770486689905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2586936935182365, 5);
  sqcRYGate(q, -3.0544522708618773, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7082970294850871, 5);
  sqcRYGate(q, 3.1415565116090733, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.735005780935666, 6);
  sqcRYGate(q, -1.401183903295471, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.219145867581229, 6);
  sqcRYGate(q, 1.9261450808894558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2785811957922357, 0);
  sqcRYGate(q, -1.1800101747293346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03325062597647333, 0);
  sqcRYGate(q, 1.0222824354879618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5721214911109014, 1);
  sqcRYGate(q, -2.7590560224104714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5136788370012049, 1);
  sqcRYGate(q, 2.9393332001116517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0943865716892438, 2);
  sqcRYGate(q, 2.820789370494036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.050127776167106404, 2);
  sqcRYGate(q, 3.0113697051737307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.088217327477865, 3);
  sqcRYGate(q, -2.643308711804641, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7143847464090074, 3);
  sqcRYGate(q, 2.536297107481043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9542325228393862, 4);
  sqcRYGate(q, 1.6700191272608622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -9.344572228268876e-05, 4);
  sqcRYGate(q, 0.7170588651685001, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4287708977045979, 5);
  sqcRYGate(q, 2.1909330314096045, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.129787016603439, 5);
  sqcRYGate(q, -3.138371787616294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4506186875360694, 6);
  sqcRYGate(q, -1.5154506894154318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1385259426591903, 6);
  sqcRYGate(q, -0.2865541796795623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3505288875050152, 0);
  sqcRYGate(q, -2.258696705482319, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1332976780315627, 0);
  sqcRYGate(q, -3.048340677915153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.198080373552835, 1);
  sqcRYGate(q, 1.1219765647592785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5605648750469268, 1);
  sqcRYGate(q, 0.6972787693050643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2606544937046209, 2);
  sqcRYGate(q, 0.010515130808920858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.891919430350212, 2);
  sqcRYGate(q, 1.406933312381926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.068977017037162, 3);
  sqcRYGate(q, -1.5055242527940227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.420404889971333, 3);
  sqcRYGate(q, -3.122504148526757, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2354512271613425, 4);
  sqcRYGate(q, -0.2311243459048304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0011931745326983695, 4);
  sqcRYGate(q, 0.797756908467524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5596243204211913, 5);
  sqcRYGate(q, 3.1028611939141397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7332232329030137, 5);
  sqcRYGate(q, -0.000190529325476696, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3616213944397444, 6);
  sqcRYGate(q, 2.4916195608827967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.04687682951181513, 6);
  sqcRYGate(q, -3.0928454860272803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8409217926303576, 0);
  sqcRYGate(q, 0.1231060711468892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0062245320913195, 0);
  sqcRYGate(q, 1.0533123600638241, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.178466143960199, 1);
  sqcRYGate(q, -2.282122366255745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4529735310437925, 1);
  sqcRYGate(q, -1.7657903610361738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.548230960942461, 2);
  sqcRYGate(q, 2.829940776439924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9421013394670368, 2);
  sqcRYGate(q, -2.3473030972689135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0602281531840123, 3);
  sqcRYGate(q, -0.2351288272362888, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.12753801972098, 3);
  sqcRYGate(q, 0.03295592882417431, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0145152535838395, 4);
  sqcRYGate(q, -2.971764278712743, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9378807419968769, 4);
  sqcRYGate(q, -0.9902726479308014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4502398557325389, 5);
  sqcRYGate(q, 0.6573714162479858, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.304017430958229, 5);
  sqcRYGate(q, 0.0874237159441347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.496294356702651, 6);
  sqcRYGate(q, -2.50803010790735, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1264727253475684, 6);
  sqcRYGate(q, 0.29871364760980956, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5318090054628932, 0);
  sqcRYGate(q, 0.09084347786294317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2975114749875178, 0);
  sqcRYGate(q, -1.59399820699529, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0671262761392697, 1);
  sqcRYGate(q, -1.4345745280519069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12736227779067733, 1);
  sqcRYGate(q, -2.5341706712207785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0354634707894945, 2);
  sqcRYGate(q, -0.9654708691442884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4228335625170753, 2);
  sqcRYGate(q, -0.6792697092393106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42961233967929857, 3);
  sqcRYGate(q, -0.6465918735829952, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.34955100786775145, 3);
  sqcRYGate(q, 3.1388372821383994, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8367505920224678, 4);
  sqcRYGate(q, 0.6692496234163327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1370402413805993, 4);
  sqcRYGate(q, 3.093341355760422, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2901450933583716, 5);
  sqcRYGate(q, -1.5680979135331983, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.376269546827115, 5);
  sqcRYGate(q, 0.007532528012963446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6150729115924864, 6);
  sqcRYGate(q, 1.3196858005398822, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06948012676017612, 6);
  sqcRYGate(q, 0.4823322801772925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.071018482207595, 0);
  sqcRYGate(q, 2.286748384251606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0180445161043323, 0);
  sqcRYGate(q, -2.0426646872575454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9358839882677543, 1);
  sqcRYGate(q, -1.1844252112677687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.096647597152138, 1);
  sqcRYGate(q, 1.308961490121474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1278676290131675, 2);
  sqcRYGate(q, 2.0013528860135246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.093532256298458, 2);
  sqcRYGate(q, -1.2642537791364656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9614371632420289, 3);
  sqcRYGate(q, -0.32895221188799945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.049341907746848, 3);
  sqcRYGate(q, -2.47861970889865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5858123684036034, 4);
  sqcRYGate(q, 0.35400959087340067, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0020827585967702223, 4);
  sqcRYGate(q, -0.006445917166476628, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.013986180171602, 5);
  sqcRYGate(q, -0.1206000171794912, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.029263255303076, 5);
  sqcRYGate(q, -1.8766017242336908, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3562991671058282, 6);
  sqcRYGate(q, 2.633722955138094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.305574099536722, 6);
  sqcRYGate(q, -3.0642486136887714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.44076799530073923, 0);
  sqcRYGate(q, -2.2409150782144343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1623743920504648, 0);
  sqcRYGate(q, 1.8048381376297171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.141026187936223, 1);
  sqcRYGate(q, -2.6287031561358942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14938868979613318, 1);
  sqcRYGate(q, 0.815400593886201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03989681370091169, 2);
  sqcRYGate(q, 1.380377205217549, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.91153074244583, 2);
  sqcRYGate(q, -0.12403274017727117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9315740997490907, 3);
  sqcRYGate(q, 1.1037300365444453, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0515401504118627, 3);
  sqcRYGate(q, -0.6886433677614587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.756812558525824, 4);
  sqcRYGate(q, -0.6914279278936871, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0020308565995375005, 4);
  sqcRYGate(q, 0.0001716506517333016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6066622231434304, 5);
  sqcRYGate(q, 1.6736059200200142, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.067895957090773, 5);
  sqcRYGate(q, -2.0766941959881997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4337540422841588, 6);
  sqcRYGate(q, -0.23553605776280914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.280274790007661, 6);
  sqcRYGate(q, 1.5600233850453742, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9854786216425735, 0);
  sqcRYGate(q, 2.2529739482904994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7492685674570216, 0);
  sqcRYGate(q, 0.8032942939890012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.126945978227257, 1);
  sqcRYGate(q, -0.11406388489906583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9220347017996557, 1);
  sqcRYGate(q, -0.4507681813190363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2896993066783722, 2);
  sqcRYGate(q, 3.0877250136623466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.508292430206111, 2);
  sqcRYGate(q, 1.5175175384115396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.026434426677804, 3);
  sqcRYGate(q, -0.7542950722940076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7197888121667786, 3);
  sqcRYGate(q, 2.4900606675906642, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.42260120916628985, 4);
  sqcRYGate(q, -1.21066316768486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.12862633280555, 4);
  sqcRYGate(q, 3.121870928412596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5747935915786517, 5);
  sqcRYGate(q, 1.6398041343362868, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.815911959854573, 5);
  sqcRYGate(q, -0.07902367309076386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9950542477480588, 6);
  sqcRYGate(q, -0.9998406423361775, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.648428922196061, 6);
  sqcRYGate(q, -2.001805522897495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07256433121772954, 0);
  sqcRYGate(q, 2.3418461552393275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5888149872499309, 0);
  sqcRYGate(q, -1.5546209193683447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.682160373086278, 1);
  sqcRYGate(q, 0.8449973906798938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1072835831052616, 1);
  sqcRYGate(q, 1.1127999277660754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.955026730322849, 2);
  sqcRYGate(q, -2.11321705957531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.010751432478147577, 2);
  sqcRYGate(q, -0.024978275460164817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3782448401159613, 3);
  sqcRYGate(q, -0.25483558486847535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.517679346172237, 3);
  sqcRYGate(q, -0.4420198834311462, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4257639158166749, 4);
  sqcRYGate(q, 2.0885374549726903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.129604742996678, 4);
  sqcRYGate(q, -0.03402615256779954, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9285969519664272, 5);
  sqcRYGate(q, 0.8990803378260441, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2313313064619549, 5);
  sqcRYGate(q, 0.17716992676703608, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4328512799378377, 6);
  sqcRYGate(q, 1.113611268220849, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0269756095556604, 6);
  sqcRYGate(q, 0.6926598132419806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2525280081569396, 0);
  sqcRYGate(q, -2.8929522450311964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.712194670578298, 0);
  sqcRYGate(q, -2.3943674496522966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8874180751066589, 1);
  sqcRYGate(q, -0.30346536935909024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4725455188312262, 1);
  sqcRYGate(q, 2.0651096558610207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7414574615723866, 2);
  sqcRYGate(q, 1.6746952873719687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8729887760090689, 2);
  sqcRYGate(q, 1.0720663323971547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0924647149605153, 3);
  sqcRYGate(q, -1.4739720724780687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.05797563353550245, 3);
  sqcRYGate(q, 2.0991539619519655, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1940277555975087, 4);
  sqcRYGate(q, -1.3034567914735753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3159290382686821, 4);
  sqcRYGate(q, -3.1357551616310104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7995912058369996, 5);
  sqcRYGate(q, -1.9950710237348508, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.140204778872772, 5);
  sqcRYGate(q, 0.008141749863893821, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2082868638019482, 6);
  sqcRYGate(q, 0.009011403230243971, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5485668295891841, 6);
  sqcRYGate(q, 0.06709969880675581, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.220931724295929, 0);
  sqcRYGate(q, -2.3654387605336726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0246543323222443, 0);
  sqcRYGate(q, 2.584575379142923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5186879708715861, 1);
  sqcRYGate(q, 0.24117353252428408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.041457481518053285, 1);
  sqcRYGate(q, -0.16679202311003216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5466469594061563, 2);
  sqcRYGate(q, -1.4435295541767788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28776813321393924, 2);
  sqcRYGate(q, -0.12048249117066058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.096692165682527, 3);
  sqcRYGate(q, -2.5206526405311758, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.227244339493265e-05, 3);
  sqcRYGate(q, -1.2344991547439266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4718172763862152, 4);
  sqcRYGate(q, -1.3468327290617808, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3112171485858783, 4);
  sqcRYGate(q, -2.8548229521214346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2469516971278836, 5);
  sqcRYGate(q, 0.6939530949203583, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.856117623480963, 5);
  sqcRYGate(q, 0.03271415849584702, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.537226826307356, 6);
  sqcRYGate(q, 2.1744833760015645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.528845894510976, 6);
  sqcRYGate(q, 1.6624958825516805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.21803186275338593, 0);
  sqcRYGate(q, 2.424739532428892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6030390141257573, 0);
  sqcRYGate(q, -0.6917154692718182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5510044001092291, 1);
  sqcRYGate(q, -1.307507186248244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1405198479238763, 1);
  sqcRYGate(q, -0.11740799500541224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7930540538646431, 2);
  sqcRYGate(q, -0.5156149640981895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8255195263313572, 2);
  sqcRYGate(q, -2.9859992253799565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6505329996606696, 3);
  sqcRYGate(q, -1.712752444940459, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07391311261578916, 3);
  sqcRYGate(q, 3.1384965593909473, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6668782367274373, 4);
  sqcRYGate(q, -2.476186692152558, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.135332970967535, 4);
  sqcRYGate(q, -2.8358421430977887, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1212388074678494, 5);
  sqcRYGate(q, 2.537136299641507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8294506715302437, 5);
  sqcRYGate(q, -0.001840704927535488, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3230291389027551, 6);
  sqcRYGate(q, -0.05255435431286174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4767333030268635, 6);
  sqcRYGate(q, -0.6205079065768327, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.719283659628922, 0);
  sqcRYGate(q, 2.502267837926222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.705249646315467, 0);
  sqcRYGate(q, -2.8666891229869407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3875509470491063, 1);
  sqcRYGate(q, -2.8924886272865886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0431139047913804, 1);
  sqcRYGate(q, -2.8063357748753126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.120697571087674, 2);
  sqcRYGate(q, 1.8856968299382397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1309101155213126, 2);
  sqcRYGate(q, 0.39212689926436006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.558815065718965, 3);
  sqcRYGate(q, 1.4807854044673014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0260879570591372, 3);
  sqcRYGate(q, 0.2748392325895468, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.79126874869293, 4);
  sqcRYGate(q, 0.30709885825037647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0008874486245487035, 4);
  sqcRYGate(q, 3.008658962277338, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.66845904789778, 5);
  sqcRYGate(q, -2.0763050415435487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7903261571320739, 5);
  sqcRYGate(q, -3.0187535025664434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4322347386469887, 6);
  sqcRYGate(q, -0.6906516339914615, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6792929602540463, 6);
  sqcRYGate(q, -2.1992005126411645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1578125979627671, 0);
  sqcRYGate(q, -1.7656597763059143, 1);
  sqcRYGate(q, -2.5742220160092737, 2);
  sqcRYGate(q, -0.5082332946623094, 3);
  sqcRYGate(q, -2.6947344725830464, 4);
  sqcRYGate(q, -0.7251780901357563, 5);
  sqcRYGate(q, -0.6674389043356984, 6);
  sqcRYGate(q, -1.9338568558251281, 7);

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
