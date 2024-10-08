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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.0076675054417077e-07, 0);
  sqcRZGate(q, -1.774689878006364, 0);
  sqcRYGate(q, -3.015802510713459, 1);
  sqcRZGate(q, 2.9708541434100213, 1);
  sqcRYGate(q, 3.1415876810401757, 2);
  sqcRZGate(q, 2.6167615727537266, 2);
  sqcRYGate(q, 0.23001442222490034, 3);
  sqcRZGate(q, -0.08068657020113834, 3);
  sqcRYGate(q, 3.1415918952945834, 4);
  sqcRZGate(q, -0.4799269947520993, 4);
  sqcRYGate(q, -2.8920515430363416, 5);
  sqcRZGate(q, -3.137206428153696, 5);
  sqcRYGate(q, 3.1415917677874865, 6);
  sqcRZGate(q, 0.4658728034802318, 6);
  sqcRYGate(q, 0.5503547701730627, 7);
  sqcRZGate(q, -0.0015017211635593496, 7);
  sqcRYGate(q, 1.5707912920818325, 8);
  sqcRZGate(q, 1.570775409688821, 8);
  sqcRYGate(q, -0.39230786438564486, 9);
  sqcRZGate(q, 0.20451544442242484, 9);
  sqcRYGate(q, -4.3218743250861273e-08, 10);
  sqcRZGate(q, 3.0054980116032337, 10);
  sqcRYGate(q, -0.06327266778434826, 11);
  sqcRZGate(q, -1.5685514404396155, 11);
  sqcRYGate(q, -1.4519039748250862e-07, 12);
  sqcRZGate(q, -2.0303040165726363, 12);
  sqcRYGate(q, 2.0347368738574705, 13);
  sqcRZGate(q, -1.569732749162802, 13);
  sqcRYGate(q, 3.141592496853008, 14);
  sqcRZGate(q, 2.968349448659794, 14);
  sqcRYGate(q, 2.658574226974778, 15);
  sqcRZGate(q, -0.049754085679844504, 15);
  sqcRYGate(q, 3.1415913401762112, 16);
  sqcRZGate(q, 0.24177961594886455, 16);
  sqcRYGate(q, 0.9417529241293812, 17);
  sqcRZGate(q, -0.005842351558262116, 17);
  sqcRYGate(q, -1.5707974299634746, 18);
  sqcRZGate(q, -2.1893588705572995, 18);
  sqcRYGate(q, -1.9543145391899888, 19);
  sqcRZGate(q, 1.1162587294020165, 19);
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
  sqcRYGate(q, 6.040909865072147e-08, 0);
  sqcRZGate(q, 2.907364180671582, 0);
  sqcRYGate(q, -1.085991089636826, 1);
  sqcRZGate(q, 1.591696363687003, 1);
  sqcRYGate(q, -1.5707925929546664, 2);
  sqcRZGate(q, 0.4583297872218683, 2);
  sqcRYGate(q, 2.104089328520338, 3);
  sqcRZGate(q, -1.3882471477465987, 3);
  sqcRYGate(q, -7.900477800859562e-07, 4);
  sqcRZGate(q, 2.2613006332824526, 4);
  sqcRYGate(q, 2.8719034267243604, 5);
  sqcRZGate(q, 1.5735970153222834, 5);
  sqcRYGate(q, -1.5560554375402407, 6);
  sqcRZGate(q, 1.7576168820648208, 6);
  sqcRYGate(q, -1.5786953216266113, 7);
  sqcRZGate(q, 0.7965206352363658, 7);
  sqcRYGate(q, -0.21796096322301695, 8);
  sqcRZGate(q, 1.6372270160270723, 8);
  sqcRYGate(q, -3.141589789812675, 9);
  sqcRZGate(q, 1.987893264736094, 9);
  sqcRYGate(q, 3.1399519974148338, 10);
  sqcRZGate(q, 0.9818738331203427, 10);
  sqcRYGate(q, 1.5707610934763636, 11);
  sqcRZGate(q, 0.49923115487193037, 11);
  sqcRYGate(q, 1.5707964210458307, 12);
  sqcRZGate(q, -0.45136254217358507, 12);
  sqcRYGate(q, -1.5725224002364246, 13);
  sqcRZGate(q, -1.8980682030911435, 13);
  sqcRYGate(q, 3.141592541938726, 14);
  sqcRZGate(q, 2.4067218259024106, 14);
  sqcRYGate(q, 3.1305807632228553, 15);
  sqcRZGate(q, -1.6179380664803416, 15);
  sqcRYGate(q, 1.570825796281151, 16);
  sqcRZGate(q, -2.0251548827500354, 16);
  sqcRYGate(q, -1.2075876347844205, 17);
  sqcRZGate(q, -1.4515504424242591, 17);
  sqcRYGate(q, 3.1415912994279793, 18);
  sqcRZGate(q, 0.9522338349045609, 18);
  sqcRYGate(q, 3.1415926506932883, 19);
  sqcRZGate(q, -2.447033928950297, 19);
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
  sqcRYGate(q, 2.12889457181818, 0);
  sqcRZGate(q, 0.25118829786946456, 0);
  sqcRYGate(q, 1.5630147321034706, 1);
  sqcRZGate(q, 2.438102452965738, 1);
  sqcRYGate(q, -3.141591070976468, 2);
  sqcRZGate(q, 0.45832674411677893, 2);
  sqcRYGate(q, -5.3696683529134014e-08, 3);
  sqcRZGate(q, -1.7650339010729477, 3);
  sqcRYGate(q, 1.0194097524448698, 4);
  sqcRZGate(q, 0.24260558073061755, 4);
  sqcRYGate(q, 1.569886629603296, 5);
  sqcRZGate(q, -0.8179923197493721, 5);
  sqcRYGate(q, -2.4822121247325413e-08, 6);
  sqcRZGate(q, 1.4009917137514911, 6);
  sqcRYGate(q, -3.132106796516305, 7);
  sqcRZGate(q, -0.7736912064499561, 7);
  sqcRYGate(q, 3.141591761457412, 8);
  sqcRZGate(q, -1.5043870371465218, 8);
  sqcRYGate(q, -3.1363077529833503, 9);
  sqcRZGate(q, 2.2532167057197645, 9);
  sqcRYGate(q, 2.2604300861100084, 10);
  sqcRZGate(q, 0.5978862635166297, 10);
  sqcRYGate(q, -2.9930039566129736, 11);
  sqcRZGate(q, 0.149202865106259, 11);
  sqcRYGate(q, -2.0517322311639672e-07, 12);
  sqcRZGate(q, -2.6902302172473056, 12);
  sqcRYGate(q, 3.141592627555793, 13);
  sqcRZGate(q, -1.778779956802964, 13);
  sqcRYGate(q, 1.0937433534096854, 14);
  sqcRZGate(q, 9.664253478280926e-05, 14);
  sqcRYGate(q, -1.358106086688338, 15);
  sqcRZGate(q, -1.581206054946619, 15);
  sqcRYGate(q, -1.570796970333034, 16);
  sqcRZGate(q, -0.6168735319093956, 16);
  sqcRYGate(q, 0.04882648980653029, 17);
  sqcRZGate(q, -2.12037851037868, 17);
  sqcRYGate(q, 1.5707975186168104, 18);
  sqcRZGate(q, -2.6154882620236997, 18);
  sqcRYGate(q, -0.003111710091317832, 19);
  sqcRZGate(q, -1.1514014591473847, 19);
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
  sqcRYGate(q, 3.3209248727911745e-07, 0);
  sqcRZGate(q, 2.7963552051170697, 0);
  sqcRYGate(q, 1.570825650583625, 1);
  sqcRZGate(q, 1.570817637151694, 1);
  sqcRYGate(q, 1.5707964485522583, 2);
  sqcRZGate(q, 1.5512406065264024, 2);
  sqcRYGate(q, 1.5438550304558993, 3);
  sqcRZGate(q, 1.5694739362687113, 3);
  sqcRYGate(q, -6.367117768108765e-08, 4);
  sqcRZGate(q, -1.446890723618639, 4);
  sqcRYGate(q, 0.00010740106168922874, 5);
  sqcRZGate(q, 2.409348998249419, 5);
  sqcRYGate(q, -3.873419093025632e-06, 6);
  sqcRZGate(q, 1.1028798341860373, 6);
  sqcRYGate(q, 1.7778844835073375, 7);
  sqcRZGate(q, -1.630022039529049, 7);
  sqcRYGate(q, -1.5708018509525488, 8);
  sqcRZGate(q, -1.5707957693557582, 8);
  sqcRYGate(q, 1.67086659544462e-06, 9);
  sqcRZGate(q, -2.2586787939311312, 9);
  sqcRYGate(q, -3.141111700831307, 10);
  sqcRZGate(q, 0.5179331150188784, 10);
  sqcRYGate(q, -1.5707943815827328, 11);
  sqcRZGate(q, -1.5707811462986987, 11);
  sqcRYGate(q, -1.5707961925373208, 12);
  sqcRZGate(q, -2.2181249793209457, 12);
  sqcRYGate(q, 1.570272172770778, 13);
  sqcRZGate(q, -1.5713426260575156, 13);
  sqcRYGate(q, 0.23356962185352664, 14);
  sqcRZGate(q, -0.24607207819048593, 14);
  sqcRYGate(q, 0.0068470283366970355, 15);
  sqcRZGate(q, 0.01183586443250474, 15);
  sqcRYGate(q, -1.5677488791610017e-06, 16);
  sqcRZGate(q, -2.524718549695593, 16);
  sqcRYGate(q, 4.66751804230941e-07, 17);
  sqcRZGate(q, -2.7381568547327846, 17);
  sqcRYGate(q, -1.5724858879000145, 18);
  sqcRZGate(q, 0.8817569642714636, 18);
  sqcRYGate(q, -3.104377549936398, 19);
  sqcRZGate(q, -0.01122933155358652, 19);
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
  sqcRYGate(q, 1.0488777409734966e-06, 0);
  sqcRZGate(q, 2.7958028128522416, 0);
  sqcRYGate(q, -1.723660151240221, 1);
  sqcRZGate(q, -2.221861332282439, 1);
  sqcRYGate(q, -3.1415926059482953, 2);
  sqcRZGate(q, 2.6821446705975784, 2);
  sqcRYGate(q, -3.0956821251898785, 3);
  sqcRZGate(q, -2.223201000104913, 3);
  sqcRYGate(q, 7.807339077459119e-07, 4);
  sqcRZGate(q, -0.8063655039267213, 4);
  sqcRYGate(q, -1.572397859455359, 5);
  sqcRZGate(q, 2.4917655860405405, 5);
  sqcRYGate(q, -3.141592557304259, 6);
  sqcRZGate(q, -0.7742017159341437, 6);
  sqcRYGate(q, -3.034172614442813, 7);
  sqcRZGate(q, 0.8561428144110765, 7);
  sqcRYGate(q, 1.5707964574054865, 8);
  sqcRZGate(q, -1.894111256447025, 8);
  sqcRYGate(q, -1.5383719950503183, 9);
  sqcRZGate(q, 0.9196214072036808, 9);
  sqcRYGate(q, 1.2903234036798494e-08, 10);
  sqcRZGate(q, 0.22485650043412042, 10);
  sqcRYGate(q, 1.4058336317459013, 11);
  sqcRZGate(q, 0.9192613530071974, 11);
  sqcRYGate(q, -3.141592308490028, 12);
  sqcRZGate(q, -2.0732133267879203, 12);
  sqcRYGate(q, 0.0682012972373709, 13);
  sqcRZGate(q, 0.9196865617827918, 13);
  sqcRYGate(q, 3.1415924053236384, 14);
  sqcRZGate(q, -0.10107185325560052, 14);
  sqcRYGate(q, -0.11537804732939971, 15);
  sqcRZGate(q, -2.223601355065658, 15);
  sqcRYGate(q, 1.5707967964389633, 16);
  sqcRZGate(q, 0.14506709268108225, 16);
  sqcRYGate(q, 0.00611145184250006, 17);
  sqcRZGate(q, -0.6244635750916688, 17);
  sqcRYGate(q, -1.447933649525318e-06, 18);
  sqcRZGate(q, -2.307417390829432, 18);
  sqcRYGate(q, -2.611997622596259, 19);
  sqcRZGate(q, 0.9099636209598772, 19);

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
