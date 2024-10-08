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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.13796118566321, 0);
  sqcRZGate(q, 0.556526489133401, 0);
  sqcRYGate(q, -3.0916897939023227, 1);
  sqcRZGate(q, -0.36673002498219026, 1);
  sqcRYGate(q, -0.1448394079713313, 2);
  sqcRZGate(q, 1.3149612960030979, 2);
  sqcRYGate(q, -2.785989800116613, 3);
  sqcRZGate(q, 0.9872198918124285, 3);
  sqcRYGate(q, 0.549833868734154, 4);
  sqcRZGate(q, -1.8216361025759884, 4);
  sqcRYGate(q, -1.104943013739387, 5);
  sqcRZGate(q, -0.6892672501279574, 5);
  sqcRYGate(q, -2.8578790676617776, 6);
  sqcRZGate(q, -1.9801645148159839, 6);
  sqcRYGate(q, -0.07946422013421425, 7);
  sqcRZGate(q, -0.4403374884821485, 7);
  sqcRYGate(q, -0.06458951120775325, 8);
  sqcRZGate(q, 1.136956310340528, 8);
  sqcRYGate(q, -0.009326004531331478, 9);
  sqcRZGate(q, 0.2265444552056892, 9);
  sqcRYGate(q, -1.014347096427767, 10);
  sqcRZGate(q, -1.2693664934351778, 10);
  sqcRYGate(q, 1.6656091478487003, 11);
  sqcRZGate(q, -0.05476337857767326, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3300495403312445, 0);
  sqcRZGate(q, 1.181078570850076, 0);
  sqcRYGate(q, -1.556151718835733, 1);
  sqcRZGate(q, 1.4798526766751499, 1);
  sqcRYGate(q, -0.0036930349691042252, 2);
  sqcRZGate(q, 2.321947379358514, 2);
  sqcRYGate(q, -0.002524342564181422, 3);
  sqcRZGate(q, 2.1731816541281335, 3);
  sqcRYGate(q, 3.138477637500586, 4);
  sqcRZGate(q, 0.4254966449128395, 4);
  sqcRYGate(q, 1.5921589652747645, 5);
  sqcRZGate(q, -2.1250895452370955, 5);
  sqcRYGate(q, -1.1518076081054847, 6);
  sqcRZGate(q, -2.747235199467692, 6);
  sqcRYGate(q, 3.07560597023266, 7);
  sqcRZGate(q, -2.2469854194464505, 7);
  sqcRYGate(q, -1.3746016408089716, 8);
  sqcRZGate(q, -1.734540368608496, 8);
  sqcRYGate(q, 1.5516610752936135, 9);
  sqcRZGate(q, 0.671828299736646, 9);
  sqcRYGate(q, -2.7918257919122853, 10);
  sqcRZGate(q, 0.6622236331867473, 10);
  sqcRYGate(q, -0.011113521766244945, 11);
  sqcRZGate(q, 0.022214474996623112, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.17868847881050398, 0);
  sqcRZGate(q, -0.9036801566370757, 0);
  sqcRYGate(q, -1.8520417877883544, 1);
  sqcRZGate(q, 1.5193647506339536, 1);
  sqcRYGate(q, 0.01000371883137762, 2);
  sqcRZGate(q, 1.252709813861328, 2);
  sqcRYGate(q, 2.7902679536106603, 3);
  sqcRZGate(q, 0.7789340701471987, 3);
  sqcRYGate(q, 0.362632297539343, 4);
  sqcRZGate(q, 0.5267546902190496, 4);
  sqcRYGate(q, 1.143257526400804, 5);
  sqcRZGate(q, 3.1164319528550926, 5);
  sqcRYGate(q, -0.9991724405173866, 6);
  sqcRZGate(q, -1.4599670767416681, 6);
  sqcRYGate(q, 3.084056517633623, 7);
  sqcRZGate(q, -0.047157298681620274, 7);
  sqcRYGate(q, -0.0016864956064903682, 8);
  sqcRZGate(q, -0.17090725678205046, 8);
  sqcRYGate(q, -0.000496290925580567, 9);
  sqcRZGate(q, 0.8018842464333565, 9);
  sqcRYGate(q, -1.953211272413874, 10);
  sqcRZGate(q, 0.5260565910104092, 10);
  sqcRYGate(q, 1.4642504996539931, 11);
  sqcRZGate(q, 2.8120587950795746, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3689666258601818, 0);
  sqcRZGate(q, 0.19556348216068592, 0);
  sqcRYGate(q, 1.755397677484235, 1);
  sqcRZGate(q, -1.5974566863739152, 1);
  sqcRYGate(q, -2.8014451625996175, 2);
  sqcRZGate(q, -0.5699039101851415, 2);
  sqcRYGate(q, 3.122034273422639, 3);
  sqcRZGate(q, 1.7074617857121308, 3);
  sqcRYGate(q, 0.21066452053042894, 4);
  sqcRZGate(q, 1.2561558875517402, 4);
  sqcRYGate(q, 1.3834925435913101, 5);
  sqcRZGate(q, -0.9740527940777706, 5);
  sqcRYGate(q, 0.4890683212504685, 6);
  sqcRZGate(q, -0.5115873860190261, 6);
  sqcRYGate(q, 0.2576647211736515, 7);
  sqcRZGate(q, 2.793677904605046, 7);
  sqcRYGate(q, 2.415803606861802, 8);
  sqcRZGate(q, 0.1754637110557198, 8);
  sqcRYGate(q, 1.7089599824170019, 9);
  sqcRZGate(q, 1.6848602945579767, 9);
  sqcRYGate(q, -2.167230064577788, 10);
  sqcRZGate(q, 1.388781939203518, 10);
  sqcRYGate(q, -2.179183341583132, 11);
  sqcRZGate(q, -0.9429476486633366, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.971191787991339, 0);
  sqcRZGate(q, 1.1555013969644556, 0);
  sqcRYGate(q, -2.1291068529932007, 1);
  sqcRZGate(q, -2.0019609221866896, 1);
  sqcRYGate(q, -0.35312631492222213, 2);
  sqcRZGate(q, 0.9923748057262296, 2);
  sqcRYGate(q, -0.0029837640225665726, 3);
  sqcRZGate(q, 2.7730337677117363, 3);
  sqcRYGate(q, -2.447547488641854, 4);
  sqcRZGate(q, -0.17016346923012912, 4);
  sqcRYGate(q, 0.33353092012366453, 5);
  sqcRZGate(q, -2.2371240045475225, 5);
  sqcRYGate(q, 0.5085829901051238, 6);
  sqcRZGate(q, 2.1403237629031784, 6);
  sqcRYGate(q, 0.19925107994157382, 7);
  sqcRZGate(q, -1.7437513898331762, 7);
  sqcRYGate(q, 3.141333054988097, 8);
  sqcRZGate(q, -2.4971901819361184, 8);
  sqcRYGate(q, -3.1415849826217417, 9);
  sqcRZGate(q, 2.4970303629679527, 9);
  sqcRYGate(q, -0.3213277527636688, 10);
  sqcRZGate(q, -2.520622858789219, 10);
  sqcRYGate(q, -0.4629603645574081, 11);
  sqcRZGate(q, 0.5908222266751789, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.4161056747079894, 0);
  sqcRZGate(q, -2.5658940815326123, 0);
  sqcRYGate(q, 3.0562688532469453, 1);
  sqcRZGate(q, 2.438622316914317, 1);
  sqcRYGate(q, -1.9744693363569534, 2);
  sqcRZGate(q, 0.048779223337946, 2);
  sqcRYGate(q, 0.0098545930440646, 3);
  sqcRZGate(q, -2.6574127996017274, 3);
  sqcRYGate(q, -2.9014448945663087, 4);
  sqcRZGate(q, 0.028182910214029515, 4);
  sqcRYGate(q, -0.4152093835239672, 5);
  sqcRZGate(q, -2.4306380745327805, 5);
  sqcRYGate(q, 3.0831284103386785, 6);
  sqcRZGate(q, -0.445041486334124, 6);
  sqcRYGate(q, -0.8152473078544991, 7);
  sqcRZGate(q, 2.663901021584412, 7);
  sqcRYGate(q, 1.0968336156706657, 8);
  sqcRZGate(q, -0.5130235703827589, 8);
  sqcRYGate(q, -2.2064759834903613, 9);
  sqcRZGate(q, -0.04983145841800284, 9);
  sqcRYGate(q, 3.0725745324016387, 10);
  sqcRZGate(q, 0.9587204608696789, 10);
  sqcRYGate(q, 2.24755995574572, 11);
  sqcRZGate(q, 2.268401122755815, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.4576776081528946, 0);
  sqcRZGate(q, 1.7549893268852341, 0);
  sqcRYGate(q, -2.9962118951329737, 1);
  sqcRZGate(q, 2.9355586848640174, 1);
  sqcRYGate(q, -0.427133191566353, 2);
  sqcRZGate(q, -2.9578162496153055, 2);
  sqcRYGate(q, -0.00020287960071322465, 3);
  sqcRZGate(q, -2.56697114663965, 3);
  sqcRYGate(q, 2.1623765078457318, 4);
  sqcRZGate(q, -2.8604444134538767, 4);
  sqcRYGate(q, -1.2439984711189775, 5);
  sqcRZGate(q, 1.654204181497952, 5);
  sqcRYGate(q, 1.2325376295942228, 6);
  sqcRZGate(q, -2.260835078126602, 6);
  sqcRYGate(q, 0.1255106896276441, 7);
  sqcRZGate(q, -0.6622623856211419, 7);
  sqcRYGate(q, -3.1396453561269873, 8);
  sqcRZGate(q, -0.168958823419465, 8);
  sqcRYGate(q, -3.141277931617909, 9);
  sqcRZGate(q, 1.553577542311353, 9);
  sqcRYGate(q, -1.2456526141645412, 10);
  sqcRZGate(q, -2.6245520001334186, 10);
  sqcRYGate(q, 1.3981060733321753, 11);
  sqcRZGate(q, 0.07564903954714719, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.03735322402966, 0);
  sqcRZGate(q, -0.7473515988692272, 0);
  sqcRYGate(q, 0.08064970776516045, 1);
  sqcRZGate(q, -2.667693483466672, 1);
  sqcRYGate(q, 2.1272300586462665, 2);
  sqcRZGate(q, -2.230813813562935, 2);
  sqcRYGate(q, 0.013242895321210358, 3);
  sqcRZGate(q, 1.0258354441289637, 3);
  sqcRYGate(q, 2.8743471205845563, 4);
  sqcRZGate(q, 0.4271463558433508, 4);
  sqcRYGate(q, -0.14433976286029543, 5);
  sqcRZGate(q, -1.8003646626157825, 5);
  sqcRYGate(q, 1.3801240408084068, 6);
  sqcRZGate(q, -0.4409654961713251, 6);
  sqcRYGate(q, -1.1494237813576431, 7);
  sqcRZGate(q, 1.5134188701633482, 7);
  sqcRYGate(q, -1.3556511947186927, 8);
  sqcRZGate(q, -2.0879276038343573, 8);
  sqcRYGate(q, -0.8822188401579334, 9);
  sqcRZGate(q, -2.9969862591805914, 9);
  sqcRYGate(q, -2.5111052330796735, 10);
  sqcRZGate(q, -2.9219583495900783, 10);
  sqcRYGate(q, 2.1637670077004816, 11);
  sqcRZGate(q, 1.5364780048900846, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.71724898334725, 0);
  sqcRZGate(q, -1.01461730606436, 0);
  sqcRYGate(q, -1.1016616910023664, 1);
  sqcRZGate(q, -1.9019754361054275, 1);
  sqcRYGate(q, -2.9331736154955217, 2);
  sqcRZGate(q, 3.0043041936623713, 2);
  sqcRYGate(q, -3.14131396710308, 3);
  sqcRZGate(q, 0.38607179284092874, 3);
  sqcRYGate(q, -2.7317294519617445, 4);
  sqcRZGate(q, 2.4668303416504056, 4);
  sqcRYGate(q, -3.0670554139766186, 5);
  sqcRZGate(q, 2.5434905698278802, 5);
  sqcRYGate(q, -0.0901931697631312, 6);
  sqcRZGate(q, 0.2760302075649337, 6);
  sqcRYGate(q, 0.002409832100170206, 7);
  sqcRZGate(q, 2.8733843632252425, 7);
  sqcRYGate(q, -3.141381925288632, 8);
  sqcRZGate(q, -0.20495184140059283, 8);
  sqcRYGate(q, -0.0005036049510351859, 9);
  sqcRZGate(q, -0.030129797057406187, 9);
  sqcRYGate(q, 0.0999903934349323, 10);
  sqcRZGate(q, -1.0909858546543345, 10);
  sqcRYGate(q, -0.20573347455622226, 11);
  sqcRZGate(q, 0.9743844354128929, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.14273485381815657, 0);
  sqcRZGate(q, -0.4721352056071121, 0);
  sqcRYGate(q, -3.087725513192154, 1);
  sqcRZGate(q, 1.5492717568224668, 1);
  sqcRYGate(q, 1.9252263782846588, 2);
  sqcRZGate(q, -1.0993025875607643, 2);
  sqcRYGate(q, 0.06270805245163717, 3);
  sqcRZGate(q, -0.14299872950753756, 3);
  sqcRYGate(q, 0.2032455173572414, 4);
  sqcRZGate(q, 2.725675505437488, 4);
  sqcRYGate(q, -3.1117965621198564, 5);
  sqcRZGate(q, 3.061599980617849, 5);
  sqcRYGate(q, 1.430972101968595, 6);
  sqcRZGate(q, -0.5054324083940398, 6);
  sqcRYGate(q, -0.6638204037624433, 7);
  sqcRZGate(q, 1.3368286129410203, 7);
  sqcRYGate(q, -1.8878248776040172, 8);
  sqcRZGate(q, 1.5690924771677581, 8);
  sqcRYGate(q, -3.0403406432974043, 9);
  sqcRZGate(q, 3.0543489563080395, 9);
  sqcRYGate(q, -0.15053430445069113, 10);
  sqcRZGate(q, 1.3150360660696347, 10);
  sqcRYGate(q, -3.008726164321368, 11);
  sqcRZGate(q, -1.4644878434199071, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3309015215275346, 0);
  sqcRZGate(q, 0.9437708787983901, 0);
  sqcRYGate(q, -2.9925465910899725, 1);
  sqcRZGate(q, -0.4600657825494281, 1);
  sqcRYGate(q, -3.138394129493831, 2);
  sqcRZGate(q, 0.5878743458260546, 2);
  sqcRYGate(q, -3.139673804668282, 3);
  sqcRZGate(q, 1.4300520843619202, 3);
  sqcRYGate(q, -2.708653014538999, 4);
  sqcRZGate(q, -0.11150270979540622, 4);
  sqcRYGate(q, -1.6188633434092687, 5);
  sqcRZGate(q, 0.3896252504270057, 5);
  sqcRYGate(q, 1.0333553507151108, 6);
  sqcRZGate(q, 0.5899959472369662, 6);
  sqcRYGate(q, -2.4369029305940417, 7);
  sqcRZGate(q, -0.06613009140280467, 7);
  sqcRYGate(q, 1.4963275219900949, 8);
  sqcRZGate(q, 0.03633258748652146, 8);
  sqcRYGate(q, -3.1269961792617464, 9);
  sqcRZGate(q, -1.9414945240867816, 9);
  sqcRYGate(q, 2.160150241417224, 10);
  sqcRZGate(q, 0.5384614039124083, 10);
  sqcRYGate(q, -1.0658142771248604, 11);
  sqcRZGate(q, 1.0718271491969678, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.747075033037446, 0);
  sqcRZGate(q, 2.25884152926181, 0);
  sqcRYGate(q, 3.042613419366208, 1);
  sqcRZGate(q, -2.3643353394715296, 1);
  sqcRYGate(q, 0.5065510694485864, 2);
  sqcRZGate(q, -0.7599022268015505, 2);
  sqcRYGate(q, -0.7701164614444903, 3);
  sqcRZGate(q, 2.250602750126377, 3);
  sqcRYGate(q, 1.0824559745639455, 4);
  sqcRZGate(q, 2.9401285536351938, 4);
  sqcRYGate(q, -1.493468002814815, 5);
  sqcRZGate(q, 0.12943308079348448, 5);
  sqcRYGate(q, -0.15321970426727646, 6);
  sqcRZGate(q, 0.6494116602300575, 6);
  sqcRYGate(q, -0.0386401586809955, 7);
  sqcRZGate(q, -2.68426361935353, 7);
  sqcRYGate(q, -1.3071763048200145, 8);
  sqcRZGate(q, -0.0016441464380223536, 8);
  sqcRYGate(q, -3.141043625067567, 9);
  sqcRZGate(q, 0.7728904367308571, 9);
  sqcRYGate(q, 1.1563005503628503, 10);
  sqcRZGate(q, 2.449331881000829, 10);
  sqcRYGate(q, 2.7882716198949957, 11);
  sqcRZGate(q, -2.5659849512673856, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.4632958721527661, 0);
  sqcRZGate(q, -2.2205415361620364, 0);
  sqcRYGate(q, 2.756119194629354, 1);
  sqcRZGate(q, -2.594616175214572, 1);
  sqcRYGate(q, 3.140993666180289, 2);
  sqcRZGate(q, -1.9166198807662207, 2);
  sqcRYGate(q, 0.06580420014553144, 3);
  sqcRZGate(q, -1.4065346541563137, 3);
  sqcRYGate(q, 0.010293846940771623, 4);
  sqcRZGate(q, 0.3538835707061257, 4);
  sqcRYGate(q, 0.20039413827720676, 5);
  sqcRZGate(q, -0.4280576867099658, 5);
  sqcRYGate(q, -3.1256552385634704, 6);
  sqcRZGate(q, 1.52225333242204, 6);
  sqcRYGate(q, -3.0907792438678583, 7);
  sqcRZGate(q, 1.4242323498259815, 7);
  sqcRYGate(q, -1.6572213909502014, 8);
  sqcRZGate(q, 0.2449936651085501, 8);
  sqcRYGate(q, 0.003627122026128568, 9);
  sqcRZGate(q, -0.4543881970126339, 9);
  sqcRYGate(q, -0.9208784098037399, 10);
  sqcRZGate(q, -1.0523674612826381, 10);
  sqcRYGate(q, 2.664262784898232, 11);
  sqcRZGate(q, -0.8761745697975768, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.8446327515679404, 0);
  sqcRZGate(q, 1.5605188085831516, 0);
  sqcRYGate(q, 0.8835098630519873, 1);
  sqcRZGate(q, -0.3372691675199801, 1);
  sqcRYGate(q, -1.7216415523279793, 2);
  sqcRZGate(q, -3.1169145280675865, 2);
  sqcRYGate(q, 2.5263880295399885, 3);
  sqcRZGate(q, 1.5018416973329147, 3);
  sqcRYGate(q, -0.07197302017112958, 4);
  sqcRZGate(q, -0.8887991092414856, 4);
  sqcRYGate(q, -2.592739582499889, 5);
  sqcRZGate(q, -1.0238944391096387, 5);
  sqcRYGate(q, 2.846595484734242, 6);
  sqcRZGate(q, -2.7854527720939277, 6);
  sqcRYGate(q, 1.1302967130610637, 7);
  sqcRZGate(q, -2.1089553517483086, 7);
  sqcRYGate(q, -1.2765023196085137, 8);
  sqcRZGate(q, -0.7840902753037661, 8);
  sqcRYGate(q, -3.1297593025516406, 9);
  sqcRZGate(q, -3.1036683692511917, 9);
  sqcRYGate(q, 1.4092077606662083, 10);
  sqcRZGate(q, 2.4252429545966887, 10);
  sqcRYGate(q, -0.6442923493623374, 11);
  sqcRZGate(q, 2.9798819887428722, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.0173837005096724, 0);
  sqcRZGate(q, 1.584812926721237, 0);
  sqcRYGate(q, -3.076065162875376, 1);
  sqcRZGate(q, -1.8788626782621765, 1);
  sqcRYGate(q, 2.644119281918087, 2);
  sqcRZGate(q, -2.657385898726543, 2);
  sqcRYGate(q, -1.5285995974744329, 3);
  sqcRZGate(q, -0.6525368216586996, 3);
  sqcRYGate(q, -0.0020136224581386217, 4);
  sqcRZGate(q, -0.08174877772697631, 4);
  sqcRYGate(q, 3.1407048469342107, 5);
  sqcRZGate(q, 2.1282915268196154, 5);
  sqcRYGate(q, 3.0064034687104275, 6);
  sqcRZGate(q, 0.7944812708245311, 6);
  sqcRYGate(q, 2.9298109138906945, 7);
  sqcRZGate(q, 2.398413871175551, 7);
  sqcRYGate(q, -3.111048317469697, 8);
  sqcRZGate(q, -0.6332686719838975, 8);
  sqcRYGate(q, 0.007143361132430305, 9);
  sqcRZGate(q, -1.7574180591302566, 9);
  sqcRYGate(q, -2.5256080184783456, 10);
  sqcRZGate(q, 0.8379893617250074, 10);
  sqcRYGate(q, 2.4506804188569977, 11);
  sqcRZGate(q, 0.05045832616747337, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.6973725730996874, 0);
  sqcRZGate(q, -1.892777159417281, 0);
  sqcRYGate(q, 3.09044986122256, 1);
  sqcRZGate(q, -0.4555421435234024, 1);
  sqcRYGate(q, 2.9638844403198807, 2);
  sqcRZGate(q, -2.594522295149647, 2);
  sqcRYGate(q, -0.011477469950357373, 3);
  sqcRZGate(q, 0.5973952411495365, 3);
  sqcRYGate(q, 3.105047049238667, 4);
  sqcRZGate(q, 1.754753525368499, 4);
  sqcRYGate(q, -0.8383747801726837, 5);
  sqcRZGate(q, 1.61903785462869, 5);
  sqcRYGate(q, -1.7754820048849682, 6);
  sqcRZGate(q, 1.5710593530643158, 6);
  sqcRYGate(q, -1.661699208974092, 7);
  sqcRZGate(q, 2.9106607609375823, 7);
  sqcRYGate(q, 0.04012113909586734, 8);
  sqcRZGate(q, 1.5369024579306012, 8);
  sqcRYGate(q, -3.1258450841740433, 9);
  sqcRZGate(q, 2.519561746357885, 9);
  sqcRYGate(q, -0.8853646319081269, 10);
  sqcRZGate(q, -0.05746194647411645, 10);
  sqcRYGate(q, -2.0524755689270417, 11);
  sqcRZGate(q, -0.9813751305078185, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.21801967989995177, 0);
  sqcRZGate(q, 0.6131707274005822, 0);
  sqcRYGate(q, 2.8426024844270588, 1);
  sqcRZGate(q, 0.9408490241223851, 1);
  sqcRYGate(q, -0.4523163444092076, 2);
  sqcRZGate(q, -0.7882355302031687, 2);
  sqcRYGate(q, -1.553468201980435, 3);
  sqcRZGate(q, 3.115509054649501, 3);
  sqcRYGate(q, 0.015492599762432668, 4);
  sqcRZGate(q, 0.442103384626674, 4);
  sqcRYGate(q, 3.0901424902172216, 5);
  sqcRZGate(q, -2.5060945634485825, 5);
  sqcRYGate(q, 3.1378194245587467, 6);
  sqcRZGate(q, 1.1921308791266145, 6);
  sqcRYGate(q, -0.1651239685136776, 7);
  sqcRZGate(q, -2.2062842913532807, 7);
  sqcRYGate(q, 0.7844336607600585, 8);
  sqcRZGate(q, -0.3679483572174805, 8);
  sqcRYGate(q, -0.060950017867483545, 9);
  sqcRZGate(q, 3.0124251653562633, 9);
  sqcRYGate(q, -3.110419084922961, 10);
  sqcRZGate(q, -1.5333091298234718, 10);
  sqcRYGate(q, -3.1390114556830877, 11);
  sqcRZGate(q, 1.2849526074045075, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3290783399420152, 0);
  sqcRZGate(q, 0.9726672507246805, 0);
  sqcRYGate(q, 1.0547142041663857, 1);
  sqcRZGate(q, 2.1811829438700405, 1);
  sqcRYGate(q, 0.01936317794414144, 2);
  sqcRZGate(q, 2.039474056551298, 2);
  sqcRYGate(q, -0.20760656462547064, 3);
  sqcRZGate(q, -0.2783541743451653, 3);
  sqcRYGate(q, -0.02317186993284867, 4);
  sqcRZGate(q, 2.7202175891498834, 4);
  sqcRYGate(q, 0.14878279314808385, 5);
  sqcRZGate(q, -2.579518142175038, 5);
  sqcRYGate(q, 2.107759220548277, 6);
  sqcRZGate(q, -0.8670488700570091, 6);
  sqcRYGate(q, 0.04217036745848901, 7);
  sqcRZGate(q, 2.810979175585623, 7);
  sqcRYGate(q, 0.05210222000309983, 8);
  sqcRZGate(q, -0.1945457410907414, 8);
  sqcRYGate(q, -3.1090166367827066, 9);
  sqcRZGate(q, -1.2677173153492611, 9);
  sqcRYGate(q, 1.2043908039824487, 10);
  sqcRZGate(q, 2.8159581699961267, 10);
  sqcRYGate(q, 2.0174476701950916, 11);
  sqcRZGate(q, -1.6744228490327477, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.04013123524814599, 0);
  sqcRZGate(q, -1.254666383769461, 0);
  sqcRYGate(q, 0.030920262007263943, 1);
  sqcRZGate(q, -1.1498146955982371, 1);
  sqcRYGate(q, -2.7350296158206326, 2);
  sqcRZGate(q, -2.9406016181900743, 2);
  sqcRYGate(q, 1.6700824903484586, 3);
  sqcRZGate(q, -3.0164743935654488, 3);
  sqcRYGate(q, -3.123505263238508, 4);
  sqcRZGate(q, -2.019721429019908, 4);
  sqcRYGate(q, -1.1306601062928658, 5);
  sqcRZGate(q, 3.082435492578821, 5);
  sqcRYGate(q, 0.1868416380046449, 6);
  sqcRZGate(q, 2.8976858256910414, 6);
  sqcRYGate(q, 3.096323581185487, 7);
  sqcRZGate(q, -1.865837175384634, 7);
  sqcRYGate(q, -0.932257217155151, 8);
  sqcRZGate(q, -1.014876432071619, 8);
  sqcRYGate(q, -0.04306809259596012, 9);
  sqcRZGate(q, 0.10600611827408725, 9);
  sqcRYGate(q, 0.784907580695478, 10);
  sqcRZGate(q, -1.848497039461015, 10);
  sqcRYGate(q, 2.9982195871706523, 11);
  sqcRZGate(q, -2.6152268254431115, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.0370733742425735, 0);
  sqcRZGate(q, -2.356481865383448, 0);
  sqcRYGate(q, -0.7259552237064967, 1);
  sqcRZGate(q, -2.1224412330830713, 1);
  sqcRYGate(q, 2.8152647385735685, 2);
  sqcRZGate(q, -0.23880610334318408, 2);
  sqcRYGate(q, 0.04080977025468552, 3);
  sqcRZGate(q, 1.4276816480039596, 3);
  sqcRYGate(q, -3.120455603531725, 4);
  sqcRZGate(q, -0.4024800287227546, 4);
  sqcRYGate(q, 1.4127990772488017, 5);
  sqcRZGate(q, -2.2953422116300937, 5);
  sqcRYGate(q, 0.03732738438591987, 6);
  sqcRZGate(q, 0.14438129340132966, 6);
  sqcRYGate(q, 3.0396384317044105, 7);
  sqcRZGate(q, 3.093799741122011, 7);
  sqcRYGate(q, 0.7651821722639873, 8);
  sqcRZGate(q, 3.0104286053521037, 8);
  sqcRYGate(q, 2.870525313564677, 9);
  sqcRZGate(q, 3.068067837298206, 9);
  sqcRYGate(q, 1.6115517459091877, 10);
  sqcRZGate(q, -2.972580692453716, 10);
  sqcRYGate(q, -0.12031700060087491, 11);
  sqcRZGate(q, 1.9262976813180144, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7582831632642355, 0);
  sqcRZGate(q, -1.782563136214745, 0);
  sqcRYGate(q, -1.7590240988026726, 1);
  sqcRZGate(q, -2.30609471153405, 1);
  sqcRYGate(q, -1.2313979110176374, 2);
  sqcRZGate(q, -0.30807373256900156, 2);
  sqcRYGate(q, -0.20084195272883615, 3);
  sqcRZGate(q, 3.0372232678784967, 3);
  sqcRYGate(q, 2.242903480894765, 4);
  sqcRZGate(q, -0.3902954279991524, 4);
  sqcRYGate(q, 0.8034429594502575, 5);
  sqcRZGate(q, -1.7841995130381576, 5);
  sqcRYGate(q, 2.780404112918079, 6);
  sqcRZGate(q, 2.1660134787068084, 6);
  sqcRYGate(q, 2.621697902385178, 7);
  sqcRZGate(q, -3.0613488865551353, 7);
  sqcRYGate(q, -2.767496289543964, 8);
  sqcRZGate(q, -0.3322877097769511, 8);
  sqcRYGate(q, -1.5647368872590477, 9);
  sqcRZGate(q, 0.07170107896251281, 9);
  sqcRYGate(q, 1.4749147740113144, 10);
  sqcRZGate(q, 1.126150060876981, 10);
  sqcRYGate(q, -0.4497964838238744, 11);
  sqcRZGate(q, -0.4109636162185541, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4876721033724642, 0);
  sqcRZGate(q, -0.26018489074280726, 0);
  sqcRYGate(q, -0.021433245805881462, 1);
  sqcRZGate(q, 2.23584472074422, 1);
  sqcRYGate(q, 0.009006958868164296, 2);
  sqcRZGate(q, -1.388251580687533, 2);
  sqcRYGate(q, -0.01929596740167483, 3);
  sqcRZGate(q, -1.7893398660410782, 3);
  sqcRYGate(q, -0.04112281554681609, 4);
  sqcRZGate(q, -2.7956262481125176, 4);
  sqcRYGate(q, -3.080054869348151, 5);
  sqcRZGate(q, 2.9057124523677493, 5);
  sqcRYGate(q, -3.1281888937633586, 6);
  sqcRZGate(q, 2.1213653478099666, 6);
  sqcRYGate(q, 0.07250207944660308, 7);
  sqcRZGate(q, 3.040928434481477, 7);
  sqcRYGate(q, -0.015059439657227891, 8);
  sqcRZGate(q, 0.2431729691853992, 8);
  sqcRYGate(q, -3.1153567014091954, 9);
  sqcRZGate(q, -0.06252924005467554, 9);
  sqcRYGate(q, 1.5255062717380534, 10);
  sqcRZGate(q, -0.2765701560252624, 10);
  sqcRYGate(q, 2.880614279904223, 11);
  sqcRZGate(q, -3.1216552706276737, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.035692010054258, 0);
  sqcRZGate(q, -1.8734023520619898, 0);
  sqcRYGate(q, -2.2503099251435073, 1);
  sqcRZGate(q, -1.8478410222778436, 1);
  sqcRYGate(q, -3.0815471554057625, 2);
  sqcRZGate(q, 1.2705953000588814, 2);
  sqcRYGate(q, 3.0861210570667548, 3);
  sqcRZGate(q, 2.841112118367109, 3);
  sqcRYGate(q, -2.264538828221178, 4);
  sqcRZGate(q, -1.5280616773013445, 4);
  sqcRYGate(q, -2.2241277476211954, 5);
  sqcRZGate(q, -1.757646135236638, 5);
  sqcRYGate(q, -3.074893761230865, 6);
  sqcRZGate(q, -1.826865251294934, 6);
  sqcRYGate(q, 2.71659561738869, 7);
  sqcRZGate(q, 1.4613894364181799, 7);
  sqcRYGate(q, 0.44420601782488733, 8);
  sqcRZGate(q, -1.5875809320385672, 8);
  sqcRYGate(q, 3.0525820278042537, 9);
  sqcRZGate(q, 1.4426296935593037, 9);
  sqcRYGate(q, 0.009660912929264853, 10);
  sqcRZGate(q, -1.2771156689005336, 10);
  sqcRYGate(q, 1.5724196772983259, 11);
  sqcRZGate(q, 3.137514333940392, 11);

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
