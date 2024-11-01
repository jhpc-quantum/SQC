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

  sqcRYGate(q, -1.0940597535259275, 0);
  sqcRZGate(q, 1.515130357894341, 0);
  sqcRYGate(q, -0.17318702302033023, 1);
  sqcRZGate(q, -2.785913470788271, 1);
  sqcRYGate(q, 0.0005953650096310881, 2);
  sqcRZGate(q, 2.5895173488154537, 2);
  sqcRYGate(q, -3.141389590238762, 3);
  sqcRZGate(q, -0.9730838018424973, 3);
  sqcRYGate(q, 0.001383816073779798, 4);
  sqcRZGate(q, 2.572097646927309, 4);
  sqcRYGate(q, -3.141538971460374, 5);
  sqcRZGate(q, 2.9724519851907436, 5);
  sqcRYGate(q, -0.6597685318379929, 6);
  sqcRZGate(q, 2.6573409930228182, 6);
  sqcRYGate(q, -3.141508085652401, 7);
  sqcRZGate(q, 3.0768320450770994, 7);
  sqcRYGate(q, 1.5706693958202833, 8);
  sqcRZGate(q, 0.3150975591742119, 8);
  sqcRYGate(q, -3.1415908498449525, 9);
  sqcRZGate(q, 2.4366847727430425, 9);
  sqcRYGate(q, -7.458562601653815e-05, 10);
  sqcRZGate(q, 1.017525752371926, 10);
  sqcRYGate(q, -1.5708709866199868, 11);
  sqcRZGate(q, -1.5744017566289739, 11);
  sqcRYGate(q, -3.1415836377168875, 12);
  sqcRZGate(q, 0.48696843943738144, 12);
  sqcRYGate(q, 0.1741822847634369, 13);
  sqcRZGate(q, 2.4837600423209176, 13);
  sqcRYGate(q, -3.1412034006306886, 14);
  sqcRZGate(q, -0.5603569621988955, 14);
  sqcRYGate(q, -3.1360329539113607, 15);
  sqcRZGate(q, -0.5501100192290734, 15);
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
  sqcRYGate(q, -2.1028816402670962, 0);
  sqcRZGate(q, 2.766485712041093, 0);
  sqcRYGate(q, -1.3621532778921779, 1);
  sqcRZGate(q, -0.4554008393676259, 1);
  sqcRYGate(q, -0.0009007679591282431, 2);
  sqcRZGate(q, 0.5445699087921261, 2);
  sqcRYGate(q, 0.0003899065572738892, 3);
  sqcRZGate(q, -1.80826469770082, 3);
  sqcRYGate(q, -0.01453279645707534, 4);
  sqcRZGate(q, -2.9094174796819563, 4);
  sqcRYGate(q, -1.5707764411807759, 5);
  sqcRZGate(q, 3.1415276639722314, 5);
  sqcRYGate(q, -3.1415397087853707, 6);
  sqcRZGate(q, -2.812651251632929, 6);
  sqcRYGate(q, 2.425474658669978, 7);
  sqcRZGate(q, 1.5709578617406246, 7);
  sqcRYGate(q, 0.00027214232729289023, 8);
  sqcRZGate(q, 1.2560115987157652, 8);
  sqcRYGate(q, 0.00013649741947752148, 9);
  sqcRZGate(q, -2.239874332628786, 9);
  sqcRYGate(q, 2.588451282590323, 10);
  sqcRZGate(q, 0.0020036828566194487, 10);
  sqcRYGate(q, -1.5710500082158827, 11);
  sqcRZGate(q, -1.831318455062759, 11);
  sqcRYGate(q, -3.074176193465657, 12);
  sqcRZGate(q, -0.08596581954927453, 12);
  sqcRYGate(q, -0.0008659401873891806, 13);
  sqcRZGate(q, -0.18577709197420234, 13);
  sqcRYGate(q, 0.00014865624002702305, 14);
  sqcRZGate(q, 2.6848446264413233, 14);
  sqcRYGate(q, -1.5710538932396458, 15);
  sqcRZGate(q, -1.5697050429422443, 15);
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
  sqcRYGate(q, 1.1134565476341651, 0);
  sqcRZGate(q, -1.696747141853892, 0);
  sqcRYGate(q, -3.0616499374395634, 1);
  sqcRZGate(q, -1.2245811660466628, 1);
  sqcRYGate(q, -1.5601424041119238, 2);
  sqcRZGate(q, 1.5750279095241326, 2);
  sqcRYGate(q, 1.5710478920417854, 3);
  sqcRZGate(q, 1.5707198184436573, 3);
  sqcRYGate(q, -4.881074771656557e-05, 4);
  sqcRZGate(q, 2.8795496038993322, 4);
  sqcRYGate(q, -1.5708417281063356, 5);
  sqcRZGate(q, 1.4074559771485955, 5);
  sqcRYGate(q, -3.141556546608074, 6);
  sqcRZGate(q, -0.7574531777875267, 6);
  sqcRYGate(q, 1.6719972630486941, 7);
  sqcRZGate(q, -1.5709367748537078, 7);
  sqcRYGate(q, -1.5708066884521152, 8);
  sqcRZGate(q, -1.5744909504222813, 8);
  sqcRYGate(q, -0.10752985213489019, 9);
  sqcRZGate(q, -1.035377960467967, 9);
  sqcRYGate(q, 1.5633859139632809, 10);
  sqcRZGate(q, 0.5150700622183617, 10);
  sqcRYGate(q, 3.1414379765383966, 11);
  sqcRZGate(q, 2.8701552597409794, 11);
  sqcRYGate(q, 3.1229567307059027, 12);
  sqcRZGate(q, -0.09170783186849352, 12);
  sqcRYGate(q, -3.140794962839804, 13);
  sqcRZGate(q, -0.8542020096982604, 13);
  sqcRYGate(q, 0.00034991921774452095, 14);
  sqcRZGate(q, -3.001811382772427, 14);
  sqcRYGate(q, -1.5780634656427903, 15);
  sqcRZGate(q, 2.8921537438313805, 15);
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
  sqcRYGate(q, -1.503168676110921, 0);
  sqcRZGate(q, 3.0368196520955375, 0);
  sqcRYGate(q, 1.6428950992905382, 1);
  sqcRZGate(q, -2.01123616226368, 1);
  sqcRYGate(q, 1.5708866338770147, 2);
  sqcRZGate(q, -0.6972807459143919, 2);
  sqcRYGate(q, -1.5707457055673446, 3);
  sqcRZGate(q, 1.9102141799089554, 3);
  sqcRYGate(q, 1.5707535898578238, 4);
  sqcRZGate(q, 3.1058163439572883, 4);
  sqcRYGate(q, 0.013544206162997341, 5);
  sqcRZGate(q, 1.7344006659970779, 5);
  sqcRYGate(q, -1.5707822298419973, 6);
  sqcRZGate(q, -3.1414578151440473, 6);
  sqcRYGate(q, -1.5700776335683517, 7);
  sqcRZGate(q, -1.0900333101904442, 7);
  sqcRYGate(q, 8.488814783280674e-05, 8);
  sqcRZGate(q, -1.5664043675583674, 8);
  sqcRYGate(q, -1.2282075445568805e-06, 9);
  sqcRZGate(q, 2.6056819712038637, 9);
  sqcRYGate(q, -5.2425939768063756e-05, 10);
  sqcRZGate(q, 2.8118236487250994, 10);
  sqcRYGate(q, 3.087386003935988e-07, 11);
  sqcRZGate(q, 3.02144513345039, 11);
  sqcRYGate(q, -1.5707350974046417, 12);
  sqcRZGate(q, -0.0002865258066657716, 12);
  sqcRYGate(q, -1.4895474543774219, 13);
  sqcRZGate(q, 1.5718239600757122, 13);
  sqcRYGate(q, -1.569722965945636, 14);
  sqcRZGate(q, -3.1411277143375704, 14);
  sqcRYGate(q, 3.0859613390392053, 15);
  sqcRZGate(q, 2.887832195933287, 15);
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
  sqcRYGate(q, 2.4061225886842186, 0);
  sqcRZGate(q, 2.8705176216635953, 0);
  sqcRYGate(q, -0.7849937652920713, 1);
  sqcRZGate(q, -2.575437973180942, 1);
  sqcRYGate(q, 0.0008109907735835975, 2);
  sqcRZGate(q, 0.6560735076038808, 2);
  sqcRYGate(q, -6.942979852908593e-05, 3);
  sqcRZGate(q, -0.3808347652967686, 3);
  sqcRYGate(q, -3.1397053995865174, 4);
  sqcRZGate(q, 1.5267647725529976, 4);
  sqcRYGate(q, -1.570968814513612, 5);
  sqcRZGate(q, -2.6750845305674247, 5);
  sqcRYGate(q, -1.5707610357061974, 6);
  sqcRZGate(q, -1.1037515980318036, 6);
  sqcRYGate(q, 3.1396050421629185, 7);
  sqcRZGate(q, 2.8423051490345044, 7);
  sqcRYGate(q, 1.5708833542689957, 8);
  sqcRZGate(q, 2.586303791474597, 8);
  sqcRYGate(q, 1.570769994999246, 9);
  sqcRZGate(q, -0.6796187302921588, 9);
  sqcRYGate(q, 3.141530628957165, 10);
  sqcRZGate(q, 0.1855840094375107, 10);
  sqcRYGate(q, 3.1415782647301924, 11);
  sqcRZGate(q, 1.4397742617795277, 11);
  sqcRYGate(q, -1.570750601567536, 12);
  sqcRZGate(q, -0.0016179902176425287, 12);
  sqcRYGate(q, 1.5707927204951095, 13);
  sqcRZGate(q, -3.141554254949512, 13);
  sqcRYGate(q, 1.6751096582646463, 14);
  sqcRZGate(q, -3.141492783848955, 14);
  sqcRYGate(q, 1.5705508435371796, 15);
  sqcRZGate(q, 1.0039028406671564, 15);
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
  sqcRYGate(q, 0.9153181507966448, 0);
  sqcRZGate(q, -1.774784435493183, 0);
  sqcRYGate(q, 1.237888882392305, 1);
  sqcRZGate(q, 2.8140482538704505, 1);
  sqcRYGate(q, -1.5706888521354387, 2);
  sqcRZGate(q, 1.9318349532352386, 2);
  sqcRYGate(q, 3.00683778941651, 3);
  sqcRZGate(q, 2.822268642705346, 3);
  sqcRYGate(q, 0.5299727451700305, 4);
  sqcRZGate(q, 2.8501711689910953, 4);
  sqcRYGate(q, 3.141468681214365, 5);
  sqcRZGate(q, 2.0131468568892164, 5);
  sqcRYGate(q, -3.141590319069147, 6);
  sqcRZGate(q, -2.899734178554204, 6);
  sqcRYGate(q, 6.8725759387782e-07, 7);
  sqcRZGate(q, -0.7944421283667419, 7);
  sqcRYGate(q, -0.0004282252997844793, 8);
  sqcRZGate(q, 2.2031879377546453, 8);
  sqcRYGate(q, 3.1413318882965306, 9);
  sqcRZGate(q, -0.6796176817408314, 9);
  sqcRYGate(q, -1.5633979384976833, 10);
  sqcRZGate(q, 3.141591869033191, 10);
  sqcRYGate(q, -1.5707796034875676, 11);
  sqcRZGate(q, -3.1288593032022822, 11);
  sqcRYGate(q, -1.27359473458536, 12);
  sqcRZGate(q, -0.3275555997490154, 12);
  sqcRYGate(q, 1.5707104554049733, 13);
  sqcRZGate(q, -1.478083082750515, 13);
  sqcRYGate(q, 1.5707629260033424, 14);
  sqcRZGate(q, 0.5002437596844658, 14);
  sqcRYGate(q, 0.11703383883985863, 15);
  sqcRZGate(q, 0.21423180670303138, 15);
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
  sqcRYGate(q, 3.055825358744733, 0);
  sqcRZGate(q, 1.5696799197507458, 0);
  sqcRYGate(q, 1.5706177051578774, 1);
  sqcRZGate(q, -1.5706711927456711, 1);
  sqcRYGate(q, -9.954955022184463e-05, 2);
  sqcRZGate(q, -1.93185574946493, 2);
  sqcRYGate(q, 3.1414705191868553, 3);
  sqcRZGate(q, -0.31903608779838893, 3);
  sqcRYGate(q, -4.006251862254117e-05, 4);
  sqcRZGate(q, 1.874555604465983, 4);
  sqcRYGate(q, -0.01623789350923768, 5);
  sqcRZGate(q, 2.1485956706653253, 5);
  sqcRYGate(q, 0.00015268098530884792, 6);
  sqcRZGate(q, -1.3456400040144763, 6);
  sqcRYGate(q, -1.5701487618627992, 7);
  sqcRZGate(q, -2.491318635003842, 7);
  sqcRYGate(q, -1.5707979615813525, 8);
  sqcRZGate(q, -1.959907436671939, 8);
  sqcRYGate(q, 1.570692890555918, 9);
  sqcRZGate(q, -1.5706994037171116, 9);
  sqcRYGate(q, -1.5707946113054834, 10);
  sqcRZGate(q, 1.6026498763756318, 10);
  sqcRYGate(q, -1.5707721726895532, 11);
  sqcRZGate(q, 0.00031390515023055343, 11);
  sqcRYGate(q, 9.101950555939267e-06, 12);
  sqcRZGate(q, 0.7150092402991345, 12);
  sqcRYGate(q, -3.1413646200827565, 13);
  sqcRZGate(q, -1.468334134223473, 13);
  sqcRYGate(q, 3.141057995149819, 14);
  sqcRZGate(q, -2.2042792780650604, 14);
  sqcRYGate(q, 1.5639846500320829, 15);
  sqcRZGate(q, -3.140161353592527, 15);
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
  sqcRYGate(q, 1.5707965770808958, 0);
  sqcRZGate(q, -1.2201946810181443, 0);
  sqcRYGate(q, -1.4661386264078393, 1);
  sqcRZGate(q, 2.2459254398830906, 1);
  sqcRYGate(q, -2.059867973502607, 2);
  sqcRZGate(q, -2.7909094228762155, 2);
  sqcRYGate(q, -1.5709541916437881, 3);
  sqcRZGate(q, 0.6767740055124922, 3);
  sqcRYGate(q, 1.5708228462820157, 4);
  sqcRZGate(q, 1.921109593980442, 4);
  sqcRYGate(q, -3.1414220728061433, 5);
  sqcRZGate(q, -1.9112174938968556, 5);
  sqcRYGate(q, -1.570768638871254, 6);
  sqcRZGate(q, -2.790917068921775, 6);
  sqcRYGate(q, -0.00014148078190956423, 7);
  sqcRZGate(q, 1.5972023522615248, 7);
  sqcRYGate(q, -0.00010554050882665046, 8);
  sqcRZGate(q, 0.7398270010013697, 8);
  sqcRYGate(q, 1.5720187345936403, 9);
  sqcRZGate(q, -0.8939471681728941, 9);
  sqcRYGate(q, 0.0012096606699731353, 10);
  sqcRZGate(q, -2.8227948555994358, 10);
  sqcRYGate(q, 1.5701164563271286, 11);
  sqcRZGate(q, 2.247620259090713, 11);
  sqcRYGate(q, -3.1374331198802343, 12);
  sqcRZGate(q, 0.7393740807927848, 12);
  sqcRYGate(q, -1.5704129970799414, 13);
  sqcRZGate(q, 0.6769570604441606, 13);
  sqcRYGate(q, -0.0001394044206698943, 14);
  sqcRZGate(q, 3.0497125921840245, 14);
  sqcRYGate(q, -2.3843892457301212, 15);
  sqcRZGate(q, 2.2474358789851214, 15);

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
