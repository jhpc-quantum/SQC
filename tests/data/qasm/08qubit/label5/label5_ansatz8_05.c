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

  sqcRYGate(q, -0.2852759843814034, 0);
  sqcRYGate(q, 2.1279146820930483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7443680570513993, 0);
  sqcRYGate(q, -2.0875139817266355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9829959943112296, 2);
  sqcRYGate(q, 1.373583503851966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9790110907063339, 2);
  sqcRYGate(q, 1.8007413417035858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1691317715229355, 4);
  sqcRYGate(q, 0.814191799539457, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7062248459975748, 4);
  sqcRYGate(q, 2.405514220660565, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2072112339567234, 6);
  sqcRYGate(q, -2.7161731289780526, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2703447522775387, 6);
  sqcRYGate(q, -2.7811303125430564, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6311114877407711, 0);
  sqcRYGate(q, -1.2498818905706217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7470679981731054, 0);
  sqcRYGate(q, 2.767861266904012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.802027542826832, 2);
  sqcRYGate(q, -1.780662222153298, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.039908169341113, 2);
  sqcRYGate(q, -0.4026081198448039, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.314702398941638, 4);
  sqcRYGate(q, -1.4530133093323636, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.14626760312244097, 4);
  sqcRYGate(q, 0.615030713911592, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.910118622270967, 1);
  sqcRYGate(q, 1.2756509100491347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0059539301245213, 1);
  sqcRYGate(q, 0.9640594791990607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3696866253080258, 3);
  sqcRYGate(q, 0.11663634361404986, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1372219179855043, 3);
  sqcRYGate(q, -1.9685149833814144, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.08879472786177889, 5);
  sqcRYGate(q, 1.4155821950858614, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.402635199347055, 5);
  sqcRYGate(q, 1.9694086547796816, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0181610924196174, 0);
  sqcRYGate(q, 2.1025229399604437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.555150333809916, 0);
  sqcRYGate(q, 2.558945369187286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8679114957867788, 2);
  sqcRYGate(q, -2.2649902713605976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0885490139290013, 2);
  sqcRYGate(q, -2.5967113938076802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7418232851770792, 4);
  sqcRYGate(q, 1.9687915575341934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.026715915859899297, 4);
  sqcRYGate(q, -2.2082064074134817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8123492255185294, 6);
  sqcRYGate(q, 2.3699967117417295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8392175742993968, 6);
  sqcRYGate(q, -1.895515612093888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.406129429706611, 0);
  sqcRYGate(q, 1.9531743196260596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.902715784698128, 0);
  sqcRYGate(q, 1.8852504970513608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.317400783428278, 2);
  sqcRYGate(q, 2.71131348082734, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1628583688979286, 2);
  sqcRYGate(q, -0.47430797953607856, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0065515244669707, 4);
  sqcRYGate(q, -3.073017800080115, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2972600922733076, 4);
  sqcRYGate(q, -0.30243426449400257, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5981561026610156, 1);
  sqcRYGate(q, -1.3555953038948596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5961475355554193, 1);
  sqcRYGate(q, 2.775595044130746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.592802715727548, 3);
  sqcRYGate(q, -2.5498426022988667, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3276729664299285, 3);
  sqcRYGate(q, 2.1182483565386283, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.056868651617899, 5);
  sqcRYGate(q, 2.525461198889127, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5437122753706738, 5);
  sqcRYGate(q, 1.4991308951913789, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.16284949341652338, 0);
  sqcRYGate(q, -2.7836764900094835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7707607944126638, 0);
  sqcRYGate(q, 2.3424268336572998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0090447549901382, 2);
  sqcRYGate(q, 0.5851555379422733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9034587748188674, 2);
  sqcRYGate(q, 2.9987637984335205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5490360860360816, 4);
  sqcRYGate(q, -1.314723610127424, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0594007407960753, 4);
  sqcRYGate(q, 2.4683754078358264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.01246546041685015, 6);
  sqcRYGate(q, 2.9999881003632174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6358122835905975, 6);
  sqcRYGate(q, -1.6878339995559781, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.10023993052608, 0);
  sqcRYGate(q, -1.1311160090438417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6391489606606272, 0);
  sqcRYGate(q, -2.1238341478719525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8137734376909758, 2);
  sqcRYGate(q, -2.618611107356668, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6402236450144563, 2);
  sqcRYGate(q, -1.4822318537566144, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8542778241169628, 4);
  sqcRYGate(q, 2.837642615286751, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2340206791534563, 4);
  sqcRYGate(q, 2.390701002663489, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.215037210176587, 1);
  sqcRYGate(q, 1.1874395017236195, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.628171573227765, 1);
  sqcRYGate(q, -0.9212952494403513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4636569888352646, 3);
  sqcRYGate(q, 2.099915095392072, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7521058561381717, 3);
  sqcRYGate(q, -0.09738378407301429, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.1053429339828958, 5);
  sqcRYGate(q, 0.3134224058129659, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7729032780145328, 5);
  sqcRYGate(q, 1.0991384954234322, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3118994228954926, 0);
  sqcRYGate(q, -0.331629450261147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.002754831698096, 0);
  sqcRYGate(q, 1.3010616647035347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1288641384241895, 2);
  sqcRYGate(q, -2.783049937052285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8517581590941177, 2);
  sqcRYGate(q, 1.0781508571088454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3044900040738328, 4);
  sqcRYGate(q, -0.40812872041357906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.347850641785981, 4);
  sqcRYGate(q, -1.6347514178951021, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5477104491521114, 6);
  sqcRYGate(q, 1.7354584903646653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.018863390335117632, 6);
  sqcRYGate(q, -0.9027355152346113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.975391995304145, 0);
  sqcRYGate(q, -1.2675724681397171, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6198197673041266, 0);
  sqcRYGate(q, 1.1588773679570388, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1727529840014963, 2);
  sqcRYGate(q, 0.05348540073741239, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9476309602422903, 2);
  sqcRYGate(q, -2.5780923329779273, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5088444868260016, 4);
  sqcRYGate(q, 1.5300670706941075, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0916114204414633, 4);
  sqcRYGate(q, -2.470664060246157, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5500898540674893, 1);
  sqcRYGate(q, 2.740318678514754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1247749962420872, 1);
  sqcRYGate(q, 2.3451352248025334, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5540425564071376, 3);
  sqcRYGate(q, -1.389121879081434, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8611293169038452, 3);
  sqcRYGate(q, -1.7290819834845783, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6922251479333137, 5);
  sqcRYGate(q, -2.3813892539062635, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0488513673872832, 5);
  sqcRYGate(q, -0.40482410590455625, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.1385565623270404, 0);
  sqcRYGate(q, 3.0818708422352645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.020586780655488, 0);
  sqcRYGate(q, 1.6950942741714456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2841462152007228, 2);
  sqcRYGate(q, 1.5749013606902302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8327569129272487, 2);
  sqcRYGate(q, -0.8138178467495214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.112839404831954, 4);
  sqcRYGate(q, 2.5031601373402923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0194432541196763, 4);
  sqcRYGate(q, 3.015906275842449, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0579619824249433, 6);
  sqcRYGate(q, 3.1350941857617824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5078379801092533, 6);
  sqcRYGate(q, -2.755506221059615, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06040626437730057, 0);
  sqcRYGate(q, -0.0025591867185372763, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2395267449963754, 0);
  sqcRYGate(q, -0.163260697908589, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5895504645524491, 2);
  sqcRYGate(q, 2.9685377280939673, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.652441949145462, 2);
  sqcRYGate(q, -0.29669464082343655, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8932509164013503, 4);
  sqcRYGate(q, 2.9228890415069464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2377747128714587, 4);
  sqcRYGate(q, 1.7174976450105461, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5244061262442368, 1);
  sqcRYGate(q, 0.7549829198721468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8762362588783112, 1);
  sqcRYGate(q, -2.888763496855159, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6503831462914221, 3);
  sqcRYGate(q, -0.5997755282223629, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0663294328298107, 3);
  sqcRYGate(q, -2.5262545729983943, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5131819552629613, 5);
  sqcRYGate(q, 0.23546165176219883, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9547628528641505, 5);
  sqcRYGate(q, -0.2865107359029705, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.91235491491544, 0);
  sqcRYGate(q, 0.6604603925063461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6202438924323782, 0);
  sqcRYGate(q, 0.7143136821771607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9921589991157784, 2);
  sqcRYGate(q, -0.00619997056307664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3173755709019881, 2);
  sqcRYGate(q, -3.1274278877247883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1290776209477262, 4);
  sqcRYGate(q, 2.6272075564535853, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.94245028912405, 4);
  sqcRYGate(q, 1.796345382278961, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.077497031889495, 6);
  sqcRYGate(q, 0.18582373317886702, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3724968707231773, 6);
  sqcRYGate(q, 2.6327267925351765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2528970244557907, 0);
  sqcRYGate(q, -3.052520893305923, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.095350095325389, 0);
  sqcRYGate(q, -1.7168748881301037, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0737305252571514, 2);
  sqcRYGate(q, -0.6435097446159698, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.096469092211278, 2);
  sqcRYGate(q, -1.4706720578083345, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7978811666407273, 4);
  sqcRYGate(q, -0.18634497367121344, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9185850649956241, 4);
  sqcRYGate(q, 2.227303984919158, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.12133247012993209, 1);
  sqcRYGate(q, 0.3774078750920775, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.984541771425123, 1);
  sqcRYGate(q, 2.2241567219511387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3258405037475098, 3);
  sqcRYGate(q, 1.544841827752129, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2937085290023924, 3);
  sqcRYGate(q, -2.3495809117284114, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8892747843207198, 5);
  sqcRYGate(q, 2.228931352630042, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.49930327348816006, 5);
  sqcRYGate(q, 0.6353658418605965, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7480525083629705, 0);
  sqcRYGate(q, -0.5972430606647938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1609310409879452, 0);
  sqcRYGate(q, 1.290993515594184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7584262261303845, 2);
  sqcRYGate(q, 2.1272610682358244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.057208236837650896, 2);
  sqcRYGate(q, -2.1621185294856895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.995076012650368, 4);
  sqcRYGate(q, -0.30416484885029704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8039718796769391, 4);
  sqcRYGate(q, 2.357324341195626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.10309746182878143, 6);
  sqcRYGate(q, -0.9429909968427143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8747246312703876, 6);
  sqcRYGate(q, -2.0638372625123855, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9371237711246199, 0);
  sqcRYGate(q, 0.803890614447, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.47010452295556954, 0);
  sqcRYGate(q, 2.102677581217736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2261881816517883, 2);
  sqcRYGate(q, -0.5454674530932913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9479559661105412, 2);
  sqcRYGate(q, 1.1971533486337327, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.39431526548838836, 4);
  sqcRYGate(q, 0.11717302713234962, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9808095797119645, 4);
  sqcRYGate(q, -0.06657346871531071, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1893212547376626, 1);
  sqcRYGate(q, -1.1361912005788266, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8852542061529078, 1);
  sqcRYGate(q, -1.5989125513704834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38587891447179135, 3);
  sqcRYGate(q, 1.806849985708765, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.107026658884592, 3);
  sqcRYGate(q, 1.7010819071814143, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8524540470389113, 5);
  sqcRYGate(q, -1.1819206034129586, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.14395506833045152, 5);
  sqcRYGate(q, -1.0535485339517487, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.740835311898234, 0);
  sqcRYGate(q, 1.1596837338215604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8874467285742416, 0);
  sqcRYGate(q, 1.156221052493438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.819057767712285, 2);
  sqcRYGate(q, -1.9142267448031376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2104327873829948, 2);
  sqcRYGate(q, 0.2658612888858497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8346910142124473, 4);
  sqcRYGate(q, -2.6585581149019695, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7293598719525412, 4);
  sqcRYGate(q, 1.6768851171380879, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3382201731599366, 6);
  sqcRYGate(q, -0.9175305127452107, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6415785620985153, 6);
  sqcRYGate(q, 0.6349229357389381, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7517922510896216, 0);
  sqcRYGate(q, 1.2482924982173857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1769529863051078, 0);
  sqcRYGate(q, -2.10118731525569, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6870188315349648, 2);
  sqcRYGate(q, 2.744820420809388, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6839575876815074, 2);
  sqcRYGate(q, 1.5953919128743994, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.653493988305752, 4);
  sqcRYGate(q, -2.2196231572095426, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7429293944497193, 4);
  sqcRYGate(q, 2.056287927631601, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7534580114114835, 1);
  sqcRYGate(q, 0.6028159578509271, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0663655056476094, 1);
  sqcRYGate(q, 2.198472269211992, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5247167399039636, 3);
  sqcRYGate(q, -1.2253142061607682, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.38206156793381224, 3);
  sqcRYGate(q, 1.297934796323574, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.34027805803969496, 5);
  sqcRYGate(q, 2.4319131409599906, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7297570762934376, 5);
  sqcRYGate(q, 2.369633792736041, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.742562659251482, 0);
  sqcRYGate(q, 1.2425086242395775, 1);
  sqcRYGate(q, -2.370826251016766, 2);
  sqcRYGate(q, -2.0212826484110673, 3);
  sqcRYGate(q, -2.5390038444079135, 4);
  sqcRYGate(q, -0.4553117278500276, 5);
  sqcRYGate(q, 1.6312236998600098, 6);
  sqcRYGate(q, -1.8935963120015427, 7);

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
