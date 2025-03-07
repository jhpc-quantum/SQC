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

  sqcRYGate(q, 0.3946718162969658, 0);
  sqcRZGate(q, 0.7204520293120904, 0);
  sqcRYGate(q, 2.0065990823774946, 1);
  sqcRZGate(q, -1.2163567581568546, 1);
  sqcRYGate(q, 1.8213554994938717, 2);
  sqcRZGate(q, 2.2926692027867857, 2);
  sqcRYGate(q, -0.09363203590801739, 3);
  sqcRZGate(q, -2.2747450861679077, 3);
  sqcRYGate(q, 1.8589454205857054, 4);
  sqcRZGate(q, -1.7070012318540486, 4);
  sqcRYGate(q, -0.5899433923380144, 5);
  sqcRZGate(q, 2.6007790200985603, 5);
  sqcRYGate(q, -2.5328917821225807, 6);
  sqcRZGate(q, -2.0421460484037324, 6);
  sqcRYGate(q, 0.5837050409050963, 7);
  sqcRZGate(q, 0.11626277851815123, 7);
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
  sqcRYGate(q, -1.4118462130001097, 0);
  sqcRZGate(q, -2.0501735901091545, 0);
  sqcRYGate(q, -0.4719076455826743, 1);
  sqcRZGate(q, 2.3278251961914243, 1);
  sqcRYGate(q, 1.7122828665221557, 2);
  sqcRZGate(q, 2.0351782979354485, 2);
  sqcRYGate(q, -0.18680845889238457, 3);
  sqcRZGate(q, -2.6694316028902474, 3);
  sqcRYGate(q, 0.9387546062756433, 4);
  sqcRZGate(q, -1.0540714809567175, 4);
  sqcRYGate(q, 1.7387857087336682, 5);
  sqcRZGate(q, 0.27514458156930655, 5);
  sqcRYGate(q, 1.2959182645906013, 6);
  sqcRZGate(q, 2.5227342493048495, 6);
  sqcRYGate(q, -2.7090485340385255, 7);
  sqcRZGate(q, -1.4122551849256704, 7);
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
  sqcRYGate(q, -0.5313727793671711, 0);
  sqcRZGate(q, -1.254498585451383, 0);
  sqcRYGate(q, 1.7342394440853277, 1);
  sqcRZGate(q, -2.9736150926557423, 1);
  sqcRYGate(q, 2.644286098152026, 2);
  sqcRZGate(q, 0.3980785045937507, 2);
  sqcRYGate(q, 3.1118564779068025, 3);
  sqcRZGate(q, -0.5269601994267344, 3);
  sqcRYGate(q, 2.291586801522433, 4);
  sqcRZGate(q, 1.2088378363881376, 4);
  sqcRYGate(q, 1.4400378874012778, 5);
  sqcRZGate(q, -2.378645061639995, 5);
  sqcRYGate(q, 1.5149317698631553, 6);
  sqcRZGate(q, -0.10304017461377413, 6);
  sqcRYGate(q, -1.1976484355465047, 7);
  sqcRZGate(q, -2.3970859270453553, 7);
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
  sqcRYGate(q, -1.4790581372033547, 0);
  sqcRZGate(q, -0.5801809175019387, 0);
  sqcRYGate(q, 1.2594822327220991, 1);
  sqcRZGate(q, -0.07467934561773726, 1);
  sqcRYGate(q, 0.6119717520257919, 2);
  sqcRZGate(q, -0.9261162483068665, 2);
  sqcRYGate(q, 0.005656154843109995, 3);
  sqcRZGate(q, -2.8508060008074994, 3);
  sqcRYGate(q, 2.0171013574423706, 4);
  sqcRZGate(q, -1.1226068329417211, 4);
  sqcRYGate(q, 2.2426658926539558, 5);
  sqcRZGate(q, 1.6236071418670264, 5);
  sqcRYGate(q, -2.852107979363061, 6);
  sqcRZGate(q, -2.375793128674859, 6);
  sqcRYGate(q, -1.410642492855632, 7);
  sqcRZGate(q, -2.651714740087386, 7);
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
  sqcRYGate(q, -2.1417397018465314, 0);
  sqcRZGate(q, -1.8112228501334977, 0);
  sqcRYGate(q, -0.9663291673802049, 1);
  sqcRZGate(q, 0.5679404936111698, 1);
  sqcRYGate(q, -1.2143384519509153, 2);
  sqcRZGate(q, 2.7575228585594087, 2);
  sqcRYGate(q, 3.1262800113525087, 3);
  sqcRZGate(q, -2.552028652882408, 3);
  sqcRYGate(q, -2.2528111838182436, 4);
  sqcRZGate(q, 0.9032076435324736, 4);
  sqcRYGate(q, 1.5327969500674077, 5);
  sqcRZGate(q, 2.88513731151341, 5);
  sqcRYGate(q, -2.862340787168868, 6);
  sqcRZGate(q, 2.640321329590386, 6);
  sqcRYGate(q, -2.5171369522724745, 7);
  sqcRZGate(q, 0.1061793099325964, 7);
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
  sqcRYGate(q, -0.9992328236868486, 0);
  sqcRZGate(q, -0.7362171233940782, 0);
  sqcRYGate(q, 0.6505382253257155, 1);
  sqcRZGate(q, 0.4515077213863954, 1);
  sqcRYGate(q, 1.039678917852068, 2);
  sqcRZGate(q, -0.5601180684916375, 2);
  sqcRYGate(q, -3.0945716029001757, 3);
  sqcRZGate(q, -0.8940398317189678, 3);
  sqcRYGate(q, -0.9691369480131652, 4);
  sqcRZGate(q, 1.2253468062871917, 4);
  sqcRYGate(q, -2.0032245098983608, 5);
  sqcRZGate(q, -0.4955789658102585, 5);
  sqcRYGate(q, -2.622903491777978, 6);
  sqcRZGate(q, 2.883979582671117, 6);
  sqcRYGate(q, 0.08523544347192773, 7);
  sqcRZGate(q, 1.8468801944429982, 7);
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
  sqcRYGate(q, -2.6324958215635195, 0);
  sqcRZGate(q, 1.0242716412838266, 0);
  sqcRYGate(q, -2.0788601822632398, 1);
  sqcRZGate(q, 2.1655468170536967, 1);
  sqcRYGate(q, -1.5553038501769858, 2);
  sqcRZGate(q, 3.1183772858430863, 2);
  sqcRYGate(q, -3.082323486052942, 3);
  sqcRZGate(q, -2.0513513386607363, 3);
  sqcRYGate(q, 0.605192703599575, 4);
  sqcRZGate(q, 0.9701180470891169, 4);
  sqcRYGate(q, 1.5116016766596938, 5);
  sqcRZGate(q, 1.9665906784519311, 5);
  sqcRYGate(q, 1.0061194334517267, 6);
  sqcRZGate(q, -1.7696064847788215, 6);
  sqcRYGate(q, 1.2482132186189157, 7);
  sqcRZGate(q, 0.24914647749195068, 7);
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
  sqcRYGate(q, 0.38356110606111926, 0);
  sqcRZGate(q, -1.5149679155169107, 0);
  sqcRYGate(q, 1.8752141175438268, 1);
  sqcRZGate(q, 0.8684258102226807, 1);
  sqcRYGate(q, -2.938891078400157, 2);
  sqcRZGate(q, 1.5249568162564207, 2);
  sqcRYGate(q, -1.6150283459158656, 3);
  sqcRZGate(q, 1.548832997323121, 3);
  sqcRYGate(q, 0.17421730822386258, 4);
  sqcRZGate(q, 0.36072569095314133, 4);
  sqcRYGate(q, -1.6374272256692202, 5);
  sqcRZGate(q, 1.3280461097512777, 5);
  sqcRYGate(q, -1.0934165354136705, 6);
  sqcRZGate(q, -0.5397559580947648, 6);
  sqcRYGate(q, 0.7974741090650435, 7);
  sqcRZGate(q, -2.914850022152139, 7);
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
  sqcRYGate(q, 0.6436120961707185, 0);
  sqcRZGate(q, 0.24958456807340654, 0);
  sqcRYGate(q, -1.6075065838317397, 1);
  sqcRZGate(q, -0.1712302593011081, 1);
  sqcRYGate(q, -3.0922111310319442, 2);
  sqcRZGate(q, 0.024869977419970542, 2);
  sqcRYGate(q, 1.4066789322316209, 3);
  sqcRZGate(q, -0.3203374901506639, 3);
  sqcRYGate(q, 1.565050734865535, 4);
  sqcRZGate(q, 1.6538732476140903, 4);
  sqcRYGate(q, -0.04467002020343979, 5);
  sqcRZGate(q, 1.9502748638021998, 5);
  sqcRYGate(q, 1.6501319720922412, 6);
  sqcRZGate(q, 1.566527493047112, 6);
  sqcRYGate(q, -0.25136737330702363, 7);
  sqcRZGate(q, -1.220040748898497, 7);
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
  sqcRYGate(q, 0.21032453932046216, 0);
  sqcRZGate(q, 0.013047034204480392, 0);
  sqcRYGate(q, -2.633313320376542, 1);
  sqcRZGate(q, -1.9637446401163432, 1);
  sqcRYGate(q, 1.3164416065596865, 2);
  sqcRZGate(q, 1.6158803116467946, 2);
  sqcRYGate(q, 1.509748739092651, 3);
  sqcRZGate(q, -1.916024842079807, 3);
  sqcRYGate(q, -0.81403395759638, 4);
  sqcRZGate(q, 3.0754061607265784, 4);
  sqcRYGate(q, 0.24203321168123518, 5);
  sqcRZGate(q, 0.20019363420330197, 5);
  sqcRYGate(q, 2.0307828784814714, 6);
  sqcRZGate(q, 0.40007870058450345, 6);
  sqcRYGate(q, 1.8730404341909903, 7);
  sqcRZGate(q, 2.303903486201949, 7);
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
  sqcRYGate(q, -2.5846011653102825, 0);
  sqcRZGate(q, -3.102785337857071, 0);
  sqcRYGate(q, 2.90034773930248, 1);
  sqcRZGate(q, -1.7794218339133705, 1);
  sqcRYGate(q, 0.14783360683236602, 2);
  sqcRZGate(q, -1.4973804920243712, 2);
  sqcRYGate(q, -0.5809724217520342, 3);
  sqcRZGate(q, 0.04973111808952533, 3);
  sqcRYGate(q, -1.4153440513303526, 4);
  sqcRZGate(q, 2.980812327713494, 4);
  sqcRYGate(q, 2.804936939952102, 5);
  sqcRZGate(q, 0.2923187299362793, 5);
  sqcRYGate(q, -1.4906252298908118, 6);
  sqcRZGate(q, 2.27049120655624, 6);
  sqcRYGate(q, -3.1057100819410253, 7);
  sqcRZGate(q, -2.860600628561761, 7);
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
  sqcRYGate(q, 2.9008198905782314, 0);
  sqcRZGate(q, -0.1873775327293897, 0);
  sqcRYGate(q, -2.9428905942081633, 1);
  sqcRZGate(q, -1.5326272884761631, 1);
  sqcRYGate(q, 1.74817119209291, 2);
  sqcRZGate(q, -0.6007183480484919, 2);
  sqcRYGate(q, 2.8681663853653756, 3);
  sqcRZGate(q, -2.489469400699884, 3);
  sqcRYGate(q, 0.6241111175672921, 4);
  sqcRZGate(q, -0.6977385968053572, 4);
  sqcRYGate(q, -0.6516908791532818, 5);
  sqcRZGate(q, -1.0993631797689218, 5);
  sqcRYGate(q, 1.2064119672789264, 6);
  sqcRZGate(q, -0.5365934509259928, 6);
  sqcRYGate(q, -0.7887502404493487, 7);
  sqcRZGate(q, 2.6057831218962217, 7);
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
  sqcRYGate(q, 2.2475934871238303, 0);
  sqcRZGate(q, 2.224653387073688, 0);
  sqcRYGate(q, 1.7488458788146861, 1);
  sqcRZGate(q, 2.051044409563592, 1);
  sqcRYGate(q, 1.376140231706053, 2);
  sqcRZGate(q, -2.8599832537627905, 2);
  sqcRYGate(q, 1.2632168014469873, 3);
  sqcRZGate(q, 2.4365517052264747, 3);
  sqcRYGate(q, 0.4884771380946169, 4);
  sqcRZGate(q, 1.8105590718921671, 4);
  sqcRYGate(q, -0.43390164527059744, 5);
  sqcRZGate(q, -2.831445704996706, 5);
  sqcRYGate(q, -1.473670126076652, 6);
  sqcRZGate(q, -1.8501578272898804, 6);
  sqcRYGate(q, -2.6926419004813984, 7);
  sqcRZGate(q, 3.011376415989439, 7);
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
  sqcRYGate(q, 2.4401603942456704, 0);
  sqcRZGate(q, 1.973443653458386, 0);
  sqcRYGate(q, -3.1387175527015425, 1);
  sqcRZGate(q, -0.7367569094519713, 1);
  sqcRYGate(q, -1.9103568651583291, 2);
  sqcRZGate(q, 0.4700722653212574, 2);
  sqcRYGate(q, -1.2324817582984857, 3);
  sqcRZGate(q, 0.16346820286847927, 3);
  sqcRYGate(q, -0.06173001365384856, 4);
  sqcRZGate(q, -2.0609701574881067, 4);
  sqcRYGate(q, -2.2814528954420332, 5);
  sqcRZGate(q, -1.6219285954502753, 5);
  sqcRYGate(q, -0.6397256254265612, 6);
  sqcRZGate(q, -2.0104358920625636, 6);
  sqcRYGate(q, -1.246174810488351, 7);
  sqcRZGate(q, -2.370952340045502, 7);
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
  sqcRYGate(q, 2.685325251267057, 0);
  sqcRZGate(q, 1.2881397784284943, 0);
  sqcRYGate(q, 2.9453137294250724, 1);
  sqcRZGate(q, -1.455017695070123, 1);
  sqcRYGate(q, 1.8511161532797766, 2);
  sqcRZGate(q, 0.3808619981683101, 2);
  sqcRYGate(q, 0.09029162216982733, 3);
  sqcRZGate(q, 2.952583758975535, 3);
  sqcRYGate(q, -1.8119736020994646, 4);
  sqcRZGate(q, 1.8484772115062613, 4);
  sqcRYGate(q, -0.42228384640263256, 5);
  sqcRZGate(q, -2.7336871691844653, 5);
  sqcRYGate(q, -0.23394574014337424, 6);
  sqcRZGate(q, 2.318373449141577, 6);
  sqcRYGate(q, 2.0327350495701815, 7);
  sqcRZGate(q, -0.16252000394066318, 7);
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
  sqcRYGate(q, -0.8836759563034288, 0);
  sqcRZGate(q, 0.2667065773892041, 0);
  sqcRYGate(q, 3.008280339388774, 1);
  sqcRZGate(q, 1.6027957855389205, 1);
  sqcRYGate(q, 1.3736514740349381, 2);
  sqcRZGate(q, -0.9937737869579893, 2);
  sqcRYGate(q, 0.7095495011810972, 3);
  sqcRZGate(q, 0.5422930845110746, 3);
  sqcRYGate(q, -3.038422873435581, 4);
  sqcRZGate(q, 0.3762362488514572, 4);
  sqcRYGate(q, 0.33062774842964526, 5);
  sqcRZGate(q, -1.0657312917437007, 5);
  sqcRYGate(q, -0.8352636211823814, 6);
  sqcRZGate(q, -2.178946170620225, 6);
  sqcRYGate(q, -1.483074484078851, 7);
  sqcRZGate(q, 2.12545617633186, 7);
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
  sqcRYGate(q, -2.1546062544814726, 0);
  sqcRZGate(q, 1.636726135707355, 0);
  sqcRYGate(q, 3.0058721430179243, 1);
  sqcRZGate(q, 1.5232843973030907, 1);
  sqcRYGate(q, -0.6229964059270003, 2);
  sqcRZGate(q, -1.0999216772009115, 2);
  sqcRYGate(q, 2.33275877770365, 3);
  sqcRZGate(q, -3.038145661101242, 3);
  sqcRYGate(q, 1.1712849428830496, 4);
  sqcRZGate(q, -2.7707500763466753, 4);
  sqcRYGate(q, 0.9299892976940443, 5);
  sqcRZGate(q, -2.3286836623966067, 5);
  sqcRYGate(q, -1.1270165689692533, 6);
  sqcRZGate(q, -1.8568655100956213, 6);
  sqcRYGate(q, -1.3784474920916494, 7);
  sqcRZGate(q, -0.2949807612267748, 7);
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
  sqcRYGate(q, -2.268017357062789, 0);
  sqcRZGate(q, -2.407878760083654, 0);
  sqcRYGate(q, 2.2944262071977297, 1);
  sqcRZGate(q, 1.5131706335094348, 1);
  sqcRYGate(q, -0.3155145151809935, 2);
  sqcRZGate(q, -0.749098881391104, 2);
  sqcRYGate(q, -1.0710337344886405, 3);
  sqcRZGate(q, -0.11862037692986771, 3);
  sqcRYGate(q, 0.38444888375985004, 4);
  sqcRZGate(q, -3.0059169898651876, 4);
  sqcRYGate(q, -2.4124933242983486, 5);
  sqcRZGate(q, -2.473739084561094, 5);
  sqcRYGate(q, 1.2243053547994736, 6);
  sqcRZGate(q, 2.872849913399717, 6);
  sqcRYGate(q, -0.6902451777370384, 7);
  sqcRZGate(q, 0.7524796924462986, 7);
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
  sqcRYGate(q, -1.8910765580698756, 0);
  sqcRZGate(q, 2.621465541391697, 0);
  sqcRYGate(q, 0.09820822587032678, 1);
  sqcRZGate(q, 2.5101834244681585, 1);
  sqcRYGate(q, -1.2890835956345033, 2);
  sqcRZGate(q, 1.728786886309297, 2);
  sqcRYGate(q, 3.096160183441166, 3);
  sqcRZGate(q, 2.92385266408513, 3);
  sqcRYGate(q, -0.8097939301335115, 4);
  sqcRZGate(q, 1.6932396832234404, 4);
  sqcRYGate(q, -2.9647866527543854, 5);
  sqcRZGate(q, -2.351435728579317, 5);
  sqcRYGate(q, -0.7189320809999307, 6);
  sqcRZGate(q, 0.5006649037486882, 6);
  sqcRYGate(q, 1.4242414517834232, 7);
  sqcRZGate(q, -1.9957845870824291, 7);
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
  sqcRYGate(q, 2.309757249917353, 0);
  sqcRZGate(q, -0.9297164895575332, 0);
  sqcRYGate(q, -1.9296818601335393, 1);
  sqcRZGate(q, 1.8197236370442817, 1);
  sqcRYGate(q, 1.5890380284516832, 2);
  sqcRZGate(q, 3.1086187564470524, 2);
  sqcRYGate(q, 1.3485015087005003, 3);
  sqcRZGate(q, 1.066265701127378, 3);
  sqcRYGate(q, 2.803964993167628, 4);
  sqcRZGate(q, -2.725444440105911, 4);
  sqcRYGate(q, -1.5759921911646833, 5);
  sqcRZGate(q, 0.9728628535081728, 5);
  sqcRYGate(q, 2.9259533430891156, 6);
  sqcRZGate(q, -1.0462364193687312, 6);
  sqcRYGate(q, 1.1060434733926736, 7);
  sqcRZGate(q, 2.8845656289740504, 7);
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
  sqcRYGate(q, -1.2829506860894715, 0);
  sqcRZGate(q, -1.610260315268671, 0);
  sqcRYGate(q, -1.9495281041114525, 1);
  sqcRZGate(q, -1.3628056295104767, 1);
  sqcRYGate(q, 0.885438911202399, 2);
  sqcRZGate(q, 1.021121824202016, 2);
  sqcRYGate(q, 3.1147777202636275, 3);
  sqcRZGate(q, -2.0224607272449795, 3);
  sqcRYGate(q, -2.854206883458837, 4);
  sqcRZGate(q, -2.9718343886410348, 4);
  sqcRYGate(q, 1.1527978472730107, 5);
  sqcRZGate(q, 0.8825148870059438, 5);
  sqcRYGate(q, 0.7708600926750738, 6);
  sqcRZGate(q, -1.9687914337405361, 6);
  sqcRYGate(q, 0.6536297151829269, 7);
  sqcRZGate(q, 0.43938594575199397, 7);
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
  sqcRYGate(q, 1.539764715246629, 0);
  sqcRZGate(q, 1.9885644004595182, 0);
  sqcRYGate(q, 0.5365279295248744, 1);
  sqcRZGate(q, 2.807842304565294, 1);
  sqcRYGate(q, 1.5864476278208688, 2);
  sqcRZGate(q, 1.044304536074944, 2);
  sqcRYGate(q, -0.7589765890717416, 3);
  sqcRZGate(q, -0.3775563834024699, 3);
  sqcRYGate(q, 1.5202846651706032, 4);
  sqcRZGate(q, 0.8832872030098653, 4);
  sqcRYGate(q, 0.8875192952440712, 5);
  sqcRZGate(q, 2.468571461230126, 5);
  sqcRYGate(q, -1.0006486861369162, 6);
  sqcRZGate(q, -0.597952170353337, 6);
  sqcRYGate(q, -2.1376602585492135, 7);
  sqcRZGate(q, -2.958724607167183, 7);

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
