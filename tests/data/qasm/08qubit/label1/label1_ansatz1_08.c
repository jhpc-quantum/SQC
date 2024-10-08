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

  sqcRYGate(q, 0.05050500056643514, 0);
  sqcRZGate(q, 2.226940093847403, 0);
  sqcRYGate(q, 0.07897999201825434, 1);
  sqcRZGate(q, -2.746586401565586, 1);
  sqcRYGate(q, 0.5833651514909279, 2);
  sqcRZGate(q, 2.4265633361626975, 2);
  sqcRYGate(q, 0.7193508864412252, 3);
  sqcRZGate(q, -2.4492944235645076, 3);
  sqcRYGate(q, -1.8434536255627467, 4);
  sqcRZGate(q, -3.019616380818982, 4);
  sqcRYGate(q, -0.9558841106188023, 5);
  sqcRZGate(q, 2.8984516593364407, 5);
  sqcRYGate(q, -2.547731057065968, 6);
  sqcRZGate(q, 1.2398365766676347, 6);
  sqcRYGate(q, 0.9601578081792986, 7);
  sqcRZGate(q, 0.46886826428030026, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2618386675282944, 0);
  sqcRZGate(q, -2.4776343530882774, 0);
  sqcRYGate(q, 1.4976691809255938, 1);
  sqcRZGate(q, 0.03997258763362731, 1);
  sqcRYGate(q, 0.5837738863500626, 2);
  sqcRZGate(q, -2.0220208181655117, 2);
  sqcRYGate(q, 1.725223461549805, 3);
  sqcRZGate(q, -0.604378019439543, 3);
  sqcRYGate(q, -2.9046981191373473, 4);
  sqcRZGate(q, 1.3242161151456149, 4);
  sqcRYGate(q, 0.04975986669972521, 5);
  sqcRZGate(q, -1.283764555410338, 5);
  sqcRYGate(q, -1.995251818825369, 6);
  sqcRZGate(q, -2.8919774749734315, 6);
  sqcRYGate(q, 1.7165696517319953, 7);
  sqcRZGate(q, -1.9177173625873254, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0524570605773842, 0);
  sqcRZGate(q, -0.40762055512870976, 0);
  sqcRYGate(q, 3.1394171501124184, 1);
  sqcRZGate(q, 2.147069876567593, 1);
  sqcRYGate(q, 3.09049219996324, 2);
  sqcRZGate(q, 2.5109280831201244, 2);
  sqcRYGate(q, -1.9859468741342488, 3);
  sqcRZGate(q, 1.6849532347371001, 3);
  sqcRYGate(q, -2.2765617640781732, 4);
  sqcRZGate(q, 1.600426699404794, 4);
  sqcRYGate(q, 0.0512645430594727, 5);
  sqcRZGate(q, -0.14893508974677727, 5);
  sqcRYGate(q, 3.0971911953450095, 6);
  sqcRZGate(q, -0.90661468041099, 6);
  sqcRYGate(q, -1.5727120449547023, 7);
  sqcRZGate(q, -1.0006046875869798, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.668687770263533, 0);
  sqcRZGate(q, 2.2156072935110918, 0);
  sqcRYGate(q, 0.15268943173616337, 1);
  sqcRZGate(q, -1.8162335830369702, 1);
  sqcRYGate(q, 0.6636387223043165, 2);
  sqcRZGate(q, 3.0791893666517343, 2);
  sqcRYGate(q, 1.5828478469744174, 3);
  sqcRZGate(q, 2.697098384166166, 3);
  sqcRYGate(q, 1.5501792410324633, 4);
  sqcRZGate(q, -1.7854247732533535, 4);
  sqcRYGate(q, -1.066769971448321, 5);
  sqcRZGate(q, -3.0118758091831097, 5);
  sqcRYGate(q, -1.323924190012925, 6);
  sqcRZGate(q, 1.7995951630846516, 6);
  sqcRYGate(q, -1.7281500719173397, 7);
  sqcRZGate(q, -1.497272504181263, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2942702553494385, 0);
  sqcRZGate(q, -2.0866827380852753, 0);
  sqcRYGate(q, -0.11249759441030442, 1);
  sqcRZGate(q, -1.888677733602778, 1);
  sqcRYGate(q, -0.23043329803404872, 2);
  sqcRZGate(q, -2.972301940624124, 2);
  sqcRYGate(q, 2.8172377236859294, 3);
  sqcRZGate(q, -2.752561258314946, 3);
  sqcRYGate(q, 1.1294617830301537, 4);
  sqcRZGate(q, -1.5158076335944362, 4);
  sqcRYGate(q, 0.017940018893491505, 5);
  sqcRZGate(q, -1.5469556460970955, 5);
  sqcRYGate(q, -1.0877117393735047, 6);
  sqcRZGate(q, 3.0208456502109358, 6);
  sqcRYGate(q, 0.1618293636871839, 7);
  sqcRZGate(q, -0.7664690640529734, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7213368696537419, 0);
  sqcRZGate(q, -1.210310465083596, 0);
  sqcRYGate(q, 0.1375007197139615, 1);
  sqcRZGate(q, 1.7849203557251465, 1);
  sqcRYGate(q, -2.655567852690372, 2);
  sqcRZGate(q, 2.1327975010504563, 2);
  sqcRYGate(q, 3.1410606207534024, 3);
  sqcRZGate(q, 0.35024278407150305, 3);
  sqcRYGate(q, -1.4969857787478724, 4);
  sqcRZGate(q, 1.9219685071481427, 4);
  sqcRYGate(q, -1.29868506579948, 5);
  sqcRZGate(q, 0.25495431214465647, 5);
  sqcRYGate(q, 1.1783887712488723, 6);
  sqcRZGate(q, 2.6038318891994865, 6);
  sqcRYGate(q, 0.20783516725858842, 7);
  sqcRZGate(q, -1.9422007331450217, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.805572628819662, 0);
  sqcRZGate(q, -1.6104033150922377, 0);
  sqcRYGate(q, 0.26465986609992276, 1);
  sqcRZGate(q, -0.6829203748300413, 1);
  sqcRYGate(q, -2.99768172610482, 2);
  sqcRZGate(q, -0.748864237989533, 2);
  sqcRYGate(q, -1.6316271170398329, 3);
  sqcRZGate(q, 2.8852735559098908, 3);
  sqcRYGate(q, -0.04487793270379719, 4);
  sqcRZGate(q, -1.1935386060949016, 4);
  sqcRYGate(q, -0.6158592567235782, 5);
  sqcRZGate(q, 0.9443844741332832, 5);
  sqcRYGate(q, -1.6194801710535431, 6);
  sqcRZGate(q, 2.537568101258819, 6);
  sqcRYGate(q, 2.328579773985826, 7);
  sqcRZGate(q, 0.7298938048634646, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9638271695963139, 0);
  sqcRZGate(q, -2.352958487009271, 0);
  sqcRYGate(q, -0.0870695084133315, 1);
  sqcRZGate(q, -2.8879306524598793, 1);
  sqcRYGate(q, -1.6212622343946705, 2);
  sqcRZGate(q, 1.9313603799315093, 2);
  sqcRYGate(q, -1.3665918544262077, 3);
  sqcRZGate(q, -1.952232944174936, 3);
  sqcRYGate(q, -3.0367652143044053, 4);
  sqcRZGate(q, 0.0643543361055514, 4);
  sqcRYGate(q, 1.9081994814823615, 5);
  sqcRZGate(q, 2.4614585367911865, 5);
  sqcRYGate(q, -0.38115916980899706, 6);
  sqcRZGate(q, -1.0016231843645294, 6);
  sqcRYGate(q, 0.5719228000772718, 7);
  sqcRZGate(q, 0.5893038287797161, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.227546079135916, 0);
  sqcRZGate(q, 0.25660309034790263, 0);
  sqcRYGate(q, -1.7167017912691878, 1);
  sqcRZGate(q, 3.091957440170566, 1);
  sqcRYGate(q, -2.911765951028619, 2);
  sqcRZGate(q, -1.8778987935703382, 2);
  sqcRYGate(q, 0.13432503472807603, 3);
  sqcRZGate(q, 1.8301185994257878, 3);
  sqcRYGate(q, 2.1722332417247765, 4);
  sqcRZGate(q, -3.132773484854968, 4);
  sqcRYGate(q, -0.22817849377399002, 5);
  sqcRZGate(q, -0.6130041851184846, 5);
  sqcRYGate(q, -2.821794334439658, 6);
  sqcRZGate(q, 1.494313011511128, 6);
  sqcRYGate(q, -1.6537138663353617, 7);
  sqcRZGate(q, -0.6661213240062449, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.011051668978054811, 0);
  sqcRZGate(q, -1.846515021822417, 0);
  sqcRYGate(q, -2.367156222283833, 1);
  sqcRZGate(q, 2.2669341445326214, 1);
  sqcRYGate(q, -3.0508494344532635, 2);
  sqcRZGate(q, -0.02158124485237778, 2);
  sqcRYGate(q, -0.10581850113376666, 3);
  sqcRZGate(q, -2.0590099859935362, 3);
  sqcRYGate(q, -3.075895334682544, 4);
  sqcRZGate(q, -0.041275639749537525, 4);
  sqcRYGate(q, -0.015268187307263025, 5);
  sqcRZGate(q, 0.6237144936970602, 5);
  sqcRYGate(q, -1.1695712801328402, 6);
  sqcRZGate(q, 1.3037439721837325, 6);
  sqcRYGate(q, -1.6548048743424637, 7);
  sqcRZGate(q, 0.6513510525035375, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.154956494616033, 0);
  sqcRZGate(q, 1.1683927803409968, 0);
  sqcRYGate(q, 2.894736906248516, 1);
  sqcRZGate(q, 0.7146312616236701, 1);
  sqcRYGate(q, -3.130615775769558, 2);
  sqcRZGate(q, -0.910473926750282, 2);
  sqcRYGate(q, -0.23277025858260458, 3);
  sqcRZGate(q, -0.7100976255302399, 3);
  sqcRYGate(q, -0.9559365152945718, 4);
  sqcRZGate(q, 1.8328726048862254, 4);
  sqcRYGate(q, 0.1376544154566511, 5);
  sqcRZGate(q, 1.6844532668834158, 5);
  sqcRYGate(q, -2.9028165103612467, 6);
  sqcRZGate(q, 0.00439088340597138, 6);
  sqcRYGate(q, -0.9332924127562308, 7);
  sqcRZGate(q, 3.072228865228835, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.018697228776281882, 0);
  sqcRZGate(q, 1.3948473371256607, 0);
  sqcRYGate(q, -1.5611489979764568, 1);
  sqcRZGate(q, 0.5322576211407287, 1);
  sqcRYGate(q, -1.530149387262859, 2);
  sqcRZGate(q, -2.285268100669682, 2);
  sqcRYGate(q, -3.099400825265807, 3);
  sqcRZGate(q, -0.21432363563740842, 3);
  sqcRYGate(q, 2.5472607863529664, 4);
  sqcRZGate(q, -1.8719573778946106, 4);
  sqcRYGate(q, -2.9182087521665596, 5);
  sqcRZGate(q, -0.8934503942331187, 5);
  sqcRYGate(q, -1.5386517367897088, 6);
  sqcRZGate(q, -2.408269988971695, 6);
  sqcRYGate(q, -1.576341706839206, 7);
  sqcRZGate(q, 1.6677254610916106, 7);

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
