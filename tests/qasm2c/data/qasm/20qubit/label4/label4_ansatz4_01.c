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

  sqcRYGate(q, -2.9270236249012087, 0);
  sqcRZGate(q, -0.2980936807345851, 0);
  sqcRYGate(q, 3.141569639487028, 1);
  sqcRZGate(q, -0.19951238069530497, 1);
  sqcRYGate(q, -1.5707898979742625, 2);
  sqcRZGate(q, 1.4723934093719873, 2);
  sqcRYGate(q, 1.570796434199579, 3);
  sqcRZGate(q, 2.649551419745699, 3);
  sqcRYGate(q, 3.1415784761694083, 4);
  sqcRZGate(q, 2.785785026890744, 4);
  sqcRYGate(q, 1.5707567913033698, 5);
  sqcRZGate(q, 1.5707960857846752, 5);
  sqcRYGate(q, 1.5707965106414132, 6);
  sqcRZGate(q, 1.570796448750887, 6);
  sqcRYGate(q, 1.5707984221478606, 7);
  sqcRZGate(q, -1.5697262181809064, 7);
  sqcRYGate(q, -2.18775338289845e-07, 8);
  sqcRZGate(q, -0.24702591737675364, 8);
  sqcRYGate(q, -3.233715017358918e-05, 9);
  sqcRZGate(q, 0.740656168107598, 9);
  sqcRYGate(q, 1.5707964426369658, 10);
  sqcRZGate(q, -1.5709112243573715, 10);
  sqcRYGate(q, 1.5707956020289189, 11);
  sqcRZGate(q, -2.016239303691979, 11);
  sqcRYGate(q, 1.570798715035068, 12);
  sqcRZGate(q, 3.1968467961718256e-07, 12);
  sqcRYGate(q, 1.5697218044437031, 13);
  sqcRZGate(q, -1.5708003720621997, 13);
  sqcRYGate(q, -0.0959929408116476, 14);
  sqcRZGate(q, 1.42202579423964, 14);
  sqcRYGate(q, -1.5708008410141785, 15);
  sqcRZGate(q, -0.5705234457697455, 15);
  sqcRYGate(q, 1.6496843294219756, 16);
  sqcRZGate(q, 1.1419878968916466, 16);
  sqcRYGate(q, 1.5707985547886274, 17);
  sqcRZGate(q, 1.5707949269793977, 17);
  sqcRYGate(q, -1.5724644001746517, 18);
  sqcRZGate(q, -0.003480801169043907, 18);
  sqcRYGate(q, 1.5708217437094056, 19);
  sqcRZGate(q, 3.1415921602659203, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -6.642357139871304e-05, 0);
  sqcRZGate(q, 0.29809471402742843, 0);
  sqcRYGate(q, 0.6407926642230818, 1);
  sqcRZGate(q, -0.27218995192068257, 1);
  sqcRYGate(q, -1.4920852874153603, 2);
  sqcRZGate(q, 1.584099864577118, 2);
  sqcRYGate(q, 3.14155231873957, 3);
  sqcRZGate(q, -1.9546128208381246, 3);
  sqcRYGate(q, 0.01762934287792728, 4);
  sqcRZGate(q, 1.540404034935368, 4);
  sqcRYGate(q, -1.5707907781307162, 5);
  sqcRZGate(q, -0.3707106380701005, 5);
  sqcRYGate(q, -1.5707961699803077, 6);
  sqcRZGate(q, -2.348175626361009, 6);
  sqcRYGate(q, -1.571873641775224, 7);
  sqcRZGate(q, 1.383219723007036, 7);
  sqcRYGate(q, -6.619694068454862e-06, 8);
  sqcRZGate(q, -0.9914249423708729, 8);
  sqcRYGate(q, 3.6377713858330416e-06, 9);
  sqcRZGate(q, -1.9763633927014164, 9);
  sqcRYGate(q, -0.5044034565712013, 10);
  sqcRZGate(q, -1.1368821605380077, 10);
  sqcRYGate(q, 1.8842130402041633e-06, 11);
  sqcRZGate(q, -2.696155910227207, 11);
  sqcRYGate(q, -1.7317286717296894, 12);
  sqcRZGate(q, 1.5707930313326113, 12);
  sqcRYGate(q, 1.570796214108479, 13);
  sqcRZGate(q, -0.9786902345722153, 13);
  sqcRYGate(q, -3.141592651792236, 14);
  sqcRZGate(q, 1.4220660538756613, 14);
  sqcRYGate(q, -3.141592629580305, 15);
  sqcRZGate(q, -0.5705237103331096, 15);
  sqcRYGate(q, 3.141591555494238, 16);
  sqcRZGate(q, 2.7132155552889823, 16);
  sqcRYGate(q, 0.478385573439291, 17);
  sqcRZGate(q, -1.5707940336449167, 17);
  sqcRYGate(q, -0.4934889985687087, 18);
  sqcRZGate(q, 0.22554980132551705, 18);
  sqcRYGate(q, 2.0642684891289393, 19);
  sqcRZGate(q, -1.5704179669115288, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.5265560588904727, 0);
  sqcRZGate(q, -1.7618499684857696, 0);
  sqcRYGate(q, -2.2327994960491537e-05, 1);
  sqcRZGate(q, 1.84299205073187, 1);
  sqcRYGate(q, 3.046699844032035, 2);
  sqcRZGate(q, 3.137535817198631, 2);
  sqcRYGate(q, 3.136083371454445, 3);
  sqcRZGate(q, 1.6790225932654188, 3);
  sqcRYGate(q, 0.3477021258087616, 4);
  sqcRZGate(q, 1.6108746898847812, 4);
  sqcRYGate(q, -3.141574210837979, 5);
  sqcRZGate(q, -0.37116474000806926, 5);
  sqcRYGate(q, 4.3705397803073254e-05, 6);
  sqcRZGate(q, -0.0871881752773147, 6);
  sqcRYGate(q, 3.141592502390421, 7);
  sqcRZGate(q, 0.46373662893809803, 7);
  sqcRYGate(q, 3.3412807221379235e-06, 8);
  sqcRZGate(q, 0.1480200485701579, 8);
  sqcRYGate(q, -1.5707956464627406, 9);
  sqcRZGate(q, -3.141591853880355, 9);
  sqcRYGate(q, -3.141572174045744, 10);
  sqcRZGate(q, -2.7456633100805785, 10);
  sqcRYGate(q, 2.8705342430378895, 11);
  sqcRZGate(q, 0.0026913882710859482, 11);
  sqcRYGate(q, 0.2679451100620698, 12);
  sqcRZGate(q, -1.5707928775698239, 12);
  sqcRYGate(q, 3.1415911667767777, 13);
  sqcRZGate(q, -0.8177583552882721, 13);
  sqcRYGate(q, 1.5707939122884929, 14);
  sqcRZGate(q, 1.9573052515463685, 14);
  sqcRYGate(q, 1.5707960355645696, 15);
  sqcRZGate(q, 1.6784232441137563, 15);
  sqcRYGate(q, -1.5703542296904827, 16);
  sqcRZGate(q, 2.0059194407814434, 16);
  sqcRYGate(q, 1.57079557975558, 17);
  sqcRZGate(q, -1.821505135855368, 17);
  sqcRYGate(q, 0.8030662278828284, 18);
  sqcRZGate(q, -0.07261834251887091, 18);
  sqcRYGate(q, 3.0510753032131475, 19);
  sqcRZGate(q, 0.00038114895801388826, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.141571467835641, 0);
  sqcRZGate(q, -1.7618512373047064, 0);
  sqcRYGate(q, 1.570790227031587, 1);
  sqcRZGate(q, -0.057185633378134516, 1);
  sqcRYGate(q, -1.6554751806732642, 2);
  sqcRZGate(q, 0.17499005787454447, 2);
  sqcRYGate(q, 1.5751715565716695, 3);
  sqcRZGate(q, -3.1415610183165774, 3);
  sqcRYGate(q, -3.1278390022610654, 4);
  sqcRZGate(q, -1.5307276778021224, 4);
  sqcRYGate(q, -1.5707904919715512, 5);
  sqcRZGate(q, -3.141592628747462, 5);
  sqcRYGate(q, 2.6647879652284825, 6);
  sqcRZGate(q, 1.5684277252093626, 6);
  sqcRYGate(q, 8.090999796372953e-06, 7);
  sqcRZGate(q, -0.017522606391614737, 7);
  sqcRYGate(q, -1.5707975550810103, 8);
  sqcRZGate(q, -0.7165827903086477, 8);
  sqcRYGate(q, 1.6833823273745825, 9);
  sqcRZGate(q, 3.141592444810366, 9);
  sqcRYGate(q, -3.1415597964901267, 10);
  sqcRZGate(q, -0.02777555951446775, 10);
  sqcRYGate(q, 3.1279634421486433, 11);
  sqcRZGate(q, 1.5735055227906476, 11);
  sqcRYGate(q, -1.570797348524903, 12);
  sqcRZGate(q, -1.5707977259156338, 12);
  sqcRYGate(q, -1.5707963749547336, 13);
  sqcRZGate(q, -3.141592227045924, 13);
  sqcRYGate(q, -3.141592551034972, 14);
  sqcRZGate(q, -1.3616959683465926, 14);
  sqcRYGate(q, 3.1415924509544535, 15);
  sqcRZGate(q, -1.0682301334190312, 15);
  sqcRYGate(q, -2.8481967540017195e-07, 16);
  sqcRZGate(q, 2.706405576806851, 16);
  sqcRYGate(q, -1.7586389903456734e-05, 17);
  sqcRZGate(q, 1.5439100830164143, 17);
  sqcRYGate(q, -1.5662094146051686e-06, 18);
  sqcRZGate(q, 2.8995404112667336, 18);
  sqcRYGate(q, -1.7042684986187775, 19);
  sqcRZGate(q, 1.570796072931382, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.570797498070947, 0);
  sqcRZGate(q, 1.668812479956995, 0);
  sqcRYGate(q, 3.1415892991618835, 1);
  sqcRZGate(q, -0.5132115952483921, 1);
  sqcRYGate(q, -0.9437837518594854, 2);
  sqcRZGate(q, 3.111838558845385, 2);
  sqcRYGate(q, 1.5708027752909697, 3);
  sqcRZGate(q, -2.0254819302349825, 3);
  sqcRYGate(q, 1.5707963157055045, 4);
  sqcRZGate(q, -1.4421124273775547, 4);
  sqcRYGate(q, -1.5707973897014735, 5);
  sqcRZGate(q, -0.45404792388052684, 5);
  sqcRYGate(q, -1.6865446821916261, 6);
  sqcRZGate(q, -1.4421103905930934, 6);
  sqcRYGate(q, 3.141588110633544, 7);
  sqcRZGate(q, 2.5325282222877674, 7);
  sqcRYGate(q, -3.1415924722282504, 8);
  sqcRZGate(q, 0.9829006035329488, 8);
  sqcRYGate(q, 1.5707986388226276, 9);
  sqcRZGate(q, -2.022464352428158, 9);
  sqcRYGate(q, -0.1159353684718711, 10);
  sqcRZGate(q, 1.6893102579520574, 10);
  sqcRYGate(q, -1.5707959618888878, 11);
  sqcRZGate(q, -2.0236318322667515, 11);
  sqcRYGate(q, 1.5707991450662417, 12);
  sqcRZGate(q, 0.12869559846322698, 12);
  sqcRYGate(q, -1.5707956549288307, 13);
  sqcRZGate(q, -2.020515727835019, 13);
  sqcRYGate(q, -0.037735644230476595, 14);
  sqcRZGate(q, -1.2639913788246169, 14);
  sqcRYGate(q, -3.1415881311350065, 15);
  sqcRZGate(q, -0.0522900426360761, 15);
  sqcRYGate(q, 1.572899864062963, 16);
  sqcRZGate(q, 0.128750022134124, 16);
  sqcRYGate(q, -9.83531611264965e-06, 17);
  sqcRZGate(q, 1.4011612305262051, 17);
  sqcRYGate(q, -1.7449012348025237, 18);
  sqcRZGate(q, 1.69953538267439, 18);
  sqcRYGate(q, 1.5708018030032522, 19);
  sqcRZGate(q, -1.7033816468521241, 19);

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
