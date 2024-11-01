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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.5707879801509392, 0);
  sqcRZGate(q, -1.2530981624460311, 0);
  sqcRYGate(q, -0.9177618638310828, 1);
  sqcRZGate(q, 1.5702701551862255, 1);
  sqcRYGate(q, -3.1415822455525526, 2);
  sqcRZGate(q, 2.7700904566793074, 2);
  sqcRYGate(q, 1.5708168549000643, 3);
  sqcRZGate(q, 1.5708029038153861, 3);
  sqcRYGate(q, 0.001398542795370507, 4);
  sqcRZGate(q, -0.09156573371108133, 4);
  sqcRYGate(q, 3.1415913558491773, 5);
  sqcRZGate(q, 0.8070846387697516, 5);
  sqcRYGate(q, 1.7833166882640517, 6);
  sqcRZGate(q, -0.8110199264339321, 6);
  sqcRYGate(q, -3.141590688861165, 7);
  sqcRZGate(q, 1.270937463375998, 7);
  sqcRYGate(q, 1.5708037900456804, 8);
  sqcRZGate(q, -1.943525024439956, 8);
  sqcRYGate(q, -1.5707812968833232, 9);
  sqcRZGate(q, -1.6334406259497432, 9);
  sqcRYGate(q, 3.141492456838503, 10);
  sqcRZGate(q, -0.3084699750931641, 10);
  sqcRYGate(q, -3.141590895092451, 11);
  sqcRZGate(q, 0.16755383853791272, 11);
  sqcRYGate(q, 1.5707359522943467, 12);
  sqcRZGate(q, -1.5707950814728182, 12);
  sqcRYGate(q, -0.9019454730000884, 13);
  sqcRZGate(q, 3.1407586040200544, 13);
  sqcRYGate(q, -1.5707957022690064, 14);
  sqcRZGate(q, 3.14143200971301, 14);
  sqcRYGate(q, -1.5707920678671474, 15);
  sqcRZGate(q, -1.6605073654516342, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 2.0244952689304054, 0);
  sqcRZGate(q, 0.6466990100700807, 0);
  sqcRYGate(q, 1.5708301192832952, 1);
  sqcRZGate(q, -0.1934618123636824, 1);
  sqcRYGate(q, -1.5707965425477968, 2);
  sqcRZGate(q, 0.6718147414803026, 2);
  sqcRYGate(q, -1.57079039579214, 3);
  sqcRZGate(q, 2.701315237343953, 3);
  sqcRYGate(q, -1.5707879761169523, 4);
  sqcRZGate(q, 1.57080246374918, 4);
  sqcRYGate(q, 0.049702457438252884, 5);
  sqcRZGate(q, 0.0005555661474507042, 5);
  sqcRYGate(q, 0.00018961594345946628, 6);
  sqcRZGate(q, -2.3305368383855805, 6);
  sqcRYGate(q, -3.1358050870356, 7);
  sqcRZGate(q, -0.10612574295504373, 7);
  sqcRYGate(q, -0.0005094307713341757, 8);
  sqcRZGate(q, -1.1980526633544377, 8);
  sqcRYGate(q, 3.1415906635539, 9);
  sqcRZGate(q, -2.8077130578254357, 9);
  sqcRYGate(q, 1.570792302021342, 10);
  sqcRZGate(q, -2.2816113340374677, 10);
  sqcRYGate(q, -3.727506931223858e-06, 11);
  sqcRZGate(q, 1.399114562188577, 11);
  sqcRYGate(q, -1.5707953744869374, 12);
  sqcRZGate(q, -0.47514685367994053, 12);
  sqcRYGate(q, 1.572977390099757, 13);
  sqcRZGate(q, 1.7668100158238034, 13);
  sqcRYGate(q, 2.0399596068723955, 14);
  sqcRZGate(q, -2.9080492683335026, 14);
  sqcRYGate(q, 0.031979582096417936, 15);
  sqcRZGate(q, -0.03803327954925474, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -2.2472815635905414, 0);
  sqcRZGate(q, 0.1718603785045492, 0);
  sqcRYGate(q, -5.9759876432429005e-06, 1);
  sqcRZGate(q, 1.3965134186935904, 1);
  sqcRYGate(q, 0.0003203722277795862, 2);
  sqcRZGate(q, 2.4887396818208343, 2);
  sqcRYGate(q, -3.14159159002732, 3);
  sqcRZGate(q, -3.1325044470891985, 3);
  sqcRYGate(q, -1.570794326332501, 4);
  sqcRZGate(q, 0.46425647305359696, 4);
  sqcRYGate(q, -1.9067149382306714, 5);
  sqcRZGate(q, -3.1415840125407906, 5);
  sqcRYGate(q, -1.5707990105344463, 6);
  sqcRZGate(q, -1.555407100890367, 6);
  sqcRYGate(q, -2.4833017295184074, 7);
  sqcRZGate(q, -2.6042045059114973, 7);
  sqcRYGate(q, -1.5708062916905956, 8);
  sqcRZGate(q, 2.1677706936474093, 8);
  sqcRYGate(q, 2.6788625778733497, 9);
  sqcRZGate(q, 2.4071443571186997, 9);
  sqcRYGate(q, 7.512335449747027e-06, 10);
  sqcRZGate(q, -1.7173818540330004, 10);
  sqcRYGate(q, -3.0897878966428594, 11);
  sqcRZGate(q, -1.5724874061931278, 11);
  sqcRYGate(q, 1.5707925290138807, 12);
  sqcRZGate(q, -0.8919661967963545, 12);
  sqcRYGate(q, -3.1415905764848793, 13);
  sqcRZGate(q, 0.1960158477643832, 13);
  sqcRYGate(q, -3.127505961677324, 14);
  sqcRZGate(q, -1.3372028054365164, 14);
  sqcRYGate(q, -3.1383548613093684, 15);
  sqcRZGate(q, -1.8308985980685328, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.0297464163122834, 0);
  sqcRZGate(q, -1.6589538230388299, 0);
  sqcRYGate(q, -4.3092135229017e-06, 1);
  sqcRZGate(q, 2.078295423674787, 1);
  sqcRYGate(q, 3.139587011898307, 2);
  sqcRZGate(q, -3.1226295483678217, 2);
  sqcRYGate(q, -0.04167965167902327, 3);
  sqcRZGate(q, 3.106950288721725, 3);
  sqcRYGate(q, 3.14156541457251, 4);
  sqcRZGate(q, -2.078723784983751, 4);
  sqcRYGate(q, 1.5708154509910246, 5);
  sqcRZGate(q, 0.20238195339645418, 5);
  sqcRYGate(q, -3.133547662649169, 6);
  sqcRZGate(q, -1.5554090797962221, 6);
  sqcRYGate(q, -9.576459496595268e-06, 7);
  sqcRZGate(q, -0.5365290577221664, 7);
  sqcRYGate(q, -0.0003048305248127276, 8);
  sqcRZGate(q, -0.9854192841630862, 8);
  sqcRYGate(q, 3.001455551480577e-07, 9);
  sqcRZGate(q, -2.72967347755648, 9);
  sqcRYGate(q, 2.22904876926214e-06, 10);
  sqcRZGate(q, 1.821646768236288, 10);
  sqcRYGate(q, 1.570218729532134, 11);
  sqcRZGate(q, -2.0521877081117643, 11);
  sqcRYGate(q, -1.5119572282799426e-06, 12);
  sqcRZGate(q, 0.010937326301717721, 12);
  sqcRYGate(q, 1.5707947127915698, 13);
  sqcRZGate(q, -1.57079588301439, 13);
  sqcRYGate(q, -1.5707968599554558, 14);
  sqcRZGate(q, 0.7679830493303585, 14);
  sqcRYGate(q, -1.5699211989261768, 15);
  sqcRZGate(q, 2.9559209872213357, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.5720041606151403, 0);
  sqcRZGate(q, 0.12634797807583362, 0);
  sqcRYGate(q, 3.1415322674384516, 1);
  sqcRZGate(q, -0.014700147405376283, 1);
  sqcRYGate(q, -1.570792875552266, 2);
  sqcRZGate(q, 2.5865705029776525, 2);
  sqcRYGate(q, 0.004766554110981227, 3);
  sqcRZGate(q, -1.67712588016852, 3);
  sqcRYGate(q, -3.1415913985141257, 4);
  sqcRZGate(q, 1.6144012996132533, 4);
  sqcRYGate(q, 1.8978407943692392, 5);
  sqcRZGate(q, 3.0651622121015203, 5);
  sqcRYGate(q, 1.5708059723502235, 6);
  sqcRZGate(q, -2.128031831111948, 6);
  sqcRYGate(q, -1.5708297354088305, 7);
  sqcRZGate(q, 1.4470164430233412, 7);
  sqcRYGate(q, 2.9479981536974706e-06, 8);
  sqcRZGate(q, 1.0025484376416944, 8);
  sqcRYGate(q, 3.854016711102304e-05, 9);
  sqcRZGate(q, -1.0136645825640587, 9);
  sqcRYGate(q, -3.1415899457557717, 10);
  sqcRZGate(q, 2.009630032043554, 10);
  sqcRYGate(q, -1.5707960797434266, 11);
  sqcRZGate(q, -0.1237866659680863, 11);
  sqcRYGate(q, -3.1415907316878773, 12);
  sqcRZGate(q, 2.2072723808388464, 12);
  sqcRYGate(q, 1.491506202629947, 13);
  sqcRZGate(q, 1.4470090330545693, 13);
  sqcRYGate(q, 3.141589735698886, 14);
  sqcRZGate(q, 2.286371041804526, 14);
  sqcRYGate(q, 0.00039815756240013656, 15);
  sqcRZGate(q, -3.079589508711174, 15);

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
