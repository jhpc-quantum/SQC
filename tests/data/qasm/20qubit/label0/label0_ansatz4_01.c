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

  sqcRYGate(q, -3.087201024876412, 0);
  sqcRZGate(q, 2.2495629041887386, 0);
  sqcRYGate(q, 1.6009214969324832, 1);
  sqcRZGate(q, -0.22739426211591085, 1);
  sqcRYGate(q, 2.760324848844826, 2);
  sqcRZGate(q, 0.3912126266785032, 2);
  sqcRYGate(q, -1.5221889396587016, 3);
  sqcRZGate(q, 2.7869195213767277, 3);
  sqcRYGate(q, 3.1046555644508484, 4);
  sqcRZGate(q, -1.4548352281208128, 4);
  sqcRYGate(q, 2.953611650326744, 5);
  sqcRZGate(q, 1.1293203159222127, 5);
  sqcRYGate(q, 1.42350034464961, 6);
  sqcRZGate(q, 0.04456853572612473, 6);
  sqcRYGate(q, -2.706518764610176, 7);
  sqcRZGate(q, -2.475097886759093, 7);
  sqcRYGate(q, 0.04224408941058241, 8);
  sqcRZGate(q, -2.9855299919608105, 8);
  sqcRYGate(q, 0.053901084394001764, 9);
  sqcRZGate(q, -0.5296771720971112, 9);
  sqcRYGate(q, -2.6828418628881305, 10);
  sqcRZGate(q, -2.9327099889610126, 10);
  sqcRYGate(q, -0.5539244185753196, 11);
  sqcRZGate(q, 2.7548003375259786, 11);
  sqcRYGate(q, -3.1412932877829975, 12);
  sqcRZGate(q, -0.6517473246660773, 12);
  sqcRYGate(q, 3.1134025288926472, 13);
  sqcRZGate(q, -1.0340969068769805, 13);
  sqcRYGate(q, -2.1412175443236485, 14);
  sqcRZGate(q, 0.006720936817572465, 14);
  sqcRYGate(q, -0.273947351981041, 15);
  sqcRZGate(q, -0.01742228188339645, 15);
  sqcRYGate(q, 0.00025549688573534013, 16);
  sqcRZGate(q, 1.1172063109166066, 16);
  sqcRYGate(q, -3.131592881073913, 17);
  sqcRZGate(q, 1.7673438062192801, 17);
  sqcRYGate(q, 1.5950162328077768, 18);
  sqcRZGate(q, 1.1998771176379344, 18);
  sqcRYGate(q, -2.9673412137271304, 19);
  sqcRZGate(q, -1.6646135197087337, 19);
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
  sqcRYGate(q, -0.8784597572466938, 0);
  sqcRZGate(q, 3.139126093698655, 0);
  sqcRYGate(q, -1.3501252001549284, 1);
  sqcRZGate(q, -0.8197465150439331, 1);
  sqcRYGate(q, 0.032828539339989984, 2);
  sqcRZGate(q, -0.4285301426948645, 2);
  sqcRYGate(q, -0.024230729158585262, 3);
  sqcRZGate(q, -0.5055172593538834, 3);
  sqcRYGate(q, 3.141031441838987, 4);
  sqcRZGate(q, 0.01549619688547923, 4);
  sqcRYGate(q, -3.141436531981433, 5);
  sqcRZGate(q, 2.857352946646932, 5);
  sqcRYGate(q, -1.730780521738369, 6);
  sqcRZGate(q, -0.7908335233303365, 6);
  sqcRYGate(q, -1.26049081873059, 7);
  sqcRZGate(q, -1.696648152580021, 7);
  sqcRYGate(q, -2.260236203235911, 8);
  sqcRZGate(q, 0.1752144998681144, 8);
  sqcRYGate(q, -0.3438617851259025, 9);
  sqcRZGate(q, -1.662422835707497, 9);
  sqcRYGate(q, 0.38498447464188223, 10);
  sqcRZGate(q, -1.6537441422231778, 10);
  sqcRYGate(q, 0.6040837260044201, 11);
  sqcRZGate(q, -0.5706553075847154, 11);
  sqcRYGate(q, 1.5987517554046766, 12);
  sqcRZGate(q, 3.140934974401774, 12);
  sqcRYGate(q, 0.2585711925536325, 13);
  sqcRZGate(q, -3.063633640588912, 13);
  sqcRYGate(q, 0.9724239743371847, 14);
  sqcRZGate(q, 1.2290505034592318, 14);
  sqcRYGate(q, -2.9855415724849252, 15);
  sqcRZGate(q, 1.9242123791123937, 15);
  sqcRYGate(q, -1.5907227480391364, 16);
  sqcRZGate(q, -1.5783093474654524, 16);
  sqcRYGate(q, 0.34274950523016395, 17);
  sqcRZGate(q, 3.131633909250909, 17);
  sqcRYGate(q, 3.0627585065239504, 18);
  sqcRZGate(q, -1.1379634805857384, 18);
  sqcRYGate(q, -2.9626883943254434, 19);
  sqcRZGate(q, -2.7872004548159444, 19);
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
  sqcRYGate(q, 0.8962532942268114, 0);
  sqcRZGate(q, -0.806085930897, 0);
  sqcRYGate(q, -2.6021234971747145, 1);
  sqcRZGate(q, 1.494136063092461, 1);
  sqcRYGate(q, 0.018697536886340897, 2);
  sqcRZGate(q, 2.689327123611498, 2);
  sqcRYGate(q, 1.5759854411439136, 3);
  sqcRZGate(q, -1.7203081615705273, 3);
  sqcRYGate(q, 1.8697307531736875, 4);
  sqcRZGate(q, -1.606830823333599, 4);
  sqcRYGate(q, 2.6988582898955498, 5);
  sqcRZGate(q, -0.8080049918828899, 5);
  sqcRYGate(q, 3.0908893588628445, 6);
  sqcRZGate(q, -2.575349172879796, 6);
  sqcRYGate(q, 1.223316947710738, 7);
  sqcRZGate(q, -2.6380127350375955, 7);
  sqcRYGate(q, -1.2971992436965483, 8);
  sqcRZGate(q, -3.129344945235483, 8);
  sqcRYGate(q, -1.5399532723992977, 9);
  sqcRZGate(q, -3.0881571521301394, 9);
  sqcRYGate(q, -0.3135281142934976, 10);
  sqcRZGate(q, 1.243210105560428, 10);
  sqcRYGate(q, 3.102340580686863, 11);
  sqcRZGate(q, -1.3540485181665454, 11);
  sqcRYGate(q, -1.5402398195917852, 12);
  sqcRZGate(q, 0.19992786561169582, 12);
  sqcRYGate(q, 1.551837831825849, 13);
  sqcRZGate(q, -2.244111189381843, 13);
  sqcRYGate(q, 0.08628551155502653, 14);
  sqcRZGate(q, 1.5996309081382618, 14);
  sqcRYGate(q, 2.881701819400618, 15);
  sqcRZGate(q, -1.4854151185844338, 15);
  sqcRYGate(q, 2.449558423673698, 16);
  sqcRZGate(q, -0.008243343664708469, 16);
  sqcRYGate(q, 3.141481828313955, 17);
  sqcRZGate(q, 1.919248296523078, 17);
  sqcRYGate(q, -1.570019469506366, 18);
  sqcRZGate(q, -1.5750091708599188, 18);
  sqcRYGate(q, -3.1415059777998944, 19);
  sqcRZGate(q, 0.33505521166614377, 19);
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
  sqcRYGate(q, -3.1403014339698245, 0);
  sqcRZGate(q, -1.0027379880919067, 0);
  sqcRYGate(q, -1.5284726882691357, 1);
  sqcRZGate(q, 3.0879903810071183, 1);
  sqcRYGate(q, -3.115984194272147, 2);
  sqcRZGate(q, 2.5527112885846663, 2);
  sqcRYGate(q, 2.5732177539038474, 3);
  sqcRZGate(q, -2.8297173785995904, 3);
  sqcRYGate(q, 3.1385681994353924, 4);
  sqcRZGate(q, 0.5755667120725128, 4);
  sqcRYGate(q, 3.138531135792311, 5);
  sqcRZGate(q, 1.7193142492687112, 5);
  sqcRYGate(q, -3.141119218891803, 6);
  sqcRZGate(q, 2.431695606239436, 6);
  sqcRYGate(q, -3.139485369753592, 7);
  sqcRZGate(q, -2.513963598015827, 7);
  sqcRYGate(q, 1.3885555315062599, 8);
  sqcRZGate(q, -1.6629754331398265, 8);
  sqcRYGate(q, -1.7900942988239348, 9);
  sqcRZGate(q, 0.5531188400377473, 9);
  sqcRYGate(q, -3.1411090454682506, 10);
  sqcRZGate(q, -0.48646508093867086, 10);
  sqcRYGate(q, -0.0015680616523007763, 11);
  sqcRZGate(q, -2.9565720005091016, 11);
  sqcRYGate(q, -0.01265280623484344, 12);
  sqcRZGate(q, -1.7663499016517983, 12);
  sqcRYGate(q, -3.1336406529264362, 13);
  sqcRZGate(q, -0.672465927624425, 13);
  sqcRYGate(q, 2.9155472596513334, 14);
  sqcRZGate(q, 1.6032337572792787, 14);
  sqcRYGate(q, -0.0681177703851592, 15);
  sqcRZGate(q, -1.627167685177096, 15);
  sqcRYGate(q, -1.5856584846099526, 16);
  sqcRZGate(q, 0.02460162468102478, 16);
  sqcRYGate(q, 3.135108657919134, 17);
  sqcRZGate(q, 0.33350148653752615, 17);
  sqcRYGate(q, -1.584103838104956, 18);
  sqcRZGate(q, 0.023118374982100676, 18);
  sqcRYGate(q, 3.1401237995383044, 19);
  sqcRZGate(q, 1.5491908846289428, 19);
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
  sqcRYGate(q, 1.5848048732176157, 0);
  sqcRZGate(q, 3.136656734605606, 0);
  sqcRYGate(q, -1.6125271777749457, 1);
  sqcRZGate(q, -3.1403168403715602, 1);
  sqcRYGate(q, -1.6868586255789637, 2);
  sqcRZGate(q, -0.0261834208211047, 2);
  sqcRYGate(q, 1.5850859584453483, 3);
  sqcRZGate(q, 1.7704120468275955, 3);
  sqcRYGate(q, 1.975206939216699, 4);
  sqcRZGate(q, 1.9162211163920126, 4);
  sqcRYGate(q, -1.2461455257702214, 5);
  sqcRZGate(q, 0.22000957864934478, 5);
  sqcRYGate(q, 1.631292668074426, 6);
  sqcRZGate(q, -0.4236827780219947, 6);
  sqcRYGate(q, -3.0556492317115804, 7);
  sqcRZGate(q, -1.123517061622204, 7);
  sqcRYGate(q, 1.5107321415726434, 8);
  sqcRZGate(q, 1.374853264919917, 8);
  sqcRYGate(q, -0.14757368635057766, 9);
  sqcRZGate(q, -2.9356538216618455, 9);
  sqcRYGate(q, 1.5360580717237058, 10);
  sqcRZGate(q, 2.9368523257535424, 10);
  sqcRYGate(q, -1.5601564297662684, 11);
  sqcRZGate(q, -3.1127512567284117, 11);
  sqcRYGate(q, 1.5697113103157179, 12);
  sqcRZGate(q, -3.1412631444226315, 12);
  sqcRYGate(q, -1.5406476803925766, 13);
  sqcRZGate(q, 1.5637081695193196, 13);
  sqcRYGate(q, -1.5701017787966214, 14);
  sqcRZGate(q, -0.0017104832501173561, 14);
  sqcRYGate(q, -1.5739699296886571, 15);
  sqcRZGate(q, 0.0007624270995490641, 15);
  sqcRYGate(q, 1.5690142525895565, 16);
  sqcRZGate(q, 0.0026362759401667613, 16);
  sqcRYGate(q, 1.5737151109220058, 17);
  sqcRZGate(q, 0.0016808524636260647, 17);
  sqcRYGate(q, -1.5697371210400881, 18);
  sqcRZGate(q, -3.1405198057236725, 18);
  sqcRYGate(q, -1.5706855359032836, 19);
  sqcRZGate(q, 0.0005079056480248312, 19);

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
