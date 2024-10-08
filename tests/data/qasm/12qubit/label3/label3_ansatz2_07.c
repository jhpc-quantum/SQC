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

  sqcRYGate(q, -1.5708097094908577, 0);
  sqcRZGate(q, 0.42055102965156355, 0);
  sqcRYGate(q, 1.916940071400941, 1);
  sqcRZGate(q, 1.4519945795303926, 1);
  sqcRYGate(q, -1.5707989789861114, 2);
  sqcRZGate(q, -3.0789427346897544, 2);
  sqcRYGate(q, -1.570779587235047, 3);
  sqcRZGate(q, 1.2595368993516014, 3);
  sqcRYGate(q, -2.1314813917676934, 4);
  sqcRZGate(q, 3.1415922307228215, 4);
  sqcRYGate(q, -1.5708000106735929, 5);
  sqcRZGate(q, -0.4721044545274684, 5);
  sqcRYGate(q, -8.033805634344304e-05, 6);
  sqcRZGate(q, 2.855228668354128, 6);
  sqcRYGate(q, 5.396363711440699e-08, 7);
  sqcRZGate(q, 2.4264101844892494, 7);
  sqcRYGate(q, -1.9182520758356463, 8);
  sqcRZGate(q, 8.511224977221151e-07, 8);
  sqcRYGate(q, -0.22874489177076335, 9);
  sqcRZGate(q, -1.6729142380996664, 9);
  sqcRYGate(q, 1.6082848740802111, 10);
  sqcRZGate(q, -1.4376439943252635, 10);
  sqcRYGate(q, -3.141519166042134, 11);
  sqcRZGate(q, -2.910036774424067, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1415786198286413, 0);
  sqcRZGate(q, 2.739138935490264, 0);
  sqcRYGate(q, 8.998801712678528e-07, 1);
  sqcRZGate(q, 0.11881020108706493, 1);
  sqcRYGate(q, 3.141373285713775, 2);
  sqcRZGate(q, 1.636227886434132, 2);
  sqcRYGate(q, -0.00045869382374099803, 3);
  sqcRZGate(q, 0.4114507743062335, 3);
  sqcRYGate(q, 1.5707481199846702, 4);
  sqcRZGate(q, 1.5707942761422753, 4);
  sqcRYGate(q, -0.00019175414471828134, 5);
  sqcRZGate(q, -0.9331740598570927, 5);
  sqcRYGate(q, -1.5708014467589668, 6);
  sqcRZGate(q, 1.5722192113469304, 6);
  sqcRYGate(q, -4.240183216938402e-08, 7);
  sqcRZGate(q, 0.19828156898482785, 7);
  sqcRYGate(q, 1.5708438369152211, 8);
  sqcRZGate(q, -1.57079669890203, 8);
  sqcRYGate(q, -3.141587568732137, 9);
  sqcRZGate(q, 1.4686370039215222, 9);
  sqcRYGate(q, -5.778890889007018e-06, 10);
  sqcRZGate(q, -0.13314882693622693, 10);
  sqcRYGate(q, 3.139479947735802, 11);
  sqcRZGate(q, -0.010962180883264413, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.01367119752342037, 0);
  sqcRZGate(q, -0.802154940458198, 0);
  sqcRYGate(q, 2.3631195274957553, 1);
  sqcRZGate(q, -1.9427499052579584, 1);
  sqcRYGate(q, -0.3223965565247036, 2);
  sqcRZGate(q, 3.136457299075673, 2);
  sqcRYGate(q, -0.0001388587437416433, 3);
  sqcRZGate(q, -2.0827695575898297, 3);
  sqcRYGate(q, 1.5699928115052781, 4);
  sqcRZGate(q, 6.603058688448016e-05, 4);
  sqcRYGate(q, 0.7908836874978808, 5);
  sqcRZGate(q, 2.7127522916528433, 5);
  sqcRYGate(q, 1.5707971015432731, 6);
  sqcRZGate(q, 1.5707019986686843, 6);
  sqcRYGate(q, 4.846993902845349e-07, 7);
  sqcRZGate(q, 2.490086997257571, 7);
  sqcRYGate(q, -1.5699359482291813, 8);
  sqcRZGate(q, 2.3511047365867873e-05, 8);
  sqcRYGate(q, -1.5708005193675776, 9);
  sqcRZGate(q, 0.8792646721356432, 9);
  sqcRYGate(q, -1.517498130515623, 10);
  sqcRZGate(q, -3.14159198367694, 10);
  sqcRYGate(q, -1.57079248685719, 11);
  sqcRZGate(q, 1.57090008707339, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5710579752283258, 0);
  sqcRZGate(q, -3.1366921036670354, 0);
  sqcRYGate(q, -2.29386344026139e-05, 1);
  sqcRZGate(q, 2.180803622485894, 1);
  sqcRYGate(q, -1.5708223063914903, 2);
  sqcRZGate(q, 0.31661904753459513, 2);
  sqcRYGate(q, 2.6670299922315618e-05, 3);
  sqcRZGate(q, 1.9825530919163212, 3);
  sqcRYGate(q, 1.5242736867651399, 4);
  sqcRZGate(q, 1.5704850964424877, 4);
  sqcRYGate(q, 1.5708022997729065, 5);
  sqcRZGate(q, -3.1312532662536134, 5);
  sqcRYGate(q, 1.5704762841720505, 6);
  sqcRZGate(q, 1.5713570446382912, 6);
  sqcRYGate(q, 3.141592390220365, 7);
  sqcRZGate(q, 1.1519630621891424, 7);
  sqcRYGate(q, 1.5731173942652004, 8);
  sqcRZGate(q, 1.570386346872562, 8);
  sqcRYGate(q, -1.5708727867034362, 9);
  sqcRZGate(q, -0.004953024440447253, 9);
  sqcRYGate(q, 1.5706284422484142, 10);
  sqcRZGate(q, 1.4643784374661335, 10);
  sqcRYGate(q, -0.7042364647542962, 11);
  sqcRZGate(q, -1.57462584274782, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.41800858984582323, 0);
  sqcRZGate(q, 9.151021536180082e-05, 0);
  sqcRYGate(q, 3.3472686589414914e-05, 1);
  sqcRZGate(q, -1.7916656636578123, 1);
  sqcRYGate(q, -3.1411958376156703, 2);
  sqcRZGate(q, 0.2893360602585247, 2);
  sqcRYGate(q, -1.5707503480428953, 3);
  sqcRZGate(q, -1.5889339443451345, 3);
  sqcRYGate(q, -1.1135699369126955, 4);
  sqcRZGate(q, -3.1283135686732964, 4);
  sqcRYGate(q, 0.0022941591429690433, 5);
  sqcRZGate(q, -0.009885386672277736, 5);
  sqcRYGate(q, -1.6394936328111165, 6);
  sqcRZGate(q, 0.0003724716332142649, 6);
  sqcRYGate(q, -3.1415924117359446, 7);
  sqcRZGate(q, -0.5747230980349469, 7);
  sqcRYGate(q, 0.42292516400436475, 8);
  sqcRZGate(q, -3.1412892274642545, 8);
  sqcRYGate(q, 3.1278299183218343, 9);
  sqcRZGate(q, 1.6418627774375223, 9);
  sqcRYGate(q, 1.366357558207909e-05, 10);
  sqcRZGate(q, 1.6771671812541458, 10);
  sqcRYGate(q, -0.019251366826842715, 11);
  sqcRZGate(q, -1.1358846244721124, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 2.7866643546888805, 0);
  sqcRZGate(q, -5.1884586498256096e-05, 0);
  sqcRYGate(q, 0.018098597449721837, 1);
  sqcRZGate(q, 2.288855562289102, 1);
  sqcRYGate(q, -0.000997112371373682, 2);
  sqcRZGate(q, 0.022216944236461363, 2);
  sqcRYGate(q, 0.017555090640652336, 3);
  sqcRZGate(q, -1.2698996855022324, 3);
  sqcRYGate(q, 0.02616882314067226, 4);
  sqcRZGate(q, 3.1282519985309816, 4);
  sqcRYGate(q, 0.022165498330938505, 5);
  sqcRZGate(q, -1.4683467232076914, 5);
  sqcRYGate(q, -0.8351686386471365, 6);
  sqcRZGate(q, -0.0001619435398287905, 6);
  sqcRYGate(q, 2.3870154177488386e-08, 7);
  sqcRZGate(q, -0.30988967744303686, 7);
  sqcRYGate(q, -1.7449473186548237, 8);
  sqcRZGate(q, -3.1414665176454815, 8);
  sqcRYGate(q, -3.1415707209368224, 9);
  sqcRZGate(q, -0.9393802265086155, 9);
  sqcRYGate(q, 1.5707998108606582, 10);
  sqcRZGate(q, -2.949685848521699, 10);
  sqcRYGate(q, -2.1475966803130575e-05, 11);
  sqcRZGate(q, -2.64850589040479, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5708026623934703, 0);
  sqcRZGate(q, -1.68507836015202, 0);
  sqcRYGate(q, -3.1415195614069344, 1);
  sqcRZGate(q, -2.406363010375603, 1);
  sqcRYGate(q, -1.570797762566225, 2);
  sqcRZGate(q, -3.1167910457877026, 2);
  sqcRYGate(q, -0.0002623385354852266, 3);
  sqcRZGate(q, -0.28274963912396806, 3);
  sqcRYGate(q, 1.5708082547557387, 4);
  sqcRZGate(q, -2.4820870190404243, 4);
  sqcRYGate(q, 3.140986493862302, 5);
  sqcRZGate(q, 1.6987223725865475, 5);
  sqcRYGate(q, 1.5708106974250482, 6);
  sqcRZGate(q, -2.1489756591581495, 6);
  sqcRYGate(q, 3.1415916628300997, 7);
  sqcRZGate(q, -0.5406321645038332, 7);
  sqcRYGate(q, -1.570810297709907, 8);
  sqcRZGate(q, 2.7314583090330293, 8);
  sqcRYGate(q, -3.141582962207502, 9);
  sqcRZGate(q, -2.5851758409868166, 9);
  sqcRYGate(q, -1.2587965932300047e-05, 10);
  sqcRZGate(q, -1.2209579813239202, 10);
  sqcRYGate(q, -1.7571884193046117e-05, 11);
  sqcRZGate(q, -2.4960792660950926, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.024942738389248653, 0);
  sqcRZGate(q, 3.135822955307207, 0);
  sqcRYGate(q, 1.6371829859003197, 1);
  sqcRZGate(q, 0.10425737617911904, 1);
  sqcRYGate(q, 1.5711180359789978, 2);
  sqcRZGate(q, -1.7634455047995097, 2);
  sqcRYGate(q, -1.8243949659644798, 3);
  sqcRZGate(q, 1.2872281474276015, 3);
  sqcRYGate(q, 3.101013931149204, 4);
  sqcRZGate(q, -0.38393490503634453, 4);
  sqcRYGate(q, -3.141568051174306, 5);
  sqcRZGate(q, 2.9462133975734917, 5);
  sqcRYGate(q, -0.029770585331404444, 6);
  sqcRZGate(q, -0.6359948922369603, 6);
  sqcRYGate(q, -1.57079450596318, 7);
  sqcRZGate(q, 1.5707967490202677, 7);
  sqcRYGate(q, -0.062161036963258955, 8);
  sqcRZGate(q, 1.8020334247787684, 8);
  sqcRYGate(q, -2.4481523793795756, 9);
  sqcRZGate(q, -1.6576259439889867, 9);
  sqcRYGate(q, 0.028954119561246723, 10);
  sqcRZGate(q, -0.46235761014220483, 10);
  sqcRYGate(q, 0.9186342041078094, 11);
  sqcRZGate(q, 0.7440702717022727, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1415923341967105, 0);
  sqcRZGate(q, -0.11941132144826304, 0);
  sqcRYGate(q, 3.141592286211265, 1);
  sqcRZGate(q, -1.4665449761336273, 1);
  sqcRYGate(q, 3.1415917823617314, 2);
  sqcRZGate(q, 2.9495365579822956, 2);
  sqcRYGate(q, -3.1415923799375705, 3);
  sqcRZGate(q, -0.283567612182007, 3);
  sqcRYGate(q, -3.141592518021824, 4);
  sqcRZGate(q, -2.6152652763160438, 4);
  sqcRYGate(q, 3.141592640995899, 5);
  sqcRZGate(q, 0.19584081737235073, 5);
  sqcRYGate(q, -3.141592144423908, 6);
  sqcRZGate(q, -1.2146090199865514, 6);
  sqcRYGate(q, -1.5708031250768402, 7);
  sqcRZGate(q, 3.1415925553860724, 7);
  sqcRYGate(q, -3.141592630083033, 8);
  sqcRZGate(q, -0.17897821711997608, 8);
  sqcRYGate(q, 1.0397368166437104e-06, 9);
  sqcRZGate(q, -3.054671975360259, 9);
  sqcRYGate(q, 8.72271459506635e-07, 10);
  sqcRZGate(q, 3.0616992001342007, 10);
  sqcRYGate(q, -1.204101074079249e-06, 11);
  sqcRZGate(q, 0.8269199700736394, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5706264600065045, 0);
  sqcRZGate(q, -2.0389153629773156, 0);
  sqcRYGate(q, -1.5708339710011892, 1);
  sqcRZGate(q, -1.8139752840003345, 1);
  sqcRYGate(q, 1.5706267318578373, 2);
  sqcRZGate(q, 1.9924910121921116, 2);
  sqcRYGate(q, -1.5707467217475495, 3);
  sqcRZGate(q, 1.430834632295595, 3);
  sqcRYGate(q, -1.5709658214755589, 4);
  sqcRZGate(q, -1.646623980278898, 4);
  sqcRYGate(q, 3.1841799156495654e-05, 5);
  sqcRZGate(q, 1.090477509341901, 5);
  sqcRYGate(q, 1.5709659091019939, 6);
  sqcRZGate(q, -2.600149842174441, 6);
  sqcRYGate(q, 2.2441710880102415, 7);
  sqcRZGate(q, -1.5707920148822385, 7);
  sqcRYGate(q, 1.5706317603392106, 8);
  sqcRZGate(q, 1.7054774015638543, 8);
  sqcRYGate(q, -1.5707796483260337, 9);
  sqcRZGate(q, 0.3546699734922987, 9);
  sqcRYGate(q, -1.570971870531614, 10);
  sqcRZGate(q, -1.0101369805846188, 10);
  sqcRYGate(q, 1.5708100347745573, 11);
  sqcRZGate(q, -0.5018730017247315, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1415924234617107, 0);
  sqcRZGate(q, 3.0619444097430932, 0);
  sqcRYGate(q, 3.141589110108977, 1);
  sqcRZGate(q, 1.715798370812521, 1);
  sqcRYGate(q, -3.1415925649209027, 2);
  sqcRZGate(q, 0.8101577645571173, 2);
  sqcRYGate(q, 3.1415894648911507, 3);
  sqcRZGate(q, 1.8190161101050097, 3);
  sqcRYGate(q, -3.141592191114326, 4);
  sqcRZGate(q, -2.82902538453906, 4);
  sqcRYGate(q, -4.298873612640364e-06, 5);
  sqcRZGate(q, 2.023015368945064, 5);
  sqcRYGate(q, -3.141592296803004, 6);
  sqcRZGate(q, -0.6409677332266734, 6);
  sqcRYGate(q, -1.5707946577530592, 7);
  sqcRZGate(q, -2.753404474014688, 7);
  sqcRYGate(q, 3.1415923808105597, 8);
  sqcRZGate(q, 0.5230839547136307, 8);
  sqcRYGate(q, -5.178634227234779e-06, 9);
  sqcRZGate(q, 1.604325260053486, 9);
  sqcRYGate(q, -3.1415924863103557, 10);
  sqcRZGate(q, -2.1925222639797073, 10);
  sqcRYGate(q, -3.1415876454386567, 11);
  sqcRZGate(q, -1.684473791203852, 11);

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
