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

  sqcRYGate(q, -1.3069991596592643, 0);
  sqcRYGate(q, 3.0757712132472284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3328199972252106, 0);
  sqcRYGate(q, -0.7411400282490396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9804694134127088, 2);
  sqcRYGate(q, 2.486384773735595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.102315694394899, 2);
  sqcRYGate(q, -1.6747294541091031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27504584294336887, 4);
  sqcRYGate(q, 1.5246302330944994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.876927054577062, 4);
  sqcRYGate(q, 3.1078674692799915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.142491806640889, 6);
  sqcRYGate(q, -0.7111174868501413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8487670623293724, 6);
  sqcRYGate(q, 0.6062926079844688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25187248778207755, 8);
  sqcRYGate(q, 3.021217221460333, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1391399649462219, 8);
  sqcRYGate(q, -2.602741652153734, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2960217491969668, 10);
  sqcRYGate(q, -2.0594911014464037, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5026978102891024, 10);
  sqcRYGate(q, -1.6399843997314525, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1106905813074306, 12);
  sqcRYGate(q, -2.4316333772764738, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9372486518706022, 12);
  sqcRYGate(q, -1.7083863093171179, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8371224658648853, 14);
  sqcRYGate(q, -2.386807277072061, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3696339638181856, 14);
  sqcRYGate(q, -2.936948176948794, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.264437082443317, 16);
  sqcRYGate(q, -0.6403838397912205, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.029996162675627, 16);
  sqcRYGate(q, 0.4262540658171266, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.3325722073923165, 18);
  sqcRYGate(q, 0.6617543953341877, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.288652314970751, 18);
  sqcRYGate(q, 1.0189978609603507, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.5225666321662823, 0);
  sqcRYGate(q, -0.4296252734014185, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3535035579607673, 0);
  sqcRYGate(q, 1.4468813305481933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.770199712849321, 2);
  sqcRYGate(q, -0.9610028936395277, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3448763858586776, 2);
  sqcRYGate(q, 3.0747259405158878, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.28061604465743883, 4);
  sqcRYGate(q, -0.40595603504278177, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.137423235962688, 4);
  sqcRYGate(q, 0.0013496359307003658, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.865365778507604, 6);
  sqcRYGate(q, -0.9617380714945252, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.2379637490931091, 6);
  sqcRYGate(q, -0.36422643124866827, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6454471723343032, 8);
  sqcRYGate(q, 1.587491271809169, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.16045187958027807, 8);
  sqcRYGate(q, 1.350399251220856, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.867569575408596, 10);
  sqcRYGate(q, 0.3044201402274256, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.0005299691736610024, 10);
  sqcRYGate(q, 6.0186369357673186e-05, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.04096301077155, 12);
  sqcRYGate(q, 1.4247330069096156, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.19961863676690086, 12);
  sqcRYGate(q, 3.1395578084274516, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.675482975617249, 14);
  sqcRYGate(q, -1.7846224124175878, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.2478143146836462, 14);
  sqcRYGate(q, 3.138664147714007, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.8948295369584516, 16);
  sqcRYGate(q, -2.4365662316788006, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.0629932603701816, 16);
  sqcRYGate(q, -0.060599847138375296, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.7747603169476092, 1);
  sqcRYGate(q, 0.6172463984702734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.277808298559561, 1);
  sqcRYGate(q, -2.1335658751468314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8499708310704623, 3);
  sqcRYGate(q, -0.10250043672002979, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1553164671276712, 3);
  sqcRYGate(q, 0.005355095796083731, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4569377338795757, 5);
  sqcRYGate(q, 2.463300272519382, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.779505792932687, 5);
  sqcRYGate(q, -3.1303653627845582, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9735673440885093, 7);
  sqcRYGate(q, 1.240784475532496, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.883657803946532, 7);
  sqcRYGate(q, 3.070299559948881, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.3647840951165227, 9);
  sqcRYGate(q, -0.45351357591752306, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.059397279681811, 9);
  sqcRYGate(q, 0.643612581863655, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.759190345769065, 11);
  sqcRYGate(q, 0.6856166791558351, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1415672978107, 11);
  sqcRYGate(q, -3.1414984934452828, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.2778069914416403, 13);
  sqcRYGate(q, 3.065150539471342, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.5353211002747411, 13);
  sqcRYGate(q, 0.36488336752018746, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.2924401444341207, 15);
  sqcRYGate(q, 2.0241770612503545, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.004016714157057066, 15);
  sqcRYGate(q, -0.0036035270445614245, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.4148256133276684, 17);
  sqcRYGate(q, -1.5661612440422656, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.88377479795784, 17);
  sqcRYGate(q, -2.795588219676882, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.2553681617710386, 0);
  sqcRYGate(q, 1.5952160182410786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.110998626523763, 0);
  sqcRYGate(q, -0.9359884334726801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.061686691319731, 2);
  sqcRYGate(q, -2.435623597753515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7522853803525975, 2);
  sqcRYGate(q, -0.6218756382478334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8455553073891034, 4);
  sqcRYGate(q, 2.0759516719272244, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7564884846841673, 4);
  sqcRYGate(q, 0.11360644508520235, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.054880513861436, 6);
  sqcRYGate(q, -3.0266050079889997, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5093412097120984, 6);
  sqcRYGate(q, -1.2971263761731135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4172957452343082, 8);
  sqcRYGate(q, 2.732988769576214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1723368654786368, 8);
  sqcRYGate(q, -0.9285547558084897, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.22454697618753092, 10);
  sqcRYGate(q, 2.138577103599821, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6417853911315348, 10);
  sqcRYGate(q, 2.7946479603944008, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8714403248191678, 12);
  sqcRYGate(q, -1.3854444238186119, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.700644649081506, 12);
  sqcRYGate(q, -1.2537764494813581, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7830174419549025, 14);
  sqcRYGate(q, -0.9891276628728851, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1619899719654043, 14);
  sqcRYGate(q, -2.586222593045216, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6477401263608709, 16);
  sqcRYGate(q, -0.9828619502015626, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.11133138615857323, 16);
  sqcRYGate(q, -0.26302355451294446, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.4678252601361943, 18);
  sqcRYGate(q, 2.2040306699201047, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.1339143456022924, 18);
  sqcRYGate(q, -0.007377724753365733, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.4566429328868725, 0);
  sqcRYGate(q, 0.17763579027821752, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9878094130206994, 0);
  sqcRYGate(q, 0.4838992593719873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5584995151706399, 2);
  sqcRYGate(q, 0.2264013418827302, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.27520720806352283, 2);
  sqcRYGate(q, -2.871596096980313, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7533051247777179, 4);
  sqcRYGate(q, 0.2486989855290602, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3113710566284196, 4);
  sqcRYGate(q, -8.31521654852496e-05, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5623462105579282, 6);
  sqcRYGate(q, -1.3395026022956964, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6199161184314558e-05, 6);
  sqcRYGate(q, 3.14153269713576, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.4275342598216394, 8);
  sqcRYGate(q, -0.30074111831192846, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.137209816214914, 8);
  sqcRYGate(q, 1.9421112615041345, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.369882426488016, 10);
  sqcRYGate(q, 3.0617814371825016, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.0007349711662868185, 10);
  sqcRYGate(q, 3.141292054145188, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.7476704307072746, 12);
  sqcRYGate(q, -3.0611725939567687, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.13076957054509136, 12);
  sqcRYGate(q, 1.6803991298951795, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.8563700261444525, 14);
  sqcRYGate(q, 1.4841665758232754, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.1057554310450755, 14);
  sqcRYGate(q, -3.140645246722901, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.7197357533180568, 16);
  sqcRYGate(q, 0.5818607767237423, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.343091149719807, 16);
  sqcRYGate(q, -3.034985044305792, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.001959639532801764, 1);
  sqcRYGate(q, 1.2564208350503554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.36020006201253657, 1);
  sqcRYGate(q, -1.086637770463244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6804306792050037, 3);
  sqcRYGate(q, -0.0194516231346943, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5439792178858833, 3);
  sqcRYGate(q, 2.7412752915776895, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4128057064925126, 5);
  sqcRYGate(q, -0.6575021783498425, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.25203512745435847, 5);
  sqcRYGate(q, 0.03612554747559482, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6891753880285734, 7);
  sqcRYGate(q, -1.1536725560521768, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1389807332135815, 7);
  sqcRYGate(q, 0.003878113469314979, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.176901344628053, 9);
  sqcRYGate(q, 0.7802118580911923, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.2980753825255205, 9);
  sqcRYGate(q, 0.11367487239163349, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.1689651170566686, 11);
  sqcRYGate(q, 3.1288151583151067, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.141372686990506, 11);
  sqcRYGate(q, -3.141478222502779, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.8758428780251046, 13);
  sqcRYGate(q, 2.872206825193277, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.357690770146586, 13);
  sqcRYGate(q, 1.3502524541692151, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.35534293630680835, 15);
  sqcRYGate(q, 0.47217555928607435, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.5710074111026149, 15);
  sqcRYGate(q, -3.1412325166200983, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.39370997932349605, 17);
  sqcRYGate(q, 1.2372169709047949, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.9520657528898921, 17);
  sqcRYGate(q, 0.7514314951308432, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.9414362598313666, 0);
  sqcRYGate(q, 2.2432909042494877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9375997994485274, 0);
  sqcRYGate(q, 2.817783875951946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43865772774368, 2);
  sqcRYGate(q, -2.1106548566194663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2247834315919794, 2);
  sqcRYGate(q, -2.4365316604310445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28593397737833226, 4);
  sqcRYGate(q, 1.2464704486311906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6467164607077651, 4);
  sqcRYGate(q, -0.0003347410961680452, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6762108527454469, 6);
  sqcRYGate(q, 1.6310255962610283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1388205223120855, 6);
  sqcRYGate(q, -0.0045102278525081954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7865510116655994, 8);
  sqcRYGate(q, 2.7161538745400433, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7582491242396607, 8);
  sqcRYGate(q, -0.06703405232369711, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.37577136411206435, 10);
  sqcRYGate(q, -0.9066040609904971, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.743233608389796, 10);
  sqcRYGate(q, -0.48965209730587433, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.04258914322599239, 12);
  sqcRYGate(q, 1.8724009887207211, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.797776805325857, 12);
  sqcRYGate(q, -1.835898327472192, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3774675763408294, 14);
  sqcRYGate(q, -3.002994873570436, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.20798699274316323, 14);
  sqcRYGate(q, -0.2668615849881535, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.52191019880619, 16);
  sqcRYGate(q, -2.629692986238045, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.569283198148506, 16);
  sqcRYGate(q, -1.3148548032509362, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.26421866084903395, 18);
  sqcRYGate(q, -2.3467958914954985, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.979391682479898, 18);
  sqcRYGate(q, 0.007761173147034839, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6109867223145065, 0);
  sqcRYGate(q, -1.1612600398122375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.119098739710019, 0);
  sqcRYGate(q, 1.8869810104428033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2347791071618914, 2);
  sqcRYGate(q, -1.0502249381544022, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1415638743621965, 2);
  sqcRYGate(q, 0.7314630945859415, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9654350358902617, 4);
  sqcRYGate(q, 2.078791039000041, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7212196016718075, 4);
  sqcRYGate(q, 0.00013982772315923597, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4876410944861498, 6);
  sqcRYGate(q, 1.5857916895193864, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.00037088933596063356, 6);
  sqcRYGate(q, -3.1405878856952563, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.989762624362494, 8);
  sqcRYGate(q, -1.9544349833827388, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.03376090015321, 8);
  sqcRYGate(q, -2.8710843498578735, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8559786116564325, 10);
  sqcRYGate(q, 2.9506603063771215, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1415654677524834, 10);
  sqcRYGate(q, -3.1406518824433385, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.7672832795877111, 12);
  sqcRYGate(q, 0.4315717604294118, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.0691506984006063, 12);
  sqcRYGate(q, 2.003570447486049, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.5875350894274578, 14);
  sqcRYGate(q, 0.5171744698400034, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.001427844326066463, 14);
  sqcRYGate(q, 3.1398314571835986, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.31007886652365446, 16);
  sqcRYGate(q, 2.6297768399353245, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.564927033695448, 16);
  sqcRYGate(q, 0.29995935300707915, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.13592253149576136, 1);
  sqcRYGate(q, -1.3354809063916109, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.049361113590804036, 1);
  sqcRYGate(q, 3.09851927954982, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4773714137417535, 3);
  sqcRYGate(q, 3.021068944644003, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1403904345894222, 3);
  sqcRYGate(q, 3.1382388312869276, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7276467405206426, 5);
  sqcRYGate(q, -1.6611040179400343, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.133074493759501, 5);
  sqcRYGate(q, -0.1115904393230155, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5328239260007823, 7);
  sqcRYGate(q, 0.07101030975474476, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1375445281911367, 7);
  sqcRYGate(q, -0.4751492417388852, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.11866347406151, 9);
  sqcRYGate(q, 2.693207736985432, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.1049407245502136, 9);
  sqcRYGate(q, 3.1396786645674624, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.7758405373315738, 11);
  sqcRYGate(q, -0.0841595396775389, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1414409442803946, 11);
  sqcRYGate(q, -1.5830589440369767e-05, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.0083533612015962, 13);
  sqcRYGate(q, 2.1575050346370697, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.1605332649090747, 13);
  sqcRYGate(q, -0.36917012198191473, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.1715824417010867, 15);
  sqcRYGate(q, 1.5696667349283235, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.3348567333117525, 15);
  sqcRYGate(q, -3.138608792860719, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.5396359362877834, 17);
  sqcRYGate(q, 1.3560160340151781, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 3.017887291789375, 17);
  sqcRYGate(q, -0.00958812555791777, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.6323993432067372, 0);
  sqcRYGate(q, 1.088108056864656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6845028097805743, 0);
  sqcRYGate(q, 2.65676766635037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.768845280032124, 2);
  sqcRYGate(q, -1.9032358387807664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0139915006159512, 2);
  sqcRYGate(q, -0.029817294925338647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4251302383756665, 4);
  sqcRYGate(q, -0.8368319617237399, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6431488250573212, 4);
  sqcRYGate(q, -0.019678534471297304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0329565756915615, 6);
  sqcRYGate(q, 1.6936301966618377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5792697405400131, 6);
  sqcRYGate(q, -1.2965297499666522, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0053031972580336855, 8);
  sqcRYGate(q, -2.3269114709009413, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5224162012022027, 8);
  sqcRYGate(q, 0.5524058609777933, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0519328379843547, 10);
  sqcRYGate(q, 1.497872072610477, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3998680945933657, 10);
  sqcRYGate(q, -0.9431942904971925, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5592365497468412, 12);
  sqcRYGate(q, 2.489172817393786, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.9679747736505195, 12);
  sqcRYGate(q, -0.311558224025278, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4816116887437483, 14);
  sqcRYGate(q, 1.9868702587592022, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.010260273866415145, 14);
  sqcRYGate(q, -1.5036914916182964, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.24735477749930812, 16);
  sqcRYGate(q, 3.1204365572011046, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.8041816622976055, 16);
  sqcRYGate(q, -1.6089982966682312, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.34223915140238415, 18);
  sqcRYGate(q, -1.8695650833899118, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.060419901872922566, 18);
  sqcRYGate(q, -0.10094459746173962, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.088263101887412, 0);
  sqcRYGate(q, 0.7479687793922213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.06819006428318097, 0);
  sqcRYGate(q, 0.6316391826997023, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9127486389200454, 2);
  sqcRYGate(q, 2.2878673826919584, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1379726141181243, 2);
  sqcRYGate(q, 2.5488154446942293, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.23198925353029456, 4);
  sqcRYGate(q, -0.7999348860644709, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0007309845584209015, 4);
  sqcRYGate(q, 0.0016263090190202134, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7105285101246688, 6);
  sqcRYGate(q, -2.543081873904124, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.032132937678822346, 6);
  sqcRYGate(q, -2.4645098271317494, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.8802478873167108, 8);
  sqcRYGate(q, 0.8861551519209482, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.9611743184349097, 8);
  sqcRYGate(q, 3.062956266990963, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.1181676592627534, 10);
  sqcRYGate(q, 2.2050407597085644, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.132797587897277, 10);
  sqcRYGate(q, 2.8517340425818127, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.7585632023604304, 12);
  sqcRYGate(q, 1.0095317818173397, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.948292776062766, 12);
  sqcRYGate(q, 0.228235273012662, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.29975430805803877, 14);
  sqcRYGate(q, -1.845590436125482, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.1371288847919883, 14);
  sqcRYGate(q, -0.40380049513343025, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 1.7953896975318933, 16);
  sqcRYGate(q, 0.08422911029290957, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -3.0270596774178893, 16);
  sqcRYGate(q, -0.0001098439556717068, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.147445686510849, 1);
  sqcRYGate(q, -2.2490808388321737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0110199540696554, 1);
  sqcRYGate(q, -2.1650457605839724, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.567248824012756, 3);
  sqcRYGate(q, 2.5964872265513046, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.003347366214098726, 3);
  sqcRYGate(q, -0.0005943010639981594, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2982861949125368, 5);
  sqcRYGate(q, -1.9589862119330632, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0004122961569411938, 5);
  sqcRYGate(q, 3.140719053177344, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8467549878515076, 7);
  sqcRYGate(q, -2.1987116747647146, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.0058246898865048635, 7);
  sqcRYGate(q, -3.135996458253207, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.6062292066177868, 9);
  sqcRYGate(q, -2.2110416436367943, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.4608823831652853, 9);
  sqcRYGate(q, -2.6468738279857926, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.10009817710751055, 11);
  sqcRYGate(q, 1.6960885190810844, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.0019147311623717584, 11);
  sqcRYGate(q, 3.1402903779211306, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.9381238123262694, 13);
  sqcRYGate(q, -0.9536311134518919, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.128730240551599, 13);
  sqcRYGate(q, -0.06569076894842506, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.938039023757056, 15);
  sqcRYGate(q, 2.006769590397132, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.1281153235613264, 15);
  sqcRYGate(q, -3.125055065122245, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.20740182547946606, 17);
  sqcRYGate(q, -1.5736000335434854, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.812477868684615, 17);
  sqcRYGate(q, 0.6959731213524094, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.918575936266948, 0);
  sqcRYGate(q, 0.37938385346350845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8526220019016195, 0);
  sqcRYGate(q, -0.04602925002404875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0257535853332675, 2);
  sqcRYGate(q, 0.9713029876123622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.674087698647489, 2);
  sqcRYGate(q, -1.5111436969882919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0773421820163835, 4);
  sqcRYGate(q, -0.7242401315383242, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9974040777324198, 4);
  sqcRYGate(q, -1.5525825861930742, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1856399610788657, 6);
  sqcRYGate(q, -2.818181176383288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.562499274123762, 6);
  sqcRYGate(q, 0.7650752114693397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.05995962627013807, 8);
  sqcRYGate(q, 1.9487024675858322, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.09257093159956309, 8);
  sqcRYGate(q, 0.3818491051248171, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.581117573161654, 10);
  sqcRYGate(q, 1.6845797286045077, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5744348430900743, 10);
  sqcRYGate(q, 1.5417078409358491, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5175598619397708, 12);
  sqcRYGate(q, 2.704340791538818, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.0448784366789377, 12);
  sqcRYGate(q, -0.0006205637105893762, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0464265948246196, 14);
  sqcRYGate(q, 1.6916224457196918, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.027778343392704952, 14);
  sqcRYGate(q, -2.794288127773079, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0938546242585594, 16);
  sqcRYGate(q, -1.5157525478969354, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.0441657925841463, 16);
  sqcRYGate(q, -0.045760710308664805, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.829938365134993, 18);
  sqcRYGate(q, -1.2966138465973807, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.091146944617868, 18);
  sqcRYGate(q, 2.669880604766111, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.4637390426403319, 0);
  sqcRYGate(q, -2.1742979778508698, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05197132024769591, 0);
  sqcRYGate(q, -3.1407945414052647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8921049599602426, 2);
  sqcRYGate(q, -0.040763726857890425, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0207039293083002, 2);
  sqcRYGate(q, -0.09087534713148192, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0157473949458398, 4);
  sqcRYGate(q, -1.2184338769897307, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1297391927327705, 4);
  sqcRYGate(q, -0.012336294793798608, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4481499559906619, 6);
  sqcRYGate(q, 1.8816462639017013, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1253967439697767, 6);
  sqcRYGate(q, -3.1366300880122426, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.2585622292146184, 8);
  sqcRYGate(q, -1.4715844863646517, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.091693780601782, 8);
  sqcRYGate(q, -0.14569702922882663, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.558766357367319, 10);
  sqcRYGate(q, -1.4732116288219306, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.14123565989871, 10);
  sqcRYGate(q, 0.02106833124931473, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.08192056478440879, 12);
  sqcRYGate(q, 2.387282198841975, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.0012864789961453465, 12);
  sqcRYGate(q, -0.020340273069863635, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.6546277486674912, 14);
  sqcRYGate(q, 0.264171276594518, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.004287836237389893, 14);
  sqcRYGate(q, -2.840212158653854, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.8245744055769157, 16);
  sqcRYGate(q, 1.1060346843478894, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -3.08169356014677, 16);
  sqcRYGate(q, -2.9721814758542258, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.4264980962154068, 1);
  sqcRYGate(q, -0.4892518099357064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3026597868109758, 1);
  sqcRYGate(q, -1.6907421409480665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.604024802707165, 3);
  sqcRYGate(q, 1.5858876524046988, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0706094545670371, 3);
  sqcRYGate(q, 1.5246460055462467, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.021626763816775533, 5);
  sqcRYGate(q, 2.1367492527442833, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.136860031772419, 5);
  sqcRYGate(q, 0.0005107487253085004, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.740860592239363, 7);
  sqcRYGate(q, 0.6076994205481706, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.003869648558871397, 7);
  sqcRYGate(q, 3.133459663828337, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.0100515968393626, 9);
  sqcRYGate(q, 2.96757483647544, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1414519586986605, 9);
  sqcRYGate(q, -0.024874263561878496, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.963059765195953, 11);
  sqcRYGate(q, -1.2604708481406937, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.0791338505759183, 11);
  sqcRYGate(q, 0.1668881532408766, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.5464180759894753, 13);
  sqcRYGate(q, 1.7384829169113918, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.042339651645968875, 13);
  sqcRYGate(q, 3.1396324380954517, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5055284097022428, 15);
  sqcRYGate(q, 2.7374667233272736, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.132258657345613, 15);
  sqcRYGate(q, 0.10413640436165572, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 1.9069812473511294, 17);
  sqcRYGate(q, 1.1803253965312344, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.7561274004769674, 17);
  sqcRYGate(q, -0.11157621335362011, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 3.0955831274342875, 0);
  sqcRYGate(q, 2.4622857967198435, 1);
  sqcRYGate(q, -0.049857469445698493, 2);
  sqcRYGate(q, -1.7096043787952504, 3);
  sqcRYGate(q, -2.654814542329231, 4);
  sqcRYGate(q, -1.495124559106803, 5);
  sqcRYGate(q, -2.9407130833171333, 6);
  sqcRYGate(q, -2.5515103924521054, 7);
  sqcRYGate(q, 3.137754517349466, 8);
  sqcRYGate(q, -0.0039836609512020615, 9);
  sqcRYGate(q, 0.11069521986477421, 10);
  sqcRYGate(q, -3.139138564872558, 11);
  sqcRYGate(q, -3.12409503551226, 12);
  sqcRYGate(q, -2.1539551099045666, 13);
  sqcRYGate(q, -0.09930178336484731, 14);
  sqcRYGate(q, -0.019262187169277745, 15);
  sqcRYGate(q, 0.0022563545589492262, 16);
  sqcRYGate(q, 2.8766833169395367, 17);
  sqcRYGate(q, 1.585073570012601, 18);
  sqcRYGate(q, -1.3778579751182845, 19);

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
