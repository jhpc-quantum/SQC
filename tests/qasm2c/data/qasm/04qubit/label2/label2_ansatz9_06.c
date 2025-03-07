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

  sqcRYGate(q, 0.060157472546363173, 0);
  sqcRYGate(q, 0.334952269111473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21574359869164011, 0);
  sqcRYGate(q, -0.8763848241031065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.004656905465554, 2);
  sqcRYGate(q, 1.9755061689402096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5401566514533824, 2);
  sqcRYGate(q, 0.138846365708937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1105455952702168, 0);
  sqcRYGate(q, -3.1297815987941817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.246173756046203, 0);
  sqcRYGate(q, -1.52095432374534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2471374889067355, 1);
  sqcRYGate(q, -0.8834977797061193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6367507735284512, 1);
  sqcRYGate(q, -1.8675883211658952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3421499598276236, 0);
  sqcRYGate(q, -0.3825843597988526, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.40994469817631707, 0);
  sqcRYGate(q, -2.3580157932326453, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4862669633654118, 1);
  sqcRYGate(q, -1.9826147354737946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.968359970775088, 1);
  sqcRYGate(q, -2.453050669904044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4099669162425243, 0);
  sqcRYGate(q, -0.509841007139805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9677039688836465, 0);
  sqcRYGate(q, 0.06611994982763125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3463013063154965, 2);
  sqcRYGate(q, 0.5054948364377497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9020548678744644, 2);
  sqcRYGate(q, 1.771232942296971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7463931563452162, 0);
  sqcRYGate(q, 1.9946844799946115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1153946940708686, 0);
  sqcRYGate(q, 0.31571268941613057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2769941089728456, 1);
  sqcRYGate(q, 2.110091047398239, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2036765926464164, 1);
  sqcRYGate(q, 1.128080535604023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.625970460986454, 0);
  sqcRYGate(q, -0.9039815577362379, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.154897996440022, 0);
  sqcRYGate(q, -2.8041314094055423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0431451526160247, 1);
  sqcRYGate(q, -2.000231115101977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.247053746496789, 1);
  sqcRYGate(q, 0.46767657701068666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7148017817289689, 0);
  sqcRYGate(q, 3.1043274865433723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14886290632432403, 0);
  sqcRYGate(q, 1.3900960987156492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.983575049400804, 2);
  sqcRYGate(q, -0.8636577886977486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.847298416687166, 2);
  sqcRYGate(q, 1.4412761780700327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0172304506250782, 0);
  sqcRYGate(q, -1.015206998890779, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9925121588203925, 0);
  sqcRYGate(q, 0.7624414143033977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8595535863694161, 1);
  sqcRYGate(q, 0.6754806864547102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.15590234629688826, 1);
  sqcRYGate(q, -2.3980459602840427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3320385657850642, 0);
  sqcRYGate(q, -1.2153074627131888, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2590222184526647, 0);
  sqcRYGate(q, 1.4869194172266869, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.18644161612336646, 1);
  sqcRYGate(q, -0.9257209957064925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8625669206178506, 1);
  sqcRYGate(q, -0.9830101821730596, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.633207655538603, 0);
  sqcRYGate(q, -1.6062354813719224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10753885999414386, 0);
  sqcRYGate(q, -1.1630114464384076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3668817054258345, 2);
  sqcRYGate(q, -1.5292355886311944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9793737907925824, 2);
  sqcRYGate(q, -2.3708196927607754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.670437951662737, 0);
  sqcRYGate(q, -1.983880963452032, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1202639623581123, 0);
  sqcRYGate(q, 0.590524951967805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.070231860565893, 1);
  sqcRYGate(q, 0.9289782219745417, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.18392570185285703, 1);
  sqcRYGate(q, 1.889282562041231, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.54296093359158, 0);
  sqcRYGate(q, -1.854666246061452, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.366826226821563, 0);
  sqcRYGate(q, -2.1185904618306113, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.942051489618796, 1);
  sqcRYGate(q, -1.9897029730682636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6572428375644312, 1);
  sqcRYGate(q, -2.5868904633781558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0099153197098567, 0);
  sqcRYGate(q, -2.1542938359875903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.137950599740485, 0);
  sqcRYGate(q, 2.5399144562571134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41120201072776297, 2);
  sqcRYGate(q, 0.165253382676684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1636355119349664, 2);
  sqcRYGate(q, -0.6157196588420805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.303521899390701, 0);
  sqcRYGate(q, -1.4006740131063908, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4363134662411678, 0);
  sqcRYGate(q, 0.04967189962933012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2152032761873501, 1);
  sqcRYGate(q, 2.6677017109881196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2544387912561847, 1);
  sqcRYGate(q, 0.5250194596734961, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3116298361804466, 0);
  sqcRYGate(q, 2.949352183611451, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8779495123744452, 0);
  sqcRYGate(q, -1.680408534617236, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4197215815969457, 1);
  sqcRYGate(q, 0.585258913607924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.143721851953301, 1);
  sqcRYGate(q, -0.05602831020702225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0919225123987104, 0);
  sqcRYGate(q, -1.895056185106576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8828838352938386, 0);
  sqcRYGate(q, 0.7475569910124973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1775460111771547, 2);
  sqcRYGate(q, 2.1362345828119946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.648421457628418, 2);
  sqcRYGate(q, 1.174728430272206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.343208609523266, 0);
  sqcRYGate(q, -2.9675145075265523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9202123660690315, 0);
  sqcRYGate(q, 0.6395038944389613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0349284822705425, 1);
  sqcRYGate(q, -0.3115274821097218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2755762228305167, 1);
  sqcRYGate(q, -0.9949430364881547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6714550780485307, 0);
  sqcRYGate(q, 2.1831738565813064, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4657179068944455, 0);
  sqcRYGate(q, 1.0993401016471176, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6967535945148428, 1);
  sqcRYGate(q, 2.6189599401596073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7431760350893253, 1);
  sqcRYGate(q, -0.9441597917329246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.175938406090118, 0);
  sqcRYGate(q, 2.5926417543839353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9868129750408126, 0);
  sqcRYGate(q, 1.000324003210473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.060790463813862175, 2);
  sqcRYGate(q, -1.800504491344044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.314945699891279, 2);
  sqcRYGate(q, 2.1528415071045095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6593731917106815, 0);
  sqcRYGate(q, 1.6226671765454395, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.102229723561806, 0);
  sqcRYGate(q, -1.3681324199431968, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0970069412904362, 1);
  sqcRYGate(q, 1.745736594526356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4269000399775023, 1);
  sqcRYGate(q, -3.114738277220218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21574467450633122, 0);
  sqcRYGate(q, -1.3376773489610274, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2264128965604444, 0);
  sqcRYGate(q, -2.9837260274615267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.819156488617597, 1);
  sqcRYGate(q, 0.790815940835547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3604699266682811, 1);
  sqcRYGate(q, -2.031154539577595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.12657714381214, 0);
  sqcRYGate(q, 2.60044944032424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9490237747311845, 0);
  sqcRYGate(q, -2.9625268055735754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4043412003241087, 2);
  sqcRYGate(q, -0.40503606746119813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37547179089816574, 2);
  sqcRYGate(q, 2.2845262955108985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1605440371114728, 0);
  sqcRYGate(q, -2.366667617063888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9601804214101852, 0);
  sqcRYGate(q, -1.7563370030789358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.803911704459835, 1);
  sqcRYGate(q, -1.2334819038914056, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.01172458551273403, 1);
  sqcRYGate(q, -1.3667249829488044, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0559421634570865, 0);
  sqcRYGate(q, 1.2313810151894424, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2862084412925072, 0);
  sqcRYGate(q, -2.64381870261043, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6943064492633225, 1);
  sqcRYGate(q, 1.8943616757383208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0960899091866656, 1);
  sqcRYGate(q, -0.6091844302344213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4647150441622783, 0);
  sqcRYGate(q, -0.012302397407552717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26518057226138936, 0);
  sqcRYGate(q, -3.1341745319939918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2873473850461172, 2);
  sqcRYGate(q, -0.4022204717328766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.112347949932211, 2);
  sqcRYGate(q, 1.3647764125696493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0021048817553004, 0);
  sqcRYGate(q, 1.6192233142696375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4917922590219794, 0);
  sqcRYGate(q, -0.5488112124999338, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.867245650605387, 1);
  sqcRYGate(q, -1.5894188001712883, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.140449438525444, 1);
  sqcRYGate(q, 3.118192453795601, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.519727366130599, 0);
  sqcRYGate(q, 2.9439884146381847, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3422547025120162, 0);
  sqcRYGate(q, 1.3707363502816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7680933409134016, 1);
  sqcRYGate(q, 1.8445609498576012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9872067295652207, 1);
  sqcRYGate(q, 0.1323281174375781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02702585639983563, 0);
  sqcRYGate(q, -1.2989765319280469, 1);
  sqcRYGate(q, -2.0448239701117896, 2);
  sqcRYGate(q, -1.3327756446523074, 3);

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
