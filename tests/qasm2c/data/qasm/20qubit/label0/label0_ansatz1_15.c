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

  sqcRYGate(q, -3.126914579340938, 0);
  sqcRZGate(q, -0.8944496342636911, 0);
  sqcRYGate(q, -0.8309537298486163, 1);
  sqcRZGate(q, -0.11082902861321377, 1);
  sqcRYGate(q, -3.1346621496153713, 2);
  sqcRZGate(q, 1.8347149856624716, 2);
  sqcRYGate(q, -1.0256732632115684, 3);
  sqcRZGate(q, 1.15233707385575, 3);
  sqcRYGate(q, -0.0020025193733052425, 4);
  sqcRZGate(q, 0.450868713851671, 4);
  sqcRYGate(q, -1.6957348248588637, 5);
  sqcRZGate(q, -1.0995107341137151, 5);
  sqcRYGate(q, 0.00017430351267400113, 6);
  sqcRZGate(q, -0.6593560360971936, 6);
  sqcRYGate(q, -1.9562865885741594, 7);
  sqcRZGate(q, -0.6702035189236826, 7);
  sqcRYGate(q, 2.8099647257409814, 8);
  sqcRZGate(q, 2.684784349545293, 8);
  sqcRYGate(q, 1.7875195612277623, 9);
  sqcRZGate(q, -1.3837455787250676, 9);
  sqcRYGate(q, -3.0196803310214317, 10);
  sqcRZGate(q, 2.4739921549645674, 10);
  sqcRYGate(q, 0.14485534806820866, 11);
  sqcRZGate(q, 1.8476536521680105, 11);
  sqcRYGate(q, 2.8926602732975337, 12);
  sqcRZGate(q, 3.1330380335293246, 12);
  sqcRYGate(q, -0.0073894507900485245, 13);
  sqcRZGate(q, -2.572286268514505, 13);
  sqcRYGate(q, -0.241260761907081, 14);
  sqcRZGate(q, -0.5865825935014201, 14);
  sqcRYGate(q, 3.14083740665341, 15);
  sqcRZGate(q, -0.788793893096287, 15);
  sqcRYGate(q, 2.7251470350124927, 16);
  sqcRZGate(q, 0.007059106067202657, 16);
  sqcRYGate(q, -0.002991078164189531, 17);
  sqcRZGate(q, -2.3114579453801682, 17);
  sqcRYGate(q, -0.2224097485016658, 18);
  sqcRZGate(q, 0.08548961721115414, 18);
  sqcRYGate(q, -2.6112685644743383, 19);
  sqcRZGate(q, -1.9359592212833538, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.1380389965729383, 0);
  sqcRZGate(q, 0.21776571239330725, 0);
  sqcRYGate(q, -3.062650907808445, 1);
  sqcRZGate(q, -1.3925992855520166, 1);
  sqcRYGate(q, -0.0033221293969574357, 2);
  sqcRZGate(q, 1.8783404733130649, 2);
  sqcRYGate(q, -0.6303119744524667, 3);
  sqcRZGate(q, 2.6140520343066322, 3);
  sqcRYGate(q, -3.136045832023258, 4);
  sqcRZGate(q, 1.215948875033269, 4);
  sqcRYGate(q, 0.19236026326610833, 5);
  sqcRZGate(q, -1.6527270914744356, 5);
  sqcRYGate(q, -0.014312712298547093, 6);
  sqcRZGate(q, -2.565537133791472, 6);
  sqcRYGate(q, -0.7685281458956438, 7);
  sqcRZGate(q, -2.6327983682994263, 7);
  sqcRYGate(q, -0.45766502401782644, 8);
  sqcRZGate(q, 1.9289526831306518, 8);
  sqcRYGate(q, -2.70279705588346, 9);
  sqcRZGate(q, -0.8705731897191716, 9);
  sqcRYGate(q, 2.6132706666737104, 10);
  sqcRZGate(q, 2.6880527937031804, 10);
  sqcRYGate(q, 1.2966517056327613, 11);
  sqcRZGate(q, 0.007849534250823353, 11);
  sqcRYGate(q, -0.9033513292391446, 12);
  sqcRZGate(q, -1.876739858952332, 12);
  sqcRYGate(q, -0.11710718840021084, 13);
  sqcRZGate(q, -0.7163129330611779, 13);
  sqcRYGate(q, 0.41502161817526506, 14);
  sqcRZGate(q, -0.7814762289417706, 14);
  sqcRYGate(q, 2.981295639340767, 15);
  sqcRZGate(q, 2.776371842919403, 15);
  sqcRYGate(q, 2.7281520581849894, 16);
  sqcRZGate(q, -2.3155074932562125, 16);
  sqcRYGate(q, 0.4492462452854618, 17);
  sqcRZGate(q, 1.1350239839466794, 17);
  sqcRYGate(q, 2.793029706967516, 18);
  sqcRZGate(q, -1.6366973998955563, 18);
  sqcRYGate(q, -0.6761496919766201, 19);
  sqcRZGate(q, -2.2813308191120623, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.081197143850952, 0);
  sqcRZGate(q, 0.7325693653989792, 0);
  sqcRYGate(q, 1.9355866563073905, 1);
  sqcRZGate(q, 1.055046053106607, 1);
  sqcRYGate(q, -7.09361791675061e-05, 2);
  sqcRZGate(q, 0.6286803000034102, 2);
  sqcRYGate(q, -0.9229144730140382, 3);
  sqcRZGate(q, -2.7203141404962907, 3);
  sqcRYGate(q, -2.2384639295049533, 4);
  sqcRZGate(q, -0.8189373760641114, 4);
  sqcRYGate(q, -1.3633076668861086, 5);
  sqcRZGate(q, -2.1511477133442134, 5);
  sqcRYGate(q, -3.120956289932826, 6);
  sqcRZGate(q, -1.2166249558183884, 6);
  sqcRYGate(q, 1.8706701826983263, 7);
  sqcRZGate(q, -2.0460400165420705, 7);
  sqcRYGate(q, 0.7693943598525994, 8);
  sqcRZGate(q, -1.1200478079934175, 8);
  sqcRYGate(q, -3.0830573955354503, 9);
  sqcRZGate(q, 0.1746825964390026, 9);
  sqcRYGate(q, 3.13155010591602, 10);
  sqcRZGate(q, -0.4406158117822684, 10);
  sqcRYGate(q, 1.1237635437711582, 11);
  sqcRZGate(q, 0.007490222664874834, 11);
  sqcRYGate(q, 0.028012794835448492, 12);
  sqcRZGate(q, -3.1357993738251255, 12);
  sqcRYGate(q, 0.04450366196818046, 13);
  sqcRZGate(q, -3.008019474164534, 13);
  sqcRYGate(q, -0.23863859318447567, 14);
  sqcRZGate(q, 0.8276915943641328, 14);
  sqcRYGate(q, 0.185312770494226, 15);
  sqcRZGate(q, 0.7831155841957872, 15);
  sqcRYGate(q, -3.138655367490511, 16);
  sqcRZGate(q, 2.0129741210518333, 16);
  sqcRYGate(q, -1.903533068589708, 17);
  sqcRZGate(q, 2.9843114688899632, 17);
  sqcRYGate(q, 1.5077608325953422, 18);
  sqcRZGate(q, 2.845807886878206, 18);
  sqcRYGate(q, 0.058571699868928746, 19);
  sqcRZGate(q, 1.6005727911455674, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.193424513464185, 0);
  sqcRZGate(q, 1.5226316493697127, 0);
  sqcRYGate(q, 1.0782215439226448, 1);
  sqcRZGate(q, -1.5857053889664208, 1);
  sqcRYGate(q, -0.3589743351598143, 2);
  sqcRZGate(q, 0.11742771565513975, 2);
  sqcRYGate(q, 3.12182938400778, 3);
  sqcRZGate(q, 0.0981505369361182, 3);
  sqcRYGate(q, 3.126271285331807, 4);
  sqcRZGate(q, 2.5117040846702463, 4);
  sqcRYGate(q, 3.055712968809685, 5);
  sqcRZGate(q, 1.3531164216813814, 5);
  sqcRYGate(q, 2.9549504579247787, 6);
  sqcRZGate(q, -1.2861482925313616, 6);
  sqcRYGate(q, 2.789886795316483, 7);
  sqcRZGate(q, -2.4516181814577815, 7);
  sqcRYGate(q, 2.9012778548995457, 8);
  sqcRZGate(q, 1.4650152471639843, 8);
  sqcRYGate(q, -2.3676070055657807, 9);
  sqcRZGate(q, 0.8990546939677568, 9);
  sqcRYGate(q, 0.4946444392917471, 10);
  sqcRZGate(q, 0.4742516371412062, 10);
  sqcRYGate(q, 1.182568712315417, 11);
  sqcRZGate(q, 2.3619881089768553, 11);
  sqcRYGate(q, -0.7492923687012593, 12);
  sqcRZGate(q, 1.8742814194444346, 12);
  sqcRYGate(q, 2.976525509688294, 13);
  sqcRZGate(q, 1.9725492734967593, 13);
  sqcRYGate(q, -0.21450791067386712, 14);
  sqcRZGate(q, -1.7383905387029321, 14);
  sqcRYGate(q, -1.9339302069957127, 15);
  sqcRZGate(q, -2.808223577536957, 15);
  sqcRYGate(q, 0.00027842903279218234, 16);
  sqcRZGate(q, -2.115128134871703, 16);
  sqcRYGate(q, -0.23170003047116872, 17);
  sqcRZGate(q, -2.4848003193965424, 17);
  sqcRYGate(q, -2.6549336965488606, 18);
  sqcRZGate(q, 2.9647348202489856, 18);
  sqcRYGate(q, -0.6973712917349516, 19);
  sqcRZGate(q, 1.4238902695702524, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.430249446023493, 0);
  sqcRZGate(q, -0.947194245437581, 0);
  sqcRYGate(q, -3.126992371923596, 1);
  sqcRZGate(q, -0.42495344039684113, 1);
  sqcRYGate(q, 3.0765625609239846, 2);
  sqcRZGate(q, -1.2340425398098738, 2);
  sqcRYGate(q, -1.4186051386272247, 3);
  sqcRZGate(q, 0.4167301048062102, 3);
  sqcRYGate(q, -2.298534121636597, 4);
  sqcRZGate(q, 1.8099501331760992, 4);
  sqcRYGate(q, 3.116050261849923, 5);
  sqcRZGate(q, 2.441017072521494, 5);
  sqcRYGate(q, 0.7101454251371261, 6);
  sqcRZGate(q, 2.5471862739223865, 6);
  sqcRYGate(q, -2.8766464368581675, 7);
  sqcRZGate(q, -2.53931820827666, 7);
  sqcRYGate(q, 0.8003175843442487, 8);
  sqcRZGate(q, -0.28031196434428024, 8);
  sqcRYGate(q, 0.005781736500067857, 9);
  sqcRZGate(q, -1.0686434288621562, 9);
  sqcRYGate(q, 3.0801916071372095, 10);
  sqcRZGate(q, 0.6297815807039785, 10);
  sqcRYGate(q, 0.20189768152236692, 11);
  sqcRZGate(q, -0.9737315609178526, 11);
  sqcRYGate(q, 0.8165018373475895, 12);
  sqcRZGate(q, -2.015120844793998, 12);
  sqcRYGate(q, 0.6251431410093168, 13);
  sqcRZGate(q, 2.8842404598501883, 13);
  sqcRYGate(q, -3.0876479312114924, 14);
  sqcRZGate(q, 0.39183386555150274, 14);
  sqcRYGate(q, -2.879173463361393, 15);
  sqcRZGate(q, 0.7533808668297004, 15);
  sqcRYGate(q, 2.2068668473106445, 16);
  sqcRZGate(q, 0.6409323733766863, 16);
  sqcRYGate(q, -3.0932109003047192, 17);
  sqcRZGate(q, -0.16620493226779764, 17);
  sqcRYGate(q, -0.19034061532833582, 18);
  sqcRZGate(q, 2.5332921998140825, 18);
  sqcRYGate(q, -1.4477399590412092, 19);
  sqcRZGate(q, 1.2916450749326134, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.7170918059426832, 0);
  sqcRZGate(q, -1.7108296183589717, 0);
  sqcRYGate(q, -2.525374361478093, 1);
  sqcRZGate(q, -2.4482342827896315, 1);
  sqcRYGate(q, -0.31289414461847315, 2);
  sqcRZGate(q, -0.042394345573060654, 2);
  sqcRYGate(q, 2.9917773225900204, 3);
  sqcRZGate(q, -0.8085443104660461, 3);
  sqcRYGate(q, 0.00861508306430192, 4);
  sqcRZGate(q, 2.618740428385028, 4);
  sqcRYGate(q, 2.4496410244951594, 5);
  sqcRZGate(q, -0.4699887605197977, 5);
  sqcRYGate(q, -3.105359928825003, 6);
  sqcRZGate(q, -1.175916250303698, 6);
  sqcRYGate(q, 0.18491949392948115, 7);
  sqcRZGate(q, 0.7489091438343869, 7);
  sqcRYGate(q, -0.4834504421580221, 8);
  sqcRZGate(q, 2.667421411943419, 8);
  sqcRYGate(q, 1.4209357200625066, 9);
  sqcRZGate(q, -2.3424461099378053, 9);
  sqcRYGate(q, -1.0400519094318916, 10);
  sqcRZGate(q, -1.8485532337019048, 10);
  sqcRYGate(q, -2.5139688481286435, 11);
  sqcRZGate(q, 0.6767430274342258, 11);
  sqcRYGate(q, -2.792610157074894, 12);
  sqcRZGate(q, -0.8044704348248101, 12);
  sqcRYGate(q, -0.7790607946429278, 13);
  sqcRZGate(q, 0.07873551133835388, 13);
  sqcRYGate(q, 2.6612415961237406, 14);
  sqcRZGate(q, -0.5442637112187836, 14);
  sqcRYGate(q, 0.0007485090344864987, 15);
  sqcRZGate(q, 2.127903388878071, 15);
  sqcRYGate(q, 3.139583669638733, 16);
  sqcRZGate(q, -2.668508354176246, 16);
  sqcRYGate(q, 0.7080588646041146, 17);
  sqcRZGate(q, 1.1528488495228693, 17);
  sqcRYGate(q, -2.6950528218355285, 18);
  sqcRZGate(q, -1.3431749525786305, 18);
  sqcRYGate(q, -0.3904253780608631, 19);
  sqcRZGate(q, 2.001351473967815, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.000281735155948, 0);
  sqcRZGate(q, 1.6743913449788195, 0);
  sqcRYGate(q, 1.2010096236370678, 1);
  sqcRZGate(q, 2.8500213896506277, 1);
  sqcRYGate(q, -2.8637806429723573, 2);
  sqcRZGate(q, -2.4199126760424146, 2);
  sqcRYGate(q, -2.95414725375952, 3);
  sqcRZGate(q, -0.8844415345932612, 3);
  sqcRYGate(q, 0.27443858599750415, 4);
  sqcRZGate(q, 0.6175721971754289, 4);
  sqcRYGate(q, -3.0155505507194955, 5);
  sqcRZGate(q, -3.1297314587944567, 5);
  sqcRYGate(q, -1.9823823269867298, 6);
  sqcRZGate(q, 3.013577977112649, 6);
  sqcRYGate(q, 0.4253727384459145, 7);
  sqcRZGate(q, -2.8107983767746187, 7);
  sqcRYGate(q, 1.1760600576705507, 8);
  sqcRZGate(q, 0.4871831105251886, 8);
  sqcRYGate(q, -3.1106943167936, 9);
  sqcRZGate(q, 3.1227261212476196, 9);
  sqcRYGate(q, 0.5437993533505834, 10);
  sqcRZGate(q, 1.5780312723541012, 10);
  sqcRYGate(q, 1.7646658572249472, 11);
  sqcRZGate(q, -0.7174273804208597, 11);
  sqcRYGate(q, 2.3326438258741233, 12);
  sqcRZGate(q, 0.29892091227747747, 12);
  sqcRYGate(q, -1.4427337976057384, 13);
  sqcRZGate(q, -0.3365897395173976, 13);
  sqcRYGate(q, -2.6418060895876803, 14);
  sqcRZGate(q, -0.19642367250303086, 14);
  sqcRYGate(q, 2.9611454017133574, 15);
  sqcRZGate(q, -2.5304501213617216, 15);
  sqcRYGate(q, 0.33682322314154245, 16);
  sqcRZGate(q, -0.9673892006073332, 16);
  sqcRYGate(q, 1.731702246166532, 17);
  sqcRZGate(q, -2.9974143731002214, 17);
  sqcRYGate(q, -1.780228007372239, 18);
  sqcRZGate(q, 0.8883340925160237, 18);
  sqcRYGate(q, 2.7292005336816625, 19);
  sqcRZGate(q, -2.2874696852112013, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.7910751215014064, 0);
  sqcRZGate(q, -1.5458871015351379, 0);
  sqcRYGate(q, 3.1387353952211297, 1);
  sqcRZGate(q, -0.12160413553344698, 1);
  sqcRYGate(q, -0.007906511550856088, 2);
  sqcRZGate(q, 2.0590809533098993, 2);
  sqcRYGate(q, 2.4042561162931086, 3);
  sqcRZGate(q, 0.7240154038391243, 3);
  sqcRYGate(q, -3.1383303421635205, 4);
  sqcRZGate(q, -1.7427260768241641, 4);
  sqcRYGate(q, 0.17794675542740193, 5);
  sqcRZGate(q, -0.1797095313505368, 5);
  sqcRYGate(q, 2.38827446253337, 6);
  sqcRZGate(q, -1.7879161219225899, 6);
  sqcRYGate(q, 3.129438322615488, 7);
  sqcRZGate(q, 2.338496260685191, 7);
  sqcRYGate(q, -0.33267349166104554, 8);
  sqcRZGate(q, 0.3504329135675422, 8);
  sqcRYGate(q, -2.642952759619543, 9);
  sqcRZGate(q, 0.8400273464378321, 9);
  sqcRYGate(q, 0.21484998161601102, 10);
  sqcRZGate(q, 2.2595851896885373, 10);
  sqcRYGate(q, -0.12887600724566717, 11);
  sqcRZGate(q, -2.214950144114662, 11);
  sqcRYGate(q, -0.23345715809177658, 12);
  sqcRZGate(q, -1.3389051784889983, 12);
  sqcRYGate(q, -2.9920238932057313, 13);
  sqcRZGate(q, 2.3741800459802582, 13);
  sqcRYGate(q, -3.0782679535398545, 14);
  sqcRZGate(q, -0.37293465656187763, 14);
  sqcRYGate(q, -3.1410035365593183, 15);
  sqcRZGate(q, -0.8193686079774288, 15);
  sqcRYGate(q, -0.0005236592490467373, 16);
  sqcRZGate(q, 0.6984961797123174, 16);
  sqcRYGate(q, -1.2931282569249865, 17);
  sqcRZGate(q, -0.6216240253677164, 17);
  sqcRYGate(q, -1.275034701813966, 18);
  sqcRZGate(q, -0.4521713823881503, 18);
  sqcRYGate(q, 1.959800304182692, 19);
  sqcRZGate(q, 0.5172891259024434, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.8268111466186427, 0);
  sqcRZGate(q, -1.5732231073310592, 0);
  sqcRYGate(q, 1.2549423025190518, 1);
  sqcRZGate(q, -2.160062237497085, 1);
  sqcRYGate(q, 2.0188121493768243, 2);
  sqcRZGate(q, 3.0185264837358674, 2);
  sqcRYGate(q, -3.060234321520763, 3);
  sqcRZGate(q, 0.7948377040932753, 3);
  sqcRYGate(q, 0.8818945565499038, 4);
  sqcRZGate(q, 2.649340999275104, 4);
  sqcRYGate(q, -1.3450446423023676, 5);
  sqcRZGate(q, -1.1505104101844061, 5);
  sqcRYGate(q, 2.019002851856219, 6);
  sqcRZGate(q, 0.6530782489331309, 6);
  sqcRYGate(q, 2.1236288656903417, 7);
  sqcRZGate(q, -1.4520825246352056, 7);
  sqcRYGate(q, -1.638694532018819, 8);
  sqcRZGate(q, 0.011811679588849523, 8);
  sqcRYGate(q, -0.26398190089978907, 9);
  sqcRZGate(q, 1.2059075836237025, 9);
  sqcRYGate(q, -0.08317236300721781, 10);
  sqcRZGate(q, -2.292093193493876, 10);
  sqcRYGate(q, 1.781278096121724, 11);
  sqcRZGate(q, 2.704584120317576, 11);
  sqcRYGate(q, -0.8372270247602103, 12);
  sqcRZGate(q, 2.6687943720477234, 12);
  sqcRYGate(q, -2.8667970598115886, 13);
  sqcRZGate(q, -1.157545442201125, 13);
  sqcRYGate(q, -0.371150748356901, 14);
  sqcRZGate(q, -2.1813169954823923, 14);
  sqcRYGate(q, 0.09956680460014768, 15);
  sqcRZGate(q, -2.572296853884878, 15);
  sqcRYGate(q, 0.893219745244105, 16);
  sqcRZGate(q, -0.9769122995037323, 16);
  sqcRYGate(q, -1.5374224508098155, 17);
  sqcRZGate(q, -0.15083445058823927, 17);
  sqcRYGate(q, -1.4345107150313259, 18);
  sqcRZGate(q, 0.5920091314728487, 18);
  sqcRYGate(q, 1.7353221210601206, 19);
  sqcRZGate(q, 0.5372327975931652, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.079933057912701, 0);
  sqcRZGate(q, -3.134186651037628, 0);
  sqcRYGate(q, 0.19142815843920263, 1);
  sqcRZGate(q, 2.6292252634868682, 1);
  sqcRYGate(q, 0.015972033245847634, 2);
  sqcRZGate(q, 2.812547283744135, 2);
  sqcRYGate(q, 0.16993110664772718, 3);
  sqcRZGate(q, 0.10934084451694216, 3);
  sqcRYGate(q, 0.19858128521468524, 4);
  sqcRZGate(q, -0.03065399219445375, 4);
  sqcRYGate(q, 0.014695508140351414, 5);
  sqcRZGate(q, -0.8209586540495923, 5);
  sqcRYGate(q, -3.0407323827307056, 6);
  sqcRZGate(q, -0.22861500169680216, 6);
  sqcRYGate(q, 3.10679886484923, 7);
  sqcRZGate(q, 1.1165397217156219, 7);
  sqcRYGate(q, -1.611974929036627, 8);
  sqcRZGate(q, 1.3603910027508754, 8);
  sqcRYGate(q, 2.6467073033128177, 9);
  sqcRZGate(q, -2.158958661272428, 9);
  sqcRYGate(q, 1.0321483105384734, 10);
  sqcRZGate(q, 0.11071619448497039, 10);
  sqcRYGate(q, -0.04594605305929026, 11);
  sqcRZGate(q, -0.8817798609219443, 11);
  sqcRYGate(q, 3.0458116125089507, 12);
  sqcRZGate(q, 2.1902812120388524, 12);
  sqcRYGate(q, -2.827791968355031, 13);
  sqcRZGate(q, 2.4856096310732605, 13);
  sqcRYGate(q, -0.5293356713010358, 14);
  sqcRZGate(q, 2.459908091882641, 14);
  sqcRYGate(q, -1.8143828902700079, 15);
  sqcRZGate(q, -3.141328268250269, 15);
  sqcRYGate(q, -3.1413481740765987, 16);
  sqcRZGate(q, 0.6843310329680925, 16);
  sqcRYGate(q, -1.6293539227928489, 17);
  sqcRZGate(q, 0.5305761543837589, 17);
  sqcRYGate(q, -2.725823873155465, 18);
  sqcRZGate(q, -0.47684085467588355, 18);
  sqcRYGate(q, -2.2580289579069497, 19);
  sqcRZGate(q, 0.8012390221213503, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.2235008542310843, 0);
  sqcRZGate(q, -3.1387897829094165, 0);
  sqcRYGate(q, -3.111638765443551, 1);
  sqcRZGate(q, -2.4077919692570102, 1);
  sqcRYGate(q, -1.9253112915780415, 2);
  sqcRZGate(q, -0.5657113430105367, 2);
  sqcRYGate(q, -1.4832954102653542, 3);
  sqcRZGate(q, 1.69723465500952, 3);
  sqcRYGate(q, -1.5017161572533384, 4);
  sqcRZGate(q, -2.0197806889439605, 4);
  sqcRYGate(q, 0.13983760133785075, 5);
  sqcRZGate(q, 1.8416448931131424, 5);
  sqcRYGate(q, -1.3572055630814335, 6);
  sqcRZGate(q, 2.7511823574906273, 6);
  sqcRYGate(q, -2.5407320792605463, 7);
  sqcRZGate(q, -0.0815566478887133, 7);
  sqcRYGate(q, -0.15765667651067036, 8);
  sqcRZGate(q, -1.3758487662593955, 8);
  sqcRYGate(q, -3.135717465577823, 9);
  sqcRZGate(q, 2.6692330842224057, 9);
  sqcRYGate(q, -1.2920457362809659, 10);
  sqcRZGate(q, -2.1527139345590984, 10);
  sqcRYGate(q, 0.7979206338120428, 11);
  sqcRZGate(q, -1.2976252478732384, 11);
  sqcRYGate(q, 1.7377119604478237, 12);
  sqcRZGate(q, 2.4152563883575073, 12);
  sqcRYGate(q, 1.002194882020326, 13);
  sqcRZGate(q, -2.780382175893269, 13);
  sqcRYGate(q, 0.00042351390965085354, 14);
  sqcRZGate(q, -1.1671603083169229, 14);
  sqcRYGate(q, -2.194490402794571, 15);
  sqcRZGate(q, 0.0010192119589396142, 15);
  sqcRYGate(q, -3.1370771266911794, 16);
  sqcRZGate(q, 2.120612102047488, 16);
  sqcRYGate(q, 2.8653761932312793, 17);
  sqcRZGate(q, 0.5428467511866569, 17);
  sqcRYGate(q, -1.7787689525091441, 18);
  sqcRZGate(q, -2.5247543596025355, 18);
  sqcRYGate(q, -1.3392498146804601, 19);
  sqcRZGate(q, -0.10670524394646373, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.2987061483306017, 0);
  sqcRZGate(q, -0.5169125730018601, 0);
  sqcRYGate(q, 3.10129003131468, 1);
  sqcRZGate(q, 0.45169442933902776, 1);
  sqcRYGate(q, -3.1146361700747067, 2);
  sqcRZGate(q, 2.640103967098062, 2);
  sqcRYGate(q, 0.8877948068237743, 3);
  sqcRZGate(q, -0.4390648849461087, 3);
  sqcRYGate(q, 0.5109734078585468, 4);
  sqcRZGate(q, 1.9016695120323233, 4);
  sqcRYGate(q, -3.0696597233746896, 5);
  sqcRZGate(q, -2.7704838500990427, 5);
  sqcRYGate(q, 3.1251146212948617, 6);
  sqcRZGate(q, -2.646508768744027, 6);
  sqcRYGate(q, 3.0905110217394713, 7);
  sqcRZGate(q, -0.3200012929418791, 7);
  sqcRYGate(q, 1.1602926952075983, 8);
  sqcRZGate(q, 0.2557836748036316, 8);
  sqcRYGate(q, 0.0971401036750983, 9);
  sqcRZGate(q, -2.165617865568526, 9);
  sqcRYGate(q, -0.17135872289406645, 10);
  sqcRZGate(q, 2.304471881672337, 10);
  sqcRYGate(q, -3.0842035975145143, 11);
  sqcRZGate(q, 1.9688747637517532, 11);
  sqcRYGate(q, -3.1252290914233476, 12);
  sqcRZGate(q, 0.9999753995324445, 12);
  sqcRYGate(q, 2.840290165311776, 13);
  sqcRZGate(q, 2.043356541249783, 13);
  sqcRYGate(q, 1.9929769667110901, 14);
  sqcRZGate(q, -2.5592841667089568, 14);
  sqcRYGate(q, -1.318369420821475, 15);
  sqcRZGate(q, 2.5154528622056156, 15);
  sqcRYGate(q, 3.1410381381994994, 16);
  sqcRZGate(q, -1.9947203284748545, 16);
  sqcRYGate(q, 1.9099886995907915, 17);
  sqcRZGate(q, 2.787609793814769, 17);
  sqcRYGate(q, -2.0280353817804735, 18);
  sqcRZGate(q, -1.0479668393467563, 18);
  sqcRYGate(q, 1.097343280802237, 19);
  sqcRZGate(q, 1.9604995981192406, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.680603413828825, 0);
  sqcRZGate(q, 1.437865909708228, 0);
  sqcRYGate(q, 3.007110745019877, 1);
  sqcRZGate(q, 0.6097059919797241, 1);
  sqcRYGate(q, 3.0925031069354882, 2);
  sqcRZGate(q, 1.4832549225156466, 2);
  sqcRYGate(q, -0.32306952080274454, 3);
  sqcRZGate(q, 0.1371973863042948, 3);
  sqcRYGate(q, -3.123424252904853, 4);
  sqcRZGate(q, 2.439317379782573, 4);
  sqcRYGate(q, -0.09111611765351668, 5);
  sqcRZGate(q, -1.1984805161073495, 5);
  sqcRYGate(q, -2.8222701479310808, 6);
  sqcRZGate(q, -2.083164551801352, 6);
  sqcRYGate(q, 1.0383734820214263, 7);
  sqcRZGate(q, 0.4971543214640156, 7);
  sqcRYGate(q, 1.4995945801849215, 8);
  sqcRZGate(q, 0.3687743775484673, 8);
  sqcRYGate(q, 3.1375909133218642, 9);
  sqcRZGate(q, 2.1410104966346175, 9);
  sqcRYGate(q, -0.7095251643483484, 10);
  sqcRZGate(q, 3.0660022416245694, 10);
  sqcRYGate(q, 2.3724660694511734, 11);
  sqcRZGate(q, 2.5076542156541515, 11);
  sqcRYGate(q, -0.0929551679091275, 12);
  sqcRZGate(q, -0.1740992346462988, 12);
  sqcRYGate(q, -2.875653820980029, 13);
  sqcRZGate(q, 0.5717015318836997, 13);
  sqcRYGate(q, 1.8720948563109212, 14);
  sqcRZGate(q, 1.2148351349116064, 14);
  sqcRYGate(q, -2.494688982149555, 15);
  sqcRZGate(q, 0.2600176644763863, 15);
  sqcRYGate(q, 0.8473472959865047, 16);
  sqcRZGate(q, 1.1241216975703605, 16);
  sqcRYGate(q, 0.8377435905900699, 17);
  sqcRZGate(q, -2.5377262141025096, 17);
  sqcRYGate(q, -2.701073280951181, 18);
  sqcRZGate(q, 2.6274000958538952, 18);
  sqcRYGate(q, -0.3620537536334281, 19);
  sqcRZGate(q, 2.7355432972137206, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.5867862814268205, 0);
  sqcRZGate(q, 2.9738728260595404, 0);
  sqcRYGate(q, -0.22759479817105444, 1);
  sqcRZGate(q, 0.029333112551510613, 1);
  sqcRYGate(q, 3.0370628336367873, 2);
  sqcRZGate(q, 2.654251297168533, 2);
  sqcRYGate(q, -0.8977718922273404, 3);
  sqcRZGate(q, 1.9501394733566073, 3);
  sqcRYGate(q, 2.9934371378013815, 4);
  sqcRZGate(q, 0.7262298508421112, 4);
  sqcRYGate(q, -3.056973684998449, 5);
  sqcRZGate(q, -1.983567670844286, 5);
  sqcRYGate(q, -0.7120212982884794, 6);
  sqcRZGate(q, -0.06775319773420475, 6);
  sqcRYGate(q, 0.329457949279103, 7);
  sqcRZGate(q, 0.3920147084165947, 7);
  sqcRYGate(q, -0.7019786271910355, 8);
  sqcRZGate(q, 1.032849627621295, 8);
  sqcRYGate(q, 3.0163174943807696, 9);
  sqcRZGate(q, -2.6182428590505915, 9);
  sqcRYGate(q, -1.2445014974725321, 10);
  sqcRZGate(q, -0.4108122610110003, 10);
  sqcRYGate(q, 3.100834155679857, 11);
  sqcRZGate(q, -0.24669081206189022, 11);
  sqcRYGate(q, 0.03264895298749545, 12);
  sqcRZGate(q, -2.95036347296305, 12);
  sqcRYGate(q, -2.5901687450594966, 13);
  sqcRZGate(q, 0.15716160596076606, 13);
  sqcRYGate(q, -0.2446167196674578, 14);
  sqcRZGate(q, -1.3162045771539415, 14);
  sqcRYGate(q, -0.0012474280439684904, 15);
  sqcRZGate(q, 1.3907462026608401, 15);
  sqcRYGate(q, -2.2969864309822356, 16);
  sqcRZGate(q, 2.7064961510309784, 16);
  sqcRYGate(q, -0.24085850946972176, 17);
  sqcRZGate(q, -0.029281834584472526, 17);
  sqcRYGate(q, -1.6788545597955522, 18);
  sqcRZGate(q, -0.6140025800328304, 18);
  sqcRYGate(q, -0.6964218045304652, 19);
  sqcRZGate(q, 1.153972041059709, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6302206354281779, 0);
  sqcRZGate(q, 2.524689893262179, 0);
  sqcRYGate(q, 2.8891722895212544, 1);
  sqcRZGate(q, -0.5661683617570101, 1);
  sqcRYGate(q, -1.3210600830253891, 2);
  sqcRZGate(q, -0.5976442699066866, 2);
  sqcRYGate(q, 0.5235713430059379, 3);
  sqcRZGate(q, -1.5929280300134998, 3);
  sqcRYGate(q, -1.3257168357295015, 4);
  sqcRZGate(q, 0.6884799986619178, 4);
  sqcRYGate(q, 0.02702616052940963, 5);
  sqcRZGate(q, 2.857416401213228, 5);
  sqcRYGate(q, -0.4275345967486972, 6);
  sqcRZGate(q, 3.1292103073933695, 6);
  sqcRYGate(q, 2.954606094530476, 7);
  sqcRZGate(q, -2.9533245346142136, 7);
  sqcRYGate(q, -2.9468221495851177, 8);
  sqcRZGate(q, -2.7726927184452888, 8);
  sqcRYGate(q, -0.27562869785020805, 9);
  sqcRZGate(q, 2.6718961614284154, 9);
  sqcRYGate(q, 2.3501279540574274, 10);
  sqcRZGate(q, -0.8886471345209673, 10);
  sqcRYGate(q, 2.6693944438503494, 11);
  sqcRZGate(q, 3.1255812785039603, 11);
  sqcRYGate(q, 1.2992067244749754, 12);
  sqcRZGate(q, 0.44681408751495355, 12);
  sqcRYGate(q, 2.9679021569392336, 13);
  sqcRZGate(q, -3.000255251534218, 13);
  sqcRYGate(q, 0.3362222809971599, 14);
  sqcRZGate(q, -0.04878578797485744, 14);
  sqcRYGate(q, -0.0029352751868154496, 15);
  sqcRZGate(q, -0.1999029020839658, 15);
  sqcRYGate(q, 2.8165276492329934, 16);
  sqcRZGate(q, -0.4677484721528146, 16);
  sqcRYGate(q, 2.7001683509691308, 17);
  sqcRZGate(q, -0.621861497670036, 17);
  sqcRYGate(q, -0.6733249851123028, 18);
  sqcRZGate(q, -2.0021989572693286, 18);
  sqcRYGate(q, 2.685246409333806, 19);
  sqcRZGate(q, -2.037870301788817, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.24781275737458583, 0);
  sqcRZGate(q, 2.0750528035567295, 0);
  sqcRYGate(q, 2.7647130344324653, 1);
  sqcRZGate(q, -0.8220985516268726, 1);
  sqcRYGate(q, 0.891634538081076, 2);
  sqcRZGate(q, 2.018782539162548, 2);
  sqcRYGate(q, 0.010138010433792194, 3);
  sqcRZGate(q, 2.5165716901782083, 3);
  sqcRYGate(q, -0.1276867183689514, 4);
  sqcRZGate(q, -1.9444621724789926, 4);
  sqcRYGate(q, -3.136412135457333, 5);
  sqcRZGate(q, 0.10406862378573134, 5);
  sqcRYGate(q, 0.66922519724368, 6);
  sqcRZGate(q, -2.1272700764758037, 6);
  sqcRYGate(q, -0.21787360462010547, 7);
  sqcRZGate(q, -0.07876999457406961, 7);
  sqcRYGate(q, -2.461801214359049, 8);
  sqcRZGate(q, 2.998750337698103, 8);
  sqcRYGate(q, -0.12746941976790005, 9);
  sqcRZGate(q, -1.7578129587128863, 9);
  sqcRYGate(q, 3.039691190405333, 10);
  sqcRZGate(q, 3.0681247094442172, 10);
  sqcRYGate(q, 3.13243770957672, 11);
  sqcRZGate(q, 2.5335210082973836, 11);
  sqcRYGate(q, 3.138682322458834, 12);
  sqcRZGate(q, 0.47494568231244033, 12);
  sqcRYGate(q, -0.37119771931016476, 13);
  sqcRZGate(q, -1.0597253108345928, 13);
  sqcRYGate(q, -2.154536199116753, 14);
  sqcRZGate(q, 2.780312881862988, 14);
  sqcRYGate(q, 3.117502281514307, 15);
  sqcRZGate(q, -0.05726146805293613, 15);
  sqcRYGate(q, 0.42266362709184335, 16);
  sqcRZGate(q, -2.965040828124852, 16);
  sqcRYGate(q, 0.6704642934207872, 17);
  sqcRZGate(q, 0.8061609357970881, 17);
  sqcRYGate(q, 1.5124076609943522, 18);
  sqcRZGate(q, 1.2193917013264368, 18);
  sqcRYGate(q, 2.8405269950963277, 19);
  sqcRZGate(q, -2.445221677586209, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.0728760409427656, 0);
  sqcRZGate(q, -1.6583852077677972, 0);
  sqcRYGate(q, 2.700121428213232, 1);
  sqcRZGate(q, -0.7684705927278959, 1);
  sqcRYGate(q, 3.077218816674254, 2);
  sqcRZGate(q, 3.026958502350504, 2);
  sqcRYGate(q, 2.994745739535147, 3);
  sqcRZGate(q, -0.9893068604157006, 3);
  sqcRYGate(q, -0.25336355353619117, 4);
  sqcRZGate(q, -1.1825535249881893, 4);
  sqcRYGate(q, -0.9390055467631564, 5);
  sqcRZGate(q, -1.088510803671418, 5);
  sqcRYGate(q, 2.1548709542701854, 6);
  sqcRZGate(q, 1.900574022168464, 6);
  sqcRYGate(q, -2.569928735676359, 7);
  sqcRZGate(q, -0.9105955305346775, 7);
  sqcRYGate(q, -0.5855364590409264, 8);
  sqcRZGate(q, -0.0355701849924946, 8);
  sqcRYGate(q, 0.036601863627350184, 9);
  sqcRZGate(q, 1.8203142505836596, 9);
  sqcRYGate(q, -0.9183863999374343, 10);
  sqcRZGate(q, -0.3270192546040427, 10);
  sqcRYGate(q, -2.9733128913788165, 11);
  sqcRZGate(q, -2.3649448706855667, 11);
  sqcRYGate(q, -2.2929377924084737, 12);
  sqcRZGate(q, -2.921115881464591, 12);
  sqcRYGate(q, -3.107914359895425, 13);
  sqcRZGate(q, 2.076439018442098, 13);
  sqcRYGate(q, 3.087646108208098, 14);
  sqcRZGate(q, 1.4082994335830905, 14);
  sqcRYGate(q, -2.3431570528410286, 15);
  sqcRZGate(q, -0.006347859259082014, 15);
  sqcRYGate(q, 1.3836725674852595, 16);
  sqcRZGate(q, -0.1449788362462809, 16);
  sqcRYGate(q, 1.6392860336604314, 17);
  sqcRZGate(q, 1.683485956835676, 17);
  sqcRYGate(q, -0.9868781501904964, 18);
  sqcRZGate(q, -0.11916515475665346, 18);
  sqcRYGate(q, 1.165673683395072, 19);
  sqcRZGate(q, -2.447616674368194, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.0961310457414815, 0);
  sqcRZGate(q, 2.5661393672799884, 0);
  sqcRYGate(q, -2.966775090768555, 1);
  sqcRZGate(q, 2.150292563454432, 1);
  sqcRYGate(q, -3.0866144690348842, 2);
  sqcRZGate(q, 2.151286359556318, 2);
  sqcRYGate(q, 3.119883153297576, 3);
  sqcRZGate(q, -0.852507568857093, 3);
  sqcRYGate(q, 3.0886865245893715, 4);
  sqcRZGate(q, 1.7788832542422766, 4);
  sqcRYGate(q, 0.033963990677322364, 5);
  sqcRZGate(q, -2.4397703078942143, 5);
  sqcRYGate(q, 0.005552195967312379, 6);
  sqcRZGate(q, 0.3290684617366839, 6);
  sqcRYGate(q, 0.03831687886599954, 7);
  sqcRZGate(q, -3.131769136670927, 7);
  sqcRYGate(q, 2.470500726418123, 8);
  sqcRZGate(q, 3.086694047010436, 8);
  sqcRYGate(q, 0.1327793316994985, 9);
  sqcRZGate(q, -2.5070124934973466, 9);
  sqcRYGate(q, 2.9845526899655606, 10);
  sqcRZGate(q, -2.4480965778021253, 10);
  sqcRYGate(q, -0.0880774152347472, 11);
  sqcRZGate(q, -3.0718680744034, 11);
  sqcRYGate(q, -0.05657067610960643, 12);
  sqcRZGate(q, -2.124236142149492, 12);
  sqcRYGate(q, -0.7086331987674479, 13);
  sqcRZGate(q, -2.6714753822745236, 13);
  sqcRYGate(q, 3.098448883616996, 14);
  sqcRZGate(q, 0.011852191506914616, 14);
  sqcRYGate(q, -3.1189619474239634, 15);
  sqcRZGate(q, 3.1366706677599594, 15);
  sqcRYGate(q, 3.0535042350872255, 16);
  sqcRZGate(q, -0.06386211300640189, 16);
  sqcRYGate(q, -0.003151574965552994, 17);
  sqcRZGate(q, 2.479888931453535, 17);
  sqcRYGate(q, 3.118199323301294, 18);
  sqcRZGate(q, 3.0370959814737697, 18);
  sqcRYGate(q, 0.28073120610713787, 19);
  sqcRZGate(q, -2.140852274919398, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.28702910399910037, 0);
  sqcRZGate(q, -1.71441025052799, 0);
  sqcRYGate(q, -1.8427724711462314, 1);
  sqcRZGate(q, 0.1717380933468533, 1);
  sqcRYGate(q, -3.071557604184847, 2);
  sqcRZGate(q, -0.06394379604031729, 2);
  sqcRYGate(q, -2.977422783680773, 3);
  sqcRZGate(q, 2.387064578606115, 3);
  sqcRYGate(q, -2.6715056717348435, 4);
  sqcRZGate(q, -2.659105871388609, 4);
  sqcRYGate(q, -2.146405919418892, 5);
  sqcRZGate(q, 1.4469401523199101, 5);
  sqcRYGate(q, 2.5401479794462554, 6);
  sqcRZGate(q, -2.4950890339400633, 6);
  sqcRYGate(q, 0.06820238949998458, 7);
  sqcRZGate(q, -2.0569909432021083, 7);
  sqcRYGate(q, 2.160710902605077, 8);
  sqcRZGate(q, -3.069152821808027, 8);
  sqcRYGate(q, 1.8828260547204394, 9);
  sqcRZGate(q, 3.1405759478795816, 9);
  sqcRYGate(q, -2.8545989851348175, 10);
  sqcRZGate(q, -2.6152805410477624, 10);
  sqcRYGate(q, -1.995325955272273, 11);
  sqcRZGate(q, 2.8147779531710517, 11);
  sqcRYGate(q, 0.5587554014371572, 12);
  sqcRZGate(q, -0.43122495715513626, 12);
  sqcRYGate(q, -3.1092049507989725, 13);
  sqcRZGate(q, -1.8142872754541328, 13);
  sqcRYGate(q, 2.8441658728366805, 14);
  sqcRZGate(q, -1.641348409347598, 14);
  sqcRYGate(q, 0.7535579188515449, 15);
  sqcRZGate(q, 1.569281762782721, 15);
  sqcRYGate(q, 1.9468578281707307, 16);
  sqcRZGate(q, 1.4883006309279723, 16);
  sqcRYGate(q, 0.09140839376735352, 17);
  sqcRZGate(q, 2.0884670636546856, 17);
  sqcRYGate(q, 2.1097529987250496, 18);
  sqcRZGate(q, -1.5471252865451257, 18);
  sqcRYGate(q, 1.2680509051516333, 19);
  sqcRZGate(q, 1.100552313176965, 19);

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
