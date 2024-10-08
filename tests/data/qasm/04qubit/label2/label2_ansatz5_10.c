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

  sqcRYGate(q, 1.2141470012282862, 0);
  sqcRYGate(q, 1.3730190244963119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.547820996999804, 0);
  sqcRYGate(q, -0.8239346202721531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8961012394274983, 2);
  sqcRYGate(q, 1.1137329747538052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1490524435943197, 2);
  sqcRYGate(q, 2.9120736597201433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0673324483281195, 1);
  sqcRYGate(q, 2.921932582619949, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.637789044606265, 1);
  sqcRYGate(q, -2.8381952160252855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8740978432188686, 0);
  sqcRYGate(q, 2.2438267664732914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24840890024699236, 0);
  sqcRYGate(q, 2.4022740448535167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5696046023618564, 2);
  sqcRYGate(q, -0.6822414418438484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9273521721149445, 2);
  sqcRYGate(q, -1.0097854615550539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4662060301605511, 1);
  sqcRYGate(q, -2.0638343703898965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7439581291289827, 1);
  sqcRYGate(q, -1.796402269641758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.631153017266457, 0);
  sqcRYGate(q, -2.1307989080476095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4991806181809106, 0);
  sqcRYGate(q, -0.8916836963799522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3932163320266002, 2);
  sqcRYGate(q, 1.4962186543546663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4314750378765693, 2);
  sqcRYGate(q, 0.6529032471742611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6960361197139397, 1);
  sqcRYGate(q, 0.16310278401568545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0955801554600932, 1);
  sqcRYGate(q, 1.857388629016996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.775747766371541, 0);
  sqcRYGate(q, -0.9290549069508609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6282884031789386, 0);
  sqcRYGate(q, -1.3490689224108259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.062007138245125, 2);
  sqcRYGate(q, 2.128607129467306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1045062326723283, 2);
  sqcRYGate(q, -0.07479880981707687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.554288229805473, 1);
  sqcRYGate(q, 1.3306312558422568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.56461328848096, 1);
  sqcRYGate(q, -2.1519531890331693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.465388450645777, 0);
  sqcRYGate(q, -0.9867268891001145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.190208059148253, 0);
  sqcRYGate(q, -2.4931112319921294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9303211155986267, 2);
  sqcRYGate(q, 2.103794730864703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.893624337850191, 2);
  sqcRYGate(q, -2.6126738600370314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3744671632086463, 1);
  sqcRYGate(q, -1.5596220460331578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5389550810065682, 1);
  sqcRYGate(q, 3.0211443068441044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1798794008541043, 0);
  sqcRYGate(q, -2.528230044877758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1700049181823244, 0);
  sqcRYGate(q, -0.8249163715541137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1750793890846998, 2);
  sqcRYGate(q, -0.18277917986946865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.020014450186206, 2);
  sqcRYGate(q, 2.1977163160020337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9590276671812017, 1);
  sqcRYGate(q, 3.0573521416605893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9910017151417043, 1);
  sqcRYGate(q, -1.1667474765056725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0868145473273896, 0);
  sqcRYGate(q, 1.1251290423937113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.742451606281098, 0);
  sqcRYGate(q, 0.9448574264347086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9594396574701367, 2);
  sqcRYGate(q, -1.3393900829989374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7327101563030562, 2);
  sqcRYGate(q, -2.5032239574569504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7422500896599695, 1);
  sqcRYGate(q, -1.9665260156563225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9473587348870655, 1);
  sqcRYGate(q, 2.7078611904014247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1056564044939674, 0);
  sqcRYGate(q, -1.446484347325462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.024047963245584114, 0);
  sqcRYGate(q, -1.1921212332665387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.020705738269095, 2);
  sqcRYGate(q, -1.6675712316132358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5865615436809017, 2);
  sqcRYGate(q, 0.5820187079364593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3127827170233863, 1);
  sqcRYGate(q, -0.36003439079222344, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2643810989873328, 1);
  sqcRYGate(q, -2.9888604798330762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16286819333466118, 0);
  sqcRYGate(q, 2.1668461431700763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.053285689551732, 0);
  sqcRYGate(q, -2.4419903609556877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0831202369717428, 2);
  sqcRYGate(q, 1.9093802408290639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0783982082757295, 2);
  sqcRYGate(q, -0.06219907819003243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.400624365091267, 1);
  sqcRYGate(q, 0.9922745210699865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05330947363718597, 1);
  sqcRYGate(q, 2.9997473188229957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1910379972150436, 0);
  sqcRYGate(q, -0.7148326190551735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.767952114024417, 0);
  sqcRYGate(q, 2.667768654795397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4251277489155418, 2);
  sqcRYGate(q, 0.06539276550439153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1110771423234613, 2);
  sqcRYGate(q, -0.43916247304706196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1985438835483304, 1);
  sqcRYGate(q, 2.24054525752683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1224242511568825, 1);
  sqcRYGate(q, 2.991312313388243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.119523197618703, 0);
  sqcRYGate(q, 2.159415876894559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.186825190298656, 0);
  sqcRYGate(q, -1.7888952961777083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.304474915812521, 2);
  sqcRYGate(q, -0.843733147689752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4742126790426597, 2);
  sqcRYGate(q, 2.3900752748212675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48065610394693614, 1);
  sqcRYGate(q, 1.8969913546471497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4150444972443217, 1);
  sqcRYGate(q, -1.6600232757327058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.817870713171934, 0);
  sqcRYGate(q, 1.5762365673050869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5667037497233602, 0);
  sqcRYGate(q, -1.5837357960800347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6558039133317216, 2);
  sqcRYGate(q, -1.4686107377880777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6018681741238411, 2);
  sqcRYGate(q, -0.47371095141632225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1965222049245709, 1);
  sqcRYGate(q, -1.7748892845859245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7371244955331466, 1);
  sqcRYGate(q, -0.7783821364197182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14294127265282786, 0);
  sqcRYGate(q, -2.5865683029531596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4228769295634651, 0);
  sqcRYGate(q, -1.395020285117174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6076025084015613, 2);
  sqcRYGate(q, 1.1703572549669783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7740321404104106, 2);
  sqcRYGate(q, 0.8716359396156588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25234800672501473, 1);
  sqcRYGate(q, -2.2990431649771375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.522662100046821, 1);
  sqcRYGate(q, 2.484718902089912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.795961975834253, 0);
  sqcRYGate(q, -1.7896413981737842, 1);
  sqcRYGate(q, -3.065565452971246, 2);
  sqcRYGate(q, 2.295681399633958, 3);

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
