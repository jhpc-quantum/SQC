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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.2428790310348088, 0);
  sqcRZGate(q, 0.843452981537661, 0);
  sqcRYGate(q, 0.5507773056041962, 1);
  sqcRZGate(q, -0.37577751107654866, 1);
  sqcRYGate(q, -2.6499692899121143, 2);
  sqcRZGate(q, 2.558783443844628, 2);
  sqcRYGate(q, -2.70326193782227, 3);
  sqcRZGate(q, -2.9309197663346533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6036679830304754, 0);
  sqcRZGate(q, -2.7339880829178473, 0);
  sqcRYGate(q, 0.5859698276787028, 1);
  sqcRZGate(q, 2.4922607704780546, 1);
  sqcRYGate(q, 2.2297495692314433, 2);
  sqcRZGate(q, 0.6762431609174692, 2);
  sqcRYGate(q, -0.02040853541175558, 3);
  sqcRZGate(q, -1.165499527421218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1712152413096861, 0);
  sqcRZGate(q, -2.2196053878202933, 0);
  sqcRYGate(q, 0.27681792850093156, 1);
  sqcRZGate(q, -2.665382510588978, 1);
  sqcRYGate(q, -2.7076327622781653, 2);
  sqcRZGate(q, 1.6062753798703977, 2);
  sqcRYGate(q, -0.821314003615354, 3);
  sqcRZGate(q, -0.5789641647293299, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7877221499604152, 0);
  sqcRZGate(q, -0.5890211919622966, 0);
  sqcRYGate(q, -0.050468974469609316, 1);
  sqcRZGate(q, -0.2380515431233673, 1);
  sqcRYGate(q, 1.8791203260218463, 2);
  sqcRZGate(q, -2.7562631584036636, 2);
  sqcRYGate(q, -0.45441051158731105, 3);
  sqcRZGate(q, 2.937682202562692, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4707746284647023, 0);
  sqcRZGate(q, 1.9180884649292633, 0);
  sqcRYGate(q, 0.5175260960811495, 1);
  sqcRZGate(q, -1.453684217820328, 1);
  sqcRYGate(q, 2.411586717677356, 2);
  sqcRZGate(q, -2.496981856618602, 2);
  sqcRYGate(q, -2.8041331119760833, 3);
  sqcRZGate(q, 2.7418207235027854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1423156177038627, 0);
  sqcRZGate(q, 1.0078125548223038, 0);
  sqcRYGate(q, 2.664304203167442, 1);
  sqcRZGate(q, -2.5525181929224114, 1);
  sqcRYGate(q, -1.2449123387264018, 2);
  sqcRZGate(q, 1.6277762136837488, 2);
  sqcRYGate(q, 0.38971667464300097, 3);
  sqcRZGate(q, 3.090227942981134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.00839976023059241, 0);
  sqcRZGate(q, 0.8614256259252863, 0);
  sqcRYGate(q, -0.39169121366329873, 1);
  sqcRZGate(q, 1.023054221111198, 1);
  sqcRYGate(q, -1.9397717609229668, 2);
  sqcRZGate(q, -2.44127360897114, 2);
  sqcRYGate(q, -0.16308694767520623, 3);
  sqcRZGate(q, -1.9797165948678246, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9113181855169925, 0);
  sqcRZGate(q, -1.118842838121086, 0);
  sqcRYGate(q, 2.0939822079715333, 1);
  sqcRZGate(q, 2.167181371802535, 1);
  sqcRYGate(q, 0.35166976830425195, 2);
  sqcRZGate(q, -0.5216456795592972, 2);
  sqcRYGate(q, 1.82107959849461, 3);
  sqcRZGate(q, 0.09806693274935574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.051348713143284, 0);
  sqcRZGate(q, -0.10868485477766798, 0);
  sqcRYGate(q, -1.8987302457412132, 1);
  sqcRZGate(q, 0.6076660802065655, 1);
  sqcRYGate(q, -0.044661878644640766, 2);
  sqcRZGate(q, 0.7361948181279657, 2);
  sqcRYGate(q, -1.5692105712974938, 3);
  sqcRZGate(q, -2.308265570192274, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3702635278799482, 0);
  sqcRZGate(q, 0.4083006956892547, 0);
  sqcRYGate(q, -0.3747390093777574, 1);
  sqcRZGate(q, -2.1627350450172935, 1);
  sqcRYGate(q, -0.30158381843860127, 2);
  sqcRZGate(q, -1.4452650569581522, 2);
  sqcRYGate(q, -1.1220816664500495, 3);
  sqcRZGate(q, -1.2694517050285752, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.074935683555842, 0);
  sqcRZGate(q, 0.766038965074836, 0);
  sqcRYGate(q, 0.015683272375200286, 1);
  sqcRZGate(q, 0.3612181697892405, 1);
  sqcRYGate(q, 3.1051267165082295, 2);
  sqcRZGate(q, -1.646621609239305, 2);
  sqcRYGate(q, 0.29373451341317, 3);
  sqcRZGate(q, -2.277541558932236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7613708987061247, 0);
  sqcRZGate(q, 2.2310677077879273, 0);
  sqcRYGate(q, 0.41131886671061224, 1);
  sqcRZGate(q, -1.7762614282274019, 1);
  sqcRYGate(q, 2.9292123452290966, 2);
  sqcRZGate(q, 2.1288251408951266, 2);
  sqcRYGate(q, 2.9916138268430976, 3);
  sqcRZGate(q, 1.9756327875130784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0292571373780603, 0);
  sqcRZGate(q, 0.10245600757158879, 0);
  sqcRYGate(q, -2.69278266648528, 1);
  sqcRZGate(q, 0.8889959225166376, 1);
  sqcRYGate(q, -2.9723708757087723, 2);
  sqcRZGate(q, 0.5601730392285991, 2);
  sqcRYGate(q, 0.06245936115240771, 3);
  sqcRZGate(q, 1.6507967298866344, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.04371008687669944, 0);
  sqcRZGate(q, 1.4371277104755678, 0);
  sqcRYGate(q, 0.2568055210896414, 1);
  sqcRZGate(q, 3.0866528086328855, 1);
  sqcRYGate(q, -2.1660821395063454, 2);
  sqcRZGate(q, 1.4781372325628772, 2);
  sqcRYGate(q, 1.0104943174363885, 3);
  sqcRZGate(q, -1.1818255616160942, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.949604705634364, 0);
  sqcRZGate(q, 0.682639382748202, 0);
  sqcRYGate(q, 2.4733766001046593, 1);
  sqcRZGate(q, 2.768951669129716, 1);
  sqcRYGate(q, -2.8012196545274297, 2);
  sqcRZGate(q, -1.877810540844084, 2);
  sqcRYGate(q, -0.22996681429061727, 3);
  sqcRZGate(q, 1.8147541384452506, 3);

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
