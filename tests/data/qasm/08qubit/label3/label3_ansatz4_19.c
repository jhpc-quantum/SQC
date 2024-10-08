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

  sqcRYGate(q, 0.0822266642352441, 0);
  sqcRZGate(q, 1.3581832047371902, 0);
  sqcRYGate(q, 1.6041858831641942, 1);
  sqcRZGate(q, 1.1919519146697606, 1);
  sqcRYGate(q, -0.38507893362187695, 2);
  sqcRZGate(q, 2.2347517338383422, 2);
  sqcRYGate(q, -0.9213338537646658, 3);
  sqcRZGate(q, 0.14847323951116087, 3);
  sqcRYGate(q, 3.038909533211959, 4);
  sqcRZGate(q, -0.1964119139011844, 4);
  sqcRYGate(q, -0.46489975042739284, 5);
  sqcRZGate(q, -2.0204069512941256, 5);
  sqcRYGate(q, 0.9862311481329518, 6);
  sqcRZGate(q, -0.5716857719466745, 6);
  sqcRYGate(q, 0.5894857672108262, 7);
  sqcRZGate(q, 0.9537675754064966, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3725461791574147, 0);
  sqcRZGate(q, -2.91306278344834, 0);
  sqcRYGate(q, -0.30423210244126214, 1);
  sqcRZGate(q, -0.2612409881959859, 1);
  sqcRYGate(q, -2.324227714020738, 2);
  sqcRZGate(q, 1.5129763568422403, 2);
  sqcRYGate(q, 2.3923865077129705, 3);
  sqcRZGate(q, -3.1240935142635924, 3);
  sqcRYGate(q, 0.7738759719508673, 4);
  sqcRZGate(q, 2.6919177438767705, 4);
  sqcRYGate(q, 2.7075293485750827, 5);
  sqcRZGate(q, 0.1710495433859174, 5);
  sqcRYGate(q, 2.0569378369764717, 6);
  sqcRZGate(q, -2.3286274892289396, 6);
  sqcRYGate(q, -1.149278904432002, 7);
  sqcRZGate(q, -1.2182043581040385, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6588785264432893, 0);
  sqcRZGate(q, -1.118871620729439, 0);
  sqcRYGate(q, -1.9148497745897808, 1);
  sqcRZGate(q, -1.008120755105359, 1);
  sqcRYGate(q, 1.3002224973504202, 2);
  sqcRZGate(q, 0.11069824069258961, 2);
  sqcRYGate(q, -1.3890184355774038, 3);
  sqcRZGate(q, -1.4647469251287522, 3);
  sqcRYGate(q, 2.288373286306515, 4);
  sqcRZGate(q, -1.1348679759458662, 4);
  sqcRYGate(q, 0.6377706105051485, 5);
  sqcRZGate(q, 1.2266092455544444, 5);
  sqcRYGate(q, -0.5479716366540334, 6);
  sqcRZGate(q, -1.182224058050322, 6);
  sqcRYGate(q, 1.0349136701662758, 7);
  sqcRZGate(q, -1.9954047781683055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.654779054801735, 0);
  sqcRZGate(q, -1.0152109216531562, 0);
  sqcRYGate(q, 2.5917124185434615, 1);
  sqcRZGate(q, 2.2012414698196876, 1);
  sqcRYGate(q, 0.7068650336978699, 2);
  sqcRZGate(q, -2.861789685113918, 2);
  sqcRYGate(q, 0.40102339313003005, 3);
  sqcRZGate(q, -2.046454946175911, 3);
  sqcRYGate(q, -2.887747132849854, 4);
  sqcRZGate(q, -1.398789803682086, 4);
  sqcRYGate(q, 1.9304650967907184, 5);
  sqcRZGate(q, 2.7863926369994543, 5);
  sqcRYGate(q, 1.3937649378342025, 6);
  sqcRZGate(q, -1.8432801767237397, 6);
  sqcRYGate(q, 1.841747369747051, 7);
  sqcRZGate(q, -2.407101719640343, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.031549265275475, 0);
  sqcRZGate(q, 1.2743939004688247, 0);
  sqcRYGate(q, 2.6059709420382497, 1);
  sqcRZGate(q, 0.8432344321104667, 1);
  sqcRYGate(q, 1.530840939354083, 2);
  sqcRZGate(q, -0.5892032138147778, 2);
  sqcRYGate(q, 2.8954941475756395, 3);
  sqcRZGate(q, 1.2340000601705237, 3);
  sqcRYGate(q, 0.11213601971283797, 4);
  sqcRZGate(q, -1.354229446757171, 4);
  sqcRYGate(q, -1.0715081765283427, 5);
  sqcRZGate(q, 0.8533874378983985, 5);
  sqcRYGate(q, 0.29032879766274194, 6);
  sqcRZGate(q, -2.770918346416016, 6);
  sqcRYGate(q, 2.6056143546697976, 7);
  sqcRZGate(q, 2.459094496840129, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3554125945185978, 0);
  sqcRZGate(q, 1.9448968589566753, 0);
  sqcRYGate(q, 1.3734194385667644, 1);
  sqcRZGate(q, -0.7902363876970885, 1);
  sqcRYGate(q, 1.8753544125447696, 2);
  sqcRZGate(q, 0.10651522320803833, 2);
  sqcRYGate(q, -2.189890866181659, 3);
  sqcRZGate(q, 0.8125397512558844, 3);
  sqcRYGate(q, 0.24122296128522436, 4);
  sqcRZGate(q, -0.3454929987663172, 4);
  sqcRYGate(q, -0.38592684817957956, 5);
  sqcRZGate(q, -2.5256926880969095, 5);
  sqcRYGate(q, 0.8975005222573741, 6);
  sqcRZGate(q, 0.5300986101415778, 6);
  sqcRYGate(q, 0.4840646551019665, 7);
  sqcRZGate(q, -2.372728042127719, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6350263254644063, 0);
  sqcRZGate(q, 2.7107719820427763, 0);
  sqcRYGate(q, 1.5442479025564726, 1);
  sqcRZGate(q, -1.722518242575457, 1);
  sqcRYGate(q, -2.1703866807755805, 2);
  sqcRZGate(q, -1.0081639334137726, 2);
  sqcRYGate(q, 0.7655170866530585, 3);
  sqcRZGate(q, -1.7307458947064527, 3);
  sqcRYGate(q, -1.27788468586746, 4);
  sqcRZGate(q, 0.7463187905668788, 4);
  sqcRYGate(q, -1.511876350651798, 5);
  sqcRZGate(q, 0.9841791487141619, 5);
  sqcRYGate(q, -2.633106291438804, 6);
  sqcRZGate(q, -2.6924404397704707, 6);
  sqcRYGate(q, -2.2443901295638664, 7);
  sqcRZGate(q, -0.8156202443995894, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.756306436005477, 0);
  sqcRZGate(q, 1.110039666552539, 0);
  sqcRYGate(q, -1.0338585890627656, 1);
  sqcRZGate(q, 0.5149661321845561, 1);
  sqcRYGate(q, 1.7570904455397895, 2);
  sqcRZGate(q, 0.6706377947107205, 2);
  sqcRYGate(q, -2.671060585711676, 3);
  sqcRZGate(q, 0.4930933587130094, 3);
  sqcRYGate(q, 2.129876209837211, 4);
  sqcRZGate(q, -0.006838272953841873, 4);
  sqcRYGate(q, 2.303337334506306, 5);
  sqcRZGate(q, 0.912385974423682, 5);
  sqcRYGate(q, 2.578640402227956, 6);
  sqcRZGate(q, -1.7107999889665624, 6);
  sqcRYGate(q, -0.4203106328147956, 7);
  sqcRZGate(q, -1.011984903674242, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6039977279531423, 0);
  sqcRZGate(q, -0.204270444896188, 0);
  sqcRYGate(q, 1.6924690254143409, 1);
  sqcRZGate(q, -0.11864791493042402, 1);
  sqcRYGate(q, -0.2697711673642545, 2);
  sqcRZGate(q, -1.4438614370349185, 2);
  sqcRYGate(q, -2.901149362283352, 3);
  sqcRZGate(q, -0.5678972152636826, 3);
  sqcRYGate(q, -1.6849541715354655, 4);
  sqcRZGate(q, -2.1606527418398684, 4);
  sqcRYGate(q, -1.8822235243662897, 5);
  sqcRZGate(q, -0.8303127927078034, 5);
  sqcRYGate(q, -1.560028367423432, 6);
  sqcRZGate(q, -0.16449765784368162, 6);
  sqcRYGate(q, -0.37903533647551413, 7);
  sqcRZGate(q, 3.1274745705833653, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5782410860692673, 0);
  sqcRZGate(q, 0.5638861527682736, 0);
  sqcRYGate(q, 2.5819068006281407, 1);
  sqcRZGate(q, 0.7226065091016691, 1);
  sqcRYGate(q, 0.37779182123303734, 2);
  sqcRZGate(q, -2.1877048296012815, 2);
  sqcRYGate(q, -1.627500627368489, 3);
  sqcRZGate(q, 2.887475230731873, 3);
  sqcRYGate(q, -0.18162221606934498, 4);
  sqcRZGate(q, 2.795641404435882, 4);
  sqcRYGate(q, -2.939361325012604, 5);
  sqcRZGate(q, 2.664831147654521, 5);
  sqcRYGate(q, 2.874839628465305, 6);
  sqcRZGate(q, -2.902474181320633, 6);
  sqcRYGate(q, -2.286697308487729, 7);
  sqcRZGate(q, 1.5237201969431422, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.46162150970068, 0);
  sqcRZGate(q, 3.0222806869909737, 0);
  sqcRYGate(q, -0.6141113489980966, 1);
  sqcRZGate(q, -2.2762571326974403, 1);
  sqcRYGate(q, -1.3939562732508517, 2);
  sqcRZGate(q, 0.3103069005679696, 2);
  sqcRYGate(q, 2.3281297988194383, 3);
  sqcRZGate(q, 0.2859503772181026, 3);
  sqcRYGate(q, 0.4265553169196643, 4);
  sqcRZGate(q, -1.4388987231294905, 4);
  sqcRYGate(q, -2.2232303026686715, 5);
  sqcRZGate(q, -0.9073675917025303, 5);
  sqcRYGate(q, -0.2466775119068801, 6);
  sqcRZGate(q, -1.3803673307581867, 6);
  sqcRYGate(q, -1.5645198518596182, 7);
  sqcRZGate(q, -1.4611568232564471, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0924013620709399, 0);
  sqcRZGate(q, 2.9383225611638517, 0);
  sqcRYGate(q, -3.0150176252191523, 1);
  sqcRZGate(q, -0.8343946354913339, 1);
  sqcRYGate(q, 1.2313857343160448, 2);
  sqcRZGate(q, 0.504736237309699, 2);
  sqcRYGate(q, -2.754955561417735, 3);
  sqcRZGate(q, 1.3348353782664202, 3);
  sqcRYGate(q, -2.914741356848579, 4);
  sqcRZGate(q, -0.6891360143708848, 4);
  sqcRYGate(q, 0.6522045967471203, 5);
  sqcRZGate(q, 2.927307790634879, 5);
  sqcRYGate(q, 2.66992263621178, 6);
  sqcRZGate(q, 0.13302787648518524, 6);
  sqcRYGate(q, 2.0828376575081777, 7);
  sqcRZGate(q, -1.5504340428304357, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9315070996688042, 0);
  sqcRZGate(q, 1.8100158071514112, 0);
  sqcRYGate(q, 1.4789921636477166, 1);
  sqcRZGate(q, 0.06700698124274682, 1);
  sqcRYGate(q, -2.7465823563400558, 2);
  sqcRZGate(q, 2.4164144300623356, 2);
  sqcRYGate(q, 1.4151002789310692, 3);
  sqcRZGate(q, -1.2845894772662607, 3);
  sqcRYGate(q, -0.20227981342001655, 4);
  sqcRZGate(q, 0.1721564527875829, 4);
  sqcRYGate(q, 0.948181306560713, 5);
  sqcRZGate(q, 1.5276139186683193, 5);
  sqcRYGate(q, 2.393327013705007, 6);
  sqcRZGate(q, 2.628300938724414, 6);
  sqcRYGate(q, 2.1904955850843164, 7);
  sqcRZGate(q, 1.6811748091744338, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5717940491704008, 0);
  sqcRZGate(q, 2.1635490772811545, 0);
  sqcRYGate(q, -1.9814866531107793, 1);
  sqcRZGate(q, -2.6478893701323916, 1);
  sqcRYGate(q, -0.7074295891491849, 2);
  sqcRZGate(q, -2.0712323028450332, 2);
  sqcRYGate(q, -1.477985185002831, 3);
  sqcRZGate(q, -0.6110228101918709, 3);
  sqcRYGate(q, -2.950622428749551, 4);
  sqcRZGate(q, 2.6784772466553517, 4);
  sqcRYGate(q, -2.6953389409623427, 5);
  sqcRZGate(q, 1.8655521264786712, 5);
  sqcRYGate(q, 2.3451345769909366, 6);
  sqcRZGate(q, -0.9762092034516054, 6);
  sqcRYGate(q, -1.8586749607763853, 7);
  sqcRZGate(q, -1.943965454168639, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0893043161161815, 0);
  sqcRZGate(q, -0.6645810748976917, 0);
  sqcRYGate(q, -2.8610304193499823, 1);
  sqcRZGate(q, 1.627408107874058, 1);
  sqcRYGate(q, 2.692987562913874, 2);
  sqcRZGate(q, -1.7242167386871454, 2);
  sqcRYGate(q, 2.0560022540152776, 3);
  sqcRZGate(q, -0.8959004325331534, 3);
  sqcRYGate(q, 2.3118047140933875, 4);
  sqcRZGate(q, 2.10077564302137, 4);
  sqcRYGate(q, -0.24508113005202417, 5);
  sqcRZGate(q, 2.9327017543591754, 5);
  sqcRYGate(q, -1.3650236762656798, 6);
  sqcRZGate(q, 2.5674359681096703, 6);
  sqcRYGate(q, 3.0085335953207295, 7);
  sqcRZGate(q, -1.6225511030933468, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.450589938197795, 0);
  sqcRZGate(q, -1.7455752225628087, 0);
  sqcRYGate(q, 0.7202573694982011, 1);
  sqcRZGate(q, 2.110985593800703, 1);
  sqcRYGate(q, -2.7487733164439336, 2);
  sqcRZGate(q, -1.9101160764549965, 2);
  sqcRYGate(q, -2.610743732963839, 3);
  sqcRZGate(q, -0.7888625004555675, 3);
  sqcRYGate(q, -2.3688165825940284, 4);
  sqcRZGate(q, -2.0928781094429496, 4);
  sqcRYGate(q, -0.7453864476663946, 5);
  sqcRZGate(q, -0.802315279536619, 5);
  sqcRYGate(q, 2.520454999032662, 6);
  sqcRZGate(q, 2.409773758859934, 6);
  sqcRYGate(q, 1.419208746404739, 7);
  sqcRZGate(q, -1.9586104220850622, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7752504130239712, 0);
  sqcRZGate(q, -0.24258169686482312, 0);
  sqcRYGate(q, -2.2881694854079186, 1);
  sqcRZGate(q, 0.02456961246674361, 1);
  sqcRYGate(q, -2.3827746695131373, 2);
  sqcRZGate(q, -1.6222129963859493, 2);
  sqcRYGate(q, -0.9522948780192897, 3);
  sqcRZGate(q, -0.17699324842843975, 3);
  sqcRYGate(q, 1.7528056023839929, 4);
  sqcRZGate(q, 0.7879594291049523, 4);
  sqcRYGate(q, -0.8647196221969216, 5);
  sqcRZGate(q, 1.585602669634487, 5);
  sqcRYGate(q, 2.8140628588024525, 6);
  sqcRZGate(q, 1.4447278974491677, 6);
  sqcRYGate(q, -0.7785604673424591, 7);
  sqcRZGate(q, 0.5106593220601547, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6890345561207258, 0);
  sqcRZGate(q, 0.05661894155790925, 0);
  sqcRYGate(q, -1.2502966430396878, 1);
  sqcRZGate(q, -1.0974071663559073, 1);
  sqcRYGate(q, 1.860965562559209, 2);
  sqcRZGate(q, -2.0775259014404566, 2);
  sqcRYGate(q, -2.5163153238793496, 3);
  sqcRZGate(q, -0.7057923565353098, 3);
  sqcRYGate(q, -2.010318617342685, 4);
  sqcRZGate(q, 1.4938334006834957, 4);
  sqcRYGate(q, -1.3939963353748661, 5);
  sqcRZGate(q, 1.2341249718147296, 5);
  sqcRYGate(q, -1.2236466132441155, 6);
  sqcRZGate(q, -0.9010084304960867, 6);
  sqcRYGate(q, -0.25849670247361123, 7);
  sqcRZGate(q, -0.7538859543708506, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.218156165644629, 0);
  sqcRZGate(q, -1.6302856935432077, 0);
  sqcRYGate(q, -1.1170337659724154, 1);
  sqcRZGate(q, 2.1661271481682065, 1);
  sqcRYGate(q, -1.5411237165203597, 2);
  sqcRZGate(q, 0.6774708834516582, 2);
  sqcRYGate(q, -2.2554567083779857, 3);
  sqcRZGate(q, -0.049538480507562974, 3);
  sqcRYGate(q, -1.1807608757762695, 4);
  sqcRZGate(q, -1.7875332402539443, 4);
  sqcRYGate(q, -0.27733425807190937, 5);
  sqcRZGate(q, -2.360639596262711, 5);
  sqcRYGate(q, -2.227360600119084, 6);
  sqcRZGate(q, 2.557563065863397, 6);
  sqcRYGate(q, 0.7302301599955205, 7);
  sqcRZGate(q, 1.5776800897788767, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.509816876291848, 0);
  sqcRZGate(q, -0.3881628251065213, 0);
  sqcRYGate(q, -2.94000031714331, 1);
  sqcRZGate(q, 0.9081240643159225, 1);
  sqcRYGate(q, 1.8257118303249407, 2);
  sqcRZGate(q, -0.07332482483224116, 2);
  sqcRYGate(q, -1.0873538281485482, 3);
  sqcRZGate(q, -1.6342041327313492, 3);
  sqcRYGate(q, 2.8053447599070345, 4);
  sqcRZGate(q, 2.7931149197114706, 4);
  sqcRYGate(q, -0.5885633276581352, 5);
  sqcRZGate(q, 1.6527022778953988, 5);
  sqcRYGate(q, -0.15747328828400223, 6);
  sqcRZGate(q, -0.2827096562583532, 6);
  sqcRYGate(q, 0.6727024209348134, 7);
  sqcRZGate(q, -1.1321379277626415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.69417079196847, 0);
  sqcRZGate(q, -1.5220788696608256, 0);
  sqcRYGate(q, 0.6475052974183946, 1);
  sqcRZGate(q, 0.24973952368981764, 1);
  sqcRYGate(q, -2.1121198051681223, 2);
  sqcRZGate(q, -0.08913875065874688, 2);
  sqcRYGate(q, -2.6083867534971463, 3);
  sqcRZGate(q, 2.063877984203274, 3);
  sqcRYGate(q, -1.5946937415337412, 4);
  sqcRZGate(q, -1.8680978559907488, 4);
  sqcRYGate(q, 2.228926009285156, 5);
  sqcRZGate(q, 1.2372889045562223, 5);
  sqcRYGate(q, 1.1381504521452503, 6);
  sqcRZGate(q, 0.823827223650396, 6);
  sqcRYGate(q, 2.6046221115963366, 7);
  sqcRZGate(q, 0.6112681163376278, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1834839496961724, 0);
  sqcRZGate(q, 2.859995055447322, 0);
  sqcRYGate(q, -2.024128004328735, 1);
  sqcRZGate(q, -0.7812273645010357, 1);
  sqcRYGate(q, -1.8434707475025809, 2);
  sqcRZGate(q, 1.04760393542276, 2);
  sqcRYGate(q, 0.8307616851007612, 3);
  sqcRZGate(q, 0.04507063258991994, 3);
  sqcRYGate(q, 1.2664997303234393, 4);
  sqcRZGate(q, -1.7887603551030928, 4);
  sqcRYGate(q, 1.4790728543640297, 5);
  sqcRZGate(q, 1.561595420820244, 5);
  sqcRYGate(q, 1.99041135868114, 6);
  sqcRZGate(q, -2.48364681057396, 6);
  sqcRYGate(q, 2.91147751792305, 7);
  sqcRZGate(q, 0.4899080748270661, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4758133302063217, 0);
  sqcRZGate(q, 3.128405695542197, 0);
  sqcRYGate(q, 2.5917195451508235, 1);
  sqcRZGate(q, -2.132524922254011, 1);
  sqcRYGate(q, 2.15453943168309, 2);
  sqcRZGate(q, -0.3549311754551518, 2);
  sqcRYGate(q, -1.5041155557112615, 3);
  sqcRZGate(q, 0.24911435290894016, 3);
  sqcRYGate(q, 1.6038374052550957, 4);
  sqcRZGate(q, 1.8280245730705862, 4);
  sqcRYGate(q, -0.8120868034934245, 5);
  sqcRZGate(q, 0.6773302027106691, 5);
  sqcRYGate(q, 1.9767587904309245, 6);
  sqcRZGate(q, -2.695056829179827, 6);
  sqcRYGate(q, -0.051135512244529835, 7);
  sqcRZGate(q, 0.8400129139178447, 7);

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
