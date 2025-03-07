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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.570172970167553, 0);
  sqcRZGate(q, 1.570365663474253, 0);
  sqcRYGate(q, -0.2402238536657979, 1);
  sqcRZGate(q, -0.16763842919422753, 1);
  sqcRYGate(q, 1.3448617150250626, 2);
  sqcRZGate(q, 2.3705473917587017, 2);
  sqcRYGate(q, -0.0011518479573388233, 3);
  sqcRZGate(q, -1.3208427283610202, 3);
  sqcRYGate(q, -1.5703763527545065, 4);
  sqcRZGate(q, -1.568443675838739, 4);
  sqcRYGate(q, 3.1394485582179024, 5);
  sqcRZGate(q, 0.938236235758131, 5);
  sqcRYGate(q, -1.5693540771109245, 6);
  sqcRZGate(q, -1.5977712116599787, 6);
  sqcRYGate(q, -1.564723822225468, 7);
  sqcRZGate(q, 0.00046964887902556265, 7);
  sqcRYGate(q, -3.140970170686329, 8);
  sqcRZGate(q, -3.068217980666198, 8);
  sqcRYGate(q, 0.22149182039051052, 9);
  sqcRZGate(q, 3.1393231222165974, 9);
  sqcRYGate(q, 1.5704647984234414, 10);
  sqcRZGate(q, 1.558521932123213, 10);
  sqcRYGate(q, -1.5702357526671147, 11);
  sqcRZGate(q, -1.8853981936814348, 11);
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
  sqcRYGate(q, -1.525302248324043, 0);
  sqcRZGate(q, -0.00027542520145384947, 0);
  sqcRYGate(q, -0.0002778576622333162, 1);
  sqcRZGate(q, -1.4244296686703652, 1);
  sqcRYGate(q, 3.1413324410411816, 2);
  sqcRZGate(q, 0.8475677227541337, 2);
  sqcRYGate(q, -3.1409737082324893, 3);
  sqcRZGate(q, 2.2226950717476184, 3);
  sqcRYGate(q, 5.6975748307899236e-05, 4);
  sqcRZGate(q, -0.02378118651212767, 4);
  sqcRYGate(q, 2.8158409853110085, 5);
  sqcRZGate(q, 2.989666677186314, 5);
  sqcRYGate(q, -1.6393539184510848, 6);
  sqcRZGate(q, -0.35175774737816484, 6);
  sqcRYGate(q, -1.2151334385613886, 7);
  sqcRZGate(q, 1.5329453410099558, 7);
  sqcRYGate(q, -3.128340566049588, 8);
  sqcRZGate(q, 1.707668633040948, 8);
  sqcRYGate(q, -1.5926392448052757, 9);
  sqcRZGate(q, -2.9485905515686857, 9);
  sqcRYGate(q, -1.5469724499894988, 10);
  sqcRZGate(q, 2.317900476927193, 10);
  sqcRYGate(q, -1.1696639370821407, 11);
  sqcRZGate(q, 1.5772743193332204, 11);
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
  sqcRYGate(q, -1.1862456157203107, 0);
  sqcRZGate(q, 0.8254133057149017, 0);
  sqcRYGate(q, -1.6397946411820272, 1);
  sqcRZGate(q, 1.1489424115211375, 1);
  sqcRYGate(q, -1.3136382743466128, 2);
  sqcRZGate(q, -1.586938404032268, 2);
  sqcRYGate(q, -0.24820853259415276, 3);
  sqcRZGate(q, -3.1242704141149673, 3);
  sqcRYGate(q, 1.5710371861976504, 4);
  sqcRZGate(q, -1.5679673054595262, 4);
  sqcRYGate(q, 0.03852260253655615, 5);
  sqcRZGate(q, 0.24440121207094337, 5);
  sqcRYGate(q, -2.798714466564666, 6);
  sqcRZGate(q, -0.4599636817725443, 6);
  sqcRYGate(q, -0.03468819788276267, 7);
  sqcRZGate(q, 0.6874345442365052, 7);
  sqcRYGate(q, -0.31319555153422063, 8);
  sqcRZGate(q, -1.3046318489444801, 8);
  sqcRYGate(q, 0.026048762413450888, 9);
  sqcRZGate(q, 2.7352490956352495, 9);
  sqcRYGate(q, 3.090491695312081, 10);
  sqcRZGate(q, 0.8916195714871114, 10);
  sqcRYGate(q, 0.8774822754335704, 11);
  sqcRZGate(q, 2.0583819802679955, 11);
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
  sqcRYGate(q, 3.0017306525252825, 0);
  sqcRZGate(q, -2.3126108557454836, 0);
  sqcRYGate(q, -0.008966480350586004, 1);
  sqcRZGate(q, -2.607171174174272, 1);
  sqcRYGate(q, -0.7064506909074191, 2);
  sqcRZGate(q, 1.2557878409249266, 2);
  sqcRYGate(q, -1.57167505374216, 3);
  sqcRZGate(q, -0.9540760786147706, 3);
  sqcRYGate(q, -1.5732447412693582, 4);
  sqcRZGate(q, -3.140834420852657, 4);
  sqcRYGate(q, 3.1413294218340617, 5);
  sqcRZGate(q, 1.6700866670506904, 5);
  sqcRYGate(q, 0.014621577538773373, 6);
  sqcRZGate(q, 0.4625733452894841, 6);
  sqcRYGate(q, -0.005844867451552992, 7);
  sqcRZGate(q, -0.6503243187680104, 7);
  sqcRYGate(q, -3.13402383183576, 8);
  sqcRZGate(q, 0.4937479614156705, 8);
  sqcRYGate(q, 0.0016004165024740623, 9);
  sqcRZGate(q, 0.18690038693832545, 9);
  sqcRYGate(q, 0.00890805593661347, 10);
  sqcRZGate(q, -0.8150039556918767, 10);
  sqcRYGate(q, -1.1495855627123923, 11);
  sqcRZGate(q, 2.21090275913027, 11);
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
  sqcRYGate(q, -0.11389811438964971, 0);
  sqcRZGate(q, -1.581240115398857, 0);
  sqcRYGate(q, 0.1239377834499269, 1);
  sqcRZGate(q, -0.5684971931717707, 1);
  sqcRYGate(q, -0.009177223624256214, 2);
  sqcRZGate(q, 1.8891502991479285, 2);
  sqcRYGate(q, 0.003711918605491249, 3);
  sqcRZGate(q, -1.1440722202251352, 3);
  sqcRYGate(q, -1.5706298925592872, 4);
  sqcRZGate(q, -3.1323425737455985, 4);
  sqcRYGate(q, -1.569180214161345, 5);
  sqcRZGate(q, -2.0337804817042766, 5);
  sqcRYGate(q, -1.5703905362030914, 6);
  sqcRZGate(q, -0.15091301934463822, 6);
  sqcRYGate(q, -1.5724532222779999, 7);
  sqcRZGate(q, -0.7783232163801498, 7);
  sqcRYGate(q, 3.1338114978937104, 8);
  sqcRZGate(q, 1.7527785181012179, 8);
  sqcRYGate(q, -1.6101066162167694, 9);
  sqcRZGate(q, -2.50931373338525, 9);
  sqcRYGate(q, -1.6229234095336642, 10);
  sqcRZGate(q, -3.1311069986708544, 10);
  sqcRYGate(q, -2.0348070445613056, 11);
  sqcRZGate(q, -2.3707423180354343, 11);
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
  sqcRYGate(q, -1.6727604150447237, 0);
  sqcRZGate(q, -0.08363322208949688, 0);
  sqcRYGate(q, 3.132326364315254, 1);
  sqcRZGate(q, 1.106892669166993, 1);
  sqcRYGate(q, -1.570845861653809, 2);
  sqcRZGate(q, 0.001512396021781548, 2);
  sqcRYGate(q, 0.00029184529728376314, 3);
  sqcRZGate(q, -2.6214613744376716, 3);
  sqcRYGate(q, 0.4719887814202153, 4);
  sqcRZGate(q, 1.9971930354407785, 4);
  sqcRYGate(q, 3.1410056608066466, 5);
  sqcRZGate(q, 0.08256120037235881, 5);
  sqcRYGate(q, 3.1187259699916132, 6);
  sqcRZGate(q, 1.145163263169608, 6);
  sqcRYGate(q, 0.0005982890013749298, 7);
  sqcRZGate(q, 2.836545862332864, 7);
  sqcRYGate(q, -3.1085891036612674, 8);
  sqcRZGate(q, -2.094755762163886, 8);
  sqcRYGate(q, -0.0015086825579793128, 9);
  sqcRZGate(q, 2.5156887413604143, 9);
  sqcRYGate(q, -1.3224893382211091, 10);
  sqcRZGate(q, -1.6375416989642018, 10);
  sqcRYGate(q, -1.3311769993089282, 11);
  sqcRZGate(q, 0.009016081410963338, 11);
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
  sqcRYGate(q, 1.5648291641152348, 0);
  sqcRZGate(q, 1.5705954660721695, 0);
  sqcRYGate(q, 1.564787897561979, 1);
  sqcRZGate(q, -2.031075765795852, 1);
  sqcRYGate(q, -1.5706006051745949, 2);
  sqcRZGate(q, -0.6364804859159552, 2);
  sqcRYGate(q, 1.5700011572960317, 3);
  sqcRZGate(q, 1.2220401469089754, 3);
  sqcRYGate(q, 3.1412090221141713, 4);
  sqcRZGate(q, 0.43515220225707, 4);
  sqcRYGate(q, -3.1403652621129954, 5);
  sqcRZGate(q, -2.5612281538817925, 5);
  sqcRYGate(q, -3.139564460672662, 6);
  sqcRZGate(q, 1.294292258912658, 6);
  sqcRYGate(q, 3.1413277392076107, 7);
  sqcRZGate(q, 2.0561746371095544, 7);
  sqcRYGate(q, 0.021245690725253397, 8);
  sqcRZGate(q, 1.6284850275953273, 8);
  sqcRYGate(q, 1.5858065832299453, 9);
  sqcRZGate(q, -1.7905097493149764, 9);
  sqcRYGate(q, -1.3399602601353156, 10);
  sqcRZGate(q, 3.1230076533661046, 10);
  sqcRYGate(q, 1.4573628463964123, 11);
  sqcRZGate(q, -0.07440919256850886, 11);
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
  sqcRYGate(q, -1.5681180902172693, 0);
  sqcRZGate(q, -1.5445452245366125, 0);
  sqcRYGate(q, 0.019200716159539926, 1);
  sqcRZGate(q, 2.027771782032314, 1);
  sqcRYGate(q, -3.139175840009945, 2);
  sqcRZGate(q, -2.416954702475016, 2);
  sqcRYGate(q, -3.092204311311193, 3);
  sqcRZGate(q, -2.375810094157695, 3);
  sqcRYGate(q, -1.5713925719270339, 4);
  sqcRZGate(q, -3.1025269957272417, 4);
  sqcRYGate(q, 1.5701055372133819, 5);
  sqcRZGate(q, -1.4185556736160108, 5);
  sqcRYGate(q, -1.5704094431320277, 6);
  sqcRZGate(q, 3.1047764930516966, 6);
  sqcRYGate(q, -1.568034603118158, 7);
  sqcRZGate(q, 0.012508059946193306, 7);
  sqcRYGate(q, -0.0037652606668867605, 8);
  sqcRZGate(q, -2.709525110694653, 8);
  sqcRYGate(q, -3.1408955690230713, 9);
  sqcRZGate(q, -1.6250468650246077, 9);
  sqcRYGate(q, 0.8461783118984201, 10);
  sqcRZGate(q, -1.8875443164627272, 10);
  sqcRYGate(q, -3.0931237241451717, 11);
  sqcRZGate(q, 0.14753699765793568, 11);
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
  sqcRYGate(q, -0.35064921244999514, 0);
  sqcRZGate(q, -3.039842244965054, 0);
  sqcRYGate(q, -0.35734342347582754, 1);
  sqcRZGate(q, -2.926881613431028, 1);
  sqcRYGate(q, -0.00028492174126577206, 2);
  sqcRZGate(q, -2.939407094745551, 2);
  sqcRYGate(q, 3.1407705284100067, 3);
  sqcRZGate(q, -0.4571982825413619, 3);
  sqcRYGate(q, -0.00012738296179678536, 4);
  sqcRZGate(q, -2.346220968025702, 4);
  sqcRYGate(q, 2.802945454671857e-05, 5);
  sqcRZGate(q, 1.3219427772396983, 5);
  sqcRYGate(q, -1.5361223232683319, 6);
  sqcRZGate(q, 0.007307268539438639, 6);
  sqcRYGate(q, 1.490517185732797, 7);
  sqcRZGate(q, -1.3787144414819243, 7);
  sqcRYGate(q, 1.568649618225904, 8);
  sqcRZGate(q, 0.3550452842031255, 8);
  sqcRYGate(q, -3.117356360707856, 9);
  sqcRZGate(q, -0.8796588547818786, 9);
  sqcRYGate(q, 1.5715912538603158, 10);
  sqcRZGate(q, -1.5537449859341592, 10);
  sqcRYGate(q, -0.14198747130150846, 11);
  sqcRZGate(q, -1.1443543381432981, 11);
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
  sqcRYGate(q, -0.004472052625083656, 0);
  sqcRZGate(q, -1.7032699268189848, 0);
  sqcRYGate(q, 0.08510241363765873, 1);
  sqcRZGate(q, -1.7837939544845538, 1);
  sqcRYGate(q, -1.568946222160422, 2);
  sqcRZGate(q, -3.099839339449323, 2);
  sqcRYGate(q, 1.5812160406491538, 3);
  sqcRZGate(q, -0.005937781840850022, 3);
  sqcRYGate(q, 0.00015957551663969838, 4);
  sqcRZGate(q, 1.8104205511103162, 4);
  sqcRYGate(q, 3.1404251504616276, 5);
  sqcRZGate(q, -0.09169140422975376, 5);
  sqcRYGate(q, -0.03411146789680153, 6);
  sqcRZGate(q, -2.2603307563529316, 6);
  sqcRYGate(q, -3.141100533319552, 7);
  sqcRZGate(q, -2.946679825735908, 7);
  sqcRYGate(q, -3.1282468122083915, 8);
  sqcRZGate(q, 0.35767221130717086, 8);
  sqcRYGate(q, 3.1285569153808828, 9);
  sqcRZGate(q, 0.41546359409856604, 9);
  sqcRYGate(q, -1.5719658214662786, 10);
  sqcRZGate(q, 1.5766477828460717, 10);
  sqcRYGate(q, 3.1410857943968833, 11);
  sqcRZGate(q, -1.5282983741023102, 11);
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
  sqcRYGate(q, 1.5694239161606953, 0);
  sqcRZGate(q, -1.6055756600548758, 0);
  sqcRYGate(q, 1.5676739275820852, 1);
  sqcRZGate(q, -3.1386320027659753, 1);
  sqcRYGate(q, -3.0782771715665196, 2);
  sqcRZGate(q, -1.522382933490527, 2);
  sqcRYGate(q, 0.5258392037098849, 3);
  sqcRZGate(q, -3.1353370966287315, 3);
  sqcRYGate(q, -3.1408014871962684, 4);
  sqcRZGate(q, -1.9736020803949703, 4);
  sqcRYGate(q, 1.5970950224092357, 5);
  sqcRZGate(q, -1.654926074605354, 5);
  sqcRYGate(q, -3.094440493067534, 6);
  sqcRZGate(q, -1.8517563701646644, 6);
  sqcRYGate(q, 1.584508571314334, 7);
  sqcRZGate(q, 1.6229243231558392, 7);
  sqcRYGate(q, -1.6471795973582446, 8);
  sqcRZGate(q, -1.578400538563999, 8);
  sqcRYGate(q, 1.8264529003389915, 9);
  sqcRZGate(q, -1.5468466942291914, 9);
  sqcRYGate(q, 1.5880382649956566, 10);
  sqcRZGate(q, 0.9509083413083821, 10);
  sqcRYGate(q, 3.14157039576958, 11);
  sqcRZGate(q, 1.2785187689955402, 11);
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
  sqcRYGate(q, 0.08779605720154304, 0);
  sqcRZGate(q, -2.2787279278089456, 0);
  sqcRYGate(q, 1.5686385443449433, 1);
  sqcRZGate(q, 3.1407968406860194, 1);
  sqcRYGate(q, 3.035481693115543, 2);
  sqcRZGate(q, -1.9199066077290758, 2);
  sqcRYGate(q, -0.4182340067408515, 3);
  sqcRZGate(q, 3.0927015500182886, 3);
  sqcRYGate(q, -3.1395277619785946, 4);
  sqcRZGate(q, 2.2221405854749268, 4);
  sqcRYGate(q, 0.026068569440492517, 5);
  sqcRZGate(q, -1.4886527599781114, 5);
  sqcRYGate(q, -3.138634463572754, 6);
  sqcRZGate(q, 3.0282088216021266, 6);
  sqcRYGate(q, 0.013390658510203986, 7);
  sqcRZGate(q, 0.014073831137346282, 7);
  sqcRYGate(q, 1.5665032047097116, 8);
  sqcRZGate(q, -1.6545536988554077, 8);
  sqcRYGate(q, -1.5681796248819881, 9);
  sqcRZGate(q, -3.140616750141831, 9);
  sqcRYGate(q, 3.028797016947307, 10);
  sqcRZGate(q, 0.7143694837034342, 10);
  sqcRYGate(q, -0.0004673034400897552, 11);
  sqcRZGate(q, -1.8676536396220023, 11);
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
  sqcRYGate(q, 3.139836296028284, 0);
  sqcRZGate(q, 0.7867120589400267, 0);
  sqcRYGate(q, -1.5725670721854494, 1);
  sqcRZGate(q, 1.4679488172599697, 1);
  sqcRYGate(q, -0.0007643783202451462, 2);
  sqcRZGate(q, -1.2167616844161264, 2);
  sqcRYGate(q, 1.5688313388856236, 3);
  sqcRZGate(q, 1.5458620880104084, 3);
  sqcRYGate(q, -0.0006610852784865173, 4);
  sqcRZGate(q, 1.3204584911779156, 4);
  sqcRYGate(q, -1.547778734419305, 5);
  sqcRZGate(q, -2.1660551333961857, 5);
  sqcRYGate(q, 0.00029108411375002, 6);
  sqcRZGate(q, -2.6341292241317045, 6);
  sqcRYGate(q, -1.5726232585762518, 7);
  sqcRZGate(q, -1.729206918876291, 7);
  sqcRYGate(q, 2.892262796872232, 8);
  sqcRZGate(q, 1.5297038907138554, 8);
  sqcRYGate(q, -1.5705123419390707, 9);
  sqcRZGate(q, -0.03424303225118219, 9);
  sqcRYGate(q, -0.0005022275874964066, 10);
  sqcRZGate(q, -0.08550355593588232, 10);
  sqcRYGate(q, 0.0007123364293921156, 11);
  sqcRZGate(q, 2.8132896922309727, 11);
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
  sqcRYGate(q, -0.05461880862813562, 0);
  sqcRZGate(q, 0.04076821831083776, 0);
  sqcRYGate(q, -1.3866150290706636, 1);
  sqcRZGate(q, -2.6277313021484874, 1);
  sqcRYGate(q, 0.7630958326451489, 2);
  sqcRZGate(q, 3.140838544792804, 2);
  sqcRYGate(q, -0.016279440128408318, 3);
  sqcRZGate(q, 0.8445898178611307, 3);
  sqcRYGate(q, 3.1413617482329763, 4);
  sqcRZGate(q, 2.0398486397998754, 4);
  sqcRYGate(q, 3.141553501432271, 5);
  sqcRZGate(q, 0.9479845621420195, 5);
  sqcRYGate(q, 3.1207436968447255, 6);
  sqcRZGate(q, 1.566981739895346, 6);
  sqcRYGate(q, 0.0002598341460853248, 7);
  sqcRZGate(q, -1.4062986475086483, 7);
  sqcRYGate(q, 0.05089035753928656, 8);
  sqcRZGate(q, -1.6169601796998523, 8);
  sqcRYGate(q, -1.5880030175126603, 9);
  sqcRZGate(q, -3.124288666149223, 9);
  sqcRYGate(q, 1.5682078777253399, 10);
  sqcRZGate(q, -1.5716260592299685, 10);
  sqcRYGate(q, -3.14099962718243, 11);
  sqcRZGate(q, 1.4922552226896642, 11);
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
  sqcRYGate(q, 1.5729354787983931, 0);
  sqcRZGate(q, -1.7579021182847692, 0);
  sqcRYGate(q, -1.5672908868983897, 1);
  sqcRZGate(q, 0.015540855830300484, 1);
  sqcRYGate(q, -1.5705082573787115, 2);
  sqcRZGate(q, -1.5743408739298923, 2);
  sqcRYGate(q, 3.141364626541864, 3);
  sqcRZGate(q, 2.3805355310131318, 3);
  sqcRYGate(q, 0.0013076361862198738, 4);
  sqcRZGate(q, -1.484970228703057, 4);
  sqcRYGate(q, -3.0715318060368717, 5);
  sqcRZGate(q, 0.8758355059546634, 5);
  sqcRYGate(q, 1.5680672227703798, 6);
  sqcRZGate(q, -0.5432097621379929, 6);
  sqcRYGate(q, -1.574109647405543, 7);
  sqcRZGate(q, 0.026356862480878537, 7);
  sqcRYGate(q, -1.566628348946326, 8);
  sqcRZGate(q, -3.141111711682315, 8);
  sqcRYGate(q, -0.15050567406711193, 9);
  sqcRZGate(q, -2.484501008640327, 9);
  sqcRYGate(q, -1.5646472347797566, 10);
  sqcRZGate(q, 0.0041349566936043905, 10);
  sqcRYGate(q, 1.5740675591375994, 11);
  sqcRZGate(q, 3.1413899738036024, 11);
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
  sqcRYGate(q, 0.0013878396271402014, 0);
  sqcRZGate(q, -1.3833539286226957, 0);
  sqcRYGate(q, 0.06560409131815667, 1);
  sqcRZGate(q, 0.7039904765036239, 1);
  sqcRYGate(q, -1.5694972456081409, 2);
  sqcRZGate(q, -1.5770213333932102, 2);
  sqcRYGate(q, -3.1009550846775173, 3);
  sqcRZGate(q, -2.161656317216241, 3);
  sqcRYGate(q, -3.141445000093904, 4);
  sqcRZGate(q, 1.802865129043676, 4);
  sqcRYGate(q, -3.1415103119657757, 5);
  sqcRZGate(q, -0.8849106618557753, 5);
  sqcRYGate(q, -3.1414012453186113, 6);
  sqcRZGate(q, -0.5437254742466209, 6);
  sqcRYGate(q, 0.043165589583301404, 7);
  sqcRZGate(q, 2.452300344258166, 7);
  sqcRYGate(q, -0.28719497869915117, 8);
  sqcRZGate(q, -0.08693893321873031, 8);
  sqcRYGate(q, 3.141409366557992, 9);
  sqcRZGate(q, -2.792223200303603, 9);
  sqcRYGate(q, 0.47787294722079476, 10);
  sqcRZGate(q, -0.0035162876853341517, 10);
  sqcRYGate(q, -1.569935794000231, 11);
  sqcRZGate(q, 2.1649491910623455, 11);
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
  sqcRYGate(q, -1.578492993736938, 0);
  sqcRZGate(q, -0.7052514576737583, 0);
  sqcRYGate(q, 3.1409028230032883, 1);
  sqcRZGate(q, 2.29002909598694, 1);
  sqcRYGate(q, -1.5706142174684619, 2);
  sqcRZGate(q, -1.5690653239922576, 2);
  sqcRYGate(q, 3.1415251198390424, 3);
  sqcRZGate(q, 2.5599542380358247, 3);
  sqcRYGate(q, -3.1083812292421222, 4);
  sqcRZGate(q, 1.2780486065836116, 4);
  sqcRYGate(q, -0.004526430047383735, 5);
  sqcRZGate(q, 0.09559473809717466, 5);
  sqcRYGate(q, -1.5738580767251305, 6);
  sqcRZGate(q, 1.0362538431594812, 6);
  sqcRYGate(q, 3.1405864896900155, 7);
  sqcRZGate(q, -1.3013941156615543, 7);
  sqcRYGate(q, 0.028568747441854114, 8);
  sqcRZGate(q, -1.4863294363915518, 8);
  sqcRYGate(q, 0.0006592028469594169, 9);
  sqcRZGate(q, 1.9563224235636065, 9);
  sqcRYGate(q, 1.5624509761337277, 10);
  sqcRZGate(q, -0.004493145571848906, 10);
  sqcRYGate(q, -3.1349275011545323, 11);
  sqcRZGate(q, 1.4626037636205638, 11);
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
  sqcRYGate(q, -3.1405150923488603, 0);
  sqcRZGate(q, -0.7175186259431737, 0);
  sqcRYGate(q, -1.5696299933187943, 1);
  sqcRZGate(q, 1.1484843205102753, 1);
  sqcRYGate(q, -1.5698136792288615, 2);
  sqcRZGate(q, 1.5484500087468884, 2);
  sqcRYGate(q, -1.570625890323689, 3);
  sqcRZGate(q, -0.12532773850605317, 3);
  sqcRYGate(q, 3.140770173172645, 4);
  sqcRZGate(q, -0.2645367441088027, 4);
  sqcRYGate(q, 0.0018821144611331775, 5);
  sqcRZGate(q, -1.443396548232239, 5);
  sqcRYGate(q, -3.4925826115639325e-06, 6);
  sqcRZGate(q, -1.067355039502468, 6);
  sqcRYGate(q, -0.000878233319309565, 7);
  sqcRZGate(q, -0.9530737106843742, 7);
  sqcRYGate(q, -1.5689082570587363, 8);
  sqcRZGate(q, 0.9813903629386003, 8);
  sqcRYGate(q, 0.01798195390499746, 9);
  sqcRZGate(q, 3.084770989632698, 9);
  sqcRYGate(q, 2.048343719103067, 10);
  sqcRZGate(q, -3.128615631556047, 10);
  sqcRYGate(q, -0.007894667873834967, 11);
  sqcRZGate(q, -2.4122969932670837, 11);
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
  sqcRYGate(q, 1.5437802007337813, 0);
  sqcRZGate(q, -1.203500111433273, 0);
  sqcRYGate(q, -3.130674550929738, 1);
  sqcRZGate(q, 1.2950116145739914, 1);
  sqcRYGate(q, 1.5829539149626646, 2);
  sqcRZGate(q, 0.3669912026069219, 2);
  sqcRYGate(q, -0.006631165780833115, 3);
  sqcRZGate(q, -2.65954170104204, 3);
  sqcRYGate(q, 1.5981862404108713, 4);
  sqcRZGate(q, 1.9380228944828932, 4);
  sqcRYGate(q, 1.5651153948183145, 5);
  sqcRZGate(q, -2.7845150097441342, 5);
  sqcRYGate(q, 1.5707936106247367, 6);
  sqcRZGate(q, 0.3665870419734194, 6);
  sqcRYGate(q, -1.5596902613823795, 7);
  sqcRZGate(q, 1.9478583218638859, 7);
  sqcRYGate(q, -3.1054760444938623, 8);
  sqcRZGate(q, 1.3478927067925754, 8);
  sqcRYGate(q, -1.6011560801338836, 9);
  sqcRZGate(q, 0.3774608210020229, 9);
  sqcRYGate(q, 1.5378786943812235, 10);
  sqcRZGate(q, -1.2039290029316108, 10);
  sqcRYGate(q, -3.095334115784318, 11);
  sqcRZGate(q, -2.743464548568645, 11);

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
