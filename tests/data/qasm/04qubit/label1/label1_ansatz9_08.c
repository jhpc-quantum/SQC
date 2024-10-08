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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.3841652014970967, 0);
  sqcRYGate(q, -0.6859847033044171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.296473743376072, 0);
  sqcRYGate(q, 0.6069727498546171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.799181933868466, 2);
  sqcRYGate(q, -1.0296609454765617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.899759224065201, 2);
  sqcRYGate(q, 0.44229028982527446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5005040294417968, 0);
  sqcRYGate(q, 1.307918501115158, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9161125315378426, 0);
  sqcRYGate(q, 1.1741237306307832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.050124136341651, 1);
  sqcRYGate(q, -0.9355788490241329, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4117080978940324, 1);
  sqcRYGate(q, 0.8466424990611552, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7795692145462224, 0);
  sqcRYGate(q, -3.1093239294278363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1595654675797067, 0);
  sqcRYGate(q, -1.1824705044016635, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4596802703437324, 1);
  sqcRYGate(q, -0.02759653442585723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8220512012044354, 1);
  sqcRYGate(q, -2.750097841150963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7523319532124746, 0);
  sqcRYGate(q, 0.0015134550525646162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8135960815714913, 0);
  sqcRYGate(q, -0.355742566959444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.694273671901593, 2);
  sqcRYGate(q, 2.537539344110361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5121655876209177, 2);
  sqcRYGate(q, 1.4411003627467767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3870243694420206, 0);
  sqcRYGate(q, 2.7595896938889806, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2974018450771765, 0);
  sqcRYGate(q, 2.8594502739715275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5395881802565052, 1);
  sqcRYGate(q, 1.8012299778801504, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.444902445401679, 1);
  sqcRYGate(q, -0.7382102616301001, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3337688837227898, 0);
  sqcRYGate(q, -1.6013753974033582, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0643706699502766, 0);
  sqcRYGate(q, -0.05253588489519512, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.16784097164102452, 1);
  sqcRYGate(q, 0.8662222965941628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9601665742651733, 1);
  sqcRYGate(q, 1.5710372564218602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8035651543741462, 0);
  sqcRYGate(q, 0.5372837663547525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0756591157008453, 0);
  sqcRYGate(q, 2.1376419689571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08511215303580945, 2);
  sqcRYGate(q, -2.01184359338707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2956641617834619, 2);
  sqcRYGate(q, -2.5291477768924944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.035390187423485, 0);
  sqcRYGate(q, 2.841258561741348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9865598160637037, 0);
  sqcRYGate(q, -1.2173007360798538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9361439924448547, 1);
  sqcRYGate(q, 0.2302341390175332, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1650723384586996, 1);
  sqcRYGate(q, 0.9210603432607279, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0226987886376584, 0);
  sqcRYGate(q, 1.5069162637379898, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2969816189583154, 0);
  sqcRYGate(q, -1.8374178091513484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8350620231695016, 1);
  sqcRYGate(q, -2.1879740081134664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1565789262606625, 1);
  sqcRYGate(q, -0.5100712527442459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.478849234416754, 0);
  sqcRYGate(q, 1.5993684082592505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1184789232656307, 0);
  sqcRYGate(q, 3.079796406037564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9571792118036077, 2);
  sqcRYGate(q, -1.4707724739852264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3398015721136045, 2);
  sqcRYGate(q, -2.172319722448983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.703926761209316, 0);
  sqcRYGate(q, -1.66043441678256, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9721969451029082, 0);
  sqcRYGate(q, 0.6960079160051909, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2008686302651224, 1);
  sqcRYGate(q, -2.685348024951857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7524472702580907, 1);
  sqcRYGate(q, 0.922826112846094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0462980848455157, 0);
  sqcRYGate(q, -2.2896041166489405, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.22570564736075446, 0);
  sqcRYGate(q, 1.0941783637978868, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1916814525888237, 1);
  sqcRYGate(q, 2.3492613313183885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.497619417204451, 1);
  sqcRYGate(q, 1.695037171235401, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6191196399319888, 0);
  sqcRYGate(q, 3.116606311159023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1294646724721034, 0);
  sqcRYGate(q, 2.233178200404886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.666056586712659, 2);
  sqcRYGate(q, -2.1025586553983437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.798391352918406, 2);
  sqcRYGate(q, -2.334905310477787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3975309545700538, 0);
  sqcRYGate(q, 1.791586593871199, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4046033943557461, 0);
  sqcRYGate(q, 2.917366231185206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1044050256005638, 1);
  sqcRYGate(q, 0.4015907725031811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.319018550600247, 1);
  sqcRYGate(q, 1.740323585769379, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9743352707901555, 0);
  sqcRYGate(q, 1.634022547662533, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3189911421248226, 0);
  sqcRYGate(q, -0.6482763479293094, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5407122983921937, 1);
  sqcRYGate(q, -2.331590804884457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3476023858747674, 1);
  sqcRYGate(q, -2.7751337309918664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3049924555449581, 0);
  sqcRYGate(q, -2.12890103158259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.605102899554253, 0);
  sqcRYGate(q, 0.29125074936561846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.991777602439086, 2);
  sqcRYGate(q, -0.6706387118857609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.679235109181006, 2);
  sqcRYGate(q, -2.3704703742892703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3060959887936314, 0);
  sqcRYGate(q, 0.24347547828934563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.745940232338339, 0);
  sqcRYGate(q, -0.9565733860851733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9734097799300291, 1);
  sqcRYGate(q, 0.4612074535398101, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7577633293565214, 1);
  sqcRYGate(q, -1.239771853189755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4496351621171137, 0);
  sqcRYGate(q, 2.283156426826018, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6996837465655816, 0);
  sqcRYGate(q, 2.9275452859157394, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.574692495804283, 1);
  sqcRYGate(q, -1.829453788263502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.913924348171471, 1);
  sqcRYGate(q, 1.3684341302235556, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.385818263688612, 0);
  sqcRYGate(q, 2.441588938367594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7773421846603481, 0);
  sqcRYGate(q, -1.1808818876861904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8012084171071698, 2);
  sqcRYGate(q, 0.8852934409257263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4719465382943657, 2);
  sqcRYGate(q, 0.018864682725714003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1375406570525728, 0);
  sqcRYGate(q, -2.1267612726617164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.295985833576133, 0);
  sqcRYGate(q, 2.853086499406376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.814353955072728, 1);
  sqcRYGate(q, 1.35792947000327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7644579642102522, 1);
  sqcRYGate(q, 0.5840529168164439, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5854133157000083, 0);
  sqcRYGate(q, 0.16597144403286992, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9713187421966855, 0);
  sqcRYGate(q, 3.0045056644778505, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2031194976212074, 1);
  sqcRYGate(q, -2.8306212500400263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.762763919873457, 1);
  sqcRYGate(q, -1.648474176764901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6120316944193638, 0);
  sqcRYGate(q, 1.7264318814472306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0785207092716576, 0);
  sqcRYGate(q, -1.9739398660908622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31935051397116787, 2);
  sqcRYGate(q, 2.7515518113304562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7685607886985535, 2);
  sqcRYGate(q, 0.9320447627933485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.877732461255666, 0);
  sqcRYGate(q, 2.2167777257900747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8403541306251159, 0);
  sqcRYGate(q, 0.13908768692555729, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.426519829511231, 1);
  sqcRYGate(q, -0.6981088251116275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7238932478791256, 1);
  sqcRYGate(q, -2.0441047368591336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4043023051587884, 0);
  sqcRYGate(q, 2.3648342258455504, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6125693094176916, 0);
  sqcRYGate(q, 1.610931559915374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7072422053023981, 1);
  sqcRYGate(q, -0.14935708537801504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10356873948684077, 1);
  sqcRYGate(q, 0.9101386410142293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11839049733999266, 0);
  sqcRYGate(q, -3.120903672133469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8319351565392066, 0);
  sqcRYGate(q, -2.762370776869545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1405602033764457, 2);
  sqcRYGate(q, -1.7970070036332326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3485907293547372, 2);
  sqcRYGate(q, -0.01832318225380257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.025955621157713, 0);
  sqcRYGate(q, 1.830272906397414, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.698290896740047, 0);
  sqcRYGate(q, 1.0179284289401096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8023724969641415, 1);
  sqcRYGate(q, 0.5408300293595575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8042502273248626, 1);
  sqcRYGate(q, 1.740889707488027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.010915647035848, 0);
  sqcRYGate(q, 0.8201581308791699, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5858813564025773, 0);
  sqcRYGate(q, 0.4173502152195532, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6340836028687047, 1);
  sqcRYGate(q, -1.4672196420337444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.672678727904245, 1);
  sqcRYGate(q, 0.4481900317958454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11533247557538638, 0);
  sqcRYGate(q, -1.092120250500211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.658562690148598, 0);
  sqcRYGate(q, -2.0883017333606007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8972090407799866, 2);
  sqcRYGate(q, -1.4142825112038775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9563491871442364, 2);
  sqcRYGate(q, 2.3981150990520597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.082737636120792, 0);
  sqcRYGate(q, -2.0426874821106282, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4375290480944602, 0);
  sqcRYGate(q, -1.8342857821283216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1417792880685802, 1);
  sqcRYGate(q, 2.236028456721007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1906639881338013, 1);
  sqcRYGate(q, 2.9279508899784976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4286216241599892, 0);
  sqcRYGate(q, -2.262078573743148, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5922438248259527, 0);
  sqcRYGate(q, 1.446566163066979, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7278985158981683, 1);
  sqcRYGate(q, -2.6010814722016433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7081281121293896, 1);
  sqcRYGate(q, 1.2451741701001193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.125851601272518, 0);
  sqcRYGate(q, 1.2779991187805875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0380565411634455, 0);
  sqcRYGate(q, 2.4475166106271904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1401584873320472, 2);
  sqcRYGate(q, -2.929808274243232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0430363566457164, 2);
  sqcRYGate(q, -0.8108255699024012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2934488076425685, 0);
  sqcRYGate(q, 2.8026322138025233, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.309896879112967, 0);
  sqcRYGate(q, 0.8247384634832338, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0843470595801743, 1);
  sqcRYGate(q, 3.032156987806826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2758452338083626, 1);
  sqcRYGate(q, 1.449289408195476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2834493737998267, 0);
  sqcRYGate(q, 1.6672684585756008, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07318666478792647, 0);
  sqcRYGate(q, 0.4367313138200748, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.610381709874016, 1);
  sqcRYGate(q, 0.0036018631862474713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7013520957177038, 1);
  sqcRYGate(q, 0.7277702925027917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47631706189304435, 0);
  sqcRYGate(q, -2.319353655161974, 1);
  sqcRYGate(q, 0.08636249388935192, 2);
  sqcRYGate(q, 1.234131317487487, 3);

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
