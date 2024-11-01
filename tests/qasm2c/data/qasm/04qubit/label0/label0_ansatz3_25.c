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

  sqcRYGate(q, 3.1358254528333367, 0);
  sqcRZGate(q, 2.1570125348097844, 0);
  sqcRYGate(q, -2.189428052197764, 1);
  sqcRZGate(q, 1.6624409711218915, 1);
  sqcRYGate(q, 2.557431349033447, 2);
  sqcRZGate(q, 1.174952184295499, 2);
  sqcRYGate(q, -2.7353653556916946, 3);
  sqcRZGate(q, -1.2603807883433737, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5560005634606667, 0);
  sqcRZGate(q, 1.595914868990238, 0);
  sqcRYGate(q, -1.7614375657643762, 1);
  sqcRZGate(q, 1.513882680326459, 1);
  sqcRYGate(q, 0.1531358253230577, 2);
  sqcRZGate(q, -1.5588641979739946, 2);
  sqcRYGate(q, 3.1025208536935804, 3);
  sqcRZGate(q, 1.5722346518698398, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.793585063722099, 0);
  sqcRZGate(q, -0.726785692715773, 0);
  sqcRYGate(q, 1.687665842498584, 1);
  sqcRZGate(q, -2.243870087314229, 1);
  sqcRYGate(q, 0.2746138958839488, 2);
  sqcRZGate(q, 2.5177115192838344, 2);
  sqcRYGate(q, -1.473915042767639, 3);
  sqcRZGate(q, 1.363416044796244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.529529824211644, 0);
  sqcRZGate(q, 1.6438935482911505, 0);
  sqcRYGate(q, -1.3596791141180782, 1);
  sqcRZGate(q, -3.106411763659594, 1);
  sqcRYGate(q, -1.8910244469670632, 2);
  sqcRZGate(q, 0.05280499857326415, 2);
  sqcRYGate(q, 1.784870357507839, 3);
  sqcRZGate(q, 0.39689585293243823, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5434240412461766, 0);
  sqcRZGate(q, 2.507510941829575, 0);
  sqcRYGate(q, 2.159082298343349, 1);
  sqcRZGate(q, -2.303151716931237, 1);
  sqcRYGate(q, 3.0028500508927722, 2);
  sqcRZGate(q, 2.0811590896525534, 2);
  sqcRYGate(q, -0.8210002577487833, 3);
  sqcRZGate(q, -2.161029477494009, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8137089103360517, 0);
  sqcRZGate(q, -2.3848679543682794, 0);
  sqcRYGate(q, -0.2659651111270367, 1);
  sqcRZGate(q, 2.320720630759627, 1);
  sqcRYGate(q, -3.113969886565075, 2);
  sqcRZGate(q, -0.3752962826222966, 2);
  sqcRYGate(q, -0.1965278743826114, 3);
  sqcRZGate(q, -1.4619958071820953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.068727349515086, 0);
  sqcRZGate(q, -2.3441475264139395, 0);
  sqcRYGate(q, 0.6738269521688096, 1);
  sqcRZGate(q, 1.821484769376647, 1);
  sqcRYGate(q, 1.9379486099394776, 2);
  sqcRZGate(q, 1.0789680269569624, 2);
  sqcRYGate(q, 1.803953734171963, 3);
  sqcRZGate(q, -2.8098317857981048, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9389518222555437, 0);
  sqcRZGate(q, -2.6876988812522096, 0);
  sqcRYGate(q, -0.4098822983837008, 1);
  sqcRZGate(q, 2.445231829953057, 1);
  sqcRYGate(q, -1.1759825039833531, 2);
  sqcRZGate(q, -0.07326231248926189, 2);
  sqcRYGate(q, -0.846342155058825, 3);
  sqcRZGate(q, -3.1321018431859655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6330787461349678, 0);
  sqcRZGate(q, 0.5024264563142884, 0);
  sqcRYGate(q, 1.2650775499272457, 1);
  sqcRZGate(q, -2.5599839407850826, 1);
  sqcRYGate(q, -0.4236684948663987, 2);
  sqcRZGate(q, -2.529014041181017, 2);
  sqcRYGate(q, -1.1523940029192592, 3);
  sqcRZGate(q, 1.326168498251967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4013419611324265, 0);
  sqcRZGate(q, 2.7914640220655627, 0);
  sqcRYGate(q, -2.8224146796823906, 1);
  sqcRZGate(q, 2.8455979347045286, 1);
  sqcRYGate(q, -2.5709300688376735, 2);
  sqcRZGate(q, -2.195976800558647, 2);
  sqcRYGate(q, 0.35809951614090035, 3);
  sqcRZGate(q, 0.4568881429659051, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4080457147330194, 0);
  sqcRZGate(q, -1.771286126683715, 0);
  sqcRYGate(q, 1.8127145333548738, 1);
  sqcRZGate(q, 2.8861342111930814, 1);
  sqcRYGate(q, 3.006636246879314, 2);
  sqcRZGate(q, 0.14636069867571241, 2);
  sqcRYGate(q, -0.20851700751599914, 3);
  sqcRZGate(q, 0.875331368617132, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.25278414440946495, 0);
  sqcRZGate(q, -0.6618631747535607, 0);
  sqcRYGate(q, 1.3947483496223256, 1);
  sqcRZGate(q, 0.45845829345422207, 1);
  sqcRYGate(q, -2.615728085642316, 2);
  sqcRZGate(q, 2.2983297313511906, 2);
  sqcRYGate(q, -1.9644266191401965, 3);
  sqcRZGate(q, 2.347877813547671, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.629003049124906, 0);
  sqcRZGate(q, 0.9922053269572935, 0);
  sqcRYGate(q, -2.323681314601896, 1);
  sqcRZGate(q, 1.0541731114975395, 1);
  sqcRYGate(q, 0.4813121249112561, 2);
  sqcRZGate(q, 0.7673078069677697, 2);
  sqcRYGate(q, 2.888458812919959, 3);
  sqcRZGate(q, 1.1583379796969355, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6678578717346655, 0);
  sqcRZGate(q, -2.34488937288311, 0);
  sqcRYGate(q, -0.3855096177797782, 1);
  sqcRZGate(q, -0.4777049274549484, 1);
  sqcRYGate(q, 1.0394098578820643, 2);
  sqcRZGate(q, 2.514205647244263, 2);
  sqcRYGate(q, 1.8479481040465082, 3);
  sqcRZGate(q, -2.118323916179971, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6007264214435946, 0);
  sqcRZGate(q, -1.2428721184835674, 0);
  sqcRYGate(q, -3.043212035306188, 1);
  sqcRZGate(q, -2.740832301766057, 1);
  sqcRYGate(q, 0.8451724061169608, 2);
  sqcRZGate(q, -0.9746746625624215, 2);
  sqcRYGate(q, 2.9094983266358176, 3);
  sqcRZGate(q, 2.7586390495018436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6924705012393523, 0);
  sqcRZGate(q, 0.2517889559353197, 0);
  sqcRYGate(q, -1.039579353827445, 1);
  sqcRZGate(q, 2.8684713179903385, 1);
  sqcRYGate(q, -1.3754353493449267, 2);
  sqcRZGate(q, 0.30940638773257856, 2);
  sqcRYGate(q, -2.7469847737071356, 3);
  sqcRZGate(q, 1.4131634094601384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.11824028110165309, 0);
  sqcRZGate(q, -2.5829799621195297, 0);
  sqcRYGate(q, -0.2919081697462994, 1);
  sqcRZGate(q, -2.1630202871280906, 1);
  sqcRYGate(q, -1.6789836018113071, 2);
  sqcRZGate(q, -0.17348280499456603, 2);
  sqcRYGate(q, 0.45796993286686766, 3);
  sqcRZGate(q, 2.755864333593572, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8980618916478804, 0);
  sqcRZGate(q, 2.095153455215266, 0);
  sqcRYGate(q, -0.5932449918332017, 1);
  sqcRZGate(q, -2.2591823789790184, 1);
  sqcRYGate(q, -0.027837269620823113, 2);
  sqcRZGate(q, -2.168284827251119, 2);
  sqcRYGate(q, 1.9101943446811158, 3);
  sqcRZGate(q, 2.7936571271795856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3611432531822372, 0);
  sqcRZGate(q, -1.6616623444529912, 0);
  sqcRYGate(q, -0.609934241978328, 1);
  sqcRZGate(q, 0.38715628721595974, 1);
  sqcRYGate(q, 0.7302765800773674, 2);
  sqcRZGate(q, -1.0057942300473546, 2);
  sqcRYGate(q, -1.8984360009780223, 3);
  sqcRZGate(q, 0.09717264216849486, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4181490345540686, 0);
  sqcRZGate(q, 0.7535653554316099, 0);
  sqcRYGate(q, 0.6654766710175695, 1);
  sqcRZGate(q, -0.46096539064905256, 1);
  sqcRYGate(q, -0.4470729994948011, 2);
  sqcRZGate(q, 1.667054908557458, 2);
  sqcRYGate(q, 0.02121986343277626, 3);
  sqcRZGate(q, 0.7931586306410078, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8154798540602157, 0);
  sqcRZGate(q, -0.053977296797191876, 0);
  sqcRYGate(q, 1.599146632550837, 1);
  sqcRZGate(q, -2.393018895208955, 1);
  sqcRYGate(q, 1.9198821944625273, 2);
  sqcRZGate(q, -0.6570239910967095, 2);
  sqcRYGate(q, 2.3977909801797828, 3);
  sqcRZGate(q, -2.0010368615308933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.60649976211175, 0);
  sqcRZGate(q, -1.388312318606757, 0);
  sqcRYGate(q, -1.9749228875101814, 1);
  sqcRZGate(q, 2.5496530338179215, 1);
  sqcRYGate(q, -1.694033474864015, 2);
  sqcRZGate(q, -0.4016241103453924, 2);
  sqcRYGate(q, 1.4463631006742252, 3);
  sqcRZGate(q, -1.6574061781761318, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9019655879691424, 0);
  sqcRZGate(q, -0.19752486176385986, 0);
  sqcRYGate(q, -1.7330606141560494, 1);
  sqcRZGate(q, 0.7860374964304322, 1);
  sqcRYGate(q, -0.2459855832211964, 2);
  sqcRZGate(q, -1.8214245781280858, 2);
  sqcRYGate(q, -2.2684749794171077, 3);
  sqcRZGate(q, -2.694645186267321, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4165103149823315, 0);
  sqcRZGate(q, 1.633716312697474, 0);
  sqcRYGate(q, 0.5493446897840681, 1);
  sqcRZGate(q, -2.5153682834383146, 1);
  sqcRYGate(q, 0.35728003302451034, 2);
  sqcRZGate(q, 0.10733087820808689, 2);
  sqcRYGate(q, -2.3713564784403602, 3);
  sqcRZGate(q, 1.5323168157790175, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8358269149710527, 0);
  sqcRZGate(q, 1.5049954090091324, 0);
  sqcRYGate(q, -1.9679517076331672, 1);
  sqcRZGate(q, 1.8406780197533728, 1);
  sqcRYGate(q, -0.5982752873118772, 2);
  sqcRZGate(q, 1.530947299884241, 2);
  sqcRYGate(q, -0.8541409606305471, 3);
  sqcRZGate(q, -0.5638097694357345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6075106782684823, 0);
  sqcRZGate(q, 0.5114824813659764, 0);
  sqcRYGate(q, -0.5713207215605131, 1);
  sqcRZGate(q, -1.9378084568953406, 1);
  sqcRYGate(q, -1.561645971860842, 2);
  sqcRZGate(q, 2.5571276927064037, 2);
  sqcRYGate(q, -1.8432487509107496, 3);
  sqcRZGate(q, 0.21322912058452645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.033260130882784, 0);
  sqcRZGate(q, -2.229238524386914, 0);
  sqcRYGate(q, 0.07924578589745579, 1);
  sqcRZGate(q, -0.2537867586487153, 1);
  sqcRYGate(q, 1.2408496930782187, 2);
  sqcRZGate(q, 2.5651397060711054, 2);
  sqcRYGate(q, -2.3549252063715205, 3);
  sqcRZGate(q, -2.340745949043112, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9781343414867685, 0);
  sqcRZGate(q, -1.6169095484050757, 0);
  sqcRYGate(q, -2.0467838467697703, 1);
  sqcRZGate(q, 0.9098734564233218, 1);
  sqcRYGate(q, -2.4796682661384235, 2);
  sqcRZGate(q, 0.7634224295678705, 2);
  sqcRYGate(q, -1.3318507749584976, 3);
  sqcRZGate(q, -1.5300671166627395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.830910140939878, 0);
  sqcRZGate(q, -0.70494500548911, 0);
  sqcRYGate(q, 0.9480991785232034, 1);
  sqcRZGate(q, 0.14765390422375813, 1);
  sqcRYGate(q, 2.9101772541366304, 2);
  sqcRZGate(q, 1.5003435907275846, 2);
  sqcRYGate(q, -1.6852206374259708, 3);
  sqcRZGate(q, 2.9430953965004902, 3);

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
