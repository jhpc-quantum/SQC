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

  sqcRYGate(q, 0.049917962116680224, 0);
  sqcRZGate(q, 1.5639838520994962, 0);
  sqcRYGate(q, -1.5696125125190143, 1);
  sqcRZGate(q, -0.6659322932528154, 1);
  sqcRYGate(q, 0.11001894545951885, 2);
  sqcRZGate(q, 1.5703049610326056, 2);
  sqcRYGate(q, 1.3155122093966813, 3);
  sqcRZGate(q, -1.5638898964700987, 3);
  sqcRYGate(q, -0.26929123108790787, 4);
  sqcRZGate(q, 1.5708250785954239, 4);
  sqcRYGate(q, -0.3888012595600305, 5);
  sqcRZGate(q, 9.794462491719003e-06, 5);
  sqcRYGate(q, 1.570801553275104, 6);
  sqcRZGate(q, 3.1246077634281764, 6);
  sqcRYGate(q, -1.5466941161174659, 7);
  sqcRZGate(q, 3.141591127200724, 7);
  sqcRYGate(q, 1.5708005450758291, 8);
  sqcRZGate(q, 3.1069527384537197, 8);
  sqcRYGate(q, 3.130067400829907, 9);
  sqcRZGate(q, -1.5709369012966787, 9);
  sqcRYGate(q, 2.3962693368274297, 10);
  sqcRZGate(q, 1.5708617812558279, 10);
  sqcRYGate(q, -0.7514463109021323, 11);
  sqcRZGate(q, -1.527870601090181e-05, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.22840099300232897, 0);
  sqcRZGate(q, -1.569477972769068, 0);
  sqcRYGate(q, -1.5709679614771979, 1);
  sqcRZGate(q, 0.00038659564917953304, 1);
  sqcRYGate(q, 1.5707891583298403, 2);
  sqcRZGate(q, -2.0041013890558466, 2);
  sqcRYGate(q, -3.1284327236873217, 3);
  sqcRZGate(q, 1.5772883295756526, 3);
  sqcRYGate(q, -2.6519382811835412, 4);
  sqcRZGate(q, -3.1394893053632535, 4);
  sqcRYGate(q, 0.01867927814615071, 5);
  sqcRZGate(q, -1.5707294793409077, 5);
  sqcRYGate(q, 0.430355724990369, 6);
  sqcRZGate(q, -2.284969424953785, 6);
  sqcRYGate(q, 1.5707979422832943, 7);
  sqcRZGate(q, 1.1769828298744145, 7);
  sqcRYGate(q, -0.1257951582521202, 8);
  sqcRZGate(q, -2.8885217763827904, 8);
  sqcRYGate(q, -2.894708903841544, 9);
  sqcRZGate(q, 1.5707778293214885, 9);
  sqcRYGate(q, -3.1121587594284357, 10);
  sqcRZGate(q, -1.5707977052335984, 10);
  sqcRYGate(q, 0.7424072324731702, 11);
  sqcRZGate(q, -3.1414672752300397, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.076453821954601, 0);
  sqcRZGate(q, -1.5704425681242136, 0);
  sqcRYGate(q, -1.569150748582808, 1);
  sqcRZGate(q, 3.106781662216533, 1);
  sqcRYGate(q, 1.5707855785737053, 2);
  sqcRZGate(q, 1.5707980884852848, 2);
  sqcRYGate(q, -1.9673923141205754, 3);
  sqcRZGate(q, 1.5706657881755617, 3);
  sqcRYGate(q, 3.1324928106136842, 4);
  sqcRZGate(q, -1.568716583407384, 4);
  sqcRYGate(q, 1.0950141375395788, 5);
  sqcRZGate(q, -1.5710279962139733, 5);
  sqcRYGate(q, 2.8317142485306968, 6);
  sqcRZGate(q, 2.4976070377671995, 6);
  sqcRYGate(q, -1.7335521661105373, 7);
  sqcRZGate(q, -1.5008731428569684, 7);
  sqcRYGate(q, 1.570789785722752, 8);
  sqcRZGate(q, -1.570808383221766, 8);
  sqcRYGate(q, 1.5707955601479089, 9);
  sqcRZGate(q, -0.2178241443266131, 9);
  sqcRYGate(q, 0.7996268530090251, 10);
  sqcRZGate(q, -0.00013721942871091256, 10);
  sqcRYGate(q, 1.8425551599945578, 11);
  sqcRZGate(q, 1.5708146853489247, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.0747397413503164, 0);
  sqcRZGate(q, -6.722617724719271e-06, 0);
  sqcRYGate(q, 1.5708603039100346, 1);
  sqcRZGate(q, -1.5708012321759464, 1);
  sqcRYGate(q, 1.6697815921338925, 2);
  sqcRZGate(q, 5.950779897187655e-05, 2);
  sqcRYGate(q, -3.0999875330815905, 3);
  sqcRZGate(q, -0.00011359797106932291, 3);
  sqcRYGate(q, 0.14671312400928993, 4);
  sqcRZGate(q, -3.1415630490257183, 4);
  sqcRYGate(q, 3.1252292742419465, 5);
  sqcRZGate(q, -1.5714183352348252, 5);
  sqcRYGate(q, -1.5708042386481411, 6);
  sqcRZGate(q, 3.1415847513885704, 6);
  sqcRYGate(q, -0.01669658755705298, 7);
  sqcRZGate(q, -2.813766641199231, 7);
  sqcRYGate(q, 3.0264303657397846, 8);
  sqcRZGate(q, 1.570803983688375, 8);
  sqcRYGate(q, 0.014590703372985738, 9);
  sqcRZGate(q, 1.6647243757178944, 9);
  sqcRYGate(q, 0.03044171681991603, 10);
  sqcRZGate(q, -3.1414378187209664, 10);
  sqcRYGate(q, 2.065133517203474, 11);
  sqcRZGate(q, 1.5707873822859368, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.845315099437209, 0);
  sqcRZGate(q, 2.8726423349595662, 0);
  sqcRYGate(q, 2.7317820417912504, 1);
  sqcRZGate(q, -0.2689923811825581, 1);
  sqcRYGate(q, -2.626590127809809, 2);
  sqcRZGate(q, 2.8726402704824796, 2);
  sqcRYGate(q, 2.537906035315911, 3);
  sqcRZGate(q, -0.26900771739048057, 3);
  sqcRYGate(q, -1.8387545486496377, 4);
  sqcRZGate(q, 2.872555830140884, 4);
  sqcRYGate(q, 0.12337411944448795, 5);
  sqcRZGate(q, 2.8729858495936247, 5);
  sqcRYGate(q, -2.088387254778286, 6);
  sqcRZGate(q, 2.8725620397308815, 6);
  sqcRYGate(q, 1.5708119988793885, 7);
  sqcRZGate(q, -1.8398188719301283, 7);
  sqcRYGate(q, -2.1320280488794197, 8);
  sqcRZGate(q, 2.872563345413988, 8);
  sqcRYGate(q, 1.5707995335229086, 9);
  sqcRZGate(q, 1.3017667132203645, 9);
  sqcRYGate(q, -0.10301742403493819, 10);
  sqcRZGate(q, 2.872579996397895, 10);
  sqcRYGate(q, -1.4417007857921078, 11);
  sqcRZGate(q, -0.26895967868427595, 11);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
